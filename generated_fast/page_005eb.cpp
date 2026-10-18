#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_426(u8* __restrict R,Cpu& c);
u32 body_429(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4ca(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a2(u8* __restrict R,Cpu& c);
u32 body_5a4(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5eb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5eb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 page_5eb(Cpu& c){return body_5eb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5eb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5eb004:goto L5eb004;
case 0x5eb009:goto L5eb009;
case 0x5eb00b:c.instructions+=1;goto B5eb00b;
case 0x5eb00d:goto L5eb00d;
case 0x5eb013:c.instructions+=2;goto B5eb013;
case 0x5eb014:c.instructions+=1;goto B5eb014;
case 0x5eb019:goto L5eb019;
case 0x5eb01a:c.instructions+=2;goto B5eb01a;
case 0x5eb01f:c.instructions+=1;goto B5eb01f;
case 0x5eb024:goto L5eb024;
case 0x5eb025:c.instructions+=5;goto B5eb025;
case 0x5eb02b:c.instructions+=4;goto B5eb02b;
case 0x5eb02c:c.instructions+=3;goto B5eb02c;
case 0x5eb02d:c.instructions+=2;goto B5eb02d;
case 0x5eb02e:c.instructions+=1;goto B5eb02e;
case 0x5eb040:goto L5eb040;
case 0x5eb043:c.instructions+=5;goto B5eb043;
case 0x5eb044:c.instructions+=4;goto B5eb044;
case 0x5eb045:c.instructions+=3;goto B5eb045;
case 0x5eb047:c.instructions+=2;goto B5eb047;
case 0x5eb04c:c.instructions+=1;goto B5eb04c;
case 0x5eb051:goto L5eb051;
case 0x5eb053:c.instructions+=2;goto B5eb053;
case 0x5eb055:c.instructions+=1;goto B5eb055;
case 0x5eb05b:goto L5eb05b;
case 0x5eb060:c.instructions+=2;goto B5eb060;
case 0x5eb062:c.instructions+=1;goto B5eb062;
case 0x5eb064:goto L5eb064;
case 0x5eb06a:c.instructions+=1;goto B5eb06a;
case 0x5eb06c:goto L5eb06c;
case 0x5eb072:c.instructions+=2;goto B5eb072;
case 0x5eb078:c.instructions+=1;goto B5eb078;
case 0x5eb07a:goto L5eb07a;
case 0x5eb07b:c.instructions+=2;goto B5eb07b;
case 0x5eb07e:c.instructions+=1;goto B5eb07e;
case 0x5eb07f:goto L5eb07f;
case 0x5eb081:goto L5eb081;
case 0x5eb084:c.instructions+=6;goto B5eb084;
case 0x5eb085:c.instructions+=5;goto B5eb085;
case 0x5eb087:c.instructions+=4;goto B5eb087;
case 0x5eb08a:c.instructions+=3;goto B5eb08a;
case 0x5eb08b:c.instructions+=2;goto B5eb08b;
case 0x5eb090:c.instructions+=1;goto B5eb090;
case 0x5eb095:goto L5eb095;
case 0x5eb09b:goto L5eb09b;
case 0x5eb0a1:c.instructions+=2;goto B5eb0a1;
case 0x5eb0a7:c.instructions+=1;goto B5eb0a7;
case 0x5eb0a9:goto L5eb0a9;
case 0x5eb0ab:c.instructions+=1;goto B5eb0ab;
case 0x5eb0ad:goto L5eb0ad;
case 0x5eb0b0:c.instructions+=2;goto B5eb0b0;
case 0x5eb0b1:c.instructions+=1;goto B5eb0b1;
case 0x5eb0b6:goto L5eb0b6;
case 0x5eb0b9:c.instructions+=2;goto B5eb0b9;
case 0x5eb0bb:c.instructions+=1;goto B5eb0bb;
case 0x5eb0bd:goto L5eb0bd;
case 0x5eb0bf:c.instructions+=3;goto B5eb0bf;
case 0x5eb0c0:c.instructions+=2;goto B5eb0c0;
case 0x5eb0c5:c.instructions+=1;goto B5eb0c5;
case 0x5eb0ca:goto L5eb0ca;
case 0x5eb0cd:c.instructions+=1;goto B5eb0cd;
case 0x5eb0cf:goto L5eb0cf;
case 0x5eb0d1:goto L5eb0d1;
case 0x5eb0d7:goto L5eb0d7;
case 0x5eb0dd:c.instructions+=1;goto B5eb0dd;
case 0x5eb0e3:goto L5eb0e3;
case 0x5eb0e8:c.instructions+=1;goto B5eb0e8;
case 0x5eb0ed:goto L5eb0ed;
case 0x5eb0ef:c.instructions+=1;goto B5eb0ef;
case 0x5eb0f1:goto L5eb0f1;
case 0x5eb0f6:c.instructions+=1;goto B5eb0f6;
case 0x5eb0fb:goto L5eb0fb;
case 0x5eb0fd:c.instructions+=1;goto B5eb0fd;
case 0x5eb0ff:goto L5eb0ff;
case 0x5eb102:c.instructions+=6;goto B5eb102;
case 0x5eb103:c.instructions+=5;goto B5eb103;
case 0x5eb105:c.instructions+=4;goto B5eb105;
case 0x5eb108:c.instructions+=3;goto B5eb108;
case 0x5eb109:c.instructions+=2;goto B5eb109;
case 0x5eb10e:c.instructions+=1;goto B5eb10e;
case 0x5eb113:goto L5eb113;
case 0x5eb114:c.instructions+=2;goto B5eb114;
case 0x5eb119:c.instructions+=1;goto B5eb119;
case 0x5eb11e:goto L5eb11e;
case 0x5eb123:c.instructions+=1;goto B5eb123;
case 0x5eb128:goto L5eb128;
case 0x5eb12a:c.instructions+=1;goto B5eb12a;
case 0x5eb12c:goto L5eb12c;
case 0x5eb131:c.instructions+=1;goto B5eb131;
case 0x5eb136:goto L5eb136;
case 0x5eb138:c.instructions+=1;goto B5eb138;
case 0x5eb13a:goto L5eb13a;
case 0x5eb13d:c.instructions+=6;goto B5eb13d;
case 0x5eb13e:c.instructions+=5;goto B5eb13e;
case 0x5eb140:c.instructions+=4;goto B5eb140;
case 0x5eb143:c.instructions+=3;goto B5eb143;
case 0x5eb144:c.instructions+=2;goto B5eb144;
case 0x5eb149:c.instructions+=1;goto B5eb149;
case 0x5eb14e:goto L5eb14e;
case 0x5eb14f:c.instructions+=2;goto B5eb14f;
case 0x5eb154:c.instructions+=1;goto B5eb154;
case 0x5eb159:goto L5eb159;
case 0x5eb15e:c.instructions+=1;goto B5eb15e;
case 0x5eb163:goto L5eb163;
case 0x5eb165:c.instructions+=1;goto B5eb165;
case 0x5eb16b:goto L5eb16b;
case 0x5eb16e:c.instructions+=7;goto B5eb16e;
case 0x5eb16f:c.instructions+=6;goto B5eb16f;
case 0x5eb170:c.instructions+=5;goto B5eb170;
case 0x5eb173:c.instructions+=4;goto B5eb173;
case 0x5eb178:c.instructions+=3;goto B5eb178;
case 0x5eb179:c.instructions+=2;goto B5eb179;
case 0x5eb17e:c.instructions+=1;goto B5eb17e;
case 0x5eb183:goto L5eb183;
case 0x5eb185:c.instructions+=6;goto B5eb185;
case 0x5eb187:c.instructions+=5;goto B5eb187;
case 0x5eb18b:c.instructions+=4;goto B5eb18b;
case 0x5eb18f:c.instructions+=3;goto B5eb18f;
case 0x5eb193:c.instructions+=2;goto B5eb193;
case 0x5eb197:c.instructions+=1;goto B5eb197;
case 0x5eb199:goto L5eb199;
case 0x5eb1a0:goto L5eb1a0;
case 0x5eb1a1:c.instructions+=4;goto B5eb1a1;
case 0x5eb1a5:c.instructions+=3;goto B5eb1a5;
case 0x5eb1a6:c.instructions+=2;goto B5eb1a6;
case 0x5eb1ab:c.instructions+=1;goto B5eb1ab;
case 0x5eb1b0:goto L5eb1b0;
case 0x5eb1b4:c.instructions+=1;goto B5eb1b4;
case 0x5eb1b6:goto L5eb1b6;
case 0x5eb1b9:c.instructions+=6;goto B5eb1b9;
case 0x5eb1ba:c.instructions+=5;goto B5eb1ba;
case 0x5eb1bf:c.instructions+=4;goto B5eb1bf;
case 0x5eb1c2:c.instructions+=3;goto B5eb1c2;
case 0x5eb1c3:c.instructions+=2;goto B5eb1c3;
case 0x5eb1c8:c.instructions+=1;goto B5eb1c8;
case 0x5eb1cd:goto L5eb1cd;
case 0x5eb1cf:c.instructions+=2;goto B5eb1cf;
case 0x5eb1d1:c.instructions+=1;goto B5eb1d1;
case 0x5eb1d3:goto L5eb1d3;
case 0x5eb1d9:c.instructions+=2;goto B5eb1d9;
case 0x5eb1db:c.instructions+=1;goto B5eb1db;
case 0x5eb1dd:goto L5eb1dd;
case 0x5eb1de:c.instructions+=2;goto B5eb1de;
case 0x5eb1e0:c.instructions+=1;goto B5eb1e0;
case 0x5eb1e5:goto L5eb1e5;
case 0x5eb1e9:c.instructions+=3;goto B5eb1e9;
case 0x5eb1ea:c.instructions+=2;goto B5eb1ea;
case 0x5eb1ec:c.instructions+=1;goto B5eb1ec;
case 0x5eb1f1:goto L5eb1f1;
case 0x5eb1f7:goto L5eb1f7;
case 0x5eb1f8:goto L5eb1f8;
case 0x5eb1f9:c.instructions+=3;goto B5eb1f9;
case 0x5eb1fa:c.instructions+=2;goto B5eb1fa;
case 0x5eb1fd:c.instructions+=1;goto B5eb1fd;
case 0x5eb200:goto L5eb200;
case 0x5eb206:c.instructions+=2;goto B5eb206;
case 0x5eb209:c.instructions+=1;goto B5eb209;
case 0x5eb210:goto L5eb210;
case 0x5eb211:c.instructions+=8;goto B5eb211;
case 0x5eb212:c.instructions+=7;goto B5eb212;
case 0x5eb216:c.instructions+=6;goto B5eb216;
case 0x5eb217:c.instructions+=5;goto B5eb217;
case 0x5eb21c:c.instructions+=4;goto B5eb21c;
case 0x5eb21e:c.instructions+=3;goto B5eb21e;
case 0x5eb220:c.instructions+=2;goto B5eb220;
case 0x5eb222:c.instructions+=1;goto B5eb222;
case 0x5eb227:goto L5eb227;
case 0x5eb229:c.instructions+=5;goto B5eb229;
case 0x5eb22b:c.instructions+=4;goto B5eb22b;
case 0x5eb22d:c.instructions+=3;goto B5eb22d;
case 0x5eb22e:c.instructions+=2;goto B5eb22e;
case 0x5eb230:c.instructions+=1;goto B5eb230;
case 0x5eb235:goto L5eb235;
case 0x5eb237:c.instructions+=6;goto B5eb237;
case 0x5eb239:c.instructions+=5;goto B5eb239;
case 0x5eb23b:c.instructions+=4;goto B5eb23b;
case 0x5eb23e:c.instructions+=3;goto B5eb23e;
case 0x5eb23f:c.instructions+=2;goto B5eb23f;
case 0x5eb241:c.instructions+=1;goto B5eb241;
case 0x5eb246:goto L5eb246;
case 0x5eb249:c.instructions+=2;goto B5eb249;
case 0x5eb24e:c.instructions+=1;goto B5eb24e;
case 0x5eb250:goto L5eb250;
case 0x5eb252:c.instructions+=5;goto B5eb252;
case 0x5eb254:c.instructions+=4;goto B5eb254;
case 0x5eb256:c.instructions+=3;goto B5eb256;
case 0x5eb257:c.instructions+=2;goto B5eb257;
case 0x5eb259:c.instructions+=1;goto B5eb259;
case 0x5eb25e:goto L5eb25e;
case 0x5eb261:c.instructions+=2;goto B5eb261;
case 0x5eb262:c.instructions+=1;goto B5eb262;
case 0x5eb264:goto L5eb264;
case 0x5eb266:c.instructions+=1;goto B5eb266;
case 0x5eb26b:goto L5eb26b;
case 0x5eb26c:c.instructions+=3;goto B5eb26c;
case 0x5eb26d:c.instructions+=2;goto B5eb26d;
case 0x5eb26e:c.instructions+=1;goto B5eb26e;
case 0x5eb280:goto L5eb280;
case 0x5eb286:c.instructions+=5;goto B5eb286;
case 0x5eb287:c.instructions+=4;goto B5eb287;
case 0x5eb288:c.instructions+=3;goto B5eb288;
case 0x5eb28b:c.instructions+=2;goto B5eb28b;
case 0x5eb28d:c.instructions+=1;goto B5eb28d;
case 0x5eb28f:goto L5eb28f;
case 0x5eb291:c.instructions+=3;goto B5eb291;
case 0x5eb292:c.instructions+=2;goto B5eb292;
case 0x5eb297:c.instructions+=1;goto B5eb297;
case 0x5eb299:goto L5eb299;
case 0x5eb29a:c.instructions+=2;goto B5eb29a;
case 0x5eb29d:c.instructions+=1;goto B5eb29d;
case 0x5eb29e:goto L5eb29e;
case 0x5eb2a2:c.instructions+=18;goto B5eb2a2;
case 0x5eb2a5:c.instructions+=17;goto B5eb2a5;
case 0x5eb2a8:c.instructions+=16;goto B5eb2a8;
case 0x5eb2ab:c.instructions+=15;goto B5eb2ab;
case 0x5eb2ad:c.instructions+=14;goto B5eb2ad;
case 0x5eb2b0:c.instructions+=13;goto B5eb2b0;
case 0x5eb2b3:c.instructions+=12;goto B5eb2b3;
case 0x5eb2b5:c.instructions+=11;goto B5eb2b5;
case 0x5eb2b7:c.instructions+=10;goto B5eb2b7;
case 0x5eb2b9:c.instructions+=9;goto B5eb2b9;
case 0x5eb2bb:c.instructions+=8;goto B5eb2bb;
case 0x5eb2bd:c.instructions+=7;goto B5eb2bd;
case 0x5eb2bf:c.instructions+=6;goto B5eb2bf;
case 0x5eb2c1:c.instructions+=5;goto B5eb2c1;
case 0x5eb2c3:c.instructions+=4;goto B5eb2c3;
case 0x5eb2c9:c.instructions+=3;goto B5eb2c9;
case 0x5eb2cb:c.instructions+=2;goto B5eb2cb;
case 0x5eb2ce:c.instructions+=1;goto B5eb2ce;
case 0x5eb2d0:goto L5eb2d0;
case 0x5eb2d2:c.instructions+=6;goto B5eb2d2;
case 0x5eb2d3:c.instructions+=5;goto B5eb2d3;
case 0x5eb2d5:c.instructions+=4;goto B5eb2d5;
case 0x5eb2d7:c.instructions+=3;goto B5eb2d7;
case 0x5eb2da:c.instructions+=2;goto B5eb2da;
case 0x5eb2dd:c.instructions+=1;goto B5eb2dd;
case 0x5eb2df:goto L5eb2df;
case 0x5eb2e4:goto L5eb2e4;
case 0x5eb2e5:c.instructions+=3;goto B5eb2e5;
case 0x5eb2eb:c.instructions+=2;goto B5eb2eb;
case 0x5eb2ee:c.instructions+=1;goto B5eb2ee;
case 0x5eb2f0:goto L5eb2f0;
case 0x5eb2f1:c.instructions+=2;goto B5eb2f1;
case 0x5eb2f4:c.instructions+=1;goto B5eb2f4;
case 0x5eb2f5:goto L5eb2f5;
case 0x5eb2f8:c.instructions+=6;goto B5eb2f8;
case 0x5eb2fb:c.instructions+=5;goto B5eb2fb;
case 0x5eb2fe:c.instructions+=4;goto B5eb2fe;
case 0x5eb301:c.instructions+=3;goto B5eb301;
case 0x5eb305:c.instructions+=2;goto B5eb305;
case 0x5eb309:c.instructions+=1;goto B5eb309;
case 0x5eb30b:goto L5eb30b;
case 0x5eb30c:c.instructions+=2;goto B5eb30c;
case 0x5eb30d:c.instructions+=1;goto B5eb30d;
case 0x5eb310:goto L5eb310;
case 0x5eb316:c.instructions+=4;goto B5eb316;
case 0x5eb31c:c.instructions+=3;goto B5eb31c;
case 0x5eb31f:c.instructions+=2;goto B5eb31f;
case 0x5eb321:c.instructions+=1;goto B5eb321;
case 0x5eb323:goto L5eb323;
case 0x5eb327:c.instructions+=1;goto B5eb327;
case 0x5eb329:goto L5eb329;
case 0x5eb32b:c.instructions+=5;goto B5eb32b;
case 0x5eb32d:c.instructions+=4;goto B5eb32d;
case 0x5eb32e:c.instructions+=3;goto B5eb32e;
case 0x5eb334:c.instructions+=2;goto B5eb334;
case 0x5eb335:c.instructions+=1;goto B5eb335;
case 0x5eb337:goto L5eb337;
case 0x5eb338:c.instructions+=2;goto B5eb338;
case 0x5eb33b:c.instructions+=1;goto B5eb33b;
case 0x5eb33c:goto L5eb33c;
case 0x5eb33e:c.instructions+=4;goto B5eb33e;
case 0x5eb341:c.instructions+=3;goto B5eb341;
case 0x5eb347:c.instructions+=2;goto B5eb347;
case 0x5eb34b:c.instructions+=1;goto B5eb34b;
case 0x5eb34d:goto L5eb34d;
case 0x5eb34e:c.instructions+=2;goto B5eb34e;
case 0x5eb351:c.instructions+=1;goto B5eb351;
case 0x5eb352:goto L5eb352;
case 0x5eb354:c.instructions+=4;goto B5eb354;
case 0x5eb357:c.instructions+=3;goto B5eb357;
case 0x5eb35d:c.instructions+=2;goto B5eb35d;
case 0x5eb361:c.instructions+=1;goto B5eb361;
case 0x5eb363:goto L5eb363;
case 0x5eb364:c.instructions+=2;goto B5eb364;
case 0x5eb367:c.instructions+=1;goto B5eb367;
case 0x5eb368:goto L5eb368;
case 0x5eb36c:c.instructions+=6;goto B5eb36c;
case 0x5eb370:c.instructions+=5;goto B5eb370;
case 0x5eb371:c.instructions+=4;goto B5eb371;
case 0x5eb372:c.instructions+=3;goto B5eb372;
case 0x5eb373:c.instructions+=2;goto B5eb373;
case 0x5eb374:c.instructions+=1;goto B5eb374;
case 0x5eb379:goto L5eb379;
case 0x5eb37c:c.instructions+=1;goto B5eb37c;
case 0x5eb37d:goto L5eb37d;
case 0x5eb380:c.instructions+=1;goto B5eb380;
case 0x5eb390:goto L5eb390;
case 0x5eb395:c.instructions+=4;goto B5eb395;
case 0x5eb396:c.instructions+=3;goto B5eb396;
case 0x5eb398:c.instructions+=2;goto B5eb398;
case 0x5eb39a:c.instructions+=1;goto B5eb39a;
case 0x5eb39c:goto L5eb39c;
case 0x5eb3a0:goto L5eb3a0;
case 0x5eb3a7:c.instructions+=1;goto B5eb3a7;
case 0x5eb3ac:goto L5eb3ac;
case 0x5eb3b1:c.instructions+=3;goto B5eb3b1;
case 0x5eb3b2:c.instructions+=2;goto B5eb3b2;
case 0x5eb3b4:c.instructions+=1;goto B5eb3b4;
case 0x5eb3b6:goto L5eb3b6;
case 0x5eb3b7:c.instructions+=1;goto B5eb3b7;
case 0x5eb3c0:goto L5eb3c0;
case 0x5eb3c5:c.instructions+=4;goto B5eb3c5;
case 0x5eb3c6:c.instructions+=3;goto B5eb3c6;
case 0x5eb3c8:c.instructions+=2;goto B5eb3c8;
case 0x5eb3ca:c.instructions+=1;goto B5eb3ca;
case 0x5eb3cc:goto L5eb3cc;
case 0x5eb3cd:c.instructions+=1;goto B5eb3cd;
case 0x5eb3d0:goto L5eb3d0;
case 0x5eb3d7:c.instructions+=3;goto B5eb3d7;
case 0x5eb3da:c.instructions+=2;goto B5eb3da;
case 0x5eb3db:c.instructions+=1;goto B5eb3db;
case 0x5eb3e0:goto L5eb3e0;
case 0x5eb3e3:c.instructions+=6;goto B5eb3e3;
case 0x5eb3e6:c.instructions+=5;goto B5eb3e6;
case 0x5eb3e9:c.instructions+=4;goto B5eb3e9;
case 0x5eb3ee:c.instructions+=3;goto B5eb3ee;
case 0x5eb3ef:c.instructions+=2;goto B5eb3ef;
case 0x5eb3f1:c.instructions+=1;goto B5eb3f1;
case 0x5eb3f3:goto L5eb3f3;
case 0x5eb3f4:goto L5eb3f4;
case 0x5eb3f5:c.instructions+=1;goto B5eb3f5;
case 0x5eb400:goto L5eb400;
case 0x5eb403:c.instructions+=4;goto B5eb403;
case 0x5eb406:c.instructions+=3;goto B5eb406;
case 0x5eb40d:c.instructions+=2;goto B5eb40d;
case 0x5eb40e:c.instructions+=1;goto B5eb40e;
case 0x5eb413:goto L5eb413;
case 0x5eb416:c.instructions+=1;goto B5eb416;
case 0x5eb420:goto L5eb420;
case 0x5eb423:c.instructions+=3;goto B5eb423;
case 0x5eb426:c.instructions+=2;goto B5eb426;
case 0x5eb42e:c.instructions+=1;goto B5eb42e;
case 0x5eb430:goto L5eb430;
case 0x5eb436:c.instructions+=3;goto B5eb436;
case 0x5eb43b:c.instructions+=2;goto B5eb43b;
case 0x5eb43d:c.instructions+=1;goto B5eb43d;
case 0x5eb43f:goto L5eb43f;
case 0x5eb445:c.instructions+=2;goto B5eb445;
case 0x5eb447:c.instructions+=1;goto B5eb447;
case 0x5eb449:goto L5eb449;
case 0x5eb44d:goto L5eb44d;
case 0x5eb450:goto L5eb450;
case 0x5eb455:c.instructions+=5;goto B5eb455;
case 0x5eb45b:c.instructions+=4;goto B5eb45b;
case 0x5eb45d:c.instructions+=3;goto B5eb45d;
case 0x5eb45e:c.instructions+=2;goto B5eb45e;
case 0x5eb460:c.instructions+=1;goto B5eb460;
case 0x5eb466:goto L5eb466;
case 0x5eb46b:c.instructions+=6;goto B5eb46b;
case 0x5eb46e:c.instructions+=5;goto B5eb46e;
case 0x5eb46f:c.instructions+=4;goto B5eb46f;
case 0x5eb473:c.instructions+=3;goto B5eb473;
case 0x5eb478:c.instructions+=2;goto B5eb478;
case 0x5eb479:c.instructions+=1;goto B5eb479;
case 0x5eb47e:goto L5eb47e;
case 0x5eb481:c.instructions+=16;goto B5eb481;
case 0x5eb488:c.instructions+=15;goto B5eb488;
case 0x5eb48b:c.instructions+=14;goto B5eb48b;
case 0x5eb48e:c.instructions+=13;goto B5eb48e;
case 0x5eb48f:c.instructions+=12;goto B5eb48f;
case 0x5eb492:c.instructions+=11;goto B5eb492;
case 0x5eb496:c.instructions+=10;goto B5eb496;
case 0x5eb49a:c.instructions+=9;goto B5eb49a;
case 0x5eb49d:c.instructions+=8;goto B5eb49d;
case 0x5eb4a1:c.instructions+=7;goto B5eb4a1;
case 0x5eb4a4:c.instructions+=6;goto B5eb4a4;
case 0x5eb4a8:c.instructions+=5;goto B5eb4a8;
case 0x5eb4ab:c.instructions+=4;goto B5eb4ab;
case 0x5eb4ac:c.instructions+=3;goto B5eb4ac;
case 0x5eb4b1:c.instructions+=2;goto B5eb4b1;
case 0x5eb4b2:c.instructions+=1;goto B5eb4b2;
case 0x5eb4b7:goto L5eb4b7;
case 0x5eb4b8:c.instructions+=5;goto B5eb4b8;
case 0x5eb4bf:c.instructions+=4;goto B5eb4bf;
case 0x5eb4c0:c.instructions+=3;goto B5eb4c0;
case 0x5eb4c4:c.instructions+=2;goto B5eb4c4;
case 0x5eb4c5:c.instructions+=1;goto B5eb4c5;
case 0x5eb4ca:goto L5eb4ca;
case 0x5eb4cd:c.instructions+=2;goto B5eb4cd;
case 0x5eb4d4:c.instructions+=1;goto B5eb4d4;
case 0x5eb4d9:goto L5eb4d9;
case 0x5eb4dc:c.instructions+=12;goto B5eb4dc;
case 0x5eb4df:c.instructions+=11;goto B5eb4df;
case 0x5eb4e2:c.instructions+=10;goto B5eb4e2;
case 0x5eb4e5:c.instructions+=9;goto B5eb4e5;
case 0x5eb4e8:c.instructions+=8;goto B5eb4e8;
case 0x5eb4ea:c.instructions+=7;goto B5eb4ea;
case 0x5eb4f0:c.instructions+=6;goto B5eb4f0;
case 0x5eb4f6:c.instructions+=5;goto B5eb4f6;
case 0x5eb4fc:c.instructions+=4;goto B5eb4fc;
case 0x5eb4ff:c.instructions+=3;goto B5eb4ff;
case 0x5eb506:c.instructions+=2;goto B5eb506;
case 0x5eb50c:c.instructions+=1;goto B5eb50c;
case 0x5eb513:goto L5eb513;
case 0x5eb514:c.instructions+=2;goto B5eb514;
case 0x5eb51a:c.instructions+=1;goto B5eb51a;
case 0x5eb520:goto L5eb520;
case 0x5eb523:c.instructions+=4;goto B5eb523;
case 0x5eb525:c.instructions+=3;goto B5eb525;
case 0x5eb527:c.instructions+=2;goto B5eb527;
case 0x5eb52a:c.instructions+=1;goto B5eb52a;
case 0x5eb530:goto L5eb530;
case 0x5eb533:c.instructions+=2;goto B5eb533;
case 0x5eb535:c.instructions+=1;goto B5eb535;
case 0x5eb537:goto L5eb537;
case 0x5eb53a:c.instructions+=2;goto B5eb53a;
case 0x5eb53c:c.instructions+=1;goto B5eb53c;
case 0x5eb53e:goto L5eb53e;
case 0x5eb541:c.instructions+=1;goto B5eb541;
case 0x5eb546:goto L5eb546;
case 0x5eb548:c.instructions+=1;goto B5eb548;
case 0x5eb54a:goto L5eb54a;
case 0x5eb54f:c.instructions+=1;goto B5eb54f;
case 0x5eb550:goto L5eb550;
case 0x5eb552:c.instructions+=1;goto B5eb552;
case 0x5eb560:goto L5eb560;
case 0x5eb563:c.instructions+=2;goto B5eb563;
case 0x5eb565:c.instructions+=1;goto B5eb565;
case 0x5eb567:goto L5eb567;
case 0x5eb56a:c.instructions+=2;goto B5eb56a;
case 0x5eb56c:c.instructions+=1;goto B5eb56c;
case 0x5eb56e:goto L5eb56e;
case 0x5eb571:c.instructions+=1;goto B5eb571;
case 0x5eb576:goto L5eb576;
case 0x5eb578:c.instructions+=1;goto B5eb578;
case 0x5eb57a:goto L5eb57a;
case 0x5eb57f:c.instructions+=1;goto B5eb57f;
case 0x5eb580:goto L5eb580;
case 0x5eb582:c.instructions+=1;goto B5eb582;
case 0x5eb590:goto L5eb590;
case 0x5eb593:c.instructions+=3;goto B5eb593;
case 0x5eb596:c.instructions+=2;goto B5eb596;
case 0x5eb59d:c.instructions+=1;goto B5eb59d;
case 0x5eb59f:goto L5eb59f;
case 0x5eb5a5:c.instructions+=2;goto B5eb5a5;
case 0x5eb5a7:c.instructions+=1;goto B5eb5a7;
case 0x5eb5a9:goto L5eb5a9;
case 0x5eb5ab:c.instructions+=1;goto B5eb5ab;
case 0x5eb5ae:goto L5eb5ae;
case 0x5eb5b0:goto L5eb5b0;
case 0x5eb5b3:c.instructions+=3;goto B5eb5b3;
case 0x5eb5b6:c.instructions+=2;goto B5eb5b6;
case 0x5eb5bd:c.instructions+=1;goto B5eb5bd;
case 0x5eb5bf:goto L5eb5bf;
case 0x5eb5c5:c.instructions+=2;goto B5eb5c5;
case 0x5eb5c7:c.instructions+=1;goto B5eb5c7;
case 0x5eb5c9:goto L5eb5c9;
case 0x5eb5cb:c.instructions+=1;goto B5eb5cb;
case 0x5eb5ce:goto L5eb5ce;
case 0x5eb5d0:goto L5eb5d0;
case 0x5eb5d6:c.instructions+=8;goto B5eb5d6;
case 0x5eb5d8:c.instructions+=7;goto B5eb5d8;
case 0x5eb5dd:c.instructions+=6;goto B5eb5dd;
case 0x5eb5de:c.instructions+=5;goto B5eb5de;
case 0x5eb5e3:c.instructions+=4;goto B5eb5e3;
case 0x5eb5ea:c.instructions+=3;goto B5eb5ea;
case 0x5eb5f0:c.instructions+=2;goto B5eb5f0;
case 0x5eb5f2:c.instructions+=1;goto B5eb5f2;
case 0x5eb5f4:goto L5eb5f4;
case 0x5eb5f9:c.instructions+=1;goto B5eb5f9;
case 0x5eb5fb:goto L5eb5fb;
case 0x5eb600:goto L5eb600;
case 0x5eb605:goto L5eb605;
case 0x5eb608:c.instructions+=7;goto B5eb608;
case 0x5eb609:c.instructions+=6;goto B5eb609;
case 0x5eb60a:c.instructions+=5;goto B5eb60a;
case 0x5eb60b:c.instructions+=4;goto B5eb60b;
case 0x5eb60c:c.instructions+=3;goto B5eb60c;
case 0x5eb60d:c.instructions+=2;goto B5eb60d;
case 0x5eb611:c.instructions+=1;goto B5eb611;
case 0x5eb616:goto L5eb616;
case 0x5eb61d:c.instructions+=4;goto B5eb61d;
case 0x5eb620:c.instructions+=3;goto B5eb620;
case 0x5eb622:c.instructions+=2;goto B5eb622;
case 0x5eb626:c.instructions+=1;goto B5eb626;
case 0x5eb628:goto L5eb628;
case 0x5eb62a:c.instructions+=2;goto B5eb62a;
case 0x5eb62c:c.instructions+=1;goto B5eb62c;
case 0x5eb632:goto L5eb632;
case 0x5eb639:c.instructions+=2;goto B5eb639;
case 0x5eb63c:c.instructions+=1;goto B5eb63c;
case 0x5eb640:goto L5eb640;
case 0x5eb642:c.instructions+=2;goto B5eb642;
case 0x5eb644:c.instructions+=1;goto B5eb644;
case 0x5eb646:goto L5eb646;
case 0x5eb64a:c.instructions+=3;goto B5eb64a;
case 0x5eb64b:c.instructions+=2;goto B5eb64b;
case 0x5eb64c:c.instructions+=1;goto B5eb64c;
case 0x5eb651:goto L5eb651;
case 0x5eb654:c.instructions+=3;goto B5eb654;
case 0x5eb657:c.instructions+=2;goto B5eb657;
case 0x5eb659:c.instructions+=1;goto B5eb659;
case 0x5eb65f:goto L5eb65f;
case 0x5eb663:c.instructions+=3;goto B5eb663;
case 0x5eb664:c.instructions+=2;goto B5eb664;
case 0x5eb666:c.instructions+=1;goto B5eb666;
case 0x5eb668:goto L5eb668;
case 0x5eb66c:c.instructions+=1;goto B5eb66c;
case 0x5eb671:goto L5eb671;
case 0x5eb677:c.instructions+=7;goto B5eb677;
case 0x5eb67d:c.instructions+=6;goto B5eb67d;
case 0x5eb67f:c.instructions+=5;goto B5eb67f;
case 0x5eb685:c.instructions+=4;goto B5eb685;
case 0x5eb68c:c.instructions+=3;goto B5eb68c;
case 0x5eb68e:c.instructions+=2;goto B5eb68e;
case 0x5eb691:c.instructions+=1;goto B5eb691;
case 0x5eb693:goto L5eb693;
case 0x5eb699:c.instructions+=7;goto B5eb699;
case 0x5eb69a:c.instructions+=6;goto B5eb69a;
case 0x5eb69b:c.instructions+=5;goto B5eb69b;
case 0x5eb69f:c.instructions+=4;goto B5eb69f;
case 0x5eb6a3:c.instructions+=3;goto B5eb6a3;
case 0x5eb6a4:c.instructions+=2;goto B5eb6a4;
case 0x5eb6a8:c.instructions+=1;goto B5eb6a8;
case 0x5eb6ad:goto L5eb6ad;
case 0x5eb6b1:c.instructions+=4;goto B5eb6b1;
case 0x5eb6b7:c.instructions+=3;goto B5eb6b7;
case 0x5eb6b9:c.instructions+=2;goto B5eb6b9;
case 0x5eb6bc:c.instructions+=1;goto B5eb6bc;
case 0x5eb6be:goto L5eb6be;
case 0x5eb6c0:c.instructions+=2;goto B5eb6c0;
case 0x5eb6c2:c.instructions+=1;goto B5eb6c2;
case 0x5eb6c8:goto L5eb6c8;
case 0x5eb6cf:c.instructions+=1;goto B5eb6cf;
case 0x5eb6d2:goto L5eb6d2;
case 0x5eb6d4:c.instructions+=2;goto B5eb6d4;
case 0x5eb6da:c.instructions+=1;goto B5eb6da;
case 0x5eb6dc:goto L5eb6dc;
case 0x5eb6dd:c.instructions+=2;goto B5eb6dd;
case 0x5eb6e0:c.instructions+=1;goto B5eb6e0;
case 0x5eb6e1:goto L5eb6e1;
case 0x5eb6e3:c.instructions+=1;goto B5eb6e3;
case 0x5eb6e5:goto L5eb6e5;
case 0x5eb6ea:c.instructions+=9;goto B5eb6ea;
case 0x5eb6eb:c.instructions+=8;goto B5eb6eb;
case 0x5eb6ed:c.instructions+=7;goto B5eb6ed;
case 0x5eb6ee:c.instructions+=6;goto B5eb6ee;
case 0x5eb6f0:c.instructions+=5;goto B5eb6f0;
case 0x5eb6f2:c.instructions+=4;goto B5eb6f2;
case 0x5eb6f6:c.instructions+=3;goto B5eb6f6;
case 0x5eb6f7:c.instructions+=2;goto B5eb6f7;
case 0x5eb6fb:c.instructions+=1;goto B5eb6fb;
case 0x5eb6fd:goto L5eb6fd;
case 0x5eb700:c.instructions+=11;goto B5eb700;
case 0x5eb703:c.instructions+=10;goto B5eb703;
case 0x5eb706:c.instructions+=9;goto B5eb706;
case 0x5eb709:c.instructions+=8;goto B5eb709;
case 0x5eb70c:c.instructions+=7;goto B5eb70c;
case 0x5eb70e:c.instructions+=6;goto B5eb70e;
case 0x5eb712:c.instructions+=5;goto B5eb712;
case 0x5eb716:c.instructions+=4;goto B5eb716;
case 0x5eb717:c.instructions+=3;goto B5eb717;
case 0x5eb71a:c.instructions+=2;goto B5eb71a;
case 0x5eb71c:c.instructions+=1;goto B5eb71c;
case 0x5eb722:goto L5eb722;
case 0x5eb726:c.instructions+=1;goto B5eb726;
case 0x5eb72b:goto L5eb72b;
case 0x5eb731:c.instructions+=9;goto B5eb731;
case 0x5eb733:c.instructions+=8;goto B5eb733;
case 0x5eb734:c.instructions+=7;goto B5eb734;
case 0x5eb736:c.instructions+=6;goto B5eb736;
case 0x5eb739:c.instructions+=5;goto B5eb739;
case 0x5eb73b:c.instructions+=4;goto B5eb73b;
case 0x5eb73d:c.instructions+=3;goto B5eb73d;
case 0x5eb741:c.instructions+=2;goto B5eb741;
case 0x5eb745:c.instructions+=1;goto B5eb745;
case 0x5eb749:goto L5eb749;
case 0x5eb74f:c.instructions+=4;goto B5eb74f;
case 0x5eb753:c.instructions+=3;goto B5eb753;
case 0x5eb759:c.instructions+=2;goto B5eb759;
case 0x5eb75c:c.instructions+=1;goto B5eb75c;
case 0x5eb761:goto L5eb761;
case 0x5eb765:c.instructions+=9;goto B5eb765;
case 0x5eb769:c.instructions+=8;goto B5eb769;
case 0x5eb76d:c.instructions+=7;goto B5eb76d;
case 0x5eb770:c.instructions+=6;goto B5eb770;
case 0x5eb774:c.instructions+=5;goto B5eb774;
case 0x5eb775:c.instructions+=4;goto B5eb775;
case 0x5eb776:c.instructions+=3;goto B5eb776;
case 0x5eb779:c.instructions+=2;goto B5eb779;
case 0x5eb77f:c.instructions+=1;goto B5eb77f;
case 0x5eb784:goto L5eb784;
case 0x5eb787:c.instructions+=5;goto B5eb787;
case 0x5eb78b:c.instructions+=4;goto B5eb78b;
case 0x5eb78c:c.instructions+=3;goto B5eb78c;
case 0x5eb78f:c.instructions+=2;goto B5eb78f;
case 0x5eb791:c.instructions+=1;goto B5eb791;
case 0x5eb797:goto L5eb797;
case 0x5eb79b:c.instructions+=2;goto B5eb79b;
case 0x5eb7a6:c.instructions+=1;goto B5eb7a6;
case 0x5eb7ab:goto L5eb7ab;
case 0x5eb7af:c.instructions+=1;goto B5eb7af;
case 0x5eb7b4:goto L5eb7b4;
case 0x5eb7b6:c.instructions+=2;goto B5eb7b6;
case 0x5eb7c1:c.instructions+=1;goto B5eb7c1;
case 0x5eb7c3:goto L5eb7c3;
case 0x5eb7ca:c.instructions+=1;goto B5eb7ca;
case 0x5eb7d0:goto L5eb7d0;
case 0x5eb7d2:c.instructions+=3;goto B5eb7d2;
case 0x5eb7d3:c.instructions+=2;goto B5eb7d3;
case 0x5eb7d7:c.instructions+=1;goto B5eb7d7;
case 0x5eb7dc:goto L5eb7dc;
case 0x5eb7e0:c.instructions+=2;goto B5eb7e0;
case 0x5eb7e2:c.instructions+=1;goto B5eb7e2;
case 0x5eb7e4:goto L5eb7e4;
case 0x5eb7e6:c.instructions+=5;goto B5eb7e6;
case 0x5eb7e8:c.instructions+=4;goto B5eb7e8;
case 0x5eb7ea:c.instructions+=3;goto B5eb7ea;
case 0x5eb7eb:c.instructions+=2;goto B5eb7eb;
case 0x5eb7ef:c.instructions+=1;goto B5eb7ef;
case 0x5eb7f4:goto L5eb7f4;
case 0x5eb7f7:goto L5eb7f7;
case 0x5eb7fa:c.instructions+=2;goto B5eb7fa;
case 0x5eb7fb:c.instructions+=1;goto B5eb7fb;
case 0x5eb7fd:goto L5eb7fd;
case 0x5eb801:c.instructions+=2;goto B5eb801;
case 0x5eb80c:c.instructions+=1;goto B5eb80c;
case 0x5eb811:goto L5eb811;
case 0x5eb818:c.instructions+=7;goto B5eb818;
case 0x5eb819:c.instructions+=6;goto B5eb819;
case 0x5eb81a:c.instructions+=5;goto B5eb81a;
case 0x5eb81b:c.instructions+=4;goto B5eb81b;
case 0x5eb81c:c.instructions+=3;goto B5eb81c;
case 0x5eb823:c.instructions+=2;goto B5eb823;
case 0x5eb829:c.instructions+=1;goto B5eb829;
case 0x5eb830:goto L5eb830;
case 0x5eb835:c.instructions+=1;goto B5eb835;
case 0x5eb83a:goto L5eb83a;
case 0x5eb83b:c.instructions+=1;goto B5eb83b;
case 0x5eb840:goto L5eb840;
case 0x5eb844:c.instructions+=4;goto B5eb844;
case 0x5eb84a:c.instructions+=3;goto B5eb84a;
case 0x5eb84b:c.instructions+=2;goto B5eb84b;
case 0x5eb84c:c.instructions+=1;goto B5eb84c;
case 0x5eb851:goto L5eb851;
case 0x5eb854:c.instructions+=1;goto B5eb854;
case 0x5eb860:goto L5eb860;
case 0x5eb861:c.instructions+=7;goto B5eb861;
case 0x5eb865:c.instructions+=6;goto B5eb865;
case 0x5eb866:c.instructions+=5;goto B5eb866;
case 0x5eb86b:c.instructions+=4;goto B5eb86b;
case 0x5eb86d:c.instructions+=3;goto B5eb86d;
case 0x5eb86f:c.instructions+=2;goto B5eb86f;
case 0x5eb871:c.instructions+=1;goto B5eb871;
case 0x5eb876:goto L5eb876;
case 0x5eb87c:c.instructions+=3;goto B5eb87c;
case 0x5eb87d:c.instructions+=2;goto B5eb87d;
case 0x5eb87f:c.instructions+=1;goto B5eb87f;
case 0x5eb884:goto L5eb884;
case 0x5eb88a:c.instructions+=3;goto B5eb88a;
case 0x5eb88b:c.instructions+=2;goto B5eb88b;
case 0x5eb88d:c.instructions+=1;goto B5eb88d;
case 0x5eb892:goto L5eb892;
case 0x5eb898:c.instructions+=3;goto B5eb898;
case 0x5eb899:c.instructions+=2;goto B5eb899;
case 0x5eb89b:c.instructions+=1;goto B5eb89b;
case 0x5eb8a0:goto L5eb8a0;
case 0x5eb8a6:c.instructions+=3;goto B5eb8a6;
case 0x5eb8a7:c.instructions+=2;goto B5eb8a7;
case 0x5eb8a9:c.instructions+=1;goto B5eb8a9;
case 0x5eb8ae:goto L5eb8ae;
case 0x5eb8b0:c.instructions+=6;goto B5eb8b0;
case 0x5eb8b2:c.instructions+=5;goto B5eb8b2;
case 0x5eb8b4:c.instructions+=4;goto B5eb8b4;
case 0x5eb8ba:c.instructions+=3;goto B5eb8ba;
case 0x5eb8bb:c.instructions+=2;goto B5eb8bb;
case 0x5eb8bd:c.instructions+=1;goto B5eb8bd;
case 0x5eb8c2:goto L5eb8c2;
case 0x5eb8c4:c.instructions+=6;goto B5eb8c4;
case 0x5eb8c6:c.instructions+=5;goto B5eb8c6;
case 0x5eb8c8:c.instructions+=4;goto B5eb8c8;
case 0x5eb8ce:c.instructions+=3;goto B5eb8ce;
case 0x5eb8cf:c.instructions+=2;goto B5eb8cf;
case 0x5eb8d1:c.instructions+=1;goto B5eb8d1;
case 0x5eb8d6:goto L5eb8d6;
case 0x5eb8d7:c.instructions+=2;goto B5eb8d7;
case 0x5eb8da:c.instructions+=1;goto B5eb8da;
case 0x5eb8df:goto L5eb8df;
case 0x5eb8e1:c.instructions+=1;goto B5eb8e1;
case 0x5eb8e6:goto L5eb8e6;
case 0x5eb8e7:c.instructions+=2;goto B5eb8e7;
case 0x5eb8e8:c.instructions+=1;goto B5eb8e8;
case 0x5eb8f0:goto L5eb8f0;
case 0x5eb8f4:c.instructions+=2;goto B5eb8f4;
case 0x5eb8fa:c.instructions+=1;goto B5eb8fa;
case 0x5eb900:goto L5eb900;
case 0x5eb904:c.instructions+=2;goto B5eb904;
case 0x5eb90a:c.instructions+=1;goto B5eb90a;
case 0x5eb910:goto L5eb910;
case 0x5eb914:c.instructions+=2;goto B5eb914;
case 0x5eb91a:c.instructions+=1;goto B5eb91a;
case 0x5eb920:goto L5eb920;
case 0x5eb923:c.instructions+=1;goto B5eb923;
case 0x5eb928:goto L5eb928;
case 0x5eb92c:c.instructions+=1;goto B5eb92c;
case 0x5eb930:goto L5eb930;
case 0x5eb932:c.instructions+=12;goto B5eb932;
case 0x5eb937:c.instructions+=11;goto B5eb937;
case 0x5eb93d:c.instructions+=10;goto B5eb93d;
case 0x5eb93e:c.instructions+=9;goto B5eb93e;
case 0x5eb945:c.instructions+=8;goto B5eb945;
case 0x5eb946:c.instructions+=7;goto B5eb946;
case 0x5eb94a:c.instructions+=6;goto B5eb94a;
case 0x5eb94b:c.instructions+=5;goto B5eb94b;
case 0x5eb94c:c.instructions+=4;goto B5eb94c;
case 0x5eb94e:c.instructions+=3;goto B5eb94e;
case 0x5eb94f:c.instructions+=2;goto B5eb94f;
case 0x5eb953:c.instructions+=1;goto B5eb953;
case 0x5eb958:goto L5eb958;
case 0x5eb95d:c.instructions+=3;goto B5eb95d;
case 0x5eb965:c.instructions+=2;goto B5eb965;
case 0x5eb96b:c.instructions+=1;goto B5eb96b;
case 0x5eb970:goto L5eb970;
case 0x5eb972:c.instructions+=5;goto B5eb972;
case 0x5eb975:c.instructions+=4;goto B5eb975;
case 0x5eb979:c.instructions+=3;goto B5eb979;
case 0x5eb97b:c.instructions+=2;goto B5eb97b;
case 0x5eb980:c.instructions+=1;goto B5eb980;
case 0x5eb982:goto L5eb982;
case 0x5eb984:c.instructions+=1;goto B5eb984;
case 0x5eb989:goto L5eb989;
case 0x5eb98f:c.instructions+=2;goto B5eb98f;
case 0x5eb992:c.instructions+=1;goto B5eb992;
case 0x5eb994:goto L5eb994;
case 0x5eb996:c.instructions+=1;goto B5eb996;
case 0x5eb999:goto L5eb999;
case 0x5eb99d:c.instructions+=6;goto B5eb99d;
case 0x5eb99e:c.instructions+=5;goto B5eb99e;
case 0x5eb9a0:c.instructions+=4;goto B5eb9a0;
case 0x5eb9a1:c.instructions+=3;goto B5eb9a1;
case 0x5eb9a8:c.instructions+=2;goto B5eb9a8;
case 0x5eb9ab:c.instructions+=1;goto B5eb9ab;
case 0x5eb9b0:goto L5eb9b0;
case 0x5eb9b1:c.instructions+=2;goto B5eb9b1;
case 0x5eb9b3:c.instructions+=1;goto B5eb9b3;
case 0x5eb9b8:goto L5eb9b8;
case 0x5eb9bd:c.instructions+=1;goto B5eb9bd;
case 0x5eb9bf:goto L5eb9bf;
case 0x5eb9c0:c.instructions+=1;goto B5eb9c0;
case 0x5eb9c5:goto L5eb9c5;
case 0x5eb9c8:goto L5eb9c8;
case 0x5eb9ca:c.instructions+=2;goto B5eb9ca;
case 0x5eb9cb:c.instructions+=1;goto B5eb9cb;
case 0x5eb9d0:goto L5eb9d0;
case 0x5eb9d2:c.instructions+=13;goto B5eb9d2;
case 0x5eb9d7:c.instructions+=12;goto B5eb9d7;
case 0x5eb9dd:c.instructions+=11;goto B5eb9dd;
case 0x5eb9de:c.instructions+=10;goto B5eb9de;
case 0x5eb9e5:c.instructions+=9;goto B5eb9e5;
case 0x5eb9e6:c.instructions+=8;goto B5eb9e6;
case 0x5eb9e7:c.instructions+=7;goto B5eb9e7;
case 0x5eb9e9:c.instructions+=6;goto B5eb9e9;
case 0x5eb9ed:c.instructions+=5;goto B5eb9ed;
case 0x5eb9f3:c.instructions+=4;goto B5eb9f3;
case 0x5eb9f6:c.instructions+=3;goto B5eb9f6;
case 0x5eb9f8:c.instructions+=2;goto B5eb9f8;
case 0x5eba00:c.instructions+=1;goto B5eba00;
case 0x5eba02:goto L5eba02;
case 0x5eba04:c.instructions+=2;goto B5eba04;
case 0x5eba06:c.instructions+=1;goto B5eba06;
case 0x5eba08:goto L5eba08;
case 0x5eba0a:c.instructions+=2;goto B5eba0a;
case 0x5eba12:c.instructions+=1;goto B5eba12;
case 0x5eba17:goto L5eba17;
case 0x5eba1b:c.instructions+=4;goto B5eba1b;
case 0x5eba1c:c.instructions+=3;goto B5eba1c;
case 0x5eba23:c.instructions+=2;goto B5eba23;
case 0x5eba26:c.instructions+=1;goto B5eba26;
case 0x5eba30:goto L5eba30;
case 0x5eba36:c.instructions+=13;goto B5eba36;
case 0x5eba38:c.instructions+=12;goto B5eba38;
case 0x5eba3d:c.instructions+=11;goto B5eba3d;
case 0x5eba3e:c.instructions+=10;goto B5eba3e;
case 0x5eba42:c.instructions+=9;goto B5eba42;
case 0x5eba45:c.instructions+=8;goto B5eba45;
case 0x5eba4c:c.instructions+=7;goto B5eba4c;
case 0x5eba4d:c.instructions+=6;goto B5eba4d;
case 0x5eba4e:c.instructions+=5;goto B5eba4e;
case 0x5eba50:c.instructions+=4;goto B5eba50;
case 0x5eba53:c.instructions+=3;goto B5eba53;
case 0x5eba5a:c.instructions+=2;goto B5eba5a;
case 0x5eba5d:c.instructions+=1;goto B5eba5d;
case 0x5eba63:goto L5eba63;
case 0x5eba6a:goto L5eba6a;
case 0x5eba6c:c.instructions+=1;goto B5eba6c;
case 0x5eba71:goto L5eba71;
case 0x5eba74:c.instructions+=4;goto B5eba74;
case 0x5eba78:c.instructions+=3;goto B5eba78;
case 0x5eba7a:c.instructions+=2;goto B5eba7a;
case 0x5eba82:c.instructions+=1;goto B5eba82;
case 0x5eba88:goto L5eba88;
case 0x5eba89:c.instructions+=2;goto B5eba89;
case 0x5eba8b:c.instructions+=1;goto B5eba8b;
case 0x5eba90:goto L5eba90;
case 0x5eba95:goto L5eba95;
case 0x5eba9a:c.instructions+=1;goto B5eba9a;
case 0x5eba9f:goto L5eba9f;
case 0x5ebaa2:c.instructions+=4;goto B5ebaa2;
case 0x5ebaa6:c.instructions+=3;goto B5ebaa6;
case 0x5ebaa8:c.instructions+=2;goto B5ebaa8;
case 0x5ebab0:c.instructions+=1;goto B5ebab0;
case 0x5ebab6:goto L5ebab6;
case 0x5ebab7:c.instructions+=2;goto B5ebab7;
case 0x5ebab9:c.instructions+=1;goto B5ebab9;
case 0x5ebabe:goto L5ebabe;
case 0x5ebac3:goto L5ebac3;
case 0x5ebac8:c.instructions+=1;goto B5ebac8;
case 0x5ebacd:goto L5ebacd;
case 0x5ebad0:c.instructions+=4;goto B5ebad0;
case 0x5ebad4:c.instructions+=3;goto B5ebad4;
case 0x5ebad6:c.instructions+=2;goto B5ebad6;
case 0x5ebade:c.instructions+=1;goto B5ebade;
case 0x5ebae0:goto L5ebae0;
case 0x5ebae1:c.instructions+=2;goto B5ebae1;
case 0x5ebae3:c.instructions+=1;goto B5ebae3;
case 0x5ebae8:goto L5ebae8;
case 0x5ebaea:goto L5ebaea;
case 0x5ebaef:c.instructions+=1;goto B5ebaef;
case 0x5ebaf4:goto L5ebaf4;
case 0x5ebaf7:c.instructions+=4;goto B5ebaf7;
case 0x5ebafb:c.instructions+=3;goto B5ebafb;
case 0x5ebafd:c.instructions+=2;goto B5ebafd;
case 0x5ebb05:c.instructions+=1;goto B5ebb05;
case 0x5ebb07:goto L5ebb07;
case 0x5ebb08:c.instructions+=2;goto B5ebb08;
case 0x5ebb0a:c.instructions+=1;goto B5ebb0a;
case 0x5ebb0f:goto L5ebb0f;
case 0x5ebb11:goto L5ebb11;
case 0x5ebb16:c.instructions+=1;goto B5ebb16;
case 0x5ebb1b:goto L5ebb1b;
case 0x5ebb1e:c.instructions+=4;goto B5ebb1e;
case 0x5ebb22:c.instructions+=3;goto B5ebb22;
case 0x5ebb24:c.instructions+=2;goto B5ebb24;
case 0x5ebb2c:c.instructions+=1;goto B5ebb2c;
case 0x5ebb2e:goto L5ebb2e;
case 0x5ebb2f:c.instructions+=2;goto B5ebb2f;
case 0x5ebb31:c.instructions+=1;goto B5ebb31;
case 0x5ebb36:goto L5ebb36;
case 0x5ebb38:goto L5ebb38;
case 0x5ebb3a:c.instructions+=1;goto B5ebb3a;
case 0x5ebb3f:goto L5ebb3f;
case 0x5ebb42:c.instructions+=4;goto B5ebb42;
case 0x5ebb46:c.instructions+=3;goto B5ebb46;
case 0x5ebb48:c.instructions+=2;goto B5ebb48;
case 0x5ebb50:c.instructions+=1;goto B5ebb50;
case 0x5ebb52:goto L5ebb52;
case 0x5ebb53:c.instructions+=2;goto B5ebb53;
case 0x5ebb55:c.instructions+=1;goto B5ebb55;
case 0x5ebb5a:goto L5ebb5a;
case 0x5ebb5c:goto L5ebb5c;
case 0x5ebb5e:goto L5ebb5e;
case 0x5ebb66:c.instructions+=1;goto B5ebb66;
case 0x5ebb69:goto L5ebb69;
case 0x5ebb6b:c.instructions+=1;goto B5ebb6b;
case 0x5ebb6d:goto L5ebb6d;
case 0x5ebb6f:c.instructions+=3;goto B5ebb6f;
case 0x5ebb71:c.instructions+=2;goto B5ebb71;
case 0x5ebb73:c.instructions+=1;goto B5ebb73;
case 0x5ebb75:goto L5ebb75;
case 0x5ebb78:c.instructions+=19;goto B5ebb78;
case 0x5ebb7b:c.instructions+=18;goto B5ebb7b;
case 0x5ebb7e:c.instructions+=17;goto B5ebb7e;
case 0x5ebb81:c.instructions+=16;goto B5ebb81;
case 0x5ebb84:c.instructions+=15;goto B5ebb84;
case 0x5ebb88:c.instructions+=14;goto B5ebb88;
case 0x5ebb8b:c.instructions+=13;goto B5ebb8b;
case 0x5ebb92:c.instructions+=12;goto B5ebb92;
case 0x5ebb96:c.instructions+=11;goto B5ebb96;
case 0x5ebb99:c.instructions+=10;goto B5ebb99;
case 0x5ebba0:c.instructions+=9;goto B5ebba0;
case 0x5ebba4:c.instructions+=8;goto B5ebba4;
case 0x5ebba7:c.instructions+=7;goto B5ebba7;
case 0x5ebbae:c.instructions+=6;goto B5ebbae;
case 0x5ebbb2:c.instructions+=5;goto B5ebbb2;
case 0x5ebbb3:c.instructions+=4;goto B5ebbb3;
case 0x5ebbba:c.instructions+=3;goto B5ebbba;
case 0x5ebbbb:c.instructions+=2;goto B5ebbbb;
case 0x5ebbbe:c.instructions+=1;goto B5ebbbe;
case 0x5ebbe0:goto L5ebbe0;
case 0x5ebbe4:c.instructions+=3;goto B5ebbe4;
case 0x5ebbea:c.instructions+=2;goto B5ebbea;
case 0x5ebbee:c.instructions+=1;goto B5ebbee;
case 0x5ebbf0:goto L5ebbf0;
case 0x5ebbf3:c.instructions+=2;goto B5ebbf3;
case 0x5ebbf7:c.instructions+=1;goto B5ebbf7;
case 0x5ebbfa:goto L5ebbfa;
case 0x5ebc00:goto L5ebc00;
case 0x5ebc03:c.instructions+=2;goto B5ebc03;
case 0x5ebc06:c.instructions+=1;goto B5ebc06;
case 0x5ebc08:goto L5ebc08;
case 0x5ebc0b:c.instructions+=1;goto B5ebc0b;
case 0x5ebc10:goto L5ebc10;
case 0x5ebc13:c.instructions+=1;goto B5ebc13;
case 0x5ebc15:goto L5ebc15;
case 0x5ebc18:c.instructions+=1;goto B5ebc18;
case 0x5ebc1d:goto L5ebc1d;
case 0x5ebc20:goto L5ebc20;
case 0x5ebc21:c.instructions+=10;goto B5ebc21;
case 0x5ebc23:c.instructions+=9;goto B5ebc23;
case 0x5ebc26:c.instructions+=8;goto B5ebc26;
case 0x5ebc29:c.instructions+=7;goto B5ebc29;
case 0x5ebc2c:c.instructions+=6;goto B5ebc2c;
case 0x5ebc32:c.instructions+=5;goto B5ebc32;
case 0x5ebc36:c.instructions+=4;goto B5ebc36;
case 0x5ebc3c:c.instructions+=3;goto B5ebc3c;
case 0x5ebc3e:c.instructions+=2;goto B5ebc3e;
case 0x5ebc41:c.instructions+=1;goto B5ebc41;
case 0x5ebc47:goto L5ebc47;
case 0x5ebc4a:c.instructions+=22;goto B5ebc4a;
case 0x5ebc4d:c.instructions+=21;goto B5ebc4d;
case 0x5ebc51:c.instructions+=20;goto B5ebc51;
case 0x5ebc54:c.instructions+=19;goto B5ebc54;
case 0x5ebc57:c.instructions+=18;goto B5ebc57;
case 0x5ebc5b:c.instructions+=17;goto B5ebc5b;
case 0x5ebc5e:c.instructions+=16;goto B5ebc5e;
case 0x5ebc61:c.instructions+=15;goto B5ebc61;
case 0x5ebc65:c.instructions+=14;goto B5ebc65;
case 0x5ebc69:c.instructions+=13;goto B5ebc69;
case 0x5ebc6d:c.instructions+=12;goto B5ebc6d;
case 0x5ebc71:c.instructions+=11;goto B5ebc71;
case 0x5ebc75:c.instructions+=10;goto B5ebc75;
case 0x5ebc77:c.instructions+=9;goto B5ebc77;
case 0x5ebc7b:c.instructions+=8;goto B5ebc7b;
case 0x5ebc7f:c.instructions+=7;goto B5ebc7f;
case 0x5ebc81:c.instructions+=6;goto B5ebc81;
case 0x5ebc83:c.instructions+=5;goto B5ebc83;
case 0x5ebc89:c.instructions+=4;goto B5ebc89;
case 0x5ebc8d:c.instructions+=3;goto B5ebc8d;
case 0x5ebc8f:c.instructions+=2;goto B5ebc8f;
case 0x5ebc92:c.instructions+=1;goto B5ebc92;
case 0x5ebc94:goto L5ebc94;
case 0x5ebc96:c.instructions+=1;goto B5ebc96;
case 0x5ebc98:goto L5ebc98;
case 0x5ebc9e:goto L5ebc9e;
case 0x5ebca4:c.instructions+=4;goto B5ebca4;
case 0x5ebca6:c.instructions+=3;goto B5ebca6;
case 0x5ebca8:c.instructions+=2;goto B5ebca8;
case 0x5ebcab:c.instructions+=1;goto B5ebcab;
case 0x5ebcad:goto L5ebcad;
case 0x5ebcaf:c.instructions+=1;goto B5ebcaf;
case 0x5ebcb5:goto L5ebcb5;
case 0x5ebcb7:c.instructions+=5;goto B5ebcb7;
case 0x5ebcb9:c.instructions+=4;goto B5ebcb9;
case 0x5ebcbb:c.instructions+=3;goto B5ebcbb;
case 0x5ebcbd:c.instructions+=2;goto B5ebcbd;
case 0x5ebcc0:c.instructions+=1;goto B5ebcc0;
case 0x5ebcc2:goto L5ebcc2;
case 0x5ebcc5:c.instructions+=4;goto B5ebcc5;
case 0x5ebcc6:c.instructions+=3;goto B5ebcc6;
case 0x5ebcca:c.instructions+=2;goto B5ebcca;
case 0x5ebccb:c.instructions+=1;goto B5ebccb;
case 0x5ebcd0:goto L5ebcd0;
case 0x5ebcd4:c.instructions+=18;goto B5ebcd4;
case 0x5ebcd8:c.instructions+=17;goto B5ebcd8;
case 0x5ebcdb:c.instructions+=16;goto B5ebcdb;
case 0x5ebcdf:c.instructions+=15;goto B5ebcdf;
case 0x5ebce3:c.instructions+=14;goto B5ebce3;
case 0x5ebce5:c.instructions+=13;goto B5ebce5;
case 0x5ebce9:c.instructions+=12;goto B5ebce9;
case 0x5ebced:c.instructions+=11;goto B5ebced;
case 0x5ebcef:c.instructions+=10;goto B5ebcef;
case 0x5ebcf3:c.instructions+=9;goto B5ebcf3;
case 0x5ebcf9:c.instructions+=8;goto B5ebcf9;
case 0x5ebcff:c.instructions+=7;goto B5ebcff;
case 0x5ebd05:c.instructions+=6;goto B5ebd05;
case 0x5ebd07:c.instructions+=5;goto B5ebd07;
case 0x5ebd0b:c.instructions+=4;goto B5ebd0b;
case 0x5ebd11:c.instructions+=3;goto B5ebd11;
case 0x5ebd13:c.instructions+=2;goto B5ebd13;
case 0x5ebd16:c.instructions+=1;goto B5ebd16;
case 0x5ebd18:goto L5ebd18;
case 0x5ebd1c:c.instructions+=3;goto B5ebd1c;
case 0x5ebd1d:c.instructions+=2;goto B5ebd1d;
case 0x5ebd22:c.instructions+=1;goto B5ebd22;
case 0x5ebd27:goto L5ebd27;
case 0x5ebd2b:c.instructions+=4;goto B5ebd2b;
case 0x5ebd31:c.instructions+=3;goto B5ebd31;
case 0x5ebd33:c.instructions+=2;goto B5ebd33;
case 0x5ebd36:c.instructions+=1;goto B5ebd36;
case 0x5ebd38:goto L5ebd38;
case 0x5ebd3a:goto L5ebd3a;
case 0x5ebd40:c.instructions+=3;goto B5ebd40;
case 0x5ebd42:c.instructions+=2;goto B5ebd42;
case 0x5ebd43:c.instructions+=1;goto B5ebd43;
case 0x5ebd46:goto L5ebd46;
case 0x5ebd4a:c.instructions+=7;goto B5ebd4a;
case 0x5ebd4f:c.instructions+=6;goto B5ebd4f;
case 0x5ebd51:c.instructions+=5;goto B5ebd51;
case 0x5ebd53:c.instructions+=4;goto B5ebd53;
case 0x5ebd54:c.instructions+=3;goto B5ebd54;
case 0x5ebd57:c.instructions+=2;goto B5ebd57;
case 0x5ebd59:c.instructions+=1;goto B5ebd59;
case 0x5ebd5e:goto L5ebd5e;
case 0x5ebd61:c.instructions+=3;goto B5ebd61;
case 0x5ebd64:c.instructions+=2;goto B5ebd64;
case 0x5ebd69:c.instructions+=1;goto B5ebd69;
case 0x5ebd6e:goto L5ebd6e;
case 0x5ebd70:c.instructions+=2;goto B5ebd70;
case 0x5ebd71:c.instructions+=1;goto B5ebd71;
case 0x5ebd80:goto L5ebd80;
case 0x5ebd81:c.instructions+=10;goto B5ebd81;
case 0x5ebd82:c.instructions+=9;goto B5ebd82;
case 0x5ebd83:c.instructions+=8;goto B5ebd83;
case 0x5ebd84:c.instructions+=7;goto B5ebd84;
case 0x5ebd86:c.instructions+=6;goto B5ebd86;
case 0x5ebd8c:c.instructions+=5;goto B5ebd8c;
case 0x5ebd8f:c.instructions+=4;goto B5ebd8f;
case 0x5ebd91:c.instructions+=3;goto B5ebd91;
case 0x5ebd93:c.instructions+=2;goto B5ebd93;
case 0x5ebd9b:c.instructions+=1;goto B5ebd9b;
case 0x5ebd9d:goto L5ebd9d;
case 0x5ebda2:goto L5ebda2;
case 0x5ebda5:c.instructions+=2;goto B5ebda5;
case 0x5ebda7:c.instructions+=1;goto B5ebda7;
case 0x5ebda9:goto L5ebda9;
case 0x5ebdaa:c.instructions+=2;goto B5ebdaa;
case 0x5ebdac:c.instructions+=1;goto B5ebdac;
case 0x5ebdb1:goto L5ebdb1;
case 0x5ebdb5:c.instructions+=2;goto B5ebdb5;
case 0x5ebdbb:c.instructions+=1;goto B5ebdbb;
case 0x5ebdbf:goto L5ebdbf;
case 0x5ebdc3:c.instructions+=4;goto B5ebdc3;
case 0x5ebdc9:c.instructions+=3;goto B5ebdc9;
case 0x5ebdcb:c.instructions+=2;goto B5ebdcb;
case 0x5ebdce:c.instructions+=1;goto B5ebdce;
case 0x5ebdd0:goto L5ebdd0;
case 0x5ebdd3:c.instructions+=4;goto B5ebdd3;
case 0x5ebdd4:c.instructions+=3;goto B5ebdd4;
case 0x5ebdd7:c.instructions+=2;goto B5ebdd7;
case 0x5ebdd9:c.instructions+=1;goto B5ebdd9;
case 0x5ebddb:goto L5ebddb;
case 0x5ebddf:c.instructions+=4;goto B5ebddf;
case 0x5ebde5:c.instructions+=3;goto B5ebde5;
case 0x5ebde7:c.instructions+=2;goto B5ebde7;
case 0x5ebdea:c.instructions+=1;goto B5ebdea;
case 0x5ebdec:goto L5ebdec;
case 0x5ebdf0:c.instructions+=5;goto B5ebdf0;
case 0x5ebdf1:c.instructions+=4;goto B5ebdf1;
case 0x5ebdf2:c.instructions+=3;goto B5ebdf2;
case 0x5ebdf3:c.instructions+=2;goto B5ebdf3;
case 0x5ebdf4:c.instructions+=1;goto B5ebdf4;
case 0x5ebdf5:goto L5ebdf5;
case 0x5ebdfb:c.instructions+=5;goto B5ebdfb;
case 0x5ebdfc:c.instructions+=4;goto B5ebdfc;
case 0x5ebdfd:c.instructions+=3;goto B5ebdfd;
case 0x5ebdfe:c.instructions+=2;goto B5ebdfe;
case 0x5ebdff:c.instructions+=1;goto B5ebdff;
case 0x5ebe00:goto L5ebe00;
case 0x5ebe01:c.instructions+=8;goto B5ebe01;
case 0x5ebe02:c.instructions+=7;goto B5ebe02;
case 0x5ebe04:c.instructions+=6;goto B5ebe04;
case 0x5ebe0a:c.instructions+=5;goto B5ebe0a;
case 0x5ebe0b:c.instructions+=4;goto B5ebe0b;
case 0x5ebe0f:c.instructions+=3;goto B5ebe0f;
case 0x5ebe11:c.instructions+=2;goto B5ebe11;
case 0x5ebe13:c.instructions+=1;goto B5ebe13;
case 0x5ebe15:goto L5ebe15;
case 0x5ebe1b:c.instructions+=2;goto B5ebe1b;
case 0x5ebe1d:c.instructions+=1;goto B5ebe1d;
case 0x5ebe1f:goto L5ebe1f;
case 0x5ebe21:c.instructions+=4;goto B5ebe21;
case 0x5ebe23:c.instructions+=3;goto B5ebe23;
case 0x5ebe25:c.instructions+=2;goto B5ebe25;
case 0x5ebe27:c.instructions+=1;goto B5ebe27;
case 0x5ebe2a:goto L5ebe2a;
case 0x5ebe2e:c.instructions+=3;goto B5ebe2e;
case 0x5ebe34:c.instructions+=2;goto B5ebe34;
case 0x5ebe3a:c.instructions+=1;goto B5ebe3a;
case 0x5ebe3c:goto L5ebe3c;
case 0x5ebe42:c.instructions+=9;goto B5ebe42;
case 0x5ebe44:c.instructions+=8;goto B5ebe44;
case 0x5ebe46:c.instructions+=7;goto B5ebe46;
case 0x5ebe4a:c.instructions+=6;goto B5ebe4a;
case 0x5ebe4e:c.instructions+=5;goto B5ebe4e;
case 0x5ebe54:c.instructions+=4;goto B5ebe54;
case 0x5ebe5a:c.instructions+=3;goto B5ebe5a;
case 0x5ebe5c:c.instructions+=2;goto B5ebe5c;
case 0x5ebe5f:c.instructions+=1;goto B5ebe5f;
case 0x5ebe61:goto L5ebe61;
case 0x5ebe63:c.instructions+=1;goto B5ebe63;
case 0x5ebe65:goto L5ebe65;
case 0x5ebe67:goto L5ebe67;
case 0x5ebe6d:goto L5ebe6d;
case 0x5ebe71:c.instructions+=1;goto B5ebe71;
case 0x5ebe73:goto L5ebe73;
case 0x5ebe7a:c.instructions+=1;goto B5ebe7a;
case 0x5ebe7c:goto L5ebe7c;
case 0x5ebe82:c.instructions+=2;goto B5ebe82;
case 0x5ebe84:c.instructions+=1;goto B5ebe84;
case 0x5ebe86:goto L5ebe86;
case 0x5ebe8c:c.instructions+=2;goto B5ebe8c;
case 0x5ebe8e:c.instructions+=1;goto B5ebe8e;
case 0x5ebe90:goto L5ebe90;
case 0x5ebe92:c.instructions+=1;goto B5ebe92;
case 0x5ebe94:goto L5ebe94;
case 0x5ebe96:goto L5ebe96;
case 0x5ebe99:c.instructions+=3;goto B5ebe99;
case 0x5ebe9b:c.instructions+=2;goto B5ebe9b;
case 0x5ebea1:c.instructions+=1;goto B5ebea1;
case 0x5ebea6:goto L5ebea6;
case 0x5ebeaa:c.instructions+=5;goto B5ebeaa;
case 0x5ebead:c.instructions+=4;goto B5ebead;
case 0x5ebeb1:c.instructions+=3;goto B5ebeb1;
case 0x5ebeb7:c.instructions+=2;goto B5ebeb7;
case 0x5ebeb9:c.instructions+=1;goto B5ebeb9;
case 0x5ebebb:goto L5ebebb;
case 0x5ebec1:goto L5ebec1;
case 0x5ebec3:c.instructions+=1;goto B5ebec3;
case 0x5ebec5:goto L5ebec5;
case 0x5ebecb:c.instructions+=3;goto B5ebecb;
case 0x5ebecd:c.instructions+=2;goto B5ebecd;
case 0x5ebed0:c.instructions+=1;goto B5ebed0;
case 0x5ebed2:goto L5ebed2;
case 0x5ebed8:c.instructions+=8;goto B5ebed8;
case 0x5ebede:c.instructions+=7;goto B5ebede;
case 0x5ebee0:c.instructions+=6;goto B5ebee0;
case 0x5ebee1:c.instructions+=5;goto B5ebee1;
case 0x5ebee2:c.instructions+=4;goto B5ebee2;
case 0x5ebee5:c.instructions+=3;goto B5ebee5;
case 0x5ebee7:c.instructions+=2;goto B5ebee7;
case 0x5ebee9:c.instructions+=1;goto B5ebee9;
case 0x5ebeee:goto L5ebeee;
case 0x5ebef4:c.instructions+=2;goto B5ebef4;
case 0x5ebef6:c.instructions+=1;goto B5ebef6;
case 0x5ebef8:goto L5ebef8;
case 0x5ebefa:c.instructions+=4;goto B5ebefa;
case 0x5ebefc:c.instructions+=3;goto B5ebefc;
case 0x5ebefe:c.instructions+=2;goto B5ebefe;
case 0x5ebf00:c.instructions+=1;goto B5ebf00;
case 0x5ebf03:goto L5ebf03;
case 0x5ebf09:c.instructions+=5;goto B5ebf09;
case 0x5ebf0a:c.instructions+=4;goto B5ebf0a;
case 0x5ebf10:c.instructions+=3;goto B5ebf10;
case 0x5ebf11:c.instructions+=2;goto B5ebf11;
case 0x5ebf12:c.instructions+=1;goto B5ebf12;
case 0x5ebf15:goto L5ebf15;
case 0x5ebf1b:c.instructions+=5;goto B5ebf1b;
case 0x5ebf1c:c.instructions+=4;goto B5ebf1c;
case 0x5ebf22:c.instructions+=3;goto B5ebf22;
case 0x5ebf23:c.instructions+=2;goto B5ebf23;
case 0x5ebf24:c.instructions+=1;goto B5ebf24;
case 0x5ebf27:goto L5ebf27;
case 0x5ebf2d:c.instructions+=6;goto B5ebf2d;
case 0x5ebf2f:c.instructions+=5;goto B5ebf2f;
case 0x5ebf30:c.instructions+=4;goto B5ebf30;
case 0x5ebf36:c.instructions+=3;goto B5ebf36;
case 0x5ebf37:c.instructions+=2;goto B5ebf37;
case 0x5ebf38:c.instructions+=1;goto B5ebf38;
case 0x5ebf3b:goto L5ebf3b;
case 0x5ebf41:c.instructions+=6;goto B5ebf41;
case 0x5ebf43:c.instructions+=5;goto B5ebf43;
case 0x5ebf44:c.instructions+=4;goto B5ebf44;
case 0x5ebf4a:c.instructions+=3;goto B5ebf4a;
case 0x5ebf4b:c.instructions+=2;goto B5ebf4b;
case 0x5ebf4c:c.instructions+=1;goto B5ebf4c;
case 0x5ebf50:goto L5ebf50;
case 0x5ebf53:c.instructions+=2;goto B5ebf53;
case 0x5ebf5a:c.instructions+=1;goto B5ebf5a;
case 0x5ebf60:goto L5ebf60;
case 0x5ebf6a:c.instructions+=1;goto B5ebf6a;
case 0x5ebf70:goto L5ebf70;
case 0x5ebf74:c.instructions+=5;goto B5ebf74;
case 0x5ebf7a:c.instructions+=4;goto B5ebf7a;
case 0x5ebf7c:c.instructions+=3;goto B5ebf7c;
case 0x5ebf7e:c.instructions+=2;goto B5ebf7e;
case 0x5ebf81:c.instructions+=1;goto B5ebf81;
case 0x5ebf83:goto L5ebf83;
case 0x5ebf85:c.instructions+=1;goto B5ebf85;
case 0x5ebf8b:goto L5ebf8b;
case 0x5ebf90:c.instructions+=3;goto B5ebf90;
case 0x5ebf96:c.instructions+=2;goto B5ebf96;
case 0x5ebf9c:c.instructions+=1;goto B5ebf9c;
case 0x5ebfa0:goto L5ebfa0;
case 0x5ebfa1:c.instructions+=3;goto B5ebfa1;
case 0x5ebfa7:c.instructions+=2;goto B5ebfa7;
case 0x5ebfa9:c.instructions+=1;goto B5ebfa9;
case 0x5ebfab:goto L5ebfab;
case 0x5ebfb0:c.instructions+=1;goto B5ebfb0;
case 0x5ebfb2:goto L5ebfb2;
case 0x5ebfb7:c.instructions+=8;goto B5ebfb7;
case 0x5ebfbd:c.instructions+=7;goto B5ebfbd;
case 0x5ebfc1:c.instructions+=6;goto B5ebfc1;
case 0x5ebfc5:c.instructions+=5;goto B5ebfc5;
case 0x5ebfcb:c.instructions+=4;goto B5ebfcb;
case 0x5ebfd1:c.instructions+=3;goto B5ebfd1;
case 0x5ebfd3:c.instructions+=2;goto B5ebfd3;
case 0x5ebfd6:c.instructions+=1;goto B5ebfd6;
case 0x5ebfd8:goto L5ebfd8;
case 0x5ebfdd:c.instructions+=2;goto B5ebfdd;
case 0x5ebfde:c.instructions+=1;goto B5ebfde;
case 0x5ebfdf:goto L5ebfdf;
case 0x5ebfe1:c.instructions+=2;goto B5ebfe1;
case 0x5ebfe2:c.instructions+=1;goto B5ebfe2;
case 0x5ebff0:goto L5ebff0;
case 0x5ebff1:c.instructions+=4;goto B5ebff1;
case 0x5ebff3:c.instructions+=3;goto B5ebff3;
case 0x5ebff7:c.instructions+=2;goto B5ebff7;
case 0x5ebffd:c.instructions+=1;goto B5ebffd;
default:missing_instruction(c.pc);}
B5eb004:L5eb004:{c.instructions+=1;NFSU2_TR(0x5eb004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb009ull));
TAIL_STATIC(0x532a50u,532);
}
B5eb009:L5eb009:{c.instructions+=2;NFSU2_TR(0x5eb009);
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
B5eb00b:{NFSU2_TR(0x5eb00b);
if(r1(R+518)){{goto L5eb024;}}
}
B5eb00d:L5eb00d:{c.instructions+=3;NFSU2_TR(0x5eb00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb013:{NFSU2_TR(0x5eb013);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb014:{NFSU2_TR(0x5eb014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb019ull));
TAIL_STATIC(0x4ca020u,4ca);
}
B5eb019:L5eb019:{c.instructions+=3;NFSU2_TR(0x5eb019);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb01a:{NFSU2_TR(0x5eb01a);
w4(R+4,u32(0x85ad40ull));
}
B5eb01f:{NFSU2_TR(0x5eb01f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb024ull));
TAIL_STATIC(0x532b10u,532);
}
B5eb024:L5eb024:{c.instructions+=6;NFSU2_TR(0x5eb024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eb025:{NFSU2_TR(0x5eb025);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9acull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb02b:{NFSU2_TR(0x5eb02b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb02c:{NFSU2_TR(0x5eb02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eb02d:{NFSU2_TR(0x5eb02d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5eb02e:{NFSU2_TR(0x5eb02e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb040:L5eb040:{c.instructions+=6;NFSU2_TR(0x5eb040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5eb043:{NFSU2_TR(0x5eb043);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb044:{NFSU2_TR(0x5eb044);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb045:{NFSU2_TR(0x5eb045);
__builtin_memmove((R+28),(R+4),4);
}
B5eb047:{NFSU2_TR(0x5eb047);
w4(R+4,u32(0x85ad40ull));
}
B5eb04c:{NFSU2_TR(0x5eb04c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb051ull));
TAIL_STATIC(0x500b60u,500);
}
B5eb051:L5eb051:{c.instructions+=3;NFSU2_TR(0x5eb051);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5eb053:{NFSU2_TR(0x5eb053);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eb055:{NFSU2_TR(0x5eb055);
if(r1(R+518)){{goto L5eb0e3;}}
}
B5eb05b:L5eb05b:{c.instructions+=3;NFSU2_TR(0x5eb05b);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B5eb060:{NFSU2_TR(0x5eb060);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5eb062:{NFSU2_TR(0x5eb062);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eb0e3;}}
}
B5eb064:L5eb064:{c.instructions+=2;NFSU2_TR(0x5eb064);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5eb06a:{NFSU2_TR(0x5eb06a);
if(r1(R+518)){{goto L5eb081;}}
}
B5eb06c:L5eb06c:{c.instructions+=3;NFSU2_TR(0x5eb06c);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B5eb072:{NFSU2_TR(0x5eb072);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5eb078:{NFSU2_TR(0x5eb078);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5eb07f;}}
}
B5eb07a:L5eb07a:{c.instructions+=3;NFSU2_TR(0x5eb07a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5eb07b:{NFSU2_TR(0x5eb07b);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B5eb07e:{NFSU2_TR(0x5eb07e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5eb07f:L5eb07f:{c.instructions+=1;NFSU2_TR(0x5eb07f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eb09b;}}
}
B5eb081:L5eb081:{c.instructions+=7;NFSU2_TR(0x5eb081);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eb084:{NFSU2_TR(0x5eb084);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb085:{NFSU2_TR(0x5eb085);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb087:{NFSU2_TR(0x5eb087);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B5eb08a:{NFSU2_TR(0x5eb08a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb08b:{NFSU2_TR(0x5eb08b);
w4(R+4,u32(0x88f298ull));
}
B5eb090:{NFSU2_TR(0x5eb090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb095ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5eb095:L5eb095:{c.instructions+=1;NFSU2_TR(0x5eb095);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb09b:L5eb09b:{c.instructions+=3;NFSU2_TR(0x5eb09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb0a1:{NFSU2_TR(0x5eb0a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5eb0a7:{NFSU2_TR(0x5eb0a7);
if(r1(R+518)){{goto L5eb0e3;}}
}
B5eb0a9:L5eb0a9:{c.instructions+=2;NFSU2_TR(0x5eb0a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eb0ab:{NFSU2_TR(0x5eb0ab);
if(r1(R+518)){{goto L5eb0d7;}}
}
B5eb0ad:L5eb0ad:{c.instructions+=3;NFSU2_TR(0x5eb0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb0b0:{NFSU2_TR(0x5eb0b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb0b1:{NFSU2_TR(0x5eb0b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb0b6ull));
TAIL_STATIC(0x5d3de0u,5d3);
}
B5eb0b6:L5eb0b6:{c.instructions+=3;NFSU2_TR(0x5eb0b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5eb0b9:{NFSU2_TR(0x5eb0b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eb0bb:{NFSU2_TR(0x5eb0bb);
if(r1(R+518)){{goto L5eb0cf;}}
}
B5eb0bd:L5eb0bd:{c.instructions+=4;NFSU2_TR(0x5eb0bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5eb0bf:{NFSU2_TR(0x5eb0bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb0c0:{NFSU2_TR(0x5eb0c0);
u8 U[4];
w4(U+0,u32(0x79b864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb0c5:{NFSU2_TR(0x5eb0c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb0caull));
TAIL_STATIC(0x50b9c0u,50b);
}
B5eb0ca:L5eb0ca:{c.instructions+=2;NFSU2_TR(0x5eb0ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5eb0cd:{NFSU2_TR(0x5eb0cd);
{goto L5eb0d1;}
}
B5eb0cf:L5eb0cf:{c.instructions+=1;NFSU2_TR(0x5eb0cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5eb0d1:L5eb0d1:{c.instructions+=1;NFSU2_TR(0x5eb0d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb0d7:L5eb0d7:{c.instructions+=2;NFSU2_TR(0x5eb0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb0dd:{NFSU2_TR(0x5eb0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9b4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb0e3:L5eb0e3:{c.instructions+=2;NFSU2_TR(0x5eb0e3);
w4(R+4,u32(0x85ad40ull));
}
B5eb0e8:{NFSU2_TR(0x5eb0e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb0edull));
TAIL_STATIC(0x500b60u,500);
}
B5eb0ed:L5eb0ed:{c.instructions+=2;NFSU2_TR(0x5eb0ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eb0ef:{NFSU2_TR(0x5eb0ef);
if(r1(R+518)){{goto L5eb11e;}}
}
B5eb0f1:L5eb0f1:{c.instructions+=2;NFSU2_TR(0x5eb0f1);
w4(R+4,u32(0x85b940ull));
}
B5eb0f6:{NFSU2_TR(0x5eb0f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb0fbull));
TAIL_STATIC(0x501690u,501);
}
B5eb0fb:L5eb0fb:{c.instructions+=2;NFSU2_TR(0x5eb0fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eb0fd:{NFSU2_TR(0x5eb0fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eb11e;}}
}
B5eb0ff:L5eb0ff:{c.instructions+=7;NFSU2_TR(0x5eb0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eb102:{NFSU2_TR(0x5eb102);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb103:{NFSU2_TR(0x5eb103);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb105:{NFSU2_TR(0x5eb105);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B5eb108:{NFSU2_TR(0x5eb108);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb109:{NFSU2_TR(0x5eb109);
w4(R+4,u32(0x88f298ull));
}
B5eb10e:{NFSU2_TR(0x5eb10e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb113ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5eb113:L5eb113:{c.instructions+=3;NFSU2_TR(0x5eb113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb114:{NFSU2_TR(0x5eb114);
w4(R+4,u32(0x85ad40ull));
}
B5eb119:{NFSU2_TR(0x5eb119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb11eull));
TAIL_STATIC(0x532d40u,532);
}
B5eb11e:L5eb11e:{c.instructions+=2;NFSU2_TR(0x5eb11e);
w4(R+4,u32(0x85ad40ull));
}
B5eb123:{NFSU2_TR(0x5eb123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb128ull));
TAIL_STATIC(0x500b60u,500);
}
B5eb128:L5eb128:{c.instructions+=2;NFSU2_TR(0x5eb128);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eb12a:{NFSU2_TR(0x5eb12a);
if(r1(R+518)){{goto L5eb159;}}
}
B5eb12c:L5eb12c:{c.instructions+=2;NFSU2_TR(0x5eb12c);
w4(R+4,u32(0x85b940ull));
}
B5eb131:{NFSU2_TR(0x5eb131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb136ull));
TAIL_STATIC(0x501690u,501);
}
B5eb136:L5eb136:{c.instructions+=2;NFSU2_TR(0x5eb136);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eb138:{NFSU2_TR(0x5eb138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eb159;}}
}
B5eb13a:L5eb13a:{c.instructions+=7;NFSU2_TR(0x5eb13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb13d:{NFSU2_TR(0x5eb13d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb13e:{NFSU2_TR(0x5eb13e);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb140:{NFSU2_TR(0x5eb140);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5eb143:{NFSU2_TR(0x5eb143);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb144:{NFSU2_TR(0x5eb144);
w4(R+4,u32(0x88f298ull));
}
B5eb149:{NFSU2_TR(0x5eb149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb14eull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5eb14e:L5eb14e:{c.instructions+=3;NFSU2_TR(0x5eb14e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb14f:{NFSU2_TR(0x5eb14f);
w4(R+4,u32(0x85ad40ull));
}
B5eb154:{NFSU2_TR(0x5eb154);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb159ull));
TAIL_STATIC(0x5283c0u,528);
}
B5eb159:L5eb159:{c.instructions+=2;NFSU2_TR(0x5eb159);
w4(R+4,u32(0x85ad40ull));
}
B5eb15e:{NFSU2_TR(0x5eb15e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb163ull));
TAIL_STATIC(0x500b60u,500);
}
B5eb163:L5eb163:{c.instructions+=2;NFSU2_TR(0x5eb163);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eb165:{NFSU2_TR(0x5eb165);
if(r1(R+518)){{goto L5eb1f8;}}
}
B5eb16b:L5eb16b:{c.instructions+=8;NFSU2_TR(0x5eb16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb16e:{NFSU2_TR(0x5eb16e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb16f:{NFSU2_TR(0x5eb16f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb170:{NFSU2_TR(0x5eb170);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B5eb173:{NFSU2_TR(0x5eb173);
u8 U[4];
w4(U+0,u32(0xe000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb178:{NFSU2_TR(0x5eb178);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb179:{NFSU2_TR(0x5eb179);
w4(R+4,u32(0x88f298ull));
}
B5eb17e:{NFSU2_TR(0x5eb17e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb183ull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B5eb183:L5eb183:{c.instructions+=7;NFSU2_TR(0x5eb183);
__builtin_memmove((R+24),(R+0),4);
}
B5eb185:{NFSU2_TR(0x5eb185);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eb187:{NFSU2_TR(0x5eb187);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb18b:{NFSU2_TR(0x5eb18b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb18f:{NFSU2_TR(0x5eb18f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb193:{NFSU2_TR(0x5eb193);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb197:{NFSU2_TR(0x5eb197);
if(r1(R+518)){{goto L5eb1d3;}}
}
B5eb199:L5eb199:{c.instructions+=1;NFSU2_TR(0x5eb199);
__builtin_memmove((R+16),(R+16),4);
}
B5eb1a0:L5eb1a0:{c.instructions+=5;NFSU2_TR(0x5eb1a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb1a1:{NFSU2_TR(0x5eb1a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5eb1a5:{NFSU2_TR(0x5eb1a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb1a6:{NFSU2_TR(0x5eb1a6);
w4(R+4,u32(0x85ad40ull));
}
B5eb1ab:{NFSU2_TR(0x5eb1ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb1b0ull));
TAIL_STATIC(0x527800u,527);
}
B5eb1b0:L5eb1b0:{c.instructions+=2;NFSU2_TR(0x5eb1b0);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5eb1b4:{NFSU2_TR(0x5eb1b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eb1d3;}}
}
B5eb1b6:L5eb1b6:{c.instructions+=7;NFSU2_TR(0x5eb1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb1b9:{NFSU2_TR(0x5eb1b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb1ba:{NFSU2_TR(0x5eb1ba);
u8 U[4];
w4(U+0,u32(0xe000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb1bf:{NFSU2_TR(0x5eb1bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5eb1c2:{NFSU2_TR(0x5eb1c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb1c3:{NFSU2_TR(0x5eb1c3);
w4(R+4,u32(0x88f298ull));
}
B5eb1c8:{NFSU2_TR(0x5eb1c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb1cdull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B5eb1cd:L5eb1cd:{c.instructions+=3;NFSU2_TR(0x5eb1cd);
__builtin_memmove((R+24),(R+0),4);
}
B5eb1cf:{NFSU2_TR(0x5eb1cf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eb1d1:{NFSU2_TR(0x5eb1d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eb1a0u);}goto L5eb1a0;}}
}
B5eb1d3:L5eb1d3:{c.instructions+=3;NFSU2_TR(0x5eb1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb1d9:{NFSU2_TR(0x5eb1d9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eb1db:{NFSU2_TR(0x5eb1db);
if(r1(R+518)){{goto L5eb1f7;}}
}
B5eb1dd:L5eb1dd:{c.instructions+=3;NFSU2_TR(0x5eb1dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb1de:{NFSU2_TR(0x5eb1de);
__builtin_memmove((R+4),(R+28),4);
}
B5eb1e0:{NFSU2_TR(0x5eb1e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb1e5ull));
TAIL_STATIC(0x5eaf30u,5ea);
}
B5eb1e5:L5eb1e5:{c.instructions+=4;NFSU2_TR(0x5eb1e5);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb1e9:{NFSU2_TR(0x5eb1e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb1ea:{NFSU2_TR(0x5eb1ea);
__builtin_memmove((R+4),(R+28),4);
}
B5eb1ec:{NFSU2_TR(0x5eb1ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb1f1ull));
TAIL_STATIC(0x5eafb0u,5ea);
}
B5eb1f1:L5eb1f1:{c.instructions+=1;NFSU2_TR(0x5eb1f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9acull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb1f7:L5eb1f7:{c.instructions+=1;NFSU2_TR(0x5eb1f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb1f8:L5eb1f8:{c.instructions+=4;NFSU2_TR(0x5eb1f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eb1f9:{NFSU2_TR(0x5eb1f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eb1fa:{NFSU2_TR(0x5eb1fa);
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
B5eb1fd:{NFSU2_TR(0x5eb1fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb200:L5eb200:{c.instructions+=3;NFSU2_TR(0x5eb200);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb206:{NFSU2_TR(0x5eb206);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb209:{NFSU2_TR(0x5eb209);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb210:L5eb210:{c.instructions+=9;NFSU2_TR(0x5eb210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb211:{NFSU2_TR(0x5eb211);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb212:{NFSU2_TR(0x5eb212);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5eb216:{NFSU2_TR(0x5eb216);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb217:{NFSU2_TR(0x5eb217);
u8 U[4];
w4(U+0,u32(0x7a5be0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb21c:{NFSU2_TR(0x5eb21c);
__builtin_memmove((R+28),(R+4),4);
}
B5eb21e:{NFSU2_TR(0x5eb21e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb220:{NFSU2_TR(0x5eb220);
__builtin_memmove((R+4),(R+24),4);
}
B5eb222:{NFSU2_TR(0x5eb222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb227ull));
TAIL_STATIC(0x578ce0u,578);
}
B5eb227:L5eb227:{c.instructions+=6;NFSU2_TR(0x5eb227);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb229:{NFSU2_TR(0x5eb229);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb22b:{NFSU2_TR(0x5eb22b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb22d:{NFSU2_TR(0x5eb22d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb22e:{NFSU2_TR(0x5eb22e);
__builtin_memmove((R+4),(R+24),4);
}
B5eb230:{NFSU2_TR(0x5eb230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb235ull));
TAIL_STATIC(0x571640u,571);
}
B5eb235:L5eb235:{c.instructions+=7;NFSU2_TR(0x5eb235);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb237:{NFSU2_TR(0x5eb237);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb239:{NFSU2_TR(0x5eb239);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb23b:{NFSU2_TR(0x5eb23b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5eb23e:{NFSU2_TR(0x5eb23e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb23f:{NFSU2_TR(0x5eb23f);
__builtin_memmove((R+4),(R+24),4);
}
B5eb241:{NFSU2_TR(0x5eb241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb246ull));
TAIL_STATIC(0x571640u,571);
}
B5eb246:L5eb246:{c.instructions+=3;NFSU2_TR(0x5eb246);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5eb249:{NFSU2_TR(0x5eb249);
w4(R+12,u32(0x4ull));
}
B5eb24e:{NFSU2_TR(0x5eb24e);
__builtin_memmove((R+28),(R+28),4);
}
B5eb250:L5eb250:{c.instructions+=6;NFSU2_TR(0x5eb250);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb252:{NFSU2_TR(0x5eb252);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb254:{NFSU2_TR(0x5eb254);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb256:{NFSU2_TR(0x5eb256);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb257:{NFSU2_TR(0x5eb257);
__builtin_memmove((R+4),(R+24),4);
}
B5eb259:{NFSU2_TR(0x5eb259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb25eull));
TAIL_STATIC(0x571640u,571);
}
B5eb25e:L5eb25e:{c.instructions+=3;NFSU2_TR(0x5eb25e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5eb261:{NFSU2_TR(0x5eb261);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5eb262:{NFSU2_TR(0x5eb262);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eb250u);}goto L5eb250;}}
}
B5eb264:L5eb264:{c.instructions+=2;NFSU2_TR(0x5eb264);
__builtin_memmove((R+4),(R+24),4);
}
B5eb266:{NFSU2_TR(0x5eb266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb26bull));
TAIL_STATIC(0x578d90u,578);
}
B5eb26b:L5eb26b:{c.instructions+=4;NFSU2_TR(0x5eb26b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eb26c:{NFSU2_TR(0x5eb26c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb26d:{NFSU2_TR(0x5eb26d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eb26e:{NFSU2_TR(0x5eb26e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb280:L5eb280:{c.instructions+=6;NFSU2_TR(0x5eb280);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eb286:{NFSU2_TR(0x5eb286);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb287:{NFSU2_TR(0x5eb287);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb288:{NFSU2_TR(0x5eb288);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5eb28b:{NFSU2_TR(0x5eb28b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb28d:{NFSU2_TR(0x5eb28d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eb2d0;}}
}
B5eb28f:L5eb28f:{c.instructions+=4;NFSU2_TR(0x5eb28f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5eb291:{NFSU2_TR(0x5eb291);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5eb292:{NFSU2_TR(0x5eb292);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5eb297:{NFSU2_TR(0x5eb297);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5eb29e;}}
}
B5eb299:L5eb299:{c.instructions+=3;NFSU2_TR(0x5eb299);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5eb29a:{NFSU2_TR(0x5eb29a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffcull))));
}
B5eb29d:{NFSU2_TR(0x5eb29d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5eb29e:L5eb29e:{c.instructions+=19;NFSU2_TR(0x5eb29e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5eb2a2:{NFSU2_TR(0x5eb2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb2a5:{NFSU2_TR(0x5eb2a5);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb2a8:{NFSU2_TR(0x5eb2a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5eb2ab:{NFSU2_TR(0x5eb2ab);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eb2ad:{NFSU2_TR(0x5eb2ad);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb2b0:{NFSU2_TR(0x5eb2b0);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eb2b3:{NFSU2_TR(0x5eb2b3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5eb2b5:{NFSU2_TR(0x5eb2b5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5eb2b7:{NFSU2_TR(0x5eb2b7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5eb2b9:{NFSU2_TR(0x5eb2b9);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5eb2bb:{NFSU2_TR(0x5eb2bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5eb2bd:{NFSU2_TR(0x5eb2bd);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5eb2bf:{NFSU2_TR(0x5eb2bf);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5eb2c1:{NFSU2_TR(0x5eb2c1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eb2c3:{NFSU2_TR(0x5eb2c3);
{u32 ea_=u32(u32(8017284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eb2c9:{NFSU2_TR(0x5eb2c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eb2cb:{NFSU2_TR(0x5eb2cb);
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
B5eb2ce:{NFSU2_TR(0x5eb2ce);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5eb30b;}}
}
B5eb2d0:L5eb2d0:{c.instructions+=7;NFSU2_TR(0x5eb2d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5eb2d2:{NFSU2_TR(0x5eb2d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5eb2d3:{NFSU2_TR(0x5eb2d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5eb2d5:{NFSU2_TR(0x5eb2d5);
__builtin_memmove((R+24),(R+0),4);
}
B5eb2d7:{NFSU2_TR(0x5eb2d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5eb2da:{NFSU2_TR(0x5eb2da);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eb2dd:{NFSU2_TR(0x5eb2dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5eb2e4;}}
}
B5eb2df:L5eb2df:{c.instructions+=1;NFSU2_TR(0x5eb2df);
w4(R+0,u32(0x4ull));
}
B5eb2e4:L5eb2e4:{c.instructions+=4;NFSU2_TR(0x5eb2e4);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5eb2e5:{NFSU2_TR(0x5eb2e5);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B5eb2eb:{NFSU2_TR(0x5eb2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb2ee:{NFSU2_TR(0x5eb2ee);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5eb2f5;}}
}
B5eb2f0:L5eb2f0:{c.instructions+=3;NFSU2_TR(0x5eb2f0);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5eb2f1:{NFSU2_TR(0x5eb2f1);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B5eb2f4:{NFSU2_TR(0x5eb2f4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5eb2f5:L5eb2f5:{c.instructions+=7;NFSU2_TR(0x5eb2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb2f8:{NFSU2_TR(0x5eb2f8);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb2fb:{NFSU2_TR(0x5eb2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb2fe:{NFSU2_TR(0x5eb2fe);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eb301:{NFSU2_TR(0x5eb301);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eb305:{NFSU2_TR(0x5eb305);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5eb309:{NFSU2_TR(0x5eb309);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5eb30b:L5eb30b:{c.instructions+=3;NFSU2_TR(0x5eb30b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eb30c:{NFSU2_TR(0x5eb30c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb30d:{NFSU2_TR(0x5eb30d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb310:L5eb310:{c.instructions+=5;NFSU2_TR(0x5eb310);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb316:{NFSU2_TR(0x5eb316);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb31c:{NFSU2_TR(0x5eb31c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5eb31f:{NFSU2_TR(0x5eb31f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb321:{NFSU2_TR(0x5eb321);
if(r1(R+518)){{goto L5eb37d;}}
}
B5eb323:L5eb323:{c.instructions+=2;NFSU2_TR(0x5eb323);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5eb327:{NFSU2_TR(0x5eb327);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eb37d;}}
}
B5eb329:L5eb329:{c.instructions+=6;NFSU2_TR(0x5eb329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5eb32b:{NFSU2_TR(0x5eb32b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eb32d:{NFSU2_TR(0x5eb32d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5eb32e:{NFSU2_TR(0x5eb32e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B5eb334:{NFSU2_TR(0x5eb334);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb335:{NFSU2_TR(0x5eb335);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5eb33c;}}
}
B5eb337:L5eb337:{c.instructions+=3;NFSU2_TR(0x5eb337);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5eb338:{NFSU2_TR(0x5eb338);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffffcull))));
}
B5eb33b:{NFSU2_TR(0x5eb33b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5eb33c:L5eb33c:{c.instructions+=5;NFSU2_TR(0x5eb33c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5eb33e:{NFSU2_TR(0x5eb33e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B5eb341:{NFSU2_TR(0x5eb341);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B5eb347:{NFSU2_TR(0x5eb347);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5eb34b:{NFSU2_TR(0x5eb34b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5eb352;}}
}
B5eb34d:L5eb34d:{c.instructions+=3;NFSU2_TR(0x5eb34d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5eb34e:{NFSU2_TR(0x5eb34e);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffcull))));
}
B5eb351:{NFSU2_TR(0x5eb351);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5eb352:L5eb352:{c.instructions+=5;NFSU2_TR(0x5eb352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5eb354:{NFSU2_TR(0x5eb354);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x3ull))));
}
B5eb357:{NFSU2_TR(0x5eb357);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B5eb35d:{NFSU2_TR(0x5eb35d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5eb361:{NFSU2_TR(0x5eb361);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5eb368;}}
}
B5eb363:L5eb363:{c.instructions+=3;NFSU2_TR(0x5eb363);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B5eb364:{NFSU2_TR(0x5eb364);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B5eb367:{NFSU2_TR(0x5eb367);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5eb368:L5eb368:{c.instructions+=7;NFSU2_TR(0x5eb368);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5eb36c:{NFSU2_TR(0x5eb36c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb370:{NFSU2_TR(0x5eb370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb371:{NFSU2_TR(0x5eb371);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb372:{NFSU2_TR(0x5eb372);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb373:{NFSU2_TR(0x5eb373);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb374:{NFSU2_TR(0x5eb374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb379ull));
TAIL_STATIC(0x5d4770u,5d4);
}
B5eb379:L5eb379:{c.instructions+=2;NFSU2_TR(0x5eb379);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5eb37c:{NFSU2_TR(0x5eb37c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb37d:L5eb37d:{c.instructions+=2;NFSU2_TR(0x5eb37d);
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
B5eb380:{NFSU2_TR(0x5eb380);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb390:L5eb390:{c.instructions+=5;NFSU2_TR(0x5eb390);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B5eb395:{NFSU2_TR(0x5eb395);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb396:{NFSU2_TR(0x5eb396);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5eb398:{NFSU2_TR(0x5eb398);
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
B5eb39a:{NFSU2_TR(0x5eb39a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eb3b6;}}
}
B5eb39c:L5eb39c:{c.instructions+=1;NFSU2_TR(0x5eb39c);
__builtin_memmove((R+16),(R+16),4);
}
B5eb3a0:L5eb3a0:{c.instructions+=2;NFSU2_TR(0x5eb3a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5eb3a7:{NFSU2_TR(0x5eb3a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb3acull));
TAIL_STATIC(0x5ea650u,5ea);
}
B5eb3ac:L5eb3ac:{c.instructions+=4;NFSU2_TR(0x5eb3ac);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B5eb3b1:{NFSU2_TR(0x5eb3b1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5eb3b2:{NFSU2_TR(0x5eb3b2);
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
B5eb3b4:{NFSU2_TR(0x5eb3b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eb3a0u);}goto L5eb3a0;}}
}
B5eb3b6:L5eb3b6:{c.instructions+=2;NFSU2_TR(0x5eb3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb3b7:{NFSU2_TR(0x5eb3b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb3c0:L5eb3c0:{c.instructions+=5;NFSU2_TR(0x5eb3c0);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B5eb3c5:{NFSU2_TR(0x5eb3c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb3c6:{NFSU2_TR(0x5eb3c6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5eb3c8:{NFSU2_TR(0x5eb3c8);
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
B5eb3ca:{NFSU2_TR(0x5eb3ca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eb3f4;}}
}
B5eb3cc:L5eb3cc:{c.instructions+=2;NFSU2_TR(0x5eb3cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb3cd:{NFSU2_TR(0x5eb3cd);
__builtin_memmove((R+4),(R+4),4);
}
B5eb3d0:L5eb3d0:{c.instructions+=4;NFSU2_TR(0x5eb3d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5eb3d7:{NFSU2_TR(0x5eb3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb3da:{NFSU2_TR(0x5eb3da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb3db:{NFSU2_TR(0x5eb3db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb3e0ull));
TAIL_STATIC(0x571ac0u,571);
}
B5eb3e0:L5eb3e0:{c.instructions+=7;NFSU2_TR(0x5eb3e0);
w4(R+4,u32(r1(R+0)));
}
B5eb3e3:{NFSU2_TR(0x5eb3e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5eb3e6:{NFSU2_TR(0x5eb3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb3e9:{NFSU2_TR(0x5eb3e9);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B5eb3ee:{NFSU2_TR(0x5eb3ee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5eb3ef:{NFSU2_TR(0x5eb3ef);
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
B5eb3f1:{NFSU2_TR(0x5eb3f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eb3d0u);}goto L5eb3d0;}}
}
B5eb3f3:L5eb3f3:{c.instructions+=1;NFSU2_TR(0x5eb3f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eb3f4:L5eb3f4:{c.instructions+=2;NFSU2_TR(0x5eb3f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb3f5:{NFSU2_TR(0x5eb3f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb400:L5eb400:{c.instructions+=5;NFSU2_TR(0x5eb400);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb403:{NFSU2_TR(0x5eb403);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5eb406:{NFSU2_TR(0x5eb406);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5eb40d:{NFSU2_TR(0x5eb40d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb40e:{NFSU2_TR(0x5eb40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb413ull));
TAIL_STATIC(0x502500u,502);
}
B5eb413:L5eb413:{c.instructions+=2;NFSU2_TR(0x5eb413);
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
B5eb416:{NFSU2_TR(0x5eb416);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb420:L5eb420:{c.instructions+=4;NFSU2_TR(0x5eb420);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb423:{NFSU2_TR(0x5eb423);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5eb426:{NFSU2_TR(0x5eb426);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa68ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B5eb42e:{NFSU2_TR(0x5eb42e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb430:L5eb430:{c.instructions+=4;NFSU2_TR(0x5eb430);
__builtin_memmove((R+8),gp(0x89e7d8),1);
}
B5eb436:{NFSU2_TR(0x5eb436);
w4(R+0,u32(0x1ull));
}
B5eb43b:{NFSU2_TR(0x5eb43b);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+3)));
w1(U+4,u8(u32(r1(R+8))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eb43d:{NFSU2_TR(0x5eb43d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eb449;}}
}
B5eb43f:L5eb43f:{c.instructions+=3;NFSU2_TR(0x5eb43f);
__builtin_memmove((R+8),gp(0x864fac),4);
}
B5eb445:{NFSU2_TR(0x5eb445);
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
B5eb447:{NFSU2_TR(0x5eb447);
if(r1(R+518)){{goto L5eb44d;}}
}
B5eb449:L5eb449:{c.instructions+=1;NFSU2_TR(0x5eb449);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5eb44d:L5eb44d:{c.instructions+=1;NFSU2_TR(0x5eb44d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb450:L5eb450:{c.instructions+=6;NFSU2_TR(0x5eb450);
__builtin_memmove((R+0),gp(0x8900cc),1);
}
B5eb455:{NFSU2_TR(0x5eb455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x150ull))));
}
B5eb45b:{NFSU2_TR(0x5eb45b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eb45d:{NFSU2_TR(0x5eb45d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb45e:{NFSU2_TR(0x5eb45e);
__builtin_memmove((R+24),(R+4),4);
}
B5eb460:{NFSU2_TR(0x5eb460);
if(r1(R+518)){{goto L5eb513;}}
}
B5eb466:L5eb466:{c.instructions+=7;NFSU2_TR(0x5eb466);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B5eb46b:{NFSU2_TR(0x5eb46b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5eb46e:{NFSU2_TR(0x5eb46e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb46f:{NFSU2_TR(0x5eb46f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb473:{NFSU2_TR(0x5eb473);
u8 U[4];
w4(U+0,u32(0x7a5c40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb478:{NFSU2_TR(0x5eb478);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb479:{NFSU2_TR(0x5eb479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb47eull));
TAIL_STATIC(0x4400d0u,440);
}
B5eb47e:L5eb47e:{c.instructions+=17;NFSU2_TR(0x5eb47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb481:{NFSU2_TR(0x5eb481);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5eb488:{NFSU2_TR(0x5eb488);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb48b:{NFSU2_TR(0x5eb48b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5eb48e:{NFSU2_TR(0x5eb48e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb48f:{NFSU2_TR(0x5eb48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5eb492:{NFSU2_TR(0x5eb492);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb496:{NFSU2_TR(0x5eb496);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B5eb49a:{NFSU2_TR(0x5eb49a);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb49d:{NFSU2_TR(0x5eb49d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B5eb4a1:{NFSU2_TR(0x5eb4a1);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb4a4:{NFSU2_TR(0x5eb4a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5eb4a8:{NFSU2_TR(0x5eb4a8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B5eb4ab:{NFSU2_TR(0x5eb4ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb4ac:{NFSU2_TR(0x5eb4ac);
u8 U[4];
w4(U+0,u32(0x7a5bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb4b1:{NFSU2_TR(0x5eb4b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb4b2:{NFSU2_TR(0x5eb4b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb4b7ull));
TAIL_STATIC(0x4400d0u,440);
}
B5eb4b7:L5eb4b7:{c.instructions+=6;NFSU2_TR(0x5eb4b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb4b8:{NFSU2_TR(0x5eb4b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5eb4bf:{NFSU2_TR(0x5eb4bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb4c0:{NFSU2_TR(0x5eb4c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5eb4c4:{NFSU2_TR(0x5eb4c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb4c5:{NFSU2_TR(0x5eb4c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb4caull));
TAIL_STATIC(0x57cb00u,57c);
}
B5eb4ca:L5eb4ca:{c.instructions+=3;NFSU2_TR(0x5eb4ca);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eb4cd:{NFSU2_TR(0x5eb4cd);
s1(0x8900cc,u8(0x0ull));
}
B5eb4d4:{NFSU2_TR(0x5eb4d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb4d9ull));
TAIL_STATIC(0x4022c0u,402);
}
B5eb4d9:L5eb4d9:{c.instructions+=13;NFSU2_TR(0x5eb4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb4dc:{NFSU2_TR(0x5eb4dc);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb4df:{NFSU2_TR(0x5eb4df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb4e2:{NFSU2_TR(0x5eb4e2);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb4e5:{NFSU2_TR(0x5eb4e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5eb4e8:{NFSU2_TR(0x5eb4e8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5eb4ea:{NFSU2_TR(0x5eb4ea);
__builtin_memmove(gp(0x890140),(R+4),4);
}
B5eb4f0:{NFSU2_TR(0x5eb4f0);
{u32 ea_=u32(u32(8978756u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eb4f6:{NFSU2_TR(0x5eb4f6);
{u32 ea_=u32(u32(8978760u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eb4fc:{NFSU2_TR(0x5eb4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eb4ff:{NFSU2_TR(0x5eb4ff);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5eb506:{NFSU2_TR(0x5eb506);
__builtin_memmove(gp(0x8900d0),(R+0),2);
}
B5eb50c:{NFSU2_TR(0x5eb50c);
s1(0x8900ce,u8(0x1ull));
}
B5eb513:L5eb513:{c.instructions+=3;NFSU2_TR(0x5eb513);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb514:{NFSU2_TR(0x5eb514);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x150ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x150ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x150ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eb51a:{NFSU2_TR(0x5eb51a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb520:L5eb520:{c.instructions+=5;NFSU2_TR(0x5eb520);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5eb523:{NFSU2_TR(0x5eb523);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5eb525:{NFSU2_TR(0x5eb525);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eb527:{NFSU2_TR(0x5eb527);
__builtin_memmove((R+0),(R+518),1);
}
B5eb52a:{NFSU2_TR(0x5eb52a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb530:L5eb530:{c.instructions+=3;NFSU2_TR(0x5eb530);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb533:{NFSU2_TR(0x5eb533);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb535:{NFSU2_TR(0x5eb535);
if(r1(R+518)){{goto L5eb550;}}
}
B5eb537:L5eb537:{c.instructions+=3;NFSU2_TR(0x5eb537);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb53a:{NFSU2_TR(0x5eb53a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb53c:{NFSU2_TR(0x5eb53c);
if(r1(R+518)){{goto L5eb550;}}
}
B5eb53e:L5eb53e:{c.instructions+=2;NFSU2_TR(0x5eb53e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb541:{NFSU2_TR(0x5eb541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb546ull));
TAIL_STATIC(0x59fa30u,59f);
}
B5eb546:L5eb546:{c.instructions+=2;NFSU2_TR(0x5eb546);
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
B5eb548:{NFSU2_TR(0x5eb548);
if(r1(R+518)){{goto L5eb550;}}
}
B5eb54a:L5eb54a:{c.instructions+=2;NFSU2_TR(0x5eb54a);
w4(R+0,u32(0x1ull));
}
B5eb54f:{NFSU2_TR(0x5eb54f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb550:L5eb550:{c.instructions+=2;NFSU2_TR(0x5eb550);
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
B5eb552:{NFSU2_TR(0x5eb552);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb560:L5eb560:{c.instructions+=3;NFSU2_TR(0x5eb560);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb563:{NFSU2_TR(0x5eb563);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb565:{NFSU2_TR(0x5eb565);
if(r1(R+518)){{goto L5eb580;}}
}
B5eb567:L5eb567:{c.instructions+=3;NFSU2_TR(0x5eb567);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb56a:{NFSU2_TR(0x5eb56a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb56c:{NFSU2_TR(0x5eb56c);
if(r1(R+518)){{goto L5eb580;}}
}
B5eb56e:L5eb56e:{c.instructions+=2;NFSU2_TR(0x5eb56e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb571:{NFSU2_TR(0x5eb571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb576ull));
TAIL_STATIC(0x59faa0u,59f);
}
B5eb576:L5eb576:{c.instructions+=2;NFSU2_TR(0x5eb576);
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
B5eb578:{NFSU2_TR(0x5eb578);
if(r1(R+518)){{goto L5eb580;}}
}
B5eb57a:L5eb57a:{c.instructions+=2;NFSU2_TR(0x5eb57a);
w4(R+0,u32(0x1ull));
}
B5eb57f:{NFSU2_TR(0x5eb57f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb580:L5eb580:{c.instructions+=2;NFSU2_TR(0x5eb580);
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
B5eb582:{NFSU2_TR(0x5eb582);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb590:L5eb590:{c.instructions+=4;NFSU2_TR(0x5eb590);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb593:{NFSU2_TR(0x5eb593);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb596:{NFSU2_TR(0x5eb596);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x844ull))));
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
B5eb59d:{NFSU2_TR(0x5eb59d);
if(r1(R+518)){{goto L5eb5ae;}}
}
B5eb59f:L5eb59f:{c.instructions+=3;NFSU2_TR(0x5eb59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb5a5:{NFSU2_TR(0x5eb5a5);
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
B5eb5a7:{NFSU2_TR(0x5eb5a7);
if(r1(R+518)){{goto L5eb5ae;}}
}
B5eb5a9:L5eb5a9:{c.instructions+=2;NFSU2_TR(0x5eb5a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5eb5ab:{NFSU2_TR(0x5eb5ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5eb5ae:L5eb5ae:{c.instructions+=1;NFSU2_TR(0x5eb5ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb5b0:L5eb5b0:{c.instructions+=4;NFSU2_TR(0x5eb5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb5b3:{NFSU2_TR(0x5eb5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb5b6:{NFSU2_TR(0x5eb5b6);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x844ull))));
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
B5eb5bd:{NFSU2_TR(0x5eb5bd);
if(r1(R+518)){{goto L5eb5ce;}}
}
B5eb5bf:L5eb5bf:{c.instructions+=3;NFSU2_TR(0x5eb5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb5c5:{NFSU2_TR(0x5eb5c5);
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
B5eb5c7:{NFSU2_TR(0x5eb5c7);
if(r1(R+518)){{goto L5eb5ce;}}
}
B5eb5c9:L5eb5c9:{c.instructions+=2;NFSU2_TR(0x5eb5c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5eb5cb:{NFSU2_TR(0x5eb5cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5eb5ce:L5eb5ce:{c.instructions+=1;NFSU2_TR(0x5eb5ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb5d0:L5eb5d0:{c.instructions+=9;NFSU2_TR(0x5eb5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb5d6:{NFSU2_TR(0x5eb5d6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb5d8:{NFSU2_TR(0x5eb5d8);
u8 U[4];
w4(U+0,u32(0x7796a6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb5dd:{NFSU2_TR(0x5eb5dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb5de:{NFSU2_TR(0x5eb5de);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B5eb5e3:{NFSU2_TR(0x5eb5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb5ea:{NFSU2_TR(0x5eb5ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x358ull))));
}
B5eb5f0:{NFSU2_TR(0x5eb5f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb5f2:{NFSU2_TR(0x5eb5f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eb5fb;}}
}
B5eb5f4:L5eb5f4:{c.instructions+=2;NFSU2_TR(0x5eb5f4);
u8 U[4];
w4(U+0,u32(0x7a5c78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb5f9:{NFSU2_TR(0x5eb5f9);
{goto L5eb600;}
}
B5eb5fb:L5eb5fb:{c.instructions+=1;NFSU2_TR(0x5eb5fb);
u8 U[4];
w4(U+0,u32(0x7a5c5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb600:L5eb600:{c.instructions+=1;NFSU2_TR(0x5eb600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb605ull));
TAIL_STATIC(0x43db50u,43d);
}
B5eb605:L5eb605:{c.instructions+=8;NFSU2_TR(0x5eb605);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5eb608:{NFSU2_TR(0x5eb608);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb609:{NFSU2_TR(0x5eb609);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb60a:{NFSU2_TR(0x5eb60a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb60b:{NFSU2_TR(0x5eb60b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb60c:{NFSU2_TR(0x5eb60c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb60d:{NFSU2_TR(0x5eb60d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb611:{NFSU2_TR(0x5eb611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb616ull));
TAIL_STATIC(0x5d8560u,5d8);
}
B5eb616:L5eb616:{c.instructions+=5;NFSU2_TR(0x5eb616);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5eb61d:{NFSU2_TR(0x5eb61d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5eb620:{NFSU2_TR(0x5eb620);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eb622:{NFSU2_TR(0x5eb622);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb626:{NFSU2_TR(0x5eb626);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5eb668;}}
}
B5eb628:L5eb628:{c.instructions+=3;NFSU2_TR(0x5eb628);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5eb62a:{NFSU2_TR(0x5eb62a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb62c:{NFSU2_TR(0x5eb62c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eb7ab;}}
}
B5eb632:L5eb632:{c.instructions+=3;NFSU2_TR(0x5eb632);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5eb639:{NFSU2_TR(0x5eb639);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5eb63c:{NFSU2_TR(0x5eb63c);
__builtin_memmove((R+16),(R+16),4);
}
B5eb640:L5eb640:{c.instructions+=3;NFSU2_TR(0x5eb640);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5eb642:{NFSU2_TR(0x5eb642);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb644:{NFSU2_TR(0x5eb644);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eb668;}}
}
B5eb646:L5eb646:{c.instructions+=4;NFSU2_TR(0x5eb646);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb64a:{NFSU2_TR(0x5eb64a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb64b:{NFSU2_TR(0x5eb64b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb64c:{NFSU2_TR(0x5eb64c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb651ull));
TAIL_STATIC(0x5d8620u,5d8);
}
B5eb651:L5eb651:{c.instructions+=4;NFSU2_TR(0x5eb651);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb654:{NFSU2_TR(0x5eb654);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5eb657:{NFSU2_TR(0x5eb657);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5eb659:{NFSU2_TR(0x5eb659);
if(r1(R+518)){{goto L5eb6fd;}}
}
B5eb65f:L5eb65f:{c.instructions+=4;NFSU2_TR(0x5eb65f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb663:{NFSU2_TR(0x5eb663);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5eb664:{NFSU2_TR(0x5eb664);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eb666:{NFSU2_TR(0x5eb666);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eb646u);}goto L5eb646;}}
}
B5eb668:L5eb668:{c.instructions+=2;NFSU2_TR(0x5eb668);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb66c:{NFSU2_TR(0x5eb66c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb671ull));
TAIL_STATIC(0x5da2f0u,5da);
}
B5eb671:L5eb671:{c.instructions+=8;NFSU2_TR(0x5eb671);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb677:{NFSU2_TR(0x5eb677);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb67d:{NFSU2_TR(0x5eb67d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5eb67f:{NFSU2_TR(0x5eb67f);
{u32 ea_=u32(u32(8017324u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eb685:{NFSU2_TR(0x5eb685);
u8 U[8];
w4(U+0,u32(u32(u32(0x370ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb68c:{NFSU2_TR(0x5eb68c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eb68e:{NFSU2_TR(0x5eb68e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eb691:{NFSU2_TR(0x5eb691);
if(r1(R+514)){{goto L5eb6be;}}
}
B5eb693:L5eb693:{c.instructions+=8;NFSU2_TR(0x5eb693);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5eb699:{NFSU2_TR(0x5eb699);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb69a:{NFSU2_TR(0x5eb69a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb69b:{NFSU2_TR(0x5eb69b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eb69f:{NFSU2_TR(0x5eb69f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb6a3:{NFSU2_TR(0x5eb6a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb6a4:{NFSU2_TR(0x5eb6a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb6a8:{NFSU2_TR(0x5eb6a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb6adull));
TAIL_STATIC(0x5da370u,5da);
}
B5eb6ad:L5eb6ad:{c.instructions+=5;NFSU2_TR(0x5eb6ad);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb6b1:{NFSU2_TR(0x5eb6b1);
{u32 ea_=u32(u32(8017324u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5eb6b7:{NFSU2_TR(0x5eb6b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eb6b9:{NFSU2_TR(0x5eb6b9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eb6bc:{NFSU2_TR(0x5eb6bc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eb693u);}goto L5eb693;}}
}
B5eb6be:L5eb6be:{c.instructions+=3;NFSU2_TR(0x5eb6be);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eb6c0:{NFSU2_TR(0x5eb6c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eb6c2:{NFSU2_TR(0x5eb6c2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eb797;}}
}
B5eb6c8:L5eb6c8:{c.instructions+=2;NFSU2_TR(0x5eb6c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5eb6cf:{NFSU2_TR(0x5eb6cf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B5eb6d2:L5eb6d2:{c.instructions+=3;NFSU2_TR(0x5eb6d2);
__builtin_memmove((R+8),(R+28),4);
}
B5eb6d4:{NFSU2_TR(0x5eb6d4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5eb6da:{NFSU2_TR(0x5eb6da);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5eb6e1;}}
}
B5eb6dc:L5eb6dc:{c.instructions+=3;NFSU2_TR(0x5eb6dc);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5eb6dd:{NFSU2_TR(0x5eb6dd);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B5eb6e0:{NFSU2_TR(0x5eb6e0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5eb6e1:L5eb6e1:{c.instructions+=2;NFSU2_TR(0x5eb6e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb6e3:{NFSU2_TR(0x5eb6e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eb72b;}}
}
B5eb6e5:L5eb6e5:{c.instructions+=10;NFSU2_TR(0x5eb6e5);
__builtin_memmove((R+0),gp(0x7a55a8),4);
}
B5eb6ea:{NFSU2_TR(0x5eb6ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb6eb:{NFSU2_TR(0x5eb6eb);
__builtin_memmove((R+0),(R+28),4);
}
B5eb6ed:{NFSU2_TR(0x5eb6ed);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5eb6ee:{NFSU2_TR(0x5eb6ee);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5eb6f0:{NFSU2_TR(0x5eb6f0);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5eb6f2:{NFSU2_TR(0x5eb6f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb6f6:{NFSU2_TR(0x5eb6f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb6f7:{NFSU2_TR(0x5eb6f7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eb6fb:{NFSU2_TR(0x5eb6fb);
{goto L5eb749;}
}
B5eb6fd:L5eb6fd:{c.instructions+=12;NFSU2_TR(0x5eb6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eb700:{NFSU2_TR(0x5eb700);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb703:{NFSU2_TR(0x5eb703);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb706:{NFSU2_TR(0x5eb706);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb709:{NFSU2_TR(0x5eb709);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eb70c:{NFSU2_TR(0x5eb70c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5eb70e:{NFSU2_TR(0x5eb70e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5eb712:{NFSU2_TR(0x5eb712);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5eb716:{NFSU2_TR(0x5eb716);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5eb717:{NFSU2_TR(0x5eb717);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B5eb71a:{NFSU2_TR(0x5eb71a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eb71c:{NFSU2_TR(0x5eb71c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5eb7ab;}}
}
B5eb722:L5eb722:{c.instructions+=2;NFSU2_TR(0x5eb722);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb726:{NFSU2_TR(0x5eb726);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eb640u);}goto L5eb640;}
}
B5eb72b:L5eb72b:{c.instructions+=10;NFSU2_TR(0x5eb72b);
{u32 ea_=u32(u32(8017320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb731:{NFSU2_TR(0x5eb731);
__builtin_memmove((R+0),(R+28),4);
}
B5eb733:{NFSU2_TR(0x5eb733);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5eb734:{NFSU2_TR(0x5eb734);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5eb736:{NFSU2_TR(0x5eb736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5eb739:{NFSU2_TR(0x5eb739);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5eb73b:{NFSU2_TR(0x5eb73b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5eb73d:{NFSU2_TR(0x5eb73d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eb741:{NFSU2_TR(0x5eb741);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb745:{NFSU2_TR(0x5eb745);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eb749:L5eb749:{c.instructions+=5;NFSU2_TR(0x5eb749);
{u32 ea_=u32(u32(8017316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eb74f:{NFSU2_TR(0x5eb74f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb753:{NFSU2_TR(0x5eb753);
{u32 ea_=u32(u32(8017324u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5eb759:{NFSU2_TR(0x5eb759);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eb75c:{NFSU2_TR(0x5eb75c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb761ull));
TAIL_STATIC(0x5da370u,5da);
}
B5eb761:L5eb761:{c.instructions+=10;NFSU2_TR(0x5eb761);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb765:{NFSU2_TR(0x5eb765);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb769:{NFSU2_TR(0x5eb769);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eb76d:{NFSU2_TR(0x5eb76d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb770:{NFSU2_TR(0x5eb770);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb774:{NFSU2_TR(0x5eb774);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb775:{NFSU2_TR(0x5eb775);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb776:{NFSU2_TR(0x5eb776);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb779:{NFSU2_TR(0x5eb779);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5eb77f:{NFSU2_TR(0x5eb77f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb784ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B5eb784:L5eb784:{c.instructions+=6;NFSU2_TR(0x5eb784);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5eb787:{NFSU2_TR(0x5eb787);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5eb78b:{NFSU2_TR(0x5eb78b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5eb78c:{NFSU2_TR(0x5eb78c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B5eb78f:{NFSU2_TR(0x5eb78f);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eb791:{NFSU2_TR(0x5eb791);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eb6d2u);}goto L5eb6d2;}}
}
B5eb797:L5eb797:{c.instructions+=3;NFSU2_TR(0x5eb797);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb79b:{NFSU2_TR(0x5eb79b);
u8 U[8];
w4(U+0,u32(u32(u32(0x370ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eb7a6:{NFSU2_TR(0x5eb7a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb7abull));
TAIL_STATIC(0x4022c0u,402);
}
B5eb7ab:L5eb7ab:{c.instructions+=2;NFSU2_TR(0x5eb7ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb7af:{NFSU2_TR(0x5eb7af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb7b4ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B5eb7b4:L5eb7b4:{c.instructions+=3;NFSU2_TR(0x5eb7b4);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eb7b6:{NFSU2_TR(0x5eb7b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x370ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eb7c1:{NFSU2_TR(0x5eb7c1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eb7fd;}}
}
B5eb7c3:L5eb7c3:{c.instructions+=2;NFSU2_TR(0x5eb7c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5eb7ca:{NFSU2_TR(0x5eb7ca);
__builtin_memmove((R+12),(R+12),4);
}
B5eb7d0:L5eb7d0:{c.instructions+=4;NFSU2_TR(0x5eb7d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb7d2:{NFSU2_TR(0x5eb7d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb7d3:{NFSU2_TR(0x5eb7d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb7d7:{NFSU2_TR(0x5eb7d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb7dcull));
TAIL_STATIC(0x5e68d0u,5e6);
}
B5eb7dc:L5eb7dc:{c.instructions+=3;NFSU2_TR(0x5eb7dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb7e0:{NFSU2_TR(0x5eb7e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb7e2:{NFSU2_TR(0x5eb7e2);
if(r1(R+518)){{goto L5eb7f7;}}
}
B5eb7e4:L5eb7e4:{c.instructions+=6;NFSU2_TR(0x5eb7e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb7e6:{NFSU2_TR(0x5eb7e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb7e8:{NFSU2_TR(0x5eb7e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb7ea:{NFSU2_TR(0x5eb7ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb7eb:{NFSU2_TR(0x5eb7eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb7ef:{NFSU2_TR(0x5eb7ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb7f4ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B5eb7f4:L5eb7f4:{c.instructions+=1;NFSU2_TR(0x5eb7f4);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eb7f7:L5eb7f7:{c.instructions+=3;NFSU2_TR(0x5eb7f7);
w1(R+512,carry<u32>(r4(R+24),u32(0x20ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B5eb7fa:{NFSU2_TR(0x5eb7fa);
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
B5eb7fb:{NFSU2_TR(0x5eb7fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eb7d0u);}goto L5eb7d0;}}
}
B5eb7fd:L5eb7fd:{c.instructions+=3;NFSU2_TR(0x5eb7fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb801:{NFSU2_TR(0x5eb801);
u8 U[8];
w4(U+0,u32(u32(u32(0x370ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eb80c:{NFSU2_TR(0x5eb80c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb811ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B5eb811:L5eb811:{c.instructions+=8;NFSU2_TR(0x5eb811);
u8 U[8];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb818:{NFSU2_TR(0x5eb818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eb819:{NFSU2_TR(0x5eb819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb81a:{NFSU2_TR(0x5eb81a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5eb81b:{NFSU2_TR(0x5eb81b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eb81c:{NFSU2_TR(0x5eb81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb823:{NFSU2_TR(0x5eb823);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x364ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x364ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x364ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eb829:{NFSU2_TR(0x5eb829);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb830:L5eb830:{c.instructions+=2;NFSU2_TR(0x5eb830);
u8 U[4];
w4(U+0,u32(0x790734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb835:{NFSU2_TR(0x5eb835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb83aull));
TAIL_STATIC(0x5379a0u,537);
}
B5eb83a:L5eb83a:{c.instructions+=2;NFSU2_TR(0x5eb83a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb83b:{NFSU2_TR(0x5eb83b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb840:L5eb840:{c.instructions+=5;NFSU2_TR(0x5eb840);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb844:{NFSU2_TR(0x5eb844);
__builtin_memmove((R+4),gp(0x86b300),4);
}
B5eb84a:{NFSU2_TR(0x5eb84a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb84b:{NFSU2_TR(0x5eb84b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb84c:{NFSU2_TR(0x5eb84c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb851ull));
TAIL_STATIC(0x43f920u,43f);
}
B5eb851:L5eb851:{c.instructions+=2;NFSU2_TR(0x5eb851);
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
B5eb854:{NFSU2_TR(0x5eb854);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb860:L5eb860:{c.instructions+=8;NFSU2_TR(0x5eb860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb861:{NFSU2_TR(0x5eb861);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5eb865:{NFSU2_TR(0x5eb865);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb866:{NFSU2_TR(0x5eb866);
u8 U[4];
w4(U+0,u32(0x7a5c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb86b:{NFSU2_TR(0x5eb86b);
__builtin_memmove((R+28),(R+4),4);
}
B5eb86d:{NFSU2_TR(0x5eb86d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb86f:{NFSU2_TR(0x5eb86f);
__builtin_memmove((R+4),(R+24),4);
}
B5eb871:{NFSU2_TR(0x5eb871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb876ull));
TAIL_STATIC(0x578ce0u,578);
}
B5eb876:L5eb876:{c.instructions+=4;NFSU2_TR(0x5eb876);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5eb87c:{NFSU2_TR(0x5eb87c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb87d:{NFSU2_TR(0x5eb87d);
__builtin_memmove((R+4),(R+24),4);
}
B5eb87f:{NFSU2_TR(0x5eb87f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb884ull));
TAIL_STATIC(0x571710u,571);
}
B5eb884:L5eb884:{c.instructions+=4;NFSU2_TR(0x5eb884);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb88a:{NFSU2_TR(0x5eb88a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb88b:{NFSU2_TR(0x5eb88b);
__builtin_memmove((R+4),(R+24),4);
}
B5eb88d:{NFSU2_TR(0x5eb88d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb892ull));
TAIL_STATIC(0x571770u,571);
}
B5eb892:L5eb892:{c.instructions+=4;NFSU2_TR(0x5eb892);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5eb898:{NFSU2_TR(0x5eb898);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb899:{NFSU2_TR(0x5eb899);
__builtin_memmove((R+4),(R+24),4);
}
B5eb89b:{NFSU2_TR(0x5eb89b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb8a0ull));
TAIL_STATIC(0x571770u,571);
}
B5eb8a0:L5eb8a0:{c.instructions+=4;NFSU2_TR(0x5eb8a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5eb8a6:{NFSU2_TR(0x5eb8a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb8a7:{NFSU2_TR(0x5eb8a7);
__builtin_memmove((R+4),(R+24),4);
}
B5eb8a9:{NFSU2_TR(0x5eb8a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb8aeull));
TAIL_STATIC(0x571770u,571);
}
B5eb8ae:L5eb8ae:{c.instructions+=7;NFSU2_TR(0x5eb8ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb8b0:{NFSU2_TR(0x5eb8b0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb8b2:{NFSU2_TR(0x5eb8b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb8b4:{NFSU2_TR(0x5eb8b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb8ba:{NFSU2_TR(0x5eb8ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb8bb:{NFSU2_TR(0x5eb8bb);
__builtin_memmove((R+4),(R+24),4);
}
B5eb8bd:{NFSU2_TR(0x5eb8bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb8c2ull));
TAIL_STATIC(0x571640u,571);
}
B5eb8c2:L5eb8c2:{c.instructions+=7;NFSU2_TR(0x5eb8c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb8c4:{NFSU2_TR(0x5eb8c4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb8c6:{NFSU2_TR(0x5eb8c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb8c8:{NFSU2_TR(0x5eb8c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5eb8ce:{NFSU2_TR(0x5eb8ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb8cf:{NFSU2_TR(0x5eb8cf);
__builtin_memmove((R+4),(R+24),4);
}
B5eb8d1:{NFSU2_TR(0x5eb8d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb8d6ull));
TAIL_STATIC(0x571640u,571);
}
B5eb8d6:L5eb8d6:{c.instructions+=3;NFSU2_TR(0x5eb8d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb8d7:{NFSU2_TR(0x5eb8d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eb8da:{NFSU2_TR(0x5eb8da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb8dfull));
TAIL_STATIC(0x4049f0u,404);
}
B5eb8df:L5eb8df:{c.instructions+=2;NFSU2_TR(0x5eb8df);
__builtin_memmove((R+4),(R+24),4);
}
B5eb8e1:{NFSU2_TR(0x5eb8e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb8e6ull));
TAIL_STATIC(0x578d90u,578);
}
B5eb8e6:L5eb8e6:{c.instructions+=3;NFSU2_TR(0x5eb8e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eb8e7:{NFSU2_TR(0x5eb8e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb8e8:{NFSU2_TR(0x5eb8e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb8f0:L5eb8f0:{c.instructions+=3;NFSU2_TR(0x5eb8f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb8f4:{NFSU2_TR(0x5eb8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb8fa:{NFSU2_TR(0x5eb8fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb900:L5eb900:{c.instructions+=3;NFSU2_TR(0x5eb900);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb904:{NFSU2_TR(0x5eb904);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb90a:{NFSU2_TR(0x5eb90a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb910:L5eb910:{c.instructions+=3;NFSU2_TR(0x5eb910);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb914:{NFSU2_TR(0x5eb914);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb91a:{NFSU2_TR(0x5eb91a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb920:L5eb920:{c.instructions+=2;NFSU2_TR(0x5eb920);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb923:{NFSU2_TR(0x5eb923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb928ull));
TAIL_STATIC(0x5923e0u,592);
}
B5eb928:L5eb928:{c.instructions+=2;NFSU2_TR(0x5eb928);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eb92c:{NFSU2_TR(0x5eb92c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb930:L5eb930:{c.instructions+=13;NFSU2_TR(0x5eb930);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb932:{NFSU2_TR(0x5eb932);
u8 U[4];
w4(U+0,u32(0x7796ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb937:{NFSU2_TR(0x5eb937);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb93d:{NFSU2_TR(0x5eb93d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb93e:{NFSU2_TR(0x5eb93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb945:{NFSU2_TR(0x5eb945);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb946:{NFSU2_TR(0x5eb946);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb94a:{NFSU2_TR(0x5eb94a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb94b:{NFSU2_TR(0x5eb94b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb94c:{NFSU2_TR(0x5eb94c);
__builtin_memmove((R+24),(R+4),4);
}
B5eb94e:{NFSU2_TR(0x5eb94e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb94f:{NFSU2_TR(0x5eb94f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb953:{NFSU2_TR(0x5eb953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb958ull));
TAIL_STATIC(0x40f630u,40f);
}
B5eb958:L5eb958:{c.instructions+=4;NFSU2_TR(0x5eb958);
u8 U[4];
w4(U+0,u32(0x220ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb95d:{NFSU2_TR(0x5eb95d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eb965:{NFSU2_TR(0x5eb965);
u8 U[4];
w4(U+0,u32(0x7a5ca8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5eb96b:{NFSU2_TR(0x5eb96b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb970ull));
TAIL_STATIC(0x575620u,575);
}
B5eb970:L5eb970:{c.instructions+=6;NFSU2_TR(0x5eb970);
__builtin_memmove((R+28),(R+0),4);
}
B5eb972:{NFSU2_TR(0x5eb972);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5eb975:{NFSU2_TR(0x5eb975);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb979:{NFSU2_TR(0x5eb979);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eb97b:{NFSU2_TR(0x5eb97b);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5eb980:{NFSU2_TR(0x5eb980);
if(r1(R+518)){{goto L5eb994;}}
}
B5eb982:L5eb982:{c.instructions+=2;NFSU2_TR(0x5eb982);
__builtin_memmove((R+4),(R+28),4);
}
B5eb984:{NFSU2_TR(0x5eb984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb989ull));
TAIL_STATIC(0x423330u,423);
}
B5eb989:L5eb989:{c.instructions+=3;NFSU2_TR(0x5eb989);
u8 U[4];
w4(U+0,u32(0x7855d8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5eb98f:{NFSU2_TR(0x5eb98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb992:{NFSU2_TR(0x5eb992);
{goto L5eb999;}
}
B5eb994:L5eb994:{c.instructions+=2;NFSU2_TR(0x5eb994);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5eb996:{NFSU2_TR(0x5eb996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb999:L5eb999:{c.instructions+=7;NFSU2_TR(0x5eb999);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb99d:{NFSU2_TR(0x5eb99d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eb99e:{NFSU2_TR(0x5eb99e);
__builtin_memmove((R+0),(R+24),4);
}
B5eb9a0:{NFSU2_TR(0x5eb9a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb9a1:{NFSU2_TR(0x5eb9a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb9a8:{NFSU2_TR(0x5eb9a8);
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
B5eb9ab:{NFSU2_TR(0x5eb9ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb9b0:L5eb9b0:{c.instructions+=3;NFSU2_TR(0x5eb9b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb9b1:{NFSU2_TR(0x5eb9b1);
__builtin_memmove((R+24),(R+4),4);
}
B5eb9b3:{NFSU2_TR(0x5eb9b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb9b8ull));
{goto L5eb9d0;}
}
B5eb9b8:L5eb9b8:{c.instructions+=2;NFSU2_TR(0x5eb9b8);
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
B5eb9bd:{NFSU2_TR(0x5eb9bd);
if(r1(R+518)){{goto L5eb9c8;}}
}
B5eb9bf:L5eb9bf:{c.instructions+=2;NFSU2_TR(0x5eb9bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb9c0:{NFSU2_TR(0x5eb9c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eb9c5ull));
TAIL_STATIC(0x575630u,575);
}
B5eb9c5:L5eb9c5:{c.instructions+=1;NFSU2_TR(0x5eb9c5);
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
B5eb9c8:L5eb9c8:{c.instructions+=3;NFSU2_TR(0x5eb9c8);
__builtin_memmove((R+0),(R+24),4);
}
B5eb9ca:{NFSU2_TR(0x5eb9ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eb9cb:{NFSU2_TR(0x5eb9cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eb9d0:L5eb9d0:{c.instructions+=14;NFSU2_TR(0x5eb9d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb9d2:{NFSU2_TR(0x5eb9d2);
u8 U[4];
w4(U+0,u32(0x7796e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb9d7:{NFSU2_TR(0x5eb9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eb9dd:{NFSU2_TR(0x5eb9dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb9de:{NFSU2_TR(0x5eb9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb9e5:{NFSU2_TR(0x5eb9e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb9e6:{NFSU2_TR(0x5eb9e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eb9e7:{NFSU2_TR(0x5eb9e7);
__builtin_memmove((R+24),(R+4),4);
}
B5eb9e9:{NFSU2_TR(0x5eb9e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eb9ed:{NFSU2_TR(0x5eb9ed);
u8 U[4];
w4(U+0,u32(0x7a5ca8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5eb9f3:{NFSU2_TR(0x5eb9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eb9f6:{NFSU2_TR(0x5eb9f6);
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
B5eb9f8:{NFSU2_TR(0x5eb9f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eba00:{NFSU2_TR(0x5eba00);
if(r1(R+518)){{goto L5eba08;}}
}
B5eba02:L5eba02:{c.instructions+=3;NFSU2_TR(0x5eba02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5eba04:{NFSU2_TR(0x5eba04);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eba06:{NFSU2_TR(0x5eba06);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eba08ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5eba08:L5eba08:{c.instructions+=3;NFSU2_TR(0x5eba08);
__builtin_memmove((R+4),(R+24),4);
}
B5eba0a:{NFSU2_TR(0x5eba0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eba12:{NFSU2_TR(0x5eba12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eba17ull));
TAIL_STATIC(0x4047e0u,404);
}
B5eba17:L5eba17:{c.instructions+=5;NFSU2_TR(0x5eba17);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eba1b:{NFSU2_TR(0x5eba1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eba1c:{NFSU2_TR(0x5eba1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eba23:{NFSU2_TR(0x5eba23);
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
B5eba26:{NFSU2_TR(0x5eba26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eba30:L5eba30:{c.instructions+=14;NFSU2_TR(0x5eba30);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eba36:{NFSU2_TR(0x5eba36);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eba38:{NFSU2_TR(0x5eba38);
u8 U[4];
w4(U+0,u32(0x779778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eba3d:{NFSU2_TR(0x5eba3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eba3e:{NFSU2_TR(0x5eba3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eba42:{NFSU2_TR(0x5eba42);
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
B5eba45:{NFSU2_TR(0x5eba45);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eba4c:{NFSU2_TR(0x5eba4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eba4d:{NFSU2_TR(0x5eba4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eba4e:{NFSU2_TR(0x5eba4e);
__builtin_memmove((R+24),(R+4),4);
}
B5eba50:{NFSU2_TR(0x5eba50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5eba53:{NFSU2_TR(0x5eba53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eba5a:{NFSU2_TR(0x5eba5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eba5d:{NFSU2_TR(0x5eba5d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ebb69;}}
}
B5eba63:L5eba63:{c.instructions+=1;NFSU2_TR(0x5eba63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5ebbc4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5eba6a:L5eba6a:{c.instructions+=2;NFSU2_TR(0x5eba6a);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eba6c:{NFSU2_TR(0x5eba6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eba71ull));
TAIL_STATIC(0x575620u,575);
}
B5eba71:L5eba71:{c.instructions+=5;NFSU2_TR(0x5eba71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5eba74:{NFSU2_TR(0x5eba74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eba78:{NFSU2_TR(0x5eba78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eba7a:{NFSU2_TR(0x5eba7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eba82:{NFSU2_TR(0x5eba82);
if(r1(R+518)){{goto L5ebb5c;}}
}
B5eba88:L5eba88:{c.instructions+=3;NFSU2_TR(0x5eba88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eba89:{NFSU2_TR(0x5eba89);
__builtin_memmove((R+4),(R+0),4);
}
B5eba8b:{NFSU2_TR(0x5eba8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eba90ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eb930u);}goto L5eb930;}
}
B5eba90:L5eba90:{c.instructions+=1;NFSU2_TR(0x5eba90);
{goto L5ebb5e;}
}
B5eba95:L5eba95:{c.instructions+=2;NFSU2_TR(0x5eba95);
u8 U[4];
w4(U+0,u32(0x820ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eba9a:{NFSU2_TR(0x5eba9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eba9full));
TAIL_STATIC(0x575620u,575);
}
B5eba9f:L5eba9f:{c.instructions+=5;NFSU2_TR(0x5eba9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ebaa2:{NFSU2_TR(0x5ebaa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebaa6:{NFSU2_TR(0x5ebaa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebaa8:{NFSU2_TR(0x5ebaa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ebab0:{NFSU2_TR(0x5ebab0);
if(r1(R+518)){{goto L5ebb5c;}}
}
B5ebab6:L5ebab6:{c.instructions+=3;NFSU2_TR(0x5ebab6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebab7:{NFSU2_TR(0x5ebab7);
__builtin_memmove((R+4),(R+0),4);
}
B5ebab9:{NFSU2_TR(0x5ebab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebabeull));
TAIL_STATIC(0x4266d0u,426);
}
B5ebabe:L5ebabe:{c.instructions+=1;NFSU2_TR(0x5ebabe);
{goto L5ebb5e;}
}
B5ebac3:L5ebac3:{c.instructions+=2;NFSU2_TR(0x5ebac3);
u8 U[4];
w4(U+0,u32(0x7d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebac8:{NFSU2_TR(0x5ebac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebacdull));
TAIL_STATIC(0x575620u,575);
}
B5ebacd:L5ebacd:{c.instructions+=5;NFSU2_TR(0x5ebacd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ebad0:{NFSU2_TR(0x5ebad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebad4:{NFSU2_TR(0x5ebad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebad6:{NFSU2_TR(0x5ebad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ebade:{NFSU2_TR(0x5ebade);
if(r1(R+518)){{goto L5ebb5c;}}
}
B5ebae0:L5ebae0:{c.instructions+=3;NFSU2_TR(0x5ebae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebae1:{NFSU2_TR(0x5ebae1);
__builtin_memmove((R+4),(R+0),4);
}
B5ebae3:{NFSU2_TR(0x5ebae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebae8ull));
TAIL_STATIC(0x4299c0u,429);
}
B5ebae8:L5ebae8:{c.instructions+=1;NFSU2_TR(0x5ebae8);
{goto L5ebb5e;}
}
B5ebaea:L5ebaea:{c.instructions+=2;NFSU2_TR(0x5ebaea);
u8 U[4];
w4(U+0,u32(0x7b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebaef:{NFSU2_TR(0x5ebaef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebaf4ull));
TAIL_STATIC(0x575620u,575);
}
B5ebaf4:L5ebaf4:{c.instructions+=5;NFSU2_TR(0x5ebaf4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ebaf7:{NFSU2_TR(0x5ebaf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebafb:{NFSU2_TR(0x5ebafb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebafd:{NFSU2_TR(0x5ebafd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ebb05:{NFSU2_TR(0x5ebb05);
if(r1(R+518)){{goto L5ebb5c;}}
}
B5ebb07:L5ebb07:{c.instructions+=3;NFSU2_TR(0x5ebb07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebb08:{NFSU2_TR(0x5ebb08);
__builtin_memmove((R+4),(R+0),4);
}
B5ebb0a:{NFSU2_TR(0x5ebb0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebb0full));
TAIL_STATIC(0x4260b0u,426);
}
B5ebb0f:L5ebb0f:{c.instructions+=1;NFSU2_TR(0x5ebb0f);
{goto L5ebb5e;}
}
B5ebb11:L5ebb11:{c.instructions+=2;NFSU2_TR(0x5ebb11);
u8 U[4];
w4(U+0,u32(0x7a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebb16:{NFSU2_TR(0x5ebb16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebb1bull));
TAIL_STATIC(0x575620u,575);
}
B5ebb1b:L5ebb1b:{c.instructions+=5;NFSU2_TR(0x5ebb1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ebb1e:{NFSU2_TR(0x5ebb1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebb22:{NFSU2_TR(0x5ebb22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebb24:{NFSU2_TR(0x5ebb24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ebb2c:{NFSU2_TR(0x5ebb2c);
if(r1(R+518)){{goto L5ebb5c;}}
}
B5ebb2e:L5ebb2e:{c.instructions+=3;NFSU2_TR(0x5ebb2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebb2f:{NFSU2_TR(0x5ebb2f);
__builtin_memmove((R+4),(R+0),4);
}
B5ebb31:{NFSU2_TR(0x5ebb31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebb36ull));
TAIL_STATIC(0x426580u,426);
}
B5ebb36:L5ebb36:{c.instructions+=1;NFSU2_TR(0x5ebb36);
{goto L5ebb5e;}
}
B5ebb38:L5ebb38:{c.instructions+=2;NFSU2_TR(0x5ebb38);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebb3a:{NFSU2_TR(0x5ebb3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebb3full));
TAIL_STATIC(0x575620u,575);
}
B5ebb3f:L5ebb3f:{c.instructions+=5;NFSU2_TR(0x5ebb3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ebb42:{NFSU2_TR(0x5ebb42);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebb46:{NFSU2_TR(0x5ebb46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebb48:{NFSU2_TR(0x5ebb48);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ebb50:{NFSU2_TR(0x5ebb50);
if(r1(R+518)){{goto L5ebb5c;}}
}
B5ebb52:L5ebb52:{c.instructions+=3;NFSU2_TR(0x5ebb52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebb53:{NFSU2_TR(0x5ebb53);
__builtin_memmove((R+4),(R+0),4);
}
B5ebb55:{NFSU2_TR(0x5ebb55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebb5aull));
TAIL_STATIC(0x426650u,426);
}
B5ebb5a:L5ebb5a:{c.instructions+=1;NFSU2_TR(0x5ebb5a);
{goto L5ebb5e;}
}
B5ebb5c:L5ebb5c:{c.instructions+=1;NFSU2_TR(0x5ebb5c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ebb5e:L5ebb5e:{c.instructions+=2;NFSU2_TR(0x5ebb5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ebb66:{NFSU2_TR(0x5ebb66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebb69:L5ebb69:{c.instructions+=2;NFSU2_TR(0x5ebb69);
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
B5ebb6b:{NFSU2_TR(0x5ebb6b);
if(r1(R+518)){{goto L5ebb75;}}
}
B5ebb6d:L5ebb6d:{c.instructions+=4;NFSU2_TR(0x5ebb6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ebb6f:{NFSU2_TR(0x5ebb6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebb71:{NFSU2_TR(0x5ebb71);
__builtin_memmove((R+4),(R+12),4);
}
B5ebb73:{NFSU2_TR(0x5ebb73);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebb75ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ebb75:L5ebb75:{c.instructions+=20;NFSU2_TR(0x5ebb75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebb78:{NFSU2_TR(0x5ebb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebb7b:{NFSU2_TR(0x5ebb7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ebb7e:{NFSU2_TR(0x5ebb7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebb81:{NFSU2_TR(0x5ebb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebb84:{NFSU2_TR(0x5ebb84);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5ebb88:{NFSU2_TR(0x5ebb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebb8b:{NFSU2_TR(0x5ebb8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce00ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5ebb92:{NFSU2_TR(0x5ebb92);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5ebb96:{NFSU2_TR(0x5ebb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebb99:{NFSU2_TR(0x5ebb99);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ce58ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5ebba0:{NFSU2_TR(0x5ebba0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5ebba4:{NFSU2_TR(0x5ebba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ebba7:{NFSU2_TR(0x5ebba7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89ceb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5ebbae:{NFSU2_TR(0x5ebbae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebbb2:{NFSU2_TR(0x5ebbb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ebbb3:{NFSU2_TR(0x5ebbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebbba:{NFSU2_TR(0x5ebbba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ebbbb:{NFSU2_TR(0x5ebbbb);
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
B5ebbbe:{NFSU2_TR(0x5ebbbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebbe0:L5ebbe0:{c.instructions+=4;NFSU2_TR(0x5ebbe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebbe4:{NFSU2_TR(0x5ebbe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebbea:{NFSU2_TR(0x5ebbea);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
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
B5ebbee:{NFSU2_TR(0x5ebbee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ebbfa;}}
}
B5ebbf0:L5ebbf0:{c.instructions+=3;NFSU2_TR(0x5ebbf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebbf3:{NFSU2_TR(0x5ebbf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ebbf7:{NFSU2_TR(0x5ebbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebbfa:L5ebbfa:{c.instructions+=1;NFSU2_TR(0x5ebbfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebc00:L5ebc00:{c.instructions+=3;NFSU2_TR(0x5ebc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebc03:{NFSU2_TR(0x5ebc03);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ebc06:{NFSU2_TR(0x5ebc06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ebc10;}}
}
B5ebc08:L5ebc08:{c.instructions+=2;NFSU2_TR(0x5ebc08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebc0b:{NFSU2_TR(0x5ebc0b);
TAIL_STATIC(0x5a48a0u,5a4);
}
B5ebc10:L5ebc10:{c.instructions+=2;NFSU2_TR(0x5ebc10);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ebc13:{NFSU2_TR(0x5ebc13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ebc1d;}}
}
B5ebc15:L5ebc15:{c.instructions+=2;NFSU2_TR(0x5ebc15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebc18:{NFSU2_TR(0x5ebc18);
TAIL_STATIC(0x5a2a60u,5a2);
}
B5ebc1d:L5ebc1d:{c.instructions+=1;NFSU2_TR(0x5ebc1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebc20:L5ebc20:{c.instructions+=11;NFSU2_TR(0x5ebc20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebc21:{NFSU2_TR(0x5ebc21);
__builtin_memmove((R+20),(R+16),4);
}
B5ebc23:{NFSU2_TR(0x5ebc23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ebc26:{NFSU2_TR(0x5ebc26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B5ebc29:{NFSU2_TR(0x5ebc29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ebc2c:{NFSU2_TR(0x5ebc2c);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebc32:{NFSU2_TR(0x5ebc32);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ebc36:{NFSU2_TR(0x5ebc36);
{u32 ea_=u32(u32(8397784u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ebc3c:{NFSU2_TR(0x5ebc3c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebc3e:{NFSU2_TR(0x5ebc3e);
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
B5ebc41:{NFSU2_TR(0x5ebc41);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ebd3a;}}
}
B5ebc47:L5ebc47:{c.instructions+=23;NFSU2_TR(0x5ebc47);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebc4a:{NFSU2_TR(0x5ebc4a);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ebc4d:{NFSU2_TR(0x5ebc4d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ebc51:{NFSU2_TR(0x5ebc51);
{u32 ea_=u32(r4(R+8)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebc54:{NFSU2_TR(0x5ebc54);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ebc57:{NFSU2_TR(0x5ebc57);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ebc5b:{NFSU2_TR(0x5ebc5b);
{u32 ea_=u32(r4(R+8)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebc5e:{NFSU2_TR(0x5ebc5e);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ebc61:{NFSU2_TR(0x5ebc61);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ebc65:{NFSU2_TR(0x5ebc65);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebc69:{NFSU2_TR(0x5ebc69);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ebc6d:{NFSU2_TR(0x5ebc6d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebc71:{NFSU2_TR(0x5ebc71);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ebc75:{NFSU2_TR(0x5ebc75);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ebc77:{NFSU2_TR(0x5ebc77);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebc7b:{NFSU2_TR(0x5ebc7b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ebc7f:{NFSU2_TR(0x5ebc7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ebc81:{NFSU2_TR(0x5ebc81);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5ebc83:{NFSU2_TR(0x5ebc83);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ebc89:{NFSU2_TR(0x5ebc89);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ebc8d:{NFSU2_TR(0x5ebc8d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebc8f:{NFSU2_TR(0x5ebc8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ebc92:{NFSU2_TR(0x5ebc92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ebc98;}}
}
B5ebc94:L5ebc94:{c.instructions+=2;NFSU2_TR(0x5ebc94);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ebc96:{NFSU2_TR(0x5ebc96);
{goto L5ebc9e;}
}
B5ebc98:L5ebc98:{c.instructions+=1;NFSU2_TR(0x5ebc98);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebc9e:L5ebc9e:{c.instructions+=5;NFSU2_TR(0x5ebc9e);
{u32 ea_=u32(u32(8397804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebca4:{NFSU2_TR(0x5ebca4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ebca6:{NFSU2_TR(0x5ebca6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebca8:{NFSU2_TR(0x5ebca8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ebcab:{NFSU2_TR(0x5ebcab);
if(r1(R+514)){{goto L5ebcb5;}}
}
B5ebcad:L5ebcad:{c.instructions+=2;NFSU2_TR(0x5ebcad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ebcaf:{NFSU2_TR(0x5ebcaf);
{u32 ea_=u32(u32(8397804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebcb5:L5ebcb5:{c.instructions+=6;NFSU2_TR(0x5ebcb5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ebcb7:{NFSU2_TR(0x5ebcb7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ebcb9:{NFSU2_TR(0x5ebcb9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebcbb:{NFSU2_TR(0x5ebcbb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ebcbd:{NFSU2_TR(0x5ebcbd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ebcc0:{NFSU2_TR(0x5ebcc0);
if(r1(R+514)){{goto L5ebd3a;}}
}
B5ebcc2:L5ebcc2:{c.instructions+=5;NFSU2_TR(0x5ebcc2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x70ull))));
}
B5ebcc5:{NFSU2_TR(0x5ebcc5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebcc6:{NFSU2_TR(0x5ebcc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ebcca:{NFSU2_TR(0x5ebcca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebccb:{NFSU2_TR(0x5ebccb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebcd0ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5ebcd0:L5ebcd0:{c.instructions+=19;NFSU2_TR(0x5ebcd0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebcd4:{NFSU2_TR(0x5ebcd4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ebcd8:{NFSU2_TR(0x5ebcd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ebcdb:{NFSU2_TR(0x5ebcdb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebcdf:{NFSU2_TR(0x5ebcdf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ebce3:{NFSU2_TR(0x5ebce3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ebce5:{NFSU2_TR(0x5ebce5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebce9:{NFSU2_TR(0x5ebce9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ebced:{NFSU2_TR(0x5ebced);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ebcef:{NFSU2_TR(0x5ebcef);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ebcf3:{NFSU2_TR(0x5ebcf3);
{u32 ea_=u32(u32(8017336u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ebcf9:{NFSU2_TR(0x5ebcf9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebcff:{NFSU2_TR(0x5ebcff);
{u32 ea_=u32(u32(8017336u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ebd05:{NFSU2_TR(0x5ebd05);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5ebd07:{NFSU2_TR(0x5ebd07);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ebd0b:{NFSU2_TR(0x5ebd0b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ebd11:{NFSU2_TR(0x5ebd11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebd13:{NFSU2_TR(0x5ebd13);
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
B5ebd16:{NFSU2_TR(0x5ebd16);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ebd3a;}}
}
B5ebd18:L5ebd18:{c.instructions+=4;NFSU2_TR(0x5ebd18);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebd1c:{NFSU2_TR(0x5ebd1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebd1d:{NFSU2_TR(0x5ebd1d);
w4(R+4,u32(0x89cf30ull));
}
B5ebd22:{NFSU2_TR(0x5ebd22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebd27ull));
TAIL_STATIC(0x576790u,576);
}
B5ebd27:L5ebd27:{c.instructions+=5;NFSU2_TR(0x5ebd27);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ebd2b:{NFSU2_TR(0x5ebd2b);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ebd31:{NFSU2_TR(0x5ebd31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebd33:{NFSU2_TR(0x5ebd33);
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
B5ebd36:{NFSU2_TR(0x5ebd36);
if(r1(R+514)){{goto L5ebd46;}}
}
B5ebd38:L5ebd38:{c.instructions+=1;NFSU2_TR(0x5ebd38);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ebd3a:L5ebd3a:{c.instructions+=4;NFSU2_TR(0x5ebd3a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebd40:{NFSU2_TR(0x5ebd40);
__builtin_memmove((R+16),(R+20),4);
}
B5ebd42:{NFSU2_TR(0x5ebd42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ebd43:{NFSU2_TR(0x5ebd43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebd46:L5ebd46:{c.instructions+=8;NFSU2_TR(0x5ebd46);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebd4a:{NFSU2_TR(0x5ebd4a);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebd4f:{NFSU2_TR(0x5ebd4f);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5ebd51:{NFSU2_TR(0x5ebd51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebd53:{NFSU2_TR(0x5ebd53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebd54:{NFSU2_TR(0x5ebd54);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ebd57:{NFSU2_TR(0x5ebd57);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ebd59:{NFSU2_TR(0x5ebd59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebd5eull));
TAIL_STATIC(0x401090u,401);
}
B5ebd5e:L5ebd5e:{c.instructions+=4;NFSU2_TR(0x5ebd5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ebd61:{NFSU2_TR(0x5ebd61);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ebd64:{NFSU2_TR(0x5ebd64);
w4(R+4,u32(0x8023f0ull));
}
B5ebd69:{NFSU2_TR(0x5ebd69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebd6eull));
TAIL_STATIC(0x5764d0u,576);
}
B5ebd6e:L5ebd6e:{c.instructions+=3;NFSU2_TR(0x5ebd6e);
__builtin_memmove((R+16),(R+20),4);
}
B5ebd70:{NFSU2_TR(0x5ebd70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ebd71:{NFSU2_TR(0x5ebd71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebd80:L5ebd80:{c.instructions+=11;NFSU2_TR(0x5ebd80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebd81:{NFSU2_TR(0x5ebd81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebd82:{NFSU2_TR(0x5ebd82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebd83:{NFSU2_TR(0x5ebd83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebd84:{NFSU2_TR(0x5ebd84);
__builtin_memmove((R+28),(R+4),4);
}
B5ebd86:{NFSU2_TR(0x5ebd86);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5ebd8c:{NFSU2_TR(0x5ebd8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebd8f:{NFSU2_TR(0x5ebd8f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ebd91:{NFSU2_TR(0x5ebd91);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebd93:{NFSU2_TR(0x5ebd93);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ebd9b:{NFSU2_TR(0x5ebd9b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ebddb;}}
}
B5ebd9d:L5ebd9d:{c.instructions+=1;NFSU2_TR(0x5ebd9d);
w4(R+24,u32(0x1cull));
}
B5ebda2:L5ebda2:{c.instructions+=3;NFSU2_TR(0x5ebda2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5ebda5:{NFSU2_TR(0x5ebda5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ebda7:{NFSU2_TR(0x5ebda7);
if(r1(R+518)){{goto L5ebdbf;}}
}
B5ebda9:L5ebda9:{c.instructions+=3;NFSU2_TR(0x5ebda9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebdaa:{NFSU2_TR(0x5ebdaa);
__builtin_memmove((R+4),(R+28),4);
}
B5ebdac:{NFSU2_TR(0x5ebdac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebdb1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ebc20u);}goto L5ebc20;}
}
B5ebdb1:L5ebdb1:{c.instructions+=3;NFSU2_TR(0x5ebdb1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ebdb5:{NFSU2_TR(0x5ebdb5);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5ebdbb:{NFSU2_TR(0x5ebdbb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ebdbf:L5ebdbf:{c.instructions+=5;NFSU2_TR(0x5ebdbf);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebdc3:{NFSU2_TR(0x5ebdc3);
{u32 ea_=u32(u32(8017340u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ebdc9:{NFSU2_TR(0x5ebdc9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebdcb:{NFSU2_TR(0x5ebdcb);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ebdce:{NFSU2_TR(0x5ebdce);
if(r1(R+518)){{goto L5ebdf5;}}
}
B5ebdd0:L5ebdd0:{c.instructions+=5;NFSU2_TR(0x5ebdd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebdd3:{NFSU2_TR(0x5ebdd3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5ebdd4:{NFSU2_TR(0x5ebdd4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5ebdd7:{NFSU2_TR(0x5ebdd7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ebdd9:{NFSU2_TR(0x5ebdd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ebda2u);}goto L5ebda2;}}
}
B5ebddb:L5ebddb:{c.instructions+=5;NFSU2_TR(0x5ebddb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebddf:{NFSU2_TR(0x5ebddf);
{u32 ea_=u32(u32(8017340u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ebde5:{NFSU2_TR(0x5ebde5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebde7:{NFSU2_TR(0x5ebde7);
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
B5ebdea:{NFSU2_TR(0x5ebdea);
if(r1(R+514)){{goto L5ebdf5;}}
}
B5ebdec:L5ebdec:{c.instructions+=6;NFSU2_TR(0x5ebdec);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebdf0:{NFSU2_TR(0x5ebdf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ebdf1:{NFSU2_TR(0x5ebdf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ebdf2:{NFSU2_TR(0x5ebdf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ebdf3:{NFSU2_TR(0x5ebdf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ebdf4:{NFSU2_TR(0x5ebdf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebdf5:L5ebdf5:{c.instructions+=6;NFSU2_TR(0x5ebdf5);
{u32 ea_=u32(u32(8017340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebdfb:{NFSU2_TR(0x5ebdfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ebdfc:{NFSU2_TR(0x5ebdfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ebdfd:{NFSU2_TR(0x5ebdfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ebdfe:{NFSU2_TR(0x5ebdfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ebdff:{NFSU2_TR(0x5ebdff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebe00:L5ebe00:{c.instructions+=9;NFSU2_TR(0x5ebe00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebe01:{NFSU2_TR(0x5ebe01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebe02:{NFSU2_TR(0x5ebe02);
__builtin_memmove((R+24),(R+4),4);
}
B5ebe04:{NFSU2_TR(0x5ebe04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebe0a:{NFSU2_TR(0x5ebe0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebe0b:{NFSU2_TR(0x5ebe0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ebe0f:{NFSU2_TR(0x5ebe0f);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5ebe11:{NFSU2_TR(0x5ebe11);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ebe13:{NFSU2_TR(0x5ebe13);
if(r1(R+518)){{goto L5ebe6d;}}
}
B5ebe15:L5ebe15:{c.instructions+=3;NFSU2_TR(0x5ebe15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebe1b:{NFSU2_TR(0x5ebe1b);
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
B5ebe1d:{NFSU2_TR(0x5ebe1d);
if(r1(R+518)){{goto L5ebe2a;}}
}
B5ebe1f:L5ebe1f:{c.instructions+=5;NFSU2_TR(0x5ebe1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ebe21:{NFSU2_TR(0x5ebe21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebe23:{NFSU2_TR(0x5ebe23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebe25:{NFSU2_TR(0x5ebe25);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebe27:{NFSU2_TR(0x5ebe27);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebe2aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ebe2a:L5ebe2a:{c.instructions+=4;NFSU2_TR(0x5ebe2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ebe2e:{NFSU2_TR(0x5ebe2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebe34:{NFSU2_TR(0x5ebe34);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5ebe3a:{NFSU2_TR(0x5ebe3a);
if(r1(R+518)){{goto L5ebe65;}}
}
B5ebe3c:L5ebe3c:{c.instructions+=10;NFSU2_TR(0x5ebe3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebe42:{NFSU2_TR(0x5ebe42);
__builtin_memmove((R+8),(R+4),4);
}
B5ebe44:{NFSU2_TR(0x5ebe44);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5ebe46:{NFSU2_TR(0x5ebe46);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebe4a:{NFSU2_TR(0x5ebe4a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ebe4e:{NFSU2_TR(0x5ebe4e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ebe54:{NFSU2_TR(0x5ebe54);
{u32 ea_=u32(u32(8017432u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ebe5a:{NFSU2_TR(0x5ebe5a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebe5c:{NFSU2_TR(0x5ebe5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ebe5f:{NFSU2_TR(0x5ebe5f);
if(r1(R+518)){{goto L5ebe65;}}
}
B5ebe61:L5ebe61:{c.instructions+=2;NFSU2_TR(0x5ebe61);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5ebe63:{NFSU2_TR(0x5ebe63);
{goto L5ebe67;}
}
B5ebe65:L5ebe65:{c.instructions+=1;NFSU2_TR(0x5ebe65);
w1(R+12,u8(0x1ull));
}
B5ebe67:L5ebe67:{c.instructions+=1;NFSU2_TR(0x5ebe67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebe6d:L5ebe6d:{c.instructions+=2;NFSU2_TR(0x5ebe6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ebe71:{NFSU2_TR(0x5ebe71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ebe96;}}
}
B5ebe73:L5ebe73:{c.instructions+=2;NFSU2_TR(0x5ebe73);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ebe7a:{NFSU2_TR(0x5ebe7a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ebe96;}}
}
B5ebe7c:L5ebe7c:{c.instructions+=3;NFSU2_TR(0x5ebe7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebe82:{NFSU2_TR(0x5ebe82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebe84:{NFSU2_TR(0x5ebe84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ebe94;}}
}
B5ebe86:L5ebe86:{c.instructions+=3;NFSU2_TR(0x5ebe86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebe8c:{NFSU2_TR(0x5ebe8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebe8e:{NFSU2_TR(0x5ebe8e);
if(r1(R+518)){{goto L5ebe94;}}
}
B5ebe90:L5ebe90:{c.instructions+=2;NFSU2_TR(0x5ebe90);
w1(R+12,u8(0x1ull));
}
B5ebe92:{NFSU2_TR(0x5ebe92);
{goto L5ebe96;}
}
B5ebe94:L5ebe94:{c.instructions+=1;NFSU2_TR(0x5ebe94);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5ebe96:L5ebe96:{c.instructions+=4;NFSU2_TR(0x5ebe96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebe99:{NFSU2_TR(0x5ebe99);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebe9b:{NFSU2_TR(0x5ebe9b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2f0ull))));
}
B5ebea1:{NFSU2_TR(0x5ebea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebea6ull));
TAIL_STATIC(0x5995e0u,599);
}
B5ebea6:L5ebea6:{c.instructions+=6;NFSU2_TR(0x5ebea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebeaa:{NFSU2_TR(0x5ebeaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebead:{NFSU2_TR(0x5ebead);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ebeb1:{NFSU2_TR(0x5ebeb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x328ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebeb7:{NFSU2_TR(0x5ebeb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebeb9:{NFSU2_TR(0x5ebeb9);
if(r1(R+518)){{goto L5ebec1;}}
}
B5ebebb:L5ebebb:{c.instructions+=1;NFSU2_TR(0x5ebebb);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ebec1:L5ebec1:{c.instructions+=2;NFSU2_TR(0x5ebec1);
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
B5ebec3:{NFSU2_TR(0x5ebec3);
if(r1(R+518)){{goto L5ebf3b;}}
}
B5ebec5:L5ebec5:{c.instructions+=4;NFSU2_TR(0x5ebec5);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ebecb:{NFSU2_TR(0x5ebecb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebecd:{NFSU2_TR(0x5ebecd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ebed0:{NFSU2_TR(0x5ebed0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ebf27;}}
}
B5ebed2:L5ebed2:{c.instructions+=9;NFSU2_TR(0x5ebed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebed8:{NFSU2_TR(0x5ebed8);
{u32 ea_=u32(u32(8019252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ebede:{NFSU2_TR(0x5ebede);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebee0:{NFSU2_TR(0x5ebee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebee1:{NFSU2_TR(0x5ebee1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebee2:{NFSU2_TR(0x5ebee2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ebee5:{NFSU2_TR(0x5ebee5);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebee7:{NFSU2_TR(0x5ebee7);
__builtin_memmove((R+4),(R+24),4);
}
B5ebee9:{NFSU2_TR(0x5ebee9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebeeeull));
TAIL_STATIC(0x61fb00u,61f);
}
B5ebeee:L5ebeee:{c.instructions+=3;NFSU2_TR(0x5ebeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x968ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebef4:{NFSU2_TR(0x5ebef4);
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
B5ebef6:{NFSU2_TR(0x5ebef6);
if(r1(R+518)){{goto L5ebf15;}}
}
B5ebef8:L5ebef8:{c.instructions+=5;NFSU2_TR(0x5ebef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ebefa:{NFSU2_TR(0x5ebefa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebefc:{NFSU2_TR(0x5ebefc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebefe:{NFSU2_TR(0x5ebefe);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebf00:{NFSU2_TR(0x5ebf00);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ebf03ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ebf03:L5ebf03:{c.instructions+=6;NFSU2_TR(0x5ebf03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebf09:{NFSU2_TR(0x5ebf09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ebf0a:{NFSU2_TR(0x5ebf0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebf10:{NFSU2_TR(0x5ebf10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ebf11:{NFSU2_TR(0x5ebf11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ebf12:{NFSU2_TR(0x5ebf12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebf15:L5ebf15:{c.instructions+=6;NFSU2_TR(0x5ebf15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebf1b:{NFSU2_TR(0x5ebf1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ebf1c:{NFSU2_TR(0x5ebf1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebf22:{NFSU2_TR(0x5ebf22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ebf23:{NFSU2_TR(0x5ebf23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ebf24:{NFSU2_TR(0x5ebf24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebf27:L5ebf27:{c.instructions+=7;NFSU2_TR(0x5ebf27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ebf2d:{NFSU2_TR(0x5ebf2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ebf2f:{NFSU2_TR(0x5ebf2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ebf30:{NFSU2_TR(0x5ebf30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebf36:{NFSU2_TR(0x5ebf36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ebf37:{NFSU2_TR(0x5ebf37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ebf38:{NFSU2_TR(0x5ebf38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebf3b:L5ebf3b:{c.instructions+=7;NFSU2_TR(0x5ebf3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x448ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebf41:{NFSU2_TR(0x5ebf41);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ebf43:{NFSU2_TR(0x5ebf43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ebf44:{NFSU2_TR(0x5ebf44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebf4a:{NFSU2_TR(0x5ebf4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ebf4b:{NFSU2_TR(0x5ebf4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ebf4c:{NFSU2_TR(0x5ebf4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebf50:L5ebf50:{c.instructions+=3;NFSU2_TR(0x5ebf50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebf53:{NFSU2_TR(0x5ebf53);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5ebf5a:{NFSU2_TR(0x5ebf5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebf60:L5ebf60:{c.instructions+=2;NFSU2_TR(0x5ebf60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x96cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ebf6a:{NFSU2_TR(0x5ebf6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebf70:L5ebf70:{c.instructions+=6;NFSU2_TR(0x5ebf70);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebf74:{NFSU2_TR(0x5ebf74);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebf7a:{NFSU2_TR(0x5ebf7a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ebf7c:{NFSU2_TR(0x5ebf7c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebf7e:{NFSU2_TR(0x5ebf7e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ebf81:{NFSU2_TR(0x5ebf81);
if(r1(R+514)){{goto L5ebf8b;}}
}
B5ebf83:L5ebf83:{c.instructions+=2;NFSU2_TR(0x5ebf83);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ebf85:{NFSU2_TR(0x5ebf85);
{u32 ea_=u32(u32(8017344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ebf8b:L5ebf8b:{c.instructions+=4;NFSU2_TR(0x5ebf8b);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5ebf90:{NFSU2_TR(0x5ebf90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x974ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ebf96:{NFSU2_TR(0x5ebf96);
{u32 ea_=u32(r4(R+4)+u32(2424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ebf9c:{NFSU2_TR(0x5ebf9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebfa0:L5ebfa0:{c.instructions+=4;NFSU2_TR(0x5ebfa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebfa1:{NFSU2_TR(0x5ebfa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x974ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebfa7:{NFSU2_TR(0x5ebfa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebfa9:{NFSU2_TR(0x5ebfa9);
if(r1(R+518)){{goto L5ebfdf;}}
}
B5ebfab:L5ebfab:{c.instructions+=2;NFSU2_TR(0x5ebfab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ebfb0:{NFSU2_TR(0x5ebfb0);
if(r1(R+518)){{goto L5ebfdf;}}
}
B5ebfb2:L5ebfb2:{c.instructions+=9;NFSU2_TR(0x5ebfb2);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5ebfb7:{NFSU2_TR(0x5ebfb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x974ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5ebfbd:{NFSU2_TR(0x5ebfbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ebfc1:{NFSU2_TR(0x5ebfc1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ebfc5:{NFSU2_TR(0x5ebfc5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ebfcb:{NFSU2_TR(0x5ebfcb);
{u32 ea_=u32(r4(R+4)+u32(2424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ebfd1:{NFSU2_TR(0x5ebfd1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ebfd3:{NFSU2_TR(0x5ebfd3);
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
B5ebfd6:{NFSU2_TR(0x5ebfd6);
if(r1(R+514)){{goto L5ebfdf;}}
}
B5ebfd8:L5ebfd8:{c.instructions+=3;NFSU2_TR(0x5ebfd8);
w4(R+0,u32(0x1ull));
}
B5ebfdd:{NFSU2_TR(0x5ebfdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ebfde:{NFSU2_TR(0x5ebfde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebfdf:L5ebfdf:{c.instructions+=3;NFSU2_TR(0x5ebfdf);
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
B5ebfe1:{NFSU2_TR(0x5ebfe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ebfe2:{NFSU2_TR(0x5ebfe2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ebff0:L5ebff0:{c.instructions+=5;NFSU2_TR(0x5ebff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ebff1:{NFSU2_TR(0x5ebff1);
__builtin_memmove((R+8),(R+4),4);
}
B5ebff3:{NFSU2_TR(0x5ebff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ebff7:{NFSU2_TR(0x5ebff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ebffd:{NFSU2_TR(0x5ebffd);
w4(R+24,u32(0x1ull));
TAIL_STATIC(0x5ec002u,5ec);
}
XIT:NFSU2_TR_EXIT(0x5eb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
