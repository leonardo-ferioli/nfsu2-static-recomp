#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_448(u8* __restrict R,Cpu& c);
u32 body_44e(u8* __restrict R,Cpu& c);
u32 body_450(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x44f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x44f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_44f(u8* __restrict R,Cpu& c);
u32 page_44f(Cpu& c){return body_44f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_44f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x44f000:goto L44f000;
case 0x44f003:c.instructions+=2;goto B44f003;
case 0x44f005:c.instructions+=1;goto B44f005;
case 0x44f007:goto L44f007;
case 0x44f009:c.instructions+=2;goto B44f009;
case 0x44f00b:c.instructions+=1;goto B44f00b;
case 0x44f00d:goto L44f00d;
case 0x44f010:c.instructions+=2;goto B44f010;
case 0x44f012:c.instructions+=1;goto B44f012;
case 0x44f014:goto L44f014;
case 0x44f016:c.instructions+=1;goto B44f016;
case 0x44f019:goto L44f019;
case 0x44f01a:c.instructions+=2;goto B44f01a;
case 0x44f01d:c.instructions+=1;goto B44f01d;
case 0x44f01f:goto L44f01f;
case 0x44f024:c.instructions+=2;goto B44f024;
case 0x44f026:c.instructions+=1;goto B44f026;
case 0x44f028:goto L44f028;
case 0x44f02d:c.instructions+=1;goto B44f02d;
case 0x44f032:goto L44f032;
case 0x44f035:c.instructions+=2;goto B44f035;
case 0x44f03a:c.instructions+=1;goto B44f03a;
case 0x44f044:goto L44f044;
case 0x44f049:c.instructions+=2;goto B44f049;
case 0x44f04b:c.instructions+=1;goto B44f04b;
case 0x44f04d:goto L44f04d;
case 0x44f04f:c.instructions+=1;goto B44f04f;
case 0x44f054:goto L44f054;
case 0x44f057:c.instructions+=3;goto B44f057;
case 0x44f05a:c.instructions+=2;goto B44f05a;
case 0x44f05c:c.instructions+=1;goto B44f05c;
case 0x44f05e:goto L44f05e;
case 0x44f064:c.instructions+=4;goto B44f064;
case 0x44f06a:c.instructions+=3;goto B44f06a;
case 0x44f06c:c.instructions+=2;goto B44f06c;
case 0x44f06e:c.instructions+=1;goto B44f06e;
case 0x44f070:goto L44f070;
case 0x44f072:goto L44f072;
case 0x44f075:c.instructions+=1;goto B44f075;
case 0x44f077:goto L44f077;
case 0x44f07c:c.instructions+=2;goto B44f07c;
case 0x44f082:c.instructions+=1;goto B44f082;
case 0x44f087:goto L44f087;
case 0x44f089:c.instructions+=1;goto B44f089;
case 0x44f08e:goto L44f08e;
case 0x44f091:c.instructions+=4;goto B44f091;
case 0x44f094:c.instructions+=3;goto B44f094;
case 0x44f097:c.instructions+=2;goto B44f097;
case 0x44f099:c.instructions+=1;goto B44f099;
case 0x44f09b:goto L44f09b;
case 0x44f09d:c.instructions+=2;goto B44f09d;
case 0x44f09f:c.instructions+=1;goto B44f09f;
case 0x44f0a1:goto L44f0a1;
case 0x44f0a4:c.instructions+=2;goto B44f0a4;
case 0x44f0a6:c.instructions+=1;goto B44f0a6;
case 0x44f0a8:goto L44f0a8;
case 0x44f0ab:c.instructions+=3;goto B44f0ab;
case 0x44f0ae:c.instructions+=2;goto B44f0ae;
case 0x44f0af:c.instructions+=1;goto B44f0af;
case 0x44f0b4:goto L44f0b4;
case 0x44f0b7:goto L44f0b7;
case 0x44f0bc:c.instructions+=2;goto B44f0bc;
case 0x44f0be:c.instructions+=1;goto B44f0be;
case 0x44f0c0:goto L44f0c0;
case 0x44f0c3:c.instructions+=2;goto B44f0c3;
case 0x44f0c5:c.instructions+=1;goto B44f0c5;
case 0x44f0cb:goto L44f0cb;
case 0x44f0ce:c.instructions+=2;goto B44f0ce;
case 0x44f0d0:c.instructions+=1;goto B44f0d0;
case 0x44f0d6:goto L44f0d6;
case 0x44f0db:c.instructions+=2;goto B44f0db;
case 0x44f0dd:c.instructions+=1;goto B44f0dd;
case 0x44f0e0:goto L44f0e0;
case 0x44f0e3:c.instructions+=3;goto B44f0e3;
case 0x44f0e4:c.instructions+=2;goto B44f0e4;
case 0x44f0e8:c.instructions+=1;goto B44f0e8;
case 0x44f0ed:goto L44f0ed;
case 0x44f0ef:c.instructions+=4;goto B44f0ef;
case 0x44f0f2:c.instructions+=3;goto B44f0f2;
case 0x44f0f5:c.instructions+=2;goto B44f0f5;
case 0x44f0f7:c.instructions+=1;goto B44f0f7;
case 0x44f0fd:goto L44f0fd;
case 0x44f100:c.instructions+=3;goto B44f100;
case 0x44f103:c.instructions+=2;goto B44f103;
case 0x44f105:c.instructions+=1;goto B44f105;
case 0x44f107:goto L44f107;
case 0x44f109:c.instructions+=1;goto B44f109;
case 0x44f10b:goto L44f10b;
case 0x44f10e:c.instructions+=2;goto B44f10e;
case 0x44f110:c.instructions+=1;goto B44f110;
case 0x44f112:goto L44f112;
case 0x44f116:c.instructions+=2;goto B44f116;
case 0x44f118:c.instructions+=1;goto B44f118;
case 0x44f11a:goto L44f11a;
case 0x44f11f:c.instructions+=2;goto B44f11f;
case 0x44f124:c.instructions+=1;goto B44f124;
case 0x44f129:goto L44f129;
case 0x44f12c:c.instructions+=6;goto B44f12c;
case 0x44f12f:c.instructions+=5;goto B44f12f;
case 0x44f134:c.instructions+=4;goto B44f134;
case 0x44f138:c.instructions+=3;goto B44f138;
case 0x44f13a:c.instructions+=2;goto B44f13a;
case 0x44f13c:c.instructions+=1;goto B44f13c;
case 0x44f13e:goto L44f13e;
case 0x44f140:c.instructions+=2;goto B44f140;
case 0x44f142:c.instructions+=1;goto B44f142;
case 0x44f144:goto L44f144;
case 0x44f147:c.instructions+=1;goto B44f147;
case 0x44f149:goto L44f149;
case 0x44f14b:goto L44f14b;
case 0x44f14d:c.instructions+=2;goto B44f14d;
case 0x44f14f:c.instructions+=1;goto B44f14f;
case 0x44f152:goto L44f152;
case 0x44f154:c.instructions+=1;goto B44f154;
case 0x44f156:goto L44f156;
case 0x44f158:c.instructions+=2;goto B44f158;
case 0x44f15a:c.instructions+=1;goto B44f15a;
case 0x44f15d:goto L44f15d;
case 0x44f15f:c.instructions+=1;goto B44f15f;
case 0x44f161:goto L44f161;
case 0x44f162:c.instructions+=3;goto B44f162;
case 0x44f163:c.instructions+=2;goto B44f163;
case 0x44f168:c.instructions+=1;goto B44f168;
case 0x44f16d:goto L44f16d;
case 0x44f16f:goto L44f16f;
case 0x44f173:c.instructions+=5;goto B44f173;
case 0x44f174:c.instructions+=4;goto B44f174;
case 0x44f175:c.instructions+=3;goto B44f175;
case 0x44f176:c.instructions+=2;goto B44f176;
case 0x44f17b:c.instructions+=1;goto B44f17b;
case 0x44f180:goto L44f180;
case 0x44f184:c.instructions+=2;goto B44f184;
case 0x44f187:c.instructions+=1;goto B44f187;
case 0x44f18d:goto L44f18d;
case 0x44f18e:c.instructions+=5;goto B44f18e;
case 0x44f18f:c.instructions+=4;goto B44f18f;
case 0x44f190:c.instructions+=3;goto B44f190;
case 0x44f192:c.instructions+=2;goto B44f192;
case 0x44f193:c.instructions+=1;goto B44f193;
case 0x44f1a0:goto L44f1a0;
case 0x44f1a5:c.instructions+=4;goto B44f1a5;
case 0x44f1a6:c.instructions+=3;goto B44f1a6;
case 0x44f1a8:c.instructions+=2;goto B44f1a8;
case 0x44f1ae:c.instructions+=1;goto B44f1ae;
case 0x44f1b0:goto L44f1b0;
case 0x44f1b1:c.instructions+=1;goto B44f1b1;
case 0x44f1b6:goto L44f1b6;
case 0x44f1b9:goto L44f1b9;
case 0x44f1bb:c.instructions+=2;goto B44f1bb;
case 0x44f1bc:c.instructions+=1;goto B44f1bc;
case 0x44f1c0:goto L44f1c0;
case 0x44f1c1:c.instructions+=2;goto B44f1c1;
case 0x44f1c3:c.instructions+=1;goto B44f1c3;
case 0x44f1c8:goto L44f1c8;
case 0x44f1cd:c.instructions+=1;goto B44f1cd;
case 0x44f1cf:goto L44f1cf;
case 0x44f1d0:c.instructions+=1;goto B44f1d0;
case 0x44f1d5:goto L44f1d5;
case 0x44f1d8:goto L44f1d8;
case 0x44f1da:c.instructions+=2;goto B44f1da;
case 0x44f1db:c.instructions+=1;goto B44f1db;
case 0x44f1e0:goto L44f1e0;
case 0x44f1e2:c.instructions+=15;goto B44f1e2;
case 0x44f1e7:c.instructions+=14;goto B44f1e7;
case 0x44f1ed:c.instructions+=13;goto B44f1ed;
case 0x44f1ee:c.instructions+=12;goto B44f1ee;
case 0x44f1f5:c.instructions+=11;goto B44f1f5;
case 0x44f1f6:c.instructions+=10;goto B44f1f6;
case 0x44f1f7:c.instructions+=9;goto B44f1f7;
case 0x44f1f9:c.instructions+=8;goto B44f1f9;
case 0x44f1fa:c.instructions+=7;goto B44f1fa;
case 0x44f1fe:c.instructions+=6;goto B44f1fe;
case 0x44f204:c.instructions+=5;goto B44f204;
case 0x44f20a:c.instructions+=4;goto B44f20a;
case 0x44f20c:c.instructions+=3;goto B44f20c;
case 0x44f20e:c.instructions+=2;goto B44f20e;
case 0x44f212:c.instructions+=1;goto B44f212;
case 0x44f214:goto L44f214;
case 0x44f216:c.instructions+=1;goto B44f216;
case 0x44f21b:goto L44f21b;
case 0x44f21d:c.instructions+=1;goto B44f21d;
case 0x44f222:goto L44f222;
case 0x44f224:c.instructions+=1;goto B44f224;
case 0x44f229:goto L44f229;
case 0x44f22b:c.instructions+=1;goto B44f22b;
case 0x44f230:goto L44f230;
case 0x44f233:c.instructions+=1;goto B44f233;
case 0x44f239:goto L44f239;
case 0x44f23f:c.instructions+=2;goto B44f23f;
case 0x44f242:c.instructions+=1;goto B44f242;
case 0x44f244:goto L44f244;
case 0x44f24a:goto L44f24a;
case 0x44f250:c.instructions+=2;goto B44f250;
case 0x44f253:c.instructions+=1;goto B44f253;
case 0x44f255:goto L44f255;
case 0x44f25b:goto L44f25b;
case 0x44f25e:c.instructions+=3;goto B44f25e;
case 0x44f266:c.instructions+=2;goto B44f266;
case 0x44f26c:c.instructions+=1;goto B44f26c;
case 0x44f26e:goto L44f26e;
case 0x44f271:c.instructions+=8;goto B44f271;
case 0x44f274:c.instructions+=7;goto B44f274;
case 0x44f27a:c.instructions+=6;goto B44f27a;
case 0x44f27d:c.instructions+=5;goto B44f27d;
case 0x44f283:c.instructions+=4;goto B44f283;
case 0x44f286:c.instructions+=3;goto B44f286;
case 0x44f287:c.instructions+=2;goto B44f287;
case 0x44f28a:c.instructions+=1;goto B44f28a;
case 0x44f28f:goto L44f28f;
case 0x44f293:c.instructions+=3;goto B44f293;
case 0x44f294:c.instructions+=2;goto B44f294;
case 0x44f295:c.instructions+=1;goto B44f295;
case 0x44f297:goto L44f297;
case 0x44f29d:goto L44f29d;
case 0x44f2a1:c.instructions+=3;goto B44f2a1;
case 0x44f2a8:c.instructions+=2;goto B44f2a8;
case 0x44f2ab:c.instructions+=1;goto B44f2ab;
case 0x44f2b0:goto L44f2b0;
case 0x44f2b1:c.instructions+=4;goto B44f2b1;
case 0x44f2b3:c.instructions+=3;goto B44f2b3;
case 0x44f2b9:c.instructions+=2;goto B44f2b9;
case 0x44f2bb:c.instructions+=1;goto B44f2bb;
case 0x44f2bd:goto L44f2bd;
case 0x44f2be:c.instructions+=3;goto B44f2be;
case 0x44f2c3:c.instructions+=2;goto B44f2c3;
case 0x44f2c5:c.instructions+=1;goto B44f2c5;
case 0x44f2ca:goto L44f2ca;
case 0x44f2cb:c.instructions+=3;goto B44f2cb;
case 0x44f2d0:c.instructions+=2;goto B44f2d0;
case 0x44f2d2:c.instructions+=1;goto B44f2d2;
case 0x44f2d7:goto L44f2d7;
case 0x44f2d8:c.instructions+=3;goto B44f2d8;
case 0x44f2dd:c.instructions+=2;goto B44f2dd;
case 0x44f2df:c.instructions+=1;goto B44f2df;
case 0x44f2e4:goto L44f2e4;
case 0x44f2e5:c.instructions+=3;goto B44f2e5;
case 0x44f2ea:c.instructions+=2;goto B44f2ea;
case 0x44f2ec:c.instructions+=1;goto B44f2ec;
case 0x44f2f1:goto L44f2f1;
case 0x44f2f4:c.instructions+=1;goto B44f2f4;
case 0x44f2fe:goto L44f2fe;
case 0x44f2ff:c.instructions+=1;goto B44f2ff;
case 0x44f300:goto L44f300;
case 0x44f301:c.instructions+=8;goto B44f301;
case 0x44f303:c.instructions+=7;goto B44f303;
case 0x44f306:c.instructions+=6;goto B44f306;
case 0x44f309:c.instructions+=5;goto B44f309;
case 0x44f30a:c.instructions+=4;goto B44f30a;
case 0x44f30c:c.instructions+=3;goto B44f30c;
case 0x44f30d:c.instructions+=2;goto B44f30d;
case 0x44f312:c.instructions+=1;goto B44f312;
case 0x44f317:goto L44f317;
case 0x44f319:c.instructions+=1;goto B44f319;
case 0x44f31f:goto L44f31f;
case 0x44f322:c.instructions+=6;goto B44f322;
case 0x44f325:c.instructions+=5;goto B44f325;
case 0x44f32b:c.instructions+=4;goto B44f32b;
case 0x44f32e:c.instructions+=3;goto B44f32e;
case 0x44f330:c.instructions+=2;goto B44f330;
case 0x44f335:c.instructions+=1;goto B44f335;
case 0x44f337:goto L44f337;
case 0x44f33e:c.instructions+=2;goto B44f33e;
case 0x44f345:c.instructions+=1;goto B44f345;
case 0x44f348:goto L44f348;
case 0x44f34b:c.instructions+=1;goto B44f34b;
case 0x44f34d:goto L44f34d;
case 0x44f350:c.instructions+=6;goto B44f350;
case 0x44f353:c.instructions+=5;goto B44f353;
case 0x44f356:c.instructions+=4;goto B44f356;
case 0x44f359:c.instructions+=3;goto B44f359;
case 0x44f35b:c.instructions+=2;goto B44f35b;
case 0x44f35e:c.instructions+=1;goto B44f35e;
case 0x44f360:goto L44f360;
case 0x44f363:c.instructions+=1;goto B44f363;
case 0x44f366:goto L44f366;
case 0x44f369:c.instructions+=4;goto B44f369;
case 0x44f36c:c.instructions+=3;goto B44f36c;
case 0x44f36e:c.instructions+=2;goto B44f36e;
case 0x44f371:c.instructions+=1;goto B44f371;
case 0x44f373:goto L44f373;
case 0x44f376:c.instructions+=1;goto B44f376;
case 0x44f379:goto L44f379;
case 0x44f37f:c.instructions+=4;goto B44f37f;
case 0x44f385:c.instructions+=3;goto B44f385;
case 0x44f387:c.instructions+=2;goto B44f387;
case 0x44f38a:c.instructions+=1;goto B44f38a;
case 0x44f38f:goto L44f38f;
case 0x44f392:c.instructions+=3;goto B44f392;
case 0x44f396:c.instructions+=2;goto B44f396;
case 0x44f39a:c.instructions+=1;goto B44f39a;
case 0x44f39f:goto L44f39f;
case 0x44f3a3:c.instructions+=4;goto B44f3a3;
case 0x44f3a7:c.instructions+=3;goto B44f3a7;
case 0x44f3ab:c.instructions+=2;goto B44f3ab;
case 0x44f3ae:c.instructions+=1;goto B44f3ae;
case 0x44f3b0:goto L44f3b0;
case 0x44f3b4:goto L44f3b4;
case 0x44f3b8:c.instructions+=2;goto B44f3b8;
case 0x44f3bc:c.instructions+=1;goto B44f3bc;
case 0x44f3be:goto L44f3be;
case 0x44f3c2:goto L44f3c2;
case 0x44f3c3:c.instructions+=5;goto B44f3c3;
case 0x44f3c6:c.instructions+=4;goto B44f3c6;
case 0x44f3c7:c.instructions+=3;goto B44f3c7;
case 0x44f3cb:c.instructions+=2;goto B44f3cb;
case 0x44f3cc:c.instructions+=1;goto B44f3cc;
case 0x44f3d1:goto L44f3d1;
case 0x44f3d3:c.instructions+=8;goto B44f3d3;
case 0x44f3d7:c.instructions+=7;goto B44f3d7;
case 0x44f3dc:c.instructions+=6;goto B44f3dc;
case 0x44f3e0:c.instructions+=5;goto B44f3e0;
case 0x44f3e4:c.instructions+=4;goto B44f3e4;
case 0x44f3e5:c.instructions+=3;goto B44f3e5;
case 0x44f3e6:c.instructions+=2;goto B44f3e6;
case 0x44f3e7:c.instructions+=1;goto B44f3e7;
case 0x44f3ec:goto L44f3ec;
case 0x44f3ef:c.instructions+=10;goto B44f3ef;
case 0x44f3f3:c.instructions+=9;goto B44f3f3;
case 0x44f3f4:c.instructions+=8;goto B44f3f4;
case 0x44f3f8:c.instructions+=7;goto B44f3f8;
case 0x44f3fc:c.instructions+=6;goto B44f3fc;
case 0x44f3fd:c.instructions+=5;goto B44f3fd;
case 0x44f401:c.instructions+=4;goto B44f401;
case 0x44f402:c.instructions+=3;goto B44f402;
case 0x44f40a:c.instructions+=2;goto B44f40a;
case 0x44f412:c.instructions+=1;goto B44f412;
case 0x44f417:goto L44f417;
case 0x44f41c:c.instructions+=5;goto B44f41c;
case 0x44f420:c.instructions+=4;goto B44f420;
case 0x44f421:c.instructions+=3;goto B44f421;
case 0x44f425:c.instructions+=2;goto B44f425;
case 0x44f426:c.instructions+=1;goto B44f426;
case 0x44f42b:goto L44f42b;
case 0x44f430:c.instructions+=5;goto B44f430;
case 0x44f434:c.instructions+=4;goto B44f434;
case 0x44f435:c.instructions+=3;goto B44f435;
case 0x44f439:c.instructions+=2;goto B44f439;
case 0x44f43a:c.instructions+=1;goto B44f43a;
case 0x44f43f:goto L44f43f;
case 0x44f444:c.instructions+=3;goto B44f444;
case 0x44f447:c.instructions+=2;goto B44f447;
case 0x44f449:c.instructions+=1;goto B44f449;
case 0x44f44b:goto L44f44b;
case 0x44f44e:c.instructions+=1;goto B44f44e;
case 0x44f457:goto L44f457;
case 0x44f45d:c.instructions+=5;goto B44f45d;
case 0x44f45e:c.instructions+=4;goto B44f45e;
case 0x44f461:c.instructions+=3;goto B44f461;
case 0x44f465:c.instructions+=2;goto B44f465;
case 0x44f466:c.instructions+=1;goto B44f466;
case 0x44f46b:goto L44f46b;
case 0x44f46c:c.instructions+=4;goto B44f46c;
case 0x44f46d:c.instructions+=3;goto B44f46d;
case 0x44f46f:c.instructions+=2;goto B44f46f;
case 0x44f470:c.instructions+=1;goto B44f470;
case 0x44f480:goto L44f480;
case 0x44f483:c.instructions+=24;goto B44f483;
case 0x44f484:c.instructions+=23;goto B44f484;
case 0x44f486:c.instructions+=22;goto B44f486;
case 0x44f487:c.instructions+=21;goto B44f487;
case 0x44f48d:c.instructions+=20;goto B44f48d;
case 0x44f48e:c.instructions+=19;goto B44f48e;
case 0x44f48f:c.instructions+=18;goto B44f48f;
case 0x44f491:c.instructions+=17;goto B44f491;
case 0x44f494:c.instructions+=16;goto B44f494;
case 0x44f499:c.instructions+=15;goto B44f499;
case 0x44f49d:c.instructions+=14;goto B44f49d;
case 0x44f4a5:c.instructions+=13;goto B44f4a5;
case 0x44f4a9:c.instructions+=12;goto B44f4a9;
case 0x44f4ad:c.instructions+=11;goto B44f4ad;
case 0x44f4b1:c.instructions+=10;goto B44f4b1;
case 0x44f4b5:c.instructions+=9;goto B44f4b5;
case 0x44f4b9:c.instructions+=8;goto B44f4b9;
case 0x44f4bd:c.instructions+=7;goto B44f4bd;
case 0x44f4c1:c.instructions+=6;goto B44f4c1;
case 0x44f4c5:c.instructions+=5;goto B44f4c5;
case 0x44f4c9:c.instructions+=4;goto B44f4c9;
case 0x44f4cd:c.instructions+=3;goto B44f4cd;
case 0x44f4d1:c.instructions+=2;goto B44f4d1;
case 0x44f4d5:c.instructions+=1;goto B44f4d5;
case 0x44f4da:goto L44f4da;
case 0x44f4dc:c.instructions+=2;goto B44f4dc;
case 0x44f4e0:c.instructions+=1;goto B44f4e0;
case 0x44f4e2:goto L44f4e2;
case 0x44f4e4:goto L44f4e4;
case 0x44f4e6:goto L44f4e6;
case 0x44f4ea:c.instructions+=7;goto B44f4ea;
case 0x44f4ee:c.instructions+=6;goto B44f4ee;
case 0x44f4ef:c.instructions+=5;goto B44f4ef;
case 0x44f4f1:c.instructions+=4;goto B44f4f1;
case 0x44f4f2:c.instructions+=3;goto B44f4f2;
case 0x44f4f3:c.instructions+=2;goto B44f4f3;
case 0x44f4f5:c.instructions+=1;goto B44f4f5;
case 0x44f4fa:goto L44f4fa;
case 0x44f4fc:c.instructions+=2;goto B44f4fc;
case 0x44f4fe:c.instructions+=1;goto B44f4fe;
case 0x44f500:goto L44f500;
case 0x44f504:c.instructions+=1;goto B44f504;
case 0x44f506:goto L44f506;
case 0x44f50a:c.instructions+=8;goto B44f50a;
case 0x44f50b:c.instructions+=7;goto B44f50b;
case 0x44f50c:c.instructions+=6;goto B44f50c;
case 0x44f50d:c.instructions+=5;goto B44f50d;
case 0x44f50e:c.instructions+=4;goto B44f50e;
case 0x44f512:c.instructions+=3;goto B44f512;
case 0x44f513:c.instructions+=2;goto B44f513;
case 0x44f515:c.instructions+=1;goto B44f515;
case 0x44f51a:goto L44f51a;
case 0x44f51e:c.instructions+=3;goto B44f51e;
case 0x44f520:c.instructions+=2;goto B44f520;
case 0x44f523:c.instructions+=1;goto B44f523;
case 0x44f525:goto L44f525;
case 0x44f52a:c.instructions+=3;goto B44f52a;
case 0x44f52e:c.instructions+=2;goto B44f52e;
case 0x44f532:c.instructions+=1;goto B44f532;
case 0x44f536:goto L44f536;
case 0x44f538:goto L44f538;
case 0x44f53c:c.instructions+=1;goto B44f53c;
case 0x44f53e:goto L44f53e;
case 0x44f540:goto L44f540;
case 0x44f543:c.instructions+=2;goto B44f543;
case 0x44f547:c.instructions+=1;goto B44f547;
case 0x44f549:goto L44f549;
case 0x44f54b:c.instructions+=5;goto B44f54b;
case 0x44f54f:c.instructions+=4;goto B44f54f;
case 0x44f552:c.instructions+=3;goto B44f552;
case 0x44f555:c.instructions+=2;goto B44f555;
case 0x44f55a:c.instructions+=1;goto B44f55a;
case 0x44f55e:goto L44f55e;
case 0x44f560:goto L44f560;
case 0x44f561:c.instructions+=5;goto B44f561;
case 0x44f562:c.instructions+=4;goto B44f562;
case 0x44f563:c.instructions+=3;goto B44f563;
case 0x44f565:c.instructions+=2;goto B44f565;
case 0x44f566:c.instructions+=1;goto B44f566;
case 0x44f568:goto L44f568;
case 0x44f56c:c.instructions+=2;goto B44f56c;
case 0x44f56e:c.instructions+=1;goto B44f56e;
case 0x44f570:goto L44f570;
case 0x44f575:c.instructions+=2;goto B44f575;
case 0x44f577:c.instructions+=1;goto B44f577;
case 0x44f579:goto L44f579;
case 0x44f57d:c.instructions+=2;goto B44f57d;
case 0x44f57f:c.instructions+=1;goto B44f57f;
case 0x44f581:goto L44f581;
case 0x44f584:c.instructions+=5;goto B44f584;
case 0x44f587:c.instructions+=4;goto B44f587;
case 0x44f589:c.instructions+=3;goto B44f589;
case 0x44f58b:c.instructions+=2;goto B44f58b;
case 0x44f58e:c.instructions+=1;goto B44f58e;
case 0x44f590:goto L44f590;
case 0x44f592:c.instructions+=2;goto B44f592;
case 0x44f595:c.instructions+=1;goto B44f595;
case 0x44f598:goto L44f598;
case 0x44f59a:c.instructions+=2;goto B44f59a;
case 0x44f59d:c.instructions+=1;goto B44f59d;
case 0x44f5a0:goto L44f5a0;
case 0x44f5a1:c.instructions+=58;goto B44f5a1;
case 0x44f5a3:c.instructions+=57;goto B44f5a3;
case 0x44f5a6:c.instructions+=56;goto B44f5a6;
case 0x44f5a9:c.instructions+=55;goto B44f5a9;
case 0x44f5ab:c.instructions+=54;goto B44f5ab;
case 0x44f5ac:c.instructions+=53;goto B44f5ac;
case 0x44f5ae:c.instructions+=52;goto B44f5ae;
case 0x44f5b4:c.instructions+=51;goto B44f5b4;
case 0x44f5be:c.instructions+=50;goto B44f5be;
case 0x44f5bf:c.instructions+=49;goto B44f5bf;
case 0x44f5c4:c.instructions+=48;goto B44f5c4;
case 0x44f5ca:c.instructions+=47;goto B44f5ca;
case 0x44f5d0:c.instructions+=46;goto B44f5d0;
case 0x44f5d6:c.instructions+=45;goto B44f5d6;
case 0x44f5dc:c.instructions+=44;goto B44f5dc;
case 0x44f5e2:c.instructions+=43;goto B44f5e2;
case 0x44f5ec:c.instructions+=42;goto B44f5ec;
case 0x44f5f2:c.instructions+=41;goto B44f5f2;
case 0x44f5f8:c.instructions+=40;goto B44f5f8;
case 0x44f601:c.instructions+=39;goto B44f601;
case 0x44f60b:c.instructions+=38;goto B44f60b;
case 0x44f615:c.instructions+=37;goto B44f615;
case 0x44f618:c.instructions+=36;goto B44f618;
case 0x44f61b:c.instructions+=35;goto B44f61b;
case 0x44f61e:c.instructions+=34;goto B44f61e;
case 0x44f621:c.instructions+=33;goto B44f621;
case 0x44f627:c.instructions+=32;goto B44f627;
case 0x44f62d:c.instructions+=31;goto B44f62d;
case 0x44f633:c.instructions+=30;goto B44f633;
case 0x44f639:c.instructions+=29;goto B44f639;
case 0x44f63f:c.instructions+=28;goto B44f63f;
case 0x44f645:c.instructions+=27;goto B44f645;
case 0x44f64b:c.instructions+=26;goto B44f64b;
case 0x44f651:c.instructions+=25;goto B44f651;
case 0x44f652:c.instructions+=24;goto B44f652;
case 0x44f656:c.instructions+=23;goto B44f656;
case 0x44f657:c.instructions+=22;goto B44f657;
case 0x44f659:c.instructions+=21;goto B44f659;
case 0x44f65d:c.instructions+=20;goto B44f65d;
case 0x44f661:c.instructions+=19;goto B44f661;
case 0x44f665:c.instructions+=18;goto B44f665;
case 0x44f669:c.instructions+=17;goto B44f669;
case 0x44f66d:c.instructions+=16;goto B44f66d;
case 0x44f675:c.instructions+=15;goto B44f675;
case 0x44f679:c.instructions+=14;goto B44f679;
case 0x44f67d:c.instructions+=13;goto B44f67d;
case 0x44f681:c.instructions+=12;goto B44f681;
case 0x44f685:c.instructions+=11;goto B44f685;
case 0x44f68d:c.instructions+=10;goto B44f68d;
case 0x44f695:c.instructions+=9;goto B44f695;
case 0x44f699:c.instructions+=8;goto B44f699;
case 0x44f69d:c.instructions+=7;goto B44f69d;
case 0x44f6a5:c.instructions+=6;goto B44f6a5;
case 0x44f6a9:c.instructions+=5;goto B44f6a9;
case 0x44f6af:c.instructions+=4;goto B44f6af;
case 0x44f6b5:c.instructions+=3;goto B44f6b5;
case 0x44f6bb:c.instructions+=2;goto B44f6bb;
case 0x44f6c1:c.instructions+=1;goto B44f6c1;
case 0x44f6c6:goto L44f6c6;
case 0x44f6c7:c.instructions+=4;goto B44f6c7;
case 0x44f6cb:c.instructions+=3;goto B44f6cb;
case 0x44f6cc:c.instructions+=2;goto B44f6cc;
case 0x44f6ce:c.instructions+=1;goto B44f6ce;
case 0x44f6d3:goto L44f6d3;
case 0x44f6d4:c.instructions+=5;goto B44f6d4;
case 0x44f6d6:c.instructions+=4;goto B44f6d6;
case 0x44f6d7:c.instructions+=3;goto B44f6d7;
case 0x44f6d9:c.instructions+=2;goto B44f6d9;
case 0x44f6da:c.instructions+=1;goto B44f6da;
case 0x44f6e0:goto L44f6e0;
case 0x44f6e2:c.instructions+=12;goto B44f6e2;
case 0x44f6e8:c.instructions+=11;goto B44f6e8;
case 0x44f6ed:c.instructions+=10;goto B44f6ed;
case 0x44f6ee:c.instructions+=9;goto B44f6ee;
case 0x44f6f5:c.instructions+=8;goto B44f6f5;
case 0x44f6f8:c.instructions+=7;goto B44f6f8;
case 0x44f6f9:c.instructions+=6;goto B44f6f9;
case 0x44f6fa:c.instructions+=5;goto B44f6fa;
case 0x44f6fb:c.instructions+=4;goto B44f6fb;
case 0x44f6fd:c.instructions+=3;goto B44f6fd;
case 0x44f700:c.instructions+=2;goto B44f700;
case 0x44f701:c.instructions+=1;goto B44f701;
case 0x44f704:goto L44f704;
case 0x44f705:c.instructions+=4;goto B44f705;
case 0x44f709:c.instructions+=3;goto B44f709;
case 0x44f70e:c.instructions+=2;goto B44f70e;
case 0x44f70f:c.instructions+=1;goto B44f70f;
case 0x44f714:goto L44f714;
case 0x44f716:c.instructions+=4;goto B44f716;
case 0x44f719:c.instructions+=3;goto B44f719;
case 0x44f71a:c.instructions+=2;goto B44f71a;
case 0x44f71c:c.instructions+=1;goto B44f71c;
case 0x44f71e:goto L44f71e;
case 0x44f720:goto L44f720;
case 0x44f723:c.instructions+=4;goto B44f723;
case 0x44f724:c.instructions+=3;goto B44f724;
case 0x44f728:c.instructions+=2;goto B44f728;
case 0x44f729:c.instructions+=1;goto B44f729;
case 0x44f72e:goto L44f72e;
case 0x44f731:c.instructions+=2;goto B44f731;
case 0x44f733:c.instructions+=1;goto B44f733;
case 0x44f735:goto L44f735;
case 0x44f737:c.instructions+=2;goto B44f737;
case 0x44f739:c.instructions+=1;goto B44f739;
case 0x44f73b:goto L44f73b;
case 0x44f73d:goto L44f73d;
case 0x44f73f:c.instructions+=1;goto B44f73f;
case 0x44f741:goto L44f741;
case 0x44f746:c.instructions+=1;goto B44f746;
case 0x44f74b:goto L44f74b;
case 0x44f74e:c.instructions+=4;goto B44f74e;
case 0x44f752:c.instructions+=3;goto B44f752;
case 0x44f754:c.instructions+=2;goto B44f754;
case 0x44f75c:c.instructions+=1;goto B44f75c;
case 0x44f75e:goto L44f75e;
case 0x44f762:c.instructions+=10;goto B44f762;
case 0x44f766:c.instructions+=9;goto B44f766;
case 0x44f767:c.instructions+=8;goto B44f767;
case 0x44f76b:c.instructions+=7;goto B44f76b;
case 0x44f76c:c.instructions+=6;goto B44f76c;
case 0x44f76d:c.instructions+=5;goto B44f76d;
case 0x44f771:c.instructions+=4;goto B44f771;
case 0x44f772:c.instructions+=3;goto B44f772;
case 0x44f773:c.instructions+=2;goto B44f773;
case 0x44f775:c.instructions+=1;goto B44f775;
case 0x44f77a:goto L44f77a;
case 0x44f77c:goto L44f77c;
case 0x44f77e:goto L44f77e;
case 0x44f781:c.instructions+=16;goto B44f781;
case 0x44f784:c.instructions+=15;goto B44f784;
case 0x44f786:c.instructions+=14;goto B44f786;
case 0x44f789:c.instructions+=13;goto B44f789;
case 0x44f78c:c.instructions+=12;goto B44f78c;
case 0x44f790:c.instructions+=11;goto B44f790;
case 0x44f792:c.instructions+=10;goto B44f792;
case 0x44f795:c.instructions+=9;goto B44f795;
case 0x44f796:c.instructions+=8;goto B44f796;
case 0x44f797:c.instructions+=7;goto B44f797;
case 0x44f798:c.instructions+=6;goto B44f798;
case 0x44f79b:c.instructions+=5;goto B44f79b;
case 0x44f79c:c.instructions+=4;goto B44f79c;
case 0x44f79d:c.instructions+=3;goto B44f79d;
case 0x44f7a4:c.instructions+=2;goto B44f7a4;
case 0x44f7a7:c.instructions+=1;goto B44f7a7;
case 0x44f7b0:goto L44f7b0;
case 0x44f7b3:c.instructions+=7;goto B44f7b3;
case 0x44f7b7:c.instructions+=6;goto B44f7b7;
case 0x44f7bb:c.instructions+=5;goto B44f7bb;
case 0x44f7be:c.instructions+=4;goto B44f7be;
case 0x44f7c0:c.instructions+=3;goto B44f7c0;
case 0x44f7c6:c.instructions+=2;goto B44f7c6;
case 0x44f7ca:c.instructions+=1;goto B44f7ca;
case 0x44f7cc:goto L44f7cc;
case 0x44f7d2:c.instructions+=2;goto B44f7d2;
case 0x44f7d4:c.instructions+=1;goto B44f7d4;
case 0x44f7d6:goto L44f7d6;
case 0x44f7d9:c.instructions+=2;goto B44f7d9;
case 0x44f7df:c.instructions+=1;goto B44f7df;
case 0x44f7e3:goto L44f7e3;
case 0x44f7e7:c.instructions+=4;goto B44f7e7;
case 0x44f7ed:c.instructions+=3;goto B44f7ed;
case 0x44f7ef:c.instructions+=2;goto B44f7ef;
case 0x44f7f2:c.instructions+=1;goto B44f7f2;
case 0x44f7f4:goto L44f7f4;
case 0x44f7f6:c.instructions+=1;goto B44f7f6;
case 0x44f7f8:goto L44f7f8;
case 0x44f7fa:goto L44f7fa;
case 0x44f7fc:c.instructions+=16;goto B44f7fc;
case 0x44f7fe:c.instructions+=15;goto B44f7fe;
case 0x44f801:c.instructions+=14;goto B44f801;
case 0x44f803:c.instructions+=13;goto B44f803;
case 0x44f804:c.instructions+=12;goto B44f804;
case 0x44f806:c.instructions+=11;goto B44f806;
case 0x44f807:c.instructions+=10;goto B44f807;
case 0x44f80a:c.instructions+=9;goto B44f80a;
case 0x44f80c:c.instructions+=8;goto B44f80c;
case 0x44f80d:c.instructions+=7;goto B44f80d;
case 0x44f811:c.instructions+=6;goto B44f811;
case 0x44f812:c.instructions+=5;goto B44f812;
case 0x44f814:c.instructions+=4;goto B44f814;
case 0x44f818:c.instructions+=3;goto B44f818;
case 0x44f81a:c.instructions+=2;goto B44f81a;
case 0x44f822:c.instructions+=1;goto B44f822;
case 0x44f824:goto L44f824;
case 0x44f82c:goto L44f82c;
case 0x44f830:c.instructions+=6;goto B44f830;
case 0x44f834:c.instructions+=5;goto B44f834;
case 0x44f837:c.instructions+=4;goto B44f837;
case 0x44f839:c.instructions+=3;goto B44f839;
case 0x44f83b:c.instructions+=2;goto B44f83b;
case 0x44f83f:c.instructions+=1;goto B44f83f;
case 0x44f841:goto L44f841;
case 0x44f843:c.instructions+=3;goto B44f843;
case 0x44f849:c.instructions+=2;goto B44f849;
case 0x44f84d:c.instructions+=1;goto B44f84d;
case 0x44f850:goto L44f850;
case 0x44f852:c.instructions+=4;goto B44f852;
case 0x44f856:c.instructions+=3;goto B44f856;
case 0x44f858:c.instructions+=2;goto B44f858;
case 0x44f85b:c.instructions+=1;goto B44f85b;
case 0x44f85d:goto L44f85d;
case 0x44f85e:c.instructions+=3;goto B44f85e;
case 0x44f864:c.instructions+=2;goto B44f864;
case 0x44f866:c.instructions+=1;goto B44f866;
case 0x44f868:goto L44f868;
case 0x44f86a:c.instructions+=6;goto B44f86a;
case 0x44f86c:c.instructions+=5;goto B44f86c;
case 0x44f86f:c.instructions+=4;goto B44f86f;
case 0x44f870:c.instructions+=3;goto B44f870;
case 0x44f872:c.instructions+=2;goto B44f872;
case 0x44f874:c.instructions+=1;goto B44f874;
case 0x44f876:goto L44f876;
case 0x44f878:goto L44f878;
case 0x44f87a:c.instructions+=1;goto B44f87a;
case 0x44f87c:goto L44f87c;
case 0x44f87e:c.instructions+=3;goto B44f87e;
case 0x44f884:c.instructions+=2;goto B44f884;
case 0x44f888:c.instructions+=1;goto B44f888;
case 0x44f88a:goto L44f88a;
case 0x44f88c:goto L44f88c;
case 0x44f890:c.instructions+=8;goto B44f890;
case 0x44f892:c.instructions+=7;goto B44f892;
case 0x44f898:c.instructions+=6;goto B44f898;
case 0x44f89a:c.instructions+=5;goto B44f89a;
case 0x44f8a0:c.instructions+=4;goto B44f8a0;
case 0x44f8a4:c.instructions+=3;goto B44f8a4;
case 0x44f8a8:c.instructions+=2;goto B44f8a8;
case 0x44f8ac:c.instructions+=1;goto B44f8ac;
case 0x44f8b0:goto L44f8b0;
case 0x44f8b4:c.instructions+=7;goto B44f8b4;
case 0x44f8b6:c.instructions+=6;goto B44f8b6;
case 0x44f8b8:c.instructions+=5;goto B44f8b8;
case 0x44f8bb:c.instructions+=4;goto B44f8bb;
case 0x44f8bc:c.instructions+=3;goto B44f8bc;
case 0x44f8be:c.instructions+=2;goto B44f8be;
case 0x44f8c0:c.instructions+=1;goto B44f8c0;
case 0x44f8c2:goto L44f8c2;
case 0x44f8c4:goto L44f8c4;
case 0x44f8c6:c.instructions+=1;goto B44f8c6;
case 0x44f8c8:goto L44f8c8;
case 0x44f8ca:c.instructions+=6;goto B44f8ca;
case 0x44f8cc:c.instructions+=5;goto B44f8cc;
case 0x44f8cf:c.instructions+=4;goto B44f8cf;
case 0x44f8d0:c.instructions+=3;goto B44f8d0;
case 0x44f8d2:c.instructions+=2;goto B44f8d2;
case 0x44f8d4:c.instructions+=1;goto B44f8d4;
case 0x44f8d6:goto L44f8d6;
case 0x44f8d8:goto L44f8d8;
case 0x44f8dc:c.instructions+=8;goto B44f8dc;
case 0x44f8de:c.instructions+=7;goto B44f8de;
case 0x44f8e0:c.instructions+=6;goto B44f8e0;
case 0x44f8e3:c.instructions+=5;goto B44f8e3;
case 0x44f8e4:c.instructions+=4;goto B44f8e4;
case 0x44f8e6:c.instructions+=3;goto B44f8e6;
case 0x44f8e8:c.instructions+=2;goto B44f8e8;
case 0x44f8eb:c.instructions+=1;goto B44f8eb;
case 0x44f8ed:goto L44f8ed;
case 0x44f8f1:c.instructions+=6;goto B44f8f1;
case 0x44f8f3:c.instructions+=5;goto B44f8f3;
case 0x44f8f6:c.instructions+=4;goto B44f8f6;
case 0x44f8fa:c.instructions+=3;goto B44f8fa;
case 0x44f8fc:c.instructions+=2;goto B44f8fc;
case 0x44f8ff:c.instructions+=1;goto B44f8ff;
case 0x44f901:goto L44f901;
case 0x44f905:c.instructions+=4;goto B44f905;
case 0x44f909:c.instructions+=3;goto B44f909;
case 0x44f90b:c.instructions+=2;goto B44f90b;
case 0x44f90e:c.instructions+=1;goto B44f90e;
case 0x44f910:goto L44f910;
case 0x44f911:c.instructions+=5;goto B44f911;
case 0x44f915:c.instructions+=4;goto B44f915;
case 0x44f916:c.instructions+=3;goto B44f916;
case 0x44f917:c.instructions+=2;goto B44f917;
case 0x44f918:c.instructions+=1;goto B44f918;
case 0x44f91d:goto L44f91d;
case 0x44f91f:c.instructions+=1;goto B44f91f;
case 0x44f921:goto L44f921;
case 0x44f925:c.instructions+=6;goto B44f925;
case 0x44f929:c.instructions+=5;goto B44f929;
case 0x44f92d:c.instructions+=4;goto B44f92d;
case 0x44f92f:c.instructions+=3;goto B44f92f;
case 0x44f931:c.instructions+=2;goto B44f931;
case 0x44f935:c.instructions+=1;goto B44f935;
case 0x44f93a:goto L44f93a;
case 0x44f93d:c.instructions+=1;goto B44f93d;
case 0x44f941:goto L44f941;
case 0x44f945:c.instructions+=1;goto B44f945;
case 0x44f94a:goto L44f94a;
case 0x44f94e:c.instructions+=14;goto B44f94e;
case 0x44f952:c.instructions+=13;goto B44f952;
case 0x44f953:c.instructions+=12;goto B44f953;
case 0x44f954:c.instructions+=11;goto B44f954;
case 0x44f955:c.instructions+=10;goto B44f955;
case 0x44f957:c.instructions+=9;goto B44f957;
case 0x44f958:c.instructions+=8;goto B44f958;
case 0x44f95c:c.instructions+=7;goto B44f95c;
case 0x44f962:c.instructions+=6;goto B44f962;
case 0x44f966:c.instructions+=5;goto B44f966;
case 0x44f968:c.instructions+=4;goto B44f968;
case 0x44f96e:c.instructions+=3;goto B44f96e;
case 0x44f970:c.instructions+=2;goto B44f970;
case 0x44f973:c.instructions+=1;goto B44f973;
case 0x44f975:goto L44f975;
case 0x44f977:c.instructions+=7;goto B44f977;
case 0x44f97b:c.instructions+=6;goto B44f97b;
case 0x44f97f:c.instructions+=5;goto B44f97f;
case 0x44f985:c.instructions+=4;goto B44f985;
case 0x44f987:c.instructions+=3;goto B44f987;
case 0x44f989:c.instructions+=2;goto B44f989;
case 0x44f98c:c.instructions+=1;goto B44f98c;
case 0x44f98e:goto L44f98e;
case 0x44f990:c.instructions+=1;goto B44f990;
case 0x44f996:goto L44f996;
case 0x44f999:c.instructions+=1;goto B44f999;
case 0x44f9a0:goto L44f9a0;
case 0x44f9a3:c.instructions+=12;goto B44f9a3;
case 0x44f9a8:c.instructions+=11;goto B44f9a8;
case 0x44f9a9:c.instructions+=10;goto B44f9a9;
case 0x44f9aa:c.instructions+=9;goto B44f9aa;
case 0x44f9ab:c.instructions+=8;goto B44f9ab;
case 0x44f9ad:c.instructions+=7;goto B44f9ad;
case 0x44f9af:c.instructions+=6;goto B44f9af;
case 0x44f9b1:c.instructions+=5;goto B44f9b1;
case 0x44f9b2:c.instructions+=4;goto B44f9b2;
case 0x44f9b6:c.instructions+=3;goto B44f9b6;
case 0x44f9ba:c.instructions+=2;goto B44f9ba;
case 0x44f9be:c.instructions+=1;goto B44f9be;
case 0x44f9c4:goto L44f9c4;
case 0x44f9c6:c.instructions+=1;goto B44f9c6;
case 0x44f9cb:goto L44f9cb;
case 0x44f9cd:c.instructions+=2;goto B44f9cd;
case 0x44f9cf:c.instructions+=1;goto B44f9cf;
case 0x44f9d5:goto L44f9d5;
case 0x44f9d8:c.instructions+=9;goto B44f9d8;
case 0x44f9da:c.instructions+=8;goto B44f9da;
case 0x44f9dc:c.instructions+=7;goto B44f9dc;
case 0x44f9e0:c.instructions+=6;goto B44f9e0;
case 0x44f9e2:c.instructions+=5;goto B44f9e2;
case 0x44f9e6:c.instructions+=4;goto B44f9e6;
case 0x44f9e7:c.instructions+=3;goto B44f9e7;
case 0x44f9e9:c.instructions+=2;goto B44f9e9;
case 0x44f9ea:c.instructions+=1;goto B44f9ea;
case 0x44f9ef:goto L44f9ef;
case 0x44f9f1:c.instructions+=4;goto B44f9f1;
case 0x44f9f4:c.instructions+=3;goto B44f9f4;
case 0x44f9f6:c.instructions+=2;goto B44f9f6;
case 0x44f9fa:c.instructions+=1;goto B44f9fa;
case 0x44fa00:goto L44fa00;
case 0x44fa03:c.instructions+=3;goto B44fa03;
case 0x44fa04:c.instructions+=2;goto B44fa04;
case 0x44fa08:c.instructions+=1;goto B44fa08;
case 0x44fa0d:goto L44fa0d;
case 0x44fa13:c.instructions+=7;goto B44fa13;
case 0x44fa15:c.instructions+=6;goto B44fa15;
case 0x44fa18:c.instructions+=5;goto B44fa18;
case 0x44fa1c:c.instructions+=4;goto B44fa1c;
case 0x44fa1d:c.instructions+=3;goto B44fa1d;
case 0x44fa1f:c.instructions+=2;goto B44fa1f;
case 0x44fa23:c.instructions+=1;goto B44fa23;
case 0x44fa28:goto L44fa28;
case 0x44fa2c:c.instructions+=3;goto B44fa2c;
case 0x44fa2f:c.instructions+=2;goto B44fa2f;
case 0x44fa33:c.instructions+=1;goto B44fa33;
case 0x44fa39:goto L44fa39;
case 0x44fa3d:c.instructions+=1;goto B44fa3d;
case 0x44fa40:goto L44fa40;
case 0x44fa44:c.instructions+=5;goto B44fa44;
case 0x44fa48:c.instructions+=4;goto B44fa48;
case 0x44fa4b:c.instructions+=3;goto B44fa4b;
case 0x44fa4c:c.instructions+=2;goto B44fa4c;
case 0x44fa4e:c.instructions+=1;goto B44fa4e;
case 0x44fa53:goto L44fa53;
case 0x44fa55:c.instructions+=2;goto B44fa55;
case 0x44fa57:c.instructions+=1;goto B44fa57;
case 0x44fa59:goto L44fa59;
case 0x44fa5b:goto L44fa5b;
case 0x44fa5c:c.instructions+=2;goto B44fa5c;
case 0x44fa5e:c.instructions+=1;goto B44fa5e;
case 0x44fa63:goto L44fa63;
case 0x44fa65:c.instructions+=2;goto B44fa65;
case 0x44fa67:c.instructions+=1;goto B44fa67;
case 0x44fa69:goto L44fa69;
case 0x44fa6c:c.instructions+=1;goto B44fa6c;
case 0x44fa6e:goto L44fa6e;
case 0x44fa72:c.instructions+=6;goto B44fa72;
case 0x44fa73:c.instructions+=5;goto B44fa73;
case 0x44fa77:c.instructions+=4;goto B44fa77;
case 0x44fa78:c.instructions+=3;goto B44fa78;
case 0x44fa79:c.instructions+=2;goto B44fa79;
case 0x44fa7a:c.instructions+=1;goto B44fa7a;
case 0x44fa7f:goto L44fa7f;
case 0x44fa85:c.instructions+=3;goto B44fa85;
case 0x44fa87:c.instructions+=2;goto B44fa87;
case 0x44fa8a:c.instructions+=1;goto B44fa8a;
case 0x44fa8c:goto L44fa8c;
case 0x44fa90:c.instructions+=5;goto B44fa90;
case 0x44fa94:c.instructions+=4;goto B44fa94;
case 0x44fa95:c.instructions+=3;goto B44fa95;
case 0x44fa96:c.instructions+=2;goto B44fa96;
case 0x44fa97:c.instructions+=1;goto B44fa97;
case 0x44fa9c:goto L44fa9c;
case 0x44fa9e:c.instructions+=1;goto B44fa9e;
case 0x44faa0:goto L44faa0;
case 0x44faa4:c.instructions+=4;goto B44faa4;
case 0x44faa8:c.instructions+=3;goto B44faa8;
case 0x44faab:c.instructions+=2;goto B44faab;
case 0x44faac:c.instructions+=1;goto B44faac;
case 0x44fab0:goto L44fab0;
case 0x44fab4:c.instructions+=6;goto B44fab4;
case 0x44fab8:c.instructions+=5;goto B44fab8;
case 0x44fabb:c.instructions+=4;goto B44fabb;
case 0x44fabc:c.instructions+=3;goto B44fabc;
case 0x44fabe:c.instructions+=2;goto B44fabe;
case 0x44fac2:c.instructions+=1;goto B44fac2;
case 0x44fac8:goto L44fac8;
case 0x44facc:c.instructions+=2;goto B44facc;
case 0x44face:c.instructions+=1;goto B44face;
case 0x44fad0:goto L44fad0;
case 0x44fad1:c.instructions+=1;goto B44fad1;
case 0x44fad6:goto L44fad6;
case 0x44fada:c.instructions+=6;goto B44fada;
case 0x44fadd:c.instructions+=5;goto B44fadd;
case 0x44fae1:c.instructions+=4;goto B44fae1;
case 0x44fae5:c.instructions+=3;goto B44fae5;
case 0x44fae8:c.instructions+=2;goto B44fae8;
case 0x44faec:c.instructions+=1;goto B44faec;
case 0x44faee:goto L44faee;
case 0x44faf2:c.instructions+=2;goto B44faf2;
case 0x44faf3:c.instructions+=1;goto B44faf3;
case 0x44faf8:goto L44faf8;
case 0x44fafc:c.instructions+=3;goto B44fafc;
case 0x44faff:c.instructions+=2;goto B44faff;
case 0x44fb01:c.instructions+=1;goto B44fb01;
case 0x44fb07:goto L44fb07;
case 0x44fb0b:c.instructions+=5;goto B44fb0b;
case 0x44fb0e:c.instructions+=4;goto B44fb0e;
case 0x44fb11:c.instructions+=3;goto B44fb11;
case 0x44fb12:c.instructions+=2;goto B44fb12;
case 0x44fb1a:c.instructions+=1;goto B44fb1a;
case 0x44fb1f:goto L44fb1f;
case 0x44fb21:c.instructions+=6;goto B44fb21;
case 0x44fb24:c.instructions+=5;goto B44fb24;
case 0x44fb27:c.instructions+=4;goto B44fb27;
case 0x44fb29:c.instructions+=3;goto B44fb29;
case 0x44fb2b:c.instructions+=2;goto B44fb2b;
case 0x44fb2f:c.instructions+=1;goto B44fb2f;
case 0x44fb35:goto L44fb35;
case 0x44fb37:goto L44fb37;
case 0x44fb3a:c.instructions+=3;goto B44fb3a;
case 0x44fb3d:c.instructions+=2;goto B44fb3d;
case 0x44fb3f:c.instructions+=1;goto B44fb3f;
case 0x44fb44:goto L44fb44;
case 0x44fb46:c.instructions+=1;goto B44fb46;
case 0x44fb48:goto L44fb48;
case 0x44fb4b:c.instructions+=3;goto B44fb4b;
case 0x44fb4c:c.instructions+=2;goto B44fb4c;
case 0x44fb51:c.instructions+=1;goto B44fb51;
case 0x44fb53:goto L44fb53;
case 0x44fb55:goto L44fb55;
case 0x44fb58:c.instructions+=3;goto B44fb58;
case 0x44fb5a:c.instructions+=2;goto B44fb5a;
case 0x44fb5e:c.instructions+=1;goto B44fb5e;
case 0x44fb60:goto L44fb60;
case 0x44fb64:c.instructions+=2;goto B44fb64;
case 0x44fb65:c.instructions+=1;goto B44fb65;
case 0x44fb69:goto L44fb69;
case 0x44fb6c:c.instructions+=1;goto B44fb6c;
case 0x44fb6e:goto L44fb6e;
case 0x44fb71:c.instructions+=2;goto B44fb71;
case 0x44fb78:c.instructions+=1;goto B44fb78;
case 0x44fb7a:goto L44fb7a;
case 0x44fb80:goto L44fb80;
case 0x44fb86:c.instructions+=3;goto B44fb86;
case 0x44fb88:c.instructions+=2;goto B44fb88;
case 0x44fb8b:c.instructions+=1;goto B44fb8b;
case 0x44fb8d:goto L44fb8d;
case 0x44fb91:c.instructions+=3;goto B44fb91;
case 0x44fb95:c.instructions+=2;goto B44fb95;
case 0x44fb99:c.instructions+=1;goto B44fb99;
case 0x44fb9b:goto L44fb9b;
case 0x44fb9d:c.instructions+=1;goto B44fb9d;
case 0x44fba5:goto L44fba5;
case 0x44fba8:c.instructions+=4;goto B44fba8;
case 0x44fba9:c.instructions+=3;goto B44fba9;
case 0x44fbac:c.instructions+=2;goto B44fbac;
case 0x44fbae:c.instructions+=1;goto B44fbae;
case 0x44fbb0:goto L44fbb0;
case 0x44fbb4:c.instructions+=4;goto B44fbb4;
case 0x44fbba:c.instructions+=3;goto B44fbba;
case 0x44fbbc:c.instructions+=2;goto B44fbbc;
case 0x44fbbf:c.instructions+=1;goto B44fbbf;
case 0x44fbc5:goto L44fbc5;
case 0x44fbc8:c.instructions+=4;goto B44fbc8;
case 0x44fbca:c.instructions+=3;goto B44fbca;
case 0x44fbcc:c.instructions+=2;goto B44fbcc;
case 0x44fbce:c.instructions+=1;goto B44fbce;
case 0x44fbd4:goto L44fbd4;
case 0x44fbd6:c.instructions+=1;goto B44fbd6;
case 0x44fbe0:goto L44fbe0;
case 0x44fbe4:c.instructions+=4;goto B44fbe4;
case 0x44fbea:c.instructions+=3;goto B44fbea;
case 0x44fbec:c.instructions+=2;goto B44fbec;
case 0x44fbef:c.instructions+=1;goto B44fbef;
case 0x44fbf1:goto L44fbf1;
case 0x44fbf4:c.instructions+=1;goto B44fbf4;
case 0x44fbf8:goto L44fbf8;
case 0x44fbf9:c.instructions+=3;goto B44fbf9;
case 0x44fbfc:c.instructions+=2;goto B44fbfc;
case 0x44fbfe:c.instructions+=1;goto B44fbfe;
case 0x44fc00:goto L44fc00;
case 0x44fc02:c.instructions+=1;goto B44fc02;
case 0x44fc08:goto L44fc08;
case 0x44fc0b:c.instructions+=5;goto B44fc0b;
case 0x44fc0e:c.instructions+=4;goto B44fc0e;
case 0x44fc10:c.instructions+=3;goto B44fc10;
case 0x44fc11:c.instructions+=2;goto B44fc11;
case 0x44fc15:c.instructions+=1;goto B44fc15;
case 0x44fc1a:goto L44fc1a;
case 0x44fc1e:c.instructions+=5;goto B44fc1e;
case 0x44fc21:c.instructions+=4;goto B44fc21;
case 0x44fc24:c.instructions+=3;goto B44fc24;
case 0x44fc26:c.instructions+=2;goto B44fc26;
case 0x44fc2a:c.instructions+=1;goto B44fc2a;
case 0x44fc30:goto L44fc30;
case 0x44fc34:goto L44fc34;
case 0x44fc38:c.instructions+=7;goto B44fc38;
case 0x44fc3c:c.instructions+=6;goto B44fc3c;
case 0x44fc3f:c.instructions+=5;goto B44fc3f;
case 0x44fc43:c.instructions+=4;goto B44fc43;
case 0x44fc49:c.instructions+=3;goto B44fc49;
case 0x44fc4b:c.instructions+=2;goto B44fc4b;
case 0x44fc4e:c.instructions+=1;goto B44fc4e;
case 0x44fc54:goto L44fc54;
case 0x44fc58:c.instructions+=9;goto B44fc58;
case 0x44fc5c:c.instructions+=8;goto B44fc5c;
case 0x44fc5f:c.instructions+=7;goto B44fc5f;
case 0x44fc63:c.instructions+=6;goto B44fc63;
case 0x44fc67:c.instructions+=5;goto B44fc67;
case 0x44fc6b:c.instructions+=4;goto B44fc6b;
case 0x44fc6d:c.instructions+=3;goto B44fc6d;
case 0x44fc6f:c.instructions+=2;goto B44fc6f;
case 0x44fc77:c.instructions+=1;goto B44fc77;
case 0x44fc7d:goto L44fc7d;
case 0x44fc81:c.instructions+=4;goto B44fc81;
case 0x44fc85:c.instructions+=3;goto B44fc85;
case 0x44fc88:c.instructions+=2;goto B44fc88;
case 0x44fc8c:c.instructions+=1;goto B44fc8c;
case 0x44fc90:goto L44fc90;
case 0x44fc94:c.instructions+=4;goto B44fc94;
case 0x44fc97:c.instructions+=3;goto B44fc97;
case 0x44fc98:c.instructions+=2;goto B44fc98;
case 0x44fc9a:c.instructions+=1;goto B44fc9a;
case 0x44fc9f:goto L44fc9f;
case 0x44fca1:c.instructions+=2;goto B44fca1;
case 0x44fca3:c.instructions+=1;goto B44fca3;
case 0x44fca5:goto L44fca5;
case 0x44fca7:goto L44fca7;
case 0x44fcab:c.instructions+=2;goto B44fcab;
case 0x44fcac:c.instructions+=1;goto B44fcac;
case 0x44fcae:goto L44fcae;
case 0x44fcb0:c.instructions+=1;goto B44fcb0;
case 0x44fcb6:goto L44fcb6;
case 0x44fcb9:c.instructions+=2;goto B44fcb9;
case 0x44fcbb:c.instructions+=1;goto B44fcbb;
case 0x44fcc1:goto L44fcc1;
case 0x44fcc4:c.instructions+=1;goto B44fcc4;
case 0x44fcca:goto L44fcca;
case 0x44fccc:c.instructions+=2;goto B44fccc;
case 0x44fcce:c.instructions+=1;goto B44fcce;
case 0x44fcd3:goto L44fcd3;
case 0x44fcd5:c.instructions+=1;goto B44fcd5;
case 0x44fcd7:goto L44fcd7;
case 0x44fcda:c.instructions+=3;goto B44fcda;
case 0x44fcdb:c.instructions+=2;goto B44fcdb;
case 0x44fce0:c.instructions+=1;goto B44fce0;
case 0x44fce2:goto L44fce2;
case 0x44fce4:goto L44fce4;
case 0x44fce7:c.instructions+=2;goto B44fce7;
case 0x44fce9:c.instructions+=1;goto B44fce9;
case 0x44fceb:goto L44fceb;
case 0x44fcef:c.instructions+=2;goto B44fcef;
case 0x44fcf0:c.instructions+=1;goto B44fcf0;
case 0x44fcf2:goto L44fcf2;
case 0x44fcf5:c.instructions+=2;goto B44fcf5;
case 0x44fcfa:c.instructions+=1;goto B44fcfa;
case 0x44fcfc:goto L44fcfc;
case 0x44fcff:c.instructions+=2;goto B44fcff;
case 0x44fd06:c.instructions+=1;goto B44fd06;
case 0x44fd08:goto L44fd08;
case 0x44fd0f:goto L44fd0f;
case 0x44fd13:c.instructions+=4;goto B44fd13;
case 0x44fd19:c.instructions+=3;goto B44fd19;
case 0x44fd1b:c.instructions+=2;goto B44fd1b;
case 0x44fd1e:c.instructions+=1;goto B44fd1e;
case 0x44fd20:goto L44fd20;
case 0x44fd24:c.instructions+=5;goto B44fd24;
case 0x44fd28:c.instructions+=4;goto B44fd28;
case 0x44fd29:c.instructions+=3;goto B44fd29;
case 0x44fd2b:c.instructions+=2;goto B44fd2b;
case 0x44fd2c:c.instructions+=1;goto B44fd2c;
case 0x44fd31:goto L44fd31;
case 0x44fd33:c.instructions+=1;goto B44fd33;
case 0x44fd35:goto L44fd35;
case 0x44fd39:c.instructions+=3;goto B44fd39;
case 0x44fd3b:c.instructions+=2;goto B44fd3b;
case 0x44fd3e:c.instructions+=1;goto B44fd3e;
case 0x44fd40:goto L44fd40;
case 0x44fd42:c.instructions+=1;goto B44fd42;
case 0x44fd44:goto L44fd44;
case 0x44fd45:c.instructions+=3;goto B44fd45;
case 0x44fd48:c.instructions+=2;goto B44fd48;
case 0x44fd4b:c.instructions+=1;goto B44fd4b;
case 0x44fd4d:goto L44fd4d;
case 0x44fd51:c.instructions+=6;goto B44fd51;
case 0x44fd54:c.instructions+=5;goto B44fd54;
case 0x44fd57:c.instructions+=4;goto B44fd57;
case 0x44fd5d:c.instructions+=3;goto B44fd5d;
case 0x44fd60:c.instructions+=2;goto B44fd60;
case 0x44fd64:c.instructions+=1;goto B44fd64;
case 0x44fd67:goto L44fd67;
case 0x44fd6e:goto L44fd6e;
case 0x44fd72:c.instructions+=5;goto B44fd72;
case 0x44fd75:c.instructions+=4;goto B44fd75;
case 0x44fd76:c.instructions+=3;goto B44fd76;
case 0x44fd78:c.instructions+=2;goto B44fd78;
case 0x44fd7c:c.instructions+=1;goto B44fd7c;
case 0x44fd82:goto L44fd82;
case 0x44fd86:c.instructions+=7;goto B44fd86;
case 0x44fd8a:c.instructions+=6;goto B44fd8a;
case 0x44fd8c:c.instructions+=5;goto B44fd8c;
case 0x44fd8e:c.instructions+=4;goto B44fd8e;
case 0x44fd90:c.instructions+=3;goto B44fd90;
case 0x44fd92:c.instructions+=2;goto B44fd92;
case 0x44fd96:c.instructions+=1;goto B44fd96;
case 0x44fd98:goto L44fd98;
case 0x44fd9a:c.instructions+=4;goto B44fd9a;
case 0x44fd9e:c.instructions+=3;goto B44fd9e;
case 0x44fda4:c.instructions+=2;goto B44fda4;
case 0x44fda8:c.instructions+=1;goto B44fda8;
case 0x44fdaa:goto L44fdaa;
case 0x44fdae:c.instructions+=2;goto B44fdae;
case 0x44fdb1:c.instructions+=1;goto B44fdb1;
case 0x44fdb5:goto L44fdb5;
case 0x44fdb9:c.instructions+=5;goto B44fdb9;
case 0x44fdbc:c.instructions+=4;goto B44fdbc;
case 0x44fdbd:c.instructions+=3;goto B44fdbd;
case 0x44fdc0:c.instructions+=2;goto B44fdc0;
case 0x44fdc3:c.instructions+=1;goto B44fdc3;
case 0x44fdc5:goto L44fdc5;
case 0x44fdc9:c.instructions+=9;goto B44fdc9;
case 0x44fdcd:c.instructions+=8;goto B44fdcd;
case 0x44fdd1:c.instructions+=7;goto B44fdd1;
case 0x44fdd4:c.instructions+=6;goto B44fdd4;
case 0x44fdd5:c.instructions+=5;goto B44fdd5;
case 0x44fdd8:c.instructions+=4;goto B44fdd8;
case 0x44fdda:c.instructions+=3;goto B44fdda;
case 0x44fdde:c.instructions+=2;goto B44fdde;
case 0x44fde2:c.instructions+=1;goto B44fde2;
case 0x44fde8:goto L44fde8;
case 0x44fdec:c.instructions+=2;goto B44fdec;
case 0x44fdee:c.instructions+=1;goto B44fdee;
case 0x44fdf0:goto L44fdf0;
case 0x44fdf4:c.instructions+=2;goto B44fdf4;
case 0x44fdf5:c.instructions+=1;goto B44fdf5;
case 0x44fdfa:goto L44fdfa;
case 0x44fdfe:c.instructions+=4;goto B44fdfe;
case 0x44fe01:c.instructions+=3;goto B44fe01;
case 0x44fe03:c.instructions+=2;goto B44fe03;
case 0x44fe05:c.instructions+=1;goto B44fe05;
case 0x44fe07:goto L44fe07;
case 0x44fe0b:c.instructions+=2;goto B44fe0b;
case 0x44fe0e:c.instructions+=1;goto B44fe0e;
case 0x44fe10:goto L44fe10;
case 0x44fe12:c.instructions+=5;goto B44fe12;
case 0x44fe14:c.instructions+=4;goto B44fe14;
case 0x44fe16:c.instructions+=3;goto B44fe16;
case 0x44fe18:c.instructions+=2;goto B44fe18;
case 0x44fe1b:c.instructions+=1;goto B44fe1b;
case 0x44fe1d:goto L44fe1d;
case 0x44fe1e:c.instructions+=4;goto B44fe1e;
case 0x44fe20:c.instructions+=3;goto B44fe20;
case 0x44fe23:c.instructions+=2;goto B44fe23;
case 0x44fe25:c.instructions+=1;goto B44fe25;
case 0x44fe27:goto L44fe27;
case 0x44fe29:goto L44fe29;
case 0x44fe2c:c.instructions+=8;goto B44fe2c;
case 0x44fe2e:c.instructions+=7;goto B44fe2e;
case 0x44fe31:c.instructions+=6;goto B44fe31;
case 0x44fe35:c.instructions+=5;goto B44fe35;
case 0x44fe38:c.instructions+=4;goto B44fe38;
case 0x44fe3c:c.instructions+=3;goto B44fe3c;
case 0x44fe42:c.instructions+=2;goto B44fe42;
case 0x44fe46:c.instructions+=1;goto B44fe46;
case 0x44fe4c:goto L44fe4c;
case 0x44fe4e:goto L44fe4e;
case 0x44fe52:c.instructions+=2;goto B44fe52;
case 0x44fe53:c.instructions+=1;goto B44fe53;
case 0x44fe58:goto L44fe58;
case 0x44fe5c:c.instructions+=1;goto B44fe5c;
case 0x44fe5f:goto L44fe5f;
case 0x44fe60:c.instructions+=1;goto B44fe60;
case 0x44fe65:goto L44fe65;
case 0x44fe68:goto L44fe68;
case 0x44fe6c:c.instructions+=6;goto B44fe6c;
case 0x44fe6d:c.instructions+=5;goto B44fe6d;
case 0x44fe6e:c.instructions+=4;goto B44fe6e;
case 0x44fe6f:c.instructions+=3;goto B44fe6f;
case 0x44fe70:c.instructions+=2;goto B44fe70;
case 0x44fe73:c.instructions+=1;goto B44fe73;
case 0x44fe80:goto L44fe80;
case 0x44fe83:c.instructions+=9;goto B44fe83;
case 0x44fe84:c.instructions+=8;goto B44fe84;
case 0x44fe85:c.instructions+=7;goto B44fe85;
case 0x44fe86:c.instructions+=6;goto B44fe86;
case 0x44fe88:c.instructions+=5;goto B44fe88;
case 0x44fe8e:c.instructions+=4;goto B44fe8e;
case 0x44fe90:c.instructions+=3;goto B44fe90;
case 0x44fe92:c.instructions+=2;goto B44fe92;
case 0x44fe9a:c.instructions+=1;goto B44fe9a;
case 0x44fe9c:goto L44fe9c;
case 0x44fea2:c.instructions+=2;goto B44fea2;
case 0x44fea4:c.instructions+=1;goto B44fea4;
case 0x44fea6:goto L44fea6;
case 0x44feac:c.instructions+=3;goto B44feac;
case 0x44fead:c.instructions+=2;goto B44fead;
case 0x44feb2:c.instructions+=1;goto B44feb2;
case 0x44feb7:goto L44feb7;
case 0x44feb9:c.instructions+=1;goto B44feb9;
case 0x44febf:goto L44febf;
case 0x44fec5:c.instructions+=2;goto B44fec5;
case 0x44fec9:c.instructions+=1;goto B44fec9;
case 0x44fece:goto L44fece;
case 0x44fed0:c.instructions+=2;goto B44fed0;
case 0x44fed5:c.instructions+=1;goto B44fed5;
case 0x44feda:goto L44feda;
case 0x44fedc:c.instructions+=1;goto B44fedc;
case 0x44fede:goto L44fede;
case 0x44fedf:c.instructions+=2;goto B44fedf;
case 0x44fee4:c.instructions+=1;goto B44fee4;
case 0x44fee9:goto L44fee9;
case 0x44feeb:c.instructions+=2;goto B44feeb;
case 0x44feed:c.instructions+=1;goto B44feed;
case 0x44fef3:goto L44fef3;
case 0x44fef5:c.instructions+=1;goto B44fef5;
case 0x44fefa:goto L44fefa;
case 0x44fefb:c.instructions+=2;goto B44fefb;
case 0x44fefd:c.instructions+=1;goto B44fefd;
case 0x44ff02:goto L44ff02;
case 0x44ff04:c.instructions+=2;goto B44ff04;
case 0x44ff06:c.instructions+=1;goto B44ff06;
case 0x44ff0c:goto L44ff0c;
case 0x44ff0f:c.instructions+=8;goto B44ff0f;
case 0x44ff15:c.instructions+=7;goto B44ff15;
case 0x44ff18:c.instructions+=6;goto B44ff18;
case 0x44ff19:c.instructions+=5;goto B44ff19;
case 0x44ff1d:c.instructions+=4;goto B44ff1d;
case 0x44ff22:c.instructions+=3;goto B44ff22;
case 0x44ff23:c.instructions+=2;goto B44ff23;
case 0x44ff27:c.instructions+=1;goto B44ff27;
case 0x44ff2c:goto L44ff2c;
case 0x44ff2f:c.instructions+=4;goto B44ff2f;
case 0x44ff33:c.instructions+=3;goto B44ff33;
case 0x44ff34:c.instructions+=2;goto B44ff34;
case 0x44ff36:c.instructions+=1;goto B44ff36;
case 0x44ff3b:goto L44ff3b;
case 0x44ff3d:c.instructions+=1;goto B44ff3d;
case 0x44ff3f:goto L44ff3f;
case 0x44ff43:c.instructions+=5;goto B44ff43;
case 0x44ff47:c.instructions+=4;goto B44ff47;
case 0x44ff48:c.instructions+=3;goto B44ff48;
case 0x44ff49:c.instructions+=2;goto B44ff49;
case 0x44ff4b:c.instructions+=1;goto B44ff4b;
case 0x44ff50:goto L44ff50;
case 0x44ff52:c.instructions+=4;goto B44ff52;
case 0x44ff54:c.instructions+=3;goto B44ff54;
case 0x44ff57:c.instructions+=2;goto B44ff57;
case 0x44ff59:c.instructions+=1;goto B44ff59;
case 0x44ff5f:goto L44ff5f;
case 0x44ff63:c.instructions+=4;goto B44ff63;
case 0x44ff69:c.instructions+=3;goto B44ff69;
case 0x44ff6b:c.instructions+=2;goto B44ff6b;
case 0x44ff6e:c.instructions+=1;goto B44ff6e;
case 0x44ff74:goto L44ff74;
case 0x44ff78:c.instructions+=5;goto B44ff78;
case 0x44ff7e:c.instructions+=4;goto B44ff7e;
case 0x44ff82:c.instructions+=3;goto B44ff82;
case 0x44ff84:c.instructions+=2;goto B44ff84;
case 0x44ff87:c.instructions+=1;goto B44ff87;
case 0x44ff89:goto L44ff89;
case 0x44ff8b:c.instructions+=1;goto B44ff8b;
case 0x44ff91:goto L44ff91;
case 0x44ff95:c.instructions+=5;goto B44ff95;
case 0x44ff97:c.instructions+=4;goto B44ff97;
case 0x44ff99:c.instructions+=3;goto B44ff99;
case 0x44ff9b:c.instructions+=2;goto B44ff9b;
case 0x44ff9e:c.instructions+=1;goto B44ff9e;
case 0x44ffa4:goto L44ffa4;
case 0x44ffa8:c.instructions+=2;goto B44ffa8;
case 0x44ffaa:c.instructions+=1;goto B44ffaa;
case 0x44ffac:goto L44ffac;
case 0x44ffae:goto L44ffae;
case 0x44ffb2:c.instructions+=2;goto B44ffb2;
case 0x44ffb4:c.instructions+=1;goto B44ffb4;
case 0x44ffb6:goto L44ffb6;
case 0x44ffba:c.instructions+=1;goto B44ffba;
case 0x44ffbc:goto L44ffbc;
case 0x44ffc0:c.instructions+=5;goto B44ffc0;
case 0x44ffc1:c.instructions+=4;goto B44ffc1;
case 0x44ffc2:c.instructions+=3;goto B44ffc2;
case 0x44ffc3:c.instructions+=2;goto B44ffc3;
case 0x44ffc5:c.instructions+=1;goto B44ffc5;
case 0x44ffca:goto L44ffca;
case 0x44ffce:c.instructions+=3;goto B44ffce;
case 0x44ffd0:c.instructions+=2;goto B44ffd0;
case 0x44ffd2:c.instructions+=1;goto B44ffd2;
case 0x44ffd4:goto L44ffd4;
case 0x44ffd5:c.instructions+=3;goto B44ffd5;
case 0x44ffd6:c.instructions+=2;goto B44ffd6;
case 0x44ffd8:c.instructions+=1;goto B44ffd8;
case 0x44ffdd:goto L44ffdd;
case 0x44ffe0:goto L44ffe0;
case 0x44ffe4:c.instructions+=2;goto B44ffe4;
case 0x44ffe6:c.instructions+=1;goto B44ffe6;
case 0x44ffe8:goto L44ffe8;
case 0x44ffe9:c.instructions+=4;goto B44ffe9;
case 0x44ffec:c.instructions+=3;goto B44ffec;
case 0x44ffed:c.instructions+=2;goto B44ffed;
case 0x44ffef:c.instructions+=1;goto B44ffef;
case 0x44fff4:goto L44fff4;
case 0x44fff7:goto L44fff7;
case 0x44fff9:c.instructions+=2;goto B44fff9;
case 0x44fffa:c.instructions+=1;goto B44fffa;
case 0x44fffc:goto L44fffc;
case 0x44fffd:c.instructions+=2;goto B44fffd;
case 0x44ffff:c.instructions+=1;goto B44ffff;
default:missing_instruction(c.pc);}
B44f000:L44f000:{c.instructions+=3;NFSU2_TR(0x44f000);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
}
B44f003:{NFSU2_TR(0x44f003);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f005:{NFSU2_TR(0x44f005);
if(r1(R+518)){{goto L44f019;}}
}
B44f007:L44f007:{c.instructions+=3;NFSU2_TR(0x44f007);
__builtin_memmove((R+0),(R+4),4);
}
B44f009:{NFSU2_TR(0x44f009);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f00b:{NFSU2_TR(0x44f00b);
if(r1(R+518)){{goto L44f019;}}
}
B44f00d:L44f00d:{c.instructions+=3;NFSU2_TR(0x44f00d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B44f010:{NFSU2_TR(0x44f010);
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
B44f012:{NFSU2_TR(0x44f012);
if(r1(R+518)){{goto L44f019;}}
}
B44f014:L44f014:{c.instructions+=2;NFSU2_TR(0x44f014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44f016:{NFSU2_TR(0x44f016);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f019ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B44f019:L44f019:{c.instructions+=3;NFSU2_TR(0x44f019);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B44f01a:{NFSU2_TR(0x44f01a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f01d:{NFSU2_TR(0x44f01d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x44eff0u,44e);}
}
B44f01f:L44f01f:{c.instructions+=3;NFSU2_TR(0x44f01f);
__builtin_memmove((R+0),gp(0x828650),4);
}
B44f024:{NFSU2_TR(0x44f024);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f026:{NFSU2_TR(0x44f026);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f044;}}
}
B44f028:L44f028:{c.instructions+=2;NFSU2_TR(0x44f028);
u8 U[4];
w4(U+0,u32(0x787574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f02d:{NFSU2_TR(0x44f02d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f032ull));
TAIL_STATIC(0x43e620u,43e);
}
B44f032:L44f032:{c.instructions+=3;NFSU2_TR(0x44f032);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44f035:{NFSU2_TR(0x44f035);
__builtin_memmove(gp(0x82864c),(R+0),4);
}
B44f03a:{NFSU2_TR(0x44f03a);
s4(0x828650,u32(0x1ull));
}
B44f044:L44f044:{c.instructions+=3;NFSU2_TR(0x44f044);
__builtin_memmove((R+0),gp(0x82864c),4);
}
B44f049:{NFSU2_TR(0x44f049);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f04b:{NFSU2_TR(0x44f04b);
if(r1(R+518)){{goto L44f087;}}
}
B44f04d:L44f04d:{c.instructions+=2;NFSU2_TR(0x44f04d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f04f:{NFSU2_TR(0x44f04f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f054ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B44f054:L44f054:{c.instructions+=4;NFSU2_TR(0x44f054);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f057:{NFSU2_TR(0x44f057);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44f05a:{NFSU2_TR(0x44f05a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f05c:{NFSU2_TR(0x44f05c);
if(r1(R+518)){{goto L44f087;}}
}
B44f05e:L44f05e:{c.instructions+=5;NFSU2_TR(0x44f05e);
__builtin_memmove((R+8),gp(0x7fb704),4);
}
B44f064:{NFSU2_TR(0x44f064);
__builtin_memmove((R+24),gp(0x828678),4);
}
B44f06a:{NFSU2_TR(0x44f06a);
__builtin_memmove((R+0),(R+8),4);
}
B44f06c:{NFSU2_TR(0x44f06c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B44f06e:{NFSU2_TR(0x44f06e);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L44f072;}}
}
B44f070:L44f070:{c.instructions+=1;NFSU2_TR(0x44f070);
w4(R+0,u32(0-u32(r4(R+0))));
}
B44f072:L44f072:{c.instructions+=2;NFSU2_TR(0x44f072);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f075:{NFSU2_TR(0x44f075);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44f087;}}
}
B44f077:L44f077:{c.instructions+=3;NFSU2_TR(0x44f077);
u8 U[4];
w4(U+0,u32(0x788064ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f07c:{NFSU2_TR(0x44f07c);
__builtin_memmove(gp(0x828678),(R+8),4);
}
B44f082:{NFSU2_TR(0x44f082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f087ull));
TAIL_STATIC(0x441070u,441);
}
B44f087:L44f087:{c.instructions+=2;NFSU2_TR(0x44f087);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f089:{NFSU2_TR(0x44f089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f08eull));
TAIL_STATIC(0x48b1e0u,48b);
}
B44f08e:L44f08e:{c.instructions+=5;NFSU2_TR(0x44f08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44f091:{NFSU2_TR(0x44f091);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44f094:{NFSU2_TR(0x44f094);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44f097:{NFSU2_TR(0x44f097);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f099:{NFSU2_TR(0x44f099);
if(r1(R+518)){{goto L44f0b7;}}
}
B44f09b:L44f09b:{c.instructions+=3;NFSU2_TR(0x44f09b);
__builtin_memmove((R+4),(R+8),4);
}
B44f09d:{NFSU2_TR(0x44f09d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f09f:{NFSU2_TR(0x44f09f);
if(r1(R+518)){{goto L44f0b7;}}
}
B44f0a1:L44f0a1:{c.instructions+=3;NFSU2_TR(0x44f0a1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B44f0a4:{NFSU2_TR(0x44f0a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f0a6:{NFSU2_TR(0x44f0a6);
if(r1(R+518)){{goto L44f0b7;}}
}
B44f0a8:L44f0a8:{c.instructions+=4;NFSU2_TR(0x44f0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f0ab:{NFSU2_TR(0x44f0ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B44f0ae:{NFSU2_TR(0x44f0ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f0af:{NFSU2_TR(0x44f0af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f0b4ull));
TAIL_STATIC(0x5e7d10u,5e7);
}
B44f0b4:L44f0b4:{c.instructions+=1;NFSU2_TR(0x44f0b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44f0b7:L44f0b7:{c.instructions+=3;NFSU2_TR(0x44f0b7);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B44f0bc:{NFSU2_TR(0x44f0bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f0be:{NFSU2_TR(0x44f0be);
if(r1(R+518)){{goto L44f0d6;}}
}
B44f0c0:L44f0c0:{c.instructions+=3;NFSU2_TR(0x44f0c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B44f0c3:{NFSU2_TR(0x44f0c3);
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
B44f0c5:{NFSU2_TR(0x44f0c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f18d;}}
}
B44f0cb:L44f0cb:{c.instructions+=3;NFSU2_TR(0x44f0cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B44f0ce:{NFSU2_TR(0x44f0ce);
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
B44f0d0:{NFSU2_TR(0x44f0d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f18d;}}
}
B44f0d6:L44f0d6:{c.instructions+=3;NFSU2_TR(0x44f0d6);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44f0db:{NFSU2_TR(0x44f0db);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44f0dd:{NFSU2_TR(0x44f0dd);
__builtin_memmove((R+4),(R+4),4);
}
B44f0e0:L44f0e0:{c.instructions+=4;NFSU2_TR(0x44f0e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44f0e3:{NFSU2_TR(0x44f0e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f0e4:{NFSU2_TR(0x44f0e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f0e8:{NFSU2_TR(0x44f0e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f0edull));
TAIL_STATIC(0x48b1e0u,48b);
}
B44f0ed:L44f0ed:{c.instructions+=5;NFSU2_TR(0x44f0ed);
__builtin_memmove((R+28),(R+0),4);
}
B44f0ef:{NFSU2_TR(0x44f0ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44f0f2:{NFSU2_TR(0x44f0f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44f0f5:{NFSU2_TR(0x44f0f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f0f7:{NFSU2_TR(0x44f0f7);
if(r1(R+518)){{goto L44f180;}}
}
B44f0fd:L44f0fd:{c.instructions+=4;NFSU2_TR(0x44f0fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f100:{NFSU2_TR(0x44f100);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f103:{NFSU2_TR(0x44f103);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f105:{NFSU2_TR(0x44f105);
if(r1(R+518)){{goto L44f180;}}
}
B44f107:L44f107:{c.instructions+=2;NFSU2_TR(0x44f107);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f109:{NFSU2_TR(0x44f109);
if(r1(R+518)){{goto L44f180;}}
}
B44f10b:L44f10b:{c.instructions+=3;NFSU2_TR(0x44f10b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B44f10e:{NFSU2_TR(0x44f10e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f110:{NFSU2_TR(0x44f110);
if(r1(R+518)){{goto L44f180;}}
}
B44f112:L44f112:{c.instructions+=3;NFSU2_TR(0x44f112);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44f116:{NFSU2_TR(0x44f116);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f118:{NFSU2_TR(0x44f118);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f129;}}
}
B44f11a:L44f11a:{c.instructions+=3;NFSU2_TR(0x44f11a);
w4(R+4,u32(0x88eb00ull));
}
B44f11f:{NFSU2_TR(0x44f11f);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44f124:{NFSU2_TR(0x44f124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f129ull));
TAIL_STATIC(0x5d6080u,5d6);
}
B44f129:L44f129:{c.instructions+=7;NFSU2_TR(0x44f129);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f12c:{NFSU2_TR(0x44f12c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44f12f:{NFSU2_TR(0x44f12f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
}
B44f134:{NFSU2_TR(0x44f134);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f138:{NFSU2_TR(0x44f138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44f13a:{NFSU2_TR(0x44f13a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f13c:{NFSU2_TR(0x44f13c);
if(r1(R+518)){{goto L44f149;}}
}
B44f13e:L44f13e:{c.instructions+=3;NFSU2_TR(0x44f13e);
__builtin_memmove((R+24),(R+0),4);
}
B44f140:{NFSU2_TR(0x44f140);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f142:{NFSU2_TR(0x44f142);
if(r1(R+518)){{goto L44f149;}}
}
B44f144:L44f144:{c.instructions+=2;NFSU2_TR(0x44f144);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xfffffffcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44f147:{NFSU2_TR(0x44f147);
{goto L44f14b;}
}
B44f149:L44f149:{c.instructions+=1;NFSU2_TR(0x44f149);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44f14b:L44f14b:{c.instructions+=3;NFSU2_TR(0x44f14b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B44f14d:{NFSU2_TR(0x44f14d);
__builtin_memmove((R+4),(R+24),4);
}
B44f14f:{NFSU2_TR(0x44f14f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f152ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B44f152:L44f152:{c.instructions+=2;NFSU2_TR(0x44f152);
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
B44f154:{NFSU2_TR(0x44f154);
if(r1(R+518)){{goto L44f16f;}}
}
B44f156:L44f156:{c.instructions+=3;NFSU2_TR(0x44f156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44f158:{NFSU2_TR(0x44f158);
__builtin_memmove((R+4),(R+24),4);
}
B44f15a:{NFSU2_TR(0x44f15a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f15dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B44f15d:L44f15d:{c.instructions+=2;NFSU2_TR(0x44f15d);
u8 U[10];
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44f15f:{NFSU2_TR(0x44f15f);
if(r1(R+518)){{goto L44f16f;}}
}
B44f161:L44f161:{c.instructions+=4;NFSU2_TR(0x44f161);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f162:{NFSU2_TR(0x44f162);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f163:{NFSU2_TR(0x44f163);
w4(R+4,u32(0x88eb00ull));
}
B44f168:{NFSU2_TR(0x44f168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f16dull));
TAIL_STATIC(0x5d6020u,5d6);
}
B44f16d:L44f16d:{c.instructions+=1;NFSU2_TR(0x44f16d);
{goto L44f180;}
}
B44f16f:L44f16f:{c.instructions+=6;NFSU2_TR(0x44f16f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f173:{NFSU2_TR(0x44f173);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f174:{NFSU2_TR(0x44f174);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f175:{NFSU2_TR(0x44f175);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f176:{NFSU2_TR(0x44f176);
w4(R+4,u32(0x88eb00ull));
}
B44f17b:{NFSU2_TR(0x44f17b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f180ull));
TAIL_STATIC(0x5d6040u,5d6);
}
B44f180:L44f180:{c.instructions+=3;NFSU2_TR(0x44f180);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44f184:{NFSU2_TR(0x44f184);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B44f187:{NFSU2_TR(0x44f187);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44f0e0u);}goto L44f0e0;}}
}
B44f18d:L44f18d:{c.instructions+=6;NFSU2_TR(0x44f18d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44f18e:{NFSU2_TR(0x44f18e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f18f:{NFSU2_TR(0x44f18f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44f190:{NFSU2_TR(0x44f190);
__builtin_memmove((R+16),(R+20),4);
}
B44f192:{NFSU2_TR(0x44f192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44f193:{NFSU2_TR(0x44f193);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f1a0:L44f1a0:{c.instructions+=5;NFSU2_TR(0x44f1a0);
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
B44f1a5:{NFSU2_TR(0x44f1a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f1a6:{NFSU2_TR(0x44f1a6);
__builtin_memmove((R+24),(R+4),4);
}
B44f1a8:{NFSU2_TR(0x44f1a8);
u8 U[4];
w4(U+0,u32(0x787ae0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44f1ae:{NFSU2_TR(0x44f1ae);
if(r1(R+518)){{goto L44f1b9;}}
}
B44f1b0:L44f1b0:{c.instructions+=2;NFSU2_TR(0x44f1b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f1b1:{NFSU2_TR(0x44f1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f1b6ull));
TAIL_STATIC(0x575630u,575);
}
B44f1b6:L44f1b6:{c.instructions+=1;NFSU2_TR(0x44f1b6);
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
B44f1b9:L44f1b9:{c.instructions+=3;NFSU2_TR(0x44f1b9);
__builtin_memmove((R+0),(R+24),4);
}
B44f1bb:{NFSU2_TR(0x44f1bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f1bc:{NFSU2_TR(0x44f1bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f1c0:L44f1c0:{c.instructions+=3;NFSU2_TR(0x44f1c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f1c1:{NFSU2_TR(0x44f1c1);
__builtin_memmove((R+24),(R+4),4);
}
B44f1c3:{NFSU2_TR(0x44f1c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f1c8ull));
TAIL_STATIC(0x4466c0u,446);
}
B44f1c8:L44f1c8:{c.instructions+=2;NFSU2_TR(0x44f1c8);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B44f1cd:{NFSU2_TR(0x44f1cd);
if(r1(R+518)){{goto L44f1d8;}}
}
B44f1cf:L44f1cf:{c.instructions+=2;NFSU2_TR(0x44f1cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f1d0:{NFSU2_TR(0x44f1d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f1d5ull));
TAIL_STATIC(0x575630u,575);
}
B44f1d5:L44f1d5:{c.instructions+=1;NFSU2_TR(0x44f1d5);
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
B44f1d8:L44f1d8:{c.instructions+=3;NFSU2_TR(0x44f1d8);
__builtin_memmove((R+0),(R+24),4);
}
B44f1da:{NFSU2_TR(0x44f1da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f1db:{NFSU2_TR(0x44f1db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f1e0:L44f1e0:{c.instructions+=16;NFSU2_TR(0x44f1e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f1e2:{NFSU2_TR(0x44f1e2);
u8 U[4];
w4(U+0,u32(0x772068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f1e7:{NFSU2_TR(0x44f1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f1ed:{NFSU2_TR(0x44f1ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f1ee:{NFSU2_TR(0x44f1ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f1f5:{NFSU2_TR(0x44f1f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f1f6:{NFSU2_TR(0x44f1f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f1f7:{NFSU2_TR(0x44f1f7);
__builtin_memmove((R+24),(R+4),4);
}
B44f1f9:{NFSU2_TR(0x44f1f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f1fa:{NFSU2_TR(0x44f1fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f1fe:{NFSU2_TR(0x44f1fe);
u8 U[4];
w4(U+0,u32(0x788070ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44f204:{NFSU2_TR(0x44f204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f20a:{NFSU2_TR(0x44f20a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B44f20c:{NFSU2_TR(0x44f20c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f20e:{NFSU2_TR(0x44f20e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f212:{NFSU2_TR(0x44f212);
if(r1(R+518)){{goto L44f239;}}
}
B44f214:L44f214:{c.instructions+=2;NFSU2_TR(0x44f214);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f216:{NFSU2_TR(0x44f216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f21bull));
TAIL_STATIC(0x57d590u,57d);
}
B44f21b:L44f21b:{c.instructions+=2;NFSU2_TR(0x44f21b);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f21d:{NFSU2_TR(0x44f21d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f222ull));
TAIL_STATIC(0x57d590u,57d);
}
B44f222:L44f222:{c.instructions+=2;NFSU2_TR(0x44f222);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f224:{NFSU2_TR(0x44f224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f229ull));
TAIL_STATIC(0x57d590u,57d);
}
B44f229:L44f229:{c.instructions+=2;NFSU2_TR(0x44f229);
u8 U[4];
w4(U+0,u32(0x52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f22b:{NFSU2_TR(0x44f22b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f230ull));
TAIL_STATIC(0x57d590u,57d);
}
B44f230:L44f230:{c.instructions+=2;NFSU2_TR(0x44f230);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B44f233:{NFSU2_TR(0x44f233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f239:L44f239:{c.instructions+=3;NFSU2_TR(0x44f239);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f23f:{NFSU2_TR(0x44f23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f242:{NFSU2_TR(0x44f242);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f24a;}}
}
B44f244:L44f244:{c.instructions+=1;NFSU2_TR(0x44f244);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f24a:L44f24a:{c.instructions+=3;NFSU2_TR(0x44f24a);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f250:{NFSU2_TR(0x44f250);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f253:{NFSU2_TR(0x44f253);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f25b;}}
}
B44f255:L44f255:{c.instructions+=1;NFSU2_TR(0x44f255);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f25b:L44f25b:{c.instructions+=4;NFSU2_TR(0x44f25b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44f25e:{NFSU2_TR(0x44f25e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f266:{NFSU2_TR(0x44f266);
u8 U[4];
w4(U+0,u32(0x787cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44f26c:{NFSU2_TR(0x44f26c);
if(r1(R+518)){{goto L44f28f;}}
}
B44f26e:L44f26e:{c.instructions+=9;NFSU2_TR(0x44f26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f271:{NFSU2_TR(0x44f271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f274:{NFSU2_TR(0x44f274);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f27a:{NFSU2_TR(0x44f27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f27d:{NFSU2_TR(0x44f27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44f283:{NFSU2_TR(0x44f283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f286:{NFSU2_TR(0x44f286);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f287:{NFSU2_TR(0x44f287);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f28a:{NFSU2_TR(0x44f28a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f28full));
TAIL_STATIC(0x48f760u,48f);
}
B44f28f:L44f28f:{c.instructions+=4;NFSU2_TR(0x44f28f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44f293:{NFSU2_TR(0x44f293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44f294:{NFSU2_TR(0x44f294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f295:{NFSU2_TR(0x44f295);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f29d;}}
}
B44f297:L44f297:{c.instructions+=1;NFSU2_TR(0x44f297);
s4(0x883dfc,u32(u32(m4(0x883dfc))-u32(u32(0x1ull))));
}
B44f29d:L44f29d:{c.instructions+=4;NFSU2_TR(0x44f29d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f2a1:{NFSU2_TR(0x44f2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f2a8:{NFSU2_TR(0x44f2a8);
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
B44f2ab:{NFSU2_TR(0x44f2ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f2b0:L44f2b0:{c.instructions+=5;NFSU2_TR(0x44f2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2b1:{NFSU2_TR(0x44f2b1);
__builtin_memmove((R+24),(R+4),4);
}
B44f2b3:{NFSU2_TR(0x44f2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f2b9:{NFSU2_TR(0x44f2b9);
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
B44f2bb:{NFSU2_TR(0x44f2bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f2fe;}}
}
B44f2bd:L44f2bd:{c.instructions+=4;NFSU2_TR(0x44f2bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2be:{NFSU2_TR(0x44f2be);
u8 U[4];
w4(U+0,u32(0x446740ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2c3:{NFSU2_TR(0x44f2c3);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2c5:{NFSU2_TR(0x44f2c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f2caull));
TAIL_STATIC(0x5794b0u,579);
}
B44f2ca:L44f2ca:{c.instructions+=4;NFSU2_TR(0x44f2ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2cb:{NFSU2_TR(0x44f2cb);
u8 U[4];
w4(U+0,u32(0x446740ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2d0:{NFSU2_TR(0x44f2d0);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2d2:{NFSU2_TR(0x44f2d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f2d7ull));
TAIL_STATIC(0x5794b0u,579);
}
B44f2d7:L44f2d7:{c.instructions+=4;NFSU2_TR(0x44f2d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2d8:{NFSU2_TR(0x44f2d8);
u8 U[4];
w4(U+0,u32(0x446740ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2dd:{NFSU2_TR(0x44f2dd);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2df:{NFSU2_TR(0x44f2df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f2e4ull));
TAIL_STATIC(0x5794b0u,579);
}
B44f2e4:L44f2e4:{c.instructions+=4;NFSU2_TR(0x44f2e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2e5:{NFSU2_TR(0x44f2e5);
u8 U[4];
w4(U+0,u32(0x446740ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2ea:{NFSU2_TR(0x44f2ea);
u8 U[4];
w4(U+0,u32(0x52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f2ec:{NFSU2_TR(0x44f2ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f2f1ull));
TAIL_STATIC(0x5794b0u,579);
}
B44f2f1:L44f2f1:{c.instructions+=2;NFSU2_TR(0x44f2f1);
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
B44f2f4:{NFSU2_TR(0x44f2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f2fe:L44f2fe:{c.instructions+=2;NFSU2_TR(0x44f2fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f2ff:{NFSU2_TR(0x44f2ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f300:L44f300:{c.instructions+=9;NFSU2_TR(0x44f300);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f301:{NFSU2_TR(0x44f301);
__builtin_memmove((R+20),(R+16),4);
}
B44f303:{NFSU2_TR(0x44f303);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44f306:{NFSU2_TR(0x44f306);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B44f309:{NFSU2_TR(0x44f309);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f30a:{NFSU2_TR(0x44f30a);
__builtin_memmove((R+24),(R+4),4);
}
B44f30c:{NFSU2_TR(0x44f30c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f30d:{NFSU2_TR(0x44f30d);
w4(R+4,u32(0x865480ull));
}
B44f312:{NFSU2_TR(0x44f312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f317ull));
TAIL_STATIC(0x571250u,571);
}
B44f317:L44f317:{c.instructions+=2;NFSU2_TR(0x44f317);
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
B44f319:{NFSU2_TR(0x44f319);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f46b;}}
}
B44f31f:L44f31f:{c.instructions+=7;NFSU2_TR(0x44f31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f322:{NFSU2_TR(0x44f322);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f325:{NFSU2_TR(0x44f325);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44f32b:{NFSU2_TR(0x44f32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f32e:{NFSU2_TR(0x44f32e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f330:{NFSU2_TR(0x44f330);
w4(R+0,u32(0x3f800000ull));
}
B44f335:{NFSU2_TR(0x44f335);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f348;}}
}
B44f337:L44f337:{c.instructions+=3;NFSU2_TR(0x44f337);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f33e:{NFSU2_TR(0x44f33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f345:{NFSU2_TR(0x44f345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f348:L44f348:{c.instructions+=2;NFSU2_TR(0x44f348);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44f34b:{NFSU2_TR(0x44f34b);
if(r1(R+518)){{goto L44f379;}}
}
B44f34d:L44f34d:{c.instructions+=7;NFSU2_TR(0x44f34d);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f350:{NFSU2_TR(0x44f350);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44f353:{NFSU2_TR(0x44f353);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44f356:{NFSU2_TR(0x44f356);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44f359:{NFSU2_TR(0x44f359);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44f35b:{NFSU2_TR(0x44f35b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44f35e:{NFSU2_TR(0x44f35e);
if(r1(R+514)){{goto L44f366;}}
}
B44f360:L44f360:{c.instructions+=2;NFSU2_TR(0x44f360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f363:{NFSU2_TR(0x44f363);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f366:L44f366:{c.instructions+=5;NFSU2_TR(0x44f366);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f369:{NFSU2_TR(0x44f369);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44f36c:{NFSU2_TR(0x44f36c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44f36e:{NFSU2_TR(0x44f36e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f371:{NFSU2_TR(0x44f371);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f379;}}
}
B44f373:L44f373:{c.instructions+=2;NFSU2_TR(0x44f373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f376:{NFSU2_TR(0x44f376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f379:L44f379:{c.instructions+=5;NFSU2_TR(0x44f379);
{u32 ea_=u32(u32(8369932u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44f37f:{NFSU2_TR(0x44f37f);
{u32 ea_=u32(u32(8306372u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44f385:{NFSU2_TR(0x44f385);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44f387:{NFSU2_TR(0x44f387);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44f38a:{NFSU2_TR(0x44f38a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f38full));
TAIL_STATIC(0x75bed4u,75b);
}
B44f38f:L44f38f:{c.instructions+=4;NFSU2_TR(0x44f38f);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44f392:{NFSU2_TR(0x44f392);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+0))));
s2(u32(r4(U+0)),r2(U+4));
}
B44f396:{NFSU2_TR(0x44f396);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B44f39a:{NFSU2_TR(0x44f39a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f39full));
TAIL_STATIC(0x75bed4u,75b);
}
B44f39f:L44f39f:{c.instructions+=5;NFSU2_TR(0x44f39f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(r2(R+0))));
s2(u32(r4(U+0)),r2(U+4));
}
B44f3a3:{NFSU2_TR(0x44f3a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B44f3a7:{NFSU2_TR(0x44f3a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B44f3ab:{NFSU2_TR(0x44f3ab);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
w1(R+512,u8((r2(R+4))<(r2(U+0))));
}
B44f3ae:{NFSU2_TR(0x44f3ae);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L44f3b4;}}
}
B44f3b0:L44f3b0:{c.instructions+=1;NFSU2_TR(0x44f3b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44f3b4:L44f3b4:{c.instructions+=3;NFSU2_TR(0x44f3b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B44f3b8:{NFSU2_TR(0x44f3b8);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+0))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B44f3bc:{NFSU2_TR(0x44f3bc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L44f3c2;}}
}
B44f3be:L44f3be:{c.instructions+=1;NFSU2_TR(0x44f3be);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44f3c2:L44f3c2:{c.instructions+=6;NFSU2_TR(0x44f3c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f3c3:{NFSU2_TR(0x44f3c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44f3c6:{NFSU2_TR(0x44f3c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f3c7:{NFSU2_TR(0x44f3c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44f3cb:{NFSU2_TR(0x44f3cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f3cc:{NFSU2_TR(0x44f3cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f3d1ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B44f3d1:L44f3d1:{c.instructions+=9;NFSU2_TR(0x44f3d1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44f3d3:{NFSU2_TR(0x44f3d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B44f3d7:{NFSU2_TR(0x44f3d7);
w2(R+4,u16(u32(r2(R+4))+u32(u16(0x8000ull))));
}
B44f3dc:{NFSU2_TR(0x44f3dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44f3e0:{NFSU2_TR(0x44f3e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44f3e4:{NFSU2_TR(0x44f3e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f3e5:{NFSU2_TR(0x44f3e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f3e6:{NFSU2_TR(0x44f3e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f3e7:{NFSU2_TR(0x44f3e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f3ecull));
TAIL_STATIC(0x5bada0u,5ba);
}
B44f3ec:L44f3ec:{c.instructions+=11;NFSU2_TR(0x44f3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f3ef:{NFSU2_TR(0x44f3ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44f3f3:{NFSU2_TR(0x44f3f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f3f4:{NFSU2_TR(0x44f3f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44f3f8:{NFSU2_TR(0x44f3f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f3fc:{NFSU2_TR(0x44f3fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f3fd:{NFSU2_TR(0x44f3fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44f401:{NFSU2_TR(0x44f401);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f402:{NFSU2_TR(0x44f402);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f40a:{NFSU2_TR(0x44f40a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f412:{NFSU2_TR(0x44f412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f417ull));
TAIL_STATIC(0x5bae90u,5ba);
}
B44f417:L44f417:{c.instructions+=6;NFSU2_TR(0x44f417);
u8 U[4];
w4(U+0,u32(0x4000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f41c:{NFSU2_TR(0x44f41c);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44f420:{NFSU2_TR(0x44f420);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f421:{NFSU2_TR(0x44f421);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44f425:{NFSU2_TR(0x44f425);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f426:{NFSU2_TR(0x44f426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f42bull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B44f42b:L44f42b:{c.instructions+=6;NFSU2_TR(0x44f42b);
u8 U[4];
w4(U+0,u32(0xc000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f430:{NFSU2_TR(0x44f430);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44f434:{NFSU2_TR(0x44f434);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f435:{NFSU2_TR(0x44f435);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44f439:{NFSU2_TR(0x44f439);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f43a:{NFSU2_TR(0x44f43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f43full));
TAIL_STATIC(0x5bada0u,5ba);
}
B44f43f:L44f43f:{c.instructions+=4;NFSU2_TR(0x44f43f);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44f444:{NFSU2_TR(0x44f444);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B44f447:{NFSU2_TR(0x44f447);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f449:{NFSU2_TR(0x44f449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f457;}}
}
B44f44b:L44f44b:{c.instructions+=2;NFSU2_TR(0x44f44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f44e:{NFSU2_TR(0x44f44e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
w2(U+4,u16(0x1f40ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44f457:L44f457:{c.instructions+=6;NFSU2_TR(0x44f457);
__builtin_memmove((R+4),gp(0x865198),4);
}
B44f45d:{NFSU2_TR(0x44f45d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f45e:{NFSU2_TR(0x44f45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f461:{NFSU2_TR(0x44f461);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44f465:{NFSU2_TR(0x44f465);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f466:{NFSU2_TR(0x44f466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f46bull));
TAIL_STATIC(0x447280u,447);
}
B44f46b:L44f46b:{c.instructions+=5;NFSU2_TR(0x44f46b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44f46c:{NFSU2_TR(0x44f46c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f46d:{NFSU2_TR(0x44f46d);
__builtin_memmove((R+16),(R+20),4);
}
B44f46f:{NFSU2_TR(0x44f46f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44f470:{NFSU2_TR(0x44f470);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f480:L44f480:{c.instructions+=25;NFSU2_TR(0x44f480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B44f483:{NFSU2_TR(0x44f483);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f484:{NFSU2_TR(0x44f484);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44f486:{NFSU2_TR(0x44f486);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f487:{NFSU2_TR(0x44f487);
__builtin_memmove((R+20),gp(0x88a320),4);
}
B44f48d:{NFSU2_TR(0x44f48d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f48e:{NFSU2_TR(0x44f48e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f48f:{NFSU2_TR(0x44f48f);
__builtin_memmove((R+28),(R+4),4);
}
B44f491:{NFSU2_TR(0x44f491);
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
B44f494:{NFSU2_TR(0x44f494);
w4(R+4,u32(0x88a320ull));
}
B44f499:{NFSU2_TR(0x44f499);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f49d:{NFSU2_TR(0x44f49d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x49742400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f4a5:{NFSU2_TR(0x44f4a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4a9:{NFSU2_TR(0x44f4a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4ad:{NFSU2_TR(0x44f4ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4b1:{NFSU2_TR(0x44f4b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4b5:{NFSU2_TR(0x44f4b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4b9:{NFSU2_TR(0x44f4b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4bd:{NFSU2_TR(0x44f4bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4c1:{NFSU2_TR(0x44f4c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4c5:{NFSU2_TR(0x44f4c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4c9:{NFSU2_TR(0x44f4c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4cd:{NFSU2_TR(0x44f4cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4d1:{NFSU2_TR(0x44f4d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4d5:{NFSU2_TR(0x44f4d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f4daull));
TAIL_STATIC(0x502fd0u,502);
}
B44f4da:L44f4da:{c.instructions+=3;NFSU2_TR(0x44f4da);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f4dc:{NFSU2_TR(0x44f4dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f4e0:{NFSU2_TR(0x44f4e0);
if(r1(R+518)){{goto L44f549;}}
}
B44f4e2:L44f4e2:{c.instructions+=1;NFSU2_TR(0x44f4e2);
{goto L44f4e6;}
}
B44f4e4:L44f4e4:{c.instructions+=1;NFSU2_TR(0x44f4e4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44f4e6:L44f4e6:{c.instructions+=8;NFSU2_TR(0x44f4e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f4ea:{NFSU2_TR(0x44f4ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44f4ee:{NFSU2_TR(0x44f4ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f4ef:{NFSU2_TR(0x44f4ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f4f1:{NFSU2_TR(0x44f4f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f4f2:{NFSU2_TR(0x44f4f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f4f3:{NFSU2_TR(0x44f4f3);
__builtin_memmove((R+4),(R+20),4);
}
B44f4f5:{NFSU2_TR(0x44f4f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f4faull));
TAIL_STATIC(0x5e2e40u,5e2);
}
B44f4fa:L44f4fa:{c.instructions+=3;NFSU2_TR(0x44f4fa);
__builtin_memmove((R+12),(R+0),4);
}
B44f4fc:{NFSU2_TR(0x44f4fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f4fe:{NFSU2_TR(0x44f4fe);
if(r1(R+518)){{goto L44f540;}}
}
B44f500:L44f500:{c.instructions+=2;NFSU2_TR(0x44f500);
u8 U[16];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44f504:{NFSU2_TR(0x44f504);
if(r1(R+518)){{goto L44f540;}}
}
B44f506:L44f506:{c.instructions+=9;NFSU2_TR(0x44f506);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f50a:{NFSU2_TR(0x44f50a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f50b:{NFSU2_TR(0x44f50b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f50c:{NFSU2_TR(0x44f50c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f50d:{NFSU2_TR(0x44f50d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f50e:{NFSU2_TR(0x44f50e);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44f512:{NFSU2_TR(0x44f512);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f513:{NFSU2_TR(0x44f513);
__builtin_memmove((R+4),(R+28),4);
}
B44f515:{NFSU2_TR(0x44f515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f51aull));
TAIL_STATIC(0x446bc0u,446);
}
B44f51a:L44f51a:{c.instructions+=4;NFSU2_TR(0x44f51a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44f51e:{NFSU2_TR(0x44f51e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44f520:{NFSU2_TR(0x44f520);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44f523:{NFSU2_TR(0x44f523);
if(r1(R+514)){{goto L44f53e;}}
}
B44f525:L44f525:{c.instructions+=4;NFSU2_TR(0x44f525);
w4(R+4,u32(0x6ull));
}
B44f52a:{NFSU2_TR(0x44f52a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44f52e:{NFSU2_TR(0x44f52e);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B44f532:{NFSU2_TR(0x44f532);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B44f536:L44f536:{c.instructions+=1;NFSU2_TR(0x44f536);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L44f538;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44f536u);}goto L44f536;}
}
B44f538:L44f538:{c.instructions+=2;NFSU2_TR(0x44f538);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44f53c:{NFSU2_TR(0x44f53c);
{goto L44f540;}
}
B44f53e:L44f53e:{c.instructions+=1;NFSU2_TR(0x44f53e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44f540:L44f540:{c.instructions+=3;NFSU2_TR(0x44f540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B44f543:{NFSU2_TR(0x44f543);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44f547:{NFSU2_TR(0x44f547);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44f4e4u);}goto L44f4e4;}}
}
B44f549:L44f549:{c.instructions+=6;NFSU2_TR(0x44f549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B44f54b:{NFSU2_TR(0x44f54b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f54f:{NFSU2_TR(0x44f54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44f552:{NFSU2_TR(0x44f552);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B44f555:{NFSU2_TR(0x44f555);
w4(R+4,u32(0x6ull));
}
B44f55a:{NFSU2_TR(0x44f55a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B44f55e:L44f55e:{c.instructions+=1;NFSU2_TR(0x44f55e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L44f560;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44f55eu);}goto L44f55e;}
}
B44f560:L44f560:{c.instructions+=6;NFSU2_TR(0x44f560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44f561:{NFSU2_TR(0x44f561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f562:{NFSU2_TR(0x44f562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44f563:{NFSU2_TR(0x44f563);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f565:{NFSU2_TR(0x44f565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44f566:{NFSU2_TR(0x44f566);
if(r1(R+518)){{goto L44f598;}}
}
B44f568:L44f568:{c.instructions+=3;NFSU2_TR(0x44f568);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f56c:{NFSU2_TR(0x44f56c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f56e:{NFSU2_TR(0x44f56e);
if(r1(R+518)){{goto L44f598;}}
}
B44f570:L44f570:{c.instructions+=3;NFSU2_TR(0x44f570);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B44f575:{NFSU2_TR(0x44f575);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f577:{NFSU2_TR(0x44f577);
if(r1(R+518)){{goto L44f590;}}
}
B44f579:L44f579:{c.instructions+=3;NFSU2_TR(0x44f579);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f57d:{NFSU2_TR(0x44f57d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f57f:{NFSU2_TR(0x44f57f);
if(r1(R+518)){{goto L44f598;}}
}
B44f581:L44f581:{c.instructions+=6;NFSU2_TR(0x44f581);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f584:{NFSU2_TR(0x44f584);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f587:{NFSU2_TR(0x44f587);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B44f589:{NFSU2_TR(0x44f589);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44f58b:{NFSU2_TR(0x44f58b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f58e:{NFSU2_TR(0x44f58e);
if(r1(R+518)){{goto L44f598;}}
}
B44f590:L44f590:{c.instructions+=3;NFSU2_TR(0x44f590);
w1(R+0,u8(0x1ull));
}
B44f592:{NFSU2_TR(0x44f592);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44f595:{NFSU2_TR(0x44f595);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f598:L44f598:{c.instructions+=3;NFSU2_TR(0x44f598);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B44f59a:{NFSU2_TR(0x44f59a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44f59d:{NFSU2_TR(0x44f59d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f5a0:L44f5a0:{c.instructions+=59;NFSU2_TR(0x44f5a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f5a1:{NFSU2_TR(0x44f5a1);
__builtin_memmove((R+20),(R+16),4);
}
B44f5a3:{NFSU2_TR(0x44f5a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44f5a6:{NFSU2_TR(0x44f5a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B44f5a9:{NFSU2_TR(0x44f5a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44f5ab:{NFSU2_TR(0x44f5ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f5ac:{NFSU2_TR(0x44f5ac);
__builtin_memmove((R+24),(R+4),4);
}
B44f5ae:{NFSU2_TR(0x44f5ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44f5b4:{NFSU2_TR(0x44f5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
w4(U+4,u32(0x80000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f5be:{NFSU2_TR(0x44f5be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f5bf:{NFSU2_TR(0x44f5bf);
w4(R+28,u32(0x3f800000ull));
}
B44f5c4:{NFSU2_TR(0x44f5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f5ca:{NFSU2_TR(0x44f5ca);
__builtin_memmove((R+4),gp(0x7fb708),4);
}
B44f5d0:{NFSU2_TR(0x44f5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f5d6:{NFSU2_TR(0x44f5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f5dc:{NFSU2_TR(0x44f5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f5e2:{NFSU2_TR(0x44f5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x41200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f5ec:{NFSU2_TR(0x44f5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f5f2:{NFSU2_TR(0x44f5f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f5f8:{NFSU2_TR(0x44f5f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w2(U+4,u16(0x36fbull));
s2(u32(r4(U+0)),r2(U+4));
}
B44f601:{NFSU2_TR(0x44f601);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f60b:{NFSU2_TR(0x44f60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x461c4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f615:{NFSU2_TR(0x44f615);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f618:{NFSU2_TR(0x44f618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f61b:{NFSU2_TR(0x44f61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f61e:{NFSU2_TR(0x44f61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f621:{NFSU2_TR(0x44f621);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f627:{NFSU2_TR(0x44f627);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f62d:{NFSU2_TR(0x44f62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f633:{NFSU2_TR(0x44f633);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f639:{NFSU2_TR(0x44f639);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f63f:{NFSU2_TR(0x44f63f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f645:{NFSU2_TR(0x44f645);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f64b:{NFSU2_TR(0x44f64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f651:{NFSU2_TR(0x44f651);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f652:{NFSU2_TR(0x44f652);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44f656:{NFSU2_TR(0x44f656);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f657:{NFSU2_TR(0x44f657);
__builtin_memmove((R+4),(R+24),4);
}
B44f659:{NFSU2_TR(0x44f659);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f65d:{NFSU2_TR(0x44f65d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f661:{NFSU2_TR(0x44f661);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f665:{NFSU2_TR(0x44f665);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f669:{NFSU2_TR(0x44f669);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f66d:{NFSU2_TR(0x44f66d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f675:{NFSU2_TR(0x44f675);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f679:{NFSU2_TR(0x44f679);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f67d:{NFSU2_TR(0x44f67d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f681:{NFSU2_TR(0x44f681);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f685:{NFSU2_TR(0x44f685);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f68d:{NFSU2_TR(0x44f68d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x44960000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f695:{NFSU2_TR(0x44f695);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f699:{NFSU2_TR(0x44f699);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f69d:{NFSU2_TR(0x44f69d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x42c80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f6a5:{NFSU2_TR(0x44f6a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f6a9:{NFSU2_TR(0x44f6a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f6af:{NFSU2_TR(0x44f6af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f6b5:{NFSU2_TR(0x44f6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f6bb:{NFSU2_TR(0x44f6bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f6c1:{NFSU2_TR(0x44f6c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f6c6ull));
TAIL_STATIC(0x447280u,447);
}
B44f6c6:L44f6c6:{c.instructions+=5;NFSU2_TR(0x44f6c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f6c7:{NFSU2_TR(0x44f6c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44f6cb:{NFSU2_TR(0x44f6cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f6cc:{NFSU2_TR(0x44f6cc);
__builtin_memmove((R+4),(R+24),4);
}
B44f6ce:{NFSU2_TR(0x44f6ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f6d3ull));
TAIL_STATIC(0x447280u,447);
}
B44f6d3:L44f6d3:{c.instructions+=6;NFSU2_TR(0x44f6d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44f6d4:{NFSU2_TR(0x44f6d4);
__builtin_memmove((R+0),(R+24),4);
}
B44f6d6:{NFSU2_TR(0x44f6d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f6d7:{NFSU2_TR(0x44f6d7);
__builtin_memmove((R+16),(R+20),4);
}
B44f6d9:{NFSU2_TR(0x44f6d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44f6da:{NFSU2_TR(0x44f6da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f6e0:L44f6e0:{c.instructions+=13;NFSU2_TR(0x44f6e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f6e2:{NFSU2_TR(0x44f6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f6e8:{NFSU2_TR(0x44f6e8);
u8 U[4];
w4(U+0,u32(0x772124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f6ed:{NFSU2_TR(0x44f6ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f6ee:{NFSU2_TR(0x44f6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f6f5:{NFSU2_TR(0x44f6f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B44f6f8:{NFSU2_TR(0x44f6f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f6f9:{NFSU2_TR(0x44f6f9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f6fa:{NFSU2_TR(0x44f6fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f6fb:{NFSU2_TR(0x44f6fb);
__builtin_memmove((R+20),(R+4),4);
}
B44f6fd:{NFSU2_TR(0x44f6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44f700:{NFSU2_TR(0x44f700);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f701:{NFSU2_TR(0x44f701);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B44f704:L44f704:{c.instructions+=5;NFSU2_TR(0x44f704);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f705:{NFSU2_TR(0x44f705);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44f709:{NFSU2_TR(0x44f709);
u8 U[4];
w4(U+0,u32(0x7880c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f70e:{NFSU2_TR(0x44f70e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f70f:{NFSU2_TR(0x44f70f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f714ull));
TAIL_STATIC(0x4400d0u,440);
}
B44f714:L44f714:{c.instructions+=5;NFSU2_TR(0x44f714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B44f716:{NFSU2_TR(0x44f716);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44f719:{NFSU2_TR(0x44f719);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B44f71a:{NFSU2_TR(0x44f71a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f71c:{NFSU2_TR(0x44f71c);
if(r1(R+518)){{goto L44f741;}}
}
B44f71e:L44f71e:{c.instructions+=1;NFSU2_TR(0x44f71e);
__builtin_memmove((R+28),(R+28),4);
}
B44f720:L44f720:{c.instructions+=5;NFSU2_TR(0x44f720);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44f723:{NFSU2_TR(0x44f723);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f724:{NFSU2_TR(0x44f724);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44f728:{NFSU2_TR(0x44f728);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f729:{NFSU2_TR(0x44f729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f72eull));
TAIL_STATIC(0x43dc30u,43d);
}
B44f72e:L44f72e:{c.instructions+=3;NFSU2_TR(0x44f72e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44f731:{NFSU2_TR(0x44f731);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f733:{NFSU2_TR(0x44f733);
if(r1(R+518)){{goto L44f73d;}}
}
B44f735:L44f735:{c.instructions+=3;NFSU2_TR(0x44f735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B44f737:{NFSU2_TR(0x44f737);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f739:{NFSU2_TR(0x44f739);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44f720u);}goto L44f720;}}
}
B44f73b:L44f73b:{c.instructions+=1;NFSU2_TR(0x44f73b);
{goto L44f741;}
}
B44f73d:L44f73d:{c.instructions+=2;NFSU2_TR(0x44f73d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f73f:{NFSU2_TR(0x44f73f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44f704u);}goto L44f704;}}
}
B44f741:L44f741:{c.instructions+=2;NFSU2_TR(0x44f741);
u8 U[4];
w4(U+0,u32(0x1ab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f746:{NFSU2_TR(0x44f746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f74bull));
TAIL_STATIC(0x575620u,575);
}
B44f74b:L44f74b:{c.instructions+=5;NFSU2_TR(0x44f74b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44f74e:{NFSU2_TR(0x44f74e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f752:{NFSU2_TR(0x44f752);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f754:{NFSU2_TR(0x44f754);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f75c:{NFSU2_TR(0x44f75c);
if(r1(R+518)){{goto L44f77c;}}
}
B44f75e:L44f75e:{c.instructions+=11;NFSU2_TR(0x44f75e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f762:{NFSU2_TR(0x44f762);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44f766:{NFSU2_TR(0x44f766);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f767:{NFSU2_TR(0x44f767);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f76b:{NFSU2_TR(0x44f76b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f76c:{NFSU2_TR(0x44f76c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f76d:{NFSU2_TR(0x44f76d);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44f771:{NFSU2_TR(0x44f771);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f772:{NFSU2_TR(0x44f772);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f773:{NFSU2_TR(0x44f773);
__builtin_memmove((R+4),(R+0),4);
}
B44f775:{NFSU2_TR(0x44f775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f77aull));
TAIL_STATIC(0x4478b0u,447);
}
B44f77a:L44f77a:{c.instructions+=1;NFSU2_TR(0x44f77a);
{goto L44f77e;}
}
B44f77c:L44f77c:{c.instructions+=1;NFSU2_TR(0x44f77c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44f77e:L44f77e:{c.instructions+=17;NFSU2_TR(0x44f77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f781:{NFSU2_TR(0x44f781);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f784:{NFSU2_TR(0x44f784);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B44f786:{NFSU2_TR(0x44f786);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f789:{NFSU2_TR(0x44f789);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f78c:{NFSU2_TR(0x44f78c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f790:{NFSU2_TR(0x44f790);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44f792:{NFSU2_TR(0x44f792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f795:{NFSU2_TR(0x44f795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44f796:{NFSU2_TR(0x44f796);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B44f797:{NFSU2_TR(0x44f797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f798:{NFSU2_TR(0x44f798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f79b:{NFSU2_TR(0x44f79b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44f79c:{NFSU2_TR(0x44f79c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44f79d:{NFSU2_TR(0x44f79d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f7a4:{NFSU2_TR(0x44f7a4);
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
B44f7a7:{NFSU2_TR(0x44f7a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f7b0:L44f7b0:{c.instructions+=8;NFSU2_TR(0x44f7b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B44f7b3:{NFSU2_TR(0x44f7b3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f7b7:{NFSU2_TR(0x44f7b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f7bb:{NFSU2_TR(0x44f7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f7be:{NFSU2_TR(0x44f7be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f7c0:{NFSU2_TR(0x44f7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f7c6:{NFSU2_TR(0x44f7c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f7ca:{NFSU2_TR(0x44f7ca);
if(r1(R+518)){{goto L44f7e3;}}
}
B44f7cc:L44f7cc:{c.instructions+=3;NFSU2_TR(0x44f7cc);
__builtin_memmove((R+4),gp(0x88f2be),1);
}
B44f7d2:{NFSU2_TR(0x44f7d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f7d4:{NFSU2_TR(0x44f7d4);
if(r1(R+518)){{goto L44f7e3;}}
}
B44f7d6:L44f7d6:{c.instructions+=3;NFSU2_TR(0x44f7d6);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f7d9:{NFSU2_TR(0x44f7d9);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44f7df:{NFSU2_TR(0x44f7df);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44f7e3:L44f7e3:{c.instructions+=5;NFSU2_TR(0x44f7e3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f7e7:{NFSU2_TR(0x44f7e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44f7ed:{NFSU2_TR(0x44f7ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44f7ef:{NFSU2_TR(0x44f7ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f7f2:{NFSU2_TR(0x44f7f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f7f8;}}
}
B44f7f4:L44f7f4:{c.instructions+=2;NFSU2_TR(0x44f7f4);
w1(R+0,u8(0x1ull));
}
B44f7f6:{NFSU2_TR(0x44f7f6);
{goto L44f7fa;}
}
B44f7f8:L44f7f8:{c.instructions+=1;NFSU2_TR(0x44f7f8);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B44f7fa:L44f7fa:{c.instructions+=17;NFSU2_TR(0x44f7fa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44f7fc:{NFSU2_TR(0x44f7fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f7fe:{NFSU2_TR(0x44f7fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B44f801:{NFSU2_TR(0x44f801);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44f803:{NFSU2_TR(0x44f803);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f804:{NFSU2_TR(0x44f804);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f806:{NFSU2_TR(0x44f806);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f807:{NFSU2_TR(0x44f807);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B44f80a:{NFSU2_TR(0x44f80a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f80c:{NFSU2_TR(0x44f80c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f80d:{NFSU2_TR(0x44f80d);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B44f811:{NFSU2_TR(0x44f811);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f812:{NFSU2_TR(0x44f812);
__builtin_memmove((R+28),(R+8),4);
}
B44f814:{NFSU2_TR(0x44f814);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f818:{NFSU2_TR(0x44f818);
__builtin_memmove((R+20),(R+4),4);
}
B44f81a:{NFSU2_TR(0x44f81a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f822:{NFSU2_TR(0x44f822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f82c;}}
}
B44f824:L44f824:{c.instructions+=1;NFSU2_TR(0x44f824);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44f82c:L44f82c:{c.instructions+=7;NFSU2_TR(0x44f82c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44f830:{NFSU2_TR(0x44f830);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B44f834:{NFSU2_TR(0x44f834);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B44f837:{NFSU2_TR(0x44f837);
__builtin_memmove((R+4),(R+12),4);
}
B44f839:{NFSU2_TR(0x44f839);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f83b:{NFSU2_TR(0x44f83b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f83f:{NFSU2_TR(0x44f83f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44f868;}}
}
B44f841:L44f841:{c.instructions+=4;NFSU2_TR(0x44f841);
__builtin_memmove((R+8),(R+4),4);
}
B44f843:{NFSU2_TR(0x44f843);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B44f849:{NFSU2_TR(0x44f849);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B44f84d:{NFSU2_TR(0x44f84d);
__builtin_memmove((R+4),(R+4),4);
}
B44f850:L44f850:{c.instructions+=5;NFSU2_TR(0x44f850);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f852:{NFSU2_TR(0x44f852);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44f856:{NFSU2_TR(0x44f856);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44f858:{NFSU2_TR(0x44f858);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44f85b:{NFSU2_TR(0x44f85b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44f868;}}
}
B44f85d:L44f85d:{c.instructions+=4;NFSU2_TR(0x44f85d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B44f85e:{NFSU2_TR(0x44f85e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x88ull))));
}
B44f864:{NFSU2_TR(0x44f864);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f866:{NFSU2_TR(0x44f866);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44f850u);}goto L44f850;}}
}
B44f868:L44f868:{c.instructions+=7;NFSU2_TR(0x44f868);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44f86a:{NFSU2_TR(0x44f86a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f86c:{NFSU2_TR(0x44f86c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B44f86f:{NFSU2_TR(0x44f86f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B44f870:{NFSU2_TR(0x44f870);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B44f872:{NFSU2_TR(0x44f872);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44f874:{NFSU2_TR(0x44f874);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L44f878;}}
}
B44f876:L44f876:{c.instructions+=1;NFSU2_TR(0x44f876);
__builtin_memmove((R+0),(R+12),4);
}
B44f878:L44f878:{c.instructions+=2;NFSU2_TR(0x44f878);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f87a:{NFSU2_TR(0x44f87a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f88a;}}
}
B44f87c:L44f87c:{c.instructions+=4;NFSU2_TR(0x44f87c);
__builtin_memmove((R+0),(R+4),4);
}
B44f87e:{NFSU2_TR(0x44f87e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B44f884:{NFSU2_TR(0x44f884);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B44f888:{NFSU2_TR(0x44f888);
{goto L44f88c;}
}
B44f88a:L44f88a:{c.instructions+=1;NFSU2_TR(0x44f88a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44f88c:L44f88c:{c.instructions+=9;NFSU2_TR(0x44f88c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f890:{NFSU2_TR(0x44f890);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B44f892:{NFSU2_TR(0x44f892);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B44f898:{NFSU2_TR(0x44f898);
__builtin_memmove((R+4),(R+28),4);
}
B44f89a:{NFSU2_TR(0x44f89a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B44f8a0:{NFSU2_TR(0x44f8a0);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B44f8a4:{NFSU2_TR(0x44f8a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f8a8:{NFSU2_TR(0x44f8a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f8ac:{NFSU2_TR(0x44f8ac);
__builtin_memmove((R+16),(R+16),4);
}
B44f8b0:L44f8b0:{c.instructions+=8;NFSU2_TR(0x44f8b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f8b4:{NFSU2_TR(0x44f8b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44f8b6:{NFSU2_TR(0x44f8b6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f8b8:{NFSU2_TR(0x44f8b8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B44f8bb:{NFSU2_TR(0x44f8bb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B44f8bc:{NFSU2_TR(0x44f8bc);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B44f8be:{NFSU2_TR(0x44f8be);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44f8c0:{NFSU2_TR(0x44f8c0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L44f8c4;}}
}
B44f8c2:L44f8c2:{c.instructions+=1;NFSU2_TR(0x44f8c2);
__builtin_memmove((R+0),(R+4),4);
}
B44f8c4:L44f8c4:{c.instructions+=2;NFSU2_TR(0x44f8c4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f8c6:{NFSU2_TR(0x44f8c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f941;}}
}
B44f8c8:L44f8c8:{c.instructions+=7;NFSU2_TR(0x44f8c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44f8ca:{NFSU2_TR(0x44f8ca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44f8cc:{NFSU2_TR(0x44f8cc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B44f8cf:{NFSU2_TR(0x44f8cf);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B44f8d0:{NFSU2_TR(0x44f8d0);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B44f8d2:{NFSU2_TR(0x44f8d2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44f8d4:{NFSU2_TR(0x44f8d4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L44f8d8;}}
}
B44f8d6:L44f8d6:{c.instructions+=1;NFSU2_TR(0x44f8d6);
__builtin_memmove((R+0),(R+4),4);
}
B44f8d8:L44f8d8:{c.instructions+=9;NFSU2_TR(0x44f8d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44f8dc:{NFSU2_TR(0x44f8dc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44f8de:{NFSU2_TR(0x44f8de);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f8e0:{NFSU2_TR(0x44f8e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B44f8e3:{NFSU2_TR(0x44f8e3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B44f8e4:{NFSU2_TR(0x44f8e4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B44f8e6:{NFSU2_TR(0x44f8e6);
__builtin_memmove((R+24),(R+4),4);
}
B44f8e8:{NFSU2_TR(0x44f8e8);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B44f8eb:{NFSU2_TR(0x44f8eb);
if(r1(R+518)){{goto L44f93a;}}
}
B44f8ed:L44f8ed:{c.instructions+=7;NFSU2_TR(0x44f8ed);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f8f1:{NFSU2_TR(0x44f8f1);
__builtin_memmove((R+4),(R+20),4);
}
B44f8f3:{NFSU2_TR(0x44f8f3);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0x1ull))));
}
B44f8f6:{NFSU2_TR(0x44f8f6);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44f8fa:{NFSU2_TR(0x44f8fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44f8fc:{NFSU2_TR(0x44f8fc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44f8ff:{NFSU2_TR(0x44f8ff);
if(r1(R+514)){{goto L44f93a;}}
}
B44f901:L44f901:{c.instructions+=5;NFSU2_TR(0x44f901);
{u32 ea_=u32((r4(R+20)*4u)+r4(R+12)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f905:{NFSU2_TR(0x44f905);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44f909:{NFSU2_TR(0x44f909);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44f90b:{NFSU2_TR(0x44f90b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44f90e:{NFSU2_TR(0x44f90e);
if(r1(R+514)){{goto L44f93a;}}
}
B44f910:L44f910:{c.instructions+=6;NFSU2_TR(0x44f910);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f911:{NFSU2_TR(0x44f911);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f915:{NFSU2_TR(0x44f915);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f916:{NFSU2_TR(0x44f916);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f917:{NFSU2_TR(0x44f917);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f918:{NFSU2_TR(0x44f918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f91dull));
TAIL_STATIC(0x4434f0u,443);
}
B44f91d:L44f91d:{c.instructions+=2;NFSU2_TR(0x44f91d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f91f:{NFSU2_TR(0x44f91f);
if(r1(R+518)){{goto L44f93a;}}
}
B44f921:L44f921:{c.instructions+=7;NFSU2_TR(0x44f921);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f925:{NFSU2_TR(0x44f925);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f929:{NFSU2_TR(0x44f929);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44f92d:{NFSU2_TR(0x44f92d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B44f92f:{NFSU2_TR(0x44f92f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B44f931:{NFSU2_TR(0x44f931);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f935:{NFSU2_TR(0x44f935);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44f8b0u);}goto L44f8b0;}
}
B44f93a:L44f93a:{c.instructions+=2;NFSU2_TR(0x44f93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f93d:{NFSU2_TR(0x44f93d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f941:L44f941:{c.instructions+=2;NFSU2_TR(0x44f941);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44f945:{NFSU2_TR(0x44f945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f94aull));
TAIL_STATIC(0x5d4520u,5d4);
}
B44f94a:L44f94a:{c.instructions+=15;NFSU2_TR(0x44f94a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f94e:{NFSU2_TR(0x44f94e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44f952:{NFSU2_TR(0x44f952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44f953:{NFSU2_TR(0x44f953);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44f954:{NFSU2_TR(0x44f954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44f955:{NFSU2_TR(0x44f955);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B44f957:{NFSU2_TR(0x44f957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44f958:{NFSU2_TR(0x44f958);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44f95c:{NFSU2_TR(0x44f95c);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f962:{NFSU2_TR(0x44f962);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f966:{NFSU2_TR(0x44f966);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B44f968:{NFSU2_TR(0x44f968);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44f96e:{NFSU2_TR(0x44f96e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44f970:{NFSU2_TR(0x44f970);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f973:{NFSU2_TR(0x44f973);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f996;}}
}
B44f975:L44f975:{c.instructions+=8;NFSU2_TR(0x44f975);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44f977:{NFSU2_TR(0x44f977);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f97b:{NFSU2_TR(0x44f97b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B44f97f:{NFSU2_TR(0x44f97f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f985:{NFSU2_TR(0x44f985);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B44f987:{NFSU2_TR(0x44f987);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44f989:{NFSU2_TR(0x44f989);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f98c:{NFSU2_TR(0x44f98c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44f996;}}
}
B44f98e:L44f98e:{c.instructions+=2;NFSU2_TR(0x44f98e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44f990:{NFSU2_TR(0x44f990);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44f996:L44f996:{c.instructions+=2;NFSU2_TR(0x44f996);
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
B44f999:{NFSU2_TR(0x44f999);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44f9a0:L44f9a0:{c.instructions+=13;NFSU2_TR(0x44f9a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B44f9a3:{NFSU2_TR(0x44f9a3);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B44f9a8:{NFSU2_TR(0x44f9a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f9a9:{NFSU2_TR(0x44f9a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f9aa:{NFSU2_TR(0x44f9aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f9ab:{NFSU2_TR(0x44f9ab);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B44f9ad:{NFSU2_TR(0x44f9ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44f9af:{NFSU2_TR(0x44f9af);
__builtin_memmove((R+24),(R+4),4);
}
B44f9b1:{NFSU2_TR(0x44f9b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f9b2:{NFSU2_TR(0x44f9b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44f9b6:{NFSU2_TR(0x44f9b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f9ba:{NFSU2_TR(0x44f9ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f9be:{NFSU2_TR(0x44f9be);
if(r1(R+518)){{goto L44fb07;}}
}
B44f9c4:L44f9c4:{c.instructions+=2;NFSU2_TR(0x44f9c4);
__builtin_memmove((R+4),(R+28),4);
}
B44f9c6:{NFSU2_TR(0x44f9c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f9cbull));
TAIL_STATIC(0x5ec0a0u,5ec);
}
B44f9cb:L44f9cb:{c.instructions+=3;NFSU2_TR(0x44f9cb);
__builtin_memmove((R+12),(R+0),4);
}
B44f9cd:{NFSU2_TR(0x44f9cd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f9cf:{NFSU2_TR(0x44f9cf);
if(r1(R+518)){{goto L44fb07;}}
}
B44f9d5:L44f9d5:{c.instructions+=10;NFSU2_TR(0x44f9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f9d8:{NFSU2_TR(0x44f9d8);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B44f9da:{NFSU2_TR(0x44f9da);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B44f9dc:{NFSU2_TR(0x44f9dc);
w2(R+4,u16(r1(R+0)));
}
B44f9e0:{NFSU2_TR(0x44f9e0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44f9e2:{NFSU2_TR(0x44f9e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B44f9e6:{NFSU2_TR(0x44f9e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f9e7:{NFSU2_TR(0x44f9e7);
__builtin_memmove((R+4),(R+24),4);
}
B44f9e9:{NFSU2_TR(0x44f9e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44f9ea:{NFSU2_TR(0x44f9ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44f9efull));
TAIL_STATIC(0x4429c0u,442);
}
B44f9ef:L44f9ef:{c.instructions+=5;NFSU2_TR(0x44f9ef);
__builtin_memmove((R+24),(R+0),4);
}
B44f9f1:{NFSU2_TR(0x44f9f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44f9f4:{NFSU2_TR(0x44f9f4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44f9f6:{NFSU2_TR(0x44f9f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44f9fa:{NFSU2_TR(0x44f9fa);
if(r1(R+518)){{goto L44fb07;}}
}
B44fa00:L44fa00:{c.instructions+=4;NFSU2_TR(0x44fa00);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B44fa03:{NFSU2_TR(0x44fa03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa04:{NFSU2_TR(0x44fa04);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fa08:{NFSU2_TR(0x44fa08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fa0dull));
TAIL_STATIC(0x575620u,575);
}
B44fa0d:L44fa0d:{c.instructions+=8;NFSU2_TR(0x44fa0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fa13:{NFSU2_TR(0x44fa13);
__builtin_memmove((R+8),(R+4),4);
}
B44fa15:{NFSU2_TR(0x44fa15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44fa18:{NFSU2_TR(0x44fa18);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fa1c:{NFSU2_TR(0x44fa1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa1d:{NFSU2_TR(0x44fa1d);
__builtin_memmove((R+4),(R+12),4);
}
B44fa1f:{NFSU2_TR(0x44fa1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fa23:{NFSU2_TR(0x44fa23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fa28ull));
TAIL_STATIC(0x5d4540u,5d4);
}
B44fa28:L44fa28:{c.instructions+=4;NFSU2_TR(0x44fa28);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44fa2c:{NFSU2_TR(0x44fa2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44fa2f:{NFSU2_TR(0x44fa2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fa33:{NFSU2_TR(0x44fa33);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44faee;}}
}
B44fa39:L44fa39:{c.instructions+=2;NFSU2_TR(0x44fa39);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44fa3d:{NFSU2_TR(0x44fa3d);
__builtin_memmove((R+4),(R+4),4);
}
B44fa40:L44fa40:{c.instructions+=6;NFSU2_TR(0x44fa40);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44fa44:{NFSU2_TR(0x44fa44);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fa48:{NFSU2_TR(0x44fa48);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B44fa4b:{NFSU2_TR(0x44fa4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa4c:{NFSU2_TR(0x44fa4c);
__builtin_memmove((R+4),(R+28),4);
}
B44fa4e:{NFSU2_TR(0x44fa4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fa53ull));
TAIL_STATIC(0x43be60u,43b);
}
B44fa53:L44fa53:{c.instructions+=3;NFSU2_TR(0x44fa53);
__builtin_memmove((R+24),(R+0),4);
}
B44fa55:{NFSU2_TR(0x44fa55);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44fa57:{NFSU2_TR(0x44fa57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44fa5b;}}
}
B44fa59:L44fa59:{c.instructions+=1;NFSU2_TR(0x44fa59);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B44fa5b:L44fa5b:{c.instructions+=3;NFSU2_TR(0x44fa5b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa5c:{NFSU2_TR(0x44fa5c);
__builtin_memmove((R+4),(R+24),4);
}
B44fa5e:{NFSU2_TR(0x44fa5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fa63ull));
TAIL_STATIC(0x447910u,447);
}
B44fa63:L44fa63:{c.instructions+=3;NFSU2_TR(0x44fa63);
__builtin_memmove((R+28),(R+0),4);
}
B44fa65:{NFSU2_TR(0x44fa65);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fa67:{NFSU2_TR(0x44fa67);
if(r1(R+518)){{goto L44fab0;}}
}
B44fa69:L44fa69:{c.instructions+=2;NFSU2_TR(0x44fa69);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B44fa6c:{NFSU2_TR(0x44fa6c);
if(r1(R+518)){{goto L44fab0;}}
}
B44fa6e:L44fa6e:{c.instructions+=7;NFSU2_TR(0x44fa6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fa72:{NFSU2_TR(0x44fa72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa73:{NFSU2_TR(0x44fa73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fa77:{NFSU2_TR(0x44fa77);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa78:{NFSU2_TR(0x44fa78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa79:{NFSU2_TR(0x44fa79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa7a:{NFSU2_TR(0x44fa7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fa7full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44f7b0u);}goto L44f7b0;}
}
B44fa7f:L44fa7f:{c.instructions+=4;NFSU2_TR(0x44fa7f);
{u32 ea_=u32(u32(8397128u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44fa85:{NFSU2_TR(0x44fa85);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44fa87:{NFSU2_TR(0x44fa87);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44fa8a:{NFSU2_TR(0x44fa8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44fab0;}}
}
B44fa8c:L44fa8c:{c.instructions+=6;NFSU2_TR(0x44fa8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44fa90:{NFSU2_TR(0x44fa90);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fa94:{NFSU2_TR(0x44fa94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa95:{NFSU2_TR(0x44fa95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa96:{NFSU2_TR(0x44fa96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fa97:{NFSU2_TR(0x44fa97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fa9cull));
TAIL_STATIC(0x448280u,448);
}
B44fa9c:L44fa9c:{c.instructions+=2;NFSU2_TR(0x44fa9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44fa9e:{NFSU2_TR(0x44fa9e);
if(r1(R+518)){{goto L44fab0;}}
}
B44faa0:L44faa0:{c.instructions+=5;NFSU2_TR(0x44faa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44faa4:{NFSU2_TR(0x44faa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44faa8:{NFSU2_TR(0x44faa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B44faab:{NFSU2_TR(0x44faab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B44faac:{NFSU2_TR(0x44faac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fab0:L44fab0:{c.instructions+=7;NFSU2_TR(0x44fab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fab4:{NFSU2_TR(0x44fab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44fab8:{NFSU2_TR(0x44fab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fabb:{NFSU2_TR(0x44fabb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B44fabc:{NFSU2_TR(0x44fabc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44fabe:{NFSU2_TR(0x44fabe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fac2:{NFSU2_TR(0x44fac2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fa40u);}goto L44fa40;}}
}
B44fac8:L44fac8:{c.instructions+=3;NFSU2_TR(0x44fac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44facc:{NFSU2_TR(0x44facc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44face:{NFSU2_TR(0x44face);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44faee;}}
}
B44fad0:L44fad0:{c.instructions+=2;NFSU2_TR(0x44fad0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fad1:{NFSU2_TR(0x44fad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fad6ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B44fad6:L44fad6:{c.instructions+=7;NFSU2_TR(0x44fad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fada:{NFSU2_TR(0x44fada);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B44fadd:{NFSU2_TR(0x44fadd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fae1:{NFSU2_TR(0x44fae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fae5:{NFSU2_TR(0x44fae5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44fae8:{NFSU2_TR(0x44fae8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44faec:{NFSU2_TR(0x44faec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B44faee:L44faee:{c.instructions+=3;NFSU2_TR(0x44faee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44faf2:{NFSU2_TR(0x44faf2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44faf3:{NFSU2_TR(0x44faf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44faf8ull));
TAIL_STATIC(0x575630u,575);
}
B44faf8:L44faf8:{c.instructions+=4;NFSU2_TR(0x44faf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fafc:{NFSU2_TR(0x44fafc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44faff:{NFSU2_TR(0x44faff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fb01:{NFSU2_TR(0x44fb01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44fe68;}}
}
B44fb07:L44fb07:{c.instructions+=6;NFSU2_TR(0x44fb07);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44fb0b:{NFSU2_TR(0x44fb0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fb0e:{NFSU2_TR(0x44fb0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B44fb11:{NFSU2_TR(0x44fb11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fb12:{NFSU2_TR(0x44fb12);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44fb1a:{NFSU2_TR(0x44fb1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fb1full));
TAIL_STATIC(0x575620u,575);
}
B44fb1f:L44fb1f:{c.instructions+=7;NFSU2_TR(0x44fb1f);
__builtin_memmove((R+20),(R+0),4);
}
B44fb21:{NFSU2_TR(0x44fb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fb24:{NFSU2_TR(0x44fb24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44fb27:{NFSU2_TR(0x44fb27);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B44fb29:{NFSU2_TR(0x44fb29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fb2b:{NFSU2_TR(0x44fb2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fb2f:{NFSU2_TR(0x44fb2f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44fe5f;}}
}
B44fb35:L44fb35:{c.instructions+=1;NFSU2_TR(0x44fb35);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B44fb37:L44fb37:{c.instructions+=4;NFSU2_TR(0x44fb37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fb3a:{NFSU2_TR(0x44fb3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B44fb3d:{NFSU2_TR(0x44fb3d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44fb3f:{NFSU2_TR(0x44fb3f);
w4(R+0,u32(0x7ec1fcull));
}
B44fb44:L44fb44:{c.instructions+=2;NFSU2_TR(0x44fb44);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B44fb46:{NFSU2_TR(0x44fb46);
if(r1(R+518)){{goto L44fb6e;}}
}
B44fb48:L44fb48:{c.instructions+=4;NFSU2_TR(0x44fb48);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B44fb4b:{NFSU2_TR(0x44fb4b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B44fb4c:{NFSU2_TR(0x44fb4c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7ec274ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ec274ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B44fb51:{NFSU2_TR(0x44fb51);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fb44u);}goto L44fb44;}}
}
B44fb53:L44fb53:{c.instructions+=1;NFSU2_TR(0x44fb53);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44fb55:L44fb55:{c.instructions+=4;NFSU2_TR(0x44fb55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fb58:{NFSU2_TR(0x44fb58);
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
B44fb5a:{NFSU2_TR(0x44fb5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fb5e:{NFSU2_TR(0x44fb5e);
if(r1(R+518)){{goto L44fb7a;}}
}
B44fb60:L44fb60:{c.instructions+=3;NFSU2_TR(0x44fb60);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44fb64:{NFSU2_TR(0x44fb64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fb65:{NFSU2_TR(0x44fb65);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fb69ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B44fb69:L44fb69:{c.instructions+=2;NFSU2_TR(0x44fb69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44fb6c:{NFSU2_TR(0x44fb6c);
{goto L44fb80;}
}
B44fb6e:L44fb6e:{c.instructions+=3;NFSU2_TR(0x44fb6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44fb71:{NFSU2_TR(0x44fb71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ec1f8ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44fb78:{NFSU2_TR(0x44fb78);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fb55u);}goto L44fb55;}
}
B44fb7a:L44fb7a:{c.instructions+=1;NFSU2_TR(0x44fb7a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44fb80:L44fb80:{c.instructions+=4;NFSU2_TR(0x44fb80);
{u32 ea_=u32(u32(7893092u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44fb86:{NFSU2_TR(0x44fb86);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44fb88:{NFSU2_TR(0x44fb88);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44fb8b:{NFSU2_TR(0x44fb8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44fb9b;}}
}
B44fb8d:L44fb8d:{c.instructions+=4;NFSU2_TR(0x44fb8d);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44fb91:{NFSU2_TR(0x44fb91);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44fb95:{NFSU2_TR(0x44fb95);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44fb99:{NFSU2_TR(0x44fb99);
{goto L44fba5;}
}
B44fb9b:L44fb9b:{c.instructions+=2;NFSU2_TR(0x44fb9b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44fb9d:{NFSU2_TR(0x44fb9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B44fba5:L44fba5:{c.instructions+=5;NFSU2_TR(0x44fba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fba8:{NFSU2_TR(0x44fba8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B44fba9:{NFSU2_TR(0x44fba9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B44fbac:{NFSU2_TR(0x44fbac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44fbae:{NFSU2_TR(0x44fbae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fb37u);}goto L44fb37;}}
}
B44fbb0:L44fbb0:{c.instructions+=5;NFSU2_TR(0x44fbb0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44fbb4:{NFSU2_TR(0x44fbb4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44fbba:{NFSU2_TR(0x44fbba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44fbbc:{NFSU2_TR(0x44fbbc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44fbbf:{NFSU2_TR(0x44fbbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44fe5f;}}
}
B44fbc5:L44fbc5:{c.instructions+=5;NFSU2_TR(0x44fbc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44fbc8:{NFSU2_TR(0x44fbc8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44fbca:{NFSU2_TR(0x44fbca);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B44fbcc:{NFSU2_TR(0x44fbcc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fbce:{NFSU2_TR(0x44fbce);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44fe5f;}}
}
B44fbd4:L44fbd4:{c.instructions+=2;NFSU2_TR(0x44fbd4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B44fbd6:{NFSU2_TR(0x44fbd6);
{goto L44fbe0;}
}
B44fbe0:L44fbe0:{c.instructions+=5;NFSU2_TR(0x44fbe0);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44fbe4:{NFSU2_TR(0x44fbe4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44fbea:{NFSU2_TR(0x44fbea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44fbec:{NFSU2_TR(0x44fbec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44fbef:{NFSU2_TR(0x44fbef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44fbf8;}}
}
B44fbf1:L44fbf1:{c.instructions+=2;NFSU2_TR(0x44fbf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fbf4:{NFSU2_TR(0x44fbf4);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+12))));
}
B44fbf8:L44fbf8:{c.instructions+=4;NFSU2_TR(0x44fbf8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B44fbf9:{NFSU2_TR(0x44fbf9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B44fbfc:{NFSU2_TR(0x44fbfc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44fbfe:{NFSU2_TR(0x44fbfe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fbe0u);}goto L44fbe0;}}
}
B44fc00:L44fc00:{c.instructions+=2;NFSU2_TR(0x44fc00);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fc02:{NFSU2_TR(0x44fc02);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44fe5f;}}
}
B44fc08:L44fc08:{c.instructions+=6;NFSU2_TR(0x44fc08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B44fc0b:{NFSU2_TR(0x44fc0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B44fc0e:{NFSU2_TR(0x44fc0e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B44fc10:{NFSU2_TR(0x44fc10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fc11:{NFSU2_TR(0x44fc11);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fc15:{NFSU2_TR(0x44fc15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fc1aull));
TAIL_STATIC(0x575620u,575);
}
B44fc1a:L44fc1a:{c.instructions+=6;NFSU2_TR(0x44fc1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fc1e:{NFSU2_TR(0x44fc1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fc21:{NFSU2_TR(0x44fc21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44fc24:{NFSU2_TR(0x44fc24);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44fc26:{NFSU2_TR(0x44fc26);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fc2a:{NFSU2_TR(0x44fc2a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44fe4e;}}
}
B44fc30:L44fc30:{c.instructions+=1;NFSU2_TR(0x44fc30);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fc34:L44fc34:{c.instructions+=8;NFSU2_TR(0x44fc34);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fc38:{NFSU2_TR(0x44fc38);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44fc3c:{NFSU2_TR(0x44fc3c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44fc3f:{NFSU2_TR(0x44fc3f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44fc43:{NFSU2_TR(0x44fc43);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44fc49:{NFSU2_TR(0x44fc49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44fc4b:{NFSU2_TR(0x44fc4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44fc4e:{NFSU2_TR(0x44fc4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44fdc5;}}
}
B44fc54:L44fc54:{c.instructions+=10;NFSU2_TR(0x44fc54);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fc58:{NFSU2_TR(0x44fc58);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44fc5c:{NFSU2_TR(0x44fc5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44fc5f:{NFSU2_TR(0x44fc5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fc63:{NFSU2_TR(0x44fc63);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fc67:{NFSU2_TR(0x44fc67);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B44fc6b:{NFSU2_TR(0x44fc6b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B44fc6d:{NFSU2_TR(0x44fc6d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fc6f:{NFSU2_TR(0x44fc6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44fc77:{NFSU2_TR(0x44fc77);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44fd82;}}
}
B44fc7d:L44fc7d:{c.instructions+=5;NFSU2_TR(0x44fc7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fc81:{NFSU2_TR(0x44fc81);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fc85:{NFSU2_TR(0x44fc85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44fc88:{NFSU2_TR(0x44fc88);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B44fc8c:{NFSU2_TR(0x44fc8c);
__builtin_memmove((R+16),(R+16),4);
}
B44fc90:L44fc90:{c.instructions+=5;NFSU2_TR(0x44fc90);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44fc94:{NFSU2_TR(0x44fc94);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B44fc97:{NFSU2_TR(0x44fc97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fc98:{NFSU2_TR(0x44fc98);
__builtin_memmove((R+4),(R+24),4);
}
B44fc9a:{NFSU2_TR(0x44fc9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fc9full));
TAIL_STATIC(0x43be60u,43b);
}
B44fc9f:L44fc9f:{c.instructions+=3;NFSU2_TR(0x44fc9f);
__builtin_memmove((R+28),(R+0),4);
}
B44fca1:{NFSU2_TR(0x44fca1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44fca3:{NFSU2_TR(0x44fca3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44fca7;}}
}
B44fca5:L44fca5:{c.instructions+=1;NFSU2_TR(0x44fca5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B44fca7:L44fca7:{c.instructions+=3;NFSU2_TR(0x44fca7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B44fcab:{NFSU2_TR(0x44fcab);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B44fcac:{NFSU2_TR(0x44fcac);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L44fcb6;}}
}
B44fcae:L44fcae:{c.instructions+=2;NFSU2_TR(0x44fcae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fcb0:{NFSU2_TR(0x44fcb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44fd6e;}}
}
B44fcb6:L44fcb6:{c.instructions+=3;NFSU2_TR(0x44fcb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44fcb9:{NFSU2_TR(0x44fcb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fcbb:{NFSU2_TR(0x44fcbb);
if(r1(R+518)){{goto L44fd6e;}}
}
B44fcc1:L44fcc1:{c.instructions+=2;NFSU2_TR(0x44fcc1);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B44fcc4:{NFSU2_TR(0x44fcc4);
if(r1(R+518)){{goto L44fd6e;}}
}
B44fcca:L44fcca:{c.instructions+=3;NFSU2_TR(0x44fcca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B44fccc:{NFSU2_TR(0x44fccc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44fcce:{NFSU2_TR(0x44fcce);
w4(R+0,u32(0x7ec1fcull));
}
B44fcd3:L44fcd3:{c.instructions+=2;NFSU2_TR(0x44fcd3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B44fcd5:{NFSU2_TR(0x44fcd5);
if(r1(R+518)){{goto L44fcfc;}}
}
B44fcd7:L44fcd7:{c.instructions+=4;NFSU2_TR(0x44fcd7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B44fcda:{NFSU2_TR(0x44fcda);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B44fcdb:{NFSU2_TR(0x44fcdb);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7ec274ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ec274ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B44fce0:{NFSU2_TR(0x44fce0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fcd3u);}goto L44fcd3;}}
}
B44fce2:L44fce2:{c.instructions+=1;NFSU2_TR(0x44fce2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44fce4:L44fce4:{c.instructions+=3;NFSU2_TR(0x44fce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fce7:{NFSU2_TR(0x44fce7);
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
B44fce9:{NFSU2_TR(0x44fce9);
if(r1(R+518)){{goto L44fd08;}}
}
B44fceb:L44fceb:{c.instructions+=3;NFSU2_TR(0x44fceb);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fcef:{NFSU2_TR(0x44fcef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fcf0:{NFSU2_TR(0x44fcf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fcf2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B44fcf2:L44fcf2:{c.instructions+=3;NFSU2_TR(0x44fcf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44fcf5:{NFSU2_TR(0x44fcf5);
__builtin_memmove(gp(0x828649),(R+0),1);
}
B44fcfa:{NFSU2_TR(0x44fcfa);
{goto L44fd0f;}
}
B44fcfc:L44fcfc:{c.instructions+=3;NFSU2_TR(0x44fcfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44fcff:{NFSU2_TR(0x44fcff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ec1f8ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44fd06:{NFSU2_TR(0x44fd06);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fce4u);}goto L44fce4;}
}
B44fd08:L44fd08:{c.instructions+=1;NFSU2_TR(0x44fd08);
s1(0x828649,u8(0x0ull));
}
B44fd0f:L44fd0f:{c.instructions+=5;NFSU2_TR(0x44fd0f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44fd13:{NFSU2_TR(0x44fd13);
{u32 ea_=u32(u32(7892912u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44fd19:{NFSU2_TR(0x44fd19);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44fd1b:{NFSU2_TR(0x44fd1b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44fd1e:{NFSU2_TR(0x44fd1e);
if(r1(R+518)){{goto L44fd4d;}}
}
B44fd20:L44fd20:{c.instructions+=6;NFSU2_TR(0x44fd20);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44fd24:{NFSU2_TR(0x44fd24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fd28:{NFSU2_TR(0x44fd28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fd29:{NFSU2_TR(0x44fd29);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fd2b:{NFSU2_TR(0x44fd2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fd2c:{NFSU2_TR(0x44fd2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fd31ull));
TAIL_STATIC(0x448280u,448);
}
B44fd31:L44fd31:{c.instructions+=2;NFSU2_TR(0x44fd31);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44fd33:{NFSU2_TR(0x44fd33);
if(r1(R+518)){{goto L44fd67;}}
}
B44fd35:L44fd35:{c.instructions+=4;NFSU2_TR(0x44fd35);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fd39:{NFSU2_TR(0x44fd39);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44fd3b:{NFSU2_TR(0x44fd3b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B44fd3e:{NFSU2_TR(0x44fd3e);
__builtin_memmove((R+28),(R+28),4);
}
B44fd40:L44fd40:{c.instructions+=2;NFSU2_TR(0x44fd40);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B44fd42:{NFSU2_TR(0x44fd42);
if(r1(R+518)){{goto L44fd67;}}
}
B44fd44:L44fd44:{c.instructions+=4;NFSU2_TR(0x44fd44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B44fd45:{NFSU2_TR(0x44fd45);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B44fd48:{NFSU2_TR(0x44fd48);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44fd4b:{NFSU2_TR(0x44fd4b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fd40u);}goto L44fd40;}}
}
B44fd4d:L44fd4d:{c.instructions+=7;NFSU2_TR(0x44fd4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fd51:{NFSU2_TR(0x44fd51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fd54:{NFSU2_TR(0x44fd54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fd57:{NFSU2_TR(0x44fd57);
__builtin_memmove((R+4),gp(0x828649),1);
}
B44fd5d:{NFSU2_TR(0x44fd5d);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+20)),r1(U+0));
}
B44fd60:{NFSU2_TR(0x44fd60);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B44fd64:{NFSU2_TR(0x44fd64);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xcull))));
}
B44fd67:L44fd67:{c.instructions+=1;NFSU2_TR(0x44fd67);
s1(0x828649,u8(0x0ull));
}
B44fd6e:L44fd6e:{c.instructions+=6;NFSU2_TR(0x44fd6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fd72:{NFSU2_TR(0x44fd72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fd75:{NFSU2_TR(0x44fd75);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B44fd76:{NFSU2_TR(0x44fd76);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44fd78:{NFSU2_TR(0x44fd78);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fd7c:{NFSU2_TR(0x44fd7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fc90u);}goto L44fc90;}}
}
B44fd82:L44fd82:{c.instructions+=8;NFSU2_TR(0x44fd82);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44fd86:{NFSU2_TR(0x44fd86);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44fd8a:{NFSU2_TR(0x44fd8a);
__builtin_memmove((R+4),(R+24),4);
}
B44fd8c:{NFSU2_TR(0x44fd8c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B44fd8e:{NFSU2_TR(0x44fd8e);
__builtin_memmove((R+0),(R+4),4);
}
B44fd90:{NFSU2_TR(0x44fd90);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fd92:{NFSU2_TR(0x44fd92);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fd96:{NFSU2_TR(0x44fd96);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44fdc5;}}
}
B44fd98:L44fd98:{c.instructions+=5;NFSU2_TR(0x44fd98);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44fd9a:{NFSU2_TR(0x44fd9a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44fd9e:{NFSU2_TR(0x44fd9e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44fda4:{NFSU2_TR(0x44fda4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44fda8:{NFSU2_TR(0x44fda8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L44fdc5;}}
}
B44fdaa:L44fdaa:{c.instructions+=3;NFSU2_TR(0x44fdaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fdae:{NFSU2_TR(0x44fdae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B44fdb1:{NFSU2_TR(0x44fdb1);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B44fdb5:L44fdb5:{c.instructions+=6;NFSU2_TR(0x44fdb5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44fdb9:{NFSU2_TR(0x44fdb9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B44fdbc:{NFSU2_TR(0x44fdbc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B44fdbd:{NFSU2_TR(0x44fdbd);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44fdc0:{NFSU2_TR(0x44fdc0);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44fdc3:{NFSU2_TR(0x44fdc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fdb5u);}goto L44fdb5;}}
}
B44fdc5:L44fdc5:{c.instructions+=10;NFSU2_TR(0x44fdc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fdc9:{NFSU2_TR(0x44fdc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44fdcd:{NFSU2_TR(0x44fdcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fdd1:{NFSU2_TR(0x44fdd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44fdd4:{NFSU2_TR(0x44fdd4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B44fdd5:{NFSU2_TR(0x44fdd5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B44fdd8:{NFSU2_TR(0x44fdd8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44fdda:{NFSU2_TR(0x44fdda);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fdde:{NFSU2_TR(0x44fdde);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fde2:{NFSU2_TR(0x44fde2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fc34u);}goto L44fc34;}}
}
B44fde8:L44fde8:{c.instructions+=3;NFSU2_TR(0x44fde8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fdec:{NFSU2_TR(0x44fdec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fdee:{NFSU2_TR(0x44fdee);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44fe4e;}}
}
B44fdf0:L44fdf0:{c.instructions+=3;NFSU2_TR(0x44fdf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44fdf4:{NFSU2_TR(0x44fdf4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fdf5:{NFSU2_TR(0x44fdf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fdfaull));
TAIL_STATIC(0x43c1f0u,43c);
}
B44fdfa:L44fdfa:{c.instructions+=5;NFSU2_TR(0x44fdfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B44fdfe:{NFSU2_TR(0x44fdfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44fe01:{NFSU2_TR(0x44fe01);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B44fe03:{NFSU2_TR(0x44fe03);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fe05:{NFSU2_TR(0x44fe05);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44fe4c;}}
}
B44fe07:L44fe07:{c.instructions+=3;NFSU2_TR(0x44fe07);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44fe0b:{NFSU2_TR(0x44fe0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44fe0e:{NFSU2_TR(0x44fe0e);
__builtin_memmove((R+28),(R+28),4);
}
B44fe10:L44fe10:{c.instructions+=6;NFSU2_TR(0x44fe10);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44fe12:{NFSU2_TR(0x44fe12);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B44fe14:{NFSU2_TR(0x44fe14);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B44fe16:{NFSU2_TR(0x44fe16);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44fe18:{NFSU2_TR(0x44fe18);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44fe1b:{NFSU2_TR(0x44fe1b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44fe29;}}
}
B44fe1d:L44fe1d:{c.instructions+=5;NFSU2_TR(0x44fe1d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B44fe1e:{NFSU2_TR(0x44fe1e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B44fe20:{NFSU2_TR(0x44fe20);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B44fe23:{NFSU2_TR(0x44fe23);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44fe25:{NFSU2_TR(0x44fe25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44fe10u);}goto L44fe10;}}
}
B44fe27:L44fe27:{c.instructions+=1;NFSU2_TR(0x44fe27);
{goto L44fe4c;}
}
B44fe29:L44fe29:{c.instructions+=9;NFSU2_TR(0x44fe29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44fe2c:{NFSU2_TR(0x44fe2c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44fe2e:{NFSU2_TR(0x44fe2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B44fe31:{NFSU2_TR(0x44fe31);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B44fe35:{NFSU2_TR(0x44fe35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44fe38:{NFSU2_TR(0x44fe38);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fe3c:{NFSU2_TR(0x44fe3c);
__builtin_memmove(gp(0x828649),(R+8),1);
}
B44fe42:{NFSU2_TR(0x44fe42);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fe46:{NFSU2_TR(0x44fe46);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B44fe4c:L44fe4c:{c.instructions+=1;NFSU2_TR(0x44fe4c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44fe4e:L44fe4e:{c.instructions+=3;NFSU2_TR(0x44fe4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fe52:{NFSU2_TR(0x44fe52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fe53:{NFSU2_TR(0x44fe53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fe58ull));
TAIL_STATIC(0x575630u,575);
}
B44fe58:L44fe58:{c.instructions+=2;NFSU2_TR(0x44fe58);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44fe5c:{NFSU2_TR(0x44fe5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44fe5f:L44fe5f:{c.instructions+=2;NFSU2_TR(0x44fe5f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fe60:{NFSU2_TR(0x44fe60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fe65ull));
TAIL_STATIC(0x575630u,575);
}
B44fe65:L44fe65:{c.instructions+=1;NFSU2_TR(0x44fe65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44fe68:L44fe68:{c.instructions+=7;NFSU2_TR(0x44fe68);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fe6c:{NFSU2_TR(0x44fe6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44fe6d:{NFSU2_TR(0x44fe6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44fe6e:{NFSU2_TR(0x44fe6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44fe6f:{NFSU2_TR(0x44fe6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44fe70:{NFSU2_TR(0x44fe70);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44fe73:{NFSU2_TR(0x44fe73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44fe80:L44fe80:{c.instructions+=10;NFSU2_TR(0x44fe80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B44fe83:{NFSU2_TR(0x44fe83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fe84:{NFSU2_TR(0x44fe84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fe85:{NFSU2_TR(0x44fe85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fe86:{NFSU2_TR(0x44fe86);
__builtin_memmove((R+28),(R+4),4);
}
B44fe88:{NFSU2_TR(0x44fe88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fe8e:{NFSU2_TR(0x44fe8e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B44fe90:{NFSU2_TR(0x44fe90);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fe92:{NFSU2_TR(0x44fe92);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44fe9a:{NFSU2_TR(0x44fe9a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44fece;}}
}
B44fe9c:L44fe9c:{c.instructions+=3;NFSU2_TR(0x44fe9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44fea2:{NFSU2_TR(0x44fea2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fea4:{NFSU2_TR(0x44fea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44febf;}}
}
B44fea6:L44fea6:{c.instructions+=4;NFSU2_TR(0x44fea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44feac:{NFSU2_TR(0x44feac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fead:{NFSU2_TR(0x44fead);
w4(R+4,u32(0x827b88ull));
}
B44feb2:{NFSU2_TR(0x44feb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44feb7ull));
TAIL_STATIC(0x432490u,432);
}
B44feb7:L44feb7:{c.instructions+=2;NFSU2_TR(0x44feb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44feb9:{NFSU2_TR(0x44feb9);
if(r1(R+518)){TAIL_STATIC(0x45002eu,450);}
}
B44febf:L44febf:{c.instructions+=3;NFSU2_TR(0x44febf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44fec5:{NFSU2_TR(0x44fec5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44fec9:{NFSU2_TR(0x44fec9);
{goto L44ff5f;}
}
B44fece:L44fece:{c.instructions+=3;NFSU2_TR(0x44fece);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fed0:{NFSU2_TR(0x44fed0);
w4(R+4,u32(0x827b88ull));
}
B44fed5:{NFSU2_TR(0x44fed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fedaull));
TAIL_STATIC(0x4324d0u,432);
}
B44feda:L44feda:{c.instructions+=2;NFSU2_TR(0x44feda);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fedc:{NFSU2_TR(0x44fedc);
if(r1(R+518)){{goto L44ff3f;}}
}
B44fede:L44fede:{c.instructions+=3;NFSU2_TR(0x44fede);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fedf:{NFSU2_TR(0x44fedf);
w4(R+4,u32(0x827b88ull));
}
B44fee4:{NFSU2_TR(0x44fee4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fee9ull));
TAIL_STATIC(0x432490u,432);
}
B44fee9:L44fee9:{c.instructions+=3;NFSU2_TR(0x44fee9);
__builtin_memmove((R+24),(R+0),4);
}
B44feeb:{NFSU2_TR(0x44feeb);
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
B44feed:{NFSU2_TR(0x44feed);
if(r1(R+518)){TAIL_STATIC(0x45002eu,450);}
}
B44fef3:L44fef3:{c.instructions+=2;NFSU2_TR(0x44fef3);
__builtin_memmove((R+4),(R+24),4);
}
B44fef5:{NFSU2_TR(0x44fef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fefaull));
TAIL_STATIC(0x4307c0u,430);
}
B44fefa:L44fefa:{c.instructions+=3;NFSU2_TR(0x44fefa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fefb:{NFSU2_TR(0x44fefb);
__builtin_memmove((R+4),(R+28),4);
}
B44fefd:{NFSU2_TR(0x44fefd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ff02ull));
TAIL_STATIC(0x442980u,442);
}
B44ff02:L44ff02:{c.instructions+=3;NFSU2_TR(0x44ff02);
__builtin_memmove((R+12),(R+0),4);
}
B44ff04:{NFSU2_TR(0x44ff04);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ff06:{NFSU2_TR(0x44ff06);
if(r1(R+518)){TAIL_STATIC(0x45002eu,450);}
}
B44ff0c:L44ff0c:{c.instructions+=9;NFSU2_TR(0x44ff0c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ff0f:{NFSU2_TR(0x44ff0f);
__builtin_memmove((R+8),gp(0x827b14),4);
}
B44ff15:{NFSU2_TR(0x44ff15);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B44ff18:{NFSU2_TR(0x44ff18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ff19:{NFSU2_TR(0x44ff19);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44ff1d:{NFSU2_TR(0x44ff1d);
u8 U[4];
w4(U+0,u32(0x7880c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ff22:{NFSU2_TR(0x44ff22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ff23:{NFSU2_TR(0x44ff23);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ff27:{NFSU2_TR(0x44ff27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ff2cull));
TAIL_STATIC(0x4400d0u,440);
}
B44ff2c:L44ff2c:{c.instructions+=5;NFSU2_TR(0x44ff2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44ff2f:{NFSU2_TR(0x44ff2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44ff33:{NFSU2_TR(0x44ff33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ff34:{NFSU2_TR(0x44ff34);
__builtin_memmove((R+4),(R+12),4);
}
B44ff36:{NFSU2_TR(0x44ff36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ff3bull));
TAIL_STATIC(0x447c00u,447);
}
B44ff3b:L44ff3b:{c.instructions+=2;NFSU2_TR(0x44ff3b);
__builtin_memmove((R+24),(R+0),4);
}
B44ff3d:{NFSU2_TR(0x44ff3d);
{goto L44ff5f;}
}
B44ff3f:L44ff3f:{c.instructions+=6;NFSU2_TR(0x44ff3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ff43:{NFSU2_TR(0x44ff43);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44ff47:{NFSU2_TR(0x44ff47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ff48:{NFSU2_TR(0x44ff48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ff49:{NFSU2_TR(0x44ff49);
__builtin_memmove((R+4),(R+28),4);
}
B44ff4b:{NFSU2_TR(0x44ff4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ff50ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44f9a0u);}goto L44f9a0;}
}
B44ff50:L44ff50:{c.instructions+=5;NFSU2_TR(0x44ff50);
__builtin_memmove((R+24),(R+0),4);
}
B44ff52:{NFSU2_TR(0x44ff52);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ff54:{NFSU2_TR(0x44ff54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B44ff57:{NFSU2_TR(0x44ff57);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44ff59:{NFSU2_TR(0x44ff59);
if(r1(R+518)){TAIL_STATIC(0x45002eu,450);}
}
B44ff5f:L44ff5f:{c.instructions+=5;NFSU2_TR(0x44ff5f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ff63:{NFSU2_TR(0x44ff63);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44ff69:{NFSU2_TR(0x44ff69);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ff6b:{NFSU2_TR(0x44ff6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44ff6e:{NFSU2_TR(0x44ff6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x45000du,450);}
}
B44ff74:L44ff74:{c.instructions+=6;NFSU2_TR(0x44ff74);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ff78:{NFSU2_TR(0x44ff78);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ff7e:{NFSU2_TR(0x44ff7e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44ff82:{NFSU2_TR(0x44ff82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ff84:{NFSU2_TR(0x44ff84);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44ff87:{NFSU2_TR(0x44ff87);
if(r1(R+514)){{goto L44ff91;}}
}
B44ff89:L44ff89:{c.instructions+=2;NFSU2_TR(0x44ff89);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44ff8b:{NFSU2_TR(0x44ff8b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ff91:L44ff91:{c.instructions+=6;NFSU2_TR(0x44ff91);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44ff95:{NFSU2_TR(0x44ff95);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B44ff97:{NFSU2_TR(0x44ff97);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44ff99:{NFSU2_TR(0x44ff99);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44ff9b:{NFSU2_TR(0x44ff9b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44ff9e:{NFSU2_TR(0x44ff9e);
if(r1(R+514)){TAIL_STATIC(0x45002eu,450);}
}
B44ffa4:L44ffa4:{c.instructions+=3;NFSU2_TR(0x44ffa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ffa8:{NFSU2_TR(0x44ffa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ffaa:{NFSU2_TR(0x44ffaa);
if(r1(R+518)){{goto L44ffae;}}
}
B44ffac:L44ffac:{c.instructions+=1;NFSU2_TR(0x44ffac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44ffae:L44ffae:{c.instructions+=3;NFSU2_TR(0x44ffae);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ffb2:{NFSU2_TR(0x44ffb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ffb4:{NFSU2_TR(0x44ffb4);
if(r1(R+518)){{goto L44ffbc;}}
}
B44ffb6:L44ffb6:{c.instructions+=2;NFSU2_TR(0x44ffb6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ffba:{NFSU2_TR(0x44ffba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B44ffbc:L44ffbc:{c.instructions+=6;NFSU2_TR(0x44ffbc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44ffc0:{NFSU2_TR(0x44ffc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ffc1:{NFSU2_TR(0x44ffc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ffc2:{NFSU2_TR(0x44ffc2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ffc3:{NFSU2_TR(0x44ffc3);
__builtin_memmove((R+4),(R+28),4);
}
B44ffc5:{NFSU2_TR(0x44ffc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ffcaull));
TAIL_STATIC(0x442b20u,442);
}
B44ffca:L44ffca:{c.instructions+=4;NFSU2_TR(0x44ffca);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44ffce:{NFSU2_TR(0x44ffce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ffd0:{NFSU2_TR(0x44ffd0);
__builtin_memmove((R+12),(R+0),4);
}
B44ffd2:{NFSU2_TR(0x44ffd2);
if(r1(R+518)){{goto L44ffe0;}}
}
B44ffd4:L44ffd4:{c.instructions+=4;NFSU2_TR(0x44ffd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ffd5:{NFSU2_TR(0x44ffd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ffd6:{NFSU2_TR(0x44ffd6);
__builtin_memmove((R+4),(R+28),4);
}
B44ffd8:{NFSU2_TR(0x44ffd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ffddull));
TAIL_STATIC(0x442d00u,442);
}
B44ffdd:L44ffdd:{c.instructions+=1;NFSU2_TR(0x44ffdd);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44ffe0:L44ffe0:{c.instructions+=3;NFSU2_TR(0x44ffe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B44ffe4:{NFSU2_TR(0x44ffe4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44ffe6:{NFSU2_TR(0x44ffe6);
if(r1(R+518)){{goto L44fff7;}}
}
B44ffe8:L44ffe8:{c.instructions+=5;NFSU2_TR(0x44ffe8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ffe9:{NFSU2_TR(0x44ffe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44ffec:{NFSU2_TR(0x44ffec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ffed:{NFSU2_TR(0x44ffed);
__builtin_memmove((R+4),(R+28),4);
}
B44ffef:{NFSU2_TR(0x44ffef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44fff4ull));
TAIL_STATIC(0x442d00u,442);
}
B44fff4:L44fff4:{c.instructions+=1;NFSU2_TR(0x44fff4);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44fff7:L44fff7:{c.instructions+=3;NFSU2_TR(0x44fff7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44fff9:{NFSU2_TR(0x44fff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44fffa:{NFSU2_TR(0x44fffa);
if(r1(R+518)){TAIL_STATIC(0x450018u,450);}
}
B44fffc:L44fffc:{c.instructions+=3;NFSU2_TR(0x44fffc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44fffd:{NFSU2_TR(0x44fffd);
__builtin_memmove((R+4),(R+24),4);
}
B44ffff:{NFSU2_TR(0x44ffff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x450004ull));
TAIL_STATIC(0x4418e0u,441);
}
XIT:NFSU2_TR_EXIT(0x44f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
