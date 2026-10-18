#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_676(u8* __restrict R,Cpu& c);
u32 body_678(u8* __restrict R,Cpu& c);
u32 body_67a(u8* __restrict R,Cpu& c);
u32 body_67b(u8* __restrict R,Cpu& c);
u32 body_67c(u8* __restrict R,Cpu& c);
u32 body_680(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x67f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x67f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_67f(u8* __restrict R,Cpu& c);
u32 page_67f(Cpu& c){return body_67f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_67f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x67f002:goto L67f002;
case 0x67f005:c.instructions+=3;goto B67f005;
case 0x67f007:c.instructions+=2;goto B67f007;
case 0x67f00a:c.instructions+=1;goto B67f00a;
case 0x67f00f:goto L67f00f;
case 0x67f011:c.instructions+=2;goto B67f011;
case 0x67f013:c.instructions+=1;goto B67f013;
case 0x67f019:goto L67f019;
case 0x67f01c:c.instructions+=3;goto B67f01c;
case 0x67f01e:c.instructions+=2;goto B67f01e;
case 0x67f021:c.instructions+=1;goto B67f021;
case 0x67f026:goto L67f026;
case 0x67f028:c.instructions+=2;goto B67f028;
case 0x67f02a:c.instructions+=1;goto B67f02a;
case 0x67f030:goto L67f030;
case 0x67f033:c.instructions+=3;goto B67f033;
case 0x67f035:c.instructions+=2;goto B67f035;
case 0x67f038:c.instructions+=1;goto B67f038;
case 0x67f03d:goto L67f03d;
case 0x67f03f:c.instructions+=2;goto B67f03f;
case 0x67f041:c.instructions+=1;goto B67f041;
case 0x67f047:goto L67f047;
case 0x67f04a:c.instructions+=10;goto B67f04a;
case 0x67f04b:c.instructions+=9;goto B67f04b;
case 0x67f04e:c.instructions+=8;goto B67f04e;
case 0x67f053:c.instructions+=7;goto B67f053;
case 0x67f056:c.instructions+=6;goto B67f056;
case 0x67f058:c.instructions+=5;goto B67f058;
case 0x67f05b:c.instructions+=4;goto B67f05b;
case 0x67f05e:c.instructions+=3;goto B67f05e;
case 0x67f05f:c.instructions+=2;goto B67f05f;
case 0x67f062:c.instructions+=1;goto B67f062;
case 0x67f067:goto L67f067;
case 0x67f069:c.instructions+=2;goto B67f069;
case 0x67f06b:c.instructions+=1;goto B67f06b;
case 0x67f071:goto L67f071;
case 0x67f072:c.instructions+=7;goto B67f072;
case 0x67f075:c.instructions+=6;goto B67f075;
case 0x67f077:c.instructions+=5;goto B67f077;
case 0x67f07a:c.instructions+=4;goto B67f07a;
case 0x67f07d:c.instructions+=3;goto B67f07d;
case 0x67f080:c.instructions+=2;goto B67f080;
case 0x67f083:c.instructions+=1;goto B67f083;
case 0x67f088:goto L67f088;
case 0x67f08a:c.instructions+=2;goto B67f08a;
case 0x67f08c:c.instructions+=1;goto B67f08c;
case 0x67f092:goto L67f092;
case 0x67f095:c.instructions+=9;goto B67f095;
case 0x67f096:c.instructions+=8;goto B67f096;
case 0x67f097:c.instructions+=7;goto B67f097;
case 0x67f09a:c.instructions+=6;goto B67f09a;
case 0x67f09f:c.instructions+=5;goto B67f09f;
case 0x67f0a2:c.instructions+=4;goto B67f0a2;
case 0x67f0a4:c.instructions+=3;goto B67f0a4;
case 0x67f0a5:c.instructions+=2;goto B67f0a5;
case 0x67f0a8:c.instructions+=1;goto B67f0a8;
case 0x67f0ad:goto L67f0ad;
case 0x67f0af:c.instructions+=2;goto B67f0af;
case 0x67f0b1:c.instructions+=1;goto B67f0b1;
case 0x67f0b7:goto L67f0b7;
case 0x67f0b8:c.instructions+=3;goto B67f0b8;
case 0x67f0bb:c.instructions+=2;goto B67f0bb;
case 0x67f0be:c.instructions+=1;goto B67f0be;
case 0x67f0c3:goto L67f0c3;
case 0x67f0c5:c.instructions+=2;goto B67f0c5;
case 0x67f0c8:c.instructions+=1;goto B67f0c8;
case 0x67f0ce:goto L67f0ce;
case 0x67f0d1:c.instructions+=1;goto B67f0d1;
case 0x67f0d7:goto L67f0d7;
case 0x67f0da:c.instructions+=8;goto B67f0da;
case 0x67f0e0:c.instructions+=7;goto B67f0e0;
case 0x67f0e1:c.instructions+=6;goto B67f0e1;
case 0x67f0e2:c.instructions+=5;goto B67f0e2;
case 0x67f0e5:c.instructions+=4;goto B67f0e5;
case 0x67f0e6:c.instructions+=3;goto B67f0e6;
case 0x67f0e7:c.instructions+=2;goto B67f0e7;
case 0x67f0ea:c.instructions+=1;goto B67f0ea;
case 0x67f0ef:goto L67f0ef;
case 0x67f0f2:c.instructions+=5;goto B67f0f2;
case 0x67f0f5:c.instructions+=4;goto B67f0f5;
case 0x67f0f6:c.instructions+=3;goto B67f0f6;
case 0x67f0f8:c.instructions+=2;goto B67f0f8;
case 0x67f0fb:c.instructions+=1;goto B67f0fb;
case 0x67f100:goto L67f100;
case 0x67f102:c.instructions+=1;goto B67f102;
case 0x67f108:goto L67f108;
case 0x67f10a:goto L67f10a;
case 0x67f10e:c.instructions+=4;goto B67f10e;
case 0x67f10f:c.instructions+=3;goto B67f10f;
case 0x67f111:c.instructions+=2;goto B67f111;
case 0x67f114:c.instructions+=1;goto B67f114;
case 0x67f116:goto L67f116;
case 0x67f119:c.instructions+=1;goto B67f119;
case 0x67f11b:goto L67f11b;
case 0x67f11e:c.instructions+=2;goto B67f11e;
case 0x67f121:c.instructions+=1;goto B67f121;
case 0x67f124:goto L67f124;
case 0x67f126:goto L67f126;
case 0x67f128:goto L67f128;
case 0x67f12b:c.instructions+=3;goto B67f12b;
case 0x67f12d:c.instructions+=2;goto B67f12d;
case 0x67f130:c.instructions+=1;goto B67f130;
case 0x67f135:goto L67f135;
case 0x67f137:c.instructions+=2;goto B67f137;
case 0x67f139:c.instructions+=1;goto B67f139;
case 0x67f13f:goto L67f13f;
case 0x67f142:c.instructions+=3;goto B67f142;
case 0x67f144:c.instructions+=2;goto B67f144;
case 0x67f147:c.instructions+=1;goto B67f147;
case 0x67f14c:goto L67f14c;
case 0x67f14e:c.instructions+=2;goto B67f14e;
case 0x67f150:c.instructions+=1;goto B67f150;
case 0x67f156:goto L67f156;
case 0x67f159:c.instructions+=3;goto B67f159;
case 0x67f15b:c.instructions+=2;goto B67f15b;
case 0x67f15e:c.instructions+=1;goto B67f15e;
case 0x67f163:goto L67f163;
case 0x67f165:c.instructions+=2;goto B67f165;
case 0x67f167:c.instructions+=1;goto B67f167;
case 0x67f16d:goto L67f16d;
case 0x67f170:c.instructions+=3;goto B67f170;
case 0x67f172:c.instructions+=2;goto B67f172;
case 0x67f175:c.instructions+=1;goto B67f175;
case 0x67f17a:goto L67f17a;
case 0x67f17c:c.instructions+=2;goto B67f17c;
case 0x67f17e:c.instructions+=1;goto B67f17e;
case 0x67f184:goto L67f184;
case 0x67f187:c.instructions+=12;goto B67f187;
case 0x67f188:c.instructions+=11;goto B67f188;
case 0x67f18b:c.instructions+=10;goto B67f18b;
case 0x67f190:c.instructions+=9;goto B67f190;
case 0x67f193:c.instructions+=8;goto B67f193;
case 0x67f196:c.instructions+=7;goto B67f196;
case 0x67f199:c.instructions+=6;goto B67f199;
case 0x67f19e:c.instructions+=5;goto B67f19e;
case 0x67f19f:c.instructions+=4;goto B67f19f;
case 0x67f1a2:c.instructions+=3;goto B67f1a2;
case 0x67f1a4:c.instructions+=2;goto B67f1a4;
case 0x67f1a7:c.instructions+=1;goto B67f1a7;
case 0x67f1ac:goto L67f1ac;
case 0x67f1ae:c.instructions+=2;goto B67f1ae;
case 0x67f1b0:c.instructions+=1;goto B67f1b0;
case 0x67f1b6:goto L67f1b6;
case 0x67f1b9:c.instructions+=9;goto B67f1b9;
case 0x67f1bb:c.instructions+=8;goto B67f1bb;
case 0x67f1bc:c.instructions+=7;goto B67f1bc;
case 0x67f1bf:c.instructions+=6;goto B67f1bf;
case 0x67f1c4:c.instructions+=5;goto B67f1c4;
case 0x67f1c7:c.instructions+=4;goto B67f1c7;
case 0x67f1c9:c.instructions+=3;goto B67f1c9;
case 0x67f1ca:c.instructions+=2;goto B67f1ca;
case 0x67f1cd:c.instructions+=1;goto B67f1cd;
case 0x67f1d2:goto L67f1d2;
case 0x67f1d4:c.instructions+=2;goto B67f1d4;
case 0x67f1d6:c.instructions+=1;goto B67f1d6;
case 0x67f1dc:goto L67f1dc;
case 0x67f1df:c.instructions+=9;goto B67f1df;
case 0x67f1e1:c.instructions+=8;goto B67f1e1;
case 0x67f1e2:c.instructions+=7;goto B67f1e2;
case 0x67f1e5:c.instructions+=6;goto B67f1e5;
case 0x67f1ea:c.instructions+=5;goto B67f1ea;
case 0x67f1ed:c.instructions+=4;goto B67f1ed;
case 0x67f1ef:c.instructions+=3;goto B67f1ef;
case 0x67f1f0:c.instructions+=2;goto B67f1f0;
case 0x67f1f3:c.instructions+=1;goto B67f1f3;
case 0x67f1f8:goto L67f1f8;
case 0x67f1fa:c.instructions+=2;goto B67f1fa;
case 0x67f1fc:c.instructions+=1;goto B67f1fc;
case 0x67f202:goto L67f202;
case 0x67f204:c.instructions+=3;goto B67f204;
case 0x67f207:c.instructions+=2;goto B67f207;
case 0x67f20a:c.instructions+=1;goto B67f20a;
case 0x67f20f:goto L67f20f;
case 0x67f211:c.instructions+=2;goto B67f211;
case 0x67f214:c.instructions+=1;goto B67f214;
case 0x67f21a:goto L67f21a;
case 0x67f21d:c.instructions+=1;goto B67f21d;
case 0x67f223:goto L67f223;
case 0x67f226:c.instructions+=4;goto B67f226;
case 0x67f227:c.instructions+=3;goto B67f227;
case 0x67f22a:c.instructions+=2;goto B67f22a;
case 0x67f22c:c.instructions+=1;goto B67f22c;
case 0x67f231:goto L67f231;
case 0x67f233:c.instructions+=2;goto B67f233;
case 0x67f235:c.instructions+=1;goto B67f235;
case 0x67f23b:goto L67f23b;
case 0x67f23d:c.instructions+=5;goto B67f23d;
case 0x67f23e:c.instructions+=4;goto B67f23e;
case 0x67f241:c.instructions+=3;goto B67f241;
case 0x67f247:c.instructions+=2;goto B67f247;
case 0x67f24d:c.instructions+=1;goto B67f24d;
case 0x67f252:goto L67f252;
case 0x67f254:c.instructions+=2;goto B67f254;
case 0x67f257:c.instructions+=1;goto B67f257;
case 0x67f25d:goto L67f25d;
case 0x67f260:c.instructions+=1;goto B67f260;
case 0x67f266:goto L67f266;
case 0x67f269:c.instructions+=4;goto B67f269;
case 0x67f26c:c.instructions+=3;goto B67f26c;
case 0x67f26d:c.instructions+=2;goto B67f26d;
case 0x67f26f:c.instructions+=1;goto B67f26f;
case 0x67f274:goto L67f274;
case 0x67f276:c.instructions+=1;goto B67f276;
case 0x67f27c:goto L67f27c;
case 0x67f27e:c.instructions+=2;goto B67f27e;
case 0x67f280:c.instructions+=1;goto B67f280;
case 0x67f283:goto L67f283;
case 0x67f287:c.instructions+=4;goto B67f287;
case 0x67f288:c.instructions+=3;goto B67f288;
case 0x67f28a:c.instructions+=2;goto B67f28a;
case 0x67f28d:c.instructions+=1;goto B67f28d;
case 0x67f28f:goto L67f28f;
case 0x67f291:c.instructions+=2;goto B67f291;
case 0x67f294:c.instructions+=1;goto B67f294;
case 0x67f296:goto L67f296;
case 0x67f299:c.instructions+=1;goto B67f299;
case 0x67f29b:goto L67f29b;
case 0x67f29e:c.instructions+=6;goto B67f29e;
case 0x67f2a1:c.instructions+=5;goto B67f2a1;
case 0x67f2a4:c.instructions+=4;goto B67f2a4;
case 0x67f2a6:c.instructions+=3;goto B67f2a6;
case 0x67f2a9:c.instructions+=2;goto B67f2a9;
case 0x67f2aa:c.instructions+=1;goto B67f2aa;
case 0x67f2ac:goto L67f2ac;
case 0x67f2af:c.instructions+=3;goto B67f2af;
case 0x67f2b1:c.instructions+=2;goto B67f2b1;
case 0x67f2b4:c.instructions+=1;goto B67f2b4;
case 0x67f2b9:goto L67f2b9;
case 0x67f2bb:c.instructions+=2;goto B67f2bb;
case 0x67f2bd:c.instructions+=1;goto B67f2bd;
case 0x67f2c3:goto L67f2c3;
case 0x67f2c6:c.instructions+=3;goto B67f2c6;
case 0x67f2c8:c.instructions+=2;goto B67f2c8;
case 0x67f2cb:c.instructions+=1;goto B67f2cb;
case 0x67f2d0:goto L67f2d0;
case 0x67f2d2:c.instructions+=2;goto B67f2d2;
case 0x67f2d4:c.instructions+=1;goto B67f2d4;
case 0x67f2da:goto L67f2da;
case 0x67f2dd:c.instructions+=11;goto B67f2dd;
case 0x67f2df:c.instructions+=10;goto B67f2df;
case 0x67f2e2:c.instructions+=9;goto B67f2e2;
case 0x67f2e7:c.instructions+=8;goto B67f2e7;
case 0x67f2ea:c.instructions+=7;goto B67f2ea;
case 0x67f2ed:c.instructions+=6;goto B67f2ed;
case 0x67f2f0:c.instructions+=5;goto B67f2f0;
case 0x67f2f5:c.instructions+=4;goto B67f2f5;
case 0x67f2f6:c.instructions+=3;goto B67f2f6;
case 0x67f2f9:c.instructions+=2;goto B67f2f9;
case 0x67f2fb:c.instructions+=1;goto B67f2fb;
case 0x67f300:goto L67f300;
case 0x67f302:c.instructions+=2;goto B67f302;
case 0x67f304:c.instructions+=1;goto B67f304;
case 0x67f30a:goto L67f30a;
case 0x67f30c:c.instructions+=5;goto B67f30c;
case 0x67f30f:c.instructions+=4;goto B67f30f;
case 0x67f312:c.instructions+=3;goto B67f312;
case 0x67f315:c.instructions+=2;goto B67f315;
case 0x67f31a:c.instructions+=1;goto B67f31a;
case 0x67f31f:goto L67f31f;
case 0x67f321:c.instructions+=2;goto B67f321;
case 0x67f324:c.instructions+=1;goto B67f324;
case 0x67f32a:goto L67f32a;
case 0x67f32d:c.instructions+=1;goto B67f32d;
case 0x67f333:goto L67f333;
case 0x67f336:c.instructions+=4;goto B67f336;
case 0x67f339:c.instructions+=3;goto B67f339;
case 0x67f33a:c.instructions+=2;goto B67f33a;
case 0x67f33c:c.instructions+=1;goto B67f33c;
case 0x67f341:goto L67f341;
case 0x67f343:c.instructions+=1;goto B67f343;
case 0x67f349:goto L67f349;
case 0x67f34b:goto L67f34b;
case 0x67f34f:c.instructions+=4;goto B67f34f;
case 0x67f350:c.instructions+=3;goto B67f350;
case 0x67f352:c.instructions+=2;goto B67f352;
case 0x67f355:c.instructions+=1;goto B67f355;
case 0x67f357:goto L67f357;
case 0x67f35a:c.instructions+=3;goto B67f35a;
case 0x67f35c:c.instructions+=2;goto B67f35c;
case 0x67f35f:c.instructions+=1;goto B67f35f;
case 0x67f364:goto L67f364;
case 0x67f366:c.instructions+=2;goto B67f366;
case 0x67f368:c.instructions+=1;goto B67f368;
case 0x67f36e:goto L67f36e;
case 0x67f371:c.instructions+=3;goto B67f371;
case 0x67f373:c.instructions+=2;goto B67f373;
case 0x67f376:c.instructions+=1;goto B67f376;
case 0x67f37b:goto L67f37b;
case 0x67f37d:c.instructions+=2;goto B67f37d;
case 0x67f37f:c.instructions+=1;goto B67f37f;
case 0x67f385:goto L67f385;
case 0x67f388:c.instructions+=3;goto B67f388;
case 0x67f38a:c.instructions+=2;goto B67f38a;
case 0x67f38d:c.instructions+=1;goto B67f38d;
case 0x67f392:goto L67f392;
case 0x67f394:c.instructions+=2;goto B67f394;
case 0x67f396:c.instructions+=1;goto B67f396;
case 0x67f39c:goto L67f39c;
case 0x67f39f:c.instructions+=3;goto B67f39f;
case 0x67f3a1:c.instructions+=2;goto B67f3a1;
case 0x67f3a4:c.instructions+=1;goto B67f3a4;
case 0x67f3a9:goto L67f3a9;
case 0x67f3ab:c.instructions+=2;goto B67f3ab;
case 0x67f3ad:c.instructions+=1;goto B67f3ad;
case 0x67f3b3:goto L67f3b3;
case 0x67f3b6:c.instructions+=3;goto B67f3b6;
case 0x67f3b8:c.instructions+=2;goto B67f3b8;
case 0x67f3bb:c.instructions+=1;goto B67f3bb;
case 0x67f3c0:goto L67f3c0;
case 0x67f3c2:c.instructions+=2;goto B67f3c2;
case 0x67f3c4:c.instructions+=1;goto B67f3c4;
case 0x67f3ca:goto L67f3ca;
case 0x67f3cd:c.instructions+=12;goto B67f3cd;
case 0x67f3ce:c.instructions+=11;goto B67f3ce;
case 0x67f3cf:c.instructions+=10;goto B67f3cf;
case 0x67f3d2:c.instructions+=9;goto B67f3d2;
case 0x67f3d7:c.instructions+=8;goto B67f3d7;
case 0x67f3da:c.instructions+=7;goto B67f3da;
case 0x67f3dd:c.instructions+=6;goto B67f3dd;
case 0x67f3e2:c.instructions+=5;goto B67f3e2;
case 0x67f3e3:c.instructions+=4;goto B67f3e3;
case 0x67f3e6:c.instructions+=3;goto B67f3e6;
case 0x67f3e8:c.instructions+=2;goto B67f3e8;
case 0x67f3eb:c.instructions+=1;goto B67f3eb;
case 0x67f3f0:goto L67f3f0;
case 0x67f3f2:c.instructions+=2;goto B67f3f2;
case 0x67f3f4:c.instructions+=1;goto B67f3f4;
case 0x67f3fa:goto L67f3fa;
case 0x67f3fd:c.instructions+=10;goto B67f3fd;
case 0x67f3ff:c.instructions+=9;goto B67f3ff;
case 0x67f402:c.instructions+=8;goto B67f402;
case 0x67f407:c.instructions+=7;goto B67f407;
case 0x67f40a:c.instructions+=6;goto B67f40a;
case 0x67f40c:c.instructions+=5;goto B67f40c;
case 0x67f40f:c.instructions+=4;goto B67f40f;
case 0x67f412:c.instructions+=3;goto B67f412;
case 0x67f413:c.instructions+=2;goto B67f413;
case 0x67f416:c.instructions+=1;goto B67f416;
case 0x67f41b:goto L67f41b;
case 0x67f41d:c.instructions+=2;goto B67f41d;
case 0x67f41f:c.instructions+=1;goto B67f41f;
case 0x67f425:goto L67f425;
case 0x67f427:c.instructions+=7;goto B67f427;
case 0x67f42a:c.instructions+=6;goto B67f42a;
case 0x67f42c:c.instructions+=5;goto B67f42c;
case 0x67f42f:c.instructions+=4;goto B67f42f;
case 0x67f432:c.instructions+=3;goto B67f432;
case 0x67f435:c.instructions+=2;goto B67f435;
case 0x67f438:c.instructions+=1;goto B67f438;
case 0x67f43d:goto L67f43d;
case 0x67f43f:c.instructions+=2;goto B67f43f;
case 0x67f441:c.instructions+=1;goto B67f441;
case 0x67f447:goto L67f447;
case 0x67f449:c.instructions+=7;goto B67f449;
case 0x67f44a:c.instructions+=6;goto B67f44a;
case 0x67f44d:c.instructions+=5;goto B67f44d;
case 0x67f44f:c.instructions+=4;goto B67f44f;
case 0x67f452:c.instructions+=3;goto B67f452;
case 0x67f455:c.instructions+=2;goto B67f455;
case 0x67f458:c.instructions+=1;goto B67f458;
case 0x67f45d:goto L67f45d;
case 0x67f45f:c.instructions+=2;goto B67f45f;
case 0x67f461:c.instructions+=1;goto B67f461;
case 0x67f467:goto L67f467;
case 0x67f469:c.instructions+=3;goto B67f469;
case 0x67f46c:c.instructions+=2;goto B67f46c;
case 0x67f46f:c.instructions+=1;goto B67f46f;
case 0x67f474:goto L67f474;
case 0x67f476:c.instructions+=2;goto B67f476;
case 0x67f479:c.instructions+=1;goto B67f479;
case 0x67f47f:goto L67f47f;
case 0x67f482:c.instructions+=1;goto B67f482;
case 0x67f488:goto L67f488;
case 0x67f48b:c.instructions+=3;goto B67f48b;
case 0x67f48d:c.instructions+=2;goto B67f48d;
case 0x67f490:c.instructions+=1;goto B67f490;
case 0x67f495:goto L67f495;
case 0x67f497:c.instructions+=2;goto B67f497;
case 0x67f499:c.instructions+=1;goto B67f499;
case 0x67f49f:goto L67f49f;
case 0x67f4a2:c.instructions+=3;goto B67f4a2;
case 0x67f4a3:c.instructions+=2;goto B67f4a3;
case 0x67f4a6:c.instructions+=1;goto B67f4a6;
case 0x67f4a8:goto L67f4a8;
case 0x67f4aa:c.instructions+=2;goto B67f4aa;
case 0x67f4ad:c.instructions+=1;goto B67f4ad;
case 0x67f4b3:goto L67f4b3;
case 0x67f4b9:c.instructions+=3;goto B67f4b9;
case 0x67f4bc:c.instructions+=2;goto B67f4bc;
case 0x67f4bd:c.instructions+=1;goto B67f4bd;
case 0x67f4c2:goto L67f4c2;
case 0x67f4c4:c.instructions+=3;goto B67f4c4;
case 0x67f4c5:c.instructions+=2;goto B67f4c5;
case 0x67f4c8:c.instructions+=1;goto B67f4c8;
case 0x67f4ce:goto L67f4ce;
case 0x67f4cf:c.instructions+=1;goto B67f4cf;
case 0x67f4d4:goto L67f4d4;
case 0x67f4d6:c.instructions+=4;goto B67f4d6;
case 0x67f4d8:c.instructions+=3;goto B67f4d8;
case 0x67f4d9:c.instructions+=2;goto B67f4d9;
case 0x67f4dc:c.instructions+=1;goto B67f4dc;
case 0x67f4e2:goto L67f4e2;
case 0x67f4e8:c.instructions+=3;goto B67f4e8;
case 0x67f4ea:c.instructions+=2;goto B67f4ea;
case 0x67f4ed:c.instructions+=1;goto B67f4ed;
case 0x67f4f2:goto L67f4f2;
case 0x67f4f4:c.instructions+=2;goto B67f4f4;
case 0x67f4f6:c.instructions+=1;goto B67f4f6;
case 0x67f4fc:goto L67f4fc;
case 0x67f502:c.instructions+=3;goto B67f502;
case 0x67f504:c.instructions+=2;goto B67f504;
case 0x67f505:c.instructions+=1;goto B67f505;
case 0x67f50a:goto L67f50a;
case 0x67f50c:c.instructions+=2;goto B67f50c;
case 0x67f50e:c.instructions+=1;goto B67f50e;
case 0x67f514:goto L67f514;
case 0x67f51a:c.instructions+=2;goto B67f51a;
case 0x67f51b:c.instructions+=1;goto B67f51b;
case 0x67f51e:goto L67f51e;
case 0x67f521:c.instructions+=3;goto B67f521;
case 0x67f523:c.instructions+=2;goto B67f523;
case 0x67f526:c.instructions+=1;goto B67f526;
case 0x67f52b:goto L67f52b;
case 0x67f530:goto L67f530;
case 0x67f532:c.instructions+=2;goto B67f532;
case 0x67f535:c.instructions+=1;goto B67f535;
case 0x67f53b:goto L67f53b;
case 0x67f53e:c.instructions+=1;goto B67f53e;
case 0x67f544:goto L67f544;
case 0x67f54a:c.instructions+=12;goto B67f54a;
case 0x67f54d:c.instructions+=11;goto B67f54d;
case 0x67f54f:c.instructions+=10;goto B67f54f;
case 0x67f550:c.instructions+=9;goto B67f550;
case 0x67f552:c.instructions+=8;goto B67f552;
case 0x67f553:c.instructions+=7;goto B67f553;
case 0x67f555:c.instructions+=6;goto B67f555;
case 0x67f55b:c.instructions+=5;goto B67f55b;
case 0x67f55e:c.instructions+=4;goto B67f55e;
case 0x67f55f:c.instructions+=3;goto B67f55f;
case 0x67f560:c.instructions+=2;goto B67f560;
case 0x67f563:c.instructions+=1;goto B67f563;
case 0x67f568:goto L67f568;
case 0x67f56e:c.instructions+=9;goto B67f56e;
case 0x67f571:c.instructions+=8;goto B67f571;
case 0x67f572:c.instructions+=7;goto B67f572;
case 0x67f573:c.instructions+=6;goto B67f573;
case 0x67f576:c.instructions+=5;goto B67f576;
case 0x67f577:c.instructions+=4;goto B67f577;
case 0x67f578:c.instructions+=3;goto B67f578;
case 0x67f57b:c.instructions+=2;goto B67f57b;
case 0x67f57e:c.instructions+=1;goto B67f57e;
case 0x67f583:goto L67f583;
case 0x67f586:c.instructions+=6;goto B67f586;
case 0x67f589:c.instructions+=5;goto B67f589;
case 0x67f58b:c.instructions+=4;goto B67f58b;
case 0x67f58e:c.instructions+=3;goto B67f58e;
case 0x67f58f:c.instructions+=2;goto B67f58f;
case 0x67f591:c.instructions+=1;goto B67f591;
case 0x67f596:goto L67f596;
case 0x67f598:c.instructions+=1;goto B67f598;
case 0x67f59e:goto L67f59e;
case 0x67f5a0:c.instructions+=2;goto B67f5a0;
case 0x67f5a2:c.instructions+=1;goto B67f5a2;
case 0x67f5a5:goto L67f5a5;
case 0x67f5a9:c.instructions+=4;goto B67f5a9;
case 0x67f5aa:c.instructions+=3;goto B67f5aa;
case 0x67f5ac:c.instructions+=2;goto B67f5ac;
case 0x67f5af:c.instructions+=1;goto B67f5af;
case 0x67f5b1:goto L67f5b1;
case 0x67f5b3:c.instructions+=1;goto B67f5b3;
case 0x67f5b5:goto L67f5b5;
case 0x67f5b8:c.instructions+=2;goto B67f5b8;
case 0x67f5bb:c.instructions+=1;goto B67f5bb;
case 0x67f5bd:goto L67f5bd;
case 0x67f5c0:c.instructions+=6;goto B67f5c0;
case 0x67f5c3:c.instructions+=5;goto B67f5c3;
case 0x67f5c6:c.instructions+=4;goto B67f5c6;
case 0x67f5c8:c.instructions+=3;goto B67f5c8;
case 0x67f5cb:c.instructions+=2;goto B67f5cb;
case 0x67f5cc:c.instructions+=1;goto B67f5cc;
case 0x67f5ce:goto L67f5ce;
case 0x67f5d1:c.instructions+=3;goto B67f5d1;
case 0x67f5d3:c.instructions+=2;goto B67f5d3;
case 0x67f5d6:c.instructions+=1;goto B67f5d6;
case 0x67f5db:goto L67f5db;
case 0x67f5dd:c.instructions+=2;goto B67f5dd;
case 0x67f5df:c.instructions+=1;goto B67f5df;
case 0x67f5e5:goto L67f5e5;
case 0x67f5e8:c.instructions+=3;goto B67f5e8;
case 0x67f5ea:c.instructions+=2;goto B67f5ea;
case 0x67f5ed:c.instructions+=1;goto B67f5ed;
case 0x67f5f2:goto L67f5f2;
case 0x67f5f4:c.instructions+=2;goto B67f5f4;
case 0x67f5f6:c.instructions+=1;goto B67f5f6;
case 0x67f5fc:goto L67f5fc;
case 0x67f5ff:c.instructions+=3;goto B67f5ff;
case 0x67f601:c.instructions+=2;goto B67f601;
case 0x67f604:c.instructions+=1;goto B67f604;
case 0x67f609:goto L67f609;
case 0x67f60b:c.instructions+=2;goto B67f60b;
case 0x67f60d:c.instructions+=1;goto B67f60d;
case 0x67f613:goto L67f613;
case 0x67f616:c.instructions+=3;goto B67f616;
case 0x67f618:c.instructions+=2;goto B67f618;
case 0x67f61b:c.instructions+=1;goto B67f61b;
case 0x67f620:goto L67f620;
case 0x67f622:c.instructions+=2;goto B67f622;
case 0x67f624:c.instructions+=1;goto B67f624;
case 0x67f62a:goto L67f62a;
case 0x67f62d:c.instructions+=3;goto B67f62d;
case 0x67f62f:c.instructions+=2;goto B67f62f;
case 0x67f632:c.instructions+=1;goto B67f632;
case 0x67f637:goto L67f637;
case 0x67f639:c.instructions+=2;goto B67f639;
case 0x67f63b:c.instructions+=1;goto B67f63b;
case 0x67f641:goto L67f641;
case 0x67f644:c.instructions+=3;goto B67f644;
case 0x67f646:c.instructions+=2;goto B67f646;
case 0x67f649:c.instructions+=1;goto B67f649;
case 0x67f64e:goto L67f64e;
case 0x67f650:c.instructions+=2;goto B67f650;
case 0x67f652:c.instructions+=1;goto B67f652;
case 0x67f658:goto L67f658;
case 0x67f65b:c.instructions+=3;goto B67f65b;
case 0x67f65d:c.instructions+=2;goto B67f65d;
case 0x67f660:c.instructions+=1;goto B67f660;
case 0x67f665:goto L67f665;
case 0x67f667:c.instructions+=2;goto B67f667;
case 0x67f669:c.instructions+=1;goto B67f669;
case 0x67f66f:goto L67f66f;
case 0x67f672:c.instructions+=12;goto B67f672;
case 0x67f673:c.instructions+=11;goto B67f673;
case 0x67f676:c.instructions+=10;goto B67f676;
case 0x67f67b:c.instructions+=9;goto B67f67b;
case 0x67f67e:c.instructions+=8;goto B67f67e;
case 0x67f681:c.instructions+=7;goto B67f681;
case 0x67f684:c.instructions+=6;goto B67f684;
case 0x67f689:c.instructions+=5;goto B67f689;
case 0x67f68a:c.instructions+=4;goto B67f68a;
case 0x67f68d:c.instructions+=3;goto B67f68d;
case 0x67f68f:c.instructions+=2;goto B67f68f;
case 0x67f692:c.instructions+=1;goto B67f692;
case 0x67f697:goto L67f697;
case 0x67f699:c.instructions+=2;goto B67f699;
case 0x67f69b:c.instructions+=1;goto B67f69b;
case 0x67f6a1:goto L67f6a1;
case 0x67f6a4:c.instructions+=10;goto B67f6a4;
case 0x67f6a6:c.instructions+=9;goto B67f6a6;
case 0x67f6a7:c.instructions+=8;goto B67f6a7;
case 0x67f6aa:c.instructions+=7;goto B67f6aa;
case 0x67f6af:c.instructions+=6;goto B67f6af;
case 0x67f6b2:c.instructions+=5;goto B67f6b2;
case 0x67f6b4:c.instructions+=4;goto B67f6b4;
case 0x67f6b5:c.instructions+=3;goto B67f6b5;
case 0x67f6b8:c.instructions+=2;goto B67f6b8;
case 0x67f6bb:c.instructions+=1;goto B67f6bb;
case 0x67f6c0:goto L67f6c0;
case 0x67f6c2:c.instructions+=2;goto B67f6c2;
case 0x67f6c4:c.instructions+=1;goto B67f6c4;
case 0x67f6ca:goto L67f6ca;
case 0x67f6cd:c.instructions+=10;goto B67f6cd;
case 0x67f6ce:c.instructions+=9;goto B67f6ce;
case 0x67f6cf:c.instructions+=8;goto B67f6cf;
case 0x67f6d2:c.instructions+=7;goto B67f6d2;
case 0x67f6d7:c.instructions+=6;goto B67f6d7;
case 0x67f6da:c.instructions+=5;goto B67f6da;
case 0x67f6dc:c.instructions+=4;goto B67f6dc;
case 0x67f6dd:c.instructions+=3;goto B67f6dd;
case 0x67f6e0:c.instructions+=2;goto B67f6e0;
case 0x67f6e3:c.instructions+=1;goto B67f6e3;
case 0x67f6e8:goto L67f6e8;
case 0x67f6ea:c.instructions+=2;goto B67f6ea;
case 0x67f6ec:c.instructions+=1;goto B67f6ec;
case 0x67f6f2:goto L67f6f2;
case 0x67f6f4:c.instructions+=7;goto B67f6f4;
case 0x67f6f5:c.instructions+=6;goto B67f6f5;
case 0x67f6f8:c.instructions+=5;goto B67f6f8;
case 0x67f6fa:c.instructions+=4;goto B67f6fa;
case 0x67f6fd:c.instructions+=3;goto B67f6fd;
case 0x67f700:c.instructions+=2;goto B67f700;
case 0x67f703:c.instructions+=1;goto B67f703;
case 0x67f708:goto L67f708;
case 0x67f70a:c.instructions+=2;goto B67f70a;
case 0x67f70c:c.instructions+=1;goto B67f70c;
case 0x67f712:goto L67f712;
case 0x67f714:c.instructions+=7;goto B67f714;
case 0x67f715:c.instructions+=6;goto B67f715;
case 0x67f718:c.instructions+=5;goto B67f718;
case 0x67f71a:c.instructions+=4;goto B67f71a;
case 0x67f71d:c.instructions+=3;goto B67f71d;
case 0x67f720:c.instructions+=2;goto B67f720;
case 0x67f723:c.instructions+=1;goto B67f723;
case 0x67f728:goto L67f728;
case 0x67f72a:c.instructions+=2;goto B67f72a;
case 0x67f72c:c.instructions+=1;goto B67f72c;
case 0x67f732:goto L67f732;
case 0x67f735:c.instructions+=9;goto B67f735;
case 0x67f736:c.instructions+=8;goto B67f736;
case 0x67f739:c.instructions+=7;goto B67f739;
case 0x67f73e:c.instructions+=6;goto B67f73e;
case 0x67f741:c.instructions+=5;goto B67f741;
case 0x67f743:c.instructions+=4;goto B67f743;
case 0x67f746:c.instructions+=3;goto B67f746;
case 0x67f747:c.instructions+=2;goto B67f747;
case 0x67f74a:c.instructions+=1;goto B67f74a;
case 0x67f74f:goto L67f74f;
case 0x67f751:c.instructions+=2;goto B67f751;
case 0x67f753:c.instructions+=1;goto B67f753;
case 0x67f759:goto L67f759;
case 0x67f75a:c.instructions+=1;goto B67f75a;
case 0x67f75f:goto L67f75f;
case 0x67f761:c.instructions+=2;goto B67f761;
case 0x67f764:c.instructions+=1;goto B67f764;
case 0x67f76a:goto L67f76a;
case 0x67f76d:c.instructions+=1;goto B67f76d;
case 0x67f773:goto L67f773;
case 0x67f776:c.instructions+=1;goto B67f776;
case 0x67f77c:goto L67f77c;
case 0x67f77f:c.instructions+=1;goto B67f77f;
case 0x67f785:goto L67f785;
case 0x67f788:c.instructions+=8;goto B67f788;
case 0x67f78e:c.instructions+=7;goto B67f78e;
case 0x67f78f:c.instructions+=6;goto B67f78f;
case 0x67f790:c.instructions+=5;goto B67f790;
case 0x67f793:c.instructions+=4;goto B67f793;
case 0x67f794:c.instructions+=3;goto B67f794;
case 0x67f795:c.instructions+=2;goto B67f795;
case 0x67f798:c.instructions+=1;goto B67f798;
case 0x67f79d:goto L67f79d;
case 0x67f7a3:c.instructions+=9;goto B67f7a3;
case 0x67f7a6:c.instructions+=8;goto B67f7a6;
case 0x67f7a7:c.instructions+=7;goto B67f7a7;
case 0x67f7a8:c.instructions+=6;goto B67f7a8;
case 0x67f7ab:c.instructions+=5;goto B67f7ab;
case 0x67f7ac:c.instructions+=4;goto B67f7ac;
case 0x67f7ad:c.instructions+=3;goto B67f7ad;
case 0x67f7b0:c.instructions+=2;goto B67f7b0;
case 0x67f7b3:c.instructions+=1;goto B67f7b3;
case 0x67f7b8:goto L67f7b8;
case 0x67f7bb:c.instructions+=6;goto B67f7bb;
case 0x67f7be:c.instructions+=5;goto B67f7be;
case 0x67f7c0:c.instructions+=4;goto B67f7c0;
case 0x67f7c3:c.instructions+=3;goto B67f7c3;
case 0x67f7c4:c.instructions+=2;goto B67f7c4;
case 0x67f7c6:c.instructions+=1;goto B67f7c6;
case 0x67f7cb:goto L67f7cb;
case 0x67f7cd:c.instructions+=1;goto B67f7cd;
case 0x67f7d3:goto L67f7d3;
case 0x67f7d5:c.instructions+=2;goto B67f7d5;
case 0x67f7d7:c.instructions+=1;goto B67f7d7;
case 0x67f7da:goto L67f7da;
case 0x67f7e1:c.instructions+=4;goto B67f7e1;
case 0x67f7e2:c.instructions+=3;goto B67f7e2;
case 0x67f7e4:c.instructions+=2;goto B67f7e4;
case 0x67f7e7:c.instructions+=1;goto B67f7e7;
case 0x67f7e9:goto L67f7e9;
case 0x67f7eb:goto L67f7eb;
case 0x67f7ee:c.instructions+=3;goto B67f7ee;
case 0x67f7f0:c.instructions+=2;goto B67f7f0;
case 0x67f7f7:c.instructions+=1;goto B67f7f7;
case 0x67f7fc:goto L67f7fc;
case 0x67f7fe:c.instructions+=2;goto B67f7fe;
case 0x67f800:c.instructions+=1;goto B67f800;
case 0x67f806:goto L67f806;
case 0x67f807:c.instructions+=2;goto B67f807;
case 0x67f80a:c.instructions+=1;goto B67f80a;
case 0x67f80c:goto L67f80c;
case 0x67f80f:c.instructions+=2;goto B67f80f;
case 0x67f815:c.instructions+=1;goto B67f815;
case 0x67f817:goto L67f817;
case 0x67f81d:c.instructions+=9;goto B67f81d;
case 0x67f823:c.instructions+=8;goto B67f823;
case 0x67f825:c.instructions+=7;goto B67f825;
case 0x67f828:c.instructions+=6;goto B67f828;
case 0x67f82e:c.instructions+=5;goto B67f82e;
case 0x67f830:c.instructions+=4;goto B67f830;
case 0x67f832:c.instructions+=3;goto B67f832;
case 0x67f838:c.instructions+=2;goto B67f838;
case 0x67f83b:c.instructions+=1;goto B67f83b;
case 0x67f83e:goto L67f83e;
case 0x67f841:c.instructions+=12;goto B67f841;
case 0x67f844:c.instructions+=11;goto B67f844;
case 0x67f847:c.instructions+=10;goto B67f847;
case 0x67f84a:c.instructions+=9;goto B67f84a;
case 0x67f84c:c.instructions+=8;goto B67f84c;
case 0x67f84f:c.instructions+=7;goto B67f84f;
case 0x67f852:c.instructions+=6;goto B67f852;
case 0x67f855:c.instructions+=5;goto B67f855;
case 0x67f85b:c.instructions+=4;goto B67f85b;
case 0x67f85e:c.instructions+=3;goto B67f85e;
case 0x67f861:c.instructions+=2;goto B67f861;
case 0x67f864:c.instructions+=1;goto B67f864;
case 0x67f866:goto L67f866;
case 0x67f869:c.instructions+=3;goto B67f869;
case 0x67f86b:c.instructions+=2;goto B67f86b;
case 0x67f86e:c.instructions+=1;goto B67f86e;
case 0x67f873:goto L67f873;
case 0x67f875:c.instructions+=2;goto B67f875;
case 0x67f877:c.instructions+=1;goto B67f877;
case 0x67f87d:goto L67f87d;
case 0x67f880:c.instructions+=11;goto B67f880;
case 0x67f881:c.instructions+=10;goto B67f881;
case 0x67f882:c.instructions+=9;goto B67f882;
case 0x67f885:c.instructions+=8;goto B67f885;
case 0x67f88a:c.instructions+=7;goto B67f88a;
case 0x67f890:c.instructions+=6;goto B67f890;
case 0x67f893:c.instructions+=5;goto B67f893;
case 0x67f898:c.instructions+=4;goto B67f898;
case 0x67f899:c.instructions+=3;goto B67f899;
case 0x67f89c:c.instructions+=2;goto B67f89c;
case 0x67f89e:c.instructions+=1;goto B67f89e;
case 0x67f8a3:goto L67f8a3;
case 0x67f8a5:c.instructions+=2;goto B67f8a5;
case 0x67f8a7:c.instructions+=1;goto B67f8a7;
case 0x67f8ad:goto L67f8ad;
case 0x67f8b0:c.instructions+=10;goto B67f8b0;
case 0x67f8b1:c.instructions+=9;goto B67f8b1;
case 0x67f8b7:c.instructions+=8;goto B67f8b7;
case 0x67f8bc:c.instructions+=7;goto B67f8bc;
case 0x67f8bf:c.instructions+=6;goto B67f8bf;
case 0x67f8c1:c.instructions+=5;goto B67f8c1;
case 0x67f8c7:c.instructions+=4;goto B67f8c7;
case 0x67f8ca:c.instructions+=3;goto B67f8ca;
case 0x67f8cb:c.instructions+=2;goto B67f8cb;
case 0x67f8ce:c.instructions+=1;goto B67f8ce;
case 0x67f8d3:goto L67f8d3;
case 0x67f8d5:c.instructions+=2;goto B67f8d5;
case 0x67f8d7:c.instructions+=1;goto B67f8d7;
case 0x67f8dd:goto L67f8dd;
case 0x67f8de:c.instructions+=7;goto B67f8de;
case 0x67f8e4:c.instructions+=6;goto B67f8e4;
case 0x67f8e6:c.instructions+=5;goto B67f8e6;
case 0x67f8e9:c.instructions+=4;goto B67f8e9;
case 0x67f8ef:c.instructions+=3;goto B67f8ef;
case 0x67f8f2:c.instructions+=2;goto B67f8f2;
case 0x67f8f5:c.instructions+=1;goto B67f8f5;
case 0x67f8fa:goto L67f8fa;
case 0x67f8fc:c.instructions+=2;goto B67f8fc;
case 0x67f8fe:c.instructions+=1;goto B67f8fe;
case 0x67f904:goto L67f904;
case 0x67f907:c.instructions+=9;goto B67f907;
case 0x67f908:c.instructions+=8;goto B67f908;
case 0x67f909:c.instructions+=7;goto B67f909;
case 0x67f90f:c.instructions+=6;goto B67f90f;
case 0x67f914:c.instructions+=5;goto B67f914;
case 0x67f91a:c.instructions+=4;goto B67f91a;
case 0x67f91c:c.instructions+=3;goto B67f91c;
case 0x67f91d:c.instructions+=2;goto B67f91d;
case 0x67f920:c.instructions+=1;goto B67f920;
case 0x67f925:goto L67f925;
case 0x67f927:c.instructions+=2;goto B67f927;
case 0x67f929:c.instructions+=1;goto B67f929;
case 0x67f92f:goto L67f92f;
case 0x67f932:c.instructions+=10;goto B67f932;
case 0x67f933:c.instructions+=9;goto B67f933;
case 0x67f939:c.instructions+=8;goto B67f939;
case 0x67f93e:c.instructions+=7;goto B67f93e;
case 0x67f944:c.instructions+=6;goto B67f944;
case 0x67f946:c.instructions+=5;goto B67f946;
case 0x67f94c:c.instructions+=4;goto B67f94c;
case 0x67f94f:c.instructions+=3;goto B67f94f;
case 0x67f950:c.instructions+=2;goto B67f950;
case 0x67f953:c.instructions+=1;goto B67f953;
case 0x67f958:goto L67f958;
case 0x67f95a:c.instructions+=2;goto B67f95a;
case 0x67f95c:c.instructions+=1;goto B67f95c;
case 0x67f962:goto L67f962;
case 0x67f965:c.instructions+=9;goto B67f965;
case 0x67f967:c.instructions+=8;goto B67f967;
case 0x67f96d:c.instructions+=7;goto B67f96d;
case 0x67f972:c.instructions+=6;goto B67f972;
case 0x67f978:c.instructions+=5;goto B67f978;
case 0x67f97a:c.instructions+=4;goto B67f97a;
case 0x67f980:c.instructions+=3;goto B67f980;
case 0x67f981:c.instructions+=2;goto B67f981;
case 0x67f984:c.instructions+=1;goto B67f984;
case 0x67f989:goto L67f989;
case 0x67f98b:c.instructions+=2;goto B67f98b;
case 0x67f98d:c.instructions+=1;goto B67f98d;
case 0x67f993:goto L67f993;
case 0x67f996:c.instructions+=9;goto B67f996;
case 0x67f998:c.instructions+=8;goto B67f998;
case 0x67f99e:c.instructions+=7;goto B67f99e;
case 0x67f9a3:c.instructions+=6;goto B67f9a3;
case 0x67f9a9:c.instructions+=5;goto B67f9a9;
case 0x67f9ab:c.instructions+=4;goto B67f9ab;
case 0x67f9b1:c.instructions+=3;goto B67f9b1;
case 0x67f9b2:c.instructions+=2;goto B67f9b2;
case 0x67f9b5:c.instructions+=1;goto B67f9b5;
case 0x67f9ba:goto L67f9ba;
case 0x67f9bc:c.instructions+=2;goto B67f9bc;
case 0x67f9be:c.instructions+=1;goto B67f9be;
case 0x67f9c4:goto L67f9c4;
case 0x67f9c6:c.instructions+=7;goto B67f9c6;
case 0x67f9cc:c.instructions+=6;goto B67f9cc;
case 0x67f9ce:c.instructions+=5;goto B67f9ce;
case 0x67f9d4:c.instructions+=4;goto B67f9d4;
case 0x67f9da:c.instructions+=3;goto B67f9da;
case 0x67f9dd:c.instructions+=2;goto B67f9dd;
case 0x67f9e0:c.instructions+=1;goto B67f9e0;
case 0x67f9e5:goto L67f9e5;
case 0x67f9e7:c.instructions+=2;goto B67f9e7;
case 0x67f9e9:c.instructions+=1;goto B67f9e9;
case 0x67f9ef:goto L67f9ef;
case 0x67f9f0:c.instructions+=7;goto B67f9f0;
case 0x67f9f6:c.instructions+=6;goto B67f9f6;
case 0x67f9f8:c.instructions+=5;goto B67f9f8;
case 0x67f9fe:c.instructions+=4;goto B67f9fe;
case 0x67fa04:c.instructions+=3;goto B67fa04;
case 0x67fa07:c.instructions+=2;goto B67fa07;
case 0x67fa0a:c.instructions+=1;goto B67fa0a;
case 0x67fa0f:goto L67fa0f;
case 0x67fa11:c.instructions+=2;goto B67fa11;
case 0x67fa13:c.instructions+=1;goto B67fa13;
case 0x67fa19:goto L67fa19;
case 0x67fa1b:c.instructions+=7;goto B67fa1b;
case 0x67fa21:c.instructions+=6;goto B67fa21;
case 0x67fa23:c.instructions+=5;goto B67fa23;
case 0x67fa29:c.instructions+=4;goto B67fa29;
case 0x67fa2f:c.instructions+=3;goto B67fa2f;
case 0x67fa32:c.instructions+=2;goto B67fa32;
case 0x67fa35:c.instructions+=1;goto B67fa35;
case 0x67fa3a:goto L67fa3a;
case 0x67fa3c:c.instructions+=2;goto B67fa3c;
case 0x67fa3e:c.instructions+=1;goto B67fa3e;
case 0x67fa44:goto L67fa44;
case 0x67fa45:c.instructions+=3;goto B67fa45;
case 0x67fa4b:c.instructions+=2;goto B67fa4b;
case 0x67fa51:c.instructions+=1;goto B67fa51;
case 0x67fa56:goto L67fa56;
case 0x67fa58:c.instructions+=2;goto B67fa58;
case 0x67fa5b:c.instructions+=1;goto B67fa5b;
case 0x67fa61:goto L67fa61;
case 0x67fa64:c.instructions+=1;goto B67fa64;
case 0x67fa6a:goto L67fa6a;
case 0x67fa6d:c.instructions+=2;goto B67fa6d;
case 0x67fa6f:c.instructions+=1;goto B67fa6f;
case 0x67fa74:goto L67fa74;
case 0x67fa76:c.instructions+=2;goto B67fa76;
case 0x67fa79:c.instructions+=1;goto B67fa79;
case 0x67fa7f:goto L67fa7f;
case 0x67fa82:c.instructions+=3;goto B67fa82;
case 0x67fa84:c.instructions+=2;goto B67fa84;
case 0x67fa85:c.instructions+=1;goto B67fa85;
case 0x67fa8a:goto L67fa8a;
case 0x67fa8c:c.instructions+=2;goto B67fa8c;
case 0x67fa8e:c.instructions+=1;goto B67fa8e;
case 0x67fa94:goto L67fa94;
case 0x67fa97:c.instructions+=3;goto B67fa97;
case 0x67fa99:c.instructions+=2;goto B67fa99;
case 0x67fa9c:c.instructions+=1;goto B67fa9c;
case 0x67faa1:goto L67faa1;
case 0x67faa3:c.instructions+=2;goto B67faa3;
case 0x67faa5:c.instructions+=1;goto B67faa5;
case 0x67faab:goto L67faab;
case 0x67faae:c.instructions+=11;goto B67faae;
case 0x67fab0:c.instructions+=10;goto B67fab0;
case 0x67fab1:c.instructions+=9;goto B67fab1;
case 0x67fab4:c.instructions+=8;goto B67fab4;
case 0x67fab9:c.instructions+=7;goto B67fab9;
case 0x67fabc:c.instructions+=6;goto B67fabc;
case 0x67fabf:c.instructions+=5;goto B67fabf;
case 0x67fac4:c.instructions+=4;goto B67fac4;
case 0x67fac5:c.instructions+=3;goto B67fac5;
case 0x67fac8:c.instructions+=2;goto B67fac8;
case 0x67faca:c.instructions+=1;goto B67faca;
case 0x67facf:goto L67facf;
case 0x67fad1:c.instructions+=2;goto B67fad1;
case 0x67fad3:c.instructions+=1;goto B67fad3;
case 0x67fad9:goto L67fad9;
case 0x67fadc:c.instructions+=5;goto B67fadc;
case 0x67fade:c.instructions+=4;goto B67fade;
case 0x67fadf:c.instructions+=3;goto B67fadf;
case 0x67fae2:c.instructions+=2;goto B67fae2;
case 0x67fae7:c.instructions+=1;goto B67fae7;
case 0x67faec:goto L67faec;
case 0x67faee:c.instructions+=2;goto B67faee;
case 0x67faf1:c.instructions+=1;goto B67faf1;
case 0x67faf7:goto L67faf7;
case 0x67fafa:c.instructions+=1;goto B67fafa;
case 0x67fb00:goto L67fb00;
case 0x67fb03:c.instructions+=1;goto B67fb03;
case 0x67fb09:goto L67fb09;
case 0x67fb0c:c.instructions+=4;goto B67fb0c;
case 0x67fb0d:c.instructions+=3;goto B67fb0d;
case 0x67fb10:c.instructions+=2;goto B67fb10;
case 0x67fb12:c.instructions+=1;goto B67fb12;
case 0x67fb17:goto L67fb17;
case 0x67fb19:c.instructions+=2;goto B67fb19;
case 0x67fb1b:c.instructions+=1;goto B67fb1b;
case 0x67fb21:goto L67fb21;
case 0x67fb23:c.instructions+=4;goto B67fb23;
case 0x67fb26:c.instructions+=3;goto B67fb26;
case 0x67fb2c:c.instructions+=2;goto B67fb2c;
case 0x67fb2f:c.instructions+=1;goto B67fb2f;
case 0x67fb35:goto L67fb35;
case 0x67fb38:c.instructions+=2;goto B67fb38;
case 0x67fb39:c.instructions+=1;goto B67fb39;
case 0x67fb3e:goto L67fb3e;
case 0x67fb40:c.instructions+=2;goto B67fb40;
case 0x67fb43:c.instructions+=1;goto B67fb43;
case 0x67fb49:goto L67fb49;
case 0x67fb4c:c.instructions+=4;goto B67fb4c;
case 0x67fb4f:c.instructions+=3;goto B67fb4f;
case 0x67fb50:c.instructions+=2;goto B67fb50;
case 0x67fb52:c.instructions+=1;goto B67fb52;
case 0x67fb57:goto L67fb57;
case 0x67fb59:c.instructions+=1;goto B67fb59;
case 0x67fb5f:goto L67fb5f;
case 0x67fb61:c.instructions+=2;goto B67fb61;
case 0x67fb63:c.instructions+=1;goto B67fb63;
case 0x67fb66:goto L67fb66;
case 0x67fb6a:c.instructions+=4;goto B67fb6a;
case 0x67fb6b:c.instructions+=3;goto B67fb6b;
case 0x67fb6d:c.instructions+=2;goto B67fb6d;
case 0x67fb70:c.instructions+=1;goto B67fb70;
case 0x67fb72:goto L67fb72;
case 0x67fb75:c.instructions+=3;goto B67fb75;
case 0x67fb77:c.instructions+=2;goto B67fb77;
case 0x67fb7a:c.instructions+=1;goto B67fb7a;
case 0x67fb7f:goto L67fb7f;
case 0x67fb81:c.instructions+=2;goto B67fb81;
case 0x67fb83:c.instructions+=1;goto B67fb83;
case 0x67fb89:goto L67fb89;
case 0x67fb8c:c.instructions+=3;goto B67fb8c;
case 0x67fb8e:c.instructions+=2;goto B67fb8e;
case 0x67fb91:c.instructions+=1;goto B67fb91;
case 0x67fb96:goto L67fb96;
case 0x67fb98:c.instructions+=2;goto B67fb98;
case 0x67fb9a:c.instructions+=1;goto B67fb9a;
case 0x67fba0:goto L67fba0;
case 0x67fba3:c.instructions+=3;goto B67fba3;
case 0x67fba5:c.instructions+=2;goto B67fba5;
case 0x67fba8:c.instructions+=1;goto B67fba8;
case 0x67fbad:goto L67fbad;
case 0x67fbaf:c.instructions+=2;goto B67fbaf;
case 0x67fbb1:c.instructions+=1;goto B67fbb1;
case 0x67fbb7:goto L67fbb7;
case 0x67fbba:c.instructions+=3;goto B67fbba;
case 0x67fbbc:c.instructions+=2;goto B67fbbc;
case 0x67fbbf:c.instructions+=1;goto B67fbbf;
case 0x67fbc4:goto L67fbc4;
case 0x67fbc6:c.instructions+=2;goto B67fbc6;
case 0x67fbc8:c.instructions+=1;goto B67fbc8;
case 0x67fbce:goto L67fbce;
case 0x67fbd1:c.instructions+=6;goto B67fbd1;
case 0x67fbd3:c.instructions+=5;goto B67fbd3;
case 0x67fbd6:c.instructions+=4;goto B67fbd6;
case 0x67fbd9:c.instructions+=3;goto B67fbd9;
case 0x67fbdc:c.instructions+=2;goto B67fbdc;
case 0x67fbdf:c.instructions+=1;goto B67fbdf;
case 0x67fbe4:goto L67fbe4;
case 0x67fbe6:c.instructions+=2;goto B67fbe6;
case 0x67fbe8:c.instructions+=1;goto B67fbe8;
case 0x67fbee:goto L67fbee;
case 0x67fbf1:c.instructions+=11;goto B67fbf1;
case 0x67fbf2:c.instructions+=10;goto B67fbf2;
case 0x67fbf3:c.instructions+=9;goto B67fbf3;
case 0x67fbf6:c.instructions+=8;goto B67fbf6;
case 0x67fbfb:c.instructions+=7;goto B67fbfb;
case 0x67fbfe:c.instructions+=6;goto B67fbfe;
case 0x67fc01:c.instructions+=5;goto B67fc01;
case 0x67fc06:c.instructions+=4;goto B67fc06;
case 0x67fc07:c.instructions+=3;goto B67fc07;
case 0x67fc0a:c.instructions+=2;goto B67fc0a;
case 0x67fc0c:c.instructions+=1;goto B67fc0c;
case 0x67fc11:goto L67fc11;
case 0x67fc13:c.instructions+=2;goto B67fc13;
case 0x67fc15:c.instructions+=1;goto B67fc15;
case 0x67fc1b:goto L67fc1b;
case 0x67fc1c:c.instructions+=5;goto B67fc1c;
case 0x67fc1f:c.instructions+=4;goto B67fc1f;
case 0x67fc22:c.instructions+=3;goto B67fc22;
case 0x67fc25:c.instructions+=2;goto B67fc25;
case 0x67fc2a:c.instructions+=1;goto B67fc2a;
case 0x67fc2f:goto L67fc2f;
case 0x67fc31:c.instructions+=2;goto B67fc31;
case 0x67fc34:c.instructions+=1;goto B67fc34;
case 0x67fc3a:goto L67fc3a;
case 0x67fc3d:c.instructions+=1;goto B67fc3d;
case 0x67fc43:goto L67fc43;
case 0x67fc49:c.instructions+=12;goto B67fc49;
case 0x67fc4c:c.instructions+=11;goto B67fc4c;
case 0x67fc4e:c.instructions+=10;goto B67fc4e;
case 0x67fc4f:c.instructions+=9;goto B67fc4f;
case 0x67fc51:c.instructions+=8;goto B67fc51;
case 0x67fc52:c.instructions+=7;goto B67fc52;
case 0x67fc54:c.instructions+=6;goto B67fc54;
case 0x67fc5a:c.instructions+=5;goto B67fc5a;
case 0x67fc5d:c.instructions+=4;goto B67fc5d;
case 0x67fc5e:c.instructions+=3;goto B67fc5e;
case 0x67fc5f:c.instructions+=2;goto B67fc5f;
case 0x67fc62:c.instructions+=1;goto B67fc62;
case 0x67fc67:goto L67fc67;
case 0x67fc6a:c.instructions+=5;goto B67fc6a;
case 0x67fc6d:c.instructions+=4;goto B67fc6d;
case 0x67fc70:c.instructions+=3;goto B67fc70;
case 0x67fc71:c.instructions+=2;goto B67fc71;
case 0x67fc73:c.instructions+=1;goto B67fc73;
case 0x67fc78:goto L67fc78;
case 0x67fc7a:c.instructions+=1;goto B67fc7a;
case 0x67fc7c:goto L67fc7c;
case 0x67fc81:c.instructions+=1;goto B67fc81;
case 0x67fc86:goto L67fc86;
case 0x67fc88:c.instructions+=2;goto B67fc88;
case 0x67fc8a:c.instructions+=1;goto B67fc8a;
case 0x67fc8d:goto L67fc8d;
case 0x67fc91:c.instructions+=4;goto B67fc91;
case 0x67fc92:c.instructions+=3;goto B67fc92;
case 0x67fc94:c.instructions+=2;goto B67fc94;
case 0x67fc97:c.instructions+=1;goto B67fc97;
case 0x67fc99:goto L67fc99;
case 0x67fc9b:c.instructions+=1;goto B67fc9b;
case 0x67fc9d:goto L67fc9d;
case 0x67fca0:c.instructions+=2;goto B67fca0;
case 0x67fca3:c.instructions+=1;goto B67fca3;
case 0x67fca6:goto L67fca6;
case 0x67fca8:goto L67fca8;
case 0x67fcaa:goto L67fcaa;
case 0x67fcad:c.instructions+=4;goto B67fcad;
case 0x67fcae:c.instructions+=3;goto B67fcae;
case 0x67fcb1:c.instructions+=2;goto B67fcb1;
case 0x67fcb3:c.instructions+=1;goto B67fcb3;
case 0x67fcb8:goto L67fcb8;
case 0x67fcba:c.instructions+=2;goto B67fcba;
case 0x67fcbc:c.instructions+=1;goto B67fcbc;
case 0x67fcc2:goto L67fcc2;
case 0x67fcc3:c.instructions+=3;goto B67fcc3;
case 0x67fcc6:c.instructions+=2;goto B67fcc6;
case 0x67fcc8:c.instructions+=1;goto B67fcc8;
case 0x67fccd:goto L67fccd;
case 0x67fccf:c.instructions+=2;goto B67fccf;
case 0x67fcd1:c.instructions+=1;goto B67fcd1;
case 0x67fcd7:goto L67fcd7;
case 0x67fcd8:c.instructions+=3;goto B67fcd8;
case 0x67fcdb:c.instructions+=2;goto B67fcdb;
case 0x67fcdd:c.instructions+=1;goto B67fcdd;
case 0x67fce2:goto L67fce2;
case 0x67fce4:c.instructions+=2;goto B67fce4;
case 0x67fce6:c.instructions+=1;goto B67fce6;
case 0x67fcec:goto L67fcec;
case 0x67fced:c.instructions+=3;goto B67fced;
case 0x67fcf0:c.instructions+=2;goto B67fcf0;
case 0x67fcf2:c.instructions+=1;goto B67fcf2;
case 0x67fcf7:goto L67fcf7;
case 0x67fcf9:c.instructions+=2;goto B67fcf9;
case 0x67fcfb:c.instructions+=1;goto B67fcfb;
case 0x67fd01:goto L67fd01;
case 0x67fd02:c.instructions+=3;goto B67fd02;
case 0x67fd05:c.instructions+=2;goto B67fd05;
case 0x67fd07:c.instructions+=1;goto B67fd07;
case 0x67fd0c:goto L67fd0c;
case 0x67fd0e:c.instructions+=2;goto B67fd0e;
case 0x67fd10:c.instructions+=1;goto B67fd10;
case 0x67fd16:goto L67fd16;
case 0x67fd17:c.instructions+=3;goto B67fd17;
case 0x67fd1a:c.instructions+=2;goto B67fd1a;
case 0x67fd1c:c.instructions+=1;goto B67fd1c;
case 0x67fd21:goto L67fd21;
case 0x67fd23:c.instructions+=2;goto B67fd23;
case 0x67fd25:c.instructions+=1;goto B67fd25;
case 0x67fd2b:goto L67fd2b;
case 0x67fd2c:c.instructions+=3;goto B67fd2c;
case 0x67fd2f:c.instructions+=2;goto B67fd2f;
case 0x67fd31:c.instructions+=1;goto B67fd31;
case 0x67fd36:goto L67fd36;
case 0x67fd38:c.instructions+=2;goto B67fd38;
case 0x67fd3a:c.instructions+=1;goto B67fd3a;
case 0x67fd40:goto L67fd40;
case 0x67fd41:c.instructions+=3;goto B67fd41;
case 0x67fd44:c.instructions+=2;goto B67fd44;
case 0x67fd46:c.instructions+=1;goto B67fd46;
case 0x67fd4b:goto L67fd4b;
case 0x67fd4d:c.instructions+=2;goto B67fd4d;
case 0x67fd4f:c.instructions+=1;goto B67fd4f;
case 0x67fd55:goto L67fd55;
case 0x67fd56:c.instructions+=3;goto B67fd56;
case 0x67fd59:c.instructions+=2;goto B67fd59;
case 0x67fd5b:c.instructions+=1;goto B67fd5b;
case 0x67fd60:goto L67fd60;
case 0x67fd62:c.instructions+=2;goto B67fd62;
case 0x67fd64:c.instructions+=1;goto B67fd64;
case 0x67fd6a:goto L67fd6a;
case 0x67fd6b:c.instructions+=12;goto B67fd6b;
case 0x67fd6e:c.instructions+=11;goto B67fd6e;
case 0x67fd70:c.instructions+=10;goto B67fd70;
case 0x67fd73:c.instructions+=9;goto B67fd73;
case 0x67fd78:c.instructions+=8;goto B67fd78;
case 0x67fd7b:c.instructions+=7;goto B67fd7b;
case 0x67fd7e:c.instructions+=6;goto B67fd7e;
case 0x67fd83:c.instructions+=5;goto B67fd83;
case 0x67fd84:c.instructions+=4;goto B67fd84;
case 0x67fd87:c.instructions+=3;goto B67fd87;
case 0x67fd89:c.instructions+=2;goto B67fd89;
case 0x67fd8c:c.instructions+=1;goto B67fd8c;
case 0x67fd91:goto L67fd91;
case 0x67fd93:c.instructions+=2;goto B67fd93;
case 0x67fd95:c.instructions+=1;goto B67fd95;
case 0x67fd9b:goto L67fd9b;
case 0x67fd9e:c.instructions+=10;goto B67fd9e;
case 0x67fda0:c.instructions+=9;goto B67fda0;
case 0x67fda1:c.instructions+=8;goto B67fda1;
case 0x67fda4:c.instructions+=7;goto B67fda4;
case 0x67fda9:c.instructions+=6;goto B67fda9;
case 0x67fdac:c.instructions+=5;goto B67fdac;
case 0x67fdae:c.instructions+=4;goto B67fdae;
case 0x67fdaf:c.instructions+=3;goto B67fdaf;
case 0x67fdb2:c.instructions+=2;goto B67fdb2;
case 0x67fdb5:c.instructions+=1;goto B67fdb5;
case 0x67fdba:goto L67fdba;
case 0x67fdbc:c.instructions+=2;goto B67fdbc;
case 0x67fdbe:c.instructions+=1;goto B67fdbe;
case 0x67fdc4:goto L67fdc4;
case 0x67fdc7:c.instructions+=10;goto B67fdc7;
case 0x67fdc8:c.instructions+=9;goto B67fdc8;
case 0x67fdc9:c.instructions+=8;goto B67fdc9;
case 0x67fdcc:c.instructions+=7;goto B67fdcc;
case 0x67fdd1:c.instructions+=6;goto B67fdd1;
case 0x67fdd4:c.instructions+=5;goto B67fdd4;
case 0x67fdd6:c.instructions+=4;goto B67fdd6;
case 0x67fdd7:c.instructions+=3;goto B67fdd7;
case 0x67fdda:c.instructions+=2;goto B67fdda;
case 0x67fddd:c.instructions+=1;goto B67fddd;
case 0x67fde2:goto L67fde2;
case 0x67fde4:c.instructions+=2;goto B67fde4;
case 0x67fde6:c.instructions+=1;goto B67fde6;
case 0x67fdec:goto L67fdec;
case 0x67fdee:c.instructions+=7;goto B67fdee;
case 0x67fdef:c.instructions+=6;goto B67fdef;
case 0x67fdf2:c.instructions+=5;goto B67fdf2;
case 0x67fdf4:c.instructions+=4;goto B67fdf4;
case 0x67fdf7:c.instructions+=3;goto B67fdf7;
case 0x67fdfa:c.instructions+=2;goto B67fdfa;
case 0x67fdfd:c.instructions+=1;goto B67fdfd;
case 0x67fe02:goto L67fe02;
case 0x67fe04:c.instructions+=2;goto B67fe04;
case 0x67fe06:c.instructions+=1;goto B67fe06;
case 0x67fe0c:goto L67fe0c;
case 0x67fe0e:c.instructions+=7;goto B67fe0e;
case 0x67fe0f:c.instructions+=6;goto B67fe0f;
case 0x67fe12:c.instructions+=5;goto B67fe12;
case 0x67fe14:c.instructions+=4;goto B67fe14;
case 0x67fe17:c.instructions+=3;goto B67fe17;
case 0x67fe1a:c.instructions+=2;goto B67fe1a;
case 0x67fe1d:c.instructions+=1;goto B67fe1d;
case 0x67fe22:goto L67fe22;
case 0x67fe24:c.instructions+=2;goto B67fe24;
case 0x67fe26:c.instructions+=1;goto B67fe26;
case 0x67fe2c:goto L67fe2c;
case 0x67fe2f:c.instructions+=10;goto B67fe2f;
case 0x67fe30:c.instructions+=9;goto B67fe30;
case 0x67fe33:c.instructions+=8;goto B67fe33;
case 0x67fe38:c.instructions+=7;goto B67fe38;
case 0x67fe3b:c.instructions+=6;goto B67fe3b;
case 0x67fe3d:c.instructions+=5;goto B67fe3d;
case 0x67fe40:c.instructions+=4;goto B67fe40;
case 0x67fe43:c.instructions+=3;goto B67fe43;
case 0x67fe44:c.instructions+=2;goto B67fe44;
case 0x67fe47:c.instructions+=1;goto B67fe47;
case 0x67fe4c:goto L67fe4c;
case 0x67fe4e:c.instructions+=2;goto B67fe4e;
case 0x67fe50:c.instructions+=1;goto B67fe50;
case 0x67fe56:goto L67fe56;
case 0x67fe58:c.instructions+=7;goto B67fe58;
case 0x67fe5b:c.instructions+=6;goto B67fe5b;
case 0x67fe5d:c.instructions+=5;goto B67fe5d;
case 0x67fe60:c.instructions+=4;goto B67fe60;
case 0x67fe63:c.instructions+=3;goto B67fe63;
case 0x67fe66:c.instructions+=2;goto B67fe66;
case 0x67fe69:c.instructions+=1;goto B67fe69;
case 0x67fe6e:goto L67fe6e;
case 0x67fe70:c.instructions+=2;goto B67fe70;
case 0x67fe72:c.instructions+=1;goto B67fe72;
case 0x67fe78:goto L67fe78;
case 0x67fe7b:c.instructions+=9;goto B67fe7b;
case 0x67fe7d:c.instructions+=8;goto B67fe7d;
case 0x67fe7e:c.instructions+=7;goto B67fe7e;
case 0x67fe81:c.instructions+=6;goto B67fe81;
case 0x67fe86:c.instructions+=5;goto B67fe86;
case 0x67fe89:c.instructions+=4;goto B67fe89;
case 0x67fe8b:c.instructions+=3;goto B67fe8b;
case 0x67fe8c:c.instructions+=2;goto B67fe8c;
case 0x67fe8f:c.instructions+=1;goto B67fe8f;
case 0x67fe94:goto L67fe94;
case 0x67fe96:c.instructions+=2;goto B67fe96;
case 0x67fe98:c.instructions+=1;goto B67fe98;
case 0x67fe9e:goto L67fe9e;
case 0x67fe9f:c.instructions+=2;goto B67fe9f;
case 0x67fea2:c.instructions+=1;goto B67fea2;
case 0x67fea5:goto L67fea5;
case 0x67fea8:c.instructions+=2;goto B67fea8;
case 0x67feab:c.instructions+=1;goto B67feab;
case 0x67feb0:goto L67feb0;
case 0x67feb2:c.instructions+=2;goto B67feb2;
case 0x67feb5:c.instructions+=1;goto B67feb5;
case 0x67febb:goto L67febb;
case 0x67febe:c.instructions+=1;goto B67febe;
case 0x67fec4:goto L67fec4;
case 0x67fec7:c.instructions+=1;goto B67fec7;
case 0x67fecd:goto L67fecd;
case 0x67fed0:c.instructions+=1;goto B67fed0;
case 0x67fed2:goto L67fed2;
case 0x67fed5:c.instructions+=7;goto B67fed5;
case 0x67fed7:c.instructions+=6;goto B67fed7;
case 0x67fedb:c.instructions+=5;goto B67fedb;
case 0x67fedd:c.instructions+=4;goto B67fedd;
case 0x67fee1:c.instructions+=3;goto B67fee1;
case 0x67fee2:c.instructions+=2;goto B67fee2;
case 0x67fee5:c.instructions+=1;goto B67fee5;
case 0x67fee7:goto L67fee7;
case 0x67fee9:c.instructions+=7;goto B67fee9;
case 0x67feec:c.instructions+=6;goto B67feec;
case 0x67feee:c.instructions+=5;goto B67feee;
case 0x67fef1:c.instructions+=4;goto B67fef1;
case 0x67fef2:c.instructions+=3;goto B67fef2;
case 0x67fef3:c.instructions+=2;goto B67fef3;
case 0x67fef5:c.instructions+=1;goto B67fef5;
case 0x67fefa:goto L67fefa;
case 0x67fefd:c.instructions+=8;goto B67fefd;
case 0x67ff00:c.instructions+=7;goto B67ff00;
case 0x67ff03:c.instructions+=6;goto B67ff03;
case 0x67ff06:c.instructions+=5;goto B67ff06;
case 0x67ff09:c.instructions+=4;goto B67ff09;
case 0x67ff0c:c.instructions+=3;goto B67ff0c;
case 0x67ff0f:c.instructions+=2;goto B67ff0f;
case 0x67ff13:c.instructions+=1;goto B67ff13;
case 0x67ff15:goto L67ff15;
case 0x67ff18:c.instructions+=1;goto B67ff18;
case 0x67ff1a:goto L67ff1a;
case 0x67ff1d:c.instructions+=2;goto B67ff1d;
case 0x67ff20:c.instructions+=1;goto B67ff20;
case 0x67ff22:goto L67ff22;
case 0x67ff25:c.instructions+=1;goto B67ff25;
case 0x67ff28:goto L67ff28;
case 0x67ff2b:c.instructions+=4;goto B67ff2b;
case 0x67ff2d:c.instructions+=3;goto B67ff2d;
case 0x67ff30:c.instructions+=2;goto B67ff30;
case 0x67ff33:c.instructions+=1;goto B67ff33;
case 0x67ff35:goto L67ff35;
case 0x67ff38:c.instructions+=2;goto B67ff38;
case 0x67ff3b:c.instructions+=1;goto B67ff3b;
case 0x67ff3d:goto L67ff3d;
case 0x67ff40:c.instructions+=2;goto B67ff40;
case 0x67ff43:c.instructions+=1;goto B67ff43;
case 0x67ff45:goto L67ff45;
case 0x67ff49:c.instructions+=1;goto B67ff49;
case 0x67ff4b:goto L67ff4b;
case 0x67ff4e:c.instructions+=5;goto B67ff4e;
case 0x67ff51:c.instructions+=4;goto B67ff51;
case 0x67ff54:c.instructions+=3;goto B67ff54;
case 0x67ff58:c.instructions+=2;goto B67ff58;
case 0x67ff5b:c.instructions+=1;goto B67ff5b;
case 0x67ff5d:goto L67ff5d;
case 0x67ff5f:goto L67ff5f;
case 0x67ff62:c.instructions+=1;goto B67ff62;
case 0x67ff65:goto L67ff65;
case 0x67ff68:c.instructions+=2;goto B67ff68;
case 0x67ff6b:c.instructions+=1;goto B67ff6b;
case 0x67ff6d:goto L67ff6d;
case 0x67ff72:c.instructions+=4;goto B67ff72;
case 0x67ff77:c.instructions+=3;goto B67ff77;
case 0x67ff7a:c.instructions+=2;goto B67ff7a;
case 0x67ff7b:c.instructions+=1;goto B67ff7b;
case 0x67ff80:goto L67ff80;
case 0x67ff83:goto L67ff83;
case 0x67ff86:c.instructions+=3;goto B67ff86;
case 0x67ff88:c.instructions+=2;goto B67ff88;
case 0x67ff8b:c.instructions+=1;goto B67ff8b;
case 0x67ff90:goto L67ff90;
case 0x67ff92:c.instructions+=2;goto B67ff92;
case 0x67ff94:c.instructions+=1;goto B67ff94;
case 0x67ff9a:goto L67ff9a;
case 0x67ff9b:c.instructions+=7;goto B67ff9b;
case 0x67ff9e:c.instructions+=6;goto B67ff9e;
case 0x67ff9f:c.instructions+=5;goto B67ff9f;
case 0x67ffa2:c.instructions+=4;goto B67ffa2;
case 0x67ffa3:c.instructions+=3;goto B67ffa3;
case 0x67ffa6:c.instructions+=2;goto B67ffa6;
case 0x67ffab:c.instructions+=1;goto B67ffab;
case 0x67ffb0:goto L67ffb0;
case 0x67ffb2:c.instructions+=2;goto B67ffb2;
case 0x67ffb5:c.instructions+=1;goto B67ffb5;
case 0x67ffbb:goto L67ffbb;
case 0x67ffbe:c.instructions+=1;goto B67ffbe;
case 0x67ffc4:goto L67ffc4;
case 0x67ffc7:c.instructions+=1;goto B67ffc7;
case 0x67ffcd:goto L67ffcd;
case 0x67ffd0:c.instructions+=1;goto B67ffd0;
case 0x67ffd6:goto L67ffd6;
case 0x67ffd9:c.instructions+=1;goto B67ffd9;
case 0x67ffdf:goto L67ffdf;
case 0x67ffe1:c.instructions+=11;goto B67ffe1;
case 0x67ffe4:c.instructions+=10;goto B67ffe4;
case 0x67ffe6:c.instructions+=9;goto B67ffe6;
case 0x67ffe8:c.instructions+=8;goto B67ffe8;
case 0x67ffeb:c.instructions+=7;goto B67ffeb;
case 0x67ffef:c.instructions+=6;goto B67ffef;
case 0x67fff2:c.instructions+=5;goto B67fff2;
case 0x67fff4:c.instructions+=4;goto B67fff4;
case 0x67fff8:c.instructions+=3;goto B67fff8;
case 0x67fffb:c.instructions+=2;goto B67fffb;
case 0x67fffd:c.instructions+=1;goto B67fffd;
default:missing_instruction(c.pc);}
B67f002:L67f002:{c.instructions+=4;NFSU2_TR(0x67f002);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f005:{NFSU2_TR(0x67f005);
__builtin_memmove((R+4),(R+12),4);
}
B67f007:{NFSU2_TR(0x67f007);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f00a:{NFSU2_TR(0x67f00a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f00full));
TAIL_STATIC(0x673b2cu,673);
}
B67f00f:L67f00f:{c.instructions+=3;NFSU2_TR(0x67f00f);
__builtin_memmove((R+24),(R+0),4);
}
B67f011:{NFSU2_TR(0x67f011);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f013:{NFSU2_TR(0x67f013);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f019:L67f019:{c.instructions+=4;NFSU2_TR(0x67f019);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f01c:{NFSU2_TR(0x67f01c);
__builtin_memmove((R+4),(R+12),4);
}
B67f01e:{NFSU2_TR(0x67f01e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f021:{NFSU2_TR(0x67f021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f026ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f026:L67f026:{c.instructions+=3;NFSU2_TR(0x67f026);
__builtin_memmove((R+24),(R+0),4);
}
B67f028:{NFSU2_TR(0x67f028);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f02a:{NFSU2_TR(0x67f02a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f030:L67f030:{c.instructions+=4;NFSU2_TR(0x67f030);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f033:{NFSU2_TR(0x67f033);
__builtin_memmove((R+4),(R+12),4);
}
B67f035:{NFSU2_TR(0x67f035);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f038:{NFSU2_TR(0x67f038);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f03dull));
TAIL_STATIC(0x673b2cu,673);
}
B67f03d:L67f03d:{c.instructions+=3;NFSU2_TR(0x67f03d);
__builtin_memmove((R+24),(R+0),4);
}
B67f03f:{NFSU2_TR(0x67f03f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f041:{NFSU2_TR(0x67f041);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f047:L67f047:{c.instructions+=11;NFSU2_TR(0x67f047);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f04a:{NFSU2_TR(0x67f04a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f04b:{NFSU2_TR(0x67f04b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f04e:{NFSU2_TR(0x67f04e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67f053:{NFSU2_TR(0x67f053);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f056:{NFSU2_TR(0x67f056);
__builtin_memmove((R+4),(R+12),4);
}
B67f058:{NFSU2_TR(0x67f058);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f05b:{NFSU2_TR(0x67f05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f05e:{NFSU2_TR(0x67f05e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f05f:{NFSU2_TR(0x67f05f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f062:{NFSU2_TR(0x67f062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f067ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f067:L67f067:{c.instructions+=3;NFSU2_TR(0x67f067);
__builtin_memmove((R+24),(R+0),4);
}
B67f069:{NFSU2_TR(0x67f069);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f06b:{NFSU2_TR(0x67f06b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f071:L67f071:{c.instructions+=8;NFSU2_TR(0x67f071);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f072:{NFSU2_TR(0x67f072);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f075:{NFSU2_TR(0x67f075);
__builtin_memmove((R+4),(R+12),4);
}
B67f077:{NFSU2_TR(0x67f077);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f07a:{NFSU2_TR(0x67f07a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f07d:{NFSU2_TR(0x67f07d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f080:{NFSU2_TR(0x67f080);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f083:{NFSU2_TR(0x67f083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f088ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f088:L67f088:{c.instructions+=3;NFSU2_TR(0x67f088);
__builtin_memmove((R+24),(R+0),4);
}
B67f08a:{NFSU2_TR(0x67f08a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f08c:{NFSU2_TR(0x67f08c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f092:L67f092:{c.instructions+=10;NFSU2_TR(0x67f092);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f095:{NFSU2_TR(0x67f095);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f096:{NFSU2_TR(0x67f096);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f097:{NFSU2_TR(0x67f097);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f09a:{NFSU2_TR(0x67f09a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67f09f:{NFSU2_TR(0x67f09f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f0a2:{NFSU2_TR(0x67f0a2);
__builtin_memmove((R+4),(R+12),4);
}
B67f0a4:{NFSU2_TR(0x67f0a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f0a5:{NFSU2_TR(0x67f0a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f0a8:{NFSU2_TR(0x67f0a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f0adull));
TAIL_STATIC(0x6758ceu,675);
}
B67f0ad:L67f0ad:{c.instructions+=3;NFSU2_TR(0x67f0ad);
__builtin_memmove((R+24),(R+0),4);
}
B67f0af:{NFSU2_TR(0x67f0af);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f0b1:{NFSU2_TR(0x67f0b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f0b7:L67f0b7:{c.instructions+=4;NFSU2_TR(0x67f0b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f0b8:{NFSU2_TR(0x67f0b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f0bb:{NFSU2_TR(0x67f0bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f0be:{NFSU2_TR(0x67f0be);
TAIL_STATIC(0x67b599u,67b);
}
B67f0c3:L67f0c3:{c.instructions+=3;NFSU2_TR(0x67f0c3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67f0c5:{NFSU2_TR(0x67f0c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f0c8:{NFSU2_TR(0x67f0c8);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67f0ce:L67f0ce:{c.instructions+=2;NFSU2_TR(0x67f0ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f0d1:{NFSU2_TR(0x67f0d1);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67f0d7:L67f0d7:{c.instructions+=9;NFSU2_TR(0x67f0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67f0da:{NFSU2_TR(0x67f0da);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67f0e0:{NFSU2_TR(0x67f0e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f0e1:{NFSU2_TR(0x67f0e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f0e2:{NFSU2_TR(0x67f0e2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67f0e5:{NFSU2_TR(0x67f0e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f0e6:{NFSU2_TR(0x67f0e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f0e7:{NFSU2_TR(0x67f0e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f0ea:{NFSU2_TR(0x67f0ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f0efull));
TAIL_STATIC(0x699c39u,699);
}
B67f0ef:L67f0ef:{c.instructions+=6;NFSU2_TR(0x67f0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67f0f2:{NFSU2_TR(0x67f0f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B67f0f5:{NFSU2_TR(0x67f0f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f0f6:{NFSU2_TR(0x67f0f6);
__builtin_memmove((R+4),(R+12),4);
}
B67f0f8:{NFSU2_TR(0x67f0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f0fb:{NFSU2_TR(0x67f0fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f100ull));
TAIL_STATIC(0x673a0fu,673);
}
B67f100:L67f100:{c.instructions+=2;NFSU2_TR(0x67f100);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67f102:{NFSU2_TR(0x67f102);
if(r1(R+518)){{goto L67fc7c;}}
}
B67f108:L67f108:{c.instructions+=1;NFSU2_TR(0x67f108);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67f10a:L67f10a:{c.instructions+=5;NFSU2_TR(0x67f10a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67f10e:{NFSU2_TR(0x67f10e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67f10f:{NFSU2_TR(0x67f10f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B67f111:{NFSU2_TR(0x67f111);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B67f114:{NFSU2_TR(0x67f114);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67f10au);}goto L67f10a;}}
}
B67f116:L67f116:{c.instructions+=2;NFSU2_TR(0x67f116);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f119:{NFSU2_TR(0x67f119);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67f128;}}
}
B67f11b:L67f11b:{c.instructions+=3;NFSU2_TR(0x67f11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67f11e:{NFSU2_TR(0x67f11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f121:{NFSU2_TR(0x67f121);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67f124:L67f124:{c.instructions+=1;NFSU2_TR(0x67f124);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L67f126;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67f124u);}goto L67f124;}
}
B67f126:L67f126:{c.instructions+=1;NFSU2_TR(0x67f126);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67f128:L67f128:{c.instructions+=4;NFSU2_TR(0x67f128);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f12b:{NFSU2_TR(0x67f12b);
__builtin_memmove((R+4),(R+12),4);
}
B67f12d:{NFSU2_TR(0x67f12d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f130:{NFSU2_TR(0x67f130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f135ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f135:L67f135:{c.instructions+=3;NFSU2_TR(0x67f135);
__builtin_memmove((R+24),(R+0),4);
}
B67f137:{NFSU2_TR(0x67f137);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f139:{NFSU2_TR(0x67f139);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f13f:L67f13f:{c.instructions+=4;NFSU2_TR(0x67f13f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f142:{NFSU2_TR(0x67f142);
__builtin_memmove((R+4),(R+12),4);
}
B67f144:{NFSU2_TR(0x67f144);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f147:{NFSU2_TR(0x67f147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f14cull));
TAIL_STATIC(0x673b2cu,673);
}
B67f14c:L67f14c:{c.instructions+=3;NFSU2_TR(0x67f14c);
__builtin_memmove((R+24),(R+0),4);
}
B67f14e:{NFSU2_TR(0x67f14e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f150:{NFSU2_TR(0x67f150);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f156:L67f156:{c.instructions+=4;NFSU2_TR(0x67f156);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f159:{NFSU2_TR(0x67f159);
__builtin_memmove((R+4),(R+12),4);
}
B67f15b:{NFSU2_TR(0x67f15b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f15e:{NFSU2_TR(0x67f15e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f163ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f163:L67f163:{c.instructions+=3;NFSU2_TR(0x67f163);
__builtin_memmove((R+24),(R+0),4);
}
B67f165:{NFSU2_TR(0x67f165);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f167:{NFSU2_TR(0x67f167);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f16d:L67f16d:{c.instructions+=4;NFSU2_TR(0x67f16d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f170:{NFSU2_TR(0x67f170);
__builtin_memmove((R+4),(R+12),4);
}
B67f172:{NFSU2_TR(0x67f172);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f175:{NFSU2_TR(0x67f175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f17aull));
TAIL_STATIC(0x673b2cu,673);
}
B67f17a:L67f17a:{c.instructions+=3;NFSU2_TR(0x67f17a);
__builtin_memmove((R+24),(R+0),4);
}
B67f17c:{NFSU2_TR(0x67f17c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f17e:{NFSU2_TR(0x67f17e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f184:L67f184:{c.instructions+=13;NFSU2_TR(0x67f184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f187:{NFSU2_TR(0x67f187);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f188:{NFSU2_TR(0x67f188);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f18b:{NFSU2_TR(0x67f18b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67f190:{NFSU2_TR(0x67f190);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f193:{NFSU2_TR(0x67f193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f196:{NFSU2_TR(0x67f196);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f199:{NFSU2_TR(0x67f199);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67f19e:{NFSU2_TR(0x67f19e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f19f:{NFSU2_TR(0x67f19f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f1a2:{NFSU2_TR(0x67f1a2);
__builtin_memmove((R+4),(R+12),4);
}
B67f1a4:{NFSU2_TR(0x67f1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f1a7:{NFSU2_TR(0x67f1a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f1acull));
TAIL_STATIC(0x6758ceu,675);
}
B67f1ac:L67f1ac:{c.instructions+=3;NFSU2_TR(0x67f1ac);
__builtin_memmove((R+24),(R+0),4);
}
B67f1ae:{NFSU2_TR(0x67f1ae);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f1b0:{NFSU2_TR(0x67f1b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f1b6:L67f1b6:{c.instructions+=10;NFSU2_TR(0x67f1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f1b9:{NFSU2_TR(0x67f1b9);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f1bb:{NFSU2_TR(0x67f1bb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f1bc:{NFSU2_TR(0x67f1bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f1bf:{NFSU2_TR(0x67f1bf);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10400000ull))));
}
B67f1c4:{NFSU2_TR(0x67f1c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f1c7:{NFSU2_TR(0x67f1c7);
__builtin_memmove((R+4),(R+12),4);
}
B67f1c9:{NFSU2_TR(0x67f1c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f1ca:{NFSU2_TR(0x67f1ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f1cd:{NFSU2_TR(0x67f1cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f1d2ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f1d2:L67f1d2:{c.instructions+=3;NFSU2_TR(0x67f1d2);
__builtin_memmove((R+24),(R+0),4);
}
B67f1d4:{NFSU2_TR(0x67f1d4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f1d6:{NFSU2_TR(0x67f1d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f1dc:L67f1dc:{c.instructions+=10;NFSU2_TR(0x67f1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f1df:{NFSU2_TR(0x67f1df);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f1e1:{NFSU2_TR(0x67f1e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f1e2:{NFSU2_TR(0x67f1e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f1e5:{NFSU2_TR(0x67f1e5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67f1ea:{NFSU2_TR(0x67f1ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f1ed:{NFSU2_TR(0x67f1ed);
__builtin_memmove((R+4),(R+12),4);
}
B67f1ef:{NFSU2_TR(0x67f1ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f1f0:{NFSU2_TR(0x67f1f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f1f3:{NFSU2_TR(0x67f1f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f1f8ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f1f8:L67f1f8:{c.instructions+=3;NFSU2_TR(0x67f1f8);
__builtin_memmove((R+24),(R+0),4);
}
B67f1fa:{NFSU2_TR(0x67f1fa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f1fc:{NFSU2_TR(0x67f1fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f202:L67f202:{c.instructions+=4;NFSU2_TR(0x67f202);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f204:{NFSU2_TR(0x67f204);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f207:{NFSU2_TR(0x67f207);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f20a:{NFSU2_TR(0x67f20a);
TAIL_STATIC(0x67c908u,67c);
}
B67f20f:L67f20f:{c.instructions+=3;NFSU2_TR(0x67f20f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67f211:{NFSU2_TR(0x67f211);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f214:{NFSU2_TR(0x67f214);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67f21a:L67f21a:{c.instructions+=2;NFSU2_TR(0x67f21a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f21d:{NFSU2_TR(0x67f21d);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67f223:L67f223:{c.instructions+=5;NFSU2_TR(0x67f223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f226:{NFSU2_TR(0x67f226);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f227:{NFSU2_TR(0x67f227);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f22a:{NFSU2_TR(0x67f22a);
__builtin_memmove((R+4),(R+12),4);
}
B67f22c:{NFSU2_TR(0x67f22c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f231ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f231:L67f231:{c.instructions+=3;NFSU2_TR(0x67f231);
__builtin_memmove((R+24),(R+0),4);
}
B67f233:{NFSU2_TR(0x67f233);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f235:{NFSU2_TR(0x67f235);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f23b:L67f23b:{c.instructions+=6;NFSU2_TR(0x67f23b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f23d:{NFSU2_TR(0x67f23d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f23e:{NFSU2_TR(0x67f23e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f241:{NFSU2_TR(0x67f241);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B67f247:{NFSU2_TR(0x67f247);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x10700000ull))));
}
B67f24d:{NFSU2_TR(0x67f24d);
{goto L67fb35;}
}
B67f252:L67f252:{c.instructions+=3;NFSU2_TR(0x67f252);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67f254:{NFSU2_TR(0x67f254);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f257:{NFSU2_TR(0x67f257);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67f25d:L67f25d:{c.instructions+=2;NFSU2_TR(0x67f25d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f260:{NFSU2_TR(0x67f260);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67f266:L67f266:{c.instructions+=5;NFSU2_TR(0x67f266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67f269:{NFSU2_TR(0x67f269);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67f26c:{NFSU2_TR(0x67f26c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f26d:{NFSU2_TR(0x67f26d);
__builtin_memmove((R+4),(R+12),4);
}
B67f26f:{NFSU2_TR(0x67f26f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f274ull));
TAIL_STATIC(0x673a0fu,673);
}
B67f274:L67f274:{c.instructions+=2;NFSU2_TR(0x67f274);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67f276:{NFSU2_TR(0x67f276);
if(r1(R+518)){{goto L67fc7c;}}
}
B67f27c:L67f27c:{c.instructions+=3;NFSU2_TR(0x67f27c);
__builtin_memmove((R+8),(R+24),4);
}
B67f27e:{NFSU2_TR(0x67f27e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67f280:{NFSU2_TR(0x67f280);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67f283:L67f283:{c.instructions+=5;NFSU2_TR(0x67f283);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67f287:{NFSU2_TR(0x67f287);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67f288:{NFSU2_TR(0x67f288);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67f28a:{NFSU2_TR(0x67f28a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B67f28d:{NFSU2_TR(0x67f28d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67f283u);}goto L67f283;}}
}
B67f28f:L67f28f:{c.instructions+=3;NFSU2_TR(0x67f28f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67f291:{NFSU2_TR(0x67f291);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f294:{NFSU2_TR(0x67f294);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67f2ac;}}
}
B67f296:L67f296:{c.instructions+=2;NFSU2_TR(0x67f296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67f299:{NFSU2_TR(0x67f299);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B67f29b:L67f29b:{c.instructions+=7;NFSU2_TR(0x67f29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f29e:{NFSU2_TR(0x67f29e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67f2a1:{NFSU2_TR(0x67f2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f2a4:{NFSU2_TR(0x67f2a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67f2a6:{NFSU2_TR(0x67f2a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B67f2a9:{NFSU2_TR(0x67f2a9);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B67f2aa:{NFSU2_TR(0x67f2aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67f29bu);}goto L67f29b;}}
}
B67f2ac:L67f2ac:{c.instructions+=4;NFSU2_TR(0x67f2ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f2af:{NFSU2_TR(0x67f2af);
__builtin_memmove((R+4),(R+12),4);
}
B67f2b1:{NFSU2_TR(0x67f2b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f2b4:{NFSU2_TR(0x67f2b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f2b9ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f2b9:L67f2b9:{c.instructions+=3;NFSU2_TR(0x67f2b9);
__builtin_memmove((R+24),(R+0),4);
}
B67f2bb:{NFSU2_TR(0x67f2bb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f2bd:{NFSU2_TR(0x67f2bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f2c3:L67f2c3:{c.instructions+=4;NFSU2_TR(0x67f2c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f2c6:{NFSU2_TR(0x67f2c6);
__builtin_memmove((R+4),(R+12),4);
}
B67f2c8:{NFSU2_TR(0x67f2c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f2cb:{NFSU2_TR(0x67f2cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f2d0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f2d0:L67f2d0:{c.instructions+=3;NFSU2_TR(0x67f2d0);
__builtin_memmove((R+24),(R+0),4);
}
B67f2d2:{NFSU2_TR(0x67f2d2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f2d4:{NFSU2_TR(0x67f2d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f2da:L67f2da:{c.instructions+=12;NFSU2_TR(0x67f2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f2dd:{NFSU2_TR(0x67f2dd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f2df:{NFSU2_TR(0x67f2df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f2e2:{NFSU2_TR(0x67f2e2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67f2e7:{NFSU2_TR(0x67f2e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f2ea:{NFSU2_TR(0x67f2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f2ed:{NFSU2_TR(0x67f2ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f2f0:{NFSU2_TR(0x67f2f0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20100000ull))));
}
B67f2f5:{NFSU2_TR(0x67f2f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f2f6:{NFSU2_TR(0x67f2f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f2f9:{NFSU2_TR(0x67f2f9);
__builtin_memmove((R+4),(R+12),4);
}
B67f2fb:{NFSU2_TR(0x67f2fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f300ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f300:L67f300:{c.instructions+=3;NFSU2_TR(0x67f300);
__builtin_memmove((R+24),(R+0),4);
}
B67f302:{NFSU2_TR(0x67f302);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f304:{NFSU2_TR(0x67f304);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f30a:L67f30a:{c.instructions+=6;NFSU2_TR(0x67f30a);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f30c:{NFSU2_TR(0x67f30c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f30f:{NFSU2_TR(0x67f30f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f312:{NFSU2_TR(0x67f312);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f315:{NFSU2_TR(0x67f315);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20000000ull))));
}
B67f31a:{NFSU2_TR(0x67f31a);
TAIL_STATIC(0x67af00u,67a);
}
B67f31f:L67f31f:{c.instructions+=3;NFSU2_TR(0x67f31f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67f321:{NFSU2_TR(0x67f321);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f324:{NFSU2_TR(0x67f324);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67f32a:L67f32a:{c.instructions+=2;NFSU2_TR(0x67f32a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f32d:{NFSU2_TR(0x67f32d);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67f333:L67f333:{c.instructions+=5;NFSU2_TR(0x67f333);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67f336:{NFSU2_TR(0x67f336);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B67f339:{NFSU2_TR(0x67f339);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f33a:{NFSU2_TR(0x67f33a);
__builtin_memmove((R+4),(R+12),4);
}
B67f33c:{NFSU2_TR(0x67f33c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f341ull));
TAIL_STATIC(0x673a0fu,673);
}
B67f341:L67f341:{c.instructions+=2;NFSU2_TR(0x67f341);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67f343:{NFSU2_TR(0x67f343);
if(r1(R+518)){{goto L67fc7c;}}
}
B67f349:L67f349:{c.instructions+=1;NFSU2_TR(0x67f349);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67f34b:L67f34b:{c.instructions+=5;NFSU2_TR(0x67f34b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67f34f:{NFSU2_TR(0x67f34f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67f350:{NFSU2_TR(0x67f350);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B67f352:{NFSU2_TR(0x67f352);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B67f355:{NFSU2_TR(0x67f355);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67f34bu);}goto L67f34b;}}
}
B67f357:L67f357:{c.instructions+=4;NFSU2_TR(0x67f357);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f35a:{NFSU2_TR(0x67f35a);
__builtin_memmove((R+4),(R+12),4);
}
B67f35c:{NFSU2_TR(0x67f35c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f35f:{NFSU2_TR(0x67f35f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f364ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f364:L67f364:{c.instructions+=3;NFSU2_TR(0x67f364);
__builtin_memmove((R+24),(R+0),4);
}
B67f366:{NFSU2_TR(0x67f366);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f368:{NFSU2_TR(0x67f368);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f36e:L67f36e:{c.instructions+=4;NFSU2_TR(0x67f36e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f371:{NFSU2_TR(0x67f371);
__builtin_memmove((R+4),(R+12),4);
}
B67f373:{NFSU2_TR(0x67f373);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f376:{NFSU2_TR(0x67f376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f37bull));
TAIL_STATIC(0x673b2cu,673);
}
B67f37b:L67f37b:{c.instructions+=3;NFSU2_TR(0x67f37b);
__builtin_memmove((R+24),(R+0),4);
}
B67f37d:{NFSU2_TR(0x67f37d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f37f:{NFSU2_TR(0x67f37f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f385:L67f385:{c.instructions+=4;NFSU2_TR(0x67f385);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f388:{NFSU2_TR(0x67f388);
__builtin_memmove((R+4),(R+12),4);
}
B67f38a:{NFSU2_TR(0x67f38a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f38d:{NFSU2_TR(0x67f38d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f392ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f392:L67f392:{c.instructions+=3;NFSU2_TR(0x67f392);
__builtin_memmove((R+24),(R+0),4);
}
B67f394:{NFSU2_TR(0x67f394);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f396:{NFSU2_TR(0x67f396);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f39c:L67f39c:{c.instructions+=4;NFSU2_TR(0x67f39c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f39f:{NFSU2_TR(0x67f39f);
__builtin_memmove((R+4),(R+12),4);
}
B67f3a1:{NFSU2_TR(0x67f3a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f3a4:{NFSU2_TR(0x67f3a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f3a9ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f3a9:L67f3a9:{c.instructions+=3;NFSU2_TR(0x67f3a9);
__builtin_memmove((R+24),(R+0),4);
}
B67f3ab:{NFSU2_TR(0x67f3ab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f3ad:{NFSU2_TR(0x67f3ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f3b3:L67f3b3:{c.instructions+=4;NFSU2_TR(0x67f3b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f3b6:{NFSU2_TR(0x67f3b6);
__builtin_memmove((R+4),(R+12),4);
}
B67f3b8:{NFSU2_TR(0x67f3b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f3bb:{NFSU2_TR(0x67f3bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f3c0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f3c0:L67f3c0:{c.instructions+=3;NFSU2_TR(0x67f3c0);
__builtin_memmove((R+24),(R+0),4);
}
B67f3c2:{NFSU2_TR(0x67f3c2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f3c4:{NFSU2_TR(0x67f3c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f3ca:L67f3ca:{c.instructions+=13;NFSU2_TR(0x67f3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f3cd:{NFSU2_TR(0x67f3cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f3ce:{NFSU2_TR(0x67f3ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f3cf:{NFSU2_TR(0x67f3cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f3d2:{NFSU2_TR(0x67f3d2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67f3d7:{NFSU2_TR(0x67f3d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f3da:{NFSU2_TR(0x67f3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f3dd:{NFSU2_TR(0x67f3dd);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67f3e2:{NFSU2_TR(0x67f3e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f3e3:{NFSU2_TR(0x67f3e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f3e6:{NFSU2_TR(0x67f3e6);
__builtin_memmove((R+4),(R+12),4);
}
B67f3e8:{NFSU2_TR(0x67f3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f3eb:{NFSU2_TR(0x67f3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f3f0ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f3f0:L67f3f0:{c.instructions+=3;NFSU2_TR(0x67f3f0);
__builtin_memmove((R+24),(R+0),4);
}
B67f3f2:{NFSU2_TR(0x67f3f2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f3f4:{NFSU2_TR(0x67f3f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f3fa:L67f3fa:{c.instructions+=11;NFSU2_TR(0x67f3fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f3fd:{NFSU2_TR(0x67f3fd);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f3ff:{NFSU2_TR(0x67f3ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f402:{NFSU2_TR(0x67f402);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20200000ull))));
}
B67f407:{NFSU2_TR(0x67f407);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f40a:{NFSU2_TR(0x67f40a);
__builtin_memmove((R+4),(R+12),4);
}
B67f40c:{NFSU2_TR(0x67f40c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f40f:{NFSU2_TR(0x67f40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f412:{NFSU2_TR(0x67f412);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f413:{NFSU2_TR(0x67f413);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f416:{NFSU2_TR(0x67f416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f41bull));
TAIL_STATIC(0x6758ceu,675);
}
B67f41b:L67f41b:{c.instructions+=3;NFSU2_TR(0x67f41b);
__builtin_memmove((R+24),(R+0),4);
}
B67f41d:{NFSU2_TR(0x67f41d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f41f:{NFSU2_TR(0x67f41f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f425:L67f425:{c.instructions+=8;NFSU2_TR(0x67f425);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f427:{NFSU2_TR(0x67f427);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f42a:{NFSU2_TR(0x67f42a);
__builtin_memmove((R+4),(R+12),4);
}
B67f42c:{NFSU2_TR(0x67f42c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f42f:{NFSU2_TR(0x67f42f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f432:{NFSU2_TR(0x67f432);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f435:{NFSU2_TR(0x67f435);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f438:{NFSU2_TR(0x67f438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f43dull));
TAIL_STATIC(0x6758ceu,675);
}
B67f43d:L67f43d:{c.instructions+=3;NFSU2_TR(0x67f43d);
__builtin_memmove((R+24),(R+0),4);
}
B67f43f:{NFSU2_TR(0x67f43f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f441:{NFSU2_TR(0x67f441);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f447:L67f447:{c.instructions+=8;NFSU2_TR(0x67f447);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f449:{NFSU2_TR(0x67f449);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f44a:{NFSU2_TR(0x67f44a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f44d:{NFSU2_TR(0x67f44d);
__builtin_memmove((R+4),(R+12),4);
}
B67f44f:{NFSU2_TR(0x67f44f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f452:{NFSU2_TR(0x67f452);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f455:{NFSU2_TR(0x67f455);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f458:{NFSU2_TR(0x67f458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f45dull));
TAIL_STATIC(0x6758ceu,675);
}
B67f45d:L67f45d:{c.instructions+=3;NFSU2_TR(0x67f45d);
__builtin_memmove((R+24),(R+0),4);
}
B67f45f:{NFSU2_TR(0x67f45f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f461:{NFSU2_TR(0x67f461);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f467:L67f467:{c.instructions+=4;NFSU2_TR(0x67f467);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f469:{NFSU2_TR(0x67f469);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f46c:{NFSU2_TR(0x67f46c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f46f:{NFSU2_TR(0x67f46f);
TAIL_STATIC(0x67b599u,67b);
}
B67f474:L67f474:{c.instructions+=3;NFSU2_TR(0x67f474);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67f476:{NFSU2_TR(0x67f476);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f479:{NFSU2_TR(0x67f479);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67f47f:L67f47f:{c.instructions+=2;NFSU2_TR(0x67f47f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f482:{NFSU2_TR(0x67f482);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67f488:L67f488:{c.instructions+=4;NFSU2_TR(0x67f488);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f48b:{NFSU2_TR(0x67f48b);
__builtin_memmove((R+4),(R+12),4);
}
B67f48d:{NFSU2_TR(0x67f48d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f490:{NFSU2_TR(0x67f490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f495ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f495:L67f495:{c.instructions+=3;NFSU2_TR(0x67f495);
__builtin_memmove((R+24),(R+0),4);
}
B67f497:{NFSU2_TR(0x67f497);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f499:{NFSU2_TR(0x67f499);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f49f:L67f49f:{c.instructions+=4;NFSU2_TR(0x67f49f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f4a2:{NFSU2_TR(0x67f4a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f4a3:{NFSU2_TR(0x67f4a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f4a6:{NFSU2_TR(0x67f4a6);
{goto L67f51e;}
}
B67f4a8:L67f4a8:{c.instructions+=3;NFSU2_TR(0x67f4a8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67f4aa:{NFSU2_TR(0x67f4aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f4ad:{NFSU2_TR(0x67f4ad);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67f4b3:L67f4b3:{c.instructions+=4;NFSU2_TR(0x67f4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67f4b9:{NFSU2_TR(0x67f4b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B67f4bc:{NFSU2_TR(0x67f4bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f4bd:{NFSU2_TR(0x67f4bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f4c2ull));
TAIL_STATIC(0x575620u,575);
}
B67f4c2:L67f4c2:{c.instructions+=4;NFSU2_TR(0x67f4c2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67f4c4:{NFSU2_TR(0x67f4c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67f4c5:{NFSU2_TR(0x67f4c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f4c8:{NFSU2_TR(0x67f4c8);
if(r1(R+518)){{goto L67fc7c;}}
}
B67f4ce:L67f4ce:{c.instructions+=2;NFSU2_TR(0x67f4ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f4cf:{NFSU2_TR(0x67f4cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f4d4ull));
TAIL_STATIC(0x575620u,575);
}
B67f4d4:L67f4d4:{c.instructions+=5;NFSU2_TR(0x67f4d4);
__builtin_memmove((R+8),(R+0),4);
}
B67f4d6:{NFSU2_TR(0x67f4d6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67f4d8:{NFSU2_TR(0x67f4d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67f4d9:{NFSU2_TR(0x67f4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f4dc:{NFSU2_TR(0x67f4dc);
if(r1(R+518)){{goto L67fc7c;}}
}
B67f4e2:L67f4e2:{c.instructions+=4;NFSU2_TR(0x67f4e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f4e8:{NFSU2_TR(0x67f4e8);
__builtin_memmove((R+4),(R+12),4);
}
B67f4ea:{NFSU2_TR(0x67f4ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f4ed:{NFSU2_TR(0x67f4ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f4f2ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f4f2:L67f4f2:{c.instructions+=3;NFSU2_TR(0x67f4f2);
__builtin_memmove((R+24),(R+0),4);
}
B67f4f4:{NFSU2_TR(0x67f4f4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f4f6:{NFSU2_TR(0x67f4f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f4fc:L67f4fc:{c.instructions+=4;NFSU2_TR(0x67f4fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f502:{NFSU2_TR(0x67f502);
__builtin_memmove((R+4),(R+12),4);
}
B67f504:{NFSU2_TR(0x67f504);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f505:{NFSU2_TR(0x67f505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f50aull));
TAIL_STATIC(0x673b2cu,673);
}
B67f50a:L67f50a:{c.instructions+=3;NFSU2_TR(0x67f50a);
__builtin_memmove((R+24),(R+0),4);
}
B67f50c:{NFSU2_TR(0x67f50c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f50e:{NFSU2_TR(0x67f50e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f514:L67f514:{c.instructions+=3;NFSU2_TR(0x67f514);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f51a:{NFSU2_TR(0x67f51a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f51b:{NFSU2_TR(0x67f51b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f51e:L67f51e:{c.instructions+=4;NFSU2_TR(0x67f51e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f521:{NFSU2_TR(0x67f521);
__builtin_memmove((R+4),(R+12),4);
}
B67f523:{NFSU2_TR(0x67f523);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f526:{NFSU2_TR(0x67f526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f52bull));
TAIL_STATIC(0x67639au,676);
}
B67f52b:L67f52b:{c.instructions+=1;NFSU2_TR(0x67f52b);
TAIL_STATIC(0x67af0eu,67a);
}
B67f530:L67f530:{c.instructions+=3;NFSU2_TR(0x67f530);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67f532:{NFSU2_TR(0x67f532);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f535:{NFSU2_TR(0x67f535);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67f53b:L67f53b:{c.instructions+=2;NFSU2_TR(0x67f53b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f53e:{NFSU2_TR(0x67f53e);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67f544:L67f544:{c.instructions+=13;NFSU2_TR(0x67f544);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67f54a:{NFSU2_TR(0x67f54a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67f54d:{NFSU2_TR(0x67f54d);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B67f54f:{NFSU2_TR(0x67f54f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f550:{NFSU2_TR(0x67f550);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B67f552:{NFSU2_TR(0x67f552);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f553:{NFSU2_TR(0x67f553);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B67f555:{NFSU2_TR(0x67f555);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x38"::"a"(ea_):"memory");}
}
B67f55b:{NFSU2_TR(0x67f55b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67f55e:{NFSU2_TR(0x67f55e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f55f:{NFSU2_TR(0x67f55f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f560:{NFSU2_TR(0x67f560);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f563:{NFSU2_TR(0x67f563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f568ull));
TAIL_STATIC(0x699c39u,699);
}
B67f568:L67f568:{c.instructions+=10;NFSU2_TR(0x67f568);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67f56e:{NFSU2_TR(0x67f56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67f571:{NFSU2_TR(0x67f571);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f572:{NFSU2_TR(0x67f572);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f573:{NFSU2_TR(0x67f573);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67f576:{NFSU2_TR(0x67f576);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f577:{NFSU2_TR(0x67f577);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f578:{NFSU2_TR(0x67f578);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f57b:{NFSU2_TR(0x67f57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f57e:{NFSU2_TR(0x67f57e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f583ull));
TAIL_STATIC(0x699c39u,699);
}
B67f583:L67f583:{c.instructions+=7;NFSU2_TR(0x67f583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67f586:{NFSU2_TR(0x67f586);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f589:{NFSU2_TR(0x67f589);
__builtin_memmove((R+0),(R+24),4);
}
B67f58b:{NFSU2_TR(0x67f58b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67f58e:{NFSU2_TR(0x67f58e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f58f:{NFSU2_TR(0x67f58f);
__builtin_memmove((R+4),(R+12),4);
}
B67f591:{NFSU2_TR(0x67f591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f596ull));
TAIL_STATIC(0x673a0fu,673);
}
B67f596:L67f596:{c.instructions+=2;NFSU2_TR(0x67f596);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67f598:{NFSU2_TR(0x67f598);
if(r1(R+518)){{goto L67fc7c;}}
}
B67f59e:L67f59e:{c.instructions+=3;NFSU2_TR(0x67f59e);
__builtin_memmove((R+8),(R+24),4);
}
B67f5a0:{NFSU2_TR(0x67f5a0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67f5a2:{NFSU2_TR(0x67f5a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67f5a5:L67f5a5:{c.instructions+=5;NFSU2_TR(0x67f5a5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67f5a9:{NFSU2_TR(0x67f5a9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67f5aa:{NFSU2_TR(0x67f5aa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67f5ac:{NFSU2_TR(0x67f5ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B67f5af:{NFSU2_TR(0x67f5af);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67f5a5u);}goto L67f5a5;}}
}
B67f5b1:L67f5b1:{c.instructions+=2;NFSU2_TR(0x67f5b1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67f5b3:{NFSU2_TR(0x67f5b3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67f5ce;}}
}
B67f5b5:L67f5b5:{c.instructions+=3;NFSU2_TR(0x67f5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f5b8:{NFSU2_TR(0x67f5b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67f5bb:{NFSU2_TR(0x67f5bb);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B67f5bd:L67f5bd:{c.instructions+=7;NFSU2_TR(0x67f5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f5c0:{NFSU2_TR(0x67f5c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67f5c3:{NFSU2_TR(0x67f5c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f5c6:{NFSU2_TR(0x67f5c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67f5c8:{NFSU2_TR(0x67f5c8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B67f5cb:{NFSU2_TR(0x67f5cb);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B67f5cc:{NFSU2_TR(0x67f5cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67f5bdu);}goto L67f5bd;}}
}
B67f5ce:L67f5ce:{c.instructions+=4;NFSU2_TR(0x67f5ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f5d1:{NFSU2_TR(0x67f5d1);
__builtin_memmove((R+4),(R+12),4);
}
B67f5d3:{NFSU2_TR(0x67f5d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f5d6:{NFSU2_TR(0x67f5d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f5dbull));
TAIL_STATIC(0x673b2cu,673);
}
B67f5db:L67f5db:{c.instructions+=3;NFSU2_TR(0x67f5db);
__builtin_memmove((R+24),(R+0),4);
}
B67f5dd:{NFSU2_TR(0x67f5dd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f5df:{NFSU2_TR(0x67f5df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f5e5:L67f5e5:{c.instructions+=4;NFSU2_TR(0x67f5e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f5e8:{NFSU2_TR(0x67f5e8);
__builtin_memmove((R+4),(R+12),4);
}
B67f5ea:{NFSU2_TR(0x67f5ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f5ed:{NFSU2_TR(0x67f5ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f5f2ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f5f2:L67f5f2:{c.instructions+=3;NFSU2_TR(0x67f5f2);
__builtin_memmove((R+24),(R+0),4);
}
B67f5f4:{NFSU2_TR(0x67f5f4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f5f6:{NFSU2_TR(0x67f5f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f5fc:L67f5fc:{c.instructions+=4;NFSU2_TR(0x67f5fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f5ff:{NFSU2_TR(0x67f5ff);
__builtin_memmove((R+4),(R+12),4);
}
B67f601:{NFSU2_TR(0x67f601);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f604:{NFSU2_TR(0x67f604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f609ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f609:L67f609:{c.instructions+=3;NFSU2_TR(0x67f609);
__builtin_memmove((R+24),(R+0),4);
}
B67f60b:{NFSU2_TR(0x67f60b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f60d:{NFSU2_TR(0x67f60d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f613:L67f613:{c.instructions+=4;NFSU2_TR(0x67f613);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f616:{NFSU2_TR(0x67f616);
__builtin_memmove((R+4),(R+12),4);
}
B67f618:{NFSU2_TR(0x67f618);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f61b:{NFSU2_TR(0x67f61b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f620ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f620:L67f620:{c.instructions+=3;NFSU2_TR(0x67f620);
__builtin_memmove((R+24),(R+0),4);
}
B67f622:{NFSU2_TR(0x67f622);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f624:{NFSU2_TR(0x67f624);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f62a:L67f62a:{c.instructions+=4;NFSU2_TR(0x67f62a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f62d:{NFSU2_TR(0x67f62d);
__builtin_memmove((R+4),(R+12),4);
}
B67f62f:{NFSU2_TR(0x67f62f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f632:{NFSU2_TR(0x67f632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f637ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f637:L67f637:{c.instructions+=3;NFSU2_TR(0x67f637);
__builtin_memmove((R+24),(R+0),4);
}
B67f639:{NFSU2_TR(0x67f639);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f63b:{NFSU2_TR(0x67f63b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f641:L67f641:{c.instructions+=4;NFSU2_TR(0x67f641);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f644:{NFSU2_TR(0x67f644);
__builtin_memmove((R+4),(R+12),4);
}
B67f646:{NFSU2_TR(0x67f646);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f649:{NFSU2_TR(0x67f649);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f64eull));
TAIL_STATIC(0x673b2cu,673);
}
B67f64e:L67f64e:{c.instructions+=3;NFSU2_TR(0x67f64e);
__builtin_memmove((R+24),(R+0),4);
}
B67f650:{NFSU2_TR(0x67f650);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f652:{NFSU2_TR(0x67f652);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f658:L67f658:{c.instructions+=4;NFSU2_TR(0x67f658);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f65b:{NFSU2_TR(0x67f65b);
__builtin_memmove((R+4),(R+12),4);
}
B67f65d:{NFSU2_TR(0x67f65d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f660:{NFSU2_TR(0x67f660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f665ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f665:L67f665:{c.instructions+=3;NFSU2_TR(0x67f665);
__builtin_memmove((R+24),(R+0),4);
}
B67f667:{NFSU2_TR(0x67f667);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f669:{NFSU2_TR(0x67f669);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f66f:L67f66f:{c.instructions+=13;NFSU2_TR(0x67f66f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f672:{NFSU2_TR(0x67f672);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f673:{NFSU2_TR(0x67f673);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f676:{NFSU2_TR(0x67f676);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67f67b:{NFSU2_TR(0x67f67b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f67e:{NFSU2_TR(0x67f67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f681:{NFSU2_TR(0x67f681);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f684:{NFSU2_TR(0x67f684);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67f689:{NFSU2_TR(0x67f689);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f68a:{NFSU2_TR(0x67f68a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f68d:{NFSU2_TR(0x67f68d);
__builtin_memmove((R+4),(R+12),4);
}
B67f68f:{NFSU2_TR(0x67f68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f692:{NFSU2_TR(0x67f692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f697ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f697:L67f697:{c.instructions+=3;NFSU2_TR(0x67f697);
__builtin_memmove((R+24),(R+0),4);
}
B67f699:{NFSU2_TR(0x67f699);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f69b:{NFSU2_TR(0x67f69b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f6a1:L67f6a1:{c.instructions+=11;NFSU2_TR(0x67f6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f6a4:{NFSU2_TR(0x67f6a4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f6a6:{NFSU2_TR(0x67f6a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f6a7:{NFSU2_TR(0x67f6a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f6aa:{NFSU2_TR(0x67f6aa);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10500000ull))));
}
B67f6af:{NFSU2_TR(0x67f6af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f6b2:{NFSU2_TR(0x67f6b2);
__builtin_memmove((R+4),(R+12),4);
}
B67f6b4:{NFSU2_TR(0x67f6b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f6b5:{NFSU2_TR(0x67f6b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f6b8:{NFSU2_TR(0x67f6b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f6bb:{NFSU2_TR(0x67f6bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f6c0ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f6c0:L67f6c0:{c.instructions+=3;NFSU2_TR(0x67f6c0);
__builtin_memmove((R+24),(R+0),4);
}
B67f6c2:{NFSU2_TR(0x67f6c2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f6c4:{NFSU2_TR(0x67f6c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f6ca:L67f6ca:{c.instructions+=11;NFSU2_TR(0x67f6ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f6cd:{NFSU2_TR(0x67f6cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f6ce:{NFSU2_TR(0x67f6ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f6cf:{NFSU2_TR(0x67f6cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f6d2:{NFSU2_TR(0x67f6d2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67f6d7:{NFSU2_TR(0x67f6d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f6da:{NFSU2_TR(0x67f6da);
__builtin_memmove((R+4),(R+12),4);
}
B67f6dc:{NFSU2_TR(0x67f6dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f6dd:{NFSU2_TR(0x67f6dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f6e0:{NFSU2_TR(0x67f6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f6e3:{NFSU2_TR(0x67f6e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f6e8ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f6e8:L67f6e8:{c.instructions+=3;NFSU2_TR(0x67f6e8);
__builtin_memmove((R+24),(R+0),4);
}
B67f6ea:{NFSU2_TR(0x67f6ea);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f6ec:{NFSU2_TR(0x67f6ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f6f2:L67f6f2:{c.instructions+=8;NFSU2_TR(0x67f6f2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f6f4:{NFSU2_TR(0x67f6f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f6f5:{NFSU2_TR(0x67f6f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f6f8:{NFSU2_TR(0x67f6f8);
__builtin_memmove((R+4),(R+12),4);
}
B67f6fa:{NFSU2_TR(0x67f6fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f6fd:{NFSU2_TR(0x67f6fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f700:{NFSU2_TR(0x67f700);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f703:{NFSU2_TR(0x67f703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f708ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f708:L67f708:{c.instructions+=3;NFSU2_TR(0x67f708);
__builtin_memmove((R+24),(R+0),4);
}
B67f70a:{NFSU2_TR(0x67f70a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f70c:{NFSU2_TR(0x67f70c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f712:L67f712:{c.instructions+=8;NFSU2_TR(0x67f712);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f714:{NFSU2_TR(0x67f714);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f715:{NFSU2_TR(0x67f715);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f718:{NFSU2_TR(0x67f718);
__builtin_memmove((R+4),(R+12),4);
}
B67f71a:{NFSU2_TR(0x67f71a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f71d:{NFSU2_TR(0x67f71d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f720:{NFSU2_TR(0x67f720);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f723:{NFSU2_TR(0x67f723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f728ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f728:L67f728:{c.instructions+=3;NFSU2_TR(0x67f728);
__builtin_memmove((R+24),(R+0),4);
}
B67f72a:{NFSU2_TR(0x67f72a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f72c:{NFSU2_TR(0x67f72c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f732:L67f732:{c.instructions+=10;NFSU2_TR(0x67f732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f735:{NFSU2_TR(0x67f735);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f736:{NFSU2_TR(0x67f736);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f739:{NFSU2_TR(0x67f739);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67f73e:{NFSU2_TR(0x67f73e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f741:{NFSU2_TR(0x67f741);
__builtin_memmove((R+4),(R+12),4);
}
B67f743:{NFSU2_TR(0x67f743);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f746:{NFSU2_TR(0x67f746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f747:{NFSU2_TR(0x67f747);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f74a:{NFSU2_TR(0x67f74a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f74full));
TAIL_STATIC(0x6758ceu,675);
}
B67f74f:L67f74f:{c.instructions+=3;NFSU2_TR(0x67f74f);
__builtin_memmove((R+24),(R+0),4);
}
B67f751:{NFSU2_TR(0x67f751);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f753:{NFSU2_TR(0x67f753);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f759:L67f759:{c.instructions+=2;NFSU2_TR(0x67f759);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f75a:{NFSU2_TR(0x67f75a);
TAIL_STATIC(0x67b894u,67b);
}
B67f75f:L67f75f:{c.instructions+=3;NFSU2_TR(0x67f75f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67f761:{NFSU2_TR(0x67f761);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f764:{NFSU2_TR(0x67f764);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67f76a:L67f76a:{c.instructions+=2;NFSU2_TR(0x67f76a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f76d:{NFSU2_TR(0x67f76d);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67f773:L67f773:{c.instructions+=2;NFSU2_TR(0x67f773);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f776:{NFSU2_TR(0x67f776);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67f77c:L67f77c:{c.instructions+=2;NFSU2_TR(0x67f77c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f77f:{NFSU2_TR(0x67f77f);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67f785:L67f785:{c.instructions+=9;NFSU2_TR(0x67f785);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67f788:{NFSU2_TR(0x67f788);
{u32 ea_=u32(u32(8091952u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67f78e:{NFSU2_TR(0x67f78e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f78f:{NFSU2_TR(0x67f78f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f790:{NFSU2_TR(0x67f790);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67f793:{NFSU2_TR(0x67f793);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f794:{NFSU2_TR(0x67f794);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f795:{NFSU2_TR(0x67f795);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f798:{NFSU2_TR(0x67f798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f79dull));
TAIL_STATIC(0x699c39u,699);
}
B67f79d:L67f79d:{c.instructions+=10;NFSU2_TR(0x67f79d);
{u32 ea_=u32(u32(8077520u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67f7a3:{NFSU2_TR(0x67f7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67f7a6:{NFSU2_TR(0x67f7a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f7a7:{NFSU2_TR(0x67f7a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f7a8:{NFSU2_TR(0x67f7a8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67f7ab:{NFSU2_TR(0x67f7ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f7ac:{NFSU2_TR(0x67f7ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f7ad:{NFSU2_TR(0x67f7ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f7b0:{NFSU2_TR(0x67f7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f7b3:{NFSU2_TR(0x67f7b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f7b8ull));
TAIL_STATIC(0x699c39u,699);
}
B67f7b8:L67f7b8:{c.instructions+=7;NFSU2_TR(0x67f7b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67f7bb:{NFSU2_TR(0x67f7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f7be:{NFSU2_TR(0x67f7be);
__builtin_memmove((R+0),(R+24),4);
}
B67f7c0:{NFSU2_TR(0x67f7c0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xeull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B67f7c3:{NFSU2_TR(0x67f7c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f7c4:{NFSU2_TR(0x67f7c4);
__builtin_memmove((R+4),(R+12),4);
}
B67f7c6:{NFSU2_TR(0x67f7c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f7cbull));
TAIL_STATIC(0x673a0fu,673);
}
B67f7cb:L67f7cb:{c.instructions+=2;NFSU2_TR(0x67f7cb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67f7cd:{NFSU2_TR(0x67f7cd);
if(r1(R+518)){{goto L67fc7c;}}
}
B67f7d3:L67f7d3:{c.instructions+=3;NFSU2_TR(0x67f7d3);
__builtin_memmove((R+8),(R+24),4);
}
B67f7d5:{NFSU2_TR(0x67f7d5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67f7d7:{NFSU2_TR(0x67f7d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67f7da:L67f7da:{c.instructions+=5;NFSU2_TR(0x67f7da);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffefcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67f7e1:{NFSU2_TR(0x67f7e1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67f7e2:{NFSU2_TR(0x67f7e2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67f7e4:{NFSU2_TR(0x67f7e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xeull))));
}
B67f7e7:{NFSU2_TR(0x67f7e7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67f7dau);}goto L67f7da;}}
}
B67f7e9:L67f7e9:{c.instructions+=1;NFSU2_TR(0x67f7e9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B67f7eb:L67f7eb:{c.instructions+=4;NFSU2_TR(0x67f7eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f7ee:{NFSU2_TR(0x67f7ee);
__builtin_memmove((R+4),(R+12),4);
}
B67f7f0:{NFSU2_TR(0x67f7f0);
u8 U[20];
w4(U+0,u32(u32(u32(0xfffffefcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B67f7f7:{NFSU2_TR(0x67f7f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f7fcull));
TAIL_STATIC(0x673b2cu,673);
}
B67f7fc:L67f7fc:{c.instructions+=3;NFSU2_TR(0x67f7fc);
__builtin_memmove((R+24),(R+0),4);
}
B67f7fe:{NFSU2_TR(0x67f7fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f800:{NFSU2_TR(0x67f800);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f806:L67f806:{c.instructions+=3;NFSU2_TR(0x67f806);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B67f807:{NFSU2_TR(0x67f807);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0xaull))));
}
B67f80a:{NFSU2_TR(0x67f80a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67f7ebu);}goto L67f7eb;}}
}
B67f80c:L67f80c:{c.instructions+=3;NFSU2_TR(0x67f80c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67f80f:{NFSU2_TR(0x67f80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f815:{NFSU2_TR(0x67f815);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67f866;}}
}
B67f817:L67f817:{c.instructions+=10;NFSU2_TR(0x67f817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f81d:{NFSU2_TR(0x67f81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67f823:{NFSU2_TR(0x67f823);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B67f825:{NFSU2_TR(0x67f825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f828:{NFSU2_TR(0x67f828);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f82e:{NFSU2_TR(0x67f82e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B67f830:{NFSU2_TR(0x67f830);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B67f832:{NFSU2_TR(0x67f832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f838:{NFSU2_TR(0x67f838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f83b:{NFSU2_TR(0x67f83b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f83e:L67f83e:{c.instructions+=13;NFSU2_TR(0x67f83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f841:{NFSU2_TR(0x67f841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67f844:{NFSU2_TR(0x67f844);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67f847:{NFSU2_TR(0x67f847);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f84a:{NFSU2_TR(0x67f84a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67f84c:{NFSU2_TR(0x67f84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f84f:{NFSU2_TR(0x67f84f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67f852:{NFSU2_TR(0x67f852);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67f855:{NFSU2_TR(0x67f855);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67f85b:{NFSU2_TR(0x67f85b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67f85e:{NFSU2_TR(0x67f85e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B67f861:{NFSU2_TR(0x67f861);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67f864:{NFSU2_TR(0x67f864);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67f83eu);}goto L67f83e;}}
}
B67f866:L67f866:{c.instructions+=4;NFSU2_TR(0x67f866);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f869:{NFSU2_TR(0x67f869);
__builtin_memmove((R+4),(R+12),4);
}
B67f86b:{NFSU2_TR(0x67f86b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f86e:{NFSU2_TR(0x67f86e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f873ull));
TAIL_STATIC(0x673b2cu,673);
}
B67f873:L67f873:{c.instructions+=3;NFSU2_TR(0x67f873);
__builtin_memmove((R+24),(R+0),4);
}
B67f875:{NFSU2_TR(0x67f875);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f877:{NFSU2_TR(0x67f877);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f87d:L67f87d:{c.instructions+=12;NFSU2_TR(0x67f87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f880:{NFSU2_TR(0x67f880);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f881:{NFSU2_TR(0x67f881);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f882:{NFSU2_TR(0x67f882);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f885:{NFSU2_TR(0x67f885);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67f88a:{NFSU2_TR(0x67f88a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f890:{NFSU2_TR(0x67f890);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f893:{NFSU2_TR(0x67f893);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67f898:{NFSU2_TR(0x67f898);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f899:{NFSU2_TR(0x67f899);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f89c:{NFSU2_TR(0x67f89c);
__builtin_memmove((R+4),(R+12),4);
}
B67f89e:{NFSU2_TR(0x67f89e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f8a3ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f8a3:L67f8a3:{c.instructions+=3;NFSU2_TR(0x67f8a3);
__builtin_memmove((R+24),(R+0),4);
}
B67f8a5:{NFSU2_TR(0x67f8a5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f8a7:{NFSU2_TR(0x67f8a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f8ad:L67f8ad:{c.instructions+=11;NFSU2_TR(0x67f8ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f8b0:{NFSU2_TR(0x67f8b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f8b1:{NFSU2_TR(0x67f8b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f8b7:{NFSU2_TR(0x67f8b7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67f8bc:{NFSU2_TR(0x67f8bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f8bf:{NFSU2_TR(0x67f8bf);
__builtin_memmove((R+4),(R+12),4);
}
B67f8c1:{NFSU2_TR(0x67f8c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f8c7:{NFSU2_TR(0x67f8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f8ca:{NFSU2_TR(0x67f8ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f8cb:{NFSU2_TR(0x67f8cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f8ce:{NFSU2_TR(0x67f8ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f8d3ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f8d3:L67f8d3:{c.instructions+=3;NFSU2_TR(0x67f8d3);
__builtin_memmove((R+24),(R+0),4);
}
B67f8d5:{NFSU2_TR(0x67f8d5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f8d7:{NFSU2_TR(0x67f8d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f8dd:L67f8dd:{c.instructions+=8;NFSU2_TR(0x67f8dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f8de:{NFSU2_TR(0x67f8de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f8e4:{NFSU2_TR(0x67f8e4);
__builtin_memmove((R+4),(R+12),4);
}
B67f8e6:{NFSU2_TR(0x67f8e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f8e9:{NFSU2_TR(0x67f8e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f8ef:{NFSU2_TR(0x67f8ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f8f2:{NFSU2_TR(0x67f8f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f8f5:{NFSU2_TR(0x67f8f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f8faull));
TAIL_STATIC(0x6758ceu,675);
}
B67f8fa:L67f8fa:{c.instructions+=3;NFSU2_TR(0x67f8fa);
__builtin_memmove((R+24),(R+0),4);
}
B67f8fc:{NFSU2_TR(0x67f8fc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f8fe:{NFSU2_TR(0x67f8fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f904:L67f904:{c.instructions+=10;NFSU2_TR(0x67f904);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f907:{NFSU2_TR(0x67f907);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f908:{NFSU2_TR(0x67f908);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f909:{NFSU2_TR(0x67f909);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f90f:{NFSU2_TR(0x67f90f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B67f914:{NFSU2_TR(0x67f914);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f91a:{NFSU2_TR(0x67f91a);
__builtin_memmove((R+4),(R+12),4);
}
B67f91c:{NFSU2_TR(0x67f91c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f91d:{NFSU2_TR(0x67f91d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f920:{NFSU2_TR(0x67f920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f925ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f925:L67f925:{c.instructions+=3;NFSU2_TR(0x67f925);
__builtin_memmove((R+24),(R+0),4);
}
B67f927:{NFSU2_TR(0x67f927);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f929:{NFSU2_TR(0x67f929);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f92f:L67f92f:{c.instructions+=11;NFSU2_TR(0x67f92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f932:{NFSU2_TR(0x67f932);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f933:{NFSU2_TR(0x67f933);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f939:{NFSU2_TR(0x67f939);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67f93e:{NFSU2_TR(0x67f93e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f944:{NFSU2_TR(0x67f944);
__builtin_memmove((R+4),(R+12),4);
}
B67f946:{NFSU2_TR(0x67f946);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f94c:{NFSU2_TR(0x67f94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67f94f:{NFSU2_TR(0x67f94f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f950:{NFSU2_TR(0x67f950);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f953:{NFSU2_TR(0x67f953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f958ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f958:L67f958:{c.instructions+=3;NFSU2_TR(0x67f958);
__builtin_memmove((R+24),(R+0),4);
}
B67f95a:{NFSU2_TR(0x67f95a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f95c:{NFSU2_TR(0x67f95c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f962:L67f962:{c.instructions+=10;NFSU2_TR(0x67f962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f965:{NFSU2_TR(0x67f965);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f967:{NFSU2_TR(0x67f967);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f96d:{NFSU2_TR(0x67f96d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20100000ull))));
}
B67f972:{NFSU2_TR(0x67f972);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f978:{NFSU2_TR(0x67f978);
__builtin_memmove((R+4),(R+12),4);
}
B67f97a:{NFSU2_TR(0x67f97a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f980:{NFSU2_TR(0x67f980);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f981:{NFSU2_TR(0x67f981);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f984:{NFSU2_TR(0x67f984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f989ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f989:L67f989:{c.instructions+=3;NFSU2_TR(0x67f989);
__builtin_memmove((R+24),(R+0),4);
}
B67f98b:{NFSU2_TR(0x67f98b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f98d:{NFSU2_TR(0x67f98d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f993:L67f993:{c.instructions+=10;NFSU2_TR(0x67f993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67f996:{NFSU2_TR(0x67f996);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f998:{NFSU2_TR(0x67f998);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f99e:{NFSU2_TR(0x67f99e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20000000ull))));
}
B67f9a3:{NFSU2_TR(0x67f9a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f9a9:{NFSU2_TR(0x67f9a9);
__builtin_memmove((R+4),(R+12),4);
}
B67f9ab:{NFSU2_TR(0x67f9ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f9b1:{NFSU2_TR(0x67f9b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f9b2:{NFSU2_TR(0x67f9b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f9b5:{NFSU2_TR(0x67f9b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f9baull));
TAIL_STATIC(0x6758ceu,675);
}
B67f9ba:L67f9ba:{c.instructions+=3;NFSU2_TR(0x67f9ba);
__builtin_memmove((R+24),(R+0),4);
}
B67f9bc:{NFSU2_TR(0x67f9bc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f9be:{NFSU2_TR(0x67f9be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f9c4:L67f9c4:{c.instructions+=8;NFSU2_TR(0x67f9c4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f9c6:{NFSU2_TR(0x67f9c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f9cc:{NFSU2_TR(0x67f9cc);
__builtin_memmove((R+4),(R+12),4);
}
B67f9ce:{NFSU2_TR(0x67f9ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f9d4:{NFSU2_TR(0x67f9d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f9da:{NFSU2_TR(0x67f9da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f9dd:{NFSU2_TR(0x67f9dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f9e0:{NFSU2_TR(0x67f9e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67f9e5ull));
TAIL_STATIC(0x6758ceu,675);
}
B67f9e5:L67f9e5:{c.instructions+=3;NFSU2_TR(0x67f9e5);
__builtin_memmove((R+24),(R+0),4);
}
B67f9e7:{NFSU2_TR(0x67f9e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67f9e9:{NFSU2_TR(0x67f9e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67f9ef:L67f9ef:{c.instructions+=8;NFSU2_TR(0x67f9ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67f9f0:{NFSU2_TR(0x67f9f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f9f6:{NFSU2_TR(0x67f9f6);
__builtin_memmove((R+4),(R+12),4);
}
B67f9f8:{NFSU2_TR(0x67f9f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67f9fe:{NFSU2_TR(0x67f9fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa04:{NFSU2_TR(0x67fa04);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa07:{NFSU2_TR(0x67fa07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa0a:{NFSU2_TR(0x67fa0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fa0full));
TAIL_STATIC(0x6758ceu,675);
}
B67fa0f:L67fa0f:{c.instructions+=3;NFSU2_TR(0x67fa0f);
__builtin_memmove((R+24),(R+0),4);
}
B67fa11:{NFSU2_TR(0x67fa11);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fa13:{NFSU2_TR(0x67fa13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fa19:L67fa19:{c.instructions+=8;NFSU2_TR(0x67fa19);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fa1b:{NFSU2_TR(0x67fa1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa21:{NFSU2_TR(0x67fa21);
__builtin_memmove((R+4),(R+12),4);
}
B67fa23:{NFSU2_TR(0x67fa23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa29:{NFSU2_TR(0x67fa29);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa2f:{NFSU2_TR(0x67fa2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa32:{NFSU2_TR(0x67fa32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa35:{NFSU2_TR(0x67fa35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fa3aull));
TAIL_STATIC(0x6758ceu,675);
}
B67fa3a:L67fa3a:{c.instructions+=3;NFSU2_TR(0x67fa3a);
__builtin_memmove((R+24),(R+0),4);
}
B67fa3c:{NFSU2_TR(0x67fa3c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fa3e:{NFSU2_TR(0x67fa3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fa44:L67fa44:{c.instructions+=4;NFSU2_TR(0x67fa44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fa45:{NFSU2_TR(0x67fa45);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa4b:{NFSU2_TR(0x67fa4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa51:{NFSU2_TR(0x67fa51);
{goto L67fea5;}
}
B67fa56:L67fa56:{c.instructions+=3;NFSU2_TR(0x67fa56);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67fa58:{NFSU2_TR(0x67fa58);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67fa5b:{NFSU2_TR(0x67fa5b);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67fa61:L67fa61:{c.instructions+=2;NFSU2_TR(0x67fa61);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67fa64:{NFSU2_TR(0x67fa64);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67fa6a:L67fa6a:{c.instructions+=3;NFSU2_TR(0x67fa6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa6d:{NFSU2_TR(0x67fa6d);
__builtin_memmove((R+4),(R+12),4);
}
B67fa6f:{NFSU2_TR(0x67fa6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fa74ull));
TAIL_STATIC(0x673a0fu,673);
}
B67fa74:L67fa74:{c.instructions+=3;NFSU2_TR(0x67fa74);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67fa76:{NFSU2_TR(0x67fa76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67fa79:{NFSU2_TR(0x67fa79);
if(r1(R+518)){{goto L67fc7c;}}
}
B67fa7f:L67fa7f:{c.instructions+=4;NFSU2_TR(0x67fa7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa82:{NFSU2_TR(0x67fa82);
__builtin_memmove((R+4),(R+12),4);
}
B67fa84:{NFSU2_TR(0x67fa84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fa85:{NFSU2_TR(0x67fa85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fa8aull));
TAIL_STATIC(0x673b2cu,673);
}
B67fa8a:L67fa8a:{c.instructions+=3;NFSU2_TR(0x67fa8a);
__builtin_memmove((R+24),(R+0),4);
}
B67fa8c:{NFSU2_TR(0x67fa8c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fa8e:{NFSU2_TR(0x67fa8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fa94:L67fa94:{c.instructions+=4;NFSU2_TR(0x67fa94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa97:{NFSU2_TR(0x67fa97);
__builtin_memmove((R+4),(R+12),4);
}
B67fa99:{NFSU2_TR(0x67fa99);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fa9c:{NFSU2_TR(0x67fa9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67faa1ull));
TAIL_STATIC(0x673b2cu,673);
}
B67faa1:L67faa1:{c.instructions+=3;NFSU2_TR(0x67faa1);
__builtin_memmove((R+24),(R+0),4);
}
B67faa3:{NFSU2_TR(0x67faa3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67faa5:{NFSU2_TR(0x67faa5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67faab:L67faab:{c.instructions+=12;NFSU2_TR(0x67faab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67faae:{NFSU2_TR(0x67faae);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fab0:{NFSU2_TR(0x67fab0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fab1:{NFSU2_TR(0x67fab1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fab4:{NFSU2_TR(0x67fab4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67fab9:{NFSU2_TR(0x67fab9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fabc:{NFSU2_TR(0x67fabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67fabf:{NFSU2_TR(0x67fabf);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10700000ull))));
}
B67fac4:{NFSU2_TR(0x67fac4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fac5:{NFSU2_TR(0x67fac5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fac8:{NFSU2_TR(0x67fac8);
__builtin_memmove((R+4),(R+12),4);
}
B67faca:{NFSU2_TR(0x67faca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67facfull));
TAIL_STATIC(0x6758ceu,675);
}
B67facf:L67facf:{c.instructions+=3;NFSU2_TR(0x67facf);
__builtin_memmove((R+24),(R+0),4);
}
B67fad1:{NFSU2_TR(0x67fad1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fad3:{NFSU2_TR(0x67fad3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fad9:L67fad9:{c.instructions+=6;NFSU2_TR(0x67fad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67fadc:{NFSU2_TR(0x67fadc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fade:{NFSU2_TR(0x67fade);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fadf:{NFSU2_TR(0x67fadf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fae2:{NFSU2_TR(0x67fae2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B67fae7:{NFSU2_TR(0x67fae7);
TAIL_STATIC(0x67af00u,67a);
}
B67faec:L67faec:{c.instructions+=3;NFSU2_TR(0x67faec);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67faee:{NFSU2_TR(0x67faee);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67faf1:{NFSU2_TR(0x67faf1);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67faf7:L67faf7:{c.instructions+=2;NFSU2_TR(0x67faf7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67fafa:{NFSU2_TR(0x67fafa);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67fb00:L67fb00:{c.instructions+=2;NFSU2_TR(0x67fb00);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67fb03:{NFSU2_TR(0x67fb03);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67fb09:L67fb09:{c.instructions+=5;NFSU2_TR(0x67fb09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67fb0c:{NFSU2_TR(0x67fb0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fb0d:{NFSU2_TR(0x67fb0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fb10:{NFSU2_TR(0x67fb10);
__builtin_memmove((R+4),(R+12),4);
}
B67fb12:{NFSU2_TR(0x67fb12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fb17ull));
TAIL_STATIC(0x673b2cu,673);
}
B67fb17:L67fb17:{c.instructions+=3;NFSU2_TR(0x67fb17);
__builtin_memmove((R+24),(R+0),4);
}
B67fb19:{NFSU2_TR(0x67fb19);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fb1b:{NFSU2_TR(0x67fb1b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fb21:L67fb21:{c.instructions+=5;NFSU2_TR(0x67fb21);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fb23:{NFSU2_TR(0x67fb23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fb26:{NFSU2_TR(0x67fb26);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B67fb2c:{NFSU2_TR(0x67fb2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fb2f:{NFSU2_TR(0x67fb2f);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x20300000ull))));
}
B67fb35:L67fb35:{c.instructions+=3;NFSU2_TR(0x67fb35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fb38:{NFSU2_TR(0x67fb38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fb39:{NFSU2_TR(0x67fb39);
TAIL_STATIC(0x67af04u,67a);
}
B67fb3e:L67fb3e:{c.instructions+=3;NFSU2_TR(0x67fb3e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67fb40:{NFSU2_TR(0x67fb40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67fb43:{NFSU2_TR(0x67fb43);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67fb49:L67fb49:{c.instructions+=5;NFSU2_TR(0x67fb49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67fb4c:{NFSU2_TR(0x67fb4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67fb4f:{NFSU2_TR(0x67fb4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fb50:{NFSU2_TR(0x67fb50);
__builtin_memmove((R+4),(R+12),4);
}
B67fb52:{NFSU2_TR(0x67fb52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fb57ull));
TAIL_STATIC(0x673a0fu,673);
}
B67fb57:L67fb57:{c.instructions+=2;NFSU2_TR(0x67fb57);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67fb59:{NFSU2_TR(0x67fb59);
if(r1(R+518)){{goto L67fc7c;}}
}
B67fb5f:L67fb5f:{c.instructions+=3;NFSU2_TR(0x67fb5f);
__builtin_memmove((R+8),(R+24),4);
}
B67fb61:{NFSU2_TR(0x67fb61);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67fb63:{NFSU2_TR(0x67fb63);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67fb66:L67fb66:{c.instructions+=5;NFSU2_TR(0x67fb66);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67fb6a:{NFSU2_TR(0x67fb6a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67fb6b:{NFSU2_TR(0x67fb6b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67fb6d:{NFSU2_TR(0x67fb6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B67fb70:{NFSU2_TR(0x67fb70);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67fb66u);}goto L67fb66;}}
}
B67fb72:L67fb72:{c.instructions+=4;NFSU2_TR(0x67fb72);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fb75:{NFSU2_TR(0x67fb75);
__builtin_memmove((R+4),(R+12),4);
}
B67fb77:{NFSU2_TR(0x67fb77);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fb7a:{NFSU2_TR(0x67fb7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fb7full));
TAIL_STATIC(0x673b2cu,673);
}
B67fb7f:L67fb7f:{c.instructions+=3;NFSU2_TR(0x67fb7f);
__builtin_memmove((R+24),(R+0),4);
}
B67fb81:{NFSU2_TR(0x67fb81);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fb83:{NFSU2_TR(0x67fb83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fb89:L67fb89:{c.instructions+=4;NFSU2_TR(0x67fb89);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fb8c:{NFSU2_TR(0x67fb8c);
__builtin_memmove((R+4),(R+12),4);
}
B67fb8e:{NFSU2_TR(0x67fb8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fb91:{NFSU2_TR(0x67fb91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fb96ull));
TAIL_STATIC(0x673b2cu,673);
}
B67fb96:L67fb96:{c.instructions+=3;NFSU2_TR(0x67fb96);
__builtin_memmove((R+24),(R+0),4);
}
B67fb98:{NFSU2_TR(0x67fb98);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fb9a:{NFSU2_TR(0x67fb9a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fba0:L67fba0:{c.instructions+=4;NFSU2_TR(0x67fba0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fba3:{NFSU2_TR(0x67fba3);
__builtin_memmove((R+4),(R+12),4);
}
B67fba5:{NFSU2_TR(0x67fba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fba8:{NFSU2_TR(0x67fba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fbadull));
TAIL_STATIC(0x673b2cu,673);
}
B67fbad:L67fbad:{c.instructions+=3;NFSU2_TR(0x67fbad);
__builtin_memmove((R+24),(R+0),4);
}
B67fbaf:{NFSU2_TR(0x67fbaf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fbb1:{NFSU2_TR(0x67fbb1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fbb7:L67fbb7:{c.instructions+=4;NFSU2_TR(0x67fbb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fbba:{NFSU2_TR(0x67fbba);
__builtin_memmove((R+4),(R+12),4);
}
B67fbbc:{NFSU2_TR(0x67fbbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fbbf:{NFSU2_TR(0x67fbbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fbc4ull));
TAIL_STATIC(0x673b2cu,673);
}
B67fbc4:L67fbc4:{c.instructions+=3;NFSU2_TR(0x67fbc4);
__builtin_memmove((R+24),(R+0),4);
}
B67fbc6:{NFSU2_TR(0x67fbc6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fbc8:{NFSU2_TR(0x67fbc8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fbce:L67fbce:{c.instructions+=7;NFSU2_TR(0x67fbce);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fbd1:{NFSU2_TR(0x67fbd1);
__builtin_memmove((R+4),(R+12),4);
}
B67fbd3:{NFSU2_TR(0x67fbd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fbd6:{NFSU2_TR(0x67fbd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fbd9:{NFSU2_TR(0x67fbd9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fbdc:{NFSU2_TR(0x67fbdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fbdf:{NFSU2_TR(0x67fbdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fbe4ull));
TAIL_STATIC(0x67639au,676);
}
B67fbe4:L67fbe4:{c.instructions+=3;NFSU2_TR(0x67fbe4);
__builtin_memmove((R+24),(R+0),4);
}
B67fbe6:{NFSU2_TR(0x67fbe6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fbe8:{NFSU2_TR(0x67fbe8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fbee:L67fbee:{c.instructions+=12;NFSU2_TR(0x67fbee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67fbf1:{NFSU2_TR(0x67fbf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fbf2:{NFSU2_TR(0x67fbf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fbf3:{NFSU2_TR(0x67fbf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fbf6:{NFSU2_TR(0x67fbf6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67fbfb:{NFSU2_TR(0x67fbfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fbfe:{NFSU2_TR(0x67fbfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67fc01:{NFSU2_TR(0x67fc01);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B67fc06:{NFSU2_TR(0x67fc06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fc07:{NFSU2_TR(0x67fc07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fc0a:{NFSU2_TR(0x67fc0a);
__builtin_memmove((R+4),(R+12),4);
}
B67fc0c:{NFSU2_TR(0x67fc0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fc11ull));
TAIL_STATIC(0x6758ceu,675);
}
B67fc11:L67fc11:{c.instructions+=3;NFSU2_TR(0x67fc11);
__builtin_memmove((R+24),(R+0),4);
}
B67fc13:{NFSU2_TR(0x67fc13);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fc15:{NFSU2_TR(0x67fc15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fc1b:L67fc1b:{c.instructions+=6;NFSU2_TR(0x67fc1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fc1c:{NFSU2_TR(0x67fc1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fc1f:{NFSU2_TR(0x67fc1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fc22:{NFSU2_TR(0x67fc22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67fc25:{NFSU2_TR(0x67fc25);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67fc2a:{NFSU2_TR(0x67fc2a);
TAIL_STATIC(0x67af00u,67a);
}
B67fc2f:L67fc2f:{c.instructions+=3;NFSU2_TR(0x67fc2f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67fc31:{NFSU2_TR(0x67fc31);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67fc34:{NFSU2_TR(0x67fc34);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67fc3a:L67fc3a:{c.instructions+=2;NFSU2_TR(0x67fc3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67fc3d:{NFSU2_TR(0x67fc3d);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67fc43:L67fc43:{c.instructions+=13;NFSU2_TR(0x67fc43);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67fc49:{NFSU2_TR(0x67fc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67fc4c:{NFSU2_TR(0x67fc4c);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B67fc4e:{NFSU2_TR(0x67fc4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fc4f:{NFSU2_TR(0x67fc4f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B67fc51:{NFSU2_TR(0x67fc51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fc52:{NFSU2_TR(0x67fc52);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B67fc54:{NFSU2_TR(0x67fc54);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x38"::"a"(ea_):"memory");}
}
B67fc5a:{NFSU2_TR(0x67fc5a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67fc5d:{NFSU2_TR(0x67fc5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fc5e:{NFSU2_TR(0x67fc5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fc5f:{NFSU2_TR(0x67fc5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fc62:{NFSU2_TR(0x67fc62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fc67ull));
TAIL_STATIC(0x699c39u,699);
}
B67fc67:L67fc67:{c.instructions+=6;NFSU2_TR(0x67fc67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67fc6a:{NFSU2_TR(0x67fc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67fc6d:{NFSU2_TR(0x67fc6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67fc70:{NFSU2_TR(0x67fc70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fc71:{NFSU2_TR(0x67fc71);
__builtin_memmove((R+4),(R+12),4);
}
B67fc73:{NFSU2_TR(0x67fc73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fc78ull));
TAIL_STATIC(0x673a0fu,673);
}
B67fc78:L67fc78:{c.instructions+=2;NFSU2_TR(0x67fc78);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67fc7a:{NFSU2_TR(0x67fc7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67fc86;}}
}
B67fc7c:L67fc7c:{c.instructions+=2;NFSU2_TR(0x67fc7c);
w4(R+24,u32(0x8007000eull));
}
B67fc81:{NFSU2_TR(0x67fc81);
TAIL_STATIC(0x680902u,680);
}
B67fc86:L67fc86:{c.instructions+=3;NFSU2_TR(0x67fc86);
__builtin_memmove((R+8),(R+24),4);
}
B67fc88:{NFSU2_TR(0x67fc88);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67fc8a:{NFSU2_TR(0x67fc8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67fc8d:L67fc8d:{c.instructions+=5;NFSU2_TR(0x67fc8d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67fc91:{NFSU2_TR(0x67fc91);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67fc92:{NFSU2_TR(0x67fc92);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67fc94:{NFSU2_TR(0x67fc94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x9ull))));
}
B67fc97:{NFSU2_TR(0x67fc97);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67fc8du);}goto L67fc8d;}}
}
B67fc99:L67fc99:{c.instructions+=2;NFSU2_TR(0x67fc99);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67fc9b:{NFSU2_TR(0x67fc9b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67fcaa;}}
}
B67fc9d:L67fc9d:{c.instructions+=3;NFSU2_TR(0x67fc9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67fca0:{NFSU2_TR(0x67fca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67fca3:{NFSU2_TR(0x67fca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67fca6:L67fca6:{c.instructions+=1;NFSU2_TR(0x67fca6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L67fca8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67fca6u);}goto L67fca6;}
}
B67fca8:L67fca8:{c.instructions+=1;NFSU2_TR(0x67fca8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67fcaa:L67fcaa:{c.instructions+=5;NFSU2_TR(0x67fcaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67fcad:{NFSU2_TR(0x67fcad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fcae:{NFSU2_TR(0x67fcae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fcb1:{NFSU2_TR(0x67fcb1);
__builtin_memmove((R+4),(R+12),4);
}
B67fcb3:{NFSU2_TR(0x67fcb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fcb8ull));
TAIL_STATIC(0x673b2cu,673);
}
B67fcb8:L67fcb8:{c.instructions+=3;NFSU2_TR(0x67fcb8);
__builtin_memmove((R+24),(R+0),4);
}
B67fcba:{NFSU2_TR(0x67fcba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fcbc:{NFSU2_TR(0x67fcbc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fcc2:L67fcc2:{c.instructions+=4;NFSU2_TR(0x67fcc2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fcc3:{NFSU2_TR(0x67fcc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fcc6:{NFSU2_TR(0x67fcc6);
__builtin_memmove((R+4),(R+12),4);
}
B67fcc8:{NFSU2_TR(0x67fcc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fccdull));
TAIL_STATIC(0x673b2cu,673);
}
B67fccd:L67fccd:{c.instructions+=3;NFSU2_TR(0x67fccd);
__builtin_memmove((R+24),(R+0),4);
}
B67fccf:{NFSU2_TR(0x67fccf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fcd1:{NFSU2_TR(0x67fcd1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fcd7:L67fcd7:{c.instructions+=4;NFSU2_TR(0x67fcd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fcd8:{NFSU2_TR(0x67fcd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fcdb:{NFSU2_TR(0x67fcdb);
__builtin_memmove((R+4),(R+12),4);
}
B67fcdd:{NFSU2_TR(0x67fcdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fce2ull));
TAIL_STATIC(0x673b2cu,673);
}
B67fce2:L67fce2:{c.instructions+=3;NFSU2_TR(0x67fce2);
__builtin_memmove((R+24),(R+0),4);
}
B67fce4:{NFSU2_TR(0x67fce4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fce6:{NFSU2_TR(0x67fce6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fcec:L67fcec:{c.instructions+=4;NFSU2_TR(0x67fcec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fced:{NFSU2_TR(0x67fced);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fcf0:{NFSU2_TR(0x67fcf0);
__builtin_memmove((R+4),(R+12),4);
}
B67fcf2:{NFSU2_TR(0x67fcf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fcf7ull));
TAIL_STATIC(0x673b2cu,673);
}
B67fcf7:L67fcf7:{c.instructions+=3;NFSU2_TR(0x67fcf7);
__builtin_memmove((R+24),(R+0),4);
}
B67fcf9:{NFSU2_TR(0x67fcf9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fcfb:{NFSU2_TR(0x67fcfb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fd01:L67fd01:{c.instructions+=4;NFSU2_TR(0x67fd01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fd02:{NFSU2_TR(0x67fd02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fd05:{NFSU2_TR(0x67fd05);
__builtin_memmove((R+4),(R+12),4);
}
B67fd07:{NFSU2_TR(0x67fd07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fd0cull));
TAIL_STATIC(0x673b2cu,673);
}
B67fd0c:L67fd0c:{c.instructions+=3;NFSU2_TR(0x67fd0c);
__builtin_memmove((R+24),(R+0),4);
}
B67fd0e:{NFSU2_TR(0x67fd0e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fd10:{NFSU2_TR(0x67fd10);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fd16:L67fd16:{c.instructions+=4;NFSU2_TR(0x67fd16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fd17:{NFSU2_TR(0x67fd17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fd1a:{NFSU2_TR(0x67fd1a);
__builtin_memmove((R+4),(R+12),4);
}
B67fd1c:{NFSU2_TR(0x67fd1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fd21ull));
TAIL_STATIC(0x673b2cu,673);
}
B67fd21:L67fd21:{c.instructions+=3;NFSU2_TR(0x67fd21);
__builtin_memmove((R+24),(R+0),4);
}
B67fd23:{NFSU2_TR(0x67fd23);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fd25:{NFSU2_TR(0x67fd25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fd2b:L67fd2b:{c.instructions+=4;NFSU2_TR(0x67fd2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fd2c:{NFSU2_TR(0x67fd2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fd2f:{NFSU2_TR(0x67fd2f);
__builtin_memmove((R+4),(R+12),4);
}
B67fd31:{NFSU2_TR(0x67fd31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fd36ull));
TAIL_STATIC(0x673b2cu,673);
}
B67fd36:L67fd36:{c.instructions+=3;NFSU2_TR(0x67fd36);
__builtin_memmove((R+24),(R+0),4);
}
B67fd38:{NFSU2_TR(0x67fd38);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fd3a:{NFSU2_TR(0x67fd3a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fd40:L67fd40:{c.instructions+=4;NFSU2_TR(0x67fd40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fd41:{NFSU2_TR(0x67fd41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fd44:{NFSU2_TR(0x67fd44);
__builtin_memmove((R+4),(R+12),4);
}
B67fd46:{NFSU2_TR(0x67fd46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fd4bull));
TAIL_STATIC(0x673b2cu,673);
}
B67fd4b:L67fd4b:{c.instructions+=3;NFSU2_TR(0x67fd4b);
__builtin_memmove((R+24),(R+0),4);
}
B67fd4d:{NFSU2_TR(0x67fd4d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fd4f:{NFSU2_TR(0x67fd4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fd55:L67fd55:{c.instructions+=4;NFSU2_TR(0x67fd55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fd56:{NFSU2_TR(0x67fd56);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fd59:{NFSU2_TR(0x67fd59);
__builtin_memmove((R+4),(R+12),4);
}
B67fd5b:{NFSU2_TR(0x67fd5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fd60ull));
TAIL_STATIC(0x673b2cu,673);
}
B67fd60:L67fd60:{c.instructions+=3;NFSU2_TR(0x67fd60);
__builtin_memmove((R+24),(R+0),4);
}
B67fd62:{NFSU2_TR(0x67fd62);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fd64:{NFSU2_TR(0x67fd64);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fd6a:L67fd6a:{c.instructions+=13;NFSU2_TR(0x67fd6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fd6b:{NFSU2_TR(0x67fd6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fd6e:{NFSU2_TR(0x67fd6e);
__builtin_memmove((R+0),(R+8),4);
}
B67fd70:{NFSU2_TR(0x67fd70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fd73:{NFSU2_TR(0x67fd73);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67fd78:{NFSU2_TR(0x67fd78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fd7b:{NFSU2_TR(0x67fd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67fd7e:{NFSU2_TR(0x67fd7e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67fd83:{NFSU2_TR(0x67fd83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fd84:{NFSU2_TR(0x67fd84);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fd87:{NFSU2_TR(0x67fd87);
__builtin_memmove((R+4),(R+12),4);
}
B67fd89:{NFSU2_TR(0x67fd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67fd8c:{NFSU2_TR(0x67fd8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fd91ull));
TAIL_STATIC(0x6758ceu,675);
}
B67fd91:L67fd91:{c.instructions+=3;NFSU2_TR(0x67fd91);
__builtin_memmove((R+24),(R+0),4);
}
B67fd93:{NFSU2_TR(0x67fd93);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fd95:{NFSU2_TR(0x67fd95);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fd9b:L67fd9b:{c.instructions+=11;NFSU2_TR(0x67fd9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67fd9e:{NFSU2_TR(0x67fd9e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fda0:{NFSU2_TR(0x67fda0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fda1:{NFSU2_TR(0x67fda1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fda4:{NFSU2_TR(0x67fda4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10500000ull))));
}
B67fda9:{NFSU2_TR(0x67fda9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fdac:{NFSU2_TR(0x67fdac);
__builtin_memmove((R+4),(R+12),4);
}
B67fdae:{NFSU2_TR(0x67fdae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fdaf:{NFSU2_TR(0x67fdaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fdb2:{NFSU2_TR(0x67fdb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67fdb5:{NFSU2_TR(0x67fdb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fdbaull));
TAIL_STATIC(0x6758ceu,675);
}
B67fdba:L67fdba:{c.instructions+=3;NFSU2_TR(0x67fdba);
__builtin_memmove((R+24),(R+0),4);
}
B67fdbc:{NFSU2_TR(0x67fdbc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fdbe:{NFSU2_TR(0x67fdbe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fdc4:L67fdc4:{c.instructions+=11;NFSU2_TR(0x67fdc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67fdc7:{NFSU2_TR(0x67fdc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fdc8:{NFSU2_TR(0x67fdc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fdc9:{NFSU2_TR(0x67fdc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fdcc:{NFSU2_TR(0x67fdcc);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10100000ull))));
}
B67fdd1:{NFSU2_TR(0x67fdd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fdd4:{NFSU2_TR(0x67fdd4);
__builtin_memmove((R+4),(R+12),4);
}
B67fdd6:{NFSU2_TR(0x67fdd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fdd7:{NFSU2_TR(0x67fdd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fdda:{NFSU2_TR(0x67fdda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67fddd:{NFSU2_TR(0x67fddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fde2ull));
TAIL_STATIC(0x6758ceu,675);
}
B67fde2:L67fde2:{c.instructions+=3;NFSU2_TR(0x67fde2);
__builtin_memmove((R+24),(R+0),4);
}
B67fde4:{NFSU2_TR(0x67fde4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fde6:{NFSU2_TR(0x67fde6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fdec:L67fdec:{c.instructions+=8;NFSU2_TR(0x67fdec);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fdee:{NFSU2_TR(0x67fdee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fdef:{NFSU2_TR(0x67fdef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fdf2:{NFSU2_TR(0x67fdf2);
__builtin_memmove((R+4),(R+12),4);
}
B67fdf4:{NFSU2_TR(0x67fdf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fdf7:{NFSU2_TR(0x67fdf7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fdfa:{NFSU2_TR(0x67fdfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fdfd:{NFSU2_TR(0x67fdfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fe02ull));
TAIL_STATIC(0x6758ceu,675);
}
B67fe02:L67fe02:{c.instructions+=3;NFSU2_TR(0x67fe02);
__builtin_memmove((R+24),(R+0),4);
}
B67fe04:{NFSU2_TR(0x67fe04);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fe06:{NFSU2_TR(0x67fe06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fe0c:L67fe0c:{c.instructions+=8;NFSU2_TR(0x67fe0c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fe0e:{NFSU2_TR(0x67fe0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fe0f:{NFSU2_TR(0x67fe0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe12:{NFSU2_TR(0x67fe12);
__builtin_memmove((R+4),(R+12),4);
}
B67fe14:{NFSU2_TR(0x67fe14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe17:{NFSU2_TR(0x67fe17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe1a:{NFSU2_TR(0x67fe1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe1d:{NFSU2_TR(0x67fe1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fe22ull));
TAIL_STATIC(0x6758ceu,675);
}
B67fe22:L67fe22:{c.instructions+=3;NFSU2_TR(0x67fe22);
__builtin_memmove((R+24),(R+0),4);
}
B67fe24:{NFSU2_TR(0x67fe24);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fe26:{NFSU2_TR(0x67fe26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fe2c:L67fe2c:{c.instructions+=11;NFSU2_TR(0x67fe2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67fe2f:{NFSU2_TR(0x67fe2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fe30:{NFSU2_TR(0x67fe30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe33:{NFSU2_TR(0x67fe33);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67fe38:{NFSU2_TR(0x67fe38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe3b:{NFSU2_TR(0x67fe3b);
__builtin_memmove((R+4),(R+12),4);
}
B67fe3d:{NFSU2_TR(0x67fe3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe40:{NFSU2_TR(0x67fe40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67fe43:{NFSU2_TR(0x67fe43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fe44:{NFSU2_TR(0x67fe44);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe47:{NFSU2_TR(0x67fe47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fe4cull));
TAIL_STATIC(0x6758ceu,675);
}
B67fe4c:L67fe4c:{c.instructions+=3;NFSU2_TR(0x67fe4c);
__builtin_memmove((R+24),(R+0),4);
}
B67fe4e:{NFSU2_TR(0x67fe4e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fe50:{NFSU2_TR(0x67fe50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fe56:L67fe56:{c.instructions+=8;NFSU2_TR(0x67fe56);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fe58:{NFSU2_TR(0x67fe58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe5b:{NFSU2_TR(0x67fe5b);
__builtin_memmove((R+4),(R+12),4);
}
B67fe5d:{NFSU2_TR(0x67fe5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe60:{NFSU2_TR(0x67fe60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe63:{NFSU2_TR(0x67fe63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe66:{NFSU2_TR(0x67fe66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe69:{NFSU2_TR(0x67fe69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fe6eull));
TAIL_STATIC(0x6758ceu,675);
}
B67fe6e:L67fe6e:{c.instructions+=3;NFSU2_TR(0x67fe6e);
__builtin_memmove((R+24),(R+0),4);
}
B67fe70:{NFSU2_TR(0x67fe70);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fe72:{NFSU2_TR(0x67fe72);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fe78:L67fe78:{c.instructions+=10;NFSU2_TR(0x67fe78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67fe7b:{NFSU2_TR(0x67fe7b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fe7d:{NFSU2_TR(0x67fe7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fe7e:{NFSU2_TR(0x67fe7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe81:{NFSU2_TR(0x67fe81);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10300000ull))));
}
B67fe86:{NFSU2_TR(0x67fe86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe89:{NFSU2_TR(0x67fe89);
__builtin_memmove((R+4),(R+12),4);
}
B67fe8b:{NFSU2_TR(0x67fe8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fe8c:{NFSU2_TR(0x67fe8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fe8f:{NFSU2_TR(0x67fe8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fe94ull));
TAIL_STATIC(0x6758ceu,675);
}
B67fe94:L67fe94:{c.instructions+=3;NFSU2_TR(0x67fe94);
__builtin_memmove((R+24),(R+0),4);
}
B67fe96:{NFSU2_TR(0x67fe96);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67fe98:{NFSU2_TR(0x67fe98);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67fe9e:L67fe9e:{c.instructions+=3;NFSU2_TR(0x67fe9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fe9f:{NFSU2_TR(0x67fe9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fea2:{NFSU2_TR(0x67fea2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fea5:L67fea5:{c.instructions+=3;NFSU2_TR(0x67fea5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67fea8:{NFSU2_TR(0x67fea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67feab:{NFSU2_TR(0x67feab);
TAIL_STATIC(0x67af04u,67a);
}
B67feb0:L67feb0:{c.instructions+=3;NFSU2_TR(0x67feb0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67feb2:{NFSU2_TR(0x67feb2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67feb5:{NFSU2_TR(0x67feb5);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67febb:L67febb:{c.instructions+=2;NFSU2_TR(0x67febb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67febe:{NFSU2_TR(0x67febe);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67fec4:L67fec4:{c.instructions+=2;NFSU2_TR(0x67fec4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67fec7:{NFSU2_TR(0x67fec7);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67fecd:L67fecd:{c.instructions+=2;NFSU2_TR(0x67fecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67fed0:{NFSU2_TR(0x67fed0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67fed2:L67fed2:{c.instructions+=8;NFSU2_TR(0x67fed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67fed5:{NFSU2_TR(0x67fed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67fed7:{NFSU2_TR(0x67fed7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67fedb:{NFSU2_TR(0x67fedb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67fedd:{NFSU2_TR(0x67fedd);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67fee1:{NFSU2_TR(0x67fee1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67fee2:{NFSU2_TR(0x67fee2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B67fee5:{NFSU2_TR(0x67fee5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67fed2u);}goto L67fed2;}}
}
B67fee7:L67fee7:{c.instructions+=8;NFSU2_TR(0x67fee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B67fee9:{NFSU2_TR(0x67fee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67feec:{NFSU2_TR(0x67feec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67feee:{NFSU2_TR(0x67feee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67fef1:{NFSU2_TR(0x67fef1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fef2:{NFSU2_TR(0x67fef2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67fef3:{NFSU2_TR(0x67fef3);
__builtin_memmove((R+4),(R+12),4);
}
B67fef5:{NFSU2_TR(0x67fef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67fefaull));
TAIL_STATIC(0x678640u,678);
}
B67fefa:L67fefa:{c.instructions+=9;NFSU2_TR(0x67fefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67fefd:{NFSU2_TR(0x67fefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67ff00:{NFSU2_TR(0x67ff00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ff03:{NFSU2_TR(0x67ff03);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B67ff06:{NFSU2_TR(0x67ff06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67ff09:{NFSU2_TR(0x67ff09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67ff0c:{NFSU2_TR(0x67ff0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B67ff0f:{NFSU2_TR(0x67ff0f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B67ff13:{NFSU2_TR(0x67ff13);
if(r1(R+518)){{goto L67ff83;}}
}
B67ff15:L67ff15:{c.instructions+=2;NFSU2_TR(0x67ff15);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ff18:{NFSU2_TR(0x67ff18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67ff83;}}
}
B67ff1a:L67ff1a:{c.instructions+=3;NFSU2_TR(0x67ff1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ff1d:{NFSU2_TR(0x67ff1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ff20:{NFSU2_TR(0x67ff20);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67ff65;}}
}
B67ff22:L67ff22:{c.instructions+=2;NFSU2_TR(0x67ff22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67ff25:{NFSU2_TR(0x67ff25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ff28:L67ff28:{c.instructions+=5;NFSU2_TR(0x67ff28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67ff2b:{NFSU2_TR(0x67ff2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67ff2d:{NFSU2_TR(0x67ff2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67ff30:{NFSU2_TR(0x67ff30);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ff33:{NFSU2_TR(0x67ff33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67ff4b;}}
}
B67ff35:L67ff35:{c.instructions+=3;NFSU2_TR(0x67ff35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67ff38:{NFSU2_TR(0x67ff38);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ff3b:{NFSU2_TR(0x67ff3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67ff4b;}}
}
B67ff3d:L67ff3d:{c.instructions+=3;NFSU2_TR(0x67ff3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67ff40:{NFSU2_TR(0x67ff40);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ff43:{NFSU2_TR(0x67ff43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67ff4b;}}
}
B67ff45:L67ff45:{c.instructions+=2;NFSU2_TR(0x67ff45);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ff49:{NFSU2_TR(0x67ff49);
if(r1(R+518)){{goto L67ff5f;}}
}
B67ff4b:L67ff4b:{c.instructions+=6;NFSU2_TR(0x67ff4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67ff4e:{NFSU2_TR(0x67ff4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67ff51:{NFSU2_TR(0x67ff51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67ff54:{NFSU2_TR(0x67ff54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67ff58:{NFSU2_TR(0x67ff58);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B67ff5b:{NFSU2_TR(0x67ff5b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67ff28u);}goto L67ff28;}}
}
B67ff5d:L67ff5d:{c.instructions+=1;NFSU2_TR(0x67ff5d);
{goto L67ff65;}
}
B67ff5f:L67ff5f:{c.instructions+=2;NFSU2_TR(0x67ff5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ff62:{NFSU2_TR(0x67ff62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ff65:L67ff65:{c.instructions+=3;NFSU2_TR(0x67ff65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ff68:{NFSU2_TR(0x67ff68);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ff6b:{NFSU2_TR(0x67ff6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67ff83;}}
}
B67ff6d:L67ff6d:{c.instructions+=5;NFSU2_TR(0x67ff6d);
u8 U[4];
w4(U+0,u32(0x7b7a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ff72:{NFSU2_TR(0x67ff72);
u8 U[4];
w4(U+0,u32(0xdb5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ff77:{NFSU2_TR(0x67ff77);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ff7a:{NFSU2_TR(0x67ff7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ff7b:{NFSU2_TR(0x67ff7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ff80ull));
TAIL_STATIC(0x6752c9u,675);
}
B67ff80:L67ff80:{c.instructions+=1;NFSU2_TR(0x67ff80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B67ff83:L67ff83:{c.instructions+=4;NFSU2_TR(0x67ff83);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ff86:{NFSU2_TR(0x67ff86);
__builtin_memmove((R+4),(R+12),4);
}
B67ff88:{NFSU2_TR(0x67ff88);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ff8b:{NFSU2_TR(0x67ff8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ff90ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ff90:L67ff90:{c.instructions+=3;NFSU2_TR(0x67ff90);
__builtin_memmove((R+24),(R+0),4);
}
B67ff92:{NFSU2_TR(0x67ff92);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ff94:{NFSU2_TR(0x67ff94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ff9a:L67ff9a:{c.instructions+=8;NFSU2_TR(0x67ff9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ff9b:{NFSU2_TR(0x67ff9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ff9e:{NFSU2_TR(0x67ff9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ff9f:{NFSU2_TR(0x67ff9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ffa2:{NFSU2_TR(0x67ffa2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ffa3:{NFSU2_TR(0x67ffa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ffa6:{NFSU2_TR(0x67ffa6);
u8 U[4];
w4(U+0,u32(0x60000002ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ffab:{NFSU2_TR(0x67ffab);
TAIL_STATIC(0x67af04u,67a);
}
B67ffb0:L67ffb0:{c.instructions+=3;NFSU2_TR(0x67ffb0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67ffb2:{NFSU2_TR(0x67ffb2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ffb5:{NFSU2_TR(0x67ffb5);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67ffbb:L67ffbb:{c.instructions+=2;NFSU2_TR(0x67ffbb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ffbe:{NFSU2_TR(0x67ffbe);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67ffc4:L67ffc4:{c.instructions+=2;NFSU2_TR(0x67ffc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ffc7:{NFSU2_TR(0x67ffc7);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67ffcd:L67ffcd:{c.instructions+=2;NFSU2_TR(0x67ffcd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ffd0:{NFSU2_TR(0x67ffd0);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67ffd6:L67ffd6:{c.instructions+=2;NFSU2_TR(0x67ffd6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ffd9:{NFSU2_TR(0x67ffd9);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67ffdf:L67ffdf:{c.instructions+=12;NFSU2_TR(0x67ffdf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67ffe1:{NFSU2_TR(0x67ffe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67ffe4:{NFSU2_TR(0x67ffe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67ffe6:{NFSU2_TR(0x67ffe6);
__builtin_memmove((R+0),(R+4),4);
}
B67ffe8:{NFSU2_TR(0x67ffe8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67ffeb:{NFSU2_TR(0x67ffeb);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67ffef:{NFSU2_TR(0x67ffef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67fff2:{NFSU2_TR(0x67fff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67fff4:{NFSU2_TR(0x67fff4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67fff8:{NFSU2_TR(0x67fff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67fffb:{NFSU2_TR(0x67fffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67fffd:{NFSU2_TR(0x67fffd);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
TAIL_STATIC(0x680001u,680);
}
XIT:NFSU2_TR_EXIT(0x67f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
