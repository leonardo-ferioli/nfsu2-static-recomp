#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45c(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46a(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_470(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x46f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x46f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_46f(u8* __restrict R,Cpu& c);
u32 page_46f(Cpu& c){return body_46f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_46f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x46f000:goto L46f000;
case 0x46f001:c.instructions+=4;goto B46f001;
case 0x46f003:c.instructions+=3;goto B46f003;
case 0x46f009:c.instructions+=2;goto B46f009;
case 0x46f00b:c.instructions+=1;goto B46f00b;
case 0x46f00d:goto L46f00d;
case 0x46f00e:c.instructions+=4;goto B46f00e;
case 0x46f012:c.instructions+=3;goto B46f012;
case 0x46f013:c.instructions+=2;goto B46f013;
case 0x46f019:c.instructions+=1;goto B46f019;
case 0x46f01e:goto L46f01e;
case 0x46f01f:c.instructions+=2;goto B46f01f;
case 0x46f025:c.instructions+=1;goto B46f025;
case 0x46f02a:goto L46f02a;
case 0x46f030:c.instructions+=2;goto B46f030;
case 0x46f032:c.instructions+=1;goto B46f032;
case 0x46f034:goto L46f034;
case 0x46f036:c.instructions+=1;goto B46f036;
case 0x46f03b:goto L46f03b;
case 0x46f03c:c.instructions+=2;goto B46f03c;
case 0x46f03d:c.instructions+=1;goto B46f03d;
case 0x46f040:goto L46f040;
case 0x46f046:c.instructions+=1;goto B46f046;
case 0x46f04b:goto L46f04b;
case 0x46f051:c.instructions+=5;goto B46f051;
case 0x46f054:c.instructions+=4;goto B46f054;
case 0x46f05a:c.instructions+=3;goto B46f05a;
case 0x46f05d:c.instructions+=2;goto B46f05d;
case 0x46f063:c.instructions+=1;goto B46f063;
case 0x46f068:goto L46f068;
case 0x46f06e:c.instructions+=3;goto B46f06e;
case 0x46f071:c.instructions+=2;goto B46f071;
case 0x46f077:c.instructions+=1;goto B46f077;
case 0x46f078:goto L46f078;
case 0x46f079:c.instructions+=1;goto B46f079;
case 0x46f080:goto L46f080;
case 0x46f083:c.instructions+=4;goto B46f083;
case 0x46f086:c.instructions+=3;goto B46f086;
case 0x46f08c:c.instructions+=2;goto B46f08c;
case 0x46f08f:c.instructions+=1;goto B46f08f;
case 0x46f095:goto L46f095;
case 0x46f098:c.instructions+=2;goto B46f098;
case 0x46f09e:c.instructions+=1;goto B46f09e;
case 0x46f0a0:goto L46f0a0;
case 0x46f0a2:c.instructions+=1;goto B46f0a2;
case 0x46f0a8:goto L46f0a8;
case 0x46f0ab:c.instructions+=1;goto B46f0ab;
case 0x46f0ad:goto L46f0ad;
case 0x46f0af:c.instructions+=1;goto B46f0af;
case 0x46f0b5:goto L46f0b5;
case 0x46f0b8:c.instructions+=9;goto B46f0b8;
case 0x46f0c2:c.instructions+=8;goto B46f0c2;
case 0x46f0c5:c.instructions+=7;goto B46f0c5;
case 0x46f0c8:c.instructions+=6;goto B46f0c8;
case 0x46f0ce:c.instructions+=5;goto B46f0ce;
case 0x46f0d4:c.instructions+=4;goto B46f0d4;
case 0x46f0da:c.instructions+=3;goto B46f0da;
case 0x46f0dc:c.instructions+=2;goto B46f0dc;
case 0x46f0df:c.instructions+=1;goto B46f0df;
case 0x46f0e1:goto L46f0e1;
case 0x46f0eb:goto L46f0eb;
case 0x46f0f1:c.instructions+=15;goto B46f0f1;
case 0x46f0f3:c.instructions+=14;goto B46f0f3;
case 0x46f0f9:c.instructions+=13;goto B46f0f9;
case 0x46f0ff:c.instructions+=12;goto B46f0ff;
case 0x46f105:c.instructions+=11;goto B46f105;
case 0x46f10b:c.instructions+=10;goto B46f10b;
case 0x46f111:c.instructions+=9;goto B46f111;
case 0x46f114:c.instructions+=8;goto B46f114;
case 0x46f117:c.instructions+=7;goto B46f117;
case 0x46f11a:c.instructions+=6;goto B46f11a;
case 0x46f120:c.instructions+=5;goto B46f120;
case 0x46f126:c.instructions+=4;goto B46f126;
case 0x46f12c:c.instructions+=3;goto B46f12c;
case 0x46f12e:c.instructions+=2;goto B46f12e;
case 0x46f131:c.instructions+=1;goto B46f131;
case 0x46f133:goto L46f133;
case 0x46f13d:goto L46f13d;
case 0x46f143:c.instructions+=5;goto B46f143;
case 0x46f149:c.instructions+=4;goto B46f149;
case 0x46f14f:c.instructions+=3;goto B46f14f;
case 0x46f155:c.instructions+=2;goto B46f155;
case 0x46f15b:c.instructions+=1;goto B46f15b;
case 0x46f161:goto L46f161;
case 0x46f170:goto L46f170;
case 0x46f175:c.instructions+=2;goto B46f175;
case 0x46f176:c.instructions+=1;goto B46f176;
case 0x46f17b:goto L46f17b;
case 0x46f17e:c.instructions+=2;goto B46f17e;
case 0x46f183:c.instructions+=1;goto B46f183;
case 0x46f185:goto L46f185;
case 0x46f18b:c.instructions+=5;goto B46f18b;
case 0x46f18e:c.instructions+=4;goto B46f18e;
case 0x46f194:c.instructions+=3;goto B46f194;
case 0x46f195:c.instructions+=2;goto B46f195;
case 0x46f19a:c.instructions+=1;goto B46f19a;
case 0x46f19f:goto L46f19f;
case 0x46f1a2:c.instructions+=2;goto B46f1a2;
case 0x46f1a4:c.instructions+=1;goto B46f1a4;
case 0x46f1a6:goto L46f1a6;
case 0x46f1a8:c.instructions+=1;goto B46f1a8;
case 0x46f1ad:goto L46f1ad;
case 0x46f1af:c.instructions+=1;goto B46f1af;
case 0x46f1b0:goto L46f1b0;
case 0x46f1b1:c.instructions+=16;goto B46f1b1;
case 0x46f1b3:c.instructions+=15;goto B46f1b3;
case 0x46f1b6:c.instructions+=14;goto B46f1b6;
case 0x46f1b8:c.instructions+=13;goto B46f1b8;
case 0x46f1bd:c.instructions+=12;goto B46f1bd;
case 0x46f1c3:c.instructions+=11;goto B46f1c3;
case 0x46f1c4:c.instructions+=10;goto B46f1c4;
case 0x46f1cb:c.instructions+=9;goto B46f1cb;
case 0x46f1ce:c.instructions+=8;goto B46f1ce;
case 0x46f1cf:c.instructions+=7;goto B46f1cf;
case 0x46f1d0:c.instructions+=6;goto B46f1d0;
case 0x46f1d2:c.instructions+=5;goto B46f1d2;
case 0x46f1d6:c.instructions+=4;goto B46f1d6;
case 0x46f1dc:c.instructions+=3;goto B46f1dc;
case 0x46f1df:c.instructions+=2;goto B46f1df;
case 0x46f1e4:c.instructions+=1;goto B46f1e4;
case 0x46f1e6:goto L46f1e6;
case 0x46f1e8:c.instructions+=4;goto B46f1e8;
case 0x46f1eb:c.instructions+=3;goto B46f1eb;
case 0x46f1ec:c.instructions+=2;goto B46f1ec;
case 0x46f1f0:c.instructions+=1;goto B46f1f0;
case 0x46f1f2:goto L46f1f2;
case 0x46f1f5:c.instructions+=9;goto B46f1f5;
case 0x46f1f8:c.instructions+=8;goto B46f1f8;
case 0x46f1fb:c.instructions+=7;goto B46f1fb;
case 0x46f1fe:c.instructions+=6;goto B46f1fe;
case 0x46f201:c.instructions+=5;goto B46f201;
case 0x46f203:c.instructions+=4;goto B46f203;
case 0x46f209:c.instructions+=3;goto B46f209;
case 0x46f20d:c.instructions+=2;goto B46f20d;
case 0x46f213:c.instructions+=1;goto B46f213;
case 0x46f218:goto L46f218;
case 0x46f21a:c.instructions+=3;goto B46f21a;
case 0x46f220:c.instructions+=2;goto B46f220;
case 0x46f225:c.instructions+=1;goto B46f225;
case 0x46f22a:goto L46f22a;
case 0x46f230:c.instructions+=20;goto B46f230;
case 0x46f236:c.instructions+=19;goto B46f236;
case 0x46f23c:c.instructions+=18;goto B46f23c;
case 0x46f242:c.instructions+=17;goto B46f242;
case 0x46f248:c.instructions+=16;goto B46f248;
case 0x46f24e:c.instructions+=15;goto B46f24e;
case 0x46f255:c.instructions+=14;goto B46f255;
case 0x46f25b:c.instructions+=13;goto B46f25b;
case 0x46f261:c.instructions+=12;goto B46f261;
case 0x46f267:c.instructions+=11;goto B46f267;
case 0x46f26d:c.instructions+=10;goto B46f26d;
case 0x46f273:c.instructions+=9;goto B46f273;
case 0x46f279:c.instructions+=8;goto B46f279;
case 0x46f27f:c.instructions+=7;goto B46f27f;
case 0x46f286:c.instructions+=6;goto B46f286;
case 0x46f289:c.instructions+=5;goto B46f289;
case 0x46f28b:c.instructions+=4;goto B46f28b;
case 0x46f28e:c.instructions+=3;goto B46f28e;
case 0x46f291:c.instructions+=2;goto B46f291;
case 0x46f293:c.instructions+=1;goto B46f293;
case 0x46f296:goto L46f296;
case 0x46f299:c.instructions+=8;goto B46f299;
case 0x46f29b:c.instructions+=7;goto B46f29b;
case 0x46f29e:c.instructions+=6;goto B46f29e;
case 0x46f2a2:c.instructions+=5;goto B46f2a2;
case 0x46f2a5:c.instructions+=4;goto B46f2a5;
case 0x46f2a6:c.instructions+=3;goto B46f2a6;
case 0x46f2a9:c.instructions+=2;goto B46f2a9;
case 0x46f2ac:c.instructions+=1;goto B46f2ac;
case 0x46f2ae:goto L46f2ae;
case 0x46f2b2:c.instructions+=32;goto B46f2b2;
case 0x46f2b8:c.instructions+=31;goto B46f2b8;
case 0x46f2be:c.instructions+=30;goto B46f2be;
case 0x46f2c4:c.instructions+=29;goto B46f2c4;
case 0x46f2ca:c.instructions+=28;goto B46f2ca;
case 0x46f2d0:c.instructions+=27;goto B46f2d0;
case 0x46f2d6:c.instructions+=26;goto B46f2d6;
case 0x46f2dd:c.instructions+=25;goto B46f2dd;
case 0x46f2e0:c.instructions+=24;goto B46f2e0;
case 0x46f2e3:c.instructions+=23;goto B46f2e3;
case 0x46f2e6:c.instructions+=22;goto B46f2e6;
case 0x46f2ec:c.instructions+=21;goto B46f2ec;
case 0x46f2f2:c.instructions+=20;goto B46f2f2;
case 0x46f2fc:c.instructions+=19;goto B46f2fc;
case 0x46f302:c.instructions+=18;goto B46f302;
case 0x46f308:c.instructions+=17;goto B46f308;
case 0x46f30e:c.instructions+=16;goto B46f30e;
case 0x46f313:c.instructions+=15;goto B46f313;
case 0x46f319:c.instructions+=14;goto B46f319;
case 0x46f31f:c.instructions+=13;goto B46f31f;
case 0x46f325:c.instructions+=12;goto B46f325;
case 0x46f327:c.instructions+=11;goto B46f327;
case 0x46f328:c.instructions+=10;goto B46f328;
case 0x46f332:c.instructions+=9;goto B46f332;
case 0x46f338:c.instructions+=8;goto B46f338;
case 0x46f33e:c.instructions+=7;goto B46f33e;
case 0x46f344:c.instructions+=6;goto B46f344;
case 0x46f34a:c.instructions+=5;goto B46f34a;
case 0x46f350:c.instructions+=4;goto B46f350;
case 0x46f356:c.instructions+=3;goto B46f356;
case 0x46f357:c.instructions+=2;goto B46f357;
case 0x46f35e:c.instructions+=1;goto B46f35e;
case 0x46f363:goto L46f363;
case 0x46f367:c.instructions+=17;goto B46f367;
case 0x46f36d:c.instructions+=16;goto B46f36d;
case 0x46f373:c.instructions+=15;goto B46f373;
case 0x46f379:c.instructions+=14;goto B46f379;
case 0x46f37f:c.instructions+=13;goto B46f37f;
case 0x46f385:c.instructions+=12;goto B46f385;
case 0x46f38b:c.instructions+=11;goto B46f38b;
case 0x46f395:c.instructions+=10;goto B46f395;
case 0x46f39b:c.instructions+=9;goto B46f39b;
case 0x46f3a1:c.instructions+=8;goto B46f3a1;
case 0x46f3a7:c.instructions+=7;goto B46f3a7;
case 0x46f3a9:c.instructions+=6;goto B46f3a9;
case 0x46f3aa:c.instructions+=5;goto B46f3aa;
case 0x46f3b1:c.instructions+=4;goto B46f3b1;
case 0x46f3b2:c.instructions+=3;goto B46f3b2;
case 0x46f3b4:c.instructions+=2;goto B46f3b4;
case 0x46f3b5:c.instructions+=1;goto B46f3b5;
case 0x46f3c0:goto L46f3c0;
case 0x46f3c1:c.instructions+=2;goto B46f3c1;
case 0x46f3c3:c.instructions+=1;goto B46f3c3;
case 0x46f3c8:goto L46f3c8;
case 0x46f3cd:c.instructions+=1;goto B46f3cd;
case 0x46f3cf:goto L46f3cf;
case 0x46f3d0:c.instructions+=1;goto B46f3d0;
case 0x46f3d5:goto L46f3d5;
case 0x46f3d8:goto L46f3d8;
case 0x46f3da:c.instructions+=2;goto B46f3da;
case 0x46f3db:c.instructions+=1;goto B46f3db;
case 0x46f3e0:goto L46f3e0;
case 0x46f3e1:c.instructions+=6;goto B46f3e1;
case 0x46f3e5:c.instructions+=5;goto B46f3e5;
case 0x46f3e7:c.instructions+=4;goto B46f3e7;
case 0x46f3e8:c.instructions+=3;goto B46f3e8;
case 0x46f3ea:c.instructions+=2;goto B46f3ea;
case 0x46f3ec:c.instructions+=1;goto B46f3ec;
case 0x46f3ef:goto L46f3ef;
case 0x46f3f1:c.instructions+=4;goto B46f3f1;
case 0x46f3f4:c.instructions+=3;goto B46f3f4;
case 0x46f3f9:c.instructions+=2;goto B46f3f9;
case 0x46f3fc:c.instructions+=1;goto B46f3fc;
case 0x46f3fe:goto L46f3fe;
case 0x46f405:goto L46f405;
case 0x46f408:c.instructions+=3;goto B46f408;
case 0x46f409:c.instructions+=2;goto B46f409;
case 0x46f40a:c.instructions+=1;goto B46f40a;
case 0x46f40d:goto L46f40d;
case 0x46f410:c.instructions+=3;goto B46f410;
case 0x46f411:c.instructions+=2;goto B46f411;
case 0x46f412:c.instructions+=1;goto B46f412;
case 0x46f415:goto L46f415;
case 0x46f418:c.instructions+=3;goto B46f418;
case 0x46f419:c.instructions+=2;goto B46f419;
case 0x46f41a:c.instructions+=1;goto B46f41a;
case 0x46f41d:goto L46f41d;
case 0x46f420:c.instructions+=3;goto B46f420;
case 0x46f421:c.instructions+=2;goto B46f421;
case 0x46f422:c.instructions+=1;goto B46f422;
case 0x46f425:goto L46f425;
case 0x46f42a:c.instructions+=2;goto B46f42a;
case 0x46f42c:c.instructions+=1;goto B46f42c;
case 0x46f431:goto L46f431;
case 0x46f434:c.instructions+=3;goto B46f434;
case 0x46f435:c.instructions+=2;goto B46f435;
case 0x46f436:c.instructions+=1;goto B46f436;
case 0x46f460:goto L46f460;
case 0x46f461:c.instructions+=8;goto B46f461;
case 0x46f467:c.instructions+=7;goto B46f467;
case 0x46f468:c.instructions+=6;goto B46f468;
case 0x46f46a:c.instructions+=5;goto B46f46a;
case 0x46f46d:c.instructions+=4;goto B46f46d;
case 0x46f470:c.instructions+=3;goto B46f470;
case 0x46f473:c.instructions+=2;goto B46f473;
case 0x46f477:c.instructions+=1;goto B46f477;
case 0x46f479:goto L46f479;
case 0x46f47f:c.instructions+=2;goto B46f47f;
case 0x46f481:c.instructions+=1;goto B46f481;
case 0x46f483:goto L46f483;
case 0x46f486:c.instructions+=2;goto B46f486;
case 0x46f488:c.instructions+=1;goto B46f488;
case 0x46f48a:goto L46f48a;
case 0x46f48d:c.instructions+=2;goto B46f48d;
case 0x46f48f:c.instructions+=1;goto B46f48f;
case 0x46f491:goto L46f491;
case 0x46f494:c.instructions+=1;goto B46f494;
case 0x46f496:goto L46f496;
case 0x46f499:c.instructions+=1;goto B46f499;
case 0x46f49b:goto L46f49b;
case 0x46f49d:c.instructions+=1;goto B46f49d;
case 0x46f4a3:goto L46f4a3;
case 0x46f4a6:c.instructions+=10;goto B46f4a6;
case 0x46f4a9:c.instructions+=9;goto B46f4a9;
case 0x46f4af:c.instructions+=8;goto B46f4af;
case 0x46f4b1:c.instructions+=7;goto B46f4b1;
case 0x46f4b5:c.instructions+=6;goto B46f4b5;
case 0x46f4b7:c.instructions+=5;goto B46f4b7;
case 0x46f4bb:c.instructions+=4;goto B46f4bb;
case 0x46f4c1:c.instructions+=3;goto B46f4c1;
case 0x46f4c3:c.instructions+=2;goto B46f4c3;
case 0x46f4c6:c.instructions+=1;goto B46f4c6;
case 0x46f4cc:goto L46f4cc;
case 0x46f4d0:c.instructions+=5;goto B46f4d0;
case 0x46f4d6:c.instructions+=4;goto B46f4d6;
case 0x46f4da:c.instructions+=3;goto B46f4da;
case 0x46f4dc:c.instructions+=2;goto B46f4dc;
case 0x46f4df:c.instructions+=1;goto B46f4df;
case 0x46f4e1:goto L46f4e1;
case 0x46f4e3:c.instructions+=1;goto B46f4e3;
case 0x46f4e9:goto L46f4e9;
case 0x46f4ef:c.instructions+=1;goto B46f4ef;
case 0x46f4f4:goto L46f4f4;
case 0x46f4f6:c.instructions+=3;goto B46f4f6;
case 0x46f4f7:c.instructions+=2;goto B46f4f7;
case 0x46f4f9:c.instructions+=1;goto B46f4f9;
case 0x46f4fe:goto L46f4fe;
case 0x46f500:c.instructions+=3;goto B46f500;
case 0x46f503:c.instructions+=2;goto B46f503;
case 0x46f508:c.instructions+=1;goto B46f508;
case 0x46f50a:goto L46f50a;
case 0x46f50f:goto L46f50f;
case 0x46f510:c.instructions+=1;goto B46f510;
case 0x46f515:goto L46f515;
case 0x46f519:c.instructions+=8;goto B46f519;
case 0x46f51d:c.instructions+=7;goto B46f51d;
case 0x46f520:c.instructions+=6;goto B46f520;
case 0x46f526:c.instructions+=5;goto B46f526;
case 0x46f52c:c.instructions+=4;goto B46f52c;
case 0x46f532:c.instructions+=3;goto B46f532;
case 0x46f534:c.instructions+=2;goto B46f534;
case 0x46f53a:c.instructions+=1;goto B46f53a;
case 0x46f53f:goto L46f53f;
case 0x46f541:c.instructions+=2;goto B46f541;
case 0x46f547:c.instructions+=1;goto B46f547;
case 0x46f549:goto L46f549;
case 0x46f54b:c.instructions+=4;goto B46f54b;
case 0x46f551:c.instructions+=3;goto B46f551;
case 0x46f552:c.instructions+=2;goto B46f552;
case 0x46f553:c.instructions+=1;goto B46f553;
case 0x46f554:goto L46f554;
case 0x46f55a:c.instructions+=1;goto B46f55a;
case 0x46f55c:goto L46f55c;
case 0x46f561:c.instructions+=1;goto B46f561;
case 0x46f563:goto L46f563;
case 0x46f568:goto L46f568;
case 0x46f56e:c.instructions+=3;goto B46f56e;
case 0x46f56f:c.instructions+=2;goto B46f56f;
case 0x46f570:c.instructions+=1;goto B46f570;
case 0x46f580:goto L46f580;
case 0x46f584:c.instructions+=8;goto B46f584;
case 0x46f585:c.instructions+=7;goto B46f585;
case 0x46f586:c.instructions+=6;goto B46f586;
case 0x46f588:c.instructions+=5;goto B46f588;
case 0x46f58e:c.instructions+=4;goto B46f58e;
case 0x46f58f:c.instructions+=3;goto B46f58f;
case 0x46f591:c.instructions+=2;goto B46f591;
case 0x46f598:c.instructions+=1;goto B46f598;
case 0x46f59d:goto L46f59d;
case 0x46f5a3:c.instructions+=2;goto B46f5a3;
case 0x46f5a5:c.instructions+=1;goto B46f5a5;
case 0x46f5a7:goto L46f5a7;
case 0x46f5a8:c.instructions+=3;goto B46f5a8;
case 0x46f5a9:c.instructions+=2;goto B46f5a9;
case 0x46f5ab:c.instructions+=1;goto B46f5ab;
case 0x46f5b0:goto L46f5b0;
case 0x46f5b6:c.instructions+=4;goto B46f5b6;
case 0x46f5b8:c.instructions+=3;goto B46f5b8;
case 0x46f5b9:c.instructions+=2;goto B46f5b9;
case 0x46f5bc:c.instructions+=1;goto B46f5bc;
case 0x46f5c1:goto L46f5c1;
case 0x46f5c7:c.instructions+=4;goto B46f5c7;
case 0x46f5ca:c.instructions+=3;goto B46f5ca;
case 0x46f5cc:c.instructions+=2;goto B46f5cc;
case 0x46f5d0:c.instructions+=1;goto B46f5d0;
case 0x46f5d5:goto L46f5d5;
case 0x46f5d9:c.instructions+=5;goto B46f5d9;
case 0x46f5db:c.instructions+=4;goto B46f5db;
case 0x46f5dc:c.instructions+=3;goto B46f5dc;
case 0x46f5dd:c.instructions+=2;goto B46f5dd;
case 0x46f5df:c.instructions+=1;goto B46f5df;
case 0x46f5e4:goto L46f5e4;
case 0x46f5e6:c.instructions+=4;goto B46f5e6;
case 0x46f5e7:c.instructions+=3;goto B46f5e7;
case 0x46f5e9:c.instructions+=2;goto B46f5e9;
case 0x46f5ea:c.instructions+=1;goto B46f5ea;
case 0x46f5ef:goto L46f5ef;
case 0x46f5f0:c.instructions+=3;goto B46f5f0;
case 0x46f5f7:c.instructions+=2;goto B46f5f7;
case 0x46f5fe:c.instructions+=1;goto B46f5fe;
case 0x46f5ff:goto L46f5ff;
case 0x46f600:c.instructions+=2;goto B46f600;
case 0x46f601:c.instructions+=1;goto B46f601;
case 0x46f610:goto L46f610;
case 0x46f611:c.instructions+=5;goto B46f611;
case 0x46f612:c.instructions+=4;goto B46f612;
case 0x46f614:c.instructions+=3;goto B46f614;
case 0x46f617:c.instructions+=2;goto B46f617;
case 0x46f61b:c.instructions+=1;goto B46f61b;
case 0x46f621:goto L46f621;
case 0x46f627:c.instructions+=2;goto B46f627;
case 0x46f629:c.instructions+=1;goto B46f629;
case 0x46f62f:goto L46f62f;
case 0x46f632:c.instructions+=3;goto B46f632;
case 0x46f635:c.instructions+=2;goto B46f635;
case 0x46f638:c.instructions+=1;goto B46f638;
case 0x46f63e:goto L46f63e;
case 0x46f640:c.instructions+=1;goto B46f640;
case 0x46f646:goto L46f646;
case 0x46f648:c.instructions+=2;goto B46f648;
case 0x46f64a:c.instructions+=1;goto B46f64a;
case 0x46f64d:goto L46f64d;
case 0x46f653:c.instructions+=3;goto B46f653;
case 0x46f655:c.instructions+=2;goto B46f655;
case 0x46f658:c.instructions+=1;goto B46f658;
case 0x46f65e:goto L46f65e;
case 0x46f661:c.instructions+=5;goto B46f661;
case 0x46f668:c.instructions+=4;goto B46f668;
case 0x46f66b:c.instructions+=3;goto B46f66b;
case 0x46f670:c.instructions+=2;goto B46f670;
case 0x46f676:c.instructions+=1;goto B46f676;
case 0x46f67b:goto L46f67b;
case 0x46f681:c.instructions+=6;goto B46f681;
case 0x46f687:c.instructions+=5;goto B46f687;
case 0x46f68d:c.instructions+=4;goto B46f68d;
case 0x46f691:c.instructions+=3;goto B46f691;
case 0x46f693:c.instructions+=2;goto B46f693;
case 0x46f697:c.instructions+=1;goto B46f697;
case 0x46f69c:goto L46f69c;
case 0x46f6a2:c.instructions+=8;goto B46f6a2;
case 0x46f6a8:c.instructions+=7;goto B46f6a8;
case 0x46f6ae:c.instructions+=6;goto B46f6ae;
case 0x46f6af:c.instructions+=5;goto B46f6af;
case 0x46f6b0:c.instructions+=4;goto B46f6b0;
case 0x46f6b3:c.instructions+=3;goto B46f6b3;
case 0x46f6b4:c.instructions+=2;goto B46f6b4;
case 0x46f6ba:c.instructions+=1;goto B46f6ba;
case 0x46f6bf:goto L46f6bf;
case 0x46f6c5:c.instructions+=5;goto B46f6c5;
case 0x46f6cb:c.instructions+=4;goto B46f6cb;
case 0x46f6cd:c.instructions+=3;goto B46f6cd;
case 0x46f6d3:c.instructions+=2;goto B46f6d3;
case 0x46f6d7:c.instructions+=1;goto B46f6d7;
case 0x46f6dc:goto L46f6dc;
case 0x46f6e2:c.instructions+=6;goto B46f6e2;
case 0x46f6e3:c.instructions+=5;goto B46f6e3;
case 0x46f6e8:c.instructions+=4;goto B46f6e8;
case 0x46f6e9:c.instructions+=3;goto B46f6e9;
case 0x46f6ea:c.instructions+=2;goto B46f6ea;
case 0x46f6f0:c.instructions+=1;goto B46f6f0;
case 0x46f6f5:goto L46f6f5;
case 0x46f6fc:c.instructions+=2;goto B46f6fc;
case 0x46f706:c.instructions+=1;goto B46f706;
case 0x46f70b:goto L46f70b;
case 0x46f70d:c.instructions+=1;goto B46f70d;
case 0x46f713:goto L46f713;
case 0x46f715:c.instructions+=2;goto B46f715;
case 0x46f717:c.instructions+=1;goto B46f717;
case 0x46f71a:goto L46f71a;
case 0x46f720:c.instructions+=3;goto B46f720;
case 0x46f722:c.instructions+=2;goto B46f722;
case 0x46f725:c.instructions+=1;goto B46f725;
case 0x46f727:goto L46f727;
case 0x46f72a:c.instructions+=3;goto B46f72a;
case 0x46f72d:c.instructions+=2;goto B46f72d;
case 0x46f730:c.instructions+=1;goto B46f730;
case 0x46f732:goto L46f732;
case 0x46f734:c.instructions+=1;goto B46f734;
case 0x46f736:goto L46f736;
case 0x46f73c:c.instructions+=2;goto B46f73c;
case 0x46f73e:c.instructions+=1;goto B46f73e;
case 0x46f740:goto L46f740;
case 0x46f746:c.instructions+=5;goto B46f746;
case 0x46f74d:c.instructions+=4;goto B46f74d;
case 0x46f753:c.instructions+=3;goto B46f753;
case 0x46f755:c.instructions+=2;goto B46f755;
case 0x46f75b:c.instructions+=1;goto B46f75b;
case 0x46f760:goto L46f760;
case 0x46f761:c.instructions+=5;goto B46f761;
case 0x46f767:c.instructions+=4;goto B46f767;
case 0x46f76c:c.instructions+=3;goto B46f76c;
case 0x46f76d:c.instructions+=2;goto B46f76d;
case 0x46f773:c.instructions+=1;goto B46f773;
case 0x46f778:goto L46f778;
case 0x46f77e:c.instructions+=3;goto B46f77e;
case 0x46f784:c.instructions+=2;goto B46f784;
case 0x46f786:c.instructions+=1;goto B46f786;
case 0x46f78b:goto L46f78b;
case 0x46f791:c.instructions+=5;goto B46f791;
case 0x46f792:c.instructions+=4;goto B46f792;
case 0x46f794:c.instructions+=3;goto B46f794;
case 0x46f795:c.instructions+=2;goto B46f795;
case 0x46f79b:c.instructions+=1;goto B46f79b;
case 0x46f7a0:goto L46f7a0;
case 0x46f7a1:c.instructions+=4;goto B46f7a1;
case 0x46f7a5:c.instructions+=3;goto B46f7a5;
case 0x46f7a6:c.instructions+=2;goto B46f7a6;
case 0x46f7ac:c.instructions+=1;goto B46f7ac;
case 0x46f7b1:goto L46f7b1;
case 0x46f7b2:c.instructions+=2;goto B46f7b2;
case 0x46f7b8:c.instructions+=1;goto B46f7b8;
case 0x46f7bd:goto L46f7bd;
case 0x46f7be:goto L46f7be;
case 0x46f7bf:c.instructions+=2;goto B46f7bf;
case 0x46f7c0:c.instructions+=1;goto B46f7c0;
case 0x46f7d0:goto L46f7d0;
case 0x46f7d3:c.instructions+=6;goto B46f7d3;
case 0x46f7d4:c.instructions+=5;goto B46f7d4;
case 0x46f7d6:c.instructions+=4;goto B46f7d6;
case 0x46f7d9:c.instructions+=3;goto B46f7d9;
case 0x46f7db:c.instructions+=2;goto B46f7db;
case 0x46f7dc:c.instructions+=1;goto B46f7dc;
case 0x46f7de:goto L46f7de;
case 0x46f7e1:c.instructions+=2;goto B46f7e1;
case 0x46f7e4:c.instructions+=1;goto B46f7e4;
case 0x46f7e6:goto L46f7e6;
case 0x46f7e8:c.instructions+=1;goto B46f7e8;
case 0x46f7ea:goto L46f7ea;
case 0x46f7f0:c.instructions+=2;goto B46f7f0;
case 0x46f7f4:c.instructions+=1;goto B46f7f4;
case 0x46f7f6:goto L46f7f6;
case 0x46f7f9:c.instructions+=2;goto B46f7f9;
case 0x46f7fb:c.instructions+=1;goto B46f7fb;
case 0x46f7fd:goto L46f7fd;
case 0x46f803:c.instructions+=2;goto B46f803;
case 0x46f805:c.instructions+=1;goto B46f805;
case 0x46f807:goto L46f807;
case 0x46f80d:c.instructions+=1;goto B46f80d;
case 0x46f80f:goto L46f80f;
case 0x46f812:c.instructions+=1;goto B46f812;
case 0x46f815:goto L46f815;
case 0x46f819:goto L46f819;
case 0x46f81f:c.instructions+=2;goto B46f81f;
case 0x46f821:c.instructions+=1;goto B46f821;
case 0x46f823:goto L46f823;
case 0x46f826:c.instructions+=2;goto B46f826;
case 0x46f829:c.instructions+=1;goto B46f829;
case 0x46f82b:goto L46f82b;
case 0x46f82d:c.instructions+=1;goto B46f82d;
case 0x46f82f:goto L46f82f;
case 0x46f832:c.instructions+=7;goto B46f832;
case 0x46f835:c.instructions+=6;goto B46f835;
case 0x46f83b:c.instructions+=5;goto B46f83b;
case 0x46f83d:c.instructions+=4;goto B46f83d;
case 0x46f841:c.instructions+=3;goto B46f841;
case 0x46f843:c.instructions+=2;goto B46f843;
case 0x46f847:c.instructions+=1;goto B46f847;
case 0x46f84a:goto L46f84a;
case 0x46f84e:c.instructions+=6;goto B46f84e;
case 0x46f854:c.instructions+=5;goto B46f854;
case 0x46f858:c.instructions+=4;goto B46f858;
case 0x46f85a:c.instructions+=3;goto B46f85a;
case 0x46f85c:c.instructions+=2;goto B46f85c;
case 0x46f85f:c.instructions+=1;goto B46f85f;
case 0x46f861:goto L46f861;
case 0x46f863:c.instructions+=7;goto B46f863;
case 0x46f867:c.instructions+=6;goto B46f867;
case 0x46f86b:c.instructions+=5;goto B46f86b;
case 0x46f86f:c.instructions+=4;goto B46f86f;
case 0x46f871:c.instructions+=3;goto B46f871;
case 0x46f873:c.instructions+=2;goto B46f873;
case 0x46f876:c.instructions+=1;goto B46f876;
case 0x46f878:goto L46f878;
case 0x46f87a:c.instructions+=1;goto B46f87a;
case 0x46f87e:goto L46f87e;
case 0x46f882:goto L46f882;
case 0x46f886:c.instructions+=12;goto B46f886;
case 0x46f88a:c.instructions+=11;goto B46f88a;
case 0x46f890:c.instructions+=10;goto B46f890;
case 0x46f896:c.instructions+=9;goto B46f896;
case 0x46f89a:c.instructions+=8;goto B46f89a;
case 0x46f89d:c.instructions+=7;goto B46f89d;
case 0x46f8a3:c.instructions+=6;goto B46f8a3;
case 0x46f8a9:c.instructions+=5;goto B46f8a9;
case 0x46f8af:c.instructions+=4;goto B46f8af;
case 0x46f8b5:c.instructions+=3;goto B46f8b5;
case 0x46f8b8:c.instructions+=2;goto B46f8b8;
case 0x46f8bb:c.instructions+=1;goto B46f8bb;
case 0x46f8c1:goto L46f8c1;
case 0x46f8c4:c.instructions+=1;goto B46f8c4;
case 0x46f8ca:goto L46f8ca;
case 0x46f8cd:c.instructions+=2;goto B46f8cd;
case 0x46f8d4:c.instructions+=1;goto B46f8d4;
case 0x46f8d6:goto L46f8d6;
case 0x46f8d9:c.instructions+=2;goto B46f8d9;
case 0x46f8dc:c.instructions+=1;goto B46f8dc;
case 0x46f8e1:goto L46f8e1;
case 0x46f8e7:c.instructions+=2;goto B46f8e7;
case 0x46f8e9:c.instructions+=1;goto B46f8e9;
case 0x46f8ef:goto L46f8ef;
case 0x46f8f5:c.instructions+=3;goto B46f8f5;
case 0x46f8f7:c.instructions+=2;goto B46f8f7;
case 0x46f8fc:c.instructions+=1;goto B46f8fc;
case 0x46f8fe:goto L46f8fe;
case 0x46f904:c.instructions+=3;goto B46f904;
case 0x46f909:c.instructions+=2;goto B46f909;
case 0x46f90a:c.instructions+=1;goto B46f90a;
case 0x46f90f:goto L46f90f;
case 0x46f915:c.instructions+=5;goto B46f915;
case 0x46f91b:c.instructions+=4;goto B46f91b;
case 0x46f91e:c.instructions+=3;goto B46f91e;
case 0x46f920:c.instructions+=2;goto B46f920;
case 0x46f923:c.instructions+=1;goto B46f923;
case 0x46f925:goto L46f925;
case 0x46f929:c.instructions+=4;goto B46f929;
case 0x46f930:c.instructions+=3;goto B46f930;
case 0x46f936:c.instructions+=2;goto B46f936;
case 0x46f93a:c.instructions+=1;goto B46f93a;
case 0x46f93c:goto L46f93c;
case 0x46f942:c.instructions+=3;goto B46f942;
case 0x46f944:c.instructions+=2;goto B46f944;
case 0x46f945:c.instructions+=1;goto B46f945;
case 0x46f94a:goto L46f94a;
case 0x46f950:c.instructions+=5;goto B46f950;
case 0x46f956:c.instructions+=4;goto B46f956;
case 0x46f959:c.instructions+=3;goto B46f959;
case 0x46f95b:c.instructions+=2;goto B46f95b;
case 0x46f95e:c.instructions+=1;goto B46f95e;
case 0x46f960:goto L46f960;
case 0x46f967:goto L46f967;
case 0x46f96b:c.instructions+=3;goto B46f96b;
case 0x46f971:c.instructions+=2;goto B46f971;
case 0x46f975:c.instructions+=1;goto B46f975;
case 0x46f977:goto L46f977;
case 0x46f97d:goto L46f97d;
case 0x46f981:goto L46f981;
case 0x46f985:c.instructions+=4;goto B46f985;
case 0x46f98b:c.instructions+=3;goto B46f98b;
case 0x46f98c:c.instructions+=2;goto B46f98c;
case 0x46f98e:c.instructions+=1;goto B46f98e;
case 0x46f993:goto L46f993;
case 0x46f995:c.instructions+=2;goto B46f995;
case 0x46f997:c.instructions+=1;goto B46f997;
case 0x46f99a:goto L46f99a;
case 0x46f9a0:c.instructions+=13;goto B46f9a0;
case 0x46f9a3:c.instructions+=12;goto B46f9a3;
case 0x46f9a9:c.instructions+=11;goto B46f9a9;
case 0x46f9aa:c.instructions+=10;goto B46f9aa;
case 0x46f9b0:c.instructions+=9;goto B46f9b0;
case 0x46f9b3:c.instructions+=8;goto B46f9b3;
case 0x46f9b6:c.instructions+=7;goto B46f9b6;
case 0x46f9b8:c.instructions+=6;goto B46f9b8;
case 0x46f9bb:c.instructions+=5;goto B46f9bb;
case 0x46f9be:c.instructions+=4;goto B46f9be;
case 0x46f9bf:c.instructions+=3;goto B46f9bf;
case 0x46f9c2:c.instructions+=2;goto B46f9c2;
case 0x46f9c5:c.instructions+=1;goto B46f9c5;
case 0x46f9d0:goto L46f9d0;
case 0x46f9d1:c.instructions+=6;goto B46f9d1;
case 0x46f9d3:c.instructions+=5;goto B46f9d3;
case 0x46f9d6:c.instructions+=4;goto B46f9d6;
case 0x46f9d9:c.instructions+=3;goto B46f9d9;
case 0x46f9dc:c.instructions+=2;goto B46f9dc;
case 0x46f9e0:c.instructions+=1;goto B46f9e0;
case 0x46f9e2:goto L46f9e2;
case 0x46f9e8:c.instructions+=2;goto B46f9e8;
case 0x46f9ea:c.instructions+=1;goto B46f9ea;
case 0x46f9ec:goto L46f9ec;
case 0x46f9ef:c.instructions+=3;goto B46f9ef;
case 0x46f9f5:c.instructions+=2;goto B46f9f5;
case 0x46f9f7:c.instructions+=1;goto B46f9f7;
case 0x46f9f9:goto L46f9f9;
case 0x46f9fb:c.instructions+=2;goto B46f9fb;
case 0x46f9fd:c.instructions+=1;goto B46f9fd;
case 0x46fa00:goto L46fa00;
case 0x46fa06:c.instructions+=3;goto B46fa06;
case 0x46fa08:c.instructions+=2;goto B46fa08;
case 0x46fa0b:c.instructions+=1;goto B46fa0b;
case 0x46fa0d:goto L46fa0d;
case 0x46fa0f:c.instructions+=3;goto B46fa0f;
case 0x46fa15:c.instructions+=2;goto B46fa15;
case 0x46fa16:c.instructions+=1;goto B46fa16;
case 0x46fa17:goto L46fa17;
case 0x46fa19:c.instructions+=3;goto B46fa19;
case 0x46fa1f:c.instructions+=2;goto B46fa1f;
case 0x46fa20:c.instructions+=1;goto B46fa20;
case 0x46fa30:goto L46fa30;
case 0x46fa33:c.instructions+=9;goto B46fa33;
case 0x46fa34:c.instructions+=8;goto B46fa34;
case 0x46fa35:c.instructions+=7;goto B46fa35;
case 0x46fa36:c.instructions+=6;goto B46fa36;
case 0x46fa38:c.instructions+=5;goto B46fa38;
case 0x46fa3e:c.instructions+=4;goto B46fa3e;
case 0x46fa43:c.instructions+=3;goto B46fa43;
case 0x46fa45:c.instructions+=2;goto B46fa45;
case 0x46fa47:c.instructions+=1;goto B46fa47;
case 0x46fa49:goto L46fa49;
case 0x46fa4c:c.instructions+=2;goto B46fa4c;
case 0x46fa52:c.instructions+=1;goto B46fa52;
case 0x46fa54:goto L46fa54;
case 0x46fa5e:c.instructions+=4;goto B46fa5e;
case 0x46fa64:c.instructions+=3;goto B46fa64;
case 0x46fa67:c.instructions+=2;goto B46fa67;
case 0x46fa6d:c.instructions+=1;goto B46fa6d;
case 0x46fa72:goto L46fa72;
case 0x46fa73:c.instructions+=1;goto B46fa73;
case 0x46fa79:goto L46fa79;
case 0x46fa7c:c.instructions+=3;goto B46fa7c;
case 0x46fa82:c.instructions+=2;goto B46fa82;
case 0x46fa83:c.instructions+=1;goto B46fa83;
case 0x46fa89:goto L46fa89;
case 0x46fa8f:c.instructions+=6;goto B46fa8f;
case 0x46fa95:c.instructions+=5;goto B46fa95;
case 0x46fa98:c.instructions+=4;goto B46fa98;
case 0x46fa9b:c.instructions+=3;goto B46fa9b;
case 0x46faa1:c.instructions+=2;goto B46faa1;
case 0x46faa7:c.instructions+=1;goto B46faa7;
case 0x46faad:goto L46faad;
case 0x46fab4:goto L46fab4;
case 0x46fabe:c.instructions+=2;goto B46fabe;
case 0x46fac8:c.instructions+=1;goto B46fac8;
case 0x46facd:goto L46facd;
case 0x46fad7:c.instructions+=2;goto B46fad7;
case 0x46fae1:c.instructions+=1;goto B46fae1;
case 0x46fae6:goto L46fae6;
case 0x46faf0:c.instructions+=2;goto B46faf0;
case 0x46fafa:c.instructions+=1;goto B46fafa;
case 0x46faff:goto L46faff;
case 0x46fb09:c.instructions+=2;goto B46fb09;
case 0x46fb13:c.instructions+=1;goto B46fb13;
case 0x46fb18:goto L46fb18;
case 0x46fb22:c.instructions+=2;goto B46fb22;
case 0x46fb2c:c.instructions+=1;goto B46fb2c;
case 0x46fb31:goto L46fb31;
case 0x46fb3b:c.instructions+=2;goto B46fb3b;
case 0x46fb45:c.instructions+=1;goto B46fb45;
case 0x46fb4a:goto L46fb4a;
case 0x46fb54:c.instructions+=2;goto B46fb54;
case 0x46fb5e:c.instructions+=1;goto B46fb5e;
case 0x46fb63:goto L46fb63;
case 0x46fb6d:c.instructions+=2;goto B46fb6d;
case 0x46fb77:c.instructions+=1;goto B46fb77;
case 0x46fb7c:goto L46fb7c;
case 0x46fb86:c.instructions+=2;goto B46fb86;
case 0x46fb90:c.instructions+=1;goto B46fb90;
case 0x46fb95:goto L46fb95;
case 0x46fb9f:c.instructions+=2;goto B46fb9f;
case 0x46fba9:c.instructions+=1;goto B46fba9;
case 0x46fbab:goto L46fbab;
case 0x46fbb5:c.instructions+=2;goto B46fbb5;
case 0x46fbbf:c.instructions+=1;goto B46fbbf;
case 0x46fbc1:goto L46fbc1;
case 0x46fbcb:c.instructions+=2;goto B46fbcb;
case 0x46fbd5:c.instructions+=1;goto B46fbd5;
case 0x46fbd7:goto L46fbd7;
case 0x46fbe1:c.instructions+=2;goto B46fbe1;
case 0x46fbeb:c.instructions+=1;goto B46fbeb;
case 0x46fbed:goto L46fbed;
case 0x46fbf7:c.instructions+=2;goto B46fbf7;
case 0x46fc01:c.instructions+=1;goto B46fc01;
case 0x46fc03:goto L46fc03;
case 0x46fc0d:c.instructions+=1;goto B46fc0d;
case 0x46fc17:goto L46fc17;
case 0x46fc1d:c.instructions+=2;goto B46fc1d;
case 0x46fc1f:c.instructions+=1;goto B46fc1f;
case 0x46fc25:goto L46fc25;
case 0x46fc2f:c.instructions+=14;goto B46fc2f;
case 0x46fc35:c.instructions+=13;goto B46fc35;
case 0x46fc39:c.instructions+=12;goto B46fc39;
case 0x46fc3c:c.instructions+=11;goto B46fc3c;
case 0x46fc41:c.instructions+=10;goto B46fc41;
case 0x46fc45:c.instructions+=9;goto B46fc45;
case 0x46fc46:c.instructions+=8;goto B46fc46;
case 0x46fc49:c.instructions+=7;goto B46fc49;
case 0x46fc4d:c.instructions+=6;goto B46fc4d;
case 0x46fc51:c.instructions+=5;goto B46fc51;
case 0x46fc55:c.instructions+=4;goto B46fc55;
case 0x46fc59:c.instructions+=3;goto B46fc59;
case 0x46fc5d:c.instructions+=2;goto B46fc5d;
case 0x46fc60:c.instructions+=1;goto B46fc60;
case 0x46fc65:goto L46fc65;
case 0x46fc69:c.instructions+=12;goto B46fc69;
case 0x46fc6d:c.instructions+=11;goto B46fc6d;
case 0x46fc72:c.instructions+=10;goto B46fc72;
case 0x46fc76:c.instructions+=9;goto B46fc76;
case 0x46fc77:c.instructions+=8;goto B46fc77;
case 0x46fc7a:c.instructions+=7;goto B46fc7a;
case 0x46fc7e:c.instructions+=6;goto B46fc7e;
case 0x46fc82:c.instructions+=5;goto B46fc82;
case 0x46fc86:c.instructions+=4;goto B46fc86;
case 0x46fc8a:c.instructions+=3;goto B46fc8a;
case 0x46fc8e:c.instructions+=2;goto B46fc8e;
case 0x46fc91:c.instructions+=1;goto B46fc91;
case 0x46fc96:goto L46fc96;
case 0x46fc9a:c.instructions+=2;goto B46fc9a;
case 0x46fca2:c.instructions+=1;goto B46fca2;
case 0x46fca7:goto L46fca7;
case 0x46fcab:c.instructions+=4;goto B46fcab;
case 0x46fcaf:c.instructions+=3;goto B46fcaf;
case 0x46fcb5:c.instructions+=2;goto B46fcb5;
case 0x46fcbd:c.instructions+=1;goto B46fcbd;
case 0x46fcc2:goto L46fcc2;
case 0x46fcc6:c.instructions+=1;goto B46fcc6;
case 0x46fccc:goto L46fccc;
case 0x46fcd2:c.instructions+=2;goto B46fcd2;
case 0x46fcd5:c.instructions+=1;goto B46fcd5;
case 0x46fcdb:goto L46fcdb;
case 0x46fcdc:c.instructions+=1;goto B46fcdc;
case 0x46fcde:goto L46fcde;
case 0x46fce4:c.instructions+=6;goto B46fce4;
case 0x46fcea:c.instructions+=5;goto B46fcea;
case 0x46fcf0:c.instructions+=4;goto B46fcf0;
case 0x46fcf6:c.instructions+=3;goto B46fcf6;
case 0x46fcfc:c.instructions+=2;goto B46fcfc;
case 0x46fd02:c.instructions+=1;goto B46fd02;
case 0x46fd07:goto L46fd07;
case 0x46fd0d:c.instructions+=5;goto B46fd0d;
case 0x46fd0e:c.instructions+=4;goto B46fd0e;
case 0x46fd10:c.instructions+=3;goto B46fd10;
case 0x46fd13:c.instructions+=2;goto B46fd13;
case 0x46fd19:c.instructions+=1;goto B46fd19;
case 0x46fd1b:goto L46fd1b;
case 0x46fd21:c.instructions+=2;goto B46fd21;
case 0x46fd27:c.instructions+=1;goto B46fd27;
case 0x46fd29:goto L46fd29;
case 0x46fd2f:c.instructions+=1;goto B46fd2f;
case 0x46fd31:goto L46fd31;
case 0x46fd38:goto L46fd38;
case 0x46fd3e:c.instructions+=1;goto B46fd3e;
case 0x46fd44:goto L46fd44;
case 0x46fd4a:c.instructions+=13;goto B46fd4a;
case 0x46fd4e:c.instructions+=12;goto B46fd4e;
case 0x46fd51:c.instructions+=11;goto B46fd51;
case 0x46fd56:c.instructions+=10;goto B46fd56;
case 0x46fd5a:c.instructions+=9;goto B46fd5a;
case 0x46fd5b:c.instructions+=8;goto B46fd5b;
case 0x46fd5e:c.instructions+=7;goto B46fd5e;
case 0x46fd62:c.instructions+=6;goto B46fd62;
case 0x46fd66:c.instructions+=5;goto B46fd66;
case 0x46fd6a:c.instructions+=4;goto B46fd6a;
case 0x46fd6e:c.instructions+=3;goto B46fd6e;
case 0x46fd72:c.instructions+=2;goto B46fd72;
case 0x46fd75:c.instructions+=1;goto B46fd75;
case 0x46fd7a:goto L46fd7a;
case 0x46fd7e:c.instructions+=12;goto B46fd7e;
case 0x46fd82:c.instructions+=11;goto B46fd82;
case 0x46fd87:c.instructions+=10;goto B46fd87;
case 0x46fd8b:c.instructions+=9;goto B46fd8b;
case 0x46fd8c:c.instructions+=8;goto B46fd8c;
case 0x46fd8f:c.instructions+=7;goto B46fd8f;
case 0x46fd93:c.instructions+=6;goto B46fd93;
case 0x46fd97:c.instructions+=5;goto B46fd97;
case 0x46fd9b:c.instructions+=4;goto B46fd9b;
case 0x46fd9f:c.instructions+=3;goto B46fd9f;
case 0x46fda3:c.instructions+=2;goto B46fda3;
case 0x46fda6:c.instructions+=1;goto B46fda6;
case 0x46fdab:goto L46fdab;
case 0x46fdb1:c.instructions+=4;goto B46fdb1;
case 0x46fdb5:c.instructions+=3;goto B46fdb5;
case 0x46fdb9:c.instructions+=2;goto B46fdb9;
case 0x46fdbd:c.instructions+=1;goto B46fdbd;
case 0x46fdc2:goto L46fdc2;
case 0x46fdc6:c.instructions+=5;goto B46fdc6;
case 0x46fdca:c.instructions+=4;goto B46fdca;
case 0x46fdce:c.instructions+=3;goto B46fdce;
case 0x46fdd4:c.instructions+=2;goto B46fdd4;
case 0x46fdd8:c.instructions+=1;goto B46fdd8;
case 0x46fddd:goto L46fddd;
case 0x46fde1:c.instructions+=2;goto B46fde1;
case 0x46fde7:c.instructions+=1;goto B46fde7;
case 0x46fde9:goto L46fde9;
case 0x46fdef:c.instructions+=10;goto B46fdef;
case 0x46fdf0:c.instructions+=9;goto B46fdf0;
case 0x46fdf6:c.instructions+=8;goto B46fdf6;
case 0x46fdf8:c.instructions+=7;goto B46fdf8;
case 0x46fdfd:c.instructions+=6;goto B46fdfd;
case 0x46fe00:c.instructions+=5;goto B46fe00;
case 0x46fe01:c.instructions+=4;goto B46fe01;
case 0x46fe03:c.instructions+=3;goto B46fe03;
case 0x46fe05:c.instructions+=2;goto B46fe05;
case 0x46fe0b:c.instructions+=1;goto B46fe0b;
case 0x46fe0d:goto L46fe0d;
case 0x46fe10:c.instructions+=9;goto B46fe10;
case 0x46fe16:c.instructions+=8;goto B46fe16;
case 0x46fe1c:c.instructions+=7;goto B46fe1c;
case 0x46fe22:c.instructions+=6;goto B46fe22;
case 0x46fe28:c.instructions+=5;goto B46fe28;
case 0x46fe2e:c.instructions+=4;goto B46fe2e;
case 0x46fe34:c.instructions+=3;goto B46fe34;
case 0x46fe3a:c.instructions+=2;goto B46fe3a;
case 0x46fe40:c.instructions+=1;goto B46fe40;
case 0x46fe42:goto L46fe42;
case 0x46fe48:goto L46fe48;
case 0x46fe4e:c.instructions+=7;goto B46fe4e;
case 0x46fe52:c.instructions+=6;goto B46fe52;
case 0x46fe56:c.instructions+=5;goto B46fe56;
case 0x46fe57:c.instructions+=4;goto B46fe57;
case 0x46fe5d:c.instructions+=3;goto B46fe5d;
case 0x46fe5f:c.instructions+=2;goto B46fe5f;
case 0x46fe62:c.instructions+=1;goto B46fe62;
case 0x46fe68:goto L46fe68;
case 0x46fe6c:c.instructions+=5;goto B46fe6c;
case 0x46fe72:c.instructions+=4;goto B46fe72;
case 0x46fe76:c.instructions+=3;goto B46fe76;
case 0x46fe78:c.instructions+=2;goto B46fe78;
case 0x46fe7b:c.instructions+=1;goto B46fe7b;
case 0x46fe7d:goto L46fe7d;
case 0x46fe7f:c.instructions+=1;goto B46fe7f;
case 0x46fe85:goto L46fe85;
case 0x46fe8b:c.instructions+=8;goto B46fe8b;
case 0x46fe8f:c.instructions+=7;goto B46fe8f;
case 0x46fe95:c.instructions+=6;goto B46fe95;
case 0x46fe99:c.instructions+=5;goto B46fe99;
case 0x46fe9d:c.instructions+=4;goto B46fe9d;
case 0x46fea3:c.instructions+=3;goto B46fea3;
case 0x46fea5:c.instructions+=2;goto B46fea5;
case 0x46fea8:c.instructions+=1;goto B46fea8;
case 0x46feaa:goto L46feaa;
case 0x46feae:c.instructions+=5;goto B46feae;
case 0x46feb4:c.instructions+=4;goto B46feb4;
case 0x46feb8:c.instructions+=3;goto B46feb8;
case 0x46feba:c.instructions+=2;goto B46feba;
case 0x46febd:c.instructions+=1;goto B46febd;
case 0x46febf:goto L46febf;
case 0x46fec1:c.instructions+=1;goto B46fec1;
case 0x46fec7:goto L46fec7;
case 0x46fecd:c.instructions+=7;goto B46fecd;
case 0x46fed1:c.instructions+=6;goto B46fed1;
case 0x46fed4:c.instructions+=5;goto B46fed4;
case 0x46feda:c.instructions+=4;goto B46feda;
case 0x46fee0:c.instructions+=3;goto B46fee0;
case 0x46fee2:c.instructions+=2;goto B46fee2;
case 0x46fee5:c.instructions+=1;goto B46fee5;
case 0x46fee7:goto L46fee7;
case 0x46fee9:c.instructions+=1;goto B46fee9;
case 0x46feeb:goto L46feeb;
case 0x46fef1:c.instructions+=1;goto B46fef1;
case 0x46fef3:goto L46fef3;
case 0x46fef9:c.instructions+=1;goto B46fef9;
case 0x46fefb:goto L46fefb;
case 0x46fefd:goto L46fefd;
case 0x46ff00:c.instructions+=14;goto B46ff00;
case 0x46ff06:c.instructions+=13;goto B46ff06;
case 0x46ff0c:c.instructions+=12;goto B46ff0c;
case 0x46ff0f:c.instructions+=11;goto B46ff0f;
case 0x46ff12:c.instructions+=10;goto B46ff12;
case 0x46ff15:c.instructions+=9;goto B46ff15;
case 0x46ff18:c.instructions+=8;goto B46ff18;
case 0x46ff1f:c.instructions+=7;goto B46ff1f;
case 0x46ff22:c.instructions+=6;goto B46ff22;
case 0x46ff26:c.instructions+=5;goto B46ff26;
case 0x46ff2a:c.instructions+=4;goto B46ff2a;
case 0x46ff30:c.instructions+=3;goto B46ff30;
case 0x46ff32:c.instructions+=2;goto B46ff32;
case 0x46ff35:c.instructions+=1;goto B46ff35;
case 0x46ff37:goto L46ff37;
case 0x46ff39:c.instructions+=1;goto B46ff39;
case 0x46ff3b:goto L46ff3b;
case 0x46ff3d:goto L46ff3d;
case 0x46ff40:c.instructions+=11;goto B46ff40;
case 0x46ff43:c.instructions+=10;goto B46ff43;
case 0x46ff49:c.instructions+=9;goto B46ff49;
case 0x46ff4c:c.instructions+=8;goto B46ff4c;
case 0x46ff4f:c.instructions+=7;goto B46ff4f;
case 0x46ff55:c.instructions+=6;goto B46ff55;
case 0x46ff56:c.instructions+=5;goto B46ff56;
case 0x46ff57:c.instructions+=4;goto B46ff57;
case 0x46ff5a:c.instructions+=3;goto B46ff5a;
case 0x46ff5b:c.instructions+=2;goto B46ff5b;
case 0x46ff5e:c.instructions+=1;goto B46ff5e;
case 0x46ffa0:goto L46ffa0;
case 0x46ffa5:c.instructions+=2;goto B46ffa5;
case 0x46ffa6:c.instructions+=1;goto B46ffa6;
case 0x46ffab:goto L46ffab;
case 0x46ffae:c.instructions+=2;goto B46ffae;
case 0x46ffb3:c.instructions+=1;goto B46ffb3;
case 0x46ffb5:goto L46ffb5;
case 0x46ffbb:c.instructions+=5;goto B46ffbb;
case 0x46ffbe:c.instructions+=4;goto B46ffbe;
case 0x46ffc4:c.instructions+=3;goto B46ffc4;
case 0x46ffc5:c.instructions+=2;goto B46ffc5;
case 0x46ffca:c.instructions+=1;goto B46ffca;
case 0x46ffcf:goto L46ffcf;
case 0x46ffd2:c.instructions+=2;goto B46ffd2;
case 0x46ffd4:c.instructions+=1;goto B46ffd4;
case 0x46ffd6:goto L46ffd6;
case 0x46ffd8:c.instructions+=1;goto B46ffd8;
case 0x46ffdd:goto L46ffdd;
case 0x46ffdf:c.instructions+=1;goto B46ffdf;
case 0x46ffe0:goto L46ffe0;
case 0x46ffe1:c.instructions+=6;goto B46ffe1;
case 0x46ffe5:c.instructions+=5;goto B46ffe5;
case 0x46ffe7:c.instructions+=4;goto B46ffe7;
case 0x46ffe8:c.instructions+=3;goto B46ffe8;
case 0x46ffea:c.instructions+=2;goto B46ffea;
case 0x46ffec:c.instructions+=1;goto B46ffec;
case 0x46ffef:goto L46ffef;
case 0x46fff1:c.instructions+=4;goto B46fff1;
case 0x46fff4:c.instructions+=3;goto B46fff4;
case 0x46fff9:c.instructions+=2;goto B46fff9;
case 0x46fffc:c.instructions+=1;goto B46fffc;
case 0x46fffe:goto L46fffe;
default:missing_instruction(c.pc);}
B46f000:L46f000:{c.instructions+=5;NFSU2_TR(0x46f000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f001:{NFSU2_TR(0x46f001);
__builtin_memmove((R+24),(R+4),4);
}
B46f003:{NFSU2_TR(0x46f003);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f009:{NFSU2_TR(0x46f009);
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
B46f00b:{NFSU2_TR(0x46f00b);
if(r1(R+518)){{goto L46f078;}}
}
B46f00d:L46f00d:{c.instructions+=5;NFSU2_TR(0x46f00d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f00e:{NFSU2_TR(0x46f00e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46f012:{NFSU2_TR(0x46f012);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f013:{NFSU2_TR(0x46f013);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f019:{NFSU2_TR(0x46f019);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f01eull));
TAIL_STATIC(0x46b100u,46b);
}
B46f01e:L46f01e:{c.instructions+=3;NFSU2_TR(0x46f01e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f01f:{NFSU2_TR(0x46f01f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f025:{NFSU2_TR(0x46f025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f02aull));
TAIL_STATIC(0x46b100u,46b);
}
B46f02a:L46f02a:{c.instructions+=3;NFSU2_TR(0x46f02a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46f030:{NFSU2_TR(0x46f030);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46f032:{NFSU2_TR(0x46f032);
if(r1(R+518)){{goto L46f040;}}
}
B46f034:L46f034:{c.instructions+=2;NFSU2_TR(0x46f034);
__builtin_memmove((R+4),(R+24),4);
}
B46f036:{NFSU2_TR(0x46f036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f03bull));
TAIL_STATIC(0x45c430u,45c);
}
B46f03b:L46f03b:{c.instructions+=3;NFSU2_TR(0x46f03b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f03c:{NFSU2_TR(0x46f03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f03d:{NFSU2_TR(0x46f03d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f040:L46f040:{c.instructions+=2;NFSU2_TR(0x46f040);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f046:{NFSU2_TR(0x46f046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f04bull));
TAIL_STATIC(0x75bed4u,75b);
}
B46f04b:L46f04b:{c.instructions+=6;NFSU2_TR(0x46f04b);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f051:{NFSU2_TR(0x46f051);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46f054:{NFSU2_TR(0x46f054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f05a:{NFSU2_TR(0x46f05a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f05d:{NFSU2_TR(0x46f05d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f063:{NFSU2_TR(0x46f063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f068ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46f068:L46f068:{c.instructions+=4;NFSU2_TR(0x46f068);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f06e:{NFSU2_TR(0x46f06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f071:{NFSU2_TR(0x46f071);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f077:{NFSU2_TR(0x46f077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f078:L46f078:{c.instructions+=2;NFSU2_TR(0x46f078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f079:{NFSU2_TR(0x46f079);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f080:L46f080:{c.instructions+=5;NFSU2_TR(0x46f080);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f083:{NFSU2_TR(0x46f083);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46f086:{NFSU2_TR(0x46f086);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f08c:{NFSU2_TR(0x46f08c);
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
B46f08f:{NFSU2_TR(0x46f08f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46f161;}}
}
B46f095:L46f095:{c.instructions+=3;NFSU2_TR(0x46f095);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46f098:{NFSU2_TR(0x46f098);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f09e:{NFSU2_TR(0x46f09e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f0a8;}}
}
B46f0a0:L46f0a0:{c.instructions+=2;NFSU2_TR(0x46f0a0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46f0a2:{NFSU2_TR(0x46f0a2);
{u32 ea_=u32(u32(7898564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f0a8:L46f0a8:{c.instructions+=2;NFSU2_TR(0x46f0a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46f0ab:{NFSU2_TR(0x46f0ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f0b5;}}
}
B46f0ad:L46f0ad:{c.instructions+=2;NFSU2_TR(0x46f0ad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46f0af:{NFSU2_TR(0x46f0af);
{u32 ea_=u32(u32(7898568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f0b5:L46f0b5:{c.instructions+=10;NFSU2_TR(0x46f0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f0b8:{NFSU2_TR(0x46f0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46f0c2:{NFSU2_TR(0x46f0c2);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B46f0c5:{NFSU2_TR(0x46f0c5);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46f0c8:{NFSU2_TR(0x46f0c8);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f0ce:{NFSU2_TR(0x46f0ce);
{u32 ea_=u32(r4(R+4)+u32(264u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46f0d4:{NFSU2_TR(0x46f0d4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46f0da:{NFSU2_TR(0x46f0da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46f0dc:{NFSU2_TR(0x46f0dc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46f0df:{NFSU2_TR(0x46f0df);
if(r1(R+514)){{goto L46f0eb;}}
}
B46f0e1:L46f0e1:{c.instructions+=1;NFSU2_TR(0x46f0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
w4(U+4,u32(0x3c23d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B46f0eb:L46f0eb:{c.instructions+=16;NFSU2_TR(0x46f0eb);
{u32 ea_=u32(r4(R+4)+u32(268u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46f0f1:{NFSU2_TR(0x46f0f1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B46f0f3:{NFSU2_TR(0x46f0f3);
{u32 ea_=u32(r4(R+4)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f0f9:{NFSU2_TR(0x46f0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f0ff:{NFSU2_TR(0x46f0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f105:{NFSU2_TR(0x46f105);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46f10b:{NFSU2_TR(0x46f10b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f111:{NFSU2_TR(0x46f111);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f114:{NFSU2_TR(0x46f114);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46f117:{NFSU2_TR(0x46f117);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46f11a:{NFSU2_TR(0x46f11a);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f120:{NFSU2_TR(0x46f120);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46f126:{NFSU2_TR(0x46f126);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46f12c:{NFSU2_TR(0x46f12c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46f12e:{NFSU2_TR(0x46f12e);
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
B46f131:{NFSU2_TR(0x46f131);
if(r1(R+514)){{goto L46f13d;}}
}
B46f133:L46f133:{c.instructions+=1;NFSU2_TR(0x46f133);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
w4(U+4,u32(0x3c23d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B46f13d:L46f13d:{c.instructions+=6;NFSU2_TR(0x46f13d);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46f143:{NFSU2_TR(0x46f143);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f149:{NFSU2_TR(0x46f149);
{u32 ea_=u32(r4(R+4)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f14f:{NFSU2_TR(0x46f14f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f155:{NFSU2_TR(0x46f155);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46f15b:{NFSU2_TR(0x46f15b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f161:L46f161:{c.instructions+=1;NFSU2_TR(0x46f161);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f170:L46f170:{c.instructions+=3;NFSU2_TR(0x46f170);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46f175:{NFSU2_TR(0x46f175);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f176:{NFSU2_TR(0x46f176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f17bull));
TAIL_STATIC(0x43e910u,43e);
}
B46f17b:L46f17b:{c.instructions+=3;NFSU2_TR(0x46f17b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46f17e:{NFSU2_TR(0x46f17e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x55cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x55cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46f183:{NFSU2_TR(0x46f183);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46f1ad;}}
}
B46f185:L46f185:{c.instructions+=6;NFSU2_TR(0x46f185);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B46f18b:{NFSU2_TR(0x46f18b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B46f18e:{NFSU2_TR(0x46f18e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B46f194:{NFSU2_TR(0x46f194);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f195:{NFSU2_TR(0x46f195);
u8 U[4];
w4(U+0,u32(0x15cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f19a:{NFSU2_TR(0x46f19a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f19full));
TAIL_STATIC(0x440820u,440);
}
B46f19f:L46f19f:{c.instructions+=3;NFSU2_TR(0x46f19f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46f1a2:{NFSU2_TR(0x46f1a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46f1a4:{NFSU2_TR(0x46f1a4);
if(r1(R+518)){{goto L46f1ad;}}
}
B46f1a6:L46f1a6:{c.instructions+=2;NFSU2_TR(0x46f1a6);
__builtin_memmove((R+4),(R+0),4);
}
B46f1a8:{NFSU2_TR(0x46f1a8);
TAIL_STATIC(0x45c490u,45c);
}
B46f1ad:L46f1ad:{c.instructions+=2;NFSU2_TR(0x46f1ad);
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
B46f1af:{NFSU2_TR(0x46f1af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f1b0:L46f1b0:{c.instructions+=17;NFSU2_TR(0x46f1b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f1b1:{NFSU2_TR(0x46f1b1);
__builtin_memmove((R+20),(R+16),4);
}
B46f1b3:{NFSU2_TR(0x46f1b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B46f1b6:{NFSU2_TR(0x46f1b6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f1b8:{NFSU2_TR(0x46f1b8);
u8 U[4];
w4(U+0,u32(0x772506ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f1bd:{NFSU2_TR(0x46f1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f1c3:{NFSU2_TR(0x46f1c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f1c4:{NFSU2_TR(0x46f1c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f1cb:{NFSU2_TR(0x46f1cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B46f1ce:{NFSU2_TR(0x46f1ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f1cf:{NFSU2_TR(0x46f1cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f1d0:{NFSU2_TR(0x46f1d0);
__builtin_memmove((R+24),(R+4),4);
}
B46f1d2:{NFSU2_TR(0x46f1d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f1d6:{NFSU2_TR(0x46f1d6);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B46f1dc:{NFSU2_TR(0x46f1dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46f1df:{NFSU2_TR(0x46f1df);
w4(R+4,u32(0x10ull));
}
B46f1e4:{NFSU2_TR(0x46f1e4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46f1e6:L46f1e6:{c.instructions+=5;NFSU2_TR(0x46f1e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B46f1e8:{NFSU2_TR(0x46f1e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B46f1eb:{NFSU2_TR(0x46f1eb);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B46f1ec:{NFSU2_TR(0x46f1ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B46f1f0:{NFSU2_TR(0x46f1f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46f1e6u);}goto L46f1e6;}}
}
B46f1f2:L46f1f2:{c.instructions+=10;NFSU2_TR(0x46f1f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46f1f5:{NFSU2_TR(0x46f1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f1f8:{NFSU2_TR(0x46f1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f1fb:{NFSU2_TR(0x46f1fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f1fe:{NFSU2_TR(0x46f1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f201:{NFSU2_TR(0x46f201);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f203:{NFSU2_TR(0x46f203);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f209:{NFSU2_TR(0x46f209);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f20d:{NFSU2_TR(0x46f20d);
u8 U[4];
w4(U+0,u32(0x789f70ull));
s4(u32(r4(R+24)),r4(U+0));
}
B46f213:{NFSU2_TR(0x46f213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f218ull));
TAIL_STATIC(0x579f20u,579);
}
B46f218:L46f218:{c.instructions+=4;NFSU2_TR(0x46f218);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f21a:{NFSU2_TR(0x46f21a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f220:{NFSU2_TR(0x46f220);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f225:{NFSU2_TR(0x46f225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f22aull));
TAIL_STATIC(0x579f20u,579);
}
B46f22a:L46f22a:{c.instructions+=21;NFSU2_TR(0x46f22a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f230:{NFSU2_TR(0x46f230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f236:{NFSU2_TR(0x46f236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f23c:{NFSU2_TR(0x46f23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f242:{NFSU2_TR(0x46f242);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f248:{NFSU2_TR(0x46f248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f24e:{NFSU2_TR(0x46f24e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f255:{NFSU2_TR(0x46f255);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f25b:{NFSU2_TR(0x46f25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f261:{NFSU2_TR(0x46f261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f267:{NFSU2_TR(0x46f267);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f26d:{NFSU2_TR(0x46f26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f273:{NFSU2_TR(0x46f273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f279:{NFSU2_TR(0x46f279);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f27f:{NFSU2_TR(0x46f27f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f286:{NFSU2_TR(0x46f286);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f289:{NFSU2_TR(0x46f289);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B46f28b:{NFSU2_TR(0x46f28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f28e:{NFSU2_TR(0x46f28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f291:{NFSU2_TR(0x46f291);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B46f293:{NFSU2_TR(0x46f293);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46f296:L46f296:{c.instructions+=9;NFSU2_TR(0x46f296);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f299:{NFSU2_TR(0x46f299);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B46f29b:{NFSU2_TR(0x46f29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f29e:{NFSU2_TR(0x46f29e);
u8 U[13];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B46f2a2:{NFSU2_TR(0x46f2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f2a5:{NFSU2_TR(0x46f2a5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B46f2a6:{NFSU2_TR(0x46f2a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B46f2a9:{NFSU2_TR(0x46f2a9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46f2ac:{NFSU2_TR(0x46f2ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46f296u);}goto L46f296;}}
}
B46f2ae:L46f2ae:{c.instructions+=33;NFSU2_TR(0x46f2ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f2b2:{NFSU2_TR(0x46f2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f2b8:{NFSU2_TR(0x46f2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f2be:{NFSU2_TR(0x46f2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f2c4:{NFSU2_TR(0x46f2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f2ca:{NFSU2_TR(0x46f2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f2d0:{NFSU2_TR(0x46f2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f2d6:{NFSU2_TR(0x46f2d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f2dd:{NFSU2_TR(0x46f2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f2e0:{NFSU2_TR(0x46f2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f2e3:{NFSU2_TR(0x46f2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f2e6:{NFSU2_TR(0x46f2e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46f2ec:{NFSU2_TR(0x46f2ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46f2f2:{NFSU2_TR(0x46f2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B46f2fc:{NFSU2_TR(0x46f2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f302:{NFSU2_TR(0x46f302);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46f308:{NFSU2_TR(0x46f308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f30e:{NFSU2_TR(0x46f30e);
w4(R+0,u32(0x3f800000ull));
}
B46f313:{NFSU2_TR(0x46f313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f319:{NFSU2_TR(0x46f319);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f31f:{NFSU2_TR(0x46f31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f325:{NFSU2_TR(0x46f325);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f327:{NFSU2_TR(0x46f327);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f328:{NFSU2_TR(0x46f328);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B46f332:{NFSU2_TR(0x46f332);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f338:{NFSU2_TR(0x46f338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f33e:{NFSU2_TR(0x46f33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f344:{NFSU2_TR(0x46f344);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46f34a:{NFSU2_TR(0x46f34a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f350:{NFSU2_TR(0x46f350);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f356:{NFSU2_TR(0x46f356);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f357:{NFSU2_TR(0x46f357);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x152ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f35e:{NFSU2_TR(0x46f35e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f363ull));
TAIL_STATIC(0x46af20u,46a);
}
B46f363:L46f363:{c.instructions+=18;NFSU2_TR(0x46f363);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f367:{NFSU2_TR(0x46f367);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f36d:{NFSU2_TR(0x46f36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f373:{NFSU2_TR(0x46f373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f379:{NFSU2_TR(0x46f379);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46f37f:{NFSU2_TR(0x46f37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f385:{NFSU2_TR(0x46f385);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f38b:{NFSU2_TR(0x46f38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B46f395:{NFSU2_TR(0x46f395);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f39b:{NFSU2_TR(0x46f39b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f3a1:{NFSU2_TR(0x46f3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f3a7:{NFSU2_TR(0x46f3a7);
__builtin_memmove((R+0),(R+24),4);
}
B46f3a9:{NFSU2_TR(0x46f3a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f3aa:{NFSU2_TR(0x46f3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f3b1:{NFSU2_TR(0x46f3b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46f3b2:{NFSU2_TR(0x46f3b2);
__builtin_memmove((R+16),(R+20),4);
}
B46f3b4:{NFSU2_TR(0x46f3b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46f3b5:{NFSU2_TR(0x46f3b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f3c0:L46f3c0:{c.instructions+=3;NFSU2_TR(0x46f3c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f3c1:{NFSU2_TR(0x46f3c1);
__builtin_memmove((R+24),(R+4),4);
}
B46f3c3:{NFSU2_TR(0x46f3c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f3c8ull));
TAIL_STATIC(0x45c4d0u,45c);
}
B46f3c8:L46f3c8:{c.instructions+=2;NFSU2_TR(0x46f3c8);
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
B46f3cd:{NFSU2_TR(0x46f3cd);
if(r1(R+518)){{goto L46f3d8;}}
}
B46f3cf:L46f3cf:{c.instructions+=2;NFSU2_TR(0x46f3cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f3d0:{NFSU2_TR(0x46f3d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f3d5ull));
TAIL_STATIC(0x440540u,440);
}
B46f3d5:L46f3d5:{c.instructions+=1;NFSU2_TR(0x46f3d5);
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
B46f3d8:L46f3d8:{c.instructions+=3;NFSU2_TR(0x46f3d8);
__builtin_memmove((R+0),(R+24),4);
}
B46f3da:{NFSU2_TR(0x46f3da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f3db:{NFSU2_TR(0x46f3db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f3e0:L46f3e0:{c.instructions+=7;NFSU2_TR(0x46f3e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f3e1:{NFSU2_TR(0x46f3e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46f3e5:{NFSU2_TR(0x46f3e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46f3e7:{NFSU2_TR(0x46f3e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f3e8:{NFSU2_TR(0x46f3e8);
__builtin_memmove((R+28),(R+4),4);
}
B46f3ea:{NFSU2_TR(0x46f3ea);
__builtin_memmove((R+4),(R+24),4);
}
B46f3ec:{NFSU2_TR(0x46f3ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f3efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46f3ef:L46f3ef:{c.instructions+=5;NFSU2_TR(0x46f3ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46f3f1:{NFSU2_TR(0x46f3f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B46f3f4:{NFSU2_TR(0x46f3f4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B46f3f9:{NFSU2_TR(0x46f3f9);
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
B46f3fc:{NFSU2_TR(0x46f3fc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L46f425;}}
}
B46f3fe:L46f3fe:{c.instructions+=1;NFSU2_TR(0x46f3fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x46f43cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46f405:L46f405:{c.instructions+=4;NFSU2_TR(0x46f405);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f408:{NFSU2_TR(0x46f408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f409:{NFSU2_TR(0x46f409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f40a:{NFSU2_TR(0x46f40a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f40d:L46f40d:{c.instructions+=4;NFSU2_TR(0x46f40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f410:{NFSU2_TR(0x46f410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f411:{NFSU2_TR(0x46f411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f412:{NFSU2_TR(0x46f412);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f415:L46f415:{c.instructions+=4;NFSU2_TR(0x46f415);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f418:{NFSU2_TR(0x46f418);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f419:{NFSU2_TR(0x46f419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f41a:{NFSU2_TR(0x46f41a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f41d:L46f41d:{c.instructions+=4;NFSU2_TR(0x46f41d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f420:{NFSU2_TR(0x46f420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f421:{NFSU2_TR(0x46f421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f422:{NFSU2_TR(0x46f422);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f425:L46f425:{c.instructions+=3;NFSU2_TR(0x46f425);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f42a:{NFSU2_TR(0x46f42a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f42c:{NFSU2_TR(0x46f42c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f431ull));
TAIL_STATIC(0x4691c0u,469);
}
B46f431:L46f431:{c.instructions+=4;NFSU2_TR(0x46f431);
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
B46f434:{NFSU2_TR(0x46f434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f435:{NFSU2_TR(0x46f435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f436:{NFSU2_TR(0x46f436);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f460:L46f460:{c.instructions+=9;NFSU2_TR(0x46f460);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f461:{NFSU2_TR(0x46f461);
{u32 ea_=u32(u32(7898588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f467:{NFSU2_TR(0x46f467);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f468:{NFSU2_TR(0x46f468);
__builtin_memmove((R+24),(R+4),4);
}
B46f46a:{NFSU2_TR(0x46f46a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f46d:{NFSU2_TR(0x46f46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f470:{NFSU2_TR(0x46f470);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f473:{NFSU2_TR(0x46f473);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46f477:{NFSU2_TR(0x46f477);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f4a3;}}
}
B46f479:L46f479:{c.instructions+=3;NFSU2_TR(0x46f479);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B46f47f:{NFSU2_TR(0x46f47f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46f481:{NFSU2_TR(0x46f481);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f4a3;}}
}
B46f483:L46f483:{c.instructions+=3;NFSU2_TR(0x46f483);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f486:{NFSU2_TR(0x46f486);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46f488:{NFSU2_TR(0x46f488);
if(r1(R+518)){{goto L46f4a3;}}
}
B46f48a:L46f48a:{c.instructions+=3;NFSU2_TR(0x46f48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f48d:{NFSU2_TR(0x46f48d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46f48f:{NFSU2_TR(0x46f48f);
if(r1(R+518)){{goto L46f4a3;}}
}
B46f491:L46f491:{c.instructions+=2;NFSU2_TR(0x46f491);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46f494:{NFSU2_TR(0x46f494);
if(r1(R+518)){{goto L46f49b;}}
}
B46f496:L46f496:{c.instructions+=2;NFSU2_TR(0x46f496);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46f499:{NFSU2_TR(0x46f499);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f4a3;}}
}
B46f49b:L46f49b:{c.instructions+=2;NFSU2_TR(0x46f49b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46f49d:{NFSU2_TR(0x46f49d);
{u32 ea_=u32(u32(7898592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f4a3:L46f4a3:{c.instructions+=11;NFSU2_TR(0x46f4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f4a6:{NFSU2_TR(0x46f4a6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46f4a9:{NFSU2_TR(0x46f4a9);
{u32 ea_=u32(u32(7908008u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46f4af:{NFSU2_TR(0x46f4af);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B46f4b1:{NFSU2_TR(0x46f4b1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f4b5:{NFSU2_TR(0x46f4b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46f4b7:{NFSU2_TR(0x46f4b7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f4bb:{NFSU2_TR(0x46f4bb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46f4c1:{NFSU2_TR(0x46f4c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46f4c3:{NFSU2_TR(0x46f4c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46f4c6:{NFSU2_TR(0x46f4c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f554;}}
}
B46f4cc:L46f4cc:{c.instructions+=6;NFSU2_TR(0x46f4cc);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f4d0:{NFSU2_TR(0x46f4d0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f4d6:{NFSU2_TR(0x46f4d6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46f4da:{NFSU2_TR(0x46f4da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46f4dc:{NFSU2_TR(0x46f4dc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46f4df:{NFSU2_TR(0x46f4df);
if(r1(R+514)){{goto L46f4e9;}}
}
B46f4e1:L46f4e1:{c.instructions+=2;NFSU2_TR(0x46f4e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46f4e3:{NFSU2_TR(0x46f4e3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f4e9:L46f4e9:{c.instructions+=2;NFSU2_TR(0x46f4e9);
{u32 ea_=u32(u32(7908004u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f4ef:{NFSU2_TR(0x46f4ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f4f4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46f4f4:L46f4f4:{c.instructions+=4;NFSU2_TR(0x46f4f4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f4f6:{NFSU2_TR(0x46f4f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f4f7:{NFSU2_TR(0x46f4f7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f4f9:{NFSU2_TR(0x46f4f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f4feull));
TAIL_STATIC(0x468160u,468);
}
B46f4fe:L46f4fe:{c.instructions+=4;NFSU2_TR(0x46f4fe);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B46f500:{NFSU2_TR(0x46f500);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46f503:{NFSU2_TR(0x46f503);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffda80ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffda80ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46f508:{NFSU2_TR(0x46f508);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46f50f;}}
}
B46f50a:L46f50a:{c.instructions+=1;NFSU2_TR(0x46f50a);
w4(R+0,u32(0xffffd8f0ull));
}
B46f50f:L46f50f:{c.instructions+=2;NFSU2_TR(0x46f50f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f510:{NFSU2_TR(0x46f510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f515ull));
TAIL_STATIC(0x467ff0u,467);
}
B46f515:L46f515:{c.instructions+=9;NFSU2_TR(0x46f515);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f519:{NFSU2_TR(0x46f519);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46f51d:{NFSU2_TR(0x46f51d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46f520:{NFSU2_TR(0x46f520);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f526:{NFSU2_TR(0x46f526);
{u32 ea_=u32(u32(7898584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f52c:{NFSU2_TR(0x46f52c);
{u32 ea_=u32(u32(7898580u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46f532:{NFSU2_TR(0x46f532);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B46f534:{NFSU2_TR(0x46f534);
{u32 ea_=u32(u32(7898580u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46f53a:{NFSU2_TR(0x46f53a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f53full));
TAIL_STATIC(0x75bed4u,75b);
}
B46f53f:L46f53f:{c.instructions+=3;NFSU2_TR(0x46f53f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46f541:{NFSU2_TR(0x46f541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f547:{NFSU2_TR(0x46f547);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46f55c;}}
}
B46f549:L46f549:{c.instructions+=5;NFSU2_TR(0x46f549);
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
B46f54b:{NFSU2_TR(0x46f54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f551:{NFSU2_TR(0x46f551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f552:{NFSU2_TR(0x46f552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f553:{NFSU2_TR(0x46f553);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f554:L46f554:{c.instructions+=2;NFSU2_TR(0x46f554);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f55a:{NFSU2_TR(0x46f55a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46f4e9u);}goto L46f4e9;}
}
B46f55c:L46f55c:{c.instructions+=2;NFSU2_TR(0x46f55c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46f561:{NFSU2_TR(0x46f561);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46f568;}}
}
B46f563:L46f563:{c.instructions+=1;NFSU2_TR(0x46f563);
w4(R+0,u32(0x7fffull));
}
B46f568:L46f568:{c.instructions+=4;NFSU2_TR(0x46f568);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f56e:{NFSU2_TR(0x46f56e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f56f:{NFSU2_TR(0x46f56f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f570:{NFSU2_TR(0x46f570);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f580:L46f580:{c.instructions+=9;NFSU2_TR(0x46f580);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f584:{NFSU2_TR(0x46f584);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f585:{NFSU2_TR(0x46f585);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f586:{NFSU2_TR(0x46f586);
__builtin_memmove((R+28),(R+4),4);
}
B46f588:{NFSU2_TR(0x46f588);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x154ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46f58e:{NFSU2_TR(0x46f58e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f58f:{NFSU2_TR(0x46f58f);
__builtin_memmove((R+4),(R+20),4);
}
B46f591:{NFSU2_TR(0x46f591);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46f598:{NFSU2_TR(0x46f598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f59dull));
TAIL_STATIC(0x46af70u,46a);
}
B46f59d:L46f59d:{c.instructions+=3;NFSU2_TR(0x46f59d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x152ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46f5a3:{NFSU2_TR(0x46f5a3);
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
B46f5a5:{NFSU2_TR(0x46f5a5);
if(r1(R+518)){{goto L46f5ff;}}
}
B46f5a7:L46f5a7:{c.instructions+=4;NFSU2_TR(0x46f5a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5a8:{NFSU2_TR(0x46f5a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5a9:{NFSU2_TR(0x46f5a9);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5ab:{NFSU2_TR(0x46f5ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f5b0ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B46f5b0:L46f5b0:{c.instructions+=5;NFSU2_TR(0x46f5b0);
__builtin_memmove((R+4),gp(0x7885e8),4);
}
B46f5b6:{NFSU2_TR(0x46f5b6);
__builtin_memmove((R+24),(R+0),4);
}
B46f5b8:{NFSU2_TR(0x46f5b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5b9:{NFSU2_TR(0x46f5b9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x19ull))));
}
B46f5bc:{NFSU2_TR(0x46f5bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f5c1ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B46f5c1:L46f5c1:{c.instructions+=5;NFSU2_TR(0x46f5c1);
{u32 ea_=u32(u32(7898596u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46f5c7:{NFSU2_TR(0x46f5c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46f5ca:{NFSU2_TR(0x46f5ca);
__builtin_memmove((R+4),(R+20),4);
}
B46f5cc:{NFSU2_TR(0x46f5cc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f5d0:{NFSU2_TR(0x46f5d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f5d5ull));
TAIL_STATIC(0x4598c0u,459);
}
B46f5d5:L46f5d5:{c.instructions+=6;NFSU2_TR(0x46f5d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46f5d9:{NFSU2_TR(0x46f5d9);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5db:{NFSU2_TR(0x46f5db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5dc:{NFSU2_TR(0x46f5dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5dd:{NFSU2_TR(0x46f5dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5df:{NFSU2_TR(0x46f5df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f5e4ull));
TAIL_STATIC(0x4598f0u,459);
}
B46f5e4:L46f5e4:{c.instructions+=5;NFSU2_TR(0x46f5e4);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5e6:{NFSU2_TR(0x46f5e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5e7:{NFSU2_TR(0x46f5e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5e9:{NFSU2_TR(0x46f5e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f5ea:{NFSU2_TR(0x46f5ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f5efull));
TAIL_STATIC(0x4598f0u,459);
}
B46f5ef:L46f5ef:{c.instructions+=4;NFSU2_TR(0x46f5ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f5f0:{NFSU2_TR(0x46f5f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x152ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f5f7:{NFSU2_TR(0x46f5f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46f5fe:{NFSU2_TR(0x46f5fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46f5ff:L46f5ff:{c.instructions+=3;NFSU2_TR(0x46f5ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f600:{NFSU2_TR(0x46f600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46f601:{NFSU2_TR(0x46f601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f610:L46f610:{c.instructions+=6;NFSU2_TR(0x46f610);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f611:{NFSU2_TR(0x46f611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f612:{NFSU2_TR(0x46f612);
__builtin_memmove((R+24),(R+4),4);
}
B46f614:{NFSU2_TR(0x46f614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f617:{NFSU2_TR(0x46f617);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B46f61b:{NFSU2_TR(0x46f61b);
if(r1(R+518)){{goto L46f7be;}}
}
B46f621:L46f621:{c.instructions+=3;NFSU2_TR(0x46f621);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46f627:{NFSU2_TR(0x46f627);
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
B46f629:{NFSU2_TR(0x46f629);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f713;}}
}
B46f62f:L46f62f:{c.instructions+=4;NFSU2_TR(0x46f62f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f632:{NFSU2_TR(0x46f632);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f635:{NFSU2_TR(0x46f635);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46f638:{NFSU2_TR(0x46f638);
if(r1(R+518)){{goto L46f70b;}}
}
B46f63e:L46f63e:{c.instructions+=2;NFSU2_TR(0x46f63e);
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
B46f640:{NFSU2_TR(0x46f640);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f70b;}}
}
B46f646:L46f646:{c.instructions+=3;NFSU2_TR(0x46f646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46f648:{NFSU2_TR(0x46f648);
__builtin_memmove((R+4),(R+24),4);
}
B46f64a:{NFSU2_TR(0x46f64a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f64dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46f64d:L46f64d:{c.instructions+=4;NFSU2_TR(0x46f64d);
{u32 ea_=u32(u32(7898624u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46f653:{NFSU2_TR(0x46f653);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46f655:{NFSU2_TR(0x46f655);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46f658:{NFSU2_TR(0x46f658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f7a0;}}
}
B46f65e:L46f65e:{c.instructions+=6;NFSU2_TR(0x46f65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f661:{NFSU2_TR(0x46f661);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f668:{NFSU2_TR(0x46f668);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46f66b:{NFSU2_TR(0x46f66b);
w4(R+4,u32(0x7f0050ull));
}
B46f670:{NFSU2_TR(0x46f670);
{u32 ea_=u32(u32(8323168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f676:{NFSU2_TR(0x46f676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f67bull));
TAIL_STATIC(0x4599e0u,459);
}
B46f67b:L46f67b:{c.instructions+=7;NFSU2_TR(0x46f67b);
{u32 ea_=u32(u32(7898604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f681:{NFSU2_TR(0x46f681);
__builtin_memmove((R+4),gp(0x7f0064),4);
}
B46f687:{NFSU2_TR(0x46f687);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f68d:{NFSU2_TR(0x46f68d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f691:{NFSU2_TR(0x46f691);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f693:{NFSU2_TR(0x46f693);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f697:{NFSU2_TR(0x46f697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f69cull));
TAIL_STATIC(0x75bed4u,75b);
}
B46f69c:L46f69c:{c.instructions+=9;NFSU2_TR(0x46f69c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f6a2:{NFSU2_TR(0x46f6a2);
{u32 ea_=u32(u32(7898620u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46f6a8:{NFSU2_TR(0x46f6a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46f6ae:{NFSU2_TR(0x46f6ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f6af:{NFSU2_TR(0x46f6af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f6b0:{NFSU2_TR(0x46f6b0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f6b3:{NFSU2_TR(0x46f6b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f6b4:{NFSU2_TR(0x46f6b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f6ba:{NFSU2_TR(0x46f6ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f6bfull));
TAIL_STATIC(0x459990u,459);
}
B46f6bf:L46f6bf:{c.instructions+=6;NFSU2_TR(0x46f6bf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f6c5:{NFSU2_TR(0x46f6c5);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46f6cb:{NFSU2_TR(0x46f6cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f6cd:{NFSU2_TR(0x46f6cd);
{u32 ea_=u32(u32(7898616u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f6d3:{NFSU2_TR(0x46f6d3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f6d7:{NFSU2_TR(0x46f6d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f6dcull));
TAIL_STATIC(0x75bed4u,75b);
}
B46f6dc:L46f6dc:{c.instructions+=7;NFSU2_TR(0x46f6dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f6e2:{NFSU2_TR(0x46f6e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f6e3:{NFSU2_TR(0x46f6e3);
__builtin_memmove((R+0),gp(0x7885fc),4);
}
B46f6e8:{NFSU2_TR(0x46f6e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f6e9:{NFSU2_TR(0x46f6e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f6ea:{NFSU2_TR(0x46f6ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f6f0:{NFSU2_TR(0x46f6f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f6f5ull));
TAIL_STATIC(0x459990u,459);
}
B46f6f5:L46f6f5:{c.instructions+=3;NFSU2_TR(0x46f6f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f6fc:{NFSU2_TR(0x46f6fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46f706:{NFSU2_TR(0x46f706);
{goto L46f7a0;}
}
B46f70b:L46f70b:{c.instructions+=2;NFSU2_TR(0x46f70b);
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
B46f70d:{NFSU2_TR(0x46f70d);
if(r1(R+518)){{goto L46f7a0;}}
}
B46f713:L46f713:{c.instructions+=3;NFSU2_TR(0x46f713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46f715:{NFSU2_TR(0x46f715);
__builtin_memmove((R+4),(R+24),4);
}
B46f717:{NFSU2_TR(0x46f717);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f71aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46f71a:L46f71a:{c.instructions+=4;NFSU2_TR(0x46f71a);
{u32 ea_=u32(u32(7898624u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46f720:{NFSU2_TR(0x46f720);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46f722:{NFSU2_TR(0x46f722);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46f725:{NFSU2_TR(0x46f725);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L46f736;}}
}
B46f727:L46f727:{c.instructions+=4;NFSU2_TR(0x46f727);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f72a:{NFSU2_TR(0x46f72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f72d:{NFSU2_TR(0x46f72d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46f730:{NFSU2_TR(0x46f730);
if(r1(R+518)){{goto L46f736;}}
}
B46f732:L46f732:{c.instructions+=2;NFSU2_TR(0x46f732);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46f734:{NFSU2_TR(0x46f734);
if(r1(R+518)){{goto L46f7a0;}}
}
B46f736:L46f736:{c.instructions+=3;NFSU2_TR(0x46f736);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46f73c:{NFSU2_TR(0x46f73c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46f73e:{NFSU2_TR(0x46f73e);
if(r1(R+518)){{goto L46f7a0;}}
}
B46f740:L46f740:{c.instructions+=6;NFSU2_TR(0x46f740);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f746:{NFSU2_TR(0x46f746);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f74d:{NFSU2_TR(0x46f74d);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46f753:{NFSU2_TR(0x46f753);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f755:{NFSU2_TR(0x46f755);
{u32 ea_=u32(u32(7898608u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f75b:{NFSU2_TR(0x46f75b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f760ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46f760:L46f760:{c.instructions+=6;NFSU2_TR(0x46f760);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f761:{NFSU2_TR(0x46f761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f767:{NFSU2_TR(0x46f767);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f76c:{NFSU2_TR(0x46f76c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f76d:{NFSU2_TR(0x46f76d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f773:{NFSU2_TR(0x46f773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f778ull));
TAIL_STATIC(0x459990u,459);
}
B46f778:L46f778:{c.instructions+=4;NFSU2_TR(0x46f778);
{u32 ea_=u32(u32(7898612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f77e:{NFSU2_TR(0x46f77e);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f784:{NFSU2_TR(0x46f784);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f786:{NFSU2_TR(0x46f786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f78bull));
TAIL_STATIC(0x75bed4u,75b);
}
B46f78b:L46f78b:{c.instructions+=6;NFSU2_TR(0x46f78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f791:{NFSU2_TR(0x46f791);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f792:{NFSU2_TR(0x46f792);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f794:{NFSU2_TR(0x46f794);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f795:{NFSU2_TR(0x46f795);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f79b:{NFSU2_TR(0x46f79b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f7a0ull));
TAIL_STATIC(0x459990u,459);
}
B46f7a0:L46f7a0:{c.instructions+=5;NFSU2_TR(0x46f7a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f7a1:{NFSU2_TR(0x46f7a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46f7a5:{NFSU2_TR(0x46f7a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f7a6:{NFSU2_TR(0x46f7a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f7ac:{NFSU2_TR(0x46f7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f7b1ull));
TAIL_STATIC(0x46b100u,46b);
}
B46f7b1:L46f7b1:{c.instructions+=3;NFSU2_TR(0x46f7b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f7b2:{NFSU2_TR(0x46f7b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f7b8:{NFSU2_TR(0x46f7b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f7bdull));
TAIL_STATIC(0x46b100u,46b);
}
B46f7bd:L46f7bd:{c.instructions+=1;NFSU2_TR(0x46f7bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f7be:L46f7be:{c.instructions+=3;NFSU2_TR(0x46f7be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f7bf:{NFSU2_TR(0x46f7bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46f7c0:{NFSU2_TR(0x46f7c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f7d0:L46f7d0:{c.instructions+=7;NFSU2_TR(0x46f7d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B46f7d3:{NFSU2_TR(0x46f7d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f7d4:{NFSU2_TR(0x46f7d4);
__builtin_memmove((R+24),(R+4),4);
}
B46f7d6:{NFSU2_TR(0x46f7d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f7d9:{NFSU2_TR(0x46f7d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46f7db:{NFSU2_TR(0x46f7db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f7dc:{NFSU2_TR(0x46f7dc);
if(r1(R+518)){{goto L46f7f6;}}
}
B46f7de:L46f7de:{c.instructions+=3;NFSU2_TR(0x46f7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f7e1:{NFSU2_TR(0x46f7e1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46f7e4:{NFSU2_TR(0x46f7e4);
if(r1(R+518)){{goto L46f7ea;}}
}
B46f7e6:L46f7e6:{c.instructions+=2;NFSU2_TR(0x46f7e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46f7e8:{NFSU2_TR(0x46f7e8);
if(r1(R+518)){{goto L46f7f6;}}
}
B46f7ea:L46f7ea:{c.instructions+=3;NFSU2_TR(0x46f7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f7f0:{NFSU2_TR(0x46f7f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f7f4:{NFSU2_TR(0x46f7f4);
{goto L46f819;}
}
B46f7f6:L46f7f6:{c.instructions+=3;NFSU2_TR(0x46f7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f7f9:{NFSU2_TR(0x46f7f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46f7fb:{NFSU2_TR(0x46f7fb);
if(r1(R+518)){{goto L46f80f;}}
}
B46f7fd:L46f7fd:{c.instructions+=3;NFSU2_TR(0x46f7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46f803:{NFSU2_TR(0x46f803);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46f805:{NFSU2_TR(0x46f805);
if(r1(R+518)){{goto L46f80f;}}
}
B46f807:L46f807:{c.instructions+=2;NFSU2_TR(0x46f807);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46f80d:{NFSU2_TR(0x46f80d);
{goto L46f815;}
}
B46f80f:L46f80f:{c.instructions+=2;NFSU2_TR(0x46f80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f812:{NFSU2_TR(0x46f812);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46f815:L46f815:{c.instructions+=1;NFSU2_TR(0x46f815);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f819:L46f819:{c.instructions+=3;NFSU2_TR(0x46f819);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46f81f:{NFSU2_TR(0x46f81f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46f821:{NFSU2_TR(0x46f821);
if(r1(R+518)){{goto L46f882;}}
}
B46f823:L46f823:{c.instructions+=3;NFSU2_TR(0x46f823);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f826:{NFSU2_TR(0x46f826);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46f829:{NFSU2_TR(0x46f829);
if(r1(R+518)){{goto L46f882;}}
}
B46f82b:L46f82b:{c.instructions+=2;NFSU2_TR(0x46f82b);
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
B46f82d:{NFSU2_TR(0x46f82d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f882;}}
}
B46f82f:L46f82f:{c.instructions+=8;NFSU2_TR(0x46f82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f832:{NFSU2_TR(0x46f832);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f835:{NFSU2_TR(0x46f835);
__builtin_memmove((R+8),gp(0x7885cc),4);
}
B46f83b:{NFSU2_TR(0x46f83b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46f83d:{NFSU2_TR(0x46f83d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f841:{NFSU2_TR(0x46f841);
__builtin_memmove((R+4),(R+24),4);
}
B46f843:{NFSU2_TR(0x46f843);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f847:{NFSU2_TR(0x46f847);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f84aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46f84a:L46f84a:{c.instructions+=7;NFSU2_TR(0x46f84a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46f84e:{NFSU2_TR(0x46f84e);
{u32 ea_=u32(u32(7908016u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46f854:{NFSU2_TR(0x46f854);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f858:{NFSU2_TR(0x46f858);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B46f85a:{NFSU2_TR(0x46f85a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46f85c:{NFSU2_TR(0x46f85c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46f85f:{NFSU2_TR(0x46f85f);
if(r1(R+518)){{goto L46f87e;}}
}
B46f861:L46f861:{c.instructions+=8;NFSU2_TR(0x46f861);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46f863:{NFSU2_TR(0x46f863);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f867:{NFSU2_TR(0x46f867);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46f86b:{NFSU2_TR(0x46f86b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f86f:{NFSU2_TR(0x46f86f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B46f871:{NFSU2_TR(0x46f871);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46f873:{NFSU2_TR(0x46f873);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46f876:{NFSU2_TR(0x46f876);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L46f87e;}}
}
B46f878:L46f878:{c.instructions+=2;NFSU2_TR(0x46f878);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46f87a:{NFSU2_TR(0x46f87a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f87e:L46f87e:{c.instructions+=1;NFSU2_TR(0x46f87e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f882:L46f882:{c.instructions+=13;NFSU2_TR(0x46f882);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f886:{NFSU2_TR(0x46f886);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f88a:{NFSU2_TR(0x46f88a);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46f890:{NFSU2_TR(0x46f890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46f896:{NFSU2_TR(0x46f896);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f89a:{NFSU2_TR(0x46f89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f89d:{NFSU2_TR(0x46f89d);
{u32 ea_=u32(r4(R+24)+u32(456u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46f8a3:{NFSU2_TR(0x46f8a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f8a9:{NFSU2_TR(0x46f8a9);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46f8af:{NFSU2_TR(0x46f8af);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f8b5:{NFSU2_TR(0x46f8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f8b8:{NFSU2_TR(0x46f8b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46f8bb:{NFSU2_TR(0x46f8bb);
if(r1(R+518)){{goto L46f977;}}
}
B46f8c1:L46f8c1:{c.instructions+=2;NFSU2_TR(0x46f8c1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46f8c4:{NFSU2_TR(0x46f8c4);
if(r1(R+518)){{goto L46f977;}}
}
B46f8ca:L46f8ca:{c.instructions+=3;NFSU2_TR(0x46f8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f8cd:{NFSU2_TR(0x46f8cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46f8d4:{NFSU2_TR(0x46f8d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46f8e1;}}
}
B46f8d6:L46f8d6:{c.instructions+=3;NFSU2_TR(0x46f8d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f8d9:{NFSU2_TR(0x46f8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46f8dc:{NFSU2_TR(0x46f8dc);
{goto L46f97d;}
}
B46f8e1:L46f8e1:{c.instructions+=3;NFSU2_TR(0x46f8e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46f8e7:{NFSU2_TR(0x46f8e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46f8e9:{NFSU2_TR(0x46f8e9);
if(r1(R+518)){{goto L46f981;}}
}
B46f8ef:L46f8ef:{c.instructions+=4;NFSU2_TR(0x46f8ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46f8f5:{NFSU2_TR(0x46f8f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46f8f7:{NFSU2_TR(0x46f8f7);
u8 U[4];
w4(U+0,u32(0x42480000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f8fc:{NFSU2_TR(0x46f8fc);
if(r1(R+518)){{goto L46f93c;}}
}
B46f8fe:L46f8fe:{c.instructions+=4;NFSU2_TR(0x46f8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f904:{NFSU2_TR(0x46f904);
u8 U[4];
w4(U+0,u32(0x43480000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f909:{NFSU2_TR(0x46f909);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f90a:{NFSU2_TR(0x46f90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f90full));
TAIL_STATIC(0x468e30u,468);
}
B46f90f:L46f90f:{c.instructions+=6;NFSU2_TR(0x46f90f);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46f915:{NFSU2_TR(0x46f915);
{u32 ea_=u32(u32(7908012u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46f91b:{NFSU2_TR(0x46f91b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46f91e:{NFSU2_TR(0x46f91e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46f920:{NFSU2_TR(0x46f920);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46f923:{NFSU2_TR(0x46f923);
if(r1(R+514)){{goto L46f967;}}
}
B46f925:L46f925:{c.instructions+=5;NFSU2_TR(0x46f925);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f929:{NFSU2_TR(0x46f929);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f930:{NFSU2_TR(0x46f930);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46f936:{NFSU2_TR(0x46f936);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f93a:{NFSU2_TR(0x46f93a);
{goto L46f981;}
}
B46f93c:L46f93c:{c.instructions+=4;NFSU2_TR(0x46f93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f942:{NFSU2_TR(0x46f942);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f944:{NFSU2_TR(0x46f944);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f945:{NFSU2_TR(0x46f945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f94aull));
TAIL_STATIC(0x468e30u,468);
}
B46f94a:L46f94a:{c.instructions+=6;NFSU2_TR(0x46f94a);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46f950:{NFSU2_TR(0x46f950);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46f956:{NFSU2_TR(0x46f956);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46f959:{NFSU2_TR(0x46f959);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46f95b:{NFSU2_TR(0x46f95b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46f95e:{NFSU2_TR(0x46f95e);
if(r1(R+514)){{goto L46f967;}}
}
B46f960:L46f960:{c.instructions+=1;NFSU2_TR(0x46f960);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46f967:L46f967:{c.instructions+=4;NFSU2_TR(0x46f967);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f96b:{NFSU2_TR(0x46f96b);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46f971:{NFSU2_TR(0x46f971);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f975:{NFSU2_TR(0x46f975);
{goto L46f981;}
}
B46f977:L46f977:{c.instructions+=1;NFSU2_TR(0x46f977);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46f97d:L46f97d:{c.instructions+=1;NFSU2_TR(0x46f97d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46f981:L46f981:{c.instructions+=5;NFSU2_TR(0x46f981);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f985:{NFSU2_TR(0x46f985);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f98b:{NFSU2_TR(0x46f98b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f98c:{NFSU2_TR(0x46f98c);
__builtin_memmove((R+4),(R+28),4);
}
B46f98e:{NFSU2_TR(0x46f98e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f993ull));
TAIL_STATIC(0x576970u,576);
}
B46f993:L46f993:{c.instructions+=3;NFSU2_TR(0x46f993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46f995:{NFSU2_TR(0x46f995);
__builtin_memmove((R+4),(R+28),4);
}
B46f997:{NFSU2_TR(0x46f997);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46f99aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46f99a:L46f99a:{c.instructions+=14;NFSU2_TR(0x46f99a);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f9a0:{NFSU2_TR(0x46f9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f9a3:{NFSU2_TR(0x46f9a3);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46f9a9:{NFSU2_TR(0x46f9a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46f9aa:{NFSU2_TR(0x46f9aa);
{u32 ea_=u32(u32(7905936u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46f9b0:{NFSU2_TR(0x46f9b0);
{u32 ea_=u32(r4(R+0)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46f9b3:{NFSU2_TR(0x46f9b3);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46f9b6:{NFSU2_TR(0x46f9b6);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B46f9b8:{NFSU2_TR(0x46f9b8);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46f9bb:{NFSU2_TR(0x46f9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f9be:{NFSU2_TR(0x46f9be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46f9bf:{NFSU2_TR(0x46f9bf);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46f9c2:{NFSU2_TR(0x46f9c2);
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
B46f9c5:{NFSU2_TR(0x46f9c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46f9d0:L46f9d0:{c.instructions+=7;NFSU2_TR(0x46f9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46f9d1:{NFSU2_TR(0x46f9d1);
__builtin_memmove((R+24),(R+4),4);
}
B46f9d3:{NFSU2_TR(0x46f9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f9d6:{NFSU2_TR(0x46f9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f9d9:{NFSU2_TR(0x46f9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f9dc:{NFSU2_TR(0x46f9dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46f9e0:{NFSU2_TR(0x46f9e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46fa0d;}}
}
B46f9e2:L46f9e2:{c.instructions+=3;NFSU2_TR(0x46f9e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46f9e8:{NFSU2_TR(0x46f9e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46f9ea:{NFSU2_TR(0x46f9ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46fa0d;}}
}
B46f9ec:L46f9ec:{c.instructions+=4;NFSU2_TR(0x46f9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46f9ef:{NFSU2_TR(0x46f9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46f9f5:{NFSU2_TR(0x46f9f5);
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
B46f9f7:{NFSU2_TR(0x46f9f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46fa0d;}}
}
B46f9f9:L46f9f9:{c.instructions+=3;NFSU2_TR(0x46f9f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46f9fb:{NFSU2_TR(0x46f9fb);
__builtin_memmove((R+4),(R+24),4);
}
B46f9fd:{NFSU2_TR(0x46f9fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46fa00ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46fa00:L46fa00:{c.instructions+=4;NFSU2_TR(0x46fa00);
{u32 ea_=u32(u32(7898576u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46fa06:{NFSU2_TR(0x46fa06);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46fa08:{NFSU2_TR(0x46fa08);
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
B46fa0b:{NFSU2_TR(0x46fa0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46fa17;}}
}
B46fa0d:L46fa0d:{c.instructions+=4;NFSU2_TR(0x46fa0d);
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
B46fa0f:{NFSU2_TR(0x46fa0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46fa15:{NFSU2_TR(0x46fa15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46fa16:{NFSU2_TR(0x46fa16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46fa17:L46fa17:{c.instructions+=4;NFSU2_TR(0x46fa17);
w1(R+0,u8(0x1ull));
}
B46fa19:{NFSU2_TR(0x46fa19);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46fa1f:{NFSU2_TR(0x46fa1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46fa20:{NFSU2_TR(0x46fa20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46fa30:L46fa30:{c.instructions+=10;NFSU2_TR(0x46fa30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B46fa33:{NFSU2_TR(0x46fa33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fa34:{NFSU2_TR(0x46fa34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fa35:{NFSU2_TR(0x46fa35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fa36:{NFSU2_TR(0x46fa36);
__builtin_memmove((R+24),(R+4),4);
}
B46fa38:{NFSU2_TR(0x46fa38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46fa3e:{NFSU2_TR(0x46fa3e);
w4(R+20,u32(0x1ull));
}
B46fa43:{NFSU2_TR(0x46fa43);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46fa45:{NFSU2_TR(0x46fa45);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46fa47:{NFSU2_TR(0x46fa47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46fa79;}}
}
B46fa49:L46fa49:{c.instructions+=3;NFSU2_TR(0x46fa49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46fa4c:{NFSU2_TR(0x46fa4c);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B46fa52:{NFSU2_TR(0x46fa52);
if(r1(R+518)){{goto L46fa79;}}
}
B46fa54:L46fa54:{c.instructions+=5;NFSU2_TR(0x46fa54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fa5e:{NFSU2_TR(0x46fa5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46fa64:{NFSU2_TR(0x46fa64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46fa67:{NFSU2_TR(0x46fa67);
{u32 ea_=u32(r4(R+0)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fa6d:{NFSU2_TR(0x46fa6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46fa72ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46fa72:L46fa72:{c.instructions+=2;NFSU2_TR(0x46fa72);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B46fa73:{NFSU2_TR(0x46fa73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fa79:L46fa79:{c.instructions+=4;NFSU2_TR(0x46fa79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46fa7c:{NFSU2_TR(0x46fa7c);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B46fa82:{NFSU2_TR(0x46fa82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fa83:{NFSU2_TR(0x46fa83);
if(r1(R+518)){{goto L46fccc;}}
}
B46fa89:L46fa89:{c.instructions+=7;NFSU2_TR(0x46fa89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46fa8f:{NFSU2_TR(0x46fa8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46fa95:{NFSU2_TR(0x46fa95);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B46fa98:{NFSU2_TR(0x46fa98);
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
B46fa9b:{NFSU2_TR(0x46fa9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46faa1:{NFSU2_TR(0x46faa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46faa7:{NFSU2_TR(0x46faa7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L46fc03;}}
}
B46faad:L46faad:{c.instructions+=1;NFSU2_TR(0x46faad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x46ff64ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46fab4:L46fab4:{c.instructions+=3;NFSU2_TR(0x46fab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f0198ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fabe:{NFSU2_TR(0x46fabe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x27ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fac8:{NFSU2_TR(0x46fac8);
{goto L46fc17;}
}
B46facd:L46facd:{c.instructions+=3;NFSU2_TR(0x46facd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f0238ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fad7:{NFSU2_TR(0x46fad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x1aull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fae1:{NFSU2_TR(0x46fae1);
{goto L46fc17;}
}
B46fae6:L46fae6:{c.instructions+=3;NFSU2_TR(0x46fae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f02a8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46faf0:{NFSU2_TR(0x46faf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fafa:{NFSU2_TR(0x46fafa);
{goto L46fc17;}
}
B46faff:L46faff:{c.instructions+=3;NFSU2_TR(0x46faff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f0328ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb09:{NFSU2_TR(0x46fb09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb13:{NFSU2_TR(0x46fb13);
{goto L46fc17;}
}
B46fb18:L46fb18:{c.instructions+=3;NFSU2_TR(0x46fb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f0398ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb22:{NFSU2_TR(0x46fb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb2c:{NFSU2_TR(0x46fb2c);
{goto L46fc17;}
}
B46fb31:L46fb31:{c.instructions+=3;NFSU2_TR(0x46fb31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f03f8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb3b:{NFSU2_TR(0x46fb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb45:{NFSU2_TR(0x46fb45);
{goto L46fc17;}
}
B46fb4a:L46fb4a:{c.instructions+=3;NFSU2_TR(0x46fb4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f0448ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb54:{NFSU2_TR(0x46fb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x43ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb5e:{NFSU2_TR(0x46fb5e);
{goto L46fc17;}
}
B46fb63:L46fb63:{c.instructions+=3;NFSU2_TR(0x46fb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f0558ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb6d:{NFSU2_TR(0x46fb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb77:{NFSU2_TR(0x46fb77);
{goto L46fc17;}
}
B46fb7c:L46fb7c:{c.instructions+=3;NFSU2_TR(0x46fb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f0640ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb86:{NFSU2_TR(0x46fb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x22ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb90:{NFSU2_TR(0x46fb90);
{goto L46fc17;}
}
B46fb95:L46fb95:{c.instructions+=3;NFSU2_TR(0x46fb95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f06d0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fb9f:{NFSU2_TR(0x46fb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fba9:{NFSU2_TR(0x46fba9);
{goto L46fc17;}
}
B46fbab:L46fbab:{c.instructions+=3;NFSU2_TR(0x46fbab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f0750ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fbb5:{NFSU2_TR(0x46fbb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fbbf:{NFSU2_TR(0x46fbbf);
{goto L46fc17;}
}
B46fbc1:L46fbc1:{c.instructions+=3;NFSU2_TR(0x46fbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f07c8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fbcb:{NFSU2_TR(0x46fbcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x2full));
s4(u32(r4(U+0)),r4(U+4));
}
B46fbd5:{NFSU2_TR(0x46fbd5);
{goto L46fc17;}
}
B46fbd7:L46fbd7:{c.instructions+=3;NFSU2_TR(0x46fbd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f0888ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fbe1:{NFSU2_TR(0x46fbe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fbeb:{NFSU2_TR(0x46fbeb);
{goto L46fc17;}
}
B46fbed:L46fbed:{c.instructions+=3;NFSU2_TR(0x46fbed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f08f8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fbf7:{NFSU2_TR(0x46fbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fc01:{NFSU2_TR(0x46fc01);
{goto L46fc17;}
}
B46fc03:L46fc03:{c.instructions+=2;NFSU2_TR(0x46fc03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x7f0070ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fc0d:{NFSU2_TR(0x46fc0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
w4(U+4,u32(0x48ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fc17:L46fc17:{c.instructions+=3;NFSU2_TR(0x46fc17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46fc1d:{NFSU2_TR(0x46fc1d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46fc1f:{NFSU2_TR(0x46fc1f);
if(r1(R+518)){{goto L46fccc;}}
}
B46fc25:L46fc25:{c.instructions+=15;NFSU2_TR(0x46fc25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fc2f:{NFSU2_TR(0x46fc2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fc35:{NFSU2_TR(0x46fc35);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B46fc39:{NFSU2_TR(0x46fc39);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+8,u32(r2(U+0)));
}
B46fc3c:{NFSU2_TR(0x46fc3c);
u8 U[4];
w4(U+0,u32(0x40800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fc41:{NFSU2_TR(0x46fc41);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fc45:{NFSU2_TR(0x46fc45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fc46:{NFSU2_TR(0x46fc46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B46fc49:{NFSU2_TR(0x46fc49);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46fc4d:{NFSU2_TR(0x46fc4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fc51:{NFSU2_TR(0x46fc51);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46fc55:{NFSU2_TR(0x46fc55);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fc59:{NFSU2_TR(0x46fc59);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46fc5d:{NFSU2_TR(0x46fc5d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fc60:{NFSU2_TR(0x46fc60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46fc65ull));
TAIL_STATIC(0x46b240u,46b);
}
B46fc65:L46fc65:{c.instructions+=13;NFSU2_TR(0x46fc65);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B46fc69:{NFSU2_TR(0x46fc69);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B46fc6d:{NFSU2_TR(0x46fc6d);
u8 U[4];
w4(U+0,u32(0x40800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fc72:{NFSU2_TR(0x46fc72);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fc76:{NFSU2_TR(0x46fc76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fc77:{NFSU2_TR(0x46fc77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B46fc7a:{NFSU2_TR(0x46fc7a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46fc7e:{NFSU2_TR(0x46fc7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fc82:{NFSU2_TR(0x46fc82);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46fc86:{NFSU2_TR(0x46fc86);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fc8a:{NFSU2_TR(0x46fc8a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46fc8e:{NFSU2_TR(0x46fc8e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fc91:{NFSU2_TR(0x46fc91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46fc96ull));
TAIL_STATIC(0x46b240u,46b);
}
B46fc96:L46fc96:{c.instructions+=3;NFSU2_TR(0x46fc96);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46fc9a:{NFSU2_TR(0x46fc9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fca2:{NFSU2_TR(0x46fca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46fca7ull));
TAIL_STATIC(0x4599e0u,459);
}
B46fca7:L46fca7:{c.instructions+=5;NFSU2_TR(0x46fca7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46fcab:{NFSU2_TR(0x46fcab);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46fcaf:{NFSU2_TR(0x46fcaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fcb5:{NFSU2_TR(0x46fcb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46fcbd:{NFSU2_TR(0x46fcbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46fcc2ull));
TAIL_STATIC(0x4599e0u,459);
}
B46fcc2:L46fcc2:{c.instructions+=2;NFSU2_TR(0x46fcc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46fcc6:{NFSU2_TR(0x46fcc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fccc:L46fccc:{c.instructions+=3;NFSU2_TR(0x46fccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46fcd2:{NFSU2_TR(0x46fcd2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46fcd5:{NFSU2_TR(0x46fcd5);
if(r1(R+518)){{goto L46fde9;}}
}
B46fcdb:L46fcdb:{c.instructions+=2;NFSU2_TR(0x46fcdb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46fcdc:{NFSU2_TR(0x46fcdc);
if(r1(R+518)){{goto L46fd07;}}
}
B46fcde:L46fcde:{c.instructions+=7;NFSU2_TR(0x46fcde);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fce4:{NFSU2_TR(0x46fce4);
{u32 ea_=u32(u32(7898636u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46fcea:{NFSU2_TR(0x46fcea);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fcf0:{NFSU2_TR(0x46fcf0);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fcf6:{NFSU2_TR(0x46fcf6);
{u32 ea_=u32(u32(7895796u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46fcfc:{NFSU2_TR(0x46fcfc);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fd02:{NFSU2_TR(0x46fd02);
{goto L46fe48;}
}
B46fd07:L46fd07:{c.instructions+=6;NFSU2_TR(0x46fd07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46fd0d:{NFSU2_TR(0x46fd0d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B46fd0e:{NFSU2_TR(0x46fd0e);
__builtin_memmove((R+0),(R+8),4);
}
B46fd10:{NFSU2_TR(0x46fd10);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46fd13:{NFSU2_TR(0x46fd13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fd19:{NFSU2_TR(0x46fd19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46fd38;}}
}
B46fd1b:L46fd1b:{c.instructions+=3;NFSU2_TR(0x46fd1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46fd21:{NFSU2_TR(0x46fd21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fd27:{NFSU2_TR(0x46fd27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46fd31;}}
}
B46fd29:L46fd29:{c.instructions+=2;NFSU2_TR(0x46fd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fd2f:{NFSU2_TR(0x46fd2f);
{goto L46fd38;}
}
B46fd31:L46fd31:{c.instructions+=1;NFSU2_TR(0x46fd31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B46fd38:L46fd38:{c.instructions+=2;NFSU2_TR(0x46fd38);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46fd3e:{NFSU2_TR(0x46fd3e);
if(r1(R+518)){{goto L46fe48;}}
}
B46fd44:L46fd44:{c.instructions+=14;NFSU2_TR(0x46fd44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46fd4a:{NFSU2_TR(0x46fd4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B46fd4e:{NFSU2_TR(0x46fd4e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+8,u32(r2(U+0)));
}
B46fd51:{NFSU2_TR(0x46fd51);
u8 U[4];
w4(U+0,u32(0x40800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fd56:{NFSU2_TR(0x46fd56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fd5a:{NFSU2_TR(0x46fd5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fd5b:{NFSU2_TR(0x46fd5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B46fd5e:{NFSU2_TR(0x46fd5e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46fd62:{NFSU2_TR(0x46fd62);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fd66:{NFSU2_TR(0x46fd66);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46fd6a:{NFSU2_TR(0x46fd6a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fd6e:{NFSU2_TR(0x46fd6e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46fd72:{NFSU2_TR(0x46fd72);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fd75:{NFSU2_TR(0x46fd75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46fd7aull));
TAIL_STATIC(0x46b240u,46b);
}
B46fd7a:L46fd7a:{c.instructions+=13;NFSU2_TR(0x46fd7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B46fd7e:{NFSU2_TR(0x46fd7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B46fd82:{NFSU2_TR(0x46fd82);
u8 U[4];
w4(U+0,u32(0x40800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fd87:{NFSU2_TR(0x46fd87);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fd8b:{NFSU2_TR(0x46fd8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46fd8c:{NFSU2_TR(0x46fd8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B46fd8f:{NFSU2_TR(0x46fd8f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46fd93:{NFSU2_TR(0x46fd93);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fd97:{NFSU2_TR(0x46fd97);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46fd9b:{NFSU2_TR(0x46fd9b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fd9f:{NFSU2_TR(0x46fd9f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46fda3:{NFSU2_TR(0x46fda3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fda6:{NFSU2_TR(0x46fda6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46fdabull));
TAIL_STATIC(0x46b240u,46b);
}
B46fdab:L46fdab:{c.instructions+=5;NFSU2_TR(0x46fdab);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46fdb1:{NFSU2_TR(0x46fdb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46fdb5:{NFSU2_TR(0x46fdb5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46fdb9:{NFSU2_TR(0x46fdb9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fdbd:{NFSU2_TR(0x46fdbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46fdc2ull));
TAIL_STATIC(0x4599e0u,459);
}
B46fdc2:L46fdc2:{c.instructions+=6;NFSU2_TR(0x46fdc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46fdc6:{NFSU2_TR(0x46fdc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46fdca:{NFSU2_TR(0x46fdca);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46fdce:{NFSU2_TR(0x46fdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fdd4:{NFSU2_TR(0x46fdd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fdd8:{NFSU2_TR(0x46fdd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46fdddull));
TAIL_STATIC(0x4599e0u,459);
}
B46fddd:L46fddd:{c.instructions+=3;NFSU2_TR(0x46fddd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46fde1:{NFSU2_TR(0x46fde1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fde7:{NFSU2_TR(0x46fde7);
{goto L46fe48;}
}
B46fde9:L46fde9:{c.instructions+=11;NFSU2_TR(0x46fde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46fdef:{NFSU2_TR(0x46fdef);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B46fdf0:{NFSU2_TR(0x46fdf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fdf6:{NFSU2_TR(0x46fdf6);
__builtin_memmove((R+0),(R+8),4);
}
B46fdf8:{NFSU2_TR(0x46fdf8);
w4(R+8,u32(0x0ull));
}
B46fdfd:{NFSU2_TR(0x46fdfd);
__builtin_memmove((R+8),(R+519),1);
}
B46fe00:{NFSU2_TR(0x46fe00);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B46fe01:{NFSU2_TR(0x46fe01);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B46fe03:{NFSU2_TR(0x46fe03);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46fe05:{NFSU2_TR(0x46fe05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fe0b:{NFSU2_TR(0x46fe0b);
if(r1(R+518)){{goto L46fe42;}}
}
B46fe0d:L46fe0d:{c.instructions+=10;NFSU2_TR(0x46fe0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46fe10:{NFSU2_TR(0x46fe10);
{u32 ea_=u32(u32(7898632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fe16:{NFSU2_TR(0x46fe16);
{u32 ea_=u32(r4(R+0)+u32(188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46fe1c:{NFSU2_TR(0x46fe1c);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46fe22:{NFSU2_TR(0x46fe22);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46fe28:{NFSU2_TR(0x46fe28);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fe2e:{NFSU2_TR(0x46fe2e);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fe34:{NFSU2_TR(0x46fe34);
{u32 ea_=u32(u32(7895796u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46fe3a:{NFSU2_TR(0x46fe3a);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fe40:{NFSU2_TR(0x46fe40);
{goto L46fe48;}
}
B46fe42:L46fe42:{c.instructions+=1;NFSU2_TR(0x46fe42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fe48:L46fe48:{c.instructions+=8;NFSU2_TR(0x46fe48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46fe4e:{NFSU2_TR(0x46fe4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fe52:{NFSU2_TR(0x46fe52);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fe56:{NFSU2_TR(0x46fe56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46fe57:{NFSU2_TR(0x46fe57);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46fe5d:{NFSU2_TR(0x46fe5d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46fe5f:{NFSU2_TR(0x46fe5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46fe62:{NFSU2_TR(0x46fe62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46feeb;}}
}
B46fe68:L46fe68:{c.instructions+=6;NFSU2_TR(0x46fe68);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fe6c:{NFSU2_TR(0x46fe6c);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fe72:{NFSU2_TR(0x46fe72);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46fe76:{NFSU2_TR(0x46fe76);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46fe78:{NFSU2_TR(0x46fe78);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46fe7b:{NFSU2_TR(0x46fe7b);
if(r1(R+514)){{goto L46fe85;}}
}
B46fe7d:L46fe7d:{c.instructions+=2;NFSU2_TR(0x46fe7d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46fe7f:{NFSU2_TR(0x46fe7f);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fe85:L46fe85:{c.instructions+=9;NFSU2_TR(0x46fe85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46fe8b:{NFSU2_TR(0x46fe8b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46fe8f:{NFSU2_TR(0x46fe8f);
{u32 ea_=u32(r4(R+24)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46fe95:{NFSU2_TR(0x46fe95);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fe99:{NFSU2_TR(0x46fe99);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fe9d:{NFSU2_TR(0x46fe9d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46fea3:{NFSU2_TR(0x46fea3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46fea5:{NFSU2_TR(0x46fea5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46fea8:{NFSU2_TR(0x46fea8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46fef3;}}
}
B46feaa:L46feaa:{c.instructions+=6;NFSU2_TR(0x46feaa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46feae:{NFSU2_TR(0x46feae);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46feb4:{NFSU2_TR(0x46feb4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46feb8:{NFSU2_TR(0x46feb8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46feba:{NFSU2_TR(0x46feba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46febd:{NFSU2_TR(0x46febd);
if(r1(R+514)){{goto L46fec7;}}
}
B46febf:L46febf:{c.instructions+=2;NFSU2_TR(0x46febf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46fec1:{NFSU2_TR(0x46fec1);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fec7:L46fec7:{c.instructions+=8;NFSU2_TR(0x46fec7);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B46fecd:{NFSU2_TR(0x46fecd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46fed1:{NFSU2_TR(0x46fed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46fed4:{NFSU2_TR(0x46fed4);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46feda:{NFSU2_TR(0x46feda);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46fee0:{NFSU2_TR(0x46fee0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46fee2:{NFSU2_TR(0x46fee2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46fee5:{NFSU2_TR(0x46fee5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46fefb;}}
}
B46fee7:L46fee7:{c.instructions+=2;NFSU2_TR(0x46fee7);
w1(R+0,u8(0x1ull));
}
B46fee9:{NFSU2_TR(0x46fee9);
{goto L46fefd;}
}
B46feeb:L46feeb:{c.instructions+=2;NFSU2_TR(0x46feeb);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fef1:{NFSU2_TR(0x46fef1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46fe85u);}goto L46fe85;}
}
B46fef3:L46fef3:{c.instructions+=2;NFSU2_TR(0x46fef3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46fef9:{NFSU2_TR(0x46fef9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46fec7u);}goto L46fec7;}
}
B46fefb:L46fefb:{c.instructions+=1;NFSU2_TR(0x46fefb);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B46fefd:L46fefd:{c.instructions+=15;NFSU2_TR(0x46fefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ff00:{NFSU2_TR(0x46ff00);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46ff06:{NFSU2_TR(0x46ff06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46ff0c:{NFSU2_TR(0x46ff0c);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ff0f:{NFSU2_TR(0x46ff0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46ff12:{NFSU2_TR(0x46ff12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ff15:{NFSU2_TR(0x46ff15);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ff18:{NFSU2_TR(0x46ff18);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B46ff1f:{NFSU2_TR(0x46ff1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ff22:{NFSU2_TR(0x46ff22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ff26:{NFSU2_TR(0x46ff26);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46ff2a:{NFSU2_TR(0x46ff2a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ff30:{NFSU2_TR(0x46ff30);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ff32:{NFSU2_TR(0x46ff32);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46ff35:{NFSU2_TR(0x46ff35);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L46ff3b;}}
}
B46ff37:L46ff37:{c.instructions+=2;NFSU2_TR(0x46ff37);
w1(R+0,u8(0x1ull));
}
B46ff39:{NFSU2_TR(0x46ff39);
{goto L46ff3d;}
}
B46ff3b:L46ff3b:{c.instructions+=1;NFSU2_TR(0x46ff3b);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B46ff3d:L46ff3d:{c.instructions+=12;NFSU2_TR(0x46ff3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46ff40:{NFSU2_TR(0x46ff40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ff43:{NFSU2_TR(0x46ff43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ff49:{NFSU2_TR(0x46ff49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ff4c:{NFSU2_TR(0x46ff4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46ff4f:{NFSU2_TR(0x46ff4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ff55:{NFSU2_TR(0x46ff55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ff56:{NFSU2_TR(0x46ff56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46ff57:{NFSU2_TR(0x46ff57);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ff5a:{NFSU2_TR(0x46ff5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46ff5b:{NFSU2_TR(0x46ff5b);
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
B46ff5e:{NFSU2_TR(0x46ff5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ffa0:L46ffa0:{c.instructions+=3;NFSU2_TR(0x46ffa0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46ffa5:{NFSU2_TR(0x46ffa5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ffa6:{NFSU2_TR(0x46ffa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ffabull));
TAIL_STATIC(0x43e910u,43e);
}
B46ffab:L46ffab:{c.instructions+=3;NFSU2_TR(0x46ffab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46ffae:{NFSU2_TR(0x46ffae);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4dcull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4dcull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46ffb3:{NFSU2_TR(0x46ffb3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46ffdd;}}
}
B46ffb5:L46ffb5:{c.instructions+=6;NFSU2_TR(0x46ffb5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B46ffbb:{NFSU2_TR(0x46ffbb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B46ffbe:{NFSU2_TR(0x46ffbe);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B46ffc4:{NFSU2_TR(0x46ffc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ffc5:{NFSU2_TR(0x46ffc5);
u8 U[4];
w4(U+0,u32(0xdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ffca:{NFSU2_TR(0x46ffca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ffcfull));
TAIL_STATIC(0x440820u,440);
}
B46ffcf:L46ffcf:{c.instructions+=3;NFSU2_TR(0x46ffcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46ffd2:{NFSU2_TR(0x46ffd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46ffd4:{NFSU2_TR(0x46ffd4);
if(r1(R+518)){{goto L46ffdd;}}
}
B46ffd6:L46ffd6:{c.instructions+=2;NFSU2_TR(0x46ffd6);
__builtin_memmove((R+4),(R+0),4);
}
B46ffd8:{NFSU2_TR(0x46ffd8);
TAIL_STATIC(0x45c9c0u,45c);
}
B46ffdd:L46ffdd:{c.instructions+=2;NFSU2_TR(0x46ffdd);
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
B46ffdf:{NFSU2_TR(0x46ffdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ffe0:L46ffe0:{c.instructions+=7;NFSU2_TR(0x46ffe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ffe1:{NFSU2_TR(0x46ffe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46ffe5:{NFSU2_TR(0x46ffe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46ffe7:{NFSU2_TR(0x46ffe7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ffe8:{NFSU2_TR(0x46ffe8);
__builtin_memmove((R+28),(R+4),4);
}
B46ffea:{NFSU2_TR(0x46ffea);
__builtin_memmove((R+4),(R+24),4);
}
B46ffec:{NFSU2_TR(0x46ffec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ffefull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46ffef:L46ffef:{c.instructions+=5;NFSU2_TR(0x46ffef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46fff1:{NFSU2_TR(0x46fff1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B46fff4:{NFSU2_TR(0x46fff4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B46fff9:{NFSU2_TR(0x46fff9);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46fffc:{NFSU2_TR(0x46fffc);
if(r1(R+518)){TAIL_STATIC(0x47001fu,470);}
}
B46fffe:L46fffe:{c.instructions+=1;NFSU2_TR(0x46fffe);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
TAIL_STATIC(0x470001u,470);
}
XIT:NFSU2_TR_EXIT(0x46f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
