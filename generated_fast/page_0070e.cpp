#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_707(u8* __restrict R,Cpu& c);
u32 body_70d(u8* __restrict R,Cpu& c);
u32 body_70f(u8* __restrict R,Cpu& c);
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x70e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x70e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_70e(u8* __restrict R,Cpu& c);
u32 page_70e(Cpu& c){return body_70e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_70e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x70e002:goto L70e002;
case 0x70e005:c.instructions+=9;goto B70e005;
case 0x70e008:c.instructions+=8;goto B70e008;
case 0x70e00b:c.instructions+=7;goto B70e00b;
case 0x70e00d:c.instructions+=6;goto B70e00d;
case 0x70e00f:c.instructions+=5;goto B70e00f;
case 0x70e011:c.instructions+=4;goto B70e011;
case 0x70e018:c.instructions+=3;goto B70e018;
case 0x70e01b:c.instructions+=2;goto B70e01b;
case 0x70e01e:c.instructions+=1;goto B70e01e;
case 0x70e020:goto L70e020;
case 0x70e023:c.instructions+=35;goto B70e023;
case 0x70e025:c.instructions+=34;goto B70e025;
case 0x70e02a:c.instructions+=33;goto B70e02a;
case 0x70e02f:c.instructions+=32;goto B70e02f;
case 0x70e032:c.instructions+=31;goto B70e032;
case 0x70e035:c.instructions+=30;goto B70e035;
case 0x70e037:c.instructions+=29;goto B70e037;
case 0x70e039:c.instructions+=28;goto B70e039;
case 0x70e03c:c.instructions+=27;goto B70e03c;
case 0x70e03e:c.instructions+=26;goto B70e03e;
case 0x70e041:c.instructions+=25;goto B70e041;
case 0x70e043:c.instructions+=24;goto B70e043;
case 0x70e045:c.instructions+=23;goto B70e045;
case 0x70e048:c.instructions+=22;goto B70e048;
case 0x70e04b:c.instructions+=21;goto B70e04b;
case 0x70e04d:c.instructions+=20;goto B70e04d;
case 0x70e050:c.instructions+=19;goto B70e050;
case 0x70e053:c.instructions+=18;goto B70e053;
case 0x70e05a:c.instructions+=17;goto B70e05a;
case 0x70e05c:c.instructions+=16;goto B70e05c;
case 0x70e05f:c.instructions+=15;goto B70e05f;
case 0x70e061:c.instructions+=14;goto B70e061;
case 0x70e063:c.instructions+=13;goto B70e063;
case 0x70e066:c.instructions+=12;goto B70e066;
case 0x70e069:c.instructions+=11;goto B70e069;
case 0x70e06b:c.instructions+=10;goto B70e06b;
case 0x70e06d:c.instructions+=9;goto B70e06d;
case 0x70e070:c.instructions+=8;goto B70e070;
case 0x70e072:c.instructions+=7;goto B70e072;
case 0x70e075:c.instructions+=6;goto B70e075;
case 0x70e078:c.instructions+=5;goto B70e078;
case 0x70e07a:c.instructions+=4;goto B70e07a;
case 0x70e07d:c.instructions+=3;goto B70e07d;
case 0x70e080:c.instructions+=2;goto B70e080;
case 0x70e084:c.instructions+=1;goto B70e084;
case 0x70e088:goto L70e088;
case 0x70e08a:c.instructions+=2;goto B70e08a;
case 0x70e08d:c.instructions+=1;goto B70e08d;
case 0x70e08f:goto L70e08f;
case 0x70e092:c.instructions+=6;goto B70e092;
case 0x70e094:c.instructions+=5;goto B70e094;
case 0x70e098:c.instructions+=4;goto B70e098;
case 0x70e09b:c.instructions+=3;goto B70e09b;
case 0x70e09f:c.instructions+=2;goto B70e09f;
case 0x70e0a2:c.instructions+=1;goto B70e0a2;
case 0x70e0a5:goto L70e0a5;
case 0x70e0a9:c.instructions+=1;goto B70e0a9;
case 0x70e0ab:goto L70e0ab;
case 0x70e0ae:c.instructions+=6;goto B70e0ae;
case 0x70e0b0:c.instructions+=5;goto B70e0b0;
case 0x70e0b4:c.instructions+=4;goto B70e0b4;
case 0x70e0b7:c.instructions+=3;goto B70e0b7;
case 0x70e0bb:c.instructions+=2;goto B70e0bb;
case 0x70e0bf:c.instructions+=1;goto B70e0bf;
case 0x70e0c2:goto L70e0c2;
case 0x70e0c5:c.instructions+=2;goto B70e0c5;
case 0x70e0c7:c.instructions+=1;goto B70e0c7;
case 0x70e0cd:goto L70e0cd;
case 0x70e0d1:c.instructions+=1;goto B70e0d1;
case 0x70e0d7:goto L70e0d7;
case 0x70e0da:c.instructions+=3;goto B70e0da;
case 0x70e0dc:c.instructions+=2;goto B70e0dc;
case 0x70e0e3:c.instructions+=1;goto B70e0e3;
case 0x70e0e5:goto L70e0e5;
case 0x70e0e7:c.instructions+=1;goto B70e0e7;
case 0x70e0ec:goto L70e0ec;
case 0x70e0f2:c.instructions+=2;goto B70e0f2;
case 0x70e0f5:c.instructions+=1;goto B70e0f5;
case 0x70e0fb:goto L70e0fb;
case 0x70e0fd:c.instructions+=3;goto B70e0fd;
case 0x70e103:c.instructions+=2;goto B70e103;
case 0x70e105:c.instructions+=1;goto B70e105;
case 0x70e107:goto L70e107;
case 0x70e109:c.instructions+=7;goto B70e109;
case 0x70e10a:c.instructions+=6;goto B70e10a;
case 0x70e10b:c.instructions+=5;goto B70e10b;
case 0x70e10d:c.instructions+=4;goto B70e10d;
case 0x70e110:c.instructions+=3;goto B70e110;
case 0x70e113:c.instructions+=2;goto B70e113;
case 0x70e116:c.instructions+=1;goto B70e116;
case 0x70e118:goto L70e118;
case 0x70e11f:goto L70e11f;
case 0x70e126:c.instructions+=1;goto B70e126;
case 0x70e128:goto L70e128;
case 0x70e129:c.instructions+=4;goto B70e129;
case 0x70e12b:c.instructions+=3;goto B70e12b;
case 0x70e12d:c.instructions+=2;goto B70e12d;
case 0x70e130:c.instructions+=1;goto B70e130;
case 0x70e132:goto L70e132;
case 0x70e135:c.instructions+=5;goto B70e135;
case 0x70e136:c.instructions+=4;goto B70e136;
case 0x70e138:c.instructions+=3;goto B70e138;
case 0x70e13a:c.instructions+=2;goto B70e13a;
case 0x70e13d:c.instructions+=1;goto B70e13d;
case 0x70e13f:goto L70e13f;
case 0x70e142:c.instructions+=11;goto B70e142;
case 0x70e144:c.instructions+=10;goto B70e144;
case 0x70e147:c.instructions+=9;goto B70e147;
case 0x70e149:c.instructions+=8;goto B70e149;
case 0x70e14a:c.instructions+=7;goto B70e14a;
case 0x70e14d:c.instructions+=6;goto B70e14d;
case 0x70e150:c.instructions+=5;goto B70e150;
case 0x70e151:c.instructions+=4;goto B70e151;
case 0x70e154:c.instructions+=3;goto B70e154;
case 0x70e156:c.instructions+=2;goto B70e156;
case 0x70e157:c.instructions+=1;goto B70e157;
case 0x70e159:goto L70e159;
case 0x70e15c:goto L70e15c;
case 0x70e162:c.instructions+=3;goto B70e162;
case 0x70e165:c.instructions+=2;goto B70e165;
case 0x70e168:c.instructions+=1;goto B70e168;
case 0x70e16a:goto L70e16a;
case 0x70e16d:c.instructions+=3;goto B70e16d;
case 0x70e170:c.instructions+=2;goto B70e170;
case 0x70e171:c.instructions+=1;goto B70e171;
case 0x70e176:goto L70e176;
case 0x70e179:c.instructions+=13;goto B70e179;
case 0x70e17b:c.instructions+=12;goto B70e17b;
case 0x70e17d:c.instructions+=11;goto B70e17d;
case 0x70e17e:c.instructions+=10;goto B70e17e;
case 0x70e17f:c.instructions+=9;goto B70e17f;
case 0x70e182:c.instructions+=8;goto B70e182;
case 0x70e185:c.instructions+=7;goto B70e185;
case 0x70e186:c.instructions+=6;goto B70e186;
case 0x70e189:c.instructions+=5;goto B70e189;
case 0x70e18b:c.instructions+=4;goto B70e18b;
case 0x70e18e:c.instructions+=3;goto B70e18e;
case 0x70e18f:c.instructions+=2;goto B70e18f;
case 0x70e190:c.instructions+=1;goto B70e190;
case 0x70e196:goto L70e196;
case 0x70e199:c.instructions+=1;goto B70e199;
case 0x70e19b:goto L70e19b;
case 0x70e19d:c.instructions+=1;goto B70e19d;
case 0x70e19f:goto L70e19f;
case 0x70e1a1:c.instructions+=3;goto B70e1a1;
case 0x70e1a4:c.instructions+=2;goto B70e1a4;
case 0x70e1a7:c.instructions+=1;goto B70e1a7;
case 0x70e1a8:goto L70e1a8;
case 0x70e1ab:c.instructions+=6;goto B70e1ab;
case 0x70e1ae:c.instructions+=5;goto B70e1ae;
case 0x70e1af:c.instructions+=4;goto B70e1af;
case 0x70e1b2:c.instructions+=3;goto B70e1b2;
case 0x70e1b4:c.instructions+=2;goto B70e1b4;
case 0x70e1b7:c.instructions+=1;goto B70e1b7;
case 0x70e1b8:goto L70e1b8;
case 0x70e1ba:c.instructions+=1;goto B70e1ba;
case 0x70e1bb:goto L70e1bb;
case 0x70e1c1:goto L70e1c1;
case 0x70e1c4:c.instructions+=1;goto B70e1c4;
case 0x70e1c6:goto L70e1c6;
case 0x70e1c8:c.instructions+=7;goto B70e1c8;
case 0x70e1cb:c.instructions+=6;goto B70e1cb;
case 0x70e1cd:c.instructions+=5;goto B70e1cd;
case 0x70e1ce:c.instructions+=4;goto B70e1ce;
case 0x70e1d1:c.instructions+=3;goto B70e1d1;
case 0x70e1d4:c.instructions+=2;goto B70e1d4;
case 0x70e1d5:c.instructions+=1;goto B70e1d5;
case 0x70e1d7:goto L70e1d7;
case 0x70e1da:c.instructions+=4;goto B70e1da;
case 0x70e1dc:c.instructions+=3;goto B70e1dc;
case 0x70e1df:c.instructions+=2;goto B70e1df;
case 0x70e1e0:c.instructions+=1;goto B70e1e0;
case 0x70e1e6:goto L70e1e6;
case 0x70e1e9:goto L70e1e9;
case 0x70e1ea:c.instructions+=4;goto B70e1ea;
case 0x70e1eb:c.instructions+=3;goto B70e1eb;
case 0x70e1ec:c.instructions+=2;goto B70e1ec;
case 0x70e1ed:c.instructions+=1;goto B70e1ed;
case 0x70e1ee:goto L70e1ee;
case 0x70e1ef:c.instructions+=6;goto B70e1ef;
case 0x70e1f1:c.instructions+=5;goto B70e1f1;
case 0x70e1f2:c.instructions+=4;goto B70e1f2;
case 0x70e1f5:c.instructions+=3;goto B70e1f5;
case 0x70e1f8:c.instructions+=2;goto B70e1f8;
case 0x70e1fa:c.instructions+=1;goto B70e1fa;
case 0x70e1fc:goto L70e1fc;
case 0x70e1ff:c.instructions+=2;goto B70e1ff;
case 0x70e205:c.instructions+=1;goto B70e205;
case 0x70e20b:goto L70e20b;
case 0x70e20e:c.instructions+=7;goto B70e20e;
case 0x70e210:c.instructions+=6;goto B70e210;
case 0x70e211:c.instructions+=5;goto B70e211;
case 0x70e217:c.instructions+=4;goto B70e217;
case 0x70e219:c.instructions+=3;goto B70e219;
case 0x70e21a:c.instructions+=2;goto B70e21a;
case 0x70e220:c.instructions+=1;goto B70e220;
case 0x70e226:goto L70e226;
case 0x70e229:c.instructions+=1;goto B70e229;
case 0x70e22b:goto L70e22b;
case 0x70e233:c.instructions+=1;goto B70e233;
case 0x70e235:goto L70e235;
case 0x70e238:c.instructions+=3;goto B70e238;
case 0x70e23e:c.instructions+=2;goto B70e23e;
case 0x70e23f:c.instructions+=1;goto B70e23f;
case 0x70e244:goto L70e244;
case 0x70e247:c.instructions+=6;goto B70e247;
case 0x70e24d:c.instructions+=5;goto B70e24d;
case 0x70e250:c.instructions+=4;goto B70e250;
case 0x70e251:c.instructions+=3;goto B70e251;
case 0x70e257:c.instructions+=2;goto B70e257;
case 0x70e25d:c.instructions+=1;goto B70e25d;
case 0x70e263:goto L70e263;
case 0x70e266:c.instructions+=1;goto B70e266;
case 0x70e268:goto L70e268;
case 0x70e26b:c.instructions+=3;goto B70e26b;
case 0x70e26e:c.instructions+=2;goto B70e26e;
case 0x70e274:c.instructions+=1;goto B70e274;
case 0x70e276:goto L70e276;
case 0x70e27c:c.instructions+=1;goto B70e27c;
case 0x70e27e:goto L70e27e;
case 0x70e284:c.instructions+=4;goto B70e284;
case 0x70e287:c.instructions+=3;goto B70e287;
case 0x70e288:c.instructions+=2;goto B70e288;
case 0x70e28e:c.instructions+=1;goto B70e28e;
case 0x70e294:goto L70e294;
case 0x70e297:goto L70e297;
case 0x70e298:c.instructions+=2;goto B70e298;
case 0x70e299:c.instructions+=1;goto B70e299;
case 0x70e29a:goto L70e29a;
case 0x70e29b:c.instructions+=9;goto B70e29b;
case 0x70e29d:c.instructions+=8;goto B70e29d;
case 0x70e29e:c.instructions+=7;goto B70e29e;
case 0x70e29f:c.instructions+=6;goto B70e29f;
case 0x70e2a2:c.instructions+=5;goto B70e2a2;
case 0x70e2a4:c.instructions+=4;goto B70e2a4;
case 0x70e2a6:c.instructions+=3;goto B70e2a6;
case 0x70e2ac:c.instructions+=2;goto B70e2ac;
case 0x70e2ad:c.instructions+=1;goto B70e2ad;
case 0x70e2af:goto L70e2af;
case 0x70e2b2:c.instructions+=10;goto B70e2b2;
case 0x70e2b4:c.instructions+=9;goto B70e2b4;
case 0x70e2b7:c.instructions+=8;goto B70e2b7;
case 0x70e2ba:c.instructions+=7;goto B70e2ba;
case 0x70e2bd:c.instructions+=6;goto B70e2bd;
case 0x70e2c0:c.instructions+=5;goto B70e2c0;
case 0x70e2c2:c.instructions+=4;goto B70e2c2;
case 0x70e2c3:c.instructions+=3;goto B70e2c3;
case 0x70e2c4:c.instructions+=2;goto B70e2c4;
case 0x70e2c5:c.instructions+=1;goto B70e2c5;
case 0x70e2ca:goto L70e2ca;
case 0x70e2cd:c.instructions+=1;goto B70e2cd;
case 0x70e2cf:goto L70e2cf;
case 0x70e2d2:c.instructions+=11;goto B70e2d2;
case 0x70e2d8:c.instructions+=10;goto B70e2d8;
case 0x70e2db:c.instructions+=9;goto B70e2db;
case 0x70e2de:c.instructions+=8;goto B70e2de;
case 0x70e2e4:c.instructions+=7;goto B70e2e4;
case 0x70e2e7:c.instructions+=6;goto B70e2e7;
case 0x70e2ea:c.instructions+=5;goto B70e2ea;
case 0x70e2ec:c.instructions+=4;goto B70e2ec;
case 0x70e2ed:c.instructions+=3;goto B70e2ed;
case 0x70e2ee:c.instructions+=2;goto B70e2ee;
case 0x70e2ef:c.instructions+=1;goto B70e2ef;
case 0x70e2f4:goto L70e2f4;
case 0x70e2f7:c.instructions+=1;goto B70e2f7;
case 0x70e2fa:goto L70e2fa;
case 0x70e300:c.instructions+=7;goto B70e300;
case 0x70e303:c.instructions+=6;goto B70e303;
case 0x70e309:c.instructions+=5;goto B70e309;
case 0x70e30c:c.instructions+=4;goto B70e30c;
case 0x70e312:c.instructions+=3;goto B70e312;
case 0x70e313:c.instructions+=2;goto B70e313;
case 0x70e314:c.instructions+=1;goto B70e314;
case 0x70e319:goto L70e319;
case 0x70e31f:c.instructions+=32;goto B70e31f;
case 0x70e323:c.instructions+=31;goto B70e323;
case 0x70e326:c.instructions+=30;goto B70e326;
case 0x70e32c:c.instructions+=29;goto B70e32c;
case 0x70e32f:c.instructions+=28;goto B70e32f;
case 0x70e335:c.instructions+=27;goto B70e335;
case 0x70e338:c.instructions+=26;goto B70e338;
case 0x70e33b:c.instructions+=25;goto B70e33b;
case 0x70e33f:c.instructions+=24;goto B70e33f;
case 0x70e345:c.instructions+=23;goto B70e345;
case 0x70e349:c.instructions+=22;goto B70e349;
case 0x70e34f:c.instructions+=21;goto B70e34f;
case 0x70e353:c.instructions+=20;goto B70e353;
case 0x70e359:c.instructions+=19;goto B70e359;
case 0x70e35d:c.instructions+=18;goto B70e35d;
case 0x70e360:c.instructions+=17;goto B70e360;
case 0x70e368:c.instructions+=16;goto B70e368;
case 0x70e36e:c.instructions+=15;goto B70e36e;
case 0x70e372:c.instructions+=14;goto B70e372;
case 0x70e378:c.instructions+=13;goto B70e378;
case 0x70e37c:c.instructions+=12;goto B70e37c;
case 0x70e382:c.instructions+=11;goto B70e382;
case 0x70e386:c.instructions+=10;goto B70e386;
case 0x70e38d:c.instructions+=9;goto B70e38d;
case 0x70e393:c.instructions+=8;goto B70e393;
case 0x70e396:c.instructions+=7;goto B70e396;
case 0x70e39c:c.instructions+=6;goto B70e39c;
case 0x70e3a3:c.instructions+=5;goto B70e3a3;
case 0x70e3a6:c.instructions+=4;goto B70e3a6;
case 0x70e3a8:c.instructions+=3;goto B70e3a8;
case 0x70e3ac:c.instructions+=2;goto B70e3ac;
case 0x70e3ad:c.instructions+=1;goto B70e3ad;
case 0x70e3af:goto L70e3af;
case 0x70e3b5:goto L70e3b5;
case 0x70e3b8:c.instructions+=3;goto B70e3b8;
case 0x70e3bb:c.instructions+=2;goto B70e3bb;
case 0x70e3c0:c.instructions+=1;goto B70e3c0;
case 0x70e3c2:goto L70e3c2;
case 0x70e3c6:c.instructions+=1;goto B70e3c6;
case 0x70e3c8:goto L70e3c8;
case 0x70e3ce:goto L70e3ce;
case 0x70e3d1:c.instructions+=25;goto B70e3d1;
case 0x70e3d3:c.instructions+=24;goto B70e3d3;
case 0x70e3d5:c.instructions+=23;goto B70e3d5;
case 0x70e3d6:c.instructions+=22;goto B70e3d6;
case 0x70e3d7:c.instructions+=21;goto B70e3d7;
case 0x70e3d8:c.instructions+=20;goto B70e3d8;
case 0x70e3d9:c.instructions+=19;goto B70e3d9;
case 0x70e3dc:c.instructions+=18;goto B70e3dc;
case 0x70e3de:c.instructions+=17;goto B70e3de;
case 0x70e3e2:c.instructions+=16;goto B70e3e2;
case 0x70e3e3:c.instructions+=15;goto B70e3e3;
case 0x70e3e4:c.instructions+=14;goto B70e3e4;
case 0x70e3e7:c.instructions+=13;goto B70e3e7;
case 0x70e3e9:c.instructions+=12;goto B70e3e9;
case 0x70e3ed:c.instructions+=11;goto B70e3ed;
case 0x70e3ee:c.instructions+=10;goto B70e3ee;
case 0x70e3ef:c.instructions+=9;goto B70e3ef;
case 0x70e3f2:c.instructions+=8;goto B70e3f2;
case 0x70e3f4:c.instructions+=7;goto B70e3f4;
case 0x70e3f8:c.instructions+=6;goto B70e3f8;
case 0x70e3f9:c.instructions+=5;goto B70e3f9;
case 0x70e3fa:c.instructions+=4;goto B70e3fa;
case 0x70e3fd:c.instructions+=3;goto B70e3fd;
case 0x70e400:c.instructions+=2;goto B70e400;
case 0x70e406:c.instructions+=1;goto B70e406;
case 0x70e408:goto L70e408;
case 0x70e40e:goto L70e40e;
case 0x70e411:c.instructions+=5;goto B70e411;
case 0x70e414:c.instructions+=4;goto B70e414;
case 0x70e416:c.instructions+=3;goto B70e416;
case 0x70e418:c.instructions+=2;goto B70e418;
case 0x70e419:c.instructions+=1;goto B70e419;
case 0x70e41b:goto L70e41b;
case 0x70e41d:goto L70e41d;
case 0x70e420:goto L70e420;
case 0x70e421:c.instructions+=2;goto B70e421;
case 0x70e422:c.instructions+=1;goto B70e422;
case 0x70e427:goto L70e427;
case 0x70e428:c.instructions+=6;goto B70e428;
case 0x70e429:c.instructions+=5;goto B70e429;
case 0x70e42a:c.instructions+=4;goto B70e42a;
case 0x70e42b:c.instructions+=3;goto B70e42b;
case 0x70e42c:c.instructions+=2;goto B70e42c;
case 0x70e42d:c.instructions+=1;goto B70e42d;
case 0x70e42e:goto L70e42e;
case 0x70e42f:c.instructions+=15;goto B70e42f;
case 0x70e431:c.instructions+=14;goto B70e431;
case 0x70e432:c.instructions+=13;goto B70e432;
case 0x70e433:c.instructions+=12;goto B70e433;
case 0x70e434:c.instructions+=11;goto B70e434;
case 0x70e437:c.instructions+=10;goto B70e437;
case 0x70e438:c.instructions+=9;goto B70e438;
case 0x70e43b:c.instructions+=8;goto B70e43b;
case 0x70e43c:c.instructions+=7;goto B70e43c;
case 0x70e43f:c.instructions+=6;goto B70e43f;
case 0x70e440:c.instructions+=5;goto B70e440;
case 0x70e442:c.instructions+=4;goto B70e442;
case 0x70e443:c.instructions+=3;goto B70e443;
case 0x70e446:c.instructions+=2;goto B70e446;
case 0x70e447:c.instructions+=1;goto B70e447;
case 0x70e44c:goto L70e44c;
case 0x70e44f:c.instructions+=4;goto B70e44f;
case 0x70e455:c.instructions+=3;goto B70e455;
case 0x70e457:c.instructions+=2;goto B70e457;
case 0x70e458:c.instructions+=1;goto B70e458;
case 0x70e45d:goto L70e45d;
case 0x70e463:c.instructions+=12;goto B70e463;
case 0x70e466:c.instructions+=11;goto B70e466;
case 0x70e469:c.instructions+=10;goto B70e469;
case 0x70e46f:c.instructions+=9;goto B70e46f;
case 0x70e472:c.instructions+=8;goto B70e472;
case 0x70e474:c.instructions+=7;goto B70e474;
case 0x70e476:c.instructions+=6;goto B70e476;
case 0x70e477:c.instructions+=5;goto B70e477;
case 0x70e479:c.instructions+=4;goto B70e479;
case 0x70e47c:c.instructions+=3;goto B70e47c;
case 0x70e47f:c.instructions+=2;goto B70e47f;
case 0x70e482:c.instructions+=1;goto B70e482;
case 0x70e488:goto L70e488;
case 0x70e489:c.instructions+=1;goto B70e489;
case 0x70e48e:goto L70e48e;
case 0x70e48f:c.instructions+=2;goto B70e48f;
case 0x70e492:c.instructions+=1;goto B70e492;
case 0x70e497:goto L70e497;
case 0x70e498:c.instructions+=2;goto B70e498;
case 0x70e49b:c.instructions+=1;goto B70e49b;
case 0x70e4a0:goto L70e4a0;
case 0x70e4a1:c.instructions+=2;goto B70e4a1;
case 0x70e4a4:c.instructions+=1;goto B70e4a4;
case 0x70e4a9:goto L70e4a9;
case 0x70e4ac:c.instructions+=7;goto B70e4ac;
case 0x70e4ae:c.instructions+=6;goto B70e4ae;
case 0x70e4b1:c.instructions+=5;goto B70e4b1;
case 0x70e4b4:c.instructions+=4;goto B70e4b4;
case 0x70e4b7:c.instructions+=3;goto B70e4b7;
case 0x70e4ba:c.instructions+=2;goto B70e4ba;
case 0x70e4bd:c.instructions+=1;goto B70e4bd;
case 0x70e4c4:goto L70e4c4;
case 0x70e4c7:c.instructions+=2;goto B70e4c7;
case 0x70e4c9:c.instructions+=1;goto B70e4c9;
case 0x70e4cb:goto L70e4cb;
case 0x70e4ce:c.instructions+=2;goto B70e4ce;
case 0x70e4d2:c.instructions+=1;goto B70e4d2;
case 0x70e4d4:goto L70e4d4;
case 0x70e4d7:c.instructions+=1;goto B70e4d7;
case 0x70e4d9:goto L70e4d9;
case 0x70e4dd:c.instructions+=7;goto B70e4dd;
case 0x70e4e0:c.instructions+=6;goto B70e4e0;
case 0x70e4e4:c.instructions+=5;goto B70e4e4;
case 0x70e4e8:c.instructions+=4;goto B70e4e8;
case 0x70e4ec:c.instructions+=3;goto B70e4ec;
case 0x70e4ee:c.instructions+=2;goto B70e4ee;
case 0x70e4f2:c.instructions+=1;goto B70e4f2;
case 0x70e4f4:goto L70e4f4;
case 0x70e4f7:c.instructions+=1;goto B70e4f7;
case 0x70e4f9:goto L70e4f9;
case 0x70e4fd:c.instructions+=7;goto B70e4fd;
case 0x70e500:c.instructions+=6;goto B70e500;
case 0x70e504:c.instructions+=5;goto B70e504;
case 0x70e508:c.instructions+=4;goto B70e508;
case 0x70e50c:c.instructions+=3;goto B70e50c;
case 0x70e50e:c.instructions+=2;goto B70e50e;
case 0x70e512:c.instructions+=1;goto B70e512;
case 0x70e514:goto L70e514;
case 0x70e517:c.instructions+=1;goto B70e517;
case 0x70e519:goto L70e519;
case 0x70e51a:c.instructions+=4;goto B70e51a;
case 0x70e51d:c.instructions+=3;goto B70e51d;
case 0x70e51e:c.instructions+=2;goto B70e51e;
case 0x70e51f:c.instructions+=1;goto B70e51f;
case 0x70e524:goto L70e524;
case 0x70e527:c.instructions+=7;goto B70e527;
case 0x70e52b:c.instructions+=6;goto B70e52b;
case 0x70e52e:c.instructions+=5;goto B70e52e;
case 0x70e531:c.instructions+=4;goto B70e531;
case 0x70e534:c.instructions+=3;goto B70e534;
case 0x70e536:c.instructions+=2;goto B70e536;
case 0x70e53a:c.instructions+=1;goto B70e53a;
case 0x70e53d:goto L70e53d;
case 0x70e540:goto L70e540;
case 0x70e543:c.instructions+=2;goto B70e543;
case 0x70e546:c.instructions+=1;goto B70e546;
case 0x70e54c:goto L70e54c;
case 0x70e54f:c.instructions+=27;goto B70e54f;
case 0x70e551:c.instructions+=26;goto B70e551;
case 0x70e553:c.instructions+=25;goto B70e553;
case 0x70e556:c.instructions+=24;goto B70e556;
case 0x70e558:c.instructions+=23;goto B70e558;
case 0x70e55e:c.instructions+=22;goto B70e55e;
case 0x70e562:c.instructions+=21;goto B70e562;
case 0x70e566:c.instructions+=20;goto B70e566;
case 0x70e569:c.instructions+=19;goto B70e569;
case 0x70e56b:c.instructions+=18;goto B70e56b;
case 0x70e56e:c.instructions+=17;goto B70e56e;
case 0x70e572:c.instructions+=16;goto B70e572;
case 0x70e578:c.instructions+=15;goto B70e578;
case 0x70e57c:c.instructions+=14;goto B70e57c;
case 0x70e57f:c.instructions+=13;goto B70e57f;
case 0x70e582:c.instructions+=12;goto B70e582;
case 0x70e586:c.instructions+=11;goto B70e586;
case 0x70e58c:c.instructions+=10;goto B70e58c;
case 0x70e590:c.instructions+=9;goto B70e590;
case 0x70e593:c.instructions+=8;goto B70e593;
case 0x70e599:c.instructions+=7;goto B70e599;
case 0x70e59d:c.instructions+=6;goto B70e59d;
case 0x70e5a2:c.instructions+=5;goto B70e5a2;
case 0x70e5a6:c.instructions+=4;goto B70e5a6;
case 0x70e5aa:c.instructions+=3;goto B70e5aa;
case 0x70e5ae:c.instructions+=2;goto B70e5ae;
case 0x70e5b2:c.instructions+=1;goto B70e5b2;
case 0x70e5b7:goto L70e5b7;
case 0x70e5b9:c.instructions+=3;goto B70e5b9;
case 0x70e5ba:c.instructions+=2;goto B70e5ba;
case 0x70e5bc:c.instructions+=1;goto B70e5bc;
case 0x70e5be:goto L70e5be;
case 0x70e5bf:c.instructions+=1;goto B70e5bf;
case 0x70e5c1:goto L70e5c1;
case 0x70e5c2:c.instructions+=1;goto B70e5c2;
case 0x70e5c4:goto L70e5c4;
case 0x70e5c6:c.instructions+=1;goto B70e5c6;
case 0x70e5c8:goto L70e5c8;
case 0x70e5ca:c.instructions+=1;goto B70e5ca;
case 0x70e5cc:goto L70e5cc;
case 0x70e5cd:c.instructions+=1;goto B70e5cd;
case 0x70e5cf:goto L70e5cf;
case 0x70e5d1:c.instructions+=2;goto B70e5d1;
case 0x70e5d3:c.instructions+=1;goto B70e5d3;
case 0x70e5d5:goto L70e5d5;
case 0x70e5d8:c.instructions+=6;goto B70e5d8;
case 0x70e5d9:c.instructions+=5;goto B70e5d9;
case 0x70e5da:c.instructions+=4;goto B70e5da;
case 0x70e5db:c.instructions+=3;goto B70e5db;
case 0x70e5dc:c.instructions+=2;goto B70e5dc;
case 0x70e5dd:c.instructions+=1;goto B70e5dd;
case 0x70e5e2:goto L70e5e2;
case 0x70e5e6:c.instructions+=3;goto B70e5e6;
case 0x70e5ea:c.instructions+=2;goto B70e5ea;
case 0x70e5ed:c.instructions+=1;goto B70e5ed;
case 0x70e5ef:goto L70e5ef;
case 0x70e5f2:c.instructions+=6;goto B70e5f2;
case 0x70e5f3:c.instructions+=5;goto B70e5f3;
case 0x70e5f4:c.instructions+=4;goto B70e5f4;
case 0x70e5f5:c.instructions+=3;goto B70e5f5;
case 0x70e5f6:c.instructions+=2;goto B70e5f6;
case 0x70e5f7:c.instructions+=1;goto B70e5f7;
case 0x70e5fc:goto L70e5fc;
case 0x70e600:c.instructions+=3;goto B70e600;
case 0x70e604:c.instructions+=2;goto B70e604;
case 0x70e607:c.instructions+=1;goto B70e607;
case 0x70e609:goto L70e609;
case 0x70e60c:c.instructions+=6;goto B70e60c;
case 0x70e60d:c.instructions+=5;goto B70e60d;
case 0x70e60e:c.instructions+=4;goto B70e60e;
case 0x70e60f:c.instructions+=3;goto B70e60f;
case 0x70e610:c.instructions+=2;goto B70e610;
case 0x70e611:c.instructions+=1;goto B70e611;
case 0x70e616:goto L70e616;
case 0x70e618:c.instructions+=4;goto B70e618;
case 0x70e61b:c.instructions+=3;goto B70e61b;
case 0x70e61c:c.instructions+=2;goto B70e61c;
case 0x70e61d:c.instructions+=1;goto B70e61d;
case 0x70e622:goto L70e622;
case 0x70e625:c.instructions+=1;goto B70e625;
case 0x70e627:goto L70e627;
case 0x70e62b:c.instructions+=2;goto B70e62b;
case 0x70e62f:c.instructions+=1;goto B70e62f;
case 0x70e631:goto L70e631;
case 0x70e635:c.instructions+=2;goto B70e635;
case 0x70e639:c.instructions+=1;goto B70e639;
case 0x70e63b:goto L70e63b;
case 0x70e63c:c.instructions+=4;goto B70e63c;
case 0x70e63f:c.instructions+=3;goto B70e63f;
case 0x70e640:c.instructions+=2;goto B70e640;
case 0x70e641:c.instructions+=1;goto B70e641;
case 0x70e646:goto L70e646;
case 0x70e649:goto L70e649;
case 0x70e64d:c.instructions+=1;goto B70e64d;
case 0x70e651:goto L70e651;
case 0x70e657:c.instructions+=13;goto B70e657;
case 0x70e65b:c.instructions+=12;goto B70e65b;
case 0x70e65e:c.instructions+=11;goto B70e65e;
case 0x70e664:c.instructions+=10;goto B70e664;
case 0x70e666:c.instructions+=9;goto B70e666;
case 0x70e66a:c.instructions+=8;goto B70e66a;
case 0x70e670:c.instructions+=7;goto B70e670;
case 0x70e674:c.instructions+=6;goto B70e674;
case 0x70e677:c.instructions+=5;goto B70e677;
case 0x70e679:c.instructions+=4;goto B70e679;
case 0x70e67b:c.instructions+=3;goto B70e67b;
case 0x70e680:c.instructions+=2;goto B70e680;
case 0x70e683:c.instructions+=1;goto B70e683;
case 0x70e684:goto L70e684;
case 0x70e687:c.instructions+=6;goto B70e687;
case 0x70e68b:c.instructions+=5;goto B70e68b;
case 0x70e68e:c.instructions+=4;goto B70e68e;
case 0x70e691:c.instructions+=3;goto B70e691;
case 0x70e694:c.instructions+=2;goto B70e694;
case 0x70e695:c.instructions+=1;goto B70e695;
case 0x70e697:goto L70e697;
case 0x70e698:c.instructions+=4;goto B70e698;
case 0x70e699:c.instructions+=3;goto B70e699;
case 0x70e69a:c.instructions+=2;goto B70e69a;
case 0x70e69b:c.instructions+=1;goto B70e69b;
case 0x70e69c:goto L70e69c;
case 0x70e69d:c.instructions+=9;goto B70e69d;
case 0x70e69f:c.instructions+=8;goto B70e69f;
case 0x70e6a0:c.instructions+=7;goto B70e6a0;
case 0x70e6a1:c.instructions+=6;goto B70e6a1;
case 0x70e6a2:c.instructions+=5;goto B70e6a2;
case 0x70e6a5:c.instructions+=4;goto B70e6a5;
case 0x70e6a6:c.instructions+=3;goto B70e6a6;
case 0x70e6a8:c.instructions+=2;goto B70e6a8;
case 0x70e6ae:c.instructions+=1;goto B70e6ae;
case 0x70e6b0:goto L70e6b0;
case 0x70e6b4:c.instructions+=2;goto B70e6b4;
case 0x70e6ba:c.instructions+=1;goto B70e6ba;
case 0x70e6bc:goto L70e6bc;
case 0x70e6c2:c.instructions+=1;goto B70e6c2;
case 0x70e6c4:goto L70e6c4;
case 0x70e6c6:c.instructions+=3;goto B70e6c6;
case 0x70e6c8:c.instructions+=2;goto B70e6c8;
case 0x70e6ca:c.instructions+=1;goto B70e6ca;
case 0x70e6cc:goto L70e6cc;
case 0x70e6cf:c.instructions+=4;goto B70e6cf;
case 0x70e6d4:c.instructions+=3;goto B70e6d4;
case 0x70e6d6:c.instructions+=2;goto B70e6d6;
case 0x70e6d8:c.instructions+=1;goto B70e6d8;
case 0x70e6da:goto L70e6da;
case 0x70e6dd:c.instructions+=4;goto B70e6dd;
case 0x70e6de:c.instructions+=3;goto B70e6de;
case 0x70e6e4:c.instructions+=2;goto B70e6e4;
case 0x70e6e5:c.instructions+=1;goto B70e6e5;
case 0x70e6ea:goto L70e6ea;
case 0x70e6eb:c.instructions+=3;goto B70e6eb;
case 0x70e6ec:c.instructions+=2;goto B70e6ec;
case 0x70e6f2:c.instructions+=1;goto B70e6f2;
case 0x70e6f4:goto L70e6f4;
case 0x70e6fa:goto L70e6fa;
case 0x70e701:c.instructions+=1;goto B70e701;
case 0x70e703:goto L70e703;
case 0x70e70a:c.instructions+=1;goto B70e70a;
case 0x70e70c:goto L70e70c;
case 0x70e70f:c.instructions+=3;goto B70e70f;
case 0x70e712:c.instructions+=2;goto B70e712;
case 0x70e713:c.instructions+=1;goto B70e713;
case 0x70e718:goto L70e718;
case 0x70e71b:goto L70e71b;
case 0x70e721:c.instructions+=2;goto B70e721;
case 0x70e727:c.instructions+=1;goto B70e727;
case 0x70e729:goto L70e729;
case 0x70e730:c.instructions+=2;goto B70e730;
case 0x70e733:c.instructions+=1;goto B70e733;
case 0x70e735:goto L70e735;
case 0x70e738:c.instructions+=2;goto B70e738;
case 0x70e73f:c.instructions+=1;goto B70e73f;
case 0x70e742:goto L70e742;
case 0x70e745:c.instructions+=28;goto B70e745;
case 0x70e74b:c.instructions+=27;goto B70e74b;
case 0x70e751:c.instructions+=26;goto B70e751;
case 0x70e754:c.instructions+=25;goto B70e754;
case 0x70e757:c.instructions+=24;goto B70e757;
case 0x70e75a:c.instructions+=23;goto B70e75a;
case 0x70e75d:c.instructions+=22;goto B70e75d;
case 0x70e763:c.instructions+=21;goto B70e763;
case 0x70e766:c.instructions+=20;goto B70e766;
case 0x70e768:c.instructions+=19;goto B70e768;
case 0x70e76b:c.instructions+=18;goto B70e76b;
case 0x70e76e:c.instructions+=17;goto B70e76e;
case 0x70e771:c.instructions+=16;goto B70e771;
case 0x70e774:c.instructions+=15;goto B70e774;
case 0x70e77a:c.instructions+=14;goto B70e77a;
case 0x70e77c:c.instructions+=13;goto B70e77c;
case 0x70e77f:c.instructions+=12;goto B70e77f;
case 0x70e782:c.instructions+=11;goto B70e782;
case 0x70e785:c.instructions+=10;goto B70e785;
case 0x70e787:c.instructions+=9;goto B70e787;
case 0x70e78d:c.instructions+=8;goto B70e78d;
case 0x70e793:c.instructions+=7;goto B70e793;
case 0x70e794:c.instructions+=6;goto B70e794;
case 0x70e79b:c.instructions+=5;goto B70e79b;
case 0x70e7a5:c.instructions+=4;goto B70e7a5;
case 0x70e7ab:c.instructions+=3;goto B70e7ab;
case 0x70e7ae:c.instructions+=2;goto B70e7ae;
case 0x70e7b4:c.instructions+=1;goto B70e7b4;
case 0x70e7b9:goto L70e7b9;
case 0x70e7bf:c.instructions+=11;goto B70e7bf;
case 0x70e7c3:c.instructions+=10;goto B70e7c3;
case 0x70e7c7:c.instructions+=9;goto B70e7c7;
case 0x70e7c9:c.instructions+=8;goto B70e7c9;
case 0x70e7cc:c.instructions+=7;goto B70e7cc;
case 0x70e7d0:c.instructions+=6;goto B70e7d0;
case 0x70e7d3:c.instructions+=5;goto B70e7d3;
case 0x70e7d9:c.instructions+=4;goto B70e7d9;
case 0x70e7df:c.instructions+=3;goto B70e7df;
case 0x70e7e0:c.instructions+=2;goto B70e7e0;
case 0x70e7e6:c.instructions+=1;goto B70e7e6;
case 0x70e7eb:goto L70e7eb;
case 0x70e7ee:c.instructions+=16;goto B70e7ee;
case 0x70e7f4:c.instructions+=15;goto B70e7f4;
case 0x70e7f8:c.instructions+=14;goto B70e7f8;
case 0x70e7fb:c.instructions+=13;goto B70e7fb;
case 0x70e7fe:c.instructions+=12;goto B70e7fe;
case 0x70e801:c.instructions+=11;goto B70e801;
case 0x70e804:c.instructions+=10;goto B70e804;
case 0x70e80a:c.instructions+=9;goto B70e80a;
case 0x70e80c:c.instructions+=8;goto B70e80c;
case 0x70e80f:c.instructions+=7;goto B70e80f;
case 0x70e811:c.instructions+=6;goto B70e811;
case 0x70e814:c.instructions+=5;goto B70e814;
case 0x70e81a:c.instructions+=4;goto B70e81a;
case 0x70e820:c.instructions+=3;goto B70e820;
case 0x70e821:c.instructions+=2;goto B70e821;
case 0x70e827:c.instructions+=1;goto B70e827;
case 0x70e82c:goto L70e82c;
case 0x70e832:c.instructions+=12;goto B70e832;
case 0x70e836:c.instructions+=11;goto B70e836;
case 0x70e83a:c.instructions+=10;goto B70e83a;
case 0x70e83c:c.instructions+=9;goto B70e83c;
case 0x70e83f:c.instructions+=8;goto B70e83f;
case 0x70e843:c.instructions+=7;goto B70e843;
case 0x70e846:c.instructions+=6;goto B70e846;
case 0x70e84c:c.instructions+=5;goto B70e84c;
case 0x70e852:c.instructions+=4;goto B70e852;
case 0x70e853:c.instructions+=3;goto B70e853;
case 0x70e854:c.instructions+=2;goto B70e854;
case 0x70e85a:c.instructions+=1;goto B70e85a;
case 0x70e85f:goto L70e85f;
case 0x70e862:c.instructions+=28;goto B70e862;
case 0x70e868:c.instructions+=27;goto B70e868;
case 0x70e86a:c.instructions+=26;goto B70e86a;
case 0x70e86d:c.instructions+=25;goto B70e86d;
case 0x70e870:c.instructions+=24;goto B70e870;
case 0x70e873:c.instructions+=23;goto B70e873;
case 0x70e879:c.instructions+=22;goto B70e879;
case 0x70e87c:c.instructions+=21;goto B70e87c;
case 0x70e87f:c.instructions+=20;goto B70e87f;
case 0x70e882:c.instructions+=19;goto B70e882;
case 0x70e885:c.instructions+=18;goto B70e885;
case 0x70e88b:c.instructions+=17;goto B70e88b;
case 0x70e88d:c.instructions+=16;goto B70e88d;
case 0x70e890:c.instructions+=15;goto B70e890;
case 0x70e892:c.instructions+=14;goto B70e892;
case 0x70e895:c.instructions+=13;goto B70e895;
case 0x70e89b:c.instructions+=12;goto B70e89b;
case 0x70e89d:c.instructions+=11;goto B70e89d;
case 0x70e8a3:c.instructions+=10;goto B70e8a3;
case 0x70e8a9:c.instructions+=9;goto B70e8a9;
case 0x70e8af:c.instructions+=8;goto B70e8af;
case 0x70e8b5:c.instructions+=7;goto B70e8b5;
case 0x70e8b6:c.instructions+=6;goto B70e8b6;
case 0x70e8b7:c.instructions+=5;goto B70e8b7;
case 0x70e8be:c.instructions+=4;goto B70e8be;
case 0x70e8c8:c.instructions+=3;goto B70e8c8;
case 0x70e8ce:c.instructions+=2;goto B70e8ce;
case 0x70e8d5:c.instructions+=1;goto B70e8d5;
case 0x70e8da:goto L70e8da;
case 0x70e8e0:c.instructions+=17;goto B70e8e0;
case 0x70e8e2:c.instructions+=16;goto B70e8e2;
case 0x70e8e8:c.instructions+=15;goto B70e8e8;
case 0x70e8ee:c.instructions+=14;goto B70e8ee;
case 0x70e8f4:c.instructions+=13;goto B70e8f4;
case 0x70e8f7:c.instructions+=12;goto B70e8f7;
case 0x70e8fb:c.instructions+=11;goto B70e8fb;
case 0x70e901:c.instructions+=10;goto B70e901;
case 0x70e903:c.instructions+=9;goto B70e903;
case 0x70e906:c.instructions+=8;goto B70e906;
case 0x70e909:c.instructions+=7;goto B70e909;
case 0x70e90c:c.instructions+=6;goto B70e90c;
case 0x70e912:c.instructions+=5;goto B70e912;
case 0x70e913:c.instructions+=4;goto B70e913;
case 0x70e914:c.instructions+=3;goto B70e914;
case 0x70e91a:c.instructions+=2;goto B70e91a;
case 0x70e921:c.instructions+=1;goto B70e921;
case 0x70e926:goto L70e926;
case 0x70e929:c.instructions+=5;goto B70e929;
case 0x70e92a:c.instructions+=4;goto B70e92a;
case 0x70e92b:c.instructions+=3;goto B70e92b;
case 0x70e92c:c.instructions+=2;goto B70e92c;
case 0x70e92d:c.instructions+=1;goto B70e92d;
case 0x70e92e:goto L70e92e;
case 0x70e92f:c.instructions+=13;goto B70e92f;
case 0x70e931:c.instructions+=12;goto B70e931;
case 0x70e934:c.instructions+=11;goto B70e934;
case 0x70e935:c.instructions+=10;goto B70e935;
case 0x70e936:c.instructions+=9;goto B70e936;
case 0x70e939:c.instructions+=8;goto B70e939;
case 0x70e93c:c.instructions+=7;goto B70e93c;
case 0x70e943:c.instructions+=6;goto B70e943;
case 0x70e947:c.instructions+=5;goto B70e947;
case 0x70e949:c.instructions+=4;goto B70e949;
case 0x70e94d:c.instructions+=3;goto B70e94d;
case 0x70e94e:c.instructions+=2;goto B70e94e;
case 0x70e952:c.instructions+=1;goto B70e952;
case 0x70e954:goto L70e954;
case 0x70e958:c.instructions+=2;goto B70e958;
case 0x70e95a:c.instructions+=1;goto B70e95a;
case 0x70e95c:goto L70e95c;
case 0x70e95f:goto L70e95f;
case 0x70e962:c.instructions+=2;goto B70e962;
case 0x70e966:c.instructions+=1;goto B70e966;
case 0x70e968:goto L70e968;
case 0x70e96c:c.instructions+=2;goto B70e96c;
case 0x70e96e:c.instructions+=1;goto B70e96e;
case 0x70e970:goto L70e970;
case 0x70e972:c.instructions+=2;goto B70e972;
case 0x70e975:c.instructions+=1;goto B70e975;
case 0x70e977:goto L70e977;
case 0x70e97a:c.instructions+=1;goto B70e97a;
case 0x70e97e:goto L70e97e;
case 0x70e981:c.instructions+=1;goto B70e981;
case 0x70e983:goto L70e983;
case 0x70e986:c.instructions+=4;goto B70e986;
case 0x70e989:c.instructions+=3;goto B70e989;
case 0x70e98b:c.instructions+=2;goto B70e98b;
case 0x70e98d:c.instructions+=1;goto B70e98d;
case 0x70e98f:goto L70e98f;
case 0x70e992:c.instructions+=13;goto B70e992;
case 0x70e995:c.instructions+=12;goto B70e995;
case 0x70e998:c.instructions+=11;goto B70e998;
case 0x70e99a:c.instructions+=10;goto B70e99a;
case 0x70e99d:c.instructions+=9;goto B70e99d;
case 0x70e9a0:c.instructions+=8;goto B70e9a0;
case 0x70e9a4:c.instructions+=7;goto B70e9a4;
case 0x70e9a7:c.instructions+=6;goto B70e9a7;
case 0x70e9ab:c.instructions+=5;goto B70e9ab;
case 0x70e9ac:c.instructions+=4;goto B70e9ac;
case 0x70e9ad:c.instructions+=3;goto B70e9ad;
case 0x70e9ae:c.instructions+=2;goto B70e9ae;
case 0x70e9af:c.instructions+=1;goto B70e9af;
case 0x70e9b0:goto L70e9b0;
case 0x70e9b1:c.instructions+=14;goto B70e9b1;
case 0x70e9b3:c.instructions+=13;goto B70e9b3;
case 0x70e9b6:c.instructions+=12;goto B70e9b6;
case 0x70e9b9:c.instructions+=11;goto B70e9b9;
case 0x70e9ba:c.instructions+=10;goto B70e9ba;
case 0x70e9bd:c.instructions+=9;goto B70e9bd;
case 0x70e9c4:c.instructions+=8;goto B70e9c4;
case 0x70e9c6:c.instructions+=7;goto B70e9c6;
case 0x70e9c8:c.instructions+=6;goto B70e9c8;
case 0x70e9c9:c.instructions+=5;goto B70e9c9;
case 0x70e9ca:c.instructions+=4;goto B70e9ca;
case 0x70e9d0:c.instructions+=3;goto B70e9d0;
case 0x70e9d7:c.instructions+=2;goto B70e9d7;
case 0x70e9da:c.instructions+=1;goto B70e9da;
case 0x70e9dc:goto L70e9dc;
case 0x70e9dd:c.instructions+=3;goto B70e9dd;
case 0x70e9df:c.instructions+=2;goto B70e9df;
case 0x70e9e1:c.instructions+=1;goto B70e9e1;
case 0x70e9e6:goto L70e9e6;
case 0x70e9e8:c.instructions+=13;goto B70e9e8;
case 0x70e9ef:c.instructions+=12;goto B70e9ef;
case 0x70e9f2:c.instructions+=11;goto B70e9f2;
case 0x70e9f9:c.instructions+=10;goto B70e9f9;
case 0x70e9fc:c.instructions+=9;goto B70e9fc;
case 0x70e9fe:c.instructions+=8;goto B70e9fe;
case 0x70e9ff:c.instructions+=7;goto B70e9ff;
case 0x70ea01:c.instructions+=6;goto B70ea01;
case 0x70ea04:c.instructions+=5;goto B70ea04;
case 0x70ea06:c.instructions+=4;goto B70ea06;
case 0x70ea07:c.instructions+=3;goto B70ea07;
case 0x70ea0a:c.instructions+=2;goto B70ea0a;
case 0x70ea0d:c.instructions+=1;goto B70ea0d;
case 0x70ea0f:goto L70ea0f;
case 0x70ea12:c.instructions+=3;goto B70ea12;
case 0x70ea14:c.instructions+=2;goto B70ea14;
case 0x70ea16:c.instructions+=1;goto B70ea16;
case 0x70ea18:goto L70ea18;
case 0x70ea1b:c.instructions+=5;goto B70ea1b;
case 0x70ea1e:c.instructions+=4;goto B70ea1e;
case 0x70ea21:c.instructions+=3;goto B70ea21;
case 0x70ea23:c.instructions+=2;goto B70ea23;
case 0x70ea26:c.instructions+=1;goto B70ea26;
case 0x70ea28:goto L70ea28;
case 0x70ea2b:c.instructions+=6;goto B70ea2b;
case 0x70ea2e:c.instructions+=5;goto B70ea2e;
case 0x70ea31:c.instructions+=4;goto B70ea31;
case 0x70ea34:c.instructions+=3;goto B70ea34;
case 0x70ea36:c.instructions+=2;goto B70ea36;
case 0x70ea39:c.instructions+=1;goto B70ea39;
case 0x70ea3b:goto L70ea3b;
case 0x70ea3e:c.instructions+=15;goto B70ea3e;
case 0x70ea41:c.instructions+=14;goto B70ea41;
case 0x70ea45:c.instructions+=13;goto B70ea45;
case 0x70ea48:c.instructions+=12;goto B70ea48;
case 0x70ea4a:c.instructions+=11;goto B70ea4a;
case 0x70ea4e:c.instructions+=10;goto B70ea4e;
case 0x70ea51:c.instructions+=9;goto B70ea51;
case 0x70ea53:c.instructions+=8;goto B70ea53;
case 0x70ea57:c.instructions+=7;goto B70ea57;
case 0x70ea5a:c.instructions+=6;goto B70ea5a;
case 0x70ea5c:c.instructions+=5;goto B70ea5c;
case 0x70ea5f:c.instructions+=4;goto B70ea5f;
case 0x70ea62:c.instructions+=3;goto B70ea62;
case 0x70ea65:c.instructions+=2;goto B70ea65;
case 0x70ea68:c.instructions+=1;goto B70ea68;
case 0x70ea6b:goto L70ea6b;
case 0x70ea6d:c.instructions+=3;goto B70ea6d;
case 0x70ea70:c.instructions+=2;goto B70ea70;
case 0x70ea72:c.instructions+=1;goto B70ea72;
case 0x70ea74:goto L70ea74;
case 0x70ea76:c.instructions+=2;goto B70ea76;
case 0x70ea79:c.instructions+=1;goto B70ea79;
case 0x70ea7b:goto L70ea7b;
case 0x70ea7e:c.instructions+=4;goto B70ea7e;
case 0x70ea81:c.instructions+=3;goto B70ea81;
case 0x70ea87:c.instructions+=2;goto B70ea87;
case 0x70ea89:c.instructions+=1;goto B70ea89;
case 0x70ea8c:goto L70ea8c;
case 0x70ea8e:c.instructions+=1;goto B70ea8e;
case 0x70ea93:goto L70ea93;
case 0x70ea95:c.instructions+=2;goto B70ea95;
case 0x70ea98:c.instructions+=1;goto B70ea98;
case 0x70ea9a:goto L70ea9a;
case 0x70ea9c:c.instructions+=4;goto B70ea9c;
case 0x70ea9f:c.instructions+=3;goto B70ea9f;
case 0x70eaa2:c.instructions+=2;goto B70eaa2;
case 0x70eaa6:c.instructions+=1;goto B70eaa6;
case 0x70eaa8:goto L70eaa8;
case 0x70eaaa:c.instructions+=3;goto B70eaaa;
case 0x70eaad:c.instructions+=2;goto B70eaad;
case 0x70eab0:c.instructions+=1;goto B70eab0;
case 0x70eab3:goto L70eab3;
case 0x70eab6:c.instructions+=2;goto B70eab6;
case 0x70eaba:c.instructions+=1;goto B70eaba;
case 0x70eabc:goto L70eabc;
case 0x70eabe:c.instructions+=1;goto B70eabe;
case 0x70eac1:goto L70eac1;
case 0x70eac8:c.instructions+=4;goto B70eac8;
case 0x70eaca:c.instructions+=3;goto B70eaca;
case 0x70eacb:c.instructions+=2;goto B70eacb;
case 0x70eacd:c.instructions+=1;goto B70eacd;
case 0x70ead3:goto L70ead3;
case 0x70ead5:c.instructions+=1;goto B70ead5;
case 0x70ead7:goto L70ead7;
case 0x70ead9:c.instructions+=3;goto B70ead9;
case 0x70eada:c.instructions+=2;goto B70eada;
case 0x70eadc:c.instructions+=1;goto B70eadc;
case 0x70eae1:goto L70eae1;
case 0x70eae2:c.instructions+=2;goto B70eae2;
case 0x70eae5:c.instructions+=1;goto B70eae5;
case 0x70eae7:goto L70eae7;
case 0x70eae9:c.instructions+=3;goto B70eae9;
case 0x70eaea:c.instructions+=2;goto B70eaea;
case 0x70eaec:c.instructions+=1;goto B70eaec;
case 0x70eaf1:goto L70eaf1;
case 0x70eaf4:c.instructions+=1;goto B70eaf4;
case 0x70eaf6:goto L70eaf6;
case 0x70eaf9:c.instructions+=1;goto B70eaf9;
case 0x70eafb:goto L70eafb;
case 0x70eafd:c.instructions+=1;goto B70eafd;
case 0x70eb02:goto L70eb02;
case 0x70eb04:c.instructions+=2;goto B70eb04;
case 0x70eb06:c.instructions+=1;goto B70eb06;
case 0x70eb08:goto L70eb08;
case 0x70eb0a:c.instructions+=2;goto B70eb0a;
case 0x70eb0b:c.instructions+=1;goto B70eb0b;
case 0x70eb10:goto L70eb10;
case 0x70eb13:c.instructions+=1;goto B70eb13;
case 0x70eb15:goto L70eb15;
case 0x70eb17:c.instructions+=2;goto B70eb17;
case 0x70eb18:c.instructions+=1;goto B70eb18;
case 0x70eb1d:goto L70eb1d;
case 0x70eb20:goto L70eb20;
case 0x70eb23:c.instructions+=4;goto B70eb23;
case 0x70eb24:c.instructions+=3;goto B70eb24;
case 0x70eb26:c.instructions+=2;goto B70eb26;
case 0x70eb28:c.instructions+=1;goto B70eb28;
case 0x70eb2a:goto L70eb2a;
case 0x70eb2d:c.instructions+=1;goto B70eb2d;
case 0x70eb2f:goto L70eb2f;
case 0x70eb32:c.instructions+=1;goto B70eb32;
case 0x70eb34:goto L70eb34;
case 0x70eb37:goto L70eb37;
case 0x70eb39:c.instructions+=1;goto B70eb39;
case 0x70eb3e:goto L70eb3e;
case 0x70eb40:goto L70eb40;
case 0x70eb42:c.instructions+=1;goto B70eb42;
case 0x70eb47:goto L70eb47;
case 0x70eb49:c.instructions+=9;goto B70eb49;
case 0x70eb4b:c.instructions+=8;goto B70eb4b;
case 0x70eb4d:c.instructions+=7;goto B70eb4d;
case 0x70eb4f:c.instructions+=6;goto B70eb4f;
case 0x70eb52:c.instructions+=5;goto B70eb52;
case 0x70eb55:c.instructions+=4;goto B70eb55;
case 0x70eb57:c.instructions+=3;goto B70eb57;
case 0x70eb5a:c.instructions+=2;goto B70eb5a;
case 0x70eb5d:c.instructions+=1;goto B70eb5d;
case 0x70eb5e:goto L70eb5e;
case 0x70eb61:goto L70eb61;
case 0x70eb68:c.instructions+=4;goto B70eb68;
case 0x70eb6a:c.instructions+=3;goto B70eb6a;
case 0x70eb6c:c.instructions+=2;goto B70eb6c;
case 0x70eb6f:c.instructions+=1;goto B70eb6f;
case 0x70eb71:goto L70eb71;
case 0x70eb72:c.instructions+=2;goto B70eb72;
case 0x70eb74:c.instructions+=1;goto B70eb74;
case 0x70eb79:goto L70eb79;
case 0x70eb7c:c.instructions+=18;goto B70eb7c;
case 0x70eb83:c.instructions+=17;goto B70eb83;
case 0x70eb86:c.instructions+=16;goto B70eb86;
case 0x70eb89:c.instructions+=15;goto B70eb89;
case 0x70eb8c:c.instructions+=14;goto B70eb8c;
case 0x70eb8e:c.instructions+=13;goto B70eb8e;
case 0x70eb95:c.instructions+=12;goto B70eb95;
case 0x70eb98:c.instructions+=11;goto B70eb98;
case 0x70eb9f:c.instructions+=10;goto B70eb9f;
case 0x70eba2:c.instructions+=9;goto B70eba2;
case 0x70eba4:c.instructions+=8;goto B70eba4;
case 0x70eba5:c.instructions+=7;goto B70eba5;
case 0x70eba7:c.instructions+=6;goto B70eba7;
case 0x70ebaa:c.instructions+=5;goto B70ebaa;
case 0x70ebac:c.instructions+=4;goto B70ebac;
case 0x70ebad:c.instructions+=3;goto B70ebad;
case 0x70ebb0:c.instructions+=2;goto B70ebb0;
case 0x70ebb3:c.instructions+=1;goto B70ebb3;
case 0x70ebb5:goto L70ebb5;
case 0x70ebb8:c.instructions+=3;goto B70ebb8;
case 0x70ebba:c.instructions+=2;goto B70ebba;
case 0x70ebbc:c.instructions+=1;goto B70ebbc;
case 0x70ebbe:goto L70ebbe;
case 0x70ebc1:c.instructions+=5;goto B70ebc1;
case 0x70ebc4:c.instructions+=4;goto B70ebc4;
case 0x70ebc7:c.instructions+=3;goto B70ebc7;
case 0x70ebc9:c.instructions+=2;goto B70ebc9;
case 0x70ebcc:c.instructions+=1;goto B70ebcc;
case 0x70ebce:goto L70ebce;
case 0x70ebd1:c.instructions+=6;goto B70ebd1;
case 0x70ebd4:c.instructions+=5;goto B70ebd4;
case 0x70ebd7:c.instructions+=4;goto B70ebd7;
case 0x70ebda:c.instructions+=3;goto B70ebda;
case 0x70ebdc:c.instructions+=2;goto B70ebdc;
case 0x70ebdf:c.instructions+=1;goto B70ebdf;
case 0x70ebe1:goto L70ebe1;
case 0x70ebe4:c.instructions+=15;goto B70ebe4;
case 0x70ebe7:c.instructions+=14;goto B70ebe7;
case 0x70ebeb:c.instructions+=13;goto B70ebeb;
case 0x70ebee:c.instructions+=12;goto B70ebee;
case 0x70ebf0:c.instructions+=11;goto B70ebf0;
case 0x70ebf4:c.instructions+=10;goto B70ebf4;
case 0x70ebf7:c.instructions+=9;goto B70ebf7;
case 0x70ebf9:c.instructions+=8;goto B70ebf9;
case 0x70ebfd:c.instructions+=7;goto B70ebfd;
case 0x70ec00:c.instructions+=6;goto B70ec00;
case 0x70ec02:c.instructions+=5;goto B70ec02;
case 0x70ec05:c.instructions+=4;goto B70ec05;
case 0x70ec08:c.instructions+=3;goto B70ec08;
case 0x70ec0b:c.instructions+=2;goto B70ec0b;
case 0x70ec0e:c.instructions+=1;goto B70ec0e;
case 0x70ec11:goto L70ec11;
case 0x70ec13:c.instructions+=3;goto B70ec13;
case 0x70ec16:c.instructions+=2;goto B70ec16;
case 0x70ec18:c.instructions+=1;goto B70ec18;
case 0x70ec1a:goto L70ec1a;
case 0x70ec1c:c.instructions+=2;goto B70ec1c;
case 0x70ec1f:c.instructions+=1;goto B70ec1f;
case 0x70ec21:goto L70ec21;
case 0x70ec24:c.instructions+=4;goto B70ec24;
case 0x70ec27:c.instructions+=3;goto B70ec27;
case 0x70ec2d:c.instructions+=2;goto B70ec2d;
case 0x70ec2f:c.instructions+=1;goto B70ec2f;
case 0x70ec32:goto L70ec32;
case 0x70ec34:c.instructions+=1;goto B70ec34;
case 0x70ec39:goto L70ec39;
case 0x70ec3b:c.instructions+=2;goto B70ec3b;
case 0x70ec3e:c.instructions+=1;goto B70ec3e;
case 0x70ec40:goto L70ec40;
case 0x70ec42:c.instructions+=4;goto B70ec42;
case 0x70ec45:c.instructions+=3;goto B70ec45;
case 0x70ec48:c.instructions+=2;goto B70ec48;
case 0x70ec4c:c.instructions+=1;goto B70ec4c;
case 0x70ec4e:goto L70ec4e;
case 0x70ec50:c.instructions+=3;goto B70ec50;
case 0x70ec53:c.instructions+=2;goto B70ec53;
case 0x70ec56:c.instructions+=1;goto B70ec56;
case 0x70ec59:goto L70ec59;
case 0x70ec5c:c.instructions+=2;goto B70ec5c;
case 0x70ec60:c.instructions+=1;goto B70ec60;
case 0x70ec62:goto L70ec62;
case 0x70ec64:c.instructions+=1;goto B70ec64;
case 0x70ec67:goto L70ec67;
case 0x70ec69:c.instructions+=2;goto B70ec69;
case 0x70ec70:c.instructions+=1;goto B70ec70;
case 0x70ec76:goto L70ec76;
case 0x70ec7a:c.instructions+=15;goto B70ec7a;
case 0x70ec7d:c.instructions+=14;goto B70ec7d;
case 0x70ec7f:c.instructions+=13;goto B70ec7f;
case 0x70ec85:c.instructions+=12;goto B70ec85;
case 0x70ec88:c.instructions+=11;goto B70ec88;
case 0x70ec8f:c.instructions+=10;goto B70ec8f;
case 0x70ec91:c.instructions+=9;goto B70ec91;
case 0x70ec98:c.instructions+=8;goto B70ec98;
case 0x70ec99:c.instructions+=7;goto B70ec99;
case 0x70ec9c:c.instructions+=6;goto B70ec9c;
case 0x70ec9e:c.instructions+=5;goto B70ec9e;
case 0x70eca0:c.instructions+=4;goto B70eca0;
case 0x70eca1:c.instructions+=3;goto B70eca1;
case 0x70eca4:c.instructions+=2;goto B70eca4;
case 0x70eca7:c.instructions+=1;goto B70eca7;
case 0x70eca9:goto L70eca9;
case 0x70ecac:c.instructions+=3;goto B70ecac;
case 0x70ecae:c.instructions+=2;goto B70ecae;
case 0x70ecb0:c.instructions+=1;goto B70ecb0;
case 0x70ecb2:goto L70ecb2;
case 0x70ecb5:c.instructions+=5;goto B70ecb5;
case 0x70ecb8:c.instructions+=4;goto B70ecb8;
case 0x70ecbb:c.instructions+=3;goto B70ecbb;
case 0x70ecbd:c.instructions+=2;goto B70ecbd;
case 0x70ecc0:c.instructions+=1;goto B70ecc0;
case 0x70ecc2:goto L70ecc2;
case 0x70ecc5:c.instructions+=4;goto B70ecc5;
case 0x70ecc8:c.instructions+=3;goto B70ecc8;
case 0x70eccb:c.instructions+=2;goto B70eccb;
case 0x70eccd:c.instructions+=1;goto B70eccd;
case 0x70eccf:goto L70eccf;
case 0x70ecd2:c.instructions+=14;goto B70ecd2;
case 0x70ecd5:c.instructions+=13;goto B70ecd5;
case 0x70ecd9:c.instructions+=12;goto B70ecd9;
case 0x70ecdc:c.instructions+=11;goto B70ecdc;
case 0x70ecde:c.instructions+=10;goto B70ecde;
case 0x70ece2:c.instructions+=9;goto B70ece2;
case 0x70ece5:c.instructions+=8;goto B70ece5;
case 0x70ece7:c.instructions+=7;goto B70ece7;
case 0x70eceb:c.instructions+=6;goto B70eceb;
case 0x70ecee:c.instructions+=5;goto B70ecee;
case 0x70ecf0:c.instructions+=4;goto B70ecf0;
case 0x70ecf3:c.instructions+=3;goto B70ecf3;
case 0x70ecf6:c.instructions+=2;goto B70ecf6;
case 0x70ecf9:c.instructions+=1;goto B70ecf9;
case 0x70ecfc:goto L70ecfc;
case 0x70ecfe:c.instructions+=3;goto B70ecfe;
case 0x70ed01:c.instructions+=2;goto B70ed01;
case 0x70ed03:c.instructions+=1;goto B70ed03;
case 0x70ed05:goto L70ed05;
case 0x70ed07:c.instructions+=2;goto B70ed07;
case 0x70ed0a:c.instructions+=1;goto B70ed0a;
case 0x70ed0c:goto L70ed0c;
case 0x70ed0f:c.instructions+=4;goto B70ed0f;
case 0x70ed12:c.instructions+=3;goto B70ed12;
case 0x70ed18:c.instructions+=2;goto B70ed18;
case 0x70ed1a:c.instructions+=1;goto B70ed1a;
case 0x70ed1d:goto L70ed1d;
case 0x70ed1f:c.instructions+=1;goto B70ed1f;
case 0x70ed24:goto L70ed24;
case 0x70ed27:c.instructions+=3;goto B70ed27;
case 0x70ed29:c.instructions+=2;goto B70ed29;
case 0x70ed2c:c.instructions+=1;goto B70ed2c;
case 0x70ed2e:goto L70ed2e;
case 0x70ed30:c.instructions+=4;goto B70ed30;
case 0x70ed33:c.instructions+=3;goto B70ed33;
case 0x70ed36:c.instructions+=2;goto B70ed36;
case 0x70ed3a:c.instructions+=1;goto B70ed3a;
case 0x70ed3c:goto L70ed3c;
case 0x70ed3e:c.instructions+=3;goto B70ed3e;
case 0x70ed41:c.instructions+=2;goto B70ed41;
case 0x70ed44:c.instructions+=1;goto B70ed44;
case 0x70ed47:goto L70ed47;
case 0x70ed4a:c.instructions+=2;goto B70ed4a;
case 0x70ed4e:c.instructions+=1;goto B70ed4e;
case 0x70ed50:goto L70ed50;
case 0x70ed52:c.instructions+=1;goto B70ed52;
case 0x70ed55:goto L70ed55;
case 0x70ed58:c.instructions+=1;goto B70ed58;
case 0x70ed5a:goto L70ed5a;
case 0x70ed5d:c.instructions+=1;goto B70ed5d;
case 0x70ed5f:goto L70ed5f;
case 0x70ed61:c.instructions+=3;goto B70ed61;
case 0x70ed62:c.instructions+=2;goto B70ed62;
case 0x70ed64:c.instructions+=1;goto B70ed64;
case 0x70ed69:goto L70ed69;
case 0x70ed6c:c.instructions+=2;goto B70ed6c;
case 0x70ed70:c.instructions+=1;goto B70ed70;
case 0x70ed73:goto L70ed73;
case 0x70ed75:c.instructions+=1;goto B70ed75;
case 0x70ed77:goto L70ed77;
case 0x70ed79:c.instructions+=3;goto B70ed79;
case 0x70ed7a:c.instructions+=2;goto B70ed7a;
case 0x70ed7c:c.instructions+=1;goto B70ed7c;
case 0x70ed7e:goto L70ed7e;
case 0x70ed81:c.instructions+=1;goto B70ed81;
case 0x70ed83:goto L70ed83;
case 0x70ed86:c.instructions+=1;goto B70ed86;
case 0x70ed88:goto L70ed88;
case 0x70ed8b:goto L70ed8b;
case 0x70ed8d:c.instructions+=1;goto B70ed8d;
case 0x70ed92:goto L70ed92;
case 0x70ed94:goto L70ed94;
case 0x70ed96:c.instructions+=1;goto B70ed96;
case 0x70ed9b:goto L70ed9b;
case 0x70ed9e:c.instructions+=11;goto B70ed9e;
case 0x70eda0:c.instructions+=10;goto B70eda0;
case 0x70eda2:c.instructions+=9;goto B70eda2;
case 0x70eda4:c.instructions+=8;goto B70eda4;
case 0x70eda6:c.instructions+=7;goto B70eda6;
case 0x70eda9:c.instructions+=6;goto B70eda9;
case 0x70edb1:c.instructions+=5;goto B70edb1;
case 0x70edb5:c.instructions+=4;goto B70edb5;
case 0x70edb7:c.instructions+=3;goto B70edb7;
case 0x70edba:c.instructions+=2;goto B70edba;
case 0x70edbd:c.instructions+=1;goto B70edbd;
case 0x70edbe:goto L70edbe;
case 0x70edc1:c.instructions+=2;goto B70edc1;
case 0x70edc5:c.instructions+=1;goto B70edc5;
case 0x70edc7:goto L70edc7;
case 0x70edca:c.instructions+=1;goto B70edca;
case 0x70edcf:goto L70edcf;
case 0x70edd3:c.instructions+=1;goto B70edd3;
case 0x70edd5:goto L70edd5;
case 0x70edd7:c.instructions+=3;goto B70edd7;
case 0x70edd8:c.instructions+=2;goto B70edd8;
case 0x70edda:c.instructions+=1;goto B70edda;
case 0x70eddf:goto L70eddf;
case 0x70ede0:c.instructions+=2;goto B70ede0;
case 0x70ede3:c.instructions+=1;goto B70ede3;
case 0x70ede5:goto L70ede5;
case 0x70ede7:c.instructions+=3;goto B70ede7;
case 0x70ede8:c.instructions+=2;goto B70ede8;
case 0x70edea:c.instructions+=1;goto B70edea;
case 0x70edef:goto L70edef;
case 0x70edf2:c.instructions+=1;goto B70edf2;
case 0x70edf4:goto L70edf4;
case 0x70edf7:c.instructions+=1;goto B70edf7;
case 0x70edf9:goto L70edf9;
case 0x70edfb:c.instructions+=1;goto B70edfb;
case 0x70ee00:goto L70ee00;
case 0x70ee02:c.instructions+=2;goto B70ee02;
case 0x70ee04:c.instructions+=1;goto B70ee04;
case 0x70ee06:goto L70ee06;
case 0x70ee08:c.instructions+=2;goto B70ee08;
case 0x70ee09:c.instructions+=1;goto B70ee09;
case 0x70ee0e:goto L70ee0e;
case 0x70ee11:c.instructions+=1;goto B70ee11;
case 0x70ee13:goto L70ee13;
case 0x70ee15:c.instructions+=2;goto B70ee15;
case 0x70ee16:c.instructions+=1;goto B70ee16;
case 0x70ee1b:goto L70ee1b;
case 0x70ee1e:goto L70ee1e;
case 0x70ee21:c.instructions+=2;goto B70ee21;
case 0x70ee22:c.instructions+=1;goto B70ee22;
case 0x70ee24:goto L70ee24;
case 0x70ee27:c.instructions+=6;goto B70ee27;
case 0x70ee2e:c.instructions+=5;goto B70ee2e;
case 0x70ee2f:c.instructions+=4;goto B70ee2f;
case 0x70ee30:c.instructions+=3;goto B70ee30;
case 0x70ee31:c.instructions+=2;goto B70ee31;
case 0x70ee32:c.instructions+=1;goto B70ee32;
case 0x70ee33:goto L70ee33;
case 0x70ee34:c.instructions+=8;goto B70ee34;
case 0x70ee36:c.instructions+=7;goto B70ee36;
case 0x70ee37:c.instructions+=6;goto B70ee37;
case 0x70ee3a:c.instructions+=5;goto B70ee3a;
case 0x70ee3c:c.instructions+=4;goto B70ee3c;
case 0x70ee3f:c.instructions+=3;goto B70ee3f;
case 0x70ee40:c.instructions+=2;goto B70ee40;
case 0x70ee42:c.instructions+=1;goto B70ee42;
case 0x70ee44:goto L70ee44;
case 0x70ee47:c.instructions+=2;goto B70ee47;
case 0x70ee48:c.instructions+=1;goto B70ee48;
case 0x70ee4c:goto L70ee4c;
case 0x70ee4f:c.instructions+=3;goto B70ee4f;
case 0x70ee52:c.instructions+=2;goto B70ee52;
case 0x70ee55:c.instructions+=1;goto B70ee55;
case 0x70ee57:goto L70ee57;
case 0x70ee59:c.instructions+=3;goto B70ee59;
case 0x70ee5b:c.instructions+=2;goto B70ee5b;
case 0x70ee5e:c.instructions+=1;goto B70ee5e;
case 0x70ee60:goto L70ee60;
case 0x70ee63:c.instructions+=1;goto B70ee63;
case 0x70ee64:goto L70ee64;
case 0x70ee66:c.instructions+=1;goto B70ee66;
case 0x70ee68:goto L70ee68;
case 0x70ee6a:c.instructions+=1;goto B70ee6a;
case 0x70ee6c:goto L70ee6c;
case 0x70ee6f:c.instructions+=1;goto B70ee6f;
case 0x70ee72:goto L70ee72;
case 0x70ee75:c.instructions+=5;goto B70ee75;
case 0x70ee76:c.instructions+=4;goto B70ee76;
case 0x70ee79:c.instructions+=3;goto B70ee79;
case 0x70ee7a:c.instructions+=2;goto B70ee7a;
case 0x70ee7b:c.instructions+=1;goto B70ee7b;
case 0x70ee7c:goto L70ee7c;
case 0x70ee7d:c.instructions+=13;goto B70ee7d;
case 0x70ee7f:c.instructions+=12;goto B70ee7f;
case 0x70ee85:c.instructions+=11;goto B70ee85;
case 0x70ee86:c.instructions+=10;goto B70ee86;
case 0x70ee87:c.instructions+=9;goto B70ee87;
case 0x70ee8a:c.instructions+=8;goto B70ee8a;
case 0x70ee8b:c.instructions+=7;goto B70ee8b;
case 0x70ee8d:c.instructions+=6;goto B70ee8d;
case 0x70ee90:c.instructions+=5;goto B70ee90;
case 0x70ee92:c.instructions+=4;goto B70ee92;
case 0x70ee94:c.instructions+=3;goto B70ee94;
case 0x70ee97:c.instructions+=2;goto B70ee97;
case 0x70ee9a:c.instructions+=1;goto B70ee9a;
case 0x70ee9c:goto L70ee9c;
case 0x70eea2:goto L70eea2;
case 0x70eea5:c.instructions+=9;goto B70eea5;
case 0x70eea7:c.instructions+=8;goto B70eea7;
case 0x70eead:c.instructions+=7;goto B70eead;
case 0x70eeaf:c.instructions+=6;goto B70eeaf;
case 0x70eeb2:c.instructions+=5;goto B70eeb2;
case 0x70eeb4:c.instructions+=4;goto B70eeb4;
case 0x70eeb7:c.instructions+=3;goto B70eeb7;
case 0x70eeba:c.instructions+=2;goto B70eeba;
case 0x70eebd:c.instructions+=1;goto B70eebd;
case 0x70eebf:goto L70eebf;
case 0x70eec5:goto L70eec5;
case 0x70eec9:c.instructions+=6;goto B70eec9;
case 0x70eecb:c.instructions+=5;goto B70eecb;
case 0x70eece:c.instructions+=4;goto B70eece;
case 0x70eecf:c.instructions+=3;goto B70eecf;
case 0x70eed2:c.instructions+=2;goto B70eed2;
case 0x70eed4:c.instructions+=1;goto B70eed4;
case 0x70eed6:goto L70eed6;
case 0x70eed8:c.instructions+=4;goto B70eed8;
case 0x70eed9:c.instructions+=3;goto B70eed9;
case 0x70eedb:c.instructions+=2;goto B70eedb;
case 0x70eede:c.instructions+=1;goto B70eede;
case 0x70eee0:goto L70eee0;
case 0x70eee3:c.instructions+=4;goto B70eee3;
case 0x70eee4:c.instructions+=3;goto B70eee4;
case 0x70eee6:c.instructions+=2;goto B70eee6;
case 0x70eeec:c.instructions+=1;goto B70eeec;
case 0x70eef1:goto L70eef1;
case 0x70eef2:c.instructions+=3;goto B70eef2;
case 0x70eef4:c.instructions+=2;goto B70eef4;
case 0x70eef5:c.instructions+=1;goto B70eef5;
case 0x70eef7:goto L70eef7;
case 0x70eefa:goto L70eefa;
case 0x70eefd:c.instructions+=4;goto B70eefd;
case 0x70ef00:c.instructions+=3;goto B70ef00;
case 0x70ef07:c.instructions+=2;goto B70ef07;
case 0x70ef0a:c.instructions+=1;goto B70ef0a;
case 0x70ef10:goto L70ef10;
case 0x70ef13:c.instructions+=4;goto B70ef13;
case 0x70ef16:c.instructions+=3;goto B70ef16;
case 0x70ef19:c.instructions+=2;goto B70ef19;
case 0x70ef20:c.instructions+=1;goto B70ef20;
case 0x70ef24:goto L70ef24;
case 0x70ef2b:c.instructions+=32;goto B70ef2b;
case 0x70ef2e:c.instructions+=31;goto B70ef2e;
case 0x70ef31:c.instructions+=30;goto B70ef31;
case 0x70ef34:c.instructions+=29;goto B70ef34;
case 0x70ef3b:c.instructions+=28;goto B70ef3b;
case 0x70ef3d:c.instructions+=27;goto B70ef3d;
case 0x70ef44:c.instructions+=26;goto B70ef44;
case 0x70ef47:c.instructions+=25;goto B70ef47;
case 0x70ef4e:c.instructions+=24;goto B70ef4e;
case 0x70ef51:c.instructions+=23;goto B70ef51;
case 0x70ef54:c.instructions+=22;goto B70ef54;
case 0x70ef57:c.instructions+=21;goto B70ef57;
case 0x70ef5a:c.instructions+=20;goto B70ef5a;
case 0x70ef5b:c.instructions+=19;goto B70ef5b;
case 0x70ef5d:c.instructions+=18;goto B70ef5d;
case 0x70ef60:c.instructions+=17;goto B70ef60;
case 0x70ef62:c.instructions+=16;goto B70ef62;
case 0x70ef66:c.instructions+=15;goto B70ef66;
case 0x70ef6c:c.instructions+=14;goto B70ef6c;
case 0x70ef6f:c.instructions+=13;goto B70ef6f;
case 0x70ef71:c.instructions+=12;goto B70ef71;
case 0x70ef74:c.instructions+=11;goto B70ef74;
case 0x70ef77:c.instructions+=10;goto B70ef77;
case 0x70ef79:c.instructions+=9;goto B70ef79;
case 0x70ef7b:c.instructions+=8;goto B70ef7b;
case 0x70ef7d:c.instructions+=7;goto B70ef7d;
case 0x70ef84:c.instructions+=6;goto B70ef84;
case 0x70ef87:c.instructions+=5;goto B70ef87;
case 0x70ef8a:c.instructions+=4;goto B70ef8a;
case 0x70ef8d:c.instructions+=3;goto B70ef8d;
case 0x70ef8e:c.instructions+=2;goto B70ef8e;
case 0x70ef94:c.instructions+=1;goto B70ef94;
case 0x70ef99:goto L70ef99;
case 0x70ef9c:c.instructions+=8;goto B70ef9c;
case 0x70ef9f:c.instructions+=7;goto B70ef9f;
case 0x70efa2:c.instructions+=6;goto B70efa2;
case 0x70efa5:c.instructions+=5;goto B70efa5;
case 0x70efa6:c.instructions+=4;goto B70efa6;
case 0x70efad:c.instructions+=3;goto B70efad;
case 0x70efb0:c.instructions+=2;goto B70efb0;
case 0x70efb3:c.instructions+=1;goto B70efb3;
case 0x70efb9:goto L70efb9;
case 0x70efba:c.instructions+=4;goto B70efba;
case 0x70efbb:c.instructions+=3;goto B70efbb;
case 0x70efbc:c.instructions+=2;goto B70efbc;
case 0x70efbd:c.instructions+=1;goto B70efbd;
case 0x70efbe:goto L70efbe;
case 0x70efbf:c.instructions+=12;goto B70efbf;
case 0x70efc1:c.instructions+=11;goto B70efc1;
case 0x70efc2:c.instructions+=10;goto B70efc2;
case 0x70efc5:c.instructions+=9;goto B70efc5;
case 0x70efc8:c.instructions+=8;goto B70efc8;
case 0x70efc9:c.instructions+=7;goto B70efc9;
case 0x70efca:c.instructions+=6;goto B70efca;
case 0x70efcb:c.instructions+=5;goto B70efcb;
case 0x70efcd:c.instructions+=4;goto B70efcd;
case 0x70efcf:c.instructions+=3;goto B70efcf;
case 0x70efd1:c.instructions+=2;goto B70efd1;
case 0x70efd6:c.instructions+=1;goto B70efd6;
case 0x70efd7:goto L70efd7;
case 0x70efd8:c.instructions+=9;goto B70efd8;
case 0x70efd9:c.instructions+=8;goto B70efd9;
case 0x70efdb:c.instructions+=7;goto B70efdb;
case 0x70efdd:c.instructions+=6;goto B70efdd;
case 0x70efdf:c.instructions+=5;goto B70efdf;
case 0x70efe2:c.instructions+=4;goto B70efe2;
case 0x70efe5:c.instructions+=3;goto B70efe5;
case 0x70efe8:c.instructions+=2;goto B70efe8;
case 0x70efeb:c.instructions+=1;goto B70efeb;
case 0x70efed:goto L70efed;
case 0x70eff1:c.instructions+=1;goto B70eff1;
case 0x70eff3:goto L70eff3;
case 0x70eff6:goto L70eff6;
case 0x70eff8:c.instructions+=1;goto B70eff8;
case 0x70effa:goto L70effa;
case 0x70effd:c.instructions+=2;goto B70effd;
case 0x70efff:c.instructions+=1;goto B70efff;
default:missing_instruction(c.pc);}
B70e002:L70e002:{c.instructions+=10;NFSU2_TR(0x70e002);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e005:{NFSU2_TR(0x70e005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e008:{NFSU2_TR(0x70e008);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B70e00b:{NFSU2_TR(0x70e00b);
__builtin_memmove((R+12),(R+4),4);
}
B70e00d:{NFSU2_TR(0x70e00d);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
}
B70e00f:{NFSU2_TR(0x70e00f);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B70e011:{NFSU2_TR(0x70e011);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e018:{NFSU2_TR(0x70e018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e01b:{NFSU2_TR(0x70e01b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e01e:{NFSU2_TR(0x70e01e);
{goto L70e088;}
}
B70e020:L70e020:{c.instructions+=36;NFSU2_TR(0x70e020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70e023:{NFSU2_TR(0x70e023);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e025:{NFSU2_TR(0x70e025);
u8 U[14];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B70e02a:{NFSU2_TR(0x70e02a);
u8 U[14];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(s32(s16(r2(U+12)))));
}
B70e02f:{NFSU2_TR(0x70e02f);
w4(R+4,u32(s32(s16(r2(R+24)))));
}
B70e032:{NFSU2_TR(0x70e032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e035:{NFSU2_TR(0x70e035);
__builtin_memmove((R+24),(R+4),4);
}
B70e037:{NFSU2_TR(0x70e037);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B70e039:{NFSU2_TR(0x70e039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e03c:{NFSU2_TR(0x70e03c);
__builtin_memmove((R+24),(R+4),4);
}
B70e03e:{NFSU2_TR(0x70e03e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B70e041:{NFSU2_TR(0x70e041);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B70e043:{NFSU2_TR(0x70e043);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B70e045:{NFSU2_TR(0x70e045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e048:{NFSU2_TR(0x70e048);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e04b:{NFSU2_TR(0x70e04b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r1(U+0))));
}
B70e04d:{NFSU2_TR(0x70e04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e050:{NFSU2_TR(0x70e050);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B70e053:{NFSU2_TR(0x70e053);
u8 U[32];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B70e05a:{NFSU2_TR(0x70e05a);
__builtin_memmove((R+4),(R+0),4);
}
B70e05c:{NFSU2_TR(0x70e05c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B70e05f:{NFSU2_TR(0x70e05f);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B70e061:{NFSU2_TR(0x70e061);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70e063:{NFSU2_TR(0x70e063);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e066:{NFSU2_TR(0x70e066);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e069:{NFSU2_TR(0x70e069);
__builtin_memmove((R+12),(R+0),4);
}
B70e06b:{NFSU2_TR(0x70e06b);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+8))));
}
B70e06d:{NFSU2_TR(0x70e06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e070:{NFSU2_TR(0x70e070);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+0))));
}
B70e072:{NFSU2_TR(0x70e072);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e075:{NFSU2_TR(0x70e075);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e078:{NFSU2_TR(0x70e078);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B70e07a:{NFSU2_TR(0x70e07a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B70e07d:{NFSU2_TR(0x70e07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B70e080:{NFSU2_TR(0x70e080);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e084:{NFSU2_TR(0x70e084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e088:L70e088:{c.instructions+=3;NFSU2_TR(0x70e088);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70e08a:{NFSU2_TR(0x70e08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e08d:{NFSU2_TR(0x70e08d);
if(r1(R+518)){{goto L70e0a5;}}
}
B70e08f:L70e08f:{c.instructions+=7;NFSU2_TR(0x70e08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e092:{NFSU2_TR(0x70e092);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70e094:{NFSU2_TR(0x70e094);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+4)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B70e098:{NFSU2_TR(0x70e098);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B70e09b:{NFSU2_TR(0x70e09b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70e09f:{NFSU2_TR(0x70e09f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e0a2:{NFSU2_TR(0x70e0a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e0a5:L70e0a5:{c.instructions+=2;NFSU2_TR(0x70e0a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70e0a9:{NFSU2_TR(0x70e0a9);
if(r1(R+518)){{goto L70e0c2;}}
}
B70e0ab:L70e0ab:{c.instructions+=7;NFSU2_TR(0x70e0ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e0ae:{NFSU2_TR(0x70e0ae);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70e0b0:{NFSU2_TR(0x70e0b0);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+4)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B70e0b4:{NFSU2_TR(0x70e0b4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B70e0b7:{NFSU2_TR(0x70e0b7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70e0bb:{NFSU2_TR(0x70e0bb);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B70e0bf:{NFSU2_TR(0x70e0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e0c2:L70e0c2:{c.instructions+=3;NFSU2_TR(0x70e0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e0c5:{NFSU2_TR(0x70e0c5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70e0c7:{NFSU2_TR(0x70e0c7);
if(r1(R+518)){{goto L70e1d7;}}
}
B70e0cd:L70e0cd:{c.instructions+=2;NFSU2_TR(0x70e0cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70e0d1:{NFSU2_TR(0x70e0d1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70e1c6;}}
}
B70e0d7:L70e0d7:{c.instructions+=4;NFSU2_TR(0x70e0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,shl<u32>(r4(U+4),u64(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e0da:{NFSU2_TR(0x70e0da);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B70e0dc:{NFSU2_TR(0x70e0dc);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B70e0e3:{NFSU2_TR(0x70e0e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e0ec;}}
}
B70e0e5:L70e0e5:{c.instructions+=2;NFSU2_TR(0x70e0e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e0e7:{NFSU2_TR(0x70e0e7);
{goto L70e1a8;}
}
B70e0ec:L70e0ec:{c.instructions+=3;NFSU2_TR(0x70e0ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x692ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B70e0f2:{NFSU2_TR(0x70e0f2);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B70e0f5:{NFSU2_TR(0x70e0f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e19f;}}
}
B70e0fb:L70e0fb:{c.instructions+=4;NFSU2_TR(0x70e0fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70e0fd:{NFSU2_TR(0x70e0fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x693ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B70e103:{NFSU2_TR(0x70e103);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70e105:{NFSU2_TR(0x70e105);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70e118;}}
}
B70e107:L70e107:{c.instructions+=8;NFSU2_TR(0x70e107);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70e109:{NFSU2_TR(0x70e109);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70e10a:{NFSU2_TR(0x70e10a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B70e10b:{NFSU2_TR(0x70e10b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B70e10d:{NFSU2_TR(0x70e10d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70e110:{NFSU2_TR(0x70e110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e113:{NFSU2_TR(0x70e113);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e116:{NFSU2_TR(0x70e116);
{goto L70e11f;}
}
B70e118:L70e118:{c.instructions+=1;NFSU2_TR(0x70e118);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e11f:L70e11f:{c.instructions+=2;NFSU2_TR(0x70e11f);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x693ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B70e126:{NFSU2_TR(0x70e126);
if(r1(R+518)){{goto L70e15c;}}
}
B70e128:L70e128:{c.instructions+=5;NFSU2_TR(0x70e128);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B70e129:{NFSU2_TR(0x70e129);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B70e12b:{NFSU2_TR(0x70e12b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70e12d:{NFSU2_TR(0x70e12d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70e130:{NFSU2_TR(0x70e130);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L70e13f;}}
}
B70e132:L70e132:{c.instructions+=6;NFSU2_TR(0x70e132);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e135:{NFSU2_TR(0x70e135);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B70e136:{NFSU2_TR(0x70e136);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B70e138:{NFSU2_TR(0x70e138);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70e13a:{NFSU2_TR(0x70e13a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70e13d:{NFSU2_TR(0x70e13d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70e159;}}
}
B70e13f:L70e13f:{c.instructions+=12;NFSU2_TR(0x70e13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e142:{NFSU2_TR(0x70e142);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e144:{NFSU2_TR(0x70e144);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e147:{NFSU2_TR(0x70e147);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B70e149:{NFSU2_TR(0x70e149);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e14a:{NFSU2_TR(0x70e14a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e14d:{NFSU2_TR(0x70e14d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e150:{NFSU2_TR(0x70e150);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e151:{NFSU2_TR(0x70e151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e154:{NFSU2_TR(0x70e154);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70e156:{NFSU2_TR(0x70e156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e157:{NFSU2_TR(0x70e157);
{goto L70e1bb;}
}
B70e159:L70e159:{c.instructions+=1;NFSU2_TR(0x70e159);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e15c:L70e15c:{c.instructions+=4;NFSU2_TR(0x70e15c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x694ull))));
}
B70e162:{NFSU2_TR(0x70e162);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B70e165:{NFSU2_TR(0x70e165);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e168:{NFSU2_TR(0x70e168);
if(r1(R+518)){{goto L70e19b;}}
}
B70e16a:L70e16a:{c.instructions+=4;NFSU2_TR(0x70e16a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e16d:{NFSU2_TR(0x70e16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B70e170:{NFSU2_TR(0x70e170);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e171:{NFSU2_TR(0x70e171);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e176ull));
TAIL_STATIC(0x71fb03u,71f);
}
B70e176:L70e176:{c.instructions+=14;NFSU2_TR(0x70e176);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e179:{NFSU2_TR(0x70e179);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
}
B70e17b:{NFSU2_TR(0x70e17b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B70e17d:{NFSU2_TR(0x70e17d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70e17e:{NFSU2_TR(0x70e17e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e17f:{NFSU2_TR(0x70e17f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e182:{NFSU2_TR(0x70e182);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e185:{NFSU2_TR(0x70e185);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e186:{NFSU2_TR(0x70e186);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e189:{NFSU2_TR(0x70e189);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70e18b:{NFSU2_TR(0x70e18b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e18e:{NFSU2_TR(0x70e18e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e18f:{NFSU2_TR(0x70e18f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e190:{NFSU2_TR(0x70e190);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c6c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e196ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70e196:L70e196:{c.instructions+=2;NFSU2_TR(0x70e196);
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
B70e199:{NFSU2_TR(0x70e199);
{goto L70e1e9;}
}
B70e19b:L70e19b:{c.instructions+=2;NFSU2_TR(0x70e19b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e19d:{NFSU2_TR(0x70e19d);
{goto L70e1a8;}
}
B70e19f:L70e19f:{c.instructions+=4;NFSU2_TR(0x70e19f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e1a1:{NFSU2_TR(0x70e1a1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B70e1a4:{NFSU2_TR(0x70e1a4);
__builtin_memmove((R+0),(R+518),1);
}
B70e1a7:{NFSU2_TR(0x70e1a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e1a8:L70e1a8:{c.instructions+=7;NFSU2_TR(0x70e1a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e1ab:{NFSU2_TR(0x70e1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e1ae:{NFSU2_TR(0x70e1ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e1af:{NFSU2_TR(0x70e1af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e1b2:{NFSU2_TR(0x70e1b2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B70e1b4:{NFSU2_TR(0x70e1b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e1b7:{NFSU2_TR(0x70e1b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e1b8:L70e1b8:{c.instructions+=2;NFSU2_TR(0x70e1b8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70e1ba:{NFSU2_TR(0x70e1ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e1bb:L70e1bb:{c.instructions+=1;NFSU2_TR(0x70e1bb);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c6c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e1c1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70e1c1:L70e1c1:{c.instructions+=2;NFSU2_TR(0x70e1c1);
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
B70e1c4:{NFSU2_TR(0x70e1c4);
{goto L70e1e9;}
}
B70e1c6:L70e1c6:{c.instructions+=8;NFSU2_TR(0x70e1c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e1c8:{NFSU2_TR(0x70e1c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e1cb:{NFSU2_TR(0x70e1cb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B70e1cd:{NFSU2_TR(0x70e1cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e1ce:{NFSU2_TR(0x70e1ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e1d1:{NFSU2_TR(0x70e1d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e1d4:{NFSU2_TR(0x70e1d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e1d5:{NFSU2_TR(0x70e1d5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e1b8u);}goto L70e1b8;}
}
B70e1d7:L70e1d7:{c.instructions+=5;NFSU2_TR(0x70e1d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e1da:{NFSU2_TR(0x70e1da);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70e1dc:{NFSU2_TR(0x70e1dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e1df:{NFSU2_TR(0x70e1df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e1e0:{NFSU2_TR(0x70e1e0);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c68),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e1e6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70e1e6:L70e1e6:{c.instructions+=1;NFSU2_TR(0x70e1e6);
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
B70e1e9:L70e1e9:{c.instructions+=5;NFSU2_TR(0x70e1e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70e1ea:{NFSU2_TR(0x70e1ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70e1eb:{NFSU2_TR(0x70e1eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70e1ec:{NFSU2_TR(0x70e1ec);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70e1ed:{NFSU2_TR(0x70e1ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70e1ee:L70e1ee:{c.instructions+=7;NFSU2_TR(0x70e1ee);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e1ef:{NFSU2_TR(0x70e1ef);
__builtin_memmove((R+20),(R+16),4);
}
B70e1f1:{NFSU2_TR(0x70e1f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e1f2:{NFSU2_TR(0x70e1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70e1f5:{NFSU2_TR(0x70e1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e1f8:{NFSU2_TR(0x70e1f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70e1fa:{NFSU2_TR(0x70e1fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e22b;}}
}
B70e1fc:L70e1fc:{c.instructions+=3;NFSU2_TR(0x70e1fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e1ff:{NFSU2_TR(0x70e1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e205:{NFSU2_TR(0x70e205);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e20b:L70e20b:{c.instructions+=8;NFSU2_TR(0x70e20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e20e:{NFSU2_TR(0x70e20e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70e210:{NFSU2_TR(0x70e210);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e211:{NFSU2_TR(0x70e211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e217:{NFSU2_TR(0x70e217);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70e219:{NFSU2_TR(0x70e219);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e21a:{NFSU2_TR(0x70e21a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e220:{NFSU2_TR(0x70e220);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ea4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e226ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70e226:L70e226:{c.instructions+=2;NFSU2_TR(0x70e226);
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
B70e229:{NFSU2_TR(0x70e229);
{goto L70e297;}
}
B70e22b:L70e22b:{c.instructions+=2;NFSU2_TR(0x70e22b);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x816660ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70e233:{NFSU2_TR(0x70e233);
if(r1(R+518)){{goto L70e268;}}
}
B70e235:L70e235:{c.instructions+=4;NFSU2_TR(0x70e235);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e238:{NFSU2_TR(0x70e238);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e23e:{NFSU2_TR(0x70e23e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e23f:{NFSU2_TR(0x70e23f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e244ull));
TAIL_STATIC(0x70df7cu,70d);
}
B70e244:L70e244:{c.instructions+=7;NFSU2_TR(0x70e244);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e247:{NFSU2_TR(0x70e247);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e24d:{NFSU2_TR(0x70e24d);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70e250:{NFSU2_TR(0x70e250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e251:{NFSU2_TR(0x70e251);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e257:{NFSU2_TR(0x70e257);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e25d:{NFSU2_TR(0x70e25d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ea8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e263ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70e263:L70e263:{c.instructions+=2;NFSU2_TR(0x70e263);
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
B70e266:{NFSU2_TR(0x70e266);
{goto L70e297;}
}
B70e268:L70e268:{c.instructions+=4;NFSU2_TR(0x70e268);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70e26b:{NFSU2_TR(0x70e26b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e26e:{NFSU2_TR(0x70e26e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e274:{NFSU2_TR(0x70e274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e27e;}}
}
B70e276:L70e276:{c.instructions+=2;NFSU2_TR(0x70e276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e27c:{NFSU2_TR(0x70e27c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e20bu);}goto L70e20b;}
}
B70e27e:L70e27e:{c.instructions+=5;NFSU2_TR(0x70e27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e284:{NFSU2_TR(0x70e284);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70e287:{NFSU2_TR(0x70e287);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e288:{NFSU2_TR(0x70e288);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e28e:{NFSU2_TR(0x70e28e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9eac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e294ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70e294:L70e294:{c.instructions+=1;NFSU2_TR(0x70e294);
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
B70e297:L70e297:{c.instructions+=3;NFSU2_TR(0x70e297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70e298:{NFSU2_TR(0x70e298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70e299:{NFSU2_TR(0x70e299);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70e29a:L70e29a:{c.instructions+=10;NFSU2_TR(0x70e29a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e29b:{NFSU2_TR(0x70e29b);
__builtin_memmove((R+20),(R+16),4);
}
B70e29d:{NFSU2_TR(0x70e29d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e29e:{NFSU2_TR(0x70e29e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e29f:{NFSU2_TR(0x70e29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70e2a2:{NFSU2_TR(0x70e2a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e2a4:{NFSU2_TR(0x70e2a4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70e2a6:{NFSU2_TR(0x70e2a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4520ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70e2ac:{NFSU2_TR(0x70e2ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e2ad:{NFSU2_TR(0x70e2ad);
if(r1(R+518)){{goto L70e2cf;}}
}
B70e2af:L70e2af:{c.instructions+=11;NFSU2_TR(0x70e2af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e2b2:{NFSU2_TR(0x70e2b2);
__builtin_memmove((R+12),(R+28),4);
}
B70e2b4:{NFSU2_TR(0x70e2b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B70e2b7:{NFSU2_TR(0x70e2b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70e2ba:{NFSU2_TR(0x70e2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e2bd:{NFSU2_TR(0x70e2bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B70e2c0:{NFSU2_TR(0x70e2c0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70e2c2:{NFSU2_TR(0x70e2c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e2c3:{NFSU2_TR(0x70e2c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e2c4:{NFSU2_TR(0x70e2c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e2c5:{NFSU2_TR(0x70e2c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e2caull));
{goto L70e9b0;}
}
B70e2ca:L70e2ca:{c.instructions+=2;NFSU2_TR(0x70e2ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70e2cd:{NFSU2_TR(0x70e2cd);
{goto L70e2fa;}
}
B70e2cf:L70e2cf:{c.instructions+=12;NFSU2_TR(0x70e2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70e2d2:{NFSU2_TR(0x70e2d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e2d8:{NFSU2_TR(0x70e2d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B70e2db:{NFSU2_TR(0x70e2db);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70e2de:{NFSU2_TR(0x70e2de);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e2e4:{NFSU2_TR(0x70e2e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e2e7:{NFSU2_TR(0x70e2e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B70e2ea:{NFSU2_TR(0x70e2ea);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70e2ec:{NFSU2_TR(0x70e2ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e2ed:{NFSU2_TR(0x70e2ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e2ee:{NFSU2_TR(0x70e2ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e2ef:{NFSU2_TR(0x70e2ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e2f4ull));
TAIL_STATIC(0x707319u,707);
}
B70e2f4:L70e2f4:{c.instructions+=2;NFSU2_TR(0x70e2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e2f7:{NFSU2_TR(0x70e2f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B70e2fa:L70e2fa:{c.instructions+=8;NFSU2_TR(0x70e2fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e300:{NFSU2_TR(0x70e300);
w4(R+0,u32(r1(R+0)));
}
B70e303:{NFSU2_TR(0x70e303);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e309:{NFSU2_TR(0x70e309);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e30c:{NFSU2_TR(0x70e30c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e312:{NFSU2_TR(0x70e312);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e313:{NFSU2_TR(0x70e313);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e314:{NFSU2_TR(0x70e314);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e319ull));
{goto L70e92e;}
}
B70e319:L70e319:{c.instructions+=33;NFSU2_TR(0x70e319);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e31f:{NFSU2_TR(0x70e31f);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B70e323:{NFSU2_TR(0x70e323);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e326:{NFSU2_TR(0x70e326);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e32c:{NFSU2_TR(0x70e32c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e32f:{NFSU2_TR(0x70e32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e335:{NFSU2_TR(0x70e335);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e338:{NFSU2_TR(0x70e338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e33b:{NFSU2_TR(0x70e33b);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B70e33f:{NFSU2_TR(0x70e33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e345:{NFSU2_TR(0x70e345);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e349:{NFSU2_TR(0x70e349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e34f:{NFSU2_TR(0x70e34f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B70e353:{NFSU2_TR(0x70e353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e359:{NFSU2_TR(0x70e359);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e35d:{NFSU2_TR(0x70e35d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e360:{NFSU2_TR(0x70e360);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5ab0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B70e368:{NFSU2_TR(0x70e368);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e36e:{NFSU2_TR(0x70e36e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e372:{NFSU2_TR(0x70e372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e378:{NFSU2_TR(0x70e378);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B70e37c:{NFSU2_TR(0x70e37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e382:{NFSU2_TR(0x70e382);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e386:{NFSU2_TR(0x70e386);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7c5518ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70e38d:{NFSU2_TR(0x70e38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e393:{NFSU2_TR(0x70e393);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B70e396:{NFSU2_TR(0x70e396);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e39c:{NFSU2_TR(0x70e39c);
u8 U[20];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B70e3a3:{NFSU2_TR(0x70e3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e3a6:{NFSU2_TR(0x70e3a6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70e3a8:{NFSU2_TR(0x70e3a8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70e3ac:{NFSU2_TR(0x70e3ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e3ad:{NFSU2_TR(0x70e3ad);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70e3c2;}}
}
B70e3af:L70e3af:{c.instructions+=1;NFSU2_TR(0x70e3af);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c84),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e3b5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70e3b5:L70e3b5:{c.instructions+=4;NFSU2_TR(0x70e3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e3b8:{NFSU2_TR(0x70e3b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70e3bb:{NFSU2_TR(0x70e3bb);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w2(U+8,u16(u32(r2(U+8))&u32(u16(0x0ull))));
s2(u32(r4(U+4)),r2(U+8));
}
B70e3c0:{NFSU2_TR(0x70e3c0);
{goto L70e420;}
}
B70e3c2:L70e3c2:{c.instructions+=2;NFSU2_TR(0x70e3c2);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xaull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70e3c6:{NFSU2_TR(0x70e3c6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70e408;}}
}
B70e3c8:L70e3c8:{c.instructions+=1;NFSU2_TR(0x70e3c8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ca4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e3ceull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70e3ce:L70e3ce:{c.instructions+=26;NFSU2_TR(0x70e3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e3d1:{NFSU2_TR(0x70e3d1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B70e3d3:{NFSU2_TR(0x70e3d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e3d5:{NFSU2_TR(0x70e3d5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70e3d6:{NFSU2_TR(0x70e3d6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70e3d7:{NFSU2_TR(0x70e3d7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70e3d8:{NFSU2_TR(0x70e3d8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70e3d9:{NFSU2_TR(0x70e3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e3dc:{NFSU2_TR(0x70e3dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e3de:{NFSU2_TR(0x70e3de);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B70e3e2:{NFSU2_TR(0x70e3e2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70e3e3:{NFSU2_TR(0x70e3e3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70e3e4:{NFSU2_TR(0x70e3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e3e7:{NFSU2_TR(0x70e3e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e3e9:{NFSU2_TR(0x70e3e9);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B70e3ed:{NFSU2_TR(0x70e3ed);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70e3ee:{NFSU2_TR(0x70e3ee);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70e3ef:{NFSU2_TR(0x70e3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e3f2:{NFSU2_TR(0x70e3f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e3f4:{NFSU2_TR(0x70e3f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B70e3f8:{NFSU2_TR(0x70e3f8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70e3f9:{NFSU2_TR(0x70e3f9);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B70e3fa:{NFSU2_TR(0x70e3fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e3fd:{NFSU2_TR(0x70e3fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70e400:{NFSU2_TR(0x70e400);
u8 U[14];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))&u32(u16(0x0ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B70e406:{NFSU2_TR(0x70e406);
{goto L70e41d;}
}
B70e408:L70e408:{c.instructions+=1;NFSU2_TR(0x70e408);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9d7c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e40eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70e40e:L70e40e:{c.instructions+=6;NFSU2_TR(0x70e40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e411:{NFSU2_TR(0x70e411);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70e414:{NFSU2_TR(0x70e414);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e416:{NFSU2_TR(0x70e416);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e418:{NFSU2_TR(0x70e418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70e419:{NFSU2_TR(0x70e419);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B70e41b:L70e41b:{c.instructions+=1;NFSU2_TR(0x70e41b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L70e41d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e41bu);}goto L70e41b;}
}
B70e41d:L70e41d:{c.instructions+=1;NFSU2_TR(0x70e41d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e420:L70e420:{c.instructions+=3;NFSU2_TR(0x70e420);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e421:{NFSU2_TR(0x70e421);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e422:{NFSU2_TR(0x70e422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e427ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e1eeu);}goto L70e1ee;}
}
B70e427:L70e427:{c.instructions+=7;NFSU2_TR(0x70e427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70e428:{NFSU2_TR(0x70e428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70e429:{NFSU2_TR(0x70e429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70e42a:{NFSU2_TR(0x70e42a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70e42b:{NFSU2_TR(0x70e42b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70e42c:{NFSU2_TR(0x70e42c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70e42d:{NFSU2_TR(0x70e42d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70e42e:L70e42e:{c.instructions+=16;NFSU2_TR(0x70e42e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e42f:{NFSU2_TR(0x70e42f);
__builtin_memmove((R+20),(R+16),4);
}
B70e431:{NFSU2_TR(0x70e431);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e432:{NFSU2_TR(0x70e432);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e433:{NFSU2_TR(0x70e433);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e434:{NFSU2_TR(0x70e434);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70e437:{NFSU2_TR(0x70e437);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e438:{NFSU2_TR(0x70e438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70e43b:{NFSU2_TR(0x70e43b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e43c:{NFSU2_TR(0x70e43c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e43f:{NFSU2_TR(0x70e43f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e440:{NFSU2_TR(0x70e440);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e442:{NFSU2_TR(0x70e442);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e443:{NFSU2_TR(0x70e443);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e446:{NFSU2_TR(0x70e446);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e447:{NFSU2_TR(0x70e447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e44cull));
TAIL_STATIC(0x70de83u,70d);
}
B70e44c:L70e44c:{c.instructions+=5;NFSU2_TR(0x70e44c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e44f:{NFSU2_TR(0x70e44f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x39cull))));
__builtin_memmove((R+28),(U+0),4);
}
B70e455:{NFSU2_TR(0x70e455);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B70e457:{NFSU2_TR(0x70e457);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e458:{NFSU2_TR(0x70e458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e45dull));
TAIL_STATIC(0x70db59u,70d);
}
B70e45d:L70e45d:{c.instructions+=13;NFSU2_TR(0x70e45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e463:{NFSU2_TR(0x70e463);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e466:{NFSU2_TR(0x70e466);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B70e469:{NFSU2_TR(0x70e469);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70e46f:{NFSU2_TR(0x70e46f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70e472:{NFSU2_TR(0x70e472);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B70e474:{NFSU2_TR(0x70e474);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e476:{NFSU2_TR(0x70e476);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70e477:{NFSU2_TR(0x70e477);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70e479:{NFSU2_TR(0x70e479);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70e47c:{NFSU2_TR(0x70e47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e47f:{NFSU2_TR(0x70e47f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e482:{NFSU2_TR(0x70e482);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e5b7;}}
}
B70e488:L70e488:{c.instructions+=2;NFSU2_TR(0x70e488);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e489:{NFSU2_TR(0x70e489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e48eull));
TAIL_STATIC(0x70db16u,70d);
}
B70e48e:L70e48e:{c.instructions+=3;NFSU2_TR(0x70e48e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e48f:{NFSU2_TR(0x70e48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e492:{NFSU2_TR(0x70e492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e497ull));
TAIL_STATIC(0x70db16u,70d);
}
B70e497:L70e497:{c.instructions+=3;NFSU2_TR(0x70e497);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e498:{NFSU2_TR(0x70e498);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e49b:{NFSU2_TR(0x70e49b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e4a0ull));
TAIL_STATIC(0x70db16u,70d);
}
B70e4a0:L70e4a0:{c.instructions+=3;NFSU2_TR(0x70e4a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e4a1:{NFSU2_TR(0x70e4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e4a4:{NFSU2_TR(0x70e4a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e4a9ull));
TAIL_STATIC(0x70db16u,70d);
}
B70e4a9:L70e4a9:{c.instructions+=8;NFSU2_TR(0x70e4a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70e4ac:{NFSU2_TR(0x70e4ac);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B70e4ae:{NFSU2_TR(0x70e4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e4b1:{NFSU2_TR(0x70e4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e4b4:{NFSU2_TR(0x70e4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e4b7:{NFSU2_TR(0x70e4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e4ba:{NFSU2_TR(0x70e4ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70e4bd:{NFSU2_TR(0x70e4bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e4c4:L70e4c4:{c.instructions+=3;NFSU2_TR(0x70e4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e4c7:{NFSU2_TR(0x70e4c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70e4c9:{NFSU2_TR(0x70e4c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e4d4;}}
}
B70e4cb:L70e4cb:{c.instructions+=3;NFSU2_TR(0x70e4cb);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w2(U+0,u16(u32(r2(U+0))&u32(r2(R+0))));
s2(u32(r4(R+28)),r2(U+0));
}
B70e4ce:{NFSU2_TR(0x70e4ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(r2(R+0))));
s2(u32(r4(U+0)),r2(U+4));
}
B70e4d2:{NFSU2_TR(0x70e4d2);
{goto L70e540;}
}
B70e4d4:L70e4d4:{c.instructions+=2;NFSU2_TR(0x70e4d4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70e4d7:{NFSU2_TR(0x70e4d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e4f4;}}
}
B70e4d9:L70e4d9:{c.instructions+=8;NFSU2_TR(0x70e4d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B70e4dd:{NFSU2_TR(0x70e4dd);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+28)),r2(U+0));
}
B70e4e0:{NFSU2_TR(0x70e4e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B70e4e4:{NFSU2_TR(0x70e4e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e4e8:{NFSU2_TR(0x70e4e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70e4ec:{NFSU2_TR(0x70e4ec);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70e4ee:{NFSU2_TR(0x70e4ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70e4f2:{NFSU2_TR(0x70e4f2);
{goto L70e53d;}
}
B70e4f4:L70e4f4:{c.instructions+=2;NFSU2_TR(0x70e4f4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70e4f7:{NFSU2_TR(0x70e4f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e514;}}
}
B70e4f9:L70e4f9:{c.instructions+=8;NFSU2_TR(0x70e4f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B70e4fd:{NFSU2_TR(0x70e4fd);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+28)),r2(U+0));
}
B70e500:{NFSU2_TR(0x70e500);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B70e504:{NFSU2_TR(0x70e504);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e508:{NFSU2_TR(0x70e508);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70e50c:{NFSU2_TR(0x70e50c);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70e50e:{NFSU2_TR(0x70e50e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70e512:{NFSU2_TR(0x70e512);
{goto L70e53d;}
}
B70e514:L70e514:{c.instructions+=2;NFSU2_TR(0x70e514);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70e517:{NFSU2_TR(0x70e517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e540;}}
}
B70e519:L70e519:{c.instructions+=5;NFSU2_TR(0x70e519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e51a:{NFSU2_TR(0x70e51a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e51d:{NFSU2_TR(0x70e51d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e51e:{NFSU2_TR(0x70e51e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e51f:{NFSU2_TR(0x70e51f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e524ull));
TAIL_STATIC(0x70dc4cu,70d);
}
B70e524:L70e524:{c.instructions+=8;NFSU2_TR(0x70e524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e527:{NFSU2_TR(0x70e527);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B70e52b:{NFSU2_TR(0x70e52b);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+28)),r2(U+0));
}
B70e52e:{NFSU2_TR(0x70e52e);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B70e531:{NFSU2_TR(0x70e531);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70e534:{NFSU2_TR(0x70e534);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70e536:{NFSU2_TR(0x70e536);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e53a:{NFSU2_TR(0x70e53a);
w4(R+0,u32(s32(s16(r2(R+4)))));
}
B70e53d:L70e53d:{c.instructions+=1;NFSU2_TR(0x70e53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e540:L70e540:{c.instructions+=3;NFSU2_TR(0x70e540);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B70e543:{NFSU2_TR(0x70e543);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70e546:{NFSU2_TR(0x70e546);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e4c4u);}goto L70e4c4;}}
}
B70e54c:L70e54c:{c.instructions+=28;NFSU2_TR(0x70e54c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e54f:{NFSU2_TR(0x70e54f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e551:{NFSU2_TR(0x70e551);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70e553:{NFSU2_TR(0x70e553);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B70e556:{NFSU2_TR(0x70e556);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70e558:{NFSU2_TR(0x70e558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e55e:{NFSU2_TR(0x70e55e);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70e562:{NFSU2_TR(0x70e562);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B70e566:{NFSU2_TR(0x70e566);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70e569:{NFSU2_TR(0x70e569);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70e56b:{NFSU2_TR(0x70e56b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B70e56e:{NFSU2_TR(0x70e56e);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70e572:{NFSU2_TR(0x70e572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e578:{NFSU2_TR(0x70e578);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B70e57c:{NFSU2_TR(0x70e57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B70e57f:{NFSU2_TR(0x70e57f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B70e582:{NFSU2_TR(0x70e582);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),2);
s2(u32(r4(U+4)),r2(U+8));
}
B70e586:{NFSU2_TR(0x70e586);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e58c:{NFSU2_TR(0x70e58c);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B70e590:{NFSU2_TR(0x70e590);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70e593:{NFSU2_TR(0x70e593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e599:{NFSU2_TR(0x70e599);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B70e59d:{NFSU2_TR(0x70e59d);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),2);
s2(u32(r4(U+8)),r2(U+12));
}
B70e5a2:{NFSU2_TR(0x70e5a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e5a6:{NFSU2_TR(0x70e5a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e5aa:{NFSU2_TR(0x70e5aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e5ae:{NFSU2_TR(0x70e5ae);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e5b2:{NFSU2_TR(0x70e5b2);
{goto L70e697;}
}
B70e5b7:L70e5b7:{c.instructions+=4;NFSU2_TR(0x70e5b7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5b9:{NFSU2_TR(0x70e5b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70e5ba:{NFSU2_TR(0x70e5ba);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70e5bc:{NFSU2_TR(0x70e5bc);
if(r1(R+518)){{goto L70e63b;}}
}
B70e5be:L70e5be:{c.instructions+=2;NFSU2_TR(0x70e5be);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70e5bf:{NFSU2_TR(0x70e5bf);
if(r1(R+518)){{goto L70e631;}}
}
B70e5c1:L70e5c1:{c.instructions+=2;NFSU2_TR(0x70e5c1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70e5c2:{NFSU2_TR(0x70e5c2);
if(r1(R+518)){{goto L70e627;}}
}
B70e5c4:L70e5c4:{c.instructions+=2;NFSU2_TR(0x70e5c4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70e5c6:{NFSU2_TR(0x70e5c6);
if(r1(R+518)){{goto L70e609;}}
}
B70e5c8:L70e5c8:{c.instructions+=2;NFSU2_TR(0x70e5c8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70e5ca:{NFSU2_TR(0x70e5ca);
if(r1(R+518)){{goto L70e5ef;}}
}
B70e5cc:L70e5cc:{c.instructions+=2;NFSU2_TR(0x70e5cc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70e5cd:{NFSU2_TR(0x70e5cd);
if(r1(R+518)){{goto L70e5d5;}}
}
B70e5cf:L70e5cf:{c.instructions+=3;NFSU2_TR(0x70e5cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e5d1:{NFSU2_TR(0x70e5d1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70e5d3:{NFSU2_TR(0x70e5d3);
{goto L70e651;}
}
B70e5d5:L70e5d5:{c.instructions+=7;NFSU2_TR(0x70e5d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e5d8:{NFSU2_TR(0x70e5d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5d9:{NFSU2_TR(0x70e5d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5da:{NFSU2_TR(0x70e5da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5db:{NFSU2_TR(0x70e5db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5dc:{NFSU2_TR(0x70e5dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5dd:{NFSU2_TR(0x70e5dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e5e2ull));
TAIL_STATIC(0x70de83u,70d);
}
B70e5e2:L70e5e2:{c.instructions+=4;NFSU2_TR(0x70e5e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70e5e6:{NFSU2_TR(0x70e5e6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B70e5ea:{NFSU2_TR(0x70e5ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B70e5ed:{NFSU2_TR(0x70e5ed);
{goto L70e651;}
}
B70e5ef:L70e5ef:{c.instructions+=7;NFSU2_TR(0x70e5ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e5f2:{NFSU2_TR(0x70e5f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5f3:{NFSU2_TR(0x70e5f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5f4:{NFSU2_TR(0x70e5f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5f5:{NFSU2_TR(0x70e5f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5f6:{NFSU2_TR(0x70e5f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e5f7:{NFSU2_TR(0x70e5f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e5fcull));
TAIL_STATIC(0x70de83u,70d);
}
B70e5fc:L70e5fc:{c.instructions+=4;NFSU2_TR(0x70e5fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70e600:{NFSU2_TR(0x70e600);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B70e604:{NFSU2_TR(0x70e604);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B70e607:{NFSU2_TR(0x70e607);
{goto L70e651;}
}
B70e609:L70e609:{c.instructions+=7;NFSU2_TR(0x70e609);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e60c:{NFSU2_TR(0x70e60c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e60d:{NFSU2_TR(0x70e60d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e60e:{NFSU2_TR(0x70e60e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e60f:{NFSU2_TR(0x70e60f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e610:{NFSU2_TR(0x70e610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e611:{NFSU2_TR(0x70e611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e616ull));
TAIL_STATIC(0x70de83u,70d);
}
B70e616:L70e616:{c.instructions+=5;NFSU2_TR(0x70e616);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e618:{NFSU2_TR(0x70e618);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e61b:{NFSU2_TR(0x70e61b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e61c:{NFSU2_TR(0x70e61c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e61d:{NFSU2_TR(0x70e61d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e622ull));
TAIL_STATIC(0x70dc4cu,70d);
}
B70e622:L70e622:{c.instructions+=2;NFSU2_TR(0x70e622);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70e625:{NFSU2_TR(0x70e625);
{goto L70e649;}
}
B70e627:L70e627:{c.instructions+=3;NFSU2_TR(0x70e627);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70e62b:{NFSU2_TR(0x70e62b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B70e62f:{NFSU2_TR(0x70e62f);
{goto L70e651;}
}
B70e631:L70e631:{c.instructions+=3;NFSU2_TR(0x70e631);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70e635:{NFSU2_TR(0x70e635);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B70e639:{NFSU2_TR(0x70e639);
{goto L70e651;}
}
B70e63b:L70e63b:{c.instructions+=5;NFSU2_TR(0x70e63b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e63c:{NFSU2_TR(0x70e63c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e63f:{NFSU2_TR(0x70e63f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e640:{NFSU2_TR(0x70e640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e641:{NFSU2_TR(0x70e641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e646ull));
TAIL_STATIC(0x70dc4cu,70d);
}
B70e646:L70e646:{c.instructions+=1;NFSU2_TR(0x70e646);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70e649:L70e649:{c.instructions+=2;NFSU2_TR(0x70e649);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70e64d:{NFSU2_TR(0x70e64d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B70e651:L70e651:{c.instructions+=14;NFSU2_TR(0x70e651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e657:{NFSU2_TR(0x70e657);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B70e65b:{NFSU2_TR(0x70e65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B70e65e:{NFSU2_TR(0x70e65e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70e664:{NFSU2_TR(0x70e664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B70e666:{NFSU2_TR(0x70e666);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B70e66a:{NFSU2_TR(0x70e66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e670:{NFSU2_TR(0x70e670);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B70e674:{NFSU2_TR(0x70e674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B70e677:{NFSU2_TR(0x70e677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70e679:{NFSU2_TR(0x70e679);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e67b:{NFSU2_TR(0x70e67b);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B70e680:{NFSU2_TR(0x70e680);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x26ull))));
}
B70e683:{NFSU2_TR(0x70e683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70e684:L70e684:{c.instructions+=7;NFSU2_TR(0x70e684);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e687:{NFSU2_TR(0x70e687);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70e68b:{NFSU2_TR(0x70e68b);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+24)),r2(U+0));
}
B70e68e:{NFSU2_TR(0x70e68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e691:{NFSU2_TR(0x70e691);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B70e694:{NFSU2_TR(0x70e694);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70e695:{NFSU2_TR(0x70e695);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e684u);}goto L70e684;}}
}
B70e697:L70e697:{c.instructions+=5;NFSU2_TR(0x70e697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70e698:{NFSU2_TR(0x70e698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70e699:{NFSU2_TR(0x70e699);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70e69a:{NFSU2_TR(0x70e69a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70e69b:{NFSU2_TR(0x70e69b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70e69c:L70e69c:{c.instructions+=10;NFSU2_TR(0x70e69c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e69d:{NFSU2_TR(0x70e69d);
__builtin_memmove((R+20),(R+16),4);
}
B70e69f:{NFSU2_TR(0x70e69f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e6a0:{NFSU2_TR(0x70e6a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e6a1:{NFSU2_TR(0x70e6a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e6a2:{NFSU2_TR(0x70e6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70e6a5:{NFSU2_TR(0x70e6a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e6a6:{NFSU2_TR(0x70e6a6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70e6a8:{NFSU2_TR(0x70e6a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70e6ae:{NFSU2_TR(0x70e6ae);
if(r1(R+518)){{goto L70e6f4;}}
}
B70e6b0:L70e6b0:{c.instructions+=3;NFSU2_TR(0x70e6b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70e6b4:{NFSU2_TR(0x70e6b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70e6ba:{NFSU2_TR(0x70e6ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70e6da;}}
}
B70e6bc:L70e6bc:{c.instructions+=2;NFSU2_TR(0x70e6bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70e6c2:{NFSU2_TR(0x70e6c2);
if(r1(R+518)){{goto L70e6cc;}}
}
B70e6c4:L70e6c4:{c.instructions+=4;NFSU2_TR(0x70e6c4);
__builtin_memmove((R+4),(R+0),1);
}
B70e6c6:{NFSU2_TR(0x70e6c6);
w1(R+4,shr<u8>(r1(R+4),u64(u32(0x1ull))));
}
B70e6c8:{NFSU2_TR(0x70e6c8);
w1(R+0,u8(u32(r1(R+0))-u32(r1(R+4))));
}
B70e6ca:{NFSU2_TR(0x70e6ca);
{goto L70e6da;}
}
B70e6cc:L70e6cc:{c.instructions+=5;NFSU2_TR(0x70e6cc);
w4(R+4,u32(r1(R+0)));
}
B70e6cf:{NFSU2_TR(0x70e6cf);
w4(R+8,u32(0x100ull));
}
B70e6d4:{NFSU2_TR(0x70e6d4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B70e6d6:{NFSU2_TR(0x70e6d6);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70e6d8:{NFSU2_TR(0x70e6d8);
w1(R+0,u8(u32(r1(R+0))+u32(r1(R+8))));
}
B70e6da:L70e6da:{c.instructions+=5;NFSU2_TR(0x70e6da);
w4(R+0,u32(r1(R+0)));
}
B70e6dd:{NFSU2_TR(0x70e6dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e6de:{NFSU2_TR(0x70e6de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e6e4:{NFSU2_TR(0x70e6e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e6e5:{NFSU2_TR(0x70e6e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e6eaull));
TAIL_STATIC(0x70d9e8u,70d);
}
B70e6ea:L70e6ea:{c.instructions+=4;NFSU2_TR(0x70e6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70e6eb:{NFSU2_TR(0x70e6eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70e6ec:{NFSU2_TR(0x70e6ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e6f2:{NFSU2_TR(0x70e6f2);
{goto L70e6fa;}
}
B70e6f4:L70e6f4:{c.instructions+=1;NFSU2_TR(0x70e6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e6fa:L70e6fa:{c.instructions+=2;NFSU2_TR(0x70e6fa);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B70e701:{NFSU2_TR(0x70e701);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e70c;}}
}
B70e703:L70e703:{c.instructions+=2;NFSU2_TR(0x70e703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e70a:{NFSU2_TR(0x70e70a);
{goto L70e71b;}
}
B70e70c:L70e70c:{c.instructions+=4;NFSU2_TR(0x70e70c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e70f:{NFSU2_TR(0x70e70f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e712:{NFSU2_TR(0x70e712);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e713:{NFSU2_TR(0x70e713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e718ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e42eu);}goto L70e42e;}
}
B70e718:L70e718:{c.instructions+=1;NFSU2_TR(0x70e718);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70e71b:L70e71b:{c.instructions+=3;NFSU2_TR(0x70e71b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70e721:{NFSU2_TR(0x70e721);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e727:{NFSU2_TR(0x70e727);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e735;}}
}
B70e729:L70e729:{c.instructions+=3;NFSU2_TR(0x70e729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e730:{NFSU2_TR(0x70e730);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e733:{NFSU2_TR(0x70e733);
{goto L70e742;}
}
B70e735:L70e735:{c.instructions+=3;NFSU2_TR(0x70e735);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70e738:{NFSU2_TR(0x70e738);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e73f:{NFSU2_TR(0x70e73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e742:L70e742:{c.instructions+=29;NFSU2_TR(0x70e742);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70e745:{NFSU2_TR(0x70e745);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e74b:{NFSU2_TR(0x70e74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e751:{NFSU2_TR(0x70e751);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e754:{NFSU2_TR(0x70e754);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70e757:{NFSU2_TR(0x70e757);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e75a:{NFSU2_TR(0x70e75a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70e75d:{NFSU2_TR(0x70e75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70e763:{NFSU2_TR(0x70e763);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B70e766:{NFSU2_TR(0x70e766);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70e768:{NFSU2_TR(0x70e768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e76b:{NFSU2_TR(0x70e76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e76e:{NFSU2_TR(0x70e76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e771:{NFSU2_TR(0x70e771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e774:{NFSU2_TR(0x70e774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e77a:{NFSU2_TR(0x70e77a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e77c:{NFSU2_TR(0x70e77c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e77f:{NFSU2_TR(0x70e77f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70e782:{NFSU2_TR(0x70e782);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e785:{NFSU2_TR(0x70e785);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70e787:{NFSU2_TR(0x70e787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e78d:{NFSU2_TR(0x70e78d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e793:{NFSU2_TR(0x70e793);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e794:{NFSU2_TR(0x70e794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e79b:{NFSU2_TR(0x70e79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e7a5:{NFSU2_TR(0x70e7a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e7ab:{NFSU2_TR(0x70e7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e7ae:{NFSU2_TR(0x70e7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e7b4:{NFSU2_TR(0x70e7b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e7b9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e29au);}goto L70e29a;}
}
B70e7b9:L70e7b9:{c.instructions+=12;NFSU2_TR(0x70e7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e7bf:{NFSU2_TR(0x70e7bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e7c3:{NFSU2_TR(0x70e7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e7c7:{NFSU2_TR(0x70e7c7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e7c9:{NFSU2_TR(0x70e7c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e7cc:{NFSU2_TR(0x70e7cc);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70e7d0:{NFSU2_TR(0x70e7d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e7d3:{NFSU2_TR(0x70e7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e7d9:{NFSU2_TR(0x70e7d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e7df:{NFSU2_TR(0x70e7df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e7e0:{NFSU2_TR(0x70e7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e7e6:{NFSU2_TR(0x70e7e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e7ebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e29au);}goto L70e29a;}
}
B70e7eb:L70e7eb:{c.instructions+=17;NFSU2_TR(0x70e7eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e7ee:{NFSU2_TR(0x70e7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e7f4:{NFSU2_TR(0x70e7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0xfffffff8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e7f8:{NFSU2_TR(0x70e7f8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70e7fb:{NFSU2_TR(0x70e7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70e7fe:{NFSU2_TR(0x70e7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e801:{NFSU2_TR(0x70e801);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e804:{NFSU2_TR(0x70e804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e80a:{NFSU2_TR(0x70e80a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e80c:{NFSU2_TR(0x70e80c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e80f:{NFSU2_TR(0x70e80f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70e811:{NFSU2_TR(0x70e811);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e814:{NFSU2_TR(0x70e814);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e81a:{NFSU2_TR(0x70e81a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e820:{NFSU2_TR(0x70e820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e821:{NFSU2_TR(0x70e821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e827:{NFSU2_TR(0x70e827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e82cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e29au);}goto L70e29a;}
}
B70e82c:L70e82c:{c.instructions+=13;NFSU2_TR(0x70e82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e832:{NFSU2_TR(0x70e832);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e836:{NFSU2_TR(0x70e836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70e83a:{NFSU2_TR(0x70e83a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e83c:{NFSU2_TR(0x70e83c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e83f:{NFSU2_TR(0x70e83f);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70e843:{NFSU2_TR(0x70e843);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e846:{NFSU2_TR(0x70e846);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e84c:{NFSU2_TR(0x70e84c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e852:{NFSU2_TR(0x70e852);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e853:{NFSU2_TR(0x70e853);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e854:{NFSU2_TR(0x70e854);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e85a:{NFSU2_TR(0x70e85a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e85full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e29au);}goto L70e29a;}
}
B70e85f:L70e85f:{c.instructions+=29;NFSU2_TR(0x70e85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e862:{NFSU2_TR(0x70e862);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e868:{NFSU2_TR(0x70e868);
__builtin_memmove((R+0),(R+28),4);
}
B70e86a:{NFSU2_TR(0x70e86a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70e86d:{NFSU2_TR(0x70e86d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B70e870:{NFSU2_TR(0x70e870);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70e873:{NFSU2_TR(0x70e873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e879:{NFSU2_TR(0x70e879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e87c:{NFSU2_TR(0x70e87c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e87f:{NFSU2_TR(0x70e87f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e882:{NFSU2_TR(0x70e882);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70e885:{NFSU2_TR(0x70e885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70e88b:{NFSU2_TR(0x70e88b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e88d:{NFSU2_TR(0x70e88d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e890:{NFSU2_TR(0x70e890);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70e892:{NFSU2_TR(0x70e892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e895:{NFSU2_TR(0x70e895);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e89b:{NFSU2_TR(0x70e89b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70e89d:{NFSU2_TR(0x70e89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e8a3:{NFSU2_TR(0x70e8a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e8a9:{NFSU2_TR(0x70e8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e8af:{NFSU2_TR(0x70e8af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e8b5:{NFSU2_TR(0x70e8b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e8b6:{NFSU2_TR(0x70e8b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e8b7:{NFSU2_TR(0x70e8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e8be:{NFSU2_TR(0x70e8be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e8c8:{NFSU2_TR(0x70e8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e8ce:{NFSU2_TR(0x70e8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e8d5:{NFSU2_TR(0x70e8d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e8daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e29au);}goto L70e29a;}
}
B70e8da:L70e8da:{c.instructions+=18;NFSU2_TR(0x70e8da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e8e0:{NFSU2_TR(0x70e8e0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70e8e2:{NFSU2_TR(0x70e8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e8e8:{NFSU2_TR(0x70e8e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e8ee:{NFSU2_TR(0x70e8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e8f4:{NFSU2_TR(0x70e8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e8f7:{NFSU2_TR(0x70e8f7);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70e8fb:{NFSU2_TR(0x70e8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70e901:{NFSU2_TR(0x70e901);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e903:{NFSU2_TR(0x70e903);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70e906:{NFSU2_TR(0x70e906);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70e909:{NFSU2_TR(0x70e909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e90c:{NFSU2_TR(0x70e90c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70e912:{NFSU2_TR(0x70e912);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e913:{NFSU2_TR(0x70e913);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e914:{NFSU2_TR(0x70e914);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e91a:{NFSU2_TR(0x70e91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e921:{NFSU2_TR(0x70e921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70e926ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70e29au);}goto L70e29a;}
}
B70e926:L70e926:{c.instructions+=6;NFSU2_TR(0x70e926);
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
B70e929:{NFSU2_TR(0x70e929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70e92a:{NFSU2_TR(0x70e92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70e92b:{NFSU2_TR(0x70e92b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70e92c:{NFSU2_TR(0x70e92c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70e92d:{NFSU2_TR(0x70e92d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70e92e:L70e92e:{c.instructions+=14;NFSU2_TR(0x70e92e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e92f:{NFSU2_TR(0x70e92f);
__builtin_memmove((R+20),(R+16),4);
}
B70e931:{NFSU2_TR(0x70e931);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e934:{NFSU2_TR(0x70e934);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e935:{NFSU2_TR(0x70e935);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e936:{NFSU2_TR(0x70e936);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70e939:{NFSU2_TR(0x70e939);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e93c:{NFSU2_TR(0x70e93c);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5ab0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B70e943:{NFSU2_TR(0x70e943);
w2(R+0,u16(r1(R+12)));
}
B70e947:{NFSU2_TR(0x70e947);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70e949:{NFSU2_TR(0x70e949);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B70e94d:{NFSU2_TR(0x70e94d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e94e:{NFSU2_TR(0x70e94e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B70e952:{NFSU2_TR(0x70e952);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e95c;}}
}
B70e954:L70e954:{c.instructions+=3;NFSU2_TR(0x70e954);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B70e958:{NFSU2_TR(0x70e958);
w1(R+4,u8(0x1ull));
}
B70e95a:{NFSU2_TR(0x70e95a);
{goto L70e95f;}
}
B70e95c:L70e95c:{c.instructions+=1;NFSU2_TR(0x70e95c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B70e95f:L70e95f:{c.instructions+=3;NFSU2_TR(0x70e95f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e962:{NFSU2_TR(0x70e962);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B70e966:{NFSU2_TR(0x70e966);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e970;}}
}
B70e968:L70e968:{c.instructions+=3;NFSU2_TR(0x70e968);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70e96c:{NFSU2_TR(0x70e96c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B70e96e:{NFSU2_TR(0x70e96e);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B70e970:L70e970:{c.instructions+=3;NFSU2_TR(0x70e970);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70e972:{NFSU2_TR(0x70e972);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70e975:{NFSU2_TR(0x70e975);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e97e;}}
}
B70e977:L70e977:{c.instructions+=2;NFSU2_TR(0x70e977);
w4(R+0,u32(r1(R+12)));
}
B70e97a:{NFSU2_TR(0x70e97a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(s32(s16(r2(U+8)))));
}
B70e97e:L70e97e:{c.instructions+=2;NFSU2_TR(0x70e97e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B70e981:{NFSU2_TR(0x70e981);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70e98f;}}
}
B70e983:L70e983:{c.instructions+=5;NFSU2_TR(0x70e983);
w4(R+0,u32(r2(R+8)));
}
B70e986:{NFSU2_TR(0x70e986);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B70e989:{NFSU2_TR(0x70e989);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70e98b:{NFSU2_TR(0x70e98b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70e98d:{NFSU2_TR(0x70e98d);
__builtin_memmove((R+8),(R+0),4);
}
B70e98f:L70e98f:{c.instructions+=14;NFSU2_TR(0x70e98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e992:{NFSU2_TR(0x70e992);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70e995:{NFSU2_TR(0x70e995);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70e998:{NFSU2_TR(0x70e998);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70e99a:{NFSU2_TR(0x70e99a);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w1(R+512,carry<u16>(r2(U+0),r2(R+8)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w1(R+523,scarry<u16>(r2(U+0),r2(R+8)));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(U+0,u16(u32(r2(U+0))+u32(r2(R+8))));
s2(u32(r4(R+4)),r2(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w2(U+2,u16(u32(r2(U+0))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70e99d:{NFSU2_TR(0x70e99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70e9a0:{NFSU2_TR(0x70e9a0);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B70e9a4:{NFSU2_TR(0x70e9a4);
w4(R+8,u32(r1(R+12)));
}
B70e9a7:{NFSU2_TR(0x70e9a7);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B70e9ab:{NFSU2_TR(0x70e9ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70e9ac:{NFSU2_TR(0x70e9ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70e9ad:{NFSU2_TR(0x70e9ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70e9ae:{NFSU2_TR(0x70e9ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70e9af:{NFSU2_TR(0x70e9af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70e9b0:L70e9b0:{c.instructions+=15;NFSU2_TR(0x70e9b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e9b1:{NFSU2_TR(0x70e9b1);
__builtin_memmove((R+20),(R+16),4);
}
B70e9b3:{NFSU2_TR(0x70e9b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B70e9b6:{NFSU2_TR(0x70e9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70e9b9:{NFSU2_TR(0x70e9b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e9ba:{NFSU2_TR(0x70e9ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70e9bd:{NFSU2_TR(0x70e9bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x4524ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70e9c4:{NFSU2_TR(0x70e9c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70e9c6:{NFSU2_TR(0x70e9c6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70e9c8:{NFSU2_TR(0x70e9c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e9c9:{NFSU2_TR(0x70e9c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70e9ca:{NFSU2_TR(0x70e9ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x190ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70e9d0:{NFSU2_TR(0x70e9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70e9d7:{NFSU2_TR(0x70e9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e9da:{NFSU2_TR(0x70e9da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70e9e6;}}
}
B70e9dc:L70e9dc:{c.instructions+=4;NFSU2_TR(0x70e9dc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70e9dd:{NFSU2_TR(0x70e9dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B70e9df:{NFSU2_TR(0x70e9df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e9e1:{NFSU2_TR(0x70e9e1);
{goto L70eb61;}
}
B70e9e6:L70e9e6:{c.instructions+=14;NFSU2_TR(0x70e9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B70e9e8:{NFSU2_TR(0x70e9e8);
u8 U[12];
w4(U+0,u32(u32(u32(0xa2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B70e9ef:{NFSU2_TR(0x70e9ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70e9f2:{NFSU2_TR(0x70e9f2);
u8 U[12];
w4(U+0,u32(u32(u32(0x30fcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70e9f9:{NFSU2_TR(0x70e9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70e9fc:{NFSU2_TR(0x70e9fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70e9fe:{NFSU2_TR(0x70e9fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70e9ff:{NFSU2_TR(0x70e9ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B70ea01:{NFSU2_TR(0x70ea01);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70ea04:{NFSU2_TR(0x70ea04);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B70ea06:{NFSU2_TR(0x70ea06);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70ea07:{NFSU2_TR(0x70ea07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B70ea0a:{NFSU2_TR(0x70ea0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B70ea0d:{NFSU2_TR(0x70ea0d);
if(r1(R+512)){{goto L70ea18;}}
}
B70ea0f:L70ea0f:{c.instructions+=4;NFSU2_TR(0x70ea0f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffaull))));
}
B70ea12:{NFSU2_TR(0x70ea12);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B70ea14:{NFSU2_TR(0x70ea14);
__builtin_memmove((R+8),(R+0),4);
}
B70ea16:{NFSU2_TR(0x70ea16);
{goto L70ea28;}
}
B70ea18:L70ea18:{c.instructions+=6;NFSU2_TR(0x70ea18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ea1b:{NFSU2_TR(0x70ea1b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+8,u32(r1(U+0)));
}
B70ea1e:{NFSU2_TR(0x70ea1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ea21:{NFSU2_TR(0x70ea21);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B70ea23:{NFSU2_TR(0x70ea23);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B70ea26:{NFSU2_TR(0x70ea26);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B70ea28:L70ea28:{c.instructions+=7;NFSU2_TR(0x70ea28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ea2b:{NFSU2_TR(0x70ea2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70ea2e:{NFSU2_TR(0x70ea2e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(r2(U+0)));
}
B70ea31:{NFSU2_TR(0x70ea31);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B70ea34:{NFSU2_TR(0x70ea34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70ea36:{NFSU2_TR(0x70ea36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ea39:{NFSU2_TR(0x70ea39);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70ea6b;}}
}
B70ea3b:L70ea3b:{c.instructions+=16;NFSU2_TR(0x70ea3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ea3e:{NFSU2_TR(0x70ea3e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B70ea41:{NFSU2_TR(0x70ea41);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70ea45:{NFSU2_TR(0x70ea45);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70ea48:{NFSU2_TR(0x70ea48);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70ea4a:{NFSU2_TR(0x70ea4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70ea4e:{NFSU2_TR(0x70ea4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70ea51:{NFSU2_TR(0x70ea51);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70ea53:{NFSU2_TR(0x70ea53);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70ea57:{NFSU2_TR(0x70ea57);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70ea5a:{NFSU2_TR(0x70ea5a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70ea5c:{NFSU2_TR(0x70ea5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ea5f:{NFSU2_TR(0x70ea5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70ea62:{NFSU2_TR(0x70ea62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x20ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B70ea65:{NFSU2_TR(0x70ea65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ea68:{NFSU2_TR(0x70ea68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ea6b:L70ea6b:{c.instructions+=4;NFSU2_TR(0x70ea6b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70ea6d:{NFSU2_TR(0x70ea6d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+0),(U+0),2);
}
B70ea70:{NFSU2_TR(0x70ea70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70ea72:{NFSU2_TR(0x70ea72);
if(r1(R+518)){{goto L70ea7b;}}
}
B70ea74:L70ea74:{c.instructions+=3;NFSU2_TR(0x70ea74);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ea76:{NFSU2_TR(0x70ea76);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B70ea79:{NFSU2_TR(0x70ea79);
{goto L70eac1;}
}
B70ea7b:L70ea7b:{c.instructions+=5;NFSU2_TR(0x70ea7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ea7e:{NFSU2_TR(0x70ea7e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3eull))));
}
B70ea81:{NFSU2_TR(0x70ea81);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff01ull))));
}
B70ea87:{NFSU2_TR(0x70ea87);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B70ea89:{NFSU2_TR(0x70ea89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ea8c:L70ea8c:{c.instructions+=2;NFSU2_TR(0x70ea8c);
__builtin_memmove((R+0),(R+24),4);
}
B70ea8e:{NFSU2_TR(0x70ea8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ea93ull));
TAIL_STATIC(0x70d99eu,70d);
}
B70ea93:L70ea93:{c.instructions+=3;NFSU2_TR(0x70ea93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70ea95:{NFSU2_TR(0x70ea95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ea98:{NFSU2_TR(0x70ea98);
if(r1(R+518)){{goto L70eaa8;}}
}
B70ea9a:L70ea9a:{c.instructions+=5;NFSU2_TR(0x70ea9a);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ea9c:{NFSU2_TR(0x70ea9c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70ea9f:{NFSU2_TR(0x70ea9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70eaa2:{NFSU2_TR(0x70eaa2);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B70eaa6:{NFSU2_TR(0x70eaa6);
{goto L70eab3;}
}
B70eaa8:L70eaa8:{c.instructions+=4;NFSU2_TR(0x70eaa8);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70eaaa:{NFSU2_TR(0x70eaaa);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70eaad:{NFSU2_TR(0x70eaad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70eab0:{NFSU2_TR(0x70eab0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70eab3:L70eab3:{c.instructions+=3;NFSU2_TR(0x70eab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70eab6:{NFSU2_TR(0x70eab6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70eaba:{NFSU2_TR(0x70eaba);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ea8cu);}goto L70ea8c;}}
}
B70eabc:L70eabc:{c.instructions+=2;NFSU2_TR(0x70eabc);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70eabe:{NFSU2_TR(0x70eabe);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70eac1:L70eac1:{c.instructions+=5;NFSU2_TR(0x70eac1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c58f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B70eac8:{NFSU2_TR(0x70eac8);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70eaca:{NFSU2_TR(0x70eaca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70eacb:{NFSU2_TR(0x70eacb);
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
B70eacd:{NFSU2_TR(0x70eacd);
if(r1(R+518)){{goto L70ee24;}}
}
B70ead3:L70ead3:{c.instructions+=2;NFSU2_TR(0x70ead3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70ead5:{NFSU2_TR(0x70ead5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70eb2a;}}
}
B70ead7:L70ead7:{c.instructions+=4;NFSU2_TR(0x70ead7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ead9:{NFSU2_TR(0x70ead9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70eada:{NFSU2_TR(0x70eada);
__builtin_memmove((R+0),(R+24),4);
}
B70eadc:{NFSU2_TR(0x70eadc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70eae1ull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70eae1:L70eae1:{c.instructions+=3;NFSU2_TR(0x70eae1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70eae2:{NFSU2_TR(0x70eae2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70eae5:{NFSU2_TR(0x70eae5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70eaf6;}}
}
B70eae7:L70eae7:{c.instructions+=4;NFSU2_TR(0x70eae7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70eae9:{NFSU2_TR(0x70eae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70eaea:{NFSU2_TR(0x70eaea);
__builtin_memmove((R+0),(R+24),4);
}
B70eaec:{NFSU2_TR(0x70eaec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70eaf1ull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70eaf1:L70eaf1:{c.instructions+=2;NFSU2_TR(0x70eaf1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B70eaf4:{NFSU2_TR(0x70eaf4);
{goto L70eb20;}
}
B70eaf6:L70eaf6:{c.instructions+=2;NFSU2_TR(0x70eaf6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70eaf9:{NFSU2_TR(0x70eaf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70eb20;}}
}
B70eafb:L70eafb:{c.instructions+=2;NFSU2_TR(0x70eafb);
__builtin_memmove((R+0),(R+24),4);
}
B70eafd:{NFSU2_TR(0x70eafd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70eb02ull));
TAIL_STATIC(0x70d99eu,70d);
}
B70eb02:L70eb02:{c.instructions+=3;NFSU2_TR(0x70eb02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70eb04:{NFSU2_TR(0x70eb04);
__builtin_memmove((R+0),(R+24),4);
}
B70eb06:{NFSU2_TR(0x70eb06);
if(r1(R+518)){{goto L70eb15;}}
}
B70eb08:L70eb08:{c.instructions+=3;NFSU2_TR(0x70eb08);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70eb0a:{NFSU2_TR(0x70eb0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70eb0b:{NFSU2_TR(0x70eb0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70eb10ull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70eb10:L70eb10:{c.instructions+=2;NFSU2_TR(0x70eb10);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
}
B70eb13:{NFSU2_TR(0x70eb13);
{goto L70eb20;}
}
B70eb15:L70eb15:{c.instructions+=3;NFSU2_TR(0x70eb15);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70eb17:{NFSU2_TR(0x70eb17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70eb18:{NFSU2_TR(0x70eb18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70eb1dull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70eb1d:L70eb1d:{c.instructions+=1;NFSU2_TR(0x70eb1d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
}
B70eb20:L70eb20:{c.instructions+=5;NFSU2_TR(0x70eb20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70eb23:{NFSU2_TR(0x70eb23);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70eb24:{NFSU2_TR(0x70eb24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B70eb26:{NFSU2_TR(0x70eb26);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70eb28:{NFSU2_TR(0x70eb28);
{goto L70eb5e;}
}
B70eb2a:L70eb2a:{c.instructions+=2;NFSU2_TR(0x70eb2a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70eb2d:{NFSU2_TR(0x70eb2d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70eb40;}}
}
B70eb2f:L70eb2f:{c.instructions+=2;NFSU2_TR(0x70eb2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70eb32:{NFSU2_TR(0x70eb32);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70eb37;}}
}
B70eb34:L70eb34:{c.instructions+=1;NFSU2_TR(0x70eb34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B70eb37:L70eb37:{c.instructions+=2;NFSU2_TR(0x70eb37);
__builtin_memmove((R+0),(R+24),4);
}
B70eb39:{NFSU2_TR(0x70eb39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70eb3eull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70eb3e:L70eb3e:{c.instructions+=1;NFSU2_TR(0x70eb3e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70eb40:L70eb40:{c.instructions+=2;NFSU2_TR(0x70eb40);
__builtin_memmove((R+0),(R+24),4);
}
B70eb42:{NFSU2_TR(0x70eb42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70eb47ull));
TAIL_STATIC(0x70d99eu,70d);
}
B70eb47:L70eb47:{c.instructions+=10;NFSU2_TR(0x70eb47);
__builtin_memmove((R+4),(R+0),4);
}
B70eb49:{NFSU2_TR(0x70eb49);
w4(R+4,u32(0-u32(r4(R+4))));
}
B70eb4b:{NFSU2_TR(0x70eb4b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+28))));
}
B70eb4d:{NFSU2_TR(0x70eb4d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70eb4f:{NFSU2_TR(0x70eb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70eb52:{NFSU2_TR(0x70eb52);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B70eb55:{NFSU2_TR(0x70eb55);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70eb57:{NFSU2_TR(0x70eb57);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70eb5a:{NFSU2_TR(0x70eb5a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B70eb5d:{NFSU2_TR(0x70eb5d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70eb5e:L70eb5e:{c.instructions+=1;NFSU2_TR(0x70eb5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70eb61:L70eb61:{c.instructions+=5;NFSU2_TR(0x70eb61);
u8 U[12];
w4(U+0,u32(u32(u32(0x452cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70eb68:{NFSU2_TR(0x70eb68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B70eb6a:{NFSU2_TR(0x70eb6a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70eb6c:{NFSU2_TR(0x70eb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70eb6f:{NFSU2_TR(0x70eb6f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70eb79;}}
}
B70eb71:L70eb71:{c.instructions+=3;NFSU2_TR(0x70eb71);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70eb72:{NFSU2_TR(0x70eb72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B70eb74:{NFSU2_TR(0x70eb74);
{goto L70ee24;}
}
B70eb79:L70eb79:{c.instructions+=19;NFSU2_TR(0x70eb79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70eb7c:{NFSU2_TR(0x70eb7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5928ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70eb83:{NFSU2_TR(0x70eb83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70eb86:{NFSU2_TR(0x70eb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70eb89:{NFSU2_TR(0x70eb89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70eb8c:{NFSU2_TR(0x70eb8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B70eb8e:{NFSU2_TR(0x70eb8e);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a7ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B70eb95:{NFSU2_TR(0x70eb95);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70eb98:{NFSU2_TR(0x70eb98);
u8 U[12];
w4(U+0,u32(u32(u32(0x31fcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70eb9f:{NFSU2_TR(0x70eb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70eba2:{NFSU2_TR(0x70eba2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70eba4:{NFSU2_TR(0x70eba4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70eba5:{NFSU2_TR(0x70eba5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B70eba7:{NFSU2_TR(0x70eba7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70ebaa:{NFSU2_TR(0x70ebaa);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B70ebac:{NFSU2_TR(0x70ebac);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70ebad:{NFSU2_TR(0x70ebad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B70ebb0:{NFSU2_TR(0x70ebb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B70ebb3:{NFSU2_TR(0x70ebb3);
if(r1(R+512)){{goto L70ebbe;}}
}
B70ebb5:L70ebb5:{c.instructions+=4;NFSU2_TR(0x70ebb5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffaull))));
}
B70ebb8:{NFSU2_TR(0x70ebb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B70ebba:{NFSU2_TR(0x70ebba);
__builtin_memmove((R+8),(R+0),4);
}
B70ebbc:{NFSU2_TR(0x70ebbc);
{goto L70ebce;}
}
B70ebbe:L70ebbe:{c.instructions+=6;NFSU2_TR(0x70ebbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ebc1:{NFSU2_TR(0x70ebc1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+8,u32(r1(U+0)));
}
B70ebc4:{NFSU2_TR(0x70ebc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ebc7:{NFSU2_TR(0x70ebc7);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B70ebc9:{NFSU2_TR(0x70ebc9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B70ebcc:{NFSU2_TR(0x70ebcc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B70ebce:L70ebce:{c.instructions+=7;NFSU2_TR(0x70ebce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ebd1:{NFSU2_TR(0x70ebd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70ebd4:{NFSU2_TR(0x70ebd4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(r2(U+0)));
}
B70ebd7:{NFSU2_TR(0x70ebd7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B70ebda:{NFSU2_TR(0x70ebda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70ebdc:{NFSU2_TR(0x70ebdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ebdf:{NFSU2_TR(0x70ebdf);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70ec11;}}
}
B70ebe1:L70ebe1:{c.instructions+=16;NFSU2_TR(0x70ebe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ebe4:{NFSU2_TR(0x70ebe4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B70ebe7:{NFSU2_TR(0x70ebe7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70ebeb:{NFSU2_TR(0x70ebeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70ebee:{NFSU2_TR(0x70ebee);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70ebf0:{NFSU2_TR(0x70ebf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70ebf4:{NFSU2_TR(0x70ebf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70ebf7:{NFSU2_TR(0x70ebf7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70ebf9:{NFSU2_TR(0x70ebf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70ebfd:{NFSU2_TR(0x70ebfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70ec00:{NFSU2_TR(0x70ec00);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70ec02:{NFSU2_TR(0x70ec02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ec05:{NFSU2_TR(0x70ec05);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70ec08:{NFSU2_TR(0x70ec08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x20ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B70ec0b:{NFSU2_TR(0x70ec0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ec0e:{NFSU2_TR(0x70ec0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ec11:L70ec11:{c.instructions+=4;NFSU2_TR(0x70ec11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70ec13:{NFSU2_TR(0x70ec13);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+0),(U+0),2);
}
B70ec16:{NFSU2_TR(0x70ec16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70ec18:{NFSU2_TR(0x70ec18);
if(r1(R+518)){{goto L70ec21;}}
}
B70ec1a:L70ec1a:{c.instructions+=3;NFSU2_TR(0x70ec1a);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ec1c:{NFSU2_TR(0x70ec1c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B70ec1f:{NFSU2_TR(0x70ec1f);
{goto L70ec67;}
}
B70ec21:L70ec21:{c.instructions+=5;NFSU2_TR(0x70ec21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ec24:{NFSU2_TR(0x70ec24);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3eull))));
}
B70ec27:{NFSU2_TR(0x70ec27);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff01ull))));
}
B70ec2d:{NFSU2_TR(0x70ec2d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B70ec2f:{NFSU2_TR(0x70ec2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ec32:L70ec32:{c.instructions+=2;NFSU2_TR(0x70ec32);
__builtin_memmove((R+0),(R+24),4);
}
B70ec34:{NFSU2_TR(0x70ec34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ec39ull));
TAIL_STATIC(0x70d99eu,70d);
}
B70ec39:L70ec39:{c.instructions+=3;NFSU2_TR(0x70ec39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70ec3b:{NFSU2_TR(0x70ec3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ec3e:{NFSU2_TR(0x70ec3e);
if(r1(R+518)){{goto L70ec4e;}}
}
B70ec40:L70ec40:{c.instructions+=5;NFSU2_TR(0x70ec40);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ec42:{NFSU2_TR(0x70ec42);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70ec45:{NFSU2_TR(0x70ec45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70ec48:{NFSU2_TR(0x70ec48);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B70ec4c:{NFSU2_TR(0x70ec4c);
{goto L70ec59;}
}
B70ec4e:L70ec4e:{c.instructions+=4;NFSU2_TR(0x70ec4e);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ec50:{NFSU2_TR(0x70ec50);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70ec53:{NFSU2_TR(0x70ec53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70ec56:{NFSU2_TR(0x70ec56);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70ec59:L70ec59:{c.instructions+=3;NFSU2_TR(0x70ec59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ec5c:{NFSU2_TR(0x70ec5c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70ec60:{NFSU2_TR(0x70ec60);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ec32u);}goto L70ec32;}}
}
B70ec62:L70ec62:{c.instructions+=2;NFSU2_TR(0x70ec62);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ec64:{NFSU2_TR(0x70ec64);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70ec67:L70ec67:{c.instructions+=3;NFSU2_TR(0x70ec67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70ec69:{NFSU2_TR(0x70ec69);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c58f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B70ec70:{NFSU2_TR(0x70ec70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ed77;}}
}
B70ec76:L70ec76:{c.instructions+=16;NFSU2_TR(0x70ec76);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x6ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70ec7a:{NFSU2_TR(0x70ec7a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B70ec7d:{NFSU2_TR(0x70ec7d);
__builtin_memmove((R+4),(R+0),4);
}
B70ec7f:{NFSU2_TR(0x70ec7f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xa8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B70ec85:{NFSU2_TR(0x70ec85);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ec88:{NFSU2_TR(0x70ec88);
u8 U[12];
w4(U+0,u32(u32(u32(0x43fcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B70ec8f:{NFSU2_TR(0x70ec8f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70ec91:{NFSU2_TR(0x70ec91);
u8 U[12];
w4(U+0,u32(u32(u32(0x2facull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70ec98:{NFSU2_TR(0x70ec98);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70ec99:{NFSU2_TR(0x70ec99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ec9c:{NFSU2_TR(0x70ec9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B70ec9e:{NFSU2_TR(0x70ec9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B70eca0:{NFSU2_TR(0x70eca0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70eca1:{NFSU2_TR(0x70eca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B70eca4:{NFSU2_TR(0x70eca4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B70eca7:{NFSU2_TR(0x70eca7);
if(r1(R+512)){{goto L70ecb2;}}
}
B70eca9:L70eca9:{c.instructions+=4;NFSU2_TR(0x70eca9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffaull))));
}
B70ecac:{NFSU2_TR(0x70ecac);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B70ecae:{NFSU2_TR(0x70ecae);
__builtin_memmove((R+8),(R+0),4);
}
B70ecb0:{NFSU2_TR(0x70ecb0);
{goto L70ecc2;}
}
B70ecb2:L70ecb2:{c.instructions+=6;NFSU2_TR(0x70ecb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ecb5:{NFSU2_TR(0x70ecb5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+8,u32(r1(U+0)));
}
B70ecb8:{NFSU2_TR(0x70ecb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ecbb:{NFSU2_TR(0x70ecbb);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B70ecbd:{NFSU2_TR(0x70ecbd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B70ecc0:{NFSU2_TR(0x70ecc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B70ecc2:L70ecc2:{c.instructions+=5;NFSU2_TR(0x70ecc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70ecc5:{NFSU2_TR(0x70ecc5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(r2(U+0)));
}
B70ecc8:{NFSU2_TR(0x70ecc8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B70eccb:{NFSU2_TR(0x70eccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70eccd:{NFSU2_TR(0x70eccd);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70ecfc;}}
}
B70eccf:L70eccf:{c.instructions+=15;NFSU2_TR(0x70eccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ecd2:{NFSU2_TR(0x70ecd2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B70ecd5:{NFSU2_TR(0x70ecd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70ecd9:{NFSU2_TR(0x70ecd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70ecdc:{NFSU2_TR(0x70ecdc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B70ecde:{NFSU2_TR(0x70ecde);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70ece2:{NFSU2_TR(0x70ece2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70ece5:{NFSU2_TR(0x70ece5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B70ece7:{NFSU2_TR(0x70ece7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70eceb:{NFSU2_TR(0x70eceb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70ecee:{NFSU2_TR(0x70ecee);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B70ecf0:{NFSU2_TR(0x70ecf0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70ecf3:{NFSU2_TR(0x70ecf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x20ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B70ecf6:{NFSU2_TR(0x70ecf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ecf9:{NFSU2_TR(0x70ecf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ecfc:L70ecfc:{c.instructions+=4;NFSU2_TR(0x70ecfc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70ecfe:{NFSU2_TR(0x70ecfe);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+0),(U+0),2);
}
B70ed01:{NFSU2_TR(0x70ed01);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70ed03:{NFSU2_TR(0x70ed03);
if(r1(R+518)){{goto L70ed0c;}}
}
B70ed05:L70ed05:{c.instructions+=3;NFSU2_TR(0x70ed05);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ed07:{NFSU2_TR(0x70ed07);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B70ed0a:{NFSU2_TR(0x70ed0a);
{goto L70ed55;}
}
B70ed0c:L70ed0c:{c.instructions+=5;NFSU2_TR(0x70ed0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ed0f:{NFSU2_TR(0x70ed0f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3eull))));
}
B70ed12:{NFSU2_TR(0x70ed12);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff01ull))));
}
B70ed18:{NFSU2_TR(0x70ed18);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B70ed1a:{NFSU2_TR(0x70ed1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ed1d:L70ed1d:{c.instructions+=2;NFSU2_TR(0x70ed1d);
__builtin_memmove((R+0),(R+24),4);
}
B70ed1f:{NFSU2_TR(0x70ed1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ed24ull));
TAIL_STATIC(0x70d99eu,70d);
}
B70ed24:L70ed24:{c.instructions+=4;NFSU2_TR(0x70ed24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ed27:{NFSU2_TR(0x70ed27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70ed29:{NFSU2_TR(0x70ed29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ed2c:{NFSU2_TR(0x70ed2c);
if(r1(R+518)){{goto L70ed3c;}}
}
B70ed2e:L70ed2e:{c.instructions+=5;NFSU2_TR(0x70ed2e);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ed30:{NFSU2_TR(0x70ed30);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70ed33:{NFSU2_TR(0x70ed33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70ed36:{NFSU2_TR(0x70ed36);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B70ed3a:{NFSU2_TR(0x70ed3a);
{goto L70ed47;}
}
B70ed3c:L70ed3c:{c.instructions+=4;NFSU2_TR(0x70ed3c);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ed3e:{NFSU2_TR(0x70ed3e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70ed41:{NFSU2_TR(0x70ed41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70ed44:{NFSU2_TR(0x70ed44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70ed47:L70ed47:{c.instructions+=3;NFSU2_TR(0x70ed47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ed4a:{NFSU2_TR(0x70ed4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70ed4e:{NFSU2_TR(0x70ed4e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ed1du);}goto L70ed1d;}}
}
B70ed50:L70ed50:{c.instructions+=2;NFSU2_TR(0x70ed50);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ed52:{NFSU2_TR(0x70ed52);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70ed55:L70ed55:{c.instructions+=2;NFSU2_TR(0x70ed55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B70ed58:{NFSU2_TR(0x70ed58);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L70ed5f;}}
}
B70ed5a:L70ed5a:{c.instructions+=2;NFSU2_TR(0x70ed5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ed5d:{NFSU2_TR(0x70ed5d);
{goto L70ed73;}
}
B70ed5f:L70ed5f:{c.instructions+=4;NFSU2_TR(0x70ed5f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ed61:{NFSU2_TR(0x70ed61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70ed62:{NFSU2_TR(0x70ed62);
__builtin_memmove((R+0),(R+24),4);
}
B70ed64:{NFSU2_TR(0x70ed64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ed69ull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70ed69:L70ed69:{c.instructions+=3;NFSU2_TR(0x70ed69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ed6c:{NFSU2_TR(0x70ed6c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70ed70:{NFSU2_TR(0x70ed70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ed73:L70ed73:{c.instructions+=2;NFSU2_TR(0x70ed73);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70ed75:{NFSU2_TR(0x70ed75);
{goto L70edbe;}
}
B70ed77:L70ed77:{c.instructions+=4;NFSU2_TR(0x70ed77);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ed79:{NFSU2_TR(0x70ed79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70ed7a:{NFSU2_TR(0x70ed7a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ed7c:{NFSU2_TR(0x70ed7c);
if(r1(R+518)){{goto L70edcf;}}
}
B70ed7e:L70ed7e:{c.instructions+=2;NFSU2_TR(0x70ed7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ed81:{NFSU2_TR(0x70ed81);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70ed94;}}
}
B70ed83:L70ed83:{c.instructions+=2;NFSU2_TR(0x70ed83);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ed86:{NFSU2_TR(0x70ed86);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70ed8b;}}
}
B70ed88:L70ed88:{c.instructions+=1;NFSU2_TR(0x70ed88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B70ed8b:L70ed8b:{c.instructions+=2;NFSU2_TR(0x70ed8b);
__builtin_memmove((R+0),(R+24),4);
}
B70ed8d:{NFSU2_TR(0x70ed8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ed92ull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70ed92:L70ed92:{c.instructions+=1;NFSU2_TR(0x70ed92);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70ed94:L70ed94:{c.instructions+=2;NFSU2_TR(0x70ed94);
__builtin_memmove((R+0),(R+24),4);
}
B70ed96:{NFSU2_TR(0x70ed96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ed9bull));
TAIL_STATIC(0x70d99eu,70d);
}
B70ed9b:L70ed9b:{c.instructions+=12;NFSU2_TR(0x70ed9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ed9e:{NFSU2_TR(0x70ed9e);
__builtin_memmove((R+4),(R+0),4);
}
B70eda0:{NFSU2_TR(0x70eda0);
w4(R+4,u32(0-u32(r4(R+4))));
}
B70eda2:{NFSU2_TR(0x70eda2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+28))));
}
B70eda4:{NFSU2_TR(0x70eda4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70eda6:{NFSU2_TR(0x70eda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70eda9:{NFSU2_TR(0x70eda9);
u8 U[13];
w4(U+0,u32(u32(u32(0x57cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B70edb1:{NFSU2_TR(0x70edb1);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B70edb5:{NFSU2_TR(0x70edb5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70edb7:{NFSU2_TR(0x70edb7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70edba:{NFSU2_TR(0x70edba);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B70edbd:{NFSU2_TR(0x70edbd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70edbe:L70edbe:{c.instructions+=3;NFSU2_TR(0x70edbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70edc1:{NFSU2_TR(0x70edc1);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x40ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70edc5:{NFSU2_TR(0x70edc5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70ee24;}}
}
B70edc7:L70edc7:{c.instructions+=2;NFSU2_TR(0x70edc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70edca:{NFSU2_TR(0x70edca);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70eb79u);}goto L70eb79;}
}
B70edcf:L70edcf:{c.instructions+=2;NFSU2_TR(0x70edcf);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70edd3:{NFSU2_TR(0x70edd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ee24;}}
}
B70edd5:L70edd5:{c.instructions+=4;NFSU2_TR(0x70edd5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70edd7:{NFSU2_TR(0x70edd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70edd8:{NFSU2_TR(0x70edd8);
__builtin_memmove((R+0),(R+24),4);
}
B70edda:{NFSU2_TR(0x70edda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70eddfull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70eddf:L70eddf:{c.instructions+=3;NFSU2_TR(0x70eddf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70ede0:{NFSU2_TR(0x70ede0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ede3:{NFSU2_TR(0x70ede3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70edf4;}}
}
B70ede5:L70ede5:{c.instructions+=4;NFSU2_TR(0x70ede5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ede7:{NFSU2_TR(0x70ede7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70ede8:{NFSU2_TR(0x70ede8);
__builtin_memmove((R+0),(R+24),4);
}
B70edea:{NFSU2_TR(0x70edea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70edefull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70edef:L70edef:{c.instructions+=2;NFSU2_TR(0x70edef);
w1(R+512,carry<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B70edf2:{NFSU2_TR(0x70edf2);
{goto L70ee1e;}
}
B70edf4:L70edf4:{c.instructions+=2;NFSU2_TR(0x70edf4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70edf7:{NFSU2_TR(0x70edf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ee1e;}}
}
B70edf9:L70edf9:{c.instructions+=2;NFSU2_TR(0x70edf9);
__builtin_memmove((R+0),(R+24),4);
}
B70edfb:{NFSU2_TR(0x70edfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ee00ull));
TAIL_STATIC(0x70d99eu,70d);
}
B70ee00:L70ee00:{c.instructions+=3;NFSU2_TR(0x70ee00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70ee02:{NFSU2_TR(0x70ee02);
__builtin_memmove((R+0),(R+24),4);
}
B70ee04:{NFSU2_TR(0x70ee04);
if(r1(R+518)){{goto L70ee13;}}
}
B70ee06:L70ee06:{c.instructions+=3;NFSU2_TR(0x70ee06);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ee08:{NFSU2_TR(0x70ee08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70ee09:{NFSU2_TR(0x70ee09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ee0eull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70ee0e:L70ee0e:{c.instructions+=2;NFSU2_TR(0x70ee0e);
w1(R+512,carry<u32>(r4(R+0),u32(0xbull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
}
B70ee11:{NFSU2_TR(0x70ee11);
{goto L70ee1e;}
}
B70ee13:L70ee13:{c.instructions+=3;NFSU2_TR(0x70ee13);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ee15:{NFSU2_TR(0x70ee15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70ee16:{NFSU2_TR(0x70ee16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ee1bull));
TAIL_STATIC(0x70d8dbu,70d);
}
B70ee1b:L70ee1b:{c.instructions+=1;NFSU2_TR(0x70ee1b);
w1(R+512,carry<u32>(r4(R+0),u32(0x7ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
}
B70ee1e:L70ee1e:{c.instructions+=3;NFSU2_TR(0x70ee1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ee21:{NFSU2_TR(0x70ee21);
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
B70ee22:{NFSU2_TR(0x70ee22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B70ee24:L70ee24:{c.instructions+=7;NFSU2_TR(0x70ee24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ee27:{NFSU2_TR(0x70ee27);
u8 U[13];
w4(U+0,u32(u32(u32(0x5fbull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B70ee2e:{NFSU2_TR(0x70ee2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70ee2f:{NFSU2_TR(0x70ee2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70ee30:{NFSU2_TR(0x70ee30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70ee31:{NFSU2_TR(0x70ee31);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70ee32:{NFSU2_TR(0x70ee32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70ee33:L70ee33:{c.instructions+=9;NFSU2_TR(0x70ee33);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ee34:{NFSU2_TR(0x70ee34);
__builtin_memmove((R+20),(R+16),4);
}
B70ee36:{NFSU2_TR(0x70ee36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ee37:{NFSU2_TR(0x70ee37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70ee3a:{NFSU2_TR(0x70ee3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70ee3c:{NFSU2_TR(0x70ee3c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ee3f:{NFSU2_TR(0x70ee3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ee40:{NFSU2_TR(0x70ee40);
__builtin_memmove((R+28),(R+0),4);
}
B70ee42:{NFSU2_TR(0x70ee42);
if(r1(R+518)){{goto L70ee64;}}
}
B70ee44:L70ee44:{c.instructions+=3;NFSU2_TR(0x70ee44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70ee47:{NFSU2_TR(0x70ee47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ee48:{NFSU2_TR(0x70ee48);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B70ee4c:L70ee4c:{c.instructions+=4;NFSU2_TR(0x70ee4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70ee4f:{NFSU2_TR(0x70ee4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70ee52:{NFSU2_TR(0x70ee52);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70ee55:{NFSU2_TR(0x70ee55);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70ee60;}}
}
B70ee57:L70ee57:{c.instructions+=4;NFSU2_TR(0x70ee57);
__builtin_memmove((R+28),(R+0),4);
}
B70ee59:{NFSU2_TR(0x70ee59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70ee5b:{NFSU2_TR(0x70ee5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ee5e:{NFSU2_TR(0x70ee5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ee4cu);}goto L70ee4c;}}
}
B70ee60:L70ee60:{c.instructions+=2;NFSU2_TR(0x70ee60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70ee63:{NFSU2_TR(0x70ee63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70ee64:L70ee64:{c.instructions+=2;NFSU2_TR(0x70ee64);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B70ee66:{NFSU2_TR(0x70ee66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ee6c;}}
}
B70ee68:L70ee68:{c.instructions+=2;NFSU2_TR(0x70ee68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B70ee6a:{NFSU2_TR(0x70ee6a);
{goto L70ee72;}
}
B70ee6c:L70ee6c:{c.instructions+=2;NFSU2_TR(0x70ee6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70ee6f:{NFSU2_TR(0x70ee6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B70ee72:L70ee72:{c.instructions+=6;NFSU2_TR(0x70ee72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70ee75:{NFSU2_TR(0x70ee75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70ee76:{NFSU2_TR(0x70ee76);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B70ee79:{NFSU2_TR(0x70ee79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70ee7a:{NFSU2_TR(0x70ee7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70ee7b:{NFSU2_TR(0x70ee7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70ee7c:L70ee7c:{c.instructions+=14;NFSU2_TR(0x70ee7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ee7d:{NFSU2_TR(0x70ee7d);
__builtin_memmove((R+20),(R+16),4);
}
B70ee7f:{NFSU2_TR(0x70ee7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x308ull))));
}
B70ee85:{NFSU2_TR(0x70ee85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ee86:{NFSU2_TR(0x70ee86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ee87:{NFSU2_TR(0x70ee87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70ee8a:{NFSU2_TR(0x70ee8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ee8b:{NFSU2_TR(0x70ee8b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70ee8d:{NFSU2_TR(0x70ee8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B70ee90:{NFSU2_TR(0x70ee90);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70ee92:{NFSU2_TR(0x70ee92);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70ee94:{NFSU2_TR(0x70ee94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ee97:{NFSU2_TR(0x70ee97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ee9a:{NFSU2_TR(0x70ee9a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70eed6;}}
}
B70ee9c:L70ee9c:{c.instructions+=1;NFSU2_TR(0x70ee9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70eea2:L70eea2:{c.instructions+=10;NFSU2_TR(0x70eea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70eea5:{NFSU2_TR(0x70eea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+0))));
}
B70eea7:{NFSU2_TR(0x70eea7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfeull))));
}
B70eead:{NFSU2_TR(0x70eead);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+0))));
}
B70eeaf:{NFSU2_TR(0x70eeaf);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1ull))));
}
B70eeb2:{NFSU2_TR(0x70eeb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70eeb4:{NFSU2_TR(0x70eeb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70eeb7:{NFSU2_TR(0x70eeb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70eeba:{NFSU2_TR(0x70eeba);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B70eebd:{NFSU2_TR(0x70eebd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70eec5;}}
}
B70eebf:L70eebf:{c.instructions+=1;NFSU2_TR(0x70eebf);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B70eec5:L70eec5:{c.instructions+=7;NFSU2_TR(0x70eec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70eec9:{NFSU2_TR(0x70eec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B70eecb:{NFSU2_TR(0x70eecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70eece:{NFSU2_TR(0x70eece);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70eecf:{NFSU2_TR(0x70eecf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B70eed2:{NFSU2_TR(0x70eed2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70eed4:{NFSU2_TR(0x70eed4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70eea2u);}goto L70eea2;}}
}
B70eed6:L70eed6:{c.instructions+=5;NFSU2_TR(0x70eed6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70eed8:{NFSU2_TR(0x70eed8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70eed9:{NFSU2_TR(0x70eed9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70eedb:{NFSU2_TR(0x70eedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70eede:{NFSU2_TR(0x70eede);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70eefa;}}
}
B70eee0:L70eee0:{c.instructions+=5;NFSU2_TR(0x70eee0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B70eee3:{NFSU2_TR(0x70eee3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70eee4:{NFSU2_TR(0x70eee4);
__builtin_memmove((R+4),(R+28),4);
}
B70eee6:{NFSU2_TR(0x70eee6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70eeec:{NFSU2_TR(0x70eeec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70eef1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ee33u);}goto L70ee33;}
}
B70eef1:L70eef1:{c.instructions+=4;NFSU2_TR(0x70eef1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70eef2:{NFSU2_TR(0x70eef2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70eef4:{NFSU2_TR(0x70eef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70eef5:{NFSU2_TR(0x70eef5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70eee0u);}goto L70eee0;}}
}
B70eef7:L70eef7:{c.instructions+=1;NFSU2_TR(0x70eef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70eefa:L70eefa:{c.instructions+=5;NFSU2_TR(0x70eefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70eefd:{NFSU2_TR(0x70eefd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70ef00:{NFSU2_TR(0x70ef00);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffcf8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B70ef07:{NFSU2_TR(0x70ef07);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70ef0a:{NFSU2_TR(0x70ef0a);
if(r1(R+518)){{goto L70efb9;}}
}
B70ef10:L70ef10:{c.instructions+=5;NFSU2_TR(0x70ef10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70ef13:{NFSU2_TR(0x70ef13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70ef16:{NFSU2_TR(0x70ef16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70ef19:{NFSU2_TR(0x70ef19);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffd00ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B70ef20:{NFSU2_TR(0x70ef20);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B70ef24:L70ef24:{c.instructions+=33;NFSU2_TR(0x70ef24);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffcfcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B70ef2b:{NFSU2_TR(0x70ef2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ef2e:{NFSU2_TR(0x70ef2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70ef31:{NFSU2_TR(0x70ef31);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70ef34:{NFSU2_TR(0x70ef34);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffcfcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B70ef3b:{NFSU2_TR(0x70ef3b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70ef3d:{NFSU2_TR(0x70ef3d);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd00ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B70ef44:{NFSU2_TR(0x70ef44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ef47:{NFSU2_TR(0x70ef47);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd00ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B70ef4e:{NFSU2_TR(0x70ef4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ef51:{NFSU2_TR(0x70ef51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ef54:{NFSU2_TR(0x70ef54);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0xcull))));
}
B70ef57:{NFSU2_TR(0x70ef57);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ef5a:{NFSU2_TR(0x70ef5a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B70ef5b:{NFSU2_TR(0x70ef5b);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70ef5b);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x70ef5b);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B70ef5d:{NFSU2_TR(0x70ef5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ef60:{NFSU2_TR(0x70ef60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70ef62:{NFSU2_TR(0x70ef62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ef66:{NFSU2_TR(0x70ef66);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffff00ull))));
}
B70ef6c:{NFSU2_TR(0x70ef6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ef6f:{NFSU2_TR(0x70ef6f);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+12)),r1(U+0));
}
B70ef71:{NFSU2_TR(0x70ef71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ef74:{NFSU2_TR(0x70ef74);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70ef77:{NFSU2_TR(0x70ef77);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ef79:{NFSU2_TR(0x70ef79);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B70ef7b:{NFSU2_TR(0x70ef7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B70ef7d:{NFSU2_TR(0x70ef7d);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffcf8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B70ef84:{NFSU2_TR(0x70ef84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ef87:{NFSU2_TR(0x70ef87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ef8a:{NFSU2_TR(0x70ef8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B70ef8d:{NFSU2_TR(0x70ef8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ef8e:{NFSU2_TR(0x70ef8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70ef94:{NFSU2_TR(0x70ef94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ef99ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ee33u);}goto L70ee33;}
}
B70ef99:L70ef99:{c.instructions+=9;NFSU2_TR(0x70ef99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ef9c:{NFSU2_TR(0x70ef9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ef9f:{NFSU2_TR(0x70ef9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70efa2:{NFSU2_TR(0x70efa2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70efa5:{NFSU2_TR(0x70efa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70efa6:{NFSU2_TR(0x70efa6);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffcf8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B70efad:{NFSU2_TR(0x70efad);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B70efb0:{NFSU2_TR(0x70efb0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70efb3:{NFSU2_TR(0x70efb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ef24u);}goto L70ef24;}}
}
B70efb9:L70efb9:{c.instructions+=5;NFSU2_TR(0x70efb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70efba:{NFSU2_TR(0x70efba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70efbb:{NFSU2_TR(0x70efbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70efbc:{NFSU2_TR(0x70efbc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70efbd:{NFSU2_TR(0x70efbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70efbe:L70efbe:{c.instructions+=13;NFSU2_TR(0x70efbe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70efbf:{NFSU2_TR(0x70efbf);
__builtin_memmove((R+20),(R+16),4);
}
B70efc1:{NFSU2_TR(0x70efc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70efc2:{NFSU2_TR(0x70efc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70efc5:{NFSU2_TR(0x70efc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70efc8:{NFSU2_TR(0x70efc8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70efc9:{NFSU2_TR(0x70efc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70efca:{NFSU2_TR(0x70efca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70efcb:{NFSU2_TR(0x70efcb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70efcd:{NFSU2_TR(0x70efcd);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70efcf:{NFSU2_TR(0x70efcf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B70efd1:{NFSU2_TR(0x70efd1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff00ull))));
}
B70efd6:{NFSU2_TR(0x70efd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70efd7:L70efd7:{c.instructions+=10;NFSU2_TR(0x70efd7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70efd8:{NFSU2_TR(0x70efd8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B70efd9:{NFSU2_TR(0x70efd9);
__builtin_memmove((R+12),(R+28),4);
}
B70efdb:{NFSU2_TR(0x70efdb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r1(U+0))));
}
B70efdd:{NFSU2_TR(0x70efdd);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70efdf:{NFSU2_TR(0x70efdf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70efe2:{NFSU2_TR(0x70efe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70efe5:{NFSU2_TR(0x70efe5);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70efe8:{NFSU2_TR(0x70efe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70efeb:{NFSU2_TR(0x70efeb);
if(r1(R+518)){{goto L70eff3;}}
}
B70efed:L70efed:{c.instructions+=2;NFSU2_TR(0x70efed);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B70eff1:{NFSU2_TR(0x70eff1);
{goto L70eff6;}
}
B70eff3:L70eff3:{c.instructions+=1;NFSU2_TR(0x70eff3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70eff6:L70eff6:{c.instructions+=2;NFSU2_TR(0x70eff6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70eff8:{NFSU2_TR(0x70eff8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x70f001u,70f);}
}
B70effa:L70effa:{c.instructions+=3;NFSU2_TR(0x70effa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70effd:{NFSU2_TR(0x70effd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70efff:{NFSU2_TR(0x70efff);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70efd7u);}goto L70efd7;}}
TAIL_STATIC(0x70f001u,70f);
}
XIT:NFSU2_TR_EXIT(0x70e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
