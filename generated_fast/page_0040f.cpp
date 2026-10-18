#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x40f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x40f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_40f(u8* __restrict R,Cpu& c);
u32 page_40f(Cpu& c){return body_40f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_40f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x40f000:goto L40f000;
case 0x40f005:goto L40f005;
case 0x40f006:c.instructions+=1;goto B40f006;
case 0x40f010:goto L40f010;
case 0x40f014:c.instructions+=3;goto B40f014;
case 0x40f016:c.instructions+=2;goto B40f016;
case 0x40f017:c.instructions+=1;goto B40f017;
case 0x40f019:goto L40f019;
case 0x40f01c:c.instructions+=4;goto B40f01c;
case 0x40f01e:c.instructions+=3;goto B40f01e;
case 0x40f025:c.instructions+=2;goto B40f025;
case 0x40f026:c.instructions+=1;goto B40f026;
case 0x40f028:goto L40f028;
case 0x40f02b:c.instructions+=2;goto B40f02b;
case 0x40f02c:c.instructions+=1;goto B40f02c;
case 0x40f031:goto L40f031;
case 0x40f037:c.instructions+=3;goto B40f037;
case 0x40f03a:c.instructions+=2;goto B40f03a;
case 0x40f03c:c.instructions+=1;goto B40f03c;
case 0x40f03e:goto L40f03e;
case 0x40f040:c.instructions+=1;goto B40f040;
case 0x40f045:goto L40f045;
case 0x40f046:c.instructions+=1;goto B40f046;
case 0x40f049:goto L40f049;
case 0x40f04c:c.instructions+=2;goto B40f04c;
case 0x40f04d:c.instructions+=1;goto B40f04d;
case 0x40f052:goto L40f052;
case 0x40f055:c.instructions+=2;goto B40f055;
case 0x40f056:c.instructions+=1;goto B40f056;
case 0x40f059:goto L40f059;
case 0x40f060:goto L40f060;
case 0x40f061:c.instructions+=1;goto B40f061;
case 0x40f070:goto L40f070;
case 0x40f071:c.instructions+=3;goto B40f071;
case 0x40f074:c.instructions+=2;goto B40f074;
case 0x40f078:c.instructions+=1;goto B40f078;
case 0x40f07a:goto L40f07a;
case 0x40f07b:c.instructions+=5;goto B40f07b;
case 0x40f07c:c.instructions+=4;goto B40f07c;
case 0x40f07d:c.instructions+=3;goto B40f07d;
case 0x40f07e:c.instructions+=2;goto B40f07e;
case 0x40f081:c.instructions+=1;goto B40f081;
case 0x40f086:goto L40f086;
case 0x40f08b:c.instructions+=1;goto B40f08b;
case 0x40f090:goto L40f090;
case 0x40f092:c.instructions+=2;goto B40f092;
case 0x40f094:c.instructions+=1;goto B40f094;
case 0x40f096:goto L40f096;
case 0x40f098:c.instructions+=1;goto B40f098;
case 0x40f09d:goto L40f09d;
case 0x40f0a2:c.instructions+=3;goto B40f0a2;
case 0x40f0a3:c.instructions+=2;goto B40f0a3;
case 0x40f0a4:c.instructions+=1;goto B40f0a4;
case 0x40f0a9:goto L40f0a9;
case 0x40f0ac:goto L40f0ac;
case 0x40f0b2:c.instructions+=3;goto B40f0b2;
case 0x40f0b5:c.instructions+=2;goto B40f0b5;
case 0x40f0b6:c.instructions+=1;goto B40f0b6;
case 0x40f0b8:goto L40f0b8;
case 0x40f0b9:c.instructions+=1;goto B40f0b9;
case 0x40f0bb:goto L40f0bb;
case 0x40f0bf:c.instructions+=5;goto B40f0bf;
case 0x40f0c0:c.instructions+=4;goto B40f0c0;
case 0x40f0c1:c.instructions+=3;goto B40f0c1;
case 0x40f0c2:c.instructions+=2;goto B40f0c2;
case 0x40f0c5:c.instructions+=1;goto B40f0c5;
case 0x40f0c6:goto L40f0c6;
case 0x40f0c7:c.instructions+=1;goto B40f0c7;
case 0x40f0d0:goto L40f0d0;
case 0x40f0d1:c.instructions+=8;goto B40f0d1;
case 0x40f0d3:c.instructions+=7;goto B40f0d3;
case 0x40f0d6:c.instructions+=6;goto B40f0d6;
case 0x40f0d9:c.instructions+=5;goto B40f0d9;
case 0x40f0da:c.instructions+=4;goto B40f0da;
case 0x40f0de:c.instructions+=3;goto B40f0de;
case 0x40f0df:c.instructions+=2;goto B40f0df;
case 0x40f0e1:c.instructions+=1;goto B40f0e1;
case 0x40f0e6:goto L40f0e6;
case 0x40f0ea:c.instructions+=25;goto B40f0ea;
case 0x40f0ed:c.instructions+=24;goto B40f0ed;
case 0x40f0f0:c.instructions+=23;goto B40f0f0;
case 0x40f0f2:c.instructions+=22;goto B40f0f2;
case 0x40f0f6:c.instructions+=21;goto B40f0f6;
case 0x40f0fa:c.instructions+=20;goto B40f0fa;
case 0x40f0fd:c.instructions+=19;goto B40f0fd;
case 0x40f101:c.instructions+=18;goto B40f101;
case 0x40f104:c.instructions+=17;goto B40f104;
case 0x40f107:c.instructions+=16;goto B40f107;
case 0x40f10b:c.instructions+=15;goto B40f10b;
case 0x40f10c:c.instructions+=14;goto B40f10c;
case 0x40f114:c.instructions+=13;goto B40f114;
case 0x40f118:c.instructions+=12;goto B40f118;
case 0x40f11c:c.instructions+=11;goto B40f11c;
case 0x40f11f:c.instructions+=10;goto B40f11f;
case 0x40f123:c.instructions+=9;goto B40f123;
case 0x40f126:c.instructions+=8;goto B40f126;
case 0x40f12a:c.instructions+=7;goto B40f12a;
case 0x40f12d:c.instructions+=6;goto B40f12d;
case 0x40f130:c.instructions+=5;goto B40f130;
case 0x40f133:c.instructions+=4;goto B40f133;
case 0x40f136:c.instructions+=3;goto B40f136;
case 0x40f13a:c.instructions+=2;goto B40f13a;
case 0x40f13e:c.instructions+=1;goto B40f13e;
case 0x40f143:goto L40f143;
case 0x40f144:c.instructions+=3;goto B40f144;
case 0x40f146:c.instructions+=2;goto B40f146;
case 0x40f147:c.instructions+=1;goto B40f147;
case 0x40f150:goto L40f150;
case 0x40f152:c.instructions+=4;goto B40f152;
case 0x40f153:c.instructions+=3;goto B40f153;
case 0x40f155:c.instructions+=2;goto B40f155;
case 0x40f157:c.instructions+=1;goto B40f157;
case 0x40f159:goto L40f159;
case 0x40f15a:c.instructions+=2;goto B40f15a;
case 0x40f15d:c.instructions+=1;goto B40f15d;
case 0x40f162:goto L40f162;
case 0x40f167:goto L40f167;
case 0x40f169:c.instructions+=4;goto B40f169;
case 0x40f16c:c.instructions+=3;goto B40f16c;
case 0x40f16d:c.instructions+=2;goto B40f16d;
case 0x40f170:c.instructions+=1;goto B40f170;
case 0x40f172:goto L40f172;
case 0x40f173:c.instructions+=1;goto B40f173;
case 0x40f175:goto L40f175;
case 0x40f176:goto L40f176;
case 0x40f177:c.instructions+=1;goto B40f177;
case 0x40f180:goto L40f180;
case 0x40f181:c.instructions+=25;goto B40f181;
case 0x40f183:c.instructions+=24;goto B40f183;
case 0x40f186:c.instructions+=23;goto B40f186;
case 0x40f188:c.instructions+=22;goto B40f188;
case 0x40f18d:c.instructions+=21;goto B40f18d;
case 0x40f193:c.instructions+=20;goto B40f193;
case 0x40f194:c.instructions+=19;goto B40f194;
case 0x40f19b:c.instructions+=18;goto B40f19b;
case 0x40f1a1:c.instructions+=17;goto B40f1a1;
case 0x40f1a7:c.instructions+=16;goto B40f1a7;
case 0x40f1a9:c.instructions+=15;goto B40f1a9;
case 0x40f1aa:c.instructions+=14;goto B40f1aa;
case 0x40f1ad:c.instructions+=13;goto B40f1ad;
case 0x40f1af:c.instructions+=12;goto B40f1af;
case 0x40f1b0:c.instructions+=11;goto B40f1b0;
case 0x40f1b3:c.instructions+=10;goto B40f1b3;
case 0x40f1b7:c.instructions+=9;goto B40f1b7;
case 0x40f1bb:c.instructions+=8;goto B40f1bb;
case 0x40f1c0:c.instructions+=7;goto B40f1c0;
case 0x40f1c5:c.instructions+=6;goto B40f1c5;
case 0x40f1c8:c.instructions+=5;goto B40f1c8;
case 0x40f1c9:c.instructions+=4;goto B40f1c9;
case 0x40f1cc:c.instructions+=3;goto B40f1cc;
case 0x40f1d4:c.instructions+=2;goto B40f1d4;
case 0x40f1d8:c.instructions+=1;goto B40f1d8;
case 0x40f1da:goto L40f1da;
case 0x40f1e2:goto L40f1e2;
case 0x40f1e6:c.instructions+=1;goto B40f1e6;
case 0x40f1eb:goto L40f1eb;
case 0x40f1f1:c.instructions+=3;goto B40f1f1;
case 0x40f1f3:c.instructions+=2;goto B40f1f3;
case 0x40f1fe:c.instructions+=1;goto B40f1fe;
case 0x40f200:goto L40f200;
case 0x40f203:c.instructions+=1;goto B40f203;
case 0x40f205:goto L40f205;
case 0x40f206:c.instructions+=2;goto B40f206;
case 0x40f20a:c.instructions+=1;goto B40f20a;
case 0x40f20f:goto L40f20f;
case 0x40f215:c.instructions+=3;goto B40f215;
case 0x40f21a:c.instructions+=2;goto B40f21a;
case 0x40f21e:c.instructions+=1;goto B40f21e;
case 0x40f223:goto L40f223;
case 0x40f225:c.instructions+=2;goto B40f225;
case 0x40f229:c.instructions+=1;goto B40f229;
case 0x40f22f:goto L40f22f;
case 0x40f232:c.instructions+=3;goto B40f232;
case 0x40f237:c.instructions+=2;goto B40f237;
case 0x40f23b:c.instructions+=1;goto B40f23b;
case 0x40f23d:goto L40f23d;
case 0x40f241:c.instructions+=1;goto B40f241;
case 0x40f245:goto L40f245;
case 0x40f247:c.instructions+=1;goto B40f247;
case 0x40f249:goto L40f249;
case 0x40f24b:c.instructions+=1;goto B40f24b;
case 0x40f250:goto L40f250;
case 0x40f252:c.instructions+=1;goto B40f252;
case 0x40f258:goto L40f258;
case 0x40f25b:c.instructions+=2;goto B40f25b;
case 0x40f25e:c.instructions+=1;goto B40f25e;
case 0x40f260:goto L40f260;
case 0x40f262:c.instructions+=1;goto B40f262;
case 0x40f267:goto L40f267;
case 0x40f269:c.instructions+=1;goto B40f269;
case 0x40f26f:goto L40f26f;
case 0x40f272:c.instructions+=8;goto B40f272;
case 0x40f275:c.instructions+=7;goto B40f275;
case 0x40f279:c.instructions+=6;goto B40f279;
case 0x40f27a:c.instructions+=5;goto B40f27a;
case 0x40f27b:c.instructions+=4;goto B40f27b;
case 0x40f27c:c.instructions+=3;goto B40f27c;
case 0x40f27d:c.instructions+=2;goto B40f27d;
case 0x40f27f:c.instructions+=1;goto B40f27f;
case 0x40f284:goto L40f284;
case 0x40f286:c.instructions+=2;goto B40f286;
case 0x40f288:c.instructions+=1;goto B40f288;
case 0x40f28e:goto L40f28e;
case 0x40f292:c.instructions+=1;goto B40f292;
case 0x40f294:goto L40f294;
case 0x40f298:c.instructions+=2;goto B40f298;
case 0x40f29a:c.instructions+=1;goto B40f29a;
case 0x40f29c:goto L40f29c;
case 0x40f29f:c.instructions+=4;goto B40f29f;
case 0x40f2a0:c.instructions+=3;goto B40f2a0;
case 0x40f2a1:c.instructions+=2;goto B40f2a1;
case 0x40f2a3:c.instructions+=1;goto B40f2a3;
case 0x40f2a8:goto L40f2a8;
case 0x40f2aa:goto L40f2aa;
case 0x40f2ab:c.instructions+=2;goto B40f2ab;
case 0x40f2ad:c.instructions+=1;goto B40f2ad;
case 0x40f2b2:goto L40f2b2;
case 0x40f2b5:c.instructions+=4;goto B40f2b5;
case 0x40f2b9:c.instructions+=3;goto B40f2b9;
case 0x40f2bc:c.instructions+=2;goto B40f2bc;
case 0x40f2be:c.instructions+=1;goto B40f2be;
case 0x40f2c0:goto L40f2c0;
case 0x40f2c4:c.instructions+=10;goto B40f2c4;
case 0x40f2c7:c.instructions+=9;goto B40f2c7;
case 0x40f2cb:c.instructions+=8;goto B40f2cb;
case 0x40f2cf:c.instructions+=7;goto B40f2cf;
case 0x40f2d5:c.instructions+=6;goto B40f2d5;
case 0x40f2d8:c.instructions+=5;goto B40f2d8;
case 0x40f2da:c.instructions+=4;goto B40f2da;
case 0x40f2e0:c.instructions+=3;goto B40f2e0;
case 0x40f2e2:c.instructions+=2;goto B40f2e2;
case 0x40f2e5:c.instructions+=1;goto B40f2e5;
case 0x40f2e7:goto L40f2e7;
case 0x40f2e9:goto L40f2e9;
case 0x40f2eb:goto L40f2eb;
case 0x40f2ee:c.instructions+=1;goto B40f2ee;
case 0x40f2f0:goto L40f2f0;
case 0x40f2f4:c.instructions+=4;goto B40f2f4;
case 0x40f2f6:c.instructions+=3;goto B40f2f6;
case 0x40f2f8:c.instructions+=2;goto B40f2f8;
case 0x40f2f9:c.instructions+=1;goto B40f2f9;
case 0x40f2fb:goto L40f2fb;
case 0x40f300:goto L40f300;
case 0x40f304:c.instructions+=3;goto B40f304;
case 0x40f305:c.instructions+=2;goto B40f305;
case 0x40f307:c.instructions+=1;goto B40f307;
case 0x40f30c:goto L40f30c;
case 0x40f30e:goto L40f30e;
case 0x40f313:goto L40f313;
case 0x40f317:c.instructions+=4;goto B40f317;
case 0x40f31b:c.instructions+=3;goto B40f31b;
case 0x40f31c:c.instructions+=2;goto B40f31c;
case 0x40f31e:c.instructions+=1;goto B40f31e;
case 0x40f323:goto L40f323;
case 0x40f326:c.instructions+=10;goto B40f326;
case 0x40f329:c.instructions+=9;goto B40f329;
case 0x40f32a:c.instructions+=8;goto B40f32a;
case 0x40f32c:c.instructions+=7;goto B40f32c;
case 0x40f330:c.instructions+=6;goto B40f330;
case 0x40f332:c.instructions+=5;goto B40f332;
case 0x40f334:c.instructions+=4;goto B40f334;
case 0x40f338:c.instructions+=3;goto B40f338;
case 0x40f33a:c.instructions+=2;goto B40f33a;
case 0x40f33d:c.instructions+=1;goto B40f33d;
case 0x40f342:goto L40f342;
case 0x40f346:c.instructions+=4;goto B40f346;
case 0x40f34c:c.instructions+=3;goto B40f34c;
case 0x40f34e:c.instructions+=2;goto B40f34e;
case 0x40f351:c.instructions+=1;goto B40f351;
case 0x40f357:goto L40f357;
case 0x40f35d:c.instructions+=3;goto B40f35d;
case 0x40f35f:c.instructions+=2;goto B40f35f;
case 0x40f362:c.instructions+=1;goto B40f362;
case 0x40f368:goto L40f368;
case 0x40f36a:c.instructions+=1;goto B40f36a;
case 0x40f370:goto L40f370;
case 0x40f374:c.instructions+=4;goto B40f374;
case 0x40f378:c.instructions+=3;goto B40f378;
case 0x40f37a:c.instructions+=2;goto B40f37a;
case 0x40f37d:c.instructions+=1;goto B40f37d;
case 0x40f37f:goto L40f37f;
case 0x40f383:c.instructions+=4;goto B40f383;
case 0x40f389:c.instructions+=3;goto B40f389;
case 0x40f38b:c.instructions+=2;goto B40f38b;
case 0x40f38e:c.instructions+=1;goto B40f38e;
case 0x40f390:goto L40f390;
case 0x40f393:c.instructions+=2;goto B40f393;
case 0x40f396:c.instructions+=1;goto B40f396;
case 0x40f398:goto L40f398;
case 0x40f39c:c.instructions+=3;goto B40f39c;
case 0x40f39d:c.instructions+=2;goto B40f39d;
case 0x40f39f:c.instructions+=1;goto B40f39f;
case 0x40f3a4:goto L40f3a4;
case 0x40f3a6:c.instructions+=7;goto B40f3a6;
case 0x40f3a8:c.instructions+=6;goto B40f3a8;
case 0x40f3aa:c.instructions+=5;goto B40f3aa;
case 0x40f3ab:c.instructions+=4;goto B40f3ab;
case 0x40f3af:c.instructions+=3;goto B40f3af;
case 0x40f3b0:c.instructions+=2;goto B40f3b0;
case 0x40f3b4:c.instructions+=1;goto B40f3b4;
case 0x40f3b9:goto L40f3b9;
case 0x40f3bb:c.instructions+=4;goto B40f3bb;
case 0x40f3bd:c.instructions+=3;goto B40f3bd;
case 0x40f3bf:c.instructions+=2;goto B40f3bf;
case 0x40f3c3:c.instructions+=1;goto B40f3c3;
case 0x40f3c5:goto L40f3c5;
case 0x40f3ca:c.instructions+=4;goto B40f3ca;
case 0x40f3ce:c.instructions+=3;goto B40f3ce;
case 0x40f3cf:c.instructions+=2;goto B40f3cf;
case 0x40f3d3:c.instructions+=1;goto B40f3d3;
case 0x40f3d8:goto L40f3d8;
case 0x40f3da:c.instructions+=4;goto B40f3da;
case 0x40f3dc:c.instructions+=3;goto B40f3dc;
case 0x40f3de:c.instructions+=2;goto B40f3de;
case 0x40f3e2:c.instructions+=1;goto B40f3e2;
case 0x40f3e4:goto L40f3e4;
case 0x40f3e8:c.instructions+=5;goto B40f3e8;
case 0x40f3ec:c.instructions+=4;goto B40f3ec;
case 0x40f3f0:c.instructions+=3;goto B40f3f0;
case 0x40f3f4:c.instructions+=2;goto B40f3f4;
case 0x40f3f8:c.instructions+=1;goto B40f3f8;
case 0x40f3fa:goto L40f3fa;
case 0x40f3fc:goto L40f3fc;
case 0x40f400:goto L40f400;
case 0x40f402:c.instructions+=3;goto B40f402;
case 0x40f406:c.instructions+=2;goto B40f406;
case 0x40f40a:c.instructions+=1;goto B40f40a;
case 0x40f410:goto L40f410;
case 0x40f414:c.instructions+=2;goto B40f414;
case 0x40f416:c.instructions+=1;goto B40f416;
case 0x40f418:goto L40f418;
case 0x40f41c:c.instructions+=2;goto B40f41c;
case 0x40f41e:c.instructions+=1;goto B40f41e;
case 0x40f420:goto L40f420;
case 0x40f423:c.instructions+=5;goto B40f423;
case 0x40f426:c.instructions+=4;goto B40f426;
case 0x40f42a:c.instructions+=3;goto B40f42a;
case 0x40f42c:c.instructions+=2;goto B40f42c;
case 0x40f437:c.instructions+=1;goto B40f437;
case 0x40f43c:goto L40f43c;
case 0x40f43e:c.instructions+=8;goto B40f43e;
case 0x40f445:c.instructions+=7;goto B40f445;
case 0x40f44c:c.instructions+=6;goto B40f44c;
case 0x40f44d:c.instructions+=5;goto B40f44d;
case 0x40f44e:c.instructions+=4;goto B40f44e;
case 0x40f44f:c.instructions+=3;goto B40f44f;
case 0x40f451:c.instructions+=2;goto B40f451;
case 0x40f452:c.instructions+=1;goto B40f452;
case 0x40f453:goto L40f453;
case 0x40f457:c.instructions+=2;goto B40f457;
case 0x40f462:c.instructions+=1;goto B40f462;
case 0x40f467:goto L40f467;
case 0x40f46e:c.instructions+=8;goto B40f46e;
case 0x40f46f:c.instructions+=7;goto B40f46f;
case 0x40f470:c.instructions+=6;goto B40f470;
case 0x40f472:c.instructions+=5;goto B40f472;
case 0x40f479:c.instructions+=4;goto B40f479;
case 0x40f47a:c.instructions+=3;goto B40f47a;
case 0x40f47c:c.instructions+=2;goto B40f47c;
case 0x40f47d:c.instructions+=1;goto B40f47d;
case 0x40f480:goto L40f480;
case 0x40f482:c.instructions+=3;goto B40f482;
case 0x40f484:c.instructions+=2;goto B40f484;
case 0x40f486:c.instructions+=1;goto B40f486;
case 0x40f488:goto L40f488;
case 0x40f48b:c.instructions+=2;goto B40f48b;
case 0x40f48d:c.instructions+=1;goto B40f48d;
case 0x40f48f:goto L40f48f;
case 0x40f492:c.instructions+=3;goto B40f492;
case 0x40f497:c.instructions+=2;goto B40f497;
case 0x40f49b:c.instructions+=1;goto B40f49b;
case 0x40f49e:goto L40f49e;
case 0x40f4a0:goto L40f4a0;
case 0x40f4a3:c.instructions+=6;goto B40f4a3;
case 0x40f4a4:c.instructions+=5;goto B40f4a4;
case 0x40f4a8:c.instructions+=4;goto B40f4a8;
case 0x40f4ab:c.instructions+=3;goto B40f4ab;
case 0x40f4ad:c.instructions+=2;goto B40f4ad;
case 0x40f4b1:c.instructions+=1;goto B40f4b1;
case 0x40f4b7:goto L40f4b7;
case 0x40f4ba:c.instructions+=2;goto B40f4ba;
case 0x40f4bf:c.instructions+=1;goto B40f4bf;
case 0x40f4c1:goto L40f4c1;
case 0x40f4c8:c.instructions+=2;goto B40f4c8;
case 0x40f4cc:c.instructions+=1;goto B40f4cc;
case 0x40f4ce:goto L40f4ce;
case 0x40f4d6:goto L40f4d6;
case 0x40f4da:c.instructions+=6;goto B40f4da;
case 0x40f4dc:c.instructions+=5;goto B40f4dc;
case 0x40f4dd:c.instructions+=4;goto B40f4dd;
case 0x40f4de:c.instructions+=3;goto B40f4de;
case 0x40f4df:c.instructions+=2;goto B40f4df;
case 0x40f4e7:c.instructions+=1;goto B40f4e7;
case 0x40f4e9:goto L40f4e9;
case 0x40f4ed:c.instructions+=21;goto B40f4ed;
case 0x40f4f1:c.instructions+=20;goto B40f4f1;
case 0x40f4f5:c.instructions+=19;goto B40f4f5;
case 0x40f4f9:c.instructions+=18;goto B40f4f9;
case 0x40f4fd:c.instructions+=17;goto B40f4fd;
case 0x40f502:c.instructions+=16;goto B40f502;
case 0x40f506:c.instructions+=15;goto B40f506;
case 0x40f50a:c.instructions+=14;goto B40f50a;
case 0x40f510:c.instructions+=13;goto B40f510;
case 0x40f514:c.instructions+=12;goto B40f514;
case 0x40f51a:c.instructions+=11;goto B40f51a;
case 0x40f51c:c.instructions+=10;goto B40f51c;
case 0x40f51e:c.instructions+=9;goto B40f51e;
case 0x40f520:c.instructions+=8;goto B40f520;
case 0x40f523:c.instructions+=7;goto B40f523;
case 0x40f526:c.instructions+=6;goto B40f526;
case 0x40f528:c.instructions+=5;goto B40f528;
case 0x40f52a:c.instructions+=4;goto B40f52a;
case 0x40f52e:c.instructions+=3;goto B40f52e;
case 0x40f530:c.instructions+=2;goto B40f530;
case 0x40f532:c.instructions+=1;goto B40f532;
case 0x40f534:goto L40f534;
case 0x40f538:c.instructions+=3;goto B40f538;
case 0x40f539:c.instructions+=2;goto B40f539;
case 0x40f53b:c.instructions+=1;goto B40f53b;
case 0x40f540:goto L40f540;
case 0x40f544:c.instructions+=12;goto B40f544;
case 0x40f546:c.instructions+=11;goto B40f546;
case 0x40f54a:c.instructions+=10;goto B40f54a;
case 0x40f550:c.instructions+=9;goto B40f550;
case 0x40f552:c.instructions+=8;goto B40f552;
case 0x40f557:c.instructions+=7;goto B40f557;
case 0x40f55b:c.instructions+=6;goto B40f55b;
case 0x40f55e:c.instructions+=5;goto B40f55e;
case 0x40f561:c.instructions+=4;goto B40f561;
case 0x40f565:c.instructions+=3;goto B40f565;
case 0x40f567:c.instructions+=2;goto B40f567;
case 0x40f56b:c.instructions+=1;goto B40f56b;
case 0x40f56d:goto L40f56d;
case 0x40f570:goto L40f570;
case 0x40f574:c.instructions+=2;goto B40f574;
case 0x40f579:c.instructions+=1;goto B40f579;
case 0x40f57b:goto L40f57b;
case 0x40f57e:c.instructions+=1;goto B40f57e;
case 0x40f582:goto L40f582;
case 0x40f588:c.instructions+=2;goto B40f588;
case 0x40f58b:c.instructions+=1;goto B40f58b;
case 0x40f58d:goto L40f58d;
case 0x40f595:c.instructions+=2;goto B40f595;
case 0x40f59a:c.instructions+=1;goto B40f59a;
case 0x40f59c:goto L40f59c;
case 0x40f5a1:goto L40f5a1;
case 0x40f5a3:c.instructions+=1;goto B40f5a3;
case 0x40f5a5:goto L40f5a5;
case 0x40f5b0:goto L40f5b0;
case 0x40f5b4:c.instructions+=3;goto B40f5b4;
case 0x40f5bb:c.instructions+=2;goto B40f5bb;
case 0x40f5bd:c.instructions+=1;goto B40f5bd;
case 0x40f5bf:goto L40f5bf;
case 0x40f5c3:c.instructions+=2;goto B40f5c3;
case 0x40f5c5:c.instructions+=1;goto B40f5c5;
case 0x40f5c7:goto L40f5c7;
case 0x40f5c9:c.instructions+=1;goto B40f5c9;
case 0x40f5cb:goto L40f5cb;
case 0x40f5cf:c.instructions+=1;goto B40f5cf;
case 0x40f5d1:goto L40f5d1;
case 0x40f5d2:c.instructions+=2;goto B40f5d2;
case 0x40f5d4:c.instructions+=1;goto B40f5d4;
case 0x40f5d9:goto L40f5d9;
case 0x40f5dd:c.instructions+=5;goto B40f5dd;
case 0x40f5df:c.instructions+=4;goto B40f5df;
case 0x40f5e3:c.instructions+=3;goto B40f5e3;
case 0x40f5e5:c.instructions+=2;goto B40f5e5;
case 0x40f5e8:c.instructions+=1;goto B40f5e8;
case 0x40f5ea:goto L40f5ea;
case 0x40f5ee:c.instructions+=2;goto B40f5ee;
case 0x40f5f2:c.instructions+=1;goto B40f5f2;
case 0x40f5f4:goto L40f5f4;
case 0x40f5f6:goto L40f5f6;
case 0x40f5f7:c.instructions+=2;goto B40f5f7;
case 0x40f5f9:c.instructions+=1;goto B40f5f9;
case 0x40f5fb:goto L40f5fb;
case 0x40f5ff:c.instructions+=2;goto B40f5ff;
case 0x40f602:c.instructions+=1;goto B40f602;
case 0x40f604:goto L40f604;
case 0x40f609:c.instructions+=1;goto B40f609;
case 0x40f60b:goto L40f60b;
case 0x40f60c:c.instructions+=6;goto B40f60c;
case 0x40f60d:c.instructions+=5;goto B40f60d;
case 0x40f60e:c.instructions+=4;goto B40f60e;
case 0x40f611:c.instructions+=3;goto B40f611;
case 0x40f612:c.instructions+=2;goto B40f612;
case 0x40f615:c.instructions+=1;goto B40f615;
case 0x40f616:goto L40f616;
case 0x40f61a:goto L40f61a;
case 0x40f61b:c.instructions+=2;goto B40f61b;
case 0x40f61c:c.instructions+=1;goto B40f61c;
case 0x40f61d:goto L40f61d;
case 0x40f61e:c.instructions+=2;goto B40f61e;
case 0x40f621:c.instructions+=1;goto B40f621;
case 0x40f630:goto L40f630;
case 0x40f632:c.instructions+=5;goto B40f632;
case 0x40f633:c.instructions+=4;goto B40f633;
case 0x40f636:c.instructions+=3;goto B40f636;
case 0x40f63c:c.instructions+=2;goto B40f63c;
case 0x40f63e:c.instructions+=1;goto B40f63e;
case 0x40f643:goto L40f643;
case 0x40f646:c.instructions+=3;goto B40f646;
case 0x40f649:c.instructions+=2;goto B40f649;
case 0x40f64a:c.instructions+=1;goto B40f64a;
case 0x40f64c:goto L40f64c;
case 0x40f650:c.instructions+=4;goto B40f650;
case 0x40f653:c.instructions+=3;goto B40f653;
case 0x40f65a:c.instructions+=2;goto B40f65a;
case 0x40f65e:c.instructions+=1;goto B40f65e;
case 0x40f663:goto L40f663;
case 0x40f666:c.instructions+=3;goto B40f666;
case 0x40f669:c.instructions+=2;goto B40f669;
case 0x40f66a:c.instructions+=1;goto B40f66a;
case 0x40f66c:goto L40f66c;
case 0x40f66d:c.instructions+=1;goto B40f66d;
case 0x40f670:goto L40f670;
case 0x40f675:c.instructions+=4;goto B40f675;
case 0x40f676:c.instructions+=3;goto B40f676;
case 0x40f678:c.instructions+=2;goto B40f678;
case 0x40f67e:c.instructions+=1;goto B40f67e;
case 0x40f680:goto L40f680;
case 0x40f681:c.instructions+=1;goto B40f681;
case 0x40f686:goto L40f686;
case 0x40f689:goto L40f689;
case 0x40f68b:c.instructions+=2;goto B40f68b;
case 0x40f68c:c.instructions+=1;goto B40f68c;
case 0x40f690:goto L40f690;
case 0x40f693:c.instructions+=2;goto B40f693;
case 0x40f695:c.instructions+=1;goto B40f695;
case 0x40f697:goto L40f697;
case 0x40f69a:c.instructions+=3;goto B40f69a;
case 0x40f69f:c.instructions+=2;goto B40f69f;
case 0x40f6a6:c.instructions+=1;goto B40f6a6;
case 0x40f6a7:goto L40f6a7;
case 0x40f6a9:c.instructions+=1;goto B40f6a9;
case 0x40f6b0:goto L40f6b0;
case 0x40f6b3:c.instructions+=2;goto B40f6b3;
case 0x40f6b5:c.instructions+=1;goto B40f6b5;
case 0x40f6b7:goto L40f6b7;
case 0x40f6ba:c.instructions+=4;goto B40f6ba;
case 0x40f6c0:c.instructions+=3;goto B40f6c0;
case 0x40f6c7:c.instructions+=2;goto B40f6c7;
case 0x40f6c9:c.instructions+=1;goto B40f6c9;
case 0x40f6cb:goto L40f6cb;
case 0x40f6cd:c.instructions+=11;goto B40f6cd;
case 0x40f6d2:c.instructions+=10;goto B40f6d2;
case 0x40f6d4:c.instructions+=9;goto B40f6d4;
case 0x40f6d9:c.instructions+=8;goto B40f6d9;
case 0x40f6db:c.instructions+=7;goto B40f6db;
case 0x40f6dd:c.instructions+=6;goto B40f6dd;
case 0x40f6e0:c.instructions+=5;goto B40f6e0;
case 0x40f6e2:c.instructions+=4;goto B40f6e2;
case 0x40f6e5:c.instructions+=3;goto B40f6e5;
case 0x40f6e7:c.instructions+=2;goto B40f6e7;
case 0x40f6e9:c.instructions+=1;goto B40f6e9;
case 0x40f6ea:goto L40f6ea;
case 0x40f6ed:c.instructions+=1;goto B40f6ed;
case 0x40f6f0:goto L40f6f0;
case 0x40f6f1:c.instructions+=7;goto B40f6f1;
case 0x40f6f7:c.instructions+=6;goto B40f6f7;
case 0x40f6f8:c.instructions+=5;goto B40f6f8;
case 0x40f6f9:c.instructions+=4;goto B40f6f9;
case 0x40f6fa:c.instructions+=3;goto B40f6fa;
case 0x40f6fc:c.instructions+=2;goto B40f6fc;
case 0x40f6ff:c.instructions+=1;goto B40f6ff;
case 0x40f704:goto L40f704;
case 0x40f706:c.instructions+=2;goto B40f706;
case 0x40f708:c.instructions+=1;goto B40f708;
case 0x40f70a:goto L40f70a;
case 0x40f70c:c.instructions+=1;goto B40f70c;
case 0x40f70e:goto L40f70e;
case 0x40f711:c.instructions+=11;goto B40f711;
case 0x40f717:c.instructions+=10;goto B40f717;
case 0x40f71d:c.instructions+=9;goto B40f71d;
case 0x40f720:c.instructions+=8;goto B40f720;
case 0x40f723:c.instructions+=7;goto B40f723;
case 0x40f728:c.instructions+=6;goto B40f728;
case 0x40f72c:c.instructions+=5;goto B40f72c;
case 0x40f72f:c.instructions+=4;goto B40f72f;
case 0x40f732:c.instructions+=3;goto B40f732;
case 0x40f737:c.instructions+=2;goto B40f737;
case 0x40f73a:c.instructions+=1;goto B40f73a;
case 0x40f73f:goto L40f73f;
case 0x40f741:goto L40f741;
case 0x40f744:c.instructions+=2;goto B40f744;
case 0x40f745:c.instructions+=1;goto B40f745;
case 0x40f747:goto L40f747;
case 0x40f748:c.instructions+=4;goto B40f748;
case 0x40f749:c.instructions+=3;goto B40f749;
case 0x40f74a:c.instructions+=2;goto B40f74a;
case 0x40f74b:c.instructions+=1;goto B40f74b;
case 0x40f750:goto L40f750;
case 0x40f755:c.instructions+=4;goto B40f755;
case 0x40f757:c.instructions+=3;goto B40f757;
case 0x40f758:c.instructions+=2;goto B40f758;
case 0x40f75a:c.instructions+=1;goto B40f75a;
case 0x40f75c:goto L40f75c;
case 0x40f75f:c.instructions+=2;goto B40f75f;
case 0x40f761:c.instructions+=1;goto B40f761;
case 0x40f763:goto L40f763;
case 0x40f768:goto L40f768;
case 0x40f76b:c.instructions+=7;goto B40f76b;
case 0x40f76d:c.instructions+=6;goto B40f76d;
case 0x40f76f:c.instructions+=5;goto B40f76f;
case 0x40f771:c.instructions+=4;goto B40f771;
case 0x40f774:c.instructions+=3;goto B40f774;
case 0x40f77b:c.instructions+=2;goto B40f77b;
case 0x40f77c:c.instructions+=1;goto B40f77c;
case 0x40f77f:goto L40f77f;
case 0x40f784:c.instructions+=2;goto B40f784;
case 0x40f786:c.instructions+=1;goto B40f786;
case 0x40f788:goto L40f788;
case 0x40f78f:goto L40f78f;
case 0x40f790:c.instructions+=1;goto B40f790;
case 0x40f7a0:goto L40f7a0;
case 0x40f7a3:c.instructions+=7;goto B40f7a3;
case 0x40f7a4:c.instructions+=6;goto B40f7a4;
case 0x40f7a8:c.instructions+=5;goto B40f7a8;
case 0x40f7a9:c.instructions+=4;goto B40f7a9;
case 0x40f7ab:c.instructions+=3;goto B40f7ab;
case 0x40f7ae:c.instructions+=2;goto B40f7ae;
case 0x40f7b0:c.instructions+=1;goto B40f7b0;
case 0x40f7b6:goto L40f7b6;
case 0x40f7b8:c.instructions+=3;goto B40f7b8;
case 0x40f7ba:c.instructions+=2;goto B40f7ba;
case 0x40f7bb:c.instructions+=1;goto B40f7bb;
case 0x40f7c1:goto L40f7c1;
case 0x40f7c8:c.instructions+=12;goto B40f7c8;
case 0x40f7ca:c.instructions+=11;goto B40f7ca;
case 0x40f7cd:c.instructions+=10;goto B40f7cd;
case 0x40f7d1:c.instructions+=9;goto B40f7d1;
case 0x40f7d5:c.instructions+=8;goto B40f7d5;
case 0x40f7da:c.instructions+=7;goto B40f7da;
case 0x40f7dc:c.instructions+=6;goto B40f7dc;
case 0x40f7dd:c.instructions+=5;goto B40f7dd;
case 0x40f7e3:c.instructions+=4;goto B40f7e3;
case 0x40f7e9:c.instructions+=3;goto B40f7e9;
case 0x40f7ec:c.instructions+=2;goto B40f7ec;
case 0x40f7f0:c.instructions+=1;goto B40f7f0;
case 0x40f7f2:goto L40f7f2;
case 0x40f7f6:goto L40f7f6;
case 0x40f7f9:c.instructions+=26;goto B40f7f9;
case 0x40f7fd:c.instructions+=25;goto B40f7fd;
case 0x40f7ff:c.instructions+=24;goto B40f7ff;
case 0x40f802:c.instructions+=23;goto B40f802;
case 0x40f805:c.instructions+=22;goto B40f805;
case 0x40f809:c.instructions+=21;goto B40f809;
case 0x40f80c:c.instructions+=20;goto B40f80c;
case 0x40f80e:c.instructions+=19;goto B40f80e;
case 0x40f811:c.instructions+=18;goto B40f811;
case 0x40f814:c.instructions+=17;goto B40f814;
case 0x40f817:c.instructions+=16;goto B40f817;
case 0x40f81a:c.instructions+=15;goto B40f81a;
case 0x40f81e:c.instructions+=14;goto B40f81e;
case 0x40f822:c.instructions+=13;goto B40f822;
case 0x40f826:c.instructions+=12;goto B40f826;
case 0x40f829:c.instructions+=11;goto B40f829;
case 0x40f82d:c.instructions+=10;goto B40f82d;
case 0x40f830:c.instructions+=9;goto B40f830;
case 0x40f834:c.instructions+=8;goto B40f834;
case 0x40f836:c.instructions+=7;goto B40f836;
case 0x40f83b:c.instructions+=6;goto B40f83b;
case 0x40f83e:c.instructions+=5;goto B40f83e;
case 0x40f83f:c.instructions+=4;goto B40f83f;
case 0x40f841:c.instructions+=3;goto B40f841;
case 0x40f843:c.instructions+=2;goto B40f843;
case 0x40f845:c.instructions+=1;goto B40f845;
case 0x40f847:goto L40f847;
case 0x40f848:goto L40f848;
case 0x40f84a:c.instructions+=8;goto B40f84a;
case 0x40f84e:c.instructions+=7;goto B40f84e;
case 0x40f850:c.instructions+=6;goto B40f850;
case 0x40f852:c.instructions+=5;goto B40f852;
case 0x40f854:c.instructions+=4;goto B40f854;
case 0x40f856:c.instructions+=3;goto B40f856;
case 0x40f85c:c.instructions+=2;goto B40f85c;
case 0x40f862:c.instructions+=1;goto B40f862;
case 0x40f864:goto L40f864;
case 0x40f866:c.instructions+=1;goto B40f866;
case 0x40f86b:goto L40f86b;
case 0x40f872:c.instructions+=8;goto B40f872;
case 0x40f874:c.instructions+=7;goto B40f874;
case 0x40f876:c.instructions+=6;goto B40f876;
case 0x40f878:c.instructions+=5;goto B40f878;
case 0x40f87b:c.instructions+=4;goto B40f87b;
case 0x40f87c:c.instructions+=3;goto B40f87c;
case 0x40f87d:c.instructions+=2;goto B40f87d;
case 0x40f87f:c.instructions+=1;goto B40f87f;
case 0x40f885:goto L40f885;
case 0x40f886:c.instructions+=3;goto B40f886;
case 0x40f887:c.instructions+=2;goto B40f887;
case 0x40f88a:c.instructions+=1;goto B40f88a;
case 0x40f890:goto L40f890;
case 0x40f891:c.instructions+=179;goto B40f891;
case 0x40f893:c.instructions+=178;goto B40f893;
case 0x40f896:c.instructions+=177;goto B40f896;
case 0x40f898:c.instructions+=176;goto B40f898;
case 0x40f89d:c.instructions+=175;goto B40f89d;
case 0x40f8a3:c.instructions+=174;goto B40f8a3;
case 0x40f8a4:c.instructions+=173;goto B40f8a4;
case 0x40f8ab:c.instructions+=172;goto B40f8ab;
case 0x40f8b1:c.instructions+=171;goto B40f8b1;
case 0x40f8b2:c.instructions+=170;goto B40f8b2;
case 0x40f8b4:c.instructions+=169;goto B40f8b4;
case 0x40f8b7:c.instructions+=168;goto B40f8b7;
case 0x40f8ba:c.instructions+=167;goto B40f8ba;
case 0x40f8bd:c.instructions+=166;goto B40f8bd;
case 0x40f8c0:c.instructions+=165;goto B40f8c0;
case 0x40f8c3:c.instructions+=164;goto B40f8c3;
case 0x40f8c6:c.instructions+=163;goto B40f8c6;
case 0x40f8c8:c.instructions+=162;goto B40f8c8;
case 0x40f8cc:c.instructions+=161;goto B40f8cc;
case 0x40f8cf:c.instructions+=160;goto B40f8cf;
case 0x40f8d3:c.instructions+=159;goto B40f8d3;
case 0x40f8d7:c.instructions+=158;goto B40f8d7;
case 0x40f8da:c.instructions+=157;goto B40f8da;
case 0x40f8dc:c.instructions+=156;goto B40f8dc;
case 0x40f8e0:c.instructions+=155;goto B40f8e0;
case 0x40f8e4:c.instructions+=154;goto B40f8e4;
case 0x40f8e7:c.instructions+=153;goto B40f8e7;
case 0x40f8eb:c.instructions+=152;goto B40f8eb;
case 0x40f8ee:c.instructions+=151;goto B40f8ee;
case 0x40f8f2:c.instructions+=150;goto B40f8f2;
case 0x40f8f6:c.instructions+=149;goto B40f8f6;
case 0x40f8f9:c.instructions+=148;goto B40f8f9;
case 0x40f8fd:c.instructions+=147;goto B40f8fd;
case 0x40f901:c.instructions+=146;goto B40f901;
case 0x40f905:c.instructions+=145;goto B40f905;
case 0x40f908:c.instructions+=144;goto B40f908;
case 0x40f90c:c.instructions+=143;goto B40f90c;
case 0x40f910:c.instructions+=142;goto B40f910;
case 0x40f914:c.instructions+=141;goto B40f914;
case 0x40f917:c.instructions+=140;goto B40f917;
case 0x40f91b:c.instructions+=139;goto B40f91b;
case 0x40f91f:c.instructions+=138;goto B40f91f;
case 0x40f923:c.instructions+=137;goto B40f923;
case 0x40f927:c.instructions+=136;goto B40f927;
case 0x40f92b:c.instructions+=135;goto B40f92b;
case 0x40f92c:c.instructions+=134;goto B40f92c;
case 0x40f92f:c.instructions+=133;goto B40f92f;
case 0x40f931:c.instructions+=132;goto B40f931;
case 0x40f935:c.instructions+=131;goto B40f935;
case 0x40f937:c.instructions+=130;goto B40f937;
case 0x40f93b:c.instructions+=129;goto B40f93b;
case 0x40f93f:c.instructions+=128;goto B40f93f;
case 0x40f941:c.instructions+=127;goto B40f941;
case 0x40f945:c.instructions+=126;goto B40f945;
case 0x40f949:c.instructions+=125;goto B40f949;
case 0x40f94b:c.instructions+=124;goto B40f94b;
case 0x40f94f:c.instructions+=123;goto B40f94f;
case 0x40f953:c.instructions+=122;goto B40f953;
case 0x40f955:c.instructions+=121;goto B40f955;
case 0x40f959:c.instructions+=120;goto B40f959;
case 0x40f95b:c.instructions+=119;goto B40f95b;
case 0x40f95e:c.instructions+=118;goto B40f95e;
case 0x40f960:c.instructions+=117;goto B40f960;
case 0x40f964:c.instructions+=116;goto B40f964;
case 0x40f966:c.instructions+=115;goto B40f966;
case 0x40f96a:c.instructions+=114;goto B40f96a;
case 0x40f96e:c.instructions+=113;goto B40f96e;
case 0x40f970:c.instructions+=112;goto B40f970;
case 0x40f974:c.instructions+=111;goto B40f974;
case 0x40f978:c.instructions+=110;goto B40f978;
case 0x40f97a:c.instructions+=109;goto B40f97a;
case 0x40f97e:c.instructions+=108;goto B40f97e;
case 0x40f982:c.instructions+=107;goto B40f982;
case 0x40f986:c.instructions+=106;goto B40f986;
case 0x40f98a:c.instructions+=105;goto B40f98a;
case 0x40f990:c.instructions+=104;goto B40f990;
case 0x40f992:c.instructions+=103;goto B40f992;
case 0x40f998:c.instructions+=102;goto B40f998;
case 0x40f99c:c.instructions+=101;goto B40f99c;
case 0x40f99e:c.instructions+=100;goto B40f99e;
case 0x40f9a0:c.instructions+=99;goto B40f9a0;
case 0x40f9a6:c.instructions+=98;goto B40f9a6;
case 0x40f9aa:c.instructions+=97;goto B40f9aa;
case 0x40f9ae:c.instructions+=96;goto B40f9ae;
case 0x40f9b2:c.instructions+=95;goto B40f9b2;
case 0x40f9b4:c.instructions+=94;goto B40f9b4;
case 0x40f9bb:c.instructions+=93;goto B40f9bb;
case 0x40f9bf:c.instructions+=92;goto B40f9bf;
case 0x40f9c5:c.instructions+=91;goto B40f9c5;
case 0x40f9c9:c.instructions+=90;goto B40f9c9;
case 0x40f9cb:c.instructions+=89;goto B40f9cb;
case 0x40f9cf:c.instructions+=88;goto B40f9cf;
case 0x40f9d1:c.instructions+=87;goto B40f9d1;
case 0x40f9d8:c.instructions+=86;goto B40f9d8;
case 0x40f9da:c.instructions+=85;goto B40f9da;
case 0x40f9de:c.instructions+=84;goto B40f9de;
case 0x40f9e2:c.instructions+=83;goto B40f9e2;
case 0x40f9e4:c.instructions+=82;goto B40f9e4;
case 0x40f9eb:c.instructions+=81;goto B40f9eb;
case 0x40f9ed:c.instructions+=80;goto B40f9ed;
case 0x40f9f1:c.instructions+=79;goto B40f9f1;
case 0x40f9f5:c.instructions+=78;goto B40f9f5;
case 0x40f9f9:c.instructions+=77;goto B40f9f9;
case 0x40f9fd:c.instructions+=76;goto B40f9fd;
case 0x40fa04:c.instructions+=75;goto B40fa04;
case 0x40fa08:c.instructions+=74;goto B40fa08;
case 0x40fa0e:c.instructions+=73;goto B40fa0e;
case 0x40fa12:c.instructions+=72;goto B40fa12;
case 0x40fa18:c.instructions+=71;goto B40fa18;
case 0x40fa1c:c.instructions+=70;goto B40fa1c;
case 0x40fa22:c.instructions+=69;goto B40fa22;
case 0x40fa26:c.instructions+=68;goto B40fa26;
case 0x40fa28:c.instructions+=67;goto B40fa28;
case 0x40fa2a:c.instructions+=66;goto B40fa2a;
case 0x40fa2c:c.instructions+=65;goto B40fa2c;
case 0x40fa33:c.instructions+=64;goto B40fa33;
case 0x40fa37:c.instructions+=63;goto B40fa37;
case 0x40fa3d:c.instructions+=62;goto B40fa3d;
case 0x40fa3f:c.instructions+=61;goto B40fa3f;
case 0x40fa41:c.instructions+=60;goto B40fa41;
case 0x40fa45:c.instructions+=59;goto B40fa45;
case 0x40fa47:c.instructions+=58;goto B40fa47;
case 0x40fa49:c.instructions+=57;goto B40fa49;
case 0x40fa50:c.instructions+=56;goto B40fa50;
case 0x40fa54:c.instructions+=55;goto B40fa54;
case 0x40fa56:c.instructions+=54;goto B40fa56;
case 0x40fa58:c.instructions+=53;goto B40fa58;
case 0x40fa5f:c.instructions+=52;goto B40fa5f;
case 0x40fa61:c.instructions+=51;goto B40fa61;
case 0x40fa65:c.instructions+=50;goto B40fa65;
case 0x40fa67:c.instructions+=49;goto B40fa67;
case 0x40fa69:c.instructions+=48;goto B40fa69;
case 0x40fa6b:c.instructions+=47;goto B40fa6b;
case 0x40fa72:c.instructions+=46;goto B40fa72;
case 0x40fa74:c.instructions+=45;goto B40fa74;
case 0x40fa76:c.instructions+=44;goto B40fa76;
case 0x40fa78:c.instructions+=43;goto B40fa78;
case 0x40fa7a:c.instructions+=42;goto B40fa7a;
case 0x40fa7e:c.instructions+=41;goto B40fa7e;
case 0x40fa84:c.instructions+=40;goto B40fa84;
case 0x40fa88:c.instructions+=39;goto B40fa88;
case 0x40fa8e:c.instructions+=38;goto B40fa8e;
case 0x40fa92:c.instructions+=37;goto B40fa92;
case 0x40fa98:c.instructions+=36;goto B40fa98;
case 0x40fa9c:c.instructions+=35;goto B40fa9c;
case 0x40fa9e:c.instructions+=34;goto B40fa9e;
case 0x40faa0:c.instructions+=33;goto B40faa0;
case 0x40faa2:c.instructions+=32;goto B40faa2;
case 0x40faa9:c.instructions+=31;goto B40faa9;
case 0x40faad:c.instructions+=30;goto B40faad;
case 0x40fab3:c.instructions+=29;goto B40fab3;
case 0x40fab5:c.instructions+=28;goto B40fab5;
case 0x40fab7:c.instructions+=27;goto B40fab7;
case 0x40fabb:c.instructions+=26;goto B40fabb;
case 0x40fabd:c.instructions+=25;goto B40fabd;
case 0x40fabf:c.instructions+=24;goto B40fabf;
case 0x40fac6:c.instructions+=23;goto B40fac6;
case 0x40faca:c.instructions+=22;goto B40faca;
case 0x40facc:c.instructions+=21;goto B40facc;
case 0x40face:c.instructions+=20;goto B40face;
case 0x40fad5:c.instructions+=19;goto B40fad5;
case 0x40fadc:c.instructions+=18;goto B40fadc;
case 0x40fadd:c.instructions+=17;goto B40fadd;
case 0x40fadf:c.instructions+=16;goto B40fadf;
case 0x40fae3:c.instructions+=15;goto B40fae3;
case 0x40fae7:c.instructions+=14;goto B40fae7;
case 0x40fae8:c.instructions+=13;goto B40fae8;
case 0x40faea:c.instructions+=12;goto B40faea;
case 0x40faf5:c.instructions+=11;goto B40faf5;
case 0x40fb00:c.instructions+=10;goto B40fb00;
case 0x40fb02:c.instructions+=9;goto B40fb02;
case 0x40fb0d:c.instructions+=8;goto B40fb0d;
case 0x40fb18:c.instructions+=7;goto B40fb18;
case 0x40fb1a:c.instructions+=6;goto B40fb1a;
case 0x40fb21:c.instructions+=5;goto B40fb21;
case 0x40fb23:c.instructions+=4;goto B40fb23;
case 0x40fb25:c.instructions+=3;goto B40fb25;
case 0x40fb27:c.instructions+=2;goto B40fb27;
case 0x40fb29:c.instructions+=1;goto B40fb29;
case 0x40fb2e:goto L40fb2e;
case 0x40fb31:c.instructions+=10;goto B40fb31;
case 0x40fb33:c.instructions+=9;goto B40fb33;
case 0x40fb36:c.instructions+=8;goto B40fb36;
case 0x40fb39:c.instructions+=7;goto B40fb39;
case 0x40fb3d:c.instructions+=6;goto B40fb3d;
case 0x40fb40:c.instructions+=5;goto B40fb40;
case 0x40fb43:c.instructions+=4;goto B40fb43;
case 0x40fb45:c.instructions+=3;goto B40fb45;
case 0x40fb49:c.instructions+=2;goto B40fb49;
case 0x40fb4d:c.instructions+=1;goto B40fb4d;
case 0x40fb4f:goto L40fb4f;
case 0x40fb55:c.instructions+=2;goto B40fb55;
case 0x40fb56:c.instructions+=1;goto B40fb56;
case 0x40fb5b:goto L40fb5b;
case 0x40fb5d:c.instructions+=5;goto B40fb5d;
case 0x40fb60:c.instructions+=4;goto B40fb60;
case 0x40fb64:c.instructions+=3;goto B40fb64;
case 0x40fb66:c.instructions+=2;goto B40fb66;
case 0x40fb71:c.instructions+=1;goto B40fb71;
case 0x40fb73:goto L40fb73;
case 0x40fb75:c.instructions+=3;goto B40fb75;
case 0x40fb77:c.instructions+=2;goto B40fb77;
case 0x40fb7c:c.instructions+=1;goto B40fb7c;
case 0x40fb81:goto L40fb81;
case 0x40fb84:c.instructions+=3;goto B40fb84;
case 0x40fb85:c.instructions+=2;goto B40fb85;
case 0x40fb87:c.instructions+=1;goto B40fb87;
case 0x40fb8c:goto L40fb8c;
case 0x40fb8e:goto L40fb8e;
case 0x40fb90:goto L40fb90;
case 0x40fb9b:c.instructions+=1;goto B40fb9b;
case 0x40fb9e:goto L40fb9e;
case 0x40fba1:c.instructions+=3;goto B40fba1;
case 0x40fba5:c.instructions+=2;goto B40fba5;
case 0x40fba6:c.instructions+=1;goto B40fba6;
case 0x40fbab:goto L40fbab;
case 0x40fbb2:c.instructions+=6;goto B40fbb2;
case 0x40fbb3:c.instructions+=5;goto B40fbb3;
case 0x40fbba:c.instructions+=4;goto B40fbba;
case 0x40fbbb:c.instructions+=3;goto B40fbbb;
case 0x40fbbd:c.instructions+=2;goto B40fbbd;
case 0x40fbbe:c.instructions+=1;goto B40fbbe;
case 0x40fbd0:goto L40fbd0;
case 0x40fbd3:c.instructions+=2;goto B40fbd3;
case 0x40fbd5:c.instructions+=1;goto B40fbd5;
case 0x40fbd7:goto L40fbd7;
case 0x40fbde:goto L40fbde;
case 0x40fbe0:goto L40fbe0;
case 0x40fbe4:c.instructions+=12;goto B40fbe4;
case 0x40fbe7:c.instructions+=11;goto B40fbe7;
case 0x40fbe9:c.instructions+=10;goto B40fbe9;
case 0x40fbec:c.instructions+=9;goto B40fbec;
case 0x40fbee:c.instructions+=8;goto B40fbee;
case 0x40fbf1:c.instructions+=7;goto B40fbf1;
case 0x40fbf4:c.instructions+=6;goto B40fbf4;
case 0x40fbfa:c.instructions+=5;goto B40fbfa;
case 0x40fbfc:c.instructions+=4;goto B40fbfc;
case 0x40fc02:c.instructions+=3;goto B40fc02;
case 0x40fc04:c.instructions+=2;goto B40fc04;
case 0x40fc07:c.instructions+=1;goto B40fc07;
case 0x40fc09:goto L40fc09;
case 0x40fc0c:c.instructions+=2;goto B40fc0c;
case 0x40fc0e:c.instructions+=1;goto B40fc0e;
case 0x40fc10:goto L40fc10;
case 0x40fc15:c.instructions+=1;goto B40fc15;
case 0x40fc17:goto L40fc17;
case 0x40fc1c:c.instructions+=1;goto B40fc1c;
case 0x40fc1f:goto L40fc1f;
case 0x40fc22:c.instructions+=2;goto B40fc22;
case 0x40fc25:c.instructions+=1;goto B40fc25;
case 0x40fc28:goto L40fc28;
case 0x40fc2f:c.instructions+=3;goto B40fc2f;
case 0x40fc32:c.instructions+=2;goto B40fc32;
case 0x40fc35:c.instructions+=1;goto B40fc35;
case 0x40fc40:goto L40fc40;
case 0x40fc41:c.instructions+=4;goto B40fc41;
case 0x40fc42:c.instructions+=3;goto B40fc42;
case 0x40fc44:c.instructions+=2;goto B40fc44;
case 0x40fc46:c.instructions+=1;goto B40fc46;
case 0x40fc48:goto L40fc48;
case 0x40fc4b:c.instructions+=1;goto B40fc4b;
case 0x40fc4d:goto L40fc4d;
case 0x40fc4f:c.instructions+=1;goto B40fc4f;
case 0x40fc51:goto L40fc51;
case 0x40fc53:goto L40fc53;
case 0x40fc56:c.instructions+=1;goto B40fc56;
case 0x40fc58:goto L40fc58;
case 0x40fc5c:c.instructions+=2;goto B40fc5c;
case 0x40fc5d:c.instructions+=1;goto B40fc5d;
case 0x40fc62:goto L40fc62;
case 0x40fc64:c.instructions+=1;goto B40fc64;
case 0x40fc66:goto L40fc66;
case 0x40fc68:c.instructions+=1;goto B40fc68;
case 0x40fc6a:goto L40fc6a;
case 0x40fc6d:c.instructions+=1;goto B40fc6d;
case 0x40fc6f:goto L40fc6f;
case 0x40fc70:c.instructions+=3;goto B40fc70;
case 0x40fc75:c.instructions+=2;goto B40fc75;
case 0x40fc76:c.instructions+=1;goto B40fc76;
case 0x40fc79:goto L40fc79;
case 0x40fc7a:c.instructions+=3;goto B40fc7a;
case 0x40fc7c:c.instructions+=2;goto B40fc7c;
case 0x40fc7d:c.instructions+=1;goto B40fc7d;
case 0x40fc80:goto L40fc80;
case 0x40fc81:c.instructions+=4;goto B40fc81;
case 0x40fc85:c.instructions+=3;goto B40fc85;
case 0x40fc87:c.instructions+=2;goto B40fc87;
case 0x40fc89:c.instructions+=1;goto B40fc89;
case 0x40fc8c:goto L40fc8c;
case 0x40fc90:c.instructions+=5;goto B40fc90;
case 0x40fc94:c.instructions+=4;goto B40fc94;
case 0x40fc98:c.instructions+=3;goto B40fc98;
case 0x40fc9a:c.instructions+=2;goto B40fc9a;
case 0x40fc9d:c.instructions+=1;goto B40fc9d;
case 0x40fc9f:goto L40fc9f;
case 0x40fca3:c.instructions+=4;goto B40fca3;
case 0x40fca7:c.instructions+=3;goto B40fca7;
case 0x40fca9:c.instructions+=2;goto B40fca9;
case 0x40fcac:c.instructions+=1;goto B40fcac;
case 0x40fcae:goto L40fcae;
case 0x40fcb0:goto L40fcb0;
case 0x40fcb4:c.instructions+=4;goto B40fcb4;
case 0x40fcb8:c.instructions+=3;goto B40fcb8;
case 0x40fcba:c.instructions+=2;goto B40fcba;
case 0x40fcbd:c.instructions+=1;goto B40fcbd;
case 0x40fcbf:goto L40fcbf;
case 0x40fcc1:c.instructions+=1;goto B40fcc1;
case 0x40fcc5:goto L40fcc5;
case 0x40fcc9:c.instructions+=2;goto B40fcc9;
case 0x40fccb:c.instructions+=1;goto B40fccb;
case 0x40fccd:goto L40fccd;
case 0x40fcd0:c.instructions+=1;goto B40fcd0;
case 0x40fcd2:goto L40fcd2;
case 0x40fcd5:c.instructions+=1;goto B40fcd5;
case 0x40fcd7:goto L40fcd7;
case 0x40fcda:c.instructions+=1;goto B40fcda;
case 0x40fcdc:goto L40fcdc;
case 0x40fcdf:c.instructions+=1;goto B40fcdf;
case 0x40fce1:goto L40fce1;
case 0x40fce5:c.instructions+=1;goto B40fce5;
case 0x40fce7:goto L40fce7;
case 0x40fced:goto L40fced;
case 0x40fcef:c.instructions+=3;goto B40fcef;
case 0x40fcf3:c.instructions+=2;goto B40fcf3;
case 0x40fcf7:c.instructions+=1;goto B40fcf7;
case 0x40fcf9:goto L40fcf9;
case 0x40fcfc:c.instructions+=1;goto B40fcfc;
case 0x40fcfe:goto L40fcfe;
case 0x40fd01:c.instructions+=1;goto B40fd01;
case 0x40fd03:goto L40fd03;
case 0x40fd06:c.instructions+=1;goto B40fd06;
case 0x40fd08:goto L40fd08;
case 0x40fd0b:c.instructions+=1;goto B40fd0b;
case 0x40fd0d:goto L40fd0d;
case 0x40fd11:c.instructions+=1;goto B40fd11;
case 0x40fd13:goto L40fd13;
case 0x40fd19:goto L40fd19;
case 0x40fd1d:c.instructions+=5;goto B40fd1d;
case 0x40fd22:c.instructions+=4;goto B40fd22;
case 0x40fd24:c.instructions+=3;goto B40fd24;
case 0x40fd25:c.instructions+=2;goto B40fd25;
case 0x40fd29:c.instructions+=1;goto B40fd29;
case 0x40fd2b:goto L40fd2b;
case 0x40fd30:c.instructions+=2;goto B40fd30;
case 0x40fd32:c.instructions+=1;goto B40fd32;
case 0x40fd34:goto L40fd34;
case 0x40fd39:c.instructions+=2;goto B40fd39;
case 0x40fd3b:c.instructions+=1;goto B40fd3b;
case 0x40fd3d:goto L40fd3d;
case 0x40fd42:c.instructions+=2;goto B40fd42;
case 0x40fd44:c.instructions+=1;goto B40fd44;
case 0x40fd46:goto L40fd46;
case 0x40fd4b:c.instructions+=2;goto B40fd4b;
case 0x40fd4d:c.instructions+=1;goto B40fd4d;
case 0x40fd4f:goto L40fd4f;
case 0x40fd53:c.instructions+=3;goto B40fd53;
case 0x40fd56:c.instructions+=2;goto B40fd56;
case 0x40fd58:c.instructions+=1;goto B40fd58;
case 0x40fd5a:goto L40fd5a;
case 0x40fd5e:c.instructions+=4;goto B40fd5e;
case 0x40fd62:c.instructions+=3;goto B40fd62;
case 0x40fd64:c.instructions+=2;goto B40fd64;
case 0x40fd67:c.instructions+=1;goto B40fd67;
case 0x40fd69:goto L40fd69;
case 0x40fd6d:c.instructions+=5;goto B40fd6d;
case 0x40fd71:c.instructions+=4;goto B40fd71;
case 0x40fd77:c.instructions+=3;goto B40fd77;
case 0x40fd7b:c.instructions+=2;goto B40fd7b;
case 0x40fd7f:c.instructions+=1;goto B40fd7f;
case 0x40fd81:goto L40fd81;
case 0x40fd85:c.instructions+=4;goto B40fd85;
case 0x40fd8b:c.instructions+=3;goto B40fd8b;
case 0x40fd8d:c.instructions+=2;goto B40fd8d;
case 0x40fd90:c.instructions+=1;goto B40fd90;
case 0x40fd92:goto L40fd92;
case 0x40fd9a:goto L40fd9a;
case 0x40fd9e:c.instructions+=4;goto B40fd9e;
case 0x40fda4:c.instructions+=3;goto B40fda4;
case 0x40fda6:c.instructions+=2;goto B40fda6;
case 0x40fda9:c.instructions+=1;goto B40fda9;
case 0x40fdab:goto L40fdab;
case 0x40fdb3:goto L40fdb3;
case 0x40fdb7:c.instructions+=3;goto B40fdb7;
case 0x40fdb9:c.instructions+=2;goto B40fdb9;
case 0x40fdbc:c.instructions+=1;goto B40fdbc;
case 0x40fdbe:goto L40fdbe;
case 0x40fdc0:c.instructions+=1;goto B40fdc0;
case 0x40fdc4:goto L40fdc4;
case 0x40fdc8:c.instructions+=4;goto B40fdc8;
case 0x40fdca:c.instructions+=3;goto B40fdca;
case 0x40fdcc:c.instructions+=2;goto B40fdcc;
case 0x40fdcf:c.instructions+=1;goto B40fdcf;
case 0x40fdd1:goto L40fdd1;
case 0x40fdd3:c.instructions+=1;goto B40fdd3;
case 0x40fdd7:goto L40fdd7;
case 0x40fde0:goto L40fde0;
case 0x40fde1:c.instructions+=5;goto B40fde1;
case 0x40fde3:c.instructions+=4;goto B40fde3;
case 0x40fde4:c.instructions+=3;goto B40fde4;
case 0x40fde7:c.instructions+=2;goto B40fde7;
case 0x40fde9:c.instructions+=1;goto B40fde9;
case 0x40fdef:goto L40fdef;
case 0x40fdf2:c.instructions+=16;goto B40fdf2;
case 0x40fdf8:c.instructions+=15;goto B40fdf8;
case 0x40fdfb:c.instructions+=14;goto B40fdfb;
case 0x40fdfc:c.instructions+=13;goto B40fdfc;
case 0x40fdff:c.instructions+=12;goto B40fdff;
case 0x40fe00:c.instructions+=11;goto B40fe00;
case 0x40fe06:c.instructions+=10;goto B40fe06;
case 0x40fe07:c.instructions+=9;goto B40fe07;
case 0x40fe09:c.instructions+=8;goto B40fe09;
case 0x40fe0b:c.instructions+=7;goto B40fe0b;
case 0x40fe0e:c.instructions+=6;goto B40fe0e;
case 0x40fe11:c.instructions+=5;goto B40fe11;
case 0x40fe12:c.instructions+=4;goto B40fe12;
case 0x40fe13:c.instructions+=3;goto B40fe13;
case 0x40fe14:c.instructions+=2;goto B40fe14;
case 0x40fe15:c.instructions+=1;goto B40fe15;
case 0x40fe1a:goto L40fe1a;
case 0x40fe1c:c.instructions+=3;goto B40fe1c;
case 0x40fe1f:c.instructions+=2;goto B40fe1f;
case 0x40fe22:c.instructions+=1;goto B40fe22;
case 0x40fe24:goto L40fe24;
case 0x40fe27:c.instructions+=18;goto B40fe27;
case 0x40fe2c:c.instructions+=17;goto B40fe2c;
case 0x40fe2d:c.instructions+=16;goto B40fe2d;
case 0x40fe33:c.instructions+=15;goto B40fe33;
case 0x40fe39:c.instructions+=14;goto B40fe39;
case 0x40fe3a:c.instructions+=13;goto B40fe3a;
case 0x40fe41:c.instructions+=12;goto B40fe41;
case 0x40fe44:c.instructions+=11;goto B40fe44;
case 0x40fe47:c.instructions+=10;goto B40fe47;
case 0x40fe4a:c.instructions+=9;goto B40fe4a;
case 0x40fe4c:c.instructions+=8;goto B40fe4c;
case 0x40fe4e:c.instructions+=7;goto B40fe4e;
case 0x40fe51:c.instructions+=6;goto B40fe51;
case 0x40fe52:c.instructions+=5;goto B40fe52;
case 0x40fe53:c.instructions+=4;goto B40fe53;
case 0x40fe56:c.instructions+=3;goto B40fe56;
case 0x40fe57:c.instructions+=2;goto B40fe57;
case 0x40fe58:c.instructions+=1;goto B40fe58;
case 0x40fe5d:goto L40fe5d;
case 0x40fe60:c.instructions+=1;goto B40fe60;
case 0x40fe62:goto L40fe62;
case 0x40fe65:c.instructions+=6;goto B40fe65;
case 0x40fe6b:c.instructions+=5;goto B40fe6b;
case 0x40fe6c:c.instructions+=4;goto B40fe6c;
case 0x40fe72:c.instructions+=3;goto B40fe72;
case 0x40fe77:c.instructions+=2;goto B40fe77;
case 0x40fe7a:c.instructions+=1;goto B40fe7a;
case 0x40fe7f:goto L40fe7f;
case 0x40fe80:c.instructions+=5;goto B40fe80;
case 0x40fe86:c.instructions+=4;goto B40fe86;
case 0x40fe89:c.instructions+=3;goto B40fe89;
case 0x40fe8b:c.instructions+=2;goto B40fe8b;
case 0x40fe8c:c.instructions+=1;goto B40fe8c;
case 0x40fe91:goto L40fe91;
case 0x40fe92:goto L40fe92;
case 0x40fe93:c.instructions+=2;goto B40fe93;
case 0x40fe94:c.instructions+=1;goto B40fe94;
case 0x40fea0:goto L40fea0;
case 0x40fea2:c.instructions+=14;goto B40fea2;
case 0x40fea7:c.instructions+=13;goto B40fea7;
case 0x40fead:c.instructions+=12;goto B40fead;
case 0x40feae:c.instructions+=11;goto B40feae;
case 0x40feb5:c.instructions+=10;goto B40feb5;
case 0x40feb6:c.instructions+=9;goto B40feb6;
case 0x40feb7:c.instructions+=8;goto B40feb7;
case 0x40feb9:c.instructions+=7;goto B40feb9;
case 0x40feba:c.instructions+=6;goto B40feba;
case 0x40febe:c.instructions+=5;goto B40febe;
case 0x40fec4:c.instructions+=4;goto B40fec4;
case 0x40feca:c.instructions+=3;goto B40feca;
case 0x40fecc:c.instructions+=2;goto B40fecc;
case 0x40fed4:c.instructions+=1;goto B40fed4;
case 0x40fed6:goto L40fed6;
case 0x40fed8:c.instructions+=1;goto B40fed8;
case 0x40fedd:goto L40fedd;
case 0x40fede:c.instructions+=1;goto B40fede;
case 0x40fee3:goto L40fee3;
case 0x40fee6:goto L40fee6;
case 0x40feec:c.instructions+=2;goto B40feec;
case 0x40feee:c.instructions+=1;goto B40feee;
case 0x40fef0:goto L40fef0;
case 0x40fef2:c.instructions+=1;goto B40fef2;
case 0x40fef7:goto L40fef7;
case 0x40fef8:c.instructions+=1;goto B40fef8;
case 0x40fefd:goto L40fefd;
case 0x40ff00:goto L40ff00;
case 0x40ff06:c.instructions+=2;goto B40ff06;
case 0x40ff08:c.instructions+=1;goto B40ff08;
case 0x40ff0a:goto L40ff0a;
case 0x40ff0c:c.instructions+=1;goto B40ff0c;
case 0x40ff11:goto L40ff11;
case 0x40ff12:c.instructions+=1;goto B40ff12;
case 0x40ff17:goto L40ff17;
case 0x40ff1a:goto L40ff1a;
case 0x40ff20:c.instructions+=2;goto B40ff20;
case 0x40ff22:c.instructions+=1;goto B40ff22;
case 0x40ff24:goto L40ff24;
case 0x40ff26:c.instructions+=1;goto B40ff26;
case 0x40ff2b:goto L40ff2b;
case 0x40ff2c:c.instructions+=1;goto B40ff2c;
case 0x40ff31:goto L40ff31;
case 0x40ff34:goto L40ff34;
case 0x40ff3a:c.instructions+=2;goto B40ff3a;
case 0x40ff3c:c.instructions+=1;goto B40ff3c;
case 0x40ff3e:goto L40ff3e;
case 0x40ff40:c.instructions+=1;goto B40ff40;
case 0x40ff45:goto L40ff45;
case 0x40ff46:c.instructions+=1;goto B40ff46;
case 0x40ff4b:goto L40ff4b;
case 0x40ff4e:goto L40ff4e;
case 0x40ff54:c.instructions+=2;goto B40ff54;
case 0x40ff56:c.instructions+=1;goto B40ff56;
case 0x40ff58:goto L40ff58;
case 0x40ff5a:c.instructions+=1;goto B40ff5a;
case 0x40ff5f:goto L40ff5f;
case 0x40ff60:c.instructions+=1;goto B40ff60;
case 0x40ff65:goto L40ff65;
case 0x40ff68:goto L40ff68;
case 0x40ff6e:c.instructions+=2;goto B40ff6e;
case 0x40ff70:c.instructions+=1;goto B40ff70;
case 0x40ff72:goto L40ff72;
case 0x40ff74:c.instructions+=1;goto B40ff74;
case 0x40ff79:goto L40ff79;
case 0x40ff7e:c.instructions+=3;goto B40ff7e;
case 0x40ff7f:c.instructions+=2;goto B40ff7f;
case 0x40ff80:c.instructions+=1;goto B40ff80;
case 0x40ff85:goto L40ff85;
case 0x40ff88:goto L40ff88;
case 0x40ff8e:c.instructions+=2;goto B40ff8e;
case 0x40ff93:c.instructions+=1;goto B40ff93;
case 0x40ff98:goto L40ff98;
case 0x40ff9e:c.instructions+=3;goto B40ff9e;
case 0x40ffa3:c.instructions+=2;goto B40ffa3;
case 0x40ffa9:c.instructions+=1;goto B40ffa9;
case 0x40ffae:goto L40ffae;
case 0x40ffb2:c.instructions+=6;goto B40ffb2;
case 0x40ffb8:c.instructions+=5;goto B40ffb8;
case 0x40ffb9:c.instructions+=4;goto B40ffb9;
case 0x40ffba:c.instructions+=3;goto B40ffba;
case 0x40ffc1:c.instructions+=2;goto B40ffc1;
case 0x40ffc4:c.instructions+=1;goto B40ffc4;
case 0x40ffd0:goto L40ffd0;
case 0x40ffd4:c.instructions+=5;goto B40ffd4;
case 0x40ffd7:c.instructions+=4;goto B40ffd7;
case 0x40ffd9:c.instructions+=3;goto B40ffd9;
case 0x40ffdf:c.instructions+=2;goto B40ffdf;
case 0x40ffe5:c.instructions+=1;goto B40ffe5;
case 0x40fff0:goto L40fff0;
case 0x40fff6:c.instructions+=1;goto B40fff6;
default:missing_instruction(c.pc);}
B40f000:L40f000:{c.instructions+=1;NFSU2_TR(0x40f000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f005ull));
TAIL_STATIC(0x6147e0u,614);
}
B40f005:L40f005:{c.instructions+=2;NFSU2_TR(0x40f005);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f006:{NFSU2_TR(0x40f006);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f010:L40f010:{c.instructions+=4;NFSU2_TR(0x40f010);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f014:{NFSU2_TR(0x40f014);
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
B40f016:{NFSU2_TR(0x40f016);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f017:{NFSU2_TR(0x40f017);
if(r1(R+518)){{goto L40f059;}}
}
B40f019:L40f019:{c.instructions+=5;NFSU2_TR(0x40f019);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40f01c:{NFSU2_TR(0x40f01c);
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
B40f01e:{NFSU2_TR(0x40f01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f025:{NFSU2_TR(0x40f025);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f026:{NFSU2_TR(0x40f026);
if(r1(R+518)){{goto L40f049;}}
}
B40f028:L40f028:{c.instructions+=3;NFSU2_TR(0x40f028);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40f02b:{NFSU2_TR(0x40f02b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f02c:{NFSU2_TR(0x40f02c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f031ull));
TAIL_STATIC(0x4012b0u,401);
}
B40f031:L40f031:{c.instructions+=4;NFSU2_TR(0x40f031);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f037:{NFSU2_TR(0x40f037);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40f03a:{NFSU2_TR(0x40f03a);
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
B40f03c:{NFSU2_TR(0x40f03c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40f060;}}
}
B40f03e:L40f03e:{c.instructions+=2;NFSU2_TR(0x40f03e);
__builtin_memmove((R+4),(R+24),4);
}
B40f040:{NFSU2_TR(0x40f040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f045ull));
TAIL_STATIC(0x6147e0u,614);
}
B40f045:L40f045:{c.instructions+=2;NFSU2_TR(0x40f045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f046:{NFSU2_TR(0x40f046);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f049:L40f049:{c.instructions+=3;NFSU2_TR(0x40f049);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40f04c:{NFSU2_TR(0x40f04c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f04d:{NFSU2_TR(0x40f04d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f052ull));
TAIL_STATIC(0x4012b0u,401);
}
B40f052:L40f052:{c.instructions+=3;NFSU2_TR(0x40f052);
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
B40f055:{NFSU2_TR(0x40f055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f056:{NFSU2_TR(0x40f056);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f059:L40f059:{c.instructions+=1;NFSU2_TR(0x40f059);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f060:L40f060:{c.instructions+=2;NFSU2_TR(0x40f060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f061:{NFSU2_TR(0x40f061);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f070:L40f070:{c.instructions+=4;NFSU2_TR(0x40f070);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f071:{NFSU2_TR(0x40f071);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
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
B40f074:{NFSU2_TR(0x40f074);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40f078:{NFSU2_TR(0x40f078);
if(r1(R+518)){{goto L40f0c6;}}
}
B40f07a:L40f07a:{c.instructions+=6;NFSU2_TR(0x40f07a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f07b:{NFSU2_TR(0x40f07b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f07c:{NFSU2_TR(0x40f07c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f07d:{NFSU2_TR(0x40f07d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f07e:{NFSU2_TR(0x40f07e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f081:{NFSU2_TR(0x40f081);
w4(R+20,u32(0x3ull));
}
B40f086:L40f086:{c.instructions+=2;NFSU2_TR(0x40f086);
w4(R+12,u32(0x28ull));
}
B40f08b:{NFSU2_TR(0x40f08b);
{goto L40f090;}
}
B40f090:L40f090:{c.instructions+=3;NFSU2_TR(0x40f090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B40f092:{NFSU2_TR(0x40f092);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f094:{NFSU2_TR(0x40f094);
if(r1(R+518)){{goto L40f0ac;}}
}
B40f096:L40f096:{c.instructions+=2;NFSU2_TR(0x40f096);
__builtin_memmove((R+4),(R+28),4);
}
B40f098:{NFSU2_TR(0x40f098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f09dull));
TAIL_STATIC(0x633fd0u,633);
}
B40f09d:L40f09d:{c.instructions+=4;NFSU2_TR(0x40f09d);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B40f0a2:{NFSU2_TR(0x40f0a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f0a3:{NFSU2_TR(0x40f0a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f0a4:{NFSU2_TR(0x40f0a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f0a9ull));
TAIL_STATIC(0x43f920u,43f);
}
B40f0a9:L40f0a9:{c.instructions+=1;NFSU2_TR(0x40f0a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40f0ac:L40f0ac:{c.instructions+=4;NFSU2_TR(0x40f0ac);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40f0b2:{NFSU2_TR(0x40f0b2);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B40f0b5:{NFSU2_TR(0x40f0b5);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B40f0b6:{NFSU2_TR(0x40f0b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f090u);}goto L40f090;}}
}
B40f0b8:L40f0b8:{c.instructions+=2;NFSU2_TR(0x40f0b8);
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
B40f0b9:{NFSU2_TR(0x40f0b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f086u);}goto L40f086;}}
}
B40f0bb:L40f0bb:{c.instructions+=6;NFSU2_TR(0x40f0bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f0bf:{NFSU2_TR(0x40f0bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40f0c0:{NFSU2_TR(0x40f0c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f0c1:{NFSU2_TR(0x40f0c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40f0c2:{NFSU2_TR(0x40f0c2);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B40f0c5:{NFSU2_TR(0x40f0c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40f0c6:L40f0c6:{c.instructions+=2;NFSU2_TR(0x40f0c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40f0c7:{NFSU2_TR(0x40f0c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f0d0:L40f0d0:{c.instructions+=9;NFSU2_TR(0x40f0d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f0d1:{NFSU2_TR(0x40f0d1);
__builtin_memmove((R+20),(R+16),4);
}
B40f0d3:{NFSU2_TR(0x40f0d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B40f0d6:{NFSU2_TR(0x40f0d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B40f0d9:{NFSU2_TR(0x40f0d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f0da:{NFSU2_TR(0x40f0da);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40f0de:{NFSU2_TR(0x40f0de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f0df:{NFSU2_TR(0x40f0df);
__builtin_memmove((R+24),(R+4),4);
}
B40f0e1:{NFSU2_TR(0x40f0e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f0e6ull));
TAIL_STATIC(0x43c780u,43c);
}
B40f0e6:L40f0e6:{c.instructions+=26;NFSU2_TR(0x40f0e6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f0ea:{NFSU2_TR(0x40f0ea);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f0ed:{NFSU2_TR(0x40f0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f0f0:{NFSU2_TR(0x40f0f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40f0f2:{NFSU2_TR(0x40f0f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f0f6:{NFSU2_TR(0x40f0f6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f0fa:{NFSU2_TR(0x40f0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f0fd:{NFSU2_TR(0x40f0fd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f101:{NFSU2_TR(0x40f101);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40f104:{NFSU2_TR(0x40f104);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f107:{NFSU2_TR(0x40f107);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40f10b:{NFSU2_TR(0x40f10b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f10c:{NFSU2_TR(0x40f10c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f114:{NFSU2_TR(0x40f114);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f118:{NFSU2_TR(0x40f118);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f11c:{NFSU2_TR(0x40f11c);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f11f:{NFSU2_TR(0x40f11f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f123:{NFSU2_TR(0x40f123);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f126:{NFSU2_TR(0x40f126);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f12a:{NFSU2_TR(0x40f12a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f12d:{NFSU2_TR(0x40f12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f130:{NFSU2_TR(0x40f130);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B40f133:{NFSU2_TR(0x40f133);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B40f136:{NFSU2_TR(0x40f136);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B40f13a:{NFSU2_TR(0x40f13a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f13e:{NFSU2_TR(0x40f13e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f143ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f010u);}goto L40f010;}
}
B40f143:L40f143:{c.instructions+=4;NFSU2_TR(0x40f143);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f144:{NFSU2_TR(0x40f144);
__builtin_memmove((R+16),(R+20),4);
}
B40f146:{NFSU2_TR(0x40f146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40f147:{NFSU2_TR(0x40f147);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f150:L40f150:{c.instructions+=5;NFSU2_TR(0x40f150);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B40f152:{NFSU2_TR(0x40f152);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f153:{NFSU2_TR(0x40f153);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B40f155:{NFSU2_TR(0x40f155);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40f157:{NFSU2_TR(0x40f157);
if(r1(R+518)){{goto L40f176;}}
}
B40f159:L40f159:{c.instructions+=3;NFSU2_TR(0x40f159);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f15a:{NFSU2_TR(0x40f15a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40f15d:{NFSU2_TR(0x40f15d);
w4(R+24,u32(0x3ull));
}
B40f162:L40f162:{c.instructions+=1;NFSU2_TR(0x40f162);
w4(R+8,u32(0x28ull));
}
B40f167:L40f167:{c.instructions+=5;NFSU2_TR(0x40f167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40f169:{NFSU2_TR(0x40f169);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B40f16c:{NFSU2_TR(0x40f16c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B40f16d:{NFSU2_TR(0x40f16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f170:{NFSU2_TR(0x40f170);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f167u);}goto L40f167;}}
}
B40f172:L40f172:{c.instructions+=2;NFSU2_TR(0x40f172);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40f173:{NFSU2_TR(0x40f173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f162u);}goto L40f162;}}
}
B40f175:L40f175:{c.instructions+=1;NFSU2_TR(0x40f175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f176:L40f176:{c.instructions+=2;NFSU2_TR(0x40f176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40f177:{NFSU2_TR(0x40f177);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f180:L40f180:{c.instructions+=26;NFSU2_TR(0x40f180);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f181:{NFSU2_TR(0x40f181);
__builtin_memmove((R+20),(R+16),4);
}
B40f183:{NFSU2_TR(0x40f183);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B40f186:{NFSU2_TR(0x40f186);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f188:{NFSU2_TR(0x40f188);
u8 U[4];
w4(U+0,u32(0x77131bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f18d:{NFSU2_TR(0x40f18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f193:{NFSU2_TR(0x40f193);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f194:{NFSU2_TR(0x40f194);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f19b:{NFSU2_TR(0x40f19b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x368ull))));
}
B40f1a1:{NFSU2_TR(0x40f1a1);
__builtin_memmove((R+4),gp(0x89e7a4),4);
}
B40f1a7:{NFSU2_TR(0x40f1a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40f1a9:{NFSU2_TR(0x40f1a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f1aa:{NFSU2_TR(0x40f1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40f1ad:{NFSU2_TR(0x40f1ad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40f1af:{NFSU2_TR(0x40f1af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f1b0:{NFSU2_TR(0x40f1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40f1b3:{NFSU2_TR(0x40f1b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f1b7:{NFSU2_TR(0x40f1b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f1bb:{NFSU2_TR(0x40f1bb);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B40f1c0:{NFSU2_TR(0x40f1c0);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40f1c5:{NFSU2_TR(0x40f1c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f1c8:{NFSU2_TR(0x40f1c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f1c9:{NFSU2_TR(0x40f1c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40f1cc:{NFSU2_TR(0x40f1cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x497423f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f1d4:{NFSU2_TR(0x40f1d4);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40f1d8:{NFSU2_TR(0x40f1d8);
if(r1(R+518)){{goto L40f1e2;}}
}
B40f1da:L40f1da:{c.instructions+=1;NFSU2_TR(0x40f1da);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x42c80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f1e2:L40f1e2:{c.instructions+=2;NFSU2_TR(0x40f1e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40f1e6:{NFSU2_TR(0x40f1e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f1ebull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B40f1eb:L40f1eb:{c.instructions+=4;NFSU2_TR(0x40f1eb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
}
B40f1f1:{NFSU2_TR(0x40f1f1);
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
B40f1f3:{NFSU2_TR(0x40f1f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f1fe:{NFSU2_TR(0x40f1fe);
if(r1(R+518)){{goto L40f20f;}}
}
B40f200:L40f200:{c.instructions+=2;NFSU2_TR(0x40f200);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+13))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40f203:{NFSU2_TR(0x40f203);
if(r1(R+518)){{goto L40f20f;}}
}
B40f205:L40f205:{c.instructions+=3;NFSU2_TR(0x40f205);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f206:{NFSU2_TR(0x40f206);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40f20a:{NFSU2_TR(0x40f20a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f20full));
TAIL_STATIC(0x401680u,401);
}
B40f20f:L40f20f:{c.instructions+=4;NFSU2_TR(0x40f20f);
__builtin_memmove((R+12),gp(0x88a320),4);
}
B40f215:{NFSU2_TR(0x40f215);
w4(R+4,u32(0x88a320ull));
}
B40f21a:{NFSU2_TR(0x40f21a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f21e:{NFSU2_TR(0x40f21e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f223ull));
TAIL_STATIC(0x502fd0u,502);
}
B40f223:L40f223:{c.instructions+=3;NFSU2_TR(0x40f223);
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
B40f225:{NFSU2_TR(0x40f225);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f229:{NFSU2_TR(0x40f229);
if(r1(R+518)){{goto L40f453;}}
}
B40f22f:L40f22f:{c.instructions+=4;NFSU2_TR(0x40f22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f232:{NFSU2_TR(0x40f232);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80ull))));
}
B40f237:{NFSU2_TR(0x40f237);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f23b:{NFSU2_TR(0x40f23b);
{goto L40f245;}
}
B40f23d:L40f23d:{c.instructions+=2;NFSU2_TR(0x40f23d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40f241:{NFSU2_TR(0x40f241);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f245:L40f245:{c.instructions+=2;NFSU2_TR(0x40f245);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f247:{NFSU2_TR(0x40f247);
if(r1(R+518)){{goto L40f258;}}
}
B40f249:L40f249:{c.instructions+=2;NFSU2_TR(0x40f249);
__builtin_memmove((R+4),(R+12),4);
}
B40f24b:{NFSU2_TR(0x40f24b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f250ull));
TAIL_STATIC(0x5d4460u,5d4);
}
B40f250:L40f250:{c.instructions+=2;NFSU2_TR(0x40f250);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f252:{NFSU2_TR(0x40f252);
if(r1(R+518)){{goto L40f400;}}
}
B40f258:L40f258:{c.instructions+=3;NFSU2_TR(0x40f258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f25b:{NFSU2_TR(0x40f25b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f25e:{NFSU2_TR(0x40f25e);
if(r1(R+518)){{goto L40f26f;}}
}
B40f260:L40f260:{c.instructions+=2;NFSU2_TR(0x40f260);
__builtin_memmove((R+4),(R+12),4);
}
B40f262:{NFSU2_TR(0x40f262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f267ull));
TAIL_STATIC(0x5d4460u,5d4);
}
B40f267:L40f267:{c.instructions+=2;NFSU2_TR(0x40f267);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f269:{NFSU2_TR(0x40f269);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40f400;}}
}
B40f26f:L40f26f:{c.instructions+=9;NFSU2_TR(0x40f26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f272:{NFSU2_TR(0x40f272);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40f275:{NFSU2_TR(0x40f275);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f279:{NFSU2_TR(0x40f279);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f27a:{NFSU2_TR(0x40f27a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f27b:{NFSU2_TR(0x40f27b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f27c:{NFSU2_TR(0x40f27c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f27d:{NFSU2_TR(0x40f27d);
__builtin_memmove((R+4),(R+12),4);
}
B40f27f:{NFSU2_TR(0x40f27f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f284ull));
TAIL_STATIC(0x5e2e40u,5e2);
}
B40f284:L40f284:{c.instructions+=3;NFSU2_TR(0x40f284);
__builtin_memmove((R+24),(R+0),4);
}
B40f286:{NFSU2_TR(0x40f286);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f288:{NFSU2_TR(0x40f288);
if(r1(R+518)){{goto L40f400;}}
}
B40f28e:L40f28e:{c.instructions+=2;NFSU2_TR(0x40f28e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B40f292:{NFSU2_TR(0x40f292);
if(r1(R+518)){{goto L40f2aa;}}
}
B40f294:L40f294:{c.instructions+=3;NFSU2_TR(0x40f294);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40f298:{NFSU2_TR(0x40f298);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f29a:{NFSU2_TR(0x40f29a);
if(r1(R+518)){{goto L40f2aa;}}
}
B40f29c:L40f29c:{c.instructions+=5;NFSU2_TR(0x40f29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f29f:{NFSU2_TR(0x40f29f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f2a0:{NFSU2_TR(0x40f2a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f2a1:{NFSU2_TR(0x40f2a1);
__builtin_memmove((R+4),(R+24),4);
}
B40f2a3:{NFSU2_TR(0x40f2a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f2a8ull));
TAIL_STATIC(0x5d8b00u,5d8);
}
B40f2a8:L40f2a8:{c.instructions+=1;NFSU2_TR(0x40f2a8);
{goto L40f2b2;}
}
B40f2aa:L40f2aa:{c.instructions+=3;NFSU2_TR(0x40f2aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f2ab:{NFSU2_TR(0x40f2ab);
__builtin_memmove((R+4),(R+24),4);
}
B40f2ad:{NFSU2_TR(0x40f2ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f2b2ull));
TAIL_STATIC(0x5d4410u,5d4);
}
B40f2b2:L40f2b2:{c.instructions+=5;NFSU2_TR(0x40f2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f2b5:{NFSU2_TR(0x40f2b5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f2b9:{NFSU2_TR(0x40f2b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f2bc:{NFSU2_TR(0x40f2bc);
w1(R+12,u8(0x1ull));
}
B40f2be:{NFSU2_TR(0x40f2be);
if(r1(R+518)){{goto L40f2eb;}}
}
B40f2c0:L40f2c0:{c.instructions+=11;NFSU2_TR(0x40f2c0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40f2c4:{NFSU2_TR(0x40f2c4);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40f2c7:{NFSU2_TR(0x40f2c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f2cb:{NFSU2_TR(0x40f2cb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40f2cf:{NFSU2_TR(0x40f2cf);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f2d5:{NFSU2_TR(0x40f2d5);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40f2d8:{NFSU2_TR(0x40f2d8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40f2da:{NFSU2_TR(0x40f2da);
{u32 ea_=u32(u32(7878540u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40f2e0:{NFSU2_TR(0x40f2e0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40f2e2:{NFSU2_TR(0x40f2e2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40f2e5:{NFSU2_TR(0x40f2e5);
if(r1(R+514)){{goto L40f2e9;}}
}
B40f2e7:L40f2e7:{c.instructions+=1;NFSU2_TR(0x40f2e7);
{goto L40f2eb;}
}
B40f2e9:L40f2e9:{c.instructions+=1;NFSU2_TR(0x40f2e9);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B40f2eb:L40f2eb:{c.instructions+=2;NFSU2_TR(0x40f2eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f2ee:{NFSU2_TR(0x40f2ee);
if(r1(R+518)){{goto L40f368;}}
}
B40f2f0:L40f2f0:{c.instructions+=5;NFSU2_TR(0x40f2f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40f2f4:{NFSU2_TR(0x40f2f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f2f6:{NFSU2_TR(0x40f2f6);
__builtin_memmove((R+4),(R+24),4);
}
B40f2f8:{NFSU2_TR(0x40f2f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f2f9:{NFSU2_TR(0x40f2f9);
if(r1(R+518)){{goto L40f30e;}}
}
B40f2fb:L40f2fb:{c.instructions+=1;NFSU2_TR(0x40f2fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f300ull));
TAIL_STATIC(0x40cd00u,40c);
}
B40f300:L40f300:{c.instructions+=4;NFSU2_TR(0x40f300);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f304:{NFSU2_TR(0x40f304);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f305:{NFSU2_TR(0x40f305);
__builtin_memmove((R+4),(R+24),4);
}
B40f307:{NFSU2_TR(0x40f307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f30cull));
TAIL_STATIC(0x40ce90u,40c);
}
B40f30c:L40f30c:{c.instructions+=1;NFSU2_TR(0x40f30c);
{goto L40f342;}
}
B40f30e:L40f30e:{c.instructions+=1;NFSU2_TR(0x40f30e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f313ull));
TAIL_STATIC(0x40cd90u,40c);
}
B40f313:L40f313:{c.instructions+=5;NFSU2_TR(0x40f313);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f317:{NFSU2_TR(0x40f317);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40f31b:{NFSU2_TR(0x40f31b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f31c:{NFSU2_TR(0x40f31c);
__builtin_memmove((R+4),(R+24),4);
}
B40f31e:{NFSU2_TR(0x40f31e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f323ull));
TAIL_STATIC(0x401aa0u,401);
}
B40f323:L40f323:{c.instructions+=11;NFSU2_TR(0x40f323);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f326:{NFSU2_TR(0x40f326);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40f329:{NFSU2_TR(0x40f329);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f32a:{NFSU2_TR(0x40f32a);
__builtin_memmove((R+4),(R+24),4);
}
B40f32c:{NFSU2_TR(0x40f32c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f330:{NFSU2_TR(0x40f330);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f332:{NFSU2_TR(0x40f332);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40f334:{NFSU2_TR(0x40f334);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f338:{NFSU2_TR(0x40f338);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40f33a:{NFSU2_TR(0x40f33a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f33d:{NFSU2_TR(0x40f33d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f342ull));
TAIL_STATIC(0x40cee0u,40c);
}
B40f342:L40f342:{c.instructions+=5;NFSU2_TR(0x40f342);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f346:{NFSU2_TR(0x40f346);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40f34c:{NFSU2_TR(0x40f34c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40f34e:{NFSU2_TR(0x40f34e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40f351:{NFSU2_TR(0x40f351);
if(r1(R+514)){{goto L40f3fa;}}
}
B40f357:L40f357:{c.instructions+=4;NFSU2_TR(0x40f357);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40f35d:{NFSU2_TR(0x40f35d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40f35f:{NFSU2_TR(0x40f35f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40f362:{NFSU2_TR(0x40f362);
if(r1(R+514)){{goto L40f3fc;}}
}
B40f368:L40f368:{c.instructions+=2;NFSU2_TR(0x40f368);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f36a:{NFSU2_TR(0x40f36a);
if(r1(R+518)){{goto L40f3fc;}}
}
B40f370:L40f370:{c.instructions+=5;NFSU2_TR(0x40f370);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f374:{NFSU2_TR(0x40f374);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40f378:{NFSU2_TR(0x40f378);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40f37a:{NFSU2_TR(0x40f37a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40f37d:{NFSU2_TR(0x40f37d);
if(r1(R+514)){{goto L40f3fc;}}
}
B40f37f:L40f37f:{c.instructions+=5;NFSU2_TR(0x40f37f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f383:{NFSU2_TR(0x40f383);
{u32 ea_=u32(u32(7884428u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40f389:{NFSU2_TR(0x40f389);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40f38b:{NFSU2_TR(0x40f38b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40f38e:{NFSU2_TR(0x40f38e);
if(r1(R+514)){{goto L40f3e4;}}
}
B40f390:L40f390:{c.instructions+=3;NFSU2_TR(0x40f390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f393:{NFSU2_TR(0x40f393);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40f396:{NFSU2_TR(0x40f396);
if(r1(R+518)){{goto L40f3e4;}}
}
B40f398:L40f398:{c.instructions+=4;NFSU2_TR(0x40f398);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40f39c:{NFSU2_TR(0x40f39c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f39d:{NFSU2_TR(0x40f39d);
__builtin_memmove((R+4),(R+24),4);
}
B40f39f:{NFSU2_TR(0x40f39f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f3a4ull));
TAIL_STATIC(0x401a00u,401);
}
B40f3a4:L40f3a4:{c.instructions+=8;NFSU2_TR(0x40f3a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f3a6:{NFSU2_TR(0x40f3a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f3a8:{NFSU2_TR(0x40f3a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f3aa:{NFSU2_TR(0x40f3aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f3ab:{NFSU2_TR(0x40f3ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40f3af:{NFSU2_TR(0x40f3af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f3b0:{NFSU2_TR(0x40f3b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40f3b4:{NFSU2_TR(0x40f3b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f3b9ull));
TAIL_STATIC(0x5e7ed0u,5e7);
}
B40f3b9:L40f3b9:{c.instructions+=5;NFSU2_TR(0x40f3b9);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B40f3bb:{NFSU2_TR(0x40f3bb);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B40f3bd:{NFSU2_TR(0x40f3bd);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B40f3bf:{NFSU2_TR(0x40f3bf);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40f3c3:{NFSU2_TR(0x40f3c3);
if(r1(R+518)){{goto L40f3fc;}}
}
B40f3c5:L40f3c5:{c.instructions+=5;NFSU2_TR(0x40f3c5);
u8 U[4];
w4(U+0,u32(0x3fc00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f3ca:{NFSU2_TR(0x40f3ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40f3ce:{NFSU2_TR(0x40f3ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f3cf:{NFSU2_TR(0x40f3cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40f3d3:{NFSU2_TR(0x40f3d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f3d8ull));
TAIL_STATIC(0x5e8110u,5e8);
}
B40f3d8:L40f3d8:{c.instructions+=5;NFSU2_TR(0x40f3d8);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B40f3da:{NFSU2_TR(0x40f3da);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B40f3dc:{NFSU2_TR(0x40f3dc);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B40f3de:{NFSU2_TR(0x40f3de);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40f3e2:{NFSU2_TR(0x40f3e2);
if(r1(R+518)){{goto L40f3fc;}}
}
B40f3e4:L40f3e4:{c.instructions+=6;NFSU2_TR(0x40f3e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f3e8:{NFSU2_TR(0x40f3e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40f3ec:{NFSU2_TR(0x40f3ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f3f0:{NFSU2_TR(0x40f3f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f3f4:{NFSU2_TR(0x40f3f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f3f8:{NFSU2_TR(0x40f3f8);
{goto L40f3fc;}
}
B40f3fa:L40f3fa:{c.instructions+=1;NFSU2_TR(0x40f3fa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40f3fc:L40f3fc:{c.instructions+=1;NFSU2_TR(0x40f3fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40f400:L40f400:{c.instructions+=4;NFSU2_TR(0x40f400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B40f402:{NFSU2_TR(0x40f402);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40f406:{NFSU2_TR(0x40f406);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f40a:{NFSU2_TR(0x40f40a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f23du);}goto L40f23d;}}
}
B40f410:L40f410:{c.instructions+=3;NFSU2_TR(0x40f410);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40f414:{NFSU2_TR(0x40f414);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40f416:{NFSU2_TR(0x40f416);
if(r1(R+518)){{goto L40f453;}}
}
B40f418:L40f418:{c.instructions+=3;NFSU2_TR(0x40f418);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f41c:{NFSU2_TR(0x40f41c);
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
B40f41e:{NFSU2_TR(0x40f41e);
if(r1(R+518)){{goto L40f453;}}
}
B40f420:L40f420:{c.instructions+=6;NFSU2_TR(0x40f420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f423:{NFSU2_TR(0x40f423);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f426:{NFSU2_TR(0x40f426);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40f42a:{NFSU2_TR(0x40f42a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B40f42c:{NFSU2_TR(0x40f42c);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f437:{NFSU2_TR(0x40f437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f43cull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B40f43c:L40f43c:{c.instructions+=9;NFSU2_TR(0x40f43c);
w1(R+0,u8(0x1ull));
}
B40f43e:{NFSU2_TR(0x40f43e);
u8 U[8];
w4(U+0,u32(u32(u32(0x374ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f445:{NFSU2_TR(0x40f445);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f44c:{NFSU2_TR(0x40f44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40f44d:{NFSU2_TR(0x40f44d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f44e:{NFSU2_TR(0x40f44e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40f44f:{NFSU2_TR(0x40f44f);
__builtin_memmove((R+16),(R+20),4);
}
B40f451:{NFSU2_TR(0x40f451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40f452:{NFSU2_TR(0x40f452);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f453:L40f453:{c.instructions+=3;NFSU2_TR(0x40f453);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40f457:{NFSU2_TR(0x40f457);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f462:{NFSU2_TR(0x40f462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f467ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B40f467:L40f467:{c.instructions+=9;NFSU2_TR(0x40f467);
u8 U[8];
w4(U+0,u32(u32(u32(0x374ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f46e:{NFSU2_TR(0x40f46e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40f46f:{NFSU2_TR(0x40f46f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f470:{NFSU2_TR(0x40f470);
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
B40f472:{NFSU2_TR(0x40f472);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f479:{NFSU2_TR(0x40f479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40f47a:{NFSU2_TR(0x40f47a);
__builtin_memmove((R+16),(R+20),4);
}
B40f47c:{NFSU2_TR(0x40f47c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40f47d:{NFSU2_TR(0x40f47d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f480:L40f480:{c.instructions+=4;NFSU2_TR(0x40f480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40f482:{NFSU2_TR(0x40f482);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B40f484:{NFSU2_TR(0x40f484);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40f486:{NFSU2_TR(0x40f486);
if(r1(R+518)){{goto L40f49e;}}
}
B40f488:L40f488:{c.instructions+=3;NFSU2_TR(0x40f488);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f48b:{NFSU2_TR(0x40f48b);
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
B40f48d:{NFSU2_TR(0x40f48d);
if(r1(R+518)){{goto L40f49e;}}
}
B40f48f:L40f48f:{c.instructions+=4;NFSU2_TR(0x40f48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f492:{NFSU2_TR(0x40f492);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B40f497:{NFSU2_TR(0x40f497);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+0))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+0)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B40f49b:{NFSU2_TR(0x40f49b);
__builtin_memmove((R+0),(R+518),1);
}
B40f49e:L40f49e:{c.instructions+=1;NFSU2_TR(0x40f49e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f4a0:L40f4a0:{c.instructions+=7;NFSU2_TR(0x40f4a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B40f4a3:{NFSU2_TR(0x40f4a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f4a4:{NFSU2_TR(0x40f4a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40f4a8:{NFSU2_TR(0x40f4a8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B40f4ab:{NFSU2_TR(0x40f4ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f4ad:{NFSU2_TR(0x40f4ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f4b1:{NFSU2_TR(0x40f4b1);
if(r1(R+518)){{goto L40f61d;}}
}
B40f4b7:L40f4b7:{c.instructions+=3;NFSU2_TR(0x40f4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f4ba:{NFSU2_TR(0x40f4ba);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B40f4bf:{NFSU2_TR(0x40f4bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40f4ce;}}
}
B40f4c1:L40f4c1:{c.instructions+=3;NFSU2_TR(0x40f4c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40f4c8:{NFSU2_TR(0x40f4c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f4cc:{NFSU2_TR(0x40f4cc);
{goto L40f4d6;}
}
B40f4ce:L40f4ce:{c.instructions+=1;NFSU2_TR(0x40f4ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f4d6:L40f4d6:{c.instructions+=7;NFSU2_TR(0x40f4d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f4da:{NFSU2_TR(0x40f4da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f4dc:{NFSU2_TR(0x40f4dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f4dd:{NFSU2_TR(0x40f4dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f4de:{NFSU2_TR(0x40f4de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f4df:{NFSU2_TR(0x40f4df);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x50061c46ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f4e7:{NFSU2_TR(0x40f4e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40f534;}}
}
B40f4e9:L40f4e9:{c.instructions+=22;NFSU2_TR(0x40f4e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B40f4ed:{NFSU2_TR(0x40f4ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40f4f1:{NFSU2_TR(0x40f4f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f4f5:{NFSU2_TR(0x40f4f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f4f9:{NFSU2_TR(0x40f4f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40f4fd:{NFSU2_TR(0x40f4fd);
w4(R+24,u32(0x2ull));
}
B40f502:{NFSU2_TR(0x40f502);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40f506:{NFSU2_TR(0x40f506);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f50a:{NFSU2_TR(0x40f50a);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f510:{NFSU2_TR(0x40f510);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40f514:{NFSU2_TR(0x40f514);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f51a:{NFSU2_TR(0x40f51a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f51c:{NFSU2_TR(0x40f51c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40f51e:{NFSU2_TR(0x40f51e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40f520:{NFSU2_TR(0x40f520);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f523:{NFSU2_TR(0x40f523);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40f526:{NFSU2_TR(0x40f526);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40f528:{NFSU2_TR(0x40f528);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40f52a:{NFSU2_TR(0x40f52a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f52e:{NFSU2_TR(0x40f52e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40f530:{NFSU2_TR(0x40f530);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40f532:{NFSU2_TR(0x40f532);
{goto L40f582;}
}
B40f534:L40f534:{c.instructions+=4;NFSU2_TR(0x40f534);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40f538:{NFSU2_TR(0x40f538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f539:{NFSU2_TR(0x40f539);
__builtin_memmove((R+4),(R+28),4);
}
B40f53b:{NFSU2_TR(0x40f53b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f540ull));
TAIL_STATIC(0x401aa0u,401);
}
B40f540:L40f540:{c.instructions+=13;NFSU2_TR(0x40f540);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f544:{NFSU2_TR(0x40f544);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f546:{NFSU2_TR(0x40f546);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40f54a:{NFSU2_TR(0x40f54a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40f550:{NFSU2_TR(0x40f550);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40f552:{NFSU2_TR(0x40f552);
w4(R+24,u32(0x6ull));
}
B40f557:{NFSU2_TR(0x40f557);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f55b:{NFSU2_TR(0x40f55b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f55e:{NFSU2_TR(0x40f55e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40f561:{NFSU2_TR(0x40f561);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f565:{NFSU2_TR(0x40f565);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40f567:{NFSU2_TR(0x40f567);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f56b:{NFSU2_TR(0x40f56b);
if(r1(R+518)){{goto L40f570;}}
}
B40f56d:L40f56d:{c.instructions+=1;NFSU2_TR(0x40f56d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B40f570:L40f570:{c.instructions+=3;NFSU2_TR(0x40f570);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f574:{NFSU2_TR(0x40f574);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f579:{NFSU2_TR(0x40f579);
if(r1(R+518)){{goto L40f582;}}
}
B40f57b:L40f57b:{c.instructions+=2;NFSU2_TR(0x40f57b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B40f57e:{NFSU2_TR(0x40f57e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f582:L40f582:{c.instructions+=3;NFSU2_TR(0x40f582);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40f588:{NFSU2_TR(0x40f588);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40f58b:{NFSU2_TR(0x40f58b);
if(r1(R+518)){{goto L40f59c;}}
}
B40f58d:L40f58d:{c.instructions+=3;NFSU2_TR(0x40f58d);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40f595:{NFSU2_TR(0x40f595);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40f59a:{NFSU2_TR(0x40f59a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40f5a1;}}
}
B40f59c:L40f59c:{c.instructions+=1;NFSU2_TR(0x40f59c);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40f5a1:L40f5a1:{c.instructions+=2;NFSU2_TR(0x40f5a1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40f5a3:{NFSU2_TR(0x40f5a3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40f616;}}
}
B40f5a5:L40f5a5:{c.instructions+=1;NFSU2_TR(0x40f5a5);
{goto L40f5b0;}
}
B40f5b0:L40f5b0:{c.instructions+=4;NFSU2_TR(0x40f5b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f5b4:{NFSU2_TR(0x40f5b4);
u8 U[13];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B40f5bb:{NFSU2_TR(0x40f5bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f5bd:{NFSU2_TR(0x40f5bd);
if(r1(R+518)){{goto L40f5f6;}}
}
B40f5bf:L40f5bf:{c.instructions+=3;NFSU2_TR(0x40f5bf);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40f5c3:{NFSU2_TR(0x40f5c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f5c5:{NFSU2_TR(0x40f5c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40f5d1;}}
}
B40f5c7:L40f5c7:{c.instructions+=2;NFSU2_TR(0x40f5c7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40f5c9:{NFSU2_TR(0x40f5c9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40f5d1;}}
}
B40f5cb:L40f5cb:{c.instructions+=2;NFSU2_TR(0x40f5cb);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40f5cf:{NFSU2_TR(0x40f5cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40f5f6;}}
}
B40f5d1:L40f5d1:{c.instructions+=3;NFSU2_TR(0x40f5d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f5d2:{NFSU2_TR(0x40f5d2);
__builtin_memmove((R+4),(R+28),4);
}
B40f5d4:{NFSU2_TR(0x40f5d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f5d9ull));
TAIL_STATIC(0x401c40u,401);
}
B40f5d9:L40f5d9:{c.instructions+=6;NFSU2_TR(0x40f5d9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40f5dd:{NFSU2_TR(0x40f5dd);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40f5df:{NFSU2_TR(0x40f5df);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40f5e3:{NFSU2_TR(0x40f5e3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40f5e5:{NFSU2_TR(0x40f5e5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40f5e8:{NFSU2_TR(0x40f5e8);
if(r1(R+514)){{goto L40f5f4;}}
}
B40f5ea:L40f5ea:{c.instructions+=3;NFSU2_TR(0x40f5ea);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f5ee:{NFSU2_TR(0x40f5ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f5f2:{NFSU2_TR(0x40f5f2);
{goto L40f5f6;}
}
B40f5f4:L40f5f4:{c.instructions+=1;NFSU2_TR(0x40f5f4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40f5f6:L40f5f6:{c.instructions+=3;NFSU2_TR(0x40f5f6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B40f5f7:{NFSU2_TR(0x40f5f7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40f5f9:{NFSU2_TR(0x40f5f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f5b0u);}goto L40f5b0;}}
}
B40f5fb:L40f5fb:{c.instructions+=3;NFSU2_TR(0x40f5fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f5ff:{NFSU2_TR(0x40f5ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40f602:{NFSU2_TR(0x40f602);
if(r1(R+518)){{goto L40f61a;}}
}
B40f604:L40f604:{c.instructions+=2;NFSU2_TR(0x40f604);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40f609:{NFSU2_TR(0x40f609);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40f61a;}}
}
B40f60b:L40f60b:{c.instructions+=7;NFSU2_TR(0x40f60b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f60c:{NFSU2_TR(0x40f60c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40f60d:{NFSU2_TR(0x40f60d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40f60e:{NFSU2_TR(0x40f60e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B40f611:{NFSU2_TR(0x40f611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40f612:{NFSU2_TR(0x40f612);
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
B40f615:{NFSU2_TR(0x40f615);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f616:L40f616:{c.instructions+=1;NFSU2_TR(0x40f616);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f61a:L40f61a:{c.instructions+=3;NFSU2_TR(0x40f61a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f61b:{NFSU2_TR(0x40f61b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40f61c:{NFSU2_TR(0x40f61c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40f61d:L40f61d:{c.instructions+=3;NFSU2_TR(0x40f61d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40f61e:{NFSU2_TR(0x40f61e);
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
B40f621:{NFSU2_TR(0x40f621);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f630:L40f630:{c.instructions+=6;NFSU2_TR(0x40f630);
__builtin_memmove((R+0),(R+4),4);
}
B40f632:{NFSU2_TR(0x40f632);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f633:{NFSU2_TR(0x40f633);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40f636:{NFSU2_TR(0x40f636);
u8 U[4];
w4(U+0,u32(0x7843f0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B40f63c:{NFSU2_TR(0x40f63c);
__builtin_memmove((R+24),(R+8),4);
}
B40f63e:{NFSU2_TR(0x40f63e);
w4(R+4,u32(0x10ull));
}
B40f643:L40f643:{c.instructions+=4;NFSU2_TR(0x40f643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffff8ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B40f646:{NFSU2_TR(0x40f646);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B40f649:{NFSU2_TR(0x40f649);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B40f64a:{NFSU2_TR(0x40f64a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f643u);}goto L40f643;}}
}
B40f64c:L40f64c:{c.instructions+=5;NFSU2_TR(0x40f64c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f650:{NFSU2_TR(0x40f650);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f653:{NFSU2_TR(0x40f653);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40f65a:{NFSU2_TR(0x40f65a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40f65e:{NFSU2_TR(0x40f65e);
w4(R+4,u32(0x10ull));
}
B40f663:L40f663:{c.instructions+=4;NFSU2_TR(0x40f663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+8)),r4(U+0));
}
B40f666:{NFSU2_TR(0x40f666);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B40f669:{NFSU2_TR(0x40f669);
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
B40f66a:{NFSU2_TR(0x40f66a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f663u);}goto L40f663;}}
}
B40f66c:L40f66c:{c.instructions+=2;NFSU2_TR(0x40f66c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f66d:{NFSU2_TR(0x40f66d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f670:L40f670:{c.instructions+=5;NFSU2_TR(0x40f670);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B40f675:{NFSU2_TR(0x40f675);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f676:{NFSU2_TR(0x40f676);
__builtin_memmove((R+24),(R+4),4);
}
B40f678:{NFSU2_TR(0x40f678);
u8 U[4];
w4(U+0,u32(0x7843f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40f67e:{NFSU2_TR(0x40f67e);
if(r1(R+518)){{goto L40f689;}}
}
B40f680:L40f680:{c.instructions+=2;NFSU2_TR(0x40f680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f681:{NFSU2_TR(0x40f681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f686ull));
TAIL_STATIC(0x575630u,575);
}
B40f686:L40f686:{c.instructions+=1;NFSU2_TR(0x40f686);
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
B40f689:L40f689:{c.instructions+=3;NFSU2_TR(0x40f689);
__builtin_memmove((R+0),(R+24),4);
}
B40f68b:{NFSU2_TR(0x40f68b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f68c:{NFSU2_TR(0x40f68c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f690:L40f690:{c.instructions+=3;NFSU2_TR(0x40f690);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f693:{NFSU2_TR(0x40f693);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f695:{NFSU2_TR(0x40f695);
if(r1(R+518)){{goto L40f6a7;}}
}
B40f697:L40f697:{c.instructions+=4;NFSU2_TR(0x40f697);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f69a:{NFSU2_TR(0x40f69a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40f69f:{NFSU2_TR(0x40f69f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40f6a6:{NFSU2_TR(0x40f6a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f6a7:L40f6a7:{c.instructions+=2;NFSU2_TR(0x40f6a7);
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
B40f6a9:{NFSU2_TR(0x40f6a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f6b0:L40f6b0:{c.instructions+=3;NFSU2_TR(0x40f6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f6b3:{NFSU2_TR(0x40f6b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f6b5:{NFSU2_TR(0x40f6b5);
if(r1(R+518)){{goto L40f6ea;}}
}
B40f6b7:L40f6b7:{c.instructions+=5;NFSU2_TR(0x40f6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f6ba:{NFSU2_TR(0x40f6ba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B40f6c0:{NFSU2_TR(0x40f6c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B40f6c7:{NFSU2_TR(0x40f6c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f6c9:{NFSU2_TR(0x40f6c9);
if(r1(R+518)){{goto L40f6ea;}}
}
B40f6cb:L40f6cb:{c.instructions+=12;NFSU2_TR(0x40f6cb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B40f6cd:{NFSU2_TR(0x40f6cd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x8cull))));
}
B40f6d2:{NFSU2_TR(0x40f6d2);
__builtin_memmove((R+4),(R+0),4);
}
B40f6d4:{NFSU2_TR(0x40f6d4);
w4(R+0,u32(0x92492493ull));
}
B40f6d9:{NFSU2_TR(0x40f6d9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B40f6db:{NFSU2_TR(0x40f6db);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B40f6dd:{NFSU2_TR(0x40f6dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B40f6e0:{NFSU2_TR(0x40f6e0);
__builtin_memmove((R+0),(R+8),4);
}
B40f6e2:{NFSU2_TR(0x40f6e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B40f6e5:{NFSU2_TR(0x40f6e5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40f6e7:{NFSU2_TR(0x40f6e7);
__builtin_memmove((R+0),(R+8),4);
}
B40f6e9:{NFSU2_TR(0x40f6e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f6ea:L40f6ea:{c.instructions+=2;NFSU2_TR(0x40f6ea);
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
B40f6ed:{NFSU2_TR(0x40f6ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f6f0:L40f6f0:{c.instructions+=8;NFSU2_TR(0x40f6f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f6f1:{NFSU2_TR(0x40f6f1);
__builtin_memmove((R+12),gp(0x88f2be),1);
}
B40f6f7:{NFSU2_TR(0x40f6f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f6f8:{NFSU2_TR(0x40f6f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f6f9:{NFSU2_TR(0x40f6f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f6fa:{NFSU2_TR(0x40f6fa);
__builtin_memmove((R+28),(R+4),4);
}
B40f6fc:{NFSU2_TR(0x40f6fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f6ff:{NFSU2_TR(0x40f6ff);
w4(R+20,u32(0x10ull));
}
B40f704:L40f704:{c.instructions+=3;NFSU2_TR(0x40f704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40f706:{NFSU2_TR(0x40f706);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f708:{NFSU2_TR(0x40f708);
if(r1(R+518)){{goto L40f741;}}
}
B40f70a:L40f70a:{c.instructions+=2;NFSU2_TR(0x40f70a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f70c:{NFSU2_TR(0x40f70c);
if(r1(R+518)){{goto L40f741;}}
}
B40f70e:L40f70e:{c.instructions+=12;NFSU2_TR(0x40f70e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f711:{NFSU2_TR(0x40f711);
{u32 ea_=u32(r4(R+4)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f717:{NFSU2_TR(0x40f717);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B40f71d:{NFSU2_TR(0x40f71d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B40f720:{NFSU2_TR(0x40f720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B40f723:{NFSU2_TR(0x40f723);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B40f728:{NFSU2_TR(0x40f728);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f72c:{NFSU2_TR(0x40f72c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40f72f:{NFSU2_TR(0x40f72f);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f732:{NFSU2_TR(0x40f732);
w4(R+4,u32(0x88f298ull));
}
B40f737:{NFSU2_TR(0x40f737);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f73a:{NFSU2_TR(0x40f73a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f73full));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B40f73f:L40f73f:{c.instructions+=1;NFSU2_TR(0x40f73f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40f741:L40f741:{c.instructions+=3;NFSU2_TR(0x40f741);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B40f744:{NFSU2_TR(0x40f744);
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
B40f745:{NFSU2_TR(0x40f745);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f704u);}goto L40f704;}}
}
B40f747:L40f747:{c.instructions+=5;NFSU2_TR(0x40f747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40f748:{NFSU2_TR(0x40f748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f749:{NFSU2_TR(0x40f749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40f74a:{NFSU2_TR(0x40f74a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40f74b:{NFSU2_TR(0x40f74b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f750:L40f750:{c.instructions+=5;NFSU2_TR(0x40f750);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B40f755:{NFSU2_TR(0x40f755);
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
B40f757:{NFSU2_TR(0x40f757);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f758:{NFSU2_TR(0x40f758);
__builtin_memmove((R+24),(R+4),4);
}
B40f75a:{NFSU2_TR(0x40f75a);
if(r1(R+518)){{goto L40f78f;}}
}
B40f75c:L40f75c:{c.instructions+=3;NFSU2_TR(0x40f75c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f75f:{NFSU2_TR(0x40f75f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f761:{NFSU2_TR(0x40f761);
if(r1(R+518)){{goto L40f77f;}}
}
B40f763:L40f763:{c.instructions+=1;NFSU2_TR(0x40f763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f768ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B40f768:L40f768:{c.instructions+=8;NFSU2_TR(0x40f768);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f76b:{NFSU2_TR(0x40f76b);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B40f76d:{NFSU2_TR(0x40f76d);
w1(R+0,u8(~u32(r1(R+0))));
}
B40f76f:{NFSU2_TR(0x40f76f);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40f771:{NFSU2_TR(0x40f771);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40f774:{NFSU2_TR(0x40f774);
s1(0x827ab4,u8(0x0ull));
}
B40f77b:{NFSU2_TR(0x40f77b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f77c:{NFSU2_TR(0x40f77c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f77f:L40f77f:{c.instructions+=3;NFSU2_TR(0x40f77f);
__builtin_memmove((R+0),gp(0x827ab4),1);
}
B40f784:{NFSU2_TR(0x40f784);
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
B40f786:{NFSU2_TR(0x40f786);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40f78f;}}
}
B40f788:L40f788:{c.instructions+=1;NFSU2_TR(0x40f788);
s1(0x827ab4,u8(0x1ull));
}
B40f78f:L40f78f:{c.instructions+=2;NFSU2_TR(0x40f78f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f790:{NFSU2_TR(0x40f790);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f7a0:L40f7a0:{c.instructions+=8;NFSU2_TR(0x40f7a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B40f7a3:{NFSU2_TR(0x40f7a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f7a4:{NFSU2_TR(0x40f7a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40f7a8:{NFSU2_TR(0x40f7a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f7a9:{NFSU2_TR(0x40f7a9);
__builtin_memmove((R+24),(R+4),4);
}
B40f7ab:{NFSU2_TR(0x40f7ab);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B40f7ae:{NFSU2_TR(0x40f7ae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40f7b0:{NFSU2_TR(0x40f7b0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40f885;}}
}
B40f7b6:L40f7b6:{c.instructions+=4;NFSU2_TR(0x40f7b6);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B40f7b8:{NFSU2_TR(0x40f7b8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40f7ba:{NFSU2_TR(0x40f7ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f7bb:{NFSU2_TR(0x40f7bb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40f848;}}
}
B40f7c1:L40f7c1:{c.instructions+=13;NFSU2_TR(0x40f7c1);
u8 U[12];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B40f7c8:{NFSU2_TR(0x40f7c8);
__builtin_memmove((R+8),(R+12),4);
}
B40f7ca:{NFSU2_TR(0x40f7ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40f7cd:{NFSU2_TR(0x40f7cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f7d1:{NFSU2_TR(0x40f7d1);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B40f7d5:{NFSU2_TR(0x40f7d5);
w4(R+8,u32(0xfffffe60ull));
}
B40f7da:{NFSU2_TR(0x40f7da);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B40f7dc:{NFSU2_TR(0x40f7dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f7dd:{NFSU2_TR(0x40f7dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40f7e3:{NFSU2_TR(0x40f7e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40f7e9:{NFSU2_TR(0x40f7e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40f7ec:{NFSU2_TR(0x40f7ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f7f0:{NFSU2_TR(0x40f7f0);
{goto L40f7f6;}
}
B40f7f2:L40f7f2:{c.instructions+=1;NFSU2_TR(0x40f7f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40f7f6:L40f7f6:{c.instructions+=27;NFSU2_TR(0x40f7f6);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f7f9:{NFSU2_TR(0x40f7f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40f7fd:{NFSU2_TR(0x40f7fd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f7ff:{NFSU2_TR(0x40f7ff);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2ull))));
}
B40f802:{NFSU2_TR(0x40f802);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f805:{NFSU2_TR(0x40f805);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f809:{NFSU2_TR(0x40f809);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f80c:{NFSU2_TR(0x40f80c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40f80e:{NFSU2_TR(0x40f80e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B40f811:{NFSU2_TR(0x40f811);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f814:{NFSU2_TR(0x40f814);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B40f817:{NFSU2_TR(0x40f817);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f81a:{NFSU2_TR(0x40f81a);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B40f81e:{NFSU2_TR(0x40f81e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B40f822:{NFSU2_TR(0x40f822);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40f826:{NFSU2_TR(0x40f826);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+8),(U+0),2);
}
B40f829:{NFSU2_TR(0x40f829);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B40f82d:{NFSU2_TR(0x40f82d);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B40f830:{NFSU2_TR(0x40f830);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40f834:{NFSU2_TR(0x40f834);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B40f836:{NFSU2_TR(0x40f836);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B40f83b:{NFSU2_TR(0x40f83b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(s32(s8(r1(U+0)))));
}
B40f83e:{NFSU2_TR(0x40f83e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B40f83f:{NFSU2_TR(0x40f83f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B40f841:{NFSU2_TR(0x40f841);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+28))));
}
B40f843:{NFSU2_TR(0x40f843);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40f845:{NFSU2_TR(0x40f845);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f7f2u);}goto L40f7f2;}}
}
B40f847:L40f847:{c.instructions+=1;NFSU2_TR(0x40f847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40f848:L40f848:{c.instructions+=9;NFSU2_TR(0x40f848);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B40f84a:{NFSU2_TR(0x40f84a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40f84e:{NFSU2_TR(0x40f84e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B40f850:{NFSU2_TR(0x40f850);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B40f852:{NFSU2_TR(0x40f852);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40f854:{NFSU2_TR(0x40f854);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B40f856:{NFSU2_TR(0x40f856);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f85c:{NFSU2_TR(0x40f85c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f862:{NFSU2_TR(0x40f862);
if(r1(R+518)){{goto L40f86b;}}
}
B40f864:L40f864:{c.instructions+=2;NFSU2_TR(0x40f864);
__builtin_memmove((R+4),(R+24),4);
}
B40f866:{NFSU2_TR(0x40f866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40f86bull));
TAIL_STATIC(0x405270u,405);
}
B40f86b:L40f86b:{c.instructions+=9;NFSU2_TR(0x40f86b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B40f872:{NFSU2_TR(0x40f872);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B40f874:{NFSU2_TR(0x40f874);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40f876:{NFSU2_TR(0x40f876);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40f878:{NFSU2_TR(0x40f878);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B40f87b:{NFSU2_TR(0x40f87b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40f87c:{NFSU2_TR(0x40f87c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B40f87d:{NFSU2_TR(0x40f87d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B40f87f:{NFSU2_TR(0x40f87f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40f885:L40f885:{c.instructions+=4;NFSU2_TR(0x40f885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40f886:{NFSU2_TR(0x40f886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40f887:{NFSU2_TR(0x40f887);
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
B40f88a:{NFSU2_TR(0x40f88a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40f890:L40f890:{c.instructions+=180;NFSU2_TR(0x40f890);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f891:{NFSU2_TR(0x40f891);
__builtin_memmove((R+20),(R+16),4);
}
B40f893:{NFSU2_TR(0x40f893);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B40f896:{NFSU2_TR(0x40f896);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f898:{NFSU2_TR(0x40f898);
u8 U[4];
w4(U+0,u32(0x77140eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f89d:{NFSU2_TR(0x40f89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f8a3:{NFSU2_TR(0x40f8a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f8a4:{NFSU2_TR(0x40f8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f8ab:{NFSU2_TR(0x40f8ab);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xbcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xbcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xbcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40f8b1:{NFSU2_TR(0x40f8b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f8b2:{NFSU2_TR(0x40f8b2);
__builtin_memmove((R+24),(R+4),4);
}
B40f8b4:{NFSU2_TR(0x40f8b4);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f8b7:{NFSU2_TR(0x40f8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f8ba:{NFSU2_TR(0x40f8ba);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f8bd:{NFSU2_TR(0x40f8bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f8c0:{NFSU2_TR(0x40f8c0);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f8c3:{NFSU2_TR(0x40f8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40f8c6:{NFSU2_TR(0x40f8c6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B40f8c8:{NFSU2_TR(0x40f8c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f8cc:{NFSU2_TR(0x40f8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f8cf:{NFSU2_TR(0x40f8cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f8d3:{NFSU2_TR(0x40f8d3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f8d7:{NFSU2_TR(0x40f8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f8da:{NFSU2_TR(0x40f8da);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40f8dc:{NFSU2_TR(0x40f8dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f8e0:{NFSU2_TR(0x40f8e0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f8e4:{NFSU2_TR(0x40f8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40f8e7:{NFSU2_TR(0x40f8e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f8eb:{NFSU2_TR(0x40f8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f8ee:{NFSU2_TR(0x40f8ee);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f8f2:{NFSU2_TR(0x40f8f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f8f6:{NFSU2_TR(0x40f8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40f8f9:{NFSU2_TR(0x40f8f9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f8fd:{NFSU2_TR(0x40f8fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f901:{NFSU2_TR(0x40f901);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f905:{NFSU2_TR(0x40f905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40f908:{NFSU2_TR(0x40f908);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f90c:{NFSU2_TR(0x40f90c);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f910:{NFSU2_TR(0x40f910);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f914:{NFSU2_TR(0x40f914);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40f917:{NFSU2_TR(0x40f917);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f91b:{NFSU2_TR(0x40f91b);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f91f:{NFSU2_TR(0x40f91f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f923:{NFSU2_TR(0x40f923);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40f927:{NFSU2_TR(0x40f927);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f92b:{NFSU2_TR(0x40f92b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40f92c:{NFSU2_TR(0x40f92c);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f92f:{NFSU2_TR(0x40f92f);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B40f931:{NFSU2_TR(0x40f931);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f935:{NFSU2_TR(0x40f935);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40f937:{NFSU2_TR(0x40f937);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f93b:{NFSU2_TR(0x40f93b);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f93f:{NFSU2_TR(0x40f93f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40f941:{NFSU2_TR(0x40f941);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f945:{NFSU2_TR(0x40f945);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f949:{NFSU2_TR(0x40f949);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40f94b:{NFSU2_TR(0x40f94b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f94f:{NFSU2_TR(0x40f94f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f953:{NFSU2_TR(0x40f953);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40f955:{NFSU2_TR(0x40f955);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f959:{NFSU2_TR(0x40f959);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40f95b:{NFSU2_TR(0x40f95b);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f95e:{NFSU2_TR(0x40f95e);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B40f960:{NFSU2_TR(0x40f960);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f964:{NFSU2_TR(0x40f964);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40f966:{NFSU2_TR(0x40f966);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f96a:{NFSU2_TR(0x40f96a);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f96e:{NFSU2_TR(0x40f96e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40f970:{NFSU2_TR(0x40f970);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f974:{NFSU2_TR(0x40f974);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f978:{NFSU2_TR(0x40f978);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40f97a:{NFSU2_TR(0x40f97a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f97e:{NFSU2_TR(0x40f97e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f982:{NFSU2_TR(0x40f982);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f986:{NFSU2_TR(0x40f986);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f98a:{NFSU2_TR(0x40f98a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f990:{NFSU2_TR(0x40f990);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40f992:{NFSU2_TR(0x40f992);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f998:{NFSU2_TR(0x40f998);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40f99c:{NFSU2_TR(0x40f99c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40f99e:{NFSU2_TR(0x40f99e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B40f9a0:{NFSU2_TR(0x40f9a0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f9a6:{NFSU2_TR(0x40f9a6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f9aa:{NFSU2_TR(0x40f9aa);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f9ae:{NFSU2_TR(0x40f9ae);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40f9b2:{NFSU2_TR(0x40f9b2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40f9b4:{NFSU2_TR(0x40f9b4);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f9bb:{NFSU2_TR(0x40f9bb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f9bf:{NFSU2_TR(0x40f9bf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40f9c5:{NFSU2_TR(0x40f9c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f9c9:{NFSU2_TR(0x40f9c9);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B40f9cb:{NFSU2_TR(0x40f9cb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40f9cf:{NFSU2_TR(0x40f9cf);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B40f9d1:{NFSU2_TR(0x40f9d1);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f9d8:{NFSU2_TR(0x40f9d8);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B40f9da:{NFSU2_TR(0x40f9da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40f9de:{NFSU2_TR(0x40f9de);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40f9e2:{NFSU2_TR(0x40f9e2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40f9e4:{NFSU2_TR(0x40f9e4);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40f9eb:{NFSU2_TR(0x40f9eb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40f9ed:{NFSU2_TR(0x40f9ed);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40f9f1:{NFSU2_TR(0x40f9f1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40f9f5:{NFSU2_TR(0x40f9f5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40f9f9:{NFSU2_TR(0x40f9f9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40f9fd:{NFSU2_TR(0x40f9fd);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fa04:{NFSU2_TR(0x40fa04);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa08:{NFSU2_TR(0x40fa08);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fa0e:{NFSU2_TR(0x40fa0e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa12:{NFSU2_TR(0x40fa12);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fa18:{NFSU2_TR(0x40fa18);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa1c:{NFSU2_TR(0x40fa1c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fa22:{NFSU2_TR(0x40fa22);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa26:{NFSU2_TR(0x40fa26);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40fa28:{NFSU2_TR(0x40fa28);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40fa2a:{NFSU2_TR(0x40fa2a);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B40fa2c:{NFSU2_TR(0x40fa2c);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fa33:{NFSU2_TR(0x40fa33);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa37:{NFSU2_TR(0x40fa37);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fa3d:{NFSU2_TR(0x40fa3d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40fa3f:{NFSU2_TR(0x40fa3f);
__asm__ volatile(".byte 0xd8,0xc4":::"memory");
}
B40fa41:{NFSU2_TR(0x40fa41);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa45:{NFSU2_TR(0x40fa45);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40fa47:{NFSU2_TR(0x40fa47);
__asm__ volatile(".byte 0xd8,0xc4":::"memory");
}
B40fa49:{NFSU2_TR(0x40fa49);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fa50:{NFSU2_TR(0x40fa50);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa54:{NFSU2_TR(0x40fa54);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40fa56:{NFSU2_TR(0x40fa56);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B40fa58:{NFSU2_TR(0x40fa58);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fa5f:{NFSU2_TR(0x40fa5f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fa61:{NFSU2_TR(0x40fa61);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa65:{NFSU2_TR(0x40fa65);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40fa67:{NFSU2_TR(0x40fa67);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40fa69:{NFSU2_TR(0x40fa69);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B40fa6b:{NFSU2_TR(0x40fa6b);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fa72:{NFSU2_TR(0x40fa72);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fa74:{NFSU2_TR(0x40fa74);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fa76:{NFSU2_TR(0x40fa76);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fa78:{NFSU2_TR(0x40fa78);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fa7a:{NFSU2_TR(0x40fa7a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa7e:{NFSU2_TR(0x40fa7e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fa84:{NFSU2_TR(0x40fa84);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa88:{NFSU2_TR(0x40fa88);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fa8e:{NFSU2_TR(0x40fa8e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa92:{NFSU2_TR(0x40fa92);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fa98:{NFSU2_TR(0x40fa98);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fa9c:{NFSU2_TR(0x40fa9c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40fa9e:{NFSU2_TR(0x40fa9e);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40faa0:{NFSU2_TR(0x40faa0);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B40faa2:{NFSU2_TR(0x40faa2);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40faa9:{NFSU2_TR(0x40faa9);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40faad:{NFSU2_TR(0x40faad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fab3:{NFSU2_TR(0x40fab3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40fab5:{NFSU2_TR(0x40fab5);
__asm__ volatile(".byte 0xd8,0xc4":::"memory");
}
B40fab7:{NFSU2_TR(0x40fab7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fabb:{NFSU2_TR(0x40fabb);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40fabd:{NFSU2_TR(0x40fabd);
__asm__ volatile(".byte 0xd8,0xc4":::"memory");
}
B40fabf:{NFSU2_TR(0x40fabf);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fac6:{NFSU2_TR(0x40fac6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40faca:{NFSU2_TR(0x40faca);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40facc:{NFSU2_TR(0x40facc);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B40face:{NFSU2_TR(0x40face);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fad5:{NFSU2_TR(0x40fad5);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40fadc:{NFSU2_TR(0x40fadc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fadd:{NFSU2_TR(0x40fadd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fadf:{NFSU2_TR(0x40fadf);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40fae3:{NFSU2_TR(0x40fae3);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fae7:{NFSU2_TR(0x40fae7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fae8:{NFSU2_TR(0x40fae8);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B40faea:{NFSU2_TR(0x40faea);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40faf5:{NFSU2_TR(0x40faf5);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40fb00:{NFSU2_TR(0x40fb00);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B40fb02:{NFSU2_TR(0x40fb02);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40fb0d:{NFSU2_TR(0x40fb0d);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40fb18:{NFSU2_TR(0x40fb18);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B40fb1a:{NFSU2_TR(0x40fb1a);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fb21:{NFSU2_TR(0x40fb21);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fb23:{NFSU2_TR(0x40fb23);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fb25:{NFSU2_TR(0x40fb25);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fb27:{NFSU2_TR(0x40fb27);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fb29:{NFSU2_TR(0x40fb29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fb2eull));
TAIL_STATIC(0x4012b0u,401);
}
B40fb2e:L40fb2e:{c.instructions+=11;NFSU2_TR(0x40fb2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fb31:{NFSU2_TR(0x40fb31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40fb33:{NFSU2_TR(0x40fb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40fb36:{NFSU2_TR(0x40fb36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fb39:{NFSU2_TR(0x40fb39);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fb3d:{NFSU2_TR(0x40fb3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fb40:{NFSU2_TR(0x40fb40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40fb43:{NFSU2_TR(0x40fb43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40fb45:{NFSU2_TR(0x40fb45);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fb49:{NFSU2_TR(0x40fb49);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fb4d:{NFSU2_TR(0x40fb4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fb9e;}}
}
B40fb4f:L40fb4f:{c.instructions+=3;NFSU2_TR(0x40fb4f);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B40fb55:{NFSU2_TR(0x40fb55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fb56:{NFSU2_TR(0x40fb56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fb5bull));
TAIL_STATIC(0x440e50u,440);
}
B40fb5b:L40fb5b:{c.instructions+=6;NFSU2_TR(0x40fb5b);
__builtin_memmove((R+28),(R+0),4);
}
B40fb5d:{NFSU2_TR(0x40fb5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40fb60:{NFSU2_TR(0x40fb60);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fb64:{NFSU2_TR(0x40fb64);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40fb66:{NFSU2_TR(0x40fb66);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40fb71:{NFSU2_TR(0x40fb71);
if(r1(R+518)){{goto L40fb8e;}}
}
B40fb73:L40fb73:{c.instructions+=4;NFSU2_TR(0x40fb73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fb75:{NFSU2_TR(0x40fb75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fb77:{NFSU2_TR(0x40fb77);
u8 U[4];
w4(U+0,u32(0x784ea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fb7c:{NFSU2_TR(0x40fb7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fb81ull));
TAIL_STATIC(0x43db50u,43d);
}
B40fb81:L40fb81:{c.instructions+=4;NFSU2_TR(0x40fb81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40fb84:{NFSU2_TR(0x40fb84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fb85:{NFSU2_TR(0x40fb85);
__builtin_memmove((R+4),(R+28),4);
}
B40fb87:{NFSU2_TR(0x40fb87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fb8cull));
TAIL_STATIC(0x637db0u,637);
}
B40fb8c:L40fb8c:{c.instructions+=1;NFSU2_TR(0x40fb8c);
{goto L40fb90;}
}
B40fb8e:L40fb8e:{c.instructions+=1;NFSU2_TR(0x40fb8e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40fb90:L40fb90:{c.instructions+=2;NFSU2_TR(0x40fb90);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B40fb9b:{NFSU2_TR(0x40fb9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fb9e:L40fb9e:{c.instructions+=4;NFSU2_TR(0x40fb9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40fba1:{NFSU2_TR(0x40fba1);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40fba5:{NFSU2_TR(0x40fba5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fba6:{NFSU2_TR(0x40fba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fbabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f010u);}goto L40f010;}
}
B40fbab:L40fbab:{c.instructions+=7;NFSU2_TR(0x40fbab);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40fbb2:{NFSU2_TR(0x40fbb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40fbb3:{NFSU2_TR(0x40fbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fbba:{NFSU2_TR(0x40fbba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40fbbb:{NFSU2_TR(0x40fbbb);
__builtin_memmove((R+16),(R+20),4);
}
B40fbbd:{NFSU2_TR(0x40fbbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40fbbe:{NFSU2_TR(0x40fbbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40fbd0:L40fbd0:{c.instructions+=3;NFSU2_TR(0x40fbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fbd3:{NFSU2_TR(0x40fbd3);
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
B40fbd5:{NFSU2_TR(0x40fbd5);
if(r1(R+518)){{goto L40fbde;}}
}
B40fbd7:L40fbd7:{c.instructions+=1;NFSU2_TR(0x40fbd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40fbde:L40fbde:{c.instructions+=1;NFSU2_TR(0x40fbde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40fbe0:L40fbe0:{c.instructions+=13;NFSU2_TR(0x40fbe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40fbe4:{NFSU2_TR(0x40fbe4);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fbe7:{NFSU2_TR(0x40fbe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40fbe9:{NFSU2_TR(0x40fbe9);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fbec:{NFSU2_TR(0x40fbec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B40fbee:{NFSU2_TR(0x40fbee);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fbf1:{NFSU2_TR(0x40fbf1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40fbf4:{NFSU2_TR(0x40fbf4);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40fbfa:{NFSU2_TR(0x40fbfa);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40fbfc:{NFSU2_TR(0x40fbfc);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40fc02:{NFSU2_TR(0x40fc02);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40fc04:{NFSU2_TR(0x40fc04);
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
B40fc07:{NFSU2_TR(0x40fc07);
if(r1(R+514)){{goto L40fc28;}}
}
B40fc09:L40fc09:{c.instructions+=3;NFSU2_TR(0x40fc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fc0c:{NFSU2_TR(0x40fc0c);
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
B40fc0e:{NFSU2_TR(0x40fc0e);
if(r1(R+518)){{goto L40fc17;}}
}
B40fc10:L40fc10:{c.instructions+=2;NFSU2_TR(0x40fc10);
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
B40fc15:{NFSU2_TR(0x40fc15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fc1f;}}
}
B40fc17:L40fc17:{c.instructions+=2;NFSU2_TR(0x40fc17);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B40fc1c:{NFSU2_TR(0x40fc1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fc1f:L40fc1f:{c.instructions+=3;NFSU2_TR(0x40fc1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40fc22:{NFSU2_TR(0x40fc22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fc25:{NFSU2_TR(0x40fc25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40fc28:L40fc28:{c.instructions+=4;NFSU2_TR(0x40fc28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40fc2f:{NFSU2_TR(0x40fc2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fc32:{NFSU2_TR(0x40fc32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fc35:{NFSU2_TR(0x40fc35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40fc40:L40fc40:{c.instructions+=5;NFSU2_TR(0x40fc40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fc41:{NFSU2_TR(0x40fc41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fc42:{NFSU2_TR(0x40fc42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B40fc44:{NFSU2_TR(0x40fc44);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40fc46:{NFSU2_TR(0x40fc46);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40fc51;}}
}
B40fc48:L40fc48:{c.instructions+=2;NFSU2_TR(0x40fc48);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40fc4b:{NFSU2_TR(0x40fc4b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40fc51;}}
}
B40fc4d:L40fc4d:{c.instructions+=2;NFSU2_TR(0x40fc4d);
w1(R+12,u8(0x1ull));
}
B40fc4f:{NFSU2_TR(0x40fc4f);
{goto L40fc53;}
}
B40fc51:L40fc51:{c.instructions+=1;NFSU2_TR(0x40fc51);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B40fc53:L40fc53:{c.instructions+=2;NFSU2_TR(0x40fc53);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40fc56:{NFSU2_TR(0x40fc56);
if(r1(R+518)){{goto L40fc79;}}
}
B40fc58:L40fc58:{c.instructions+=3;NFSU2_TR(0x40fc58);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40fc5c:{NFSU2_TR(0x40fc5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fc5d:{NFSU2_TR(0x40fc5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fc62ull));
TAIL_STATIC(0x40aa90u,40a);
}
B40fc62:L40fc62:{c.instructions+=2;NFSU2_TR(0x40fc62);
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
B40fc64:{NFSU2_TR(0x40fc64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fc6f;}}
}
B40fc66:L40fc66:{c.instructions+=2;NFSU2_TR(0x40fc66);
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
B40fc68:{NFSU2_TR(0x40fc68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fc6f;}}
}
B40fc6a:L40fc6a:{c.instructions+=2;NFSU2_TR(0x40fc6a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B40fc6d:{NFSU2_TR(0x40fc6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fc79;}}
}
B40fc6f:L40fc6f:{c.instructions+=4;NFSU2_TR(0x40fc6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40fc70:{NFSU2_TR(0x40fc70);
w4(R+0,u32(0x1ull));
}
B40fc75:{NFSU2_TR(0x40fc75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40fc76:{NFSU2_TR(0x40fc76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40fc79:L40fc79:{c.instructions+=4;NFSU2_TR(0x40fc79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40fc7a:{NFSU2_TR(0x40fc7a);
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
B40fc7c:{NFSU2_TR(0x40fc7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40fc7d:{NFSU2_TR(0x40fc7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40fc80:L40fc80:{c.instructions+=5;NFSU2_TR(0x40fc80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fc81:{NFSU2_TR(0x40fc81);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40fc85:{NFSU2_TR(0x40fc85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40fc87:{NFSU2_TR(0x40fc87);
__builtin_memmove((R+4),(R+24),4);
}
B40fc89:{NFSU2_TR(0x40fc89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fc8cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40fc8c:L40fc8c:{c.instructions+=6;NFSU2_TR(0x40fc8c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fc90:{NFSU2_TR(0x40fc90);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fc94:{NFSU2_TR(0x40fc94);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40fc98:{NFSU2_TR(0x40fc98);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40fc9a:{NFSU2_TR(0x40fc9a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40fc9d:{NFSU2_TR(0x40fc9d);
if(r1(R+514)){{goto L40fcb0;}}
}
B40fc9f:L40fc9f:{c.instructions+=5;NFSU2_TR(0x40fc9f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40fca3:{NFSU2_TR(0x40fca3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40fca7:{NFSU2_TR(0x40fca7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40fca9:{NFSU2_TR(0x40fca9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40fcac:{NFSU2_TR(0x40fcac);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40fcc5;}}
}
B40fcae:L40fcae:{c.instructions+=1;NFSU2_TR(0x40fcae);
{goto L40fcbf;}
}
B40fcb0:L40fcb0:{c.instructions+=5;NFSU2_TR(0x40fcb0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40fcb4:{NFSU2_TR(0x40fcb4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40fcb8:{NFSU2_TR(0x40fcb8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40fcba:{NFSU2_TR(0x40fcba);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40fcbd:{NFSU2_TR(0x40fcbd);
if(r1(R+518)){{goto L40fcc5;}}
}
B40fcbf:L40fcbf:{c.instructions+=2;NFSU2_TR(0x40fcbf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fcc1:{NFSU2_TR(0x40fcc1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fcc5:L40fcc5:{c.instructions+=3;NFSU2_TR(0x40fcc5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fcc9:{NFSU2_TR(0x40fcc9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40fccb:{NFSU2_TR(0x40fccb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40fcd7;}}
}
B40fccd:L40fccd:{c.instructions+=2;NFSU2_TR(0x40fccd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40fcd0:{NFSU2_TR(0x40fcd0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40fcd7;}}
}
B40fcd2:L40fcd2:{c.instructions+=2;NFSU2_TR(0x40fcd2);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fcd5:{NFSU2_TR(0x40fcd5);
{goto L40fced;}
}
B40fcd7:L40fcd7:{c.instructions+=2;NFSU2_TR(0x40fcd7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40fcda:{NFSU2_TR(0x40fcda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40fce7;}}
}
B40fcdc:L40fcdc:{c.instructions+=2;NFSU2_TR(0x40fcdc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40fcdf:{NFSU2_TR(0x40fcdf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40fce7;}}
}
B40fce1:L40fce1:{c.instructions+=2;NFSU2_TR(0x40fce1);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fce5:{NFSU2_TR(0x40fce5);
{goto L40fced;}
}
B40fce7:L40fce7:{c.instructions+=1;NFSU2_TR(0x40fce7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fced:L40fced:{c.instructions+=4;NFSU2_TR(0x40fced);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40fcef:{NFSU2_TR(0x40fcef);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40fcf3:{NFSU2_TR(0x40fcf3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fcf7:{NFSU2_TR(0x40fcf7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40fd03;}}
}
B40fcf9:L40fcf9:{c.instructions+=2;NFSU2_TR(0x40fcf9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40fcfc:{NFSU2_TR(0x40fcfc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40fd03;}}
}
B40fcfe:L40fcfe:{c.instructions+=2;NFSU2_TR(0x40fcfe);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fd01:{NFSU2_TR(0x40fd01);
{goto L40fd19;}
}
B40fd03:L40fd03:{c.instructions+=2;NFSU2_TR(0x40fd03);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40fd06:{NFSU2_TR(0x40fd06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40fd13;}}
}
B40fd08:L40fd08:{c.instructions+=2;NFSU2_TR(0x40fd08);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40fd0b:{NFSU2_TR(0x40fd0b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40fd13;}}
}
B40fd0d:L40fd0d:{c.instructions+=2;NFSU2_TR(0x40fd0d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fd11:{NFSU2_TR(0x40fd11);
{goto L40fd19;}
}
B40fd13:L40fd13:{c.instructions+=1;NFSU2_TR(0x40fd13);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fd19:L40fd19:{c.instructions+=6;NFSU2_TR(0x40fd19);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40fd1d:{NFSU2_TR(0x40fd1d);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B40fd22:{NFSU2_TR(0x40fd22);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40fd24:{NFSU2_TR(0x40fd24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40fd25:{NFSU2_TR(0x40fd25);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fd29:{NFSU2_TR(0x40fd29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fd81;}}
}
B40fd2b:L40fd2b:{c.instructions+=3;NFSU2_TR(0x40fd2b);
__builtin_memmove((R+0),gp(0x890108),4);
}
B40fd30:{NFSU2_TR(0x40fd30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40fd32:{NFSU2_TR(0x40fd32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fd81;}}
}
B40fd34:L40fd34:{c.instructions+=3;NFSU2_TR(0x40fd34);
__builtin_memmove((R+0),gp(0x890114),4);
}
B40fd39:{NFSU2_TR(0x40fd39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40fd3b:{NFSU2_TR(0x40fd3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fd4f;}}
}
B40fd3d:L40fd3d:{c.instructions+=3;NFSU2_TR(0x40fd3d);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B40fd42:{NFSU2_TR(0x40fd42);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40fd44:{NFSU2_TR(0x40fd44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fd4f;}}
}
B40fd46:L40fd46:{c.instructions+=3;NFSU2_TR(0x40fd46);
__builtin_memmove((R+0),gp(0x890104),4);
}
B40fd4b:{NFSU2_TR(0x40fd4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40fd4d:{NFSU2_TR(0x40fd4d);
if(r1(R+518)){{goto L40fd81;}}
}
B40fd4f:L40fd4f:{c.instructions+=4;NFSU2_TR(0x40fd4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40fd53:{NFSU2_TR(0x40fd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fd56:{NFSU2_TR(0x40fd56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40fd58:{NFSU2_TR(0x40fd58);
if(r1(R+518)){{goto L40fd81;}}
}
B40fd5a:L40fd5a:{c.instructions+=5;NFSU2_TR(0x40fd5a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fd5e:{NFSU2_TR(0x40fd5e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40fd62:{NFSU2_TR(0x40fd62);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40fd64:{NFSU2_TR(0x40fd64);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40fd67:{NFSU2_TR(0x40fd67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fdb3;}}
}
B40fd69:L40fd69:{c.instructions+=6;NFSU2_TR(0x40fd69);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fd6d:{NFSU2_TR(0x40fd6d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40fd71:{NFSU2_TR(0x40fd71);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fd77:{NFSU2_TR(0x40fd77);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40fd7b:{NFSU2_TR(0x40fd7b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fd7f:{NFSU2_TR(0x40fd7f);
{goto L40fdb3;}
}
B40fd81:L40fd81:{c.instructions+=5;NFSU2_TR(0x40fd81);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fd85:{NFSU2_TR(0x40fd85);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40fd8b:{NFSU2_TR(0x40fd8b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40fd8d:{NFSU2_TR(0x40fd8d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40fd90:{NFSU2_TR(0x40fd90);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40fd9a;}}
}
B40fd92:L40fd92:{c.instructions+=1;NFSU2_TR(0x40fd92);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40fd9a:L40fd9a:{c.instructions+=5;NFSU2_TR(0x40fd9a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fd9e:{NFSU2_TR(0x40fd9e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40fda4:{NFSU2_TR(0x40fda4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40fda6:{NFSU2_TR(0x40fda6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40fda9:{NFSU2_TR(0x40fda9);
if(r1(R+518)){{goto L40fdb3;}}
}
B40fdab:L40fdab:{c.instructions+=1;NFSU2_TR(0x40fdab);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40fdb3:L40fdb3:{c.instructions+=4;NFSU2_TR(0x40fdb3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40fdb7:{NFSU2_TR(0x40fdb7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40fdb9:{NFSU2_TR(0x40fdb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40fdbc:{NFSU2_TR(0x40fdbc);
if(r1(R+518)){{goto L40fdc4;}}
}
B40fdbe:L40fdbe:{c.instructions+=2;NFSU2_TR(0x40fdbe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fdc0:{NFSU2_TR(0x40fdc0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fdc4:L40fdc4:{c.instructions+=5;NFSU2_TR(0x40fdc4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fdc8:{NFSU2_TR(0x40fdc8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40fdca:{NFSU2_TR(0x40fdca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40fdcc:{NFSU2_TR(0x40fdcc);
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
B40fdcf:{NFSU2_TR(0x40fdcf);
if(r1(R+514)){{goto L40fdd7;}}
}
B40fdd1:L40fdd1:{c.instructions+=2;NFSU2_TR(0x40fdd1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40fdd3:{NFSU2_TR(0x40fdd3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fdd7:L40fdd7:{c.instructions+=1;NFSU2_TR(0x40fdd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40fde0:L40fde0:{c.instructions+=6;NFSU2_TR(0x40fde0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fde1:{NFSU2_TR(0x40fde1);
__builtin_memmove((R+24),(R+4),4);
}
B40fde3:{NFSU2_TR(0x40fde3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fde4:{NFSU2_TR(0x40fde4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40fde7:{NFSU2_TR(0x40fde7);
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
B40fde9:{NFSU2_TR(0x40fde9);
if(r1(R+518)){{goto L40fe92;}}
}
B40fdef:L40fdef:{c.instructions+=17;NFSU2_TR(0x40fdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fdf2:{NFSU2_TR(0x40fdf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40fdf8:{NFSU2_TR(0x40fdf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40fdfb:{NFSU2_TR(0x40fdfb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fdfc:{NFSU2_TR(0x40fdfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B40fdff:{NFSU2_TR(0x40fdff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe00:{NFSU2_TR(0x40fe00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40fe06:{NFSU2_TR(0x40fe06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe07:{NFSU2_TR(0x40fe07);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40fe09:{NFSU2_TR(0x40fe09);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40fe0b:{NFSU2_TR(0x40fe0b);
__builtin_memmove((R+8),(R+518),1);
}
B40fe0e:{NFSU2_TR(0x40fe0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40fe11:{NFSU2_TR(0x40fe11);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe12:{NFSU2_TR(0x40fe12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe13:{NFSU2_TR(0x40fe13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe14:{NFSU2_TR(0x40fe14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe15:{NFSU2_TR(0x40fe15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fe1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f4a0u);}goto L40f4a0;}
}
B40fe1a:L40fe1a:{c.instructions+=4;NFSU2_TR(0x40fe1a);
__builtin_memmove((R+28),(R+0),4);
}
B40fe1c:{NFSU2_TR(0x40fe1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B40fe1f:{NFSU2_TR(0x40fe1f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40fe22:{NFSU2_TR(0x40fe22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40fe62;}}
}
B40fe24:L40fe24:{c.instructions+=19;NFSU2_TR(0x40fe24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fe27:{NFSU2_TR(0x40fe27);
w4(R+8,u32(0xffull));
}
B40fe2c:{NFSU2_TR(0x40fe2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe2d:{NFSU2_TR(0x40fe2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fe33:{NFSU2_TR(0x40fe33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40fe39:{NFSU2_TR(0x40fe39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe3a:{NFSU2_TR(0x40fe3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40fe41:{NFSU2_TR(0x40fe41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40fe44:{NFSU2_TR(0x40fe44);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B40fe47:{NFSU2_TR(0x40fe47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40fe4a:{NFSU2_TR(0x40fe4a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40fe4c:{NFSU2_TR(0x40fe4c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40fe4e:{NFSU2_TR(0x40fe4e);
__builtin_memmove((R+8),(R+518),1);
}
B40fe51:{NFSU2_TR(0x40fe51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe52:{NFSU2_TR(0x40fe52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe53:{NFSU2_TR(0x40fe53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40fe56:{NFSU2_TR(0x40fe56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe57:{NFSU2_TR(0x40fe57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe58:{NFSU2_TR(0x40fe58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fe5dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40f4a0u);}goto L40f4a0;}
}
B40fe5d:L40fe5d:{c.instructions+=2;NFSU2_TR(0x40fe5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B40fe60:{NFSU2_TR(0x40fe60);
__builtin_memmove((R+28),(R+0),4);
}
B40fe62:L40fe62:{c.instructions+=7;NFSU2_TR(0x40fe62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fe65:{NFSU2_TR(0x40fe65);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fe6b:{NFSU2_TR(0x40fe6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe6c:{NFSU2_TR(0x40fe6c);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40fe72:{NFSU2_TR(0x40fe72);
w4(R+4,u32(0x81e370ull));
}
B40fe77:{NFSU2_TR(0x40fe77);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fe7a:{NFSU2_TR(0x40fe7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fe7full));
TAIL_STATIC(0x576790u,576);
}
B40fe7f:L40fe7f:{c.instructions+=6;NFSU2_TR(0x40fe7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe80:{NFSU2_TR(0x40fe80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40fe86:{NFSU2_TR(0x40fe86);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40fe89:{NFSU2_TR(0x40fe89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe8b:{NFSU2_TR(0x40fe8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fe8c:{NFSU2_TR(0x40fe8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fe91ull));
TAIL_STATIC(0x4053b0u,405);
}
B40fe91:L40fe91:{c.instructions+=1;NFSU2_TR(0x40fe91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40fe92:L40fe92:{c.instructions+=3;NFSU2_TR(0x40fe92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40fe93:{NFSU2_TR(0x40fe93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40fe94:{NFSU2_TR(0x40fe94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40fea0:L40fea0:{c.instructions+=15;NFSU2_TR(0x40fea0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fea2:{NFSU2_TR(0x40fea2);
u8 U[4];
w4(U+0,u32(0x771444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fea7:{NFSU2_TR(0x40fea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40fead:{NFSU2_TR(0x40fead);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40feae:{NFSU2_TR(0x40feae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40feb5:{NFSU2_TR(0x40feb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40feb6:{NFSU2_TR(0x40feb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40feb7:{NFSU2_TR(0x40feb7);
__builtin_memmove((R+24),(R+4),4);
}
B40feb9:{NFSU2_TR(0x40feb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40feba:{NFSU2_TR(0x40feba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40febe:{NFSU2_TR(0x40febe);
u8 U[4];
w4(U+0,u32(0x784eb0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40fec4:{NFSU2_TR(0x40fec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40feca:{NFSU2_TR(0x40feca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40fecc:{NFSU2_TR(0x40fecc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40fed4:{NFSU2_TR(0x40fed4);
if(r1(R+518)){{goto L40fee6;}}
}
B40fed6:L40fed6:{c.instructions+=2;NFSU2_TR(0x40fed6);
__builtin_memmove((R+4),(R+28),4);
}
B40fed8:{NFSU2_TR(0x40fed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40feddull));
TAIL_STATIC(0x401730u,401);
}
B40fedd:L40fedd:{c.instructions+=2;NFSU2_TR(0x40fedd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fede:{NFSU2_TR(0x40fede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fee3ull));
TAIL_STATIC(0x575630u,575);
}
B40fee3:L40fee3:{c.instructions+=1;NFSU2_TR(0x40fee3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40fee6:L40fee6:{c.instructions+=3;NFSU2_TR(0x40fee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40feec:{NFSU2_TR(0x40feec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40feee:{NFSU2_TR(0x40feee);
if(r1(R+518)){{goto L40ff00;}}
}
B40fef0:L40fef0:{c.instructions+=2;NFSU2_TR(0x40fef0);
__builtin_memmove((R+4),(R+28),4);
}
B40fef2:{NFSU2_TR(0x40fef2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fef7ull));
TAIL_STATIC(0x401730u,401);
}
B40fef7:L40fef7:{c.instructions+=2;NFSU2_TR(0x40fef7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40fef8:{NFSU2_TR(0x40fef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40fefdull));
TAIL_STATIC(0x575630u,575);
}
B40fefd:L40fefd:{c.instructions+=1;NFSU2_TR(0x40fefd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40ff00:L40ff00:{c.instructions+=3;NFSU2_TR(0x40ff00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40ff06:{NFSU2_TR(0x40ff06);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40ff08:{NFSU2_TR(0x40ff08);
if(r1(R+518)){{goto L40ff1a;}}
}
B40ff0a:L40ff0a:{c.instructions+=2;NFSU2_TR(0x40ff0a);
__builtin_memmove((R+4),(R+28),4);
}
B40ff0c:{NFSU2_TR(0x40ff0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff11ull));
TAIL_STATIC(0x401730u,401);
}
B40ff11:L40ff11:{c.instructions+=2;NFSU2_TR(0x40ff11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ff12:{NFSU2_TR(0x40ff12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff17ull));
TAIL_STATIC(0x575630u,575);
}
B40ff17:L40ff17:{c.instructions+=1;NFSU2_TR(0x40ff17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40ff1a:L40ff1a:{c.instructions+=3;NFSU2_TR(0x40ff1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40ff20:{NFSU2_TR(0x40ff20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40ff22:{NFSU2_TR(0x40ff22);
if(r1(R+518)){{goto L40ff34;}}
}
B40ff24:L40ff24:{c.instructions+=2;NFSU2_TR(0x40ff24);
__builtin_memmove((R+4),(R+28),4);
}
B40ff26:{NFSU2_TR(0x40ff26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff2bull));
TAIL_STATIC(0x401730u,401);
}
B40ff2b:L40ff2b:{c.instructions+=2;NFSU2_TR(0x40ff2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ff2c:{NFSU2_TR(0x40ff2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff31ull));
TAIL_STATIC(0x575630u,575);
}
B40ff31:L40ff31:{c.instructions+=1;NFSU2_TR(0x40ff31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40ff34:L40ff34:{c.instructions+=3;NFSU2_TR(0x40ff34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40ff3a:{NFSU2_TR(0x40ff3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40ff3c:{NFSU2_TR(0x40ff3c);
if(r1(R+518)){{goto L40ff4e;}}
}
B40ff3e:L40ff3e:{c.instructions+=2;NFSU2_TR(0x40ff3e);
__builtin_memmove((R+4),(R+28),4);
}
B40ff40:{NFSU2_TR(0x40ff40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff45ull));
TAIL_STATIC(0x401730u,401);
}
B40ff45:L40ff45:{c.instructions+=2;NFSU2_TR(0x40ff45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ff46:{NFSU2_TR(0x40ff46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff4bull));
TAIL_STATIC(0x575630u,575);
}
B40ff4b:L40ff4b:{c.instructions+=1;NFSU2_TR(0x40ff4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40ff4e:L40ff4e:{c.instructions+=3;NFSU2_TR(0x40ff4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40ff54:{NFSU2_TR(0x40ff54);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40ff56:{NFSU2_TR(0x40ff56);
if(r1(R+518)){{goto L40ff68;}}
}
B40ff58:L40ff58:{c.instructions+=2;NFSU2_TR(0x40ff58);
__builtin_memmove((R+4),(R+28),4);
}
B40ff5a:{NFSU2_TR(0x40ff5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff5full));
TAIL_STATIC(0x401730u,401);
}
B40ff5f:L40ff5f:{c.instructions+=2;NFSU2_TR(0x40ff5f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ff60:{NFSU2_TR(0x40ff60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff65ull));
TAIL_STATIC(0x575630u,575);
}
B40ff65:L40ff65:{c.instructions+=1;NFSU2_TR(0x40ff65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40ff68:L40ff68:{c.instructions+=3;NFSU2_TR(0x40ff68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40ff6e:{NFSU2_TR(0x40ff6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40ff70:{NFSU2_TR(0x40ff70);
if(r1(R+518)){{goto L40ff88;}}
}
B40ff72:L40ff72:{c.instructions+=2;NFSU2_TR(0x40ff72);
__builtin_memmove((R+4),(R+28),4);
}
B40ff74:{NFSU2_TR(0x40ff74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff79ull));
TAIL_STATIC(0x633fd0u,633);
}
B40ff79:L40ff79:{c.instructions+=4;NFSU2_TR(0x40ff79);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B40ff7e:{NFSU2_TR(0x40ff7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ff7f:{NFSU2_TR(0x40ff7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ff80:{NFSU2_TR(0x40ff80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff85ull));
TAIL_STATIC(0x43f920u,43f);
}
B40ff85:L40ff85:{c.instructions+=1;NFSU2_TR(0x40ff85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40ff88:L40ff88:{c.instructions+=3;NFSU2_TR(0x40ff88);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x334ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ff8e:{NFSU2_TR(0x40ff8e);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40ff93:{NFSU2_TR(0x40ff93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ff98ull));
TAIL_STATIC(0x40cf90u,40c);
}
B40ff98:L40ff98:{c.instructions+=4;NFSU2_TR(0x40ff98);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ff9e:{NFSU2_TR(0x40ff9e);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40ffa3:{NFSU2_TR(0x40ffa3);
u8 U[4];
w4(U+0,u32(0x78463cull));
s4(u32(r4(R+4)),r4(U+0));
}
B40ffa9:{NFSU2_TR(0x40ffa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ffaeull));
TAIL_STATIC(0x409c50u,409);
}
B40ffae:L40ffae:{c.instructions+=7;NFSU2_TR(0x40ffae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40ffb2:{NFSU2_TR(0x40ffb2);
u8 U[4];
w4(U+0,u32(0x7849c0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40ffb8:{NFSU2_TR(0x40ffb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ffb9:{NFSU2_TR(0x40ffb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ffba:{NFSU2_TR(0x40ffba);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ffc1:{NFSU2_TR(0x40ffc1);
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
B40ffc4:{NFSU2_TR(0x40ffc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ffd0:L40ffd0:{c.instructions+=6;NFSU2_TR(0x40ffd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40ffd4:{NFSU2_TR(0x40ffd4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ffd7:{NFSU2_TR(0x40ffd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40ffd9:{NFSU2_TR(0x40ffd9);
{u32 ea_=u32(r4(R+4)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40ffdf:{NFSU2_TR(0x40ffdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ffe5:{NFSU2_TR(0x40ffe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40fff0:L40fff0:{c.instructions+=2;NFSU2_TR(0x40fff0);
{u32 ea_=u32(r4(R+4)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40fff6:{NFSU2_TR(0x40fff6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x40f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
