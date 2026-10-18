#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4aa(u8* __restrict R,Cpu& c);
u32 body_4ab(u8* __restrict R,Cpu& c);
u32 body_4c6(u8* __restrict R,Cpu& c);
u32 body_4c7(u8* __restrict R,Cpu& c);
u32 body_4c8(u8* __restrict R,Cpu& c);
u32 body_4c9(u8* __restrict R,Cpu& c);
u32 body_4ca(u8* __restrict R,Cpu& c);
u32 body_4db(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4da,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4da,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4da(u8* __restrict R,Cpu& c);
u32 page_4da(Cpu& c){return body_4da(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4da(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4da000:goto L4da000;
case 0x4da001:c.instructions+=4;goto B4da001;
case 0x4da002:c.instructions+=3;goto B4da002;
case 0x4da003:c.instructions+=2;goto B4da003;
case 0x4da008:c.instructions+=1;goto B4da008;
case 0x4da00d:goto L4da00d;
case 0x4da00e:c.instructions+=1;goto B4da00e;
case 0x4da013:goto L4da013;
case 0x4da016:c.instructions+=3;goto B4da016;
case 0x4da017:c.instructions+=2;goto B4da017;
case 0x4da01a:c.instructions+=1;goto B4da01a;
case 0x4da01b:goto L4da01b;
case 0x4da01f:c.instructions+=7;goto B4da01f;
case 0x4da020:c.instructions+=6;goto B4da020;
case 0x4da024:c.instructions+=5;goto B4da024;
case 0x4da025:c.instructions+=4;goto B4da025;
case 0x4da026:c.instructions+=3;goto B4da026;
case 0x4da027:c.instructions+=2;goto B4da027;
case 0x4da02c:c.instructions+=1;goto B4da02c;
case 0x4da031:goto L4da031;
case 0x4da032:c.instructions+=1;goto B4da032;
case 0x4da037:goto L4da037;
case 0x4da03a:c.instructions+=3;goto B4da03a;
case 0x4da03b:c.instructions+=2;goto B4da03b;
case 0x4da03e:c.instructions+=1;goto B4da03e;
case 0x4da090:goto L4da090;
case 0x4da091:c.instructions+=5;goto B4da091;
case 0x4da093:c.instructions+=4;goto B4da093;
case 0x4da096:c.instructions+=3;goto B4da096;
case 0x4da097:c.instructions+=2;goto B4da097;
case 0x4da098:c.instructions+=1;goto B4da098;
case 0x4da09d:goto L4da09d;
case 0x4da0a0:c.instructions+=8;goto B4da0a0;
case 0x4da0a3:c.instructions+=7;goto B4da0a3;
case 0x4da0a6:c.instructions+=6;goto B4da0a6;
case 0x4da0a8:c.instructions+=5;goto B4da0a8;
case 0x4da0ab:c.instructions+=4;goto B4da0ab;
case 0x4da0ad:c.instructions+=3;goto B4da0ad;
case 0x4da0b0:c.instructions+=2;goto B4da0b0;
case 0x4da0b2:c.instructions+=1;goto B4da0b2;
case 0x4da0b8:goto L4da0b8;
case 0x4da0bc:c.instructions+=6;goto B4da0bc;
case 0x4da0c3:c.instructions+=5;goto B4da0c3;
case 0x4da0ca:c.instructions+=4;goto B4da0ca;
case 0x4da0cd:c.instructions+=3;goto B4da0cd;
case 0x4da0d3:c.instructions+=2;goto B4da0d3;
case 0x4da0d4:c.instructions+=1;goto B4da0d4;
case 0x4da0d9:goto L4da0d9;
case 0x4da0db:c.instructions+=1;goto B4da0db;
case 0x4da0dd:goto L4da0dd;
case 0x4da0e0:c.instructions+=2;goto B4da0e0;
case 0x4da0e2:c.instructions+=1;goto B4da0e2;
case 0x4da0e4:goto L4da0e4;
case 0x4da0e7:c.instructions+=2;goto B4da0e7;
case 0x4da0e9:c.instructions+=1;goto B4da0e9;
case 0x4da0eb:goto L4da0eb;
case 0x4da0ee:c.instructions+=4;goto B4da0ee;
case 0x4da0f1:c.instructions+=3;goto B4da0f1;
case 0x4da0f9:c.instructions+=2;goto B4da0f9;
case 0x4da0fc:c.instructions+=1;goto B4da0fc;
case 0x4da0fe:goto L4da0fe;
case 0x4da105:goto L4da105;
case 0x4da106:c.instructions+=2;goto B4da106;
case 0x4da108:c.instructions+=1;goto B4da108;
case 0x4da10d:goto L4da10d;
case 0x4da10e:c.instructions+=2;goto B4da10e;
case 0x4da10f:c.instructions+=1;goto B4da10f;
case 0x4da112:goto L4da112;
case 0x4da113:c.instructions+=2;goto B4da113;
case 0x4da115:c.instructions+=1;goto B4da115;
case 0x4da11a:goto L4da11a;
case 0x4da11b:c.instructions+=2;goto B4da11b;
case 0x4da11c:c.instructions+=1;goto B4da11c;
case 0x4da11f:goto L4da11f;
case 0x4da120:c.instructions+=2;goto B4da120;
case 0x4da122:c.instructions+=1;goto B4da122;
case 0x4da127:goto L4da127;
case 0x4da128:c.instructions+=2;goto B4da128;
case 0x4da129:c.instructions+=1;goto B4da129;
case 0x4da12c:goto L4da12c;
case 0x4da12d:c.instructions+=2;goto B4da12d;
case 0x4da12f:c.instructions+=1;goto B4da12f;
case 0x4da134:goto L4da134;
case 0x4da135:c.instructions+=2;goto B4da135;
case 0x4da136:c.instructions+=1;goto B4da136;
case 0x4da139:goto L4da139;
case 0x4da13c:c.instructions+=9;goto B4da13c;
case 0x4da142:c.instructions+=8;goto B4da142;
case 0x4da144:c.instructions+=7;goto B4da144;
case 0x4da148:c.instructions+=6;goto B4da148;
case 0x4da14c:c.instructions+=5;goto B4da14c;
case 0x4da152:c.instructions+=4;goto B4da152;
case 0x4da158:c.instructions+=3;goto B4da158;
case 0x4da15a:c.instructions+=2;goto B4da15a;
case 0x4da15d:c.instructions+=1;goto B4da15d;
case 0x4da15f:goto L4da15f;
case 0x4da162:c.instructions+=2;goto B4da162;
case 0x4da163:c.instructions+=1;goto B4da163;
case 0x4da168:goto L4da168;
case 0x4da16b:c.instructions+=2;goto B4da16b;
case 0x4da16c:c.instructions+=1;goto B4da16c;
case 0x4da171:goto L4da171;
case 0x4da174:c.instructions+=1;goto B4da174;
case 0x4da178:goto L4da178;
case 0x4da179:c.instructions+=2;goto B4da179;
case 0x4da17a:c.instructions+=1;goto B4da17a;
case 0x4da190:goto L4da190;
case 0x4da193:c.instructions+=12;goto B4da193;
case 0x4da194:c.instructions+=11;goto B4da194;
case 0x4da195:c.instructions+=10;goto B4da195;
case 0x4da197:c.instructions+=9;goto B4da197;
case 0x4da19a:c.instructions+=8;goto B4da19a;
case 0x4da19d:c.instructions+=7;goto B4da19d;
case 0x4da1a0:c.instructions+=6;goto B4da1a0;
case 0x4da1a1:c.instructions+=5;goto B4da1a1;
case 0x4da1a4:c.instructions+=4;goto B4da1a4;
case 0x4da1a6:c.instructions+=3;goto B4da1a6;
case 0x4da1a8:c.instructions+=2;goto B4da1a8;
case 0x4da1aa:c.instructions+=1;goto B4da1aa;
case 0x4da1b0:goto L4da1b0;
case 0x4da1b4:c.instructions+=3;goto B4da1b4;
case 0x4da1b6:c.instructions+=2;goto B4da1b6;
case 0x4da1bb:c.instructions+=1;goto B4da1bb;
case 0x4da1c1:goto L4da1c1;
case 0x4da1c3:goto L4da1c3;
case 0x4da1c4:c.instructions+=2;goto B4da1c4;
case 0x4da1c6:c.instructions+=1;goto B4da1c6;
case 0x4da1cb:goto L4da1cb;
case 0x4da1d2:c.instructions+=1;goto B4da1d2;
case 0x4da1d4:goto L4da1d4;
case 0x4da1d5:c.instructions+=2;goto B4da1d5;
case 0x4da1d7:c.instructions+=1;goto B4da1d7;
case 0x4da1dc:goto L4da1dc;
case 0x4da1e1:c.instructions+=3;goto B4da1e1;
case 0x4da1e4:c.instructions+=2;goto B4da1e4;
case 0x4da1ea:c.instructions+=1;goto B4da1ea;
case 0x4da1f0:goto L4da1f0;
case 0x4da1f7:goto L4da1f7;
case 0x4da1fa:c.instructions+=2;goto B4da1fa;
case 0x4da1fb:c.instructions+=1;goto B4da1fb;
case 0x4da200:goto L4da200;
case 0x4da202:c.instructions+=2;goto B4da202;
case 0x4da203:c.instructions+=1;goto B4da203;
case 0x4da208:goto L4da208;
case 0x4da20b:c.instructions+=2;goto B4da20b;
case 0x4da20c:c.instructions+=1;goto B4da20c;
case 0x4da211:goto L4da211;
case 0x4da214:c.instructions+=2;goto B4da214;
case 0x4da215:c.instructions+=1;goto B4da215;
case 0x4da21a:goto L4da21a;
case 0x4da220:c.instructions+=5;goto B4da220;
case 0x4da223:c.instructions+=4;goto B4da223;
case 0x4da224:c.instructions+=3;goto B4da224;
case 0x4da227:c.instructions+=2;goto B4da227;
case 0x4da229:c.instructions+=1;goto B4da229;
case 0x4da22b:goto L4da22b;
case 0x4da22c:c.instructions+=4;goto B4da22c;
case 0x4da22d:c.instructions+=3;goto B4da22d;
case 0x4da22e:c.instructions+=2;goto B4da22e;
case 0x4da231:c.instructions+=1;goto B4da231;
case 0x4da234:goto L4da234;
case 0x4da23b:c.instructions+=1;goto B4da23b;
case 0x4da241:goto L4da241;
case 0x4da247:c.instructions+=3;goto B4da247;
case 0x4da249:c.instructions+=2;goto B4da249;
case 0x4da24f:c.instructions+=1;goto B4da24f;
case 0x4da251:goto L4da251;
case 0x4da257:c.instructions+=9;goto B4da257;
case 0x4da259:c.instructions+=8;goto B4da259;
case 0x4da25b:c.instructions+=7;goto B4da25b;
case 0x4da25f:c.instructions+=6;goto B4da25f;
case 0x4da263:c.instructions+=5;goto B4da263;
case 0x4da269:c.instructions+=4;goto B4da269;
case 0x4da26f:c.instructions+=3;goto B4da26f;
case 0x4da271:c.instructions+=2;goto B4da271;
case 0x4da274:c.instructions+=1;goto B4da274;
case 0x4da276:goto L4da276;
case 0x4da27c:c.instructions+=1;goto B4da27c;
case 0x4da283:goto L4da283;
case 0x4da288:c.instructions+=2;goto B4da288;
case 0x4da28a:c.instructions+=1;goto B4da28a;
case 0x4da28c:goto L4da28c;
case 0x4da291:c.instructions+=2;goto B4da291;
case 0x4da293:c.instructions+=1;goto B4da293;
case 0x4da295:goto L4da295;
case 0x4da296:c.instructions+=2;goto B4da296;
case 0x4da298:c.instructions+=1;goto B4da298;
case 0x4da29d:goto L4da29d;
case 0x4da29f:goto L4da29f;
case 0x4da2a0:c.instructions+=2;goto B4da2a0;
case 0x4da2a2:c.instructions+=1;goto B4da2a2;
case 0x4da2a7:goto L4da2a7;
case 0x4da2a9:goto L4da2a9;
case 0x4da2af:c.instructions+=9;goto B4da2af;
case 0x4da2b1:c.instructions+=8;goto B4da2b1;
case 0x4da2b3:c.instructions+=7;goto B4da2b3;
case 0x4da2b7:c.instructions+=6;goto B4da2b7;
case 0x4da2bb:c.instructions+=5;goto B4da2bb;
case 0x4da2c1:c.instructions+=4;goto B4da2c1;
case 0x4da2c7:c.instructions+=3;goto B4da2c7;
case 0x4da2c9:c.instructions+=2;goto B4da2c9;
case 0x4da2cc:c.instructions+=1;goto B4da2cc;
case 0x4da2ce:goto L4da2ce;
case 0x4da2d4:c.instructions+=1;goto B4da2d4;
case 0x4da2db:goto L4da2db;
case 0x4da2e0:c.instructions+=2;goto B4da2e0;
case 0x4da2e2:c.instructions+=1;goto B4da2e2;
case 0x4da2e4:goto L4da2e4;
case 0x4da2e9:c.instructions+=2;goto B4da2e9;
case 0x4da2eb:c.instructions+=1;goto B4da2eb;
case 0x4da2ed:goto L4da2ed;
case 0x4da2ee:c.instructions+=2;goto B4da2ee;
case 0x4da2f0:c.instructions+=1;goto B4da2f0;
case 0x4da2f5:goto L4da2f5;
case 0x4da2f7:goto L4da2f7;
case 0x4da2f8:c.instructions+=2;goto B4da2f8;
case 0x4da2fa:c.instructions+=1;goto B4da2fa;
case 0x4da2ff:goto L4da2ff;
case 0x4da304:c.instructions+=2;goto B4da304;
case 0x4da306:c.instructions+=1;goto B4da306;
case 0x4da308:goto L4da308;
case 0x4da30d:c.instructions+=2;goto B4da30d;
case 0x4da30f:c.instructions+=1;goto B4da30f;
case 0x4da311:goto L4da311;
case 0x4da316:c.instructions+=1;goto B4da316;
case 0x4da31b:goto L4da31b;
case 0x4da31d:c.instructions+=1;goto B4da31d;
case 0x4da31f:goto L4da31f;
case 0x4da324:c.instructions+=1;goto B4da324;
case 0x4da326:goto L4da326;
case 0x4da32c:c.instructions+=1;goto B4da32c;
case 0x4da32f:goto L4da32f;
case 0x4da332:c.instructions+=1;goto B4da332;
case 0x4da334:goto L4da334;
case 0x4da33a:c.instructions+=2;goto B4da33a;
case 0x4da33b:c.instructions+=1;goto B4da33b;
case 0x4da340:goto L4da340;
case 0x4da346:c.instructions+=2;goto B4da346;
case 0x4da347:c.instructions+=1;goto B4da347;
case 0x4da34c:goto L4da34c;
case 0x4da34f:goto L4da34f;
case 0x4da355:c.instructions+=2;goto B4da355;
case 0x4da357:c.instructions+=1;goto B4da357;
case 0x4da35d:goto L4da35d;
case 0x4da364:goto L4da364;
case 0x4da367:c.instructions+=2;goto B4da367;
case 0x4da368:c.instructions+=1;goto B4da368;
case 0x4da36d:goto L4da36d;
case 0x4da36f:c.instructions+=2;goto B4da36f;
case 0x4da370:c.instructions+=1;goto B4da370;
case 0x4da375:goto L4da375;
case 0x4da37b:c.instructions+=5;goto B4da37b;
case 0x4da37e:c.instructions+=4;goto B4da37e;
case 0x4da37f:c.instructions+=3;goto B4da37f;
case 0x4da382:c.instructions+=2;goto B4da382;
case 0x4da384:c.instructions+=1;goto B4da384;
case 0x4da386:goto L4da386;
case 0x4da387:c.instructions+=4;goto B4da387;
case 0x4da388:c.instructions+=3;goto B4da388;
case 0x4da389:c.instructions+=2;goto B4da389;
case 0x4da38c:c.instructions+=1;goto B4da38c;
case 0x4da38f:goto L4da38f;
case 0x4da394:c.instructions+=2;goto B4da394;
case 0x4da396:c.instructions+=1;goto B4da396;
case 0x4da398:goto L4da398;
case 0x4da39d:c.instructions+=2;goto B4da39d;
case 0x4da39f:c.instructions+=1;goto B4da39f;
case 0x4da3a1:goto L4da3a1;
case 0x4da3a7:c.instructions+=2;goto B4da3a7;
case 0x4da3a8:c.instructions+=1;goto B4da3a8;
case 0x4da3ad:goto L4da3ad;
case 0x4da3b3:c.instructions+=2;goto B4da3b3;
case 0x4da3b4:c.instructions+=1;goto B4da3b4;
case 0x4da3b9:goto L4da3b9;
case 0x4da3bc:c.instructions+=5;goto B4da3bc;
case 0x4da3bd:c.instructions+=4;goto B4da3bd;
case 0x4da3be:c.instructions+=3;goto B4da3be;
case 0x4da3bf:c.instructions+=2;goto B4da3bf;
case 0x4da3c2:c.instructions+=1;goto B4da3c2;
case 0x4da3c5:goto L4da3c5;
case 0x4da3cb:c.instructions+=4;goto B4da3cb;
case 0x4da3cc:c.instructions+=3;goto B4da3cc;
case 0x4da3ce:c.instructions+=2;goto B4da3ce;
case 0x4da3d0:c.instructions+=1;goto B4da3d0;
case 0x4da3d2:goto L4da3d2;
case 0x4da3d8:c.instructions+=1;goto B4da3d8;
case 0x4da3e0:goto L4da3e0;
case 0x4da3e3:c.instructions+=2;goto B4da3e3;
case 0x4da3e4:c.instructions+=1;goto B4da3e4;
case 0x4da3e9:goto L4da3e9;
case 0x4da3eb:c.instructions+=2;goto B4da3eb;
case 0x4da3ec:c.instructions+=1;goto B4da3ec;
case 0x4da3f1:goto L4da3f1;
case 0x4da3f4:c.instructions+=2;goto B4da3f4;
case 0x4da3f5:c.instructions+=1;goto B4da3f5;
case 0x4da3fa:goto L4da3fa;
case 0x4da3fd:c.instructions+=2;goto B4da3fd;
case 0x4da3fe:c.instructions+=1;goto B4da3fe;
case 0x4da403:goto L4da403;
case 0x4da409:c.instructions+=5;goto B4da409;
case 0x4da40c:c.instructions+=4;goto B4da40c;
case 0x4da40d:c.instructions+=3;goto B4da40d;
case 0x4da410:c.instructions+=2;goto B4da410;
case 0x4da412:c.instructions+=1;goto B4da412;
case 0x4da414:goto L4da414;
case 0x4da41a:c.instructions+=2;goto B4da41a;
case 0x4da41b:c.instructions+=1;goto B4da41b;
case 0x4da420:goto L4da420;
case 0x4da426:c.instructions+=2;goto B4da426;
case 0x4da427:c.instructions+=1;goto B4da427;
case 0x4da42c:goto L4da42c;
case 0x4da431:c.instructions+=3;goto B4da431;
case 0x4da434:c.instructions+=2;goto B4da434;
case 0x4da436:c.instructions+=1;goto B4da436;
case 0x4da438:goto L4da438;
case 0x4da43d:c.instructions+=2;goto B4da43d;
case 0x4da43f:c.instructions+=1;goto B4da43f;
case 0x4da445:goto L4da445;
case 0x4da447:c.instructions+=2;goto B4da447;
case 0x4da44c:c.instructions+=1;goto B4da44c;
case 0x4da451:goto L4da451;
case 0x4da453:c.instructions+=3;goto B4da453;
case 0x4da458:c.instructions+=2;goto B4da458;
case 0x4da45a:c.instructions+=1;goto B4da45a;
case 0x4da45f:goto L4da45f;
case 0x4da460:c.instructions+=2;goto B4da460;
case 0x4da462:c.instructions+=1;goto B4da462;
case 0x4da467:goto L4da467;
case 0x4da46a:c.instructions+=1;goto B4da46a;
case 0x4da46f:goto L4da46f;
case 0x4da470:c.instructions+=2;goto B4da470;
case 0x4da472:c.instructions+=1;goto B4da472;
case 0x4da477:goto L4da477;
case 0x4da47a:c.instructions+=2;goto B4da47a;
case 0x4da47d:c.instructions+=1;goto B4da47d;
case 0x4da482:goto L4da482;
case 0x4da485:c.instructions+=3;goto B4da485;
case 0x4da487:c.instructions+=2;goto B4da487;
case 0x4da489:c.instructions+=1;goto B4da489;
case 0x4da48b:goto L4da48b;
case 0x4da48d:c.instructions+=2;goto B4da48d;
case 0x4da48f:c.instructions+=1;goto B4da48f;
case 0x4da491:goto L4da491;
case 0x4da494:c.instructions+=1;goto B4da494;
case 0x4da496:goto L4da496;
case 0x4da498:c.instructions+=1;goto B4da498;
case 0x4da49a:goto L4da49a;
case 0x4da49c:c.instructions+=1;goto B4da49c;
case 0x4da49e:goto L4da49e;
case 0x4da49f:c.instructions+=4;goto B4da49f;
case 0x4da4a5:c.instructions+=3;goto B4da4a5;
case 0x4da4aa:c.instructions+=2;goto B4da4aa;
case 0x4da4ab:c.instructions+=1;goto B4da4ab;
case 0x4da4b0:goto L4da4b0;
case 0x4da4b3:c.instructions+=6;goto B4da4b3;
case 0x4da4b4:c.instructions+=5;goto B4da4b4;
case 0x4da4b5:c.instructions+=4;goto B4da4b5;
case 0x4da4b6:c.instructions+=3;goto B4da4b6;
case 0x4da4b7:c.instructions+=2;goto B4da4b7;
case 0x4da4ba:c.instructions+=1;goto B4da4ba;
case 0x4da4bd:goto L4da4bd;
case 0x4da4c3:c.instructions+=4;goto B4da4c3;
case 0x4da4c4:c.instructions+=3;goto B4da4c4;
case 0x4da4c9:c.instructions+=2;goto B4da4c9;
case 0x4da4ca:c.instructions+=1;goto B4da4ca;
case 0x4da4cf:goto L4da4cf;
case 0x4da4d2:c.instructions+=6;goto B4da4d2;
case 0x4da4d3:c.instructions+=5;goto B4da4d3;
case 0x4da4d4:c.instructions+=4;goto B4da4d4;
case 0x4da4d5:c.instructions+=3;goto B4da4d5;
case 0x4da4d6:c.instructions+=2;goto B4da4d6;
case 0x4da4d9:c.instructions+=1;goto B4da4d9;
case 0x4da4dc:goto L4da4dc;
case 0x4da4e2:c.instructions+=9;goto B4da4e2;
case 0x4da4e5:c.instructions+=8;goto B4da4e5;
case 0x4da4e8:c.instructions+=7;goto B4da4e8;
case 0x4da4ed:c.instructions+=6;goto B4da4ed;
case 0x4da4f0:c.instructions+=5;goto B4da4f0;
case 0x4da4f3:c.instructions+=4;goto B4da4f3;
case 0x4da4f5:c.instructions+=3;goto B4da4f5;
case 0x4da4f8:c.instructions+=2;goto B4da4f8;
case 0x4da500:c.instructions+=1;goto B4da500;
case 0x4da502:goto L4da502;
case 0x4da503:c.instructions+=4;goto B4da503;
case 0x4da504:c.instructions+=3;goto B4da504;
case 0x4da508:c.instructions+=2;goto B4da508;
case 0x4da509:c.instructions+=1;goto B4da509;
case 0x4da50b:goto L4da50b;
case 0x4da50e:c.instructions+=1;goto B4da50e;
case 0x4da510:goto L4da510;
case 0x4da511:c.instructions+=3;goto B4da511;
case 0x4da512:c.instructions+=2;goto B4da512;
case 0x4da516:c.instructions+=1;goto B4da516;
case 0x4da517:goto L4da517;
case 0x4da51d:c.instructions+=1;goto B4da51d;
case 0x4da522:goto L4da522;
case 0x4da526:c.instructions+=2;goto B4da526;
case 0x4da528:c.instructions+=1;goto B4da528;
case 0x4da52a:goto L4da52a;
case 0x4da52c:c.instructions+=1;goto B4da52c;
case 0x4da52e:goto L4da52e;
case 0x4da530:goto L4da530;
case 0x4da534:c.instructions+=3;goto B4da534;
case 0x4da538:c.instructions+=2;goto B4da538;
case 0x4da539:c.instructions+=1;goto B4da539;
case 0x4da53e:goto L4da53e;
case 0x4da544:c.instructions+=5;goto B4da544;
case 0x4da548:c.instructions+=4;goto B4da548;
case 0x4da549:c.instructions+=3;goto B4da549;
case 0x4da54e:c.instructions+=2;goto B4da54e;
case 0x4da54f:c.instructions+=1;goto B4da54f;
case 0x4da554:goto L4da554;
case 0x4da557:c.instructions+=1;goto B4da557;
case 0x4da558:goto L4da558;
case 0x4da559:c.instructions+=4;goto B4da559;
case 0x4da55a:c.instructions+=3;goto B4da55a;
case 0x4da55b:c.instructions+=2;goto B4da55b;
case 0x4da55e:c.instructions+=1;goto B4da55e;
case 0x4da570:goto L4da570;
case 0x4da574:c.instructions+=5;goto B4da574;
case 0x4da577:c.instructions+=4;goto B4da577;
case 0x4da57c:c.instructions+=3;goto B4da57c;
case 0x4da57e:c.instructions+=2;goto B4da57e;
case 0x4da580:c.instructions+=1;goto B4da580;
case 0x4da582:goto L4da582;
case 0x4da586:c.instructions+=3;goto B4da586;
case 0x4da589:c.instructions+=2;goto B4da589;
case 0x4da58a:c.instructions+=1;goto B4da58a;
case 0x4da58f:goto L4da58f;
case 0x4da590:goto L4da590;
case 0x4da591:c.instructions+=11;goto B4da591;
case 0x4da592:c.instructions+=10;goto B4da592;
case 0x4da594:c.instructions+=9;goto B4da594;
case 0x4da597:c.instructions+=8;goto B4da597;
case 0x4da59a:c.instructions+=7;goto B4da59a;
case 0x4da59d:c.instructions+=6;goto B4da59d;
case 0x4da59e:c.instructions+=5;goto B4da59e;
case 0x4da5a1:c.instructions+=4;goto B4da5a1;
case 0x4da5a3:c.instructions+=3;goto B4da5a3;
case 0x4da5a5:c.instructions+=2;goto B4da5a5;
case 0x4da5a7:c.instructions+=1;goto B4da5a7;
case 0x4da5ad:goto L4da5ad;
case 0x4da5b1:c.instructions+=3;goto B4da5b1;
case 0x4da5b4:c.instructions+=2;goto B4da5b4;
case 0x4da5b7:c.instructions+=1;goto B4da5b7;
case 0x4da5bc:goto L4da5bc;
case 0x4da5c2:c.instructions+=9;goto B4da5c2;
case 0x4da5c8:c.instructions+=8;goto B4da5c8;
case 0x4da5c9:c.instructions+=7;goto B4da5c9;
case 0x4da5cc:c.instructions+=6;goto B4da5cc;
case 0x4da5cd:c.instructions+=5;goto B4da5cd;
case 0x4da5d3:c.instructions+=4;goto B4da5d3;
case 0x4da5d4:c.instructions+=3;goto B4da5d4;
case 0x4da5d6:c.instructions+=2;goto B4da5d6;
case 0x4da5d9:c.instructions+=1;goto B4da5d9;
case 0x4da5de:goto L4da5de;
case 0x4da5e4:c.instructions+=2;goto B4da5e4;
case 0x4da5e6:c.instructions+=1;goto B4da5e6;
case 0x4da5e8:goto L4da5e8;
case 0x4da5eb:c.instructions+=10;goto B4da5eb;
case 0x4da5ee:c.instructions+=9;goto B4da5ee;
case 0x4da5f4:c.instructions+=8;goto B4da5f4;
case 0x4da5f6:c.instructions+=7;goto B4da5f6;
case 0x4da5f9:c.instructions+=6;goto B4da5f9;
case 0x4da5fb:c.instructions+=5;goto B4da5fb;
case 0x4da5fe:c.instructions+=4;goto B4da5fe;
case 0x4da5ff:c.instructions+=3;goto B4da5ff;
case 0x4da600:c.instructions+=2;goto B4da600;
case 0x4da602:c.instructions+=1;goto B4da602;
case 0x4da607:goto L4da607;
case 0x4da60a:c.instructions+=7;goto B4da60a;
case 0x4da60d:c.instructions+=6;goto B4da60d;
case 0x4da611:c.instructions+=5;goto B4da611;
case 0x4da614:c.instructions+=4;goto B4da614;
case 0x4da616:c.instructions+=3;goto B4da616;
case 0x4da619:c.instructions+=2;goto B4da619;
case 0x4da61a:c.instructions+=1;goto B4da61a;
case 0x4da61f:goto L4da61f;
case 0x4da621:c.instructions+=1;goto B4da621;
case 0x4da626:goto L4da626;
case 0x4da628:c.instructions+=1;goto B4da628;
case 0x4da62d:goto L4da62d;
case 0x4da62e:c.instructions+=3;goto B4da62e;
case 0x4da62f:c.instructions+=2;goto B4da62f;
case 0x4da630:c.instructions+=1;goto B4da630;
case 0x4da640:goto L4da640;
case 0x4da641:c.instructions+=6;goto B4da641;
case 0x4da643:c.instructions+=5;goto B4da643;
case 0x4da644:c.instructions+=4;goto B4da644;
case 0x4da646:c.instructions+=3;goto B4da646;
case 0x4da64c:c.instructions+=2;goto B4da64c;
case 0x4da64e:c.instructions+=1;goto B4da64e;
case 0x4da650:goto L4da650;
case 0x4da655:goto L4da655;
case 0x4da658:c.instructions+=7;goto B4da658;
case 0x4da65b:c.instructions+=6;goto B4da65b;
case 0x4da65e:c.instructions+=5;goto B4da65e;
case 0x4da660:c.instructions+=4;goto B4da660;
case 0x4da663:c.instructions+=3;goto B4da663;
case 0x4da665:c.instructions+=2;goto B4da665;
case 0x4da667:c.instructions+=1;goto B4da667;
case 0x4da669:goto L4da669;
case 0x4da66c:c.instructions+=2;goto B4da66c;
case 0x4da66d:c.instructions+=1;goto B4da66d;
case 0x4da672:goto L4da672;
case 0x4da675:c.instructions+=2;goto B4da675;
case 0x4da676:c.instructions+=1;goto B4da676;
case 0x4da67b:goto L4da67b;
case 0x4da67e:c.instructions+=2;goto B4da67e;
case 0x4da67f:c.instructions+=1;goto B4da67f;
case 0x4da684:goto L4da684;
case 0x4da689:c.instructions+=3;goto B4da689;
case 0x4da68c:c.instructions+=2;goto B4da68c;
case 0x4da68e:c.instructions+=1;goto B4da68e;
case 0x4da690:goto L4da690;
case 0x4da695:c.instructions+=1;goto B4da695;
case 0x4da69a:goto L4da69a;
case 0x4da69c:c.instructions+=1;goto B4da69c;
case 0x4da69e:goto L4da69e;
case 0x4da6a1:c.instructions+=3;goto B4da6a1;
case 0x4da6a2:c.instructions+=2;goto B4da6a2;
case 0x4da6a4:c.instructions+=1;goto B4da6a4;
case 0x4da6a9:goto L4da6a9;
case 0x4da6ae:c.instructions+=1;goto B4da6ae;
case 0x4da6b3:goto L4da6b3;
case 0x4da6b5:c.instructions+=1;goto B4da6b5;
case 0x4da6b7:goto L4da6b7;
case 0x4da6bc:c.instructions+=1;goto B4da6bc;
case 0x4da6c1:goto L4da6c1;
case 0x4da6c3:c.instructions+=1;goto B4da6c3;
case 0x4da6c5:goto L4da6c5;
case 0x4da6c8:c.instructions+=2;goto B4da6c8;
case 0x4da6c9:c.instructions+=1;goto B4da6c9;
case 0x4da6ce:goto L4da6ce;
case 0x4da6d1:c.instructions+=3;goto B4da6d1;
case 0x4da6d2:c.instructions+=2;goto B4da6d2;
case 0x4da6d3:c.instructions+=1;goto B4da6d3;
case 0x4da6d6:goto L4da6d6;
case 0x4da6d9:c.instructions+=2;goto B4da6d9;
case 0x4da6da:c.instructions+=1;goto B4da6da;
case 0x4da6df:goto L4da6df;
case 0x4da6e2:goto L4da6e2;
case 0x4da6e3:c.instructions+=2;goto B4da6e3;
case 0x4da6e4:c.instructions+=1;goto B4da6e4;
case 0x4da6f0:goto L4da6f0;
case 0x4da6f4:c.instructions+=5;goto B4da6f4;
case 0x4da6f7:c.instructions+=4;goto B4da6f7;
case 0x4da6fc:c.instructions+=3;goto B4da6fc;
case 0x4da6fe:c.instructions+=2;goto B4da6fe;
case 0x4da700:c.instructions+=1;goto B4da700;
case 0x4da702:goto L4da702;
case 0x4da706:c.instructions+=3;goto B4da706;
case 0x4da709:c.instructions+=2;goto B4da709;
case 0x4da70a:c.instructions+=1;goto B4da70a;
case 0x4da70f:goto L4da70f;
case 0x4da710:goto L4da710;
case 0x4da711:c.instructions+=7;goto B4da711;
case 0x4da712:c.instructions+=6;goto B4da712;
case 0x4da713:c.instructions+=5;goto B4da713;
case 0x4da715:c.instructions+=4;goto B4da715;
case 0x4da718:c.instructions+=3;goto B4da718;
case 0x4da71b:c.instructions+=2;goto B4da71b;
case 0x4da71d:c.instructions+=1;goto B4da71d;
case 0x4da723:goto L4da723;
case 0x4da724:c.instructions+=4;goto B4da724;
case 0x4da726:c.instructions+=3;goto B4da726;
case 0x4da729:c.instructions+=2;goto B4da729;
case 0x4da72b:c.instructions+=1;goto B4da72b;
case 0x4da72d:goto L4da72d;
case 0x4da730:goto L4da730;
case 0x4da732:c.instructions+=1;goto B4da732;
case 0x4da734:goto L4da734;
case 0x4da736:c.instructions+=3;goto B4da736;
case 0x4da739:c.instructions+=2;goto B4da739;
case 0x4da73b:c.instructions+=1;goto B4da73b;
case 0x4da73d:goto L4da73d;
case 0x4da73f:c.instructions+=1;goto B4da73f;
case 0x4da741:goto L4da741;
case 0x4da743:goto L4da743;
case 0x4da748:c.instructions+=2;goto B4da748;
case 0x4da74a:c.instructions+=1;goto B4da74a;
case 0x4da74c:goto L4da74c;
case 0x4da751:c.instructions+=2;goto B4da751;
case 0x4da753:c.instructions+=1;goto B4da753;
case 0x4da755:goto L4da755;
case 0x4da758:c.instructions+=3;goto B4da758;
case 0x4da75a:c.instructions+=2;goto B4da75a;
case 0x4da75b:c.instructions+=1;goto B4da75b;
case 0x4da75d:goto L4da75d;
case 0x4da760:c.instructions+=3;goto B4da760;
case 0x4da765:c.instructions+=2;goto B4da765;
case 0x4da766:c.instructions+=1;goto B4da766;
case 0x4da76b:goto L4da76b;
case 0x4da76e:c.instructions+=2;goto B4da76e;
case 0x4da770:c.instructions+=1;goto B4da770;
case 0x4da772:goto L4da772;
case 0x4da775:c.instructions+=3;goto B4da775;
case 0x4da77a:c.instructions+=2;goto B4da77a;
case 0x4da77b:c.instructions+=1;goto B4da77b;
case 0x4da780:goto L4da780;
case 0x4da783:c.instructions+=2;goto B4da783;
case 0x4da785:c.instructions+=1;goto B4da785;
case 0x4da787:goto L4da787;
case 0x4da78a:c.instructions+=3;goto B4da78a;
case 0x4da78f:c.instructions+=2;goto B4da78f;
case 0x4da790:c.instructions+=1;goto B4da790;
case 0x4da795:goto L4da795;
case 0x4da798:c.instructions+=2;goto B4da798;
case 0x4da79a:c.instructions+=1;goto B4da79a;
case 0x4da79c:goto L4da79c;
case 0x4da79f:c.instructions+=3;goto B4da79f;
case 0x4da7a2:c.instructions+=2;goto B4da7a2;
case 0x4da7a3:c.instructions+=1;goto B4da7a3;
case 0x4da7a4:goto L4da7a4;
case 0x4da7a6:c.instructions+=2;goto B4da7a6;
case 0x4da7a7:c.instructions+=1;goto B4da7a7;
case 0x4da7ac:goto L4da7ac;
case 0x4da7af:c.instructions+=6;goto B4da7af;
case 0x4da7b4:c.instructions+=5;goto B4da7b4;
case 0x4da7b6:c.instructions+=4;goto B4da7b6;
case 0x4da7b8:c.instructions+=3;goto B4da7b8;
case 0x4da7ba:c.instructions+=2;goto B4da7ba;
case 0x4da7be:c.instructions+=1;goto B4da7be;
case 0x4da7c3:goto L4da7c3;
case 0x4da7c6:c.instructions+=1;goto B4da7c6;
case 0x4da7c8:goto L4da7c8;
case 0x4da7ce:c.instructions+=1;goto B4da7ce;
case 0x4da7d0:goto L4da7d0;
case 0x4da7d6:goto L4da7d6;
case 0x4da7da:c.instructions+=6;goto B4da7da;
case 0x4da7e0:c.instructions+=5;goto B4da7e0;
case 0x4da7e2:c.instructions+=4;goto B4da7e2;
case 0x4da7e4:c.instructions+=3;goto B4da7e4;
case 0x4da7e6:c.instructions+=2;goto B4da7e6;
case 0x4da7e9:c.instructions+=1;goto B4da7e9;
case 0x4da7eb:goto L4da7eb;
case 0x4da7ee:c.instructions+=2;goto B4da7ee;
case 0x4da7f0:c.instructions+=1;goto B4da7f0;
case 0x4da7f2:goto L4da7f2;
case 0x4da7f7:c.instructions+=2;goto B4da7f7;
case 0x4da7f9:c.instructions+=1;goto B4da7f9;
case 0x4da7fb:goto L4da7fb;
case 0x4da800:c.instructions+=2;goto B4da800;
case 0x4da802:c.instructions+=1;goto B4da802;
case 0x4da804:goto L4da804;
case 0x4da806:c.instructions+=5;goto B4da806;
case 0x4da809:c.instructions+=4;goto B4da809;
case 0x4da80b:c.instructions+=3;goto B4da80b;
case 0x4da80c:c.instructions+=2;goto B4da80c;
case 0x4da80f:c.instructions+=1;goto B4da80f;
case 0x4da814:goto L4da814;
case 0x4da817:goto L4da817;
case 0x4da81b:c.instructions+=2;goto B4da81b;
case 0x4da81c:c.instructions+=1;goto B4da81c;
case 0x4da81e:goto L4da81e;
case 0x4da821:c.instructions+=3;goto B4da821;
case 0x4da826:c.instructions+=2;goto B4da826;
case 0x4da827:c.instructions+=1;goto B4da827;
case 0x4da82c:goto L4da82c;
case 0x4da82f:c.instructions+=2;goto B4da82f;
case 0x4da831:c.instructions+=1;goto B4da831;
case 0x4da833:goto L4da833;
case 0x4da836:c.instructions+=3;goto B4da836;
case 0x4da83b:c.instructions+=2;goto B4da83b;
case 0x4da83c:c.instructions+=1;goto B4da83c;
case 0x4da841:goto L4da841;
case 0x4da844:c.instructions+=2;goto B4da844;
case 0x4da846:c.instructions+=1;goto B4da846;
case 0x4da848:goto L4da848;
case 0x4da84b:c.instructions+=2;goto B4da84b;
case 0x4da84c:c.instructions+=1;goto B4da84c;
case 0x4da851:goto L4da851;
case 0x4da854:c.instructions+=2;goto B4da854;
case 0x4da855:c.instructions+=1;goto B4da855;
case 0x4da85a:goto L4da85a;
case 0x4da85d:goto L4da85d;
case 0x4da860:c.instructions+=3;goto B4da860;
case 0x4da865:c.instructions+=2;goto B4da865;
case 0x4da866:c.instructions+=1;goto B4da866;
case 0x4da86b:goto L4da86b;
case 0x4da86e:c.instructions+=2;goto B4da86e;
case 0x4da870:c.instructions+=1;goto B4da870;
case 0x4da872:goto L4da872;
case 0x4da875:c.instructions+=3;goto B4da875;
case 0x4da87a:c.instructions+=2;goto B4da87a;
case 0x4da87b:c.instructions+=1;goto B4da87b;
case 0x4da880:goto L4da880;
case 0x4da883:c.instructions+=2;goto B4da883;
case 0x4da885:c.instructions+=1;goto B4da885;
case 0x4da887:goto L4da887;
case 0x4da88a:c.instructions+=3;goto B4da88a;
case 0x4da88f:c.instructions+=2;goto B4da88f;
case 0x4da890:c.instructions+=1;goto B4da890;
case 0x4da895:goto L4da895;
case 0x4da898:c.instructions+=2;goto B4da898;
case 0x4da89a:c.instructions+=1;goto B4da89a;
case 0x4da89c:goto L4da89c;
case 0x4da89f:c.instructions+=2;goto B4da89f;
case 0x4da8a1:c.instructions+=1;goto B4da8a1;
case 0x4da8a3:goto L4da8a3;
case 0x4da8a6:c.instructions+=3;goto B4da8a6;
case 0x4da8ab:c.instructions+=2;goto B4da8ab;
case 0x4da8ac:c.instructions+=1;goto B4da8ac;
case 0x4da8b1:goto L4da8b1;
case 0x4da8b4:c.instructions+=2;goto B4da8b4;
case 0x4da8b6:c.instructions+=1;goto B4da8b6;
case 0x4da8b8:goto L4da8b8;
case 0x4da8bb:c.instructions+=2;goto B4da8bb;
case 0x4da8bd:c.instructions+=1;goto B4da8bd;
case 0x4da8bf:goto L4da8bf;
case 0x4da8c2:c.instructions+=2;goto B4da8c2;
case 0x4da8c3:c.instructions+=1;goto B4da8c3;
case 0x4da8c8:goto L4da8c8;
case 0x4da8cb:c.instructions+=2;goto B4da8cb;
case 0x4da8cc:c.instructions+=1;goto B4da8cc;
case 0x4da8d1:goto L4da8d1;
case 0x4da8d4:goto L4da8d4;
case 0x4da8d7:c.instructions+=4;goto B4da8d7;
case 0x4da8da:c.instructions+=3;goto B4da8da;
case 0x4da8e1:c.instructions+=2;goto B4da8e1;
case 0x4da8e3:c.instructions+=1;goto B4da8e3;
case 0x4da8e5:goto L4da8e5;
case 0x4da8e8:c.instructions+=2;goto B4da8e8;
case 0x4da8e9:c.instructions+=1;goto B4da8e9;
case 0x4da8ee:goto L4da8ee;
case 0x4da8f1:goto L4da8f1;
case 0x4da8f2:c.instructions+=3;goto B4da8f2;
case 0x4da8f3:c.instructions+=2;goto B4da8f3;
case 0x4da8f4:c.instructions+=1;goto B4da8f4;
case 0x4da900:goto L4da900;
case 0x4da901:c.instructions+=9;goto B4da901;
case 0x4da903:c.instructions+=8;goto B4da903;
case 0x4da906:c.instructions+=7;goto B4da906;
case 0x4da909:c.instructions+=6;goto B4da909;
case 0x4da90c:c.instructions+=5;goto B4da90c;
case 0x4da90e:c.instructions+=4;goto B4da90e;
case 0x4da911:c.instructions+=3;goto B4da911;
case 0x4da913:c.instructions+=2;goto B4da913;
case 0x4da915:c.instructions+=1;goto B4da915;
case 0x4da91b:goto L4da91b;
case 0x4da91e:c.instructions+=2;goto B4da91e;
case 0x4da920:c.instructions+=1;goto B4da920;
case 0x4da922:goto L4da922;
case 0x4da925:c.instructions+=2;goto B4da925;
case 0x4da926:c.instructions+=1;goto B4da926;
case 0x4da92b:goto L4da92b;
case 0x4da92e:goto L4da92e;
case 0x4da931:c.instructions+=6;goto B4da931;
case 0x4da938:c.instructions+=5;goto B4da938;
case 0x4da93b:c.instructions+=4;goto B4da93b;
case 0x4da93e:c.instructions+=3;goto B4da93e;
case 0x4da944:c.instructions+=2;goto B4da944;
case 0x4da946:c.instructions+=1;goto B4da946;
case 0x4da94b:goto L4da94b;
case 0x4da94e:c.instructions+=3;goto B4da94e;
case 0x4da953:c.instructions+=2;goto B4da953;
case 0x4da955:c.instructions+=1;goto B4da955;
case 0x4da957:goto L4da957;
case 0x4da95c:c.instructions+=2;goto B4da95c;
case 0x4da95e:c.instructions+=1;goto B4da95e;
case 0x4da960:goto L4da960;
case 0x4da964:c.instructions+=3;goto B4da964;
case 0x4da965:c.instructions+=2;goto B4da965;
case 0x4da967:c.instructions+=1;goto B4da967;
case 0x4da96c:goto L4da96c;
case 0x4da96f:c.instructions+=1;goto B4da96f;
case 0x4da974:goto L4da974;
case 0x4da975:c.instructions+=2;goto B4da975;
case 0x4da977:c.instructions+=1;goto B4da977;
case 0x4da97c:goto L4da97c;
case 0x4da97d:c.instructions+=1;goto B4da97d;
case 0x4da980:goto L4da980;
case 0x4da984:c.instructions+=3;goto B4da984;
case 0x4da985:c.instructions+=2;goto B4da985;
case 0x4da987:c.instructions+=1;goto B4da987;
case 0x4da98c:goto L4da98c;
case 0x4da98f:c.instructions+=1;goto B4da98f;
case 0x4da994:goto L4da994;
case 0x4da995:c.instructions+=2;goto B4da995;
case 0x4da997:c.instructions+=1;goto B4da997;
case 0x4da99c:goto L4da99c;
case 0x4da99d:c.instructions+=1;goto B4da99d;
case 0x4da9a0:goto L4da9a0;
case 0x4da9a1:c.instructions+=7;goto B4da9a1;
case 0x4da9a2:c.instructions+=6;goto B4da9a2;
case 0x4da9a3:c.instructions+=5;goto B4da9a3;
case 0x4da9a5:c.instructions+=4;goto B4da9a5;
case 0x4da9a8:c.instructions+=3;goto B4da9a8;
case 0x4da9ad:c.instructions+=2;goto B4da9ad;
case 0x4da9ae:c.instructions+=1;goto B4da9ae;
case 0x4da9b3:goto L4da9b3;
case 0x4da9b6:c.instructions+=2;goto B4da9b6;
case 0x4da9b7:c.instructions+=1;goto B4da9b7;
case 0x4da9bc:goto L4da9bc;
case 0x4da9bf:c.instructions+=2;goto B4da9bf;
case 0x4da9c0:c.instructions+=1;goto B4da9c0;
case 0x4da9c5:goto L4da9c5;
case 0x4da9c8:c.instructions+=2;goto B4da9c8;
case 0x4da9c9:c.instructions+=1;goto B4da9c9;
case 0x4da9ce:goto L4da9ce;
case 0x4da9d1:c.instructions+=2;goto B4da9d1;
case 0x4da9d2:c.instructions+=1;goto B4da9d2;
case 0x4da9d7:goto L4da9d7;
case 0x4da9da:c.instructions+=2;goto B4da9da;
case 0x4da9db:c.instructions+=1;goto B4da9db;
case 0x4da9e0:goto L4da9e0;
case 0x4da9e3:c.instructions+=8;goto B4da9e3;
case 0x4da9e6:c.instructions+=7;goto B4da9e6;
case 0x4da9e9:c.instructions+=6;goto B4da9e9;
case 0x4da9ec:c.instructions+=5;goto B4da9ec;
case 0x4da9ee:c.instructions+=4;goto B4da9ee;
case 0x4da9f0:c.instructions+=3;goto B4da9f0;
case 0x4da9f3:c.instructions+=2;goto B4da9f3;
case 0x4da9f5:c.instructions+=1;goto B4da9f5;
case 0x4da9fb:goto L4da9fb;
case 0x4da9fc:c.instructions+=3;goto B4da9fc;
case 0x4da9ff:c.instructions+=2;goto B4da9ff;
case 0x4daa01:c.instructions+=1;goto B4daa01;
case 0x4daa06:goto L4daa06;
case 0x4daa0a:c.instructions+=3;goto B4daa0a;
case 0x4daa0b:c.instructions+=2;goto B4daa0b;
case 0x4daa0d:c.instructions+=1;goto B4daa0d;
case 0x4daa12:goto L4daa12;
case 0x4daa15:c.instructions+=2;goto B4daa15;
case 0x4daa16:c.instructions+=1;goto B4daa16;
case 0x4daa18:goto L4daa18;
case 0x4daa1a:c.instructions+=3;goto B4daa1a;
case 0x4daa1c:c.instructions+=2;goto B4daa1c;
case 0x4daa1d:c.instructions+=1;goto B4daa1d;
case 0x4daa20:goto L4daa20;
case 0x4daa22:c.instructions+=2;goto B4daa22;
case 0x4daa25:c.instructions+=1;goto B4daa25;
case 0x4daa27:goto L4daa27;
case 0x4daa2a:c.instructions+=1;goto B4daa2a;
case 0x4daa2c:goto L4daa2c;
case 0x4daa2d:c.instructions+=3;goto B4daa2d;
case 0x4daa30:c.instructions+=2;goto B4daa30;
case 0x4daa33:c.instructions+=1;goto B4daa33;
case 0x4daa35:goto L4daa35;
case 0x4daa37:goto L4daa37;
case 0x4daa39:c.instructions+=1;goto B4daa39;
case 0x4daa3e:goto L4daa3e;
case 0x4daa40:c.instructions+=2;goto B4daa40;
case 0x4daa42:c.instructions+=1;goto B4daa42;
case 0x4daa48:goto L4daa48;
case 0x4daa4a:c.instructions+=1;goto B4daa4a;
case 0x4daa4c:goto L4daa4c;
case 0x4daa4f:c.instructions+=3;goto B4daa4f;
case 0x4daa54:c.instructions+=2;goto B4daa54;
case 0x4daa55:c.instructions+=1;goto B4daa55;
case 0x4daa5a:goto L4daa5a;
case 0x4daa5d:c.instructions+=2;goto B4daa5d;
case 0x4daa5e:c.instructions+=1;goto B4daa5e;
case 0x4daa63:goto L4daa63;
case 0x4daa66:c.instructions+=2;goto B4daa66;
case 0x4daa67:c.instructions+=1;goto B4daa67;
case 0x4daa6c:goto L4daa6c;
case 0x4daa6f:c.instructions+=2;goto B4daa6f;
case 0x4daa70:c.instructions+=1;goto B4daa70;
case 0x4daa75:goto L4daa75;
case 0x4daa78:c.instructions+=2;goto B4daa78;
case 0x4daa79:c.instructions+=1;goto B4daa79;
case 0x4daa7e:goto L4daa7e;
case 0x4daa81:c.instructions+=2;goto B4daa81;
case 0x4daa82:c.instructions+=1;goto B4daa82;
case 0x4daa87:goto L4daa87;
case 0x4daa8a:c.instructions+=4;goto B4daa8a;
case 0x4daa8b:c.instructions+=3;goto B4daa8b;
case 0x4daa8c:c.instructions+=2;goto B4daa8c;
case 0x4daa8d:c.instructions+=1;goto B4daa8d;
case 0x4daa90:goto L4daa90;
case 0x4daa93:c.instructions+=2;goto B4daa93;
case 0x4daa97:c.instructions+=1;goto B4daa97;
case 0x4daa99:goto L4daa99;
case 0x4daa9c:c.instructions+=1;goto B4daa9c;
case 0x4daa9e:goto L4daa9e;
case 0x4daaa1:c.instructions+=5;goto B4daaa1;
case 0x4daaa7:c.instructions+=4;goto B4daaa7;
case 0x4daaaa:c.instructions+=3;goto B4daaaa;
case 0x4daaad:c.instructions+=2;goto B4daaad;
case 0x4daaaf:c.instructions+=1;goto B4daaaf;
case 0x4daab1:goto L4daab1;
case 0x4daab3:c.instructions+=1;goto B4daab3;
case 0x4daab5:goto L4daab5;
case 0x4daab7:c.instructions+=1;goto B4daab7;
case 0x4daab9:goto L4daab9;
case 0x4daabb:goto L4daabb;
case 0x4daabd:c.instructions+=1;goto B4daabd;
case 0x4daac2:goto L4daac2;
case 0x4daac5:goto L4daac5;
case 0x4daac9:c.instructions+=3;goto B4daac9;
case 0x4daaca:c.instructions+=2;goto B4daaca;
case 0x4daacc:c.instructions+=1;goto B4daacc;
case 0x4daad1:goto L4daad1;
case 0x4daad2:c.instructions+=3;goto B4daad2;
case 0x4daad3:c.instructions+=2;goto B4daad3;
case 0x4daad4:c.instructions+=1;goto B4daad4;
case 0x4daad7:goto L4daad7;
case 0x4daada:c.instructions+=1;goto B4daada;
case 0x4daadc:goto L4daadc;
case 0x4daade:c.instructions+=1;goto B4daade;
case 0x4daae0:goto L4daae0;
case 0x4daae4:c.instructions+=2;goto B4daae4;
case 0x4daae5:c.instructions+=1;goto B4daae5;
case 0x4daaea:goto L4daaea;
case 0x4daaed:c.instructions+=1;goto B4daaed;
case 0x4daaef:goto L4daaef;
case 0x4daaf2:c.instructions+=1;goto B4daaf2;
case 0x4daaf4:goto L4daaf4;
case 0x4daaf8:c.instructions+=2;goto B4daaf8;
case 0x4daaf9:c.instructions+=1;goto B4daaf9;
case 0x4daafe:goto L4daafe;
case 0x4dab01:c.instructions+=2;goto B4dab01;
case 0x4dab03:c.instructions+=1;goto B4dab03;
case 0x4dab05:goto L4dab05;
case 0x4dab09:c.instructions+=3;goto B4dab09;
case 0x4dab0b:c.instructions+=2;goto B4dab0b;
case 0x4dab0d:c.instructions+=1;goto B4dab0d;
case 0x4dab0f:goto L4dab0f;
case 0x4dab12:c.instructions+=1;goto B4dab12;
case 0x4dab17:goto L4dab17;
case 0x4dab19:goto L4dab19;
case 0x4dab1c:c.instructions+=1;goto B4dab1c;
case 0x4dab21:goto L4dab21;
case 0x4dab24:c.instructions+=1;goto B4dab24;
case 0x4dab28:goto L4dab28;
case 0x4dab2b:c.instructions+=5;goto B4dab2b;
case 0x4dab30:c.instructions+=4;goto B4dab30;
case 0x4dab33:c.instructions+=3;goto B4dab33;
case 0x4dab36:c.instructions+=2;goto B4dab36;
case 0x4dab38:c.instructions+=1;goto B4dab38;
case 0x4dab3a:goto L4dab3a;
case 0x4dab3c:c.instructions+=1;goto B4dab3c;
case 0x4dab3e:goto L4dab3e;
case 0x4dab40:c.instructions+=2;goto B4dab40;
case 0x4dab42:c.instructions+=1;goto B4dab42;
case 0x4dab47:goto L4dab47;
case 0x4dab4a:c.instructions+=4;goto B4dab4a;
case 0x4dab4b:c.instructions+=3;goto B4dab4b;
case 0x4dab4c:c.instructions+=2;goto B4dab4c;
case 0x4dab4d:c.instructions+=1;goto B4dab4d;
case 0x4dab50:goto L4dab50;
case 0x4dab52:c.instructions+=2;goto B4dab52;
case 0x4dab54:c.instructions+=1;goto B4dab54;
case 0x4dab59:goto L4dab59;
case 0x4dab5c:c.instructions+=4;goto B4dab5c;
case 0x4dab5d:c.instructions+=3;goto B4dab5d;
case 0x4dab5e:c.instructions+=2;goto B4dab5e;
case 0x4dab5f:c.instructions+=1;goto B4dab5f;
case 0x4dab62:goto L4dab62;
case 0x4dab66:c.instructions+=3;goto B4dab66;
case 0x4dab67:c.instructions+=2;goto B4dab67;
case 0x4dab69:c.instructions+=1;goto B4dab69;
case 0x4dab6e:goto L4dab6e;
case 0x4dab6f:c.instructions+=3;goto B4dab6f;
case 0x4dab70:c.instructions+=2;goto B4dab70;
case 0x4dab71:c.instructions+=1;goto B4dab71;
case 0x4dab80:goto L4dab80;
case 0x4dab81:c.instructions+=5;goto B4dab81;
case 0x4dab86:c.instructions+=4;goto B4dab86;
case 0x4dab87:c.instructions+=3;goto B4dab87;
case 0x4dab89:c.instructions+=2;goto B4dab89;
case 0x4dab8c:c.instructions+=1;goto B4dab8c;
case 0x4dab90:goto L4dab90;
case 0x4dab93:c.instructions+=2;goto B4dab93;
case 0x4dab95:c.instructions+=1;goto B4dab95;
case 0x4dab97:goto L4dab97;
case 0x4dab98:c.instructions+=3;goto B4dab98;
case 0x4dab9b:c.instructions+=2;goto B4dab9b;
case 0x4dab9e:c.instructions+=1;goto B4dab9e;
case 0x4daba0:goto L4daba0;
case 0x4daba1:c.instructions+=2;goto B4daba1;
case 0x4daba2:c.instructions+=1;goto B4daba2;
case 0x4daba5:goto L4daba5;
case 0x4daba8:c.instructions+=5;goto B4daba8;
case 0x4dabac:c.instructions+=4;goto B4dabac;
case 0x4dabae:c.instructions+=3;goto B4dabae;
case 0x4dabb0:c.instructions+=2;goto B4dabb0;
case 0x4dabb3:c.instructions+=1;goto B4dabb3;
case 0x4dabb8:goto L4dabb8;
case 0x4dabb9:c.instructions+=4;goto B4dabb9;
case 0x4dabbc:c.instructions+=3;goto B4dabbc;
case 0x4dabc0:c.instructions+=2;goto B4dabc0;
case 0x4dabc1:c.instructions+=1;goto B4dabc1;
case 0x4dabd0:goto L4dabd0;
case 0x4dabd1:c.instructions+=10;goto B4dabd1;
case 0x4dabd2:c.instructions+=9;goto B4dabd2;
case 0x4dabd4:c.instructions+=8;goto B4dabd4;
case 0x4dabd7:c.instructions+=7;goto B4dabd7;
case 0x4dabda:c.instructions+=6;goto B4dabda;
case 0x4dabdc:c.instructions+=5;goto B4dabdc;
case 0x4dabdf:c.instructions+=4;goto B4dabdf;
case 0x4dabe0:c.instructions+=3;goto B4dabe0;
case 0x4dabe3:c.instructions+=2;goto B4dabe3;
case 0x4dabe5:c.instructions+=1;goto B4dabe5;
case 0x4dabe7:goto L4dabe7;
case 0x4dabea:c.instructions+=4;goto B4dabea;
case 0x4dabec:c.instructions+=3;goto B4dabec;
case 0x4dabf1:c.instructions+=2;goto B4dabf1;
case 0x4dabf2:c.instructions+=1;goto B4dabf2;
case 0x4dabf7:goto L4dabf7;
case 0x4dabfc:c.instructions+=3;goto B4dabfc;
case 0x4dabff:c.instructions+=2;goto B4dabff;
case 0x4dac02:c.instructions+=1;goto B4dac02;
case 0x4dac08:goto L4dac08;
case 0x4dac09:c.instructions+=4;goto B4dac09;
case 0x4dac0f:c.instructions+=3;goto B4dac0f;
case 0x4dac10:c.instructions+=2;goto B4dac10;
case 0x4dac11:c.instructions+=1;goto B4dac11;
case 0x4dac14:goto L4dac14;
case 0x4dac18:c.instructions+=3;goto B4dac18;
case 0x4dac19:c.instructions+=2;goto B4dac19;
case 0x4dac1b:c.instructions+=1;goto B4dac1b;
case 0x4dac20:goto L4dac20;
case 0x4dac23:c.instructions+=3;goto B4dac23;
case 0x4dac26:c.instructions+=2;goto B4dac26;
case 0x4dac28:c.instructions+=1;goto B4dac28;
case 0x4dac2e:goto L4dac2e;
case 0x4dac2f:c.instructions+=1;goto B4dac2f;
case 0x4dac34:goto L4dac34;
case 0x4dac38:c.instructions+=4;goto B4dac38;
case 0x4dac3d:c.instructions+=3;goto B4dac3d;
case 0x4dac40:c.instructions+=2;goto B4dac40;
case 0x4dac43:c.instructions+=1;goto B4dac43;
case 0x4dac49:goto L4dac49;
case 0x4dac50:c.instructions+=1;goto B4dac50;
case 0x4dac56:goto L4dac56;
case 0x4dac5b:c.instructions+=2;goto B4dac5b;
case 0x4dac5e:c.instructions+=1;goto B4dac5e;
case 0x4dac64:goto L4dac64;
case 0x4dac68:c.instructions+=1;goto B4dac68;
case 0x4dac6a:goto L4dac6a;
case 0x4dac70:c.instructions+=1;goto B4dac70;
case 0x4dac72:goto L4dac72;
case 0x4dac74:goto L4dac74;
case 0x4dac79:goto L4dac79;
case 0x4dac7b:c.instructions+=1;goto B4dac7b;
case 0x4dac81:goto L4dac81;
case 0x4dac89:goto L4dac89;
case 0x4dac8c:c.instructions+=3;goto B4dac8c;
case 0x4dac91:c.instructions+=2;goto B4dac91;
case 0x4dac92:c.instructions+=1;goto B4dac92;
case 0x4dac97:goto L4dac97;
case 0x4dac9a:c.instructions+=2;goto B4dac9a;
case 0x4dac9c:c.instructions+=1;goto B4dac9c;
case 0x4dac9e:goto L4dac9e;
case 0x4daca1:c.instructions+=4;goto B4daca1;
case 0x4daca3:c.instructions+=3;goto B4daca3;
case 0x4daca8:c.instructions+=2;goto B4daca8;
case 0x4daca9:c.instructions+=1;goto B4daca9;
case 0x4dacae:goto L4dacae;
case 0x4dacb1:goto L4dacb1;
case 0x4dacb4:c.instructions+=3;goto B4dacb4;
case 0x4dacb9:c.instructions+=2;goto B4dacb9;
case 0x4dacba:c.instructions+=1;goto B4dacba;
case 0x4dacbf:goto L4dacbf;
case 0x4dacc2:c.instructions+=2;goto B4dacc2;
case 0x4dacc4:c.instructions+=1;goto B4dacc4;
case 0x4dacc6:goto L4dacc6;
case 0x4dacc9:c.instructions+=3;goto B4dacc9;
case 0x4dacce:c.instructions+=2;goto B4dacce;
case 0x4daccf:c.instructions+=1;goto B4daccf;
case 0x4dacd4:goto L4dacd4;
case 0x4dacd7:goto L4dacd7;
case 0x4dacda:c.instructions+=4;goto B4dacda;
case 0x4dace0:c.instructions+=3;goto B4dace0;
case 0x4dace2:c.instructions+=2;goto B4dace2;
case 0x4dace5:c.instructions+=1;goto B4dace5;
case 0x4dace7:goto L4dace7;
case 0x4daced:c.instructions+=2;goto B4daced;
case 0x4dacf0:c.instructions+=1;goto B4dacf0;
case 0x4dacf2:goto L4dacf2;
case 0x4dacf5:c.instructions+=3;goto B4dacf5;
case 0x4dacfa:c.instructions+=2;goto B4dacfa;
case 0x4dacfb:c.instructions+=1;goto B4dacfb;
case 0x4dad00:goto L4dad00;
case 0x4dad03:c.instructions+=2;goto B4dad03;
case 0x4dad04:c.instructions+=1;goto B4dad04;
case 0x4dad09:goto L4dad09;
case 0x4dad0c:c.instructions+=3;goto B4dad0c;
case 0x4dad0e:c.instructions+=2;goto B4dad0e;
case 0x4dad13:c.instructions+=1;goto B4dad13;
case 0x4dad14:goto L4dad14;
case 0x4dad19:goto L4dad19;
case 0x4dad1c:goto L4dad1c;
case 0x4dad20:c.instructions+=7;goto B4dad20;
case 0x4dad24:c.instructions+=6;goto B4dad24;
case 0x4dad2a:c.instructions+=5;goto B4dad2a;
case 0x4dad2d:c.instructions+=4;goto B4dad2d;
case 0x4dad35:c.instructions+=3;goto B4dad35;
case 0x4dad37:c.instructions+=2;goto B4dad37;
case 0x4dad3a:c.instructions+=1;goto B4dad3a;
case 0x4dad3c:goto L4dad3c;
case 0x4dad42:c.instructions+=1;goto B4dad42;
case 0x4dad47:goto L4dad47;
case 0x4dad4b:c.instructions+=1;goto B4dad4b;
case 0x4dad4f:goto L4dad4f;
case 0x4dad53:c.instructions+=6;goto B4dad53;
case 0x4dad55:c.instructions+=5;goto B4dad55;
case 0x4dad59:c.instructions+=4;goto B4dad59;
case 0x4dad5f:c.instructions+=3;goto B4dad5f;
case 0x4dad61:c.instructions+=2;goto B4dad61;
case 0x4dad64:c.instructions+=1;goto B4dad64;
case 0x4dad66:goto L4dad66;
case 0x4dad6c:c.instructions+=1;goto B4dad6c;
case 0x4dad71:goto L4dad71;
case 0x4dad75:c.instructions+=1;goto B4dad75;
case 0x4dad79:goto L4dad79;
case 0x4dad7e:c.instructions+=2;goto B4dad7e;
case 0x4dad80:c.instructions+=1;goto B4dad80;
case 0x4dad86:goto L4dad86;
case 0x4dad8a:c.instructions+=4;goto B4dad8a;
case 0x4dad8f:c.instructions+=3;goto B4dad8f;
case 0x4dad95:c.instructions+=2;goto B4dad95;
case 0x4dad99:c.instructions+=1;goto B4dad99;
case 0x4dad9e:goto L4dad9e;
case 0x4dad9f:c.instructions+=3;goto B4dad9f;
case 0x4dada2:c.instructions+=2;goto B4dada2;
case 0x4dada3:c.instructions+=1;goto B4dada3;
case 0x4dada8:goto L4dada8;
case 0x4dadb0:c.instructions+=1;goto B4dadb0;
case 0x4dadb2:goto L4dadb2;
case 0x4dadb6:c.instructions+=2;goto B4dadb6;
case 0x4dadba:c.instructions+=1;goto B4dadba;
case 0x4dadbc:goto L4dadbc;
case 0x4dadbf:c.instructions+=3;goto B4dadbf;
case 0x4dadc2:c.instructions+=2;goto B4dadc2;
case 0x4dadc6:c.instructions+=1;goto B4dadc6;
case 0x4dadc8:goto L4dadc8;
case 0x4dadcb:c.instructions+=3;goto B4dadcb;
case 0x4dadd0:c.instructions+=2;goto B4dadd0;
case 0x4dadd1:c.instructions+=1;goto B4dadd1;
case 0x4dadd6:goto L4dadd6;
case 0x4dadd9:c.instructions+=2;goto B4dadd9;
case 0x4dadda:c.instructions+=1;goto B4dadda;
case 0x4daddf:goto L4daddf;
case 0x4dade2:c.instructions+=4;goto B4dade2;
case 0x4dade4:c.instructions+=3;goto B4dade4;
case 0x4dade9:c.instructions+=2;goto B4dade9;
case 0x4dadea:c.instructions+=1;goto B4dadea;
case 0x4dadef:goto L4dadef;
case 0x4dadf2:goto L4dadf2;
case 0x4dadf6:c.instructions+=1;goto B4dadf6;
case 0x4dadf8:goto L4dadf8;
case 0x4dadf9:c.instructions+=1;goto B4dadf9;
case 0x4dadfd:goto L4dadfd;
case 0x4dae01:c.instructions+=4;goto B4dae01;
case 0x4dae07:c.instructions+=3;goto B4dae07;
case 0x4dae09:c.instructions+=2;goto B4dae09;
case 0x4dae0c:c.instructions+=1;goto B4dae0c;
case 0x4dae12:goto L4dae12;
case 0x4dae15:c.instructions+=3;goto B4dae15;
case 0x4dae1a:c.instructions+=2;goto B4dae1a;
case 0x4dae1b:c.instructions+=1;goto B4dae1b;
case 0x4dae20:goto L4dae20;
case 0x4dae23:c.instructions+=2;goto B4dae23;
case 0x4dae25:c.instructions+=1;goto B4dae25;
case 0x4dae27:goto L4dae27;
case 0x4dae2a:c.instructions+=4;goto B4dae2a;
case 0x4dae2c:c.instructions+=3;goto B4dae2c;
case 0x4dae31:c.instructions+=2;goto B4dae31;
case 0x4dae32:c.instructions+=1;goto B4dae32;
case 0x4dae37:goto L4dae37;
case 0x4dae3a:goto L4dae3a;
case 0x4dae3d:c.instructions+=3;goto B4dae3d;
case 0x4dae42:c.instructions+=2;goto B4dae42;
case 0x4dae43:c.instructions+=1;goto B4dae43;
case 0x4dae48:goto L4dae48;
case 0x4dae4b:c.instructions+=2;goto B4dae4b;
case 0x4dae4d:c.instructions+=1;goto B4dae4d;
case 0x4dae4f:goto L4dae4f;
case 0x4dae52:c.instructions+=3;goto B4dae52;
case 0x4dae57:c.instructions+=2;goto B4dae57;
case 0x4dae58:c.instructions+=1;goto B4dae58;
case 0x4dae5d:goto L4dae5d;
case 0x4dae60:goto L4dae60;
case 0x4dae63:c.instructions+=4;goto B4dae63;
case 0x4dae69:c.instructions+=3;goto B4dae69;
case 0x4dae6b:c.instructions+=2;goto B4dae6b;
case 0x4dae6e:c.instructions+=1;goto B4dae6e;
case 0x4dae74:goto L4dae74;
case 0x4dae7a:c.instructions+=2;goto B4dae7a;
case 0x4dae7d:c.instructions+=1;goto B4dae7d;
case 0x4dae83:goto L4dae83;
case 0x4dae86:c.instructions+=3;goto B4dae86;
case 0x4dae8b:c.instructions+=2;goto B4dae8b;
case 0x4dae8c:c.instructions+=1;goto B4dae8c;
case 0x4dae91:goto L4dae91;
case 0x4dae94:c.instructions+=2;goto B4dae94;
case 0x4dae95:c.instructions+=1;goto B4dae95;
case 0x4dae9a:goto L4dae9a;
case 0x4dae9d:c.instructions+=4;goto B4dae9d;
case 0x4dae9f:c.instructions+=3;goto B4dae9f;
case 0x4daea4:c.instructions+=2;goto B4daea4;
case 0x4daea5:c.instructions+=1;goto B4daea5;
case 0x4daeaa:goto L4daeaa;
case 0x4daeaf:c.instructions+=1;goto B4daeaf;
case 0x4daeb4:goto L4daeb4;
case 0x4daeb7:c.instructions+=2;goto B4daeb7;
case 0x4daeb8:c.instructions+=1;goto B4daeb8;
case 0x4daeb9:goto L4daeb9;
case 0x4daebe:goto L4daebe;
case 0x4daec2:c.instructions+=2;goto B4daec2;
case 0x4daec5:c.instructions+=1;goto B4daec5;
case 0x4daeca:goto L4daeca;
case 0x4daecd:c.instructions+=4;goto B4daecd;
case 0x4daece:c.instructions+=3;goto B4daece;
case 0x4daed3:c.instructions+=2;goto B4daed3;
case 0x4daed4:c.instructions+=1;goto B4daed4;
case 0x4daed9:goto L4daed9;
case 0x4daedd:c.instructions+=10;goto B4daedd;
case 0x4daee0:c.instructions+=9;goto B4daee0;
case 0x4daee3:c.instructions+=8;goto B4daee3;
case 0x4daee5:c.instructions+=7;goto B4daee5;
case 0x4daeea:c.instructions+=6;goto B4daeea;
case 0x4daeef:c.instructions+=5;goto B4daeef;
case 0x4daef4:c.instructions+=4;goto B4daef4;
case 0x4daef5:c.instructions+=3;goto B4daef5;
case 0x4daef6:c.instructions+=2;goto B4daef6;
case 0x4daef8:c.instructions+=1;goto B4daef8;
case 0x4daefd:goto L4daefd;
case 0x4daefe:c.instructions+=3;goto B4daefe;
case 0x4daeff:c.instructions+=2;goto B4daeff;
case 0x4daf00:c.instructions+=1;goto B4daf00;
case 0x4daf10:goto L4daf10;
case 0x4daf12:c.instructions+=16;goto B4daf12;
case 0x4daf17:c.instructions+=15;goto B4daf17;
case 0x4daf1d:c.instructions+=14;goto B4daf1d;
case 0x4daf1e:c.instructions+=13;goto B4daf1e;
case 0x4daf25:c.instructions+=12;goto B4daf25;
case 0x4daf28:c.instructions+=11;goto B4daf28;
case 0x4daf29:c.instructions+=10;goto B4daf29;
case 0x4daf2a:c.instructions+=9;goto B4daf2a;
case 0x4daf2b:c.instructions+=8;goto B4daf2b;
case 0x4daf2d:c.instructions+=7;goto B4daf2d;
case 0x4daf30:c.instructions+=6;goto B4daf30;
case 0x4daf31:c.instructions+=5;goto B4daf31;
case 0x4daf34:c.instructions+=4;goto B4daf34;
case 0x4daf39:c.instructions+=3;goto B4daf39;
case 0x4daf3a:c.instructions+=2;goto B4daf3a;
case 0x4daf3e:c.instructions+=1;goto B4daf3e;
case 0x4daf43:goto L4daf43;
case 0x4daf45:c.instructions+=3;goto B4daf45;
case 0x4daf48:c.instructions+=2;goto B4daf48;
case 0x4daf4a:c.instructions+=1;goto B4daf4a;
case 0x4daf4c:goto L4daf4c;
case 0x4daf51:goto L4daf51;
case 0x4daf53:c.instructions+=1;goto B4daf53;
case 0x4daf55:goto L4daf55;
case 0x4daf58:c.instructions+=1;goto B4daf58;
case 0x4daf5a:goto L4daf5a;
case 0x4daf5c:goto L4daf5c;
case 0x4daf5f:c.instructions+=4;goto B4daf5f;
case 0x4daf61:c.instructions+=3;goto B4daf61;
case 0x4daf64:c.instructions+=2;goto B4daf64;
case 0x4daf67:c.instructions+=1;goto B4daf67;
case 0x4daf69:goto L4daf69;
case 0x4daf6c:c.instructions+=3;goto B4daf6c;
case 0x4daf71:c.instructions+=2;goto B4daf71;
case 0x4daf72:c.instructions+=1;goto B4daf72;
case 0x4daf77:goto L4daf77;
case 0x4daf79:c.instructions+=3;goto B4daf79;
case 0x4daf7c:c.instructions+=2;goto B4daf7c;
case 0x4daf7e:c.instructions+=1;goto B4daf7e;
case 0x4daf80:goto L4daf80;
case 0x4daf85:goto L4daf85;
case 0x4daf87:c.instructions+=1;goto B4daf87;
case 0x4daf89:goto L4daf89;
case 0x4daf8c:c.instructions+=1;goto B4daf8c;
case 0x4daf8e:goto L4daf8e;
case 0x4daf90:goto L4daf90;
case 0x4daf93:c.instructions+=4;goto B4daf93;
case 0x4daf95:c.instructions+=3;goto B4daf95;
case 0x4daf98:c.instructions+=2;goto B4daf98;
case 0x4daf9b:c.instructions+=1;goto B4daf9b;
case 0x4daf9d:goto L4daf9d;
case 0x4dafa2:c.instructions+=2;goto B4dafa2;
case 0x4dafa4:c.instructions+=1;goto B4dafa4;
case 0x4dafa6:goto L4dafa6;
case 0x4dafab:c.instructions+=2;goto B4dafab;
case 0x4dafad:c.instructions+=1;goto B4dafad;
case 0x4dafb3:goto L4dafb3;
case 0x4dafb6:c.instructions+=3;goto B4dafb6;
case 0x4dafbb:c.instructions+=2;goto B4dafbb;
case 0x4dafbc:c.instructions+=1;goto B4dafbc;
case 0x4dafc1:goto L4dafc1;
case 0x4dafc3:c.instructions+=3;goto B4dafc3;
case 0x4dafc6:c.instructions+=2;goto B4dafc6;
case 0x4dafc8:c.instructions+=1;goto B4dafc8;
case 0x4dafca:goto L4dafca;
case 0x4dafcf:goto L4dafcf;
case 0x4dafd1:c.instructions+=1;goto B4dafd1;
case 0x4dafd3:goto L4dafd3;
case 0x4dafd6:c.instructions+=1;goto B4dafd6;
case 0x4dafd8:goto L4dafd8;
case 0x4dafda:goto L4dafda;
case 0x4dafdd:c.instructions+=4;goto B4dafdd;
case 0x4dafdf:c.instructions+=3;goto B4dafdf;
case 0x4dafe2:c.instructions+=2;goto B4dafe2;
case 0x4dafe5:c.instructions+=1;goto B4dafe5;
case 0x4dafe7:goto L4dafe7;
case 0x4dafea:c.instructions+=4;goto B4dafea;
case 0x4dafed:c.instructions+=3;goto B4dafed;
case 0x4daff2:c.instructions+=2;goto B4daff2;
case 0x4daff3:c.instructions+=1;goto B4daff3;
case 0x4daff8:goto L4daff8;
case 0x4daffa:c.instructions+=3;goto B4daffa;
case 0x4daffd:c.instructions+=2;goto B4daffd;
case 0x4dafff:c.instructions+=1;goto B4dafff;
default:missing_instruction(c.pc);}
B4da000:L4da000:{c.instructions+=5;NFSU2_TR(0x4da000);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da001:{NFSU2_TR(0x4da001);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da002:{NFSU2_TR(0x4da002);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da003:{NFSU2_TR(0x4da003);
w4(R+4,u32(0x7f68c4ull));
}
B4da008:{NFSU2_TR(0x4da008);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da00dull));
TAIL_STATIC(0x4c6500u,4c6);
}
B4da00d:L4da00d:{c.instructions+=2;NFSU2_TR(0x4da00d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da00e:{NFSU2_TR(0x4da00e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da013ull));
TAIL_STATIC(0x575630u,575);
}
B4da013:L4da013:{c.instructions+=4;NFSU2_TR(0x4da013);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4da016:{NFSU2_TR(0x4da016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da017:{NFSU2_TR(0x4da017);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4da01a:{NFSU2_TR(0x4da01a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da01b:L4da01b:{c.instructions+=8;NFSU2_TR(0x4da01b);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4da01f:{NFSU2_TR(0x4da01f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da020:{NFSU2_TR(0x4da020);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4da024:{NFSU2_TR(0x4da024);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da025:{NFSU2_TR(0x4da025);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da026:{NFSU2_TR(0x4da026);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da027:{NFSU2_TR(0x4da027);
w4(R+4,u32(0x7f68c4ull));
}
B4da02c:{NFSU2_TR(0x4da02c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da031ull));
TAIL_STATIC(0x4a9b80u,4a9);
}
B4da031:L4da031:{c.instructions+=2;NFSU2_TR(0x4da031);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da032:{NFSU2_TR(0x4da032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da037ull));
TAIL_STATIC(0x575630u,575);
}
B4da037:L4da037:{c.instructions+=4;NFSU2_TR(0x4da037);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4da03a:{NFSU2_TR(0x4da03a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da03b:{NFSU2_TR(0x4da03b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4da03e:{NFSU2_TR(0x4da03e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da090:L4da090:{c.instructions+=6;NFSU2_TR(0x4da090);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da091:{NFSU2_TR(0x4da091);
__builtin_memmove((R+24),(R+4),4);
}
B4da093:{NFSU2_TR(0x4da093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da096:{NFSU2_TR(0x4da096);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da097:{NFSU2_TR(0x4da097);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da098:{NFSU2_TR(0x4da098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da09dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da09d:L4da09d:{c.instructions+=9;NFSU2_TR(0x4da09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da0a0:{NFSU2_TR(0x4da0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da0a3:{NFSU2_TR(0x4da0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4da0a6:{NFSU2_TR(0x4da0a6);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4da0a8:{NFSU2_TR(0x4da0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da0ab:{NFSU2_TR(0x4da0ab);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B4da0ad:{NFSU2_TR(0x4da0ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4da0b0:{NFSU2_TR(0x4da0b0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4da0b2:{NFSU2_TR(0x4da0b2);
if(r1(R+518)){{goto L4da178;}}
}
B4da0b8:L4da0b8:{c.instructions+=7;NFSU2_TR(0x4da0b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4da0bc:{NFSU2_TR(0x4da0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4da0c3:{NFSU2_TR(0x4da0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4da0ca:{NFSU2_TR(0x4da0ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da0cd:{NFSU2_TR(0x4da0cd);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4da0d3:{NFSU2_TR(0x4da0d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da0d4:{NFSU2_TR(0x4da0d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da0d9ull));
TAIL_STATIC(0x5eef60u,5ee);
}
B4da0d9:L4da0d9:{c.instructions+=2;NFSU2_TR(0x4da0d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da0db:{NFSU2_TR(0x4da0db);
if(r1(R+518)){{goto L4da139;}}
}
B4da0dd:L4da0dd:{c.instructions+=3;NFSU2_TR(0x4da0dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4da0e0:{NFSU2_TR(0x4da0e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da0e2:{NFSU2_TR(0x4da0e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da0eb;}}
}
B4da0e4:L4da0e4:{c.instructions+=3;NFSU2_TR(0x4da0e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4da0e7:{NFSU2_TR(0x4da0e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da0e9:{NFSU2_TR(0x4da0e9);
if(r1(R+518)){{goto L4da139;}}
}
B4da0eb:L4da0eb:{c.instructions+=5;NFSU2_TR(0x4da0eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da0ee:{NFSU2_TR(0x4da0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4da0f1:{NFSU2_TR(0x4da0f1);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B4da0f9:{NFSU2_TR(0x4da0f9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4da0fc:{NFSU2_TR(0x4da0fc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4da178;}}
}
B4da0fe:L4da0fe:{c.instructions+=1;NFSU2_TR(0x4da0fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4da180ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4da105:L4da105:{c.instructions+=3;NFSU2_TR(0x4da105);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da106:{NFSU2_TR(0x4da106);
__builtin_memmove((R+4),(R+24),4);
}
B4da108:{NFSU2_TR(0x4da108);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da10dull));
TAIL_STATIC(0x4c6cb0u,4c6);
}
B4da10d:L4da10d:{c.instructions+=3;NFSU2_TR(0x4da10d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da10e:{NFSU2_TR(0x4da10e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da10f:{NFSU2_TR(0x4da10f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da112:L4da112:{c.instructions+=3;NFSU2_TR(0x4da112);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da113:{NFSU2_TR(0x4da113);
__builtin_memmove((R+4),(R+24),4);
}
B4da115:{NFSU2_TR(0x4da115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da11aull));
TAIL_STATIC(0x4c6e00u,4c6);
}
B4da11a:L4da11a:{c.instructions+=3;NFSU2_TR(0x4da11a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da11b:{NFSU2_TR(0x4da11b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da11c:{NFSU2_TR(0x4da11c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da11f:L4da11f:{c.instructions+=3;NFSU2_TR(0x4da11f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da120:{NFSU2_TR(0x4da120);
__builtin_memmove((R+4),(R+24),4);
}
B4da122:{NFSU2_TR(0x4da122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da127ull));
TAIL_STATIC(0x4c6d50u,4c6);
}
B4da127:L4da127:{c.instructions+=3;NFSU2_TR(0x4da127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da128:{NFSU2_TR(0x4da128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da129:{NFSU2_TR(0x4da129);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da12c:L4da12c:{c.instructions+=3;NFSU2_TR(0x4da12c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da12d:{NFSU2_TR(0x4da12d);
__builtin_memmove((R+4),(R+24),4);
}
B4da12f:{NFSU2_TR(0x4da12f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da134ull));
TAIL_STATIC(0x4c6e50u,4c6);
}
B4da134:L4da134:{c.instructions+=3;NFSU2_TR(0x4da134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da135:{NFSU2_TR(0x4da135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da136:{NFSU2_TR(0x4da136);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da139:L4da139:{c.instructions+=10;NFSU2_TR(0x4da139);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da13c:{NFSU2_TR(0x4da13c);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4da142:{NFSU2_TR(0x4da142);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4da144:{NFSU2_TR(0x4da144);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4da148:{NFSU2_TR(0x4da148);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4da14c:{NFSU2_TR(0x4da14c);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4da152:{NFSU2_TR(0x4da152);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4da158:{NFSU2_TR(0x4da158);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4da15a:{NFSU2_TR(0x4da15a);
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
B4da15d:{NFSU2_TR(0x4da15d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da178;}}
}
B4da15f:L4da15f:{c.instructions+=3;NFSU2_TR(0x4da15f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da162:{NFSU2_TR(0x4da162);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da163:{NFSU2_TR(0x4da163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da168ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da168:L4da168:{c.instructions+=3;NFSU2_TR(0x4da168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da16b:{NFSU2_TR(0x4da16b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da16c:{NFSU2_TR(0x4da16c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da171ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da171:L4da171:{c.instructions+=2;NFSU2_TR(0x4da171);
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
B4da174:{NFSU2_TR(0x4da174);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4da178:L4da178:{c.instructions+=3;NFSU2_TR(0x4da178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da179:{NFSU2_TR(0x4da179);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da17a:{NFSU2_TR(0x4da17a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da190:L4da190:{c.instructions+=13;NFSU2_TR(0x4da190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4da193:{NFSU2_TR(0x4da193);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da194:{NFSU2_TR(0x4da194);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da195:{NFSU2_TR(0x4da195);
__builtin_memmove((R+24),(R+4),4);
}
B4da197:{NFSU2_TR(0x4da197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da19a:{NFSU2_TR(0x4da19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4da19d:{NFSU2_TR(0x4da19d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da1a0:{NFSU2_TR(0x4da1a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da1a1:{NFSU2_TR(0x4da1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4da1a4:{NFSU2_TR(0x4da1a4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B4da1a6:{NFSU2_TR(0x4da1a6);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B4da1a8:{NFSU2_TR(0x4da1a8);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4da1aa:{NFSU2_TR(0x4da1aa);
if(r1(R+518)){{goto L4da558;}}
}
B4da1b0:L4da1b0:{c.instructions+=4;NFSU2_TR(0x4da1b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4da1b4:{NFSU2_TR(0x4da1b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4da1b6:{NFSU2_TR(0x4da1b6);
w4(R+4,u32(0x6ull));
}
B4da1bb:{NFSU2_TR(0x4da1bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da1c1:L4da1c1:{c.instructions+=1;NFSU2_TR(0x4da1c1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4da1c3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4da1c1u);}goto L4da1c1;}
}
B4da1c3:L4da1c3:{c.instructions+=3;NFSU2_TR(0x4da1c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da1c4:{NFSU2_TR(0x4da1c4);
__builtin_memmove((R+4),(R+24),4);
}
B4da1c6:{NFSU2_TR(0x4da1c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da1cbull));
TAIL_STATIC(0x4c6f30u,4c6);
}
B4da1cb:L4da1cb:{c.instructions+=2;NFSU2_TR(0x4da1cb);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4da1d2:{NFSU2_TR(0x4da1d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da234;}}
}
B4da1d4:L4da1d4:{c.instructions+=3;NFSU2_TR(0x4da1d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da1d5:{NFSU2_TR(0x4da1d5);
__builtin_memmove((R+4),(R+24),4);
}
B4da1d7:{NFSU2_TR(0x4da1d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da1dcull));
TAIL_STATIC(0x4aa9f0u,4aa);
}
B4da1dc:L4da1dc:{c.instructions+=4;NFSU2_TR(0x4da1dc);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4da1e1:{NFSU2_TR(0x4da1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4da1e4:{NFSU2_TR(0x4da1e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4da1ea:{NFSU2_TR(0x4da1ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4da558;}}
}
B4da1f0:L4da1f0:{c.instructions+=1;NFSU2_TR(0x4da1f0);
u8 U[12];
w4(U+0,u32(u32(u32(0x194ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4da1f7:L4da1f7:{c.instructions+=3;NFSU2_TR(0x4da1f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da1fa:{NFSU2_TR(0x4da1fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da1fb:{NFSU2_TR(0x4da1fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da200ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da200:L4da200:{c.instructions+=3;NFSU2_TR(0x4da200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4da202:{NFSU2_TR(0x4da202);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da203:{NFSU2_TR(0x4da203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da208ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da208:L4da208:{c.instructions+=3;NFSU2_TR(0x4da208);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da20b:{NFSU2_TR(0x4da20b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da20c:{NFSU2_TR(0x4da20c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da211ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da211:L4da211:{c.instructions+=3;NFSU2_TR(0x4da211);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da214:{NFSU2_TR(0x4da214);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da215:{NFSU2_TR(0x4da215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da21aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da21a:L4da21a:{c.instructions+=6;NFSU2_TR(0x4da21a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da220:{NFSU2_TR(0x4da220);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4da223:{NFSU2_TR(0x4da223);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4da224:{NFSU2_TR(0x4da224);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4da227:{NFSU2_TR(0x4da227);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4da229:{NFSU2_TR(0x4da229);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4da1f7u);}goto L4da1f7;}}
}
B4da22b:L4da22b:{c.instructions+=5;NFSU2_TR(0x4da22b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da22c:{NFSU2_TR(0x4da22c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da22d:{NFSU2_TR(0x4da22d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4da22e:{NFSU2_TR(0x4da22e);
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
B4da231:{NFSU2_TR(0x4da231);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da234:L4da234:{c.instructions+=2;NFSU2_TR(0x4da234);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4da23b:{NFSU2_TR(0x4da23b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da38f;}}
}
B4da241:L4da241:{c.instructions+=4;NFSU2_TR(0x4da241);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4da247:{NFSU2_TR(0x4da247);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da249:{NFSU2_TR(0x4da249);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B4da24f:{NFSU2_TR(0x4da24f);
if(r1(R+518)){{goto L4da2a9;}}
}
B4da251:L4da251:{c.instructions+=10;NFSU2_TR(0x4da251);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da257:{NFSU2_TR(0x4da257);
__builtin_memmove((R+8),(R+4),4);
}
B4da259:{NFSU2_TR(0x4da259);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4da25b:{NFSU2_TR(0x4da25b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4da25f:{NFSU2_TR(0x4da25f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4da263:{NFSU2_TR(0x4da263);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4da269:{NFSU2_TR(0x4da269);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4da26f:{NFSU2_TR(0x4da26f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4da271:{NFSU2_TR(0x4da271);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da274:{NFSU2_TR(0x4da274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da283;}}
}
B4da276:L4da276:{c.instructions+=2;NFSU2_TR(0x4da276);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4da27c:{NFSU2_TR(0x4da27c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4da283:L4da283:{c.instructions+=3;NFSU2_TR(0x4da283);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4da288:{NFSU2_TR(0x4da288);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da28a:{NFSU2_TR(0x4da28a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da295;}}
}
B4da28c:L4da28c:{c.instructions+=3;NFSU2_TR(0x4da28c);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4da291:{NFSU2_TR(0x4da291);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da293:{NFSU2_TR(0x4da293);
if(r1(R+518)){{goto L4da29f;}}
}
B4da295:L4da295:{c.instructions+=3;NFSU2_TR(0x4da295);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da296:{NFSU2_TR(0x4da296);
__builtin_memmove((R+4),(R+24),4);
}
B4da298:{NFSU2_TR(0x4da298);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da29dull));
TAIL_STATIC(0x4aadc0u,4aa);
}
B4da29d:L4da29d:{c.instructions+=1;NFSU2_TR(0x4da29d);
{goto L4da2ff;}
}
B4da29f:L4da29f:{c.instructions+=3;NFSU2_TR(0x4da29f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da2a0:{NFSU2_TR(0x4da2a0);
__builtin_memmove((R+4),(R+24),4);
}
B4da2a2:{NFSU2_TR(0x4da2a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da2a7ull));
TAIL_STATIC(0x4aa890u,4aa);
}
B4da2a7:L4da2a7:{c.instructions+=1;NFSU2_TR(0x4da2a7);
{goto L4da2ff;}
}
B4da2a9:L4da2a9:{c.instructions+=10;NFSU2_TR(0x4da2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da2af:{NFSU2_TR(0x4da2af);
__builtin_memmove((R+0),(R+4),4);
}
B4da2b1:{NFSU2_TR(0x4da2b1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4da2b3:{NFSU2_TR(0x4da2b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4da2b7:{NFSU2_TR(0x4da2b7);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4da2bb:{NFSU2_TR(0x4da2bb);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4da2c1:{NFSU2_TR(0x4da2c1);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4da2c7:{NFSU2_TR(0x4da2c7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4da2c9:{NFSU2_TR(0x4da2c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da2cc:{NFSU2_TR(0x4da2cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da2db;}}
}
B4da2ce:L4da2ce:{c.instructions+=2;NFSU2_TR(0x4da2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4da2d4:{NFSU2_TR(0x4da2d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4da2db:L4da2db:{c.instructions+=3;NFSU2_TR(0x4da2db);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4da2e0:{NFSU2_TR(0x4da2e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da2e2:{NFSU2_TR(0x4da2e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da2ed;}}
}
B4da2e4:L4da2e4:{c.instructions+=3;NFSU2_TR(0x4da2e4);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4da2e9:{NFSU2_TR(0x4da2e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da2eb:{NFSU2_TR(0x4da2eb);
if(r1(R+518)){{goto L4da2f7;}}
}
B4da2ed:L4da2ed:{c.instructions+=3;NFSU2_TR(0x4da2ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da2ee:{NFSU2_TR(0x4da2ee);
__builtin_memmove((R+4),(R+24),4);
}
B4da2f0:{NFSU2_TR(0x4da2f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da2f5ull));
TAIL_STATIC(0x4aac50u,4aa);
}
B4da2f5:L4da2f5:{c.instructions+=1;NFSU2_TR(0x4da2f5);
{goto L4da2ff;}
}
B4da2f7:L4da2f7:{c.instructions+=3;NFSU2_TR(0x4da2f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da2f8:{NFSU2_TR(0x4da2f8);
__builtin_memmove((R+4),(R+24),4);
}
B4da2fa:{NFSU2_TR(0x4da2fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da2ffull));
TAIL_STATIC(0x4aa9f0u,4aa);
}
B4da2ff:L4da2ff:{c.instructions+=3;NFSU2_TR(0x4da2ff);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4da304:{NFSU2_TR(0x4da304);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da306:{NFSU2_TR(0x4da306);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da311;}}
}
B4da308:L4da308:{c.instructions+=3;NFSU2_TR(0x4da308);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4da30d:{NFSU2_TR(0x4da30d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da30f:{NFSU2_TR(0x4da30f);
if(r1(R+518)){{goto L4da326;}}
}
B4da311:L4da311:{c.instructions+=2;NFSU2_TR(0x4da311);
w4(R+4,u32(0x89cf48ull));
}
B4da316:{NFSU2_TR(0x4da316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da31bull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4da31b:L4da31b:{c.instructions+=2;NFSU2_TR(0x4da31b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da31d:{NFSU2_TR(0x4da31d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da326;}}
}
B4da31f:L4da31f:{c.instructions+=2;NFSU2_TR(0x4da31f);
w4(R+28,u32(0x4ull));
}
B4da324:{NFSU2_TR(0x4da324);
{goto L4da32f;}
}
B4da326:L4da326:{c.instructions+=2;NFSU2_TR(0x4da326);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4da32c:{NFSU2_TR(0x4da32c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4da32f:L4da32f:{c.instructions+=2;NFSU2_TR(0x4da32f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4da332:{NFSU2_TR(0x4da332);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4da34f;}}
}
B4da334:L4da334:{c.instructions+=3;NFSU2_TR(0x4da334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da33a:{NFSU2_TR(0x4da33a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da33b:{NFSU2_TR(0x4da33b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da340ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da340:L4da340:{c.instructions+=3;NFSU2_TR(0x4da340);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da346:{NFSU2_TR(0x4da346);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da347:{NFSU2_TR(0x4da347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da34cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da34c:L4da34c:{c.instructions+=1;NFSU2_TR(0x4da34c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da34f:L4da34f:{c.instructions+=3;NFSU2_TR(0x4da34f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4da355:{NFSU2_TR(0x4da355);
__builtin_memmove((R+12),(R+28),4);
}
B4da357:{NFSU2_TR(0x4da357);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4da558;}}
}
B4da35d:L4da35d:{c.instructions+=1;NFSU2_TR(0x4da35d);
u8 U[12];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4da364:L4da364:{c.instructions+=3;NFSU2_TR(0x4da364);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da367:{NFSU2_TR(0x4da367);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da368:{NFSU2_TR(0x4da368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da36dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da36d:L4da36d:{c.instructions+=3;NFSU2_TR(0x4da36d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4da36f:{NFSU2_TR(0x4da36f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da370:{NFSU2_TR(0x4da370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da375ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da375:L4da375:{c.instructions+=6;NFSU2_TR(0x4da375);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da37b:{NFSU2_TR(0x4da37b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da37e:{NFSU2_TR(0x4da37e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4da37f:{NFSU2_TR(0x4da37f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4da382:{NFSU2_TR(0x4da382);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4da384:{NFSU2_TR(0x4da384);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4da364u);}goto L4da364;}}
}
B4da386:L4da386:{c.instructions+=5;NFSU2_TR(0x4da386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da387:{NFSU2_TR(0x4da387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da388:{NFSU2_TR(0x4da388);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4da389:{NFSU2_TR(0x4da389);
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
B4da38c:{NFSU2_TR(0x4da38c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da38f:L4da38f:{c.instructions+=3;NFSU2_TR(0x4da38f);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4da394:{NFSU2_TR(0x4da394);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da396:{NFSU2_TR(0x4da396);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da3a1;}}
}
B4da398:L4da398:{c.instructions+=3;NFSU2_TR(0x4da398);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4da39d:{NFSU2_TR(0x4da39d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da39f:{NFSU2_TR(0x4da39f);
if(r1(R+518)){{goto L4da3c5;}}
}
B4da3a1:L4da3a1:{c.instructions+=3;NFSU2_TR(0x4da3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da3a7:{NFSU2_TR(0x4da3a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da3a8:{NFSU2_TR(0x4da3a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da3adull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da3ad:L4da3ad:{c.instructions+=3;NFSU2_TR(0x4da3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da3b3:{NFSU2_TR(0x4da3b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da3b4:{NFSU2_TR(0x4da3b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da3b9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da3b9:L4da3b9:{c.instructions+=6;NFSU2_TR(0x4da3b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da3bc:{NFSU2_TR(0x4da3bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da3bd:{NFSU2_TR(0x4da3bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da3be:{NFSU2_TR(0x4da3be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4da3bf:{NFSU2_TR(0x4da3bf);
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
B4da3c2:{NFSU2_TR(0x4da3c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da3c5:L4da3c5:{c.instructions+=5;NFSU2_TR(0x4da3c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da3cb:{NFSU2_TR(0x4da3cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da3cc:{NFSU2_TR(0x4da3cc);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4da3ce:{NFSU2_TR(0x4da3ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da3d0:{NFSU2_TR(0x4da3d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4da414;}}
}
B4da3d2:L4da3d2:{c.instructions+=2;NFSU2_TR(0x4da3d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da3d8:{NFSU2_TR(0x4da3d8);
{goto L4da3e0;}
}
B4da3e0:L4da3e0:{c.instructions+=3;NFSU2_TR(0x4da3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da3e3:{NFSU2_TR(0x4da3e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da3e4:{NFSU2_TR(0x4da3e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da3e9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da3e9:L4da3e9:{c.instructions+=3;NFSU2_TR(0x4da3e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4da3eb:{NFSU2_TR(0x4da3eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da3ec:{NFSU2_TR(0x4da3ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da3f1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da3f1:L4da3f1:{c.instructions+=3;NFSU2_TR(0x4da3f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da3f4:{NFSU2_TR(0x4da3f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da3f5:{NFSU2_TR(0x4da3f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da3faull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da3fa:L4da3fa:{c.instructions+=3;NFSU2_TR(0x4da3fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da3fd:{NFSU2_TR(0x4da3fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da3fe:{NFSU2_TR(0x4da3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da403ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da403:L4da403:{c.instructions+=6;NFSU2_TR(0x4da403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da409:{NFSU2_TR(0x4da409);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4da40c:{NFSU2_TR(0x4da40c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4da40d:{NFSU2_TR(0x4da40d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4da410:{NFSU2_TR(0x4da410);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4da412:{NFSU2_TR(0x4da412);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4da3e0u);}goto L4da3e0;}}
}
B4da414:L4da414:{c.instructions+=3;NFSU2_TR(0x4da414);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da41a:{NFSU2_TR(0x4da41a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da41b:{NFSU2_TR(0x4da41b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da420ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4da420:L4da420:{c.instructions+=3;NFSU2_TR(0x4da420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da426:{NFSU2_TR(0x4da426);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da427:{NFSU2_TR(0x4da427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da42cull));
TAIL_STATIC(0x50ca50u,50c);
}
B4da42c:L4da42c:{c.instructions+=4;NFSU2_TR(0x4da42c);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4da431:{NFSU2_TR(0x4da431);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da434:{NFSU2_TR(0x4da434);
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
B4da436:{NFSU2_TR(0x4da436);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da445;}}
}
B4da438:L4da438:{c.instructions+=3;NFSU2_TR(0x4da438);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4da43d:{NFSU2_TR(0x4da43d);
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
B4da43f:{NFSU2_TR(0x4da43f);
if(r1(R+518)){{goto L4da4dc;}}
}
B4da445:L4da445:{c.instructions+=3;NFSU2_TR(0x4da445);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da447:{NFSU2_TR(0x4da447);
w4(R+4,u32(0x89e7a0ull));
}
B4da44c:{NFSU2_TR(0x4da44c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da451ull));
TAIL_STATIC(0x5ed980u,5ed);
}
B4da451:L4da451:{c.instructions+=4;NFSU2_TR(0x4da451);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da453:{NFSU2_TR(0x4da453);
w4(R+4,u32(0x89e7a0ull));
}
B4da458:{NFSU2_TR(0x4da458);
__builtin_memmove((R+28),(R+0),4);
}
B4da45a:{NFSU2_TR(0x4da45a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da45full));
TAIL_STATIC(0x5ed980u,5ed);
}
B4da45f:L4da45f:{c.instructions+=3;NFSU2_TR(0x4da45f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da460:{NFSU2_TR(0x4da460);
__builtin_memmove((R+20),(R+0),4);
}
B4da462:{NFSU2_TR(0x4da462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da467ull));
TAIL_STATIC(0x56dd50u,56d);
}
B4da467:L4da467:{c.instructions+=2;NFSU2_TR(0x4da467);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4da46a:{NFSU2_TR(0x4da46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da46full));
TAIL_STATIC(0x75bed4u,75b);
}
B4da46f:L4da46f:{c.instructions+=3;NFSU2_TR(0x4da46f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da470:{NFSU2_TR(0x4da470);
__builtin_memmove((R+28),(R+0),4);
}
B4da472:{NFSU2_TR(0x4da472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da477ull));
TAIL_STATIC(0x56dd50u,56d);
}
B4da477:L4da477:{c.instructions+=3;NFSU2_TR(0x4da477);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4da47a:{NFSU2_TR(0x4da47a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da47d:{NFSU2_TR(0x4da47d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da482ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4da482:L4da482:{c.instructions+=4;NFSU2_TR(0x4da482);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da485:{NFSU2_TR(0x4da485);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4da487:{NFSU2_TR(0x4da487);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da489:{NFSU2_TR(0x4da489);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da491;}}
}
B4da48b:L4da48b:{c.instructions+=3;NFSU2_TR(0x4da48b);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B4da48d:{NFSU2_TR(0x4da48d);
__builtin_memmove((R+8),(R+28),4);
}
B4da48f:{NFSU2_TR(0x4da48f);
{goto L4da49a;}
}
B4da491:L4da491:{c.instructions+=2;NFSU2_TR(0x4da491);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4da494:{NFSU2_TR(0x4da494);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da49e;}}
}
B4da496:L4da496:{c.instructions+=2;NFSU2_TR(0x4da496);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B4da498:{NFSU2_TR(0x4da498);
__builtin_memmove((R+8),(R+0),4);
}
B4da49a:L4da49a:{c.instructions+=2;NFSU2_TR(0x4da49a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4da49c:{NFSU2_TR(0x4da49c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4da4bd;}}
}
B4da49e:L4da49e:{c.instructions+=5;NFSU2_TR(0x4da49e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da49f:{NFSU2_TR(0x4da49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da4a5:{NFSU2_TR(0x4da4a5);
u8 U[4];
w4(U+0,u32(0x790aacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da4aa:{NFSU2_TR(0x4da4aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da4ab:{NFSU2_TR(0x4da4ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da4b0ull));
TAIL_STATIC(0x537be0u,537);
}
B4da4b0:L4da4b0:{c.instructions+=7;NFSU2_TR(0x4da4b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4da4b3:{NFSU2_TR(0x4da4b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4da4b4:{NFSU2_TR(0x4da4b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da4b5:{NFSU2_TR(0x4da4b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da4b6:{NFSU2_TR(0x4da4b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4da4b7:{NFSU2_TR(0x4da4b7);
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
B4da4ba:{NFSU2_TR(0x4da4ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da4bd:L4da4bd:{c.instructions+=5;NFSU2_TR(0x4da4bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da4c3:{NFSU2_TR(0x4da4c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da4c4:{NFSU2_TR(0x4da4c4);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da4c9:{NFSU2_TR(0x4da4c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da4ca:{NFSU2_TR(0x4da4ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da4cfull));
TAIL_STATIC(0x537be0u,537);
}
B4da4cf:L4da4cf:{c.instructions+=7;NFSU2_TR(0x4da4cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4da4d2:{NFSU2_TR(0x4da4d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4da4d3:{NFSU2_TR(0x4da4d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da4d4:{NFSU2_TR(0x4da4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da4d5:{NFSU2_TR(0x4da4d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4da4d6:{NFSU2_TR(0x4da4d6);
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
B4da4d9:{NFSU2_TR(0x4da4d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da4dc:L4da4dc:{c.instructions+=10;NFSU2_TR(0x4da4dc);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B4da4e2:{NFSU2_TR(0x4da4e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da4e5:{NFSU2_TR(0x4da4e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da4e8:{NFSU2_TR(0x4da4e8);
__builtin_memmove((R+0),gp(0x8900b0),4);
}
B4da4ed:{NFSU2_TR(0x4da4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da4f0:{NFSU2_TR(0x4da4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da4f3:{NFSU2_TR(0x4da4f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da4f5:{NFSU2_TR(0x4da4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da4f8:{NFSU2_TR(0x4da4f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4da500:{NFSU2_TR(0x4da500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da50b;}}
}
B4da502:L4da502:{c.instructions+=5;NFSU2_TR(0x4da502);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da503:{NFSU2_TR(0x4da503);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da504:{NFSU2_TR(0x4da504);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4da508:{NFSU2_TR(0x4da508);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da509:{NFSU2_TR(0x4da509);
{goto L4da517;}
}
B4da50b:L4da50b:{c.instructions+=2;NFSU2_TR(0x4da50b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4da50e:{NFSU2_TR(0x4da50e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da52a;}}
}
B4da510:L4da510:{c.instructions+=4;NFSU2_TR(0x4da510);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da511:{NFSU2_TR(0x4da511);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da512:{NFSU2_TR(0x4da512);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4da516:{NFSU2_TR(0x4da516);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da517:L4da517:{c.instructions+=2;NFSU2_TR(0x4da517);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4da51d:{NFSU2_TR(0x4da51d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da522ull));
TAIL_STATIC(0x5f82d0u,5f8);
}
B4da522:L4da522:{c.instructions+=3;NFSU2_TR(0x4da522);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da526:{NFSU2_TR(0x4da526);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4da528:{NFSU2_TR(0x4da528);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4da52e;}}
}
B4da52a:L4da52a:{c.instructions+=2;NFSU2_TR(0x4da52a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da52c:{NFSU2_TR(0x4da52c);
{goto L4da530;}
}
B4da52e:L4da52e:{c.instructions+=1;NFSU2_TR(0x4da52e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da530:L4da530:{c.instructions+=4;NFSU2_TR(0x4da530);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4da534:{NFSU2_TR(0x4da534);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4da538:{NFSU2_TR(0x4da538);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da539:{NFSU2_TR(0x4da539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da53eull));
TAIL_STATIC(0x577240u,577);
}
B4da53e:L4da53e:{c.instructions+=6;NFSU2_TR(0x4da53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da544:{NFSU2_TR(0x4da544);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4da548:{NFSU2_TR(0x4da548);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da549:{NFSU2_TR(0x4da549);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da54e:{NFSU2_TR(0x4da54e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da54f:{NFSU2_TR(0x4da54f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da554ull));
TAIL_STATIC(0x537be0u,537);
}
B4da554:L4da554:{c.instructions+=2;NFSU2_TR(0x4da554);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4da557:{NFSU2_TR(0x4da557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4da558:L4da558:{c.instructions+=5;NFSU2_TR(0x4da558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da559:{NFSU2_TR(0x4da559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da55a:{NFSU2_TR(0x4da55a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4da55b:{NFSU2_TR(0x4da55b);
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
B4da55e:{NFSU2_TR(0x4da55e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da570:L4da570:{c.instructions+=6;NFSU2_TR(0x4da570);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da574:{NFSU2_TR(0x4da574);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da577:{NFSU2_TR(0x4da577);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x800000ull))));
}
B4da57c:{NFSU2_TR(0x4da57c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4da57e:{NFSU2_TR(0x4da57e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4da580:{NFSU2_TR(0x4da580);
if(r1(R+518)){{goto L4da58f;}}
}
B4da582:L4da582:{c.instructions+=4;NFSU2_TR(0x4da582);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da586:{NFSU2_TR(0x4da586);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da589:{NFSU2_TR(0x4da589);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da58a:{NFSU2_TR(0x4da58a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da58full));
TAIL_STATIC(0x4c6ec0u,4c6);
}
B4da58f:L4da58f:{c.instructions+=1;NFSU2_TR(0x4da58f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da590:L4da590:{c.instructions+=12;NFSU2_TR(0x4da590);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da591:{NFSU2_TR(0x4da591);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da592:{NFSU2_TR(0x4da592);
__builtin_memmove((R+24),(R+4),4);
}
B4da594:{NFSU2_TR(0x4da594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da597:{NFSU2_TR(0x4da597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4da59a:{NFSU2_TR(0x4da59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da59d:{NFSU2_TR(0x4da59d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da59e:{NFSU2_TR(0x4da59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4da5a1:{NFSU2_TR(0x4da5a1);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B4da5a3:{NFSU2_TR(0x4da5a3);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B4da5a5:{NFSU2_TR(0x4da5a5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4da5a7:{NFSU2_TR(0x4da5a7);
if(r1(R+518)){{goto L4da62d;}}
}
B4da5ad:L4da5ad:{c.instructions+=4;NFSU2_TR(0x4da5ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4da5b1:{NFSU2_TR(0x4da5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4da5b4:{NFSU2_TR(0x4da5b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4da5b7:{NFSU2_TR(0x4da5b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da5bcull));
TAIL_STATIC(0x59fa10u,59f);
}
B4da5bc:L4da5bc:{c.instructions+=10;NFSU2_TR(0x4da5bc);
{u32 ea_=u32(r4(R+28)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4da5c2:{NFSU2_TR(0x4da5c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da5c8:{NFSU2_TR(0x4da5c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da5c9:{NFSU2_TR(0x4da5c9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4da5cc:{NFSU2_TR(0x4da5cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da5cd:{NFSU2_TR(0x4da5cd);
{u32 ea_=u32(u32(7881292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4da5d3:{NFSU2_TR(0x4da5d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da5d4:{NFSU2_TR(0x4da5d4);
__builtin_memmove((R+4),(R+24),4);
}
B4da5d6:{NFSU2_TR(0x4da5d6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4da5d9:{NFSU2_TR(0x4da5d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da5deull));
TAIL_STATIC(0x4ab390u,4ab);
}
B4da5de:L4da5de:{c.instructions+=3;NFSU2_TR(0x4da5de);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4da5e4:{NFSU2_TR(0x4da5e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da5e6:{NFSU2_TR(0x4da5e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da61f;}}
}
B4da5e8:L4da5e8:{c.instructions+=11;NFSU2_TR(0x4da5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da5eb:{NFSU2_TR(0x4da5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da5ee:{NFSU2_TR(0x4da5ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4da5f4:{NFSU2_TR(0x4da5f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4da5f6:{NFSU2_TR(0x4da5f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4da5f9:{NFSU2_TR(0x4da5f9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4da5fb:{NFSU2_TR(0x4da5fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4da5fe:{NFSU2_TR(0x4da5fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da5ff:{NFSU2_TR(0x4da5ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da600:{NFSU2_TR(0x4da600);
__builtin_memmove((R+4),(R+24),4);
}
B4da602:{NFSU2_TR(0x4da602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da607ull));
TAIL_STATIC(0x4ab420u,4ab);
}
B4da607:L4da607:{c.instructions+=8;NFSU2_TR(0x4da607);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4da60a:{NFSU2_TR(0x4da60a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4da60d:{NFSU2_TR(0x4da60d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4da611:{NFSU2_TR(0x4da611);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4da614:{NFSU2_TR(0x4da614);
__builtin_memmove((R+4),(R+24),4);
}
B4da616:{NFSU2_TR(0x4da616);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4da619:{NFSU2_TR(0x4da619);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da61a:{NFSU2_TR(0x4da61a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da61full));
TAIL_STATIC(0x4c7ea0u,4c7);
}
B4da61f:L4da61f:{c.instructions+=2;NFSU2_TR(0x4da61f);
__builtin_memmove((R+4),(R+24),4);
}
B4da621:{NFSU2_TR(0x4da621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da626ull));
TAIL_STATIC(0x4ab2b0u,4ab);
}
B4da626:L4da626:{c.instructions+=2;NFSU2_TR(0x4da626);
__builtin_memmove((R+4),(R+24),4);
}
B4da628:{NFSU2_TR(0x4da628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da62dull));
TAIL_STATIC(0x4ab340u,4ab);
}
B4da62d:L4da62d:{c.instructions+=4;NFSU2_TR(0x4da62d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da62e:{NFSU2_TR(0x4da62e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da62f:{NFSU2_TR(0x4da62f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4da630:{NFSU2_TR(0x4da630);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da640:L4da640:{c.instructions+=7;NFSU2_TR(0x4da640);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da641:{NFSU2_TR(0x4da641);
__builtin_memmove((R+20),(R+16),4);
}
B4da643:{NFSU2_TR(0x4da643);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da644:{NFSU2_TR(0x4da644);
__builtin_memmove((R+24),(R+4),4);
}
B4da646:{NFSU2_TR(0x4da646);
__builtin_memmove((R+4),gp(0x8364d4),4);
}
B4da64c:{NFSU2_TR(0x4da64c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da64e:{NFSU2_TR(0x4da64e);
if(r1(R+518)){{goto L4da655;}}
}
B4da650:L4da650:{c.instructions+=1;NFSU2_TR(0x4da650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da655ull));
TAIL_STATIC(0x4ca840u,4ca);
}
B4da655:L4da655:{c.instructions+=8;NFSU2_TR(0x4da655);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da658:{NFSU2_TR(0x4da658);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da65b:{NFSU2_TR(0x4da65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da65e:{NFSU2_TR(0x4da65e);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4da660:{NFSU2_TR(0x4da660);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da663:{NFSU2_TR(0x4da663);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B4da665:{NFSU2_TR(0x4da665);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4da667:{NFSU2_TR(0x4da667);
if(r1(R+518)){{goto L4da6e2;}}
}
B4da669:L4da669:{c.instructions+=3;NFSU2_TR(0x4da669);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da66c:{NFSU2_TR(0x4da66c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da66d:{NFSU2_TR(0x4da66d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da672ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da672:L4da672:{c.instructions+=3;NFSU2_TR(0x4da672);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da675:{NFSU2_TR(0x4da675);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da676:{NFSU2_TR(0x4da676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da67bull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da67b:L4da67b:{c.instructions+=3;NFSU2_TR(0x4da67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da67e:{NFSU2_TR(0x4da67e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da67f:{NFSU2_TR(0x4da67f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da684ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da684:L4da684:{c.instructions+=4;NFSU2_TR(0x4da684);
__builtin_memmove((R+0),gp(0x8385b9),1);
}
B4da689:{NFSU2_TR(0x4da689);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4da68c:{NFSU2_TR(0x4da68c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da68e:{NFSU2_TR(0x4da68e);
if(r1(R+518)){{goto L4da6a9;}}
}
B4da690:L4da690:{c.instructions+=2;NFSU2_TR(0x4da690);
w4(R+4,u32(0x85ad40ull));
}
B4da695:{NFSU2_TR(0x4da695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da69aull));
TAIL_STATIC(0x500b60u,500);
}
B4da69a:L4da69a:{c.instructions+=2;NFSU2_TR(0x4da69a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da69c:{NFSU2_TR(0x4da69c);
if(r1(R+518)){{goto L4da6a9;}}
}
B4da69e:L4da69e:{c.instructions+=4;NFSU2_TR(0x4da69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da6a1:{NFSU2_TR(0x4da6a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da6a2:{NFSU2_TR(0x4da6a2);
__builtin_memmove((R+4),(R+24),4);
}
B4da6a4:{NFSU2_TR(0x4da6a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da6a9ull));
TAIL_STATIC(0x4c8410u,4c8);
}
B4da6a9:L4da6a9:{c.instructions+=2;NFSU2_TR(0x4da6a9);
w4(R+4,u32(0x85ad40ull));
}
B4da6ae:{NFSU2_TR(0x4da6ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da6b3ull));
TAIL_STATIC(0x500400u,500);
}
B4da6b3:L4da6b3:{c.instructions+=2;NFSU2_TR(0x4da6b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da6b5:{NFSU2_TR(0x4da6b5);
if(r1(R+518)){{goto L4da6d6;}}
}
B4da6b7:L4da6b7:{c.instructions+=2;NFSU2_TR(0x4da6b7);
w4(R+4,u32(0x85ad40ull));
}
B4da6bc:{NFSU2_TR(0x4da6bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da6c1ull));
TAIL_STATIC(0x500b60u,500);
}
B4da6c1:L4da6c1:{c.instructions+=2;NFSU2_TR(0x4da6c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da6c3:{NFSU2_TR(0x4da6c3);
if(r1(R+518)){{goto L4da6d6;}}
}
B4da6c5:L4da6c5:{c.instructions+=3;NFSU2_TR(0x4da6c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da6c8:{NFSU2_TR(0x4da6c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da6c9:{NFSU2_TR(0x4da6c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da6ceull));
TAIL_STATIC(0x50ca50u,50c);
}
B4da6ce:L4da6ce:{c.instructions+=4;NFSU2_TR(0x4da6ce);
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
B4da6d1:{NFSU2_TR(0x4da6d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da6d2:{NFSU2_TR(0x4da6d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4da6d3:{NFSU2_TR(0x4da6d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da6d6:L4da6d6:{c.instructions+=3;NFSU2_TR(0x4da6d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da6d9:{NFSU2_TR(0x4da6d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da6da:{NFSU2_TR(0x4da6da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da6dfull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da6df:L4da6df:{c.instructions+=1;NFSU2_TR(0x4da6df);
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
B4da6e2:L4da6e2:{c.instructions+=3;NFSU2_TR(0x4da6e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da6e3:{NFSU2_TR(0x4da6e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4da6e4:{NFSU2_TR(0x4da6e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da6f0:L4da6f0:{c.instructions+=6;NFSU2_TR(0x4da6f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da6f4:{NFSU2_TR(0x4da6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da6f7:{NFSU2_TR(0x4da6f7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x20000ull))));
}
B4da6fc:{NFSU2_TR(0x4da6fc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4da6fe:{NFSU2_TR(0x4da6fe);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4da700:{NFSU2_TR(0x4da700);
if(r1(R+518)){{goto L4da70f;}}
}
B4da702:L4da702:{c.instructions+=4;NFSU2_TR(0x4da702);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da706:{NFSU2_TR(0x4da706);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da709:{NFSU2_TR(0x4da709);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da70a:{NFSU2_TR(0x4da70a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da70full));
TAIL_STATIC(0x4c88e0u,4c8);
}
B4da70f:L4da70f:{c.instructions+=1;NFSU2_TR(0x4da70f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da710:L4da710:{c.instructions+=8;NFSU2_TR(0x4da710);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da711:{NFSU2_TR(0x4da711);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da712:{NFSU2_TR(0x4da712);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da713:{NFSU2_TR(0x4da713);
__builtin_memmove((R+28),(R+4),4);
}
B4da715:{NFSU2_TR(0x4da715);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da718:{NFSU2_TR(0x4da718);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4da71b:{NFSU2_TR(0x4da71b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4da71d:{NFSU2_TR(0x4da71d);
if(r1(R+518)){{goto L4da81e;}}
}
B4da723:L4da723:{c.instructions+=5;NFSU2_TR(0x4da723);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da724:{NFSU2_TR(0x4da724);
__builtin_memmove((R+24),(R+0),4);
}
B4da726:{NFSU2_TR(0x4da726);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4da729:{NFSU2_TR(0x4da729);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da72b:{NFSU2_TR(0x4da72b);
if(r1(R+518)){{goto L4da73d;}}
}
B4da72d:L4da72d:{c.instructions+=1;NFSU2_TR(0x4da72d);
__builtin_memmove((R+4),(R+4),4);
}
B4da730:L4da730:{c.instructions+=2;NFSU2_TR(0x4da730);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4da732:{NFSU2_TR(0x4da732);
if(r1(R+518)){{goto L4da741;}}
}
B4da734:L4da734:{c.instructions+=4;NFSU2_TR(0x4da734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4da736:{NFSU2_TR(0x4da736);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4da739:{NFSU2_TR(0x4da739);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da73b:{NFSU2_TR(0x4da73b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4da730u);}goto L4da730;}}
}
B4da73d:L4da73d:{c.instructions+=2;NFSU2_TR(0x4da73d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4da73f:{NFSU2_TR(0x4da73f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da743;}}
}
B4da741:L4da741:{c.instructions+=1;NFSU2_TR(0x4da741);
__builtin_memmove((R+24),(R+0),4);
}
B4da743:L4da743:{c.instructions+=3;NFSU2_TR(0x4da743);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4da748:{NFSU2_TR(0x4da748);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da74a:{NFSU2_TR(0x4da74a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da755;}}
}
B4da74c:L4da74c:{c.instructions+=3;NFSU2_TR(0x4da74c);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4da751:{NFSU2_TR(0x4da751);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da753:{NFSU2_TR(0x4da753);
if(r1(R+518)){{goto L4da75d;}}
}
B4da755:L4da755:{c.instructions+=4;NFSU2_TR(0x4da755);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da758:{NFSU2_TR(0x4da758);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da75a:{NFSU2_TR(0x4da75a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da75b:{NFSU2_TR(0x4da75b);
{goto L4da7a4;}
}
B4da75d:L4da75d:{c.instructions+=4;NFSU2_TR(0x4da75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da760:{NFSU2_TR(0x4da760);
u8 U[4];
w4(U+0,u32(0x790aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da765:{NFSU2_TR(0x4da765);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da766:{NFSU2_TR(0x4da766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da76bull));
TAIL_STATIC(0x51d040u,51d);
}
B4da76b:L4da76b:{c.instructions+=3;NFSU2_TR(0x4da76b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da76e:{NFSU2_TR(0x4da76e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da770:{NFSU2_TR(0x4da770);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da7ac;}}
}
B4da772:L4da772:{c.instructions+=4;NFSU2_TR(0x4da772);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da775:{NFSU2_TR(0x4da775);
u8 U[4];
w4(U+0,u32(0x796578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da77a:{NFSU2_TR(0x4da77a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da77b:{NFSU2_TR(0x4da77b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da780ull));
TAIL_STATIC(0x51d040u,51d);
}
B4da780:L4da780:{c.instructions+=3;NFSU2_TR(0x4da780);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da783:{NFSU2_TR(0x4da783);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da785:{NFSU2_TR(0x4da785);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da7ac;}}
}
B4da787:L4da787:{c.instructions+=4;NFSU2_TR(0x4da787);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da78a:{NFSU2_TR(0x4da78a);
u8 U[4];
w4(U+0,u32(0x796570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da78f:{NFSU2_TR(0x4da78f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da790:{NFSU2_TR(0x4da790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da795ull));
TAIL_STATIC(0x51d040u,51d);
}
B4da795:L4da795:{c.instructions+=3;NFSU2_TR(0x4da795);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da798:{NFSU2_TR(0x4da798);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da79a:{NFSU2_TR(0x4da79a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da7ac;}}
}
B4da79c:L4da79c:{c.instructions+=4;NFSU2_TR(0x4da79c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da79f:{NFSU2_TR(0x4da79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da7a2:{NFSU2_TR(0x4da7a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da7a3:{NFSU2_TR(0x4da7a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da7a4:L4da7a4:{c.instructions+=3;NFSU2_TR(0x4da7a4);
__builtin_memmove((R+4),(R+28),4);
}
B4da7a6:{NFSU2_TR(0x4da7a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da7a7:{NFSU2_TR(0x4da7a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da7acull));
TAIL_STATIC(0x4ab780u,4ab);
}
B4da7ac:L4da7ac:{c.instructions+=7;NFSU2_TR(0x4da7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da7af:{NFSU2_TR(0x4da7af);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4da7b4:{NFSU2_TR(0x4da7b4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B4da7b6:{NFSU2_TR(0x4da7b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da7b8:{NFSU2_TR(0x4da7b8);
__builtin_memmove((R+4),(R+12),4);
}
B4da7ba:{NFSU2_TR(0x4da7ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4da7be:{NFSU2_TR(0x4da7be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da7c3ull));
TAIL_STATIC(0x43be80u,43b);
}
B4da7c3:L4da7c3:{c.instructions+=2;NFSU2_TR(0x4da7c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4da7c6:{NFSU2_TR(0x4da7c6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4da7d0;}}
}
B4da7c8:L4da7c8:{c.instructions+=2;NFSU2_TR(0x4da7c8);
{u32 ea_=u32(u32(7921780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4da7ce:{NFSU2_TR(0x4da7ce);
{goto L4da7d6;}
}
B4da7d0:L4da7d0:{c.instructions+=1;NFSU2_TR(0x4da7d0);
{u32 ea_=u32(u32(7921784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4da7d6:L4da7d6:{c.instructions+=7;NFSU2_TR(0x4da7d6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4da7da:{NFSU2_TR(0x4da7da);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4da7e0:{NFSU2_TR(0x4da7e0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4da7e2:{NFSU2_TR(0x4da7e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4da7e4:{NFSU2_TR(0x4da7e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4da7e6:{NFSU2_TR(0x4da7e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da7e9:{NFSU2_TR(0x4da7e9);
if(r1(R+518)){{goto L4da804;}}
}
B4da7eb:L4da7eb:{c.instructions+=3;NFSU2_TR(0x4da7eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4da7ee:{NFSU2_TR(0x4da7ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da7f0:{NFSU2_TR(0x4da7f0);
if(r1(R+518)){{goto L4da817;}}
}
B4da7f2:L4da7f2:{c.instructions+=3;NFSU2_TR(0x4da7f2);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4da7f7:{NFSU2_TR(0x4da7f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da7f9:{NFSU2_TR(0x4da7f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da804;}}
}
B4da7fb:L4da7fb:{c.instructions+=3;NFSU2_TR(0x4da7fb);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4da800:{NFSU2_TR(0x4da800);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da802:{NFSU2_TR(0x4da802);
if(r1(R+518)){{goto L4da817;}}
}
B4da804:L4da804:{c.instructions+=6;NFSU2_TR(0x4da804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4da806:{NFSU2_TR(0x4da806);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da809:{NFSU2_TR(0x4da809);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4da80b:{NFSU2_TR(0x4da80b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da80c:{NFSU2_TR(0x4da80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4da80f:{NFSU2_TR(0x4da80f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da814ull));
TAIL_STATIC(0x575630u,575);
}
B4da814:L4da814:{c.instructions+=1;NFSU2_TR(0x4da814);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4da817:L4da817:{c.instructions+=3;NFSU2_TR(0x4da817);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4da81b:{NFSU2_TR(0x4da81b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da81c:{NFSU2_TR(0x4da81c);
{goto L4da85d;}
}
B4da81e:L4da81e:{c.instructions+=4;NFSU2_TR(0x4da81e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da821:{NFSU2_TR(0x4da821);
u8 U[4];
w4(U+0,u32(0x790a9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da826:{NFSU2_TR(0x4da826);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da827:{NFSU2_TR(0x4da827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da82cull));
TAIL_STATIC(0x51d040u,51d);
}
B4da82c:L4da82c:{c.instructions+=3;NFSU2_TR(0x4da82c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da82f:{NFSU2_TR(0x4da82f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da831:{NFSU2_TR(0x4da831);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da85d;}}
}
B4da833:L4da833:{c.instructions+=4;NFSU2_TR(0x4da833);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da836:{NFSU2_TR(0x4da836);
u8 U[4];
w4(U+0,u32(0x790aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da83b:{NFSU2_TR(0x4da83b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da83c:{NFSU2_TR(0x4da83c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da841ull));
TAIL_STATIC(0x51d040u,51d);
}
B4da841:L4da841:{c.instructions+=3;NFSU2_TR(0x4da841);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da844:{NFSU2_TR(0x4da844);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da846:{NFSU2_TR(0x4da846);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da85d;}}
}
B4da848:L4da848:{c.instructions+=3;NFSU2_TR(0x4da848);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da84b:{NFSU2_TR(0x4da84b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da84c:{NFSU2_TR(0x4da84c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da851ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da851:L4da851:{c.instructions+=3;NFSU2_TR(0x4da851);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da854:{NFSU2_TR(0x4da854);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da855:{NFSU2_TR(0x4da855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da85aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da85a:L4da85a:{c.instructions+=1;NFSU2_TR(0x4da85a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da85d:L4da85d:{c.instructions+=4;NFSU2_TR(0x4da85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da860:{NFSU2_TR(0x4da860);
u8 U[4];
w4(U+0,u32(0x796578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da865:{NFSU2_TR(0x4da865);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da866:{NFSU2_TR(0x4da866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da86bull));
TAIL_STATIC(0x51d040u,51d);
}
B4da86b:L4da86b:{c.instructions+=3;NFSU2_TR(0x4da86b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da86e:{NFSU2_TR(0x4da86e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da870:{NFSU2_TR(0x4da870);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da8bf;}}
}
B4da872:L4da872:{c.instructions+=4;NFSU2_TR(0x4da872);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da875:{NFSU2_TR(0x4da875);
u8 U[4];
w4(U+0,u32(0x796570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da87a:{NFSU2_TR(0x4da87a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da87b:{NFSU2_TR(0x4da87b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da880ull));
TAIL_STATIC(0x51d040u,51d);
}
B4da880:L4da880:{c.instructions+=3;NFSU2_TR(0x4da880);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da883:{NFSU2_TR(0x4da883);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da885:{NFSU2_TR(0x4da885);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da8bf;}}
}
B4da887:L4da887:{c.instructions+=4;NFSU2_TR(0x4da887);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da88a:{NFSU2_TR(0x4da88a);
u8 U[4];
w4(U+0,u32(0x796578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da88f:{NFSU2_TR(0x4da88f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da890:{NFSU2_TR(0x4da890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da895ull));
TAIL_STATIC(0x50cab0u,50c);
}
B4da895:L4da895:{c.instructions+=3;NFSU2_TR(0x4da895);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da898:{NFSU2_TR(0x4da898);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da89a:{NFSU2_TR(0x4da89a);
if(r1(R+518)){{goto L4da8a3;}}
}
B4da89c:L4da89c:{c.instructions+=3;NFSU2_TR(0x4da89c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4da89f:{NFSU2_TR(0x4da89f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da8a1:{NFSU2_TR(0x4da8a1);
if(r1(R+518)){{goto L4da8bf;}}
}
B4da8a3:L4da8a3:{c.instructions+=4;NFSU2_TR(0x4da8a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da8a6:{NFSU2_TR(0x4da8a6);
u8 U[4];
w4(U+0,u32(0x796570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da8ab:{NFSU2_TR(0x4da8ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da8ac:{NFSU2_TR(0x4da8ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da8b1ull));
TAIL_STATIC(0x50cab0u,50c);
}
B4da8b1:L4da8b1:{c.instructions+=3;NFSU2_TR(0x4da8b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da8b4:{NFSU2_TR(0x4da8b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da8b6:{NFSU2_TR(0x4da8b6);
if(r1(R+518)){{goto L4da8d4;}}
}
B4da8b8:L4da8b8:{c.instructions+=3;NFSU2_TR(0x4da8b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4da8bb:{NFSU2_TR(0x4da8bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da8bd:{NFSU2_TR(0x4da8bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da8d4;}}
}
B4da8bf:L4da8bf:{c.instructions+=3;NFSU2_TR(0x4da8bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da8c2:{NFSU2_TR(0x4da8c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da8c3:{NFSU2_TR(0x4da8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da8c8ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da8c8:L4da8c8:{c.instructions+=3;NFSU2_TR(0x4da8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da8cb:{NFSU2_TR(0x4da8cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da8cc:{NFSU2_TR(0x4da8cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da8d1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da8d1:L4da8d1:{c.instructions+=1;NFSU2_TR(0x4da8d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4da8d4:L4da8d4:{c.instructions+=5;NFSU2_TR(0x4da8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da8d7:{NFSU2_TR(0x4da8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4da8da:{NFSU2_TR(0x4da8da);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B4da8e1:{NFSU2_TR(0x4da8e1);
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
B4da8e3:{NFSU2_TR(0x4da8e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da8f1;}}
}
B4da8e5:L4da8e5:{c.instructions+=3;NFSU2_TR(0x4da8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da8e8:{NFSU2_TR(0x4da8e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da8e9:{NFSU2_TR(0x4da8e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da8eeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da8ee:L4da8ee:{c.instructions+=1;NFSU2_TR(0x4da8ee);
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
B4da8f1:L4da8f1:{c.instructions+=4;NFSU2_TR(0x4da8f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4da8f2:{NFSU2_TR(0x4da8f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4da8f3:{NFSU2_TR(0x4da8f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4da8f4:{NFSU2_TR(0x4da8f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da900:L4da900:{c.instructions+=10;NFSU2_TR(0x4da900);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da901:{NFSU2_TR(0x4da901);
__builtin_memmove((R+24),(R+4),4);
}
B4da903:{NFSU2_TR(0x4da903);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da906:{NFSU2_TR(0x4da906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da909:{NFSU2_TR(0x4da909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da90c:{NFSU2_TR(0x4da90c);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4da90e:{NFSU2_TR(0x4da90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da911:{NFSU2_TR(0x4da911);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B4da913:{NFSU2_TR(0x4da913);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4da915:{NFSU2_TR(0x4da915);
if(r1(R+518)){{goto L4da99c;}}
}
B4da91b:L4da91b:{c.instructions+=3;NFSU2_TR(0x4da91b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4da91e:{NFSU2_TR(0x4da91e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da920:{NFSU2_TR(0x4da920);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da92e;}}
}
B4da922:L4da922:{c.instructions+=3;NFSU2_TR(0x4da922);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da925:{NFSU2_TR(0x4da925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da926:{NFSU2_TR(0x4da926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da92bull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da92b:L4da92b:{c.instructions+=1;NFSU2_TR(0x4da92b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4da92e:L4da92e:{c.instructions+=7;NFSU2_TR(0x4da92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da931:{NFSU2_TR(0x4da931);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4da938:{NFSU2_TR(0x4da938);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da93b:{NFSU2_TR(0x4da93b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da93e:{NFSU2_TR(0x4da93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da944:{NFSU2_TR(0x4da944);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da946:{NFSU2_TR(0x4da946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da94bull));
TAIL_STATIC(0x56c7d0u,56c);
}
B4da94b:L4da94b:{c.instructions+=4;NFSU2_TR(0x4da94b);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4da94e:{NFSU2_TR(0x4da94e);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4da953:{NFSU2_TR(0x4da953);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4da955:{NFSU2_TR(0x4da955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4da960;}}
}
B4da957:L4da957:{c.instructions+=3;NFSU2_TR(0x4da957);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4da95c:{NFSU2_TR(0x4da95c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4da95e:{NFSU2_TR(0x4da95e);
if(r1(R+518)){{goto L4da980;}}
}
B4da960:L4da960:{c.instructions+=4;NFSU2_TR(0x4da960);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da964:{NFSU2_TR(0x4da964);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da965:{NFSU2_TR(0x4da965);
__builtin_memmove((R+4),(R+24),4);
}
B4da967:{NFSU2_TR(0x4da967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da96cull));
TAIL_STATIC(0x4c85d0u,4c8);
}
B4da96c:L4da96c:{c.instructions+=2;NFSU2_TR(0x4da96c);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4da96f:{NFSU2_TR(0x4da96f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da974ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4da974:L4da974:{c.instructions+=3;NFSU2_TR(0x4da974);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da975:{NFSU2_TR(0x4da975);
__builtin_memmove((R+4),(R+24),4);
}
B4da977:{NFSU2_TR(0x4da977);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da97cull));
TAIL_STATIC(0x4ab700u,4ab);
}
B4da97c:L4da97c:{c.instructions+=2;NFSU2_TR(0x4da97c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da97d:{NFSU2_TR(0x4da97d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da980:L4da980:{c.instructions+=4;NFSU2_TR(0x4da980);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da984:{NFSU2_TR(0x4da984);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da985:{NFSU2_TR(0x4da985);
__builtin_memmove((R+4),(R+24),4);
}
B4da987:{NFSU2_TR(0x4da987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da98cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4da710u);}goto L4da710;}
}
B4da98c:L4da98c:{c.instructions+=2;NFSU2_TR(0x4da98c);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4da98f:{NFSU2_TR(0x4da98f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da994ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4da994:L4da994:{c.instructions+=3;NFSU2_TR(0x4da994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da995:{NFSU2_TR(0x4da995);
__builtin_memmove((R+4),(R+24),4);
}
B4da997:{NFSU2_TR(0x4da997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da99cull));
TAIL_STATIC(0x4ab700u,4ab);
}
B4da99c:L4da99c:{c.instructions+=2;NFSU2_TR(0x4da99c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4da99d:{NFSU2_TR(0x4da99d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4da9a0:L4da9a0:{c.instructions+=8;NFSU2_TR(0x4da9a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9a1:{NFSU2_TR(0x4da9a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9a2:{NFSU2_TR(0x4da9a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9a3:{NFSU2_TR(0x4da9a3);
__builtin_memmove((R+24),(R+4),4);
}
B4da9a5:{NFSU2_TR(0x4da9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da9a8:{NFSU2_TR(0x4da9a8);
u8 U[4];
w4(U+0,u32(0xea570722ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9ad:{NFSU2_TR(0x4da9ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9ae:{NFSU2_TR(0x4da9ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da9b3ull));
TAIL_STATIC(0x50c990u,50c);
}
B4da9b3:L4da9b3:{c.instructions+=3;NFSU2_TR(0x4da9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da9b6:{NFSU2_TR(0x4da9b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9b7:{NFSU2_TR(0x4da9b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da9bcull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da9bc:L4da9bc:{c.instructions+=3;NFSU2_TR(0x4da9bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da9bf:{NFSU2_TR(0x4da9bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9c0:{NFSU2_TR(0x4da9c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da9c5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da9c5:L4da9c5:{c.instructions+=3;NFSU2_TR(0x4da9c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da9c8:{NFSU2_TR(0x4da9c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9c9:{NFSU2_TR(0x4da9c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da9ceull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da9ce:L4da9ce:{c.instructions+=3;NFSU2_TR(0x4da9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da9d1:{NFSU2_TR(0x4da9d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9d2:{NFSU2_TR(0x4da9d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da9d7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da9d7:L4da9d7:{c.instructions+=3;NFSU2_TR(0x4da9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4da9da:{NFSU2_TR(0x4da9da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9db:{NFSU2_TR(0x4da9db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4da9e0ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4da9e0:L4da9e0:{c.instructions+=9;NFSU2_TR(0x4da9e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4da9e3:{NFSU2_TR(0x4da9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4da9e6:{NFSU2_TR(0x4da9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4da9e9:{NFSU2_TR(0x4da9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4da9ec:{NFSU2_TR(0x4da9ec);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B4da9ee:{NFSU2_TR(0x4da9ee);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B4da9f0:{NFSU2_TR(0x4da9f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4da9f3:{NFSU2_TR(0x4da9f3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4da9f5:{NFSU2_TR(0x4da9f5);
if(r1(R+518)){{goto L4dab6e;}}
}
B4da9fb:L4da9fb:{c.instructions+=4;NFSU2_TR(0x4da9fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4da9fc:{NFSU2_TR(0x4da9fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4da9ff:{NFSU2_TR(0x4da9ff);
__builtin_memmove((R+28),(R+20),4);
}
B4daa01:{NFSU2_TR(0x4daa01);
w4(R+12,u32(0x8ull));
}
B4daa06:L4daa06:{c.instructions+=4;NFSU2_TR(0x4daa06);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4daa0a:{NFSU2_TR(0x4daa0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daa0b:{NFSU2_TR(0x4daa0b);
__builtin_memmove((R+4),(R+28),4);
}
B4daa0d:{NFSU2_TR(0x4daa0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daa12ull));
TAIL_STATIC(0x4c9030u,4c9);
}
B4daa12:L4daa12:{c.instructions+=3;NFSU2_TR(0x4daa12);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B4daa15:{NFSU2_TR(0x4daa15);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4daa16:{NFSU2_TR(0x4daa16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4daa06u);}goto L4daa06;}}
}
B4daa18:L4daa18:{c.instructions+=4;NFSU2_TR(0x4daa18);
__builtin_memmove((R+8),(R+20),4);
}
B4daa1a:{NFSU2_TR(0x4daa1a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4daa1c:{NFSU2_TR(0x4daa1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4daa1d:{NFSU2_TR(0x4daa1d);
__builtin_memmove((R+4),(R+4),4);
}
B4daa20:L4daa20:{c.instructions+=3;NFSU2_TR(0x4daa20);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B4daa22:{NFSU2_TR(0x4daa22);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4daa25:{NFSU2_TR(0x4daa25);
if(r1(R+518)){{goto L4daa90;}}
}
B4daa27:L4daa27:{c.instructions+=2;NFSU2_TR(0x4daa27);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4daa2a:{NFSU2_TR(0x4daa2a);
if(r1(R+518)){{goto L4daa90;}}
}
B4daa2c:L4daa2c:{c.instructions+=4;NFSU2_TR(0x4daa2c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4daa2d:{NFSU2_TR(0x4daa2d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B4daa30:{NFSU2_TR(0x4daa30);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4daa33:{NFSU2_TR(0x4daa33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4daa20u);}goto L4daa20;}}
}
B4daa35:L4daa35:{c.instructions+=1;NFSU2_TR(0x4daa35);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4daa37:L4daa37:{c.instructions+=2;NFSU2_TR(0x4daa37);
__builtin_memmove((R+4),(R+24),4);
}
B4daa39:{NFSU2_TR(0x4daa39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daa3eull));
TAIL_STATIC(0x4c90b0u,4c9);
}
B4daa3e:L4daa3e:{c.instructions+=3;NFSU2_TR(0x4daa3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4daa40:{NFSU2_TR(0x4daa40);
__builtin_memmove((R+28),(R+0),4);
}
B4daa42:{NFSU2_TR(0x4daa42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4daad7;}}
}
B4daa48:L4daa48:{c.instructions+=2;NFSU2_TR(0x4daa48);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4daa4a:{NFSU2_TR(0x4daa4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4daa99;}}
}
B4daa4c:L4daa4c:{c.instructions+=4;NFSU2_TR(0x4daa4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4daa4f:{NFSU2_TR(0x4daa4f);
u8 U[4];
w4(U+0,u32(0xea570722ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daa54:{NFSU2_TR(0x4daa54);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daa55:{NFSU2_TR(0x4daa55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daa5aull));
TAIL_STATIC(0x50c990u,50c);
}
B4daa5a:L4daa5a:{c.instructions+=3;NFSU2_TR(0x4daa5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4daa5d:{NFSU2_TR(0x4daa5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daa5e:{NFSU2_TR(0x4daa5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daa63ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4daa63:L4daa63:{c.instructions+=3;NFSU2_TR(0x4daa63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4daa66:{NFSU2_TR(0x4daa66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daa67:{NFSU2_TR(0x4daa67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daa6cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4daa6c:L4daa6c:{c.instructions+=3;NFSU2_TR(0x4daa6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4daa6f:{NFSU2_TR(0x4daa6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daa70:{NFSU2_TR(0x4daa70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daa75ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4daa75:L4daa75:{c.instructions+=3;NFSU2_TR(0x4daa75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4daa78:{NFSU2_TR(0x4daa78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daa79:{NFSU2_TR(0x4daa79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daa7eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4daa7e:L4daa7e:{c.instructions+=3;NFSU2_TR(0x4daa7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4daa81:{NFSU2_TR(0x4daa81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daa82:{NFSU2_TR(0x4daa82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daa87ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4daa87:L4daa87:{c.instructions+=5;NFSU2_TR(0x4daa87);
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
B4daa8a:{NFSU2_TR(0x4daa8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4daa8b:{NFSU2_TR(0x4daa8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4daa8c:{NFSU2_TR(0x4daa8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4daa8d:{NFSU2_TR(0x4daa8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4daa90:L4daa90:{c.instructions+=3;NFSU2_TR(0x4daa90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4daa93:{NFSU2_TR(0x4daa93);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B4daa97:{NFSU2_TR(0x4daa97);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4daa37u);}goto L4daa37;}
}
B4daa99:L4daa99:{c.instructions+=2;NFSU2_TR(0x4daa99);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4daa9c:{NFSU2_TR(0x4daa9c);
if(r1(R+518)){{goto L4daac5;}}
}
B4daa9e:L4daa9e:{c.instructions+=6;NFSU2_TR(0x4daa9e);
u8 U[1];
w1(U+0,u8(0x2ull));
s1(u32(r4(R+28)),r1(U+0));
}
B4daaa1:{NFSU2_TR(0x4daaa1);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4daaa7:{NFSU2_TR(0x4daaa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4daaaa:{NFSU2_TR(0x4daaaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4daaad:{NFSU2_TR(0x4daaad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x14ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4daaaf:{NFSU2_TR(0x4daaaf);
if(r1(R+518)){{goto L4daac5;}}
}
B4daab1:L4daab1:{c.instructions+=2;NFSU2_TR(0x4daab1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x13ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4daab3:{NFSU2_TR(0x4daab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4daab9;}}
}
B4daab5:L4daab5:{c.instructions+=2;NFSU2_TR(0x4daab5);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daab7:{NFSU2_TR(0x4daab7);
{goto L4daabb;}
}
B4daab9:L4daab9:{c.instructions+=1;NFSU2_TR(0x4daab9);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daabb:L4daabb:{c.instructions+=2;NFSU2_TR(0x4daabb);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daabd:{NFSU2_TR(0x4daabd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daac2ull));
TAIL_STATIC(0x51de30u,51d);
}
B4daac2:L4daac2:{c.instructions+=1;NFSU2_TR(0x4daac2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4daac5:L4daac5:{c.instructions+=4;NFSU2_TR(0x4daac5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4daac9:{NFSU2_TR(0x4daac9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daaca:{NFSU2_TR(0x4daaca);
__builtin_memmove((R+4),(R+28),4);
}
B4daacc:{NFSU2_TR(0x4daacc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daad1ull));
TAIL_STATIC(0x4c9030u,4c9);
}
B4daad1:L4daad1:{c.instructions+=4;NFSU2_TR(0x4daad1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4daad2:{NFSU2_TR(0x4daad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4daad3:{NFSU2_TR(0x4daad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4daad4:{NFSU2_TR(0x4daad4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4daad7:L4daad7:{c.instructions+=2;NFSU2_TR(0x4daad7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4daada:{NFSU2_TR(0x4daada);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4daae0;}}
}
B4daadc:L4daadc:{c.instructions+=2;NFSU2_TR(0x4daadc);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B4daade:{NFSU2_TR(0x4daade);
{goto L4daaef;}
}
B4daae0:L4daae0:{c.instructions+=3;NFSU2_TR(0x4daae0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4daae4:{NFSU2_TR(0x4daae4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daae5:{NFSU2_TR(0x4daae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daaeaull));
TAIL_STATIC(0x4abf20u,4ab);
}
B4daaea:L4daaea:{c.instructions+=2;NFSU2_TR(0x4daaea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4daaed:{NFSU2_TR(0x4daaed);
__builtin_memmove((R+4),(R+0),1);
}
B4daaef:L4daaef:{c.instructions+=2;NFSU2_TR(0x4daaef);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4daaf2:{NFSU2_TR(0x4daaf2);
if(r1(R+518)){{goto L4dab62;}}
}
B4daaf4:L4daaf4:{c.instructions+=3;NFSU2_TR(0x4daaf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4daaf8:{NFSU2_TR(0x4daaf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daaf9:{NFSU2_TR(0x4daaf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daafeull));
TAIL_STATIC(0x4abf20u,4ab);
}
B4daafe:L4daafe:{c.instructions+=3;NFSU2_TR(0x4daafe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dab01:{NFSU2_TR(0x4dab01);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
w1(R+512,u8((r1(R+4))<(r1(U+0))));
}
B4dab03:{NFSU2_TR(0x4dab03);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4dab62;}}
}
B4dab05:L4dab05:{c.instructions+=4;NFSU2_TR(0x4dab05);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x13ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4dab09:{NFSU2_TR(0x4dab09);
__builtin_memmove((R+4),(R+12),4);
}
B4dab0b:{NFSU2_TR(0x4dab0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dab0d:{NFSU2_TR(0x4dab0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dab19;}}
}
B4dab0f:L4dab0f:{c.instructions+=2;NFSU2_TR(0x4dab0f);
u8 U[1];
w1(U+0,u8(0x4ull));
s1(u32(r4(R+12)),r1(U+0));
}
B4dab12:{NFSU2_TR(0x4dab12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dab17ull));
TAIL_STATIC(0x4c9030u,4c9);
}
B4dab17:L4dab17:{c.instructions+=1;NFSU2_TR(0x4dab17);
{goto L4dab28;}
}
B4dab19:L4dab19:{c.instructions+=2;NFSU2_TR(0x4dab19);
u8 U[1];
w1(U+0,u8(0x6ull));
s1(u32(r4(R+12)),r1(U+0));
}
B4dab1c:{NFSU2_TR(0x4dab1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dab21ull));
TAIL_STATIC(0x4c9030u,4c9);
}
B4dab21:L4dab21:{c.instructions+=2;NFSU2_TR(0x4dab21);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+12)),r1(U+0));
}
B4dab24:{NFSU2_TR(0x4dab24);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4dab28:L4dab28:{c.instructions+=6;NFSU2_TR(0x4dab28);
u8 U[1];
w1(U+0,u8(0x2ull));
s1(u32(r4(R+28)),r1(U+0));
}
B4dab2b:{NFSU2_TR(0x4dab2b);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4dab30:{NFSU2_TR(0x4dab30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dab33:{NFSU2_TR(0x4dab33);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4dab36:{NFSU2_TR(0x4dab36);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x14ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x14ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x14ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4dab38:{NFSU2_TR(0x4dab38);
if(r1(R+518)){{goto L4dab6e;}}
}
B4dab3a:L4dab3a:{c.instructions+=2;NFSU2_TR(0x4dab3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x13ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dab3c:{NFSU2_TR(0x4dab3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dab50;}}
}
B4dab3e:L4dab3e:{c.instructions+=3;NFSU2_TR(0x4dab3e);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dab40:{NFSU2_TR(0x4dab40);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dab42:{NFSU2_TR(0x4dab42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dab47ull));
TAIL_STATIC(0x51de30u,51d);
}
B4dab47:L4dab47:{c.instructions+=5;NFSU2_TR(0x4dab47);
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
B4dab4a:{NFSU2_TR(0x4dab4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dab4b:{NFSU2_TR(0x4dab4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dab4c:{NFSU2_TR(0x4dab4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4dab4d:{NFSU2_TR(0x4dab4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dab50:L4dab50:{c.instructions+=3;NFSU2_TR(0x4dab50);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dab52:{NFSU2_TR(0x4dab52);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dab54:{NFSU2_TR(0x4dab54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dab59ull));
TAIL_STATIC(0x51de30u,51d);
}
B4dab59:L4dab59:{c.instructions+=5;NFSU2_TR(0x4dab59);
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
B4dab5c:{NFSU2_TR(0x4dab5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dab5d:{NFSU2_TR(0x4dab5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dab5e:{NFSU2_TR(0x4dab5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4dab5f:{NFSU2_TR(0x4dab5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dab62:L4dab62:{c.instructions+=4;NFSU2_TR(0x4dab62);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dab66:{NFSU2_TR(0x4dab66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dab67:{NFSU2_TR(0x4dab67);
__builtin_memmove((R+4),(R+12),4);
}
B4dab69:{NFSU2_TR(0x4dab69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dab6eull));
TAIL_STATIC(0x4c9030u,4c9);
}
B4dab6e:L4dab6e:{c.instructions+=4;NFSU2_TR(0x4dab6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dab6f:{NFSU2_TR(0x4dab6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dab70:{NFSU2_TR(0x4dab70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4dab71:{NFSU2_TR(0x4dab71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dab80:L4dab80:{c.instructions+=6;NFSU2_TR(0x4dab80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dab81:{NFSU2_TR(0x4dab81);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B4dab86:{NFSU2_TR(0x4dab86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dab87:{NFSU2_TR(0x4dab87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4dab89:{NFSU2_TR(0x4dab89);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x61ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dab8c:{NFSU2_TR(0x4dab8c);
__builtin_memmove((R+16),(R+16),4);
}
B4dab90:L4dab90:{c.instructions+=3;NFSU2_TR(0x4dab90);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B4dab93:{NFSU2_TR(0x4dab93);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4dab95:{NFSU2_TR(0x4dab95);
if(r1(R+518)){{goto L4daba5;}}
}
B4dab97:L4dab97:{c.instructions+=4;NFSU2_TR(0x4dab97);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4dab98:{NFSU2_TR(0x4dab98);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B4dab9b:{NFSU2_TR(0x4dab9b);
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
B4dab9e:{NFSU2_TR(0x4dab9e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4dab90u);}goto L4dab90;}}
}
B4daba0:L4daba0:{c.instructions+=3;NFSU2_TR(0x4daba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4daba1:{NFSU2_TR(0x4daba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4daba2:{NFSU2_TR(0x4daba2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4daba5:L4daba5:{c.instructions+=6;NFSU2_TR(0x4daba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4daba8:{NFSU2_TR(0x4daba8);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4dabac:{NFSU2_TR(0x4dabac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dabae:{NFSU2_TR(0x4dabae);
__builtin_memmove((R+4),(R+24),4);
}
B4dabb0:{NFSU2_TR(0x4dabb0);
u8 U[1];
w1(U+0,u8(0x6ull));
s1(u32(r4(R+24)),r1(U+0));
}
B4dabb3:{NFSU2_TR(0x4dabb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dabb8ull));
TAIL_STATIC(0x4c9030u,4c9);
}
B4dabb8:L4dabb8:{c.instructions+=5;NFSU2_TR(0x4dabb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dabb9:{NFSU2_TR(0x4dabb9);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B4dabbc:{NFSU2_TR(0x4dabbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4dabc0:{NFSU2_TR(0x4dabc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dabc1:{NFSU2_TR(0x4dabc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dabd0:L4dabd0:{c.instructions+=11;NFSU2_TR(0x4dabd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dabd1:{NFSU2_TR(0x4dabd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dabd2:{NFSU2_TR(0x4dabd2);
__builtin_memmove((R+24),(R+4),4);
}
B4dabd4:{NFSU2_TR(0x4dabd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dabd7:{NFSU2_TR(0x4dabd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dabda:{NFSU2_TR(0x4dabda);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4dabdc:{NFSU2_TR(0x4dabdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dabdf:{NFSU2_TR(0x4dabdf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dabe0:{NFSU2_TR(0x4dabe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B4dabe3:{NFSU2_TR(0x4dabe3);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4dabe5:{NFSU2_TR(0x4dabe5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dac14;}}
}
B4dabe7:L4dabe7:{c.instructions+=5;NFSU2_TR(0x4dabe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dabea:{NFSU2_TR(0x4dabea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dabec:{NFSU2_TR(0x4dabec);
u8 U[4];
w4(U+0,u32(0x790ae8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dabf1:{NFSU2_TR(0x4dabf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dabf2:{NFSU2_TR(0x4dabf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dabf7ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4dabf7:L4dabf7:{c.instructions+=4;NFSU2_TR(0x4dabf7);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B4dabfc:{NFSU2_TR(0x4dabfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4dabff:{NFSU2_TR(0x4dabff);
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
B4dac02:{NFSU2_TR(0x4dac02);
if(r1(R+518)){{goto L4daefd;}}
}
B4dac08:L4dac08:{c.instructions+=5;NFSU2_TR(0x4dac08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dac09:{NFSU2_TR(0x4dac09);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4dac0f:{NFSU2_TR(0x4dac0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dac10:{NFSU2_TR(0x4dac10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dac11:{NFSU2_TR(0x4dac11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dac14:L4dac14:{c.instructions+=4;NFSU2_TR(0x4dac14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4dac18:{NFSU2_TR(0x4dac18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dac19:{NFSU2_TR(0x4dac19);
__builtin_memmove((R+4),(R+24),4);
}
B4dac1b:{NFSU2_TR(0x4dac1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dac20ull));
TAIL_STATIC(0x4c9780u,4c9);
}
B4dac20:L4dac20:{c.instructions+=4;NFSU2_TR(0x4dac20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dac23:{NFSU2_TR(0x4dac23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dac26:{NFSU2_TR(0x4dac26);
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
B4dac28:{NFSU2_TR(0x4dac28);
if(r1(R+518)){{goto L4daefd;}}
}
B4dac2e:L4dac2e:{c.instructions+=2;NFSU2_TR(0x4dac2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dac2f:{NFSU2_TR(0x4dac2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dac34ull));
TAIL_STATIC(0x4c9450u,4c9);
}
B4dac34:L4dac34:{c.instructions+=5;NFSU2_TR(0x4dac34);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4dac38:{NFSU2_TR(0x4dac38);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4dac3d:{NFSU2_TR(0x4dac3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dac40:{NFSU2_TR(0x4dac40);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4dac43:{NFSU2_TR(0x4dac43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dadfd;}}
}
B4dac49:L4dac49:{c.instructions+=2;NFSU2_TR(0x4dac49);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4dac50:{NFSU2_TR(0x4dac50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dadfd;}}
}
B4dac56:L4dac56:{c.instructions+=3;NFSU2_TR(0x4dac56);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4dac5b:{NFSU2_TR(0x4dac5b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4dac5e:{NFSU2_TR(0x4dac5e);
if(r1(R+518)){{goto L4dadb2;}}
}
B4dac64:L4dac64:{c.instructions+=2;NFSU2_TR(0x4dac64);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4dac68:{NFSU2_TR(0x4dac68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4dac72;}}
}
B4dac6a:L4dac6a:{c.instructions+=2;NFSU2_TR(0x4dac6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dac70:{NFSU2_TR(0x4dac70);
{goto L4dac74;}
}
B4dac72:L4dac72:{c.instructions+=1;NFSU2_TR(0x4dac72);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4dac74:L4dac74:{c.instructions+=1;NFSU2_TR(0x4dac74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dac79ull));
TAIL_STATIC(0x5ee3a0u,5ee);
}
B4dac79:L4dac79:{c.instructions+=2;NFSU2_TR(0x4dac79);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4dac7b:{NFSU2_TR(0x4dac7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dada8;}}
}
B4dac81:L4dac81:{c.instructions+=1;NFSU2_TR(0x4dac81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xc0f3c28full));
s4(u32(r4(U+0)),r4(U+4));
}
B4dac89:L4dac89:{c.instructions+=4;NFSU2_TR(0x4dac89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dac8c:{NFSU2_TR(0x4dac8c);
u8 U[4];
w4(U+0,u32(0x796588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dac91:{NFSU2_TR(0x4dac91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dac92:{NFSU2_TR(0x4dac92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dac97ull));
TAIL_STATIC(0x51d040u,51d);
}
B4dac97:L4dac97:{c.instructions+=3;NFSU2_TR(0x4dac97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4dac9a:{NFSU2_TR(0x4dac9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dac9c:{NFSU2_TR(0x4dac9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dacb1;}}
}
B4dac9e:L4dac9e:{c.instructions+=5;NFSU2_TR(0x4dac9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4daca1:{NFSU2_TR(0x4daca1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daca3:{NFSU2_TR(0x4daca3);
u8 U[4];
w4(U+0,u32(0x796588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daca8:{NFSU2_TR(0x4daca8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daca9:{NFSU2_TR(0x4daca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dacaeull));
TAIL_STATIC(0x51cf70u,51c);
}
B4dacae:L4dacae:{c.instructions+=1;NFSU2_TR(0x4dacae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4dacb1:L4dacb1:{c.instructions+=4;NFSU2_TR(0x4dacb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dacb4:{NFSU2_TR(0x4dacb4);
u8 U[4];
w4(U+0,u32(0x796588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dacb9:{NFSU2_TR(0x4dacb9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dacba:{NFSU2_TR(0x4dacba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dacbfull));
TAIL_STATIC(0x51d040u,51d);
}
B4dacbf:L4dacbf:{c.instructions+=3;NFSU2_TR(0x4dacbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4dacc2:{NFSU2_TR(0x4dacc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dacc4:{NFSU2_TR(0x4dacc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dacd7;}}
}
B4dacc6:L4dacc6:{c.instructions+=4;NFSU2_TR(0x4dacc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dacc9:{NFSU2_TR(0x4dacc9);
u8 U[4];
w4(U+0,u32(0xff30cf30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dacce:{NFSU2_TR(0x4dacce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daccf:{NFSU2_TR(0x4daccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dacd4ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4dacd4:L4dacd4:{c.instructions+=1;NFSU2_TR(0x4dacd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4dacd7:L4dacd7:{c.instructions+=5;NFSU2_TR(0x4dacd7);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4dacda:{NFSU2_TR(0x4dacda);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4dace0:{NFSU2_TR(0x4dace0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4dace2:{NFSU2_TR(0x4dace2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dace5:{NFSU2_TR(0x4dace5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dad1c;}}
}
B4dace7:L4dace7:{c.instructions+=3;NFSU2_TR(0x4dace7);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4daced:{NFSU2_TR(0x4daced);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4dacf0:{NFSU2_TR(0x4dacf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dad1c;}}
}
B4dacf2:L4dacf2:{c.instructions+=4;NFSU2_TR(0x4dacf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dacf5:{NFSU2_TR(0x4dacf5);
u8 U[4];
w4(U+0,u32(0xbfd1936full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dacfa:{NFSU2_TR(0x4dacfa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dacfb:{NFSU2_TR(0x4dacfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dad00ull));
TAIL_STATIC(0x50c900u,50c);
}
B4dad00:L4dad00:{c.instructions+=3;NFSU2_TR(0x4dad00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dad03:{NFSU2_TR(0x4dad03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dad04:{NFSU2_TR(0x4dad04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dad09ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4dad09:L4dad09:{c.instructions+=4;NFSU2_TR(0x4dad09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dad0c:{NFSU2_TR(0x4dad0c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dad0e:{NFSU2_TR(0x4dad0e);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dad13:{NFSU2_TR(0x4dad13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dad14:L4dad14:{c.instructions+=1;NFSU2_TR(0x4dad14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dad19ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4dad19:L4dad19:{c.instructions+=1;NFSU2_TR(0x4dad19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4dad1c:L4dad1c:{c.instructions+=8;NFSU2_TR(0x4dad1c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4dad20:{NFSU2_TR(0x4dad20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dad24:{NFSU2_TR(0x4dad24);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4dad2a:{NFSU2_TR(0x4dad2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dad2d:{NFSU2_TR(0x4dad2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dad35:{NFSU2_TR(0x4dad35);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4dad37:{NFSU2_TR(0x4dad37);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dad3a:{NFSU2_TR(0x4dad3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dad4f;}}
}
B4dad3c:L4dad3c:{c.instructions+=2;NFSU2_TR(0x4dad3c);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4dad42:{NFSU2_TR(0x4dad42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dad47ull));
TAIL_STATIC(0x5eeea0u,5ee);
}
B4dad47:L4dad47:{c.instructions+=2;NFSU2_TR(0x4dad47);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4dad4b:{NFSU2_TR(0x4dad4b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4dad4f:L4dad4f:{c.instructions+=7;NFSU2_TR(0x4dad4f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4dad53:{NFSU2_TR(0x4dad53);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4dad55:{NFSU2_TR(0x4dad55);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4dad59:{NFSU2_TR(0x4dad59);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4dad5f:{NFSU2_TR(0x4dad5f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4dad61:{NFSU2_TR(0x4dad61);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dad64:{NFSU2_TR(0x4dad64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dad79;}}
}
B4dad66:L4dad66:{c.instructions+=2;NFSU2_TR(0x4dad66);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4dad6c:{NFSU2_TR(0x4dad6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dad71ull));
TAIL_STATIC(0x5eeea0u,5ee);
}
B4dad71:L4dad71:{c.instructions+=2;NFSU2_TR(0x4dad71);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4dad75:{NFSU2_TR(0x4dad75);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4dad79:L4dad79:{c.instructions+=3;NFSU2_TR(0x4dad79);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B4dad7e:{NFSU2_TR(0x4dad7e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dad80:{NFSU2_TR(0x4dad80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4daeaa;}}
}
B4dad86:L4dad86:{c.instructions+=5;NFSU2_TR(0x4dad86);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4dad8a:{NFSU2_TR(0x4dad8a);
u8 U[4];
w4(U+0,u32(0x1578c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dad8f:{NFSU2_TR(0x4dad8f);
{u32 ea_=u32(u32(7932644u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4dad95:{NFSU2_TR(0x4dad95);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4dad99:{NFSU2_TR(0x4dad99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dad9eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4dad9e:L4dad9e:{c.instructions+=4;NFSU2_TR(0x4dad9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dad9f:{NFSU2_TR(0x4dad9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dada2:{NFSU2_TR(0x4dada2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dada3:{NFSU2_TR(0x4dada3);
{goto L4daeb9;}
}
B4dada8:L4dada8:{c.instructions+=2;NFSU2_TR(0x4dada8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x40f3c28full));
s4(u32(r4(U+0)),r4(U+4));
}
B4dadb0:{NFSU2_TR(0x4dadb0);
{goto L4dae12;}
}
B4dadb2:L4dadb2:{c.instructions+=3;NFSU2_TR(0x4dadb2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4dadb6:{NFSU2_TR(0x4dadb6);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xfull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4dadba:{NFSU2_TR(0x4dadba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dadf8;}}
}
B4dadbc:L4dadbc:{c.instructions+=4;NFSU2_TR(0x4dadbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dadbf:{NFSU2_TR(0x4dadbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dadc2:{NFSU2_TR(0x4dadc2);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4dadc6:{NFSU2_TR(0x4dadc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dadf2;}}
}
B4dadc8:L4dadc8:{c.instructions+=4;NFSU2_TR(0x4dadc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dadcb:{NFSU2_TR(0x4dadcb);
u8 U[4];
w4(U+0,u32(0xbfd1936full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dadd0:{NFSU2_TR(0x4dadd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dadd1:{NFSU2_TR(0x4dadd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dadd6ull));
TAIL_STATIC(0x50c900u,50c);
}
B4dadd6:L4dadd6:{c.instructions+=3;NFSU2_TR(0x4dadd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dadd9:{NFSU2_TR(0x4dadd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dadda:{NFSU2_TR(0x4dadda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daddfull));
TAIL_STATIC(0x50ca50u,50c);
}
B4daddf:L4daddf:{c.instructions+=5;NFSU2_TR(0x4daddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dade2:{NFSU2_TR(0x4dade2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dade4:{NFSU2_TR(0x4dade4);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dade9:{NFSU2_TR(0x4dade9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dadea:{NFSU2_TR(0x4dadea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dadefull));
TAIL_STATIC(0x51cf70u,51c);
}
B4dadef:L4dadef:{c.instructions+=1;NFSU2_TR(0x4dadef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4dadf2:L4dadf2:{c.instructions+=2;NFSU2_TR(0x4dadf2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B4dadf6:{NFSU2_TR(0x4dadf6);
{goto L4dadfd;}
}
B4dadf8:L4dadf8:{c.instructions+=2;NFSU2_TR(0x4dadf8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4dadf9:{NFSU2_TR(0x4dadf9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4dadfd:L4dadfd:{c.instructions+=5;NFSU2_TR(0x4dadfd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4dae01:{NFSU2_TR(0x4dae01);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4dae07:{NFSU2_TR(0x4dae07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4dae09:{NFSU2_TR(0x4dae09);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dae0c:{NFSU2_TR(0x4dae0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4dac89u);}goto L4dac89;}}
}
B4dae12:L4dae12:{c.instructions+=4;NFSU2_TR(0x4dae12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dae15:{NFSU2_TR(0x4dae15);
u8 U[4];
w4(U+0,u32(0x796580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae1a:{NFSU2_TR(0x4dae1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae1b:{NFSU2_TR(0x4dae1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dae20ull));
TAIL_STATIC(0x51d040u,51d);
}
B4dae20:L4dae20:{c.instructions+=3;NFSU2_TR(0x4dae20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4dae23:{NFSU2_TR(0x4dae23);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dae25:{NFSU2_TR(0x4dae25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dae3a;}}
}
B4dae27:L4dae27:{c.instructions+=5;NFSU2_TR(0x4dae27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dae2a:{NFSU2_TR(0x4dae2a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae2c:{NFSU2_TR(0x4dae2c);
u8 U[4];
w4(U+0,u32(0x796580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae31:{NFSU2_TR(0x4dae31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae32:{NFSU2_TR(0x4dae32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dae37ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4dae37:L4dae37:{c.instructions+=1;NFSU2_TR(0x4dae37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4dae3a:L4dae3a:{c.instructions+=4;NFSU2_TR(0x4dae3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dae3d:{NFSU2_TR(0x4dae3d);
u8 U[4];
w4(U+0,u32(0x796580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae42:{NFSU2_TR(0x4dae42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae43:{NFSU2_TR(0x4dae43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dae48ull));
TAIL_STATIC(0x51d040u,51d);
}
B4dae48:L4dae48:{c.instructions+=3;NFSU2_TR(0x4dae48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4dae4b:{NFSU2_TR(0x4dae4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dae4d:{NFSU2_TR(0x4dae4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dae60;}}
}
B4dae4f:L4dae4f:{c.instructions+=4;NFSU2_TR(0x4dae4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dae52:{NFSU2_TR(0x4dae52);
u8 U[4];
w4(U+0,u32(0xff950000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae57:{NFSU2_TR(0x4dae57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae58:{NFSU2_TR(0x4dae58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dae5dull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4dae5d:L4dae5d:{c.instructions+=1;NFSU2_TR(0x4dae5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4dae60:L4dae60:{c.instructions+=5;NFSU2_TR(0x4dae60);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4dae63:{NFSU2_TR(0x4dae63);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4dae69:{NFSU2_TR(0x4dae69);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4dae6b:{NFSU2_TR(0x4dae6b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4dae6e:{NFSU2_TR(0x4dae6e);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4dad1cu);}goto L4dad1c;}}
}
B4dae74:L4dae74:{c.instructions+=3;NFSU2_TR(0x4dae74);
__builtin_memmove((R+8),gp(0x890118),4);
}
B4dae7a:{NFSU2_TR(0x4dae7a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4dae7d:{NFSU2_TR(0x4dae7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4dad1cu);}goto L4dad1c;}}
}
B4dae83:L4dae83:{c.instructions+=4;NFSU2_TR(0x4dae83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dae86:{NFSU2_TR(0x4dae86);
u8 U[4];
w4(U+0,u32(0x9b2af3c7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae8b:{NFSU2_TR(0x4dae8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae8c:{NFSU2_TR(0x4dae8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dae91ull));
TAIL_STATIC(0x50c900u,50c);
}
B4dae91:L4dae91:{c.instructions+=3;NFSU2_TR(0x4dae91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dae94:{NFSU2_TR(0x4dae94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae95:{NFSU2_TR(0x4dae95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dae9aull));
TAIL_STATIC(0x50ca50u,50c);
}
B4dae9a:L4dae9a:{c.instructions+=5;NFSU2_TR(0x4dae9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dae9d:{NFSU2_TR(0x4dae9d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dae9f:{NFSU2_TR(0x4dae9f);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daea4:{NFSU2_TR(0x4daea4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daea5:{NFSU2_TR(0x4daea5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4dad14u);}goto L4dad14;}
}
B4daeaa:L4daeaa:{c.instructions+=2;NFSU2_TR(0x4daeaa);
u8 U[4];
w4(U+0,u32(0x6bb2d6afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daeaf:{NFSU2_TR(0x4daeaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daeb4ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4daeb4:L4daeb4:{c.instructions+=3;NFSU2_TR(0x4daeb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4daeb7:{NFSU2_TR(0x4daeb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daeb8:{NFSU2_TR(0x4daeb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daeb9:L4daeb9:{c.instructions+=1;NFSU2_TR(0x4daeb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daebeull));
TAIL_STATIC(0x537be0u,537);
}
B4daebe:L4daebe:{c.instructions+=3;NFSU2_TR(0x4daebe);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4daec2:{NFSU2_TR(0x4daec2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4daec5:{NFSU2_TR(0x4daec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daecaull));
TAIL_STATIC(0x75bed4u,75b);
}
B4daeca:L4daeca:{c.instructions+=5;NFSU2_TR(0x4daeca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4daecd:{NFSU2_TR(0x4daecd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daece:{NFSU2_TR(0x4daece);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daed3:{NFSU2_TR(0x4daed3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daed4:{NFSU2_TR(0x4daed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daed9ull));
TAIL_STATIC(0x537be0u,537);
}
B4daed9:L4daed9:{c.instructions+=11;NFSU2_TR(0x4daed9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4daedd:{NFSU2_TR(0x4daedd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4daee0:{NFSU2_TR(0x4daee0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4daee3:{NFSU2_TR(0x4daee3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daee5:{NFSU2_TR(0x4daee5);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daeea:{NFSU2_TR(0x4daeea);
u8 U[4];
w4(U+0,u32(0x42c60000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daeef:{NFSU2_TR(0x4daeef);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daef4:{NFSU2_TR(0x4daef4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daef5:{NFSU2_TR(0x4daef5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daef6:{NFSU2_TR(0x4daef6);
__builtin_memmove((R+4),(R+24),4);
}
B4daef8:{NFSU2_TR(0x4daef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daefdull));
TAIL_STATIC(0x4c67e0u,4c6);
}
B4daefd:L4daefd:{c.instructions+=4;NFSU2_TR(0x4daefd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4daefe:{NFSU2_TR(0x4daefe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4daeff:{NFSU2_TR(0x4daeff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4daf00:{NFSU2_TR(0x4daf00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4daf10:L4daf10:{c.instructions+=17;NFSU2_TR(0x4daf10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf12:{NFSU2_TR(0x4daf12);
u8 U[4];
w4(U+0,u32(0x774bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf17:{NFSU2_TR(0x4daf17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4daf1d:{NFSU2_TR(0x4daf1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf1e:{NFSU2_TR(0x4daf1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4daf25:{NFSU2_TR(0x4daf25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B4daf28:{NFSU2_TR(0x4daf28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf29:{NFSU2_TR(0x4daf29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf2a:{NFSU2_TR(0x4daf2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf2b:{NFSU2_TR(0x4daf2b);
__builtin_memmove((R+20),(R+4),4);
}
B4daf2d:{NFSU2_TR(0x4daf2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4daf30:{NFSU2_TR(0x4daf30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf31:{NFSU2_TR(0x4daf31);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4daf34:{NFSU2_TR(0x4daf34);
u8 U[4];
w4(U+0,u32(0x7121f270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf39:{NFSU2_TR(0x4daf39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf3a:{NFSU2_TR(0x4daf3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4daf3e:{NFSU2_TR(0x4daf3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daf43ull));
TAIL_STATIC(0x537a10u,537);
}
B4daf43:L4daf43:{c.instructions+=4;NFSU2_TR(0x4daf43);
__builtin_memmove((R+12),(R+0),4);
}
B4daf45:{NFSU2_TR(0x4daf45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4daf48:{NFSU2_TR(0x4daf48);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4daf4a:{NFSU2_TR(0x4daf4a);
if(r1(R+518)){{goto L4daf69;}}
}
B4daf4c:L4daf4c:{c.instructions+=1;NFSU2_TR(0x4daf4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daf51ull));
TAIL_STATIC(0x440ec0u,440);
}
B4daf51:L4daf51:{c.instructions+=2;NFSU2_TR(0x4daf51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4daf53:{NFSU2_TR(0x4daf53);
if(r1(R+518)){{goto L4daf5a;}}
}
B4daf55:L4daf55:{c.instructions+=2;NFSU2_TR(0x4daf55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4daf58:{NFSU2_TR(0x4daf58);
{goto L4daf5c;}
}
B4daf5a:L4daf5a:{c.instructions+=1;NFSU2_TR(0x4daf5a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4daf5c:L4daf5c:{c.instructions+=5;NFSU2_TR(0x4daf5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4daf5f:{NFSU2_TR(0x4daf5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4daf61:{NFSU2_TR(0x4daf61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4daf64:{NFSU2_TR(0x4daf64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4daf67:{NFSU2_TR(0x4daf67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4daf69:L4daf69:{c.instructions+=4;NFSU2_TR(0x4daf69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4daf6c:{NFSU2_TR(0x4daf6c);
u8 U[4];
w4(U+0,u32(0xb470b80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf71:{NFSU2_TR(0x4daf71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daf72:{NFSU2_TR(0x4daf72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daf77ull));
TAIL_STATIC(0x5379c0u,537);
}
B4daf77:L4daf77:{c.instructions+=4;NFSU2_TR(0x4daf77);
__builtin_memmove((R+28),(R+0),4);
}
B4daf79:{NFSU2_TR(0x4daf79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4daf7c:{NFSU2_TR(0x4daf7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4daf7e:{NFSU2_TR(0x4daf7e);
if(r1(R+518)){{goto L4daf9d;}}
}
B4daf80:L4daf80:{c.instructions+=1;NFSU2_TR(0x4daf80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daf85ull));
TAIL_STATIC(0x440ec0u,440);
}
B4daf85:L4daf85:{c.instructions+=2;NFSU2_TR(0x4daf85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4daf87:{NFSU2_TR(0x4daf87);
if(r1(R+518)){{goto L4daf8e;}}
}
B4daf89:L4daf89:{c.instructions+=2;NFSU2_TR(0x4daf89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4daf8c:{NFSU2_TR(0x4daf8c);
{goto L4daf90;}
}
B4daf8e:L4daf8e:{c.instructions+=1;NFSU2_TR(0x4daf8e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4daf90:L4daf90:{c.instructions+=5;NFSU2_TR(0x4daf90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4daf93:{NFSU2_TR(0x4daf93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4daf95:{NFSU2_TR(0x4daf95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4daf98:{NFSU2_TR(0x4daf98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4daf9b:{NFSU2_TR(0x4daf9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4daf9d:L4daf9d:{c.instructions+=3;NFSU2_TR(0x4daf9d);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4dafa2:{NFSU2_TR(0x4dafa2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dafa4:{NFSU2_TR(0x4dafa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dafb3;}}
}
B4dafa6:L4dafa6:{c.instructions+=3;NFSU2_TR(0x4dafa6);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4dafab:{NFSU2_TR(0x4dafab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dafad:{NFSU2_TR(0x4dafad);
if(r1(R+518)){TAIL_STATIC(0x4db2f9u,4db);}
}
B4dafb3:L4dafb3:{c.instructions+=4;NFSU2_TR(0x4dafb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dafb6:{NFSU2_TR(0x4dafb6);
u8 U[4];
w4(U+0,u32(0x72f68cc9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dafbb:{NFSU2_TR(0x4dafbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dafbc:{NFSU2_TR(0x4dafbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dafc1ull));
TAIL_STATIC(0x537a10u,537);
}
B4dafc1:L4dafc1:{c.instructions+=4;NFSU2_TR(0x4dafc1);
__builtin_memmove((R+28),(R+0),4);
}
B4dafc3:{NFSU2_TR(0x4dafc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4dafc6:{NFSU2_TR(0x4dafc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dafc8:{NFSU2_TR(0x4dafc8);
if(r1(R+518)){{goto L4dafe7;}}
}
B4dafca:L4dafca:{c.instructions+=1;NFSU2_TR(0x4dafca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dafcfull));
TAIL_STATIC(0x440ec0u,440);
}
B4dafcf:L4dafcf:{c.instructions+=2;NFSU2_TR(0x4dafcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dafd1:{NFSU2_TR(0x4dafd1);
if(r1(R+518)){{goto L4dafd8;}}
}
B4dafd3:L4dafd3:{c.instructions+=2;NFSU2_TR(0x4dafd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dafd6:{NFSU2_TR(0x4dafd6);
{goto L4dafda;}
}
B4dafd8:L4dafd8:{c.instructions+=1;NFSU2_TR(0x4dafd8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4dafda:L4dafda:{c.instructions+=5;NFSU2_TR(0x4dafda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dafdd:{NFSU2_TR(0x4dafdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4dafdf:{NFSU2_TR(0x4dafdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dafe2:{NFSU2_TR(0x4dafe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dafe5:{NFSU2_TR(0x4dafe5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4dafe7:L4dafe7:{c.instructions+=5;NFSU2_TR(0x4dafe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dafea:{NFSU2_TR(0x4dafea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dafed:{NFSU2_TR(0x4dafed);
u8 U[4];
w4(U+0,u32(0x29f91c7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daff2:{NFSU2_TR(0x4daff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4daff3:{NFSU2_TR(0x4daff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4daff8ull));
TAIL_STATIC(0x537a10u,537);
}
B4daff8:L4daff8:{c.instructions+=4;NFSU2_TR(0x4daff8);
__builtin_memmove((R+28),(R+0),4);
}
B4daffa:{NFSU2_TR(0x4daffa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4daffd:{NFSU2_TR(0x4daffd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dafff:{NFSU2_TR(0x4dafff);
if(r1(R+518)){TAIL_STATIC(0x4db01eu,4db);}
TAIL_STATIC(0x4db001u,4db);
}
XIT:NFSU2_TR_EXIT(0x4da,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
