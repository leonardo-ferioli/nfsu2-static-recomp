#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x43f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x43f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_43f(u8* __restrict R,Cpu& c);
u32 page_43f(Cpu& c){return body_43f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_43f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x43f002:goto L43f002;
case 0x43f004:goto L43f004;
case 0x43f007:goto L43f007;
case 0x43f00c:c.instructions+=40;goto B43f00c;
case 0x43f00e:c.instructions+=39;goto B43f00e;
case 0x43f010:c.instructions+=38;goto B43f010;
case 0x43f013:c.instructions+=37;goto B43f013;
case 0x43f015:c.instructions+=36;goto B43f015;
case 0x43f018:c.instructions+=35;goto B43f018;
case 0x43f01a:c.instructions+=34;goto B43f01a;
case 0x43f01d:c.instructions+=33;goto B43f01d;
case 0x43f020:c.instructions+=32;goto B43f020;
case 0x43f022:c.instructions+=31;goto B43f022;
case 0x43f025:c.instructions+=30;goto B43f025;
case 0x43f027:c.instructions+=29;goto B43f027;
case 0x43f028:c.instructions+=28;goto B43f028;
case 0x43f02d:c.instructions+=27;goto B43f02d;
case 0x43f02f:c.instructions+=26;goto B43f02f;
case 0x43f032:c.instructions+=25;goto B43f032;
case 0x43f034:c.instructions+=24;goto B43f034;
case 0x43f037:c.instructions+=23;goto B43f037;
case 0x43f039:c.instructions+=22;goto B43f039;
case 0x43f03c:c.instructions+=21;goto B43f03c;
case 0x43f03e:c.instructions+=20;goto B43f03e;
case 0x43f041:c.instructions+=19;goto B43f041;
case 0x43f043:c.instructions+=18;goto B43f043;
case 0x43f046:c.instructions+=17;goto B43f046;
case 0x43f047:c.instructions+=16;goto B43f047;
case 0x43f049:c.instructions+=15;goto B43f049;
case 0x43f04b:c.instructions+=14;goto B43f04b;
case 0x43f04d:c.instructions+=13;goto B43f04d;
case 0x43f04e:c.instructions+=12;goto B43f04e;
case 0x43f053:c.instructions+=11;goto B43f053;
case 0x43f055:c.instructions+=10;goto B43f055;
case 0x43f056:c.instructions+=9;goto B43f056;
case 0x43f05e:c.instructions+=8;goto B43f05e;
case 0x43f061:c.instructions+=7;goto B43f061;
case 0x43f063:c.instructions+=6;goto B43f063;
case 0x43f064:c.instructions+=5;goto B43f064;
case 0x43f068:c.instructions+=4;goto B43f068;
case 0x43f06c:c.instructions+=3;goto B43f06c;
case 0x43f06e:c.instructions+=2;goto B43f06e;
case 0x43f072:c.instructions+=1;goto B43f072;
case 0x43f077:goto L43f077;
case 0x43f07e:c.instructions+=8;goto B43f07e;
case 0x43f084:c.instructions+=7;goto B43f084;
case 0x43f087:c.instructions+=6;goto B43f087;
case 0x43f08b:c.instructions+=5;goto B43f08b;
case 0x43f08e:c.instructions+=4;goto B43f08e;
case 0x43f094:c.instructions+=3;goto B43f094;
case 0x43f09b:c.instructions+=2;goto B43f09b;
case 0x43f0a2:c.instructions+=1;goto B43f0a2;
case 0x43f0a4:goto L43f0a4;
case 0x43f0a8:c.instructions+=4;goto B43f0a8;
case 0x43f0aa:c.instructions+=3;goto B43f0aa;
case 0x43f0ab:c.instructions+=2;goto B43f0ab;
case 0x43f0b0:c.instructions+=1;goto B43f0b0;
case 0x43f0b4:goto L43f0b4;
case 0x43f0b6:c.instructions+=4;goto B43f0b6;
case 0x43f0b9:c.instructions+=3;goto B43f0b9;
case 0x43f0bf:c.instructions+=2;goto B43f0bf;
case 0x43f0c1:c.instructions+=1;goto B43f0c1;
case 0x43f0c3:goto L43f0c3;
case 0x43f0c8:c.instructions+=1;goto B43f0c8;
case 0x43f0cc:goto L43f0cc;
case 0x43f0ce:c.instructions+=2;goto B43f0ce;
case 0x43f0d2:c.instructions+=1;goto B43f0d2;
case 0x43f0d4:goto L43f0d4;
case 0x43f0d6:c.instructions+=1;goto B43f0d6;
case 0x43f0dc:goto L43f0dc;
case 0x43f0e3:c.instructions+=3;goto B43f0e3;
case 0x43f0e5:c.instructions+=2;goto B43f0e5;
case 0x43f0e7:c.instructions+=1;goto B43f0e7;
case 0x43f0e9:goto L43f0e9;
case 0x43f0eb:c.instructions+=2;goto B43f0eb;
case 0x43f0ed:c.instructions+=1;goto B43f0ed;
case 0x43f0f1:goto L43f0f1;
case 0x43f0f3:c.instructions+=2;goto B43f0f3;
case 0x43f0f9:c.instructions+=1;goto B43f0f9;
case 0x43f0fb:goto L43f0fb;
case 0x43f0fe:c.instructions+=1;goto B43f0fe;
case 0x43f100:goto L43f100;
case 0x43f102:goto L43f102;
case 0x43f108:c.instructions+=3;goto B43f108;
case 0x43f109:c.instructions+=2;goto B43f109;
case 0x43f10b:c.instructions+=1;goto B43f10b;
case 0x43f10d:goto L43f10d;
case 0x43f10e:c.instructions+=9;goto B43f10e;
case 0x43f110:c.instructions+=8;goto B43f110;
case 0x43f113:c.instructions+=7;goto B43f113;
case 0x43f115:c.instructions+=6;goto B43f115;
case 0x43f118:c.instructions+=5;goto B43f118;
case 0x43f11b:c.instructions+=4;goto B43f11b;
case 0x43f11c:c.instructions+=3;goto B43f11c;
case 0x43f11e:c.instructions+=2;goto B43f11e;
case 0x43f11f:c.instructions+=1;goto B43f11f;
case 0x43f121:goto L43f121;
case 0x43f123:c.instructions+=1;goto B43f123;
case 0x43f125:goto L43f125;
case 0x43f127:c.instructions+=1;goto B43f127;
case 0x43f129:goto L43f129;
case 0x43f12b:c.instructions+=3;goto B43f12b;
case 0x43f12e:c.instructions+=2;goto B43f12e;
case 0x43f130:c.instructions+=1;goto B43f130;
case 0x43f135:goto L43f135;
case 0x43f137:goto L43f137;
case 0x43f139:c.instructions+=1;goto B43f139;
case 0x43f13c:goto L43f13c;
case 0x43f13e:goto L43f13e;
case 0x43f140:c.instructions+=3;goto B43f140;
case 0x43f142:c.instructions+=2;goto B43f142;
case 0x43f146:c.instructions+=1;goto B43f146;
case 0x43f148:goto L43f148;
case 0x43f14c:c.instructions+=8;goto B43f14c;
case 0x43f14f:c.instructions+=7;goto B43f14f;
case 0x43f151:c.instructions+=6;goto B43f151;
case 0x43f155:c.instructions+=5;goto B43f155;
case 0x43f157:c.instructions+=4;goto B43f157;
case 0x43f15b:c.instructions+=3;goto B43f15b;
case 0x43f15c:c.instructions+=2;goto B43f15c;
case 0x43f15e:c.instructions+=1;goto B43f15e;
case 0x43f160:goto L43f160;
case 0x43f162:c.instructions+=2;goto B43f162;
case 0x43f168:c.instructions+=1;goto B43f168;
case 0x43f16a:goto L43f16a;
case 0x43f16d:c.instructions+=1;goto B43f16d;
case 0x43f16f:goto L43f16f;
case 0x43f171:goto L43f171;
case 0x43f176:c.instructions+=3;goto B43f176;
case 0x43f177:c.instructions+=2;goto B43f177;
case 0x43f179:c.instructions+=1;goto B43f179;
case 0x43f17b:goto L43f17b;
case 0x43f17c:c.instructions+=2;goto B43f17c;
case 0x43f17f:c.instructions+=1;goto B43f17f;
case 0x43f181:goto L43f181;
case 0x43f189:c.instructions+=2;goto B43f189;
case 0x43f190:c.instructions+=1;goto B43f190;
case 0x43f192:goto L43f192;
case 0x43f196:c.instructions+=2;goto B43f196;
case 0x43f199:c.instructions+=1;goto B43f199;
case 0x43f19b:goto L43f19b;
case 0x43f19e:c.instructions+=3;goto B43f19e;
case 0x43f19f:c.instructions+=2;goto B43f19f;
case 0x43f1a2:c.instructions+=1;goto B43f1a2;
case 0x43f1a4:goto L43f1a4;
case 0x43f1a6:goto L43f1a6;
case 0x43f1a8:c.instructions+=1;goto B43f1a8;
case 0x43f1aa:goto L43f1aa;
case 0x43f1b0:goto L43f1b0;
case 0x43f1b2:c.instructions+=9;goto B43f1b2;
case 0x43f1b4:c.instructions+=8;goto B43f1b4;
case 0x43f1b9:c.instructions+=7;goto B43f1b9;
case 0x43f1bb:c.instructions+=6;goto B43f1bb;
case 0x43f1be:c.instructions+=5;goto B43f1be;
case 0x43f1c0:c.instructions+=4;goto B43f1c0;
case 0x43f1c3:c.instructions+=3;goto B43f1c3;
case 0x43f1c4:c.instructions+=2;goto B43f1c4;
case 0x43f1c6:c.instructions+=1;goto B43f1c6;
case 0x43f1c8:goto L43f1c8;
case 0x43f1cf:c.instructions+=4;goto B43f1cf;
case 0x43f1d1:c.instructions+=3;goto B43f1d1;
case 0x43f1d2:c.instructions+=2;goto B43f1d2;
case 0x43f1d6:c.instructions+=1;goto B43f1d6;
case 0x43f1db:goto L43f1db;
case 0x43f1dc:c.instructions+=1;goto B43f1dc;
case 0x43f1de:goto L43f1de;
case 0x43f1e2:c.instructions+=6;goto B43f1e2;
case 0x43f1e3:c.instructions+=5;goto B43f1e3;
case 0x43f1ea:c.instructions+=4;goto B43f1ea;
case 0x43f1ec:c.instructions+=3;goto B43f1ec;
case 0x43f1ed:c.instructions+=2;goto B43f1ed;
case 0x43f1f1:c.instructions+=1;goto B43f1f1;
case 0x43f1f6:goto L43f1f6;
case 0x43f1fd:c.instructions+=4;goto B43f1fd;
case 0x43f200:c.instructions+=3;goto B43f200;
case 0x43f203:c.instructions+=2;goto B43f203;
case 0x43f206:c.instructions+=1;goto B43f206;
case 0x43f20c:goto L43f20c;
case 0x43f20d:c.instructions+=1;goto B43f20d;
case 0x43f20f:goto L43f20f;
case 0x43f214:c.instructions+=2;goto B43f214;
case 0x43f218:c.instructions+=1;goto B43f218;
case 0x43f21d:goto L43f21d;
case 0x43f224:c.instructions+=5;goto B43f224;
case 0x43f226:c.instructions+=4;goto B43f226;
case 0x43f229:c.instructions+=3;goto B43f229;
case 0x43f22a:c.instructions+=2;goto B43f22a;
case 0x43f231:c.instructions+=1;goto B43f231;
case 0x43f236:goto L43f236;
case 0x43f239:c.instructions+=2;goto B43f239;
case 0x43f23b:c.instructions+=1;goto B43f23b;
case 0x43f241:goto L43f241;
case 0x43f244:c.instructions+=19;goto B43f244;
case 0x43f248:c.instructions+=18;goto B43f248;
case 0x43f24b:c.instructions+=17;goto B43f24b;
case 0x43f24e:c.instructions+=16;goto B43f24e;
case 0x43f24f:c.instructions+=15;goto B43f24f;
case 0x43f252:c.instructions+=14;goto B43f252;
case 0x43f253:c.instructions+=13;goto B43f253;
case 0x43f256:c.instructions+=12;goto B43f256;
case 0x43f259:c.instructions+=11;goto B43f259;
case 0x43f25a:c.instructions+=10;goto B43f25a;
case 0x43f25c:c.instructions+=9;goto B43f25c;
case 0x43f25d:c.instructions+=8;goto B43f25d;
case 0x43f260:c.instructions+=7;goto B43f260;
case 0x43f263:c.instructions+=6;goto B43f263;
case 0x43f264:c.instructions+=5;goto B43f264;
case 0x43f265:c.instructions+=4;goto B43f265;
case 0x43f26c:c.instructions+=3;goto B43f26c;
case 0x43f271:c.instructions+=2;goto B43f271;
case 0x43f272:c.instructions+=1;goto B43f272;
case 0x43f277:goto L43f277;
case 0x43f27a:goto L43f27a;
case 0x43f281:c.instructions+=9;goto B43f281;
case 0x43f285:c.instructions+=8;goto B43f285;
case 0x43f286:c.instructions+=7;goto B43f286;
case 0x43f287:c.instructions+=6;goto B43f287;
case 0x43f288:c.instructions+=5;goto B43f288;
case 0x43f28f:c.instructions+=4;goto B43f28f;
case 0x43f290:c.instructions+=3;goto B43f290;
case 0x43f291:c.instructions+=2;goto B43f291;
case 0x43f299:c.instructions+=1;goto B43f299;
case 0x43f29e:goto L43f29e;
case 0x43f2a0:c.instructions+=3;goto B43f2a0;
case 0x43f2a3:c.instructions+=2;goto B43f2a3;
case 0x43f2a5:c.instructions+=1;goto B43f2a5;
case 0x43f2a7:goto L43f2a7;
case 0x43f2a8:c.instructions+=1;goto B43f2a8;
case 0x43f2aa:goto L43f2aa;
case 0x43f2ad:c.instructions+=2;goto B43f2ad;
case 0x43f2af:c.instructions+=1;goto B43f2af;
case 0x43f2b1:goto L43f2b1;
case 0x43f2b6:c.instructions+=2;goto B43f2b6;
case 0x43f2b8:c.instructions+=1;goto B43f2b8;
case 0x43f2ba:goto L43f2ba;
case 0x43f2bb:c.instructions+=1;goto B43f2bb;
case 0x43f2c0:goto L43f2c0;
case 0x43f2c4:c.instructions+=6;goto B43f2c4;
case 0x43f2cb:c.instructions+=5;goto B43f2cb;
case 0x43f2d1:c.instructions+=4;goto B43f2d1;
case 0x43f2d2:c.instructions+=3;goto B43f2d2;
case 0x43f2d6:c.instructions+=2;goto B43f2d6;
case 0x43f2dd:c.instructions+=1;goto B43f2dd;
case 0x43f2e2:goto L43f2e2;
case 0x43f2e9:c.instructions+=5;goto B43f2e9;
case 0x43f2eb:c.instructions+=4;goto B43f2eb;
case 0x43f2ee:c.instructions+=3;goto B43f2ee;
case 0x43f2ef:c.instructions+=2;goto B43f2ef;
case 0x43f2f6:c.instructions+=1;goto B43f2f6;
case 0x43f2fb:goto L43f2fb;
case 0x43f2fe:c.instructions+=2;goto B43f2fe;
case 0x43f300:c.instructions+=1;goto B43f300;
case 0x43f302:goto L43f302;
case 0x43f305:c.instructions+=14;goto B43f305;
case 0x43f309:c.instructions+=13;goto B43f309;
case 0x43f30c:c.instructions+=12;goto B43f30c;
case 0x43f30f:c.instructions+=11;goto B43f30f;
case 0x43f310:c.instructions+=10;goto B43f310;
case 0x43f312:c.instructions+=9;goto B43f312;
case 0x43f313:c.instructions+=8;goto B43f313;
case 0x43f316:c.instructions+=7;goto B43f316;
case 0x43f319:c.instructions+=6;goto B43f319;
case 0x43f31a:c.instructions+=5;goto B43f31a;
case 0x43f31b:c.instructions+=4;goto B43f31b;
case 0x43f322:c.instructions+=3;goto B43f322;
case 0x43f327:c.instructions+=2;goto B43f327;
case 0x43f328:c.instructions+=1;goto B43f328;
case 0x43f32d:goto L43f32d;
case 0x43f330:c.instructions+=1;goto B43f330;
case 0x43f335:goto L43f335;
case 0x43f33d:c.instructions+=1;goto B43f33d;
case 0x43f341:goto L43f341;
case 0x43f343:c.instructions+=3;goto B43f343;
case 0x43f345:c.instructions+=2;goto B43f345;
case 0x43f347:c.instructions+=1;goto B43f347;
case 0x43f349:goto L43f349;
case 0x43f34e:c.instructions+=1;goto B43f34e;
case 0x43f350:goto L43f350;
case 0x43f352:c.instructions+=3;goto B43f352;
case 0x43f353:c.instructions+=2;goto B43f353;
case 0x43f355:c.instructions+=1;goto B43f355;
case 0x43f357:goto L43f357;
case 0x43f359:c.instructions+=3;goto B43f359;
case 0x43f35a:c.instructions+=2;goto B43f35a;
case 0x43f35c:c.instructions+=1;goto B43f35c;
case 0x43f35e:goto L43f35e;
case 0x43f360:c.instructions+=1;goto B43f360;
case 0x43f362:goto L43f362;
case 0x43f364:goto L43f364;
case 0x43f365:goto L43f365;
case 0x43f369:goto L43f369;
case 0x43f36d:goto L43f36d;
case 0x43f370:c.instructions+=1;goto B43f370;
case 0x43f376:goto L43f376;
case 0x43f379:c.instructions+=1;goto B43f379;
case 0x43f37f:goto L43f37f;
case 0x43f382:c.instructions+=1;goto B43f382;
case 0x43f388:goto L43f388;
case 0x43f38d:c.instructions+=1;goto B43f38d;
case 0x43f392:goto L43f392;
case 0x43f399:c.instructions+=6;goto B43f399;
case 0x43f39b:c.instructions+=5;goto B43f39b;
case 0x43f39e:c.instructions+=4;goto B43f39e;
case 0x43f3a0:c.instructions+=3;goto B43f3a0;
case 0x43f3a7:c.instructions+=2;goto B43f3a7;
case 0x43f3ab:c.instructions+=1;goto B43f3ab;
case 0x43f3ad:goto L43f3ad;
case 0x43f3b2:c.instructions+=2;goto B43f3b2;
case 0x43f3b6:c.instructions+=1;goto B43f3b6;
case 0x43f3b8:goto L43f3b8;
case 0x43f3b9:c.instructions+=1;goto B43f3b9;
case 0x43f3be:goto L43f3be;
case 0x43f3c1:c.instructions+=2;goto B43f3c1;
case 0x43f3c3:c.instructions+=1;goto B43f3c3;
case 0x43f3c5:goto L43f3c5;
case 0x43f3cb:c.instructions+=1;goto B43f3cb;
case 0x43f3cf:goto L43f3cf;
case 0x43f3d3:goto L43f3d3;
case 0x43f3d5:c.instructions+=3;goto B43f3d5;
case 0x43f3d7:c.instructions+=2;goto B43f3d7;
case 0x43f3d9:c.instructions+=1;goto B43f3d9;
case 0x43f3db:goto L43f3db;
case 0x43f3e0:goto L43f3e0;
case 0x43f3e2:c.instructions+=3;goto B43f3e2;
case 0x43f3e3:c.instructions+=2;goto B43f3e3;
case 0x43f3e5:c.instructions+=1;goto B43f3e5;
case 0x43f3e7:goto L43f3e7;
case 0x43f3e9:c.instructions+=3;goto B43f3e9;
case 0x43f3ea:c.instructions+=2;goto B43f3ea;
case 0x43f3ec:c.instructions+=1;goto B43f3ec;
case 0x43f3ee:goto L43f3ee;
case 0x43f3f0:c.instructions+=1;goto B43f3f0;
case 0x43f3f6:goto L43f3f6;
case 0x43f3fa:c.instructions+=1;goto B43f3fa;
case 0x43f3ff:goto L43f3ff;
case 0x43f406:c.instructions+=8;goto B43f406;
case 0x43f40a:c.instructions+=7;goto B43f40a;
case 0x43f40d:c.instructions+=6;goto B43f40d;
case 0x43f414:c.instructions+=5;goto B43f414;
case 0x43f417:c.instructions+=4;goto B43f417;
case 0x43f41d:c.instructions+=3;goto B43f41d;
case 0x43f41f:c.instructions+=2;goto B43f41f;
case 0x43f423:c.instructions+=1;goto B43f423;
case 0x43f428:goto L43f428;
case 0x43f42a:c.instructions+=1;goto B43f42a;
case 0x43f42f:goto L43f42f;
case 0x43f432:c.instructions+=1;goto B43f432;
case 0x43f434:goto L43f434;
case 0x43f439:c.instructions+=1;goto B43f439;
case 0x43f43b:goto L43f43b;
case 0x43f43e:c.instructions+=1;goto B43f43e;
case 0x43f440:goto L43f440;
case 0x43f445:goto L43f445;
case 0x43f44d:goto L43f44d;
case 0x43f451:c.instructions+=5;goto B43f451;
case 0x43f455:c.instructions+=4;goto B43f455;
case 0x43f459:c.instructions+=3;goto B43f459;
case 0x43f45b:c.instructions+=2;goto B43f45b;
case 0x43f45d:c.instructions+=1;goto B43f45d;
case 0x43f45f:goto L43f45f;
case 0x43f461:goto L43f461;
case 0x43f465:c.instructions+=2;goto B43f465;
case 0x43f46b:c.instructions+=1;goto B43f46b;
case 0x43f472:goto L43f472;
case 0x43f476:c.instructions+=2;goto B43f476;
case 0x43f478:c.instructions+=1;goto B43f478;
case 0x43f47a:goto L43f47a;
case 0x43f47e:c.instructions+=7;goto B43f47e;
case 0x43f47f:c.instructions+=6;goto B43f47f;
case 0x43f486:c.instructions+=5;goto B43f486;
case 0x43f487:c.instructions+=4;goto B43f487;
case 0x43f48b:c.instructions+=3;goto B43f48b;
case 0x43f48c:c.instructions+=2;goto B43f48c;
case 0x43f48d:c.instructions+=1;goto B43f48d;
case 0x43f492:goto L43f492;
case 0x43f496:c.instructions+=4;goto B43f496;
case 0x43f49c:c.instructions+=3;goto B43f49c;
case 0x43f4a0:c.instructions+=2;goto B43f4a0;
case 0x43f4a7:c.instructions+=1;goto B43f4a7;
case 0x43f4aa:goto L43f4aa;
case 0x43f4ac:c.instructions+=1;goto B43f4ac;
case 0x43f4b2:goto L43f4b2;
case 0x43f4b5:c.instructions+=1;goto B43f4b5;
case 0x43f4bb:goto L43f4bb;
case 0x43f4c0:goto L43f4c0;
case 0x43f4c3:c.instructions+=2;goto B43f4c3;
case 0x43f4c5:c.instructions+=1;goto B43f4c5;
case 0x43f4c7:goto L43f4c7;
case 0x43f4ce:c.instructions+=3;goto B43f4ce;
case 0x43f4cf:c.instructions+=2;goto B43f4cf;
case 0x43f4d2:c.instructions+=1;goto B43f4d2;
case 0x43f4d4:goto L43f4d4;
case 0x43f4d6:c.instructions+=1;goto B43f4d6;
case 0x43f4d8:goto L43f4d8;
case 0x43f4db:c.instructions+=1;goto B43f4db;
case 0x43f4dd:goto L43f4dd;
case 0x43f4e1:c.instructions+=3;goto B43f4e1;
case 0x43f4e7:c.instructions+=2;goto B43f4e7;
case 0x43f4ee:c.instructions+=1;goto B43f4ee;
case 0x43f4f0:goto L43f4f0;
case 0x43f4f3:c.instructions+=2;goto B43f4f3;
case 0x43f4f5:c.instructions+=1;goto B43f4f5;
case 0x43f4f7:goto L43f4f7;
case 0x43f4fe:c.instructions+=3;goto B43f4fe;
case 0x43f4ff:c.instructions+=2;goto B43f4ff;
case 0x43f502:c.instructions+=1;goto B43f502;
case 0x43f504:goto L43f504;
case 0x43f506:c.instructions+=2;goto B43f506;
case 0x43f508:c.instructions+=1;goto B43f508;
case 0x43f50a:goto L43f50a;
case 0x43f50d:c.instructions+=1;goto B43f50d;
case 0x43f50f:goto L43f50f;
case 0x43f510:c.instructions+=2;goto B43f510;
case 0x43f511:c.instructions+=1;goto B43f511;
case 0x43f513:goto L43f513;
case 0x43f517:c.instructions+=3;goto B43f517;
case 0x43f51d:c.instructions+=2;goto B43f51d;
case 0x43f520:c.instructions+=1;goto B43f520;
case 0x43f525:goto L43f525;
case 0x43f527:c.instructions+=2;goto B43f527;
case 0x43f529:c.instructions+=1;goto B43f529;
case 0x43f52b:goto L43f52b;
case 0x43f52e:c.instructions+=1;goto B43f52e;
case 0x43f530:goto L43f530;
case 0x43f531:c.instructions+=2;goto B43f531;
case 0x43f532:c.instructions+=1;goto B43f532;
case 0x43f534:goto L43f534;
case 0x43f538:c.instructions+=2;goto B43f538;
case 0x43f53e:c.instructions+=1;goto B43f53e;
case 0x43f541:goto L43f541;
case 0x43f545:c.instructions+=8;goto B43f545;
case 0x43f549:c.instructions+=7;goto B43f549;
case 0x43f550:c.instructions+=6;goto B43f550;
case 0x43f554:c.instructions+=5;goto B43f554;
case 0x43f555:c.instructions+=4;goto B43f555;
case 0x43f556:c.instructions+=3;goto B43f556;
case 0x43f557:c.instructions+=2;goto B43f557;
case 0x43f558:c.instructions+=1;goto B43f558;
case 0x43f55d:goto L43f55d;
case 0x43f560:c.instructions+=2;goto B43f560;
case 0x43f562:c.instructions+=1;goto B43f562;
case 0x43f564:goto L43f564;
case 0x43f568:c.instructions+=2;goto B43f568;
case 0x43f56e:c.instructions+=1;goto B43f56e;
case 0x43f570:goto L43f570;
case 0x43f573:c.instructions+=2;goto B43f573;
case 0x43f575:c.instructions+=1;goto B43f575;
case 0x43f577:goto L43f577;
case 0x43f57e:c.instructions+=3;goto B43f57e;
case 0x43f57f:c.instructions+=2;goto B43f57f;
case 0x43f582:c.instructions+=1;goto B43f582;
case 0x43f584:goto L43f584;
case 0x43f587:c.instructions+=2;goto B43f587;
case 0x43f589:c.instructions+=1;goto B43f589;
case 0x43f58b:goto L43f58b;
case 0x43f58e:c.instructions+=1;goto B43f58e;
case 0x43f591:goto L43f591;
case 0x43f592:c.instructions+=2;goto B43f592;
case 0x43f593:c.instructions+=1;goto B43f593;
case 0x43f595:goto L43f595;
case 0x43f599:c.instructions+=1;goto B43f599;
case 0x43f59f:goto L43f59f;
case 0x43f5a3:goto L43f5a3;
case 0x43f5aa:c.instructions+=4;goto B43f5aa;
case 0x43f5ac:c.instructions+=3;goto B43f5ac;
case 0x43f5ae:c.instructions+=2;goto B43f5ae;
case 0x43f5b2:c.instructions+=1;goto B43f5b2;
case 0x43f5b8:goto L43f5b8;
case 0x43f5b9:c.instructions+=7;goto B43f5b9;
case 0x43f5c0:c.instructions+=6;goto B43f5c0;
case 0x43f5c2:c.instructions+=5;goto B43f5c2;
case 0x43f5c4:c.instructions+=4;goto B43f5c4;
case 0x43f5c5:c.instructions+=3;goto B43f5c5;
case 0x43f5c6:c.instructions+=2;goto B43f5c6;
case 0x43f5c7:c.instructions+=1;goto B43f5c7;
case 0x43f5c9:goto L43f5c9;
case 0x43f5cc:c.instructions+=1;goto B43f5cc;
case 0x43f5ce:goto L43f5ce;
case 0x43f5d1:goto L43f5d1;
case 0x43f5d3:c.instructions+=2;goto B43f5d3;
case 0x43f5d9:c.instructions+=1;goto B43f5d9;
case 0x43f6b0:goto L43f6b0;
case 0x43f6b3:c.instructions+=24;goto B43f6b3;
case 0x43f6b4:c.instructions+=23;goto B43f6b4;
case 0x43f6b5:c.instructions+=22;goto B43f6b5;
case 0x43f6b9:c.instructions+=21;goto B43f6b9;
case 0x43f6bc:c.instructions+=20;goto B43f6bc;
case 0x43f6be:c.instructions+=19;goto B43f6be;
case 0x43f6c1:c.instructions+=18;goto B43f6c1;
case 0x43f6c4:c.instructions+=17;goto B43f6c4;
case 0x43f6c7:c.instructions+=16;goto B43f6c7;
case 0x43f6c9:c.instructions+=15;goto B43f6c9;
case 0x43f6cb:c.instructions+=14;goto B43f6cb;
case 0x43f6cd:c.instructions+=13;goto B43f6cd;
case 0x43f6cf:c.instructions+=12;goto B43f6cf;
case 0x43f6d2:c.instructions+=11;goto B43f6d2;
case 0x43f6d5:c.instructions+=10;goto B43f6d5;
case 0x43f6d7:c.instructions+=9;goto B43f6d7;
case 0x43f6db:c.instructions+=8;goto B43f6db;
case 0x43f6dd:c.instructions+=7;goto B43f6dd;
case 0x43f6e1:c.instructions+=6;goto B43f6e1;
case 0x43f6e7:c.instructions+=5;goto B43f6e7;
case 0x43f6eb:c.instructions+=4;goto B43f6eb;
case 0x43f6f1:c.instructions+=3;goto B43f6f1;
case 0x43f6f3:c.instructions+=2;goto B43f6f3;
case 0x43f6f6:c.instructions+=1;goto B43f6f6;
case 0x43f6f8:goto L43f6f8;
case 0x43f6fc:c.instructions+=2;goto B43f6fc;
case 0x43f6fd:c.instructions+=1;goto B43f6fd;
case 0x43f702:goto L43f702;
case 0x43f707:c.instructions+=3;goto B43f707;
case 0x43f709:c.instructions+=2;goto B43f709;
case 0x43f70a:c.instructions+=1;goto B43f70a;
case 0x43f70f:goto L43f70f;
case 0x43f712:c.instructions+=11;goto B43f712;
case 0x43f716:c.instructions+=10;goto B43f716;
case 0x43f71a:c.instructions+=9;goto B43f71a;
case 0x43f71e:c.instructions+=8;goto B43f71e;
case 0x43f724:c.instructions+=7;goto B43f724;
case 0x43f726:c.instructions+=6;goto B43f726;
case 0x43f72a:c.instructions+=5;goto B43f72a;
case 0x43f72c:c.instructions+=4;goto B43f72c;
case 0x43f732:c.instructions+=3;goto B43f732;
case 0x43f736:c.instructions+=2;goto B43f736;
case 0x43f73a:c.instructions+=1;goto B43f73a;
case 0x43f73f:goto L43f73f;
case 0x43f740:c.instructions+=1;goto B43f740;
case 0x43f745:goto L43f745;
case 0x43f749:c.instructions+=4;goto B43f749;
case 0x43f74d:c.instructions+=3;goto B43f74d;
case 0x43f751:c.instructions+=2;goto B43f751;
case 0x43f755:c.instructions+=1;goto B43f755;
case 0x43f75a:goto L43f75a;
case 0x43f75b:c.instructions+=1;goto B43f75b;
case 0x43f760:goto L43f760;
case 0x43f764:c.instructions+=2;goto B43f764;
case 0x43f767:c.instructions+=1;goto B43f767;
case 0x43f769:goto L43f769;
case 0x43f76f:c.instructions+=3;goto B43f76f;
case 0x43f773:c.instructions+=2;goto B43f773;
case 0x43f777:c.instructions+=1;goto B43f777;
case 0x43f77b:goto L43f77b;
case 0x43f77f:c.instructions+=4;goto B43f77f;
case 0x43f785:c.instructions+=3;goto B43f785;
case 0x43f787:c.instructions+=2;goto B43f787;
case 0x43f78a:c.instructions+=1;goto B43f78a;
case 0x43f78c:goto L43f78c;
case 0x43f790:c.instructions+=2;goto B43f790;
case 0x43f792:c.instructions+=1;goto B43f792;
case 0x43f796:goto L43f796;
case 0x43f79a:c.instructions+=40;goto B43f79a;
case 0x43f79e:c.instructions+=39;goto B43f79e;
case 0x43f7a0:c.instructions+=38;goto B43f7a0;
case 0x43f7a2:c.instructions+=37;goto B43f7a2;
case 0x43f7a6:c.instructions+=36;goto B43f7a6;
case 0x43f7a9:c.instructions+=35;goto B43f7a9;
case 0x43f7ad:c.instructions+=34;goto B43f7ad;
case 0x43f7b0:c.instructions+=33;goto B43f7b0;
case 0x43f7b4:c.instructions+=32;goto B43f7b4;
case 0x43f7b8:c.instructions+=31;goto B43f7b8;
case 0x43f7bb:c.instructions+=30;goto B43f7bb;
case 0x43f7bf:c.instructions+=29;goto B43f7bf;
case 0x43f7c1:c.instructions+=28;goto B43f7c1;
case 0x43f7c3:c.instructions+=27;goto B43f7c3;
case 0x43f7c5:c.instructions+=26;goto B43f7c5;
case 0x43f7c9:c.instructions+=25;goto B43f7c9;
case 0x43f7cb:c.instructions+=24;goto B43f7cb;
case 0x43f7cf:c.instructions+=23;goto B43f7cf;
case 0x43f7d2:c.instructions+=22;goto B43f7d2;
case 0x43f7d4:c.instructions+=21;goto B43f7d4;
case 0x43f7d8:c.instructions+=20;goto B43f7d8;
case 0x43f7da:c.instructions+=19;goto B43f7da;
case 0x43f7dc:c.instructions+=18;goto B43f7dc;
case 0x43f7de:c.instructions+=17;goto B43f7de;
case 0x43f7e1:c.instructions+=16;goto B43f7e1;
case 0x43f7e5:c.instructions+=15;goto B43f7e5;
case 0x43f7e9:c.instructions+=14;goto B43f7e9;
case 0x43f7ec:c.instructions+=13;goto B43f7ec;
case 0x43f7ee:c.instructions+=12;goto B43f7ee;
case 0x43f7f2:c.instructions+=11;goto B43f7f2;
case 0x43f7f5:c.instructions+=10;goto B43f7f5;
case 0x43f7f9:c.instructions+=9;goto B43f7f9;
case 0x43f7fd:c.instructions+=8;goto B43f7fd;
case 0x43f800:c.instructions+=7;goto B43f800;
case 0x43f801:c.instructions+=6;goto B43f801;
case 0x43f805:c.instructions+=5;goto B43f805;
case 0x43f809:c.instructions+=4;goto B43f809;
case 0x43f80c:c.instructions+=3;goto B43f80c;
case 0x43f80d:c.instructions+=2;goto B43f80d;
case 0x43f810:c.instructions+=1;goto B43f810;
case 0x43f820:goto L43f820;
case 0x43f830:goto L43f830;
case 0x43f831:c.instructions+=67;goto B43f831;
case 0x43f833:c.instructions+=66;goto B43f833;
case 0x43f836:c.instructions+=65;goto B43f836;
case 0x43f839:c.instructions+=64;goto B43f839;
case 0x43f83c:c.instructions+=63;goto B43f83c;
case 0x43f83f:c.instructions+=62;goto B43f83f;
case 0x43f843:c.instructions+=61;goto B43f843;
case 0x43f846:c.instructions+=60;goto B43f846;
case 0x43f849:c.instructions+=59;goto B43f849;
case 0x43f84d:c.instructions+=58;goto B43f84d;
case 0x43f851:c.instructions+=57;goto B43f851;
case 0x43f855:c.instructions+=56;goto B43f855;
case 0x43f858:c.instructions+=55;goto B43f858;
case 0x43f85b:c.instructions+=54;goto B43f85b;
case 0x43f85e:c.instructions+=53;goto B43f85e;
case 0x43f861:c.instructions+=52;goto B43f861;
case 0x43f863:c.instructions+=51;goto B43f863;
case 0x43f865:c.instructions+=50;goto B43f865;
case 0x43f867:c.instructions+=49;goto B43f867;
case 0x43f869:c.instructions+=48;goto B43f869;
case 0x43f86b:c.instructions+=47;goto B43f86b;
case 0x43f86e:c.instructions+=46;goto B43f86e;
case 0x43f871:c.instructions+=45;goto B43f871;
case 0x43f874:c.instructions+=44;goto B43f874;
case 0x43f877:c.instructions+=43;goto B43f877;
case 0x43f879:c.instructions+=42;goto B43f879;
case 0x43f87c:c.instructions+=41;goto B43f87c;
case 0x43f87e:c.instructions+=40;goto B43f87e;
case 0x43f880:c.instructions+=39;goto B43f880;
case 0x43f883:c.instructions+=38;goto B43f883;
case 0x43f885:c.instructions+=37;goto B43f885;
case 0x43f888:c.instructions+=36;goto B43f888;
case 0x43f88a:c.instructions+=35;goto B43f88a;
case 0x43f88d:c.instructions+=34;goto B43f88d;
case 0x43f88f:c.instructions+=33;goto B43f88f;
case 0x43f891:c.instructions+=32;goto B43f891;
case 0x43f895:c.instructions+=31;goto B43f895;
case 0x43f899:c.instructions+=30;goto B43f899;
case 0x43f89b:c.instructions+=29;goto B43f89b;
case 0x43f89d:c.instructions+=28;goto B43f89d;
case 0x43f8a1:c.instructions+=27;goto B43f8a1;
case 0x43f8a5:c.instructions+=26;goto B43f8a5;
case 0x43f8a8:c.instructions+=25;goto B43f8a8;
case 0x43f8aa:c.instructions+=24;goto B43f8aa;
case 0x43f8ac:c.instructions+=23;goto B43f8ac;
case 0x43f8ae:c.instructions+=22;goto B43f8ae;
case 0x43f8b2:c.instructions+=21;goto B43f8b2;
case 0x43f8b5:c.instructions+=20;goto B43f8b5;
case 0x43f8b9:c.instructions+=19;goto B43f8b9;
case 0x43f8bd:c.instructions+=18;goto B43f8bd;
case 0x43f8c1:c.instructions+=17;goto B43f8c1;
case 0x43f8c4:c.instructions+=16;goto B43f8c4;
case 0x43f8c6:c.instructions+=15;goto B43f8c6;
case 0x43f8ca:c.instructions+=14;goto B43f8ca;
case 0x43f8cd:c.instructions+=13;goto B43f8cd;
case 0x43f8d1:c.instructions+=12;goto B43f8d1;
case 0x43f8d5:c.instructions+=11;goto B43f8d5;
case 0x43f8d7:c.instructions+=10;goto B43f8d7;
case 0x43f8da:c.instructions+=9;goto B43f8da;
case 0x43f8de:c.instructions+=8;goto B43f8de;
case 0x43f8e0:c.instructions+=7;goto B43f8e0;
case 0x43f8e2:c.instructions+=6;goto B43f8e2;
case 0x43f8e5:c.instructions+=5;goto B43f8e5;
case 0x43f8e8:c.instructions+=4;goto B43f8e8;
case 0x43f8eb:c.instructions+=3;goto B43f8eb;
case 0x43f8ed:c.instructions+=2;goto B43f8ed;
case 0x43f8ee:c.instructions+=1;goto B43f8ee;
case 0x43f8f0:goto L43f8f0;
case 0x43f8f4:c.instructions+=5;goto B43f8f4;
case 0x43f8f7:c.instructions+=4;goto B43f8f7;
case 0x43f8fa:c.instructions+=3;goto B43f8fa;
case 0x43f8fb:c.instructions+=2;goto B43f8fb;
case 0x43f8fd:c.instructions+=1;goto B43f8fd;
case 0x43f8ff:goto L43f8ff;
case 0x43f900:c.instructions+=3;goto B43f900;
case 0x43f902:c.instructions+=2;goto B43f902;
case 0x43f905:c.instructions+=1;goto B43f905;
case 0x43f907:goto L43f907;
case 0x43f90a:goto L43f90a;
case 0x43f90d:c.instructions+=2;goto B43f90d;
case 0x43f910:c.instructions+=1;goto B43f910;
case 0x43f911:goto L43f911;
case 0x43f920:goto L43f920;
case 0x43f924:c.instructions+=10;goto B43f924;
case 0x43f927:c.instructions+=9;goto B43f927;
case 0x43f92b:c.instructions+=8;goto B43f92b;
case 0x43f92c:c.instructions+=7;goto B43f92c;
case 0x43f92f:c.instructions+=6;goto B43f92f;
case 0x43f931:c.instructions+=5;goto B43f931;
case 0x43f932:c.instructions+=4;goto B43f932;
case 0x43f935:c.instructions+=3;goto B43f935;
case 0x43f938:c.instructions+=2;goto B43f938;
case 0x43f939:c.instructions+=1;goto B43f939;
case 0x43f940:goto L43f940;
case 0x43f944:c.instructions+=5;goto B43f944;
case 0x43f946:c.instructions+=4;goto B43f946;
case 0x43f947:c.instructions+=3;goto B43f947;
case 0x43f949:c.instructions+=2;goto B43f949;
case 0x43f953:c.instructions+=1;goto B43f953;
case 0x43f955:goto L43f955;
case 0x43f95f:goto L43f95f;
case 0x43f963:c.instructions+=3;goto B43f963;
case 0x43f965:c.instructions+=2;goto B43f965;
case 0x43f967:c.instructions+=1;goto B43f967;
case 0x43f969:goto L43f969;
case 0x43f96c:c.instructions+=1;goto B43f96c;
case 0x43f96e:goto L43f96e;
case 0x43f970:goto L43f970;
case 0x43f974:c.instructions+=3;goto B43f974;
case 0x43f975:c.instructions+=2;goto B43f975;
case 0x43f977:c.instructions+=1;goto B43f977;
case 0x43f979:goto L43f979;
case 0x43f97a:c.instructions+=6;goto B43f97a;
case 0x43f97b:c.instructions+=5;goto B43f97b;
case 0x43f97f:c.instructions+=4;goto B43f97f;
case 0x43f980:c.instructions+=3;goto B43f980;
case 0x43f981:c.instructions+=2;goto B43f981;
case 0x43f983:c.instructions+=1;goto B43f983;
case 0x43f988:goto L43f988;
case 0x43f98a:c.instructions+=2;goto B43f98a;
case 0x43f98b:c.instructions+=1;goto B43f98b;
case 0x43f990:goto L43f990;
case 0x43f994:c.instructions+=3;goto B43f994;
case 0x43f997:c.instructions+=2;goto B43f997;
case 0x43f999:c.instructions+=1;goto B43f999;
case 0x43f9a0:goto L43f9a0;
case 0x43f9a1:c.instructions+=6;goto B43f9a1;
case 0x43f9a3:c.instructions+=5;goto B43f9a3;
case 0x43f9a6:c.instructions+=4;goto B43f9a6;
case 0x43f9a7:c.instructions+=3;goto B43f9a7;
case 0x43f9aa:c.instructions+=2;goto B43f9aa;
case 0x43f9ac:c.instructions+=1;goto B43f9ac;
case 0x43f9ae:goto L43f9ae;
case 0x43f9af:c.instructions+=1;goto B43f9af;
case 0x43f9b0:goto L43f9b0;
case 0x43f9b2:c.instructions+=6;goto B43f9b2;
case 0x43f9b5:c.instructions+=5;goto B43f9b5;
case 0x43f9b7:c.instructions+=4;goto B43f9b7;
case 0x43f9b9:c.instructions+=3;goto B43f9b9;
case 0x43f9bc:c.instructions+=2;goto B43f9bc;
case 0x43f9be:c.instructions+=1;goto B43f9be;
case 0x43f9c3:goto L43f9c3;
case 0x43f9c4:c.instructions+=1;goto B43f9c4;
case 0x43f9c9:goto L43f9c9;
case 0x43f9cb:c.instructions+=3;goto B43f9cb;
case 0x43f9ce:c.instructions+=2;goto B43f9ce;
case 0x43f9d0:c.instructions+=1;goto B43f9d0;
case 0x43f9d2:goto L43f9d2;
case 0x43f9d3:goto L43f9d3;
case 0x43f9d4:c.instructions+=3;goto B43f9d4;
case 0x43f9d7:c.instructions+=2;goto B43f9d7;
case 0x43f9d8:c.instructions+=1;goto B43f9d8;
case 0x43f9e0:goto L43f9e0;
case 0x43f9e1:c.instructions+=5;goto B43f9e1;
case 0x43f9e3:c.instructions+=4;goto B43f9e3;
case 0x43f9e4:c.instructions+=3;goto B43f9e4;
case 0x43f9e7:c.instructions+=2;goto B43f9e7;
case 0x43f9e9:c.instructions+=1;goto B43f9e9;
case 0x43f9ee:goto L43f9ee;
case 0x43f9f1:c.instructions+=3;goto B43f9f1;
case 0x43f9f4:c.instructions+=2;goto B43f9f4;
case 0x43f9f6:c.instructions+=1;goto B43f9f6;
case 0x43f9f8:goto L43f9f8;
case 0x43f9fc:c.instructions+=1;goto B43f9fc;
case 0x43fa00:goto L43fa00;
case 0x43fa02:c.instructions+=1;goto B43fa02;
case 0x43fa04:goto L43fa04;
case 0x43fa06:c.instructions+=2;goto B43fa06;
case 0x43fa08:c.instructions+=1;goto B43fa08;
case 0x43fa0a:goto L43fa0a;
case 0x43fa0c:c.instructions+=1;goto B43fa0c;
case 0x43fa11:goto L43fa11;
case 0x43fa12:c.instructions+=2;goto B43fa12;
case 0x43fa13:c.instructions+=1;goto B43fa13;
case 0x43fa16:goto L43fa16;
case 0x43fa18:c.instructions+=1;goto B43fa18;
case 0x43fa1a:goto L43fa1a;
case 0x43fa1e:c.instructions+=2;goto B43fa1e;
case 0x43fa21:c.instructions+=1;goto B43fa21;
case 0x43fa23:goto L43fa23;
case 0x43fa25:c.instructions+=9;goto B43fa25;
case 0x43fa28:c.instructions+=8;goto B43fa28;
case 0x43fa2a:c.instructions+=7;goto B43fa2a;
case 0x43fa2d:c.instructions+=6;goto B43fa2d;
case 0x43fa30:c.instructions+=5;goto B43fa30;
case 0x43fa33:c.instructions+=4;goto B43fa33;
case 0x43fa35:c.instructions+=3;goto B43fa35;
case 0x43fa38:c.instructions+=2;goto B43fa38;
case 0x43fa3a:c.instructions+=1;goto B43fa3a;
case 0x43fa3d:goto L43fa3d;
case 0x43fa3f:c.instructions+=1;goto B43fa3f;
case 0x43fa44:goto L43fa44;
case 0x43fa45:c.instructions+=2;goto B43fa45;
case 0x43fa46:c.instructions+=1;goto B43fa46;
case 0x43fa50:goto L43fa50;
case 0x43fa51:c.instructions+=6;goto B43fa51;
case 0x43fa52:c.instructions+=5;goto B43fa52;
case 0x43fa53:c.instructions+=4;goto B43fa53;
case 0x43fa57:c.instructions+=3;goto B43fa57;
case 0x43fa59:c.instructions+=2;goto B43fa59;
case 0x43fa5b:c.instructions+=1;goto B43fa5b;
case 0x43fa61:goto L43fa61;
case 0x43fa62:c.instructions+=4;goto B43fa62;
case 0x43fa65:c.instructions+=3;goto B43fa65;
case 0x43fa66:c.instructions+=2;goto B43fa66;
case 0x43fa6a:c.instructions+=1;goto B43fa6a;
case 0x43fa6f:goto L43fa6f;
case 0x43fa73:c.instructions+=7;goto B43fa73;
case 0x43fa76:c.instructions+=6;goto B43fa76;
case 0x43fa79:c.instructions+=5;goto B43fa79;
case 0x43fa80:c.instructions+=4;goto B43fa80;
case 0x43fa82:c.instructions+=3;goto B43fa82;
case 0x43fa84:c.instructions+=2;goto B43fa84;
case 0x43fa86:c.instructions+=1;goto B43fa86;
case 0x43fa88:goto L43fa88;
case 0x43fa8a:c.instructions+=1;goto B43fa8a;
case 0x43fa8c:goto L43fa8c;
case 0x43fa8e:c.instructions+=2;goto B43fa8e;
case 0x43fa90:c.instructions+=1;goto B43fa90;
case 0x43fa92:goto L43fa92;
case 0x43fa95:c.instructions+=10;goto B43fa95;
case 0x43fa97:c.instructions+=9;goto B43fa97;
case 0x43fa9a:c.instructions+=8;goto B43fa9a;
case 0x43fa9d:c.instructions+=7;goto B43fa9d;
case 0x43faa0:c.instructions+=6;goto B43faa0;
case 0x43faa3:c.instructions+=5;goto B43faa3;
case 0x43faa5:c.instructions+=4;goto B43faa5;
case 0x43faa8:c.instructions+=3;goto B43faa8;
case 0x43faaa:c.instructions+=2;goto B43faaa;
case 0x43faae:c.instructions+=1;goto B43faae;
case 0x43fab0:goto L43fab0;
case 0x43fab3:c.instructions+=8;goto B43fab3;
case 0x43fab5:c.instructions+=7;goto B43fab5;
case 0x43fab8:c.instructions+=6;goto B43fab8;
case 0x43faba:c.instructions+=5;goto B43faba;
case 0x43fabe:c.instructions+=4;goto B43fabe;
case 0x43fac1:c.instructions+=3;goto B43fac1;
case 0x43fac4:c.instructions+=2;goto B43fac4;
case 0x43fac6:c.instructions+=1;goto B43fac6;
case 0x43fac9:goto L43fac9;
case 0x43facc:c.instructions+=4;goto B43facc;
case 0x43facf:c.instructions+=3;goto B43facf;
case 0x43fad1:c.instructions+=2;goto B43fad1;
case 0x43fad3:c.instructions+=1;goto B43fad3;
case 0x43fad5:goto L43fad5;
case 0x43fad8:c.instructions+=8;goto B43fad8;
case 0x43fadb:c.instructions+=7;goto B43fadb;
case 0x43fade:c.instructions+=6;goto B43fade;
case 0x43fae0:c.instructions+=5;goto B43fae0;
case 0x43fae2:c.instructions+=4;goto B43fae2;
case 0x43fae5:c.instructions+=3;goto B43fae5;
case 0x43fae7:c.instructions+=2;goto B43fae7;
case 0x43faea:c.instructions+=1;goto B43faea;
case 0x43faec:goto L43faec;
case 0x43faef:c.instructions+=2;goto B43faef;
case 0x43faf1:c.instructions+=1;goto B43faf1;
case 0x43faf3:goto L43faf3;
case 0x43faf5:c.instructions+=3;goto B43faf5;
case 0x43faf7:c.instructions+=2;goto B43faf7;
case 0x43fafa:c.instructions+=1;goto B43fafa;
case 0x43faff:goto L43faff;
case 0x43fb01:goto L43fb01;
case 0x43fb03:c.instructions+=1;goto B43fb03;
case 0x43fb06:goto L43fb06;
case 0x43fb08:goto L43fb08;
case 0x43fb0d:c.instructions+=2;goto B43fb0d;
case 0x43fb0f:c.instructions+=1;goto B43fb0f;
case 0x43fb11:goto L43fb11;
case 0x43fb14:c.instructions+=3;goto B43fb14;
case 0x43fb17:c.instructions+=2;goto B43fb17;
case 0x43fb19:c.instructions+=1;goto B43fb19;
case 0x43fb1b:goto L43fb1b;
case 0x43fb20:goto L43fb20;
case 0x43fb23:c.instructions+=1;goto B43fb23;
case 0x43fb25:goto L43fb25;
case 0x43fb28:c.instructions+=2;goto B43fb28;
case 0x43fb2b:c.instructions+=1;goto B43fb2b;
case 0x43fb2d:goto L43fb2d;
case 0x43fb2f:c.instructions+=2;goto B43fb2f;
case 0x43fb31:c.instructions+=1;goto B43fb31;
case 0x43fb33:goto L43fb33;
case 0x43fb37:c.instructions+=1;goto B43fb37;
case 0x43fb3c:goto L43fb3c;
case 0x43fb3d:c.instructions+=5;goto B43fb3d;
case 0x43fb3e:c.instructions+=4;goto B43fb3e;
case 0x43fb3f:c.instructions+=3;goto B43fb3f;
case 0x43fb40:c.instructions+=2;goto B43fb40;
case 0x43fb41:c.instructions+=1;goto B43fb41;
case 0x43fb44:goto L43fb44;
case 0x43fb47:c.instructions+=11;goto B43fb47;
case 0x43fb4a:c.instructions+=10;goto B43fb4a;
case 0x43fb4c:c.instructions+=9;goto B43fb4c;
case 0x43fb4f:c.instructions+=8;goto B43fb4f;
case 0x43fb51:c.instructions+=7;goto B43fb51;
case 0x43fb54:c.instructions+=6;goto B43fb54;
case 0x43fb57:c.instructions+=5;goto B43fb57;
case 0x43fb59:c.instructions+=4;goto B43fb59;
case 0x43fb5b:c.instructions+=3;goto B43fb5b;
case 0x43fb5e:c.instructions+=2;goto B43fb5e;
case 0x43fb60:c.instructions+=1;goto B43fb60;
case 0x43fb65:goto L43fb65;
case 0x43fb66:c.instructions+=1;goto B43fb66;
case 0x43fb6b:goto L43fb6b;
case 0x43fb6e:goto L43fb6e;
case 0x43fb72:c.instructions+=1;goto B43fb72;
case 0x43fb77:goto L43fb77;
case 0x43fb78:c.instructions+=1;goto B43fb78;
case 0x43fb79:goto L43fb79;
case 0x43fb7a:c.instructions+=3;goto B43fb7a;
case 0x43fb7b:c.instructions+=2;goto B43fb7b;
case 0x43fb7c:c.instructions+=1;goto B43fb7c;
case 0x43fb80:goto L43fb80;
case 0x43fb81:c.instructions+=3;goto B43fb81;
case 0x43fb85:c.instructions+=2;goto B43fb85;
case 0x43fb8c:c.instructions+=1;goto B43fb8c;
case 0x43fb91:goto L43fb91;
case 0x43fb9c:c.instructions+=2;goto B43fb9c;
case 0x43fb9d:c.instructions+=1;goto B43fb9d;
case 0x43fba0:goto L43fba0;
case 0x43fba4:c.instructions+=6;goto B43fba4;
case 0x43fba8:c.instructions+=5;goto B43fba8;
case 0x43fbac:c.instructions+=4;goto B43fbac;
case 0x43fbad:c.instructions+=3;goto B43fbad;
case 0x43fbae:c.instructions+=2;goto B43fbae;
case 0x43fbb5:c.instructions+=1;goto B43fbb5;
case 0x43fbba:goto L43fbba;
case 0x43fbc0:goto L43fbc0;
case 0x43fbc3:c.instructions+=5;goto B43fbc3;
case 0x43fbc4:c.instructions+=4;goto B43fbc4;
case 0x43fbc5:c.instructions+=3;goto B43fbc5;
case 0x43fbc9:c.instructions+=2;goto B43fbc9;
case 0x43fbca:c.instructions+=1;goto B43fbca;
case 0x43fbd0:goto L43fbd0;
case 0x43fbd4:c.instructions+=3;goto B43fbd4;
case 0x43fbd8:c.instructions+=2;goto B43fbd8;
case 0x43fbde:c.instructions+=1;goto B43fbde;
case 0x43fbe3:goto L43fbe3;
case 0x43fbe7:c.instructions+=12;goto B43fbe7;
case 0x43fbeb:c.instructions+=11;goto B43fbeb;
case 0x43fbed:c.instructions+=10;goto B43fbed;
case 0x43fbef:c.instructions+=9;goto B43fbef;
case 0x43fbf3:c.instructions+=8;goto B43fbf3;
case 0x43fbf7:c.instructions+=7;goto B43fbf7;
case 0x43fbfb:c.instructions+=6;goto B43fbfb;
case 0x43fbfc:c.instructions+=5;goto B43fbfc;
case 0x43fc00:c.instructions+=4;goto B43fc00;
case 0x43fc01:c.instructions+=3;goto B43fc01;
case 0x43fc05:c.instructions+=2;goto B43fc05;
case 0x43fc06:c.instructions+=1;goto B43fc06;
case 0x43fc0b:goto L43fc0b;
case 0x43fc0c:c.instructions+=2;goto B43fc0c;
case 0x43fc0e:c.instructions+=1;goto B43fc0e;
case 0x43fc13:goto L43fc13;
case 0x43fc19:c.instructions+=10;goto B43fc19;
case 0x43fc1e:c.instructions+=9;goto B43fc1e;
case 0x43fc21:c.instructions+=8;goto B43fc21;
case 0x43fc22:c.instructions+=7;goto B43fc22;
case 0x43fc28:c.instructions+=6;goto B43fc28;
case 0x43fc2d:c.instructions+=5;goto B43fc2d;
case 0x43fc2f:c.instructions+=4;goto B43fc2f;
case 0x43fc30:c.instructions+=3;goto B43fc30;
case 0x43fc31:c.instructions+=2;goto B43fc31;
case 0x43fc34:c.instructions+=1;goto B43fc34;
case 0x43fc40:goto L43fc40;
case 0x43fc44:c.instructions+=9;goto B43fc44;
case 0x43fc45:c.instructions+=8;goto B43fc45;
case 0x43fc46:c.instructions+=7;goto B43fc46;
case 0x43fc4a:c.instructions+=6;goto B43fc4a;
case 0x43fc4e:c.instructions+=5;goto B43fc4e;
case 0x43fc4f:c.instructions+=4;goto B43fc4f;
case 0x43fc50:c.instructions+=3;goto B43fc50;
case 0x43fc56:c.instructions+=2;goto B43fc56;
case 0x43fc57:c.instructions+=1;goto B43fc57;
case 0x43fc5c:goto L43fc5c;
case 0x43fc62:c.instructions+=3;goto B43fc62;
case 0x43fc65:c.instructions+=2;goto B43fc65;
case 0x43fc67:c.instructions+=1;goto B43fc67;
case 0x43fc69:goto L43fc69;
case 0x43fc6a:c.instructions+=1;goto B43fc6a;
case 0x43fc6c:goto L43fc6c;
case 0x43fc6f:goto L43fc6f;
case 0x43fc70:c.instructions+=2;goto B43fc70;
case 0x43fc71:c.instructions+=1;goto B43fc71;
case 0x43fc80:goto L43fc80;
case 0x43fc83:c.instructions+=10;goto B43fc83;
case 0x43fc84:c.instructions+=9;goto B43fc84;
case 0x43fc88:c.instructions+=8;goto B43fc88;
case 0x43fc89:c.instructions+=7;goto B43fc89;
case 0x43fc8a:c.instructions+=6;goto B43fc8a;
case 0x43fc8c:c.instructions+=5;goto B43fc8c;
case 0x43fc8f:c.instructions+=4;goto B43fc8f;
case 0x43fc90:c.instructions+=3;goto B43fc90;
case 0x43fc94:c.instructions+=2;goto B43fc94;
case 0x43fc98:c.instructions+=1;goto B43fc98;
case 0x43fca0:goto L43fca0;
case 0x43fca4:c.instructions+=1;goto B43fca4;
case 0x43fca9:goto L43fca9;
case 0x43fcac:c.instructions+=3;goto B43fcac;
case 0x43fcaf:c.instructions+=2;goto B43fcaf;
case 0x43fcb2:c.instructions+=1;goto B43fcb2;
case 0x43fcb4:goto L43fcb4;
case 0x43fcb9:goto L43fcb9;
case 0x43fcbd:c.instructions+=5;goto B43fcbd;
case 0x43fcbf:c.instructions+=4;goto B43fcbf;
case 0x43fcc1:c.instructions+=3;goto B43fcc1;
case 0x43fcc5:c.instructions+=2;goto B43fcc5;
case 0x43fcca:c.instructions+=1;goto B43fcca;
case 0x43fccc:goto L43fccc;
case 0x43fccf:c.instructions+=4;goto B43fccf;
case 0x43fcd2:c.instructions+=3;goto B43fcd2;
case 0x43fcd4:c.instructions+=2;goto B43fcd4;
case 0x43fcd8:c.instructions+=1;goto B43fcd8;
case 0x43fcde:goto L43fcde;
case 0x43fce0:goto L43fce0;
case 0x43fce4:c.instructions+=11;goto B43fce4;
case 0x43fce6:c.instructions+=10;goto B43fce6;
case 0x43fce9:c.instructions+=9;goto B43fce9;
case 0x43fceb:c.instructions+=8;goto B43fceb;
case 0x43fced:c.instructions+=7;goto B43fced;
case 0x43fcef:c.instructions+=6;goto B43fcef;
case 0x43fcf0:c.instructions+=5;goto B43fcf0;
case 0x43fcf2:c.instructions+=4;goto B43fcf2;
case 0x43fcf5:c.instructions+=3;goto B43fcf5;
case 0x43fcf7:c.instructions+=2;goto B43fcf7;
case 0x43fcf9:c.instructions+=1;goto B43fcf9;
case 0x43fcfb:goto L43fcfb;
case 0x43fcfe:c.instructions+=1;goto B43fcfe;
case 0x43fd00:goto L43fd00;
case 0x43fd02:c.instructions+=1;goto B43fd02;
case 0x43fd04:goto L43fd04;
case 0x43fd06:c.instructions+=5;goto B43fd06;
case 0x43fd0a:c.instructions+=4;goto B43fd0a;
case 0x43fd0c:c.instructions+=3;goto B43fd0c;
case 0x43fd0e:c.instructions+=2;goto B43fd0e;
case 0x43fd12:c.instructions+=1;goto B43fd12;
case 0x43fd14:goto L43fd14;
case 0x43fd18:c.instructions+=4;goto B43fd18;
case 0x43fd1a:c.instructions+=3;goto B43fd1a;
case 0x43fd1d:c.instructions+=2;goto B43fd1d;
case 0x43fd1f:c.instructions+=1;goto B43fd1f;
case 0x43fd21:goto L43fd21;
case 0x43fd23:goto L43fd23;
case 0x43fd27:c.instructions+=4;goto B43fd27;
case 0x43fd2a:c.instructions+=3;goto B43fd2a;
case 0x43fd2d:c.instructions+=2;goto B43fd2d;
case 0x43fd2f:c.instructions+=1;goto B43fd2f;
case 0x43fd35:goto L43fd35;
case 0x43fd39:c.instructions+=3;goto B43fd39;
case 0x43fd3a:c.instructions+=2;goto B43fd3a;
case 0x43fd3e:c.instructions+=1;goto B43fd3e;
case 0x43fd40:goto L43fd40;
case 0x43fd43:c.instructions+=11;goto B43fd43;
case 0x43fd47:c.instructions+=10;goto B43fd47;
case 0x43fd49:c.instructions+=9;goto B43fd49;
case 0x43fd4b:c.instructions+=8;goto B43fd4b;
case 0x43fd4d:c.instructions+=7;goto B43fd4d;
case 0x43fd4f:c.instructions+=6;goto B43fd4f;
case 0x43fd53:c.instructions+=5;goto B43fd53;
case 0x43fd54:c.instructions+=4;goto B43fd54;
case 0x43fd58:c.instructions+=3;goto B43fd58;
case 0x43fd5a:c.instructions+=2;goto B43fd5a;
case 0x43fd5c:c.instructions+=1;goto B43fd5c;
case 0x43fd5e:goto L43fd5e;
case 0x43fd61:c.instructions+=1;goto B43fd61;
case 0x43fd63:goto L43fd63;
case 0x43fd65:c.instructions+=1;goto B43fd65;
case 0x43fd67:goto L43fd67;
case 0x43fd6b:c.instructions+=5;goto B43fd6b;
case 0x43fd6d:c.instructions+=4;goto B43fd6d;
case 0x43fd6f:c.instructions+=3;goto B43fd6f;
case 0x43fd71:c.instructions+=2;goto B43fd71;
case 0x43fd75:c.instructions+=1;goto B43fd75;
case 0x43fd77:goto L43fd77;
case 0x43fd7b:c.instructions+=4;goto B43fd7b;
case 0x43fd7e:c.instructions+=3;goto B43fd7e;
case 0x43fd81:c.instructions+=2;goto B43fd81;
case 0x43fd83:c.instructions+=1;goto B43fd83;
case 0x43fd85:goto L43fd85;
case 0x43fd89:goto L43fd89;
case 0x43fd8b:c.instructions+=1;goto B43fd8b;
case 0x43fd8d:goto L43fd8d;
case 0x43fd91:c.instructions+=4;goto B43fd91;
case 0x43fd95:c.instructions+=3;goto B43fd95;
case 0x43fd97:c.instructions+=2;goto B43fd97;
case 0x43fd99:c.instructions+=1;goto B43fd99;
case 0x43fd9f:goto L43fd9f;
case 0x43fda2:c.instructions+=4;goto B43fda2;
case 0x43fda4:c.instructions+=3;goto B43fda4;
case 0x43fda7:c.instructions+=2;goto B43fda7;
case 0x43fdaa:c.instructions+=1;goto B43fdaa;
case 0x43fdb0:goto L43fdb0;
case 0x43fdb2:c.instructions+=4;goto B43fdb2;
case 0x43fdb5:c.instructions+=3;goto B43fdb5;
case 0x43fdb7:c.instructions+=2;goto B43fdb7;
case 0x43fdba:c.instructions+=1;goto B43fdba;
case 0x43fdbf:goto L43fdbf;
case 0x43fdc3:goto L43fdc3;
case 0x43fdc7:c.instructions+=1;goto B43fdc7;
case 0x43fdcc:goto L43fdcc;
case 0x43fdd1:c.instructions+=3;goto B43fdd1;
case 0x43fdd5:c.instructions+=2;goto B43fdd5;
case 0x43fdd7:c.instructions+=1;goto B43fdd7;
case 0x43fdd9:goto L43fdd9;
case 0x43fddb:goto L43fddb;
case 0x43fddd:c.instructions+=1;goto B43fddd;
case 0x43fde2:goto L43fde2;
case 0x43fde4:c.instructions+=3;goto B43fde4;
case 0x43fde7:c.instructions+=2;goto B43fde7;
case 0x43fde9:c.instructions+=1;goto B43fde9;
case 0x43fdeb:goto L43fdeb;
case 0x43fdec:c.instructions+=2;goto B43fdec;
case 0x43fdef:c.instructions+=1;goto B43fdef;
case 0x43fdf4:goto L43fdf4;
case 0x43fdf7:c.instructions+=2;goto B43fdf7;
case 0x43fdfa:c.instructions+=1;goto B43fdfa;
case 0x43fdfc:goto L43fdfc;
case 0x43fdfe:goto L43fdfe;
case 0x43fe01:c.instructions+=2;goto B43fe01;
case 0x43fe03:c.instructions+=1;goto B43fe03;
case 0x43fe05:goto L43fe05;
case 0x43fe08:c.instructions+=8;goto B43fe08;
case 0x43fe0c:c.instructions+=7;goto B43fe0c;
case 0x43fe0f:c.instructions+=6;goto B43fe0f;
case 0x43fe10:c.instructions+=5;goto B43fe10;
case 0x43fe12:c.instructions+=4;goto B43fe12;
case 0x43fe13:c.instructions+=3;goto B43fe13;
case 0x43fe15:c.instructions+=2;goto B43fe15;
case 0x43fe18:c.instructions+=1;goto B43fe18;
case 0x43fe1d:goto L43fe1d;
case 0x43fe20:c.instructions+=7;goto B43fe20;
case 0x43fe23:c.instructions+=6;goto B43fe23;
case 0x43fe25:c.instructions+=5;goto B43fe25;
case 0x43fe28:c.instructions+=4;goto B43fe28;
case 0x43fe2b:c.instructions+=3;goto B43fe2b;
case 0x43fe2d:c.instructions+=2;goto B43fe2d;
case 0x43fe2f:c.instructions+=1;goto B43fe2f;
case 0x43fe34:goto L43fe34;
case 0x43fe37:c.instructions+=2;goto B43fe37;
case 0x43fe38:c.instructions+=1;goto B43fe38;
case 0x43fe3d:goto L43fe3d;
case 0x43fe3e:c.instructions+=1;goto B43fe3e;
case 0x43fe43:goto L43fe43;
case 0x43fe46:c.instructions+=7;goto B43fe46;
case 0x43fe47:c.instructions+=6;goto B43fe47;
case 0x43fe48:c.instructions+=5;goto B43fe48;
case 0x43fe49:c.instructions+=4;goto B43fe49;
case 0x43fe4b:c.instructions+=3;goto B43fe4b;
case 0x43fe4c:c.instructions+=2;goto B43fe4c;
case 0x43fe4f:c.instructions+=1;goto B43fe4f;
case 0x43fe52:goto L43fe52;
case 0x43fe55:c.instructions+=2;goto B43fe55;
case 0x43fe57:c.instructions+=1;goto B43fe57;
case 0x43fe59:goto L43fe59;
case 0x43fe5c:c.instructions+=7;goto B43fe5c;
case 0x43fe5f:c.instructions+=6;goto B43fe5f;
case 0x43fe66:c.instructions+=5;goto B43fe66;
case 0x43fe68:c.instructions+=4;goto B43fe68;
case 0x43fe6a:c.instructions+=3;goto B43fe6a;
case 0x43fe6d:c.instructions+=2;goto B43fe6d;
case 0x43fe70:c.instructions+=1;goto B43fe70;
case 0x43fe72:goto L43fe72;
case 0x43fe74:c.instructions+=4;goto B43fe74;
case 0x43fe77:c.instructions+=3;goto B43fe77;
case 0x43fe79:c.instructions+=2;goto B43fe79;
case 0x43fe7c:c.instructions+=1;goto B43fe7c;
case 0x43fe7e:goto L43fe7e;
case 0x43fe82:c.instructions+=3;goto B43fe82;
case 0x43fe85:c.instructions+=2;goto B43fe85;
case 0x43fe87:c.instructions+=1;goto B43fe87;
case 0x43fe89:goto L43fe89;
case 0x43fe8b:c.instructions+=4;goto B43fe8b;
case 0x43fe8d:c.instructions+=3;goto B43fe8d;
case 0x43fe90:c.instructions+=2;goto B43fe90;
case 0x43fe95:c.instructions+=1;goto B43fe95;
case 0x43fe97:goto L43fe97;
case 0x43fe99:goto L43fe99;
case 0x43fe9b:c.instructions+=1;goto B43fe9b;
case 0x43fe9e:goto L43fe9e;
case 0x43fea0:goto L43fea0;
case 0x43fea3:c.instructions+=11;goto B43fea3;
case 0x43fea6:c.instructions+=10;goto B43fea6;
case 0x43fea9:c.instructions+=9;goto B43fea9;
case 0x43feac:c.instructions+=8;goto B43feac;
case 0x43fead:c.instructions+=7;goto B43fead;
case 0x43feaf:c.instructions+=6;goto B43feaf;
case 0x43feb0:c.instructions+=5;goto B43feb0;
case 0x43feb2:c.instructions+=4;goto B43feb2;
case 0x43feb5:c.instructions+=3;goto B43feb5;
case 0x43feb8:c.instructions+=2;goto B43feb8;
case 0x43febb:c.instructions+=1;goto B43febb;
case 0x43febd:goto L43febd;
case 0x43fec0:goto L43fec0;
case 0x43fec3:c.instructions+=7;goto B43fec3;
case 0x43fec5:c.instructions+=6;goto B43fec5;
case 0x43fec7:c.instructions+=5;goto B43fec7;
case 0x43feca:c.instructions+=4;goto B43feca;
case 0x43fece:c.instructions+=3;goto B43fece;
case 0x43fed1:c.instructions+=2;goto B43fed1;
case 0x43fed4:c.instructions+=1;goto B43fed4;
case 0x43fed9:goto L43fed9;
case 0x43fedd:c.instructions+=8;goto B43fedd;
case 0x43fede:c.instructions+=7;goto B43fede;
case 0x43fee0:c.instructions+=6;goto B43fee0;
case 0x43fee1:c.instructions+=5;goto B43fee1;
case 0x43fee2:c.instructions+=4;goto B43fee2;
case 0x43fee4:c.instructions+=3;goto B43fee4;
case 0x43fee5:c.instructions+=2;goto B43fee5;
case 0x43fee8:c.instructions+=1;goto B43fee8;
case 0x43fef0:goto L43fef0;
case 0x43fef1:c.instructions+=7;goto B43fef1;
case 0x43fef2:c.instructions+=6;goto B43fef2;
case 0x43fef3:c.instructions+=5;goto B43fef3;
case 0x43fef4:c.instructions+=4;goto B43fef4;
case 0x43fef8:c.instructions+=3;goto B43fef8;
case 0x43fef9:c.instructions+=2;goto B43fef9;
case 0x43fefc:c.instructions+=1;goto B43fefc;
case 0x43ff01:goto L43ff01;
case 0x43ff05:c.instructions+=6;goto B43ff05;
case 0x43ff08:c.instructions+=5;goto B43ff08;
case 0x43ff0e:c.instructions+=4;goto B43ff0e;
case 0x43ff14:c.instructions+=3;goto B43ff14;
case 0x43ff17:c.instructions+=2;goto B43ff17;
case 0x43ff19:c.instructions+=1;goto B43ff19;
case 0x43ff1f:goto L43ff1f;
case 0x43ff20:goto L43ff20;
case 0x43ff22:c.instructions+=2;goto B43ff22;
case 0x43ff23:c.instructions+=1;goto B43ff23;
case 0x43ff25:goto L43ff25;
case 0x43ff27:c.instructions+=1;goto B43ff27;
case 0x43ff29:goto L43ff29;
case 0x43ff2b:c.instructions+=2;goto B43ff2b;
case 0x43ff2c:c.instructions+=1;goto B43ff2c;
case 0x43ff2e:goto L43ff2e;
case 0x43ff30:c.instructions+=1;goto B43ff30;
case 0x43ff36:goto L43ff36;
case 0x43ff38:c.instructions+=3;goto B43ff38;
case 0x43ff3a:c.instructions+=2;goto B43ff3a;
case 0x43ff3b:c.instructions+=1;goto B43ff3b;
case 0x43ff3d:goto L43ff3d;
case 0x43ff3f:c.instructions+=1;goto B43ff3f;
case 0x43ff41:goto L43ff41;
case 0x43ff43:c.instructions+=2;goto B43ff43;
case 0x43ff44:c.instructions+=1;goto B43ff44;
case 0x43ff46:goto L43ff46;
case 0x43ff48:c.instructions+=1;goto B43ff48;
case 0x43ff4e:goto L43ff4e;
case 0x43ff51:c.instructions+=3;goto B43ff51;
case 0x43ff53:c.instructions+=2;goto B43ff53;
case 0x43ff54:c.instructions+=1;goto B43ff54;
case 0x43ff56:goto L43ff56;
case 0x43ff58:c.instructions+=1;goto B43ff58;
case 0x43ff5a:goto L43ff5a;
case 0x43ff5c:c.instructions+=2;goto B43ff5c;
case 0x43ff5d:c.instructions+=1;goto B43ff5d;
case 0x43ff5f:goto L43ff5f;
case 0x43ff61:c.instructions+=1;goto B43ff61;
case 0x43ff67:goto L43ff67;
case 0x43ff6e:c.instructions+=1;goto B43ff6e;
case 0x43ff74:goto L43ff74;
case 0x43ff79:c.instructions+=3;goto B43ff79;
case 0x43ff7b:c.instructions+=2;goto B43ff7b;
case 0x43ff7f:c.instructions+=1;goto B43ff7f;
case 0x43ff81:goto L43ff81;
case 0x43ff85:c.instructions+=2;goto B43ff85;
case 0x43ff87:c.instructions+=1;goto B43ff87;
case 0x43ff89:goto L43ff89;
case 0x43ff8c:c.instructions+=2;goto B43ff8c;
case 0x43ff8e:c.instructions+=1;goto B43ff8e;
case 0x43ff90:goto L43ff90;
case 0x43ff93:c.instructions+=4;goto B43ff93;
case 0x43ff96:c.instructions+=3;goto B43ff96;
case 0x43ff98:c.instructions+=2;goto B43ff98;
case 0x43ff9a:c.instructions+=1;goto B43ff9a;
case 0x43ff9c:goto L43ff9c;
case 0x43ffa0:goto L43ffa0;
case 0x43ffa3:c.instructions+=1;goto B43ffa3;
case 0x43ffa9:goto L43ffa9;
case 0x43ffaa:c.instructions+=2;goto B43ffaa;
case 0x43ffac:c.instructions+=1;goto B43ffac;
case 0x43ffae:goto L43ffae;
case 0x43ffb0:c.instructions+=3;goto B43ffb0;
case 0x43ffb3:c.instructions+=2;goto B43ffb3;
case 0x43ffb5:c.instructions+=1;goto B43ffb5;
case 0x43ffbb:goto L43ffbb;
case 0x43ffbe:c.instructions+=3;goto B43ffbe;
case 0x43ffc1:c.instructions+=2;goto B43ffc1;
case 0x43ffc3:c.instructions+=1;goto B43ffc3;
case 0x43ffc9:goto L43ffc9;
case 0x43ffd0:c.instructions+=3;goto B43ffd0;
case 0x43ffd2:c.instructions+=2;goto B43ffd2;
case 0x43ffd3:c.instructions+=1;goto B43ffd3;
case 0x43ffd5:goto L43ffd5;
case 0x43ffd7:c.instructions+=1;goto B43ffd7;
case 0x43ffd9:goto L43ffd9;
case 0x43ffdb:c.instructions+=2;goto B43ffdb;
case 0x43ffdc:c.instructions+=1;goto B43ffdc;
case 0x43ffde:goto L43ffde;
case 0x43ffe0:c.instructions+=1;goto B43ffe0;
case 0x43ffe6:goto L43ffe6;
case 0x43ffe8:c.instructions+=3;goto B43ffe8;
case 0x43ffea:c.instructions+=2;goto B43ffea;
case 0x43ffeb:c.instructions+=1;goto B43ffeb;
case 0x43ffed:goto L43ffed;
case 0x43ffef:c.instructions+=1;goto B43ffef;
case 0x43fff1:goto L43fff1;
case 0x43fff3:c.instructions+=2;goto B43fff3;
case 0x43fff4:c.instructions+=1;goto B43fff4;
case 0x43fff6:goto L43fff6;
case 0x43fff8:c.instructions+=1;goto B43fff8;
case 0x43fffa:goto L43fffa;
case 0x43fffd:c.instructions+=2;goto B43fffd;
case 0x43ffff:c.instructions+=1;goto B43ffff;
default:missing_instruction(c.pc);}
B43f002:L43f002:{c.instructions+=1;NFSU2_TR(0x43f002);
{goto L43f007;}
}
B43f004:L43f004:{c.instructions+=1;NFSU2_TR(0x43f004);
u8 U[1];
w1(U+0,u8(0x2bull));
s1(u32(r4(R+24)),r1(U+0));
}
B43f007:L43f007:{c.instructions+=41;NFSU2_TR(0x43f007);
w4(R+0,u32(0x51eb851full));
}
B43f00c:{NFSU2_TR(0x43f00c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B43f00e:{NFSU2_TR(0x43f00e);
__builtin_memmove((R+0),(R+8),4);
}
B43f010:{NFSU2_TR(0x43f010);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B43f013:{NFSU2_TR(0x43f013);
__builtin_memmove((R+8),(R+0),4);
}
B43f015:{NFSU2_TR(0x43f015);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B43f018:{NFSU2_TR(0x43f018);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B43f01a:{NFSU2_TR(0x43f01a);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B43f01d:{NFSU2_TR(0x43f01d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xffffff9cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B43f020:{NFSU2_TR(0x43f020);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
}
B43f022:{NFSU2_TR(0x43f022);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43f025:{NFSU2_TR(0x43f025);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B43f027:{NFSU2_TR(0x43f027);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43f028:{NFSU2_TR(0x43f028);
w4(R+0,u32(0x66666667ull));
}
B43f02d:{NFSU2_TR(0x43f02d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B43f02f:{NFSU2_TR(0x43f02f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B43f032:{NFSU2_TR(0x43f032);
__builtin_memmove((R+0),(R+8),4);
}
B43f034:{NFSU2_TR(0x43f034);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B43f037:{NFSU2_TR(0x43f037);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B43f039:{NFSU2_TR(0x43f039);
w4(R+0,u32(s32(s8(r1(R+8)))));
}
B43f03c:{NFSU2_TR(0x43f03c);
__builtin_memmove((R+4),(R+8),1);
}
B43f03e:{NFSU2_TR(0x43f03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43f041:{NFSU2_TR(0x43f041);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B43f043:{NFSU2_TR(0x43f043);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x30ull))));
}
B43f046:{NFSU2_TR(0x43f046);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43f047:{NFSU2_TR(0x43f047);
__builtin_memmove((R+0),(R+28),4);
}
B43f049:{NFSU2_TR(0x43f049);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B43f04b:{NFSU2_TR(0x43f04b);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B43f04d:{NFSU2_TR(0x43f04d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B43f04e:{NFSU2_TR(0x43f04e);
w4(R+4,u32(0xaull));
}
B43f053:{NFSU2_TR(0x43f053);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43f053);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43f053);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B43f055:{NFSU2_TR(0x43f055);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43f056:{NFSU2_TR(0x43f056);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43f05e:{NFSU2_TR(0x43f05e);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B43f061:{NFSU2_TR(0x43f061);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B43f063:{NFSU2_TR(0x43f063);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43f064:{NFSU2_TR(0x43f064);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f068:{NFSU2_TR(0x43f068);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43f06c:{NFSU2_TR(0x43f06c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B43f06e:{NFSU2_TR(0x43f06e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f072:{NFSU2_TR(0x43f072);
{goto L43f369;}
}
B43f077:L43f077:{c.instructions+=9;NFSU2_TR(0x43f077);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f07e:{NFSU2_TR(0x43f07e);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x400ull))));
}
B43f084:{NFSU2_TR(0x43f084);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43f087:{NFSU2_TR(0x43f087);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f08b:{NFSU2_TR(0x43f08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f08e:{NFSU2_TR(0x43f08e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x7fffffffull))));
}
B43f094:{NFSU2_TR(0x43f094);
u8 U[4];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B43f09b:{NFSU2_TR(0x43f09b);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f0a2:{NFSU2_TR(0x43f0a2);
if(r1(R+512)){{goto L43f0b4;}}
}
B43f0a4:L43f0a4:{c.instructions+=5;NFSU2_TR(0x43f0a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f0a8:{NFSU2_TR(0x43f0a8);
w4(R+8,u32(~u32(r4(R+8))));
}
B43f0aa:{NFSU2_TR(0x43f0aa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43f0ab:{NFSU2_TR(0x43f0ab);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x100ull))));
}
B43f0b0:{NFSU2_TR(0x43f0b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f0b4:L43f0b4:{c.instructions+=5;NFSU2_TR(0x43f0b4);
__builtin_memmove((R+24),(R+8),4);
}
B43f0b6:{NFSU2_TR(0x43f0b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B43f0b9:{NFSU2_TR(0x43f0b9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B43f0bf:{NFSU2_TR(0x43f0bf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43f0c1:{NFSU2_TR(0x43f0c1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43f0cc;}}
}
B43f0c3:L43f0c3:{c.instructions+=2;NFSU2_TR(0x43f0c3);
w4(R+12,u32(0x2ull));
}
B43f0c8:{NFSU2_TR(0x43f0c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f0cc:L43f0cc:{c.instructions+=3;NFSU2_TR(0x43f0cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f0ce:{NFSU2_TR(0x43f0ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f0d2:{NFSU2_TR(0x43f0d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43f0dc;}}
}
B43f0d4:L43f0d4:{c.instructions+=2;NFSU2_TR(0x43f0d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f0d6:{NFSU2_TR(0x43f0d6);
if(r1(R+518)){{goto L43f1a6;}}
}
B43f0dc:L43f0dc:{c.instructions+=4;NFSU2_TR(0x43f0dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x83ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B43f0e3:{NFSU2_TR(0x43f0e3);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+12))));
}
B43f0e5:{NFSU2_TR(0x43f0e5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f0e7:{NFSU2_TR(0x43f0e7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43f121;}}
}
B43f0e9:L43f0e9:{c.instructions+=3;NFSU2_TR(0x43f0e9);
__builtin_memmove((R+28),(R+12),4);
}
B43f0eb:{NFSU2_TR(0x43f0eb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43f0ed:{NFSU2_TR(0x43f0ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f0f1:L43f0f1:{c.instructions+=3;NFSU2_TR(0x43f0f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43f0f3:{NFSU2_TR(0x43f0f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x10000ull))));
}
B43f0f9:{NFSU2_TR(0x43f0f9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L43f100;}}
}
B43f0fb:L43f0fb:{c.instructions+=2;NFSU2_TR(0x43f0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43f0fe:{NFSU2_TR(0x43f0fe);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B43f100:L43f100:{c.instructions+=1;NFSU2_TR(0x43f100);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43f102:L43f102:{c.instructions+=4;NFSU2_TR(0x43f102);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10000ull))));
}
B43f108:{NFSU2_TR(0x43f108);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43f109:{NFSU2_TR(0x43f109);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43f10b:{NFSU2_TR(0x43f10b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f102u);}goto L43f102;}}
}
B43f10d:L43f10d:{c.instructions+=10;NFSU2_TR(0x43f10d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B43f10e:{NFSU2_TR(0x43f10e);
__builtin_memmove((R+4),(R+0),1);
}
B43f110:{NFSU2_TR(0x43f110);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x30ull))));
}
B43f113:{NFSU2_TR(0x43f113);
w4(R+0,u32(0-u32(r4(R+0))));
}
B43f115:{NFSU2_TR(0x43f115);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43f118:{NFSU2_TR(0x43f118);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+20)),r1(U+0));
}
B43f11b:{NFSU2_TR(0x43f11b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B43f11c:{NFSU2_TR(0x43f11c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B43f11e:{NFSU2_TR(0x43f11e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B43f11f:{NFSU2_TR(0x43f11f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f0f1u);}goto L43f0f1;}}
}
B43f121:L43f121:{c.instructions+=2;NFSU2_TR(0x43f121);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f123:{NFSU2_TR(0x43f123);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43f148;}}
}
B43f125:L43f125:{c.instructions+=2;NFSU2_TR(0x43f125);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f127:{NFSU2_TR(0x43f127);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43f148;}}
}
B43f129:L43f129:{c.instructions+=4;NFSU2_TR(0x43f129);
__builtin_memmove((R+4),(R+12),4);
}
B43f12b:{NFSU2_TR(0x43f12b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43f12e:{NFSU2_TR(0x43f12e);
__builtin_memmove((R+28),(R+20),4);
}
B43f130:{NFSU2_TR(0x43f130);
w4(R+0,u32(0x30303030ull));
}
B43f135:L43f135:{c.instructions+=1;NFSU2_TR(0x43f135);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L43f137;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f135u);}goto L43f135;}
}
B43f137:L43f137:{c.instructions+=2;NFSU2_TR(0x43f137);
__builtin_memmove((R+4),(R+12),4);
}
B43f139:{NFSU2_TR(0x43f139);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B43f13c:L43f13c:{c.instructions+=1;NFSU2_TR(0x43f13c);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L43f13e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f13cu);}goto L43f13c;}
}
B43f13e:L43f13e:{c.instructions+=4;NFSU2_TR(0x43f13e);
__builtin_memmove((R+0),(R+12),4);
}
B43f140:{NFSU2_TR(0x43f140);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43f142:{NFSU2_TR(0x43f142);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f146:{NFSU2_TR(0x43f146);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B43f148:L43f148:{c.instructions+=9;NFSU2_TR(0x43f148);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f14c:{NFSU2_TR(0x43f14c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B43f14f:{NFSU2_TR(0x43f14f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B43f151:{NFSU2_TR(0x43f151);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+20)),r1(U+0));
}
B43f155:{NFSU2_TR(0x43f155);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B43f157:{NFSU2_TR(0x43f157);
u8 U[1];
w1(U+0,u8(0x2eull));
s1(u32(r4(R+20)),r1(U+0));
}
B43f15b:{NFSU2_TR(0x43f15b);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B43f15c:{NFSU2_TR(0x43f15c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f15e:{NFSU2_TR(0x43f15e);
if(r1(R+518)){{goto L43f1a6;}}
}
B43f160:L43f160:{c.instructions+=3;NFSU2_TR(0x43f160);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43f162:{NFSU2_TR(0x43f162);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x10000ull))));
}
B43f168:{NFSU2_TR(0x43f168);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L43f16f;}}
}
B43f16a:L43f16a:{c.instructions+=2;NFSU2_TR(0x43f16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43f16d:{NFSU2_TR(0x43f16d);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B43f16f:L43f16f:{c.instructions+=1;NFSU2_TR(0x43f16f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43f171:L43f171:{c.instructions+=4;NFSU2_TR(0x43f171);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10000ull))));
}
B43f176:{NFSU2_TR(0x43f176);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43f177:{NFSU2_TR(0x43f177);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43f179:{NFSU2_TR(0x43f179);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f171u);}goto L43f171;}}
}
B43f17b:L43f17b:{c.instructions+=3;NFSU2_TR(0x43f17b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B43f17c:{NFSU2_TR(0x43f17c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43f17f:{NFSU2_TR(0x43f17f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43f1a6;}}
}
B43f181:L43f181:{c.instructions+=3;NFSU2_TR(0x43f181);
u8 U[7];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x39ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43f189:{NFSU2_TR(0x43f189);
u8 U[4];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43f190:{NFSU2_TR(0x43f190);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43f1a4;}}
}
B43f192:L43f192:{c.instructions+=3;NFSU2_TR(0x43f192);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43f196:{NFSU2_TR(0x43f196);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+0)),r1(U+0));
}
B43f199:{NFSU2_TR(0x43f199);
if(r1(R+518)){{goto L43f1db;}}
}
B43f19b:L43f19b:{c.instructions+=4;NFSU2_TR(0x43f19b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43f19e:{NFSU2_TR(0x43f19e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B43f19f:{NFSU2_TR(0x43f19f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43f1a2:{NFSU2_TR(0x43f1a2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f192u);}goto L43f192;}}
}
B43f1a4:L43f1a4:{c.instructions+=1;NFSU2_TR(0x43f1a4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x1ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B43f1a6:L43f1a6:{c.instructions+=2;NFSU2_TR(0x43f1a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f1a8:{NFSU2_TR(0x43f1a8);
if(r1(R+518)){{goto L43f1de;}}
}
B43f1aa:L43f1aa:{c.instructions+=1;NFSU2_TR(0x43f1aa);
__builtin_memmove((R+12),(R+12),4);
}
B43f1b0:L43f1b0:{c.instructions+=10;NFSU2_TR(0x43f1b0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B43f1b2:{NFSU2_TR(0x43f1b2);
__builtin_memmove((R+0),(R+24),4);
}
B43f1b4:{NFSU2_TR(0x43f1b4);
w4(R+4,u32(0xaull));
}
B43f1b9:{NFSU2_TR(0x43f1b9);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43f1b9);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x43f1b9);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B43f1bb:{NFSU2_TR(0x43f1bb);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B43f1be:{NFSU2_TR(0x43f1be);
__builtin_memmove((R+24),(R+0),4);
}
B43f1c0:{NFSU2_TR(0x43f1c0);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+20)),r1(U+0));
}
B43f1c3:{NFSU2_TR(0x43f1c3);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B43f1c4:{NFSU2_TR(0x43f1c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f1c6:{NFSU2_TR(0x43f1c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f1b0u);}goto L43f1b0;}}
}
B43f1c8:L43f1c8:{c.instructions+=5;NFSU2_TR(0x43f1c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43f1cf:{NFSU2_TR(0x43f1cf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B43f1d1:{NFSU2_TR(0x43f1d1);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B43f1d2:{NFSU2_TR(0x43f1d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f1d6:{NFSU2_TR(0x43f1d6);
{goto L43f365;}
}
B43f1db:L43f1db:{c.instructions+=2;NFSU2_TR(0x43f1db);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43f1dc:{NFSU2_TR(0x43f1dc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f1a6u);}goto L43f1a6;}
}
B43f1de:L43f1de:{c.instructions+=7;NFSU2_TR(0x43f1de);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+20)),r1(U+0));
}
B43f1e2:{NFSU2_TR(0x43f1e2);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B43f1e3:{NFSU2_TR(0x43f1e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43f1ea:{NFSU2_TR(0x43f1ea);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B43f1ec:{NFSU2_TR(0x43f1ec);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B43f1ed:{NFSU2_TR(0x43f1ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f1f1:{NFSU2_TR(0x43f1f1);
{goto L43f365;}
}
B43f1f6:L43f1f6:{c.instructions+=5;NFSU2_TR(0x43f1f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f1fd:{NFSU2_TR(0x43f1fd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B43f200:{NFSU2_TR(0x43f200);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x30ull))));
}
B43f203:{NFSU2_TR(0x43f203);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43f206:{NFSU2_TR(0x43f206);
if(r1(R+518)){{goto L43f2e2;}}
}
B43f20c:L43f20c:{c.instructions+=2;NFSU2_TR(0x43f20c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43f20d:{NFSU2_TR(0x43f20d);
if(r1(R+518)){{goto L43f21d;}}
}
B43f20f:L43f20f:{c.instructions+=3;NFSU2_TR(0x43f20f);
w4(R+24,u32(0x786e30ull));
}
B43f214:{NFSU2_TR(0x43f214);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f218:{NFSU2_TR(0x43f218);
{goto L43f341;}
}
B43f21d:L43f21d:{c.instructions+=6;NFSU2_TR(0x43f21d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f224:{NFSU2_TR(0x43f224);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B43f226:{NFSU2_TR(0x43f226);
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
B43f229:{NFSU2_TR(0x43f229);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f22a:{NFSU2_TR(0x43f22a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f231:{NFSU2_TR(0x43f231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f236ull));
TAIL_STATIC(0x43bd60u,43b);
}
B43f236:L43f236:{c.instructions+=3;NFSU2_TR(0x43f236);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43f239:{NFSU2_TR(0x43f239);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f23b:{NFSU2_TR(0x43f23b);
if(r1(R+518)){{goto L43f335;}}
}
B43f241:L43f241:{c.instructions+=20;NFSU2_TR(0x43f241);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f244:{NFSU2_TR(0x43f244);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f248:{NFSU2_TR(0x43f248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B43f24b:{NFSU2_TR(0x43f24b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B43f24e:{NFSU2_TR(0x43f24e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f24f:{NFSU2_TR(0x43f24f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f252:{NFSU2_TR(0x43f252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f253:{NFSU2_TR(0x43f253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B43f256:{NFSU2_TR(0x43f256);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B43f259:{NFSU2_TR(0x43f259);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f25a:{NFSU2_TR(0x43f25a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f25c:{NFSU2_TR(0x43f25c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f25d:{NFSU2_TR(0x43f25d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B43f260:{NFSU2_TR(0x43f260);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B43f263:{NFSU2_TR(0x43f263);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f264:{NFSU2_TR(0x43f264);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f265:{NFSU2_TR(0x43f265);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43f26c:{NFSU2_TR(0x43f26c);
u8 U[4];
w4(U+0,u32(0x786e1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f271:{NFSU2_TR(0x43f271);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f272:{NFSU2_TR(0x43f272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f277ull));
TAIL_STATIC(0x4400d0u,440);
}
B43f277:L43f277:{c.instructions+=1;NFSU2_TR(0x43f277);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B43f27a:L43f27a:{c.instructions+=10;NFSU2_TR(0x43f27a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43f281:{NFSU2_TR(0x43f281);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43f285:{NFSU2_TR(0x43f285);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f286:{NFSU2_TR(0x43f286);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43f287:{NFSU2_TR(0x43f287);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f288:{NFSU2_TR(0x43f288);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43f28f:{NFSU2_TR(0x43f28f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f290:{NFSU2_TR(0x43f290);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f291:{NFSU2_TR(0x43f291);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43f299:{NFSU2_TR(0x43f299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f29eull));
TAIL_STATIC(0x43cb40u,43c);
}
B43f29e:L43f29e:{c.instructions+=4;NFSU2_TR(0x43f29e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43f2a0:{NFSU2_TR(0x43f2a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B43f2a3:{NFSU2_TR(0x43f2a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f2a5:{NFSU2_TR(0x43f2a5);
if(r1(R+518)){{goto L43f2aa;}}
}
B43f2a7:L43f2a7:{c.instructions+=2;NFSU2_TR(0x43f2a7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B43f2a8:{NFSU2_TR(0x43f2a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B43f2aa:L43f2aa:{c.instructions+=3;NFSU2_TR(0x43f2aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43f2ad:{NFSU2_TR(0x43f2ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f2af:{NFSU2_TR(0x43f2af);
if(r1(R+518)){{goto L43f2c0;}}
}
B43f2b1:L43f2b1:{c.instructions+=3;NFSU2_TR(0x43f2b1);
__builtin_memmove((R+0),gp(0x828514),4);
}
B43f2b6:{NFSU2_TR(0x43f2b6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f2b8:{NFSU2_TR(0x43f2b8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43f2c0;}}
}
B43f2ba:L43f2ba:{c.instructions+=2;NFSU2_TR(0x43f2ba);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B43f2bb:{NFSU2_TR(0x43f2bb);
__builtin_memmove(gp(0x828514),(R+0),4);
}
B43f2c0:L43f2c0:{c.instructions+=7;NFSU2_TR(0x43f2c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f2c4:{NFSU2_TR(0x43f2c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f2cb:{NFSU2_TR(0x43f2cb);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B43f2d1:{NFSU2_TR(0x43f2d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43f2d2:{NFSU2_TR(0x43f2d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f2d6:{NFSU2_TR(0x43f2d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f2dd:{NFSU2_TR(0x43f2dd);
{goto L43f369;}
}
B43f2e2:L43f2e2:{c.instructions+=6;NFSU2_TR(0x43f2e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f2e9:{NFSU2_TR(0x43f2e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B43f2eb:{NFSU2_TR(0x43f2eb);
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
B43f2ee:{NFSU2_TR(0x43f2ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f2ef:{NFSU2_TR(0x43f2ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f2f6:{NFSU2_TR(0x43f2f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f2fbull));
TAIL_STATIC(0x43bd60u,43b);
}
B43f2fb:L43f2fb:{c.instructions+=3;NFSU2_TR(0x43f2fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43f2fe:{NFSU2_TR(0x43f2fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f300:{NFSU2_TR(0x43f300);
if(r1(R+518)){{goto L43f335;}}
}
B43f302:L43f302:{c.instructions+=15;NFSU2_TR(0x43f302);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f305:{NFSU2_TR(0x43f305);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f309:{NFSU2_TR(0x43f309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B43f30c:{NFSU2_TR(0x43f30c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B43f30f:{NFSU2_TR(0x43f30f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f310:{NFSU2_TR(0x43f310);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f312:{NFSU2_TR(0x43f312);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f313:{NFSU2_TR(0x43f313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B43f316:{NFSU2_TR(0x43f316);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B43f319:{NFSU2_TR(0x43f319);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f31a:{NFSU2_TR(0x43f31a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f31b:{NFSU2_TR(0x43f31b);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43f322:{NFSU2_TR(0x43f322);
u8 U[4];
w4(U+0,u32(0x786e0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f327:{NFSU2_TR(0x43f327);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f328:{NFSU2_TR(0x43f328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f32dull));
TAIL_STATIC(0x4400d0u,440);
}
B43f32d:L43f32d:{c.instructions+=2;NFSU2_TR(0x43f32d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B43f330:{NFSU2_TR(0x43f330);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f27au);}goto L43f27a;}
}
B43f335:L43f335:{c.instructions+=2;NFSU2_TR(0x43f335);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x786df4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43f33d:{NFSU2_TR(0x43f33d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43f341:L43f341:{c.instructions+=4;NFSU2_TR(0x43f341);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43f343:{NFSU2_TR(0x43f343);
__builtin_memmove((R+0),(R+24),4);
}
B43f345:{NFSU2_TR(0x43f345);
__builtin_memmove((R+4),(R+12),4);
}
B43f347:{NFSU2_TR(0x43f347);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43f350;}}
}
B43f349:L43f349:{c.instructions+=2;NFSU2_TR(0x43f349);
w4(R+4,u32(0x7fffffffull));
}
B43f34e:{NFSU2_TR(0x43f34e);
__builtin_memmove((R+28),(R+28),4);
}
B43f350:L43f350:{c.instructions+=4;NFSU2_TR(0x43f350);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B43f352:{NFSU2_TR(0x43f352);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43f353:{NFSU2_TR(0x43f353);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f355:{NFSU2_TR(0x43f355);
if(r1(R+518)){{goto L43f35e;}}
}
B43f357:L43f357:{c.instructions+=4;NFSU2_TR(0x43f357);
__builtin_memmove((R+8),(R+4),4);
}
B43f359:{NFSU2_TR(0x43f359);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B43f35a:{NFSU2_TR(0x43f35a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f35c:{NFSU2_TR(0x43f35c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f350u);}goto L43f350;}}
}
B43f35e:L43f35e:{c.instructions+=2;NFSU2_TR(0x43f35e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43f360:{NFSU2_TR(0x43f360);
if(r1(R+518)){{goto L43f369;}}
}
B43f362:L43f362:{c.instructions+=1;NFSU2_TR(0x43f362);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B43f364:L43f364:{c.instructions+=1;NFSU2_TR(0x43f364);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B43f365:L43f365:{c.instructions+=1;NFSU2_TR(0x43f365);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f369:L43f369:{c.instructions+=1;NFSU2_TR(0x43f369);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f36d:L43f36d:{c.instructions+=2;NFSU2_TR(0x43f36d);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f370:{NFSU2_TR(0x43f370);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43f5a3;}}
}
B43f376:L43f376:{c.instructions+=2;NFSU2_TR(0x43f376);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f379:{NFSU2_TR(0x43f379);
if(r1(R+518)){{goto L43f44d;}}
}
B43f37f:L43f37f:{c.instructions+=2;NFSU2_TR(0x43f37f);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f382:{NFSU2_TR(0x43f382);
if(r1(R+518)){{goto L43f42f;}}
}
B43f388:L43f388:{c.instructions+=2;NFSU2_TR(0x43f388);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2dull));
s1(u32(r4(U+0)),r1(U+4));
}
B43f38d:{NFSU2_TR(0x43f38d);
{goto L43f445;}
}
B43f392:L43f392:{c.instructions+=7;NFSU2_TR(0x43f392);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f399:{NFSU2_TR(0x43f399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43f39b:{NFSU2_TR(0x43f39b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43f39e:{NFSU2_TR(0x43f39e);
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
B43f3a0:{NFSU2_TR(0x43f3a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f3a7:{NFSU2_TR(0x43f3a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f3ab:{NFSU2_TR(0x43f3ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43f3b8;}}
}
B43f3ad:L43f3ad:{c.instructions+=3;NFSU2_TR(0x43f3ad);
__builtin_memmove((R+0),gp(0x7eb3e8),4);
}
B43f3b2:{NFSU2_TR(0x43f3b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f3b6:{NFSU2_TR(0x43f3b6);
{goto L43f3cf;}
}
B43f3b8:L43f3b8:{c.instructions+=2;NFSU2_TR(0x43f3b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f3b9:{NFSU2_TR(0x43f3b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f3beull));
TAIL_STATIC(0x43bd60u,43b);
}
B43f3be:L43f3be:{c.instructions+=3;NFSU2_TR(0x43f3be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43f3c1:{NFSU2_TR(0x43f3c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f3c3:{NFSU2_TR(0x43f3c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43f3d3;}}
}
B43f3c5:L43f3c5:{c.instructions+=2;NFSU2_TR(0x43f3c5);
__builtin_memmove((R+4),gp(0x7eb3ec),4);
}
B43f3cb:{NFSU2_TR(0x43f3cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f3cf:L43f3cf:{c.instructions+=1;NFSU2_TR(0x43f3cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43f3d3:L43f3d3:{c.instructions+=4;NFSU2_TR(0x43f3d3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43f3d5:{NFSU2_TR(0x43f3d5);
__builtin_memmove((R+0),(R+24),4);
}
B43f3d7:{NFSU2_TR(0x43f3d7);
__builtin_memmove((R+4),(R+12),4);
}
B43f3d9:{NFSU2_TR(0x43f3d9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43f3e0;}}
}
B43f3db:L43f3db:{c.instructions+=1;NFSU2_TR(0x43f3db);
w4(R+4,u32(0x7fffffffull));
}
B43f3e0:L43f3e0:{c.instructions+=4;NFSU2_TR(0x43f3e0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B43f3e2:{NFSU2_TR(0x43f3e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43f3e3:{NFSU2_TR(0x43f3e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f3e5:{NFSU2_TR(0x43f3e5);
if(r1(R+518)){{goto L43f3ee;}}
}
B43f3e7:L43f3e7:{c.instructions+=4;NFSU2_TR(0x43f3e7);
__builtin_memmove((R+8),(R+4),4);
}
B43f3e9:{NFSU2_TR(0x43f3e9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B43f3ea:{NFSU2_TR(0x43f3ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f3ec:{NFSU2_TR(0x43f3ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f3e0u);}goto L43f3e0;}}
}
B43f3ee:L43f3ee:{c.instructions+=2;NFSU2_TR(0x43f3ee);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43f3f0:{NFSU2_TR(0x43f3f0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f369u);}goto L43f369;}}
}
B43f3f6:L43f3f6:{c.instructions+=2;NFSU2_TR(0x43f3f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B43f3fa:{NFSU2_TR(0x43f3fa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f364u);}goto L43f364;}
}
B43f3ff:L43f3ff:{c.instructions+=9;NFSU2_TR(0x43f3ff);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f406:{NFSU2_TR(0x43f406);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f40a:{NFSU2_TR(0x43f40a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43f40d:{NFSU2_TR(0x43f40d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f414:{NFSU2_TR(0x43f414);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f417:{NFSU2_TR(0x43f417);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B43f41d:{NFSU2_TR(0x43f41d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43f41f:{NFSU2_TR(0x43f41f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f423:{NFSU2_TR(0x43f423);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f36du);}goto L43f36d;}
}
B43f428:L43f428:{c.instructions+=2;NFSU2_TR(0x43f428);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43f42a:{NFSU2_TR(0x43f42a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f36du);}goto L43f36d;}
}
B43f42f:L43f42f:{c.instructions+=2;NFSU2_TR(0x43f42f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f432:{NFSU2_TR(0x43f432);
if(r1(R+518)){{goto L43f43b;}}
}
B43f434:L43f434:{c.instructions+=2;NFSU2_TR(0x43f434);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2bull));
s1(u32(r4(U+0)),r1(U+4));
}
B43f439:{NFSU2_TR(0x43f439);
{goto L43f445;}
}
B43f43b:L43f43b:{c.instructions+=2;NFSU2_TR(0x43f43b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f43e:{NFSU2_TR(0x43f43e);
if(r1(R+518)){{goto L43f44d;}}
}
B43f440:L43f440:{c.instructions+=1;NFSU2_TR(0x43f440);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43f445:L43f445:{c.instructions+=1;NFSU2_TR(0x43f445);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43f44d:L43f44d:{c.instructions+=6;NFSU2_TR(0x43f44d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43f451:{NFSU2_TR(0x43f451);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f455:{NFSU2_TR(0x43f455);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f459:{NFSU2_TR(0x43f459);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B43f45b:{NFSU2_TR(0x43f45b);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B43f45d:{NFSU2_TR(0x43f45d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L43f4d4;}}
}
B43f45f:L43f45f:{c.instructions+=1;NFSU2_TR(0x43f45f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43f461:L43f461:{c.instructions+=3;NFSU2_TR(0x43f461);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43f465:{NFSU2_TR(0x43f465);
__builtin_memmove((R+20),gp(0x828514),4);
}
B43f46b:{NFSU2_TR(0x43f46b);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f472:L43f472:{c.instructions+=3;NFSU2_TR(0x43f472);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f476:{NFSU2_TR(0x43f476);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f478:{NFSU2_TR(0x43f478);
if(r1(R+518)){{goto L43f4aa;}}
}
B43f47a:L43f47a:{c.instructions+=8;NFSU2_TR(0x43f47a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43f47e:{NFSU2_TR(0x43f47e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f47f:{NFSU2_TR(0x43f47f);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f486:{NFSU2_TR(0x43f486);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f487:{NFSU2_TR(0x43f487);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43f48b:{NFSU2_TR(0x43f48b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f48c:{NFSU2_TR(0x43f48c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f48d:{NFSU2_TR(0x43f48d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f492ull));
TAIL_STATIC(0x43cb40u,43c);
}
B43f492:L43f492:{c.instructions+=5;NFSU2_TR(0x43f492);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43f496:{NFSU2_TR(0x43f496);
__builtin_memmove((R+20),gp(0x828514),4);
}
B43f49c:{NFSU2_TR(0x43f49c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f4a0:{NFSU2_TR(0x43f4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f4a7:{NFSU2_TR(0x43f4a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B43f4aa:L43f4aa:{c.instructions+=2;NFSU2_TR(0x43f4aa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f4ac:{NFSU2_TR(0x43f4ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43f541;}}
}
B43f4b2:L43f4b2:{c.instructions+=2;NFSU2_TR(0x43f4b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f4b5:{NFSU2_TR(0x43f4b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43f541;}}
}
B43f4bb:L43f4bb:{c.instructions+=1;NFSU2_TR(0x43f4bb);
{goto L43f4c0;}
}
B43f4c0:L43f4c0:{c.instructions+=3;NFSU2_TR(0x43f4c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43f4c3:{NFSU2_TR(0x43f4c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f4c5:{NFSU2_TR(0x43f4c5);
if(r1(R+518)){{goto L43f525;}}
}
B43f4c7:L43f4c7:{c.instructions+=4;NFSU2_TR(0x43f4c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x828178ull))));
w1(U+4,u8(0x30ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43f4ce:{NFSU2_TR(0x43f4ce);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B43f4cf:{NFSU2_TR(0x43f4cf);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0x7full))));
}
B43f4d2:{NFSU2_TR(0x43f4d2);
{goto L43f530;}
}
B43f4d4:L43f4d4:{c.instructions+=2;NFSU2_TR(0x43f4d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f4d6:{NFSU2_TR(0x43f4d6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f461u);}goto L43f461;}}
}
B43f4d8:L43f4d8:{c.instructions+=2;NFSU2_TR(0x43f4d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0xcull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f4db:{NFSU2_TR(0x43f4db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f461u);}goto L43f461;}}
}
B43f4dd:L43f4dd:{c.instructions+=4;NFSU2_TR(0x43f4dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43f4e1:{NFSU2_TR(0x43f4e1);
__builtin_memmove((R+20),gp(0x828514),4);
}
B43f4e7:{NFSU2_TR(0x43f4e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f4ee:{NFSU2_TR(0x43f4ee);
__builtin_memmove((R+28),(R+28),4);
}
B43f4f0:L43f4f0:{c.instructions+=3;NFSU2_TR(0x43f4f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43f4f3:{NFSU2_TR(0x43f4f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f4f5:{NFSU2_TR(0x43f4f5);
if(r1(R+518)){{goto L43f504;}}
}
B43f4f7:L43f4f7:{c.instructions+=4;NFSU2_TR(0x43f4f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x828178ull))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43f4fe:{NFSU2_TR(0x43f4fe);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B43f4ff:{NFSU2_TR(0x43f4ff);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0x7full))));
}
B43f502:{NFSU2_TR(0x43f502);
{goto L43f50f;}
}
B43f504:L43f504:{c.instructions+=3;NFSU2_TR(0x43f504);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43f506:{NFSU2_TR(0x43f506);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f508:{NFSU2_TR(0x43f508);
if(r1(R+518)){{goto L43f50f;}}
}
B43f50a:L43f50a:{c.instructions+=2;NFSU2_TR(0x43f50a);
u8 U[1];
w1(U+0,u8(0x20ull));
s1(u32(r4(R+0)),r1(U+0));
}
B43f50d:{NFSU2_TR(0x43f50d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B43f50f:L43f50f:{c.instructions+=3;NFSU2_TR(0x43f50f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43f510:{NFSU2_TR(0x43f510);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B43f511:{NFSU2_TR(0x43f511);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f4f0u);}goto L43f4f0;}}
}
B43f513:L43f513:{c.instructions+=4;NFSU2_TR(0x43f513);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f517:{NFSU2_TR(0x43f517);
__builtin_memmove(gp(0x828514),(R+20),4);
}
B43f51d:{NFSU2_TR(0x43f51d);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B43f520:{NFSU2_TR(0x43f520);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f472u);}goto L43f472;}
}
B43f525:L43f525:{c.instructions+=3;NFSU2_TR(0x43f525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43f527:{NFSU2_TR(0x43f527);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f529:{NFSU2_TR(0x43f529);
if(r1(R+518)){{goto L43f530;}}
}
B43f52b:L43f52b:{c.instructions+=2;NFSU2_TR(0x43f52b);
u8 U[1];
w1(U+0,u8(0x30ull));
s1(u32(r4(R+0)),r1(U+0));
}
B43f52e:{NFSU2_TR(0x43f52e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B43f530:L43f530:{c.instructions+=3;NFSU2_TR(0x43f530);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43f531:{NFSU2_TR(0x43f531);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B43f532:{NFSU2_TR(0x43f532);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f4c0u);}goto L43f4c0;}}
}
B43f534:L43f534:{c.instructions+=3;NFSU2_TR(0x43f534);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f538:{NFSU2_TR(0x43f538);
__builtin_memmove(gp(0x828514),(R+20),4);
}
B43f53e:{NFSU2_TR(0x43f53e);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B43f541:L43f541:{c.instructions+=9;NFSU2_TR(0x43f541);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f545:{NFSU2_TR(0x43f545);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f549:{NFSU2_TR(0x43f549);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43f550:{NFSU2_TR(0x43f550);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43f554:{NFSU2_TR(0x43f554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f555:{NFSU2_TR(0x43f555);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f556:{NFSU2_TR(0x43f556);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f557:{NFSU2_TR(0x43f557);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f558:{NFSU2_TR(0x43f558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f55dull));
TAIL_STATIC(0x43cb40u,43c);
}
B43f55d:L43f55d:{c.instructions+=3;NFSU2_TR(0x43f55d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B43f560:{NFSU2_TR(0x43f560);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f562:{NFSU2_TR(0x43f562);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43f59f;}}
}
B43f564:L43f564:{c.instructions+=3;NFSU2_TR(0x43f564);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f568:{NFSU2_TR(0x43f568);
__builtin_memmove((R+4),gp(0x828514),4);
}
B43f56e:{NFSU2_TR(0x43f56e);
__builtin_memmove((R+28),(R+28),4);
}
B43f570:L43f570:{c.instructions+=3;NFSU2_TR(0x43f570);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43f573:{NFSU2_TR(0x43f573);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f575:{NFSU2_TR(0x43f575);
if(r1(R+518)){{goto L43f584;}}
}
B43f577:L43f577:{c.instructions+=4;NFSU2_TR(0x43f577);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x828178ull))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43f57e:{NFSU2_TR(0x43f57e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43f57f:{NFSU2_TR(0x43f57f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7full))));
}
B43f582:{NFSU2_TR(0x43f582);
{goto L43f591;}
}
B43f584:L43f584:{c.instructions+=3;NFSU2_TR(0x43f584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43f587:{NFSU2_TR(0x43f587);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f589:{NFSU2_TR(0x43f589);
if(r1(R+518)){{goto L43f591;}}
}
B43f58b:L43f58b:{c.instructions+=2;NFSU2_TR(0x43f58b);
u8 U[1];
w1(U+0,u8(0x20ull));
s1(u32(r4(R+0)),r1(U+0));
}
B43f58e:{NFSU2_TR(0x43f58e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+20)),r4(U+0));
}
B43f591:L43f591:{c.instructions+=3;NFSU2_TR(0x43f591);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43f592:{NFSU2_TR(0x43f592);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B43f593:{NFSU2_TR(0x43f593);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f570u);}goto L43f570;}}
}
B43f595:L43f595:{c.instructions+=2;NFSU2_TR(0x43f595);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f599:{NFSU2_TR(0x43f599);
__builtin_memmove(gp(0x828514),(R+4),4);
}
B43f59f:L43f59f:{c.instructions+=1;NFSU2_TR(0x43f59f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f5a3:L43f5a3:{c.instructions+=5;NFSU2_TR(0x43f5a3);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f5aa:{NFSU2_TR(0x43f5aa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43f5ac:{NFSU2_TR(0x43f5ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f5ae:{NFSU2_TR(0x43f5ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f5b2:{NFSU2_TR(0x43f5b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x43e9a7u,43e);}
}
B43f5b8:L43f5b8:{c.instructions+=8;NFSU2_TR(0x43f5b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43f5b9:{NFSU2_TR(0x43f5b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f5c0:{NFSU2_TR(0x43f5c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43f5c2:{NFSU2_TR(0x43f5c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f5c4:{NFSU2_TR(0x43f5c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43f5c5:{NFSU2_TR(0x43f5c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43f5c6:{NFSU2_TR(0x43f5c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43f5c7:{NFSU2_TR(0x43f5c7);
if(r1(R+518)){{goto L43f5d1;}}
}
B43f5c9:L43f5c9:{c.instructions+=2;NFSU2_TR(0x43f5c9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43f5cc:{NFSU2_TR(0x43f5cc);
if(r1(R+518)){{goto L43f5d1;}}
}
B43f5ce:L43f5ce:{c.instructions+=1;NFSU2_TR(0x43f5ce);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B43f5d1:L43f5d1:{c.instructions+=3;NFSU2_TR(0x43f5d1);
__builtin_memmove((R+0),(R+4),4);
}
B43f5d3:{NFSU2_TR(0x43f5d3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xb4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xb4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xb4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43f5d9:{NFSU2_TR(0x43f5d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43f6b0:L43f6b0:{c.instructions+=25;NFSU2_TR(0x43f6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B43f6b3:{NFSU2_TR(0x43f6b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f6b4:{NFSU2_TR(0x43f6b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f6b5:{NFSU2_TR(0x43f6b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43f6b9:{NFSU2_TR(0x43f6b9);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f6bc:{NFSU2_TR(0x43f6bc);
__builtin_memmove((R+24),(R+4),4);
}
B43f6be:{NFSU2_TR(0x43f6be);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f6c1:{NFSU2_TR(0x43f6c1);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f6c4:{NFSU2_TR(0x43f6c4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f6c7:{NFSU2_TR(0x43f6c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43f6c9:{NFSU2_TR(0x43f6c9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f6cb:{NFSU2_TR(0x43f6cb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f6cd:{NFSU2_TR(0x43f6cd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43f6cf:{NFSU2_TR(0x43f6cf);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f6d2:{NFSU2_TR(0x43f6d2);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f6d5:{NFSU2_TR(0x43f6d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43f6d7:{NFSU2_TR(0x43f6d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43f6db:{NFSU2_TR(0x43f6db);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43f6dd:{NFSU2_TR(0x43f6dd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f6e1:{NFSU2_TR(0x43f6e1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f6e7:{NFSU2_TR(0x43f6e7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43f6eb:{NFSU2_TR(0x43f6eb);
{u32 ea_=u32(u32(7881972u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43f6f1:{NFSU2_TR(0x43f6f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43f6f3:{NFSU2_TR(0x43f6f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f6f6:{NFSU2_TR(0x43f6f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43f769;}}
}
B43f6f8:L43f6f8:{c.instructions+=3;NFSU2_TR(0x43f6f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f6fc:{NFSU2_TR(0x43f6fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f6fd:{NFSU2_TR(0x43f6fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f702ull));
TAIL_STATIC(0x43c490u,43c);
}
B43f702:L43f702:{c.instructions+=4;NFSU2_TR(0x43f702);
w4(R+4,u32(0x4000ull));
}
B43f707:{NFSU2_TR(0x43f707);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B43f709:{NFSU2_TR(0x43f709);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f70a:{NFSU2_TR(0x43f70a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f70full));
TAIL_STATIC(0x43c2b0u,43c);
}
B43f70f:L43f70f:{c.instructions+=12;NFSU2_TR(0x43f70f);
w4(R+4,u32(r2(R+4)));
}
B43f712:{NFSU2_TR(0x43f712);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f716:{NFSU2_TR(0x43f716);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43f71a:{NFSU2_TR(0x43f71a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f71e:{NFSU2_TR(0x43f71e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f724:{NFSU2_TR(0x43f724);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B43f726:{NFSU2_TR(0x43f726);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f72a:{NFSU2_TR(0x43f72a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43f72c:{NFSU2_TR(0x43f72c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f732:{NFSU2_TR(0x43f732);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43f736:{NFSU2_TR(0x43f736);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f73a:{NFSU2_TR(0x43f73a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f73full));
TAIL_STATIC(0x75bed4u,75b);
}
B43f73f:L43f73f:{c.instructions+=2;NFSU2_TR(0x43f73f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f740:{NFSU2_TR(0x43f740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f745ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B43f745:L43f745:{c.instructions+=5;NFSU2_TR(0x43f745);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f749:{NFSU2_TR(0x43f749);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f74d:{NFSU2_TR(0x43f74d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f751:{NFSU2_TR(0x43f751);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f755:{NFSU2_TR(0x43f755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f75aull));
TAIL_STATIC(0x75bed4u,75b);
}
B43f75a:L43f75a:{c.instructions+=2;NFSU2_TR(0x43f75a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f75b:{NFSU2_TR(0x43f75b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f760ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B43f760:L43f760:{c.instructions+=3;NFSU2_TR(0x43f760);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f764:{NFSU2_TR(0x43f764);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B43f767:{NFSU2_TR(0x43f767);
{goto L43f77b;}
}
B43f769:L43f769:{c.instructions+=4;NFSU2_TR(0x43f769);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f76f:{NFSU2_TR(0x43f76f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43f773:{NFSU2_TR(0x43f773);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f777:{NFSU2_TR(0x43f777);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f77b:L43f77b:{c.instructions+=5;NFSU2_TR(0x43f77b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f77f:{NFSU2_TR(0x43f77f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43f785:{NFSU2_TR(0x43f785);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43f787:{NFSU2_TR(0x43f787);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43f78a:{NFSU2_TR(0x43f78a);
if(r1(R+514)){{goto L43f796;}}
}
B43f78c:L43f78c:{c.instructions+=3;NFSU2_TR(0x43f78c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f790:{NFSU2_TR(0x43f790);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43f792:{NFSU2_TR(0x43f792);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f796:L43f796:{c.instructions+=41;NFSU2_TR(0x43f796);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f79a:{NFSU2_TR(0x43f79a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f79e:{NFSU2_TR(0x43f79e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f7a0:{NFSU2_TR(0x43f7a0);
__builtin_memmove((R+8),(R+0),4);
}
B43f7a2:{NFSU2_TR(0x43f7a2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f7a6:{NFSU2_TR(0x43f7a6);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f7a9:{NFSU2_TR(0x43f7a9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f7ad:{NFSU2_TR(0x43f7ad);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f7b0:{NFSU2_TR(0x43f7b0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f7b4:{NFSU2_TR(0x43f7b4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f7b8:{NFSU2_TR(0x43f7b8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f7bb:{NFSU2_TR(0x43f7bb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f7bf:{NFSU2_TR(0x43f7bf);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B43f7c1:{NFSU2_TR(0x43f7c1);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f7c3:{NFSU2_TR(0x43f7c3);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B43f7c5:{NFSU2_TR(0x43f7c5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f7c9:{NFSU2_TR(0x43f7c9);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B43f7cb:{NFSU2_TR(0x43f7cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f7cf:{NFSU2_TR(0x43f7cf);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f7d2:{NFSU2_TR(0x43f7d2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B43f7d4:{NFSU2_TR(0x43f7d4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f7d8:{NFSU2_TR(0x43f7d8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43f7da:{NFSU2_TR(0x43f7da);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43f7dc:{NFSU2_TR(0x43f7dc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43f7de:{NFSU2_TR(0x43f7de);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f7e1:{NFSU2_TR(0x43f7e1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43f7e5:{NFSU2_TR(0x43f7e5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f7e9:{NFSU2_TR(0x43f7e9);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f7ec:{NFSU2_TR(0x43f7ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43f7ee:{NFSU2_TR(0x43f7ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f7f2:{NFSU2_TR(0x43f7f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f7f5:{NFSU2_TR(0x43f7f5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43f7f9:{NFSU2_TR(0x43f7f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f7fd:{NFSU2_TR(0x43f7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f800:{NFSU2_TR(0x43f800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43f801:{NFSU2_TR(0x43f801);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f805:{NFSU2_TR(0x43f805);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f809:{NFSU2_TR(0x43f809);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f80c:{NFSU2_TR(0x43f80c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43f80d:{NFSU2_TR(0x43f80d);
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
B43f810:{NFSU2_TR(0x43f810);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43f820:L43f820:{c.instructions+=1;NFSU2_TR(0x43f820);
TAIL_STATIC(0x43d010u,43d);
}
B43f830:L43f830:{c.instructions+=68;NFSU2_TR(0x43f830);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f831:{NFSU2_TR(0x43f831);
__builtin_memmove((R+20),(R+16),4);
}
B43f833:{NFSU2_TR(0x43f833);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B43f836:{NFSU2_TR(0x43f836);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43f839:{NFSU2_TR(0x43f839);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f83c:{NFSU2_TR(0x43f83c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f83f:{NFSU2_TR(0x43f83f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f843:{NFSU2_TR(0x43f843);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f846:{NFSU2_TR(0x43f846);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f849:{NFSU2_TR(0x43f849);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f84d:{NFSU2_TR(0x43f84d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f851:{NFSU2_TR(0x43f851);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f855:{NFSU2_TR(0x43f855);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f858:{NFSU2_TR(0x43f858);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f85b:{NFSU2_TR(0x43f85b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f85e:{NFSU2_TR(0x43f85e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f861:{NFSU2_TR(0x43f861);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43f863:{NFSU2_TR(0x43f863);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f865:{NFSU2_TR(0x43f865);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f867:{NFSU2_TR(0x43f867);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43f869:{NFSU2_TR(0x43f869);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43f86b:{NFSU2_TR(0x43f86b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f86e:{NFSU2_TR(0x43f86e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f871:{NFSU2_TR(0x43f871);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f874:{NFSU2_TR(0x43f874);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f877:{NFSU2_TR(0x43f877);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43f879:{NFSU2_TR(0x43f879);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f87c:{NFSU2_TR(0x43f87c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f87e:{NFSU2_TR(0x43f87e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f880:{NFSU2_TR(0x43f880);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f883:{NFSU2_TR(0x43f883);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43f885:{NFSU2_TR(0x43f885);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f888:{NFSU2_TR(0x43f888);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f88a:{NFSU2_TR(0x43f88a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f88d:{NFSU2_TR(0x43f88d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f88f:{NFSU2_TR(0x43f88f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43f891:{NFSU2_TR(0x43f891);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f895:{NFSU2_TR(0x43f895);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f899:{NFSU2_TR(0x43f899);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f89b:{NFSU2_TR(0x43f89b);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B43f89d:{NFSU2_TR(0x43f89d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f8a1:{NFSU2_TR(0x43f8a1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f8a5:{NFSU2_TR(0x43f8a5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f8a8:{NFSU2_TR(0x43f8a8);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B43f8aa:{NFSU2_TR(0x43f8aa);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B43f8ac:{NFSU2_TR(0x43f8ac);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43f8ae:{NFSU2_TR(0x43f8ae);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f8b2:{NFSU2_TR(0x43f8b2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f8b5:{NFSU2_TR(0x43f8b5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43f8b9:{NFSU2_TR(0x43f8b9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f8bd:{NFSU2_TR(0x43f8bd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f8c1:{NFSU2_TR(0x43f8c1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f8c4:{NFSU2_TR(0x43f8c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43f8c6:{NFSU2_TR(0x43f8c6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f8ca:{NFSU2_TR(0x43f8ca);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f8cd:{NFSU2_TR(0x43f8cd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43f8d1:{NFSU2_TR(0x43f8d1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43f8d5:{NFSU2_TR(0x43f8d5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43f8d7:{NFSU2_TR(0x43f8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f8da:{NFSU2_TR(0x43f8da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43f8de:{NFSU2_TR(0x43f8de);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f8e0:{NFSU2_TR(0x43f8e0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43f8e2:{NFSU2_TR(0x43f8e2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f8e5:{NFSU2_TR(0x43f8e5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f8e8:{NFSU2_TR(0x43f8e8);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43f8eb:{NFSU2_TR(0x43f8eb);
__builtin_memmove((R+16),(R+20),4);
}
B43f8ed:{NFSU2_TR(0x43f8ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43f8ee:{NFSU2_TR(0x43f8ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43f8f0:L43f8f0:{c.instructions+=6;NFSU2_TR(0x43f8f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f8f4:{NFSU2_TR(0x43f8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f8f7:{NFSU2_TR(0x43f8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f8fa:{NFSU2_TR(0x43f8fa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43f8fb:{NFSU2_TR(0x43f8fb);
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
B43f8fd:{NFSU2_TR(0x43f8fd);
if(r1(R+518)){{goto L43f911;}}
}
B43f8ff:L43f8ff:{c.instructions+=4;NFSU2_TR(0x43f8ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f900:{NFSU2_TR(0x43f900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43f902:{NFSU2_TR(0x43f902);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43f905:{NFSU2_TR(0x43f905);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43f90a;}}
}
B43f907:L43f907:{c.instructions+=1;NFSU2_TR(0x43f907);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f90a:L43f90a:{c.instructions+=3;NFSU2_TR(0x43f90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f90d:{NFSU2_TR(0x43f90d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f910:{NFSU2_TR(0x43f910);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43f911:L43f911:{c.instructions+=1;NFSU2_TR(0x43f911);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43f920:L43f920:{c.instructions+=11;NFSU2_TR(0x43f920);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f924:{NFSU2_TR(0x43f924);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f927:{NFSU2_TR(0x43f927);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f92b:{NFSU2_TR(0x43f92b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f92c:{NFSU2_TR(0x43f92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43f92f:{NFSU2_TR(0x43f92f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43f931:{NFSU2_TR(0x43f931);
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
B43f932:{NFSU2_TR(0x43f932);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f935:{NFSU2_TR(0x43f935);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f938:{NFSU2_TR(0x43f938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43f939:{NFSU2_TR(0x43f939);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43f940:L43f940:{c.instructions+=6;NFSU2_TR(0x43f940);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f944:{NFSU2_TR(0x43f944);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f946:{NFSU2_TR(0x43f946);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f947:{NFSU2_TR(0x43f947);
__builtin_memmove((R+24),(R+4),4);
}
B43f949:{NFSU2_TR(0x43f949);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43f953:{NFSU2_TR(0x43f953);
if(r1(R+518)){{goto L43f95f;}}
}
B43f955:L43f955:{c.instructions+=1;NFSU2_TR(0x43f955);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
w4(U+4,u32(0x43bd50ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43f95f:L43f95f:{c.instructions+=4;NFSU2_TR(0x43f95f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f963:{NFSU2_TR(0x43f963);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43f965:{NFSU2_TR(0x43f965);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43f967:{NFSU2_TR(0x43f967);
if(r1(R+518)){{goto L43f979;}}
}
B43f969:L43f969:{c.instructions+=2;NFSU2_TR(0x43f969);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B43f96c:{NFSU2_TR(0x43f96c);
if(r1(R+518)){{goto L43f979;}}
}
B43f96e:L43f96e:{c.instructions+=1;NFSU2_TR(0x43f96e);
__builtin_memmove((R+28),(R+28),4);
}
B43f970:L43f970:{c.instructions+=4;NFSU2_TR(0x43f970);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B43f974:{NFSU2_TR(0x43f974);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43f975:{NFSU2_TR(0x43f975);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43f977:{NFSU2_TR(0x43f977);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f970u);}goto L43f970;}}
}
B43f979:L43f979:{c.instructions+=7;NFSU2_TR(0x43f979);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43f97a:{NFSU2_TR(0x43f97a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f97b:{NFSU2_TR(0x43f97b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f97f:{NFSU2_TR(0x43f97f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f980:{NFSU2_TR(0x43f980);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f981:{NFSU2_TR(0x43f981);
__builtin_memmove((R+4),(R+24),4);
}
B43f983:{NFSU2_TR(0x43f983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f988ull));
TAIL_STATIC(0x43e200u,43e);
}
B43f988:L43f988:{c.instructions+=3;NFSU2_TR(0x43f988);
__builtin_memmove((R+0),(R+24),4);
}
B43f98a:{NFSU2_TR(0x43f98a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43f98b:{NFSU2_TR(0x43f98b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43f990:L43f990:{c.instructions+=4;NFSU2_TR(0x43f990);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f994:{NFSU2_TR(0x43f994);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B43f997:{NFSU2_TR(0x43f997);
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
B43f999:{NFSU2_TR(0x43f999);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43f9a0:L43f9a0:{c.instructions+=7;NFSU2_TR(0x43f9a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f9a1:{NFSU2_TR(0x43f9a1);
__builtin_memmove((R+12),(R+4),4);
}
B43f9a3:{NFSU2_TR(0x43f9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f9a6:{NFSU2_TR(0x43f9a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f9a7:{NFSU2_TR(0x43f9a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43f9aa:{NFSU2_TR(0x43f9aa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43f9ac:{NFSU2_TR(0x43f9ac);
if(r1(R+518)){{goto L43f9d3;}}
}
B43f9ae:L43f9ae:{c.instructions+=2;NFSU2_TR(0x43f9ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f9af:{NFSU2_TR(0x43f9af);
}
B43f9b0:L43f9b0:{c.instructions+=7;NFSU2_TR(0x43f9b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43f9b2:{NFSU2_TR(0x43f9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43f9b5:{NFSU2_TR(0x43f9b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43f9b7:{NFSU2_TR(0x43f9b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43f9b9:{NFSU2_TR(0x43f9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43f9bc:{NFSU2_TR(0x43f9bc);
__builtin_memmove((R+4),(R+24),4);
}
B43f9be:{NFSU2_TR(0x43f9be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f9c3ull));
TAIL_STATIC(0x43e850u,43e);
}
B43f9c3:L43f9c3:{c.instructions+=2;NFSU2_TR(0x43f9c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f9c4:{NFSU2_TR(0x43f9c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f9c9ull));
TAIL_STATIC(0x75c6dau,75c);
}
B43f9c9:L43f9c9:{c.instructions+=4;NFSU2_TR(0x43f9c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43f9cb:{NFSU2_TR(0x43f9cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43f9ce:{NFSU2_TR(0x43f9ce);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43f9d0:{NFSU2_TR(0x43f9d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f9b0u);}goto L43f9b0;}}
}
B43f9d2:L43f9d2:{c.instructions+=1;NFSU2_TR(0x43f9d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43f9d3:L43f9d3:{c.instructions+=4;NFSU2_TR(0x43f9d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43f9d4:{NFSU2_TR(0x43f9d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B43f9d7:{NFSU2_TR(0x43f9d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43f9d8:{NFSU2_TR(0x43f9d8);
TAIL_STATIC(0x6f55d2u,6f5);
}
B43f9e0:L43f9e0:{c.instructions+=6;NFSU2_TR(0x43f9e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f9e1:{NFSU2_TR(0x43f9e1);
__builtin_memmove((R+24),(R+4),4);
}
B43f9e3:{NFSU2_TR(0x43f9e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43f9e4:{NFSU2_TR(0x43f9e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B43f9e7:{NFSU2_TR(0x43f9e7);
__builtin_memmove((R+4),(R+28),4);
}
B43f9e9:{NFSU2_TR(0x43f9e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43f9eeull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B43f9ee:L43f9ee:{c.instructions+=4;NFSU2_TR(0x43f9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43f9f1:{NFSU2_TR(0x43f9f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43f9f4:{NFSU2_TR(0x43f9f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43f9f6:{NFSU2_TR(0x43f9f6);
if(r1(R+518)){{goto L43fa3d;}}
}
B43f9f8:L43f9f8:{c.instructions+=2;NFSU2_TR(0x43f9f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43f9fc:{NFSU2_TR(0x43f9fc);
__builtin_memmove((R+16),(R+16),4);
}
B43fa00:L43fa00:{c.instructions+=2;NFSU2_TR(0x43fa00);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fa02:{NFSU2_TR(0x43fa02);
if(r1(R+518)){{goto L43fa16;}}
}
B43fa04:L43fa04:{c.instructions+=3;NFSU2_TR(0x43fa04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43fa06:{NFSU2_TR(0x43fa06);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fa08:{NFSU2_TR(0x43fa08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fa00u);}goto L43fa00;}}
}
B43fa0a:L43fa0a:{c.instructions+=2;NFSU2_TR(0x43fa0a);
__builtin_memmove((R+4),(R+28),4);
}
B43fa0c:{NFSU2_TR(0x43fa0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fa11ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B43fa11:L43fa11:{c.instructions+=3;NFSU2_TR(0x43fa11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43fa12:{NFSU2_TR(0x43fa12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43fa13:{NFSU2_TR(0x43fa13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43fa16:L43fa16:{c.instructions+=2;NFSU2_TR(0x43fa16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43fa18:{NFSU2_TR(0x43fa18);
if(r1(R+518)){{goto L43fa3d;}}
}
B43fa1a:L43fa1a:{c.instructions+=3;NFSU2_TR(0x43fa1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43fa1e:{NFSU2_TR(0x43fa1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43fa21:{NFSU2_TR(0x43fa21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43fa3d;}}
}
B43fa23:L43fa23:{c.instructions+=10;NFSU2_TR(0x43fa23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43fa25:{NFSU2_TR(0x43fa25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fa28:{NFSU2_TR(0x43fa28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43fa2a:{NFSU2_TR(0x43fa2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fa2d:{NFSU2_TR(0x43fa2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fa30:{NFSU2_TR(0x43fa30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fa33:{NFSU2_TR(0x43fa33);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B43fa35:{NFSU2_TR(0x43fa35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fa38:{NFSU2_TR(0x43fa38);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B43fa3a:{NFSU2_TR(0x43fa3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fa3d:L43fa3d:{c.instructions+=2;NFSU2_TR(0x43fa3d);
__builtin_memmove((R+4),(R+28),4);
}
B43fa3f:{NFSU2_TR(0x43fa3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fa44ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B43fa44:L43fa44:{c.instructions+=3;NFSU2_TR(0x43fa44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43fa45:{NFSU2_TR(0x43fa45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43fa46:{NFSU2_TR(0x43fa46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43fa50:L43fa50:{c.instructions+=7;NFSU2_TR(0x43fa50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fa51:{NFSU2_TR(0x43fa51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fa52:{NFSU2_TR(0x43fa52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fa53:{NFSU2_TR(0x43fa53);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43fa57:{NFSU2_TR(0x43fa57);
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
B43fa59:{NFSU2_TR(0x43fa59);
__builtin_memmove((R+20),(R+4),4);
}
B43fa5b:{NFSU2_TR(0x43fa5b);
if(r1(R+518)){{goto L43fb79;}}
}
B43fa61:L43fa61:{c.instructions+=5;NFSU2_TR(0x43fa61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fa62:{NFSU2_TR(0x43fa62);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B43fa65:{NFSU2_TR(0x43fa65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fa66:{NFSU2_TR(0x43fa66);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fa6a:{NFSU2_TR(0x43fa6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fa6full));
TAIL_STATIC(0x6f55ddu,6f5);
}
B43fa6f:L43fa6f:{c.instructions+=8;NFSU2_TR(0x43fa6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fa73:{NFSU2_TR(0x43fa73);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43fa76:{NFSU2_TR(0x43fa76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fa79:{NFSU2_TR(0x43fa79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x44443333ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43fa80:{NFSU2_TR(0x43fa80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43fa82:{NFSU2_TR(0x43fa82);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fa84:{NFSU2_TR(0x43fa84);
__builtin_memmove((R+12),(R+0),4);
}
B43fa86:{NFSU2_TR(0x43fa86);
if(r1(R+518)){{goto L43fa92;}}
}
B43fa88:L43fa88:{c.instructions+=2;NFSU2_TR(0x43fa88);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fa8a:{NFSU2_TR(0x43fa8a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L43fa92;}}
}
B43fa8c:L43fa8c:{c.instructions+=3;NFSU2_TR(0x43fa8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43fa8e:{NFSU2_TR(0x43fa8e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fa90:{NFSU2_TR(0x43fa90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fa88u);}goto L43fa88;}}
}
B43fa92:L43fa92:{c.instructions+=11;NFSU2_TR(0x43fa92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fa95:{NFSU2_TR(0x43fa95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43fa97:{NFSU2_TR(0x43fa97);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fa9a:{NFSU2_TR(0x43fa9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43fa9d:{NFSU2_TR(0x43fa9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43faa0:{NFSU2_TR(0x43faa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B43faa3:{NFSU2_TR(0x43faa3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43faa5:{NFSU2_TR(0x43faa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43faa8:{NFSU2_TR(0x43faa8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43faaa:{NFSU2_TR(0x43faaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43faae:{NFSU2_TR(0x43faae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43fac9;}}
}
B43fab0:L43fab0:{c.instructions+=9;NFSU2_TR(0x43fab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43fab3:{NFSU2_TR(0x43fab3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B43fab5:{NFSU2_TR(0x43fab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fab8:{NFSU2_TR(0x43fab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43faba:{NFSU2_TR(0x43faba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43fabe:{NFSU2_TR(0x43fabe);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43fac1:{NFSU2_TR(0x43fac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43fac4:{NFSU2_TR(0x43fac4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43fac6:{NFSU2_TR(0x43fac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fac9:L43fac9:{c.instructions+=5;NFSU2_TR(0x43fac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43facc:{NFSU2_TR(0x43facc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43facf:{NFSU2_TR(0x43facf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B43fad1:{NFSU2_TR(0x43fad1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fad3:{NFSU2_TR(0x43fad3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43faec;}}
}
B43fad5:L43fad5:{c.instructions+=9;NFSU2_TR(0x43fad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43fad8:{NFSU2_TR(0x43fad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B43fadb:{NFSU2_TR(0x43fadb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fade:{NFSU2_TR(0x43fade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43fae0:{NFSU2_TR(0x43fae0);
__builtin_memmove((R+28),(R+0),4);
}
B43fae2:{NFSU2_TR(0x43fae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fae5:{NFSU2_TR(0x43fae5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43fae7:{NFSU2_TR(0x43fae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43faea:{NFSU2_TR(0x43faea);
__builtin_memmove((R+12),(R+8),4);
}
B43faec:L43faec:{c.instructions+=3;NFSU2_TR(0x43faec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43faef:{NFSU2_TR(0x43faef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43faf1:{NFSU2_TR(0x43faf1);
if(r1(R+518)){{goto L43fb08;}}
}
B43faf3:L43faf3:{c.instructions+=4;NFSU2_TR(0x43faf3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B43faf5:{NFSU2_TR(0x43faf5);
__builtin_memmove((R+8),(R+4),4);
}
B43faf7:{NFSU2_TR(0x43faf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43fafa:{NFSU2_TR(0x43fafa);
w4(R+0,u32(0xeeeeeeeeull));
}
B43faff:L43faff:{c.instructions+=1;NFSU2_TR(0x43faff);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L43fb01;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43faffu);}goto L43faff;}
}
B43fb01:L43fb01:{c.instructions+=2;NFSU2_TR(0x43fb01);
__builtin_memmove((R+4),(R+8),4);
}
B43fb03:{NFSU2_TR(0x43fb03);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B43fb06:L43fb06:{c.instructions+=1;NFSU2_TR(0x43fb06);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L43fb08;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fb06u);}goto L43fb06;}
}
B43fb08:L43fb08:{c.instructions+=3;NFSU2_TR(0x43fb08);
__builtin_memmove((R+0),gp(0x7eb3cc),4);
}
B43fb0d:{NFSU2_TR(0x43fb0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43fb0f:{NFSU2_TR(0x43fb0f);
if(r1(R+518)){{goto L43fb6e;}}
}
B43fb11:L43fb11:{c.instructions+=4;NFSU2_TR(0x43fb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43fb14:{NFSU2_TR(0x43fb14);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43fb17:{NFSU2_TR(0x43fb17);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fb19:{NFSU2_TR(0x43fb19);
if(r1(R+518)){{goto L43fb6e;}}
}
B43fb1b:L43fb1b:{c.instructions+=1;NFSU2_TR(0x43fb1b);
{goto L43fb20;}
}
B43fb20:L43fb20:{c.instructions+=2;NFSU2_TR(0x43fb20);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43fb23:{NFSU2_TR(0x43fb23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43fb2d;}}
}
B43fb25:L43fb25:{c.instructions+=3;NFSU2_TR(0x43fb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fb28:{NFSU2_TR(0x43fb28);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43fb2b:{NFSU2_TR(0x43fb2b);
if(r1(R+518)){{goto L43fb44;}}
}
B43fb2d:L43fb2d:{c.instructions+=3;NFSU2_TR(0x43fb2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43fb2f:{NFSU2_TR(0x43fb2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fb31:{NFSU2_TR(0x43fb31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fb20u);}goto L43fb20;}}
}
B43fb33:L43fb33:{c.instructions+=2;NFSU2_TR(0x43fb33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fb37:{NFSU2_TR(0x43fb37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fb3cull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B43fb3c:L43fb3c:{c.instructions+=6;NFSU2_TR(0x43fb3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43fb3d:{NFSU2_TR(0x43fb3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43fb3e:{NFSU2_TR(0x43fb3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43fb3f:{NFSU2_TR(0x43fb3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43fb40:{NFSU2_TR(0x43fb40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43fb41:{NFSU2_TR(0x43fb41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43fb44:L43fb44:{c.instructions+=12;NFSU2_TR(0x43fb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43fb47:{NFSU2_TR(0x43fb47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B43fb4a:{NFSU2_TR(0x43fb4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43fb4c:{NFSU2_TR(0x43fb4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fb4f:{NFSU2_TR(0x43fb4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43fb51:{NFSU2_TR(0x43fb51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fb54:{NFSU2_TR(0x43fb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fb57:{NFSU2_TR(0x43fb57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43fb59:{NFSU2_TR(0x43fb59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43fb5b:{NFSU2_TR(0x43fb5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fb5e:{NFSU2_TR(0x43fb5e);
__builtin_memmove((R+4),(R+24),4);
}
B43fb60:{NFSU2_TR(0x43fb60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fb65ull));
TAIL_STATIC(0x43e850u,43e);
}
B43fb65:L43fb65:{c.instructions+=2;NFSU2_TR(0x43fb65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fb66:{NFSU2_TR(0x43fb66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fb6bull));
TAIL_STATIC(0x75c6dau,75c);
}
B43fb6b:L43fb6b:{c.instructions+=1;NFSU2_TR(0x43fb6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43fb6e:L43fb6e:{c.instructions+=2;NFSU2_TR(0x43fb6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fb72:{NFSU2_TR(0x43fb72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fb77ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B43fb77:L43fb77:{c.instructions+=2;NFSU2_TR(0x43fb77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43fb78:{NFSU2_TR(0x43fb78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43fb79:L43fb79:{c.instructions+=4;NFSU2_TR(0x43fb79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43fb7a:{NFSU2_TR(0x43fb7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43fb7b:{NFSU2_TR(0x43fb7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43fb7c:{NFSU2_TR(0x43fb7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43fb80:L43fb80:{c.instructions+=4;NFSU2_TR(0x43fb80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fb81:{NFSU2_TR(0x43fb81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43fb85:{NFSU2_TR(0x43fb85);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43fb8c:{NFSU2_TR(0x43fb8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fb91ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f9a0u);}goto L43f9a0;}
}
B43fb91:L43fb91:{c.instructions+=3;NFSU2_TR(0x43fb91);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B43fb9c:{NFSU2_TR(0x43fb9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43fb9d:{NFSU2_TR(0x43fb9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43fba0:L43fba0:{c.instructions+=7;NFSU2_TR(0x43fba0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fba4:{NFSU2_TR(0x43fba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fba8:{NFSU2_TR(0x43fba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43fbac:{NFSU2_TR(0x43fbac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fbad:{NFSU2_TR(0x43fbad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fbae:{NFSU2_TR(0x43fbae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x828154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43fbb5:{NFSU2_TR(0x43fbb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fbbaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43f9e0u);}goto L43f9e0;}
}
B43fbba:L43fbba:{c.instructions+=1;NFSU2_TR(0x43fbba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43fbc0:L43fbc0:{c.instructions+=6;NFSU2_TR(0x43fbc0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43fbc3:{NFSU2_TR(0x43fbc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fbc4:{NFSU2_TR(0x43fbc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fbc5:{NFSU2_TR(0x43fbc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43fbc9:{NFSU2_TR(0x43fbc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fbca:{NFSU2_TR(0x43fbca);
u8 U[4];
__builtin_memmove((U+0),gp(0x78311c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fbd0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43fbd0:L43fbd0:{c.instructions+=4;NFSU2_TR(0x43fbd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fbd4:{NFSU2_TR(0x43fbd4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43fbd8:{NFSU2_TR(0x43fbd8);
__builtin_memmove((R+4),gp(0x8284e4),4);
}
B43fbde:{NFSU2_TR(0x43fbde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fbe3ull));
TAIL_STATIC(0x75c600u,75c);
}
B43fbe3:L43fbe3:{c.instructions+=13;NFSU2_TR(0x43fbe3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43fbe7:{NFSU2_TR(0x43fbe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fbeb:{NFSU2_TR(0x43fbeb);
__builtin_memmove((R+24),(R+0),4);
}
B43fbed:{NFSU2_TR(0x43fbed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43fbef:{NFSU2_TR(0x43fbef);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43fbf3:{NFSU2_TR(0x43fbf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fbf7:{NFSU2_TR(0x43fbf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fbfb:{NFSU2_TR(0x43fbfb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fbfc:{NFSU2_TR(0x43fbfc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fc00:{NFSU2_TR(0x43fc00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc01:{NFSU2_TR(0x43fc01);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43fc05:{NFSU2_TR(0x43fc05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc06:{NFSU2_TR(0x43fc06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fc0bull));
TAIL_STATIC(0x43e950u,43e);
}
B43fc0b:L43fc0b:{c.instructions+=3;NFSU2_TR(0x43fc0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc0c:{NFSU2_TR(0x43fc0c);
__builtin_memmove((R+28),(R+0),4);
}
B43fc0e:{NFSU2_TR(0x43fc0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fc13ull));
TAIL_STATIC(0x43e5c0u,43e);
}
B43fc13:L43fc13:{c.instructions+=11;NFSU2_TR(0x43fc13);
{u32 ea_=u32(u32(8553752u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43fc19:{NFSU2_TR(0x43fc19);
__builtin_memmove((R+0),gp(0x82851c),4);
}
B43fc1e:{NFSU2_TR(0x43fc1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B43fc21:{NFSU2_TR(0x43fc21);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43fc22:{NFSU2_TR(0x43fc22);
{u32 ea_=u32(u32(8553752u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43fc28:{NFSU2_TR(0x43fc28);
__builtin_memmove(gp(0x82851c),(R+0),4);
}
B43fc2d:{NFSU2_TR(0x43fc2d);
__builtin_memmove((R+0),(R+28),4);
}
B43fc2f:{NFSU2_TR(0x43fc2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43fc30:{NFSU2_TR(0x43fc30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43fc31:{NFSU2_TR(0x43fc31);
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
B43fc34:{NFSU2_TR(0x43fc34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43fc40:L43fc40:{c.instructions+=10;NFSU2_TR(0x43fc40);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fc44:{NFSU2_TR(0x43fc44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc45:{NFSU2_TR(0x43fc45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc46:{NFSU2_TR(0x43fc46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43fc4a:{NFSU2_TR(0x43fc4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43fc4e:{NFSU2_TR(0x43fc4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc4f:{NFSU2_TR(0x43fc4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc50:{NFSU2_TR(0x43fc50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x164ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43fc56:{NFSU2_TR(0x43fc56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc57:{NFSU2_TR(0x43fc57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fc5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fbc0u);}goto L43fbc0;}
}
B43fc5c:L43fc5c:{c.instructions+=4;NFSU2_TR(0x43fc5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fc62:{NFSU2_TR(0x43fc62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B43fc65:{NFSU2_TR(0x43fc65);
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
B43fc67:{NFSU2_TR(0x43fc67);
if(r1(R+518)){{goto L43fc6f;}}
}
B43fc69:L43fc69:{c.instructions+=2;NFSU2_TR(0x43fc69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc6a:{NFSU2_TR(0x43fc6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fc6cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43fc6c:L43fc6c:{c.instructions+=1;NFSU2_TR(0x43fc6c);
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
B43fc6f:L43fc6f:{c.instructions+=3;NFSU2_TR(0x43fc6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43fc70:{NFSU2_TR(0x43fc70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43fc71:{NFSU2_TR(0x43fc71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43fc80:L43fc80:{c.instructions+=11;NFSU2_TR(0x43fc80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B43fc83:{NFSU2_TR(0x43fc83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc84:{NFSU2_TR(0x43fc84);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43fc88:{NFSU2_TR(0x43fc88);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc89:{NFSU2_TR(0x43fc89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc8a:{NFSU2_TR(0x43fc8a);
__builtin_memmove((R+24),(R+4),4);
}
B43fc8c:{NFSU2_TR(0x43fc8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B43fc8f:{NFSU2_TR(0x43fc8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fc90:{NFSU2_TR(0x43fc90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fc94:{NFSU2_TR(0x43fc94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fc98:{NFSU2_TR(0x43fc98);
{goto L43fca0;}
}
B43fca0:L43fca0:{c.instructions+=2;NFSU2_TR(0x43fca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fca4:{NFSU2_TR(0x43fca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fca9ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B43fca9:L43fca9:{c.instructions+=4;NFSU2_TR(0x43fca9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B43fcac:{NFSU2_TR(0x43fcac);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffffcull))));
}
B43fcaf:{NFSU2_TR(0x43fcaf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43fcb2:{NFSU2_TR(0x43fcb2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43fcb9;}}
}
B43fcb4:L43fcb4:{c.instructions+=1;NFSU2_TR(0x43fcb4);
w4(R+12,u32(0x10ull));
}
B43fcb9:L43fcb9:{c.instructions+=6;NFSU2_TR(0x43fcb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fcbd:{NFSU2_TR(0x43fcbd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43fcbf:{NFSU2_TR(0x43fcbf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fcc1:{NFSU2_TR(0x43fcc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fcc5:{NFSU2_TR(0x43fcc5);
w4(R+20,u32(0x7fffffffull));
}
B43fcca:{NFSU2_TR(0x43fcca);
if(r1(R+518)){{goto L43fd23;}}
}
B43fccc:L43fccc:{c.instructions+=5;NFSU2_TR(0x43fccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fccf:{NFSU2_TR(0x43fccf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43fcd2:{NFSU2_TR(0x43fcd2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fcd4:{NFSU2_TR(0x43fcd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43fcd8:{NFSU2_TR(0x43fcd8);
if(r1(R+518)){{goto L43fdc3;}}
}
B43fcde:L43fcde:{c.instructions+=1;NFSU2_TR(0x43fcde);
__builtin_memmove((R+28),(R+28),4);
}
B43fce0:L43fce0:{c.instructions+=12;NFSU2_TR(0x43fce0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43fce4:{NFSU2_TR(0x43fce4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B43fce6:{NFSU2_TR(0x43fce6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B43fce9:{NFSU2_TR(0x43fce9);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B43fceb:{NFSU2_TR(0x43fceb);
__builtin_memmove((R+0),(R+24),4);
}
B43fced:{NFSU2_TR(0x43fced);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B43fcef:{NFSU2_TR(0x43fcef);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B43fcf0:{NFSU2_TR(0x43fcf0);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43fcf0);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43fcf0);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B43fcf2:{NFSU2_TR(0x43fcf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fcf5:{NFSU2_TR(0x43fcf5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B43fcf7:{NFSU2_TR(0x43fcf7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43fcf9:{NFSU2_TR(0x43fcf9);
if(r1(R+518)){{goto L43fd00;}}
}
B43fcfb:L43fcfb:{c.instructions+=2;NFSU2_TR(0x43fcfb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43fcfe:{NFSU2_TR(0x43fcfe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43fd14;}}
}
B43fd00:L43fd00:{c.instructions+=2;NFSU2_TR(0x43fd00);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43fd02:{NFSU2_TR(0x43fd02);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43fd14;}}
}
B43fd04:L43fd04:{c.instructions+=6;NFSU2_TR(0x43fd04);
__builtin_memmove((R+20),(R+0),4);
}
B43fd06:{NFSU2_TR(0x43fd06);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fd0a:{NFSU2_TR(0x43fd0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43fd0c:{NFSU2_TR(0x43fd0c);
__builtin_memmove((R+28),(R+4),4);
}
B43fd0e:{NFSU2_TR(0x43fd0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fd12:{NFSU2_TR(0x43fd12);
if(r1(R+518)){{goto L43fd89;}}
}
B43fd14:L43fd14:{c.instructions+=5;NFSU2_TR(0x43fd14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fd18:{NFSU2_TR(0x43fd18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43fd1a:{NFSU2_TR(0x43fd1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43fd1d:{NFSU2_TR(0x43fd1d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fd1f:{NFSU2_TR(0x43fd1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fce0u);}goto L43fce0;}}
}
B43fd21:L43fd21:{c.instructions+=1;NFSU2_TR(0x43fd21);
{goto L43fd89;}
}
B43fd23:L43fd23:{c.instructions+=5;NFSU2_TR(0x43fd23);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fd27:{NFSU2_TR(0x43fd27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43fd2a:{NFSU2_TR(0x43fd2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43fd2d:{NFSU2_TR(0x43fd2d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fd2f:{NFSU2_TR(0x43fd2f);
if(r1(R+518)){{goto L43fdbf;}}
}
B43fd35:L43fd35:{c.instructions+=4;NFSU2_TR(0x43fd35);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fd39:{NFSU2_TR(0x43fd39);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B43fd3a:{NFSU2_TR(0x43fd3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fd3e:{NFSU2_TR(0x43fd3e);
__builtin_memmove((R+28),(R+28),4);
}
B43fd40:L43fd40:{c.instructions+=12;NFSU2_TR(0x43fd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fd43:{NFSU2_TR(0x43fd43);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43fd47:{NFSU2_TR(0x43fd47);
__builtin_memmove((R+0),(R+4),4);
}
B43fd49:{NFSU2_TR(0x43fd49);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B43fd4b:{NFSU2_TR(0x43fd4b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B43fd4d:{NFSU2_TR(0x43fd4d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B43fd4f:{NFSU2_TR(0x43fd4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B43fd53:{NFSU2_TR(0x43fd53);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B43fd54:{NFSU2_TR(0x43fd54);
u8 U[64];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43fd54);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43fd54);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B43fd58:{NFSU2_TR(0x43fd58);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B43fd5a:{NFSU2_TR(0x43fd5a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B43fd5c:{NFSU2_TR(0x43fd5c);
if(r1(R+518)){{goto L43fd63;}}
}
B43fd5e:L43fd5e:{c.instructions+=2;NFSU2_TR(0x43fd5e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43fd61:{NFSU2_TR(0x43fd61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43fd77;}}
}
B43fd63:L43fd63:{c.instructions+=2;NFSU2_TR(0x43fd63);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43fd65:{NFSU2_TR(0x43fd65);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43fd77;}}
}
B43fd67:L43fd67:{c.instructions+=6;NFSU2_TR(0x43fd67);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fd6b:{NFSU2_TR(0x43fd6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43fd6d:{NFSU2_TR(0x43fd6d);
__builtin_memmove((R+28),(R+24),4);
}
B43fd6f:{NFSU2_TR(0x43fd6f);
__builtin_memmove((R+20),(R+4),4);
}
B43fd71:{NFSU2_TR(0x43fd71);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fd75:{NFSU2_TR(0x43fd75);
if(r1(R+518)){{goto L43fd85;}}
}
B43fd77:L43fd77:{c.instructions+=5;NFSU2_TR(0x43fd77);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fd7b:{NFSU2_TR(0x43fd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43fd7e:{NFSU2_TR(0x43fd7e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43fd81:{NFSU2_TR(0x43fd81);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43fd83:{NFSU2_TR(0x43fd83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fd40u);}goto L43fd40;}}
}
B43fd85:L43fd85:{c.instructions+=1;NFSU2_TR(0x43fd85);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43fd89:L43fd89:{c.instructions+=2;NFSU2_TR(0x43fd89);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43fd8b:{NFSU2_TR(0x43fd8b);
if(r1(R+518)){{goto L43fdc3;}}
}
B43fd8d:L43fd8d:{c.instructions+=5;NFSU2_TR(0x43fd8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fd91:{NFSU2_TR(0x43fd91);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fd95:{NFSU2_TR(0x43fd95);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B43fd97:{NFSU2_TR(0x43fd97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43fd99:{NFSU2_TR(0x43fd99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43fe52;}}
}
B43fd9f:L43fd9f:{c.instructions+=5;NFSU2_TR(0x43fd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fda2:{NFSU2_TR(0x43fda2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43fda4:{NFSU2_TR(0x43fda4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B43fda7:{NFSU2_TR(0x43fda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fdaa:{NFSU2_TR(0x43fdaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43fe7e;}}
}
B43fdb0:L43fdb0:{c.instructions+=5;NFSU2_TR(0x43fdb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43fdb2:{NFSU2_TR(0x43fdb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43fdb5:{NFSU2_TR(0x43fdb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B43fdb7:{NFSU2_TR(0x43fdb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fdba:{NFSU2_TR(0x43fdba);
{goto L43fe7e;}
}
B43fdbf:L43fdbf:{c.instructions+=1;NFSU2_TR(0x43fdbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43fdc3:L43fdc3:{c.instructions+=2;NFSU2_TR(0x43fdc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fdc7:{NFSU2_TR(0x43fdc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fdccull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B43fdcc:L43fdcc:{c.instructions+=4;NFSU2_TR(0x43fdcc);
__builtin_memmove((R+0),gp(0x7eb3d0),4);
}
B43fdd1:{NFSU2_TR(0x43fdd1);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B43fdd5:{NFSU2_TR(0x43fdd5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43fdd7:{NFSU2_TR(0x43fdd7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43fddb;}}
}
B43fdd9:L43fdd9:{c.instructions+=1;NFSU2_TR(0x43fdd9);
__builtin_memmove((R+28),(R+0),4);
}
B43fddb:L43fddb:{c.instructions+=2;NFSU2_TR(0x43fddb);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fddd:{NFSU2_TR(0x43fddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fde2ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B43fde2:L43fde2:{c.instructions+=4;NFSU2_TR(0x43fde2);
__builtin_memmove((R+24),(R+0),4);
}
B43fde4:{NFSU2_TR(0x43fde4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43fde7:{NFSU2_TR(0x43fde7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43fde9:{NFSU2_TR(0x43fde9);
if(r1(R+518)){{goto L43fdfc;}}
}
B43fdeb:L43fdeb:{c.instructions+=3;NFSU2_TR(0x43fdeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fdec:{NFSU2_TR(0x43fdec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fdef:{NFSU2_TR(0x43fdef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fdf4ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B43fdf4:L43fdf4:{c.instructions+=3;NFSU2_TR(0x43fdf4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43fdf7:{NFSU2_TR(0x43fdf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fdfa:{NFSU2_TR(0x43fdfa);
{goto L43fdfe;}
}
B43fdfc:L43fdfc:{c.instructions+=1;NFSU2_TR(0x43fdfc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43fdfe:L43fdfe:{c.instructions+=3;NFSU2_TR(0x43fdfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fe01:{NFSU2_TR(0x43fe01);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43fe03:{NFSU2_TR(0x43fe03);
if(r1(R+518)){{goto L43fe34;}}
}
B43fe05:L43fe05:{c.instructions+=9;NFSU2_TR(0x43fe05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fe08:{NFSU2_TR(0x43fe08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43fe0c:{NFSU2_TR(0x43fe0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43fe0f:{NFSU2_TR(0x43fe0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fe10:{NFSU2_TR(0x43fe10);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B43fe12:{NFSU2_TR(0x43fe12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fe13:{NFSU2_TR(0x43fe13);
__builtin_memmove((R+4),(R+28),4);
}
B43fe15:{NFSU2_TR(0x43fe15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fe18:{NFSU2_TR(0x43fe18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fe1dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fa50u);}goto L43fa50;}
}
B43fe1d:L43fe1d:{c.instructions+=8;NFSU2_TR(0x43fe1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fe20:{NFSU2_TR(0x43fe20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43fe23:{NFSU2_TR(0x43fe23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43fe25:{NFSU2_TR(0x43fe25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fe28:{NFSU2_TR(0x43fe28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fe2b:{NFSU2_TR(0x43fe2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43fe2d:{NFSU2_TR(0x43fe2d);
__builtin_memmove((R+24),(R+28),4);
}
B43fe2f:{NFSU2_TR(0x43fe2f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fca0u);}goto L43fca0;}
}
B43fe34:L43fe34:{c.instructions+=3;NFSU2_TR(0x43fe34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fe37:{NFSU2_TR(0x43fe37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fe38:{NFSU2_TR(0x43fe38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fe3dull));
TAIL_STATIC(0x75c6dau,75c);
}
B43fe3d:L43fe3d:{c.instructions+=2;NFSU2_TR(0x43fe3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fe3e:{NFSU2_TR(0x43fe3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fe43ull));
TAIL_STATIC(0x75c6dau,75c);
}
B43fe43:L43fe43:{c.instructions+=8;NFSU2_TR(0x43fe43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43fe46:{NFSU2_TR(0x43fe46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43fe47:{NFSU2_TR(0x43fe47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43fe48:{NFSU2_TR(0x43fe48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43fe49:{NFSU2_TR(0x43fe49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43fe4b:{NFSU2_TR(0x43fe4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43fe4c:{NFSU2_TR(0x43fe4c);
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
B43fe4f:{NFSU2_TR(0x43fe4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43fe52:L43fe52:{c.instructions+=3;NFSU2_TR(0x43fe52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fe55:{NFSU2_TR(0x43fe55);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B43fe57:{NFSU2_TR(0x43fe57);
if(r1(R+518)){{goto L43fe72;}}
}
B43fe59:L43fe59:{c.instructions+=8;NFSU2_TR(0x43fe59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43fe5c:{NFSU2_TR(0x43fe5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fe5f:{NFSU2_TR(0x43fe5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x44443333ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43fe66:{NFSU2_TR(0x43fe66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43fe68:{NFSU2_TR(0x43fe68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B43fe6a:{NFSU2_TR(0x43fe6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fe6d:{NFSU2_TR(0x43fe6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fe70:{NFSU2_TR(0x43fe70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43fe72:L43fe72:{c.instructions+=5;NFSU2_TR(0x43fe72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43fe74:{NFSU2_TR(0x43fe74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fe77:{NFSU2_TR(0x43fe77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43fe79:{NFSU2_TR(0x43fe79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fe7c:{NFSU2_TR(0x43fe7c);
__builtin_memmove((R+24),(R+28),4);
}
B43fe7e:L43fe7e:{c.instructions+=4;NFSU2_TR(0x43fe7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43fe82:{NFSU2_TR(0x43fe82);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43fe85:{NFSU2_TR(0x43fe85);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43fe87:{NFSU2_TR(0x43fe87);
if(r1(R+518)){{goto L43fea0;}}
}
B43fe89:L43fe89:{c.instructions+=5;NFSU2_TR(0x43fe89);
__builtin_memmove((R+4),(R+12),4);
}
B43fe8b:{NFSU2_TR(0x43fe8b);
__builtin_memmove((R+20),(R+4),4);
}
B43fe8d:{NFSU2_TR(0x43fe8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43fe90:{NFSU2_TR(0x43fe90);
w4(R+0,u32(0xaaaaaaaaull));
}
B43fe95:{NFSU2_TR(0x43fe95);
__builtin_memmove((R+28),(R+24),4);
}
B43fe97:L43fe97:{c.instructions+=1;NFSU2_TR(0x43fe97);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L43fe99;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fe97u);}goto L43fe97;}
}
B43fe99:L43fe99:{c.instructions+=2;NFSU2_TR(0x43fe99);
__builtin_memmove((R+4),(R+20),4);
}
B43fe9b:{NFSU2_TR(0x43fe9b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B43fe9e:L43fe9e:{c.instructions+=1;NFSU2_TR(0x43fe9e);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L43fea0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43fe9eu);}goto L43fe9e;}
}
B43fea0:L43fea0:{c.instructions+=12;NFSU2_TR(0x43fea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43fea3:{NFSU2_TR(0x43fea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fea6:{NFSU2_TR(0x43fea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43fea9:{NFSU2_TR(0x43fea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43feac:{NFSU2_TR(0x43feac);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B43fead:{NFSU2_TR(0x43fead);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B43feaf:{NFSU2_TR(0x43feaf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B43feb0:{NFSU2_TR(0x43feb0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43feb2:{NFSU2_TR(0x43feb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43feb5:{NFSU2_TR(0x43feb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43feb8:{NFSU2_TR(0x43feb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43febb:{NFSU2_TR(0x43febb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43fec0;}}
}
B43febd:L43febd:{c.instructions+=1;NFSU2_TR(0x43febd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fec0:L43fec0:{c.instructions+=8;NFSU2_TR(0x43fec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43fec3:{NFSU2_TR(0x43fec3);
__builtin_memmove((R+28),(R+0),4);
}
B43fec5:{NFSU2_TR(0x43fec5);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B43fec7:{NFSU2_TR(0x43fec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B43feca:{NFSU2_TR(0x43feca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43fece:{NFSU2_TR(0x43fece);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fed1:{NFSU2_TR(0x43fed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fed4:{NFSU2_TR(0x43fed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fed9ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B43fed9:L43fed9:{c.instructions+=9;NFSU2_TR(0x43fed9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43fedd:{NFSU2_TR(0x43fedd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43fede:{NFSU2_TR(0x43fede);
__builtin_memmove((R+0),(R+24),4);
}
B43fee0:{NFSU2_TR(0x43fee0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43fee1:{NFSU2_TR(0x43fee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43fee2:{NFSU2_TR(0x43fee2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43fee4:{NFSU2_TR(0x43fee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43fee5:{NFSU2_TR(0x43fee5);
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
B43fee8:{NFSU2_TR(0x43fee8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43fef0:L43fef0:{c.instructions+=8;NFSU2_TR(0x43fef0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fef1:{NFSU2_TR(0x43fef1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fef2:{NFSU2_TR(0x43fef2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fef3:{NFSU2_TR(0x43fef3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fef4:{NFSU2_TR(0x43fef4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43fef8:{NFSU2_TR(0x43fef8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fef9:{NFSU2_TR(0x43fef9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3cull))));
}
B43fefc:{NFSU2_TR(0x43fefc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ff01ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B43ff01:L43ff01:{c.instructions+=7;NFSU2_TR(0x43ff01);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ff05:{NFSU2_TR(0x43ff05);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43ff08:{NFSU2_TR(0x43ff08);
__builtin_memmove((R+20),gp(0x783110),4);
}
B43ff0e:{NFSU2_TR(0x43ff0e);
__builtin_memmove((R+12),gp(0x78310c),4);
}
B43ff14:{NFSU2_TR(0x43ff14);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43ff17:{NFSU2_TR(0x43ff17);
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
B43ff19:{NFSU2_TR(0x43ff19);
if(r1(R+518)){{goto L43ffbb;}}
}
B43ff1f:L43ff1f:{c.instructions+=1;NFSU2_TR(0x43ff1f);
}
B43ff20:L43ff20:{c.instructions+=3;NFSU2_TR(0x43ff20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff22:{NFSU2_TR(0x43ff22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff23:{NFSU2_TR(0x43ff23);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ff25ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43ff25:L43ff25:{c.instructions+=2;NFSU2_TR(0x43ff25);
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
B43ff27:{NFSU2_TR(0x43ff27);
if(r1(R+518)){{goto L43ff36;}}
}
B43ff29:L43ff29:{c.instructions+=3;NFSU2_TR(0x43ff29);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff2b:{NFSU2_TR(0x43ff2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff2c:{NFSU2_TR(0x43ff2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ff2eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43ff2e:L43ff2e:{c.instructions+=2;NFSU2_TR(0x43ff2e);
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
B43ff30:{NFSU2_TR(0x43ff30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x440039u,440);}
}
B43ff36:L43ff36:{c.instructions+=4;NFSU2_TR(0x43ff36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B43ff38:{NFSU2_TR(0x43ff38);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff3a:{NFSU2_TR(0x43ff3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff3b:{NFSU2_TR(0x43ff3b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ff3dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43ff3d:L43ff3d:{c.instructions+=2;NFSU2_TR(0x43ff3d);
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
B43ff3f:{NFSU2_TR(0x43ff3f);
if(r1(R+518)){{goto L43ff4e;}}
}
B43ff41:L43ff41:{c.instructions+=3;NFSU2_TR(0x43ff41);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff43:{NFSU2_TR(0x43ff43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff44:{NFSU2_TR(0x43ff44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ff46ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43ff46:L43ff46:{c.instructions+=2;NFSU2_TR(0x43ff46);
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
B43ff48:{NFSU2_TR(0x43ff48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x440039u,440);}
}
B43ff4e:L43ff4e:{c.instructions+=4;NFSU2_TR(0x43ff4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43ff51:{NFSU2_TR(0x43ff51);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff53:{NFSU2_TR(0x43ff53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff54:{NFSU2_TR(0x43ff54);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ff56ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43ff56:L43ff56:{c.instructions+=2;NFSU2_TR(0x43ff56);
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
B43ff58:{NFSU2_TR(0x43ff58);
if(r1(R+518)){{goto L43ff67;}}
}
B43ff5a:L43ff5a:{c.instructions+=3;NFSU2_TR(0x43ff5a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff5c:{NFSU2_TR(0x43ff5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ff5d:{NFSU2_TR(0x43ff5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ff5full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43ff5f:L43ff5f:{c.instructions+=2;NFSU2_TR(0x43ff5f);
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
B43ff61:{NFSU2_TR(0x43ff61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x440039u,440);}
}
B43ff67:L43ff67:{c.instructions+=2;NFSU2_TR(0x43ff67);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x44443333ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x44443333ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x44443333ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43ff6e:{NFSU2_TR(0x43ff6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x440039u,440);}
}
B43ff74:L43ff74:{c.instructions+=4;NFSU2_TR(0x43ff74);
__builtin_memmove((R+0),gp(0x82853c),1);
}
B43ff79:{NFSU2_TR(0x43ff79);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ff7b:{NFSU2_TR(0x43ff7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ff7f:{NFSU2_TR(0x43ff7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ffbb;}}
}
B43ff81:L43ff81:{c.instructions+=3;NFSU2_TR(0x43ff81);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43ff85:{NFSU2_TR(0x43ff85);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ff87:{NFSU2_TR(0x43ff87);
if(r1(R+518)){{goto L43ffae;}}
}
B43ff89:L43ff89:{c.instructions+=3;NFSU2_TR(0x43ff89);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43ff8c:{NFSU2_TR(0x43ff8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ff8e:{NFSU2_TR(0x43ff8e);
if(r1(R+518)){{goto L43ffae;}}
}
B43ff90:L43ff90:{c.instructions+=5;NFSU2_TR(0x43ff90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ff93:{NFSU2_TR(0x43ff93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43ff96:{NFSU2_TR(0x43ff96);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B43ff98:{NFSU2_TR(0x43ff98);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43ff9a:{NFSU2_TR(0x43ff9a);
if(r1(R+518)){{goto L43ffae;}}
}
B43ff9c:L43ff9c:{c.instructions+=1;NFSU2_TR(0x43ff9c);
__builtin_memmove((R+16),(R+16),4);
}
B43ffa0:L43ffa0:{c.instructions+=2;NFSU2_TR(0x43ffa0);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0xeeull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0xeeull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0xeeull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43ffa3:{NFSU2_TR(0x43ffa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x440032u,440);}
}
B43ffa9:L43ffa9:{c.instructions+=3;NFSU2_TR(0x43ffa9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43ffaa:{NFSU2_TR(0x43ffaa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43ffac:{NFSU2_TR(0x43ffac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ffa0u);}goto L43ffa0;}}
}
B43ffae:L43ffae:{c.instructions+=4;NFSU2_TR(0x43ffae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43ffb0:{NFSU2_TR(0x43ffb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43ffb3:{NFSU2_TR(0x43ffb3);
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
B43ffb5:{NFSU2_TR(0x43ffb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ff20u);}goto L43ff20;}}
}
B43ffbb:L43ffbb:{c.instructions+=4;NFSU2_TR(0x43ffbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43ffbe:{NFSU2_TR(0x43ffbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B43ffc1:{NFSU2_TR(0x43ffc1);
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
B43ffc3:{NFSU2_TR(0x43ffc3);
if(r1(R+518)){TAIL_STATIC(0x44007bu,440);}
}
B43ffc9:L43ffc9:{c.instructions+=4;NFSU2_TR(0x43ffc9);
__builtin_memmove((R+16),(R+16),4);
}
B43ffd0:{NFSU2_TR(0x43ffd0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ffd2:{NFSU2_TR(0x43ffd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ffd3:{NFSU2_TR(0x43ffd3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ffd5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43ffd5:L43ffd5:{c.instructions+=2;NFSU2_TR(0x43ffd5);
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
B43ffd7:{NFSU2_TR(0x43ffd7);
if(r1(R+518)){{goto L43ffe6;}}
}
B43ffd9:L43ffd9:{c.instructions+=3;NFSU2_TR(0x43ffd9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ffdb:{NFSU2_TR(0x43ffdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ffdc:{NFSU2_TR(0x43ffdc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ffdeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43ffde:L43ffde:{c.instructions+=2;NFSU2_TR(0x43ffde);
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
B43ffe0:{NFSU2_TR(0x43ffe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x440076u,440);}
}
B43ffe6:L43ffe6:{c.instructions+=4;NFSU2_TR(0x43ffe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B43ffe8:{NFSU2_TR(0x43ffe8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ffea:{NFSU2_TR(0x43ffea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ffeb:{NFSU2_TR(0x43ffeb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ffedull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43ffed:L43ffed:{c.instructions+=2;NFSU2_TR(0x43ffed);
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
B43ffef:{NFSU2_TR(0x43ffef);
if(r1(R+518)){{goto L43fffa;}}
}
B43fff1:L43fff1:{c.instructions+=3;NFSU2_TR(0x43fff1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fff3:{NFSU2_TR(0x43fff3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43fff4:{NFSU2_TR(0x43fff4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43fff6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B43fff6:L43fff6:{c.instructions+=2;NFSU2_TR(0x43fff6);
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
B43fff8:{NFSU2_TR(0x43fff8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x440076u,440);}
}
B43fffa:L43fffa:{c.instructions+=3;NFSU2_TR(0x43fffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43fffd:{NFSU2_TR(0x43fffd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ffff:{NFSU2_TR(0x43ffff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x440000u,440);
}
XIT:NFSU2_TR_EXIT(0x43f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
