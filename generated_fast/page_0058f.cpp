#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_585(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_589(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58c(u8* __restrict R,Cpu& c);
u32 body_58d(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_590(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_73f(u8* __restrict R,Cpu& c);
u32 body_740(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x58f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x58f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_58f(u8* __restrict R,Cpu& c);
u32 page_58f(Cpu& c){return body_58f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_58f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x58f005:goto L58f005;
case 0x58f00f:c.instructions+=1;goto B58f00f;
case 0x58f014:goto L58f014;
case 0x58f01e:c.instructions+=1;goto B58f01e;
case 0x58f020:goto L58f020;
case 0x58f026:c.instructions+=12;goto B58f026;
case 0x58f02d:c.instructions+=11;goto B58f02d;
case 0x58f02e:c.instructions+=10;goto B58f02e;
case 0x58f02f:c.instructions+=9;goto B58f02f;
case 0x58f036:c.instructions+=8;goto B58f036;
case 0x58f037:c.instructions+=7;goto B58f037;
case 0x58f039:c.instructions+=6;goto B58f039;
case 0x58f03b:c.instructions+=5;goto B58f03b;
case 0x58f03e:c.instructions+=4;goto B58f03e;
case 0x58f040:c.instructions+=3;goto B58f040;
case 0x58f044:c.instructions+=2;goto B58f044;
case 0x58f04b:c.instructions+=1;goto B58f04b;
case 0x58f04f:goto L58f04f;
case 0x58f051:goto L58f051;
case 0x58f053:c.instructions+=1;goto B58f053;
case 0x58f056:goto L58f056;
case 0x58f058:goto L58f058;
case 0x58f05a:c.instructions+=8;goto B58f05a;
case 0x58f05e:c.instructions+=7;goto B58f05e;
case 0x58f061:c.instructions+=6;goto B58f061;
case 0x58f062:c.instructions+=5;goto B58f062;
case 0x58f066:c.instructions+=4;goto B58f066;
case 0x58f06d:c.instructions+=3;goto B58f06d;
case 0x58f074:c.instructions+=2;goto B58f074;
case 0x58f078:c.instructions+=1;goto B58f078;
case 0x58f07d:goto L58f07d;
case 0x58f081:c.instructions+=2;goto B58f081;
case 0x58f084:c.instructions+=1;goto B58f084;
case 0x58f08a:goto L58f08a;
case 0x58f091:c.instructions+=3;goto B58f091;
case 0x58f097:c.instructions+=2;goto B58f097;
case 0x58f09b:c.instructions+=1;goto B58f09b;
case 0x58f0a0:goto L58f0a0;
case 0x58f0a4:c.instructions+=5;goto B58f0a4;
case 0x58f0a8:c.instructions+=4;goto B58f0a8;
case 0x58f0ac:c.instructions+=3;goto B58f0ac;
case 0x58f0ae:c.instructions+=2;goto B58f0ae;
case 0x58f0b1:c.instructions+=1;goto B58f0b1;
case 0x58f0b3:goto L58f0b3;
case 0x58f0b9:goto L58f0b9;
case 0x58f0c0:c.instructions+=2;goto B58f0c0;
case 0x58f0c1:c.instructions+=1;goto B58f0c1;
case 0x58f0c6:goto L58f0c6;
case 0x58f0c7:c.instructions+=2;goto B58f0c7;
case 0x58f0c8:c.instructions+=1;goto B58f0c8;
case 0x58f0cd:goto L58f0cd;
case 0x58f0d0:c.instructions+=4;goto B58f0d0;
case 0x58f0d3:c.instructions+=3;goto B58f0d3;
case 0x58f0d4:c.instructions+=2;goto B58f0d4;
case 0x58f0d7:c.instructions+=1;goto B58f0d7;
case 0x58f0dd:goto L58f0dd;
case 0x58f0e4:goto L58f0e4;
case 0x58f0eb:c.instructions+=4;goto B58f0eb;
case 0x58f0ec:c.instructions+=3;goto B58f0ec;
case 0x58f0f0:c.instructions+=2;goto B58f0f0;
case 0x58f0f1:c.instructions+=1;goto B58f0f1;
case 0x58f0f6:goto L58f0f6;
case 0x58f0f9:c.instructions+=5;goto B58f0f9;
case 0x58f0fa:c.instructions+=4;goto B58f0fa;
case 0x58f0fb:c.instructions+=3;goto B58f0fb;
case 0x58f0fc:c.instructions+=2;goto B58f0fc;
case 0x58f102:c.instructions+=1;goto B58f102;
case 0x58f103:goto L58f103;
case 0x58f10a:c.instructions+=4;goto B58f10a;
case 0x58f10b:c.instructions+=3;goto B58f10b;
case 0x58f10f:c.instructions+=2;goto B58f10f;
case 0x58f110:c.instructions+=1;goto B58f110;
case 0x58f115:goto L58f115;
case 0x58f118:c.instructions+=5;goto B58f118;
case 0x58f119:c.instructions+=4;goto B58f119;
case 0x58f11a:c.instructions+=3;goto B58f11a;
case 0x58f11b:c.instructions+=2;goto B58f11b;
case 0x58f121:c.instructions+=1;goto B58f121;
case 0x58f122:goto L58f122;
case 0x58f129:c.instructions+=4;goto B58f129;
case 0x58f12a:c.instructions+=3;goto B58f12a;
case 0x58f12e:c.instructions+=2;goto B58f12e;
case 0x58f12f:c.instructions+=1;goto B58f12f;
case 0x58f134:goto L58f134;
case 0x58f137:c.instructions+=5;goto B58f137;
case 0x58f138:c.instructions+=4;goto B58f138;
case 0x58f139:c.instructions+=3;goto B58f139;
case 0x58f13a:c.instructions+=2;goto B58f13a;
case 0x58f140:c.instructions+=1;goto B58f140;
case 0x58f141:goto L58f141;
case 0x58f148:c.instructions+=4;goto B58f148;
case 0x58f149:c.instructions+=3;goto B58f149;
case 0x58f14d:c.instructions+=2;goto B58f14d;
case 0x58f14e:c.instructions+=1;goto B58f14e;
case 0x58f153:goto L58f153;
case 0x58f156:c.instructions+=5;goto B58f156;
case 0x58f157:c.instructions+=4;goto B58f157;
case 0x58f158:c.instructions+=3;goto B58f158;
case 0x58f159:c.instructions+=2;goto B58f159;
case 0x58f15f:c.instructions+=1;goto B58f15f;
case 0x58f160:goto L58f160;
case 0x58f167:c.instructions+=2;goto B58f167;
case 0x58f168:c.instructions+=1;goto B58f168;
case 0x58f16d:goto L58f16d;
case 0x58f170:c.instructions+=5;goto B58f170;
case 0x58f171:c.instructions+=4;goto B58f171;
case 0x58f172:c.instructions+=3;goto B58f172;
case 0x58f173:c.instructions+=2;goto B58f173;
case 0x58f179:c.instructions+=1;goto B58f179;
case 0x58f17a:goto L58f17a;
case 0x58f181:c.instructions+=3;goto B58f181;
case 0x58f183:c.instructions+=2;goto B58f183;
case 0x58f184:c.instructions+=1;goto B58f184;
case 0x58f189:goto L58f189;
case 0x58f18c:c.instructions+=5;goto B58f18c;
case 0x58f18d:c.instructions+=4;goto B58f18d;
case 0x58f18e:c.instructions+=3;goto B58f18e;
case 0x58f18f:c.instructions+=2;goto B58f18f;
case 0x58f195:c.instructions+=1;goto B58f195;
case 0x58f196:goto L58f196;
case 0x58f19d:c.instructions+=4;goto B58f19d;
case 0x58f19e:c.instructions+=3;goto B58f19e;
case 0x58f1a2:c.instructions+=2;goto B58f1a2;
case 0x58f1a3:c.instructions+=1;goto B58f1a3;
case 0x58f1a8:goto L58f1a8;
case 0x58f1ab:c.instructions+=5;goto B58f1ab;
case 0x58f1ac:c.instructions+=4;goto B58f1ac;
case 0x58f1ad:c.instructions+=3;goto B58f1ad;
case 0x58f1ae:c.instructions+=2;goto B58f1ae;
case 0x58f1b4:c.instructions+=1;goto B58f1b4;
case 0x58f1b5:goto L58f1b5;
case 0x58f1bc:c.instructions+=4;goto B58f1bc;
case 0x58f1bd:c.instructions+=3;goto B58f1bd;
case 0x58f1c1:c.instructions+=2;goto B58f1c1;
case 0x58f1c2:c.instructions+=1;goto B58f1c2;
case 0x58f1c7:goto L58f1c7;
case 0x58f1ca:c.instructions+=5;goto B58f1ca;
case 0x58f1cb:c.instructions+=4;goto B58f1cb;
case 0x58f1cc:c.instructions+=3;goto B58f1cc;
case 0x58f1cd:c.instructions+=2;goto B58f1cd;
case 0x58f1d3:c.instructions+=1;goto B58f1d3;
case 0x58f1d4:goto L58f1d4;
case 0x58f1db:c.instructions+=4;goto B58f1db;
case 0x58f1dc:c.instructions+=3;goto B58f1dc;
case 0x58f1e0:c.instructions+=2;goto B58f1e0;
case 0x58f1e1:c.instructions+=1;goto B58f1e1;
case 0x58f1e6:goto L58f1e6;
case 0x58f1e9:goto L58f1e9;
case 0x58f1ea:c.instructions+=4;goto B58f1ea;
case 0x58f1eb:c.instructions+=3;goto B58f1eb;
case 0x58f1ec:c.instructions+=2;goto B58f1ec;
case 0x58f1f2:c.instructions+=1;goto B58f1f2;
case 0x58f230:goto L58f230;
case 0x58f236:c.instructions+=3;goto B58f236;
case 0x58f23b:c.instructions+=2;goto B58f23b;
case 0x58f23d:c.instructions+=1;goto B58f23d;
case 0x58f23f:goto L58f23f;
case 0x58f245:c.instructions+=5;goto B58f245;
case 0x58f246:c.instructions+=4;goto B58f246;
case 0x58f248:c.instructions+=3;goto B58f248;
case 0x58f24a:c.instructions+=2;goto B58f24a;
case 0x58f24f:c.instructions+=1;goto B58f24f;
case 0x58f254:goto L58f254;
case 0x58f256:goto L58f256;
case 0x58f25b:c.instructions+=1;goto B58f25b;
case 0x58f260:goto L58f260;
case 0x58f262:goto L58f262;
case 0x58f267:c.instructions+=1;goto B58f267;
case 0x58f26c:goto L58f26c;
case 0x58f26e:goto L58f26e;
case 0x58f273:c.instructions+=3;goto B58f273;
case 0x58f278:c.instructions+=2;goto B58f278;
case 0x58f27d:c.instructions+=1;goto B58f27d;
case 0x58f283:goto L58f283;
case 0x58f285:goto L58f285;
case 0x58f28a:goto L58f28a;
case 0x58f28d:c.instructions+=1;goto B58f28d;
case 0x58f28e:goto L58f28e;
case 0x58f293:c.instructions+=1;goto B58f293;
case 0x58f2a0:goto L58f2a0;
case 0x58f2a1:c.instructions+=4;goto B58f2a1;
case 0x58f2a2:c.instructions+=3;goto B58f2a2;
case 0x58f2a3:c.instructions+=2;goto B58f2a3;
case 0x58f2a5:c.instructions+=1;goto B58f2a5;
case 0x58f2aa:goto L58f2aa;
case 0x58f2ad:c.instructions+=3;goto B58f2ad;
case 0x58f2b0:c.instructions+=2;goto B58f2b0;
case 0x58f2b2:c.instructions+=1;goto B58f2b2;
case 0x58f2b4:goto L58f2b4;
case 0x58f2b7:c.instructions+=6;goto B58f2b7;
case 0x58f2b9:c.instructions+=5;goto B58f2b9;
case 0x58f2ba:c.instructions+=4;goto B58f2ba;
case 0x58f2bd:c.instructions+=3;goto B58f2bd;
case 0x58f2be:c.instructions+=2;goto B58f2be;
case 0x58f2c0:c.instructions+=1;goto B58f2c0;
case 0x58f2c5:goto L58f2c5;
case 0x58f2c7:c.instructions+=1;goto B58f2c7;
case 0x58f2c9:goto L58f2c9;
case 0x58f2cb:c.instructions+=6;goto B58f2cb;
case 0x58f2cd:c.instructions+=5;goto B58f2cd;
case 0x58f2d0:c.instructions+=4;goto B58f2d0;
case 0x58f2d2:c.instructions+=3;goto B58f2d2;
case 0x58f2d5:c.instructions+=2;goto B58f2d5;
case 0x58f2d7:c.instructions+=1;goto B58f2d7;
case 0x58f2dc:goto L58f2dc;
case 0x58f2dd:c.instructions+=1;goto B58f2dd;
case 0x58f2e2:goto L58f2e2;
case 0x58f2e5:goto L58f2e5;
case 0x58f2e7:c.instructions+=2;goto B58f2e7;
case 0x58f2e9:c.instructions+=1;goto B58f2e9;
case 0x58f2eb:goto L58f2eb;
case 0x58f2f0:goto L58f2f0;
case 0x58f2f3:c.instructions+=3;goto B58f2f3;
case 0x58f2f5:c.instructions+=2;goto B58f2f5;
case 0x58f2f7:c.instructions+=1;goto B58f2f7;
case 0x58f2f9:goto L58f2f9;
case 0x58f2fe:c.instructions+=1;goto B58f2fe;
case 0x58f300:goto L58f300;
case 0x58f303:c.instructions+=1;goto B58f303;
case 0x58f305:goto L58f305;
case 0x58f308:c.instructions+=1;goto B58f308;
case 0x58f30a:goto L58f30a;
case 0x58f30c:c.instructions+=2;goto B58f30c;
case 0x58f30e:c.instructions+=1;goto B58f30e;
case 0x58f310:goto L58f310;
case 0x58f312:goto L58f312;
case 0x58f314:c.instructions+=5;goto B58f314;
case 0x58f317:c.instructions+=4;goto B58f317;
case 0x58f319:c.instructions+=3;goto B58f319;
case 0x58f31a:c.instructions+=2;goto B58f31a;
case 0x58f31d:c.instructions+=1;goto B58f31d;
case 0x58f322:goto L58f322;
case 0x58f325:goto L58f325;
case 0x58f32a:goto L58f32a;
case 0x58f32d:c.instructions+=3;goto B58f32d;
case 0x58f32f:c.instructions+=2;goto B58f32f;
case 0x58f331:c.instructions+=1;goto B58f331;
case 0x58f333:goto L58f333;
case 0x58f334:c.instructions+=3;goto B58f334;
case 0x58f335:c.instructions+=2;goto B58f335;
case 0x58f337:c.instructions+=1;goto B58f337;
case 0x58f33c:goto L58f33c;
case 0x58f33f:c.instructions+=2;goto B58f33f;
case 0x58f340:c.instructions+=1;goto B58f340;
case 0x58f345:goto L58f345;
case 0x58f348:goto L58f348;
case 0x58f349:c.instructions+=7;goto B58f349;
case 0x58f34c:c.instructions+=6;goto B58f34c;
case 0x58f34e:c.instructions+=5;goto B58f34e;
case 0x58f351:c.instructions+=4;goto B58f351;
case 0x58f354:c.instructions+=3;goto B58f354;
case 0x58f355:c.instructions+=2;goto B58f355;
case 0x58f356:c.instructions+=1;goto B58f356;
case 0x58f360:goto L58f360;
case 0x58f361:c.instructions+=4;goto B58f361;
case 0x58f362:c.instructions+=3;goto B58f362;
case 0x58f363:c.instructions+=2;goto B58f363;
case 0x58f365:c.instructions+=1;goto B58f365;
case 0x58f36a:goto L58f36a;
case 0x58f36f:goto L58f36f;
case 0x58f372:c.instructions+=3;goto B58f372;
case 0x58f374:c.instructions+=2;goto B58f374;
case 0x58f376:c.instructions+=1;goto B58f376;
case 0x58f378:goto L58f378;
case 0x58f37d:c.instructions+=1;goto B58f37d;
case 0x58f380:goto L58f380;
case 0x58f383:c.instructions+=1;goto B58f383;
case 0x58f385:goto L58f385;
case 0x58f388:c.instructions+=1;goto B58f388;
case 0x58f38a:goto L58f38a;
case 0x58f38c:c.instructions+=2;goto B58f38c;
case 0x58f38e:c.instructions+=1;goto B58f38e;
case 0x58f390:goto L58f390;
case 0x58f392:goto L58f392;
case 0x58f394:c.instructions+=5;goto B58f394;
case 0x58f397:c.instructions+=4;goto B58f397;
case 0x58f399:c.instructions+=3;goto B58f399;
case 0x58f39a:c.instructions+=2;goto B58f39a;
case 0x58f39d:c.instructions+=1;goto B58f39d;
case 0x58f3a2:goto L58f3a2;
case 0x58f3a5:goto L58f3a5;
case 0x58f3aa:goto L58f3aa;
case 0x58f3ad:c.instructions+=3;goto B58f3ad;
case 0x58f3af:c.instructions+=2;goto B58f3af;
case 0x58f3b1:c.instructions+=1;goto B58f3b1;
case 0x58f3b3:goto L58f3b3;
case 0x58f3b6:c.instructions+=2;goto B58f3b6;
case 0x58f3b8:c.instructions+=1;goto B58f3b8;
case 0x58f3ba:goto L58f3ba;
case 0x58f3bb:c.instructions+=2;goto B58f3bb;
case 0x58f3bd:c.instructions+=1;goto B58f3bd;
case 0x58f3c2:goto L58f3c2;
case 0x58f3c5:c.instructions+=2;goto B58f3c5;
case 0x58f3c6:c.instructions+=1;goto B58f3c6;
case 0x58f3cb:goto L58f3cb;
case 0x58f3ce:c.instructions+=1;goto B58f3ce;
case 0x58f3d1:goto L58f3d1;
case 0x58f3d4:c.instructions+=8;goto B58f3d4;
case 0x58f3d7:c.instructions+=7;goto B58f3d7;
case 0x58f3da:c.instructions+=6;goto B58f3da;
case 0x58f3dd:c.instructions+=5;goto B58f3dd;
case 0x58f3e0:c.instructions+=4;goto B58f3e0;
case 0x58f3ea:c.instructions+=3;goto B58f3ea;
case 0x58f3ef:c.instructions+=2;goto B58f3ef;
case 0x58f3f1:c.instructions+=1;goto B58f3f1;
case 0x58f3f3:goto L58f3f3;
case 0x58f3f5:goto L58f3f5;
case 0x58f3f6:c.instructions+=5;goto B58f3f6;
case 0x58f3fc:c.instructions+=4;goto B58f3fc;
case 0x58f3fd:c.instructions+=3;goto B58f3fd;
case 0x58f403:c.instructions+=2;goto B58f403;
case 0x58f404:c.instructions+=1;goto B58f404;
case 0x58f410:goto L58f410;
case 0x58f415:c.instructions+=14;goto B58f415;
case 0x58f417:c.instructions+=13;goto B58f417;
case 0x58f419:c.instructions+=12;goto B58f419;
case 0x58f41e:c.instructions+=11;goto B58f41e;
case 0x58f423:c.instructions+=10;goto B58f423;
case 0x58f428:c.instructions+=9;goto B58f428;
case 0x58f42d:c.instructions+=8;goto B58f42d;
case 0x58f432:c.instructions+=7;goto B58f432;
case 0x58f437:c.instructions+=6;goto B58f437;
case 0x58f441:c.instructions+=5;goto B58f441;
case 0x58f44b:c.instructions+=4;goto B58f44b;
case 0x58f455:c.instructions+=3;goto B58f455;
case 0x58f45f:c.instructions+=2;goto B58f45f;
case 0x58f469:c.instructions+=1;goto B58f469;
case 0x58f46e:goto L58f46e;
case 0x58f471:c.instructions+=3;goto B58f471;
case 0x58f476:c.instructions+=2;goto B58f476;
case 0x58f480:c.instructions+=1;goto B58f480;
case 0x58f490:goto L58f490;
case 0x58f495:c.instructions+=3;goto B58f495;
case 0x58f49b:c.instructions+=2;goto B58f49b;
case 0x58f4a0:c.instructions+=1;goto B58f4a0;
case 0x58f4a5:goto L58f4a5;
case 0x58f4ac:c.instructions+=12;goto B58f4ac;
case 0x58f4b3:c.instructions+=11;goto B58f4b3;
case 0x58f4b6:c.instructions+=10;goto B58f4b6;
case 0x58f4b8:c.instructions+=9;goto B58f4b8;
case 0x58f4be:c.instructions+=8;goto B58f4be;
case 0x58f4c4:c.instructions+=7;goto B58f4c4;
case 0x58f4c9:c.instructions+=6;goto B58f4c9;
case 0x58f4ce:c.instructions+=5;goto B58f4ce;
case 0x58f4d8:c.instructions+=4;goto B58f4d8;
case 0x58f4e2:c.instructions+=3;goto B58f4e2;
case 0x58f4ec:c.instructions+=2;goto B58f4ec;
case 0x58f4f6:c.instructions+=1;goto B58f4f6;
case 0x58f4f8:goto L58f4f8;
case 0x58f502:goto L58f502;
case 0x58f504:c.instructions+=8;goto B58f504;
case 0x58f506:c.instructions+=7;goto B58f506;
case 0x58f50a:c.instructions+=6;goto B58f50a;
case 0x58f514:c.instructions+=5;goto B58f514;
case 0x58f518:c.instructions+=4;goto B58f518;
case 0x58f51f:c.instructions+=3;goto B58f51f;
case 0x58f526:c.instructions+=2;goto B58f526;
case 0x58f52e:c.instructions+=1;goto B58f52e;
case 0x58f533:goto L58f533;
case 0x58f535:c.instructions+=3;goto B58f535;
case 0x58f537:c.instructions+=2;goto B58f537;
case 0x58f53b:c.instructions+=1;goto B58f53b;
case 0x58f540:goto L58f540;
case 0x58f542:c.instructions+=4;goto B58f542;
case 0x58f546:c.instructions+=3;goto B58f546;
case 0x58f547:c.instructions+=2;goto B58f547;
case 0x58f549:c.instructions+=1;goto B58f549;
case 0x58f54e:goto L58f54e;
case 0x58f553:goto L58f553;
case 0x58f558:c.instructions+=2;goto B58f558;
case 0x58f55e:c.instructions+=1;goto B58f55e;
case 0x58f560:goto L58f560;
case 0x58f562:c.instructions+=10;goto B58f562;
case 0x58f567:c.instructions+=9;goto B58f567;
case 0x58f56d:c.instructions+=8;goto B58f56d;
case 0x58f56e:c.instructions+=7;goto B58f56e;
case 0x58f575:c.instructions+=6;goto B58f575;
case 0x58f576:c.instructions+=5;goto B58f576;
case 0x58f577:c.instructions+=4;goto B58f577;
case 0x58f579:c.instructions+=3;goto B58f579;
case 0x58f57d:c.instructions+=2;goto B58f57d;
case 0x58f585:c.instructions+=1;goto B58f585;
case 0x58f58a:goto L58f58a;
case 0x58f58d:c.instructions+=2;goto B58f58d;
case 0x58f592:c.instructions+=1;goto B58f592;
case 0x58f597:goto L58f597;
case 0x58f59a:c.instructions+=2;goto B58f59a;
case 0x58f5a2:c.instructions+=1;goto B58f5a2;
case 0x58f5a7:goto L58f5a7;
case 0x58f5ab:c.instructions+=4;goto B58f5ab;
case 0x58f5ac:c.instructions+=3;goto B58f5ac;
case 0x58f5b3:c.instructions+=2;goto B58f5b3;
case 0x58f5b6:c.instructions+=1;goto B58f5b6;
case 0x58f5c0:goto L58f5c0;
case 0x58f5c2:c.instructions+=10;goto B58f5c2;
case 0x58f5c7:c.instructions+=9;goto B58f5c7;
case 0x58f5cd:c.instructions+=8;goto B58f5cd;
case 0x58f5ce:c.instructions+=7;goto B58f5ce;
case 0x58f5d5:c.instructions+=6;goto B58f5d5;
case 0x58f5d6:c.instructions+=5;goto B58f5d6;
case 0x58f5d7:c.instructions+=4;goto B58f5d7;
case 0x58f5d9:c.instructions+=3;goto B58f5d9;
case 0x58f5dd:c.instructions+=2;goto B58f5dd;
case 0x58f5e5:c.instructions+=1;goto B58f5e5;
case 0x58f5ea:goto L58f5ea;
case 0x58f5ec:c.instructions+=3;goto B58f5ec;
case 0x58f5ee:c.instructions+=2;goto B58f5ee;
case 0x58f5f6:c.instructions+=1;goto B58f5f6;
case 0x58f5f8:goto L58f5f8;
case 0x58f5fa:c.instructions+=5;goto B58f5fa;
case 0x58f5fd:c.instructions+=4;goto B58f5fd;
case 0x58f5ff:c.instructions+=3;goto B58f5ff;
case 0x58f600:c.instructions+=2;goto B58f600;
case 0x58f603:c.instructions+=1;goto B58f603;
case 0x58f608:goto L58f608;
case 0x58f60a:c.instructions+=3;goto B58f60a;
case 0x58f60d:c.instructions+=2;goto B58f60d;
case 0x58f60f:c.instructions+=1;goto B58f60f;
case 0x58f611:goto L58f611;
case 0x58f615:c.instructions+=4;goto B58f615;
case 0x58f616:c.instructions+=3;goto B58f616;
case 0x58f61d:c.instructions+=2;goto B58f61d;
case 0x58f620:c.instructions+=1;goto B58f620;
case 0x58f630:goto L58f630;
case 0x58f635:goto L58f635;
case 0x58f63a:c.instructions+=7;goto B58f63a;
case 0x58f63c:c.instructions+=6;goto B58f63c;
case 0x58f63e:c.instructions+=5;goto B58f63e;
case 0x58f643:c.instructions+=4;goto B58f643;
case 0x58f648:c.instructions+=3;goto B58f648;
case 0x58f64d:c.instructions+=2;goto B58f64d;
case 0x58f654:c.instructions+=1;goto B58f654;
case 0x58f659:goto L58f659;
case 0x58f65e:c.instructions+=2;goto B58f65e;
case 0x58f660:c.instructions+=1;goto B58f660;
case 0x58f662:goto L58f662;
case 0x58f667:goto L58f667;
case 0x58f66c:goto L58f66c;
case 0x58f66e:c.instructions+=5;goto B58f66e;
case 0x58f674:c.instructions+=4;goto B58f674;
case 0x58f67a:c.instructions+=3;goto B58f67a;
case 0x58f67b:c.instructions+=2;goto B58f67b;
case 0x58f680:c.instructions+=1;goto B58f680;
case 0x58f685:goto L58f685;
case 0x58f688:c.instructions+=1;goto B58f688;
case 0x58f690:goto L58f690;
case 0x58f695:c.instructions+=2;goto B58f695;
case 0x58f697:c.instructions+=1;goto B58f697;
case 0x58f699:goto L58f699;
case 0x58f69e:c.instructions+=2;goto B58f69e;
case 0x58f6a0:c.instructions+=1;goto B58f6a0;
case 0x58f6a2:goto L58f6a2;
case 0x58f6a7:goto L58f6a7;
case 0x58f6ac:c.instructions+=2;goto B58f6ac;
case 0x58f6ae:c.instructions+=1;goto B58f6ae;
case 0x58f6b0:goto L58f6b0;
case 0x58f6b5:goto L58f6b5;
case 0x58f6ba:c.instructions+=2;goto B58f6ba;
case 0x58f6bc:c.instructions+=1;goto B58f6bc;
case 0x58f6be:goto L58f6be;
case 0x58f6c3:goto L58f6c3;
case 0x58f6c8:c.instructions+=1;goto B58f6c8;
case 0x58f6cd:goto L58f6cd;
case 0x58f6d0:goto L58f6d0;
case 0x58f6d6:c.instructions+=3;goto B58f6d6;
case 0x58f6db:c.instructions+=2;goto B58f6db;
case 0x58f6dd:c.instructions+=1;goto B58f6dd;
case 0x58f6df:goto L58f6df;
case 0x58f6e5:c.instructions+=15;goto B58f6e5;
case 0x58f6ea:c.instructions+=14;goto B58f6ea;
case 0x58f6ec:c.instructions+=13;goto B58f6ec;
case 0x58f6ee:c.instructions+=12;goto B58f6ee;
case 0x58f6f4:c.instructions+=11;goto B58f6f4;
case 0x58f6fa:c.instructions+=10;goto B58f6fa;
case 0x58f6ff:c.instructions+=9;goto B58f6ff;
case 0x58f704:c.instructions+=8;goto B58f704;
case 0x58f70a:c.instructions+=7;goto B58f70a;
case 0x58f70f:c.instructions+=6;goto B58f70f;
case 0x58f714:c.instructions+=5;goto B58f714;
case 0x58f71a:c.instructions+=4;goto B58f71a;
case 0x58f720:c.instructions+=3;goto B58f720;
case 0x58f725:c.instructions+=2;goto B58f725;
case 0x58f72a:c.instructions+=1;goto B58f72a;
case 0x58f72f:goto L58f72f;
case 0x58f732:goto L58f732;
case 0x58f737:c.instructions+=1;goto B58f737;
case 0x58f740:goto L58f740;
case 0x58f746:c.instructions+=3;goto B58f746;
case 0x58f74b:c.instructions+=2;goto B58f74b;
case 0x58f74d:c.instructions+=1;goto B58f74d;
case 0x58f74f:goto L58f74f;
case 0x58f755:c.instructions+=15;goto B58f755;
case 0x58f757:c.instructions+=14;goto B58f757;
case 0x58f75c:c.instructions+=13;goto B58f75c;
case 0x58f761:c.instructions+=12;goto B58f761;
case 0x58f766:c.instructions+=11;goto B58f766;
case 0x58f768:c.instructions+=10;goto B58f768;
case 0x58f769:c.instructions+=9;goto B58f769;
case 0x58f76e:c.instructions+=8;goto B58f76e;
case 0x58f773:c.instructions+=7;goto B58f773;
case 0x58f778:c.instructions+=6;goto B58f778;
case 0x58f77d:c.instructions+=5;goto B58f77d;
case 0x58f782:c.instructions+=4;goto B58f782;
case 0x58f78c:c.instructions+=3;goto B58f78c;
case 0x58f791:c.instructions+=2;goto B58f791;
case 0x58f796:c.instructions+=1;goto B58f796;
case 0x58f79b:goto L58f79b;
case 0x58f79d:goto L58f79d;
case 0x58f7a2:c.instructions+=3;goto B58f7a2;
case 0x58f7a8:c.instructions+=2;goto B58f7a8;
case 0x58f7b2:c.instructions+=1;goto B58f7b2;
case 0x58f7b7:goto L58f7b7;
case 0x58f7ba:c.instructions+=1;goto B58f7ba;
case 0x58f7bb:goto L58f7bb;
case 0x58f7c0:c.instructions+=1;goto B58f7c0;
case 0x58f7d0:goto L58f7d0;
case 0x58f7d4:c.instructions+=9;goto B58f7d4;
case 0x58f7d5:c.instructions+=8;goto B58f7d5;
case 0x58f7d7:c.instructions+=7;goto B58f7d7;
case 0x58f7da:c.instructions+=6;goto B58f7da;
case 0x58f7df:c.instructions+=5;goto B58f7df;
case 0x58f7e0:c.instructions+=4;goto B58f7e0;
case 0x58f7e3:c.instructions+=3;goto B58f7e3;
case 0x58f7e6:c.instructions+=2;goto B58f7e6;
case 0x58f7e7:c.instructions+=1;goto B58f7e7;
case 0x58f7ed:goto L58f7ed;
case 0x58f7f4:goto L58f7f4;
case 0x58f7f6:c.instructions+=1;goto B58f7f6;
case 0x58f7fb:goto L58f7fb;
case 0x58f7fd:c.instructions+=6;goto B58f7fd;
case 0x58f801:c.instructions+=5;goto B58f801;
case 0x58f803:c.instructions+=4;goto B58f803;
case 0x58f806:c.instructions+=3;goto B58f806;
case 0x58f807:c.instructions+=2;goto B58f807;
case 0x58f809:c.instructions+=1;goto B58f809;
case 0x58f80e:goto L58f80e;
case 0x58f812:c.instructions+=5;goto B58f812;
case 0x58f814:c.instructions+=4;goto B58f814;
case 0x58f816:c.instructions+=3;goto B58f816;
case 0x58f817:c.instructions+=2;goto B58f817;
case 0x58f819:c.instructions+=1;goto B58f819;
case 0x58f81e:goto L58f81e;
case 0x58f821:c.instructions+=2;goto B58f821;
case 0x58f823:c.instructions+=1;goto B58f823;
case 0x58f825:goto L58f825;
case 0x58f828:c.instructions+=2;goto B58f828;
case 0x58f82a:c.instructions+=1;goto B58f82a;
case 0x58f82c:goto L58f82c;
case 0x58f831:c.instructions+=1;goto B58f831;
case 0x58f833:goto L58f833;
case 0x58f835:c.instructions+=1;goto B58f835;
case 0x58f837:goto L58f837;
case 0x58f83a:c.instructions+=2;goto B58f83a;
case 0x58f83c:c.instructions+=1;goto B58f83c;
case 0x58f83e:goto L58f83e;
case 0x58f841:c.instructions+=1;goto B58f841;
case 0x58f843:goto L58f843;
case 0x58f846:goto L58f846;
case 0x58f848:c.instructions+=1;goto B58f848;
case 0x58f84a:goto L58f84a;
case 0x58f84c:goto L58f84c;
case 0x58f84d:c.instructions+=4;goto B58f84d;
case 0x58f84e:c.instructions+=3;goto B58f84e;
case 0x58f850:c.instructions+=2;goto B58f850;
case 0x58f851:c.instructions+=1;goto B58f851;
case 0x58f852:goto L58f852;
case 0x58f856:c.instructions+=4;goto B58f856;
case 0x58f859:c.instructions+=3;goto B58f859;
case 0x58f85b:c.instructions+=2;goto B58f85b;
case 0x58f85c:c.instructions+=1;goto B58f85c;
case 0x58f861:goto L58f861;
case 0x58f865:c.instructions+=5;goto B58f865;
case 0x58f868:c.instructions+=4;goto B58f868;
case 0x58f86a:c.instructions+=3;goto B58f86a;
case 0x58f86b:c.instructions+=2;goto B58f86b;
case 0x58f86d:c.instructions+=1;goto B58f86d;
case 0x58f872:goto L58f872;
case 0x58f873:c.instructions+=4;goto B58f873;
case 0x58f874:c.instructions+=3;goto B58f874;
case 0x58f875:c.instructions+=2;goto B58f875;
case 0x58f876:c.instructions+=1;goto B58f876;
case 0x58f87b:goto L58f87b;
case 0x58f87e:c.instructions+=1;goto B58f87e;
case 0x58f883:goto L58f883;
case 0x58f887:c.instructions+=5;goto B58f887;
case 0x58f88b:c.instructions+=4;goto B58f88b;
case 0x58f891:c.instructions+=3;goto B58f891;
case 0x58f897:c.instructions+=2;goto B58f897;
case 0x58f899:c.instructions+=1;goto B58f899;
case 0x58f89f:goto L58f89f;
case 0x58f8a0:c.instructions+=4;goto B58f8a0;
case 0x58f8a1:c.instructions+=3;goto B58f8a1;
case 0x58f8a3:c.instructions+=2;goto B58f8a3;
case 0x58f8a4:c.instructions+=1;goto B58f8a4;
case 0x58f8a5:goto L58f8a5;
case 0x58f8a9:c.instructions+=5;goto B58f8a9;
case 0x58f8ab:c.instructions+=4;goto B58f8ab;
case 0x58f8b1:c.instructions+=3;goto B58f8b1;
case 0x58f8b6:c.instructions+=2;goto B58f8b6;
case 0x58f8b7:c.instructions+=1;goto B58f8b7;
case 0x58f8bc:goto L58f8bc;
case 0x58f8bf:c.instructions+=2;goto B58f8bf;
case 0x58f8c0:c.instructions+=1;goto B58f8c0;
case 0x58f8c5:goto L58f8c5;
case 0x58f8c8:c.instructions+=5;goto B58f8c8;
case 0x58f8c9:c.instructions+=4;goto B58f8c9;
case 0x58f8cb:c.instructions+=3;goto B58f8cb;
case 0x58f8d0:c.instructions+=2;goto B58f8d0;
case 0x58f8d1:c.instructions+=1;goto B58f8d1;
case 0x58f8d6:goto L58f8d6;
case 0x58f8d9:c.instructions+=2;goto B58f8d9;
case 0x58f8da:c.instructions+=1;goto B58f8da;
case 0x58f8df:goto L58f8df;
case 0x58f8e2:c.instructions+=2;goto B58f8e2;
case 0x58f8e3:c.instructions+=1;goto B58f8e3;
case 0x58f8e8:goto L58f8e8;
case 0x58f8ec:c.instructions+=7;goto B58f8ec;
case 0x58f8ef:c.instructions+=6;goto B58f8ef;
case 0x58f8f1:c.instructions+=5;goto B58f8f1;
case 0x58f8f7:c.instructions+=4;goto B58f8f7;
case 0x58f8fc:c.instructions+=3;goto B58f8fc;
case 0x58f8fd:c.instructions+=2;goto B58f8fd;
case 0x58f8ff:c.instructions+=1;goto B58f8ff;
case 0x58f904:goto L58f904;
case 0x58f907:c.instructions+=2;goto B58f907;
case 0x58f908:c.instructions+=1;goto B58f908;
case 0x58f90d:goto L58f90d;
case 0x58f910:c.instructions+=5;goto B58f910;
case 0x58f911:c.instructions+=4;goto B58f911;
case 0x58f913:c.instructions+=3;goto B58f913;
case 0x58f918:c.instructions+=2;goto B58f918;
case 0x58f919:c.instructions+=1;goto B58f919;
case 0x58f91e:goto L58f91e;
case 0x58f921:c.instructions+=2;goto B58f921;
case 0x58f922:c.instructions+=1;goto B58f922;
case 0x58f927:goto L58f927;
case 0x58f92a:c.instructions+=2;goto B58f92a;
case 0x58f92b:c.instructions+=1;goto B58f92b;
case 0x58f930:goto L58f930;
case 0x58f931:c.instructions+=1;goto B58f931;
case 0x58f936:goto L58f936;
case 0x58f939:c.instructions+=3;goto B58f939;
case 0x58f93a:c.instructions+=2;goto B58f93a;
case 0x58f93b:c.instructions+=1;goto B58f93b;
case 0x58f940:goto L58f940;
case 0x58f943:c.instructions+=2;goto B58f943;
case 0x58f944:c.instructions+=1;goto B58f944;
case 0x58f949:goto L58f949;
case 0x58f94c:goto L58f94c;
case 0x58f94e:c.instructions+=1;goto B58f94e;
case 0x58f950:goto L58f950;
case 0x58f951:c.instructions+=4;goto B58f951;
case 0x58f952:c.instructions+=3;goto B58f952;
case 0x58f954:c.instructions+=2;goto B58f954;
case 0x58f955:c.instructions+=1;goto B58f955;
case 0x58f956:goto L58f956;
case 0x58f958:goto L58f958;
case 0x58f959:c.instructions+=3;goto B58f959;
case 0x58f95a:c.instructions+=2;goto B58f95a;
case 0x58f95b:c.instructions+=1;goto B58f95b;
case 0x58f970:goto L58f970;
case 0x58f973:c.instructions+=3;goto B58f973;
case 0x58f974:c.instructions+=2;goto B58f974;
case 0x58f976:c.instructions+=1;goto B58f976;
case 0x58f97b:goto L58f97b;
case 0x58f97d:c.instructions+=3;goto B58f97d;
case 0x58f980:c.instructions+=2;goto B58f980;
case 0x58f982:c.instructions+=1;goto B58f982;
case 0x58f984:goto L58f984;
case 0x58f985:c.instructions+=2;goto B58f985;
case 0x58f988:c.instructions+=1;goto B58f988;
case 0x58f989:goto L58f989;
case 0x58f98a:c.instructions+=5;goto B58f98a;
case 0x58f98b:c.instructions+=4;goto B58f98b;
case 0x58f98d:c.instructions+=3;goto B58f98d;
case 0x58f98e:c.instructions+=2;goto B58f98e;
case 0x58f990:c.instructions+=1;goto B58f990;
case 0x58f995:goto L58f995;
case 0x58f997:c.instructions+=2;goto B58f997;
case 0x58f99b:c.instructions+=1;goto B58f99b;
case 0x58f99d:goto L58f99d;
case 0x58f99f:c.instructions+=1;goto B58f99f;
case 0x58f9a0:goto L58f9a0;
case 0x58f9a3:c.instructions+=1;goto B58f9a3;
case 0x58f9a5:goto L58f9a5;
case 0x58f9a7:c.instructions+=2;goto B58f9a7;
case 0x58f9a9:c.instructions+=1;goto B58f9a9;
case 0x58f9ab:goto L58f9ab;
case 0x58f9ad:c.instructions+=2;goto B58f9ad;
case 0x58f9af:c.instructions+=1;goto B58f9af;
case 0x58f9b4:goto L58f9b4;
case 0x58f9b7:c.instructions+=2;goto B58f9b7;
case 0x58f9b9:c.instructions+=1;goto B58f9b9;
case 0x58f9bb:goto L58f9bb;
case 0x58f9c1:c.instructions+=13;goto B58f9c1;
case 0x58f9c3:c.instructions+=12;goto B58f9c3;
case 0x58f9c6:c.instructions+=11;goto B58f9c6;
case 0x58f9c9:c.instructions+=10;goto B58f9c9;
case 0x58f9cc:c.instructions+=9;goto B58f9cc;
case 0x58f9d0:c.instructions+=8;goto B58f9d0;
case 0x58f9d2:c.instructions+=7;goto B58f9d2;
case 0x58f9d5:c.instructions+=6;goto B58f9d5;
case 0x58f9d7:c.instructions+=5;goto B58f9d7;
case 0x58f9da:c.instructions+=4;goto B58f9da;
case 0x58f9dd:c.instructions+=3;goto B58f9dd;
case 0x58f9e0:c.instructions+=2;goto B58f9e0;
case 0x58f9e3:c.instructions+=1;goto B58f9e3;
case 0x58f9e5:goto L58f9e5;
case 0x58f9e7:c.instructions+=1;goto B58f9e7;
case 0x58f9e9:goto L58f9e9;
case 0x58f9eb:goto L58f9eb;
case 0x58f9ed:c.instructions+=2;goto B58f9ed;
case 0x58f9ef:c.instructions+=1;goto B58f9ef;
case 0x58f9f1:goto L58f9f1;
case 0x58f9f2:c.instructions+=5;goto B58f9f2;
case 0x58f9f3:c.instructions+=4;goto B58f9f3;
case 0x58f9f4:c.instructions+=3;goto B58f9f4;
case 0x58f9f5:c.instructions+=2;goto B58f9f5;
case 0x58f9f8:c.instructions+=1;goto B58f9f8;
case 0x58f9f9:goto L58f9f9;
case 0x58f9fc:c.instructions+=4;goto B58f9fc;
case 0x58f9fe:c.instructions+=3;goto B58f9fe;
case 0x58fa01:c.instructions+=2;goto B58fa01;
case 0x58fa04:c.instructions+=1;goto B58fa04;
case 0x58fa06:goto L58fa06;
case 0x58fa08:c.instructions+=9;goto B58fa08;
case 0x58fa0c:c.instructions+=8;goto B58fa0c;
case 0x58fa10:c.instructions+=7;goto B58fa10;
case 0x58fa14:c.instructions+=6;goto B58fa14;
case 0x58fa18:c.instructions+=5;goto B58fa18;
case 0x58fa19:c.instructions+=4;goto B58fa19;
case 0x58fa1a:c.instructions+=3;goto B58fa1a;
case 0x58fa1c:c.instructions+=2;goto B58fa1c;
case 0x58fa20:c.instructions+=1;goto B58fa20;
case 0x58fa25:goto L58fa25;
case 0x58fa27:c.instructions+=2;goto B58fa27;
case 0x58fa2d:c.instructions+=1;goto B58fa2d;
case 0x58fa2f:goto L58fa2f;
case 0x58fa35:goto L58fa35;
case 0x58fa36:c.instructions+=3;goto B58fa36;
case 0x58fa3a:c.instructions+=2;goto B58fa3a;
case 0x58fa3b:c.instructions+=1;goto B58fa3b;
case 0x58fa40:goto L58fa40;
case 0x58fa43:c.instructions+=7;goto B58fa43;
case 0x58fa44:c.instructions+=6;goto B58fa44;
case 0x58fa48:c.instructions+=5;goto B58fa48;
case 0x58fa4d:c.instructions+=4;goto B58fa4d;
case 0x58fa50:c.instructions+=3;goto B58fa50;
case 0x58fa55:c.instructions+=2;goto B58fa55;
case 0x58fa59:c.instructions+=1;goto B58fa59;
case 0x58fa5a:goto L58fa5a;
case 0x58fa5c:goto L58fa5c;
case 0x58fa61:goto L58fa61;
case 0x58fa67:c.instructions+=2;goto B58fa67;
case 0x58fa68:c.instructions+=1;goto B58fa68;
case 0x58fa6d:goto L58fa6d;
case 0x58fa70:c.instructions+=8;goto B58fa70;
case 0x58fa71:c.instructions+=7;goto B58fa71;
case 0x58fa74:c.instructions+=6;goto B58fa74;
case 0x58fa78:c.instructions+=5;goto B58fa78;
case 0x58fa79:c.instructions+=4;goto B58fa79;
case 0x58fa7a:c.instructions+=3;goto B58fa7a;
case 0x58fa7b:c.instructions+=2;goto B58fa7b;
case 0x58fa7e:c.instructions+=1;goto B58fa7e;
case 0x58fa80:goto L58fa80;
case 0x58fa81:c.instructions+=8;goto B58fa81;
case 0x58fa85:c.instructions+=7;goto B58fa85;
case 0x58fa86:c.instructions+=6;goto B58fa86;
case 0x58fa88:c.instructions+=5;goto B58fa88;
case 0x58fa8d:c.instructions+=4;goto B58fa8d;
case 0x58fa8e:c.instructions+=3;goto B58fa8e;
case 0x58fa92:c.instructions+=2;goto B58fa92;
case 0x58fa97:c.instructions+=1;goto B58fa97;
case 0x58fa99:goto L58fa99;
case 0x58fa9b:goto L58fa9b;
case 0x58faa0:c.instructions+=1;goto B58faa0;
case 0x58faa2:goto L58faa2;
case 0x58faa7:c.instructions+=1;goto B58faa7;
case 0x58faa9:goto L58faa9;
case 0x58faae:goto L58faae;
case 0x58fab2:c.instructions+=2;goto B58fab2;
case 0x58fab3:c.instructions+=1;goto B58fab3;
case 0x58fab8:goto L58fab8;
case 0x58fabc:c.instructions+=3;goto B58fabc;
case 0x58fabf:c.instructions+=2;goto B58fabf;
case 0x58fac0:c.instructions+=1;goto B58fac0;
case 0x58fac5:goto L58fac5;
case 0x58fac6:c.instructions+=3;goto B58fac6;
case 0x58fac7:c.instructions+=2;goto B58fac7;
case 0x58fac8:c.instructions+=1;goto B58fac8;
case 0x58fac9:goto L58fac9;
case 0x58face:c.instructions+=2;goto B58face;
case 0x58fad3:c.instructions+=1;goto B58fad3;
case 0x58fad5:goto L58fad5;
case 0x58fada:c.instructions+=1;goto B58fada;
case 0x58fadc:goto L58fadc;
case 0x58fadd:c.instructions+=1;goto B58fadd;
case 0x58fae2:goto L58fae2;
case 0x58fae6:c.instructions+=3;goto B58fae6;
case 0x58fae9:c.instructions+=2;goto B58fae9;
case 0x58faea:c.instructions+=1;goto B58faea;
case 0x58faef:goto L58faef;
case 0x58faf0:c.instructions+=3;goto B58faf0;
case 0x58faf5:c.instructions+=2;goto B58faf5;
case 0x58fafa:c.instructions+=1;goto B58fafa;
case 0x58faff:goto L58faff;
case 0x58fb00:c.instructions+=2;goto B58fb00;
case 0x58fb05:c.instructions+=1;goto B58fb05;
case 0x58fb0a:goto L58fb0a;
case 0x58fb0d:c.instructions+=2;goto B58fb0d;
case 0x58fb0f:c.instructions+=1;goto B58fb0f;
case 0x58fb11:goto L58fb11;
case 0x58fb16:c.instructions+=1;goto B58fb16;
case 0x58fb1b:goto L58fb1b;
case 0x58fb1e:c.instructions+=2;goto B58fb1e;
case 0x58fb20:c.instructions+=1;goto B58fb20;
case 0x58fb22:goto L58fb22;
case 0x58fb27:c.instructions+=2;goto B58fb27;
case 0x58fb2c:c.instructions+=1;goto B58fb2c;
case 0x58fb31:goto L58fb31;
case 0x58fb34:goto L58fb34;
case 0x58fb39:goto L58fb39;
case 0x58fb3b:c.instructions+=2;goto B58fb3b;
case 0x58fb3e:c.instructions+=1;goto B58fb3e;
case 0x58fb43:goto L58fb43;
case 0x58fb45:c.instructions+=1;goto B58fb45;
case 0x58fb47:goto L58fb47;
case 0x58fb4b:c.instructions+=3;goto B58fb4b;
case 0x58fb4c:c.instructions+=2;goto B58fb4c;
case 0x58fb4d:c.instructions+=1;goto B58fb4d;
case 0x58fb52:goto L58fb52;
case 0x58fb54:c.instructions+=2;goto B58fb54;
case 0x58fb59:c.instructions+=1;goto B58fb59;
case 0x58fb5e:goto L58fb5e;
case 0x58fb61:goto L58fb61;
case 0x58fb62:c.instructions+=4;goto B58fb62;
case 0x58fb6c:c.instructions+=3;goto B58fb6c;
case 0x58fb6d:c.instructions+=2;goto B58fb6d;
case 0x58fb6e:c.instructions+=1;goto B58fb6e;
case 0x58fb70:goto L58fb70;
case 0x58fb74:c.instructions+=3;goto B58fb74;
case 0x58fb77:c.instructions+=2;goto B58fb77;
case 0x58fb78:c.instructions+=1;goto B58fb78;
case 0x58fb7e:goto L58fb7e;
case 0x58fb85:goto L58fb85;
case 0x58fb89:c.instructions+=6;goto B58fb89;
case 0x58fb8a:c.instructions+=5;goto B58fb8a;
case 0x58fb8e:c.instructions+=4;goto B58fb8e;
case 0x58fb94:c.instructions+=3;goto B58fb94;
case 0x58fb95:c.instructions+=2;goto B58fb95;
case 0x58fb96:c.instructions+=1;goto B58fb96;
case 0x58fb9b:goto L58fb9b;
case 0x58fb9e:c.instructions+=2;goto B58fb9e;
case 0x58fba0:c.instructions+=1;goto B58fba0;
case 0x58fba2:goto L58fba2;
case 0x58fba8:c.instructions+=4;goto B58fba8;
case 0x58fbaa:c.instructions+=3;goto B58fbaa;
case 0x58fbab:c.instructions+=2;goto B58fbab;
case 0x58fbac:c.instructions+=1;goto B58fbac;
case 0x58fbb1:goto L58fbb1;
case 0x58fbb4:goto L58fbb4;
case 0x58fbba:c.instructions+=3;goto B58fbba;
case 0x58fbbb:c.instructions+=2;goto B58fbbb;
case 0x58fbbc:c.instructions+=1;goto B58fbbc;
case 0x58fbc1:goto L58fbc1;
case 0x58fbc2:c.instructions+=1;goto B58fbc2;
case 0x58fbc7:goto L58fbc7;
case 0x58fbca:c.instructions+=3;goto B58fbca;
case 0x58fbcc:c.instructions+=2;goto B58fbcc;
case 0x58fbcd:c.instructions+=1;goto B58fbcd;
case 0x58fbcf:goto L58fbcf;
case 0x58fbd3:c.instructions+=4;goto B58fbd3;
case 0x58fbd5:c.instructions+=3;goto B58fbd5;
case 0x58fbd6:c.instructions+=2;goto B58fbd6;
case 0x58fbd7:c.instructions+=1;goto B58fbd7;
case 0x58fbdc:goto L58fbdc;
case 0x58fbde:c.instructions+=1;goto B58fbde;
case 0x58fbe3:goto L58fbe3;
case 0x58fbed:c.instructions+=2;goto B58fbed;
case 0x58fbee:c.instructions+=1;goto B58fbee;
case 0x58fbef:goto L58fbef;
case 0x58fbf4:c.instructions+=1;goto B58fbf4;
case 0x58fbf9:goto L58fbf9;
case 0x58fbfc:c.instructions+=2;goto B58fbfc;
case 0x58fbfe:c.instructions+=1;goto B58fbfe;
case 0x58fc00:goto L58fc00;
case 0x58fc02:c.instructions+=1;goto B58fc02;
case 0x58fc07:goto L58fc07;
case 0x58fc0a:goto L58fc0a;
case 0x58fc0c:goto L58fc0c;
case 0x58fc0e:c.instructions+=1;goto B58fc0e;
case 0x58fc13:goto L58fc13;
case 0x58fc15:c.instructions+=2;goto B58fc15;
case 0x58fc1a:c.instructions+=1;goto B58fc1a;
case 0x58fc1f:goto L58fc1f;
case 0x58fc22:c.instructions+=3;goto B58fc22;
case 0x58fc2c:c.instructions+=2;goto B58fc2c;
case 0x58fc2d:c.instructions+=1;goto B58fc2d;
case 0x58fc2e:goto L58fc2e;
case 0x58fc30:c.instructions+=2;goto B58fc30;
case 0x58fc35:c.instructions+=1;goto B58fc35;
case 0x58fc3a:goto L58fc3a;
case 0x58fc3d:c.instructions+=1;goto B58fc3d;
case 0x58fc42:goto L58fc42;
case 0x58fc44:c.instructions+=2;goto B58fc44;
case 0x58fc49:c.instructions+=1;goto B58fc49;
case 0x58fc4e:goto L58fc4e;
case 0x58fc54:c.instructions+=2;goto B58fc54;
case 0x58fc55:c.instructions+=1;goto B58fc55;
case 0x58fc5a:goto L58fc5a;
case 0x58fc5d:c.instructions+=2;goto B58fc5d;
case 0x58fc5f:c.instructions+=1;goto B58fc5f;
case 0x58fc65:goto L58fc65;
case 0x58fc69:c.instructions+=3;goto B58fc69;
case 0x58fc6d:c.instructions+=2;goto B58fc6d;
case 0x58fc6e:c.instructions+=1;goto B58fc6e;
case 0x58fc73:goto L58fc73;
case 0x58fc7d:c.instructions+=2;goto B58fc7d;
case 0x58fc7e:c.instructions+=1;goto B58fc7e;
case 0x58fc7f:goto L58fc7f;
case 0x58fc81:c.instructions+=2;goto B58fc81;
case 0x58fc86:c.instructions+=1;goto B58fc86;
case 0x58fc8b:goto L58fc8b;
case 0x58fc90:c.instructions+=2;goto B58fc90;
case 0x58fc91:c.instructions+=1;goto B58fc91;
case 0x58fc96:goto L58fc96;
case 0x58fc99:c.instructions+=2;goto B58fc99;
case 0x58fc9b:c.instructions+=1;goto B58fc9b;
case 0x58fca1:goto L58fca1;
case 0x58fca5:c.instructions+=3;goto B58fca5;
case 0x58fca6:c.instructions+=2;goto B58fca6;
case 0x58fcaa:c.instructions+=1;goto B58fcaa;
case 0x58fcaf:goto L58fcaf;
case 0x58fcb9:c.instructions+=2;goto B58fcb9;
case 0x58fcba:c.instructions+=1;goto B58fcba;
case 0x58fcbb:goto L58fcbb;
case 0x58fcbd:c.instructions+=2;goto B58fcbd;
case 0x58fcc2:c.instructions+=1;goto B58fcc2;
case 0x58fcc7:goto L58fcc7;
case 0x58fccd:c.instructions+=2;goto B58fccd;
case 0x58fcce:c.instructions+=1;goto B58fcce;
case 0x58fcd3:goto L58fcd3;
case 0x58fcd6:c.instructions+=2;goto B58fcd6;
case 0x58fcd8:c.instructions+=1;goto B58fcd8;
case 0x58fcda:goto L58fcda;
case 0x58fcde:c.instructions+=3;goto B58fcde;
case 0x58fce2:c.instructions+=2;goto B58fce2;
case 0x58fce3:c.instructions+=1;goto B58fce3;
case 0x58fce8:goto L58fce8;
case 0x58fcea:c.instructions+=1;goto B58fcea;
case 0x58fcef:goto L58fcef;
case 0x58fcf1:c.instructions+=1;goto B58fcf1;
case 0x58fcf6:goto L58fcf6;
case 0x58fcf8:c.instructions+=1;goto B58fcf8;
case 0x58fcfa:goto L58fcfa;
case 0x58fcfb:c.instructions+=1;goto B58fcfb;
case 0x58fd00:goto L58fd00;
case 0x58fd06:c.instructions+=2;goto B58fd06;
case 0x58fd07:c.instructions+=1;goto B58fd07;
case 0x58fd0c:goto L58fd0c;
case 0x58fd0f:c.instructions+=2;goto B58fd0f;
case 0x58fd11:c.instructions+=1;goto B58fd11;
case 0x58fd13:goto L58fd13;
case 0x58fd17:c.instructions+=3;goto B58fd17;
case 0x58fd1b:c.instructions+=2;goto B58fd1b;
case 0x58fd1c:c.instructions+=1;goto B58fd1c;
case 0x58fd21:goto L58fd21;
case 0x58fd2b:c.instructions+=2;goto B58fd2b;
case 0x58fd2c:c.instructions+=1;goto B58fd2c;
case 0x58fd50:goto L58fd50;
case 0x58fd51:c.instructions+=9;goto B58fd51;
case 0x58fd53:c.instructions+=8;goto B58fd53;
case 0x58fd56:c.instructions+=7;goto B58fd56;
case 0x58fd5c:c.instructions+=6;goto B58fd5c;
case 0x58fd5d:c.instructions+=5;goto B58fd5d;
case 0x58fd5e:c.instructions+=4;goto B58fd5e;
case 0x58fd5f:c.instructions+=3;goto B58fd5f;
case 0x58fd61:c.instructions+=2;goto B58fd61;
case 0x58fd62:c.instructions+=1;goto B58fd62;
case 0x58fd67:goto L58fd67;
case 0x58fd6a:c.instructions+=4;goto B58fd6a;
case 0x58fd6d:c.instructions+=3;goto B58fd6d;
case 0x58fd70:c.instructions+=2;goto B58fd70;
case 0x58fd73:c.instructions+=1;goto B58fd73;
case 0x58fd75:goto L58fd75;
case 0x58fd77:c.instructions+=1;goto B58fd77;
case 0x58fd79:goto L58fd79;
case 0x58fd7a:c.instructions+=1;goto B58fd7a;
case 0x58fd7f:goto L58fd7f;
case 0x58fd82:c.instructions+=11;goto B58fd82;
case 0x58fd85:c.instructions+=10;goto B58fd85;
case 0x58fd87:c.instructions+=9;goto B58fd87;
case 0x58fd8a:c.instructions+=8;goto B58fd8a;
case 0x58fd8d:c.instructions+=7;goto B58fd8d;
case 0x58fd90:c.instructions+=6;goto B58fd90;
case 0x58fd91:c.instructions+=5;goto B58fd91;
case 0x58fd93:c.instructions+=4;goto B58fd93;
case 0x58fd99:c.instructions+=3;goto B58fd99;
case 0x58fd9f:c.instructions+=2;goto B58fd9f;
case 0x58fda3:c.instructions+=1;goto B58fda3;
case 0x58fda5:goto L58fda5;
case 0x58fda9:c.instructions+=1;goto B58fda9;
case 0x58fdab:goto L58fdab;
case 0x58fdae:c.instructions+=1;goto B58fdae;
case 0x58fdb0:goto L58fdb0;
case 0x58fdb4:c.instructions+=3;goto B58fdb4;
case 0x58fdb6:c.instructions+=2;goto B58fdb6;
case 0x58fdbb:c.instructions+=1;goto B58fdbb;
case 0x58fdbf:goto L58fdbf;
case 0x58fdc1:goto L58fdc1;
case 0x58fdc3:c.instructions+=4;goto B58fdc3;
case 0x58fdc8:c.instructions+=3;goto B58fdc8;
case 0x58fdcd:c.instructions+=2;goto B58fdcd;
case 0x58fdce:c.instructions+=1;goto B58fdce;
case 0x58fdd3:goto L58fdd3;
case 0x58fdd6:c.instructions+=4;goto B58fdd6;
case 0x58fdd7:c.instructions+=3;goto B58fdd7;
case 0x58fddb:c.instructions+=2;goto B58fddb;
case 0x58fddc:c.instructions+=1;goto B58fddc;
case 0x58fde1:goto L58fde1;
case 0x58fde6:goto L58fde6;
case 0x58fdec:c.instructions+=7;goto B58fdec;
case 0x58fded:c.instructions+=6;goto B58fded;
case 0x58fdf1:c.instructions+=5;goto B58fdf1;
case 0x58fdf2:c.instructions+=4;goto B58fdf2;
case 0x58fdf4:c.instructions+=3;goto B58fdf4;
case 0x58fdf6:c.instructions+=2;goto B58fdf6;
case 0x58fdf7:c.instructions+=1;goto B58fdf7;
case 0x58fdfc:goto L58fdfc;
case 0x58fdff:c.instructions+=1;goto B58fdff;
case 0x58fe04:goto L58fe04;
case 0x58fe0a:c.instructions+=1;goto B58fe0a;
case 0x58fe0c:goto L58fe0c;
case 0x58fe16:c.instructions+=3;goto B58fe16;
case 0x58fe1c:c.instructions+=2;goto B58fe1c;
case 0x58fe1d:c.instructions+=1;goto B58fe1d;
case 0x58fe22:goto L58fe22;
case 0x58fe25:c.instructions+=1;goto B58fe25;
case 0x58fe2f:goto L58fe2f;
case 0x58fe30:c.instructions+=1;goto B58fe30;
case 0x58fe35:goto L58fe35;
case 0x58fe38:c.instructions+=2;goto B58fe38;
case 0x58fe3a:c.instructions+=1;goto B58fe3a;
case 0x58fe3f:goto L58fe3f;
case 0x58fe44:goto L58fe44;
case 0x58fe46:c.instructions+=1;goto B58fe46;
case 0x58fe4b:goto L58fe4b;
case 0x58fe4c:c.instructions+=1;goto B58fe4c;
case 0x58fe51:goto L58fe51;
case 0x58fe54:c.instructions+=2;goto B58fe54;
case 0x58fe56:c.instructions+=1;goto B58fe56;
case 0x58fe5b:goto L58fe5b;
case 0x58fe60:goto L58fe60;
case 0x58fe62:c.instructions+=1;goto B58fe62;
case 0x58fe67:goto L58fe67;
case 0x58fe6c:goto L58fe6c;
case 0x58fe6e:c.instructions+=2;goto B58fe6e;
case 0x58fe70:c.instructions+=1;goto B58fe70;
case 0x58fe75:goto L58fe75;
case 0x58fe78:c.instructions+=3;goto B58fe78;
case 0x58fe7b:c.instructions+=2;goto B58fe7b;
case 0x58fe81:c.instructions+=1;goto B58fe81;
case 0x58fe86:goto L58fe86;
case 0x58fe8c:c.instructions+=1;goto B58fe8c;
case 0x58fe91:goto L58fe91;
case 0x58fe97:c.instructions+=3;goto B58fe97;
case 0x58fe98:c.instructions+=2;goto B58fe98;
case 0x58fe9e:c.instructions+=1;goto B58fe9e;
case 0x58fea3:goto L58fea3;
case 0x58fea4:c.instructions+=2;goto B58fea4;
case 0x58feaa:c.instructions+=1;goto B58feaa;
case 0x58feaf:goto L58feaf;
case 0x58feb2:c.instructions+=4;goto B58feb2;
case 0x58feb7:c.instructions+=3;goto B58feb7;
case 0x58feba:c.instructions+=2;goto B58feba;
case 0x58febf:c.instructions+=1;goto B58febf;
case 0x58fec1:goto L58fec1;
case 0x58fec4:c.instructions+=1;goto B58fec4;
case 0x58fec6:goto L58fec6;
case 0x58fecb:goto L58fecb;
case 0x58fecd:c.instructions+=1;goto B58fecd;
case 0x58fed2:goto L58fed2;
case 0x58fed4:goto L58fed4;
case 0x58fed9:goto L58fed9;
case 0x58fedb:c.instructions+=1;goto B58fedb;
case 0x58fee0:goto L58fee0;
case 0x58fee5:goto L58fee5;
case 0x58feeb:c.instructions+=2;goto B58feeb;
case 0x58fef1:c.instructions+=1;goto B58fef1;
case 0x58fef6:goto L58fef6;
case 0x58fef8:c.instructions+=1;goto B58fef8;
case 0x58fefd:goto L58fefd;
case 0x58fefe:c.instructions+=5;goto B58fefe;
case 0x58feff:c.instructions+=4;goto B58feff;
case 0x58ff00:c.instructions+=3;goto B58ff00;
case 0x58ff02:c.instructions+=2;goto B58ff02;
case 0x58ff03:c.instructions+=1;goto B58ff03;
case 0x58ff10:goto L58ff10;
case 0x58ff11:c.instructions+=13;goto B58ff11;
case 0x58ff13:c.instructions+=12;goto B58ff13;
case 0x58ff16:c.instructions+=11;goto B58ff16;
case 0x58ff18:c.instructions+=10;goto B58ff18;
case 0x58ff1d:c.instructions+=9;goto B58ff1d;
case 0x58ff23:c.instructions+=8;goto B58ff23;
case 0x58ff24:c.instructions+=7;goto B58ff24;
case 0x58ff2b:c.instructions+=6;goto B58ff2b;
case 0x58ff31:c.instructions+=5;goto B58ff31;
case 0x58ff32:c.instructions+=4;goto B58ff32;
case 0x58ff33:c.instructions+=3;goto B58ff33;
case 0x58ff34:c.instructions+=2;goto B58ff34;
case 0x58ff38:c.instructions+=1;goto B58ff38;
case 0x58ff3d:goto L58ff3d;
case 0x58ff40:c.instructions+=2;goto B58ff40;
case 0x58ff42:c.instructions+=1;goto B58ff42;
case 0x58ff44:goto L58ff44;
case 0x58ff49:c.instructions+=8;goto B58ff49;
case 0x58ff50:c.instructions+=7;goto B58ff50;
case 0x58ff57:c.instructions+=6;goto B58ff57;
case 0x58ff58:c.instructions+=5;goto B58ff58;
case 0x58ff59:c.instructions+=4;goto B58ff59;
case 0x58ff5a:c.instructions+=3;goto B58ff5a;
case 0x58ff5c:c.instructions+=2;goto B58ff5c;
case 0x58ff5d:c.instructions+=1;goto B58ff5d;
case 0x58ff60:goto L58ff60;
case 0x58ff62:c.instructions+=1;goto B58ff62;
case 0x58ff67:goto L58ff67;
case 0x58ff6a:c.instructions+=4;goto B58ff6a;
case 0x58ff6c:c.instructions+=3;goto B58ff6c;
case 0x58ff6f:c.instructions+=2;goto B58ff6f;
case 0x58ff72:c.instructions+=1;goto B58ff72;
case 0x58ff74:goto L58ff74;
case 0x58ff76:c.instructions+=1;goto B58ff76;
case 0x58ff78:goto L58ff78;
case 0x58ff7d:c.instructions+=8;goto B58ff7d;
case 0x58ff84:c.instructions+=7;goto B58ff84;
case 0x58ff8b:c.instructions+=6;goto B58ff8b;
case 0x58ff8c:c.instructions+=5;goto B58ff8c;
case 0x58ff8d:c.instructions+=4;goto B58ff8d;
case 0x58ff8e:c.instructions+=3;goto B58ff8e;
case 0x58ff90:c.instructions+=2;goto B58ff90;
case 0x58ff91:c.instructions+=1;goto B58ff91;
case 0x58ff94:goto L58ff94;
case 0x58ff99:c.instructions+=1;goto B58ff99;
case 0x58ff9e:goto L58ff9e;
case 0x58ffa1:c.instructions+=2;goto B58ffa1;
case 0x58ffa3:c.instructions+=1;goto B58ffa3;
case 0x58ffa9:goto L58ffa9;
case 0x58ffac:c.instructions+=1;goto B58ffac;
case 0x58ffb2:goto L58ffb2;
case 0x58ffb3:c.instructions+=2;goto B58ffb3;
case 0x58ffb4:c.instructions+=1;goto B58ffb4;
case 0x58ffb9:goto L58ffb9;
case 0x58ffbc:c.instructions+=2;goto B58ffbc;
case 0x58ffbe:c.instructions+=1;goto B58ffbe;
case 0x58ffc0:goto L58ffc0;
case 0x58ffc5:c.instructions+=8;goto B58ffc5;
case 0x58ffcc:c.instructions+=7;goto B58ffcc;
case 0x58ffd3:c.instructions+=6;goto B58ffd3;
case 0x58ffd4:c.instructions+=5;goto B58ffd4;
case 0x58ffd5:c.instructions+=4;goto B58ffd5;
case 0x58ffd6:c.instructions+=3;goto B58ffd6;
case 0x58ffd8:c.instructions+=2;goto B58ffd8;
case 0x58ffd9:c.instructions+=1;goto B58ffd9;
case 0x58ffdc:goto L58ffdc;
case 0x58ffe2:c.instructions+=3;goto B58ffe2;
case 0x58ffe4:c.instructions+=2;goto B58ffe4;
case 0x58ffe6:c.instructions+=1;goto B58ffe6;
case 0x58ffe8:goto L58ffe8;
case 0x58ffee:c.instructions+=5;goto B58ffee;
case 0x58fff0:c.instructions+=4;goto B58fff0;
case 0x58fff3:c.instructions+=3;goto B58fff3;
case 0x58fff4:c.instructions+=2;goto B58fff4;
case 0x58fff5:c.instructions+=1;goto B58fff5;
case 0x58fffa:goto L58fffa;
case 0x58fffd:c.instructions+=2;goto B58fffd;
case 0x58ffff:c.instructions+=1;goto B58ffff;
default:missing_instruction(c.pc);}
B58f005:L58f005:{c.instructions+=2;NFSU2_TR(0x58f005);
s4(0x866a1c,u32(0x0ull));
}
B58f00f:{NFSU2_TR(0x58f00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f014ull));
TAIL_STATIC(0x585720u,585);
}
B58f014:L58f014:{c.instructions+=2;NFSU2_TR(0x58f014);
s4(0x866a14,u32(0x0ull));
}
B58f01e:{NFSU2_TR(0x58f01e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f020:L58f020:{c.instructions+=13;NFSU2_TR(0x58f020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x414ull))));
}
B58f026:{NFSU2_TR(0x58f026);
u8 U[8];
w4(U+0,u32(u32(u32(0x420ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f02d:{NFSU2_TR(0x58f02d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f02e:{NFSU2_TR(0x58f02e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f02f:{NFSU2_TR(0x58f02f);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58f036:{NFSU2_TR(0x58f036);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f037:{NFSU2_TR(0x58f037);
__builtin_memmove((R+4),(R+0),4);
}
B58f039:{NFSU2_TR(0x58f039);
__builtin_memmove((R+12),(R+4),4);
}
B58f03b:{NFSU2_TR(0x58f03b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B58f03e:{NFSU2_TR(0x58f03e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B58f040:{NFSU2_TR(0x58f040);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58f044:{NFSU2_TR(0x58f044);
u8 U[8];
w4(U+0,u32(u32(u32(0x418ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f04b:{NFSU2_TR(0x58f04b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58f04f:L58f04f:{c.instructions+=1;NFSU2_TR(0x58f04f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L58f051;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f04fu);}goto L58f04f;}
}
B58f051:L58f051:{c.instructions+=2;NFSU2_TR(0x58f051);
__builtin_memmove((R+4),(R+12),4);
}
B58f053:{NFSU2_TR(0x58f053);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B58f056:L58f056:{c.instructions+=1;NFSU2_TR(0x58f056);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L58f058;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f056u);}goto L58f056;}
}
B58f058:L58f058:{c.instructions+=9;NFSU2_TR(0x58f058);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f05a:{NFSU2_TR(0x58f05a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58f05e:{NFSU2_TR(0x58f05e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B58f061:{NFSU2_TR(0x58f061);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f062:{NFSU2_TR(0x58f062);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58f066:{NFSU2_TR(0x58f066);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f06d:{NFSU2_TR(0x58f06d);
u8 U[5];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58f074:{NFSU2_TR(0x58f074);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f078:{NFSU2_TR(0x58f078);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f07dull));
TAIL_STATIC(0x581d90u,581);
}
B58f07d:L58f07d:{c.instructions+=3;NFSU2_TR(0x58f07d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B58f081:{NFSU2_TR(0x58f081);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
w1(R+512,u8((r1(U+0))<(u8(0x12ull))));
}
B58f084:{NFSU2_TR(0x58f084);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L58f1e9;}}
}
B58f08a:L58f08a:{c.instructions+=4;NFSU2_TR(0x58f08a);
{u32 ea_=u32(r4(R+16)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58f091:{NFSU2_TR(0x58f091);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B58f097:{NFSU2_TR(0x58f097);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B58f09b:{NFSU2_TR(0x58f09b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f0a0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B58f0a0:L58f0a0:{c.instructions+=6;NFSU2_TR(0x58f0a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f0a4:{NFSU2_TR(0x58f0a4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58f0a8:{NFSU2_TR(0x58f0a8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B58f0ac:{NFSU2_TR(0x58f0ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B58f0ae:{NFSU2_TR(0x58f0ae);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58f0b1:{NFSU2_TR(0x58f0b1);
if(r1(R+514)){{goto L58f0b9;}}
}
B58f0b3:L58f0b3:{c.instructions+=1;NFSU2_TR(0x58f0b3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B58f0b9:L58f0b9:{c.instructions+=3;NFSU2_TR(0x58f0b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x430ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f0c0:{NFSU2_TR(0x58f0c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f0c1:{NFSU2_TR(0x58f0c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f0c6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B58f0c6:L58f0c6:{c.instructions+=3;NFSU2_TR(0x58f0c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f0c7:{NFSU2_TR(0x58f0c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f0c8:{NFSU2_TR(0x58f0c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f0cdull));
TAIL_STATIC(0x583930u,583);
}
B58f0cd:L58f0cd:{c.instructions+=5;NFSU2_TR(0x58f0cd);
w4(R+0,u32(r1(R+12)));
}
B58f0d0:{NFSU2_TR(0x58f0d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58f0d3:{NFSU2_TR(0x58f0d3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B58f0d4:{NFSU2_TR(0x58f0d4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f0d7:{NFSU2_TR(0x58f0d7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L58f1e9;}}
}
B58f0dd:L58f0dd:{c.instructions+=1;NFSU2_TR(0x58f0dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x58f1f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B58f0e4:L58f0e4:{c.instructions+=5;NFSU2_TR(0x58f0e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f0eb:{NFSU2_TR(0x58f0eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f0ec:{NFSU2_TR(0x58f0ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58f0f0:{NFSU2_TR(0x58f0f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f0f1:{NFSU2_TR(0x58f0f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f0f6ull));
TAIL_STATIC(0x5895c0u,589);
}
B58f0f6:L58f0f6:{c.instructions+=6;NFSU2_TR(0x58f0f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f0f9:{NFSU2_TR(0x58f0f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f0fa:{NFSU2_TR(0x58f0fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f0fb:{NFSU2_TR(0x58f0fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f0fc:{NFSU2_TR(0x58f0fc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f102:{NFSU2_TR(0x58f102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f103:L58f103:{c.instructions+=5;NFSU2_TR(0x58f103);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f10a:{NFSU2_TR(0x58f10a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f10b:{NFSU2_TR(0x58f10b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58f10f:{NFSU2_TR(0x58f10f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f110:{NFSU2_TR(0x58f110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f115ull));
TAIL_STATIC(0x586060u,586);
}
B58f115:L58f115:{c.instructions+=6;NFSU2_TR(0x58f115);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f118:{NFSU2_TR(0x58f118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f119:{NFSU2_TR(0x58f119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f11a:{NFSU2_TR(0x58f11a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f11b:{NFSU2_TR(0x58f11b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f121:{NFSU2_TR(0x58f121);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f122:L58f122:{c.instructions+=5;NFSU2_TR(0x58f122);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58f129:{NFSU2_TR(0x58f129);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f12a:{NFSU2_TR(0x58f12a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58f12e:{NFSU2_TR(0x58f12e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f12f:{NFSU2_TR(0x58f12f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f134ull));
TAIL_STATIC(0x5896f0u,589);
}
B58f134:L58f134:{c.instructions+=6;NFSU2_TR(0x58f134);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f137:{NFSU2_TR(0x58f137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f138:{NFSU2_TR(0x58f138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f139:{NFSU2_TR(0x58f139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f13a:{NFSU2_TR(0x58f13a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f140:{NFSU2_TR(0x58f140);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f141:L58f141:{c.instructions+=5;NFSU2_TR(0x58f141);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f148:{NFSU2_TR(0x58f148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f149:{NFSU2_TR(0x58f149);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58f14d:{NFSU2_TR(0x58f14d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f14e:{NFSU2_TR(0x58f14e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f153ull));
TAIL_STATIC(0x58c420u,58c);
}
B58f153:L58f153:{c.instructions+=6;NFSU2_TR(0x58f153);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f156:{NFSU2_TR(0x58f156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f157:{NFSU2_TR(0x58f157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f158:{NFSU2_TR(0x58f158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f159:{NFSU2_TR(0x58f159);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f15f:{NFSU2_TR(0x58f15f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f160:L58f160:{c.instructions+=3;NFSU2_TR(0x58f160);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f167:{NFSU2_TR(0x58f167);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f168:{NFSU2_TR(0x58f168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f16dull));
TAIL_STATIC(0x5860f0u,586);
}
B58f16d:L58f16d:{c.instructions+=6;NFSU2_TR(0x58f16d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58f170:{NFSU2_TR(0x58f170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f171:{NFSU2_TR(0x58f171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f172:{NFSU2_TR(0x58f172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f173:{NFSU2_TR(0x58f173);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f179:{NFSU2_TR(0x58f179);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f17a:L58f17a:{c.instructions+=4;NFSU2_TR(0x58f17a);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f181:{NFSU2_TR(0x58f181);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f183:{NFSU2_TR(0x58f183);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f184:{NFSU2_TR(0x58f184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f189ull));
TAIL_STATIC(0x58c620u,58c);
}
B58f189:L58f189:{c.instructions+=6;NFSU2_TR(0x58f189);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f18c:{NFSU2_TR(0x58f18c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f18d:{NFSU2_TR(0x58f18d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f18e:{NFSU2_TR(0x58f18e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f18f:{NFSU2_TR(0x58f18f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f195:{NFSU2_TR(0x58f195);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f196:L58f196:{c.instructions+=5;NFSU2_TR(0x58f196);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58f19d:{NFSU2_TR(0x58f19d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f19e:{NFSU2_TR(0x58f19e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58f1a2:{NFSU2_TR(0x58f1a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f1a3:{NFSU2_TR(0x58f1a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f1a8ull));
TAIL_STATIC(0x589d60u,589);
}
B58f1a8:L58f1a8:{c.instructions+=6;NFSU2_TR(0x58f1a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f1ab:{NFSU2_TR(0x58f1ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f1ac:{NFSU2_TR(0x58f1ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f1ad:{NFSU2_TR(0x58f1ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f1ae:{NFSU2_TR(0x58f1ae);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f1b4:{NFSU2_TR(0x58f1b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f1b5:L58f1b5:{c.instructions+=5;NFSU2_TR(0x58f1b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f1bc:{NFSU2_TR(0x58f1bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f1bd:{NFSU2_TR(0x58f1bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58f1c1:{NFSU2_TR(0x58f1c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f1c2:{NFSU2_TR(0x58f1c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f1c7ull));
TAIL_STATIC(0x58c690u,58c);
}
B58f1c7:L58f1c7:{c.instructions+=6;NFSU2_TR(0x58f1c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f1ca:{NFSU2_TR(0x58f1ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f1cb:{NFSU2_TR(0x58f1cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f1cc:{NFSU2_TR(0x58f1cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f1cd:{NFSU2_TR(0x58f1cd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f1d3:{NFSU2_TR(0x58f1d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f1d4:L58f1d4:{c.instructions+=5;NFSU2_TR(0x58f1d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x424ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f1db:{NFSU2_TR(0x58f1db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f1dc:{NFSU2_TR(0x58f1dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58f1e0:{NFSU2_TR(0x58f1e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f1e1:{NFSU2_TR(0x58f1e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f1e6ull));
TAIL_STATIC(0x589720u,589);
}
B58f1e6:L58f1e6:{c.instructions+=1;NFSU2_TR(0x58f1e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f1e9:L58f1e9:{c.instructions+=5;NFSU2_TR(0x58f1e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f1ea:{NFSU2_TR(0x58f1ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f1eb:{NFSU2_TR(0x58f1eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f1ec:{NFSU2_TR(0x58f1ec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x414ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x414ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x414ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f1f2:{NFSU2_TR(0x58f1f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f230:L58f230:{c.instructions+=4;NFSU2_TR(0x58f230);
__builtin_memmove((R+4),gp(0x86a830),1);
}
B58f236:{NFSU2_TR(0x58f236);
w4(R+0,u32(0x1ull));
}
B58f23b:{NFSU2_TR(0x58f23b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58f23d:{NFSU2_TR(0x58f23d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58f28e;}}
}
B58f23f:L58f23f:{c.instructions+=6;NFSU2_TR(0x58f23f);
__builtin_memmove((R+8),gp(0x86a830),4);
}
B58f245:{NFSU2_TR(0x58f245);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f246:{NFSU2_TR(0x58f246);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B58f248:{NFSU2_TR(0x58f248);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58f24a:{NFSU2_TR(0x58f24a);
w4(R+4,u32(0x18ull));
}
B58f24f:{NFSU2_TR(0x58f24f);
w4(R+28,u32(0x86a758ull));
}
B58f254:L58f254:{c.instructions+=1;NFSU2_TR(0x58f254);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58f256;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f254u);}goto L58f254;}
}
B58f256:L58f256:{c.instructions+=2;NFSU2_TR(0x58f256);
w4(R+4,u32(0x6ull));
}
B58f25b:{NFSU2_TR(0x58f25b);
w4(R+28,u32(0x86a7b8ull));
}
B58f260:L58f260:{c.instructions+=1;NFSU2_TR(0x58f260);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58f262;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f260u);}goto L58f260;}
}
B58f262:L58f262:{c.instructions+=2;NFSU2_TR(0x58f262);
w4(R+4,u32(0x18ull));
}
B58f267:{NFSU2_TR(0x58f267);
w4(R+28,u32(0x86a7d0ull));
}
B58f26c:L58f26c:{c.instructions+=1;NFSU2_TR(0x58f26c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58f26e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f26cu);}goto L58f26c;}
}
B58f26e:L58f26e:{c.instructions+=4;NFSU2_TR(0x58f26e);
w4(R+4,u32(0x3cull));
}
B58f273:{NFSU2_TR(0x58f273);
w4(R+28,u32(0x866650ull));
}
B58f278:{NFSU2_TR(0x58f278);
u8 U[4];
w4(U+0,u32(0x7823b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f27d:{NFSU2_TR(0x58f27d);
__builtin_memmove(gp(0x86a830),(R+8),4);
}
B58f283:L58f283:{c.instructions+=1;NFSU2_TR(0x58f283);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58f285;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f283u);}goto L58f283;}
}
B58f285:L58f285:{c.instructions+=1;NFSU2_TR(0x58f285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f28aull));
TAIL_STATIC(0x75c5edu,75c);
}
B58f28a:L58f28a:{c.instructions+=2;NFSU2_TR(0x58f28a);
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
B58f28d:{NFSU2_TR(0x58f28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f28e:L58f28e:{c.instructions+=2;NFSU2_TR(0x58f28e);
w4(R+0,u32(0x86a758ull));
}
B58f293:{NFSU2_TR(0x58f293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f2a0:L58f2a0:{c.instructions+=5;NFSU2_TR(0x58f2a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f2a1:{NFSU2_TR(0x58f2a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f2a2:{NFSU2_TR(0x58f2a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f2a3:{NFSU2_TR(0x58f2a3);
__builtin_memmove((R+12),(R+4),4);
}
B58f2a5:{NFSU2_TR(0x58f2a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f2aaull));
TAIL_STATIC(0x58d0d0u,58d);
}
B58f2aa:L58f2aa:{c.instructions+=4;NFSU2_TR(0x58f2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58f2ad:{NFSU2_TR(0x58f2ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f2b0:{NFSU2_TR(0x58f2b0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f2b2:{NFSU2_TR(0x58f2b2);
if(r1(R+518)){{goto L58f2eb;}}
}
B58f2b4:L58f2b4:{c.instructions+=7;NFSU2_TR(0x58f2b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f2b7:{NFSU2_TR(0x58f2b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f2b9:{NFSU2_TR(0x58f2b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f2ba:{NFSU2_TR(0x58f2ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B58f2bd:{NFSU2_TR(0x58f2bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f2be:{NFSU2_TR(0x58f2be);
__builtin_memmove((R+4),(R+12),4);
}
B58f2c0:{NFSU2_TR(0x58f2c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f2c5ull));
TAIL_STATIC(0x58d150u,58d);
}
B58f2c5:L58f2c5:{c.instructions+=2;NFSU2_TR(0x58f2c5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58f2c7:{NFSU2_TR(0x58f2c7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58f2e5;}}
}
B58f2c9:L58f2c9:{c.instructions+=7;NFSU2_TR(0x58f2c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58f2cb:{NFSU2_TR(0x58f2cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58f2cd:{NFSU2_TR(0x58f2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f2d0:{NFSU2_TR(0x58f2d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B58f2d2:{NFSU2_TR(0x58f2d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f2d5:{NFSU2_TR(0x58f2d5);
__builtin_memmove((R+4),(R+24),4);
}
B58f2d7:{NFSU2_TR(0x58f2d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f2dcull));
TAIL_STATIC(0x584b40u,584);
}
B58f2dc:L58f2dc:{c.instructions+=2;NFSU2_TR(0x58f2dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f2dd:{NFSU2_TR(0x58f2dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f2e2ull));
TAIL_STATIC(0x575630u,575);
}
B58f2e2:L58f2e2:{c.instructions+=1;NFSU2_TR(0x58f2e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58f2e5:L58f2e5:{c.instructions+=3;NFSU2_TR(0x58f2e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58f2e7:{NFSU2_TR(0x58f2e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f2e9:{NFSU2_TR(0x58f2e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f2b4u);}goto L58f2b4;}}
}
B58f2eb:L58f2eb:{c.instructions+=1;NFSU2_TR(0x58f2eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f2f0ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58f2f0:L58f2f0:{c.instructions+=4;NFSU2_TR(0x58f2f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58f2f3:{NFSU2_TR(0x58f2f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58f2f5:{NFSU2_TR(0x58f2f5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f2f7:{NFSU2_TR(0x58f2f7);
if(r1(R+518)){{goto L58f325;}}
}
B58f2f9:L58f2f9:{c.instructions+=2;NFSU2_TR(0x58f2f9);
w4(R+8,u32(0x58d220ull));
}
B58f2fe:{NFSU2_TR(0x58f2fe);
__builtin_memmove((R+28),(R+28),4);
}
B58f300:L58f300:{c.instructions+=2;NFSU2_TR(0x58f300);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58f303:{NFSU2_TR(0x58f303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58f30a;}}
}
B58f305:L58f305:{c.instructions+=2;NFSU2_TR(0x58f305);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58f308:{NFSU2_TR(0x58f308);
if(r1(R+518)){{goto L58f312;}}
}
B58f30a:L58f30a:{c.instructions+=3;NFSU2_TR(0x58f30a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58f30c:{NFSU2_TR(0x58f30c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f30e:{NFSU2_TR(0x58f30e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f300u);}goto L58f300;}}
}
B58f310:L58f310:{c.instructions+=1;NFSU2_TR(0x58f310);
{goto L58f325;}
}
B58f312:L58f312:{c.instructions+=6;NFSU2_TR(0x58f312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58f314:{NFSU2_TR(0x58f314);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f317:{NFSU2_TR(0x58f317);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B58f319:{NFSU2_TR(0x58f319);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f31a:{NFSU2_TR(0x58f31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f31d:{NFSU2_TR(0x58f31d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f322ull));
TAIL_STATIC(0x575630u,575);
}
B58f322:L58f322:{c.instructions+=1;NFSU2_TR(0x58f322);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58f325:L58f325:{c.instructions+=1;NFSU2_TR(0x58f325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f32aull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58f32a:L58f32a:{c.instructions+=4;NFSU2_TR(0x58f32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58f32d:{NFSU2_TR(0x58f32d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58f32f:{NFSU2_TR(0x58f32f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B58f331:{NFSU2_TR(0x58f331);
if(r1(R+518)){{goto L58f348;}}
}
B58f333:L58f333:{c.instructions+=4;NFSU2_TR(0x58f333);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f334:{NFSU2_TR(0x58f334);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f335:{NFSU2_TR(0x58f335);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f337:{NFSU2_TR(0x58f337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f33cull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58f33c:L58f33c:{c.instructions+=3;NFSU2_TR(0x58f33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f33f:{NFSU2_TR(0x58f33f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f340:{NFSU2_TR(0x58f340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f345ull));
TAIL_STATIC(0x744410u,744);
}
B58f345:L58f345:{c.instructions+=1;NFSU2_TR(0x58f345);
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
B58f348:L58f348:{c.instructions+=8;NFSU2_TR(0x58f348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f349:{NFSU2_TR(0x58f349);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f34c:{NFSU2_TR(0x58f34c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B58f34e:{NFSU2_TR(0x58f34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f351:{NFSU2_TR(0x58f351);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f354:{NFSU2_TR(0x58f354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f355:{NFSU2_TR(0x58f355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f356:{NFSU2_TR(0x58f356);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f360:L58f360:{c.instructions+=5;NFSU2_TR(0x58f360);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f361:{NFSU2_TR(0x58f361);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f362:{NFSU2_TR(0x58f362);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f363:{NFSU2_TR(0x58f363);
__builtin_memmove((R+24),(R+4),4);
}
B58f365:{NFSU2_TR(0x58f365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f36aull));
TAIL_STATIC(0x587790u,587);
}
B58f36a:L58f36a:{c.instructions+=1;NFSU2_TR(0x58f36a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f36full));
TAIL_STATIC(0x58a0e0u,58a);
}
B58f36f:L58f36f:{c.instructions+=4;NFSU2_TR(0x58f36f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58f372:{NFSU2_TR(0x58f372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58f374:{NFSU2_TR(0x58f374);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f376:{NFSU2_TR(0x58f376);
if(r1(R+518)){{goto L58f3a5;}}
}
B58f378:L58f378:{c.instructions+=2;NFSU2_TR(0x58f378);
w4(R+8,u32(0x58dab0ull));
}
B58f37d:{NFSU2_TR(0x58f37d);
__builtin_memmove((R+4),(R+4),4);
}
B58f380:L58f380:{c.instructions+=2;NFSU2_TR(0x58f380);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58f383:{NFSU2_TR(0x58f383);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58f38a;}}
}
B58f385:L58f385:{c.instructions+=2;NFSU2_TR(0x58f385);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58f388:{NFSU2_TR(0x58f388);
if(r1(R+518)){{goto L58f392;}}
}
B58f38a:L58f38a:{c.instructions+=3;NFSU2_TR(0x58f38a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58f38c:{NFSU2_TR(0x58f38c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f38e:{NFSU2_TR(0x58f38e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f380u);}goto L58f380;}}
}
B58f390:L58f390:{c.instructions+=1;NFSU2_TR(0x58f390);
{goto L58f3a5;}
}
B58f392:L58f392:{c.instructions+=6;NFSU2_TR(0x58f392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58f394:{NFSU2_TR(0x58f394);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f397:{NFSU2_TR(0x58f397);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B58f399:{NFSU2_TR(0x58f399);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f39a:{NFSU2_TR(0x58f39a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f39d:{NFSU2_TR(0x58f39d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f3a2ull));
TAIL_STATIC(0x575630u,575);
}
B58f3a2:L58f3a2:{c.instructions+=1;NFSU2_TR(0x58f3a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58f3a5:L58f3a5:{c.instructions+=1;NFSU2_TR(0x58f3a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f3aaull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58f3aa:L58f3aa:{c.instructions+=4;NFSU2_TR(0x58f3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58f3ad:{NFSU2_TR(0x58f3ad);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B58f3af:{NFSU2_TR(0x58f3af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f3b1:{NFSU2_TR(0x58f3b1);
if(r1(R+518)){{goto L58f3d1;}}
}
B58f3b3:L58f3b3:{c.instructions+=3;NFSU2_TR(0x58f3b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f3b6:{NFSU2_TR(0x58f3b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f3b8:{NFSU2_TR(0x58f3b8);
if(r1(R+518)){{goto L58f3d1;}}
}
B58f3ba:L58f3ba:{c.instructions+=3;NFSU2_TR(0x58f3ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f3bb:{NFSU2_TR(0x58f3bb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f3bd:{NFSU2_TR(0x58f3bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f3c2ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58f3c2:L58f3c2:{c.instructions+=3;NFSU2_TR(0x58f3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f3c5:{NFSU2_TR(0x58f3c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f3c6:{NFSU2_TR(0x58f3c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f3cbull));
TAIL_STATIC(0x744530u,744);
}
B58f3cb:L58f3cb:{c.instructions+=2;NFSU2_TR(0x58f3cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58f3ce:{NFSU2_TR(0x58f3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f3d1:L58f3d1:{c.instructions+=9;NFSU2_TR(0x58f3d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B58f3d4:{NFSU2_TR(0x58f3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f3d7:{NFSU2_TR(0x58f3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f3da:{NFSU2_TR(0x58f3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f3dd:{NFSU2_TR(0x58f3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f3e0:{NFSU2_TR(0x58f3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fcull))));
w4(U+4,u32(0x80000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58f3ea:{NFSU2_TR(0x58f3ea);
w4(R+4,u32(0x138ull));
}
B58f3ef:{NFSU2_TR(0x58f3ef);
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
B58f3f1:{NFSU2_TR(0x58f3f1);
__builtin_memmove((R+28),(R+8),4);
}
B58f3f3:L58f3f3:{c.instructions+=1;NFSU2_TR(0x58f3f3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58f3f5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f3f3u);}goto L58f3f3;}
}
B58f3f5:L58f3f5:{c.instructions+=6;NFSU2_TR(0x58f3f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f3f6:{NFSU2_TR(0x58f3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x500ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f3fc:{NFSU2_TR(0x58f3fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f3fd:{NFSU2_TR(0x58f3fd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+8)),r4(U+0));
}
B58f403:{NFSU2_TR(0x58f403);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f404:{NFSU2_TR(0x58f404);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f410:L58f410:{c.instructions+=15;NFSU2_TR(0x58f410);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B58f415:{NFSU2_TR(0x58f415);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f417:{NFSU2_TR(0x58f417);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f419:{NFSU2_TR(0x58f419);
u8 U[4];
w4(U+0,u32(0x61646472ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f41e:{NFSU2_TR(0x58f41e);
__builtin_memmove(gp(0x869238),(R+0),4);
}
B58f423:{NFSU2_TR(0x58f423);
__builtin_memmove(gp(0x869074),(R+0),4);
}
B58f428:{NFSU2_TR(0x58f428);
__builtin_memmove(gp(0x869078),(R+0),4);
}
B58f42d:{NFSU2_TR(0x58f42d);
__builtin_memmove(gp(0x86907c),(R+0),4);
}
B58f432:{NFSU2_TR(0x58f432);
__builtin_memmove(gp(0x869080),(R+0),4);
}
B58f437:{NFSU2_TR(0x58f437);
s4(0x869678,u32(0x0ull));
}
B58f441:{NFSU2_TR(0x58f441);
s4(0x86674c,u32(0x587940ull));
}
B58f44b:{NFSU2_TR(0x58f44b);
s4(0x866648,u32(0x589070ull));
}
B58f455:{NFSU2_TR(0x58f455);
s4(0x866768,u32(0x589080ull));
}
B58f45f:{NFSU2_TR(0x58f45f);
s4(0x866750,u32(0x58e900ull));
}
B58f469:{NFSU2_TR(0x58f469);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f46eull));
TAIL_STATIC(0x742b60u,742);
}
B58f46e:L58f46e:{c.instructions+=4;NFSU2_TR(0x58f46e);
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
B58f471:{NFSU2_TR(0x58f471);
__builtin_memmove(gp(0x8669ec),(R+0),4);
}
B58f476:{NFSU2_TR(0x58f476);
s4(0x8669f4,u32(0x1ull));
}
B58f480:{NFSU2_TR(0x58f480);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f490:L58f490:{c.instructions+=4;NFSU2_TR(0x58f490);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B58f495:{NFSU2_TR(0x58f495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40cull))));
}
B58f49b:{NFSU2_TR(0x58f49b);
__builtin_memmove(gp(0x8693c0),(R+0),4);
}
B58f4a0:{NFSU2_TR(0x58f4a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f4a5ull));
TAIL_STATIC(0x586230u,586);
}
B58f4a5:L58f4a5:{c.instructions+=13;NFSU2_TR(0x58f4a5);
__builtin_memmove((R+4),gp(0x7fbdfc),2);
}
B58f4ac:{NFSU2_TR(0x58f4ac);
__builtin_memmove(gp(0x869240),(R+4),2);
}
B58f4b3:{NFSU2_TR(0x58f4b3);
w4(R+4,u32(r2(R+4)));
}
B58f4b6:{NFSU2_TR(0x58f4b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58f4b8:{NFSU2_TR(0x58f4b8);
__builtin_memmove(gp(0x866748),(R+4),4);
}
B58f4be:{NFSU2_TR(0x58f4be);
u8 U[8];
__builtin_memmove((U+0),gp(0x864fac),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f4c4:{NFSU2_TR(0x58f4c4);
__builtin_memmove(gp(0x86664c),(R+0),4);
}
B58f4c9:{NFSU2_TR(0x58f4c9);
__builtin_memmove(gp(0x866760),(R+0),4);
}
B58f4ce:{NFSU2_TR(0x58f4ce);
s4(0x866764,u32(0x58c360ull));
}
B58f4d8:{NFSU2_TR(0x58f4d8);
s4(0x866740,u32(0x58efd0ull));
}
B58f4e2:{NFSU2_TR(0x58f4e2);
s4(0x866744,u32(0x58c3c0ull));
}
B58f4ec:{NFSU2_TR(0x58f4ec);
s4(0x866754,u32(0x58f020ull));
}
B58f4f6:{NFSU2_TR(0x58f4f6);
if(r1(R+518)){{goto L58f502;}}
}
B58f4f8:L58f4f8:{c.instructions+=1;NFSU2_TR(0x58f4f8);
s4(0x8691d0,u32(0x1ull));
}
B58f502:L58f502:{c.instructions+=9;NFSU2_TR(0x58f502);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f504:{NFSU2_TR(0x58f504);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f506:{NFSU2_TR(0x58f506);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58f50a:{NFSU2_TR(0x58f50a);
s4(0x866a14,u32(0x1ull));
}
B58f514:{NFSU2_TR(0x58f514);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58f518:{NFSU2_TR(0x58f518);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f51f:{NFSU2_TR(0x58f51f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f526:{NFSU2_TR(0x58f526);
u8 U[5];
w4(U+0,u32(u32(u32(0x410ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58f52e:{NFSU2_TR(0x58f52e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f533ull));
TAIL_STATIC(0x581d00u,581);
}
B58f533:L58f533:{c.instructions+=4;NFSU2_TR(0x58f533);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f535:{NFSU2_TR(0x58f535);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f537:{NFSU2_TR(0x58f537);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58f53b:{NFSU2_TR(0x58f53b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f540ull));
TAIL_STATIC(0x581d00u,581);
}
B58f540:L58f540:{c.instructions+=5;NFSU2_TR(0x58f540);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f542:{NFSU2_TR(0x58f542);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58f546:{NFSU2_TR(0x58f546);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f547:{NFSU2_TR(0x58f547);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f549:{NFSU2_TR(0x58f549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f54eull));
TAIL_STATIC(0x5883a0u,588);
}
B58f54e:L58f54e:{c.instructions+=1;NFSU2_TR(0x58f54e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f553ull));
TAIL_STATIC(0x586010u,586);
}
B58f553:L58f553:{c.instructions+=3;NFSU2_TR(0x58f553);
__builtin_memmove(gp(0x7fbe80),(R+0),4);
}
B58f558:{NFSU2_TR(0x58f558);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x418ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x418ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x418ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f55e:{NFSU2_TR(0x58f55e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f560:L58f560:{c.instructions+=11;NFSU2_TR(0x58f560);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f562:{NFSU2_TR(0x58f562);
u8 U[4];
w4(U+0,u32(0x778ae6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f567:{NFSU2_TR(0x58f567);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f56d:{NFSU2_TR(0x58f56d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f56e:{NFSU2_TR(0x58f56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f575:{NFSU2_TR(0x58f575);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f576:{NFSU2_TR(0x58f576);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f577:{NFSU2_TR(0x58f577);
__builtin_memmove((R+24),(R+4),4);
}
B58f579:{NFSU2_TR(0x58f579);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f57d:{NFSU2_TR(0x58f57d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58f585:{NFSU2_TR(0x58f585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f58aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f2a0u);}goto L58f2a0;}
}
B58f58a:L58f58a:{c.instructions+=3;NFSU2_TR(0x58f58a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58f58d:{NFSU2_TR(0x58f58d);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58f592:{NFSU2_TR(0x58f592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f597ull));
TAIL_STATIC(0x5884a0u,588);
}
B58f597:L58f597:{c.instructions+=3;NFSU2_TR(0x58f597);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58f59a:{NFSU2_TR(0x58f59a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58f5a2:{NFSU2_TR(0x58f5a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f5a7ull));
TAIL_STATIC(0x5884a0u,588);
}
B58f5a7:L58f5a7:{c.instructions+=5;NFSU2_TR(0x58f5a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58f5ab:{NFSU2_TR(0x58f5ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f5ac:{NFSU2_TR(0x58f5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f5b3:{NFSU2_TR(0x58f5b3);
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
B58f5b6:{NFSU2_TR(0x58f5b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f5c0:L58f5c0:{c.instructions+=11;NFSU2_TR(0x58f5c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f5c2:{NFSU2_TR(0x58f5c2);
u8 U[4];
w4(U+0,u32(0x778af8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f5c7:{NFSU2_TR(0x58f5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f5cd:{NFSU2_TR(0x58f5cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f5ce:{NFSU2_TR(0x58f5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f5d5:{NFSU2_TR(0x58f5d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f5d6:{NFSU2_TR(0x58f5d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f5d7:{NFSU2_TR(0x58f5d7);
__builtin_memmove((R+24),(R+4),4);
}
B58f5d9:{NFSU2_TR(0x58f5d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f5dd:{NFSU2_TR(0x58f5dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B58f5e5:{NFSU2_TR(0x58f5e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f5eaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f360u);}goto L58f360;}
}
B58f5ea:L58f5ea:{c.instructions+=4;NFSU2_TR(0x58f5ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58f5ec:{NFSU2_TR(0x58f5ec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f5ee:{NFSU2_TR(0x58f5ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B58f5f6:{NFSU2_TR(0x58f5f6);
if(r1(R+518)){{goto L58f611;}}
}
B58f5f8:L58f5f8:{c.instructions+=6;NFSU2_TR(0x58f5f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58f5fa:{NFSU2_TR(0x58f5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f5fd:{NFSU2_TR(0x58f5fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B58f5ff:{NFSU2_TR(0x58f5ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f600:{NFSU2_TR(0x58f600);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f603:{NFSU2_TR(0x58f603);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f608ull));
TAIL_STATIC(0x575630u,575);
}
B58f608:L58f608:{c.instructions+=4;NFSU2_TR(0x58f608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58f60a:{NFSU2_TR(0x58f60a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58f60d:{NFSU2_TR(0x58f60d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f60f:{NFSU2_TR(0x58f60f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f5f8u);}goto L58f5f8;}}
}
B58f611:L58f611:{c.instructions+=5;NFSU2_TR(0x58f611);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58f615:{NFSU2_TR(0x58f615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f616:{NFSU2_TR(0x58f616);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f61d:{NFSU2_TR(0x58f61d);
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
B58f620:{NFSU2_TR(0x58f620);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f630:L58f630:{c.instructions+=1;NFSU2_TR(0x58f630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f635ull));
TAIL_STATIC(0x5861c0u,586);
}
B58f635:L58f635:{c.instructions+=8;NFSU2_TR(0x58f635);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B58f63a:{NFSU2_TR(0x58f63a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f63c:{NFSU2_TR(0x58f63c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f63e:{NFSU2_TR(0x58f63e);
u8 U[4];
w4(U+0,u32(0x7a16d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f643:{NFSU2_TR(0x58f643);
w4(R+4,u32(0x869088ull));
}
B58f648:{NFSU2_TR(0x58f648);
__builtin_memmove(gp(0x869084),(R+0),4);
}
B58f64d:{NFSU2_TR(0x58f64d);
s1(0x7fbe78,u8(0x1ull));
}
B58f654:{NFSU2_TR(0x58f654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f659ull));
TAIL_STATIC(0x5820c0u,582);
}
B58f659:L58f659:{c.instructions+=3;NFSU2_TR(0x58f659);
__builtin_memmove((R+0),gp(0x86676c),4);
}
B58f65e:{NFSU2_TR(0x58f65e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58f660:{NFSU2_TR(0x58f660);
if(r1(R+518)){{goto L58f667;}}
}
B58f662:L58f662:{c.instructions+=1;NFSU2_TR(0x58f662);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f490u);}goto L58f490;}
}
B58f667:L58f667:{c.instructions+=1;NFSU2_TR(0x58f667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f66cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f410u);}goto L58f410;}
}
B58f66c:L58f66c:{c.instructions+=6;NFSU2_TR(0x58f66c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58f66e:{NFSU2_TR(0x58f66e);
__builtin_memmove((R+0),gp(0x7fbdfc),2);
}
B58f674:{NFSU2_TR(0x58f674);
__builtin_memmove(gp(0x869240),(R+0),2);
}
B58f67a:{NFSU2_TR(0x58f67a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f67b:{NFSU2_TR(0x58f67b);
u8 U[4];
w4(U+0,u32(0x869278ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f680:{NFSU2_TR(0x58f680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f685ull));
TAIL_STATIC(0x5833b0u,583);
}
B58f685:L58f685:{c.instructions+=2;NFSU2_TR(0x58f685);
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
B58f688:{NFSU2_TR(0x58f688);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f690:L58f690:{c.instructions+=3;NFSU2_TR(0x58f690);
__builtin_memmove((R+0),gp(0x7fbe78),1);
}
B58f695:{NFSU2_TR(0x58f695);
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
B58f697:{NFSU2_TR(0x58f697);
if(r1(R+518)){{goto L58f6cd;}}
}
B58f699:L58f699:{c.instructions+=3;NFSU2_TR(0x58f699);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B58f69e:{NFSU2_TR(0x58f69e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58f6a0:{NFSU2_TR(0x58f6a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58f6a7;}}
}
B58f6a2:L58f6a2:{c.instructions+=1;NFSU2_TR(0x58f6a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f6a7ull));
TAIL_STATIC(0x585b20u,585);
}
B58f6a7:L58f6a7:{c.instructions+=3;NFSU2_TR(0x58f6a7);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58f6ac:{NFSU2_TR(0x58f6ac);
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
B58f6ae:{NFSU2_TR(0x58f6ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58f6c3;}}
}
B58f6b0:L58f6b0:{c.instructions+=1;NFSU2_TR(0x58f6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f6b5ull));
TAIL_STATIC(0x5877d0u,587);
}
B58f6b5:L58f6b5:{c.instructions+=3;NFSU2_TR(0x58f6b5);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B58f6ba:{NFSU2_TR(0x58f6ba);
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
B58f6bc:{NFSU2_TR(0x58f6bc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L58f6c3;}}
}
B58f6be:L58f6be:{c.instructions+=1;NFSU2_TR(0x58f6be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f6c3ull));
TAIL_STATIC(0x58ebc0u,58e);
}
B58f6c3:L58f6c3:{c.instructions+=2;NFSU2_TR(0x58f6c3);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B58f6c8:{NFSU2_TR(0x58f6c8);
__builtin_memmove(gp(0x869084),(R+0),4);
}
B58f6cd:L58f6cd:{c.instructions+=1;NFSU2_TR(0x58f6cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f6d0:L58f6d0:{c.instructions+=4;NFSU2_TR(0x58f6d0);
__builtin_memmove((R+4),gp(0x86a854),1);
}
B58f6d6:{NFSU2_TR(0x58f6d6);
w4(R+0,u32(0x1ull));
}
B58f6db:{NFSU2_TR(0x58f6db);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58f6dd:{NFSU2_TR(0x58f6dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58f732;}}
}
B58f6df:L58f6df:{c.instructions+=16;NFSU2_TR(0x58f6df);
__builtin_memmove((R+8),gp(0x86a854),4);
}
B58f6e5:{NFSU2_TR(0x58f6e5);
w4(R+4,u32(0x86a83cull));
}
B58f6ea:{NFSU2_TR(0x58f6ea);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B58f6ec:{NFSU2_TR(0x58f6ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58f6ee:{NFSU2_TR(0x58f6ee);
__builtin_memmove(gp(0x86a83c),(R+4),4);
}
B58f6f4:{NFSU2_TR(0x58f6f4);
__builtin_memmove(gp(0x86a840),(R+4),4);
}
B58f6fa:{NFSU2_TR(0x58f6fa);
w4(R+4,u32(0x86a844ull));
}
B58f6ff:{NFSU2_TR(0x58f6ff);
u8 U[4];
w4(U+0,u32(0x7823c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f704:{NFSU2_TR(0x58f704);
__builtin_memmove(gp(0x86a854),(R+8),4);
}
B58f70a:{NFSU2_TR(0x58f70a);
__builtin_memmove(gp(0x86a834),(R+0),4);
}
B58f70f:{NFSU2_TR(0x58f70f);
__builtin_memmove(gp(0x86a838),(R+0),4);
}
B58f714:{NFSU2_TR(0x58f714);
__builtin_memmove(gp(0x86a844),(R+4),4);
}
B58f71a:{NFSU2_TR(0x58f71a);
__builtin_memmove(gp(0x86a848),(R+4),4);
}
B58f720:{NFSU2_TR(0x58f720);
__builtin_memmove(gp(0x86a84c),(R+0),4);
}
B58f725:{NFSU2_TR(0x58f725);
__builtin_memmove(gp(0x86a850),(R+0),4);
}
B58f72a:{NFSU2_TR(0x58f72a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f72full));
TAIL_STATIC(0x75c5edu,75c);
}
B58f72f:L58f72f:{c.instructions+=1;NFSU2_TR(0x58f72f);
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
B58f732:L58f732:{c.instructions+=2;NFSU2_TR(0x58f732);
w4(R+0,u32(0x86a834ull));
}
B58f737:{NFSU2_TR(0x58f737);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f740:L58f740:{c.instructions+=4;NFSU2_TR(0x58f740);
__builtin_memmove((R+4),gp(0x86ad5c),1);
}
B58f746:{NFSU2_TR(0x58f746);
w4(R+0,u32(0x1ull));
}
B58f74b:{NFSU2_TR(0x58f74b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B58f74d:{NFSU2_TR(0x58f74d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58f7bb;}}
}
B58f74f:L58f74f:{c.instructions+=16;NFSU2_TR(0x58f74f);
__builtin_memmove((R+8),gp(0x86ad5c),4);
}
B58f755:{NFSU2_TR(0x58f755);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B58f757:{NFSU2_TR(0x58f757);
w4(R+0,u32(0x86a858ull));
}
B58f75c:{NFSU2_TR(0x58f75c);
__builtin_memmove(gp(0x86a858),(R+0),4);
}
B58f761:{NFSU2_TR(0x58f761);
__builtin_memmove(gp(0x86a85c),(R+0),4);
}
B58f766:{NFSU2_TR(0x58f766);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58f768:{NFSU2_TR(0x58f768);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f769:{NFSU2_TR(0x58f769);
__builtin_memmove(gp(0x86a860),(R+0),4);
}
B58f76e:{NFSU2_TR(0x58f76e);
__builtin_memmove(gp(0x86a864),(R+0),4);
}
B58f773:{NFSU2_TR(0x58f773);
__builtin_memmove(gp(0x86a868),(R+0),4);
}
B58f778:{NFSU2_TR(0x58f778);
__builtin_memmove(gp(0x86a86c),(R+0),4);
}
B58f77d:{NFSU2_TR(0x58f77d);
__builtin_memmove(gp(0x86a870),(R+0),4);
}
B58f782:{NFSU2_TR(0x58f782);
s4(0x86ad54,u32(0x80000000ull));
}
B58f78c:{NFSU2_TR(0x58f78c);
__builtin_memmove(gp(0x86ad58),(R+0),4);
}
B58f791:{NFSU2_TR(0x58f791);
w4(R+4,u32(0x138ull));
}
B58f796:{NFSU2_TR(0x58f796);
w4(R+28,u32(0x86a874ull));
}
B58f79b:L58f79b:{c.instructions+=1;NFSU2_TR(0x58f79b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58f79d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f79bu);}goto L58f79b;}
}
B58f79d:L58f79d:{c.instructions+=4;NFSU2_TR(0x58f79d);
u8 U[4];
w4(U+0,u32(0x7823d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f7a2:{NFSU2_TR(0x58f7a2);
__builtin_memmove(gp(0x86ad5c),(R+8),4);
}
B58f7a8:{NFSU2_TR(0x58f7a8);
s4(0x86a874,u32(0xffffffffull));
}
B58f7b2:{NFSU2_TR(0x58f7b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f7b7ull));
TAIL_STATIC(0x75c5edu,75c);
}
B58f7b7:L58f7b7:{c.instructions+=2;NFSU2_TR(0x58f7b7);
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
B58f7ba:{NFSU2_TR(0x58f7ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f7bb:L58f7bb:{c.instructions+=2;NFSU2_TR(0x58f7bb);
w4(R+0,u32(0x86a858ull));
}
B58f7c0:{NFSU2_TR(0x58f7c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f7d0:L58f7d0:{c.instructions+=10;NFSU2_TR(0x58f7d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f7d4:{NFSU2_TR(0x58f7d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f7d5:{NFSU2_TR(0x58f7d5);
__builtin_memmove((R+12),(R+0),4);
}
B58f7d7:{NFSU2_TR(0x58f7d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B58f7da:{NFSU2_TR(0x58f7da);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffull))));
}
B58f7df:{NFSU2_TR(0x58f7df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f7e0:{NFSU2_TR(0x58f7e0);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x1ull))));
}
B58f7e3:{NFSU2_TR(0x58f7e3);
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
B58f7e6:{NFSU2_TR(0x58f7e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f7e7:{NFSU2_TR(0x58f7e7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L58f956;}}
}
B58f7ed:L58f7ed:{c.instructions+=1;NFSU2_TR(0x58f7ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x58f95cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B58f7f4:L58f7f4:{c.instructions+=2;NFSU2_TR(0x58f7f4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f7f6:{NFSU2_TR(0x58f7f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f7fbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f740u);}goto L58f740;}
}
B58f7fb:L58f7fb:{c.instructions+=7;NFSU2_TR(0x58f7fb);
__builtin_memmove((R+24),(R+0),4);
}
B58f7fd:{NFSU2_TR(0x58f7fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f801:{NFSU2_TR(0x58f801);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58f803:{NFSU2_TR(0x58f803);
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
B58f806:{NFSU2_TR(0x58f806);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f807:{NFSU2_TR(0x58f807);
__builtin_memmove((R+4),(R+24),4);
}
B58f809:{NFSU2_TR(0x58f809);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f80eull));
TAIL_STATIC(0x584b50u,584);
}
B58f80e:L58f80e:{c.instructions+=6;NFSU2_TR(0x58f80e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f812:{NFSU2_TR(0x58f812);
__builtin_memmove((R+28),(R+0),4);
}
B58f814:{NFSU2_TR(0x58f814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58f816:{NFSU2_TR(0x58f816);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f817:{NFSU2_TR(0x58f817);
__builtin_memmove((R+4),(R+24),4);
}
B58f819:{NFSU2_TR(0x58f819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f81eull));
TAIL_STATIC(0x584b50u,584);
}
B58f81e:L58f81e:{c.instructions+=3;NFSU2_TR(0x58f81e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58f821:{NFSU2_TR(0x58f821);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58f823:{NFSU2_TR(0x58f823);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58f837;}}
}
B58f825:L58f825:{c.instructions+=3;NFSU2_TR(0x58f825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f828:{NFSU2_TR(0x58f828);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58f82a:{NFSU2_TR(0x58f82a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58f833;}}
}
B58f82c:L58f82c:{c.instructions+=2;NFSU2_TR(0x58f82c);
w4(R+4,u32(0x1ull));
}
B58f831:{NFSU2_TR(0x58f831);
{goto L58f846;}
}
B58f833:L58f833:{c.instructions+=2;NFSU2_TR(0x58f833);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58f835:{NFSU2_TR(0x58f835);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L58f843;}}
}
B58f837:L58f837:{c.instructions+=3;NFSU2_TR(0x58f837);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f83a:{NFSU2_TR(0x58f83a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B58f83c:{NFSU2_TR(0x58f83c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L58f843;}}
}
B58f83e:L58f83e:{c.instructions+=2;NFSU2_TR(0x58f83e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B58f841:{NFSU2_TR(0x58f841);
{goto L58f846;}
}
B58f843:L58f843:{c.instructions+=1;NFSU2_TR(0x58f843);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B58f846:L58f846:{c.instructions+=2;NFSU2_TR(0x58f846);
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
B58f848:{NFSU2_TR(0x58f848);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58f84c;}}
}
B58f84a:L58f84a:{c.instructions+=1;NFSU2_TR(0x58f84a);
u8 U[6];
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+4)));
w4(R+4,u32(0-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f84c:L58f84c:{c.instructions+=5;NFSU2_TR(0x58f84c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f84d:{NFSU2_TR(0x58f84d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f84e:{NFSU2_TR(0x58f84e);
__builtin_memmove((R+0),(R+4),4);
}
B58f850:{NFSU2_TR(0x58f850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f851:{NFSU2_TR(0x58f851);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f852:L58f852:{c.instructions+=5;NFSU2_TR(0x58f852);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58f856:{NFSU2_TR(0x58f856);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B58f859:{NFSU2_TR(0x58f859);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f85b:{NFSU2_TR(0x58f85b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f85c:{NFSU2_TR(0x58f85c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f861ull));
TAIL_STATIC(0x43ddf0u,43d);
}
B58f861:L58f861:{c.instructions+=6;NFSU2_TR(0x58f861);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58f865:{NFSU2_TR(0x58f865);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B58f868:{NFSU2_TR(0x58f868);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f86a:{NFSU2_TR(0x58f86a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f86b:{NFSU2_TR(0x58f86b);
__builtin_memmove((R+24),(R+0),4);
}
B58f86d:{NFSU2_TR(0x58f86d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f872ull));
TAIL_STATIC(0x43ddf0u,43d);
}
B58f872:L58f872:{c.instructions+=5;NFSU2_TR(0x58f872);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58f873:{NFSU2_TR(0x58f873);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f874:{NFSU2_TR(0x58f874);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B58f875:{NFSU2_TR(0x58f875);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f876:{NFSU2_TR(0x58f876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f87bull));
TAIL_STATIC(0x43dcc0u,43d);
}
B58f87b:L58f87b:{c.instructions+=2;NFSU2_TR(0x58f87b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B58f87e:{NFSU2_TR(0x58f87e);
{goto L58f94c;}
}
B58f883:L58f883:{c.instructions+=6;NFSU2_TR(0x58f883);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f887:{NFSU2_TR(0x58f887);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58f88b:{NFSU2_TR(0x58f88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58f891:{NFSU2_TR(0x58f891);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B58f897:{NFSU2_TR(0x58f897);
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
B58f899:{NFSU2_TR(0x58f899);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58f958;}}
}
B58f89f:L58f89f:{c.instructions+=5;NFSU2_TR(0x58f89f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f8a0:{NFSU2_TR(0x58f8a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f8a1:{NFSU2_TR(0x58f8a1);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f8a3:{NFSU2_TR(0x58f8a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f8a4:{NFSU2_TR(0x58f8a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f8a5:L58f8a5:{c.instructions+=6;NFSU2_TR(0x58f8a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58f8a9:{NFSU2_TR(0x58f8a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8ab:{NFSU2_TR(0x58f8ab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8cull))));
}
B58f8b1:{NFSU2_TR(0x58f8b1);
u8 U[4];
w4(U+0,u32(0x7a15ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8b6:{NFSU2_TR(0x58f8b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8b7:{NFSU2_TR(0x58f8b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f8bcull));
TAIL_STATIC(0x7414a0u,741);
}
B58f8bc:L58f8bc:{c.instructions+=3;NFSU2_TR(0x58f8bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f8bf:{NFSU2_TR(0x58f8bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8c0:{NFSU2_TR(0x58f8c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f8c5ull));
TAIL_STATIC(0x7420b0u,742);
}
B58f8c5:L58f8c5:{c.instructions+=6;NFSU2_TR(0x58f8c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f8c8:{NFSU2_TR(0x58f8c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8c9:{NFSU2_TR(0x58f8c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8cb:{NFSU2_TR(0x58f8cb);
u8 U[4];
w4(U+0,u32(0x795fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8d0:{NFSU2_TR(0x58f8d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8d1:{NFSU2_TR(0x58f8d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f8d6ull));
TAIL_STATIC(0x7414a0u,741);
}
B58f8d6:L58f8d6:{c.instructions+=3;NFSU2_TR(0x58f8d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f8d9:{NFSU2_TR(0x58f8d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8da:{NFSU2_TR(0x58f8da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f8dfull));
TAIL_STATIC(0x7420b0u,742);
}
B58f8df:L58f8df:{c.instructions+=3;NFSU2_TR(0x58f8df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f8e2:{NFSU2_TR(0x58f8e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8e3:{NFSU2_TR(0x58f8e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f8e8ull));
TAIL_STATIC(0x516280u,516);
}
B58f8e8:L58f8e8:{c.instructions+=8;NFSU2_TR(0x58f8e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58f8ec:{NFSU2_TR(0x58f8ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f8ef:{NFSU2_TR(0x58f8ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8f1:{NFSU2_TR(0x58f8f1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8cull))));
}
B58f8f7:{NFSU2_TR(0x58f8f7);
u8 U[4];
w4(U+0,u32(0x7a15ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8fc:{NFSU2_TR(0x58f8fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f8fd:{NFSU2_TR(0x58f8fd);
__builtin_memmove((R+28),(R+0),4);
}
B58f8ff:{NFSU2_TR(0x58f8ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f904ull));
TAIL_STATIC(0x7414a0u,741);
}
B58f904:L58f904:{c.instructions+=3;NFSU2_TR(0x58f904);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f907:{NFSU2_TR(0x58f907);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f908:{NFSU2_TR(0x58f908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f90dull));
TAIL_STATIC(0x7420b0u,742);
}
B58f90d:L58f90d:{c.instructions+=6;NFSU2_TR(0x58f90d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f910:{NFSU2_TR(0x58f910);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f911:{NFSU2_TR(0x58f911);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f913:{NFSU2_TR(0x58f913);
u8 U[4];
w4(U+0,u32(0x795fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f918:{NFSU2_TR(0x58f918);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f919:{NFSU2_TR(0x58f919);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f91eull));
TAIL_STATIC(0x7414a0u,741);
}
B58f91e:L58f91e:{c.instructions+=3;NFSU2_TR(0x58f91e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f921:{NFSU2_TR(0x58f921);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f922:{NFSU2_TR(0x58f922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f927ull));
TAIL_STATIC(0x7420b0u,742);
}
B58f927:L58f927:{c.instructions+=3;NFSU2_TR(0x58f927);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f92a:{NFSU2_TR(0x58f92a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f92b:{NFSU2_TR(0x58f92b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f930ull));
TAIL_STATIC(0x516280u,516);
}
B58f930:L58f930:{c.instructions+=2;NFSU2_TR(0x58f930);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f931:{NFSU2_TR(0x58f931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f936ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B58f936:L58f936:{c.instructions+=4;NFSU2_TR(0x58f936);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58f939:{NFSU2_TR(0x58f939);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f93a:{NFSU2_TR(0x58f93a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f93b:{NFSU2_TR(0x58f93b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f940ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B58f940:L58f940:{c.instructions+=3;NFSU2_TR(0x58f940);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58f943:{NFSU2_TR(0x58f943);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f944:{NFSU2_TR(0x58f944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f949ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B58f949:L58f949:{c.instructions+=1;NFSU2_TR(0x58f949);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f94c:L58f94c:{c.instructions+=2;NFSU2_TR(0x58f94c);
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
B58f94e:{NFSU2_TR(0x58f94e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58f958;}}
}
B58f950:L58f950:{c.instructions+=5;NFSU2_TR(0x58f950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f951:{NFSU2_TR(0x58f951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f952:{NFSU2_TR(0x58f952);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58f954:{NFSU2_TR(0x58f954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f955:{NFSU2_TR(0x58f955);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f956:L58f956:{c.instructions+=1;NFSU2_TR(0x58f956);
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
B58f958:L58f958:{c.instructions+=4;NFSU2_TR(0x58f958);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f959:{NFSU2_TR(0x58f959);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f95a:{NFSU2_TR(0x58f95a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f95b:{NFSU2_TR(0x58f95b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f970:L58f970:{c.instructions+=4;NFSU2_TR(0x58f970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B58f973:{NFSU2_TR(0x58f973);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f974:{NFSU2_TR(0x58f974);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f976:{NFSU2_TR(0x58f976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f97bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f740u);}goto L58f740;}
}
B58f97b:L58f97b:{c.instructions+=4;NFSU2_TR(0x58f97b);
__builtin_memmove((R+12),(R+0),4);
}
B58f97d:{NFSU2_TR(0x58f97d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58f980:{NFSU2_TR(0x58f980);
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
B58f982:{NFSU2_TR(0x58f982);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58f989;}}
}
B58f984:L58f984:{c.instructions+=3;NFSU2_TR(0x58f984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f985:{NFSU2_TR(0x58f985);
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
B58f988:{NFSU2_TR(0x58f988);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f989:L58f989:{c.instructions+=6;NFSU2_TR(0x58f989);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f98a:{NFSU2_TR(0x58f98a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f98b:{NFSU2_TR(0x58f98b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58f98d:{NFSU2_TR(0x58f98d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f98e:{NFSU2_TR(0x58f98e);
__builtin_memmove((R+4),(R+12),4);
}
B58f990:{NFSU2_TR(0x58f990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f995ull));
TAIL_STATIC(0x502fd0u,502);
}
B58f995:L58f995:{c.instructions+=3;NFSU2_TR(0x58f995);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f997:{NFSU2_TR(0x58f997);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58f99b:{NFSU2_TR(0x58f99b);
if(r1(R+518)){{goto L58f9ab;}}
}
B58f99d:L58f99d:{c.instructions+=2;NFSU2_TR(0x58f99d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B58f99f:{NFSU2_TR(0x58f99f);
}
B58f9a0:L58f9a0:{c.instructions+=2;NFSU2_TR(0x58f9a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58f9a3:{NFSU2_TR(0x58f9a3);
if(r1(R+518)){{goto L58f9e5;}}
}
B58f9a5:L58f9a5:{c.instructions+=3;NFSU2_TR(0x58f9a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B58f9a7:{NFSU2_TR(0x58f9a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58f9a9:{NFSU2_TR(0x58f9a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f9a0u);}goto L58f9a0;}}
}
B58f9ab:L58f9ab:{c.instructions+=3;NFSU2_TR(0x58f9ab);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f9ad:{NFSU2_TR(0x58f9ad);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58f9af:{NFSU2_TR(0x58f9af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58f9b4ull));
TAIL_STATIC(0x6d7110u,6d7);
}
B58f9b4:L58f9b4:{c.instructions+=3;NFSU2_TR(0x58f9b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58f9b7:{NFSU2_TR(0x58f9b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58f9b9:{NFSU2_TR(0x58f9b9);
if(r1(R+518)){{goto L58f9e9;}}
}
B58f9bb:L58f9bb:{c.instructions+=14;NFSU2_TR(0x58f9bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x116ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B58f9c1:{NFSU2_TR(0x58f9c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B58f9c3:{NFSU2_TR(0x58f9c3);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B58f9c6:{NFSU2_TR(0x58f9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f9c9:{NFSU2_TR(0x58f9c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58f9cc:{NFSU2_TR(0x58f9cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58f9d0:{NFSU2_TR(0x58f9d0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58f9d2:{NFSU2_TR(0x58f9d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((R+8),(U+0),4);
}
B58f9d5:{NFSU2_TR(0x58f9d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B58f9d7:{NFSU2_TR(0x58f9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f9da:{NFSU2_TR(0x58f9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f9dd:{NFSU2_TR(0x58f9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f9e0:{NFSU2_TR(0x58f9e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58f9e3:{NFSU2_TR(0x58f9e3);
{goto L58f9eb;}
}
B58f9e5:L58f9e5:{c.instructions+=2;NFSU2_TR(0x58f9e5);
__builtin_memmove((R+20),(R+24),4);
}
B58f9e7:{NFSU2_TR(0x58f9e7);
{goto L58fa06;}
}
B58f9e9:L58f9e9:{c.instructions+=1;NFSU2_TR(0x58f9e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58f9eb:L58f9eb:{c.instructions+=3;NFSU2_TR(0x58f9eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58f9ed:{NFSU2_TR(0x58f9ed);
__builtin_memmove((R+20),(R+0),4);
}
B58f9ef:{NFSU2_TR(0x58f9ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58f9f9;}}
}
B58f9f1:L58f9f1:{c.instructions+=6;NFSU2_TR(0x58f9f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58f9f2:{NFSU2_TR(0x58f9f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58f9f3:{NFSU2_TR(0x58f9f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58f9f4:{NFSU2_TR(0x58f9f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58f9f5:{NFSU2_TR(0x58f9f5);
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
B58f9f8:{NFSU2_TR(0x58f9f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58f9f9:L58f9f9:{c.instructions+=5;NFSU2_TR(0x58f9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58f9fc:{NFSU2_TR(0x58f9fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58f9fe:{NFSU2_TR(0x58f9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fa01:{NFSU2_TR(0x58fa01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fa04:{NFSU2_TR(0x58fa04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B58fa06:L58fa06:{c.instructions+=10;NFSU2_TR(0x58fa06);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58fa08:{NFSU2_TR(0x58fa08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fa0c:{NFSU2_TR(0x58fa0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fa10:{NFSU2_TR(0x58fa10);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fa14:{NFSU2_TR(0x58fa14);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fa18:{NFSU2_TR(0x58fa18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa19:{NFSU2_TR(0x58fa19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa1a:{NFSU2_TR(0x58fa1a);
__builtin_memmove((R+4),(R+12),4);
}
B58fa1c:{NFSU2_TR(0x58fa1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fa20:{NFSU2_TR(0x58fa20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fa25ull));
TAIL_STATIC(0x58ae90u,58a);
}
B58fa25:L58fa25:{c.instructions+=3;NFSU2_TR(0x58fa25);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B58fa27:{NFSU2_TR(0x58fa27);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58fa2d:{NFSU2_TR(0x58fa2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58fa35;}}
}
B58fa2f:L58fa2f:{c.instructions+=1;NFSU2_TR(0x58fa2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B58fa35:L58fa35:{c.instructions+=4;NFSU2_TR(0x58fa35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa36:{NFSU2_TR(0x58fa36);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58fa3a:{NFSU2_TR(0x58fa3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa3b:{NFSU2_TR(0x58fa3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fa40ull));
TAIL_STATIC(0x742e60u,742);
}
B58fa40:L58fa40:{c.instructions+=8;NFSU2_TR(0x58fa40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58fa43:{NFSU2_TR(0x58fa43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa44:{NFSU2_TR(0x58fa44);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B58fa48:{NFSU2_TR(0x58fa48);
u8 U[4];
w4(U+0,u32(0x584bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa4d:{NFSU2_TR(0x58fa4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((R+28),(U+0),4);
}
B58fa50:{NFSU2_TR(0x58fa50);
w4(R+4,u32(0x5ull));
}
B58fa55:{NFSU2_TR(0x58fa55);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B58fa59:{NFSU2_TR(0x58fa59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa5a:L58fa5a:{c.instructions+=1;NFSU2_TR(0x58fa5a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L58fa5c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58fa5au);}goto L58fa5a;}
}
B58fa5c:L58fa5c:{c.instructions+=1;NFSU2_TR(0x58fa5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fa61ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58fa61:L58fa61:{c.instructions+=3;NFSU2_TR(0x58fa61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58fa67:{NFSU2_TR(0x58fa67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa68:{NFSU2_TR(0x58fa68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fa6dull));
TAIL_STATIC(0x74b1f0u,74b);
}
B58fa6d:L58fa6d:{c.instructions+=9;NFSU2_TR(0x58fa6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58fa70:{NFSU2_TR(0x58fa70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58fa71:{NFSU2_TR(0x58fa71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fa74:{NFSU2_TR(0x58fa74);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B58fa78:{NFSU2_TR(0x58fa78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58fa79:{NFSU2_TR(0x58fa79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58fa7a:{NFSU2_TR(0x58fa7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58fa7b:{NFSU2_TR(0x58fa7b);
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
B58fa7e:{NFSU2_TR(0x58fa7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58fa80:L58fa80:{c.instructions+=9;NFSU2_TR(0x58fa80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa81:{NFSU2_TR(0x58fa81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58fa85:{NFSU2_TR(0x58fa85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa86:{NFSU2_TR(0x58fa86);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58fa88:{NFSU2_TR(0x58fa88);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58fa8d:{NFSU2_TR(0x58fa8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fa8e:{NFSU2_TR(0x58fa8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58fa92:{NFSU2_TR(0x58fa92);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58fa97:{NFSU2_TR(0x58fa97);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L58fad5;}}
}
B58fa99:L58fa99:{c.instructions+=1;NFSU2_TR(0x58fa99);
if(r1(R+518)){{goto L58fac9;}}
}
B58fa9b:L58fa9b:{c.instructions+=2;NFSU2_TR(0x58fa9b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x400ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58faa0:{NFSU2_TR(0x58faa0);
if(r1(R+518)){{goto L58faae;}}
}
B58faa2:L58faa2:{c.instructions+=2;NFSU2_TR(0x58faa2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x800ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x800ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58faa7:{NFSU2_TR(0x58faa7);
if(r1(R+518)){{goto L58faef;}}
}
B58faa9:L58faa9:{c.instructions+=1;NFSU2_TR(0x58faa9);
{goto L58fb47;}
}
B58faae:L58faae:{c.instructions+=3;NFSU2_TR(0x58faae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58fab2:{NFSU2_TR(0x58fab2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fab3:{NFSU2_TR(0x58fab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fab8ull));
TAIL_STATIC(0x73ead0u,73e);
}
B58fab8:L58fab8:{c.instructions+=4;NFSU2_TR(0x58fab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fabc:{NFSU2_TR(0x58fabc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fabf:{NFSU2_TR(0x58fabf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fac0:{NFSU2_TR(0x58fac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fac5ull));
TAIL_STATIC(0x582f80u,582);
}
B58fac5:L58fac5:{c.instructions+=4;NFSU2_TR(0x58fac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58fac6:{NFSU2_TR(0x58fac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58fac7:{NFSU2_TR(0x58fac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58fac8:{NFSU2_TR(0x58fac8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58fac9:L58fac9:{c.instructions+=3;NFSU2_TR(0x58fac9);
w4(R+24,u32(0x1ull));
}
B58face:{NFSU2_TR(0x58face);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58fad3:{NFSU2_TR(0x58fad3);
{goto L58fb47;}
}
B58fad5:L58fad5:{c.instructions+=2;NFSU2_TR(0x58fad5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x4000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x4000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58fada:{NFSU2_TR(0x58fada);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58fb47;}}
}
B58fadc:L58fadc:{c.instructions+=2;NFSU2_TR(0x58fadc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fadd:{NFSU2_TR(0x58fadd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fae2ull));
TAIL_STATIC(0x73ead0u,73e);
}
B58fae2:L58fae2:{c.instructions+=4;NFSU2_TR(0x58fae2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fae6:{NFSU2_TR(0x58fae6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fae9:{NFSU2_TR(0x58fae9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58faea:{NFSU2_TR(0x58faea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58faefull));
TAIL_STATIC(0x583050u,583);
}
B58faef:L58faef:{c.instructions+=4;NFSU2_TR(0x58faef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58faf0:{NFSU2_TR(0x58faf0);
w4(R+24,u32(0x1ull));
}
B58faf5:{NFSU2_TR(0x58faf5);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58fafa:{NFSU2_TR(0x58fafa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58faffull));
TAIL_STATIC(0x73ead0u,73e);
}
B58faff:L58faff:{c.instructions+=3;NFSU2_TR(0x58faff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb00:{NFSU2_TR(0x58fb00);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb05:{NFSU2_TR(0x58fb05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fb0aull));
TAIL_STATIC(0x43dc30u,43d);
}
B58fb0a:L58fb0a:{c.instructions+=3;NFSU2_TR(0x58fb0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58fb0d:{NFSU2_TR(0x58fb0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58fb0f:{NFSU2_TR(0x58fb0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58fb34;}}
}
B58fb11:L58fb11:{c.instructions+=2;NFSU2_TR(0x58fb11);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb16:{NFSU2_TR(0x58fb16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fb1bull));
TAIL_STATIC(0x51bd10u,51b);
}
B58fb1b:L58fb1b:{c.instructions+=3;NFSU2_TR(0x58fb1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fb1e:{NFSU2_TR(0x58fb1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58fb20:{NFSU2_TR(0x58fb20);
if(r1(R+518)){{goto L58fb34;}}
}
B58fb22:L58fb22:{c.instructions+=3;NFSU2_TR(0x58fb22);
u8 U[4];
w4(U+0,u32(0x790210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb27:{NFSU2_TR(0x58fb27);
u8 U[4];
w4(U+0,u32(0x1cad26e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb2c:{NFSU2_TR(0x58fb2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fb31ull));
TAIL_STATIC(0x55dda0u,55d);
}
B58fb31:L58fb31:{c.instructions+=1;NFSU2_TR(0x58fb31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58fb34:L58fb34:{c.instructions+=1;NFSU2_TR(0x58fb34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fb39ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f6d0u);}goto L58f6d0;}
}
B58fb39:L58fb39:{c.instructions+=3;NFSU2_TR(0x58fb39);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb3b:{NFSU2_TR(0x58fb3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58fb3e:{NFSU2_TR(0x58fb3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fb43ull));
TAIL_STATIC(0x43be80u,43b);
}
B58fb43:L58fb43:{c.instructions+=2;NFSU2_TR(0x58fb43);
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
B58fb45:{NFSU2_TR(0x58fb45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58fb61;}}
}
B58fb47:L58fb47:{c.instructions+=4;NFSU2_TR(0x58fb47);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fb4b:{NFSU2_TR(0x58fb4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb4c:{NFSU2_TR(0x58fb4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb4d:{NFSU2_TR(0x58fb4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fb52ull));
TAIL_STATIC(0x50cee0u,50c);
}
B58fb52:L58fb52:{c.instructions+=3;NFSU2_TR(0x58fb52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb54:{NFSU2_TR(0x58fb54);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb59:{NFSU2_TR(0x58fb59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fb5eull));
TAIL_STATIC(0x55dde0u,55d);
}
B58fb5e:L58fb5e:{c.instructions+=1;NFSU2_TR(0x58fb5e);
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
B58fb61:L58fb61:{c.instructions+=5;NFSU2_TR(0x58fb61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58fb62:{NFSU2_TR(0x58fb62);
s4(0x83637c,u32(0x1ull));
}
B58fb6c:{NFSU2_TR(0x58fb6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58fb6d:{NFSU2_TR(0x58fb6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58fb6e:{NFSU2_TR(0x58fb6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58fb70:L58fb70:{c.instructions+=4;NFSU2_TR(0x58fb70);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58fb74:{NFSU2_TR(0x58fb74);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58fb77:{NFSU2_TR(0x58fb77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb78:{NFSU2_TR(0x58fb78);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L58fd21;}}
}
B58fb7e:L58fb7e:{c.instructions+=1;NFSU2_TR(0x58fb7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x58fd30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B58fb85:L58fb85:{c.instructions+=7;NFSU2_TR(0x58fb85);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B58fb89:{NFSU2_TR(0x58fb89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb8a:{NFSU2_TR(0x58fb8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58fb8e:{NFSU2_TR(0x58fb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58fb94:{NFSU2_TR(0x58fb94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb95:{NFSU2_TR(0x58fb95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fb96:{NFSU2_TR(0x58fb96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fb9bull));
TAIL_STATIC(0x73eea0u,73e);
}
B58fb9b:L58fb9b:{c.instructions+=3;NFSU2_TR(0x58fb9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58fb9e:{NFSU2_TR(0x58fb9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58fba0:{NFSU2_TR(0x58fba0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58fbb4;}}
}
B58fba2:L58fba2:{c.instructions+=5;NFSU2_TR(0x58fba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fba8:{NFSU2_TR(0x58fba8);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fbaa:{NFSU2_TR(0x58fbaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fbab:{NFSU2_TR(0x58fbab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fbac:{NFSU2_TR(0x58fbac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fbb1ull));
TAIL_STATIC(0x740790u,740);
}
B58fbb1:L58fbb1:{c.instructions+=1;NFSU2_TR(0x58fbb1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58fbb4:L58fbb4:{c.instructions+=4;NFSU2_TR(0x58fbb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58fbba:{NFSU2_TR(0x58fbba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fbbb:{NFSU2_TR(0x58fbbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fbbc:{NFSU2_TR(0x58fbbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fbc1ull));
TAIL_STATIC(0x73eea0u,73e);
}
B58fbc1:L58fbc1:{c.instructions+=2;NFSU2_TR(0x58fbc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fbc2:{NFSU2_TR(0x58fbc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fbc7ull));
TAIL_STATIC(0x73eae0u,73e);
}
B58fbc7:L58fbc7:{c.instructions+=4;NFSU2_TR(0x58fbc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58fbca:{NFSU2_TR(0x58fbca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58fbcc:{NFSU2_TR(0x58fbcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58fbcd:{NFSU2_TR(0x58fbcd);
if(r1(R+518)){{goto L58fbef;}}
}
B58fbcf:L58fbcf:{c.instructions+=5;NFSU2_TR(0x58fbcf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58fbd3:{NFSU2_TR(0x58fbd3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fbd5:{NFSU2_TR(0x58fbd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fbd6:{NFSU2_TR(0x58fbd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fbd7:{NFSU2_TR(0x58fbd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fbdcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f6d0u);}goto L58f6d0;}
}
B58fbdc:L58fbdc:{c.instructions+=2;NFSU2_TR(0x58fbdc);
__builtin_memmove((R+4),(R+0),4);
}
B58fbde:{NFSU2_TR(0x58fbde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fbe3ull));
TAIL_STATIC(0x58d150u,58d);
}
B58fbe3:L58fbe3:{c.instructions+=3;NFSU2_TR(0x58fbe3);
s4(0x83637c,u32(0x1ull));
}
B58fbed:{NFSU2_TR(0x58fbed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58fbee:{NFSU2_TR(0x58fbee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58fbef:L58fbef:{c.instructions+=2;NFSU2_TR(0x58fbef);
u8 U[4];
w4(U+0,u32(0x7902a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fbf4:{NFSU2_TR(0x58fbf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fbf9ull));
TAIL_STATIC(0x52cef0u,52c);
}
B58fbf9:L58fbf9:{c.instructions+=3;NFSU2_TR(0x58fbf9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fbfc:{NFSU2_TR(0x58fbfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58fbfe:{NFSU2_TR(0x58fbfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58fc0a;}}
}
B58fc00:L58fc00:{c.instructions+=2;NFSU2_TR(0x58fc00);
u8 U[4];
w4(U+0,u32(0x57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc02:{NFSU2_TR(0x58fc02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fc07ull));
TAIL_STATIC(0x50d180u,50d);
}
B58fc07:L58fc07:{c.instructions+=1;NFSU2_TR(0x58fc07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fc0a:L58fc0a:{c.instructions+=1;NFSU2_TR(0x58fc0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc0c:L58fc0c:{c.instructions+=2;NFSU2_TR(0x58fc0c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc0e:{NFSU2_TR(0x58fc0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fc13ull));
TAIL_STATIC(0x50cee0u,50c);
}
B58fc13:L58fc13:{c.instructions+=3;NFSU2_TR(0x58fc13);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc15:{NFSU2_TR(0x58fc15);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc1a:{NFSU2_TR(0x58fc1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fc1full));
TAIL_STATIC(0x55dde0u,55d);
}
B58fc1f:L58fc1f:{c.instructions+=4;NFSU2_TR(0x58fc1f);
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
B58fc22:{NFSU2_TR(0x58fc22);
s4(0x83637c,u32(0x1ull));
}
B58fc2c:{NFSU2_TR(0x58fc2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58fc2d:{NFSU2_TR(0x58fc2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58fc2e:L58fc2e:{c.instructions+=3;NFSU2_TR(0x58fc2e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc30:{NFSU2_TR(0x58fc30);
u8 U[4];
w4(U+0,u32(0xf9e94d58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc35:{NFSU2_TR(0x58fc35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fc3aull));
TAIL_STATIC(0x55dde0u,55d);
}
B58fc3a:L58fc3a:{c.instructions+=2;NFSU2_TR(0x58fc3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58fc3d:{NFSU2_TR(0x58fc3d);
{goto L58fce8;}
}
B58fc42:L58fc42:{c.instructions+=3;NFSU2_TR(0x58fc42);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc44:{NFSU2_TR(0x58fc44);
u8 U[4];
w4(U+0,u32(0x98c1b72full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc49:{NFSU2_TR(0x58fc49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fc4eull));
TAIL_STATIC(0x55dde0u,55d);
}
B58fc4e:L58fc4e:{c.instructions+=3;NFSU2_TR(0x58fc4e);
__builtin_memmove((R+4),gp(0x7f44fc),4);
}
B58fc54:{NFSU2_TR(0x58fc54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc55:{NFSU2_TR(0x58fc55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fc5aull));
TAIL_STATIC(0x51bd10u,51b);
}
B58fc5a:L58fc5a:{c.instructions+=3;NFSU2_TR(0x58fc5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58fc5d:{NFSU2_TR(0x58fc5d);
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
B58fc5f:{NFSU2_TR(0x58fc5f);
if(r1(R+518)){{goto L58fd21;}}
}
B58fc65:L58fc65:{c.instructions+=4;NFSU2_TR(0x58fc65);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58fc69:{NFSU2_TR(0x58fc69);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fc6d:{NFSU2_TR(0x58fc6d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc6e:{NFSU2_TR(0x58fc6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fc73ull));
TAIL_STATIC(0x582f80u,582);
}
B58fc73:L58fc73:{c.instructions+=3;NFSU2_TR(0x58fc73);
s4(0x83637c,u32(0x1ull));
}
B58fc7d:{NFSU2_TR(0x58fc7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58fc7e:{NFSU2_TR(0x58fc7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58fc7f:L58fc7f:{c.instructions+=3;NFSU2_TR(0x58fc7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc81:{NFSU2_TR(0x58fc81);
u8 U[4];
w4(U+0,u32(0x99c1b72full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc86:{NFSU2_TR(0x58fc86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fc8bull));
TAIL_STATIC(0x55dde0u,55d);
}
B58fc8b:L58fc8b:{c.instructions+=3;NFSU2_TR(0x58fc8b);
__builtin_memmove((R+0),gp(0x7f44fc),4);
}
B58fc90:{NFSU2_TR(0x58fc90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fc91:{NFSU2_TR(0x58fc91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fc96ull));
TAIL_STATIC(0x51bd10u,51b);
}
B58fc96:L58fc96:{c.instructions+=3;NFSU2_TR(0x58fc96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58fc99:{NFSU2_TR(0x58fc99);
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
B58fc9b:{NFSU2_TR(0x58fc9b);
if(r1(R+518)){{goto L58fd21;}}
}
B58fca1:L58fca1:{c.instructions+=4;NFSU2_TR(0x58fca1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fca5:{NFSU2_TR(0x58fca5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fca6:{NFSU2_TR(0x58fca6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fcaa:{NFSU2_TR(0x58fcaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fcafull));
TAIL_STATIC(0x582ff0u,582);
}
B58fcaf:L58fcaf:{c.instructions+=3;NFSU2_TR(0x58fcaf);
s4(0x83637c,u32(0x1ull));
}
B58fcb9:{NFSU2_TR(0x58fcb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58fcba:{NFSU2_TR(0x58fcba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58fcbb:L58fcbb:{c.instructions+=3;NFSU2_TR(0x58fcbb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fcbd:{NFSU2_TR(0x58fcbd);
u8 U[4];
w4(U+0,u32(0x67bfa959ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fcc2:{NFSU2_TR(0x58fcc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fcc7ull));
TAIL_STATIC(0x55dde0u,55d);
}
B58fcc7:L58fcc7:{c.instructions+=3;NFSU2_TR(0x58fcc7);
__builtin_memmove((R+8),gp(0x7f44fc),4);
}
B58fccd:{NFSU2_TR(0x58fccd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fcce:{NFSU2_TR(0x58fcce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fcd3ull));
TAIL_STATIC(0x51bd10u,51b);
}
B58fcd3:L58fcd3:{c.instructions+=3;NFSU2_TR(0x58fcd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58fcd6:{NFSU2_TR(0x58fcd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58fcd8:{NFSU2_TR(0x58fcd8);
if(r1(R+518)){{goto L58fce8;}}
}
B58fcda:L58fcda:{c.instructions+=4;NFSU2_TR(0x58fcda);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58fcde:{NFSU2_TR(0x58fcde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fce2:{NFSU2_TR(0x58fce2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fce3:{NFSU2_TR(0x58fce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fce8ull));
TAIL_STATIC(0x583050u,583);
}
B58fce8:L58fce8:{c.instructions+=2;NFSU2_TR(0x58fce8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fcea:{NFSU2_TR(0x58fcea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fcefull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f6d0u);}goto L58f6d0;}
}
B58fcef:L58fcef:{c.instructions+=2;NFSU2_TR(0x58fcef);
__builtin_memmove((R+4),(R+0),4);
}
B58fcf1:{NFSU2_TR(0x58fcf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fcf6ull));
TAIL_STATIC(0x5847f0u,584);
}
B58fcf6:L58fcf6:{c.instructions+=2;NFSU2_TR(0x58fcf6);
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
B58fcf8:{NFSU2_TR(0x58fcf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58fd21;}}
}
B58fcfa:L58fcfa:{c.instructions+=2;NFSU2_TR(0x58fcfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fcfb:{NFSU2_TR(0x58fcfb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58fc0cu);}goto L58fc0c;}
}
B58fd00:L58fd00:{c.instructions+=3;NFSU2_TR(0x58fd00);
__builtin_memmove((R+4),gp(0x7f44fc),4);
}
B58fd06:{NFSU2_TR(0x58fd06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fd07:{NFSU2_TR(0x58fd07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fd0cull));
TAIL_STATIC(0x51bd10u,51b);
}
B58fd0c:L58fd0c:{c.instructions+=3;NFSU2_TR(0x58fd0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fd0f:{NFSU2_TR(0x58fd0f);
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
B58fd11:{NFSU2_TR(0x58fd11);
if(r1(R+518)){{goto L58fd21;}}
}
B58fd13:L58fd13:{c.instructions+=4;NFSU2_TR(0x58fd13);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58fd17:{NFSU2_TR(0x58fd17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fd1b:{NFSU2_TR(0x58fd1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fd1c:{NFSU2_TR(0x58fd1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fd21ull));
TAIL_STATIC(0x582f10u,582);
}
B58fd21:L58fd21:{c.instructions+=3;NFSU2_TR(0x58fd21);
s4(0x83637c,u32(0x1ull));
}
B58fd2b:{NFSU2_TR(0x58fd2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58fd2c:{NFSU2_TR(0x58fd2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58fd50:L58fd50:{c.instructions+=10;NFSU2_TR(0x58fd50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fd51:{NFSU2_TR(0x58fd51);
__builtin_memmove((R+20),(R+16),4);
}
B58fd53:{NFSU2_TR(0x58fd53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58fd56:{NFSU2_TR(0x58fd56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B58fd5c:{NFSU2_TR(0x58fd5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fd5d:{NFSU2_TR(0x58fd5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fd5e:{NFSU2_TR(0x58fd5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fd5f:{NFSU2_TR(0x58fd5f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B58fd61:{NFSU2_TR(0x58fd61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fd62:{NFSU2_TR(0x58fd62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fd67ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f740u);}goto L58f740;}
}
B58fd67:L58fd67:{c.instructions+=5;NFSU2_TR(0x58fd67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fd6a:{NFSU2_TR(0x58fd6a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B58fd6d:{NFSU2_TR(0x58fd6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fd70:{NFSU2_TR(0x58fd70);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58fd73:{NFSU2_TR(0x58fd73);
if(r1(R+518)){{goto L58fdab;}}
}
B58fd75:L58fd75:{c.instructions+=2;NFSU2_TR(0x58fd75);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58fd77:{NFSU2_TR(0x58fd77);
if(r1(R+518)){{goto L58fdab;}}
}
B58fd79:L58fd79:{c.instructions+=2;NFSU2_TR(0x58fd79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fd7a:{NFSU2_TR(0x58fd7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fd7full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f740u);}goto L58f740;}
}
B58fd7f:L58fd7f:{c.instructions+=12;NFSU2_TR(0x58fd7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58fd82:{NFSU2_TR(0x58fd82);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B58fd85:{NFSU2_TR(0x58fd85);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B58fd87:{NFSU2_TR(0x58fd87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fd8a:{NFSU2_TR(0x58fd8a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58fd8d:{NFSU2_TR(0x58fd8d);
__builtin_memmove((R+4),(R+518),1);
}
B58fd90:{NFSU2_TR(0x58fd90);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B58fd91:{NFSU2_TR(0x58fd91);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B58fd93:{NFSU2_TR(0x58fd93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58fd99:{NFSU2_TR(0x58fd99);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B58fd9f:{NFSU2_TR(0x58fd9f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fda3:{NFSU2_TR(0x58fda3);
if(r1(R+518)){{goto L58fdab;}}
}
B58fda5:L58fda5:{c.instructions+=2;NFSU2_TR(0x58fda5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B58fda9:{NFSU2_TR(0x58fda9);
{goto L58fdb0;}
}
B58fdab:L58fdab:{c.instructions+=2;NFSU2_TR(0x58fdab);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B58fdae:{NFSU2_TR(0x58fdae);
if(r1(R+518)){{goto L58fe2f;}}
}
B58fdb0:L58fdb0:{c.instructions+=4;NFSU2_TR(0x58fdb0);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58fdb4:{NFSU2_TR(0x58fdb4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B58fdb6:{NFSU2_TR(0x58fdb6);
w4(R+4,u32(0x1full));
}
B58fdbb:{NFSU2_TR(0x58fdbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58fdbf:L58fdbf:{c.instructions+=1;NFSU2_TR(0x58fdbf);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58fdc1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58fdbfu);}goto L58fdbf;}
}
B58fdc1:L58fdc1:{c.instructions+=5;NFSU2_TR(0x58fdc1);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B58fdc3:{NFSU2_TR(0x58fdc3);
u8 U[4];
w4(U+0,u32(0x794d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fdc8:{NFSU2_TR(0x58fdc8);
u8 U[4];
w4(U+0,u32(0x679fd4e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fdcd:{NFSU2_TR(0x58fdcd);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58fdce:{NFSU2_TR(0x58fdce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fdd3ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B58fdd3:L58fdd3:{c.instructions+=5;NFSU2_TR(0x58fdd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fdd6:{NFSU2_TR(0x58fdd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fdd7:{NFSU2_TR(0x58fdd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B58fddb:{NFSU2_TR(0x58fddb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fddc:{NFSU2_TR(0x58fddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fde1ull));
TAIL_STATIC(0x4400d0u,440);
}
B58fde1:L58fde1:{c.instructions+=1;NFSU2_TR(0x58fde1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fde6ull));
TAIL_STATIC(0x582b60u,582);
}
B58fde6:L58fde6:{c.instructions+=8;NFSU2_TR(0x58fde6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58fdec:{NFSU2_TR(0x58fdec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fded:{NFSU2_TR(0x58fded);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58fdf1:{NFSU2_TR(0x58fdf1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fdf2:{NFSU2_TR(0x58fdf2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fdf4:{NFSU2_TR(0x58fdf4);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fdf6:{NFSU2_TR(0x58fdf6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fdf7:{NFSU2_TR(0x58fdf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fdfcull));
TAIL_STATIC(0x73f180u,73f);
}
B58fdfc:L58fdfc:{c.instructions+=2;NFSU2_TR(0x58fdfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B58fdff:{NFSU2_TR(0x58fdff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe04ull));
TAIL_STATIC(0x582b60u,582);
}
B58fe04:L58fe04:{c.instructions+=2;NFSU2_TR(0x58fe04);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B58fe0a:{NFSU2_TR(0x58fe0a);
if(r1(R+518)){{goto L58fe2f;}}
}
B58fe0c:L58fe0c:{c.instructions+=4;NFSU2_TR(0x58fe0c);
s4(0x7fbe54,u32(0x5832e0ull));
}
B58fe16:{NFSU2_TR(0x58fe16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58fe1c:{NFSU2_TR(0x58fe1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fe1d:{NFSU2_TR(0x58fe1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe22ull));
TAIL_STATIC(0x740600u,740);
}
B58fe22:L58fe22:{c.instructions+=2;NFSU2_TR(0x58fe22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fe25:{NFSU2_TR(0x58fe25);
s4(0x7fbe54,u32(0x5832d0ull));
}
B58fe2f:L58fe2f:{c.instructions+=2;NFSU2_TR(0x58fe2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fe30:{NFSU2_TR(0x58fe30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe35ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f740u);}goto L58f740;}
}
B58fe35:L58fe35:{c.instructions+=3;NFSU2_TR(0x58fe35);
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
B58fe38:{NFSU2_TR(0x58fe38);
__builtin_memmove((R+4),(R+0),4);
}
B58fe3a:{NFSU2_TR(0x58fe3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe3full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f360u);}goto L58f360;}
}
B58fe3f:L58fe3f:{c.instructions+=1;NFSU2_TR(0x58fe3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f6d0u);}goto L58f6d0;}
}
B58fe44:L58fe44:{c.instructions+=2;NFSU2_TR(0x58fe44);
__builtin_memmove((R+4),(R+0),4);
}
B58fe46:{NFSU2_TR(0x58fe46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe4bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f2a0u);}goto L58f2a0;}
}
B58fe4b:L58fe4b:{c.instructions+=2;NFSU2_TR(0x58fe4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fe4c:{NFSU2_TR(0x58fe4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe51ull));
TAIL_STATIC(0x58a140u,58a);
}
B58fe51:L58fe51:{c.instructions+=3;NFSU2_TR(0x58fe51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58fe54:{NFSU2_TR(0x58fe54);
__builtin_memmove((R+4),(R+0),4);
}
B58fe56:{NFSU2_TR(0x58fe56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe5bull));
TAIL_STATIC(0x584730u,584);
}
B58fe5b:L58fe5b:{c.instructions+=1;NFSU2_TR(0x58fe5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe60ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f230u);}goto L58f230;}
}
B58fe60:L58fe60:{c.instructions+=2;NFSU2_TR(0x58fe60);
__builtin_memmove((R+4),(R+0),4);
}
B58fe62:{NFSU2_TR(0x58fe62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe67ull));
TAIL_STATIC(0x58a1d0u,58a);
}
B58fe67:L58fe67:{c.instructions+=1;NFSU2_TR(0x58fe67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe6cull));
TAIL_STATIC(0x58b9a0u,58b);
}
B58fe6c:L58fe6c:{c.instructions+=3;NFSU2_TR(0x58fe6c);
__builtin_memmove((R+24),(R+0),4);
}
B58fe6e:{NFSU2_TR(0x58fe6e);
__builtin_memmove((R+4),(R+24),4);
}
B58fe70:{NFSU2_TR(0x58fe70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe75ull));
TAIL_STATIC(0x587790u,587);
}
B58fe75:L58fe75:{c.instructions+=4;NFSU2_TR(0x58fe75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58fe78:{NFSU2_TR(0x58fe78);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58fe7b:{NFSU2_TR(0x58fe7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fe81:{NFSU2_TR(0x58fe81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe86ull));
TAIL_STATIC(0x583220u,583);
}
B58fe86:L58fe86:{c.instructions+=2;NFSU2_TR(0x58fe86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58fe8c:{NFSU2_TR(0x58fe8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fe91ull));
TAIL_STATIC(0x583220u,583);
}
B58fe91:L58fe91:{c.instructions+=4;NFSU2_TR(0x58fe91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58fe97:{NFSU2_TR(0x58fe97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fe98:{NFSU2_TR(0x58fe98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58fe9e:{NFSU2_TR(0x58fe9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fea3ull));
TAIL_STATIC(0x575630u,575);
}
B58fea3:L58fea3:{c.instructions+=3;NFSU2_TR(0x58fea3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fea4:{NFSU2_TR(0x58fea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58feaa:{NFSU2_TR(0x58feaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58feafull));
TAIL_STATIC(0x58b940u,58b);
}
B58feaf:L58feaf:{c.instructions+=5;NFSU2_TR(0x58feaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58feb2:{NFSU2_TR(0x58feb2);
__builtin_memmove((R+0),gp(0x850078),4);
}
B58feb7:{NFSU2_TR(0x58feb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58feba:{NFSU2_TR(0x58feba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58febf:{NFSU2_TR(0x58febf);
if(r1(R+518)){{goto L58fee0;}}
}
B58fec1:L58fec1:{c.instructions+=2;NFSU2_TR(0x58fec1);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B58fec4:{NFSU2_TR(0x58fec4);
if(r1(R+518)){{goto L58fed4;}}
}
B58fec6:L58fec6:{c.instructions+=1;NFSU2_TR(0x58fec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fecbull));
TAIL_STATIC(0x582b60u,582);
}
B58fecb:L58fecb:{c.instructions+=2;NFSU2_TR(0x58fecb);
__builtin_memmove((R+4),(R+0),4);
}
B58fecd:{NFSU2_TR(0x58fecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fed2ull));
TAIL_STATIC(0x584c20u,584);
}
B58fed2:L58fed2:{c.instructions+=1;NFSU2_TR(0x58fed2);
{goto L58fee0;}
}
B58fed4:L58fed4:{c.instructions+=1;NFSU2_TR(0x58fed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fed9ull));
TAIL_STATIC(0x582b60u,582);
}
B58fed9:L58fed9:{c.instructions+=2;NFSU2_TR(0x58fed9);
__builtin_memmove((R+4),(R+0),4);
}
B58fedb:{NFSU2_TR(0x58fedb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fee0ull));
TAIL_STATIC(0x584d80u,584);
}
B58fee0:L58fee0:{c.instructions+=1;NFSU2_TR(0x58fee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fee5ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58fee5:L58fee5:{c.instructions+=3;NFSU2_TR(0x58fee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58feeb:{NFSU2_TR(0x58feeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58fef1:{NFSU2_TR(0x58fef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fef6ull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58fef6:L58fef6:{c.instructions+=2;NFSU2_TR(0x58fef6);
__builtin_memmove((R+4),(R+0),4);
}
B58fef8:{NFSU2_TR(0x58fef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fefdull));
TAIL_STATIC(0x586a80u,586);
}
B58fefd:L58fefd:{c.instructions+=6;NFSU2_TR(0x58fefd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58fefe:{NFSU2_TR(0x58fefe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58feff:{NFSU2_TR(0x58feff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ff00:{NFSU2_TR(0x58ff00);
__builtin_memmove((R+16),(R+20),4);
}
B58ff02:{NFSU2_TR(0x58ff02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ff03:{NFSU2_TR(0x58ff03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ff10:L58ff10:{c.instructions+=14;NFSU2_TR(0x58ff10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ff11:{NFSU2_TR(0x58ff11);
__builtin_memmove((R+20),(R+16),4);
}
B58ff13:{NFSU2_TR(0x58ff13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B58ff16:{NFSU2_TR(0x58ff16);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ff18:{NFSU2_TR(0x58ff18);
u8 U[4];
w4(U+0,u32(0x778b27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ff1d:{NFSU2_TR(0x58ff1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ff23:{NFSU2_TR(0x58ff23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ff24:{NFSU2_TR(0x58ff24);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ff2b:{NFSU2_TR(0x58ff2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x210ull))));
}
B58ff31:{NFSU2_TR(0x58ff31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ff32:{NFSU2_TR(0x58ff32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ff33:{NFSU2_TR(0x58ff33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ff34:{NFSU2_TR(0x58ff34);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ff38:{NFSU2_TR(0x58ff38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ff3dull));
TAIL_STATIC(0x58a0e0u,58a);
}
B58ff3d:L58ff3d:{c.instructions+=3;NFSU2_TR(0x58ff3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B58ff40:{NFSU2_TR(0x58ff40);
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
B58ff42:{NFSU2_TR(0x58ff42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ff60;}}
}
B58ff44:L58ff44:{c.instructions+=9;NFSU2_TR(0x58ff44);
w4(R+0,u32(0xffffffffull));
}
B58ff49:{NFSU2_TR(0x58ff49);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58ff50:{NFSU2_TR(0x58ff50);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ff57:{NFSU2_TR(0x58ff57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ff58:{NFSU2_TR(0x58ff58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ff59:{NFSU2_TR(0x58ff59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ff5a:{NFSU2_TR(0x58ff5a);
__builtin_memmove((R+16),(R+20),4);
}
B58ff5c:{NFSU2_TR(0x58ff5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ff5d:{NFSU2_TR(0x58ff5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ff60:L58ff60:{c.instructions+=2;NFSU2_TR(0x58ff60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ff62:{NFSU2_TR(0x58ff62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ff67ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58f740u);}goto L58f740;}
}
B58ff67:L58ff67:{c.instructions+=5;NFSU2_TR(0x58ff67);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ff6a:{NFSU2_TR(0x58ff6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B58ff6c:{NFSU2_TR(0x58ff6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B58ff6f:{NFSU2_TR(0x58ff6f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B58ff72:{NFSU2_TR(0x58ff72);
if(r1(R+518)){{goto L58ff78;}}
}
B58ff74:L58ff74:{c.instructions+=2;NFSU2_TR(0x58ff74);
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
B58ff76:{NFSU2_TR(0x58ff76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ff94;}}
}
B58ff78:L58ff78:{c.instructions+=9;NFSU2_TR(0x58ff78);
w4(R+0,u32(0xfffffff5ull));
}
B58ff7d:{NFSU2_TR(0x58ff7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58ff84:{NFSU2_TR(0x58ff84);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ff8b:{NFSU2_TR(0x58ff8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ff8c:{NFSU2_TR(0x58ff8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ff8d:{NFSU2_TR(0x58ff8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ff8e:{NFSU2_TR(0x58ff8e);
__builtin_memmove((R+16),(R+20),4);
}
B58ff90:{NFSU2_TR(0x58ff90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ff91:{NFSU2_TR(0x58ff91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ff94:L58ff94:{c.instructions+=2;NFSU2_TR(0x58ff94);
w4(R+4,u32(0x850080ull));
}
B58ff99:{NFSU2_TR(0x58ff99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ff9eull));
TAIL_STATIC(0x5031f0u,503);
}
B58ff9e:L58ff9e:{c.instructions+=3;NFSU2_TR(0x58ff9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58ffa1:{NFSU2_TR(0x58ffa1);
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
B58ffa3:{NFSU2_TR(0x58ffa3);
if(r1(R+518)){TAIL_STATIC(0x5901f9u,590);}
}
B58ffa9:L58ffa9:{c.instructions+=2;NFSU2_TR(0x58ffa9);
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
B58ffac:{NFSU2_TR(0x58ffac);
if(r1(R+518)){TAIL_STATIC(0x5901f9u,590);}
}
B58ffb2:L58ffb2:{c.instructions+=3;NFSU2_TR(0x58ffb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ffb3:{NFSU2_TR(0x58ffb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58ffb4:{NFSU2_TR(0x58ffb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58ffb9ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B58ffb9:L58ffb9:{c.instructions+=3;NFSU2_TR(0x58ffb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58ffbc:{NFSU2_TR(0x58ffbc);
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
B58ffbe:{NFSU2_TR(0x58ffbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58ffdc;}}
}
B58ffc0:L58ffc0:{c.instructions+=9;NFSU2_TR(0x58ffc0);
w4(R+0,u32(0xfffffff4ull));
}
B58ffc5:{NFSU2_TR(0x58ffc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B58ffcc:{NFSU2_TR(0x58ffcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58ffd3:{NFSU2_TR(0x58ffd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ffd4:{NFSU2_TR(0x58ffd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58ffd5:{NFSU2_TR(0x58ffd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58ffd6:{NFSU2_TR(0x58ffd6);
__builtin_memmove((R+16),(R+20),4);
}
B58ffd8:{NFSU2_TR(0x58ffd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B58ffd9:{NFSU2_TR(0x58ffd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58ffdc:L58ffdc:{c.instructions+=4;NFSU2_TR(0x58ffdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58ffe2:{NFSU2_TR(0x58ffe2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58ffe4:{NFSU2_TR(0x58ffe4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58ffe6:{NFSU2_TR(0x58ffe6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x59000fu,590);}
}
B58ffe8:L58ffe8:{c.instructions+=6;NFSU2_TR(0x58ffe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58ffee:{NFSU2_TR(0x58ffee);
__builtin_memmove((R+28),(R+28),4);
}
B58fff0:{NFSU2_TR(0x58fff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58fff3:{NFSU2_TR(0x58fff3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fff4:{NFSU2_TR(0x58fff4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58fff5:{NFSU2_TR(0x58fff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58fffaull));
TAIL_STATIC(0x43dcc0u,43d);
}
B58fffa:L58fffa:{c.instructions+=3;NFSU2_TR(0x58fffa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B58fffd:{NFSU2_TR(0x58fffd);
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
B58ffff:{NFSU2_TR(0x58ffff);
if(r1(R+518)){TAIL_STATIC(0x590065u,590);}
TAIL_STATIC(0x590001u,590);
}
XIT:NFSU2_TR_EXIT(0x58f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
