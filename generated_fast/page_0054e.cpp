#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_54d(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x54e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x54e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_54e(u8* __restrict R,Cpu& c);
u32 page_54e(Cpu& c){return body_54e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_54e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x54e001:goto L54e001;
case 0x54e020:goto L54e020;
case 0x54e023:c.instructions+=6;goto B54e023;
case 0x54e024:c.instructions+=5;goto B54e024;
case 0x54e025:c.instructions+=4;goto B54e025;
case 0x54e029:c.instructions+=3;goto B54e029;
case 0x54e02d:c.instructions+=2;goto B54e02d;
case 0x54e02f:c.instructions+=1;goto B54e02f;
case 0x54e035:goto L54e035;
case 0x54e038:c.instructions+=2;goto B54e038;
case 0x54e03a:c.instructions+=1;goto B54e03a;
case 0x54e040:goto L54e040;
case 0x54e043:c.instructions+=8;goto B54e043;
case 0x54e045:c.instructions+=7;goto B54e045;
case 0x54e046:c.instructions+=6;goto B54e046;
case 0x54e04a:c.instructions+=5;goto B54e04a;
case 0x54e04e:c.instructions+=4;goto B54e04e;
case 0x54e04f:c.instructions+=3;goto B54e04f;
case 0x54e052:c.instructions+=2;goto B54e052;
case 0x54e056:c.instructions+=1;goto B54e056;
case 0x54e060:goto L54e060;
case 0x54e063:c.instructions+=2;goto B54e063;
case 0x54e065:c.instructions+=1;goto B54e065;
case 0x54e06b:goto L54e06b;
case 0x54e070:c.instructions+=10;goto B54e070;
case 0x54e072:c.instructions+=9;goto B54e072;
case 0x54e074:c.instructions+=8;goto B54e074;
case 0x54e078:c.instructions+=7;goto B54e078;
case 0x54e07b:c.instructions+=6;goto B54e07b;
case 0x54e07d:c.instructions+=5;goto B54e07d;
case 0x54e081:c.instructions+=4;goto B54e081;
case 0x54e085:c.instructions+=3;goto B54e085;
case 0x54e087:c.instructions+=2;goto B54e087;
case 0x54e08a:c.instructions+=1;goto B54e08a;
case 0x54e08c:goto L54e08c;
case 0x54e08e:c.instructions+=4;goto B54e08e;
case 0x54e092:c.instructions+=3;goto B54e092;
case 0x54e094:c.instructions+=2;goto B54e094;
case 0x54e097:c.instructions+=1;goto B54e097;
case 0x54e099:goto L54e099;
case 0x54e09d:c.instructions+=1;goto B54e09d;
case 0x54e09f:goto L54e09f;
case 0x54e0a1:c.instructions+=4;goto B54e0a1;
case 0x54e0a5:c.instructions+=3;goto B54e0a5;
case 0x54e0a7:c.instructions+=2;goto B54e0a7;
case 0x54e0aa:c.instructions+=1;goto B54e0aa;
case 0x54e0ac:goto L54e0ac;
case 0x54e0ae:c.instructions+=4;goto B54e0ae;
case 0x54e0b2:c.instructions+=3;goto B54e0b2;
case 0x54e0b4:c.instructions+=2;goto B54e0b4;
case 0x54e0b7:c.instructions+=1;goto B54e0b7;
case 0x54e0b9:goto L54e0b9;
case 0x54e0bd:goto L54e0bd;
case 0x54e0bf:c.instructions+=4;goto B54e0bf;
case 0x54e0c3:c.instructions+=3;goto B54e0c3;
case 0x54e0c5:c.instructions+=2;goto B54e0c5;
case 0x54e0c8:c.instructions+=1;goto B54e0c8;
case 0x54e0ca:goto L54e0ca;
case 0x54e0cc:c.instructions+=4;goto B54e0cc;
case 0x54e0d0:c.instructions+=3;goto B54e0d0;
case 0x54e0d2:c.instructions+=2;goto B54e0d2;
case 0x54e0d5:c.instructions+=1;goto B54e0d5;
case 0x54e0d7:goto L54e0d7;
case 0x54e0d8:c.instructions+=1;goto B54e0d8;
case 0x54e0dd:goto L54e0dd;
case 0x54e0e1:c.instructions+=2;goto B54e0e1;
case 0x54e0e5:c.instructions+=1;goto B54e0e5;
case 0x54e0e9:goto L54e0e9;
case 0x54e0ef:c.instructions+=3;goto B54e0ef;
case 0x54e0f1:c.instructions+=2;goto B54e0f1;
case 0x54e0f4:c.instructions+=1;goto B54e0f4;
case 0x54e0fa:goto L54e0fa;
case 0x54e0fe:c.instructions+=2;goto B54e0fe;
case 0x54e101:c.instructions+=1;goto B54e101;
case 0x54e107:goto L54e107;
case 0x54e108:c.instructions+=1;goto B54e108;
case 0x54e10e:goto L54e10e;
case 0x54e110:c.instructions+=1;goto B54e110;
case 0x54e112:goto L54e112;
case 0x54e117:c.instructions+=2;goto B54e117;
case 0x54e119:c.instructions+=1;goto B54e119;
case 0x54e11e:goto L54e11e;
case 0x54e120:c.instructions+=1;goto B54e120;
case 0x54e122:goto L54e122;
case 0x54e126:c.instructions+=7;goto B54e126;
case 0x54e12c:c.instructions+=6;goto B54e12c;
case 0x54e12e:c.instructions+=5;goto B54e12e;
case 0x54e12f:c.instructions+=4;goto B54e12f;
case 0x54e130:c.instructions+=3;goto B54e130;
case 0x54e134:c.instructions+=2;goto B54e134;
case 0x54e135:c.instructions+=1;goto B54e135;
case 0x54e138:goto L54e138;
case 0x54e13a:c.instructions+=1;goto B54e13a;
case 0x54e13c:goto L54e13c;
case 0x54e13e:c.instructions+=6;goto B54e13e;
case 0x54e13f:c.instructions+=5;goto B54e13f;
case 0x54e140:c.instructions+=4;goto B54e140;
case 0x54e142:c.instructions+=3;goto B54e142;
case 0x54e147:c.instructions+=2;goto B54e147;
case 0x54e149:c.instructions+=1;goto B54e149;
case 0x54e14e:goto L54e14e;
case 0x54e150:c.instructions+=5;goto B54e150;
case 0x54e152:c.instructions+=4;goto B54e152;
case 0x54e153:c.instructions+=3;goto B54e153;
case 0x54e154:c.instructions+=2;goto B54e154;
case 0x54e159:c.instructions+=1;goto B54e159;
case 0x54e15e:goto L54e15e;
case 0x54e163:c.instructions+=2;goto B54e163;
case 0x54e165:c.instructions+=1;goto B54e165;
case 0x54e16a:goto L54e16a;
case 0x54e16c:c.instructions+=1;goto B54e16c;
case 0x54e172:goto L54e172;
case 0x54e178:c.instructions+=2;goto B54e178;
case 0x54e17a:c.instructions+=1;goto B54e17a;
case 0x54e180:goto L54e180;
case 0x54e182:c.instructions+=6;goto B54e182;
case 0x54e184:c.instructions+=5;goto B54e184;
case 0x54e185:c.instructions+=4;goto B54e185;
case 0x54e187:c.instructions+=3;goto B54e187;
case 0x54e18c:c.instructions+=2;goto B54e18c;
case 0x54e18e:c.instructions+=1;goto B54e18e;
case 0x54e193:goto L54e193;
case 0x54e195:c.instructions+=5;goto B54e195;
case 0x54e197:c.instructions+=4;goto B54e197;
case 0x54e198:c.instructions+=3;goto B54e198;
case 0x54e19a:c.instructions+=2;goto B54e19a;
case 0x54e19f:c.instructions+=1;goto B54e19f;
case 0x54e1a4:goto L54e1a4;
case 0x54e1a6:c.instructions+=2;goto B54e1a6;
case 0x54e1ac:c.instructions+=1;goto B54e1ac;
case 0x54e1ae:goto L54e1ae;
case 0x54e1b3:c.instructions+=2;goto B54e1b3;
case 0x54e1b5:c.instructions+=1;goto B54e1b5;
case 0x54e1ba:goto L54e1ba;
case 0x54e1bc:c.instructions+=1;goto B54e1bc;
case 0x54e1be:goto L54e1be;
case 0x54e1c2:c.instructions+=7;goto B54e1c2;
case 0x54e1c8:c.instructions+=6;goto B54e1c8;
case 0x54e1ca:c.instructions+=5;goto B54e1ca;
case 0x54e1cb:c.instructions+=4;goto B54e1cb;
case 0x54e1cc:c.instructions+=3;goto B54e1cc;
case 0x54e1d0:c.instructions+=2;goto B54e1d0;
case 0x54e1d1:c.instructions+=1;goto B54e1d1;
case 0x54e1d4:goto L54e1d4;
case 0x54e1d6:c.instructions+=1;goto B54e1d6;
case 0x54e1d8:goto L54e1d8;
case 0x54e1de:c.instructions+=7;goto B54e1de;
case 0x54e1e0:c.instructions+=6;goto B54e1e0;
case 0x54e1e1:c.instructions+=5;goto B54e1e1;
case 0x54e1e2:c.instructions+=4;goto B54e1e2;
case 0x54e1e4:c.instructions+=3;goto B54e1e4;
case 0x54e1e9:c.instructions+=2;goto B54e1e9;
case 0x54e1eb:c.instructions+=1;goto B54e1eb;
case 0x54e1f0:goto L54e1f0;
case 0x54e1f6:c.instructions+=6;goto B54e1f6;
case 0x54e1f8:c.instructions+=5;goto B54e1f8;
case 0x54e1fa:c.instructions+=4;goto B54e1fa;
case 0x54e1fb:c.instructions+=3;goto B54e1fb;
case 0x54e1fc:c.instructions+=2;goto B54e1fc;
case 0x54e201:c.instructions+=1;goto B54e201;
case 0x54e203:goto L54e203;
case 0x54e208:c.instructions+=2;goto B54e208;
case 0x54e20a:c.instructions+=1;goto B54e20a;
case 0x54e20f:goto L54e20f;
case 0x54e211:c.instructions+=1;goto B54e211;
case 0x54e213:goto L54e213;
case 0x54e219:c.instructions+=2;goto B54e219;
case 0x54e21b:c.instructions+=1;goto B54e21b;
case 0x54e21d:goto L54e21d;
case 0x54e21f:c.instructions+=6;goto B54e21f;
case 0x54e221:c.instructions+=5;goto B54e221;
case 0x54e222:c.instructions+=4;goto B54e222;
case 0x54e224:c.instructions+=3;goto B54e224;
case 0x54e229:c.instructions+=2;goto B54e229;
case 0x54e22b:c.instructions+=1;goto B54e22b;
case 0x54e230:goto L54e230;
case 0x54e232:c.instructions+=4;goto B54e232;
case 0x54e234:c.instructions+=3;goto B54e234;
case 0x54e235:c.instructions+=2;goto B54e235;
case 0x54e237:c.instructions+=1;goto B54e237;
case 0x54e23c:goto L54e23c;
case 0x54e23e:c.instructions+=1;goto B54e23e;
case 0x54e243:goto L54e243;
case 0x54e247:c.instructions+=3;goto B54e247;
case 0x54e249:c.instructions+=2;goto B54e249;
case 0x54e24c:c.instructions+=1;goto B54e24c;
case 0x54e252:goto L54e252;
case 0x54e256:c.instructions+=2;goto B54e256;
case 0x54e258:c.instructions+=1;goto B54e258;
case 0x54e25e:goto L54e25e;
case 0x54e264:c.instructions+=1;goto B54e264;
case 0x54e266:goto L54e266;
case 0x54e268:c.instructions+=1;goto B54e268;
case 0x54e26a:goto L54e26a;
case 0x54e26f:c.instructions+=3;goto B54e26f;
case 0x54e271:c.instructions+=2;goto B54e271;
case 0x54e27b:c.instructions+=1;goto B54e27b;
case 0x54e280:goto L54e280;
case 0x54e282:c.instructions+=1;goto B54e282;
case 0x54e284:goto L54e284;
case 0x54e286:c.instructions+=6;goto B54e286;
case 0x54e287:c.instructions+=5;goto B54e287;
case 0x54e288:c.instructions+=4;goto B54e288;
case 0x54e28a:c.instructions+=3;goto B54e28a;
case 0x54e28f:c.instructions+=2;goto B54e28f;
case 0x54e291:c.instructions+=1;goto B54e291;
case 0x54e296:goto L54e296;
case 0x54e298:c.instructions+=6;goto B54e298;
case 0x54e29a:c.instructions+=5;goto B54e29a;
case 0x54e29b:c.instructions+=4;goto B54e29b;
case 0x54e29c:c.instructions+=3;goto B54e29c;
case 0x54e2a1:c.instructions+=2;goto B54e2a1;
case 0x54e2a3:c.instructions+=1;goto B54e2a3;
case 0x54e2a8:goto L54e2a8;
case 0x54e2ad:c.instructions+=2;goto B54e2ad;
case 0x54e2af:c.instructions+=1;goto B54e2af;
case 0x54e2b4:goto L54e2b4;
case 0x54e2b6:c.instructions+=1;goto B54e2b6;
case 0x54e2b8:goto L54e2b8;
case 0x54e2ba:c.instructions+=6;goto B54e2ba;
case 0x54e2bc:c.instructions+=5;goto B54e2bc;
case 0x54e2bd:c.instructions+=4;goto B54e2bd;
case 0x54e2bf:c.instructions+=3;goto B54e2bf;
case 0x54e2c4:c.instructions+=2;goto B54e2c4;
case 0x54e2c6:c.instructions+=1;goto B54e2c6;
case 0x54e2cb:goto L54e2cb;
case 0x54e2cd:c.instructions+=6;goto B54e2cd;
case 0x54e2cf:c.instructions+=5;goto B54e2cf;
case 0x54e2d0:c.instructions+=4;goto B54e2d0;
case 0x54e2d2:c.instructions+=3;goto B54e2d2;
case 0x54e2d7:c.instructions+=2;goto B54e2d7;
case 0x54e2d9:c.instructions+=1;goto B54e2d9;
case 0x54e2de:goto L54e2de;
case 0x54e2e4:c.instructions+=2;goto B54e2e4;
case 0x54e2e6:c.instructions+=1;goto B54e2e6;
case 0x54e2e8:goto L54e2e8;
case 0x54e2ea:c.instructions+=1;goto B54e2ea;
case 0x54e2ef:goto L54e2ef;
case 0x54e2f3:c.instructions+=4;goto B54e2f3;
case 0x54e2f4:c.instructions+=3;goto B54e2f4;
case 0x54e2f7:c.instructions+=2;goto B54e2f7;
case 0x54e2fb:c.instructions+=1;goto B54e2fb;
case 0x54e301:goto L54e301;
case 0x54e304:c.instructions+=2;goto B54e304;
case 0x54e306:c.instructions+=1;goto B54e306;
case 0x54e30c:goto L54e30c;
case 0x54e312:c.instructions+=2;goto B54e312;
case 0x54e314:c.instructions+=1;goto B54e314;
case 0x54e316:goto L54e316;
case 0x54e31b:c.instructions+=2;goto B54e31b;
case 0x54e31d:c.instructions+=1;goto B54e31d;
case 0x54e31f:goto L54e31f;
case 0x54e324:c.instructions+=2;goto B54e324;
case 0x54e326:c.instructions+=1;goto B54e326;
case 0x54e32c:goto L54e32c;
case 0x54e332:c.instructions+=3;goto B54e332;
case 0x54e334:c.instructions+=2;goto B54e334;
case 0x54e338:c.instructions+=1;goto B54e338;
case 0x54e33e:goto L54e33e;
case 0x54e344:c.instructions+=7;goto B54e344;
case 0x54e346:c.instructions+=6;goto B54e346;
case 0x54e347:c.instructions+=5;goto B54e347;
case 0x54e34b:c.instructions+=4;goto B54e34b;
case 0x54e34c:c.instructions+=3;goto B54e34c;
case 0x54e350:c.instructions+=2;goto B54e350;
case 0x54e351:c.instructions+=1;goto B54e351;
case 0x54e354:goto L54e354;
case 0x54e356:c.instructions+=1;goto B54e356;
case 0x54e35c:goto L54e35c;
case 0x54e362:c.instructions+=4;goto B54e362;
case 0x54e364:c.instructions+=3;goto B54e364;
case 0x54e366:c.instructions+=2;goto B54e366;
case 0x54e36a:c.instructions+=1;goto B54e36a;
case 0x54e370:goto L54e370;
case 0x54e376:c.instructions+=4;goto B54e376;
case 0x54e379:c.instructions+=3;goto B54e379;
case 0x54e380:c.instructions+=2;goto B54e380;
case 0x54e384:c.instructions+=1;goto B54e384;
case 0x54e386:goto L54e386;
case 0x54e38a:c.instructions+=7;goto B54e38a;
case 0x54e390:c.instructions+=6;goto B54e390;
case 0x54e392:c.instructions+=5;goto B54e392;
case 0x54e393:c.instructions+=4;goto B54e393;
case 0x54e394:c.instructions+=3;goto B54e394;
case 0x54e398:c.instructions+=2;goto B54e398;
case 0x54e399:c.instructions+=1;goto B54e399;
case 0x54e39c:goto L54e39c;
case 0x54e39e:c.instructions+=1;goto B54e39e;
case 0x54e3a0:goto L54e3a0;
case 0x54e3a4:goto L54e3a4;
case 0x54e3a5:c.instructions+=2;goto B54e3a5;
case 0x54e3a7:c.instructions+=1;goto B54e3a7;
case 0x54e3a9:goto L54e3a9;
case 0x54e3aa:c.instructions+=5;goto B54e3aa;
case 0x54e3ab:c.instructions+=4;goto B54e3ab;
case 0x54e3ac:c.instructions+=3;goto B54e3ac;
case 0x54e3ad:c.instructions+=2;goto B54e3ad;
case 0x54e3b0:c.instructions+=1;goto B54e3b0;
case 0x54e3b3:goto L54e3b3;
case 0x54e3b8:c.instructions+=1;goto B54e3b8;
case 0x54e3c0:goto L54e3c0;
case 0x54e3c7:c.instructions+=2;goto B54e3c7;
case 0x54e3c9:c.instructions+=1;goto B54e3c9;
case 0x54e3cb:goto L54e3cb;
case 0x54e3ce:c.instructions+=3;goto B54e3ce;
case 0x54e3d9:c.instructions+=2;goto B54e3d9;
case 0x54e3e0:c.instructions+=1;goto B54e3e0;
case 0x54e3e2:goto L54e3e2;
case 0x54e3e7:goto L54e3e7;
case 0x54e3eb:c.instructions+=3;goto B54e3eb;
case 0x54e3ee:c.instructions+=2;goto B54e3ee;
case 0x54e3f0:c.instructions+=1;goto B54e3f0;
case 0x54e3f2:goto L54e3f2;
case 0x54e3f5:c.instructions+=1;goto B54e3f5;
case 0x54e3f7:goto L54e3f7;
case 0x54e3fa:c.instructions+=2;goto B54e3fa;
case 0x54e3fc:c.instructions+=1;goto B54e3fc;
case 0x54e3fe:goto L54e3fe;
case 0x54e400:goto L54e400;
case 0x54e404:c.instructions+=7;goto B54e404;
case 0x54e406:c.instructions+=6;goto B54e406;
case 0x54e407:c.instructions+=5;goto B54e407;
case 0x54e408:c.instructions+=4;goto B54e408;
case 0x54e40a:c.instructions+=3;goto B54e40a;
case 0x54e40b:c.instructions+=2;goto B54e40b;
case 0x54e40d:c.instructions+=1;goto B54e40d;
case 0x54e412:goto L54e412;
case 0x54e416:c.instructions+=7;goto B54e416;
case 0x54e418:c.instructions+=6;goto B54e418;
case 0x54e41a:c.instructions+=5;goto B54e41a;
case 0x54e41b:c.instructions+=4;goto B54e41b;
case 0x54e41c:c.instructions+=3;goto B54e41c;
case 0x54e41d:c.instructions+=2;goto B54e41d;
case 0x54e41f:c.instructions+=1;goto B54e41f;
case 0x54e424:goto L54e424;
case 0x54e428:goto L54e428;
case 0x54e429:c.instructions+=2;goto B54e429;
case 0x54e42c:c.instructions+=1;goto B54e42c;
case 0x54e42e:goto L54e42e;
case 0x54e434:c.instructions+=2;goto B54e434;
case 0x54e436:c.instructions+=1;goto B54e436;
case 0x54e438:goto L54e438;
case 0x54e43a:c.instructions+=6;goto B54e43a;
case 0x54e43b:c.instructions+=5;goto B54e43b;
case 0x54e43c:c.instructions+=4;goto B54e43c;
case 0x54e43e:c.instructions+=3;goto B54e43e;
case 0x54e443:c.instructions+=2;goto B54e443;
case 0x54e445:c.instructions+=1;goto B54e445;
case 0x54e44a:goto L54e44a;
case 0x54e450:c.instructions+=7;goto B54e450;
case 0x54e452:c.instructions+=6;goto B54e452;
case 0x54e454:c.instructions+=5;goto B54e454;
case 0x54e455:c.instructions+=4;goto B54e455;
case 0x54e456:c.instructions+=3;goto B54e456;
case 0x54e45b:c.instructions+=2;goto B54e45b;
case 0x54e45d:c.instructions+=1;goto B54e45d;
case 0x54e462:goto L54e462;
case 0x54e464:c.instructions+=6;goto B54e464;
case 0x54e465:c.instructions+=5;goto B54e465;
case 0x54e466:c.instructions+=4;goto B54e466;
case 0x54e468:c.instructions+=3;goto B54e468;
case 0x54e46d:c.instructions+=2;goto B54e46d;
case 0x54e46f:c.instructions+=1;goto B54e46f;
case 0x54e474:goto L54e474;
case 0x54e476:c.instructions+=6;goto B54e476;
case 0x54e478:c.instructions+=5;goto B54e478;
case 0x54e479:c.instructions+=4;goto B54e479;
case 0x54e47a:c.instructions+=3;goto B54e47a;
case 0x54e47f:c.instructions+=2;goto B54e47f;
case 0x54e481:c.instructions+=1;goto B54e481;
case 0x54e486:goto L54e486;
case 0x54e48c:goto L54e48c;
case 0x54e48d:c.instructions+=1;goto B54e48d;
case 0x54e48e:goto L54e48e;
case 0x54e48f:c.instructions+=3;goto B54e48f;
case 0x54e490:c.instructions+=2;goto B54e490;
case 0x54e493:c.instructions+=1;goto B54e493;
case 0x54e4a0:goto L54e4a0;
case 0x54e4a2:c.instructions+=14;goto B54e4a2;
case 0x54e4a7:c.instructions+=13;goto B54e4a7;
case 0x54e4ad:c.instructions+=12;goto B54e4ad;
case 0x54e4ae:c.instructions+=11;goto B54e4ae;
case 0x54e4b5:c.instructions+=10;goto B54e4b5;
case 0x54e4b8:c.instructions+=9;goto B54e4b8;
case 0x54e4b9:c.instructions+=8;goto B54e4b9;
case 0x54e4ba:c.instructions+=7;goto B54e4ba;
case 0x54e4be:c.instructions+=6;goto B54e4be;
case 0x54e4c1:c.instructions+=5;goto B54e4c1;
case 0x54e4c2:c.instructions+=4;goto B54e4c2;
case 0x54e4c3:c.instructions+=3;goto B54e4c3;
case 0x54e4c8:c.instructions+=2;goto B54e4c8;
case 0x54e4ca:c.instructions+=1;goto B54e4ca;
case 0x54e4cf:goto L54e4cf;
case 0x54e4d2:c.instructions+=6;goto B54e4d2;
case 0x54e4da:c.instructions+=5;goto B54e4da;
case 0x54e4de:c.instructions+=4;goto B54e4de;
case 0x54e4df:c.instructions+=3;goto B54e4df;
case 0x54e4e1:c.instructions+=2;goto B54e4e1;
case 0x54e4e9:c.instructions+=1;goto B54e4e9;
case 0x54e4ee:goto L54e4ee;
case 0x54e4f1:c.instructions+=5;goto B54e4f1;
case 0x54e4f3:c.instructions+=4;goto B54e4f3;
case 0x54e4fb:c.instructions+=3;goto B54e4fb;
case 0x54e503:c.instructions+=2;goto B54e503;
case 0x54e507:c.instructions+=1;goto B54e507;
case 0x54e509:goto L54e509;
case 0x54e50c:c.instructions+=4;goto B54e50c;
case 0x54e50e:c.instructions+=3;goto B54e50e;
case 0x54e50f:c.instructions+=2;goto B54e50f;
case 0x54e511:c.instructions+=1;goto B54e511;
case 0x54e516:goto L54e516;
case 0x54e519:c.instructions+=3;goto B54e519;
case 0x54e51a:c.instructions+=2;goto B54e51a;
case 0x54e51c:c.instructions+=1;goto B54e51c;
case 0x54e521:goto L54e521;
case 0x54e523:c.instructions+=5;goto B54e523;
case 0x54e526:c.instructions+=4;goto B54e526;
case 0x54e529:c.instructions+=3;goto B54e529;
case 0x54e52a:c.instructions+=2;goto B54e52a;
case 0x54e52f:c.instructions+=1;goto B54e52f;
case 0x54e534:goto L54e534;
case 0x54e536:c.instructions+=1;goto B54e536;
case 0x54e538:goto L54e538;
case 0x54e539:c.instructions+=3;goto B54e539;
case 0x54e53a:c.instructions+=2;goto B54e53a;
case 0x54e53c:c.instructions+=1;goto B54e53c;
case 0x54e541:goto L54e541;
case 0x54e549:c.instructions+=5;goto B54e549;
case 0x54e54d:c.instructions+=4;goto B54e54d;
case 0x54e54e:c.instructions+=3;goto B54e54e;
case 0x54e550:c.instructions+=2;goto B54e550;
case 0x54e558:c.instructions+=1;goto B54e558;
case 0x54e55d:goto L54e55d;
case 0x54e565:c.instructions+=5;goto B54e565;
case 0x54e569:c.instructions+=4;goto B54e569;
case 0x54e56a:c.instructions+=3;goto B54e56a;
case 0x54e56c:c.instructions+=2;goto B54e56c;
case 0x54e571:c.instructions+=1;goto B54e571;
case 0x54e576:goto L54e576;
case 0x54e579:c.instructions+=8;goto B54e579;
case 0x54e57c:c.instructions+=7;goto B54e57c;
case 0x54e580:c.instructions+=6;goto B54e580;
case 0x54e581:c.instructions+=5;goto B54e581;
case 0x54e582:c.instructions+=4;goto B54e582;
case 0x54e583:c.instructions+=3;goto B54e583;
case 0x54e58a:c.instructions+=2;goto B54e58a;
case 0x54e58d:c.instructions+=1;goto B54e58d;
case 0x54e590:goto L54e590;
case 0x54e591:c.instructions+=4;goto B54e591;
case 0x54e593:c.instructions+=3;goto B54e593;
case 0x54e596:c.instructions+=2;goto B54e596;
case 0x54e598:c.instructions+=1;goto B54e598;
case 0x54e59a:goto L54e59a;
case 0x54e59f:goto L54e59f;
case 0x54e5a3:c.instructions+=2;goto B54e5a3;
case 0x54e5a4:c.instructions+=1;goto B54e5a4;
case 0x54e5b0:goto L54e5b0;
case 0x54e5b1:c.instructions+=5;goto B54e5b1;
case 0x54e5b2:c.instructions+=4;goto B54e5b2;
case 0x54e5b6:c.instructions+=3;goto B54e5b6;
case 0x54e5bc:c.instructions+=2;goto B54e5bc;
case 0x54e5be:c.instructions+=1;goto B54e5be;
case 0x54e5c0:goto L54e5c0;
case 0x54e5c3:c.instructions+=2;goto B54e5c3;
case 0x54e5c5:c.instructions+=1;goto B54e5c5;
case 0x54e5c7:goto L54e5c7;
case 0x54e5ca:c.instructions+=2;goto B54e5ca;
case 0x54e5cc:c.instructions+=1;goto B54e5cc;
case 0x54e5ce:goto L54e5ce;
case 0x54e5cf:c.instructions+=3;goto B54e5cf;
case 0x54e5d3:c.instructions+=2;goto B54e5d3;
case 0x54e5d4:c.instructions+=1;goto B54e5d4;
case 0x54e5d7:goto L54e5d7;
case 0x54e5d9:c.instructions+=1;goto B54e5d9;
case 0x54e5db:goto L54e5db;
case 0x54e5df:c.instructions+=1;goto B54e5df;
case 0x54e5e6:goto L54e5e6;
case 0x54e5e9:c.instructions+=2;goto B54e5e9;
case 0x54e5eb:c.instructions+=1;goto B54e5eb;
case 0x54e5ed:goto L54e5ed;
case 0x54e5f3:c.instructions+=1;goto B54e5f3;
case 0x54e5f5:goto L54e5f5;
case 0x54e5fa:c.instructions+=3;goto B54e5fa;
case 0x54e5ff:c.instructions+=2;goto B54e5ff;
case 0x54e604:c.instructions+=1;goto B54e604;
case 0x54e609:goto L54e609;
case 0x54e610:c.instructions+=4;goto B54e610;
case 0x54e61a:c.instructions+=3;goto B54e61a;
case 0x54e61c:c.instructions+=2;goto B54e61c;
case 0x54e621:c.instructions+=1;goto B54e621;
case 0x54e626:goto L54e626;
case 0x54e628:goto L54e628;
case 0x54e62b:c.instructions+=2;goto B54e62b;
case 0x54e630:c.instructions+=1;goto B54e630;
case 0x54e635:goto L54e635;
case 0x54e637:goto L54e637;
case 0x54e63a:c.instructions+=2;goto B54e63a;
case 0x54e63c:c.instructions+=1;goto B54e63c;
case 0x54e641:goto L54e641;
case 0x54e643:c.instructions+=1;goto B54e643;
case 0x54e648:goto L54e648;
case 0x54e649:c.instructions+=3;goto B54e649;
case 0x54e64b:c.instructions+=2;goto B54e64b;
case 0x54e64c:c.instructions+=1;goto B54e64c;
case 0x54e64f:goto L54e64f;
case 0x54e654:c.instructions+=2;goto B54e654;
case 0x54e656:c.instructions+=1;goto B54e656;
case 0x54e658:goto L54e658;
case 0x54e65d:c.instructions+=2;goto B54e65d;
case 0x54e65f:c.instructions+=1;goto B54e65f;
case 0x54e661:goto L54e661;
case 0x54e667:c.instructions+=1;goto B54e667;
case 0x54e669:goto L54e669;
case 0x54e66e:goto L54e66e;
case 0x54e66f:c.instructions+=3;goto B54e66f;
case 0x54e671:c.instructions+=2;goto B54e671;
case 0x54e672:c.instructions+=1;goto B54e672;
case 0x54e675:goto L54e675;
case 0x54e67b:c.instructions+=1;goto B54e67b;
case 0x54e67d:goto L54e67d;
case 0x54e682:goto L54e682;
case 0x54e683:c.instructions+=3;goto B54e683;
case 0x54e685:c.instructions+=2;goto B54e685;
case 0x54e686:c.instructions+=1;goto B54e686;
case 0x54e689:goto L54e689;
case 0x54e68a:c.instructions+=1;goto B54e68a;
case 0x54e68f:goto L54e68f;
case 0x54e690:c.instructions+=3;goto B54e690;
case 0x54e692:c.instructions+=2;goto B54e692;
case 0x54e693:c.instructions+=1;goto B54e693;
case 0x54e6a0:goto L54e6a0;
case 0x54e6a2:c.instructions+=2;goto B54e6a2;
case 0x54e6a6:c.instructions+=1;goto B54e6a6;
case 0x54e6ab:goto L54e6ab;
case 0x54e6b0:goto L54e6b0;
case 0x54e6b1:c.instructions+=4;goto B54e6b1;
case 0x54e6b3:c.instructions+=3;goto B54e6b3;
case 0x54e6b5:c.instructions+=2;goto B54e6b5;
case 0x54e6b9:c.instructions+=1;goto B54e6b9;
case 0x54e6be:goto L54e6be;
case 0x54e6c1:c.instructions+=3;goto B54e6c1;
case 0x54e6c6:c.instructions+=2;goto B54e6c6;
case 0x54e6c7:c.instructions+=1;goto B54e6c7;
case 0x54e6cc:goto L54e6cc;
case 0x54e6cf:c.instructions+=2;goto B54e6cf;
case 0x54e6d0:c.instructions+=1;goto B54e6d0;
case 0x54e6e0:goto L54e6e0;
case 0x54e6e1:c.instructions+=8;goto B54e6e1;
case 0x54e6e3:c.instructions+=7;goto B54e6e3;
case 0x54e6e4:c.instructions+=6;goto B54e6e4;
case 0x54e6e5:c.instructions+=5;goto B54e6e5;
case 0x54e6e7:c.instructions+=4;goto B54e6e7;
case 0x54e6ea:c.instructions+=3;goto B54e6ea;
case 0x54e6ec:c.instructions+=2;goto B54e6ec;
case 0x54e6ef:c.instructions+=1;goto B54e6ef;
case 0x54e6f5:goto L54e6f5;
case 0x54e6fa:c.instructions+=2;goto B54e6fa;
case 0x54e6fc:c.instructions+=1;goto B54e6fc;
case 0x54e702:goto L54e702;
case 0x54e707:c.instructions+=4;goto B54e707;
case 0x54e70a:c.instructions+=3;goto B54e70a;
case 0x54e70b:c.instructions+=2;goto B54e70b;
case 0x54e70c:c.instructions+=1;goto B54e70c;
case 0x54e70e:goto L54e70e;
case 0x54e713:c.instructions+=1;goto B54e713;
case 0x54e715:goto L54e715;
case 0x54e71c:c.instructions+=1;goto B54e71c;
case 0x54e71e:goto L54e71e;
case 0x54e721:c.instructions+=2;goto B54e721;
case 0x54e724:c.instructions+=1;goto B54e724;
case 0x54e726:goto L54e726;
case 0x54e729:c.instructions+=2;goto B54e729;
case 0x54e72c:c.instructions+=1;goto B54e72c;
case 0x54e72e:goto L54e72e;
case 0x54e731:goto L54e731;
case 0x54e736:c.instructions+=1;goto B54e736;
case 0x54e738:goto L54e738;
case 0x54e73b:c.instructions+=1;goto B54e73b;
case 0x54e73d:goto L54e73d;
case 0x54e743:goto L54e743;
case 0x54e746:c.instructions+=5;goto B54e746;
case 0x54e74b:c.instructions+=4;goto B54e74b;
case 0x54e750:c.instructions+=3;goto B54e750;
case 0x54e755:c.instructions+=2;goto B54e755;
case 0x54e756:c.instructions+=1;goto B54e756;
case 0x54e75b:goto L54e75b;
case 0x54e75e:c.instructions+=10;goto B54e75e;
case 0x54e761:c.instructions+=9;goto B54e761;
case 0x54e764:c.instructions+=8;goto B54e764;
case 0x54e767:c.instructions+=7;goto B54e767;
case 0x54e769:c.instructions+=6;goto B54e769;
case 0x54e76c:c.instructions+=5;goto B54e76c;
case 0x54e76e:c.instructions+=4;goto B54e76e;
case 0x54e771:c.instructions+=3;goto B54e771;
case 0x54e774:c.instructions+=2;goto B54e774;
case 0x54e777:c.instructions+=1;goto B54e777;
case 0x54e779:goto L54e779;
case 0x54e77c:c.instructions+=1;goto B54e77c;
case 0x54e77e:goto L54e77e;
case 0x54e780:goto L54e780;
case 0x54e783:c.instructions+=2;goto B54e783;
case 0x54e785:c.instructions+=1;goto B54e785;
case 0x54e787:goto L54e787;
case 0x54e78a:c.instructions+=1;goto B54e78a;
case 0x54e78c:goto L54e78c;
case 0x54e78e:goto L54e78e;
case 0x54e790:c.instructions+=1;goto B54e790;
case 0x54e792:goto L54e792;
case 0x54e795:c.instructions+=3;goto B54e795;
case 0x54e797:c.instructions+=2;goto B54e797;
case 0x54e79b:c.instructions+=1;goto B54e79b;
case 0x54e79d:goto L54e79d;
case 0x54e79e:c.instructions+=1;goto B54e79e;
case 0x54e7a3:goto L54e7a3;
case 0x54e7a6:goto L54e7a6;
case 0x54e7a9:c.instructions+=2;goto B54e7a9;
case 0x54e7ab:c.instructions+=1;goto B54e7ab;
case 0x54e7ad:goto L54e7ad;
case 0x54e7ae:c.instructions+=1;goto B54e7ae;
case 0x54e7b3:goto L54e7b3;
case 0x54e7b6:goto L54e7b6;
case 0x54e7b9:c.instructions+=2;goto B54e7b9;
case 0x54e7bb:c.instructions+=1;goto B54e7bb;
case 0x54e7bd:goto L54e7bd;
case 0x54e7c0:c.instructions+=1;goto B54e7c0;
case 0x54e7c2:goto L54e7c2;
case 0x54e7c5:c.instructions+=2;goto B54e7c5;
case 0x54e7c7:c.instructions+=1;goto B54e7c7;
case 0x54e7cd:goto L54e7cd;
case 0x54e7cf:c.instructions+=1;goto B54e7cf;
case 0x54e7d1:goto L54e7d1;
case 0x54e7d4:c.instructions+=2;goto B54e7d4;
case 0x54e7d5:c.instructions+=1;goto B54e7d5;
case 0x54e7da:goto L54e7da;
case 0x54e7dd:c.instructions+=2;goto B54e7dd;
case 0x54e7de:c.instructions+=1;goto B54e7de;
case 0x54e7e3:goto L54e7e3;
case 0x54e7e6:c.instructions+=3;goto B54e7e6;
case 0x54e7e9:c.instructions+=2;goto B54e7e9;
case 0x54e7eb:c.instructions+=1;goto B54e7eb;
case 0x54e7ed:goto L54e7ed;
case 0x54e7ef:c.instructions+=3;goto B54e7ef;
case 0x54e7f4:c.instructions+=2;goto B54e7f4;
case 0x54e7f5:c.instructions+=1;goto B54e7f5;
case 0x54e7fa:goto L54e7fa;
case 0x54e7fd:c.instructions+=2;goto B54e7fd;
case 0x54e804:c.instructions+=1;goto B54e804;
case 0x54e806:goto L54e806;
case 0x54e808:c.instructions+=6;goto B54e808;
case 0x54e80d:c.instructions+=5;goto B54e80d;
case 0x54e814:c.instructions+=4;goto B54e814;
case 0x54e817:c.instructions+=3;goto B54e817;
case 0x54e81c:c.instructions+=2;goto B54e81c;
case 0x54e81d:c.instructions+=1;goto B54e81d;
case 0x54e822:goto L54e822;
case 0x54e827:c.instructions+=3;goto B54e827;
case 0x54e82a:c.instructions+=2;goto B54e82a;
case 0x54e82d:c.instructions+=1;goto B54e82d;
case 0x54e82f:goto L54e82f;
case 0x54e831:c.instructions+=1;goto B54e831;
case 0x54e836:goto L54e836;
case 0x54e838:goto L54e838;
case 0x54e83b:c.instructions+=5;goto B54e83b;
case 0x54e840:c.instructions+=4;goto B54e840;
case 0x54e845:c.instructions+=3;goto B54e845;
case 0x54e84a:c.instructions+=2;goto B54e84a;
case 0x54e84b:c.instructions+=1;goto B54e84b;
case 0x54e850:goto L54e850;
case 0x54e853:goto L54e853;
case 0x54e856:c.instructions+=3;goto B54e856;
case 0x54e858:c.instructions+=2;goto B54e858;
case 0x54e85a:c.instructions+=1;goto B54e85a;
case 0x54e85c:goto L54e85c;
case 0x54e85f:c.instructions+=1;goto B54e85f;
case 0x54e861:goto L54e861;
case 0x54e863:goto L54e863;
case 0x54e866:c.instructions+=2;goto B54e866;
case 0x54e86d:c.instructions+=1;goto B54e86d;
case 0x54e870:goto L54e870;
case 0x54e872:c.instructions+=1;goto B54e872;
case 0x54e874:goto L54e874;
case 0x54e877:c.instructions+=1;goto B54e877;
case 0x54e879:goto L54e879;
case 0x54e87b:goto L54e87b;
case 0x54e87d:c.instructions+=1;goto B54e87d;
case 0x54e883:goto L54e883;
case 0x54e886:c.instructions+=5;goto B54e886;
case 0x54e889:c.instructions+=4;goto B54e889;
case 0x54e88e:c.instructions+=3;goto B54e88e;
case 0x54e890:c.instructions+=2;goto B54e890;
case 0x54e892:c.instructions+=1;goto B54e892;
case 0x54e898:goto L54e898;
case 0x54e89e:c.instructions+=1;goto B54e89e;
case 0x54e8a0:goto L54e8a0;
case 0x54e8a6:goto L54e8a6;
case 0x54e8ac:c.instructions+=1;goto B54e8ac;
case 0x54e8b2:goto L54e8b2;
case 0x54e8b8:c.instructions+=1;goto B54e8b8;
case 0x54e8ba:goto L54e8ba;
case 0x54e8c0:goto L54e8c0;
case 0x54e8c6:goto L54e8c6;
case 0x54e8c7:c.instructions+=2;goto B54e8c7;
case 0x54e8c9:c.instructions+=1;goto B54e8c9;
case 0x54e8ce:goto L54e8ce;
case 0x54e8d1:c.instructions+=2;goto B54e8d1;
case 0x54e8d3:c.instructions+=1;goto B54e8d3;
case 0x54e8d5:goto L54e8d5;
case 0x54e8d6:c.instructions+=2;goto B54e8d6;
case 0x54e8d7:c.instructions+=1;goto B54e8d7;
case 0x54e8dc:goto L54e8dc;
case 0x54e8df:goto L54e8df;
case 0x54e8e2:c.instructions+=4;goto B54e8e2;
case 0x54e8e4:c.instructions+=3;goto B54e8e4;
case 0x54e8e7:c.instructions+=2;goto B54e8e7;
case 0x54e8eb:c.instructions+=1;goto B54e8eb;
case 0x54e8ed:goto L54e8ed;
case 0x54e8ee:c.instructions+=1;goto B54e8ee;
case 0x54e8f3:goto L54e8f3;
case 0x54e8f6:goto L54e8f6;
case 0x54e8f9:c.instructions+=2;goto B54e8f9;
case 0x54e8fb:c.instructions+=1;goto B54e8fb;
case 0x54e8fd:goto L54e8fd;
case 0x54e8fe:c.instructions+=1;goto B54e8fe;
case 0x54e903:goto L54e903;
case 0x54e906:goto L54e906;
case 0x54e909:c.instructions+=4;goto B54e909;
case 0x54e90a:c.instructions+=3;goto B54e90a;
case 0x54e90b:c.instructions+=2;goto B54e90b;
case 0x54e90d:c.instructions+=1;goto B54e90d;
case 0x54e912:goto L54e912;
case 0x54e915:c.instructions+=3;goto B54e915;
case 0x54e917:c.instructions+=2;goto B54e917;
case 0x54e91b:c.instructions+=1;goto B54e91b;
case 0x54e91d:goto L54e91d;
case 0x54e91e:c.instructions+=1;goto B54e91e;
case 0x54e923:goto L54e923;
case 0x54e926:goto L54e926;
case 0x54e929:c.instructions+=2;goto B54e929;
case 0x54e92b:c.instructions+=1;goto B54e92b;
case 0x54e92d:goto L54e92d;
case 0x54e92e:c.instructions+=1;goto B54e92e;
case 0x54e933:goto L54e933;
case 0x54e936:goto L54e936;
case 0x54e939:c.instructions+=2;goto B54e939;
case 0x54e93b:c.instructions+=1;goto B54e93b;
case 0x54e93d:goto L54e93d;
case 0x54e940:c.instructions+=1;goto B54e940;
case 0x54e942:goto L54e942;
case 0x54e944:goto L54e944;
case 0x54e947:c.instructions+=2;goto B54e947;
case 0x54e94a:c.instructions+=1;goto B54e94a;
case 0x54e94e:goto L54e94e;
case 0x54e951:c.instructions+=4;goto B54e951;
case 0x54e952:c.instructions+=3;goto B54e952;
case 0x54e955:c.instructions+=2;goto B54e955;
case 0x54e958:c.instructions+=1;goto B54e958;
case 0x54e95e:goto L54e95e;
case 0x54e965:c.instructions+=1;goto B54e965;
case 0x54e96b:goto L54e96b;
case 0x54e96e:c.instructions+=3;goto B54e96e;
case 0x54e973:c.instructions+=2;goto B54e973;
case 0x54e976:c.instructions+=1;goto B54e976;
case 0x54e978:goto L54e978;
case 0x54e97b:c.instructions+=2;goto B54e97b;
case 0x54e97d:c.instructions+=1;goto B54e97d;
case 0x54e97f:goto L54e97f;
case 0x54e981:c.instructions+=1;goto B54e981;
case 0x54e983:goto L54e983;
case 0x54e985:goto L54e985;
case 0x54e988:c.instructions+=5;goto B54e988;
case 0x54e98a:c.instructions+=4;goto B54e98a;
case 0x54e98d:c.instructions+=3;goto B54e98d;
case 0x54e98e:c.instructions+=2;goto B54e98e;
case 0x54e990:c.instructions+=1;goto B54e990;
case 0x54e992:goto L54e992;
case 0x54e994:c.instructions+=1;goto B54e994;
case 0x54e996:goto L54e996;
case 0x54e997:c.instructions+=1;goto B54e997;
case 0x54e99c:goto L54e99c;
case 0x54e99f:c.instructions+=2;goto B54e99f;
case 0x54e9a1:c.instructions+=1;goto B54e9a1;
case 0x54e9a3:goto L54e9a3;
case 0x54e9a4:c.instructions+=2;goto B54e9a4;
case 0x54e9a6:c.instructions+=1;goto B54e9a6;
case 0x54e9ab:goto L54e9ab;
case 0x54e9ad:c.instructions+=1;goto B54e9ad;
case 0x54e9af:goto L54e9af;
case 0x54e9b4:c.instructions+=2;goto B54e9b4;
case 0x54e9b6:c.instructions+=1;goto B54e9b6;
case 0x54e9b8:goto L54e9b8;
case 0x54e9bb:c.instructions+=3;goto B54e9bb;
case 0x54e9bc:c.instructions+=2;goto B54e9bc;
case 0x54e9bd:c.instructions+=1;goto B54e9bd;
case 0x54e9c2:goto L54e9c2;
case 0x54e9c4:c.instructions+=1;goto B54e9c4;
case 0x54e9c6:goto L54e9c6;
case 0x54e9cc:c.instructions+=2;goto B54e9cc;
case 0x54e9ce:c.instructions+=1;goto B54e9ce;
case 0x54e9d0:goto L54e9d0;
case 0x54e9d4:c.instructions+=1;goto B54e9d4;
case 0x54e9d6:goto L54e9d6;
case 0x54e9d9:c.instructions+=3;goto B54e9d9;
case 0x54e9dc:c.instructions+=2;goto B54e9dc;
case 0x54e9e2:c.instructions+=1;goto B54e9e2;
case 0x54e9e5:goto L54e9e5;
case 0x54e9e9:c.instructions+=1;goto B54e9e9;
case 0x54e9eb:goto L54e9eb;
case 0x54e9ee:c.instructions+=3;goto B54e9ee;
case 0x54e9f1:c.instructions+=2;goto B54e9f1;
case 0x54e9f3:c.instructions+=1;goto B54e9f3;
case 0x54e9f5:goto L54e9f5;
case 0x54e9f7:goto L54e9f7;
case 0x54e9f8:c.instructions+=1;goto B54e9f8;
case 0x54e9fd:goto L54e9fd;
case 0x54ea00:c.instructions+=3;goto B54ea00;
case 0x54ea03:c.instructions+=2;goto B54ea03;
case 0x54ea04:c.instructions+=1;goto B54ea04;
case 0x54ea06:goto L54ea06;
case 0x54ea0a:c.instructions+=1;goto B54ea0a;
case 0x54ea10:goto L54ea10;
case 0x54ea13:c.instructions+=2;goto B54ea13;
case 0x54ea15:c.instructions+=1;goto B54ea15;
case 0x54ea17:goto L54ea17;
case 0x54ea1d:c.instructions+=2;goto B54ea1d;
case 0x54ea1f:c.instructions+=1;goto B54ea1f;
case 0x54ea21:goto L54ea21;
case 0x54ea25:c.instructions+=1;goto B54ea25;
case 0x54ea27:goto L54ea27;
case 0x54ea2a:c.instructions+=3;goto B54ea2a;
case 0x54ea2d:c.instructions+=2;goto B54ea2d;
case 0x54ea33:c.instructions+=1;goto B54ea33;
case 0x54ea36:goto L54ea36;
case 0x54ea3a:c.instructions+=1;goto B54ea3a;
case 0x54ea3c:goto L54ea3c;
case 0x54ea3f:c.instructions+=3;goto B54ea3f;
case 0x54ea42:c.instructions+=2;goto B54ea42;
case 0x54ea44:c.instructions+=1;goto B54ea44;
case 0x54ea46:goto L54ea46;
case 0x54ea48:goto L54ea48;
case 0x54ea49:c.instructions+=1;goto B54ea49;
case 0x54ea4e:goto L54ea4e;
case 0x54ea51:c.instructions+=3;goto B54ea51;
case 0x54ea54:c.instructions+=2;goto B54ea54;
case 0x54ea55:c.instructions+=1;goto B54ea55;
case 0x54ea57:goto L54ea57;
case 0x54ea5a:c.instructions+=2;goto B54ea5a;
case 0x54ea5c:c.instructions+=1;goto B54ea5c;
case 0x54ea5e:goto L54ea5e;
case 0x54ea64:c.instructions+=2;goto B54ea64;
case 0x54ea66:c.instructions+=1;goto B54ea66;
case 0x54ea68:goto L54ea68;
case 0x54ea6c:c.instructions+=1;goto B54ea6c;
case 0x54ea6e:goto L54ea6e;
case 0x54ea71:c.instructions+=3;goto B54ea71;
case 0x54ea74:c.instructions+=2;goto B54ea74;
case 0x54ea7a:c.instructions+=1;goto B54ea7a;
case 0x54ea7d:goto L54ea7d;
case 0x54ea81:c.instructions+=1;goto B54ea81;
case 0x54ea83:goto L54ea83;
case 0x54ea86:c.instructions+=3;goto B54ea86;
case 0x54ea89:c.instructions+=2;goto B54ea89;
case 0x54ea8b:c.instructions+=1;goto B54ea8b;
case 0x54ea8d:goto L54ea8d;
case 0x54ea8f:c.instructions+=1;goto B54ea8f;
case 0x54ea90:goto L54ea90;
case 0x54ea91:c.instructions+=1;goto B54ea91;
case 0x54ea96:goto L54ea96;
case 0x54ea99:c.instructions+=3;goto B54ea99;
case 0x54ea9c:c.instructions+=2;goto B54ea9c;
case 0x54ea9d:c.instructions+=1;goto B54ea9d;
case 0x54ea9f:goto L54ea9f;
case 0x54eaa2:c.instructions+=2;goto B54eaa2;
case 0x54eaa4:c.instructions+=1;goto B54eaa4;
case 0x54eaaa:goto L54eaaa;
case 0x54eaad:c.instructions+=5;goto B54eaad;
case 0x54eab0:c.instructions+=4;goto B54eab0;
case 0x54eab6:c.instructions+=3;goto B54eab6;
case 0x54eab9:c.instructions+=2;goto B54eab9;
case 0x54eabf:c.instructions+=1;goto B54eabf;
case 0x54eac4:goto L54eac4;
case 0x54eac6:c.instructions+=2;goto B54eac6;
case 0x54eac9:c.instructions+=1;goto B54eac9;
case 0x54eacb:goto L54eacb;
case 0x54ead0:c.instructions+=2;goto B54ead0;
case 0x54ead3:c.instructions+=1;goto B54ead3;
case 0x54ead5:goto L54ead5;
case 0x54ead8:c.instructions+=2;goto B54ead8;
case 0x54eada:c.instructions+=1;goto B54eada;
case 0x54eadc:goto L54eadc;
case 0x54eade:c.instructions+=1;goto B54eade;
case 0x54eae0:goto L54eae0;
case 0x54eae2:goto L54eae2;
case 0x54eae5:c.instructions+=5;goto B54eae5;
case 0x54eae7:c.instructions+=4;goto B54eae7;
case 0x54eaea:c.instructions+=3;goto B54eaea;
case 0x54eaeb:c.instructions+=2;goto B54eaeb;
case 0x54eaed:c.instructions+=1;goto B54eaed;
case 0x54eaef:goto L54eaef;
case 0x54eaf2:c.instructions+=3;goto B54eaf2;
case 0x54eaf4:c.instructions+=2;goto B54eaf4;
case 0x54eaf6:c.instructions+=1;goto B54eaf6;
case 0x54eaf8:goto L54eaf8;
case 0x54eafb:c.instructions+=1;goto B54eafb;
case 0x54eafd:goto L54eafd;
case 0x54eb00:c.instructions+=2;goto B54eb00;
case 0x54eb02:c.instructions+=1;goto B54eb02;
case 0x54eb04:goto L54eb04;
case 0x54eb05:c.instructions+=5;goto B54eb05;
case 0x54eb06:c.instructions+=4;goto B54eb06;
case 0x54eb07:c.instructions+=3;goto B54eb07;
case 0x54eb09:c.instructions+=2;goto B54eb09;
case 0x54eb0a:c.instructions+=1;goto B54eb0a;
case 0x54eb0d:goto L54eb0d;
case 0x54eb0f:c.instructions+=1;goto B54eb0f;
case 0x54eb11:goto L54eb11;
case 0x54eb14:c.instructions+=1;goto B54eb14;
case 0x54eb16:goto L54eb16;
case 0x54eb18:c.instructions+=2;goto B54eb18;
case 0x54eb1b:c.instructions+=1;goto B54eb1b;
case 0x54eb20:goto L54eb20;
case 0x54eb23:c.instructions+=1;goto B54eb23;
case 0x54eb26:goto L54eb26;
case 0x54eb29:goto L54eb29;
case 0x54eb2a:c.instructions+=1;goto B54eb2a;
case 0x54eb2b:goto L54eb2b;
case 0x54eb2c:c.instructions+=3;goto B54eb2c;
case 0x54eb2e:c.instructions+=2;goto B54eb2e;
case 0x54eb2f:c.instructions+=1;goto B54eb2f;
case 0x54eb40:goto L54eb40;
case 0x54eb46:c.instructions+=3;goto B54eb46;
case 0x54eb48:c.instructions+=2;goto B54eb48;
case 0x54eb4a:c.instructions+=1;goto B54eb4a;
case 0x54eb4c:goto L54eb4c;
case 0x54eb51:goto L54eb51;
case 0x54eb52:goto L54eb52;
case 0x54eb57:goto L54eb57;
case 0x54eb60:goto L54eb60;
case 0x54eb66:c.instructions+=3;goto B54eb66;
case 0x54eb68:c.instructions+=2;goto B54eb68;
case 0x54eb6a:c.instructions+=1;goto B54eb6a;
case 0x54eb6c:goto L54eb6c;
case 0x54eb71:goto L54eb71;
case 0x54eb72:goto L54eb72;
case 0x54eb77:goto L54eb77;
case 0x54eb80:goto L54eb80;
case 0x54eb81:c.instructions+=23;goto B54eb81;
case 0x54eb83:c.instructions+=22;goto B54eb83;
case 0x54eb86:c.instructions+=21;goto B54eb86;
case 0x54eb89:c.instructions+=20;goto B54eb89;
case 0x54eb8f:c.instructions+=19;goto B54eb8f;
case 0x54eb90:c.instructions+=18;goto B54eb90;
case 0x54eb91:c.instructions+=17;goto B54eb91;
case 0x54eb92:c.instructions+=16;goto B54eb92;
case 0x54eb98:c.instructions+=15;goto B54eb98;
case 0x54eb9a:c.instructions+=14;goto B54eb9a;
case 0x54eb9b:c.instructions+=13;goto B54eb9b;
case 0x54eba1:c.instructions+=12;goto B54eba1;
case 0x54eba5:c.instructions+=11;goto B54eba5;
case 0x54ebab:c.instructions+=10;goto B54ebab;
case 0x54ebac:c.instructions+=9;goto B54ebac;
case 0x54ebb0:c.instructions+=8;goto B54ebb0;
case 0x54ebb6:c.instructions+=7;goto B54ebb6;
case 0x54ebbc:c.instructions+=6;goto B54ebbc;
case 0x54ebbd:c.instructions+=5;goto B54ebbd;
case 0x54ebc1:c.instructions+=4;goto B54ebc1;
case 0x54ebc5:c.instructions+=3;goto B54ebc5;
case 0x54ebc6:c.instructions+=2;goto B54ebc6;
case 0x54ebc7:c.instructions+=1;goto B54ebc7;
case 0x54ebcc:goto L54ebcc;
case 0x54ebcf:c.instructions+=2;goto B54ebcf;
case 0x54ebd1:c.instructions+=1;goto B54ebd1;
case 0x54ebd7:goto L54ebd7;
case 0x54ebdc:c.instructions+=2;goto B54ebdc;
case 0x54ebde:c.instructions+=1;goto B54ebde;
case 0x54ebe0:goto L54ebe0;
case 0x54ebe2:c.instructions+=1;goto B54ebe2;
case 0x54ebe4:goto L54ebe4;
case 0x54ebe6:goto L54ebe6;
case 0x54ebe8:goto L54ebe8;
case 0x54ebea:c.instructions+=1;goto B54ebea;
case 0x54ebef:goto L54ebef;
case 0x54ebf2:c.instructions+=3;goto B54ebf2;
case 0x54ebf5:c.instructions+=2;goto B54ebf5;
case 0x54ebf7:c.instructions+=1;goto B54ebf7;
case 0x54ebfd:goto L54ebfd;
case 0x54ec00:c.instructions+=4;goto B54ec00;
case 0x54ec02:c.instructions+=3;goto B54ec02;
case 0x54ec05:c.instructions+=2;goto B54ec05;
case 0x54ec08:c.instructions+=1;goto B54ec08;
case 0x54ec0a:goto L54ec0a;
case 0x54ec0d:c.instructions+=1;goto B54ec0d;
case 0x54ec0f:goto L54ec0f;
case 0x54ec11:goto L54ec11;
case 0x54ec13:c.instructions+=1;goto B54ec13;
case 0x54ec15:goto L54ec15;
case 0x54ec18:c.instructions+=1;goto B54ec18;
case 0x54ec1a:goto L54ec1a;
case 0x54ec1c:goto L54ec1c;
case 0x54ec1e:c.instructions+=1;goto B54ec1e;
case 0x54ec24:goto L54ec24;
case 0x54ec26:c.instructions+=1;goto B54ec26;
case 0x54ec28:goto L54ec28;
case 0x54ec2b:c.instructions+=1;goto B54ec2b;
case 0x54ec2d:goto L54ec2d;
case 0x54ec2f:goto L54ec2f;
case 0x54ec31:c.instructions+=1;goto B54ec31;
case 0x54ec37:goto L54ec37;
case 0x54ec3a:c.instructions+=2;goto B54ec3a;
case 0x54ec3c:c.instructions+=1;goto B54ec3c;
case 0x54ec3e:goto L54ec3e;
case 0x54ec41:c.instructions+=16;goto B54ec41;
case 0x54ec44:c.instructions+=15;goto B54ec44;
case 0x54ec47:c.instructions+=14;goto B54ec47;
case 0x54ec4b:c.instructions+=13;goto B54ec4b;
case 0x54ec4f:c.instructions+=12;goto B54ec4f;
case 0x54ec53:c.instructions+=11;goto B54ec53;
case 0x54ec54:c.instructions+=10;goto B54ec54;
case 0x54ec58:c.instructions+=9;goto B54ec58;
case 0x54ec5c:c.instructions+=8;goto B54ec5c;
case 0x54ec5d:c.instructions+=7;goto B54ec5d;
case 0x54ec61:c.instructions+=6;goto B54ec61;
case 0x54ec65:c.instructions+=5;goto B54ec65;
case 0x54ec68:c.instructions+=4;goto B54ec68;
case 0x54ec69:c.instructions+=3;goto B54ec69;
case 0x54ec6d:c.instructions+=2;goto B54ec6d;
case 0x54ec6e:c.instructions+=1;goto B54ec6e;
case 0x54ec73:goto L54ec73;
case 0x54ec76:c.instructions+=2;goto B54ec76;
case 0x54ec78:c.instructions+=1;goto B54ec78;
case 0x54ec7a:goto L54ec7a;
case 0x54ec7d:c.instructions+=2;goto B54ec7d;
case 0x54ec7f:c.instructions+=1;goto B54ec7f;
case 0x54ec81:goto L54ec81;
case 0x54ec84:c.instructions+=1;goto B54ec84;
case 0x54ec86:goto L54ec86;
case 0x54ec88:goto L54ec88;
case 0x54ec8b:c.instructions+=2;goto B54ec8b;
case 0x54ec8d:c.instructions+=1;goto B54ec8d;
case 0x54ec8f:goto L54ec8f;
case 0x54ec92:c.instructions+=1;goto B54ec92;
case 0x54ec97:goto L54ec97;
case 0x54ec9d:c.instructions+=2;goto B54ec9d;
case 0x54ec9f:c.instructions+=1;goto B54ec9f;
case 0x54eca1:goto L54eca1;
case 0x54eca4:c.instructions+=1;goto B54eca4;
case 0x54eca6:goto L54eca6;
case 0x54eca7:c.instructions+=2;goto B54eca7;
case 0x54eca9:c.instructions+=1;goto B54eca9;
case 0x54ecae:goto L54ecae;
case 0x54ecb4:c.instructions+=2;goto B54ecb4;
case 0x54ecb6:c.instructions+=1;goto B54ecb6;
case 0x54ecb8:goto L54ecb8;
case 0x54ecbe:c.instructions+=3;goto B54ecbe;
case 0x54ecc0:c.instructions+=2;goto B54ecc0;
case 0x54ecc7:c.instructions+=1;goto B54ecc7;
case 0x54ecc9:goto L54ecc9;
case 0x54ecd0:goto L54ecd0;
case 0x54ecd2:c.instructions+=1;goto B54ecd2;
case 0x54ecd4:goto L54ecd4;
case 0x54ecd7:c.instructions+=2;goto B54ecd7;
case 0x54ecd8:c.instructions+=1;goto B54ecd8;
case 0x54ecda:goto L54ecda;
case 0x54ecdf:c.instructions+=3;goto B54ecdf;
case 0x54ece1:c.instructions+=2;goto B54ece1;
case 0x54ece8:c.instructions+=1;goto B54ece8;
case 0x54ecea:goto L54ecea;
case 0x54ecf1:goto L54ecf1;
case 0x54ecf3:c.instructions+=1;goto B54ecf3;
case 0x54ecf5:goto L54ecf5;
case 0x54ecf8:c.instructions+=1;goto B54ecf8;
case 0x54ecfa:goto L54ecfa;
case 0x54ecfb:c.instructions+=2;goto B54ecfb;
case 0x54ecfd:c.instructions+=1;goto B54ecfd;
case 0x54ed02:goto L54ed02;
case 0x54ed04:goto L54ed04;
case 0x54ed0a:c.instructions+=2;goto B54ed0a;
case 0x54ed0c:c.instructions+=1;goto B54ed0c;
case 0x54ed0e:goto L54ed0e;
case 0x54ed11:c.instructions+=1;goto B54ed11;
case 0x54ed12:goto L54ed12;
case 0x54ed13:c.instructions+=1;goto B54ed13;
case 0x54ed18:goto L54ed18;
case 0x54ed1b:goto L54ed1b;
case 0x54ed1e:c.instructions+=2;goto B54ed1e;
case 0x54ed20:c.instructions+=1;goto B54ed20;
case 0x54ed25:goto L54ed25;
case 0x54ed28:c.instructions+=3;goto B54ed28;
case 0x54ed2b:c.instructions+=2;goto B54ed2b;
case 0x54ed2e:c.instructions+=1;goto B54ed2e;
case 0x54ed30:goto L54ed30;
case 0x54ed37:c.instructions+=1;goto B54ed37;
case 0x54ed3e:goto L54ed3e;
case 0x54ed40:c.instructions+=2;goto B54ed40;
case 0x54ed42:c.instructions+=1;goto B54ed42;
case 0x54ed47:goto L54ed47;
case 0x54ed48:c.instructions+=6;goto B54ed48;
case 0x54ed49:c.instructions+=5;goto B54ed49;
case 0x54ed4a:c.instructions+=4;goto B54ed4a;
case 0x54ed4b:c.instructions+=3;goto B54ed4b;
case 0x54ed4d:c.instructions+=2;goto B54ed4d;
case 0x54ed4e:c.instructions+=1;goto B54ed4e;
case 0x54ed4f:goto L54ed4f;
case 0x54ed51:c.instructions+=2;goto B54ed51;
case 0x54ed53:c.instructions+=1;goto B54ed53;
case 0x54ed58:goto L54ed58;
case 0x54ed59:c.instructions+=6;goto B54ed59;
case 0x54ed5a:c.instructions+=5;goto B54ed5a;
case 0x54ed5b:c.instructions+=4;goto B54ed5b;
case 0x54ed5c:c.instructions+=3;goto B54ed5c;
case 0x54ed5e:c.instructions+=2;goto B54ed5e;
case 0x54ed5f:c.instructions+=1;goto B54ed5f;
case 0x54ed60:goto L54ed60;
case 0x54ed62:c.instructions+=1;goto B54ed62;
case 0x54ed67:goto L54ed67;
case 0x54ed68:c.instructions+=6;goto B54ed68;
case 0x54ed69:c.instructions+=5;goto B54ed69;
case 0x54ed6a:c.instructions+=4;goto B54ed6a;
case 0x54ed6b:c.instructions+=3;goto B54ed6b;
case 0x54ed6d:c.instructions+=2;goto B54ed6d;
case 0x54ed6e:c.instructions+=1;goto B54ed6e;
case 0x54ed6f:goto L54ed6f;
case 0x54ed71:c.instructions+=1;goto B54ed71;
case 0x54ed76:goto L54ed76;
case 0x54ed77:c.instructions+=6;goto B54ed77;
case 0x54ed78:c.instructions+=5;goto B54ed78;
case 0x54ed79:c.instructions+=4;goto B54ed79;
case 0x54ed7a:c.instructions+=3;goto B54ed7a;
case 0x54ed7c:c.instructions+=2;goto B54ed7c;
case 0x54ed7d:c.instructions+=1;goto B54ed7d;
case 0x54ed7e:goto L54ed7e;
case 0x54ed81:c.instructions+=7;goto B54ed81;
case 0x54ed84:c.instructions+=6;goto B54ed84;
case 0x54ed87:c.instructions+=5;goto B54ed87;
case 0x54ed88:c.instructions+=4;goto B54ed88;
case 0x54ed89:c.instructions+=3;goto B54ed89;
case 0x54ed8a:c.instructions+=2;goto B54ed8a;
case 0x54ed8c:c.instructions+=1;goto B54ed8c;
case 0x54ed91:goto L54ed91;
case 0x54ed92:c.instructions+=6;goto B54ed92;
case 0x54ed93:c.instructions+=5;goto B54ed93;
case 0x54ed94:c.instructions+=4;goto B54ed94;
case 0x54ed95:c.instructions+=3;goto B54ed95;
case 0x54ed97:c.instructions+=2;goto B54ed97;
case 0x54ed98:c.instructions+=1;goto B54ed98;
case 0x54edd0:goto L54edd0;
case 0x54edd1:c.instructions+=5;goto B54edd1;
case 0x54edd3:c.instructions+=4;goto B54edd3;
case 0x54edd6:c.instructions+=3;goto B54edd6;
case 0x54edd9:c.instructions+=2;goto B54edd9;
case 0x54eddb:c.instructions+=1;goto B54eddb;
case 0x54eddd:goto L54eddd;
case 0x54eddf:c.instructions+=2;goto B54eddf;
case 0x54ede1:c.instructions+=1;goto B54ede1;
case 0x54ede3:goto L54ede3;
case 0x54ede6:c.instructions+=1;goto B54ede6;
case 0x54ede8:goto L54ede8;
case 0x54edea:goto L54edea;
case 0x54eded:c.instructions+=3;goto B54eded;
case 0x54edf0:c.instructions+=2;goto B54edf0;
case 0x54edf2:c.instructions+=1;goto B54edf2;
case 0x54edf4:goto L54edf4;
case 0x54edf7:c.instructions+=1;goto B54edf7;
case 0x54edf9:goto L54edf9;
case 0x54edfb:goto L54edfb;
case 0x54edfe:c.instructions+=1;goto B54edfe;
case 0x54ee01:goto L54ee01;
case 0x54ee05:c.instructions+=2;goto B54ee05;
case 0x54ee07:c.instructions+=1;goto B54ee07;
case 0x54ee09:goto L54ee09;
case 0x54ee0a:c.instructions+=2;goto B54ee0a;
case 0x54ee0c:c.instructions+=1;goto B54ee0c;
case 0x54ee10:goto L54ee10;
case 0x54ee16:c.instructions+=4;goto B54ee16;
case 0x54ee18:c.instructions+=3;goto B54ee18;
case 0x54ee1a:c.instructions+=2;goto B54ee1a;
case 0x54ee1c:c.instructions+=1;goto B54ee1c;
case 0x54ee1e:goto L54ee1e;
case 0x54ee23:goto L54ee23;
case 0x54ee25:goto L54ee25;
case 0x54ee2a:goto L54ee2a;
case 0x54ee2b:c.instructions+=1;goto B54ee2b;
case 0x54ee2d:goto L54ee2d;
case 0x54ee2e:goto L54ee2e;
case 0x54ee2f:c.instructions+=1;goto B54ee2f;
case 0x54ee40:goto L54ee40;
case 0x54ee43:c.instructions+=9;goto B54ee43;
case 0x54ee44:c.instructions+=8;goto B54ee44;
case 0x54ee45:c.instructions+=7;goto B54ee45;
case 0x54ee47:c.instructions+=6;goto B54ee47;
case 0x54ee4d:c.instructions+=5;goto B54ee4d;
case 0x54ee52:c.instructions+=4;goto B54ee52;
case 0x54ee53:c.instructions+=3;goto B54ee53;
case 0x54ee57:c.instructions+=2;goto B54ee57;
case 0x54ee58:c.instructions+=1;goto B54ee58;
case 0x54ee5d:goto L54ee5d;
case 0x54ee63:c.instructions+=7;goto B54ee63;
case 0x54ee64:c.instructions+=6;goto B54ee64;
case 0x54ee68:c.instructions+=5;goto B54ee68;
case 0x54ee69:c.instructions+=4;goto B54ee69;
case 0x54ee6d:c.instructions+=3;goto B54ee6d;
case 0x54ee6f:c.instructions+=2;goto B54ee6f;
case 0x54ee70:c.instructions+=1;goto B54ee70;
case 0x54ee75:goto L54ee75;
case 0x54ee78:c.instructions+=4;goto B54ee78;
case 0x54ee7c:c.instructions+=3;goto B54ee7c;
case 0x54ee7d:c.instructions+=2;goto B54ee7d;
case 0x54ee7e:c.instructions+=1;goto B54ee7e;
case 0x54ee83:goto L54ee83;
case 0x54ee87:c.instructions+=6;goto B54ee87;
case 0x54ee8a:c.instructions+=5;goto B54ee8a;
case 0x54ee90:c.instructions+=4;goto B54ee90;
case 0x54ee93:c.instructions+=3;goto B54ee93;
case 0x54ee94:c.instructions+=2;goto B54ee94;
case 0x54ee96:c.instructions+=1;goto B54ee96;
case 0x54ee9b:goto L54ee9b;
case 0x54ee9e:c.instructions+=21;goto B54ee9e;
case 0x54eea1:c.instructions+=20;goto B54eea1;
case 0x54eea4:c.instructions+=19;goto B54eea4;
case 0x54eea7:c.instructions+=18;goto B54eea7;
case 0x54eea9:c.instructions+=17;goto B54eea9;
case 0x54eeac:c.instructions+=16;goto B54eeac;
case 0x54eeae:c.instructions+=15;goto B54eeae;
case 0x54eeb1:c.instructions+=14;goto B54eeb1;
case 0x54eeb7:c.instructions+=13;goto B54eeb7;
case 0x54eebd:c.instructions+=12;goto B54eebd;
case 0x54eec3:c.instructions+=11;goto B54eec3;
case 0x54eec4:c.instructions+=10;goto B54eec4;
case 0x54eeca:c.instructions+=9;goto B54eeca;
case 0x54eed0:c.instructions+=8;goto B54eed0;
case 0x54eed6:c.instructions+=7;goto B54eed6;
case 0x54eedc:c.instructions+=6;goto B54eedc;
case 0x54eee2:c.instructions+=5;goto B54eee2;
case 0x54eee8:c.instructions+=4;goto B54eee8;
case 0x54eeee:c.instructions+=3;goto B54eeee;
case 0x54eef1:c.instructions+=2;goto B54eef1;
case 0x54eef3:c.instructions+=1;goto B54eef3;
case 0x54eef5:goto L54eef5;
case 0x54eef7:c.instructions+=2;goto B54eef7;
case 0x54eef9:c.instructions+=1;goto B54eef9;
case 0x54eefc:goto L54eefc;
case 0x54eefe:c.instructions+=2;goto B54eefe;
case 0x54ef00:c.instructions+=1;goto B54ef00;
case 0x54ef03:goto L54ef03;
case 0x54ef05:c.instructions+=2;goto B54ef05;
case 0x54ef07:c.instructions+=1;goto B54ef07;
case 0x54ef0a:goto L54ef0a;
case 0x54ef0c:c.instructions+=2;goto B54ef0c;
case 0x54ef0e:c.instructions+=1;goto B54ef0e;
case 0x54ef11:goto L54ef11;
case 0x54ef17:c.instructions+=7;goto B54ef17;
case 0x54ef1a:c.instructions+=6;goto B54ef1a;
case 0x54ef20:c.instructions+=5;goto B54ef20;
case 0x54ef21:c.instructions+=4;goto B54ef21;
case 0x54ef22:c.instructions+=3;goto B54ef22;
case 0x54ef23:c.instructions+=2;goto B54ef23;
case 0x54ef26:c.instructions+=1;goto B54ef26;
case 0x54ef30:goto L54ef30;
case 0x54ef33:c.instructions+=9;goto B54ef33;
case 0x54ef34:c.instructions+=8;goto B54ef34;
case 0x54ef35:c.instructions+=7;goto B54ef35;
case 0x54ef37:c.instructions+=6;goto B54ef37;
case 0x54ef3d:c.instructions+=5;goto B54ef3d;
case 0x54ef42:c.instructions+=4;goto B54ef42;
case 0x54ef43:c.instructions+=3;goto B54ef43;
case 0x54ef47:c.instructions+=2;goto B54ef47;
case 0x54ef48:c.instructions+=1;goto B54ef48;
case 0x54ef4d:goto L54ef4d;
case 0x54ef53:c.instructions+=7;goto B54ef53;
case 0x54ef54:c.instructions+=6;goto B54ef54;
case 0x54ef58:c.instructions+=5;goto B54ef58;
case 0x54ef59:c.instructions+=4;goto B54ef59;
case 0x54ef5d:c.instructions+=3;goto B54ef5d;
case 0x54ef5f:c.instructions+=2;goto B54ef5f;
case 0x54ef60:c.instructions+=1;goto B54ef60;
case 0x54ef65:goto L54ef65;
case 0x54ef68:c.instructions+=4;goto B54ef68;
case 0x54ef6c:c.instructions+=3;goto B54ef6c;
case 0x54ef6d:c.instructions+=2;goto B54ef6d;
case 0x54ef6e:c.instructions+=1;goto B54ef6e;
case 0x54ef73:goto L54ef73;
case 0x54ef77:c.instructions+=7;goto B54ef77;
case 0x54ef7a:c.instructions+=6;goto B54ef7a;
case 0x54ef80:c.instructions+=5;goto B54ef80;
case 0x54ef85:c.instructions+=4;goto B54ef85;
case 0x54ef86:c.instructions+=3;goto B54ef86;
case 0x54ef8a:c.instructions+=2;goto B54ef8a;
case 0x54ef8b:c.instructions+=1;goto B54ef8b;
case 0x54ef90:goto L54ef90;
case 0x54ef96:c.instructions+=7;goto B54ef96;
case 0x54ef97:c.instructions+=6;goto B54ef97;
case 0x54ef9b:c.instructions+=5;goto B54ef9b;
case 0x54ef9c:c.instructions+=4;goto B54ef9c;
case 0x54efa0:c.instructions+=3;goto B54efa0;
case 0x54efa2:c.instructions+=2;goto B54efa2;
case 0x54efa3:c.instructions+=1;goto B54efa3;
case 0x54efa8:goto L54efa8;
case 0x54efab:c.instructions+=5;goto B54efab;
case 0x54efae:c.instructions+=4;goto B54efae;
case 0x54efb2:c.instructions+=3;goto B54efb2;
case 0x54efb3:c.instructions+=2;goto B54efb3;
case 0x54efb4:c.instructions+=1;goto B54efb4;
case 0x54efb9:goto L54efb9;
case 0x54efbc:c.instructions+=5;goto B54efbc;
case 0x54efc2:c.instructions+=4;goto B54efc2;
case 0x54efc5:c.instructions+=3;goto B54efc5;
case 0x54efc6:c.instructions+=2;goto B54efc6;
case 0x54efc8:c.instructions+=1;goto B54efc8;
case 0x54efcd:goto L54efcd;
case 0x54efd0:c.instructions+=6;goto B54efd0;
case 0x54efd6:c.instructions+=5;goto B54efd6;
case 0x54efdb:c.instructions+=4;goto B54efdb;
case 0x54efdc:c.instructions+=3;goto B54efdc;
case 0x54efe0:c.instructions+=2;goto B54efe0;
case 0x54efe1:c.instructions+=1;goto B54efe1;
case 0x54efe6:goto L54efe6;
case 0x54efec:c.instructions+=7;goto B54efec;
case 0x54efed:c.instructions+=6;goto B54efed;
case 0x54eff1:c.instructions+=5;goto B54eff1;
case 0x54eff2:c.instructions+=4;goto B54eff2;
case 0x54eff6:c.instructions+=3;goto B54eff6;
case 0x54eff8:c.instructions+=2;goto B54eff8;
case 0x54eff9:c.instructions+=1;goto B54eff9;
case 0x54effe:goto L54effe;
default:missing_instruction(c.pc);}
B54e001:L54e001:{c.instructions+=1;NFSU2_TR(0x54e001);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e020:L54e020:{c.instructions+=7;NFSU2_TR(0x54e020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B54e023:{NFSU2_TR(0x54e023);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e024:{NFSU2_TR(0x54e024);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e025:{NFSU2_TR(0x54e025);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54e029:{NFSU2_TR(0x54e029);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54e02d:{NFSU2_TR(0x54e02d);
__builtin_memmove((R+24),(R+4),4);
}
B54e02f:{NFSU2_TR(0x54e02f);
if(r1(R+518)){{goto L54e48e;}}
}
B54e035:L54e035:{c.instructions+=3;NFSU2_TR(0x54e035);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54e038:{NFSU2_TR(0x54e038);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e03a:{NFSU2_TR(0x54e03a);
if(r1(R+518)){{goto L54e48e;}}
}
B54e040:L54e040:{c.instructions+=9;NFSU2_TR(0x54e040);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54e043:{NFSU2_TR(0x54e043);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B54e045:{NFSU2_TR(0x54e045);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e046:{NFSU2_TR(0x54e046);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e04a:{NFSU2_TR(0x54e04a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54e04e:{NFSU2_TR(0x54e04e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e04f:{NFSU2_TR(0x54e04f);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54e052:{NFSU2_TR(0x54e052);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54e056:{NFSU2_TR(0x54e056);
{goto L54e060;}
}
B54e060:L54e060:{c.instructions+=3;NFSU2_TR(0x54e060);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54e063:{NFSU2_TR(0x54e063);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e065:{NFSU2_TR(0x54e065);
if(r1(R+518)){{goto L54e301;}}
}
B54e06b:L54e06b:{c.instructions+=11;NFSU2_TR(0x54e06b);
w4(R+12,u32(0x1ull));
}
B54e070:{NFSU2_TR(0x54e070);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B54e072:{NFSU2_TR(0x54e072);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54e074:{NFSU2_TR(0x54e074);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B54e078:{NFSU2_TR(0x54e078);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B54e07b:{NFSU2_TR(0x54e07b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54e07d:{NFSU2_TR(0x54e07d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e081:{NFSU2_TR(0x54e081);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e085:{NFSU2_TR(0x54e085);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B54e087:{NFSU2_TR(0x54e087);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B54e08a:{NFSU2_TR(0x54e08a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e09f;}}
}
B54e08c:L54e08c:{c.instructions+=5;NFSU2_TR(0x54e08c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54e08e:{NFSU2_TR(0x54e08e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B54e092:{NFSU2_TR(0x54e092);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B54e094:{NFSU2_TR(0x54e094);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B54e097:{NFSU2_TR(0x54e097);
if(r1(R+518)){{goto L54e09f;}}
}
B54e099:L54e099:{c.instructions+=2;NFSU2_TR(0x54e099);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e09d:{NFSU2_TR(0x54e09d);
__builtin_memmove((R+0),(R+12),4);
}
B54e09f:L54e09f:{c.instructions+=5;NFSU2_TR(0x54e09f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54e0a1:{NFSU2_TR(0x54e0a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B54e0a5:{NFSU2_TR(0x54e0a5);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B54e0a7:{NFSU2_TR(0x54e0a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B54e0aa:{NFSU2_TR(0x54e0aa);
if(r1(R+518)){{goto L54e0bd;}}
}
B54e0ac:L54e0ac:{c.instructions+=5;NFSU2_TR(0x54e0ac);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54e0ae:{NFSU2_TR(0x54e0ae);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B54e0b2:{NFSU2_TR(0x54e0b2);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B54e0b4:{NFSU2_TR(0x54e0b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B54e0b7:{NFSU2_TR(0x54e0b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e0bd;}}
}
B54e0b9:L54e0b9:{c.instructions+=1;NFSU2_TR(0x54e0b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e0bd:L54e0bd:{c.instructions+=5;NFSU2_TR(0x54e0bd);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54e0bf:{NFSU2_TR(0x54e0bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B54e0c3:{NFSU2_TR(0x54e0c3);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B54e0c5:{NFSU2_TR(0x54e0c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B54e0c8:{NFSU2_TR(0x54e0c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e0e9;}}
}
B54e0ca:L54e0ca:{c.instructions+=5;NFSU2_TR(0x54e0ca);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54e0cc:{NFSU2_TR(0x54e0cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B54e0d0:{NFSU2_TR(0x54e0d0);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B54e0d2:{NFSU2_TR(0x54e0d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B54e0d5:{NFSU2_TR(0x54e0d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e0e9;}}
}
B54e0d7:L54e0d7:{c.instructions+=2;NFSU2_TR(0x54e0d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e0d8:{NFSU2_TR(0x54e0d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e0ddull));
TAIL_STATIC(0x50b150u,50b);
}
B54e0dd:L54e0dd:{c.instructions+=3;NFSU2_TR(0x54e0dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e0e1:{NFSU2_TR(0x54e0e1);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B54e0e5:{NFSU2_TR(0x54e0e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e0e9:L54e0e9:{c.instructions+=4;NFSU2_TR(0x54e0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54e0ef:{NFSU2_TR(0x54e0ef);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B54e0f1:{NFSU2_TR(0x54e0f1);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B54e0f4:{NFSU2_TR(0x54e0f4);
if(r1(R+518)){{goto L54e243;}}
}
B54e0fa:L54e0fa:{c.instructions+=3;NFSU2_TR(0x54e0fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e0fe:{NFSU2_TR(0x54e0fe);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54e101:{NFSU2_TR(0x54e101);
if(r1(R+518)){{goto L54e1a4;}}
}
B54e107:L54e107:{c.instructions+=2;NFSU2_TR(0x54e107);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B54e108:{NFSU2_TR(0x54e108);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e243;}}
}
B54e10e:L54e10e:{c.instructions+=2;NFSU2_TR(0x54e10e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e110:{NFSU2_TR(0x54e110);
if(r1(R+518)){{goto L54e15e;}}
}
B54e112:L54e112:{c.instructions+=3;NFSU2_TR(0x54e112);
u8 U[4];
w4(U+0,u32(0x14dd0705ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e117:{NFSU2_TR(0x54e117);
__builtin_memmove((R+4),(R+20),4);
}
B54e119:{NFSU2_TR(0x54e119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e11eull));
TAIL_STATIC(0x5046d0u,504);
}
B54e11e:L54e11e:{c.instructions+=2;NFSU2_TR(0x54e11e);
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
B54e120:{NFSU2_TR(0x54e120);
if(r1(R+518)){{goto L54e15e;}}
}
B54e122:L54e122:{c.instructions+=8;NFSU2_TR(0x54e122);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e126:{NFSU2_TR(0x54e126);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e12c:{NFSU2_TR(0x54e12c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54e12e:{NFSU2_TR(0x54e12e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e12f:{NFSU2_TR(0x54e12f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e130:{NFSU2_TR(0x54e130);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e134:{NFSU2_TR(0x54e134);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e135:{NFSU2_TR(0x54e135);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e138ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54e138:L54e138:{c.instructions+=2;NFSU2_TR(0x54e138);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e13a:{NFSU2_TR(0x54e13a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e15e;}}
}
B54e13c:L54e13c:{c.instructions+=7;NFSU2_TR(0x54e13c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e13e:{NFSU2_TR(0x54e13e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e13f:{NFSU2_TR(0x54e13f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e140:{NFSU2_TR(0x54e140);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e142:{NFSU2_TR(0x54e142);
u8 U[4];
w4(U+0,u32(0x14dd0705ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e147:{NFSU2_TR(0x54e147);
__builtin_memmove((R+4),(R+24),4);
}
B54e149:{NFSU2_TR(0x54e149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e14eull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e14e:L54e14e:{c.instructions+=6;NFSU2_TR(0x54e14e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e150:{NFSU2_TR(0x54e150);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e152:{NFSU2_TR(0x54e152);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e153:{NFSU2_TR(0x54e153);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e154:{NFSU2_TR(0x54e154);
u8 U[4];
w4(U+0,u32(0x14dd0705ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e159:{NFSU2_TR(0x54e159);
{goto L54e23c;}
}
B54e15e:L54e15e:{c.instructions+=3;NFSU2_TR(0x54e15e);
u8 U[4];
w4(U+0,u32(0x14dd0705ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e163:{NFSU2_TR(0x54e163);
__builtin_memmove((R+4),(R+28),4);
}
B54e165:{NFSU2_TR(0x54e165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e16aull));
TAIL_STATIC(0x504800u,504);
}
B54e16a:L54e16a:{c.instructions+=2;NFSU2_TR(0x54e16a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e16c:{NFSU2_TR(0x54e16c);
if(r1(R+518)){{goto L54e243;}}
}
B54e172:L54e172:{c.instructions+=3;NFSU2_TR(0x54e172);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54e178:{NFSU2_TR(0x54e178);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e17a:{NFSU2_TR(0x54e17a);
if(r1(R+518)){{goto L54e243;}}
}
B54e180:L54e180:{c.instructions+=7;NFSU2_TR(0x54e180);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e182:{NFSU2_TR(0x54e182);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e184:{NFSU2_TR(0x54e184);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e185:{NFSU2_TR(0x54e185);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e187:{NFSU2_TR(0x54e187);
u8 U[4];
w4(U+0,u32(0x14dd0705ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e18c:{NFSU2_TR(0x54e18c);
__builtin_memmove((R+4),(R+24),4);
}
B54e18e:{NFSU2_TR(0x54e18e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e193ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e193:L54e193:{c.instructions+=6;NFSU2_TR(0x54e193);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e195:{NFSU2_TR(0x54e195);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e197:{NFSU2_TR(0x54e197);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e198:{NFSU2_TR(0x54e198);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e19a:{NFSU2_TR(0x54e19a);
u8 U[4];
w4(U+0,u32(0x14dd0705ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e19f:{NFSU2_TR(0x54e19f);
{goto L54e23c;}
}
B54e1a4:L54e1a4:{c.instructions+=3;NFSU2_TR(0x54e1a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e1a6:{NFSU2_TR(0x54e1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e1ac:{NFSU2_TR(0x54e1ac);
if(r1(R+518)){{goto L54e203;}}
}
B54e1ae:L54e1ae:{c.instructions+=3;NFSU2_TR(0x54e1ae);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1b3:{NFSU2_TR(0x54e1b3);
__builtin_memmove((R+4),(R+20),4);
}
B54e1b5:{NFSU2_TR(0x54e1b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e1baull));
TAIL_STATIC(0x5046d0u,504);
}
B54e1ba:L54e1ba:{c.instructions+=2;NFSU2_TR(0x54e1ba);
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
B54e1bc:{NFSU2_TR(0x54e1bc);
if(r1(R+518)){{goto L54e203;}}
}
B54e1be:L54e1be:{c.instructions+=8;NFSU2_TR(0x54e1be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e1c2:{NFSU2_TR(0x54e1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e1c8:{NFSU2_TR(0x54e1c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54e1ca:{NFSU2_TR(0x54e1ca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1cb:{NFSU2_TR(0x54e1cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1cc:{NFSU2_TR(0x54e1cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e1d0:{NFSU2_TR(0x54e1d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1d1:{NFSU2_TR(0x54e1d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e1d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54e1d4:L54e1d4:{c.instructions+=2;NFSU2_TR(0x54e1d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e1d6:{NFSU2_TR(0x54e1d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e203;}}
}
B54e1d8:L54e1d8:{c.instructions+=8;NFSU2_TR(0x54e1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e1de:{NFSU2_TR(0x54e1de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1e0:{NFSU2_TR(0x54e1e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1e1:{NFSU2_TR(0x54e1e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1e2:{NFSU2_TR(0x54e1e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1e4:{NFSU2_TR(0x54e1e4);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1e9:{NFSU2_TR(0x54e1e9);
__builtin_memmove((R+4),(R+24),4);
}
B54e1eb:{NFSU2_TR(0x54e1eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e1f0ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e1f0:L54e1f0:{c.instructions+=7;NFSU2_TR(0x54e1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54e1f6:{NFSU2_TR(0x54e1f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1f8:{NFSU2_TR(0x54e1f8);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1fa:{NFSU2_TR(0x54e1fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1fb:{NFSU2_TR(0x54e1fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e1fc:{NFSU2_TR(0x54e1fc);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e201:{NFSU2_TR(0x54e201);
{goto L54e23c;}
}
B54e203:L54e203:{c.instructions+=3;NFSU2_TR(0x54e203);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e208:{NFSU2_TR(0x54e208);
__builtin_memmove((R+4),(R+28),4);
}
B54e20a:{NFSU2_TR(0x54e20a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e20full));
TAIL_STATIC(0x504800u,504);
}
B54e20f:L54e20f:{c.instructions+=2;NFSU2_TR(0x54e20f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e211:{NFSU2_TR(0x54e211);
if(r1(R+518)){{goto L54e243;}}
}
B54e213:L54e213:{c.instructions+=3;NFSU2_TR(0x54e213);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54e219:{NFSU2_TR(0x54e219);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e21b:{NFSU2_TR(0x54e21b);
if(r1(R+518)){{goto L54e243;}}
}
B54e21d:L54e21d:{c.instructions+=7;NFSU2_TR(0x54e21d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e21f:{NFSU2_TR(0x54e21f);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e221:{NFSU2_TR(0x54e221);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e222:{NFSU2_TR(0x54e222);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e224:{NFSU2_TR(0x54e224);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e229:{NFSU2_TR(0x54e229);
__builtin_memmove((R+4),(R+24),4);
}
B54e22b:{NFSU2_TR(0x54e22b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e230ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e230:L54e230:{c.instructions+=5;NFSU2_TR(0x54e230);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e232:{NFSU2_TR(0x54e232);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e234:{NFSU2_TR(0x54e234);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e235:{NFSU2_TR(0x54e235);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e237:{NFSU2_TR(0x54e237);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e23c:L54e23c:{c.instructions+=2;NFSU2_TR(0x54e23c);
__builtin_memmove((R+4),(R+24),4);
}
B54e23e:{NFSU2_TR(0x54e23e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e243ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e243:L54e243:{c.instructions+=4;NFSU2_TR(0x54e243);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e247:{NFSU2_TR(0x54e247);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B54e249:{NFSU2_TR(0x54e249);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B54e24c:{NFSU2_TR(0x54e24c);
if(r1(R+518)){{goto L54e2de;}}
}
B54e252:L54e252:{c.instructions+=3;NFSU2_TR(0x54e252);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e256:{NFSU2_TR(0x54e256);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e258:{NFSU2_TR(0x54e258);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e2de;}}
}
B54e25e:L54e25e:{c.instructions+=2;NFSU2_TR(0x54e25e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54e264:{NFSU2_TR(0x54e264);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e2a8;}}
}
B54e266:L54e266:{c.instructions+=2;NFSU2_TR(0x54e266);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e268:{NFSU2_TR(0x54e268);
if(r1(R+518)){{goto L54e2a8;}}
}
B54e26a:L54e26a:{c.instructions+=4;NFSU2_TR(0x54e26a);
u8 U[4];
w4(U+0,u32(0x936a6a7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e26f:{NFSU2_TR(0x54e26f);
__builtin_memmove((R+4),(R+20),4);
}
B54e271:{NFSU2_TR(0x54e271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54e27b:{NFSU2_TR(0x54e27b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e280ull));
TAIL_STATIC(0x5046d0u,504);
}
B54e280:L54e280:{c.instructions+=2;NFSU2_TR(0x54e280);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e282:{NFSU2_TR(0x54e282);
if(r1(R+518)){{goto L54e2a8;}}
}
B54e284:L54e284:{c.instructions+=7;NFSU2_TR(0x54e284);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e286:{NFSU2_TR(0x54e286);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e287:{NFSU2_TR(0x54e287);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e288:{NFSU2_TR(0x54e288);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e28a:{NFSU2_TR(0x54e28a);
u8 U[4];
w4(U+0,u32(0x936a6a7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e28f:{NFSU2_TR(0x54e28f);
__builtin_memmove((R+4),(R+24),4);
}
B54e291:{NFSU2_TR(0x54e291);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e296ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e296:L54e296:{c.instructions+=7;NFSU2_TR(0x54e296);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e298:{NFSU2_TR(0x54e298);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e29a:{NFSU2_TR(0x54e29a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e29b:{NFSU2_TR(0x54e29b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e29c:{NFSU2_TR(0x54e29c);
u8 U[4];
w4(U+0,u32(0x936a6a7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2a1:{NFSU2_TR(0x54e2a1);
__builtin_memmove((R+4),(R+24),4);
}
B54e2a3:{NFSU2_TR(0x54e2a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e2a8ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e2a8:L54e2a8:{c.instructions+=3;NFSU2_TR(0x54e2a8);
u8 U[4];
w4(U+0,u32(0x936a6a7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2ad:{NFSU2_TR(0x54e2ad);
__builtin_memmove((R+4),(R+28),4);
}
B54e2af:{NFSU2_TR(0x54e2af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e2b4ull));
TAIL_STATIC(0x504800u,504);
}
B54e2b4:L54e2b4:{c.instructions+=2;NFSU2_TR(0x54e2b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e2b6:{NFSU2_TR(0x54e2b6);
if(r1(R+518)){{goto L54e2de;}}
}
B54e2b8:L54e2b8:{c.instructions+=7;NFSU2_TR(0x54e2b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2ba:{NFSU2_TR(0x54e2ba);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2bc:{NFSU2_TR(0x54e2bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2bd:{NFSU2_TR(0x54e2bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2bf:{NFSU2_TR(0x54e2bf);
u8 U[4];
w4(U+0,u32(0x936a6a7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2c4:{NFSU2_TR(0x54e2c4);
__builtin_memmove((R+4),(R+24),4);
}
B54e2c6:{NFSU2_TR(0x54e2c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e2cbull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e2cb:L54e2cb:{c.instructions+=7;NFSU2_TR(0x54e2cb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2cd:{NFSU2_TR(0x54e2cd);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2cf:{NFSU2_TR(0x54e2cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2d0:{NFSU2_TR(0x54e2d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2d2:{NFSU2_TR(0x54e2d2);
u8 U[4];
w4(U+0,u32(0x936a6a7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e2d7:{NFSU2_TR(0x54e2d7);
__builtin_memmove((R+4),(R+24),4);
}
B54e2d9:{NFSU2_TR(0x54e2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e2deull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e2de:L54e2de:{c.instructions+=3;NFSU2_TR(0x54e2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e2e4:{NFSU2_TR(0x54e2e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e2e6:{NFSU2_TR(0x54e2e6);
if(r1(R+518)){{goto L54e2ef;}}
}
B54e2e8:L54e2e8:{c.instructions+=2;NFSU2_TR(0x54e2e8);
__builtin_memmove((R+4),(R+24),4);
}
B54e2ea:{NFSU2_TR(0x54e2ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e2efull));
TAIL_STATIC(0x541fc0u,541);
}
B54e2ef:L54e2ef:{c.instructions+=5;NFSU2_TR(0x54e2ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e2f3:{NFSU2_TR(0x54e2f3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54e2f4:{NFSU2_TR(0x54e2f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B54e2f7:{NFSU2_TR(0x54e2f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e2fb:{NFSU2_TR(0x54e2fb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e060u);}goto L54e060;}}
}
B54e301:L54e301:{c.instructions+=3;NFSU2_TR(0x54e301);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54e304:{NFSU2_TR(0x54e304);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e306:{NFSU2_TR(0x54e306);
if(r1(R+518)){{goto L54e48c;}}
}
B54e30c:L54e30c:{c.instructions+=3;NFSU2_TR(0x54e30c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xafull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54e312:{NFSU2_TR(0x54e312);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e314:{NFSU2_TR(0x54e314);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e32c;}}
}
B54e316:L54e316:{c.instructions+=3;NFSU2_TR(0x54e316);
__builtin_memmove((R+0),gp(0x83a9c0),1);
}
B54e31b:{NFSU2_TR(0x54e31b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e31d:{NFSU2_TR(0x54e31d);
if(r1(R+518)){{goto L54e32c;}}
}
B54e31f:L54e31f:{c.instructions+=3;NFSU2_TR(0x54e31f);
__builtin_memmove((R+0),gp(0x83a9c4),4);
}
B54e324:{NFSU2_TR(0x54e324);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e326:{NFSU2_TR(0x54e326);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e48c;}}
}
B54e32c:L54e32c:{c.instructions+=4;NFSU2_TR(0x54e32c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e332:{NFSU2_TR(0x54e332);
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
B54e334:{NFSU2_TR(0x54e334);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e338:{NFSU2_TR(0x54e338);
if(r1(R+518)){{goto L54e48c;}}
}
B54e33e:L54e33e:{c.instructions+=8;NFSU2_TR(0x54e33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e344:{NFSU2_TR(0x54e344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54e346:{NFSU2_TR(0x54e346);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e347:{NFSU2_TR(0x54e347);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e34b:{NFSU2_TR(0x54e34b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e34c:{NFSU2_TR(0x54e34c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e350:{NFSU2_TR(0x54e350);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e351:{NFSU2_TR(0x54e351);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e354ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54e354:L54e354:{c.instructions+=2;NFSU2_TR(0x54e354);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e356:{NFSU2_TR(0x54e356);
if(r1(R+518)){{goto L54e48c;}}
}
B54e35c:L54e35c:{c.instructions+=5;NFSU2_TR(0x54e35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e362:{NFSU2_TR(0x54e362);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B54e364:{NFSU2_TR(0x54e364);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e366:{NFSU2_TR(0x54e366);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e36a:{NFSU2_TR(0x54e36a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54e48c;}}
}
B54e370:L54e370:{c.instructions+=5;NFSU2_TR(0x54e370);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e376:{NFSU2_TR(0x54e376);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B54e379:{NFSU2_TR(0x54e379);
u8 U[18];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B54e380:{NFSU2_TR(0x54e380);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e384:{NFSU2_TR(0x54e384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e3a4;}}
}
B54e386:L54e386:{c.instructions+=8;NFSU2_TR(0x54e386);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e38a:{NFSU2_TR(0x54e38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e390:{NFSU2_TR(0x54e390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54e392:{NFSU2_TR(0x54e392);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e393:{NFSU2_TR(0x54e393);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e394:{NFSU2_TR(0x54e394);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e398:{NFSU2_TR(0x54e398);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e399:{NFSU2_TR(0x54e399);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e39cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54e39c:L54e39c:{c.instructions+=2;NFSU2_TR(0x54e39c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e39e:{NFSU2_TR(0x54e39e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e3b3;}}
}
B54e3a0:L54e3a0:{c.instructions+=1;NFSU2_TR(0x54e3a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e3a4:L54e3a4:{c.instructions+=3;NFSU2_TR(0x54e3a4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B54e3a5:{NFSU2_TR(0x54e3a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B54e3a7:{NFSU2_TR(0x54e3a7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e370u);}goto L54e370;}}
}
B54e3a9:L54e3a9:{c.instructions+=6;NFSU2_TR(0x54e3a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54e3aa:{NFSU2_TR(0x54e3aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54e3ab:{NFSU2_TR(0x54e3ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54e3ac:{NFSU2_TR(0x54e3ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54e3ad:{NFSU2_TR(0x54e3ad);
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
B54e3b0:{NFSU2_TR(0x54e3b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e3b3:L54e3b3:{c.instructions+=2;NFSU2_TR(0x54e3b3);
w4(R+20,u32(0x4ull));
}
B54e3b8:{NFSU2_TR(0x54e3b8);
{goto L54e3c0;}
}
B54e3c0:L54e3c0:{c.instructions+=3;NFSU2_TR(0x54e3c0);
u8 U[16];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B54e3c7:{NFSU2_TR(0x54e3c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e3c9:{NFSU2_TR(0x54e3c9);
if(r1(R+518)){{goto L54e428;}}
}
B54e3cb:L54e3cb:{c.instructions+=4;NFSU2_TR(0x54e3cb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e3ce:{NFSU2_TR(0x54e3ce);
u8 U[16];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B54e3d9:{NFSU2_TR(0x54e3d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f7d78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B54e3e0:{NFSU2_TR(0x54e3e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e3e7;}}
}
B54e3e2:L54e3e2:{c.instructions+=1;NFSU2_TR(0x54e3e2);
w4(R+12,u32(0x936a6a7full));
}
B54e3e7:L54e3e7:{c.instructions+=4;NFSU2_TR(0x54e3e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e3eb:{NFSU2_TR(0x54e3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e3ee:{NFSU2_TR(0x54e3ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e3f0:{NFSU2_TR(0x54e3f0);
if(r1(R+518)){{goto L54e424;}}
}
B54e3f2:L54e3f2:{c.instructions+=2;NFSU2_TR(0x54e3f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54e3f5:{NFSU2_TR(0x54e3f5);
if(r1(R+518)){{goto L54e400;}}
}
B54e3f7:L54e3f7:{c.instructions+=3;NFSU2_TR(0x54e3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e3fa:{NFSU2_TR(0x54e3fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e3fc:{NFSU2_TR(0x54e3fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e3f2u);}goto L54e3f2;}}
}
B54e3fe:L54e3fe:{c.instructions+=1;NFSU2_TR(0x54e3fe);
{goto L54e424;}
}
B54e400:L54e400:{c.instructions+=8;NFSU2_TR(0x54e400);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54e404:{NFSU2_TR(0x54e404);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e406:{NFSU2_TR(0x54e406);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e407:{NFSU2_TR(0x54e407);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e408:{NFSU2_TR(0x54e408);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e40a:{NFSU2_TR(0x54e40a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e40b:{NFSU2_TR(0x54e40b);
__builtin_memmove((R+4),(R+24),4);
}
B54e40d:{NFSU2_TR(0x54e40d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e412ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e412:L54e412:{c.instructions+=8;NFSU2_TR(0x54e412);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e416:{NFSU2_TR(0x54e416);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e418:{NFSU2_TR(0x54e418);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e41a:{NFSU2_TR(0x54e41a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e41b:{NFSU2_TR(0x54e41b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e41c:{NFSU2_TR(0x54e41c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e41d:{NFSU2_TR(0x54e41d);
__builtin_memmove((R+4),(R+24),4);
}
B54e41f:{NFSU2_TR(0x54e41f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e424ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e424:L54e424:{c.instructions+=1;NFSU2_TR(0x54e424);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54e428:L54e428:{c.instructions+=3;NFSU2_TR(0x54e428);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B54e429:{NFSU2_TR(0x54e429);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0x13ull))));
}
B54e42c:{NFSU2_TR(0x54e42c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e3c0u);}goto L54e3c0;}}
}
B54e42e:L54e42e:{c.instructions+=3;NFSU2_TR(0x54e42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e434:{NFSU2_TR(0x54e434);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e436:{NFSU2_TR(0x54e436);
if(r1(R+518)){{goto L54e462;}}
}
B54e438:L54e438:{c.instructions+=7;NFSU2_TR(0x54e438);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e43a:{NFSU2_TR(0x54e43a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e43b:{NFSU2_TR(0x54e43b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e43c:{NFSU2_TR(0x54e43c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e43e:{NFSU2_TR(0x54e43e);
u8 U[4];
w4(U+0,u32(0x55d1e635ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e443:{NFSU2_TR(0x54e443);
__builtin_memmove((R+4),(R+24),4);
}
B54e445:{NFSU2_TR(0x54e445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e44aull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e44a:L54e44a:{c.instructions+=8;NFSU2_TR(0x54e44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e450:{NFSU2_TR(0x54e450);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e452:{NFSU2_TR(0x54e452);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e454:{NFSU2_TR(0x54e454);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e455:{NFSU2_TR(0x54e455);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e456:{NFSU2_TR(0x54e456);
u8 U[4];
w4(U+0,u32(0x55d1e635ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e45b:{NFSU2_TR(0x54e45b);
__builtin_memmove((R+4),(R+24),4);
}
B54e45d:{NFSU2_TR(0x54e45d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e462ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e462:L54e462:{c.instructions+=7;NFSU2_TR(0x54e462);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e464:{NFSU2_TR(0x54e464);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e465:{NFSU2_TR(0x54e465);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e466:{NFSU2_TR(0x54e466);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e468:{NFSU2_TR(0x54e468);
u8 U[4];
w4(U+0,u32(0xabc08912ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e46d:{NFSU2_TR(0x54e46d);
__builtin_memmove((R+4),(R+24),4);
}
B54e46f:{NFSU2_TR(0x54e46f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e474ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e474:L54e474:{c.instructions+=7;NFSU2_TR(0x54e474);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e476:{NFSU2_TR(0x54e476);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e478:{NFSU2_TR(0x54e478);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e479:{NFSU2_TR(0x54e479);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e47a:{NFSU2_TR(0x54e47a);
u8 U[4];
w4(U+0,u32(0xabc08912ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e47f:{NFSU2_TR(0x54e47f);
__builtin_memmove((R+4),(R+24),4);
}
B54e481:{NFSU2_TR(0x54e481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e486ull));
TAIL_STATIC(0x51aa20u,51a);
}
B54e486:L54e486:{c.instructions+=1;NFSU2_TR(0x54e486);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e48c:L54e48c:{c.instructions+=2;NFSU2_TR(0x54e48c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54e48d:{NFSU2_TR(0x54e48d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54e48e:L54e48e:{c.instructions+=4;NFSU2_TR(0x54e48e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54e48f:{NFSU2_TR(0x54e48f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54e490:{NFSU2_TR(0x54e490);
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
B54e493:{NFSU2_TR(0x54e493);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e4a0:L54e4a0:{c.instructions+=15;NFSU2_TR(0x54e4a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e4a2:{NFSU2_TR(0x54e4a2);
u8 U[4];
w4(U+0,u32(0x777b68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e4a7:{NFSU2_TR(0x54e4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e4ad:{NFSU2_TR(0x54e4ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e4ae:{NFSU2_TR(0x54e4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e4b5:{NFSU2_TR(0x54e4b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B54e4b8:{NFSU2_TR(0x54e4b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e4b9:{NFSU2_TR(0x54e4b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e4ba:{NFSU2_TR(0x54e4ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54e4be:{NFSU2_TR(0x54e4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e4c1:{NFSU2_TR(0x54e4c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e4c2:{NFSU2_TR(0x54e4c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e4c3:{NFSU2_TR(0x54e4c3);
u8 U[4];
w4(U+0,u32(0x79c80cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e4c8:{NFSU2_TR(0x54e4c8);
__builtin_memmove((R+28),(R+4),4);
}
B54e4ca:{NFSU2_TR(0x54e4ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e4cfull));
TAIL_STATIC(0x50d510u,50d);
}
B54e4cf:L54e4cf:{c.instructions+=7;NFSU2_TR(0x54e4cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54e4d2:{NFSU2_TR(0x54e4d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaecull));
s4(u32(r4(U+0)),r4(U+4));
}
B54e4da:{NFSU2_TR(0x54e4da);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54e4de:{NFSU2_TR(0x54e4de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e4df:{NFSU2_TR(0x54e4df);
__builtin_memmove((R+4),(R+24),4);
}
B54e4e1:{NFSU2_TR(0x54e4e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54e4e9:{NFSU2_TR(0x54e4e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e4eeull));
TAIL_STATIC(0x504880u,504);
}
B54e4ee:L54e4ee:{c.instructions+=6;NFSU2_TR(0x54e4ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54e4f1:{NFSU2_TR(0x54e4f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e4f3:{NFSU2_TR(0x54e4f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B54e4fb:{NFSU2_TR(0x54e4fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79aa4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54e503:{NFSU2_TR(0x54e503);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e507:{NFSU2_TR(0x54e507);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e516;}}
}
B54e509:L54e509:{c.instructions+=5;NFSU2_TR(0x54e509);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e50c:{NFSU2_TR(0x54e50c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e50e:{NFSU2_TR(0x54e50e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e50f:{NFSU2_TR(0x54e50f);
__builtin_memmove((R+4),(R+24),4);
}
B54e511:{NFSU2_TR(0x54e511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e516ull));
TAIL_STATIC(0x54d190u,54d);
}
B54e516:L54e516:{c.instructions+=4;NFSU2_TR(0x54e516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e519:{NFSU2_TR(0x54e519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e51a:{NFSU2_TR(0x54e51a);
__builtin_memmove((R+4),(R+28),4);
}
B54e51c:{NFSU2_TR(0x54e51c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e521ull));
TAIL_STATIC(0x51ccd0u,51c);
}
B54e521:L54e521:{c.instructions+=6;NFSU2_TR(0x54e521);
__builtin_memmove((R+28),(R+0),4);
}
B54e523:{NFSU2_TR(0x54e523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e526:{NFSU2_TR(0x54e526);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B54e529:{NFSU2_TR(0x54e529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e52a:{NFSU2_TR(0x54e52a);
w4(R+4,u32(0x8637b0ull));
}
B54e52f:{NFSU2_TR(0x54e52f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e534ull));
TAIL_STATIC(0x51bb70u,51b);
}
B54e534:L54e534:{c.instructions+=2;NFSU2_TR(0x54e534);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e536:{NFSU2_TR(0x54e536);
if(r1(R+518)){{goto L54e541;}}
}
B54e538:L54e538:{c.instructions+=4;NFSU2_TR(0x54e538);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e539:{NFSU2_TR(0x54e539);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e53a:{NFSU2_TR(0x54e53a);
__builtin_memmove((R+4),(R+0),4);
}
B54e53c:{NFSU2_TR(0x54e53c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e541ull));
TAIL_STATIC(0x51b9d0u,51b);
}
B54e541:L54e541:{c.instructions+=6;NFSU2_TR(0x54e541);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x79ab84ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54e549:{NFSU2_TR(0x54e549);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54e54d:{NFSU2_TR(0x54e54d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e54e:{NFSU2_TR(0x54e54e);
__builtin_memmove((R+4),(R+24),4);
}
B54e550:{NFSU2_TR(0x54e550);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54e558:{NFSU2_TR(0x54e558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e55dull));
TAIL_STATIC(0x504880u,504);
}
B54e55d:L54e55d:{c.instructions+=6;NFSU2_TR(0x54e55d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ab8cull));
s4(u32(r4(U+0)),r4(U+4));
}
B54e565:{NFSU2_TR(0x54e565);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54e569:{NFSU2_TR(0x54e569);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e56a:{NFSU2_TR(0x54e56a);
__builtin_memmove((R+4),(R+24),4);
}
B54e56c:{NFSU2_TR(0x54e56c);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e571:{NFSU2_TR(0x54e571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e576ull));
TAIL_STATIC(0x504880u,504);
}
B54e576:L54e576:{c.instructions+=9;NFSU2_TR(0x54e576);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e579:{NFSU2_TR(0x54e579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e57c:{NFSU2_TR(0x54e57c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e580:{NFSU2_TR(0x54e580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54e581:{NFSU2_TR(0x54e581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54e582:{NFSU2_TR(0x54e582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54e583:{NFSU2_TR(0x54e583);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e58a:{NFSU2_TR(0x54e58a);
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
B54e58d:{NFSU2_TR(0x54e58d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e590:L54e590:{c.instructions+=5;NFSU2_TR(0x54e590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e591:{NFSU2_TR(0x54e591);
__builtin_memmove((R+24),(R+4),4);
}
B54e593:{NFSU2_TR(0x54e593);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e596:{NFSU2_TR(0x54e596);
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
B54e598:{NFSU2_TR(0x54e598);
if(r1(R+518)){{goto L54e59f;}}
}
B54e59a:L54e59a:{c.instructions+=1;NFSU2_TR(0x54e59a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e59full));
TAIL_STATIC(0x54c8a0u,54c);
}
B54e59f:L54e59f:{c.instructions+=3;NFSU2_TR(0x54e59f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e5a3:{NFSU2_TR(0x54e5a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54e5a4:{NFSU2_TR(0x54e5a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e5b0:L54e5b0:{c.instructions+=6;NFSU2_TR(0x54e5b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e5b1:{NFSU2_TR(0x54e5b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e5b2:{NFSU2_TR(0x54e5b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54e5b6:{NFSU2_TR(0x54e5b6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e5bc:{NFSU2_TR(0x54e5bc);
__builtin_memmove((R+24),(R+4),4);
}
B54e5be:{NFSU2_TR(0x54e5be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e5e6;}}
}
B54e5c0:L54e5c0:{c.instructions+=3;NFSU2_TR(0x54e5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e5c3:{NFSU2_TR(0x54e5c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e5c5:{NFSU2_TR(0x54e5c5);
if(r1(R+518)){{goto L54e5e6;}}
}
B54e5c7:L54e5c7:{c.instructions+=3;NFSU2_TR(0x54e5c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54e5ca:{NFSU2_TR(0x54e5ca);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B54e5cc:{NFSU2_TR(0x54e5cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e5d7;}}
}
B54e5ce:L54e5ce:{c.instructions+=4;NFSU2_TR(0x54e5ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54e5cf:{NFSU2_TR(0x54e5cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e5d3:{NFSU2_TR(0x54e5d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54e5d4:{NFSU2_TR(0x54e5d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e5d7:L54e5d7:{c.instructions+=2;NFSU2_TR(0x54e5d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e5d9:{NFSU2_TR(0x54e5d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e5e6;}}
}
B54e5db:L54e5db:{c.instructions+=2;NFSU2_TR(0x54e5db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e5df:{NFSU2_TR(0x54e5df);
s1(0x83a9c0,u8(0x1ull));
}
B54e5e6:L54e5e6:{c.instructions+=3;NFSU2_TR(0x54e5e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e5e9:{NFSU2_TR(0x54e5e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e5eb:{NFSU2_TR(0x54e5eb);
if(r1(R+518)){{goto L54e648;}}
}
B54e5ed:L54e5ed:{c.instructions+=2;NFSU2_TR(0x54e5ed);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd15c04ecull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e5f3:{NFSU2_TR(0x54e5f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e64f;}}
}
B54e5f5:L54e5f5:{c.instructions+=4;NFSU2_TR(0x54e5f5);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e5fa:{NFSU2_TR(0x54e5fa);
u8 U[4];
w4(U+0,u32(0x83a7b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e5ff:{NFSU2_TR(0x54e5ff);
u8 U[4];
w4(U+0,u32(0x83a8b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e604:{NFSU2_TR(0x54e604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e609ull));
TAIL_STATIC(0x43dc00u,43d);
}
B54e609:L54e609:{c.instructions+=5;NFSU2_TR(0x54e609);
s1(0x83a9c0,u8(0x0ull));
}
B54e610:{NFSU2_TR(0x54e610);
s4(0x83a9c4,u32(0x0ull));
}
B54e61a:{NFSU2_TR(0x54e61a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54e61c:{NFSU2_TR(0x54e61c);
w4(R+4,u32(0x40ull));
}
B54e621:{NFSU2_TR(0x54e621);
w4(R+28,u32(0x83a8b0ull));
}
B54e626:L54e626:{c.instructions+=1;NFSU2_TR(0x54e626);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54e628;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e626u);}goto L54e626;}
}
B54e628:L54e628:{c.instructions+=3;NFSU2_TR(0x54e628);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54e62b:{NFSU2_TR(0x54e62b);
w4(R+4,u32(0x40ull));
}
B54e630:{NFSU2_TR(0x54e630);
w4(R+28,u32(0x83a7b0ull));
}
B54e635:L54e635:{c.instructions+=1;NFSU2_TR(0x54e635);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L54e637;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e635u);}goto L54e635;}
}
B54e637:L54e637:{c.instructions+=3;NFSU2_TR(0x54e637);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e63a:{NFSU2_TR(0x54e63a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e63c:{NFSU2_TR(0x54e63c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e641ull));
TAIL_STATIC(0x540ab0u,540);
}
B54e641:L54e641:{c.instructions+=2;NFSU2_TR(0x54e641);
__builtin_memmove((R+4),(R+24),4);
}
B54e643:{NFSU2_TR(0x54e643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e648ull));
TAIL_STATIC(0x51dc80u,51d);
}
B54e648:L54e648:{c.instructions+=4;NFSU2_TR(0x54e648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54e649:{NFSU2_TR(0x54e649);
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
B54e64b:{NFSU2_TR(0x54e64b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54e64c:{NFSU2_TR(0x54e64c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e64f:L54e64f:{c.instructions+=3;NFSU2_TR(0x54e64f);
__builtin_memmove((R+0),gp(0x83a9c0),1);
}
B54e654:{NFSU2_TR(0x54e654);
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
B54e656:{NFSU2_TR(0x54e656);
if(r1(R+518)){{goto L54e68f;}}
}
B54e658:L54e658:{c.instructions+=3;NFSU2_TR(0x54e658);
__builtin_memmove((R+0),gp(0x83a9c4),4);
}
B54e65d:{NFSU2_TR(0x54e65d);
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
B54e65f:{NFSU2_TR(0x54e65f);
if(r1(R+518)){{goto L54e68f;}}
}
B54e661:L54e661:{c.instructions+=2;NFSU2_TR(0x54e661);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e667:{NFSU2_TR(0x54e667);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e675;}}
}
B54e669:L54e669:{c.instructions+=1;NFSU2_TR(0x54e669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e66eull));
TAIL_STATIC(0x54c8a0u,54c);
}
B54e66e:L54e66e:{c.instructions+=4;NFSU2_TR(0x54e66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54e66f:{NFSU2_TR(0x54e66f);
w1(R+0,u8(0x1ull));
}
B54e671:{NFSU2_TR(0x54e671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54e672:{NFSU2_TR(0x54e672);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e675:L54e675:{c.instructions+=2;NFSU2_TR(0x54e675);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e67b:{NFSU2_TR(0x54e67b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e689;}}
}
B54e67d:L54e67d:{c.instructions+=1;NFSU2_TR(0x54e67d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e682ull));
TAIL_STATIC(0x54c7f0u,54c);
}
B54e682:L54e682:{c.instructions+=4;NFSU2_TR(0x54e682);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54e683:{NFSU2_TR(0x54e683);
w1(R+0,u8(0x1ull));
}
B54e685:{NFSU2_TR(0x54e685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54e686:{NFSU2_TR(0x54e686);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e689:L54e689:{c.instructions+=2;NFSU2_TR(0x54e689);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e68a:{NFSU2_TR(0x54e68a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e68full));
TAIL_STATIC(0x540bf0u,540);
}
B54e68f:L54e68f:{c.instructions+=4;NFSU2_TR(0x54e68f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54e690:{NFSU2_TR(0x54e690);
w1(R+0,u8(0x1ull));
}
B54e692:{NFSU2_TR(0x54e692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54e693:{NFSU2_TR(0x54e693);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e6a0:L54e6a0:{c.instructions+=3;NFSU2_TR(0x54e6a0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e6a2:{NFSU2_TR(0x54e6a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e6a6:{NFSU2_TR(0x54e6a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e6abull));
TAIL_STATIC(0x542990u,542);
}
B54e6ab:L54e6ab:{c.instructions+=1;NFSU2_TR(0x54e6ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e6b0:L54e6b0:{c.instructions+=5;NFSU2_TR(0x54e6b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e6b1:{NFSU2_TR(0x54e6b1);
__builtin_memmove((R+24),(R+4),4);
}
B54e6b3:{NFSU2_TR(0x54e6b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e6b5:{NFSU2_TR(0x54e6b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e6b9:{NFSU2_TR(0x54e6b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e6beull));
TAIL_STATIC(0x542990u,542);
}
B54e6be:L54e6be:{c.instructions+=4;NFSU2_TR(0x54e6be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e6c1:{NFSU2_TR(0x54e6c1);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e6c6:{NFSU2_TR(0x54e6c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e6c7:{NFSU2_TR(0x54e6c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e6ccull));
TAIL_STATIC(0x4954e0u,495);
}
B54e6cc:L54e6cc:{c.instructions+=3;NFSU2_TR(0x54e6cc);
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
B54e6cf:{NFSU2_TR(0x54e6cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54e6d0:{NFSU2_TR(0x54e6d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54e6e0:L54e6e0:{c.instructions+=9;NFSU2_TR(0x54e6e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e6e1:{NFSU2_TR(0x54e6e1);
__builtin_memmove((R+20),(R+16),4);
}
B54e6e3:{NFSU2_TR(0x54e6e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e6e4:{NFSU2_TR(0x54e6e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e6e5:{NFSU2_TR(0x54e6e5);
__builtin_memmove((R+28),(R+4),4);
}
B54e6e7:{NFSU2_TR(0x54e6e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54e6ea:{NFSU2_TR(0x54e6ea);
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
B54e6ec:{NFSU2_TR(0x54e6ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e6ef:{NFSU2_TR(0x54e6ef);
if(r1(R+518)){{goto L54eb2b;}}
}
B54e6f5:L54e6f5:{c.instructions+=3;NFSU2_TR(0x54e6f5);
__builtin_memmove((R+0),gp(0x8384dc),1);
}
B54e6fa:{NFSU2_TR(0x54e6fa);
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
B54e6fc:{NFSU2_TR(0x54e6fc);
if(r1(R+518)){{goto L54eb2b;}}
}
B54e702:L54e702:{c.instructions+=5;NFSU2_TR(0x54e702);
__builtin_memmove((R+0),gp(0x850078),4);
}
B54e707:{NFSU2_TR(0x54e707);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e70a:{NFSU2_TR(0x54e70a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e70b:{NFSU2_TR(0x54e70b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e70c:{NFSU2_TR(0x54e70c);
if(r1(R+518)){{goto L54e715;}}
}
B54e70e:L54e70e:{c.instructions+=2;NFSU2_TR(0x54e70e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e713:{NFSU2_TR(0x54e713);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e72e;}}
}
B54e715:L54e715:{c.instructions+=2;NFSU2_TR(0x54e715);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e71c:{NFSU2_TR(0x54e71c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e72e;}}
}
B54e71e:L54e71e:{c.instructions+=3;NFSU2_TR(0x54e71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54e721:{NFSU2_TR(0x54e721);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e724:{NFSU2_TR(0x54e724);
if(r1(R+518)){{goto L54e731;}}
}
B54e726:L54e726:{c.instructions+=3;NFSU2_TR(0x54e726);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffffeull))));
}
B54e729:{NFSU2_TR(0x54e729);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x2ull))));
}
B54e72c:{NFSU2_TR(0x54e72c);
{goto L54e731;}
}
B54e72e:L54e72e:{c.instructions+=1;NFSU2_TR(0x54e72e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54e731:L54e731:{c.instructions+=2;NFSU2_TR(0x54e731);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e736:{NFSU2_TR(0x54e736);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e743;}}
}
B54e738:L54e738:{c.instructions+=2;NFSU2_TR(0x54e738);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e73b:{NFSU2_TR(0x54e73b);
if(r1(R+518)){{goto L54e743;}}
}
B54e73d:L54e73d:{c.instructions+=1;NFSU2_TR(0x54e73d);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffffbfffull))));
}
B54e743:L54e743:{c.instructions+=6;NFSU2_TR(0x54e743);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e746:{NFSU2_TR(0x54e746);
u8 U[4];
w4(U+0,u32(0x83a9e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e74b:{NFSU2_TR(0x54e74b);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e750:{NFSU2_TR(0x54e750);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e755:{NFSU2_TR(0x54e755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e756:{NFSU2_TR(0x54e756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e75bull));
TAIL_STATIC(0x537b80u,537);
}
B54e75b:L54e75b:{c.instructions+=11;NFSU2_TR(0x54e75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e75e:{NFSU2_TR(0x54e75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54e761:{NFSU2_TR(0x54e761);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B54e764:{NFSU2_TR(0x54e764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e767:{NFSU2_TR(0x54e767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54e769:{NFSU2_TR(0x54e769);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54e76c:{NFSU2_TR(0x54e76c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e76e:{NFSU2_TR(0x54e76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e771:{NFSU2_TR(0x54e771);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e774:{NFSU2_TR(0x54e774);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e777:{NFSU2_TR(0x54e777);
if(r1(R+518)){{goto L54e77e;}}
}
B54e779:L54e779:{c.instructions+=2;NFSU2_TR(0x54e779);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B54e77c:{NFSU2_TR(0x54e77c);
{goto L54e780;}
}
B54e77e:L54e77e:{c.instructions+=1;NFSU2_TR(0x54e77e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54e780:L54e780:{c.instructions+=3;NFSU2_TR(0x54e780);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e783:{NFSU2_TR(0x54e783);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e785:{NFSU2_TR(0x54e785);
if(r1(R+518)){{goto L54e78c;}}
}
B54e787:L54e787:{c.instructions+=2;NFSU2_TR(0x54e787);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54e78a:{NFSU2_TR(0x54e78a);
{goto L54e78e;}
}
B54e78c:L54e78c:{c.instructions+=1;NFSU2_TR(0x54e78c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54e78e:L54e78e:{c.instructions+=2;NFSU2_TR(0x54e78e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e790:{NFSU2_TR(0x54e790);
if(r1(R+518)){{goto L54e7c2;}}
}
B54e792:L54e792:{c.instructions+=4;NFSU2_TR(0x54e792);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e795:{NFSU2_TR(0x54e795);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e797:{NFSU2_TR(0x54e797);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e79b:{NFSU2_TR(0x54e79b);
if(r1(R+518)){{goto L54e7a6;}}
}
B54e79d:L54e79d:{c.instructions+=2;NFSU2_TR(0x54e79d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e79e:{NFSU2_TR(0x54e79e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e7a3ull));
TAIL_STATIC(0x50ca00u,50c);
}
B54e7a3:L54e7a3:{c.instructions+=1;NFSU2_TR(0x54e7a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54e7a6:L54e7a6:{c.instructions+=3;NFSU2_TR(0x54e7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e7a9:{NFSU2_TR(0x54e7a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e7ab:{NFSU2_TR(0x54e7ab);
if(r1(R+518)){{goto L54e7b6;}}
}
B54e7ad:L54e7ad:{c.instructions+=2;NFSU2_TR(0x54e7ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e7ae:{NFSU2_TR(0x54e7ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e7b3ull));
TAIL_STATIC(0x50ca00u,50c);
}
B54e7b3:L54e7b3:{c.instructions+=1;NFSU2_TR(0x54e7b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54e7b6:L54e7b6:{c.instructions+=3;NFSU2_TR(0x54e7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54e7b9:{NFSU2_TR(0x54e7b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e7bb:{NFSU2_TR(0x54e7bb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e77eu);}goto L54e77e;}}
}
B54e7bd:L54e7bd:{c.instructions+=2;NFSU2_TR(0x54e7bd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B54e7c0:{NFSU2_TR(0x54e7c0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e780u);}goto L54e780;}
}
B54e7c2:L54e7c2:{c.instructions+=3;NFSU2_TR(0x54e7c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e7c5:{NFSU2_TR(0x54e7c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e7c7:{NFSU2_TR(0x54e7c7);
if(r1(R+518)){{goto L54e853;}}
}
B54e7cd:L54e7cd:{c.instructions+=2;NFSU2_TR(0x54e7cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e7cf:{NFSU2_TR(0x54e7cf);
if(r1(R+518)){{goto L54e806;}}
}
B54e7d1:L54e7d1:{c.instructions+=3;NFSU2_TR(0x54e7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e7d4:{NFSU2_TR(0x54e7d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e7d5:{NFSU2_TR(0x54e7d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e7daull));
TAIL_STATIC(0x50ca00u,50c);
}
B54e7da:L54e7da:{c.instructions+=3;NFSU2_TR(0x54e7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e7dd:{NFSU2_TR(0x54e7dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e7de:{NFSU2_TR(0x54e7de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e7e3ull));
TAIL_STATIC(0x50ca00u,50c);
}
B54e7e3:L54e7e3:{c.instructions+=4;NFSU2_TR(0x54e7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e7e6:{NFSU2_TR(0x54e7e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54e7e9:{NFSU2_TR(0x54e7e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e7eb:{NFSU2_TR(0x54e7eb);
if(r1(R+518)){{goto L54e853;}}
}
B54e7ed:L54e7ed:{c.instructions+=4;NFSU2_TR(0x54e7ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e7ef:{NFSU2_TR(0x54e7ef);
u8 U[4];
w4(U+0,u32(0x79b2e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e7f4:{NFSU2_TR(0x54e7f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e7f5:{NFSU2_TR(0x54e7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e7faull));
TAIL_STATIC(0x51cf70u,51c);
}
B54e7fa:L54e7fa:{c.instructions+=3;NFSU2_TR(0x54e7fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54e7fd:{NFSU2_TR(0x54e7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54e804:{NFSU2_TR(0x54e804);
{goto L54e853;}
}
B54e806:L54e806:{c.instructions+=7;NFSU2_TR(0x54e806);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e808:{NFSU2_TR(0x54e808);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e80d:{NFSU2_TR(0x54e80d);
s1(0x838528,u8(0x0ull));
}
B54e814:{NFSU2_TR(0x54e814);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54e817:{NFSU2_TR(0x54e817);
u8 U[4];
w4(U+0,u32(0x79c82cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e81c:{NFSU2_TR(0x54e81c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e81d:{NFSU2_TR(0x54e81d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e822ull));
TAIL_STATIC(0x5426c0u,542);
}
B54e822:L54e822:{c.instructions+=4;NFSU2_TR(0x54e822);
__builtin_memmove((R+0),gp(0x850078),4);
}
B54e827:{NFSU2_TR(0x54e827);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54e82a:{NFSU2_TR(0x54e82a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e82d:{NFSU2_TR(0x54e82d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e838;}}
}
B54e82f:L54e82f:{c.instructions+=2;NFSU2_TR(0x54e82f);
__builtin_memmove((R+4),(R+28),4);
}
B54e831:{NFSU2_TR(0x54e831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e836ull));
TAIL_STATIC(0x537e60u,537);
}
B54e836:L54e836:{c.instructions+=1;NFSU2_TR(0x54e836);
{goto L54e853;}
}
B54e838:L54e838:{c.instructions+=6;NFSU2_TR(0x54e838);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e83b:{NFSU2_TR(0x54e83b);
u8 U[4];
w4(U+0,u32(0x83a9e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e840:{NFSU2_TR(0x54e840);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e845:{NFSU2_TR(0x54e845);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e84a:{NFSU2_TR(0x54e84a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e84b:{NFSU2_TR(0x54e84b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e850ull));
TAIL_STATIC(0x537b80u,537);
}
B54e850:L54e850:{c.instructions+=1;NFSU2_TR(0x54e850);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54e853:L54e853:{c.instructions+=4;NFSU2_TR(0x54e853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e856:{NFSU2_TR(0x54e856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B54e858:{NFSU2_TR(0x54e858);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e85a:{NFSU2_TR(0x54e85a);
if(r1(R+518)){{goto L54e861;}}
}
B54e85c:L54e85c:{c.instructions+=2;NFSU2_TR(0x54e85c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B54e85f:{NFSU2_TR(0x54e85f);
{goto L54e863;}
}
B54e861:L54e861:{c.instructions+=1;NFSU2_TR(0x54e861);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54e863:L54e863:{c.instructions+=3;NFSU2_TR(0x54e863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54e866:{NFSU2_TR(0x54e866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54e86d:{NFSU2_TR(0x54e86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e870:L54e870:{c.instructions+=2;NFSU2_TR(0x54e870);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e872:{NFSU2_TR(0x54e872);
if(r1(R+518)){{goto L54e879;}}
}
B54e874:L54e874:{c.instructions+=2;NFSU2_TR(0x54e874);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B54e877:{NFSU2_TR(0x54e877);
{goto L54e87b;}
}
B54e879:L54e879:{c.instructions+=1;NFSU2_TR(0x54e879);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54e87b:L54e87b:{c.instructions+=2;NFSU2_TR(0x54e87b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e87d:{NFSU2_TR(0x54e87d);
if(r1(R+518)){{goto L54e95e;}}
}
B54e883:L54e883:{c.instructions+=6;NFSU2_TR(0x54e883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54e886:{NFSU2_TR(0x54e886);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e889:{NFSU2_TR(0x54e889);
w4(R+28,u32(0x1ull));
}
B54e88e:{NFSU2_TR(0x54e88e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B54e890:{NFSU2_TR(0x54e890);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e892:{NFSU2_TR(0x54e892);
if(r1(R+518)){{goto L54e94e;}}
}
B54e898:L54e898:{c.instructions+=2;NFSU2_TR(0x54e898);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x20000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e89e:{NFSU2_TR(0x54e89e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54e8ba;}}
}
B54e8a0:L54e8a0:{c.instructions+=1;NFSU2_TR(0x54e8a0);
if(r1(R+518)){{goto L54e94e;}}
}
B54e8a6:L54e8a6:{c.instructions+=2;NFSU2_TR(0x54e8a6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e8ac:{NFSU2_TR(0x54e8ac);
if(r1(R+518)){{goto L54e94e;}}
}
B54e8b2:L54e8b2:{c.instructions+=2;NFSU2_TR(0x54e8b2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e8b8:{NFSU2_TR(0x54e8b8);
{goto L54e8c0;}
}
B54e8ba:L54e8ba:{c.instructions+=1;NFSU2_TR(0x54e8ba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e8c0:L54e8c0:{c.instructions+=1;NFSU2_TR(0x54e8c0);
if(r1(R+518)){{goto L54e94e;}}
}
B54e8c6:L54e8c6:{c.instructions+=3;NFSU2_TR(0x54e8c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e8c7:{NFSU2_TR(0x54e8c7);
__builtin_memmove((R+4),(R+12),4);
}
B54e8c9:{NFSU2_TR(0x54e8c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e8ceull));
TAIL_STATIC(0x52d330u,52d);
}
B54e8ce:L54e8ce:{c.instructions+=3;NFSU2_TR(0x54e8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e8d1:{NFSU2_TR(0x54e8d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e8d3:{NFSU2_TR(0x54e8d3);
if(r1(R+518)){{goto L54e8df;}}
}
B54e8d5:L54e8d5:{c.instructions+=3;NFSU2_TR(0x54e8d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e8d6:{NFSU2_TR(0x54e8d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e8d7:{NFSU2_TR(0x54e8d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e8dcull));
TAIL_STATIC(0x50c900u,50c);
}
B54e8dc:L54e8dc:{c.instructions+=1;NFSU2_TR(0x54e8dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54e8df:L54e8df:{c.instructions+=5;NFSU2_TR(0x54e8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e8e2:{NFSU2_TR(0x54e8e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e8e4:{NFSU2_TR(0x54e8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e8e7:{NFSU2_TR(0x54e8e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e8eb:{NFSU2_TR(0x54e8eb);
if(r1(R+518)){{goto L54e8f6;}}
}
B54e8ed:L54e8ed:{c.instructions+=2;NFSU2_TR(0x54e8ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e8ee:{NFSU2_TR(0x54e8ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e8f3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B54e8f3:L54e8f3:{c.instructions+=1;NFSU2_TR(0x54e8f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54e8f6:L54e8f6:{c.instructions+=3;NFSU2_TR(0x54e8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e8f9:{NFSU2_TR(0x54e8f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e8fb:{NFSU2_TR(0x54e8fb);
if(r1(R+518)){{goto L54e906;}}
}
B54e8fd:L54e8fd:{c.instructions+=2;NFSU2_TR(0x54e8fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e8fe:{NFSU2_TR(0x54e8fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e903ull));
TAIL_STATIC(0x50ca50u,50c);
}
B54e903:L54e903:{c.instructions+=1;NFSU2_TR(0x54e903);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54e906:L54e906:{c.instructions+=5;NFSU2_TR(0x54e906);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54e909:{NFSU2_TR(0x54e909);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e90a:{NFSU2_TR(0x54e90a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e90b:{NFSU2_TR(0x54e90b);
__builtin_memmove((R+4),(R+12),4);
}
B54e90d:{NFSU2_TR(0x54e90d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e912ull));
TAIL_STATIC(0x5428b0u,542);
}
B54e912:L54e912:{c.instructions+=4;NFSU2_TR(0x54e912);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e915:{NFSU2_TR(0x54e915);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e917:{NFSU2_TR(0x54e917);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e91b:{NFSU2_TR(0x54e91b);
if(r1(R+518)){{goto L54e926;}}
}
B54e91d:L54e91d:{c.instructions+=2;NFSU2_TR(0x54e91d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e91e:{NFSU2_TR(0x54e91e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e923ull));
TAIL_STATIC(0x50ca50u,50c);
}
B54e923:L54e923:{c.instructions+=1;NFSU2_TR(0x54e923);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54e926:L54e926:{c.instructions+=3;NFSU2_TR(0x54e926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e929:{NFSU2_TR(0x54e929);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e92b:{NFSU2_TR(0x54e92b);
if(r1(R+518)){{goto L54e936;}}
}
B54e92d:L54e92d:{c.instructions+=2;NFSU2_TR(0x54e92d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e92e:{NFSU2_TR(0x54e92e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e933ull));
TAIL_STATIC(0x50ca50u,50c);
}
B54e933:L54e933:{c.instructions+=1;NFSU2_TR(0x54e933);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54e936:L54e936:{c.instructions+=3;NFSU2_TR(0x54e936);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54e939:{NFSU2_TR(0x54e939);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e93b:{NFSU2_TR(0x54e93b);
if(r1(R+518)){{goto L54e942;}}
}
B54e93d:L54e93d:{c.instructions+=2;NFSU2_TR(0x54e93d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B54e940:{NFSU2_TR(0x54e940);
{goto L54e944;}
}
B54e942:L54e942:{c.instructions+=1;NFSU2_TR(0x54e942);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54e944:L54e944:{c.instructions+=3;NFSU2_TR(0x54e944);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54e947:{NFSU2_TR(0x54e947);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e94a:{NFSU2_TR(0x54e94a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54e94e:L54e94e:{c.instructions+=5;NFSU2_TR(0x54e94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54e951:{NFSU2_TR(0x54e951);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54e952:{NFSU2_TR(0x54e952);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54e955:{NFSU2_TR(0x54e955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e958:{NFSU2_TR(0x54e958);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e870u);}goto L54e870;}}
}
B54e95e:L54e95e:{c.instructions+=2;NFSU2_TR(0x54e95e);
u8 U[18];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0x18000ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B54e965:{NFSU2_TR(0x54e965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54eb29;}}
}
B54e96b:L54e96b:{c.instructions+=4;NFSU2_TR(0x54e96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54e96e:{NFSU2_TR(0x54e96e);
w4(R+4,u32(0x79c820ull));
}
B54e973:{NFSU2_TR(0x54e973);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B54e976:{NFSU2_TR(0x54e976);
w1(R+0,u8(0x52ull));
}
B54e978:L54e978:{c.instructions+=3;NFSU2_TR(0x54e978);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B54e97b:{NFSU2_TR(0x54e97b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54e97d:{NFSU2_TR(0x54e97d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54e985;}}
}
B54e97f:L54e97f:{c.instructions+=2;NFSU2_TR(0x54e97f);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e981:{NFSU2_TR(0x54e981);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54e985;}}
}
B54e983:L54e983:{c.instructions+=1;NFSU2_TR(0x54e983);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54e985:L54e985:{c.instructions+=6;NFSU2_TR(0x54e985);
w4(R+0,u32(r1(R+0)));
}
B54e988:{NFSU2_TR(0x54e988);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B54e98a:{NFSU2_TR(0x54e98a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54e98d:{NFSU2_TR(0x54e98d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54e98e:{NFSU2_TR(0x54e98e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54e990:{NFSU2_TR(0x54e990);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e978u);}goto L54e978;}}
}
B54e992:L54e992:{c.instructions+=2;NFSU2_TR(0x54e992);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e994:{NFSU2_TR(0x54e994);
if(r1(R+518)){{goto L54e9af;}}
}
B54e996:L54e996:{c.instructions+=2;NFSU2_TR(0x54e996);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e997:{NFSU2_TR(0x54e997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e99cull));
TAIL_STATIC(0x52cef0u,52c);
}
B54e99c:L54e99c:{c.instructions+=3;NFSU2_TR(0x54e99c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54e99f:{NFSU2_TR(0x54e99f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e9a1:{NFSU2_TR(0x54e9a1);
if(r1(R+518)){{goto L54e9af;}}
}
B54e9a3:L54e9a3:{c.instructions+=3;NFSU2_TR(0x54e9a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e9a4:{NFSU2_TR(0x54e9a4);
__builtin_memmove((R+4),(R+0),4);
}
B54e9a6:{NFSU2_TR(0x54e9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e9abull));
TAIL_STATIC(0x517f80u,517);
}
B54e9ab:L54e9ab:{c.instructions+=2;NFSU2_TR(0x54e9ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e9ad:{NFSU2_TR(0x54e9ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e9c6;}}
}
B54e9af:L54e9af:{c.instructions+=3;NFSU2_TR(0x54e9af);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54e9b4:{NFSU2_TR(0x54e9b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e9b6:{NFSU2_TR(0x54e9b6);
if(r1(R+518)){{goto L54ea06;}}
}
B54e9b8:L54e9b8:{c.instructions+=4;NFSU2_TR(0x54e9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e9bb:{NFSU2_TR(0x54e9bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e9bc:{NFSU2_TR(0x54e9bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e9bd:{NFSU2_TR(0x54e9bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e9c2ull));
TAIL_STATIC(0x52c570u,52c);
}
B54e9c2:L54e9c2:{c.instructions+=2;NFSU2_TR(0x54e9c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e9c4:{NFSU2_TR(0x54e9c4);
if(r1(R+518)){{goto L54ea06;}}
}
B54e9c6:L54e9c6:{c.instructions+=3;NFSU2_TR(0x54e9c6);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B54e9cc:{NFSU2_TR(0x54e9cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e9ce:{NFSU2_TR(0x54e9ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54e9d6;}}
}
B54e9d0:L54e9d0:{c.instructions+=2;NFSU2_TR(0x54e9d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54e9d4:{NFSU2_TR(0x54e9d4);
if(r1(R+518)){{goto L54e9e5;}}
}
B54e9d6:L54e9d6:{c.instructions+=4;NFSU2_TR(0x54e9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54e9d9:{NFSU2_TR(0x54e9d9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B54e9dc:{NFSU2_TR(0x54e9dc);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B54e9e2:{NFSU2_TR(0x54e9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54e9e5:L54e9e5:{c.instructions+=2;NFSU2_TR(0x54e9e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54e9e9:{NFSU2_TR(0x54e9e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ea06;}}
}
B54e9eb:L54e9eb:{c.instructions+=4;NFSU2_TR(0x54e9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54e9ee:{NFSU2_TR(0x54e9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54e9f1:{NFSU2_TR(0x54e9f1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54e9f3:{NFSU2_TR(0x54e9f3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54ea06;}}
}
B54e9f5:L54e9f5:{c.instructions+=1;NFSU2_TR(0x54e9f5);
__builtin_memmove((R+24),(R+0),4);
}
B54e9f7:L54e9f7:{c.instructions+=2;NFSU2_TR(0x54e9f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54e9f8:{NFSU2_TR(0x54e9f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54e9fdull));
TAIL_STATIC(0x50ca50u,50c);
}
B54e9fd:L54e9fd:{c.instructions+=4;NFSU2_TR(0x54e9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ea00:{NFSU2_TR(0x54ea00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54ea03:{NFSU2_TR(0x54ea03);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54ea04:{NFSU2_TR(0x54ea04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54e9f7u);}goto L54e9f7;}}
}
B54ea06:L54ea06:{c.instructions+=2;NFSU2_TR(0x54ea06);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B54ea0a:{NFSU2_TR(0x54ea0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54eb29;}}
}
B54ea10:L54ea10:{c.instructions+=3;NFSU2_TR(0x54ea10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ea13:{NFSU2_TR(0x54ea13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ea15:{NFSU2_TR(0x54ea15);
if(r1(R+518)){{goto L54ea57;}}
}
B54ea17:L54ea17:{c.instructions+=3;NFSU2_TR(0x54ea17);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B54ea1d:{NFSU2_TR(0x54ea1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ea1f:{NFSU2_TR(0x54ea1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ea27;}}
}
B54ea21:L54ea21:{c.instructions+=2;NFSU2_TR(0x54ea21);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54ea25:{NFSU2_TR(0x54ea25);
if(r1(R+518)){{goto L54ea36;}}
}
B54ea27:L54ea27:{c.instructions+=4;NFSU2_TR(0x54ea27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ea2a:{NFSU2_TR(0x54ea2a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B54ea2d:{NFSU2_TR(0x54ea2d);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x400000ull))));
}
B54ea33:{NFSU2_TR(0x54ea33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ea36:L54ea36:{c.instructions+=2;NFSU2_TR(0x54ea36);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54ea3a:{NFSU2_TR(0x54ea3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ea57;}}
}
B54ea3c:L54ea3c:{c.instructions+=4;NFSU2_TR(0x54ea3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ea3f:{NFSU2_TR(0x54ea3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ea42:{NFSU2_TR(0x54ea42);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ea44:{NFSU2_TR(0x54ea44);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54ea57;}}
}
B54ea46:L54ea46:{c.instructions+=1;NFSU2_TR(0x54ea46);
__builtin_memmove((R+24),(R+0),4);
}
B54ea48:L54ea48:{c.instructions+=2;NFSU2_TR(0x54ea48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ea49:{NFSU2_TR(0x54ea49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ea4eull));
TAIL_STATIC(0x50ca50u,50c);
}
B54ea4e:L54ea4e:{c.instructions+=4;NFSU2_TR(0x54ea4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ea51:{NFSU2_TR(0x54ea51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54ea54:{NFSU2_TR(0x54ea54);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54ea55:{NFSU2_TR(0x54ea55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ea48u);}goto L54ea48;}}
}
B54ea57:L54ea57:{c.instructions+=3;NFSU2_TR(0x54ea57);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ea5a:{NFSU2_TR(0x54ea5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ea5c:{NFSU2_TR(0x54ea5c);
if(r1(R+518)){{goto L54ea9f;}}
}
B54ea5e:L54ea5e:{c.instructions+=3;NFSU2_TR(0x54ea5e);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B54ea64:{NFSU2_TR(0x54ea64);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ea66:{NFSU2_TR(0x54ea66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ea6e;}}
}
B54ea68:L54ea68:{c.instructions+=2;NFSU2_TR(0x54ea68);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54ea6c:{NFSU2_TR(0x54ea6c);
if(r1(R+518)){{goto L54ea7d;}}
}
B54ea6e:L54ea6e:{c.instructions+=4;NFSU2_TR(0x54ea6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ea71:{NFSU2_TR(0x54ea71);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B54ea74:{NFSU2_TR(0x54ea74);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B54ea7a:{NFSU2_TR(0x54ea7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ea7d:L54ea7d:{c.instructions+=2;NFSU2_TR(0x54ea7d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54ea81:{NFSU2_TR(0x54ea81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ea9f;}}
}
B54ea83:L54ea83:{c.instructions+=4;NFSU2_TR(0x54ea83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ea86:{NFSU2_TR(0x54ea86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ea89:{NFSU2_TR(0x54ea89);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ea8b:{NFSU2_TR(0x54ea8b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54ea9f;}}
}
B54ea8d:L54ea8d:{c.instructions+=2;NFSU2_TR(0x54ea8d);
__builtin_memmove((R+24),(R+0),4);
}
B54ea8f:{NFSU2_TR(0x54ea8f);
}
B54ea90:L54ea90:{c.instructions+=2;NFSU2_TR(0x54ea90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ea91:{NFSU2_TR(0x54ea91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ea96ull));
TAIL_STATIC(0x50ca50u,50c);
}
B54ea96:L54ea96:{c.instructions+=4;NFSU2_TR(0x54ea96);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ea99:{NFSU2_TR(0x54ea99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54ea9c:{NFSU2_TR(0x54ea9c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54ea9d:{NFSU2_TR(0x54ea9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ea90u);}goto L54ea90;}}
}
B54ea9f:L54ea9f:{c.instructions+=3;NFSU2_TR(0x54ea9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54eaa2:{NFSU2_TR(0x54eaa2);
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
B54eaa4:{NFSU2_TR(0x54eaa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54eb29;}}
}
B54eaaa:L54eaaa:{c.instructions+=6;NFSU2_TR(0x54eaaa);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54eaad:{NFSU2_TR(0x54eaad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54eab0:{NFSU2_TR(0x54eab0);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54eab6:{NFSU2_TR(0x54eab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54eab9:{NFSU2_TR(0x54eab9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54eabf:{NFSU2_TR(0x54eabf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54eac4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B54eac4:L54eac4:{c.instructions+=3;NFSU2_TR(0x54eac4);
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
B54eac6:{NFSU2_TR(0x54eac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54eac9:{NFSU2_TR(0x54eac9);
if(r1(R+518)){{goto L54eb29;}}
}
B54eacb:L54eacb:{c.instructions+=3;NFSU2_TR(0x54eacb);
w4(R+8,u32(0x79b2ecull));
}
B54ead0:{NFSU2_TR(0x54ead0);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B54ead3:{NFSU2_TR(0x54ead3);
w1(R+0,u8(0x46ull));
}
B54ead5:L54ead5:{c.instructions+=3;NFSU2_TR(0x54ead5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B54ead8:{NFSU2_TR(0x54ead8);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54eada:{NFSU2_TR(0x54eada);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54eae2;}}
}
B54eadc:L54eadc:{c.instructions+=2;NFSU2_TR(0x54eadc);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54eade:{NFSU2_TR(0x54eade);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54eae2;}}
}
B54eae0:L54eae0:{c.instructions+=1;NFSU2_TR(0x54eae0);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54eae2:L54eae2:{c.instructions+=6;NFSU2_TR(0x54eae2);
w4(R+0,u32(r1(R+0)));
}
B54eae5:{NFSU2_TR(0x54eae5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B54eae7:{NFSU2_TR(0x54eae7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54eaea:{NFSU2_TR(0x54eaea);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B54eaeb:{NFSU2_TR(0x54eaeb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54eaed:{NFSU2_TR(0x54eaed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ead5u);}goto L54ead5;}}
}
B54eaef:L54eaef:{c.instructions+=4;NFSU2_TR(0x54eaef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54eaf2:{NFSU2_TR(0x54eaf2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54eaf4:{NFSU2_TR(0x54eaf4);
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
B54eaf6:{NFSU2_TR(0x54eaf6);
if(r1(R+518)){{goto L54eb29;}}
}
B54eaf8:L54eaf8:{c.instructions+=2;NFSU2_TR(0x54eaf8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54eafb:{NFSU2_TR(0x54eafb);
if(r1(R+518)){{goto L54eb0d;}}
}
B54eafd:L54eafd:{c.instructions+=3;NFSU2_TR(0x54eafd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54eb00:{NFSU2_TR(0x54eb00);
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
B54eb02:{NFSU2_TR(0x54eb02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54eaf8u);}goto L54eaf8;}}
}
B54eb04:L54eb04:{c.instructions+=6;NFSU2_TR(0x54eb04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54eb05:{NFSU2_TR(0x54eb05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54eb06:{NFSU2_TR(0x54eb06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54eb07:{NFSU2_TR(0x54eb07);
__builtin_memmove((R+16),(R+20),4);
}
B54eb09:{NFSU2_TR(0x54eb09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54eb0a:{NFSU2_TR(0x54eb0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54eb0d:L54eb0d:{c.instructions+=2;NFSU2_TR(0x54eb0d);
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
B54eb0f:{NFSU2_TR(0x54eb0f);
if(r1(R+518)){{goto L54eb29;}}
}
B54eb11:L54eb11:{c.instructions+=2;NFSU2_TR(0x54eb11);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B54eb14:{NFSU2_TR(0x54eb14);
if(r1(R+518)){{goto L54eb26;}}
}
B54eb16:L54eb16:{c.instructions+=3;NFSU2_TR(0x54eb16);
__builtin_memmove((R+4),(R+12),4);
}
B54eb18:{NFSU2_TR(0x54eb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54eb1b:{NFSU2_TR(0x54eb1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54eb20ull));
TAIL_STATIC(0x517720u,517);
}
B54eb20:L54eb20:{c.instructions+=2;NFSU2_TR(0x54eb20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54eb23:{NFSU2_TR(0x54eb23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54eb26:L54eb26:{c.instructions+=1;NFSU2_TR(0x54eb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54eb29:L54eb29:{c.instructions+=2;NFSU2_TR(0x54eb29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54eb2a:{NFSU2_TR(0x54eb2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54eb2b:L54eb2b:{c.instructions+=4;NFSU2_TR(0x54eb2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54eb2c:{NFSU2_TR(0x54eb2c);
__builtin_memmove((R+16),(R+20),4);
}
B54eb2e:{NFSU2_TR(0x54eb2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54eb2f:{NFSU2_TR(0x54eb2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54eb40:L54eb40:{c.instructions+=4;NFSU2_TR(0x54eb40);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54eb46:{NFSU2_TR(0x54eb46);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54eb48:{NFSU2_TR(0x54eb48);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eb4a:{NFSU2_TR(0x54eb4a);
if(r1(R+518)){{goto L54eb52;}}
}
B54eb4c:L54eb4c:{c.instructions+=1;NFSU2_TR(0x54eb4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54eb51ull));
TAIL_STATIC(0x542f50u,542);
}
B54eb51:L54eb51:{c.instructions+=1;NFSU2_TR(0x54eb51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54eb52:L54eb52:{c.instructions+=1;NFSU2_TR(0x54eb52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54eb57ull));
TAIL_STATIC(0x542df0u,542);
}
B54eb57:L54eb57:{c.instructions+=1;NFSU2_TR(0x54eb57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54eb60:L54eb60:{c.instructions+=4;NFSU2_TR(0x54eb60);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54eb66:{NFSU2_TR(0x54eb66);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54eb68:{NFSU2_TR(0x54eb68);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eb6a:{NFSU2_TR(0x54eb6a);
if(r1(R+518)){{goto L54eb72;}}
}
B54eb6c:L54eb6c:{c.instructions+=1;NFSU2_TR(0x54eb6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54eb71ull));
TAIL_STATIC(0x542f50u,542);
}
B54eb71:L54eb71:{c.instructions+=1;NFSU2_TR(0x54eb71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54eb72:L54eb72:{c.instructions+=1;NFSU2_TR(0x54eb72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54eb77ull));
TAIL_STATIC(0x542df0u,542);
}
B54eb77:L54eb77:{c.instructions+=1;NFSU2_TR(0x54eb77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54eb80:L54eb80:{c.instructions+=24;NFSU2_TR(0x54eb80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eb81:{NFSU2_TR(0x54eb81);
__builtin_memmove((R+20),(R+16),4);
}
B54eb83:{NFSU2_TR(0x54eb83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B54eb86:{NFSU2_TR(0x54eb86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B54eb89:{NFSU2_TR(0x54eb89);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54eb8f:{NFSU2_TR(0x54eb8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eb90:{NFSU2_TR(0x54eb90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eb91:{NFSU2_TR(0x54eb91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eb92:{NFSU2_TR(0x54eb92);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B54eb98:{NFSU2_TR(0x54eb98);
__builtin_memmove((R+24),(R+4),4);
}
B54eb9a:{NFSU2_TR(0x54eb9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eb9b:{NFSU2_TR(0x54eb9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54eba1:{NFSU2_TR(0x54eba1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54eba5:{NFSU2_TR(0x54eba5);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54ebab:{NFSU2_TR(0x54ebab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ebac:{NFSU2_TR(0x54ebac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ebb0:{NFSU2_TR(0x54ebb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54ebb6:{NFSU2_TR(0x54ebb6);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B54ebbc:{NFSU2_TR(0x54ebbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ebbd:{NFSU2_TR(0x54ebbd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54ebc1:{NFSU2_TR(0x54ebc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ebc5:{NFSU2_TR(0x54ebc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ebc6:{NFSU2_TR(0x54ebc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ebc7:{NFSU2_TR(0x54ebc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ebccull));
TAIL_STATIC(0x50cd00u,50c);
}
B54ebcc:L54ebcc:{c.instructions+=3;NFSU2_TR(0x54ebcc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54ebcf:{NFSU2_TR(0x54ebcf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ebd1:{NFSU2_TR(0x54ebd1);
if(r1(R+518)){{goto L54ed1b;}}
}
B54ebd7:L54ebd7:{c.instructions+=3;NFSU2_TR(0x54ebd7);
__builtin_memmove((R+0),gp(0x8763ec),4);
}
B54ebdc:{NFSU2_TR(0x54ebdc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ebde:{NFSU2_TR(0x54ebde);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54ebe4;}}
}
B54ebe0:L54ebe0:{c.instructions+=2;NFSU2_TR(0x54ebe0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ebe2:{NFSU2_TR(0x54ebe2);
{goto L54ebe8;}
}
B54ebe4:L54ebe4:{c.instructions+=1;NFSU2_TR(0x54ebe4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L54ebef;}}
}
B54ebe6:L54ebe6:{c.instructions+=1;NFSU2_TR(0x54ebe6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ebe8:L54ebe8:{c.instructions+=2;NFSU2_TR(0x54ebe8);
__builtin_memmove((R+4),(R+24),4);
}
B54ebea:{NFSU2_TR(0x54ebea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ebefull));
TAIL_STATIC(0x5430c0u,543);
}
B54ebef:L54ebef:{c.instructions+=4;NFSU2_TR(0x54ebef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ebf2:{NFSU2_TR(0x54ebf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ebf5:{NFSU2_TR(0x54ebf5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54ebf7:{NFSU2_TR(0x54ebf7);
if(r1(R+518)){{goto L54ed1b;}}
}
B54ebfd:L54ebfd:{c.instructions+=5;NFSU2_TR(0x54ebfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ec00:{NFSU2_TR(0x54ec00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ec02:{NFSU2_TR(0x54ec02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54ec05:{NFSU2_TR(0x54ec05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54ec08:{NFSU2_TR(0x54ec08);
if(r1(R+518)){{goto L54ec0f;}}
}
B54ec0a:L54ec0a:{c.instructions+=2;NFSU2_TR(0x54ec0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B54ec0d:{NFSU2_TR(0x54ec0d);
{goto L54ec11;}
}
B54ec0f:L54ec0f:{c.instructions+=1;NFSU2_TR(0x54ec0f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B54ec11:L54ec11:{c.instructions+=2;NFSU2_TR(0x54ec11);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ec13:{NFSU2_TR(0x54ec13);
if(r1(R+518)){{goto L54ec1a;}}
}
B54ec15:L54ec15:{c.instructions+=2;NFSU2_TR(0x54ec15);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B54ec18:{NFSU2_TR(0x54ec18);
{goto L54ec1c;}
}
B54ec1a:L54ec1a:{c.instructions+=1;NFSU2_TR(0x54ec1a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54ec1c:L54ec1c:{c.instructions+=2;NFSU2_TR(0x54ec1c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54ec1e:{NFSU2_TR(0x54ec1e);
if(r1(R+518)){{goto L54ed1b;}}
}
B54ec24:L54ec24:{c.instructions+=2;NFSU2_TR(0x54ec24);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ec26:{NFSU2_TR(0x54ec26);
if(r1(R+518)){{goto L54ec2d;}}
}
B54ec28:L54ec28:{c.instructions+=2;NFSU2_TR(0x54ec28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B54ec2b:{NFSU2_TR(0x54ec2b);
{goto L54ec2f;}
}
B54ec2d:L54ec2d:{c.instructions+=1;NFSU2_TR(0x54ec2d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54ec2f:L54ec2f:{c.instructions+=2;NFSU2_TR(0x54ec2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54ec31:{NFSU2_TR(0x54ec31);
if(r1(R+518)){{goto L54ed1b;}}
}
B54ec37:L54ec37:{c.instructions+=3;NFSU2_TR(0x54ec37);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54ec3a:{NFSU2_TR(0x54ec3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ec3c:{NFSU2_TR(0x54ec3c);
if(r1(R+518)){{goto L54ec7a;}}
}
B54ec3e:L54ec3e:{c.instructions+=17;NFSU2_TR(0x54ec3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ec41:{NFSU2_TR(0x54ec41);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54ec44:{NFSU2_TR(0x54ec44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ec47:{NFSU2_TR(0x54ec47);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ec4b:{NFSU2_TR(0x54ec4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ec4f:{NFSU2_TR(0x54ec4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54ec53:{NFSU2_TR(0x54ec53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ec54:{NFSU2_TR(0x54ec54);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ec58:{NFSU2_TR(0x54ec58);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54ec5c:{NFSU2_TR(0x54ec5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ec5d:{NFSU2_TR(0x54ec5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ec61:{NFSU2_TR(0x54ec61);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54ec65:{NFSU2_TR(0x54ec65);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54ec68:{NFSU2_TR(0x54ec68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ec69:{NFSU2_TR(0x54ec69);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54ec6d:{NFSU2_TR(0x54ec6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ec6e:{NFSU2_TR(0x54ec6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ec73ull));
TAIL_STATIC(0x50cd00u,50c);
}
B54ec73:L54ec73:{c.instructions+=3;NFSU2_TR(0x54ec73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54ec76:{NFSU2_TR(0x54ec76);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ec78:{NFSU2_TR(0x54ec78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ec97;}}
}
B54ec7a:L54ec7a:{c.instructions+=3;NFSU2_TR(0x54ec7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ec7d:{NFSU2_TR(0x54ec7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ec7f:{NFSU2_TR(0x54ec7f);
if(r1(R+518)){{goto L54ec86;}}
}
B54ec81:L54ec81:{c.instructions+=2;NFSU2_TR(0x54ec81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ec84:{NFSU2_TR(0x54ec84);
{goto L54ec88;}
}
B54ec86:L54ec86:{c.instructions+=1;NFSU2_TR(0x54ec86);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54ec88:L54ec88:{c.instructions+=3;NFSU2_TR(0x54ec88);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ec8b:{NFSU2_TR(0x54ec8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ec8d:{NFSU2_TR(0x54ec8d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ec0fu);}goto L54ec0f;}}
}
B54ec8f:L54ec8f:{c.instructions+=2;NFSU2_TR(0x54ec8f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B54ec92:{NFSU2_TR(0x54ec92);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ec11u);}goto L54ec11;}
}
B54ec97:L54ec97:{c.instructions+=3;NFSU2_TR(0x54ec97);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54ec9d:{NFSU2_TR(0x54ec9d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ec9f:{NFSU2_TR(0x54ec9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ecda;}}
}
B54eca1:L54eca1:{c.instructions+=2;NFSU2_TR(0x54eca1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54eca4:{NFSU2_TR(0x54eca4);
if(r1(R+518)){{goto L54ecae;}}
}
B54eca6:L54eca6:{c.instructions+=3;NFSU2_TR(0x54eca6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eca7:{NFSU2_TR(0x54eca7);
__builtin_memmove((R+4),(R+24),4);
}
B54eca9:{NFSU2_TR(0x54eca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ecaeull));
TAIL_STATIC(0x538530u,538);
}
B54ecae:L54ecae:{c.instructions+=3;NFSU2_TR(0x54ecae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ecb4:{NFSU2_TR(0x54ecb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ecb6:{NFSU2_TR(0x54ecb6);
if(r1(R+518)){{goto L54ed1b;}}
}
B54ecb8:L54ecb8:{c.instructions+=4;NFSU2_TR(0x54ecb8);
__builtin_memmove((R+4),gp(0x8763f0),1);
}
B54ecbe:{NFSU2_TR(0x54ecbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ecc0:{NFSU2_TR(0x54ecc0);
w4(R+4,u32(m1(0x8763f2)));
}
B54ecc7:{NFSU2_TR(0x54ecc7);
if(r1(R+518)){{goto L54ecd0;}}
}
B54ecc9:L54ecc9:{c.instructions+=1;NFSU2_TR(0x54ecc9);
w4(R+4,u32(m1(0x8763f5)));
}
B54ecd0:L54ecd0:{c.instructions+=2;NFSU2_TR(0x54ecd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ecd2:{NFSU2_TR(0x54ecd2);
if(r1(R+518)){{goto L54ed1b;}}
}
B54ecd4:L54ecd4:{c.instructions+=3;NFSU2_TR(0x54ecd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ecd7:{NFSU2_TR(0x54ecd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ecd8:{NFSU2_TR(0x54ecd8);
{goto L54ed12;}
}
B54ecda:L54ecda:{c.instructions+=4;NFSU2_TR(0x54ecda);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B54ecdf:{NFSU2_TR(0x54ecdf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ece1:{NFSU2_TR(0x54ece1);
w4(R+0,u32(m1(0x8763f2)));
}
B54ece8:{NFSU2_TR(0x54ece8);
if(r1(R+518)){{goto L54ecf1;}}
}
B54ecea:L54ecea:{c.instructions+=1;NFSU2_TR(0x54ecea);
w4(R+0,u32(m1(0x8763f5)));
}
B54ecf1:L54ecf1:{c.instructions+=2;NFSU2_TR(0x54ecf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ecf3:{NFSU2_TR(0x54ecf3);
if(r1(R+518)){{goto L54ed1b;}}
}
B54ecf5:L54ecf5:{c.instructions+=2;NFSU2_TR(0x54ecf5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54ecf8:{NFSU2_TR(0x54ecf8);
if(r1(R+518)){{goto L54ed04;}}
}
B54ecfa:L54ecfa:{c.instructions+=3;NFSU2_TR(0x54ecfa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ecfb:{NFSU2_TR(0x54ecfb);
__builtin_memmove((R+4),(R+24),4);
}
B54ecfd:{NFSU2_TR(0x54ecfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ed02ull));
TAIL_STATIC(0x538530u,538);
}
B54ed02:L54ed02:{c.instructions+=1;NFSU2_TR(0x54ed02);
{goto L54ed1b;}
}
B54ed04:L54ed04:{c.instructions+=3;NFSU2_TR(0x54ed04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ed0a:{NFSU2_TR(0x54ed0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ed0c:{NFSU2_TR(0x54ed0c);
if(r1(R+518)){{goto L54ed1b;}}
}
B54ed0e:L54ed0e:{c.instructions+=2;NFSU2_TR(0x54ed0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ed11:{NFSU2_TR(0x54ed11);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ed12:L54ed12:{c.instructions+=2;NFSU2_TR(0x54ed12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ed13:{NFSU2_TR(0x54ed13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ed18ull));
TAIL_STATIC(0x51ce60u,51c);
}
B54ed18:L54ed18:{c.instructions+=1;NFSU2_TR(0x54ed18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54ed1b:L54ed1b:{c.instructions+=3;NFSU2_TR(0x54ed1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ed1e:{NFSU2_TR(0x54ed1e);
__builtin_memmove((R+4),(R+28),4);
}
B54ed20:{NFSU2_TR(0x54ed20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ed25ull));
TAIL_STATIC(0x538130u,538);
}
B54ed25:L54ed25:{c.instructions+=4;NFSU2_TR(0x54ed25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ed28:{NFSU2_TR(0x54ed28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B54ed2b:{NFSU2_TR(0x54ed2b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54ed2e:{NFSU2_TR(0x54ed2e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54ed7e;}}
}
B54ed30:L54ed30:{c.instructions+=2;NFSU2_TR(0x54ed30);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54edb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B54ed37:{NFSU2_TR(0x54ed37);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x54ed9cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54ed3e:L54ed3e:{c.instructions+=3;NFSU2_TR(0x54ed3e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ed40:{NFSU2_TR(0x54ed40);
__builtin_memmove((R+4),(R+24),4);
}
B54ed42:{NFSU2_TR(0x54ed42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ed47ull));
TAIL_STATIC(0x5430c0u,543);
}
B54ed47:L54ed47:{c.instructions+=7;NFSU2_TR(0x54ed47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ed48:{NFSU2_TR(0x54ed48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ed49:{NFSU2_TR(0x54ed49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ed4a:{NFSU2_TR(0x54ed4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54ed4b:{NFSU2_TR(0x54ed4b);
__builtin_memmove((R+16),(R+20),4);
}
B54ed4d:{NFSU2_TR(0x54ed4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ed4e:{NFSU2_TR(0x54ed4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ed4f:L54ed4f:{c.instructions+=3;NFSU2_TR(0x54ed4f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ed51:{NFSU2_TR(0x54ed51);
__builtin_memmove((R+4),(R+24),4);
}
B54ed53:{NFSU2_TR(0x54ed53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ed58ull));
TAIL_STATIC(0x5430c0u,543);
}
B54ed58:L54ed58:{c.instructions+=7;NFSU2_TR(0x54ed58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ed59:{NFSU2_TR(0x54ed59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ed5a:{NFSU2_TR(0x54ed5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ed5b:{NFSU2_TR(0x54ed5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54ed5c:{NFSU2_TR(0x54ed5c);
__builtin_memmove((R+16),(R+20),4);
}
B54ed5e:{NFSU2_TR(0x54ed5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ed5f:{NFSU2_TR(0x54ed5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ed60:L54ed60:{c.instructions+=2;NFSU2_TR(0x54ed60);
__builtin_memmove((R+4),(R+24),4);
}
B54ed62:{NFSU2_TR(0x54ed62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ed67ull));
TAIL_STATIC(0x543590u,543);
}
B54ed67:L54ed67:{c.instructions+=7;NFSU2_TR(0x54ed67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ed68:{NFSU2_TR(0x54ed68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ed69:{NFSU2_TR(0x54ed69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ed6a:{NFSU2_TR(0x54ed6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54ed6b:{NFSU2_TR(0x54ed6b);
__builtin_memmove((R+16),(R+20),4);
}
B54ed6d:{NFSU2_TR(0x54ed6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ed6e:{NFSU2_TR(0x54ed6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ed6f:L54ed6f:{c.instructions+=2;NFSU2_TR(0x54ed6f);
__builtin_memmove((R+4),(R+24),4);
}
B54ed71:{NFSU2_TR(0x54ed71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ed76ull));
TAIL_STATIC(0x543550u,543);
}
B54ed76:L54ed76:{c.instructions+=7;NFSU2_TR(0x54ed76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ed77:{NFSU2_TR(0x54ed77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ed78:{NFSU2_TR(0x54ed78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ed79:{NFSU2_TR(0x54ed79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54ed7a:{NFSU2_TR(0x54ed7a);
__builtin_memmove((R+16),(R+20),4);
}
B54ed7c:{NFSU2_TR(0x54ed7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ed7d:{NFSU2_TR(0x54ed7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ed7e:L54ed7e:{c.instructions+=8;NFSU2_TR(0x54ed7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ed81:{NFSU2_TR(0x54ed81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ed84:{NFSU2_TR(0x54ed84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ed87:{NFSU2_TR(0x54ed87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ed88:{NFSU2_TR(0x54ed88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ed89:{NFSU2_TR(0x54ed89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ed8a:{NFSU2_TR(0x54ed8a);
__builtin_memmove((R+4),(R+28),4);
}
B54ed8c:{NFSU2_TR(0x54ed8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ed91ull));
TAIL_STATIC(0x538080u,538);
}
B54ed91:L54ed91:{c.instructions+=7;NFSU2_TR(0x54ed91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ed92:{NFSU2_TR(0x54ed92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ed93:{NFSU2_TR(0x54ed93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ed94:{NFSU2_TR(0x54ed94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54ed95:{NFSU2_TR(0x54ed95);
__builtin_memmove((R+16),(R+20),4);
}
B54ed97:{NFSU2_TR(0x54ed97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54ed98:{NFSU2_TR(0x54ed98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54edd0:L54edd0:{c.instructions+=6;NFSU2_TR(0x54edd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54edd1:{NFSU2_TR(0x54edd1);
__builtin_memmove((R+24),(R+4),4);
}
B54edd3:{NFSU2_TR(0x54edd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54edd6:{NFSU2_TR(0x54edd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54edd9:{NFSU2_TR(0x54edd9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54eddb:{NFSU2_TR(0x54eddb);
if(r1(R+518)){{goto L54ee01;}}
}
B54eddd:L54eddd:{c.instructions+=3;NFSU2_TR(0x54eddd);
__builtin_memmove((R+0),(R+4),4);
}
B54eddf:{NFSU2_TR(0x54eddf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ede1:{NFSU2_TR(0x54ede1);
if(r1(R+518)){{goto L54ede8;}}
}
B54ede3:L54ede3:{c.instructions+=2;NFSU2_TR(0x54ede3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54ede6:{NFSU2_TR(0x54ede6);
{goto L54edea;}
}
B54ede8:L54ede8:{c.instructions+=1;NFSU2_TR(0x54ede8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54edea:L54edea:{c.instructions+=4;NFSU2_TR(0x54edea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54eded:{NFSU2_TR(0x54eded);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54edf0:{NFSU2_TR(0x54edf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54edf2:{NFSU2_TR(0x54edf2);
if(r1(R+518)){{goto L54edf9;}}
}
B54edf4:L54edf4:{c.instructions+=2;NFSU2_TR(0x54edf4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54edf7:{NFSU2_TR(0x54edf7);
{goto L54edfb;}
}
B54edf9:L54edf9:{c.instructions+=1;NFSU2_TR(0x54edf9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54edfb:L54edfb:{c.instructions+=2;NFSU2_TR(0x54edfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54edfe:{NFSU2_TR(0x54edfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ee01:L54ee01:{c.instructions+=3;NFSU2_TR(0x54ee01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ee05:{NFSU2_TR(0x54ee05);
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
B54ee07:{NFSU2_TR(0x54ee07);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L54ee2e;}}
}
B54ee09:L54ee09:{c.instructions+=3;NFSU2_TR(0x54ee09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee0a:{NFSU2_TR(0x54ee0a);
__builtin_memmove((R+28),(R+0),4);
}
B54ee0c:{NFSU2_TR(0x54ee0c);
__builtin_memmove((R+16),(R+16),4);
}
B54ee10:L54ee10:{c.instructions+=5;NFSU2_TR(0x54ee10);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54ee16:{NFSU2_TR(0x54ee16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ee18:{NFSU2_TR(0x54ee18);
__builtin_memmove((R+4),(R+24),4);
}
B54ee1a:{NFSU2_TR(0x54ee1a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee1c:{NFSU2_TR(0x54ee1c);
if(r1(R+518)){{goto L54ee25;}}
}
B54ee1e:L54ee1e:{c.instructions+=1;NFSU2_TR(0x54ee1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ee23ull));
TAIL_STATIC(0x542f50u,542);
}
B54ee23:L54ee23:{c.instructions+=1;NFSU2_TR(0x54ee23);
{goto L54ee2a;}
}
B54ee25:L54ee25:{c.instructions+=1;NFSU2_TR(0x54ee25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ee2aull));
TAIL_STATIC(0x542df0u,542);
}
B54ee2a:L54ee2a:{c.instructions+=2;NFSU2_TR(0x54ee2a);
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
B54ee2b:{NFSU2_TR(0x54ee2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54ee10u);}goto L54ee10;}}
}
B54ee2d:L54ee2d:{c.instructions+=1;NFSU2_TR(0x54ee2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ee2e:L54ee2e:{c.instructions+=2;NFSU2_TR(0x54ee2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ee2f:{NFSU2_TR(0x54ee2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ee40:L54ee40:{c.instructions+=10;NFSU2_TR(0x54ee40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B54ee43:{NFSU2_TR(0x54ee43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee44:{NFSU2_TR(0x54ee44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee45:{NFSU2_TR(0x54ee45);
__builtin_memmove((R+24),(R+4),4);
}
B54ee47:{NFSU2_TR(0x54ee47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ee4d:{NFSU2_TR(0x54ee4d);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee52:{NFSU2_TR(0x54ee52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee53:{NFSU2_TR(0x54ee53);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54ee57:{NFSU2_TR(0x54ee57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee58:{NFSU2_TR(0x54ee58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ee5dull));
TAIL_STATIC(0x43dda0u,43d);
}
B54ee5d:L54ee5d:{c.instructions+=8;NFSU2_TR(0x54ee5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ee63:{NFSU2_TR(0x54ee63);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee64:{NFSU2_TR(0x54ee64);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54ee68:{NFSU2_TR(0x54ee68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee69:{NFSU2_TR(0x54ee69);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54ee6d:{NFSU2_TR(0x54ee6d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee6f:{NFSU2_TR(0x54ee6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee70:{NFSU2_TR(0x54ee70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ee75ull));
TAIL_STATIC(0x50c960u,50c);
}
B54ee75:L54ee75:{c.instructions+=5;NFSU2_TR(0x54ee75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ee78:{NFSU2_TR(0x54ee78);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54ee7c:{NFSU2_TR(0x54ee7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee7d:{NFSU2_TR(0x54ee7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee7e:{NFSU2_TR(0x54ee7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ee83ull));
TAIL_STATIC(0x4953c0u,495);
}
B54ee83:L54ee83:{c.instructions+=7;NFSU2_TR(0x54ee83);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54ee87:{NFSU2_TR(0x54ee87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ee8a:{NFSU2_TR(0x54ee8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ee90:{NFSU2_TR(0x54ee90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B54ee93:{NFSU2_TR(0x54ee93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ee94:{NFSU2_TR(0x54ee94);
__builtin_memmove((R+4),(R+24),4);
}
B54ee96:{NFSU2_TR(0x54ee96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ee9bull));
TAIL_STATIC(0x5445f0u,544);
}
B54ee9b:L54ee9b:{c.instructions+=22;NFSU2_TR(0x54ee9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ee9e:{NFSU2_TR(0x54ee9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54eea1:{NFSU2_TR(0x54eea1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54eea4:{NFSU2_TR(0x54eea4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54eea7:{NFSU2_TR(0x54eea7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B54eea9:{NFSU2_TR(0x54eea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54eeac:{NFSU2_TR(0x54eeac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54eeae:{NFSU2_TR(0x54eeae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54eeb1:{NFSU2_TR(0x54eeb1);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54eeb7:{NFSU2_TR(0x54eeb7);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54eebd:{NFSU2_TR(0x54eebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54eec3:{NFSU2_TR(0x54eec3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54eec4:{NFSU2_TR(0x54eec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54eeca:{NFSU2_TR(0x54eeca);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54eed0:{NFSU2_TR(0x54eed0);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54eed6:{NFSU2_TR(0x54eed6);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54eedc:{NFSU2_TR(0x54eedc);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54eee2:{NFSU2_TR(0x54eee2);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54eee8:{NFSU2_TR(0x54eee8);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54eeee:{NFSU2_TR(0x54eeee);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54eef1:{NFSU2_TR(0x54eef1);
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
B54eef3:{NFSU2_TR(0x54eef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54eefc;}}
}
B54eef5:L54eef5:{c.instructions+=3;NFSU2_TR(0x54eef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54eef7:{NFSU2_TR(0x54eef7);
__builtin_memmove((R+4),(R+28),4);
}
B54eef9:{NFSU2_TR(0x54eef9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54eefcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54eefc:L54eefc:{c.instructions+=3;NFSU2_TR(0x54eefc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54eefe:{NFSU2_TR(0x54eefe);
__builtin_memmove((R+4),(R+28),4);
}
B54ef00:{NFSU2_TR(0x54ef00);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ef03ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54ef03:L54ef03:{c.instructions+=3;NFSU2_TR(0x54ef03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54ef05:{NFSU2_TR(0x54ef05);
__builtin_memmove((R+4),(R+28),4);
}
B54ef07:{NFSU2_TR(0x54ef07);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ef0aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54ef0a:L54ef0a:{c.instructions+=3;NFSU2_TR(0x54ef0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54ef0c:{NFSU2_TR(0x54ef0c);
__builtin_memmove((R+4),(R+28),4);
}
B54ef0e:{NFSU2_TR(0x54ef0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ef11ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54ef11:L54ef11:{c.instructions+=8;NFSU2_TR(0x54ef11);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54ef17:{NFSU2_TR(0x54ef17);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54ef1a:{NFSU2_TR(0x54ef1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ef20:{NFSU2_TR(0x54ef20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54ef21:{NFSU2_TR(0x54ef21);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B54ef22:{NFSU2_TR(0x54ef22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54ef23:{NFSU2_TR(0x54ef23);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54ef26:{NFSU2_TR(0x54ef26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54ef30:L54ef30:{c.instructions+=10;NFSU2_TR(0x54ef30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B54ef33:{NFSU2_TR(0x54ef33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef34:{NFSU2_TR(0x54ef34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef35:{NFSU2_TR(0x54ef35);
__builtin_memmove((R+24),(R+4),4);
}
B54ef37:{NFSU2_TR(0x54ef37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ef3d:{NFSU2_TR(0x54ef3d);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef42:{NFSU2_TR(0x54ef42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef43:{NFSU2_TR(0x54ef43);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54ef47:{NFSU2_TR(0x54ef47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef48:{NFSU2_TR(0x54ef48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ef4dull));
TAIL_STATIC(0x43dda0u,43d);
}
B54ef4d:L54ef4d:{c.instructions+=8;NFSU2_TR(0x54ef4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ef53:{NFSU2_TR(0x54ef53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef54:{NFSU2_TR(0x54ef54);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54ef58:{NFSU2_TR(0x54ef58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef59:{NFSU2_TR(0x54ef59);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54ef5d:{NFSU2_TR(0x54ef5d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef5f:{NFSU2_TR(0x54ef5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef60:{NFSU2_TR(0x54ef60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ef65ull));
TAIL_STATIC(0x50c960u,50c);
}
B54ef65:L54ef65:{c.instructions+=5;NFSU2_TR(0x54ef65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ef68:{NFSU2_TR(0x54ef68);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54ef6c:{NFSU2_TR(0x54ef6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef6d:{NFSU2_TR(0x54ef6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef6e:{NFSU2_TR(0x54ef6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ef73ull));
TAIL_STATIC(0x4953c0u,495);
}
B54ef73:L54ef73:{c.instructions+=8;NFSU2_TR(0x54ef73);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54ef77:{NFSU2_TR(0x54ef77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ef7a:{NFSU2_TR(0x54ef7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ef80:{NFSU2_TR(0x54ef80);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef85:{NFSU2_TR(0x54ef85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef86:{NFSU2_TR(0x54ef86);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54ef8a:{NFSU2_TR(0x54ef8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef8b:{NFSU2_TR(0x54ef8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ef90ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54ef90:L54ef90:{c.instructions+=8;NFSU2_TR(0x54ef90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ef96:{NFSU2_TR(0x54ef96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef97:{NFSU2_TR(0x54ef97);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54ef9b:{NFSU2_TR(0x54ef9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ef9c:{NFSU2_TR(0x54ef9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54efa0:{NFSU2_TR(0x54efa0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54efa2:{NFSU2_TR(0x54efa2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54efa3:{NFSU2_TR(0x54efa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54efa8ull));
TAIL_STATIC(0x50c960u,50c);
}
B54efa8:L54efa8:{c.instructions+=6;NFSU2_TR(0x54efa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54efab:{NFSU2_TR(0x54efab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B54efae:{NFSU2_TR(0x54efae);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54efb2:{NFSU2_TR(0x54efb2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54efb3:{NFSU2_TR(0x54efb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54efb4:{NFSU2_TR(0x54efb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54efb9ull));
TAIL_STATIC(0x4953c0u,495);
}
B54efb9:L54efb9:{c.instructions+=6;NFSU2_TR(0x54efb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54efbc:{NFSU2_TR(0x54efbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54efc2:{NFSU2_TR(0x54efc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54efc5:{NFSU2_TR(0x54efc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54efc6:{NFSU2_TR(0x54efc6);
__builtin_memmove((R+4),(R+24),4);
}
B54efc8:{NFSU2_TR(0x54efc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54efcdull));
TAIL_STATIC(0x5445f0u,544);
}
B54efcd:L54efcd:{c.instructions+=7;NFSU2_TR(0x54efcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54efd0:{NFSU2_TR(0x54efd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54efd6:{NFSU2_TR(0x54efd6);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54efdb:{NFSU2_TR(0x54efdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54efdc:{NFSU2_TR(0x54efdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54efe0:{NFSU2_TR(0x54efe0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54efe1:{NFSU2_TR(0x54efe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54efe6ull));
TAIL_STATIC(0x43dda0u,43d);
}
B54efe6:L54efe6:{c.instructions+=8;NFSU2_TR(0x54efe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54efec:{NFSU2_TR(0x54efec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54efed:{NFSU2_TR(0x54efed);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54eff1:{NFSU2_TR(0x54eff1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eff2:{NFSU2_TR(0x54eff2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B54eff6:{NFSU2_TR(0x54eff6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eff8:{NFSU2_TR(0x54eff8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54eff9:{NFSU2_TR(0x54eff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54effeull));
TAIL_STATIC(0x50c960u,50c);
}
B54effe:L54effe:{c.instructions+=1;NFSU2_TR(0x54effe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x54f001u,54f);
}
XIT:NFSU2_TR_EXIT(0x54e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
