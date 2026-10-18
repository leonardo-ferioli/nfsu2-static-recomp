#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_53c(u8* __restrict R,Cpu& c);
u32 body_547(u8* __restrict R,Cpu& c);
u32 body_548(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_560(u8* __restrict R,Cpu& c);
u32 body_569(u8* __restrict R,Cpu& c);
u32 body_56a(u8* __restrict R,Cpu& c);
u32 body_56b(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x56c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x56c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_56c(u8* __restrict R,Cpu& c);
u32 page_56c(Cpu& c){return body_56c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_56c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x56c002:goto L56c002;
case 0x56c008:c.instructions+=16;goto B56c008;
case 0x56c00e:c.instructions+=15;goto B56c00e;
case 0x56c014:c.instructions+=14;goto B56c014;
case 0x56c01a:c.instructions+=13;goto B56c01a;
case 0x56c01d:c.instructions+=12;goto B56c01d;
case 0x56c023:c.instructions+=11;goto B56c023;
case 0x56c029:c.instructions+=10;goto B56c029;
case 0x56c02c:c.instructions+=9;goto B56c02c;
case 0x56c032:c.instructions+=8;goto B56c032;
case 0x56c035:c.instructions+=7;goto B56c035;
case 0x56c03a:c.instructions+=6;goto B56c03a;
case 0x56c03b:c.instructions+=5;goto B56c03b;
case 0x56c03f:c.instructions+=4;goto B56c03f;
case 0x56c045:c.instructions+=3;goto B56c045;
case 0x56c04f:c.instructions+=2;goto B56c04f;
case 0x56c059:c.instructions+=1;goto B56c059;
case 0x56c05e:goto L56c05e;
case 0x56c061:c.instructions+=3;goto B56c061;
case 0x56c063:c.instructions+=2;goto B56c063;
case 0x56c069:c.instructions+=1;goto B56c069;
case 0x56c06e:goto L56c06e;
case 0x56c070:c.instructions+=1;goto B56c070;
case 0x56c075:goto L56c075;
case 0x56c078:c.instructions+=2;goto B56c078;
case 0x56c07a:c.instructions+=1;goto B56c07a;
case 0x56c07c:goto L56c07c;
case 0x56c07f:c.instructions+=1;goto B56c07f;
case 0x56c081:goto L56c081;
case 0x56c083:goto L56c083;
case 0x56c086:c.instructions+=1;goto B56c086;
case 0x56c088:goto L56c088;
case 0x56c08e:c.instructions+=2;goto B56c08e;
case 0x56c08f:c.instructions+=1;goto B56c08f;
case 0x56c094:goto L56c094;
case 0x56c097:c.instructions+=1;goto B56c097;
case 0x56c099:goto L56c099;
case 0x56c09c:c.instructions+=2;goto B56c09c;
case 0x56c09e:c.instructions+=1;goto B56c09e;
case 0x56c0a0:goto L56c0a0;
case 0x56c0a3:goto L56c0a3;
case 0x56c0a6:c.instructions+=1;goto B56c0a6;
case 0x56c0a8:goto L56c0a8;
case 0x56c0ae:c.instructions+=2;goto B56c0ae;
case 0x56c0af:c.instructions+=1;goto B56c0af;
case 0x56c0b4:goto L56c0b4;
case 0x56c0b7:c.instructions+=1;goto B56c0b7;
case 0x56c0b9:goto L56c0b9;
case 0x56c0bf:c.instructions+=2;goto B56c0bf;
case 0x56c0c0:c.instructions+=1;goto B56c0c0;
case 0x56c0c5:goto L56c0c5;
case 0x56c0cb:c.instructions+=2;goto B56c0cb;
case 0x56c0cc:c.instructions+=1;goto B56c0cc;
case 0x56c0d1:goto L56c0d1;
case 0x56c0d4:goto L56c0d4;
case 0x56c0d8:c.instructions+=8;goto B56c0d8;
case 0x56c0d9:c.instructions+=7;goto B56c0d9;
case 0x56c0db:c.instructions+=6;goto B56c0db;
case 0x56c0dc:c.instructions+=5;goto B56c0dc;
case 0x56c0dd:c.instructions+=4;goto B56c0dd;
case 0x56c0de:c.instructions+=3;goto B56c0de;
case 0x56c0e5:c.instructions+=2;goto B56c0e5;
case 0x56c0e8:c.instructions+=1;goto B56c0e8;
case 0x56c0f0:goto L56c0f0;
case 0x56c0f2:c.instructions+=7;goto B56c0f2;
case 0x56c0f7:c.instructions+=6;goto B56c0f7;
case 0x56c0fd:c.instructions+=5;goto B56c0fd;
case 0x56c0fe:c.instructions+=4;goto B56c0fe;
case 0x56c105:c.instructions+=3;goto B56c105;
case 0x56c106:c.instructions+=2;goto B56c106;
case 0x56c10b:c.instructions+=1;goto B56c10b;
case 0x56c110:goto L56c110;
case 0x56c113:c.instructions+=4;goto B56c113;
case 0x56c117:c.instructions+=3;goto B56c117;
case 0x56c119:c.instructions+=2;goto B56c119;
case 0x56c121:c.instructions+=1;goto B56c121;
case 0x56c123:goto L56c123;
case 0x56c127:c.instructions+=3;goto B56c127;
case 0x56c128:c.instructions+=2;goto B56c128;
case 0x56c12a:c.instructions+=1;goto B56c12a;
case 0x56c12f:goto L56c12f;
case 0x56c133:c.instructions+=3;goto B56c133;
case 0x56c13a:c.instructions+=2;goto B56c13a;
case 0x56c13d:c.instructions+=1;goto B56c13d;
case 0x56c13e:goto L56c13e;
case 0x56c142:c.instructions+=4;goto B56c142;
case 0x56c144:c.instructions+=3;goto B56c144;
case 0x56c14b:c.instructions+=2;goto B56c14b;
case 0x56c14e:c.instructions+=1;goto B56c14e;
case 0x56c150:goto L56c150;
case 0x56c152:c.instructions+=7;goto B56c152;
case 0x56c157:c.instructions+=6;goto B56c157;
case 0x56c15d:c.instructions+=5;goto B56c15d;
case 0x56c15e:c.instructions+=4;goto B56c15e;
case 0x56c165:c.instructions+=3;goto B56c165;
case 0x56c166:c.instructions+=2;goto B56c166;
case 0x56c16b:c.instructions+=1;goto B56c16b;
case 0x56c170:goto L56c170;
case 0x56c173:c.instructions+=4;goto B56c173;
case 0x56c177:c.instructions+=3;goto B56c177;
case 0x56c179:c.instructions+=2;goto B56c179;
case 0x56c181:c.instructions+=1;goto B56c181;
case 0x56c183:goto L56c183;
case 0x56c187:c.instructions+=3;goto B56c187;
case 0x56c188:c.instructions+=2;goto B56c188;
case 0x56c18a:c.instructions+=1;goto B56c18a;
case 0x56c18f:goto L56c18f;
case 0x56c193:c.instructions+=3;goto B56c193;
case 0x56c19a:c.instructions+=2;goto B56c19a;
case 0x56c19d:c.instructions+=1;goto B56c19d;
case 0x56c19e:goto L56c19e;
case 0x56c1a2:c.instructions+=4;goto B56c1a2;
case 0x56c1a4:c.instructions+=3;goto B56c1a4;
case 0x56c1ab:c.instructions+=2;goto B56c1ab;
case 0x56c1ae:c.instructions+=1;goto B56c1ae;
case 0x56c1b0:goto L56c1b0;
case 0x56c1b2:c.instructions+=7;goto B56c1b2;
case 0x56c1b7:c.instructions+=6;goto B56c1b7;
case 0x56c1bd:c.instructions+=5;goto B56c1bd;
case 0x56c1be:c.instructions+=4;goto B56c1be;
case 0x56c1c5:c.instructions+=3;goto B56c1c5;
case 0x56c1c6:c.instructions+=2;goto B56c1c6;
case 0x56c1cb:c.instructions+=1;goto B56c1cb;
case 0x56c1d0:goto L56c1d0;
case 0x56c1d3:c.instructions+=4;goto B56c1d3;
case 0x56c1d7:c.instructions+=3;goto B56c1d7;
case 0x56c1d9:c.instructions+=2;goto B56c1d9;
case 0x56c1e1:c.instructions+=1;goto B56c1e1;
case 0x56c1e3:goto L56c1e3;
case 0x56c1e7:c.instructions+=3;goto B56c1e7;
case 0x56c1e8:c.instructions+=2;goto B56c1e8;
case 0x56c1ea:c.instructions+=1;goto B56c1ea;
case 0x56c1ef:goto L56c1ef;
case 0x56c1f3:c.instructions+=3;goto B56c1f3;
case 0x56c1fa:c.instructions+=2;goto B56c1fa;
case 0x56c1fd:c.instructions+=1;goto B56c1fd;
case 0x56c1fe:goto L56c1fe;
case 0x56c202:c.instructions+=4;goto B56c202;
case 0x56c204:c.instructions+=3;goto B56c204;
case 0x56c20b:c.instructions+=2;goto B56c20b;
case 0x56c20e:c.instructions+=1;goto B56c20e;
case 0x56c210:goto L56c210;
case 0x56c212:c.instructions+=13;goto B56c212;
case 0x56c217:c.instructions+=12;goto B56c217;
case 0x56c21d:c.instructions+=11;goto B56c21d;
case 0x56c21e:c.instructions+=10;goto B56c21e;
case 0x56c225:c.instructions+=9;goto B56c225;
case 0x56c226:c.instructions+=8;goto B56c226;
case 0x56c227:c.instructions+=7;goto B56c227;
case 0x56c228:c.instructions+=6;goto B56c228;
case 0x56c229:c.instructions+=5;goto B56c229;
case 0x56c22d:c.instructions+=4;goto B56c22d;
case 0x56c22f:c.instructions+=3;goto B56c22f;
case 0x56c230:c.instructions+=2;goto B56c230;
case 0x56c234:c.instructions+=1;goto B56c234;
case 0x56c239:goto L56c239;
case 0x56c23b:c.instructions+=21;goto B56c23b;
case 0x56c241:c.instructions+=20;goto B56c241;
case 0x56c247:c.instructions+=19;goto B56c247;
case 0x56c24d:c.instructions+=18;goto B56c24d;
case 0x56c253:c.instructions+=17;goto B56c253;
case 0x56c259:c.instructions+=16;goto B56c259;
case 0x56c25c:c.instructions+=15;goto B56c25c;
case 0x56c262:c.instructions+=14;goto B56c262;
case 0x56c268:c.instructions+=13;goto B56c268;
case 0x56c26e:c.instructions+=12;goto B56c26e;
case 0x56c273:c.instructions+=11;goto B56c273;
case 0x56c278:c.instructions+=10;goto B56c278;
case 0x56c27b:c.instructions+=9;goto B56c27b;
case 0x56c27e:c.instructions+=8;goto B56c27e;
case 0x56c280:c.instructions+=7;goto B56c280;
case 0x56c284:c.instructions+=6;goto B56c284;
case 0x56c28a:c.instructions+=5;goto B56c28a;
case 0x56c28d:c.instructions+=4;goto B56c28d;
case 0x56c293:c.instructions+=3;goto B56c293;
case 0x56c29d:c.instructions+=2;goto B56c29d;
case 0x56c2a7:c.instructions+=1;goto B56c2a7;
case 0x56c2ac:goto L56c2ac;
case 0x56c2b1:goto L56c2b1;
case 0x56c2b3:c.instructions+=1;goto B56c2b3;
case 0x56c2b8:goto L56c2b8;
case 0x56c2bb:c.instructions+=2;goto B56c2bb;
case 0x56c2bd:c.instructions+=1;goto B56c2bd;
case 0x56c2bf:goto L56c2bf;
case 0x56c2c2:c.instructions+=1;goto B56c2c2;
case 0x56c2c4:goto L56c2c4;
case 0x56c2c6:goto L56c2c6;
case 0x56c2c9:c.instructions+=1;goto B56c2c9;
case 0x56c2cb:goto L56c2cb;
case 0x56c2d1:c.instructions+=2;goto B56c2d1;
case 0x56c2d2:c.instructions+=1;goto B56c2d2;
case 0x56c2d7:goto L56c2d7;
case 0x56c2da:c.instructions+=1;goto B56c2da;
case 0x56c2dc:goto L56c2dc;
case 0x56c2df:c.instructions+=2;goto B56c2df;
case 0x56c2e1:c.instructions+=1;goto B56c2e1;
case 0x56c2e3:goto L56c2e3;
case 0x56c2e6:c.instructions+=1;goto B56c2e6;
case 0x56c2e8:goto L56c2e8;
case 0x56c2ea:goto L56c2ea;
case 0x56c2ed:c.instructions+=1;goto B56c2ed;
case 0x56c2ef:goto L56c2ef;
case 0x56c2f5:c.instructions+=2;goto B56c2f5;
case 0x56c2f6:c.instructions+=1;goto B56c2f6;
case 0x56c2fb:goto L56c2fb;
case 0x56c2fe:c.instructions+=1;goto B56c2fe;
case 0x56c300:goto L56c300;
case 0x56c306:c.instructions+=2;goto B56c306;
case 0x56c307:c.instructions+=1;goto B56c307;
case 0x56c30c:goto L56c30c;
case 0x56c312:c.instructions+=2;goto B56c312;
case 0x56c313:c.instructions+=1;goto B56c313;
case 0x56c318:goto L56c318;
case 0x56c31b:goto L56c31b;
case 0x56c321:c.instructions+=4;goto B56c321;
case 0x56c323:c.instructions+=3;goto B56c323;
case 0x56c326:c.instructions+=2;goto B56c326;
case 0x56c32b:c.instructions+=1;goto B56c32b;
case 0x56c32d:goto L56c32d;
case 0x56c32f:c.instructions+=3;goto B56c32f;
case 0x56c330:c.instructions+=2;goto B56c330;
case 0x56c331:c.instructions+=1;goto B56c331;
case 0x56c333:goto L56c333;
case 0x56c334:c.instructions+=3;goto B56c334;
case 0x56c339:c.instructions+=2;goto B56c339;
case 0x56c33b:c.instructions+=1;goto B56c33b;
case 0x56c33d:goto L56c33d;
case 0x56c33e:c.instructions+=2;goto B56c33e;
case 0x56c343:c.instructions+=1;goto B56c343;
case 0x56c344:goto L56c344;
case 0x56c349:goto L56c349;
case 0x56c34c:c.instructions+=2;goto B56c34c;
case 0x56c34d:c.instructions+=1;goto B56c34d;
case 0x56c352:goto L56c352;
case 0x56c355:c.instructions+=2;goto B56c355;
case 0x56c357:c.instructions+=1;goto B56c357;
case 0x56c359:goto L56c359;
case 0x56c35c:c.instructions+=3;goto B56c35c;
case 0x56c35f:c.instructions+=2;goto B56c35f;
case 0x56c362:c.instructions+=1;goto B56c362;
case 0x56c365:goto L56c365;
case 0x56c368:c.instructions+=4;goto B56c368;
case 0x56c36d:c.instructions+=3;goto B56c36d;
case 0x56c36e:c.instructions+=2;goto B56c36e;
case 0x56c375:c.instructions+=1;goto B56c375;
case 0x56c37a:goto L56c37a;
case 0x56c37e:c.instructions+=9;goto B56c37e;
case 0x56c381:c.instructions+=8;goto B56c381;
case 0x56c387:c.instructions+=7;goto B56c387;
case 0x56c388:c.instructions+=6;goto B56c388;
case 0x56c38a:c.instructions+=5;goto B56c38a;
case 0x56c38b:c.instructions+=4;goto B56c38b;
case 0x56c38c:c.instructions+=3;goto B56c38c;
case 0x56c393:c.instructions+=2;goto B56c393;
case 0x56c396:c.instructions+=1;goto B56c396;
case 0x56c3a0:goto L56c3a0;
case 0x56c3a1:c.instructions+=2;goto B56c3a1;
case 0x56c3a3:c.instructions+=1;goto B56c3a3;
case 0x56c3a8:goto L56c3a8;
case 0x56c3ad:c.instructions+=1;goto B56c3ad;
case 0x56c3af:goto L56c3af;
case 0x56c3b0:c.instructions+=1;goto B56c3b0;
case 0x56c3b5:goto L56c3b5;
case 0x56c3b8:goto L56c3b8;
case 0x56c3ba:c.instructions+=2;goto B56c3ba;
case 0x56c3bb:c.instructions+=1;goto B56c3bb;
case 0x56c3c0:goto L56c3c0;
case 0x56c3c2:c.instructions+=7;goto B56c3c2;
case 0x56c3c7:c.instructions+=6;goto B56c3c7;
case 0x56c3cd:c.instructions+=5;goto B56c3cd;
case 0x56c3ce:c.instructions+=4;goto B56c3ce;
case 0x56c3d5:c.instructions+=3;goto B56c3d5;
case 0x56c3d6:c.instructions+=2;goto B56c3d6;
case 0x56c3db:c.instructions+=1;goto B56c3db;
case 0x56c3e0:goto L56c3e0;
case 0x56c3e3:c.instructions+=4;goto B56c3e3;
case 0x56c3e7:c.instructions+=3;goto B56c3e7;
case 0x56c3e9:c.instructions+=2;goto B56c3e9;
case 0x56c3f1:c.instructions+=1;goto B56c3f1;
case 0x56c3f3:goto L56c3f3;
case 0x56c3f7:c.instructions+=3;goto B56c3f7;
case 0x56c3f8:c.instructions+=2;goto B56c3f8;
case 0x56c3fa:c.instructions+=1;goto B56c3fa;
case 0x56c3ff:goto L56c3ff;
case 0x56c403:c.instructions+=3;goto B56c403;
case 0x56c40a:c.instructions+=2;goto B56c40a;
case 0x56c40d:c.instructions+=1;goto B56c40d;
case 0x56c40e:goto L56c40e;
case 0x56c412:c.instructions+=4;goto B56c412;
case 0x56c414:c.instructions+=3;goto B56c414;
case 0x56c41b:c.instructions+=2;goto B56c41b;
case 0x56c41e:c.instructions+=1;goto B56c41e;
case 0x56c420:goto L56c420;
case 0x56c422:c.instructions+=7;goto B56c422;
case 0x56c427:c.instructions+=6;goto B56c427;
case 0x56c42d:c.instructions+=5;goto B56c42d;
case 0x56c42e:c.instructions+=4;goto B56c42e;
case 0x56c435:c.instructions+=3;goto B56c435;
case 0x56c436:c.instructions+=2;goto B56c436;
case 0x56c43b:c.instructions+=1;goto B56c43b;
case 0x56c440:goto L56c440;
case 0x56c443:c.instructions+=4;goto B56c443;
case 0x56c447:c.instructions+=3;goto B56c447;
case 0x56c449:c.instructions+=2;goto B56c449;
case 0x56c451:c.instructions+=1;goto B56c451;
case 0x56c453:goto L56c453;
case 0x56c457:c.instructions+=3;goto B56c457;
case 0x56c458:c.instructions+=2;goto B56c458;
case 0x56c45a:c.instructions+=1;goto B56c45a;
case 0x56c45f:goto L56c45f;
case 0x56c463:c.instructions+=3;goto B56c463;
case 0x56c46a:c.instructions+=2;goto B56c46a;
case 0x56c46d:c.instructions+=1;goto B56c46d;
case 0x56c46e:goto L56c46e;
case 0x56c472:c.instructions+=4;goto B56c472;
case 0x56c474:c.instructions+=3;goto B56c474;
case 0x56c47b:c.instructions+=2;goto B56c47b;
case 0x56c47e:c.instructions+=1;goto B56c47e;
case 0x56c480:goto L56c480;
case 0x56c484:c.instructions+=4;goto B56c484;
case 0x56c48a:c.instructions+=3;goto B56c48a;
case 0x56c48b:c.instructions+=2;goto B56c48b;
case 0x56c48c:c.instructions+=1;goto B56c48c;
case 0x56c491:goto L56c491;
case 0x56c494:c.instructions+=1;goto B56c494;
case 0x56c4a0:goto L56c4a0;
case 0x56c4a5:c.instructions+=1;goto B56c4a5;
case 0x56c4aa:goto L56c4aa;
case 0x56c4ac:c.instructions+=2;goto B56c4ac;
case 0x56c4b1:c.instructions+=1;goto B56c4b1;
case 0x56c4b3:goto L56c4b3;
case 0x56c4b8:goto L56c4b8;
case 0x56c4c0:goto L56c4c0;
case 0x56c4c4:c.instructions+=2;goto B56c4c4;
case 0x56c4ca:c.instructions+=1;goto B56c4ca;
case 0x56c4cc:goto L56c4cc;
case 0x56c4cf:c.instructions+=4;goto B56c4cf;
case 0x56c4d2:c.instructions+=3;goto B56c4d2;
case 0x56c4d7:c.instructions+=2;goto B56c4d7;
case 0x56c4dc:c.instructions+=1;goto B56c4dc;
case 0x56c4dd:goto L56c4dd;
case 0x56c4df:c.instructions+=1;goto B56c4df;
case 0x56c4e0:goto L56c4e0;
case 0x56c4e4:c.instructions+=2;goto B56c4e4;
case 0x56c4ea:c.instructions+=1;goto B56c4ea;
case 0x56c4ec:goto L56c4ec;
case 0x56c4f6:c.instructions+=2;goto B56c4f6;
case 0x56c4fb:c.instructions+=1;goto B56c4fb;
case 0x56c4fc:goto L56c4fc;
case 0x56c4fe:c.instructions+=1;goto B56c4fe;
case 0x56c500:goto L56c500;
case 0x56c501:c.instructions+=7;goto B56c501;
case 0x56c507:c.instructions+=6;goto B56c507;
case 0x56c508:c.instructions+=5;goto B56c508;
case 0x56c50a:c.instructions+=4;goto B56c50a;
case 0x56c50c:c.instructions+=3;goto B56c50c;
case 0x56c50d:c.instructions+=2;goto B56c50d;
case 0x56c513:c.instructions+=1;goto B56c513;
case 0x56c515:goto L56c515;
case 0x56c517:c.instructions+=1;goto B56c517;
case 0x56c519:goto L56c519;
case 0x56c51b:c.instructions+=1;goto B56c51b;
case 0x56c51d:goto L56c51d;
case 0x56c522:c.instructions+=2;goto B56c522;
case 0x56c524:c.instructions+=1;goto B56c524;
case 0x56c526:goto L56c526;
case 0x56c52b:c.instructions+=2;goto B56c52b;
case 0x56c52d:c.instructions+=1;goto B56c52d;
case 0x56c52f:goto L56c52f;
case 0x56c531:c.instructions+=1;goto B56c531;
case 0x56c533:goto L56c533;
case 0x56c538:c.instructions+=2;goto B56c538;
case 0x56c53a:c.instructions+=1;goto B56c53a;
case 0x56c53c:goto L56c53c;
case 0x56c53e:c.instructions+=1;goto B56c53e;
case 0x56c540:goto L56c540;
case 0x56c545:c.instructions+=2;goto B56c545;
case 0x56c547:c.instructions+=1;goto B56c547;
case 0x56c549:goto L56c549;
case 0x56c54e:c.instructions+=2;goto B56c54e;
case 0x56c550:c.instructions+=1;goto B56c550;
case 0x56c552:goto L56c552;
case 0x56c554:c.instructions+=1;goto B56c554;
case 0x56c556:goto L56c556;
case 0x56c55b:c.instructions+=2;goto B56c55b;
case 0x56c55d:c.instructions+=1;goto B56c55d;
case 0x56c55f:goto L56c55f;
case 0x56c564:c.instructions+=2;goto B56c564;
case 0x56c566:c.instructions+=1;goto B56c566;
case 0x56c568:goto L56c568;
case 0x56c56a:c.instructions+=1;goto B56c56a;
case 0x56c56c:goto L56c56c;
case 0x56c572:c.instructions+=5;goto B56c572;
case 0x56c574:c.instructions+=4;goto B56c574;
case 0x56c577:c.instructions+=3;goto B56c577;
case 0x56c579:c.instructions+=2;goto B56c579;
case 0x56c57b:c.instructions+=1;goto B56c57b;
case 0x56c57d:goto L56c57d;
case 0x56c583:c.instructions+=3;goto B56c583;
case 0x56c586:c.instructions+=2;goto B56c586;
case 0x56c58b:c.instructions+=1;goto B56c58b;
case 0x56c590:goto L56c590;
case 0x56c593:c.instructions+=1;goto B56c593;
case 0x56c595:goto L56c595;
case 0x56c596:goto L56c596;
case 0x56c598:c.instructions+=1;goto B56c598;
case 0x56c59a:goto L56c59a;
case 0x56c59b:goto L56c59b;
case 0x56c59e:c.instructions+=1;goto B56c59e;
case 0x56c5a0:goto L56c5a0;
case 0x56c5a1:goto L56c5a1;
case 0x56c5a7:c.instructions+=2;goto B56c5a7;
case 0x56c5a8:c.instructions+=1;goto B56c5a8;
case 0x56c5aa:goto L56c5aa;
case 0x56c5ac:c.instructions+=1;goto B56c5ac;
case 0x56c5ae:goto L56c5ae;
case 0x56c5b0:c.instructions+=1;goto B56c5b0;
case 0x56c5b2:goto L56c5b2;
case 0x56c5b7:c.instructions+=3;goto B56c5b7;
case 0x56c5bd:c.instructions+=2;goto B56c5bd;
case 0x56c5bf:c.instructions+=1;goto B56c5bf;
case 0x56c5c1:goto L56c5c1;
case 0x56c5c6:goto L56c5c6;
case 0x56c5c9:c.instructions+=5;goto B56c5c9;
case 0x56c5cb:c.instructions+=4;goto B56c5cb;
case 0x56c5d0:c.instructions+=3;goto B56c5d0;
case 0x56c5d1:c.instructions+=2;goto B56c5d1;
case 0x56c5d3:c.instructions+=1;goto B56c5d3;
case 0x56c5d8:goto L56c5d8;
case 0x56c5db:c.instructions+=5;goto B56c5db;
case 0x56c5dc:c.instructions+=4;goto B56c5dc;
case 0x56c5dd:c.instructions+=3;goto B56c5dd;
case 0x56c5e2:c.instructions+=2;goto B56c5e2;
case 0x56c5e3:c.instructions+=1;goto B56c5e3;
case 0x56c5f0:goto L56c5f0;
case 0x56c5f5:c.instructions+=2;goto B56c5f5;
case 0x56c5f6:c.instructions+=1;goto B56c5f6;
case 0x56c5fb:goto L56c5fb;
case 0x56c5fc:c.instructions+=1;goto B56c5fc;
case 0x56c600:goto L56c600;
case 0x56c602:c.instructions+=3;goto B56c602;
case 0x56c604:c.instructions+=2;goto B56c604;
case 0x56c607:c.instructions+=1;goto B56c607;
case 0x56c609:goto L56c609;
case 0x56c60c:c.instructions+=11;goto B56c60c;
case 0x56c60d:c.instructions+=10;goto B56c60d;
case 0x56c613:c.instructions+=9;goto B56c613;
case 0x56c616:c.instructions+=8;goto B56c616;
case 0x56c619:c.instructions+=7;goto B56c619;
case 0x56c61b:c.instructions+=6;goto B56c61b;
case 0x56c61e:c.instructions+=5;goto B56c61e;
case 0x56c624:c.instructions+=4;goto B56c624;
case 0x56c626:c.instructions+=3;goto B56c626;
case 0x56c628:c.instructions+=2;goto B56c628;
case 0x56c62b:c.instructions+=1;goto B56c62b;
case 0x56c62d:goto L56c62d;
case 0x56c630:c.instructions+=6;goto B56c630;
case 0x56c632:c.instructions+=5;goto B56c632;
case 0x56c634:c.instructions+=4;goto B56c634;
case 0x56c637:c.instructions+=3;goto B56c637;
case 0x56c63e:c.instructions+=2;goto B56c63e;
case 0x56c644:c.instructions+=1;goto B56c644;
case 0x56c646:goto L56c646;
case 0x56c648:c.instructions+=1;goto B56c648;
case 0x56c64b:goto L56c64b;
case 0x56c64e:c.instructions+=5;goto B56c64e;
case 0x56c650:c.instructions+=4;goto B56c650;
case 0x56c652:c.instructions+=3;goto B56c652;
case 0x56c654:c.instructions+=2;goto B56c654;
case 0x56c65a:c.instructions+=1;goto B56c65a;
case 0x56c65c:goto L56c65c;
case 0x56c65f:c.instructions+=6;goto B56c65f;
case 0x56c660:c.instructions+=5;goto B56c660;
case 0x56c662:c.instructions+=4;goto B56c662;
case 0x56c664:c.instructions+=3;goto B56c664;
case 0x56c666:c.instructions+=2;goto B56c666;
case 0x56c669:c.instructions+=1;goto B56c669;
case 0x56c66b:goto L56c66b;
case 0x56c66d:c.instructions+=1;goto B56c66d;
case 0x56c66e:goto L56c66e;
case 0x56c670:goto L56c670;
case 0x56c680:goto L56c680;
case 0x56c681:c.instructions+=7;goto B56c681;
case 0x56c682:c.instructions+=6;goto B56c682;
case 0x56c686:c.instructions+=5;goto B56c686;
case 0x56c68b:c.instructions+=4;goto B56c68b;
case 0x56c68d:c.instructions+=3;goto B56c68d;
case 0x56c68f:c.instructions+=2;goto B56c68f;
case 0x56c691:c.instructions+=1;goto B56c691;
case 0x56c696:goto L56c696;
case 0x56c699:c.instructions+=5;goto B56c699;
case 0x56c69d:c.instructions+=4;goto B56c69d;
case 0x56c69e:c.instructions+=3;goto B56c69e;
case 0x56c6a0:c.instructions+=2;goto B56c6a0;
case 0x56c6a4:c.instructions+=1;goto B56c6a4;
case 0x56c6a9:goto L56c6a9;
case 0x56c6ae:c.instructions+=8;goto B56c6ae;
case 0x56c6b0:c.instructions+=7;goto B56c6b0;
case 0x56c6b2:c.instructions+=6;goto B56c6b2;
case 0x56c6b4:c.instructions+=5;goto B56c6b4;
case 0x56c6b7:c.instructions+=4;goto B56c6b7;
case 0x56c6b8:c.instructions+=3;goto B56c6b8;
case 0x56c6ba:c.instructions+=2;goto B56c6ba;
case 0x56c6bd:c.instructions+=1;goto B56c6bd;
case 0x56c6c2:goto L56c6c2;
case 0x56c6c5:c.instructions+=3;goto B56c6c5;
case 0x56c6c6:c.instructions+=2;goto B56c6c6;
case 0x56c6c8:c.instructions+=1;goto B56c6c8;
case 0x56c6cd:goto L56c6cd;
case 0x56c6cf:c.instructions+=6;goto B56c6cf;
case 0x56c6d1:c.instructions+=5;goto B56c6d1;
case 0x56c6d3:c.instructions+=4;goto B56c6d3;
case 0x56c6d6:c.instructions+=3;goto B56c6d6;
case 0x56c6d7:c.instructions+=2;goto B56c6d7;
case 0x56c6d9:c.instructions+=1;goto B56c6d9;
case 0x56c6de:goto L56c6de;
case 0x56c6e1:c.instructions+=3;goto B56c6e1;
case 0x56c6e2:c.instructions+=2;goto B56c6e2;
case 0x56c6e4:c.instructions+=1;goto B56c6e4;
case 0x56c6e9:goto L56c6e9;
case 0x56c6ec:c.instructions+=3;goto B56c6ec;
case 0x56c6ed:c.instructions+=2;goto B56c6ed;
case 0x56c6ef:c.instructions+=1;goto B56c6ef;
case 0x56c6f4:goto L56c6f4;
case 0x56c6f7:c.instructions+=3;goto B56c6f7;
case 0x56c6f8:c.instructions+=2;goto B56c6f8;
case 0x56c6fa:c.instructions+=1;goto B56c6fa;
case 0x56c6ff:goto L56c6ff;
case 0x56c701:c.instructions+=6;goto B56c701;
case 0x56c703:c.instructions+=5;goto B56c703;
case 0x56c705:c.instructions+=4;goto B56c705;
case 0x56c708:c.instructions+=3;goto B56c708;
case 0x56c709:c.instructions+=2;goto B56c709;
case 0x56c70b:c.instructions+=1;goto B56c70b;
case 0x56c710:goto L56c710;
case 0x56c713:c.instructions+=3;goto B56c713;
case 0x56c714:c.instructions+=2;goto B56c714;
case 0x56c716:c.instructions+=1;goto B56c716;
case 0x56c71b:goto L56c71b;
case 0x56c71e:c.instructions+=3;goto B56c71e;
case 0x56c71f:c.instructions+=2;goto B56c71f;
case 0x56c721:c.instructions+=1;goto B56c721;
case 0x56c726:goto L56c726;
case 0x56c729:c.instructions+=3;goto B56c729;
case 0x56c72a:c.instructions+=2;goto B56c72a;
case 0x56c72c:c.instructions+=1;goto B56c72c;
case 0x56c731:goto L56c731;
case 0x56c733:c.instructions+=1;goto B56c733;
case 0x56c738:goto L56c738;
case 0x56c739:c.instructions+=2;goto B56c739;
case 0x56c73a:c.instructions+=1;goto B56c73a;
case 0x56c740:goto L56c740;
case 0x56c743:c.instructions+=15;goto B56c743;
case 0x56c746:c.instructions+=14;goto B56c746;
case 0x56c749:c.instructions+=13;goto B56c749;
case 0x56c74c:c.instructions+=12;goto B56c74c;
case 0x56c750:c.instructions+=11;goto B56c750;
case 0x56c753:c.instructions+=10;goto B56c753;
case 0x56c757:c.instructions+=9;goto B56c757;
case 0x56c75d:c.instructions+=8;goto B56c75d;
case 0x56c760:c.instructions+=7;goto B56c760;
case 0x56c762:c.instructions+=6;goto B56c762;
case 0x56c765:c.instructions+=5;goto B56c765;
case 0x56c76b:c.instructions+=4;goto B56c76b;
case 0x56c76e:c.instructions+=3;goto B56c76e;
case 0x56c770:c.instructions+=2;goto B56c770;
case 0x56c773:c.instructions+=1;goto B56c773;
case 0x56c775:goto L56c775;
case 0x56c779:c.instructions+=4;goto B56c779;
case 0x56c77b:c.instructions+=3;goto B56c77b;
case 0x56c77d:c.instructions+=2;goto B56c77d;
case 0x56c780:c.instructions+=1;goto B56c780;
case 0x56c782:goto L56c782;
case 0x56c784:goto L56c784;
case 0x56c78a:c.instructions+=3;goto B56c78a;
case 0x56c78c:c.instructions+=2;goto B56c78c;
case 0x56c78f:c.instructions+=1;goto B56c78f;
case 0x56c791:goto L56c791;
case 0x56c794:c.instructions+=5;goto B56c794;
case 0x56c798:c.instructions+=4;goto B56c798;
case 0x56c79a:c.instructions+=3;goto B56c79a;
case 0x56c79c:c.instructions+=2;goto B56c79c;
case 0x56c79f:c.instructions+=1;goto B56c79f;
case 0x56c7a1:goto L56c7a1;
case 0x56c7a3:c.instructions+=1;goto B56c7a3;
case 0x56c7a7:goto L56c7a7;
case 0x56c7ab:c.instructions+=6;goto B56c7ab;
case 0x56c7af:c.instructions+=5;goto B56c7af;
case 0x56c7b1:c.instructions+=4;goto B56c7b1;
case 0x56c7b3:c.instructions+=3;goto B56c7b3;
case 0x56c7b5:c.instructions+=2;goto B56c7b5;
case 0x56c7b8:c.instructions+=1;goto B56c7b8;
case 0x56c7ba:goto L56c7ba;
case 0x56c7bc:c.instructions+=1;goto B56c7bc;
case 0x56c7be:goto L56c7be;
case 0x56c7c1:c.instructions+=3;goto B56c7c1;
case 0x56c7c4:c.instructions+=2;goto B56c7c4;
case 0x56c7c7:c.instructions+=1;goto B56c7c7;
case 0x56c7d0:goto L56c7d0;
case 0x56c7d4:c.instructions+=4;goto B56c7d4;
case 0x56c7d6:c.instructions+=3;goto B56c7d6;
case 0x56c7d7:c.instructions+=2;goto B56c7d7;
case 0x56c7d9:c.instructions+=1;goto B56c7d9;
case 0x56c7df:goto L56c7df;
case 0x56c7e0:c.instructions+=4;goto B56c7e0;
case 0x56c7e1:c.instructions+=3;goto B56c7e1;
case 0x56c7eb:c.instructions+=2;goto B56c7eb;
case 0x56c7ee:c.instructions+=1;goto B56c7ee;
case 0x56c7f3:goto L56c7f3;
case 0x56c7f6:c.instructions+=2;goto B56c7f6;
case 0x56c7f8:c.instructions+=1;goto B56c7f8;
case 0x56c7fa:goto L56c7fa;
case 0x56c7fd:c.instructions+=2;goto B56c7fd;
case 0x56c7ff:c.instructions+=1;goto B56c7ff;
case 0x56c801:goto L56c801;
case 0x56c804:c.instructions+=2;goto B56c804;
case 0x56c806:c.instructions+=1;goto B56c806;
case 0x56c808:goto L56c808;
case 0x56c80b:c.instructions+=1;goto B56c80b;
case 0x56c810:goto L56c810;
case 0x56c814:c.instructions+=3;goto B56c814;
case 0x56c818:c.instructions+=2;goto B56c818;
case 0x56c81e:c.instructions+=1;goto B56c81e;
case 0x56c824:goto L56c824;
case 0x56c827:c.instructions+=2;goto B56c827;
case 0x56c829:c.instructions+=1;goto B56c829;
case 0x56c82b:goto L56c82b;
case 0x56c82e:c.instructions+=2;goto B56c82e;
case 0x56c830:c.instructions+=1;goto B56c830;
case 0x56c832:goto L56c832;
case 0x56c835:c.instructions+=2;goto B56c835;
case 0x56c837:c.instructions+=1;goto B56c837;
case 0x56c839:goto L56c839;
case 0x56c83c:c.instructions+=1;goto B56c83c;
case 0x56c841:goto L56c841;
case 0x56c845:c.instructions+=3;goto B56c845;
case 0x56c849:c.instructions+=2;goto B56c849;
case 0x56c84f:c.instructions+=1;goto B56c84f;
case 0x56c855:goto L56c855;
case 0x56c857:c.instructions+=2;goto B56c857;
case 0x56c859:c.instructions+=1;goto B56c859;
case 0x56c85b:goto L56c85b;
case 0x56c85e:c.instructions+=2;goto B56c85e;
case 0x56c860:c.instructions+=1;goto B56c860;
case 0x56c862:goto L56c862;
case 0x56c865:c.instructions+=2;goto B56c865;
case 0x56c867:c.instructions+=1;goto B56c867;
case 0x56c869:goto L56c869;
case 0x56c86c:c.instructions+=1;goto B56c86c;
case 0x56c871:goto L56c871;
case 0x56c875:c.instructions+=3;goto B56c875;
case 0x56c879:c.instructions+=2;goto B56c879;
case 0x56c87f:c.instructions+=1;goto B56c87f;
case 0x56c885:goto L56c885;
case 0x56c888:c.instructions+=2;goto B56c888;
case 0x56c889:c.instructions+=1;goto B56c889;
case 0x56c88f:goto L56c88f;
case 0x56c890:c.instructions+=1;goto B56c890;
case 0x56c891:goto L56c891;
case 0x56c897:c.instructions+=2;goto B56c897;
case 0x56c898:c.instructions+=1;goto B56c898;
case 0x56c8a0:goto L56c8a0;
case 0x56c8a1:c.instructions+=8;goto B56c8a1;
case 0x56c8a5:c.instructions+=7;goto B56c8a5;
case 0x56c8a6:c.instructions+=6;goto B56c8a6;
case 0x56c8a7:c.instructions+=5;goto B56c8a7;
case 0x56c8ac:c.instructions+=4;goto B56c8ac;
case 0x56c8ae:c.instructions+=3;goto B56c8ae;
case 0x56c8b0:c.instructions+=2;goto B56c8b0;
case 0x56c8b2:c.instructions+=1;goto B56c8b2;
case 0x56c8b7:goto L56c8b7;
case 0x56c8bd:c.instructions+=3;goto B56c8bd;
case 0x56c8be:c.instructions+=2;goto B56c8be;
case 0x56c8c0:c.instructions+=1;goto B56c8c0;
case 0x56c8c5:goto L56c8c5;
case 0x56c8c7:goto L56c8c7;
case 0x56c8ca:c.instructions+=2;goto B56c8ca;
case 0x56c8cc:c.instructions+=1;goto B56c8cc;
case 0x56c8ce:goto L56c8ce;
case 0x56c8d1:c.instructions+=2;goto B56c8d1;
case 0x56c8d3:c.instructions+=1;goto B56c8d3;
case 0x56c8d5:goto L56c8d5;
case 0x56c8d6:c.instructions+=1;goto B56c8d6;
case 0x56c8db:goto L56c8db;
case 0x56c8dc:c.instructions+=2;goto B56c8dc;
case 0x56c8df:c.instructions+=1;goto B56c8df;
case 0x56c8e1:goto L56c8e1;
case 0x56c8e3:c.instructions+=1;goto B56c8e3;
case 0x56c8e8:goto L56c8e8;
case 0x56c8e9:c.instructions+=3;goto B56c8e9;
case 0x56c8ea:c.instructions+=2;goto B56c8ea;
case 0x56c8eb:c.instructions+=1;goto B56c8eb;
case 0x56c8f0:goto L56c8f0;
case 0x56c8f2:c.instructions+=23;goto B56c8f2;
case 0x56c8f4:c.instructions+=22;goto B56c8f4;
case 0x56c8f7:c.instructions+=21;goto B56c8f7;
case 0x56c8fa:c.instructions+=20;goto B56c8fa;
case 0x56c8ff:c.instructions+=19;goto B56c8ff;
case 0x56c902:c.instructions+=18;goto B56c902;
case 0x56c904:c.instructions+=17;goto B56c904;
case 0x56c90b:c.instructions+=16;goto B56c90b;
case 0x56c90e:c.instructions+=15;goto B56c90e;
case 0x56c911:c.instructions+=14;goto B56c911;
case 0x56c914:c.instructions+=13;goto B56c914;
case 0x56c917:c.instructions+=12;goto B56c917;
case 0x56c91e:c.instructions+=11;goto B56c91e;
case 0x56c921:c.instructions+=10;goto B56c921;
case 0x56c924:c.instructions+=9;goto B56c924;
case 0x56c927:c.instructions+=8;goto B56c927;
case 0x56c92a:c.instructions+=7;goto B56c92a;
case 0x56c92d:c.instructions+=6;goto B56c92d;
case 0x56c930:c.instructions+=5;goto B56c930;
case 0x56c933:c.instructions+=4;goto B56c933;
case 0x56c936:c.instructions+=3;goto B56c936;
case 0x56c939:c.instructions+=2;goto B56c939;
case 0x56c93c:c.instructions+=1;goto B56c93c;
case 0x56c940:goto L56c940;
case 0x56c943:c.instructions+=9;goto B56c943;
case 0x56c944:c.instructions+=8;goto B56c944;
case 0x56c945:c.instructions+=7;goto B56c945;
case 0x56c947:c.instructions+=6;goto B56c947;
case 0x56c94a:c.instructions+=5;goto B56c94a;
case 0x56c94d:c.instructions+=4;goto B56c94d;
case 0x56c953:c.instructions+=3;goto B56c953;
case 0x56c955:c.instructions+=2;goto B56c955;
case 0x56c95d:c.instructions+=1;goto B56c95d;
case 0x56c95f:goto L56c95f;
case 0x56c965:c.instructions+=4;goto B56c965;
case 0x56c966:c.instructions+=3;goto B56c966;
case 0x56c967:c.instructions+=2;goto B56c967;
case 0x56c96a:c.instructions+=1;goto B56c96a;
case 0x56c96d:goto L56c96d;
case 0x56c970:c.instructions+=5;goto B56c970;
case 0x56c973:c.instructions+=4;goto B56c973;
case 0x56c976:c.instructions+=3;goto B56c976;
case 0x56c978:c.instructions+=2;goto B56c978;
case 0x56c97b:c.instructions+=1;goto B56c97b;
case 0x56c981:goto L56c981;
case 0x56c982:c.instructions+=2;goto B56c982;
case 0x56c985:c.instructions+=1;goto B56c985;
case 0x56c98a:goto L56c98a;
case 0x56c98d:c.instructions+=7;goto B56c98d;
case 0x56c993:c.instructions+=6;goto B56c993;
case 0x56c996:c.instructions+=5;goto B56c996;
case 0x56c998:c.instructions+=4;goto B56c998;
case 0x56c99c:c.instructions+=3;goto B56c99c;
case 0x56c99f:c.instructions+=2;goto B56c99f;
case 0x56c9a3:c.instructions+=1;goto B56c9a3;
case 0x56c9a8:goto L56c9a8;
case 0x56c9ab:c.instructions+=7;goto B56c9ab;
case 0x56c9b1:c.instructions+=6;goto B56c9b1;
case 0x56c9b4:c.instructions+=5;goto B56c9b4;
case 0x56c9b6:c.instructions+=4;goto B56c9b6;
case 0x56c9bc:c.instructions+=3;goto B56c9bc;
case 0x56c9be:c.instructions+=2;goto B56c9be;
case 0x56c9c1:c.instructions+=1;goto B56c9c1;
case 0x56c9c3:goto L56c9c3;
case 0x56c9c6:c.instructions+=1;goto B56c9c6;
case 0x56c9cb:goto L56c9cb;
case 0x56c9d1:c.instructions+=4;goto B56c9d1;
case 0x56c9d7:c.instructions+=3;goto B56c9d7;
case 0x56c9d9:c.instructions+=2;goto B56c9d9;
case 0x56c9dc:c.instructions+=1;goto B56c9dc;
case 0x56c9de:goto L56c9de;
case 0x56c9e0:c.instructions+=1;goto B56c9e0;
case 0x56c9e2:goto L56c9e2;
case 0x56c9e4:goto L56c9e4;
case 0x56c9e6:c.instructions+=4;goto B56c9e6;
case 0x56c9e8:c.instructions+=3;goto B56c9e8;
case 0x56c9eb:c.instructions+=2;goto B56c9eb;
case 0x56c9ed:c.instructions+=1;goto B56c9ed;
case 0x56c9ef:goto L56c9ef;
case 0x56c9f1:c.instructions+=1;goto B56c9f1;
case 0x56c9f3:goto L56c9f3;
case 0x56c9fa:c.instructions+=1;goto B56c9fa;
case 0x56c9fc:goto L56c9fc;
case 0x56ca03:goto L56ca03;
case 0x56ca06:c.instructions+=3;goto B56ca06;
case 0x56ca08:c.instructions+=2;goto B56ca08;
case 0x56ca09:c.instructions+=1;goto B56ca09;
case 0x56ca0b:goto L56ca0b;
case 0x56ca10:c.instructions+=1;goto B56ca10;
case 0x56ca12:goto L56ca12;
case 0x56ca18:c.instructions+=5;goto B56ca18;
case 0x56ca1e:c.instructions+=4;goto B56ca1e;
case 0x56ca22:c.instructions+=3;goto B56ca22;
case 0x56ca24:c.instructions+=2;goto B56ca24;
case 0x56ca27:c.instructions+=1;goto B56ca27;
case 0x56ca29:goto L56ca29;
case 0x56ca2d:c.instructions+=5;goto B56ca2d;
case 0x56ca2f:c.instructions+=4;goto B56ca2f;
case 0x56ca31:c.instructions+=3;goto B56ca31;
case 0x56ca33:c.instructions+=2;goto B56ca33;
case 0x56ca36:c.instructions+=1;goto B56ca36;
case 0x56ca38:goto L56ca38;
case 0x56ca3c:c.instructions+=5;goto B56ca3c;
case 0x56ca42:c.instructions+=4;goto B56ca42;
case 0x56ca44:c.instructions+=3;goto B56ca44;
case 0x56ca46:c.instructions+=2;goto B56ca46;
case 0x56ca4a:c.instructions+=1;goto B56ca4a;
case 0x56ca4e:goto L56ca4e;
case 0x56ca50:goto L56ca50;
case 0x56ca53:c.instructions+=7;goto B56ca53;
case 0x56ca56:c.instructions+=6;goto B56ca56;
case 0x56ca59:c.instructions+=5;goto B56ca59;
case 0x56ca5d:c.instructions+=4;goto B56ca5d;
case 0x56ca5f:c.instructions+=3;goto B56ca5f;
case 0x56ca61:c.instructions+=2;goto B56ca61;
case 0x56ca64:c.instructions+=1;goto B56ca64;
case 0x56ca66:goto L56ca66;
case 0x56ca68:c.instructions+=1;goto B56ca68;
case 0x56ca6c:goto L56ca6c;
case 0x56ca6f:c.instructions+=5;goto B56ca6f;
case 0x56ca70:c.instructions+=4;goto B56ca70;
case 0x56ca74:c.instructions+=3;goto B56ca74;
case 0x56ca75:c.instructions+=2;goto B56ca75;
case 0x56ca78:c.instructions+=1;goto B56ca78;
case 0x56ca80:goto L56ca80;
case 0x56ca83:c.instructions+=11;goto B56ca83;
case 0x56ca89:c.instructions+=10;goto B56ca89;
case 0x56ca8a:c.instructions+=9;goto B56ca8a;
case 0x56ca8c:c.instructions+=8;goto B56ca8c;
case 0x56ca8f:c.instructions+=7;goto B56ca8f;
case 0x56ca90:c.instructions+=6;goto B56ca90;
case 0x56ca96:c.instructions+=5;goto B56ca96;
case 0x56ca98:c.instructions+=4;goto B56ca98;
case 0x56ca9d:c.instructions+=3;goto B56ca9d;
case 0x56ca9f:c.instructions+=2;goto B56ca9f;
case 0x56caa3:c.instructions+=1;goto B56caa3;
case 0x56caa5:goto L56caa5;
case 0x56caa7:c.instructions+=1;goto B56caa7;
case 0x56caab:goto L56caab;
case 0x56cab1:c.instructions+=1;goto B56cab1;
case 0x56cab3:goto L56cab3;
case 0x56cab4:c.instructions+=1;goto B56cab4;
case 0x56cab8:goto L56cab8;
case 0x56cabe:c.instructions+=1;goto B56cabe;
case 0x56cac0:goto L56cac0;
case 0x56cac1:c.instructions+=1;goto B56cac1;
case 0x56cac5:goto L56cac5;
case 0x56cacb:c.instructions+=1;goto B56cacb;
case 0x56cacd:goto L56cacd;
case 0x56cace:c.instructions+=1;goto B56cace;
case 0x56cad2:goto L56cad2;
case 0x56cad4:c.instructions+=1;goto B56cad4;
case 0x56cad6:goto L56cad6;
case 0x56cad9:c.instructions+=3;goto B56cad9;
case 0x56cadb:c.instructions+=2;goto B56cadb;
case 0x56cade:c.instructions+=1;goto B56cade;
case 0x56cae3:goto L56cae3;
case 0x56cae9:c.instructions+=10;goto B56cae9;
case 0x56caec:c.instructions+=9;goto B56caec;
case 0x56caf2:c.instructions+=8;goto B56caf2;
case 0x56caf4:c.instructions+=7;goto B56caf4;
case 0x56caf8:c.instructions+=6;goto B56caf8;
case 0x56cafa:c.instructions+=5;goto B56cafa;
case 0x56cafe:c.instructions+=4;goto B56cafe;
case 0x56cb04:c.instructions+=3;goto B56cb04;
case 0x56cb06:c.instructions+=2;goto B56cb06;
case 0x56cb09:c.instructions+=1;goto B56cb09;
case 0x56cb0b:goto L56cb0b;
case 0x56cb0f:c.instructions+=5;goto B56cb0f;
case 0x56cb15:c.instructions+=4;goto B56cb15;
case 0x56cb19:c.instructions+=3;goto B56cb19;
case 0x56cb1b:c.instructions+=2;goto B56cb1b;
case 0x56cb1e:c.instructions+=1;goto B56cb1e;
case 0x56cb20:goto L56cb20;
case 0x56cb22:c.instructions+=1;goto B56cb22;
case 0x56cb28:goto L56cb28;
case 0x56cb2c:c.instructions+=1;goto B56cb2c;
case 0x56cb2e:goto L56cb2e;
case 0x56cb2f:c.instructions+=3;goto B56cb2f;
case 0x56cb30:c.instructions+=2;goto B56cb30;
case 0x56cb33:c.instructions+=1;goto B56cb33;
case 0x56cb36:goto L56cb36;
case 0x56cb3c:c.instructions+=6;goto B56cb3c;
case 0x56cb3d:c.instructions+=5;goto B56cb3d;
case 0x56cb41:c.instructions+=4;goto B56cb41;
case 0x56cb42:c.instructions+=3;goto B56cb42;
case 0x56cb44:c.instructions+=2;goto B56cb44;
case 0x56cb47:c.instructions+=1;goto B56cb47;
case 0x56cb50:goto L56cb50;
case 0x56cb51:c.instructions+=13;goto B56cb51;
case 0x56cb52:c.instructions+=12;goto B56cb52;
case 0x56cb53:c.instructions+=11;goto B56cb53;
case 0x56cb55:c.instructions+=10;goto B56cb55;
case 0x56cb58:c.instructions+=9;goto B56cb58;
case 0x56cb5a:c.instructions+=8;goto B56cb5a;
case 0x56cb5c:c.instructions+=7;goto B56cb5c;
case 0x56cb5e:c.instructions+=6;goto B56cb5e;
case 0x56cb61:c.instructions+=5;goto B56cb61;
case 0x56cb62:c.instructions+=4;goto B56cb62;
case 0x56cb64:c.instructions+=3;goto B56cb64;
case 0x56cb67:c.instructions+=2;goto B56cb67;
case 0x56cb6a:c.instructions+=1;goto B56cb6a;
case 0x56cb6c:goto L56cb6c;
case 0x56cb6f:c.instructions+=2;goto B56cb6f;
case 0x56cb71:c.instructions+=1;goto B56cb71;
case 0x56cb73:goto L56cb73;
case 0x56cb78:c.instructions+=1;goto B56cb78;
case 0x56cb7a:goto L56cb7a;
case 0x56cb7d:c.instructions+=7;goto B56cb7d;
case 0x56cb83:c.instructions+=6;goto B56cb83;
case 0x56cb89:c.instructions+=5;goto B56cb89;
case 0x56cb90:c.instructions+=4;goto B56cb90;
case 0x56cb92:c.instructions+=3;goto B56cb92;
case 0x56cb94:c.instructions+=2;goto B56cb94;
case 0x56cb97:c.instructions+=1;goto B56cb97;
case 0x56cb99:goto L56cb99;
case 0x56cb9d:c.instructions+=4;goto B56cb9d;
case 0x56cba0:c.instructions+=3;goto B56cba0;
case 0x56cba2:c.instructions+=2;goto B56cba2;
case 0x56cba8:c.instructions+=1;goto B56cba8;
case 0x56cbaa:goto L56cbaa;
case 0x56cbaf:c.instructions+=1;goto B56cbaf;
case 0x56cbb1:goto L56cbb1;
case 0x56cbb2:c.instructions+=11;goto B56cbb2;
case 0x56cbb5:c.instructions+=10;goto B56cbb5;
case 0x56cbb7:c.instructions+=9;goto B56cbb7;
case 0x56cbb9:c.instructions+=8;goto B56cbb9;
case 0x56cbbd:c.instructions+=7;goto B56cbbd;
case 0x56cbc1:c.instructions+=6;goto B56cbc1;
case 0x56cbc2:c.instructions+=5;goto B56cbc2;
case 0x56cbc8:c.instructions+=4;goto B56cbc8;
case 0x56cbce:c.instructions+=3;goto B56cbce;
case 0x56cbd0:c.instructions+=2;goto B56cbd0;
case 0x56cbd3:c.instructions+=1;goto B56cbd3;
case 0x56cbd9:goto L56cbd9;
case 0x56cbdc:c.instructions+=2;goto B56cbdc;
case 0x56cbdf:c.instructions+=1;goto B56cbdf;
case 0x56cbe4:goto L56cbe4;
case 0x56cbe7:c.instructions+=2;goto B56cbe7;
case 0x56cbe9:c.instructions+=1;goto B56cbe9;
case 0x56cbeb:goto L56cbeb;
case 0x56cbf0:c.instructions+=1;goto B56cbf0;
case 0x56cbf2:goto L56cbf2;
case 0x56cbf5:c.instructions+=10;goto B56cbf5;
case 0x56cbf9:c.instructions+=9;goto B56cbf9;
case 0x56cbff:c.instructions+=8;goto B56cbff;
case 0x56cc01:c.instructions+=7;goto B56cc01;
case 0x56cc05:c.instructions+=6;goto B56cc05;
case 0x56cc09:c.instructions+=5;goto B56cc09;
case 0x56cc0f:c.instructions+=4;goto B56cc0f;
case 0x56cc15:c.instructions+=3;goto B56cc15;
case 0x56cc17:c.instructions+=2;goto B56cc17;
case 0x56cc1a:c.instructions+=1;goto B56cc1a;
case 0x56cc1c:goto L56cc1c;
case 0x56cc1f:c.instructions+=1;goto B56cc1f;
case 0x56cc21:goto L56cc21;
case 0x56cc24:c.instructions+=1;goto B56cc24;
case 0x56cc26:goto L56cc26;
case 0x56cc29:c.instructions+=7;goto B56cc29;
case 0x56cc2f:c.instructions+=6;goto B56cc2f;
case 0x56cc36:c.instructions+=5;goto B56cc36;
case 0x56cc3c:c.instructions+=4;goto B56cc3c;
case 0x56cc3e:c.instructions+=3;goto B56cc3e;
case 0x56cc40:c.instructions+=2;goto B56cc40;
case 0x56cc43:c.instructions+=1;goto B56cc43;
case 0x56cc45:goto L56cc45;
case 0x56cc49:c.instructions+=2;goto B56cc49;
case 0x56cc4c:c.instructions+=1;goto B56cc4c;
case 0x56cc4e:goto L56cc4e;
case 0x56cc51:c.instructions+=2;goto B56cc51;
case 0x56cc54:c.instructions+=1;goto B56cc54;
case 0x56cc56:goto L56cc56;
case 0x56cc59:c.instructions+=1;goto B56cc59;
case 0x56cc5b:goto L56cc5b;
case 0x56cc5e:c.instructions+=5;goto B56cc5e;
case 0x56cc61:c.instructions+=4;goto B56cc61;
case 0x56cc63:c.instructions+=3;goto B56cc63;
case 0x56cc65:c.instructions+=2;goto B56cc65;
case 0x56cc68:c.instructions+=1;goto B56cc68;
case 0x56cc6a:goto L56cc6a;
case 0x56cc6d:c.instructions+=6;goto B56cc6d;
case 0x56cc70:c.instructions+=5;goto B56cc70;
case 0x56cc77:c.instructions+=4;goto B56cc77;
case 0x56cc7a:c.instructions+=3;goto B56cc7a;
case 0x56cc80:c.instructions+=2;goto B56cc80;
case 0x56cc86:c.instructions+=1;goto B56cc86;
case 0x56cc8b:goto L56cc8b;
case 0x56cc8e:goto L56cc8e;
case 0x56cc91:c.instructions+=1;goto B56cc91;
case 0x56cc93:goto L56cc93;
case 0x56cc96:c.instructions+=5;goto B56cc96;
case 0x56cc99:c.instructions+=4;goto B56cc99;
case 0x56cca0:c.instructions+=3;goto B56cca0;
case 0x56cca6:c.instructions+=2;goto B56cca6;
case 0x56ccac:c.instructions+=1;goto B56ccac;
case 0x56ccb1:goto L56ccb1;
case 0x56ccb4:c.instructions+=6;goto B56ccb4;
case 0x56ccb6:c.instructions+=5;goto B56ccb6;
case 0x56ccb7:c.instructions+=4;goto B56ccb7;
case 0x56ccb8:c.instructions+=3;goto B56ccb8;
case 0x56ccb9:c.instructions+=2;goto B56ccb9;
case 0x56ccba:c.instructions+=1;goto B56ccba;
case 0x56ccbd:goto L56ccbd;
case 0x56ccbf:c.instructions+=6;goto B56ccbf;
case 0x56ccc0:c.instructions+=5;goto B56ccc0;
case 0x56ccc3:c.instructions+=4;goto B56ccc3;
case 0x56ccc4:c.instructions+=3;goto B56ccc4;
case 0x56ccc5:c.instructions+=2;goto B56ccc5;
case 0x56ccc6:c.instructions+=1;goto B56ccc6;
case 0x56ccd0:goto L56ccd0;
case 0x56ccd1:c.instructions+=6;goto B56ccd1;
case 0x56ccd3:c.instructions+=5;goto B56ccd3;
case 0x56ccd5:c.instructions+=4;goto B56ccd5;
case 0x56ccd7:c.instructions+=3;goto B56ccd7;
case 0x56ccda:c.instructions+=2;goto B56ccda;
case 0x56ccdc:c.instructions+=1;goto B56ccdc;
case 0x56cce2:goto L56cce2;
case 0x56cce5:c.instructions+=2;goto B56cce5;
case 0x56cce8:c.instructions+=1;goto B56cce8;
case 0x56ccea:goto L56ccea;
case 0x56cced:c.instructions+=11;goto B56cced;
case 0x56ccf3:c.instructions+=10;goto B56ccf3;
case 0x56ccf4:c.instructions+=9;goto B56ccf4;
case 0x56ccfb:c.instructions+=8;goto B56ccfb;
case 0x56ccfe:c.instructions+=7;goto B56ccfe;
case 0x56cd01:c.instructions+=6;goto B56cd01;
case 0x56cd04:c.instructions+=5;goto B56cd04;
case 0x56cd07:c.instructions+=4;goto B56cd07;
case 0x56cd0b:c.instructions+=3;goto B56cd0b;
case 0x56cd0d:c.instructions+=2;goto B56cd0d;
case 0x56cd10:c.instructions+=1;goto B56cd10;
case 0x56cd12:goto L56cd12;
case 0x56cd15:c.instructions+=5;goto B56cd15;
case 0x56cd16:c.instructions+=4;goto B56cd16;
case 0x56cd19:c.instructions+=3;goto B56cd19;
case 0x56cd1c:c.instructions+=2;goto B56cd1c;
case 0x56cd1e:c.instructions+=1;goto B56cd1e;
case 0x56cd20:goto L56cd20;
case 0x56cd23:c.instructions+=7;goto B56cd23;
case 0x56cd29:c.instructions+=6;goto B56cd29;
case 0x56cd2c:c.instructions+=5;goto B56cd2c;
case 0x56cd2f:c.instructions+=4;goto B56cd2f;
case 0x56cd32:c.instructions+=3;goto B56cd32;
case 0x56cd33:c.instructions+=2;goto B56cd33;
case 0x56cd39:c.instructions+=1;goto B56cd39;
case 0x56cd3e:goto L56cd3e;
case 0x56cd3f:goto L56cd3f;
case 0x56cd42:c.instructions+=2;goto B56cd42;
case 0x56cd45:c.instructions+=1;goto B56cd45;
case 0x56cd4a:goto L56cd4a;
case 0x56cd4d:c.instructions+=4;goto B56cd4d;
case 0x56cd53:c.instructions+=3;goto B56cd53;
case 0x56cd55:c.instructions+=2;goto B56cd55;
case 0x56cd58:c.instructions+=1;goto B56cd58;
case 0x56cd5a:goto L56cd5a;
case 0x56cd5c:c.instructions+=5;goto B56cd5c;
case 0x56cd5f:c.instructions+=4;goto B56cd5f;
case 0x56cd65:c.instructions+=3;goto B56cd65;
case 0x56cd67:c.instructions+=2;goto B56cd67;
case 0x56cd6a:c.instructions+=1;goto B56cd6a;
case 0x56cd6c:goto L56cd6c;
case 0x56cd72:c.instructions+=3;goto B56cd72;
case 0x56cd74:c.instructions+=2;goto B56cd74;
case 0x56cd77:c.instructions+=1;goto B56cd77;
case 0x56cd79:goto L56cd79;
case 0x56cd7c:c.instructions+=3;goto B56cd7c;
case 0x56cd7e:c.instructions+=2;goto B56cd7e;
case 0x56cd81:c.instructions+=1;goto B56cd81;
case 0x56cd83:goto L56cd83;
case 0x56cd89:c.instructions+=3;goto B56cd89;
case 0x56cd8b:c.instructions+=2;goto B56cd8b;
case 0x56cd8e:c.instructions+=1;goto B56cd8e;
case 0x56cd90:goto L56cd90;
case 0x56cd93:c.instructions+=3;goto B56cd93;
case 0x56cd95:c.instructions+=2;goto B56cd95;
case 0x56cd98:c.instructions+=1;goto B56cd98;
case 0x56cd9a:goto L56cd9a;
case 0x56cd9d:c.instructions+=2;goto B56cd9d;
case 0x56cd9e:c.instructions+=1;goto B56cd9e;
case 0x56cd9f:goto L56cd9f;
case 0x56cda6:c.instructions+=4;goto B56cda6;
case 0x56cdad:c.instructions+=3;goto B56cdad;
case 0x56cdb0:c.instructions+=2;goto B56cdb0;
case 0x56cdb2:c.instructions+=1;goto B56cdb2;
case 0x56cdb4:goto L56cdb4;
case 0x56cdb7:c.instructions+=2;goto B56cdb7;
case 0x56cdb9:c.instructions+=1;goto B56cdb9;
case 0x56cdbb:goto L56cdbb;
case 0x56cdc2:c.instructions+=2;goto B56cdc2;
case 0x56cdc3:c.instructions+=1;goto B56cdc3;
case 0x56cdc4:goto L56cdc4;
case 0x56cdc6:goto L56cdc6;
case 0x56cdc7:c.instructions+=1;goto B56cdc7;
case 0x56cdd0:goto L56cdd0;
case 0x56cdd4:c.instructions+=6;goto B56cdd4;
case 0x56cdd7:c.instructions+=5;goto B56cdd7;
case 0x56cddb:c.instructions+=4;goto B56cddb;
case 0x56cdde:c.instructions+=3;goto B56cdde;
case 0x56cde0:c.instructions+=2;goto B56cde0;
case 0x56cde3:c.instructions+=1;goto B56cde3;
case 0x56cde5:goto L56cde5;
case 0x56cdea:c.instructions+=1;goto B56cdea;
case 0x56cdeb:goto L56cdeb;
case 0x56cded:c.instructions+=1;goto B56cded;
case 0x56cdf0:goto L56cdf0;
case 0x56cdf4:c.instructions+=25;goto B56cdf4;
case 0x56cdf6:c.instructions+=24;goto B56cdf6;
case 0x56cdf8:c.instructions+=23;goto B56cdf8;
case 0x56cdfb:c.instructions+=22;goto B56cdfb;
case 0x56cdfd:c.instructions+=21;goto B56cdfd;
case 0x56ce03:c.instructions+=20;goto B56ce03;
case 0x56ce06:c.instructions+=19;goto B56ce06;
case 0x56ce08:c.instructions+=18;goto B56ce08;
case 0x56ce0b:c.instructions+=17;goto B56ce0b;
case 0x56ce0e:c.instructions+=16;goto B56ce0e;
case 0x56ce11:c.instructions+=15;goto B56ce11;
case 0x56ce14:c.instructions+=14;goto B56ce14;
case 0x56ce17:c.instructions+=13;goto B56ce17;
case 0x56ce1a:c.instructions+=12;goto B56ce1a;
case 0x56ce1d:c.instructions+=11;goto B56ce1d;
case 0x56ce20:c.instructions+=10;goto B56ce20;
case 0x56ce23:c.instructions+=9;goto B56ce23;
case 0x56ce26:c.instructions+=8;goto B56ce26;
case 0x56ce29:c.instructions+=7;goto B56ce29;
case 0x56ce2c:c.instructions+=6;goto B56ce2c;
case 0x56ce33:c.instructions+=5;goto B56ce33;
case 0x56ce36:c.instructions+=4;goto B56ce36;
case 0x56ce39:c.instructions+=3;goto B56ce39;
case 0x56ce3c:c.instructions+=2;goto B56ce3c;
case 0x56ce3f:c.instructions+=1;goto B56ce3f;
case 0x56ce50:goto L56ce50;
case 0x56ce51:c.instructions+=9;goto B56ce51;
case 0x56ce52:c.instructions+=8;goto B56ce52;
case 0x56ce53:c.instructions+=7;goto B56ce53;
case 0x56ce54:c.instructions+=6;goto B56ce54;
case 0x56ce58:c.instructions+=5;goto B56ce58;
case 0x56ce5d:c.instructions+=4;goto B56ce5d;
case 0x56ce5f:c.instructions+=3;goto B56ce5f;
case 0x56ce61:c.instructions+=2;goto B56ce61;
case 0x56ce63:c.instructions+=1;goto B56ce63;
case 0x56ce68:goto L56ce68;
case 0x56ce6a:c.instructions+=6;goto B56ce6a;
case 0x56ce6c:c.instructions+=5;goto B56ce6c;
case 0x56ce6e:c.instructions+=4;goto B56ce6e;
case 0x56ce71:c.instructions+=3;goto B56ce71;
case 0x56ce72:c.instructions+=2;goto B56ce72;
case 0x56ce74:c.instructions+=1;goto B56ce74;
case 0x56ce79:goto L56ce79;
case 0x56ce7b:c.instructions+=6;goto B56ce7b;
case 0x56ce7d:c.instructions+=5;goto B56ce7d;
case 0x56ce7f:c.instructions+=4;goto B56ce7f;
case 0x56ce82:c.instructions+=3;goto B56ce82;
case 0x56ce83:c.instructions+=2;goto B56ce83;
case 0x56ce85:c.instructions+=1;goto B56ce85;
case 0x56ce8a:goto L56ce8a;
case 0x56ce8c:c.instructions+=6;goto B56ce8c;
case 0x56ce8e:c.instructions+=5;goto B56ce8e;
case 0x56ce90:c.instructions+=4;goto B56ce90;
case 0x56ce93:c.instructions+=3;goto B56ce93;
case 0x56ce94:c.instructions+=2;goto B56ce94;
case 0x56ce96:c.instructions+=1;goto B56ce96;
case 0x56ce9b:goto L56ce9b;
case 0x56ce9d:c.instructions+=6;goto B56ce9d;
case 0x56ce9f:c.instructions+=5;goto B56ce9f;
case 0x56cea1:c.instructions+=4;goto B56cea1;
case 0x56cea4:c.instructions+=3;goto B56cea4;
case 0x56cea5:c.instructions+=2;goto B56cea5;
case 0x56cea7:c.instructions+=1;goto B56cea7;
case 0x56ceac:goto L56ceac;
case 0x56ceae:c.instructions+=6;goto B56ceae;
case 0x56ceb0:c.instructions+=5;goto B56ceb0;
case 0x56ceb2:c.instructions+=4;goto B56ceb2;
case 0x56ceb5:c.instructions+=3;goto B56ceb5;
case 0x56ceb6:c.instructions+=2;goto B56ceb6;
case 0x56ceb8:c.instructions+=1;goto B56ceb8;
case 0x56cebd:goto L56cebd;
case 0x56cebf:c.instructions+=6;goto B56cebf;
case 0x56cec1:c.instructions+=5;goto B56cec1;
case 0x56cec3:c.instructions+=4;goto B56cec3;
case 0x56cec6:c.instructions+=3;goto B56cec6;
case 0x56cec7:c.instructions+=2;goto B56cec7;
case 0x56cec9:c.instructions+=1;goto B56cec9;
case 0x56cece:goto L56cece;
case 0x56ced1:c.instructions+=3;goto B56ced1;
case 0x56ced2:c.instructions+=2;goto B56ced2;
case 0x56ced4:c.instructions+=1;goto B56ced4;
case 0x56ced9:goto L56ced9;
case 0x56cedc:c.instructions+=3;goto B56cedc;
case 0x56cedd:c.instructions+=2;goto B56cedd;
case 0x56cedf:c.instructions+=1;goto B56cedf;
case 0x56cee4:goto L56cee4;
case 0x56cee7:c.instructions+=3;goto B56cee7;
case 0x56cee8:c.instructions+=2;goto B56cee8;
case 0x56ceea:c.instructions+=1;goto B56ceea;
case 0x56ceef:goto L56ceef;
case 0x56cef2:c.instructions+=3;goto B56cef2;
case 0x56cef3:c.instructions+=2;goto B56cef3;
case 0x56cef5:c.instructions+=1;goto B56cef5;
case 0x56cefa:goto L56cefa;
case 0x56cefd:c.instructions+=3;goto B56cefd;
case 0x56cefe:c.instructions+=2;goto B56cefe;
case 0x56cf00:c.instructions+=1;goto B56cf00;
case 0x56cf05:goto L56cf05;
case 0x56cf07:c.instructions+=6;goto B56cf07;
case 0x56cf09:c.instructions+=5;goto B56cf09;
case 0x56cf0b:c.instructions+=4;goto B56cf0b;
case 0x56cf0e:c.instructions+=3;goto B56cf0e;
case 0x56cf0f:c.instructions+=2;goto B56cf0f;
case 0x56cf11:c.instructions+=1;goto B56cf11;
case 0x56cf16:goto L56cf16;
case 0x56cf18:c.instructions+=6;goto B56cf18;
case 0x56cf1a:c.instructions+=5;goto B56cf1a;
case 0x56cf1c:c.instructions+=4;goto B56cf1c;
case 0x56cf1f:c.instructions+=3;goto B56cf1f;
case 0x56cf20:c.instructions+=2;goto B56cf20;
case 0x56cf22:c.instructions+=1;goto B56cf22;
case 0x56cf27:goto L56cf27;
case 0x56cf2a:c.instructions+=3;goto B56cf2a;
case 0x56cf2b:c.instructions+=2;goto B56cf2b;
case 0x56cf2d:c.instructions+=1;goto B56cf2d;
case 0x56cf32:goto L56cf32;
case 0x56cf34:c.instructions+=6;goto B56cf34;
case 0x56cf36:c.instructions+=5;goto B56cf36;
case 0x56cf38:c.instructions+=4;goto B56cf38;
case 0x56cf3b:c.instructions+=3;goto B56cf3b;
case 0x56cf3c:c.instructions+=2;goto B56cf3c;
case 0x56cf3e:c.instructions+=1;goto B56cf3e;
case 0x56cf43:goto L56cf43;
case 0x56cf46:c.instructions+=1;goto B56cf46;
case 0x56cf48:goto L56cf48;
case 0x56cf4b:c.instructions+=2;goto B56cf4b;
case 0x56cf4d:c.instructions+=1;goto B56cf4d;
case 0x56cf4f:goto L56cf4f;
case 0x56cf52:c.instructions+=7;goto B56cf52;
case 0x56cf55:c.instructions+=6;goto B56cf55;
case 0x56cf57:c.instructions+=5;goto B56cf57;
case 0x56cf5b:c.instructions+=4;goto B56cf5b;
case 0x56cf5d:c.instructions+=3;goto B56cf5d;
case 0x56cf61:c.instructions+=2;goto B56cf61;
case 0x56cf65:c.instructions+=1;goto B56cf65;
case 0x56cf69:goto L56cf69;
case 0x56cf6d:c.instructions+=3;goto B56cf6d;
case 0x56cf6e:c.instructions+=2;goto B56cf6e;
case 0x56cf70:c.instructions+=1;goto B56cf70;
case 0x56cf75:goto L56cf75;
case 0x56cf79:c.instructions+=3;goto B56cf79;
case 0x56cf7a:c.instructions+=2;goto B56cf7a;
case 0x56cf7c:c.instructions+=1;goto B56cf7c;
case 0x56cf81:goto L56cf81;
case 0x56cf84:c.instructions+=2;goto B56cf84;
case 0x56cf86:c.instructions+=1;goto B56cf86;
case 0x56cf88:goto L56cf88;
case 0x56cf8d:c.instructions+=2;goto B56cf8d;
case 0x56cf8e:c.instructions+=1;goto B56cf8e;
case 0x56cf93:goto L56cf93;
case 0x56cf96:c.instructions+=3;goto B56cf96;
case 0x56cf9b:c.instructions+=2;goto B56cf9b;
case 0x56cf9c:c.instructions+=1;goto B56cf9c;
case 0x56cfa1:goto L56cfa1;
case 0x56cfa4:c.instructions+=4;goto B56cfa4;
case 0x56cfa5:c.instructions+=3;goto B56cfa5;
case 0x56cfa6:c.instructions+=2;goto B56cfa6;
case 0x56cfa9:c.instructions+=1;goto B56cfa9;
case 0x56cfae:goto L56cfae;
case 0x56cfb1:c.instructions+=1;goto B56cfb1;
case 0x56cfb4:goto L56cfb4;
case 0x56cfb6:c.instructions+=1;goto B56cfb6;
case 0x56cfbb:goto L56cfbb;
case 0x56cfbc:c.instructions+=4;goto B56cfbc;
case 0x56cfbd:c.instructions+=3;goto B56cfbd;
case 0x56cfbe:c.instructions+=2;goto B56cfbe;
case 0x56cfbf:c.instructions+=1;goto B56cfbf;
case 0x56cfd0:goto L56cfd0;
case 0x56cfd1:c.instructions+=6;goto B56cfd1;
case 0x56cfd7:c.instructions+=5;goto B56cfd7;
case 0x56cfd8:c.instructions+=4;goto B56cfd8;
case 0x56cfda:c.instructions+=3;goto B56cfda;
case 0x56cfdd:c.instructions+=2;goto B56cfdd;
case 0x56cfdf:c.instructions+=1;goto B56cfdf;
case 0x56cfe1:goto L56cfe1;
case 0x56cfe6:c.instructions+=1;goto B56cfe6;
case 0x56cfe8:goto L56cfe8;
case 0x56cfed:c.instructions+=2;goto B56cfed;
case 0x56cfef:c.instructions+=1;goto B56cfef;
case 0x56cff4:goto L56cff4;
case 0x56cff6:c.instructions+=2;goto B56cff6;
case 0x56cffb:c.instructions+=1;goto B56cffb;
case 0x56cffd:goto L56cffd;
default:missing_instruction(c.pc);}
B56c002:L56c002:{c.instructions+=17;NFSU2_TR(0x56c002);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c008:{NFSU2_TR(0x56c008);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x115ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c00e:{NFSU2_TR(0x56c00e);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B56c014:{NFSU2_TR(0x56c014);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B56c01a:{NFSU2_TR(0x56c01a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c01d:{NFSU2_TR(0x56c01d);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B56c023:{NFSU2_TR(0x56c023);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c029:{NFSU2_TR(0x56c029);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c02c:{NFSU2_TR(0x56c02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c032:{NFSU2_TR(0x56c032);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c035:{NFSU2_TR(0x56c035);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c03a:{NFSU2_TR(0x56c03a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c03b:{NFSU2_TR(0x56c03b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56c03f:{NFSU2_TR(0x56c03f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c045:{NFSU2_TR(0x56c045);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x43480000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c04f:{NFSU2_TR(0x56c04f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x41a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c059:{NFSU2_TR(0x56c059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c05eull));
TAIL_STATIC(0x4953e0u,495);
}
B56c05e:L56c05e:{c.instructions+=4;NFSU2_TR(0x56c05e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56c061:{NFSU2_TR(0x56c061);
__builtin_memmove((R+4),(R+24),4);
}
B56c063:{NFSU2_TR(0x56c063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c069:{NFSU2_TR(0x56c069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c06eull));
TAIL_STATIC(0x5606e0u,560);
}
B56c06e:L56c06e:{c.instructions+=2;NFSU2_TR(0x56c06e);
__builtin_memmove((R+4),(R+24),4);
}
B56c070:{NFSU2_TR(0x56c070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c075ull));
TAIL_STATIC(0x547250u,547);
}
B56c075:L56c075:{c.instructions+=3;NFSU2_TR(0x56c075);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c078:{NFSU2_TR(0x56c078);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56c07a:{NFSU2_TR(0x56c07a);
if(r1(R+518)){{goto L56c081;}}
}
B56c07c:L56c07c:{c.instructions+=2;NFSU2_TR(0x56c07c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B56c07f:{NFSU2_TR(0x56c07f);
{goto L56c083;}
}
B56c081:L56c081:{c.instructions+=1;NFSU2_TR(0x56c081);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56c083:L56c083:{c.instructions+=2;NFSU2_TR(0x56c083);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56c086:{NFSU2_TR(0x56c086);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c099;}}
}
B56c088:L56c088:{c.instructions+=3;NFSU2_TR(0x56c088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c08e:{NFSU2_TR(0x56c08e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c08f:{NFSU2_TR(0x56c08f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c094ull));
TAIL_STATIC(0x50ca00u,50c);
}
B56c094:L56c094:{c.instructions+=2;NFSU2_TR(0x56c094);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56c097:{NFSU2_TR(0x56c097);
{goto L56c0d4;}
}
B56c099:L56c099:{c.instructions+=3;NFSU2_TR(0x56c099);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c09c:{NFSU2_TR(0x56c09c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56c09e:{NFSU2_TR(0x56c09e);
if(r1(R+518)){{goto L56c0a3;}}
}
B56c0a0:L56c0a0:{c.instructions+=1;NFSU2_TR(0x56c0a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B56c0a3:L56c0a3:{c.instructions+=2;NFSU2_TR(0x56c0a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56c0a6:{NFSU2_TR(0x56c0a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c0b9;}}
}
B56c0a8:L56c0a8:{c.instructions+=3;NFSU2_TR(0x56c0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56c0ae:{NFSU2_TR(0x56c0ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c0af:{NFSU2_TR(0x56c0af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c0b4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B56c0b4:L56c0b4:{c.instructions+=2;NFSU2_TR(0x56c0b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56c0b7:{NFSU2_TR(0x56c0b7);
{goto L56c0d4;}
}
B56c0b9:L56c0b9:{c.instructions+=3;NFSU2_TR(0x56c0b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c0bf:{NFSU2_TR(0x56c0bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c0c0:{NFSU2_TR(0x56c0c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c0c5ull));
TAIL_STATIC(0x50ca50u,50c);
}
B56c0c5:L56c0c5:{c.instructions+=3;NFSU2_TR(0x56c0c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c0cb:{NFSU2_TR(0x56c0cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c0cc:{NFSU2_TR(0x56c0cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c0d1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B56c0d1:L56c0d1:{c.instructions+=1;NFSU2_TR(0x56c0d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56c0d4:L56c0d4:{c.instructions+=9;NFSU2_TR(0x56c0d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c0d8:{NFSU2_TR(0x56c0d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56c0d9:{NFSU2_TR(0x56c0d9);
__builtin_memmove((R+0),(R+24),4);
}
B56c0db:{NFSU2_TR(0x56c0db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56c0dc:{NFSU2_TR(0x56c0dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56c0dd:{NFSU2_TR(0x56c0dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56c0de:{NFSU2_TR(0x56c0de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c0e5:{NFSU2_TR(0x56c0e5);
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
B56c0e8:{NFSU2_TR(0x56c0e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c0f0:L56c0f0:{c.instructions+=8;NFSU2_TR(0x56c0f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c0f2:{NFSU2_TR(0x56c0f2);
u8 U[4];
w4(U+0,u32(0x778674ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c0f7:{NFSU2_TR(0x56c0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c0fd:{NFSU2_TR(0x56c0fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c0fe:{NFSU2_TR(0x56c0fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c105:{NFSU2_TR(0x56c105);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c106:{NFSU2_TR(0x56c106);
u8 U[4];
w4(U+0,u32(0x218ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c10b:{NFSU2_TR(0x56c10b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c110ull));
TAIL_STATIC(0x575620u,575);
}
B56c110:L56c110:{c.instructions+=5;NFSU2_TR(0x56c110);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56c113:{NFSU2_TR(0x56c113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B56c117:{NFSU2_TR(0x56c117);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c119:{NFSU2_TR(0x56c119);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c121:{NFSU2_TR(0x56c121);
if(r1(R+518)){{goto L56c13e;}}
}
B56c123:L56c123:{c.instructions+=4;NFSU2_TR(0x56c123);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c127:{NFSU2_TR(0x56c127);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c128:{NFSU2_TR(0x56c128);
__builtin_memmove((R+4),(R+0),4);
}
B56c12a:{NFSU2_TR(0x56c12a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c12full));
TAIL_STATIC(0x569500u,569);
}
B56c12f:L56c12f:{c.instructions+=4;NFSU2_TR(0x56c12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c133:{NFSU2_TR(0x56c133);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c13a:{NFSU2_TR(0x56c13a);
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
B56c13d:{NFSU2_TR(0x56c13d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c13e:L56c13e:{c.instructions+=5;NFSU2_TR(0x56c13e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c142:{NFSU2_TR(0x56c142);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56c144:{NFSU2_TR(0x56c144);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c14b:{NFSU2_TR(0x56c14b);
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
B56c14e:{NFSU2_TR(0x56c14e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c150:L56c150:{c.instructions+=8;NFSU2_TR(0x56c150);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c152:{NFSU2_TR(0x56c152);
u8 U[4];
w4(U+0,u32(0x778694ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c157:{NFSU2_TR(0x56c157);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c15d:{NFSU2_TR(0x56c15d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c15e:{NFSU2_TR(0x56c15e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c165:{NFSU2_TR(0x56c165);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c166:{NFSU2_TR(0x56c166);
u8 U[4];
w4(U+0,u32(0x1e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c16b:{NFSU2_TR(0x56c16b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c170ull));
TAIL_STATIC(0x575620u,575);
}
B56c170:L56c170:{c.instructions+=5;NFSU2_TR(0x56c170);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56c173:{NFSU2_TR(0x56c173);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B56c177:{NFSU2_TR(0x56c177);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c179:{NFSU2_TR(0x56c179);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c181:{NFSU2_TR(0x56c181);
if(r1(R+518)){{goto L56c19e;}}
}
B56c183:L56c183:{c.instructions+=4;NFSU2_TR(0x56c183);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c187:{NFSU2_TR(0x56c187);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c188:{NFSU2_TR(0x56c188);
__builtin_memmove((R+4),(R+0),4);
}
B56c18a:{NFSU2_TR(0x56c18a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c18full));
TAIL_STATIC(0x569cc0u,569);
}
B56c18f:L56c18f:{c.instructions+=4;NFSU2_TR(0x56c18f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c193:{NFSU2_TR(0x56c193);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c19a:{NFSU2_TR(0x56c19a);
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
B56c19d:{NFSU2_TR(0x56c19d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c19e:L56c19e:{c.instructions+=5;NFSU2_TR(0x56c19e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c1a2:{NFSU2_TR(0x56c1a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56c1a4:{NFSU2_TR(0x56c1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c1ab:{NFSU2_TR(0x56c1ab);
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
B56c1ae:{NFSU2_TR(0x56c1ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c1b0:L56c1b0:{c.instructions+=8;NFSU2_TR(0x56c1b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c1b2:{NFSU2_TR(0x56c1b2);
u8 U[4];
w4(U+0,u32(0x7786b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c1b7:{NFSU2_TR(0x56c1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c1bd:{NFSU2_TR(0x56c1bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c1be:{NFSU2_TR(0x56c1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c1c5:{NFSU2_TR(0x56c1c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c1c6:{NFSU2_TR(0x56c1c6);
u8 U[4];
w4(U+0,u32(0x190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c1cb:{NFSU2_TR(0x56c1cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c1d0ull));
TAIL_STATIC(0x575620u,575);
}
B56c1d0:L56c1d0:{c.instructions+=5;NFSU2_TR(0x56c1d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56c1d3:{NFSU2_TR(0x56c1d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B56c1d7:{NFSU2_TR(0x56c1d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c1d9:{NFSU2_TR(0x56c1d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c1e1:{NFSU2_TR(0x56c1e1);
if(r1(R+518)){{goto L56c1fe;}}
}
B56c1e3:L56c1e3:{c.instructions+=4;NFSU2_TR(0x56c1e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c1e7:{NFSU2_TR(0x56c1e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c1e8:{NFSU2_TR(0x56c1e8);
__builtin_memmove((R+4),(R+0),4);
}
B56c1ea:{NFSU2_TR(0x56c1ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c1efull));
TAIL_STATIC(0x56aeb0u,56a);
}
B56c1ef:L56c1ef:{c.instructions+=4;NFSU2_TR(0x56c1ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c1f3:{NFSU2_TR(0x56c1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c1fa:{NFSU2_TR(0x56c1fa);
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
B56c1fd:{NFSU2_TR(0x56c1fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c1fe:L56c1fe:{c.instructions+=5;NFSU2_TR(0x56c1fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c202:{NFSU2_TR(0x56c202);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56c204:{NFSU2_TR(0x56c204);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c20b:{NFSU2_TR(0x56c20b);
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
B56c20e:{NFSU2_TR(0x56c20e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c210:L56c210:{c.instructions+=14;NFSU2_TR(0x56c210);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c212:{NFSU2_TR(0x56c212);
u8 U[4];
w4(U+0,u32(0x7786c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c217:{NFSU2_TR(0x56c217);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c21d:{NFSU2_TR(0x56c21d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c21e:{NFSU2_TR(0x56c21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c225:{NFSU2_TR(0x56c225);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c226:{NFSU2_TR(0x56c226);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c227:{NFSU2_TR(0x56c227);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c228:{NFSU2_TR(0x56c228);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c229:{NFSU2_TR(0x56c229);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56c22d:{NFSU2_TR(0x56c22d);
__builtin_memmove((R+24),(R+4),4);
}
B56c22f:{NFSU2_TR(0x56c22f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c230:{NFSU2_TR(0x56c230);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c234:{NFSU2_TR(0x56c234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c239ull));
TAIL_STATIC(0x56bf70u,56b);
}
B56c239:L56c239:{c.instructions+=22;NFSU2_TR(0x56c239);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56c23b:{NFSU2_TR(0x56c23b);
u8 U[4];
w4(U+0,u32(0x79d978ull));
s4(u32(r4(R+24)),r4(U+0));
}
B56c241:{NFSU2_TR(0x56c241);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c247:{NFSU2_TR(0x56c247);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c24d:{NFSU2_TR(0x56c24d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x129ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c253:{NFSU2_TR(0x56c253);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c259:{NFSU2_TR(0x56c259);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c25c:{NFSU2_TR(0x56c25c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c262:{NFSU2_TR(0x56c262);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B56c268:{NFSU2_TR(0x56c268);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B56c26e:{NFSU2_TR(0x56c26e);
w4(R+0,u32(0x1ull));
}
B56c273:{NFSU2_TR(0x56c273);
__builtin_memmove(gp(0x838560),(R+0),4);
}
B56c278:{NFSU2_TR(0x56c278);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c27b:{NFSU2_TR(0x56c27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56c27e:{NFSU2_TR(0x56c27e);
__builtin_memmove((R+4),(R+24),4);
}
B56c280:{NFSU2_TR(0x56c280);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c284:{NFSU2_TR(0x56c284);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c28a:{NFSU2_TR(0x56c28a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c28d:{NFSU2_TR(0x56c28d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c293:{NFSU2_TR(0x56c293);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x43480000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c29d:{NFSU2_TR(0x56c29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x41a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c2a7:{NFSU2_TR(0x56c2a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c2acull));
TAIL_STATIC(0x53c1f0u,53c);
}
B56c2ac:L56c2ac:{c.instructions+=1;NFSU2_TR(0x56c2ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c2b1ull));
TAIL_STATIC(0x50f650u,50f);
}
B56c2b1:L56c2b1:{c.instructions+=2;NFSU2_TR(0x56c2b1);
__builtin_memmove((R+4),(R+24),4);
}
B56c2b3:{NFSU2_TR(0x56c2b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c2b8ull));
TAIL_STATIC(0x548d20u,548);
}
B56c2b8:L56c2b8:{c.instructions+=3;NFSU2_TR(0x56c2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c2bb:{NFSU2_TR(0x56c2bb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56c2bd:{NFSU2_TR(0x56c2bd);
if(r1(R+518)){{goto L56c2c4;}}
}
B56c2bf:L56c2bf:{c.instructions+=2;NFSU2_TR(0x56c2bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B56c2c2:{NFSU2_TR(0x56c2c2);
{goto L56c2c6;}
}
B56c2c4:L56c2c4:{c.instructions+=1;NFSU2_TR(0x56c2c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56c2c6:L56c2c6:{c.instructions+=2;NFSU2_TR(0x56c2c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56c2c9:{NFSU2_TR(0x56c2c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c2dc;}}
}
B56c2cb:L56c2cb:{c.instructions+=3;NFSU2_TR(0x56c2cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c2d1:{NFSU2_TR(0x56c2d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c2d2:{NFSU2_TR(0x56c2d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c2d7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B56c2d7:L56c2d7:{c.instructions+=2;NFSU2_TR(0x56c2d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56c2da:{NFSU2_TR(0x56c2da);
{goto L56c31b;}
}
B56c2dc:L56c2dc:{c.instructions+=3;NFSU2_TR(0x56c2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c2df:{NFSU2_TR(0x56c2df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56c2e1:{NFSU2_TR(0x56c2e1);
if(r1(R+518)){{goto L56c2e8;}}
}
B56c2e3:L56c2e3:{c.instructions+=2;NFSU2_TR(0x56c2e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B56c2e6:{NFSU2_TR(0x56c2e6);
{goto L56c2ea;}
}
B56c2e8:L56c2e8:{c.instructions+=1;NFSU2_TR(0x56c2e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56c2ea:L56c2ea:{c.instructions+=2;NFSU2_TR(0x56c2ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56c2ed:{NFSU2_TR(0x56c2ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c300;}}
}
B56c2ef:L56c2ef:{c.instructions+=3;NFSU2_TR(0x56c2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c2f5:{NFSU2_TR(0x56c2f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c2f6:{NFSU2_TR(0x56c2f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c2fbull));
TAIL_STATIC(0x50ca00u,50c);
}
B56c2fb:L56c2fb:{c.instructions+=2;NFSU2_TR(0x56c2fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56c2fe:{NFSU2_TR(0x56c2fe);
{goto L56c31b;}
}
B56c300:L56c300:{c.instructions+=3;NFSU2_TR(0x56c300);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56c306:{NFSU2_TR(0x56c306);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c307:{NFSU2_TR(0x56c307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c30cull));
TAIL_STATIC(0x50ca50u,50c);
}
B56c30c:L56c30c:{c.instructions+=3;NFSU2_TR(0x56c30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c312:{NFSU2_TR(0x56c312);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c313:{NFSU2_TR(0x56c313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c318ull));
TAIL_STATIC(0x50ca50u,50c);
}
B56c318:L56c318:{c.instructions+=1;NFSU2_TR(0x56c318);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56c31b:L56c31b:{c.instructions+=5;NFSU2_TR(0x56c31b);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B56c321:{NFSU2_TR(0x56c321);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56c323:{NFSU2_TR(0x56c323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c326:{NFSU2_TR(0x56c326);
w4(R+28,u32(0xffull));
}
B56c32b:{NFSU2_TR(0x56c32b);
if(r1(R+518)){{goto L56c349;}}
}
B56c32d:L56c32d:{c.instructions+=4;NFSU2_TR(0x56c32d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56c32f:{NFSU2_TR(0x56c32f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c330:{NFSU2_TR(0x56c330);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c331:{NFSU2_TR(0x56c331);
if(r1(R+518)){{goto L56c33d;}}
}
B56c333:L56c333:{c.instructions+=4;NFSU2_TR(0x56c333);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c334:{NFSU2_TR(0x56c334);
u8 U[4];
w4(U+0,u32(0x799c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c339:{NFSU2_TR(0x56c339);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c33b:{NFSU2_TR(0x56c33b);
{goto L56c344;}
}
B56c33d:L56c33d:{c.instructions+=3;NFSU2_TR(0x56c33d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c33e:{NFSU2_TR(0x56c33e);
u8 U[4];
w4(U+0,u32(0x799c18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c343:{NFSU2_TR(0x56c343);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c344:L56c344:{c.instructions+=1;NFSU2_TR(0x56c344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c349ull));
TAIL_STATIC(0x555d00u,555);
}
B56c349:L56c349:{c.instructions+=3;NFSU2_TR(0x56c349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c34c:{NFSU2_TR(0x56c34c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c34d:{NFSU2_TR(0x56c34d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c352ull));
TAIL_STATIC(0x52cef0u,52c);
}
B56c352:L56c352:{c.instructions+=3;NFSU2_TR(0x56c352);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56c355:{NFSU2_TR(0x56c355);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56c357:{NFSU2_TR(0x56c357);
if(r1(R+518)){{goto L56c365;}}
}
B56c359:L56c359:{c.instructions+=4;NFSU2_TR(0x56c359);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c35c:{NFSU2_TR(0x56c35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c35f:{NFSU2_TR(0x56c35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c362:{NFSU2_TR(0x56c362);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c365:L56c365:{c.instructions+=5;NFSU2_TR(0x56c365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c368:{NFSU2_TR(0x56c368);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c36d:{NFSU2_TR(0x56c36d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c36e:{NFSU2_TR(0x56c36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x1b2794c7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c375:{NFSU2_TR(0x56c375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c37aull));
TAIL_STATIC(0x4953e0u,495);
}
B56c37a:L56c37a:{c.instructions+=10;NFSU2_TR(0x56c37a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c37e:{NFSU2_TR(0x56c37e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56c381:{NFSU2_TR(0x56c381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c387:{NFSU2_TR(0x56c387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56c388:{NFSU2_TR(0x56c388);
__builtin_memmove((R+0),(R+24),4);
}
B56c38a:{NFSU2_TR(0x56c38a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56c38b:{NFSU2_TR(0x56c38b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56c38c:{NFSU2_TR(0x56c38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c393:{NFSU2_TR(0x56c393);
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
B56c396:{NFSU2_TR(0x56c396);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c3a0:L56c3a0:{c.instructions+=3;NFSU2_TR(0x56c3a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c3a1:{NFSU2_TR(0x56c3a1);
__builtin_memmove((R+24),(R+4),4);
}
B56c3a3:{NFSU2_TR(0x56c3a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c3a8ull));
TAIL_STATIC(0x5326f0u,532);
}
B56c3a8:L56c3a8:{c.instructions+=2;NFSU2_TR(0x56c3a8);
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
B56c3ad:{NFSU2_TR(0x56c3ad);
if(r1(R+518)){{goto L56c3b8;}}
}
B56c3af:L56c3af:{c.instructions+=2;NFSU2_TR(0x56c3af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c3b0:{NFSU2_TR(0x56c3b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c3b5ull));
TAIL_STATIC(0x575630u,575);
}
B56c3b5:L56c3b5:{c.instructions+=1;NFSU2_TR(0x56c3b5);
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
B56c3b8:L56c3b8:{c.instructions+=3;NFSU2_TR(0x56c3b8);
__builtin_memmove((R+0),(R+24),4);
}
B56c3ba:{NFSU2_TR(0x56c3ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56c3bb:{NFSU2_TR(0x56c3bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c3c0:L56c3c0:{c.instructions+=8;NFSU2_TR(0x56c3c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c3c2:{NFSU2_TR(0x56c3c2);
u8 U[4];
w4(U+0,u32(0x7786f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c3c7:{NFSU2_TR(0x56c3c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c3cd:{NFSU2_TR(0x56c3cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c3ce:{NFSU2_TR(0x56c3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c3d5:{NFSU2_TR(0x56c3d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c3d6:{NFSU2_TR(0x56c3d6);
u8 U[4];
w4(U+0,u32(0x124ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c3db:{NFSU2_TR(0x56c3db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c3e0ull));
TAIL_STATIC(0x575620u,575);
}
B56c3e0:L56c3e0:{c.instructions+=5;NFSU2_TR(0x56c3e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56c3e3:{NFSU2_TR(0x56c3e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B56c3e7:{NFSU2_TR(0x56c3e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c3e9:{NFSU2_TR(0x56c3e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c3f1:{NFSU2_TR(0x56c3f1);
if(r1(R+518)){{goto L56c40e;}}
}
B56c3f3:L56c3f3:{c.instructions+=4;NFSU2_TR(0x56c3f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c3f7:{NFSU2_TR(0x56c3f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c3f8:{NFSU2_TR(0x56c3f8);
__builtin_memmove((R+4),(R+0),4);
}
B56c3fa:{NFSU2_TR(0x56c3fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c3ffull));
TAIL_STATIC(0x56bf70u,56b);
}
B56c3ff:L56c3ff:{c.instructions+=4;NFSU2_TR(0x56c3ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c403:{NFSU2_TR(0x56c403);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c40a:{NFSU2_TR(0x56c40a);
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
B56c40d:{NFSU2_TR(0x56c40d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c40e:L56c40e:{c.instructions+=5;NFSU2_TR(0x56c40e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c412:{NFSU2_TR(0x56c412);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56c414:{NFSU2_TR(0x56c414);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c41b:{NFSU2_TR(0x56c41b);
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
B56c41e:{NFSU2_TR(0x56c41e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c420:L56c420:{c.instructions+=8;NFSU2_TR(0x56c420);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c422:{NFSU2_TR(0x56c422);
u8 U[4];
w4(U+0,u32(0x778714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c427:{NFSU2_TR(0x56c427);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c42d:{NFSU2_TR(0x56c42d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c42e:{NFSU2_TR(0x56c42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c435:{NFSU2_TR(0x56c435);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c436:{NFSU2_TR(0x56c436);
u8 U[4];
w4(U+0,u32(0x12cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c43b:{NFSU2_TR(0x56c43b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c440ull));
TAIL_STATIC(0x575620u,575);
}
B56c440:L56c440:{c.instructions+=5;NFSU2_TR(0x56c440);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B56c443:{NFSU2_TR(0x56c443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B56c447:{NFSU2_TR(0x56c447);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c449:{NFSU2_TR(0x56c449);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c451:{NFSU2_TR(0x56c451);
if(r1(R+518)){{goto L56c46e;}}
}
B56c453:L56c453:{c.instructions+=4;NFSU2_TR(0x56c453);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c457:{NFSU2_TR(0x56c457);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c458:{NFSU2_TR(0x56c458);
__builtin_memmove((R+4),(R+0),4);
}
B56c45a:{NFSU2_TR(0x56c45a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c45full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56c210u);}goto L56c210;}
}
B56c45f:L56c45f:{c.instructions+=4;NFSU2_TR(0x56c45f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c463:{NFSU2_TR(0x56c463);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c46a:{NFSU2_TR(0x56c46a);
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
B56c46d:{NFSU2_TR(0x56c46d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c46e:L56c46e:{c.instructions+=5;NFSU2_TR(0x56c46e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c472:{NFSU2_TR(0x56c472);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56c474:{NFSU2_TR(0x56c474);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c47b:{NFSU2_TR(0x56c47b);
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
B56c47e:{NFSU2_TR(0x56c47e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c480:L56c480:{c.instructions+=5;NFSU2_TR(0x56c480);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c484:{NFSU2_TR(0x56c484);
__builtin_memmove((R+4),gp(0x864628),4);
}
B56c48a:{NFSU2_TR(0x56c48a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c48b:{NFSU2_TR(0x56c48b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c48c:{NFSU2_TR(0x56c48c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c491ull));
TAIL_STATIC(0x43f920u,43f);
}
B56c491:L56c491:{c.instructions+=2;NFSU2_TR(0x56c491);
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
B56c494:{NFSU2_TR(0x56c494);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c4a0:L56c4a0:{c.instructions+=2;NFSU2_TR(0x56c4a0);
w4(R+4,u32(0x89cf48ull));
}
B56c4a5:{NFSU2_TR(0x56c4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c4aaull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56c4aa:L56c4aa:{c.instructions+=3;NFSU2_TR(0x56c4aa);
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
B56c4ac:{NFSU2_TR(0x56c4ac);
w4(R+0,u32(0x8651acull));
}
B56c4b1:{NFSU2_TR(0x56c4b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c4b8;}}
}
B56c4b3:L56c4b3:{c.instructions+=1;NFSU2_TR(0x56c4b3);
w4(R+0,u32(0x86518cull));
}
B56c4b8:L56c4b8:{c.instructions+=1;NFSU2_TR(0x56c4b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c4c0:L56c4c0:{c.instructions+=3;NFSU2_TR(0x56c4c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c4c4:{NFSU2_TR(0x56c4c4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x34a07ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B56c4ca:{NFSU2_TR(0x56c4ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c4dd;}}
}
B56c4cc:L56c4cc:{c.instructions+=5;NFSU2_TR(0x56c4cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B56c4cf:{NFSU2_TR(0x56c4cf);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56c4d2:{NFSU2_TR(0x56c4d2);
__builtin_memmove(gp(0x864624),(R+0),4);
}
B56c4d7:{NFSU2_TR(0x56c4d7);
w4(R+0,u32(0x1ull));
}
B56c4dc:{NFSU2_TR(0x56c4dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c4dd:L56c4dd:{c.instructions+=2;NFSU2_TR(0x56c4dd);
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
B56c4df:{NFSU2_TR(0x56c4df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c4e0:L56c4e0:{c.instructions+=3;NFSU2_TR(0x56c4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c4e4:{NFSU2_TR(0x56c4e4);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x34a07ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x34a07ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x34a07ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B56c4ea:{NFSU2_TR(0x56c4ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c4fc;}}
}
B56c4ec:L56c4ec:{c.instructions+=3;NFSU2_TR(0x56c4ec);
s4(0x864624,u32(0x0ull));
}
B56c4f6:{NFSU2_TR(0x56c4f6);
w4(R+0,u32(0x1ull));
}
B56c4fb:{NFSU2_TR(0x56c4fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c4fc:L56c4fc:{c.instructions+=2;NFSU2_TR(0x56c4fc);
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
B56c4fe:{NFSU2_TR(0x56c4fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c500:L56c500:{c.instructions+=8;NFSU2_TR(0x56c500);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c501:{NFSU2_TR(0x56c501);
__builtin_memmove((R+12),gp(0x89e7d9),1);
}
B56c507:{NFSU2_TR(0x56c507);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c508:{NFSU2_TR(0x56c508);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B56c50a:{NFSU2_TR(0x56c50a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c50c:{NFSU2_TR(0x56c50c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c50d:{NFSU2_TR(0x56c50d);
__builtin_memmove((R+28),gp(0x890104),4);
}
B56c513:{NFSU2_TR(0x56c513);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c519;}}
}
B56c515:L56c515:{c.instructions+=2;NFSU2_TR(0x56c515);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c517:{NFSU2_TR(0x56c517);
if(r1(R+518)){{goto L56c51d;}}
}
B56c519:L56c519:{c.instructions+=2;NFSU2_TR(0x56c519);
w1(R+0,u8(0x4ull));
}
B56c51b:{NFSU2_TR(0x56c51b);
{goto L56c57d;}
}
B56c51d:L56c51d:{c.instructions+=3;NFSU2_TR(0x56c51d);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B56c522:{NFSU2_TR(0x56c522);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c524:{NFSU2_TR(0x56c524);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c52f;}}
}
B56c526:L56c526:{c.instructions+=3;NFSU2_TR(0x56c526);
__builtin_memmove((R+0),gp(0x890108),4);
}
B56c52b:{NFSU2_TR(0x56c52b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c52d:{NFSU2_TR(0x56c52d);
if(r1(R+518)){{goto L56c533;}}
}
B56c52f:L56c52f:{c.instructions+=2;NFSU2_TR(0x56c52f);
w1(R+0,u8(0x2ull));
}
B56c531:{NFSU2_TR(0x56c531);
{goto L56c57d;}
}
B56c533:L56c533:{c.instructions+=3;NFSU2_TR(0x56c533);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B56c538:{NFSU2_TR(0x56c538);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c53a:{NFSU2_TR(0x56c53a);
if(r1(R+518)){{goto L56c540;}}
}
B56c53c:L56c53c:{c.instructions+=2;NFSU2_TR(0x56c53c);
w1(R+0,u8(0x8ull));
}
B56c53e:{NFSU2_TR(0x56c53e);
{goto L56c57d;}
}
B56c540:L56c540:{c.instructions+=3;NFSU2_TR(0x56c540);
__builtin_memmove((R+0),gp(0x89e7e5),1);
}
B56c545:{NFSU2_TR(0x56c545);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c547:{NFSU2_TR(0x56c547);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c552;}}
}
B56c549:L56c549:{c.instructions+=3;NFSU2_TR(0x56c549);
__builtin_memmove((R+0),gp(0x836474),4);
}
B56c54e:{NFSU2_TR(0x56c54e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c550:{NFSU2_TR(0x56c550);
if(r1(R+518)){{goto L56c556;}}
}
B56c552:L56c552:{c.instructions+=2;NFSU2_TR(0x56c552);
w1(R+0,u8(0x20ull));
}
B56c554:{NFSU2_TR(0x56c554);
{goto L56c57d;}
}
B56c556:L56c556:{c.instructions+=3;NFSU2_TR(0x56c556);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B56c55b:{NFSU2_TR(0x56c55b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c55d:{NFSU2_TR(0x56c55d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c568;}}
}
B56c55f:L56c55f:{c.instructions+=3;NFSU2_TR(0x56c55f);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B56c564:{NFSU2_TR(0x56c564);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c566:{NFSU2_TR(0x56c566);
if(r1(R+518)){{goto L56c56c;}}
}
B56c568:L56c568:{c.instructions+=2;NFSU2_TR(0x56c568);
w1(R+0,u8(0x10ull));
}
B56c56a:{NFSU2_TR(0x56c56a);
{goto L56c57d;}
}
B56c56c:L56c56c:{c.instructions+=6;NFSU2_TR(0x56c56c);
__builtin_memmove((R+8),gp(0x89e7e1),1);
}
B56c572:{NFSU2_TR(0x56c572);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c574:{NFSU2_TR(0x56c574);
__builtin_memmove((R+0),(R+518),1);
}
B56c577:{NFSU2_TR(0x56c577);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B56c579:{NFSU2_TR(0x56c579);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x3full))));
}
B56c57b:{NFSU2_TR(0x56c57b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B56c57d:L56c57d:{c.instructions+=4;NFSU2_TR(0x56c57d);
__builtin_memmove((R+4),gp(0x864624),4);
}
B56c583:{NFSU2_TR(0x56c583);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x37ull))));
}
B56c586:{NFSU2_TR(0x56c586);
w4(R+8,u32(0xdull));
}
B56c58b:{NFSU2_TR(0x56c58b);
{goto L56c590;}
}
B56c590:L56c590:{c.instructions+=2;NFSU2_TR(0x56c590);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B56c593:{NFSU2_TR(0x56c593);
if(r1(R+518)){{goto L56c596;}}
}
B56c595:L56c595:{c.instructions+=1;NFSU2_TR(0x56c595);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B56c596:L56c596:{c.instructions+=2;NFSU2_TR(0x56c596);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B56c598:{NFSU2_TR(0x56c598);
if(r1(R+518)){{goto L56c59b;}}
}
B56c59a:L56c59a:{c.instructions+=1;NFSU2_TR(0x56c59a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B56c59b:L56c59b:{c.instructions+=2;NFSU2_TR(0x56c59b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B56c59e:{NFSU2_TR(0x56c59e);
if(r1(R+518)){{goto L56c5a1;}}
}
B56c5a0:L56c5a0:{c.instructions+=1;NFSU2_TR(0x56c5a0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B56c5a1:L56c5a1:{c.instructions+=3;NFSU2_TR(0x56c5a1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B56c5a7:{NFSU2_TR(0x56c5a7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B56c5a8:{NFSU2_TR(0x56c5a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56c590u);}goto L56c590;}}
}
B56c5aa:L56c5aa:{c.instructions+=2;NFSU2_TR(0x56c5aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c5ac:{NFSU2_TR(0x56c5ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c5b2;}}
}
B56c5ae:L56c5ae:{c.instructions+=2;NFSU2_TR(0x56c5ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c5b0:{NFSU2_TR(0x56c5b0);
if(r1(R+518)){{goto L56c5c1;}}
}
B56c5b2:L56c5b2:{c.instructions+=4;NFSU2_TR(0x56c5b2);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B56c5b7:{NFSU2_TR(0x56c5b7);
__builtin_memmove((R+4),gp(0x89e7c4),4);
}
B56c5bd:{NFSU2_TR(0x56c5bd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B56c5bf:{NFSU2_TR(0x56c5bf);
{goto L56c5c6;}
}
B56c5c1:L56c5c1:{c.instructions+=1;NFSU2_TR(0x56c5c1);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B56c5c6:L56c5c6:{c.instructions+=6;NFSU2_TR(0x56c5c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B56c5c9:{NFSU2_TR(0x56c5c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c5cb:{NFSU2_TR(0x56c5cb);
u8 U[4];
w4(U+0,u32(0x79dbd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c5d0:{NFSU2_TR(0x56c5d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c5d1:{NFSU2_TR(0x56c5d1);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c5d3:{NFSU2_TR(0x56c5d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c5d8ull));
TAIL_STATIC(0x440df0u,440);
}
B56c5d8:L56c5d8:{c.instructions+=6;NFSU2_TR(0x56c5d8);
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
B56c5db:{NFSU2_TR(0x56c5db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56c5dc:{NFSU2_TR(0x56c5dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56c5dd:{NFSU2_TR(0x56c5dd);
__builtin_memmove(gp(0x864628),(R+0),4);
}
B56c5e2:{NFSU2_TR(0x56c5e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56c5e3:{NFSU2_TR(0x56c5e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c5f0:L56c5f0:{c.instructions+=3;NFSU2_TR(0x56c5f0);
__builtin_memmove((R+0),gp(0x864628),4);
}
B56c5f5:{NFSU2_TR(0x56c5f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c5f6:{NFSU2_TR(0x56c5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c5fbull));
TAIL_STATIC(0x440e40u,440);
}
B56c5fb:L56c5fb:{c.instructions+=2;NFSU2_TR(0x56c5fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56c5fc:{NFSU2_TR(0x56c5fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c600:L56c600:{c.instructions+=4;NFSU2_TR(0x56c600);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B56c602:{NFSU2_TR(0x56c602);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B56c604:{NFSU2_TR(0x56c604);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x27ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x27ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x27ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56c607:{NFSU2_TR(0x56c607);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L56c670;}}
}
B56c609:L56c609:{c.instructions+=12;NFSU2_TR(0x56c609);
w4(R+8,u32(r1(R+8)));
}
B56c60c:{NFSU2_TR(0x56c60c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c60d:{NFSU2_TR(0x56c60d);
__builtin_memmove((R+24),gp(0x864624),4);
}
B56c613:{NFSU2_TR(0x56c613);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B56c616:{NFSU2_TR(0x56c616);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B56c619:{NFSU2_TR(0x56c619);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B56c61b:{NFSU2_TR(0x56c61b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c61e:{NFSU2_TR(0x56c61e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c624:{NFSU2_TR(0x56c624);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56c626:{NFSU2_TR(0x56c626);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56c628:{NFSU2_TR(0x56c628);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56c62b:{NFSU2_TR(0x56c62b);
if(r1(R+514)){{goto L56c65c;}}
}
B56c62d:L56c62d:{c.instructions+=7;NFSU2_TR(0x56c62d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56c630:{NFSU2_TR(0x56c630);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56c632:{NFSU2_TR(0x56c632);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c634:{NFSU2_TR(0x56c634);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c637:{NFSU2_TR(0x56c637);
{u32 ea_=u32((r4(R+8)*4u)+u32(8365344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c63e:{NFSU2_TR(0x56c63e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c644:{NFSU2_TR(0x56c644);
if(r1(R+518)){{goto L56c64b;}}
}
B56c646:L56c646:{c.instructions+=2;NFSU2_TR(0x56c646);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56c648:{NFSU2_TR(0x56c648);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c64b:L56c64b:{c.instructions+=6;NFSU2_TR(0x56c64b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56c64e:{NFSU2_TR(0x56c64e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B56c650:{NFSU2_TR(0x56c650);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B56c652:{NFSU2_TR(0x56c652);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B56c654:{NFSU2_TR(0x56c654);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56c65a:{NFSU2_TR(0x56c65a);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B56c65c:L56c65c:{c.instructions+=7;NFSU2_TR(0x56c65c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56c65f:{NFSU2_TR(0x56c65f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56c660:{NFSU2_TR(0x56c660);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56c662:{NFSU2_TR(0x56c662);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56c664:{NFSU2_TR(0x56c664);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56c666:{NFSU2_TR(0x56c666);
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
B56c669:{NFSU2_TR(0x56c669);
if(r1(R+514)){{goto L56c66e;}}
}
B56c66b:L56c66b:{c.instructions+=2;NFSU2_TR(0x56c66b);
w1(R+0,u8(0x1ull));
}
B56c66d:{NFSU2_TR(0x56c66d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c66e:L56c66e:{c.instructions+=1;NFSU2_TR(0x56c66e);
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
B56c670:L56c670:{c.instructions+=1;NFSU2_TR(0x56c670);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c680:L56c680:{c.instructions+=8;NFSU2_TR(0x56c680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c681:{NFSU2_TR(0x56c681);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c682:{NFSU2_TR(0x56c682);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56c686:{NFSU2_TR(0x56c686);
u8 U[4];
w4(U+0,u32(0x79dbe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c68b:{NFSU2_TR(0x56c68b);
__builtin_memmove((R+24),(R+4),4);
}
B56c68d:{NFSU2_TR(0x56c68d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c68f:{NFSU2_TR(0x56c68f);
__builtin_memmove((R+4),(R+28),4);
}
B56c691:{NFSU2_TR(0x56c691);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c696ull));
TAIL_STATIC(0x578ce0u,578);
}
B56c696:L56c696:{c.instructions+=6;NFSU2_TR(0x56c696);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56c699:{NFSU2_TR(0x56c699);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56c69d:{NFSU2_TR(0x56c69d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c69e:{NFSU2_TR(0x56c69e);
__builtin_memmove((R+4),(R+28),4);
}
B56c6a0:{NFSU2_TR(0x56c6a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c6a4:{NFSU2_TR(0x56c6a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c6a9ull));
TAIL_STATIC(0x5716c0u,571);
}
B56c6a9:L56c6a9:{c.instructions+=9;NFSU2_TR(0x56c6a9);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B56c6ae:{NFSU2_TR(0x56c6ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6b0:{NFSU2_TR(0x56c6b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6b2:{NFSU2_TR(0x56c6b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6b4:{NFSU2_TR(0x56c6b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56c6b7:{NFSU2_TR(0x56c6b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6b8:{NFSU2_TR(0x56c6b8);
__builtin_memmove((R+4),(R+28),4);
}
B56c6ba:{NFSU2_TR(0x56c6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c6bd:{NFSU2_TR(0x56c6bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c6c2ull));
TAIL_STATIC(0x571640u,571);
}
B56c6c2:L56c6c2:{c.instructions+=4;NFSU2_TR(0x56c6c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B56c6c5:{NFSU2_TR(0x56c6c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6c6:{NFSU2_TR(0x56c6c6);
__builtin_memmove((R+4),(R+28),4);
}
B56c6c8:{NFSU2_TR(0x56c6c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c6cdull));
TAIL_STATIC(0x571770u,571);
}
B56c6cd:L56c6cd:{c.instructions+=7;NFSU2_TR(0x56c6cd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6cf:{NFSU2_TR(0x56c6cf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6d1:{NFSU2_TR(0x56c6d1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6d3:{NFSU2_TR(0x56c6d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B56c6d6:{NFSU2_TR(0x56c6d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6d7:{NFSU2_TR(0x56c6d7);
__builtin_memmove((R+4),(R+28),4);
}
B56c6d9:{NFSU2_TR(0x56c6d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c6deull));
TAIL_STATIC(0x571640u,571);
}
B56c6de:L56c6de:{c.instructions+=4;NFSU2_TR(0x56c6de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56c6e1:{NFSU2_TR(0x56c6e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6e2:{NFSU2_TR(0x56c6e2);
__builtin_memmove((R+4),(R+28),4);
}
B56c6e4:{NFSU2_TR(0x56c6e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c6e9ull));
TAIL_STATIC(0x571770u,571);
}
B56c6e9:L56c6e9:{c.instructions+=4;NFSU2_TR(0x56c6e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56c6ec:{NFSU2_TR(0x56c6ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6ed:{NFSU2_TR(0x56c6ed);
__builtin_memmove((R+4),(R+28),4);
}
B56c6ef:{NFSU2_TR(0x56c6ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c6f4ull));
TAIL_STATIC(0x571770u,571);
}
B56c6f4:L56c6f4:{c.instructions+=4;NFSU2_TR(0x56c6f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+8),(U+0),4);
}
B56c6f7:{NFSU2_TR(0x56c6f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c6f8:{NFSU2_TR(0x56c6f8);
__builtin_memmove((R+4),(R+28),4);
}
B56c6fa:{NFSU2_TR(0x56c6fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c6ffull));
TAIL_STATIC(0x571770u,571);
}
B56c6ff:L56c6ff:{c.instructions+=7;NFSU2_TR(0x56c6ff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c701:{NFSU2_TR(0x56c701);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c703:{NFSU2_TR(0x56c703);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c705:{NFSU2_TR(0x56c705);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56c708:{NFSU2_TR(0x56c708);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c709:{NFSU2_TR(0x56c709);
__builtin_memmove((R+4),(R+28),4);
}
B56c70b:{NFSU2_TR(0x56c70b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c710ull));
TAIL_STATIC(0x571640u,571);
}
B56c710:L56c710:{c.instructions+=4;NFSU2_TR(0x56c710);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56c713:{NFSU2_TR(0x56c713);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c714:{NFSU2_TR(0x56c714);
__builtin_memmove((R+4),(R+28),4);
}
B56c716:{NFSU2_TR(0x56c716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c71bull));
TAIL_STATIC(0x571770u,571);
}
B56c71b:L56c71b:{c.instructions+=4;NFSU2_TR(0x56c71b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+8),(U+0),4);
}
B56c71e:{NFSU2_TR(0x56c71e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c71f:{NFSU2_TR(0x56c71f);
__builtin_memmove((R+4),(R+28),4);
}
B56c721:{NFSU2_TR(0x56c721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c726ull));
TAIL_STATIC(0x571770u,571);
}
B56c726:L56c726:{c.instructions+=4;NFSU2_TR(0x56c726);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3cull))));
}
B56c729:{NFSU2_TR(0x56c729);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c72a:{NFSU2_TR(0x56c72a);
__builtin_memmove((R+4),(R+28),4);
}
B56c72c:{NFSU2_TR(0x56c72c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c731ull));
TAIL_STATIC(0x571770u,571);
}
B56c731:L56c731:{c.instructions+=2;NFSU2_TR(0x56c731);
__builtin_memmove((R+4),(R+28),4);
}
B56c733:{NFSU2_TR(0x56c733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c738ull));
TAIL_STATIC(0x578d90u,578);
}
B56c738:L56c738:{c.instructions+=3;NFSU2_TR(0x56c738);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56c739:{NFSU2_TR(0x56c739);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56c73a:{NFSU2_TR(0x56c73a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c740:L56c740:{c.instructions+=16;NFSU2_TR(0x56c740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B56c743:{NFSU2_TR(0x56c743);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56c746:{NFSU2_TR(0x56c746);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c749:{NFSU2_TR(0x56c749);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56c74c:{NFSU2_TR(0x56c74c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B56c750:{NFSU2_TR(0x56c750);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56c753:{NFSU2_TR(0x56c753);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56c757:{NFSU2_TR(0x56c757);
{u32 ea_=u32(u32(7985732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c75d:{NFSU2_TR(0x56c75d);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56c760:{NFSU2_TR(0x56c760);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B56c762:{NFSU2_TR(0x56c762);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c765:{NFSU2_TR(0x56c765);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56c76b:{NFSU2_TR(0x56c76b);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c76e:{NFSU2_TR(0x56c76e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56c770:{NFSU2_TR(0x56c770);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c773:{NFSU2_TR(0x56c773);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c784;}}
}
B56c775:L56c775:{c.instructions+=5;NFSU2_TR(0x56c775);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B56c779:{NFSU2_TR(0x56c779);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56c77b:{NFSU2_TR(0x56c77b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56c77d:{NFSU2_TR(0x56c77d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56c780:{NFSU2_TR(0x56c780);
if(r1(R+514)){{goto L56c7a7;}}
}
B56c782:L56c782:{c.instructions+=1;NFSU2_TR(0x56c782);
{goto L56c7a1;}
}
B56c784:L56c784:{c.instructions+=4;NFSU2_TR(0x56c784);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56c78a:{NFSU2_TR(0x56c78a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56c78c:{NFSU2_TR(0x56c78c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56c78f:{NFSU2_TR(0x56c78f);
if(r1(R+514)){{goto L56c7a7;}}
}
B56c791:L56c791:{c.instructions+=6;NFSU2_TR(0x56c791);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c794:{NFSU2_TR(0x56c794);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B56c798:{NFSU2_TR(0x56c798);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56c79a:{NFSU2_TR(0x56c79a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56c79c:{NFSU2_TR(0x56c79c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c79f:{NFSU2_TR(0x56c79f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c7a7;}}
}
B56c7a1:L56c7a1:{c.instructions+=2;NFSU2_TR(0x56c7a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56c7a3:{NFSU2_TR(0x56c7a3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c7a7:L56c7a7:{c.instructions+=7;NFSU2_TR(0x56c7a7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c7ab:{NFSU2_TR(0x56c7ab);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56c7af:{NFSU2_TR(0x56c7af);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B56c7b1:{NFSU2_TR(0x56c7b1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56c7b3:{NFSU2_TR(0x56c7b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56c7b5:{NFSU2_TR(0x56c7b5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56c7b8:{NFSU2_TR(0x56c7b8);
if(r1(R+514)){{goto L56c7be;}}
}
B56c7ba:L56c7ba:{c.instructions+=2;NFSU2_TR(0x56c7ba);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56c7bc:{NFSU2_TR(0x56c7bc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B56c7be:L56c7be:{c.instructions+=4;NFSU2_TR(0x56c7be);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56c7c1:{NFSU2_TR(0x56c7c1);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56c7c4:{NFSU2_TR(0x56c7c4);
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
B56c7c7:{NFSU2_TR(0x56c7c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c7d0:L56c7d0:{c.instructions+=5;NFSU2_TR(0x56c7d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56c7d4:{NFSU2_TR(0x56c7d4);
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
B56c7d6:{NFSU2_TR(0x56c7d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c7d7:{NFSU2_TR(0x56c7d7);
__builtin_memmove((R+24),(R+4),4);
}
B56c7d9:{NFSU2_TR(0x56c7d9);
if(r1(R+518)){{goto L56c891;}}
}
B56c7df:L56c7df:{c.instructions+=5;NFSU2_TR(0x56c7df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c7e0:{NFSU2_TR(0x56c7e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c7e1:{NFSU2_TR(0x56c7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c7eb:{NFSU2_TR(0x56c7eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56c7ee:{NFSU2_TR(0x56c7ee);
w4(R+12,u32(0xdull));
}
B56c7f3:L56c7f3:{c.instructions+=3;NFSU2_TR(0x56c7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c7f6:{NFSU2_TR(0x56c7f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c7f8:{NFSU2_TR(0x56c7f8);
if(r1(R+518)){{goto L56c824;}}
}
B56c7fa:L56c7fa:{c.instructions+=3;NFSU2_TR(0x56c7fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56c7fd:{NFSU2_TR(0x56c7fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c7ff:{NFSU2_TR(0x56c7ff);
if(r1(R+518)){{goto L56c824;}}
}
B56c801:L56c801:{c.instructions+=3;NFSU2_TR(0x56c801);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56c804:{NFSU2_TR(0x56c804);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c806:{NFSU2_TR(0x56c806);
if(r1(R+518)){{goto L56c824;}}
}
B56c808:L56c808:{c.instructions+=2;NFSU2_TR(0x56c808);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c80b:{NFSU2_TR(0x56c80b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c810ull));
TAIL_STATIC(0x75bed4u,75b);
}
B56c810:L56c810:{c.instructions+=4;NFSU2_TR(0x56c810);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c814:{NFSU2_TR(0x56c814);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56c818:{NFSU2_TR(0x56c818);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56c81e:{NFSU2_TR(0x56c81e);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56c824:L56c824:{c.instructions+=3;NFSU2_TR(0x56c824);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c827:{NFSU2_TR(0x56c827);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c829:{NFSU2_TR(0x56c829);
if(r1(R+518)){{goto L56c855;}}
}
B56c82b:L56c82b:{c.instructions+=3;NFSU2_TR(0x56c82b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56c82e:{NFSU2_TR(0x56c82e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c830:{NFSU2_TR(0x56c830);
if(r1(R+518)){{goto L56c855;}}
}
B56c832:L56c832:{c.instructions+=3;NFSU2_TR(0x56c832);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56c835:{NFSU2_TR(0x56c835);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c837:{NFSU2_TR(0x56c837);
if(r1(R+518)){{goto L56c855;}}
}
B56c839:L56c839:{c.instructions+=2;NFSU2_TR(0x56c839);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c83c:{NFSU2_TR(0x56c83c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c841ull));
TAIL_STATIC(0x75bed4u,75b);
}
B56c841:L56c841:{c.instructions+=4;NFSU2_TR(0x56c841);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c845:{NFSU2_TR(0x56c845);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56c849:{NFSU2_TR(0x56c849);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56c84f:{NFSU2_TR(0x56c84f);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56c855:L56c855:{c.instructions+=3;NFSU2_TR(0x56c855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56c857:{NFSU2_TR(0x56c857);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c859:{NFSU2_TR(0x56c859);
if(r1(R+518)){{goto L56c885;}}
}
B56c85b:L56c85b:{c.instructions+=3;NFSU2_TR(0x56c85b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56c85e:{NFSU2_TR(0x56c85e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c860:{NFSU2_TR(0x56c860);
if(r1(R+518)){{goto L56c885;}}
}
B56c862:L56c862:{c.instructions+=3;NFSU2_TR(0x56c862);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56c865:{NFSU2_TR(0x56c865);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c867:{NFSU2_TR(0x56c867);
if(r1(R+518)){{goto L56c885;}}
}
B56c869:L56c869:{c.instructions+=2;NFSU2_TR(0x56c869);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c86c:{NFSU2_TR(0x56c86c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c871ull));
TAIL_STATIC(0x75bed4u,75b);
}
B56c871:L56c871:{c.instructions+=4;NFSU2_TR(0x56c871);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c875:{NFSU2_TR(0x56c875);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56c879:{NFSU2_TR(0x56c879);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56c87f:{NFSU2_TR(0x56c87f);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56c885:L56c885:{c.instructions+=3;NFSU2_TR(0x56c885);
w1(R+512,carry<u32>(r4(R+28),u32(0xcull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B56c888:{NFSU2_TR(0x56c888);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56c889:{NFSU2_TR(0x56c889);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56c7f3u);}goto L56c7f3;}}
}
B56c88f:L56c88f:{c.instructions+=2;NFSU2_TR(0x56c88f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56c890:{NFSU2_TR(0x56c890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56c891:L56c891:{c.instructions+=3;NFSU2_TR(0x56c891);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c897:{NFSU2_TR(0x56c897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56c898:{NFSU2_TR(0x56c898);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c8a0:L56c8a0:{c.instructions+=9;NFSU2_TR(0x56c8a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c8a1:{NFSU2_TR(0x56c8a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B56c8a5:{NFSU2_TR(0x56c8a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c8a6:{NFSU2_TR(0x56c8a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c8a7:{NFSU2_TR(0x56c8a7);
u8 U[4];
w4(U+0,u32(0x79dbf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c8ac:{NFSU2_TR(0x56c8ac);
__builtin_memmove((R+28),(R+4),4);
}
B56c8ae:{NFSU2_TR(0x56c8ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c8b0:{NFSU2_TR(0x56c8b0);
__builtin_memmove((R+4),(R+12),4);
}
B56c8b2:{NFSU2_TR(0x56c8b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c8b7ull));
TAIL_STATIC(0x578ce0u,578);
}
B56c8b7:L56c8b7:{c.instructions+=4;NFSU2_TR(0x56c8b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B56c8bd:{NFSU2_TR(0x56c8bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c8be:{NFSU2_TR(0x56c8be);
__builtin_memmove((R+4),(R+12),4);
}
B56c8c0:{NFSU2_TR(0x56c8c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c8c5ull));
TAIL_STATIC(0x571770u,571);
}
B56c8c5:L56c8c5:{c.instructions+=1;NFSU2_TR(0x56c8c5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B56c8c7:L56c8c7:{c.instructions+=3;NFSU2_TR(0x56c8c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B56c8ca:{NFSU2_TR(0x56c8ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c8cc:{NFSU2_TR(0x56c8cc);
if(r1(R+518)){{goto L56c8db;}}
}
B56c8ce:L56c8ce:{c.instructions+=3;NFSU2_TR(0x56c8ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56c8d1:{NFSU2_TR(0x56c8d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c8d3:{NFSU2_TR(0x56c8d3);
if(r1(R+518)){{goto L56c8db;}}
}
B56c8d5:L56c8d5:{c.instructions+=2;NFSU2_TR(0x56c8d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c8d6:{NFSU2_TR(0x56c8d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c8dbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56c680u);}goto L56c680;}
}
B56c8db:L56c8db:{c.instructions+=3;NFSU2_TR(0x56c8db);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B56c8dc:{NFSU2_TR(0x56c8dc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x27ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x27ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56c8df:{NFSU2_TR(0x56c8df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x56c8c7u);}goto L56c8c7;}}
}
B56c8e1:L56c8e1:{c.instructions+=2;NFSU2_TR(0x56c8e1);
__builtin_memmove((R+4),(R+12),4);
}
B56c8e3:{NFSU2_TR(0x56c8e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c8e8ull));
TAIL_STATIC(0x578d90u,578);
}
B56c8e8:L56c8e8:{c.instructions+=4;NFSU2_TR(0x56c8e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56c8e9:{NFSU2_TR(0x56c8e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56c8ea:{NFSU2_TR(0x56c8ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56c8eb:{NFSU2_TR(0x56c8eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c8f0:L56c8f0:{c.instructions+=24;NFSU2_TR(0x56c8f0);
__builtin_memmove((R+0),(R+4),4);
}
B56c8f2:{NFSU2_TR(0x56c8f2);
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
B56c8f4:{NFSU2_TR(0x56c8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c8f7:{NFSU2_TR(0x56c8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c8fa:{NFSU2_TR(0x56c8fa);
w4(R+8,u32(0x3f800000ull));
}
B56c8ff:{NFSU2_TR(0x56c8ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c902:{NFSU2_TR(0x56c902);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B56c904:{NFSU2_TR(0x56c904);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c90b:{NFSU2_TR(0x56c90b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c90e:{NFSU2_TR(0x56c90e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c911:{NFSU2_TR(0x56c911);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c914:{NFSU2_TR(0x56c914);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56c917:{NFSU2_TR(0x56c917);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c91e:{NFSU2_TR(0x56c91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c921:{NFSU2_TR(0x56c921);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c924:{NFSU2_TR(0x56c924);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c927:{NFSU2_TR(0x56c927);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c92a:{NFSU2_TR(0x56c92a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c92d:{NFSU2_TR(0x56c92d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c930:{NFSU2_TR(0x56c930);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c933:{NFSU2_TR(0x56c933);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c936:{NFSU2_TR(0x56c936);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c939:{NFSU2_TR(0x56c939);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c93c:{NFSU2_TR(0x56c93c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c940:L56c940:{c.instructions+=10;NFSU2_TR(0x56c940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B56c943:{NFSU2_TR(0x56c943);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c944:{NFSU2_TR(0x56c944);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c945:{NFSU2_TR(0x56c945);
__builtin_memmove((R+28),(R+4),4);
}
B56c947:{NFSU2_TR(0x56c947);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56c94a:{NFSU2_TR(0x56c94a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c94d:{NFSU2_TR(0x56c94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c953:{NFSU2_TR(0x56c953);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c955:{NFSU2_TR(0x56c955);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56c95d:{NFSU2_TR(0x56c95d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56c96d;}}
}
B56c95f:L56c95f:{c.instructions+=5;NFSU2_TR(0x56c95f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c965:{NFSU2_TR(0x56c965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56c966:{NFSU2_TR(0x56c966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56c967:{NFSU2_TR(0x56c967);
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
B56c96a:{NFSU2_TR(0x56c96a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56c96d:L56c96d:{c.instructions+=6;NFSU2_TR(0x56c96d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c970:{NFSU2_TR(0x56c970);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c973:{NFSU2_TR(0x56c973);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56c976:{NFSU2_TR(0x56c976);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56c978:{NFSU2_TR(0x56c978);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c97b:{NFSU2_TR(0x56c97b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ca50;}}
}
B56c981:L56c981:{c.instructions+=3;NFSU2_TR(0x56c981);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56c982:{NFSU2_TR(0x56c982);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56c985:{NFSU2_TR(0x56c985);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c98aull));
TAIL_STATIC(0x59fa10u,59f);
}
B56c98a:L56c98a:{c.instructions+=8;NFSU2_TR(0x56c98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c98d:{NFSU2_TR(0x56c98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56c993:{NFSU2_TR(0x56c993);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56c996:{NFSU2_TR(0x56c996);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B56c998:{NFSU2_TR(0x56c998);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56c99c:{NFSU2_TR(0x56c99c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56c99f:{NFSU2_TR(0x56c99f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56c9a3:{NFSU2_TR(0x56c9a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c9a8ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B56c9a8:L56c9a8:{c.instructions+=8;NFSU2_TR(0x56c9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B56c9ab:{NFSU2_TR(0x56c9ab);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c9b1:{NFSU2_TR(0x56c9b1);
w4(R+12,u32(s32(s8(r1(R+0)))));
}
B56c9b4:{NFSU2_TR(0x56c9b4);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B56c9b6:{NFSU2_TR(0x56c9b6);
{u32 ea_=u32(u32(7985912u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56c9bc:{NFSU2_TR(0x56c9bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56c9be:{NFSU2_TR(0x56c9be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c9c1:{NFSU2_TR(0x56c9c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c9e2;}}
}
B56c9c3:L56c9c3:{c.instructions+=2;NFSU2_TR(0x56c9c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56c9c6:{NFSU2_TR(0x56c9c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56c9cbull));
TAIL_STATIC(0x59fa10u,59f);
}
B56c9cb:L56c9cb:{c.instructions+=5;NFSU2_TR(0x56c9cb);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56c9d1:{NFSU2_TR(0x56c9d1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56c9d7:{NFSU2_TR(0x56c9d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56c9d9:{NFSU2_TR(0x56c9d9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56c9dc:{NFSU2_TR(0x56c9dc);
if(r1(R+514)){{goto L56c9e2;}}
}
B56c9de:L56c9de:{c.instructions+=2;NFSU2_TR(0x56c9de);
w1(R+0,u8(0x1ull));
}
B56c9e0:{NFSU2_TR(0x56c9e0);
{goto L56c9e4;}
}
B56c9e2:L56c9e2:{c.instructions+=1;NFSU2_TR(0x56c9e2);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B56c9e4:L56c9e4:{c.instructions+=5;NFSU2_TR(0x56c9e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B56c9e6:{NFSU2_TR(0x56c9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56c9e8:{NFSU2_TR(0x56c9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56c9eb:{NFSU2_TR(0x56c9eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56c9ed:{NFSU2_TR(0x56c9ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c9fc;}}
}
B56c9ef:L56c9ef:{c.instructions+=2;NFSU2_TR(0x56c9ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56c9f1:{NFSU2_TR(0x56c9f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56c9fc;}}
}
B56c9f3:L56c9f3:{c.instructions+=2;NFSU2_TR(0x56c9f3);
{u32 ea_=u32((r4(R+12)*4u)+u32(7985760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56c9fa:{NFSU2_TR(0x56c9fa);
{goto L56ca03;}
}
B56c9fc:L56c9fc:{c.instructions+=1;NFSU2_TR(0x56c9fc);
{u32 ea_=u32((r4(R+12)*4u)+u32(7985744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ca03:L56ca03:{c.instructions+=4;NFSU2_TR(0x56ca03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ca06:{NFSU2_TR(0x56ca06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ca08:{NFSU2_TR(0x56ca08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ca09:{NFSU2_TR(0x56ca09);
if(r1(R+518)){{goto L56ca12;}}
}
B56ca0b:L56ca0b:{c.instructions+=2;NFSU2_TR(0x56ca0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ca10:{NFSU2_TR(0x56ca10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ca4e;}}
}
B56ca12:L56ca12:{c.instructions+=6;NFSU2_TR(0x56ca12);
{u32 ea_=u32(u32(7985908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ca18:{NFSU2_TR(0x56ca18);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56ca1e:{NFSU2_TR(0x56ca1e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56ca22:{NFSU2_TR(0x56ca22);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ca24:{NFSU2_TR(0x56ca24);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56ca27:{NFSU2_TR(0x56ca27);
if(r1(R+514)){{goto L56ca4e;}}
}
B56ca29:L56ca29:{c.instructions+=6;NFSU2_TR(0x56ca29);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ca2d:{NFSU2_TR(0x56ca2d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56ca2f:{NFSU2_TR(0x56ca2f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ca31:{NFSU2_TR(0x56ca31);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56ca33:{NFSU2_TR(0x56ca33);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ca36:{NFSU2_TR(0x56ca36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ca50;}}
}
B56ca38:L56ca38:{c.instructions+=6;NFSU2_TR(0x56ca38);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ca3c:{NFSU2_TR(0x56ca3c);
{u32 ea_=u32(u32(7985756u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B56ca42:{NFSU2_TR(0x56ca42);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B56ca44:{NFSU2_TR(0x56ca44);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B56ca46:{NFSU2_TR(0x56ca46);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56ca4a:{NFSU2_TR(0x56ca4a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56ca4e:L56ca4e:{c.instructions+=1;NFSU2_TR(0x56ca4e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56ca50:L56ca50:{c.instructions+=8;NFSU2_TR(0x56ca50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ca53:{NFSU2_TR(0x56ca53);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ca56:{NFSU2_TR(0x56ca56);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ca59:{NFSU2_TR(0x56ca59);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B56ca5d:{NFSU2_TR(0x56ca5d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B56ca5f:{NFSU2_TR(0x56ca5f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56ca61:{NFSU2_TR(0x56ca61);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56ca64:{NFSU2_TR(0x56ca64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56ca6c;}}
}
B56ca66:L56ca66:{c.instructions+=2;NFSU2_TR(0x56ca66);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56ca68:{NFSU2_TR(0x56ca68);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ca6c:L56ca6c:{c.instructions+=6;NFSU2_TR(0x56ca6c);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56ca6f:{NFSU2_TR(0x56ca6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ca70:{NFSU2_TR(0x56ca70);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ca74:{NFSU2_TR(0x56ca74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ca75:{NFSU2_TR(0x56ca75);
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
B56ca78:{NFSU2_TR(0x56ca78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ca80:L56ca80:{c.instructions+=12;NFSU2_TR(0x56ca80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B56ca83:{NFSU2_TR(0x56ca83);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56ca89:{NFSU2_TR(0x56ca89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ca8a:{NFSU2_TR(0x56ca8a);
__builtin_memmove((R+24),(R+4),4);
}
B56ca8c:{NFSU2_TR(0x56ca8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56ca8f:{NFSU2_TR(0x56ca8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ca90:{NFSU2_TR(0x56ca90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x394ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56ca96:{NFSU2_TR(0x56ca96);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B56ca98:{NFSU2_TR(0x56ca98);
w4(R+8,u32(0x1ull));
}
B56ca9d:{NFSU2_TR(0x56ca9d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56ca9f:{NFSU2_TR(0x56ca9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56caa3:{NFSU2_TR(0x56caa3);
if(r1(R+518)){{goto L56caab;}}
}
B56caa5:L56caa5:{c.instructions+=2;NFSU2_TR(0x56caa5);
__builtin_memmove((R+4),(R+8),4);
}
B56caa7:{NFSU2_TR(0x56caa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56caab:L56caab:{c.instructions+=2;NFSU2_TR(0x56caab);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x398ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56cab1:{NFSU2_TR(0x56cab1);
if(r1(R+518)){{goto L56cab8;}}
}
B56cab3:L56cab3:{c.instructions+=2;NFSU2_TR(0x56cab3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B56cab4:{NFSU2_TR(0x56cab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cab8:L56cab8:{c.instructions+=2;NFSU2_TR(0x56cab8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x39cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56cabe:{NFSU2_TR(0x56cabe);
if(r1(R+518)){{goto L56cac5;}}
}
B56cac0:L56cac0:{c.instructions+=2;NFSU2_TR(0x56cac0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B56cac1:{NFSU2_TR(0x56cac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cac5:L56cac5:{c.instructions+=2;NFSU2_TR(0x56cac5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56cacb:{NFSU2_TR(0x56cacb);
if(r1(R+518)){{goto L56cad2;}}
}
B56cacd:L56cacd:{c.instructions+=2;NFSU2_TR(0x56cacd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B56cace:{NFSU2_TR(0x56cace);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cad2:L56cad2:{c.instructions+=2;NFSU2_TR(0x56cad2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56cad4:{NFSU2_TR(0x56cad4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56cb2e;}}
}
B56cad6:L56cad6:{c.instructions+=4;NFSU2_TR(0x56cad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cad9:{NFSU2_TR(0x56cad9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56cadb:{NFSU2_TR(0x56cadb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56cade:{NFSU2_TR(0x56cade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cae3ull));
TAIL_STATIC(0x5b5930u,5b5);
}
B56cae3:L56cae3:{c.instructions+=11;NFSU2_TR(0x56cae3);
{u32 ea_=u32(u32(7985932u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56cae9:{NFSU2_TR(0x56cae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56caec:{NFSU2_TR(0x56caec);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56caf2:{NFSU2_TR(0x56caf2);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B56caf4:{NFSU2_TR(0x56caf4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56caf8:{NFSU2_TR(0x56caf8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56cafa:{NFSU2_TR(0x56cafa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cafe:{NFSU2_TR(0x56cafe);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56cb04:{NFSU2_TR(0x56cb04);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cb06:{NFSU2_TR(0x56cb06);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56cb09:{NFSU2_TR(0x56cb09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cb36;}}
}
B56cb0b:L56cb0b:{c.instructions+=6;NFSU2_TR(0x56cb0b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cb0f:{NFSU2_TR(0x56cb0f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cb15:{NFSU2_TR(0x56cb15);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56cb19:{NFSU2_TR(0x56cb19);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cb1b:{NFSU2_TR(0x56cb1b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56cb1e:{NFSU2_TR(0x56cb1e);
if(r1(R+514)){{goto L56cb28;}}
}
B56cb20:L56cb20:{c.instructions+=2;NFSU2_TR(0x56cb20);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56cb22:{NFSU2_TR(0x56cb22);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cb28:L56cb28:{c.instructions+=2;NFSU2_TR(0x56cb28);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56cb2c:{NFSU2_TR(0x56cb2c);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B56cb2e:L56cb2e:{c.instructions+=4;NFSU2_TR(0x56cb2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56cb2f:{NFSU2_TR(0x56cb2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56cb30:{NFSU2_TR(0x56cb30);
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
B56cb33:{NFSU2_TR(0x56cb33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56cb36:L56cb36:{c.instructions+=7;NFSU2_TR(0x56cb36);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cb3c:{NFSU2_TR(0x56cb3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56cb3d:{NFSU2_TR(0x56cb3d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56cb41:{NFSU2_TR(0x56cb41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56cb42:{NFSU2_TR(0x56cb42);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B56cb44:{NFSU2_TR(0x56cb44);
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
B56cb47:{NFSU2_TR(0x56cb47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56cb50:L56cb50:{c.instructions+=14;NFSU2_TR(0x56cb50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cb51:{NFSU2_TR(0x56cb51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cb52:{NFSU2_TR(0x56cb52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cb53:{NFSU2_TR(0x56cb53);
__builtin_memmove((R+24),(R+4),4);
}
B56cb55:{NFSU2_TR(0x56cb55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56cb58:{NFSU2_TR(0x56cb58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56cb5a:{NFSU2_TR(0x56cb5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56cb5c:{NFSU2_TR(0x56cb5c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B56cb5e:{NFSU2_TR(0x56cb5e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56cb61:{NFSU2_TR(0x56cb61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cb62:{NFSU2_TR(0x56cb62);
__builtin_memmove((R+28),(R+4),4);
}
B56cb64:{NFSU2_TR(0x56cb64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56cb67:{NFSU2_TR(0x56cb67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56cb6a:{NFSU2_TR(0x56cb6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56cbe4;}}
}
B56cb6c:L56cb6c:{c.instructions+=3;NFSU2_TR(0x56cb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cb6f:{NFSU2_TR(0x56cb6f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56cb71:{NFSU2_TR(0x56cb71);
if(r1(R+518)){{goto L56cb7a;}}
}
B56cb73:L56cb73:{c.instructions+=2;NFSU2_TR(0x56cb73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56cb78:{NFSU2_TR(0x56cb78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cb99;}}
}
B56cb7a:L56cb7a:{c.instructions+=8;NFSU2_TR(0x56cb7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cb7d:{NFSU2_TR(0x56cb7d);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cb83:{NFSU2_TR(0x56cb83);
{u32 ea_=u32(u32(7985776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cb89:{NFSU2_TR(0x56cb89);
{u32 ea_=u32((r4(R+4)*4u)+u32(7985776u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56cb90:{NFSU2_TR(0x56cb90);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B56cb92:{NFSU2_TR(0x56cb92);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cb94:{NFSU2_TR(0x56cb94);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56cb97:{NFSU2_TR(0x56cb97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cbe4;}}
}
B56cb99:L56cb99:{c.instructions+=5;NFSU2_TR(0x56cb99);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56cb9d:{NFSU2_TR(0x56cb9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cba0:{NFSU2_TR(0x56cba0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56cba2:{NFSU2_TR(0x56cba2);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B56cba8:{NFSU2_TR(0x56cba8);
if(r1(R+518)){{goto L56cbd9;}}
}
B56cbaa:L56cbaa:{c.instructions+=2;NFSU2_TR(0x56cbaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56cbaf:{NFSU2_TR(0x56cbaf);
if(r1(R+518)){{goto L56cbd9;}}
}
B56cbb1:L56cbb1:{c.instructions+=12;NFSU2_TR(0x56cbb1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cbb2:{NFSU2_TR(0x56cbb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B56cbb5:{NFSU2_TR(0x56cbb5);
__builtin_memmove((R+0),(R+8),4);
}
B56cbb7:{NFSU2_TR(0x56cbb7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B56cbb9:{NFSU2_TR(0x56cbb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cbbd:{NFSU2_TR(0x56cbbd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56cbc1:{NFSU2_TR(0x56cbc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56cbc2:{NFSU2_TR(0x56cbc2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56cbc8:{NFSU2_TR(0x56cbc8);
{u32 ea_=u32(u32(7985928u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56cbce:{NFSU2_TR(0x56cbce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cbd0:{NFSU2_TR(0x56cbd0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56cbd3:{NFSU2_TR(0x56cbd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cc8e;}}
}
B56cbd9:L56cbd9:{c.instructions+=3;NFSU2_TR(0x56cbd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B56cbdc:{NFSU2_TR(0x56cbdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cbdf:{NFSU2_TR(0x56cbdf);
{goto L56cc8e;}
}
B56cbe4:L56cbe4:{c.instructions+=3;NFSU2_TR(0x56cbe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cbe7:{NFSU2_TR(0x56cbe7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56cbe9:{NFSU2_TR(0x56cbe9);
if(r1(R+518)){{goto L56cc21;}}
}
B56cbeb:L56cbeb:{c.instructions+=2;NFSU2_TR(0x56cbeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56cbf0:{NFSU2_TR(0x56cbf0);
if(r1(R+518)){{goto L56cc21;}}
}
B56cbf2:L56cbf2:{c.instructions+=11;NFSU2_TR(0x56cbf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cbf5:{NFSU2_TR(0x56cbf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56cbf9:{NFSU2_TR(0x56cbf9);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B56cbff:{NFSU2_TR(0x56cbff);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B56cc01:{NFSU2_TR(0x56cc01);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cc05:{NFSU2_TR(0x56cc05);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56cc09:{NFSU2_TR(0x56cc09);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56cc0f:{NFSU2_TR(0x56cc0f);
{u32 ea_=u32(u32(7985928u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56cc15:{NFSU2_TR(0x56cc15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cc17:{NFSU2_TR(0x56cc17);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56cc1a:{NFSU2_TR(0x56cc1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cc8e;}}
}
B56cc1c:L56cc1c:{c.instructions+=2;NFSU2_TR(0x56cc1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cc1f:{NFSU2_TR(0x56cc1f);
{goto L56cc8e;}
}
B56cc21:L56cc21:{c.instructions+=2;NFSU2_TR(0x56cc21);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56cc24:{NFSU2_TR(0x56cc24);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56cc4e;}}
}
B56cc26:L56cc26:{c.instructions+=8;NFSU2_TR(0x56cc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cc29:{NFSU2_TR(0x56cc29);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cc2f:{NFSU2_TR(0x56cc2f);
{u32 ea_=u32((r4(R+4)*4u)+u32(7985780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cc36:{NFSU2_TR(0x56cc36);
{u32 ea_=u32(u32(7985776u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B56cc3c:{NFSU2_TR(0x56cc3c);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B56cc3e:{NFSU2_TR(0x56cc3e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cc40:{NFSU2_TR(0x56cc40);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56cc43:{NFSU2_TR(0x56cc43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cc4e;}}
}
B56cc45:L56cc45:{c.instructions+=3;NFSU2_TR(0x56cc45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56cc49:{NFSU2_TR(0x56cc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cc4c:{NFSU2_TR(0x56cc4c);
{goto L56cc8e;}
}
B56cc4e:L56cc4e:{c.instructions+=3;NFSU2_TR(0x56cc4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cc51:{NFSU2_TR(0x56cc51);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B56cc54:{NFSU2_TR(0x56cc54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cc8e;}}
}
B56cc56:L56cc56:{c.instructions+=2;NFSU2_TR(0x56cc56);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56cc59:{NFSU2_TR(0x56cc59);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56cc8e;}}
}
B56cc5b:L56cc5b:{c.instructions+=6;NFSU2_TR(0x56cc5b);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cc5e:{NFSU2_TR(0x56cc5e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56cc61:{NFSU2_TR(0x56cc61);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B56cc63:{NFSU2_TR(0x56cc63);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cc65:{NFSU2_TR(0x56cc65);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56cc68:{NFSU2_TR(0x56cc68);
if(r1(R+514)){{goto L56cc8e;}}
}
B56cc6a:L56cc6a:{c.instructions+=7;NFSU2_TR(0x56cc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56cc6d:{NFSU2_TR(0x56cc6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B56cc70:{NFSU2_TR(0x56cc70);
{u32 ea_=u32((r4(R+0)*4u)+u32(7985800u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56cc77:{NFSU2_TR(0x56cc77);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56cc7a:{NFSU2_TR(0x56cc7a);
{u32 ea_=u32(u32(7985892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56cc80:{NFSU2_TR(0x56cc80);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56cc86:{NFSU2_TR(0x56cc86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cc8bull));
TAIL_STATIC(0x75bed4u,75b);
}
B56cc8b:L56cc8b:{c.instructions+=1;NFSU2_TR(0x56cc8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cc8e:L56cc8e:{c.instructions+=2;NFSU2_TR(0x56cc8e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B56cc91:{NFSU2_TR(0x56cc91);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56ccbd;}}
}
B56cc93:L56cc93:{c.instructions+=6;NFSU2_TR(0x56cc93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56cc96:{NFSU2_TR(0x56cc96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B56cc99:{NFSU2_TR(0x56cc99);
{u32 ea_=u32((r4(R+8)*4u)+u32(7985796u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B56cca0:{NFSU2_TR(0x56cca0);
{u32 ea_=u32(u32(7985892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56cca6:{NFSU2_TR(0x56cca6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B56ccac:{NFSU2_TR(0x56ccac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ccb1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B56ccb1:L56ccb1:{c.instructions+=7;NFSU2_TR(0x56ccb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ccb4:{NFSU2_TR(0x56ccb4);
__builtin_memmove((R+0),(R+28),4);
}
B56ccb6:{NFSU2_TR(0x56ccb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ccb7:{NFSU2_TR(0x56ccb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ccb8:{NFSU2_TR(0x56ccb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ccb9:{NFSU2_TR(0x56ccb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56ccba:{NFSU2_TR(0x56ccba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ccbd:L56ccbd:{c.instructions+=7;NFSU2_TR(0x56ccbd);
__builtin_memmove((R+0),(R+28),4);
}
B56ccbf:{NFSU2_TR(0x56ccbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56ccc0:{NFSU2_TR(0x56ccc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ccc3:{NFSU2_TR(0x56ccc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56ccc4:{NFSU2_TR(0x56ccc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56ccc5:{NFSU2_TR(0x56ccc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56ccc6:{NFSU2_TR(0x56ccc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ccd0:L56ccd0:{c.instructions+=7;NFSU2_TR(0x56ccd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ccd1:{NFSU2_TR(0x56ccd1);
__builtin_memmove((R+24),(R+4),4);
}
B56ccd3:{NFSU2_TR(0x56ccd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B56ccd5:{NFSU2_TR(0x56ccd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B56ccd7:{NFSU2_TR(0x56ccd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56ccda:{NFSU2_TR(0x56ccda);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56ccdc:{NFSU2_TR(0x56ccdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cd9f;}}
}
B56cce2:L56cce2:{c.instructions+=3;NFSU2_TR(0x56cce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56cce5:{NFSU2_TR(0x56cce5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B56cce8:{NFSU2_TR(0x56cce8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L56cd3f;}}
}
B56ccea:L56ccea:{c.instructions+=12;NFSU2_TR(0x56ccea);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cced:{NFSU2_TR(0x56cced);
__builtin_memmove((R+8),gp(0x864624),4);
}
B56ccf3:{NFSU2_TR(0x56ccf3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ccf4:{NFSU2_TR(0x56ccf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dac8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B56ccfb:{NFSU2_TR(0x56ccfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B56ccfe:{NFSU2_TR(0x56ccfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cd01:{NFSU2_TR(0x56cd01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B56cd04:{NFSU2_TR(0x56cd04);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B56cd07:{NFSU2_TR(0x56cd07);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56cd0b:{NFSU2_TR(0x56cd0b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cd0d:{NFSU2_TR(0x56cd0d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56cd10:{NFSU2_TR(0x56cd10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cd3e;}}
}
B56cd12:L56cd12:{c.instructions+=6;NFSU2_TR(0x56cd12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cd15:{NFSU2_TR(0x56cd15);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B56cd16:{NFSU2_TR(0x56cd16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cd19:{NFSU2_TR(0x56cd19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cd1c:{NFSU2_TR(0x56cd1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56cd1e:{NFSU2_TR(0x56cd1e);
if(r1(R+518)){{goto L56cd3e;}}
}
B56cd20:L56cd20:{c.instructions+=8;NFSU2_TR(0x56cd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56cd23:{NFSU2_TR(0x56cd23);
__builtin_memmove((R+8),gp(0x864624),4);
}
B56cd29:{NFSU2_TR(0x56cd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B56cd2c:{NFSU2_TR(0x56cd2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B56cd2f:{NFSU2_TR(0x56cd2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B56cd32:{NFSU2_TR(0x56cd32);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cd33:{NFSU2_TR(0x56cd33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56cd39:{NFSU2_TR(0x56cd39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cd3eull));
TAIL_STATIC(0x4ac120u,4ac);
}
B56cd3e:L56cd3e:{c.instructions+=1;NFSU2_TR(0x56cd3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56cd3f:L56cd3f:{c.instructions+=3;NFSU2_TR(0x56cd3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56cd42:{NFSU2_TR(0x56cd42);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B56cd45:{NFSU2_TR(0x56cd45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cd4aull));
TAIL_STATIC(0x59fa10u,59f);
}
B56cd4a:L56cd4a:{c.instructions+=5;NFSU2_TR(0x56cd4a);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cd4d:{NFSU2_TR(0x56cd4d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56cd53:{NFSU2_TR(0x56cd53);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cd55:{NFSU2_TR(0x56cd55);
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
B56cd58:{NFSU2_TR(0x56cd58);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L56cd9a;}}
}
B56cd5a:L56cd5a:{c.instructions+=6;NFSU2_TR(0x56cd5a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B56cd5c:{NFSU2_TR(0x56cd5c);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56cd5f:{NFSU2_TR(0x56cd5f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56cd65:{NFSU2_TR(0x56cd65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cd67:{NFSU2_TR(0x56cd67);
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
B56cd6a:{NFSU2_TR(0x56cd6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cdc4;}}
}
B56cd6c:L56cd6c:{c.instructions+=4;NFSU2_TR(0x56cd6c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56cd72:{NFSU2_TR(0x56cd72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cd74:{NFSU2_TR(0x56cd74);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B56cd77:{NFSU2_TR(0x56cd77);
if(r1(R+514)){{goto L56cd83;}}
}
B56cd79:L56cd79:{c.instructions+=4;NFSU2_TR(0x56cd79);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56cd7c:{NFSU2_TR(0x56cd7c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cd7e:{NFSU2_TR(0x56cd7e);
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
B56cd81:{NFSU2_TR(0x56cd81);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L56cd9a;}}
}
B56cd83:L56cd83:{c.instructions+=4;NFSU2_TR(0x56cd83);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56cd89:{NFSU2_TR(0x56cd89);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cd8b:{NFSU2_TR(0x56cd8b);
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
B56cd8e:{NFSU2_TR(0x56cd8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cdc4;}}
}
B56cd90:L56cd90:{c.instructions+=4;NFSU2_TR(0x56cd90);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B56cd93:{NFSU2_TR(0x56cd93);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cd95:{NFSU2_TR(0x56cd95);
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
B56cd98:{NFSU2_TR(0x56cd98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cdc4;}}
}
B56cd9a:L56cd9a:{c.instructions+=3;NFSU2_TR(0x56cd9a);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B56cd9d:{NFSU2_TR(0x56cd9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56cd9e:{NFSU2_TR(0x56cd9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56cd9f:L56cd9f:{c.instructions+=5;NFSU2_TR(0x56cd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56cda6:{NFSU2_TR(0x56cda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56cdad:{NFSU2_TR(0x56cdad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cdb0:{NFSU2_TR(0x56cdb0);
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
B56cdb2:{NFSU2_TR(0x56cdb2);
if(r1(R+518)){{goto L56cdc6;}}
}
B56cdb4:L56cdb4:{c.instructions+=3;NFSU2_TR(0x56cdb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B56cdb7:{NFSU2_TR(0x56cdb7);
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
B56cdb9:{NFSU2_TR(0x56cdb9);
if(r1(R+518)){{goto L56cdc6;}}
}
B56cdbb:L56cdbb:{c.instructions+=3;NFSU2_TR(0x56cdbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56cdc2:{NFSU2_TR(0x56cdc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56cdc3:{NFSU2_TR(0x56cdc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56cdc4:L56cdc4:{c.instructions+=1;NFSU2_TR(0x56cdc4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56cdc6:L56cdc6:{c.instructions+=2;NFSU2_TR(0x56cdc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56cdc7:{NFSU2_TR(0x56cdc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56cdd0:L56cdd0:{c.instructions+=7;NFSU2_TR(0x56cdd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cdd4:{NFSU2_TR(0x56cdd4);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cdd7:{NFSU2_TR(0x56cdd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56cddb:{NFSU2_TR(0x56cddb);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B56cdde:{NFSU2_TR(0x56cdde);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56cde0:{NFSU2_TR(0x56cde0);
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
B56cde3:{NFSU2_TR(0x56cde3);
if(r1(R+514)){{goto L56cdeb;}}
}
B56cde5:L56cde5:{c.instructions+=2;NFSU2_TR(0x56cde5);
w4(R+0,u32(0x1ull));
}
B56cdea:{NFSU2_TR(0x56cdea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56cdeb:L56cdeb:{c.instructions+=2;NFSU2_TR(0x56cdeb);
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
B56cded:{NFSU2_TR(0x56cded);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56cdf0:L56cdf0:{c.instructions+=26;NFSU2_TR(0x56cdf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56cdf4:{NFSU2_TR(0x56cdf4);
__builtin_memmove((R+0),(R+4),4);
}
B56cdf6:{NFSU2_TR(0x56cdf6);
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
B56cdf8:{NFSU2_TR(0x56cdf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cdfb:{NFSU2_TR(0x56cdfb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B56cdfd:{NFSU2_TR(0x56cdfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56ce03:{NFSU2_TR(0x56ce03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ce06:{NFSU2_TR(0x56ce06);
w1(R+8,u8(0x1ull));
}
B56ce08:{NFSU2_TR(0x56ce08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ce0b:{NFSU2_TR(0x56ce0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ce0e:{NFSU2_TR(0x56ce0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ce11:{NFSU2_TR(0x56ce11);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ce14:{NFSU2_TR(0x56ce14);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ce17:{NFSU2_TR(0x56ce17);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ce1a:{NFSU2_TR(0x56ce1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ce1d:{NFSU2_TR(0x56ce1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ce20:{NFSU2_TR(0x56ce20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ce23:{NFSU2_TR(0x56ce23);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ce26:{NFSU2_TR(0x56ce26);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ce29:{NFSU2_TR(0x56ce29);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ce2c:{NFSU2_TR(0x56ce2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B56ce33:{NFSU2_TR(0x56ce33);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B56ce36:{NFSU2_TR(0x56ce36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ce39:{NFSU2_TR(0x56ce39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ce3c:{NFSU2_TR(0x56ce3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56ce3f:{NFSU2_TR(0x56ce3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56ce50:L56ce50:{c.instructions+=10;NFSU2_TR(0x56ce50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce51:{NFSU2_TR(0x56ce51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce52:{NFSU2_TR(0x56ce52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce53:{NFSU2_TR(0x56ce53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce54:{NFSU2_TR(0x56ce54);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56ce58:{NFSU2_TR(0x56ce58);
u8 U[4];
w4(U+0,u32(0x79dc04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce5d:{NFSU2_TR(0x56ce5d);
__builtin_memmove((R+24),(R+4),4);
}
B56ce5f:{NFSU2_TR(0x56ce5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce61:{NFSU2_TR(0x56ce61);
__builtin_memmove((R+4),(R+28),4);
}
B56ce63:{NFSU2_TR(0x56ce63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ce68ull));
TAIL_STATIC(0x578ce0u,578);
}
B56ce68:L56ce68:{c.instructions+=7;NFSU2_TR(0x56ce68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce6a:{NFSU2_TR(0x56ce6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce6c:{NFSU2_TR(0x56ce6c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce6e:{NFSU2_TR(0x56ce6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56ce71:{NFSU2_TR(0x56ce71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce72:{NFSU2_TR(0x56ce72);
__builtin_memmove((R+4),(R+28),4);
}
B56ce74:{NFSU2_TR(0x56ce74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ce79ull));
TAIL_STATIC(0x571640u,571);
}
B56ce79:L56ce79:{c.instructions+=7;NFSU2_TR(0x56ce79);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce7b:{NFSU2_TR(0x56ce7b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce7d:{NFSU2_TR(0x56ce7d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce7f:{NFSU2_TR(0x56ce7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56ce82:{NFSU2_TR(0x56ce82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce83:{NFSU2_TR(0x56ce83);
__builtin_memmove((R+4),(R+28),4);
}
B56ce85:{NFSU2_TR(0x56ce85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ce8aull));
TAIL_STATIC(0x571640u,571);
}
B56ce8a:L56ce8a:{c.instructions+=7;NFSU2_TR(0x56ce8a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce8c:{NFSU2_TR(0x56ce8c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce8e:{NFSU2_TR(0x56ce8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce90:{NFSU2_TR(0x56ce90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((R+8),(U+0),4);
}
B56ce93:{NFSU2_TR(0x56ce93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce94:{NFSU2_TR(0x56ce94);
__builtin_memmove((R+4),(R+28),4);
}
B56ce96:{NFSU2_TR(0x56ce96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ce9bull));
TAIL_STATIC(0x571640u,571);
}
B56ce9b:L56ce9b:{c.instructions+=7;NFSU2_TR(0x56ce9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce9d:{NFSU2_TR(0x56ce9d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ce9f:{NFSU2_TR(0x56ce9f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cea1:{NFSU2_TR(0x56cea1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((R+0),(U+0),4);
}
B56cea4:{NFSU2_TR(0x56cea4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cea5:{NFSU2_TR(0x56cea5);
__builtin_memmove((R+4),(R+28),4);
}
B56cea7:{NFSU2_TR(0x56cea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ceacull));
TAIL_STATIC(0x571640u,571);
}
B56ceac:L56ceac:{c.instructions+=7;NFSU2_TR(0x56ceac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ceae:{NFSU2_TR(0x56ceae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ceb0:{NFSU2_TR(0x56ceb0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ceb2:{NFSU2_TR(0x56ceb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B56ceb5:{NFSU2_TR(0x56ceb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ceb6:{NFSU2_TR(0x56ceb6);
__builtin_memmove((R+4),(R+28),4);
}
B56ceb8:{NFSU2_TR(0x56ceb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cebdull));
TAIL_STATIC(0x571640u,571);
}
B56cebd:L56cebd:{c.instructions+=7;NFSU2_TR(0x56cebd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cebf:{NFSU2_TR(0x56cebf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cec1:{NFSU2_TR(0x56cec1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cec3:{NFSU2_TR(0x56cec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B56cec6:{NFSU2_TR(0x56cec6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cec7:{NFSU2_TR(0x56cec7);
__builtin_memmove((R+4),(R+28),4);
}
B56cec9:{NFSU2_TR(0x56cec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ceceull));
TAIL_STATIC(0x571640u,571);
}
B56cece:L56cece:{c.instructions+=4;NFSU2_TR(0x56cece);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B56ced1:{NFSU2_TR(0x56ced1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56ced2:{NFSU2_TR(0x56ced2);
__builtin_memmove((R+4),(R+28),4);
}
B56ced4:{NFSU2_TR(0x56ced4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ced9ull));
TAIL_STATIC(0x5716c0u,571);
}
B56ced9:L56ced9:{c.instructions+=4;NFSU2_TR(0x56ced9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56cedc:{NFSU2_TR(0x56cedc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cedd:{NFSU2_TR(0x56cedd);
__builtin_memmove((R+4),(R+28),4);
}
B56cedf:{NFSU2_TR(0x56cedf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cee4ull));
TAIL_STATIC(0x5716c0u,571);
}
B56cee4:L56cee4:{c.instructions+=4;NFSU2_TR(0x56cee4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B56cee7:{NFSU2_TR(0x56cee7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cee8:{NFSU2_TR(0x56cee8);
__builtin_memmove((R+4),(R+28),4);
}
B56ceea:{NFSU2_TR(0x56ceea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56ceefull));
TAIL_STATIC(0x571770u,571);
}
B56ceef:L56ceef:{c.instructions+=4;NFSU2_TR(0x56ceef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B56cef2:{NFSU2_TR(0x56cef2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cef3:{NFSU2_TR(0x56cef3);
__builtin_memmove((R+4),(R+28),4);
}
B56cef5:{NFSU2_TR(0x56cef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cefaull));
TAIL_STATIC(0x571770u,571);
}
B56cefa:L56cefa:{c.instructions+=4;NFSU2_TR(0x56cefa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56cefd:{NFSU2_TR(0x56cefd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cefe:{NFSU2_TR(0x56cefe);
__builtin_memmove((R+4),(R+28),4);
}
B56cf00:{NFSU2_TR(0x56cf00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cf05ull));
TAIL_STATIC(0x571770u,571);
}
B56cf05:L56cf05:{c.instructions+=7;NFSU2_TR(0x56cf05);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf07:{NFSU2_TR(0x56cf07);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf09:{NFSU2_TR(0x56cf09);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf0b:{NFSU2_TR(0x56cf0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B56cf0e:{NFSU2_TR(0x56cf0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf0f:{NFSU2_TR(0x56cf0f);
__builtin_memmove((R+4),(R+28),4);
}
B56cf11:{NFSU2_TR(0x56cf11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cf16ull));
TAIL_STATIC(0x571640u,571);
}
B56cf16:L56cf16:{c.instructions+=7;NFSU2_TR(0x56cf16);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf18:{NFSU2_TR(0x56cf18);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf1a:{NFSU2_TR(0x56cf1a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf1c:{NFSU2_TR(0x56cf1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B56cf1f:{NFSU2_TR(0x56cf1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf20:{NFSU2_TR(0x56cf20);
__builtin_memmove((R+4),(R+28),4);
}
B56cf22:{NFSU2_TR(0x56cf22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cf27ull));
TAIL_STATIC(0x571640u,571);
}
B56cf27:L56cf27:{c.instructions+=4;NFSU2_TR(0x56cf27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((R+12),(U+0),4);
}
B56cf2a:{NFSU2_TR(0x56cf2a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf2b:{NFSU2_TR(0x56cf2b);
__builtin_memmove((R+4),(R+28),4);
}
B56cf2d:{NFSU2_TR(0x56cf2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cf32ull));
TAIL_STATIC(0x5716c0u,571);
}
B56cf32:L56cf32:{c.instructions+=7;NFSU2_TR(0x56cf32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf34:{NFSU2_TR(0x56cf34);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf36:{NFSU2_TR(0x56cf36);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf38:{NFSU2_TR(0x56cf38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((R+4),(U+0),4);
}
B56cf3b:{NFSU2_TR(0x56cf3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf3c:{NFSU2_TR(0x56cf3c);
__builtin_memmove((R+4),(R+28),4);
}
B56cf3e:{NFSU2_TR(0x56cf3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cf43ull));
TAIL_STATIC(0x571640u,571);
}
B56cf43:L56cf43:{c.instructions+=2;NFSU2_TR(0x56cf43);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),u8(0x0ull)));
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B56cf46:{NFSU2_TR(0x56cf46);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L56cfb4;}}
}
B56cf48:L56cf48:{c.instructions+=3;NFSU2_TR(0x56cf48);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56cf4b:{NFSU2_TR(0x56cf4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56cf4d:{NFSU2_TR(0x56cf4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56cf69;}}
}
B56cf4f:L56cf4f:{c.instructions+=8;NFSU2_TR(0x56cf4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56cf52:{NFSU2_TR(0x56cf52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56cf55:{NFSU2_TR(0x56cf55);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B56cf57:{NFSU2_TR(0x56cf57);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B56cf5b:{NFSU2_TR(0x56cf5b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B56cf5d:{NFSU2_TR(0x56cf5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cf61:{NFSU2_TR(0x56cf61);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B56cf65:{NFSU2_TR(0x56cf65);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cf69:L56cf69:{c.instructions+=4;NFSU2_TR(0x56cf69);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B56cf6d:{NFSU2_TR(0x56cf6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf6e:{NFSU2_TR(0x56cf6e);
__builtin_memmove((R+4),(R+28),4);
}
B56cf70:{NFSU2_TR(0x56cf70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cf75ull));
TAIL_STATIC(0x571710u,571);
}
B56cf75:L56cf75:{c.instructions+=4;NFSU2_TR(0x56cf75);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B56cf79:{NFSU2_TR(0x56cf79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf7a:{NFSU2_TR(0x56cf7a);
__builtin_memmove((R+4),(R+28),4);
}
B56cf7c:{NFSU2_TR(0x56cf7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cf81ull));
TAIL_STATIC(0x571710u,571);
}
B56cf81:L56cf81:{c.instructions+=3;NFSU2_TR(0x56cf81);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56cf84:{NFSU2_TR(0x56cf84);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56cf86:{NFSU2_TR(0x56cf86);
if(r1(R+518)){{goto L56cfb4;}}
}
B56cf88:L56cf88:{c.instructions+=3;NFSU2_TR(0x56cf88);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B56cf8d:{NFSU2_TR(0x56cf8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf8e:{NFSU2_TR(0x56cf8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cf93ull));
TAIL_STATIC(0x5930d0u,593);
}
B56cf93:L56cf93:{c.instructions+=4;NFSU2_TR(0x56cf93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cf96:{NFSU2_TR(0x56cf96);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B56cf9b:{NFSU2_TR(0x56cf9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cf9c:{NFSU2_TR(0x56cf9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cfa1ull));
TAIL_STATIC(0x5930d0u,593);
}
B56cfa1:L56cfa1:{c.instructions+=5;NFSU2_TR(0x56cfa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56cfa4:{NFSU2_TR(0x56cfa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cfa5:{NFSU2_TR(0x56cfa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cfa6:{NFSU2_TR(0x56cfa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cfa9:{NFSU2_TR(0x56cfa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cfaeull));
TAIL_STATIC(0x5a0490u,5a0);
}
B56cfae:L56cfae:{c.instructions+=2;NFSU2_TR(0x56cfae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B56cfb1:{NFSU2_TR(0x56cfb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56cfb4:L56cfb4:{c.instructions+=2;NFSU2_TR(0x56cfb4);
__builtin_memmove((R+4),(R+28),4);
}
B56cfb6:{NFSU2_TR(0x56cfb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cfbbull));
TAIL_STATIC(0x578d90u,578);
}
B56cfbb:L56cfbb:{c.instructions+=5;NFSU2_TR(0x56cfbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B56cfbc:{NFSU2_TR(0x56cfbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56cfbd:{NFSU2_TR(0x56cfbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56cfbe:{NFSU2_TR(0x56cfbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56cfbf:{NFSU2_TR(0x56cfbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56cfd0:L56cfd0:{c.instructions+=7;NFSU2_TR(0x56cfd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cfd1:{NFSU2_TR(0x56cfd1);
{u32 ea_=u32(u32(7986200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B56cfd7:{NFSU2_TR(0x56cfd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56cfd8:{NFSU2_TR(0x56cfd8);
__builtin_memmove((R+24),(R+4),4);
}
B56cfda:{NFSU2_TR(0x56cfda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56cfdd:{NFSU2_TR(0x56cfdd);
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
B56cfdf:{NFSU2_TR(0x56cfdf);
if(r1(R+518)){TAIL_STATIC(0x56d015u,56d);}
}
B56cfe1:L56cfe1:{c.instructions+=2;NFSU2_TR(0x56cfe1);
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
B56cfe6:{NFSU2_TR(0x56cfe6);
if(r1(R+518)){TAIL_STATIC(0x56d015u,56d);}
}
B56cfe8:L56cfe8:{c.instructions+=3;NFSU2_TR(0x56cfe8);
w4(R+4,u32(0x89cf48ull));
}
B56cfed:{NFSU2_TR(0x56cfed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56cfef:{NFSU2_TR(0x56cfef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56cff4ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B56cff4:L56cff4:{c.instructions+=3;NFSU2_TR(0x56cff4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56cff6:{NFSU2_TR(0x56cff6);
w4(R+0,u32(0x8651acull));
}
B56cffb:{NFSU2_TR(0x56cffb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x56d002u,56d);}
}
B56cffd:L56cffd:{c.instructions+=1;NFSU2_TR(0x56cffd);
w4(R+0,u32(0x86518cull));
TAIL_STATIC(0x56d002u,56d);
}
XIT:NFSU2_TR_EXIT(0x56c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
