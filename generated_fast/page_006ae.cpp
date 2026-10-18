#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6a8(u8* __restrict R,Cpu& c);
u32 body_6ad(u8* __restrict R,Cpu& c);
u32 body_6af(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 body_6c4(u8* __restrict R,Cpu& c);
u32 body_6c6(u8* __restrict R,Cpu& c);
u32 body_6c7(u8* __restrict R,Cpu& c);
u32 body_6c8(u8* __restrict R,Cpu& c);
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 body_6ce(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_6d2(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_727(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ae,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ae,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ae(u8* __restrict R,Cpu& c);
u32 page_6ae(Cpu& c){return body_6ae(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ae(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ae001:goto L6ae001;
case 0x6ae006:goto L6ae006;
case 0x6ae009:c.instructions+=4;goto B6ae009;
case 0x6ae00c:c.instructions+=3;goto B6ae00c;
case 0x6ae00f:c.instructions+=2;goto B6ae00f;
case 0x6ae013:c.instructions+=1;goto B6ae013;
case 0x6ae015:goto L6ae015;
case 0x6ae019:c.instructions+=1;goto B6ae019;
case 0x6ae01b:goto L6ae01b;
case 0x6ae01e:c.instructions+=1;goto B6ae01e;
case 0x6ae020:goto L6ae020;
case 0x6ae021:c.instructions+=3;goto B6ae021;
case 0x6ae024:c.instructions+=2;goto B6ae024;
case 0x6ae027:c.instructions+=1;goto B6ae027;
case 0x6ae029:goto L6ae029;
case 0x6ae02c:c.instructions+=2;goto B6ae02c;
case 0x6ae02f:c.instructions+=1;goto B6ae02f;
case 0x6ae031:goto L6ae031;
case 0x6ae033:c.instructions+=1;goto B6ae033;
case 0x6ae035:goto L6ae035;
case 0x6ae036:c.instructions+=4;goto B6ae036;
case 0x6ae037:c.instructions+=3;goto B6ae037;
case 0x6ae038:c.instructions+=2;goto B6ae038;
case 0x6ae039:c.instructions+=1;goto B6ae039;
case 0x6ae03a:goto L6ae03a;
case 0x6ae03f:c.instructions+=1;goto B6ae03f;
case 0x6ae041:goto L6ae041;
case 0x6ae043:c.instructions+=10;goto B6ae043;
case 0x6ae044:c.instructions+=9;goto B6ae044;
case 0x6ae046:c.instructions+=8;goto B6ae046;
case 0x6ae04c:c.instructions+=7;goto B6ae04c;
case 0x6ae04d:c.instructions+=6;goto B6ae04d;
case 0x6ae04e:c.instructions+=5;goto B6ae04e;
case 0x6ae050:c.instructions+=4;goto B6ae050;
case 0x6ae053:c.instructions+=3;goto B6ae053;
case 0x6ae055:c.instructions+=2;goto B6ae055;
case 0x6ae057:c.instructions+=1;goto B6ae057;
case 0x6ae059:goto L6ae059;
case 0x6ae05b:c.instructions+=2;goto B6ae05b;
case 0x6ae05c:c.instructions+=1;goto B6ae05c;
case 0x6ae061:goto L6ae061;
case 0x6ae063:c.instructions+=4;goto B6ae063;
case 0x6ae064:c.instructions+=3;goto B6ae064;
case 0x6ae066:c.instructions+=2;goto B6ae066;
case 0x6ae06c:c.instructions+=1;goto B6ae06c;
case 0x6ae072:goto L6ae072;
case 0x6ae078:c.instructions+=1;goto B6ae078;
case 0x6ae07e:goto L6ae07e;
case 0x6ae083:c.instructions+=7;goto B6ae083;
case 0x6ae086:c.instructions+=6;goto B6ae086;
case 0x6ae089:c.instructions+=5;goto B6ae089;
case 0x6ae08b:c.instructions+=4;goto B6ae08b;
case 0x6ae08e:c.instructions+=3;goto B6ae08e;
case 0x6ae094:c.instructions+=2;goto B6ae094;
case 0x6ae097:c.instructions+=1;goto B6ae097;
case 0x6ae099:goto L6ae099;
case 0x6ae09f:c.instructions+=1;goto B6ae09f;
case 0x6ae0a1:goto L6ae0a1;
case 0x6ae0a7:c.instructions+=1;goto B6ae0a7;
case 0x6ae0a9:goto L6ae0a9;
case 0x6ae0b0:goto L6ae0b0;
case 0x6ae0b2:c.instructions+=3;goto B6ae0b2;
case 0x6ae0b3:c.instructions+=2;goto B6ae0b3;
case 0x6ae0b6:c.instructions+=1;goto B6ae0b6;
case 0x6ae0bc:goto L6ae0bc;
case 0x6ae0c2:c.instructions+=20;goto B6ae0c2;
case 0x6ae0c8:c.instructions+=19;goto B6ae0c8;
case 0x6ae0cb:c.instructions+=18;goto B6ae0cb;
case 0x6ae0ce:c.instructions+=17;goto B6ae0ce;
case 0x6ae0d2:c.instructions+=16;goto B6ae0d2;
case 0x6ae0d5:c.instructions+=15;goto B6ae0d5;
case 0x6ae0d8:c.instructions+=14;goto B6ae0d8;
case 0x6ae0dc:c.instructions+=13;goto B6ae0dc;
case 0x6ae0e0:c.instructions+=12;goto B6ae0e0;
case 0x6ae0e6:c.instructions+=11;goto B6ae0e6;
case 0x6ae0ed:c.instructions+=10;goto B6ae0ed;
case 0x6ae0f0:c.instructions+=9;goto B6ae0f0;
case 0x6ae0f5:c.instructions+=8;goto B6ae0f5;
case 0x6ae100:c.instructions+=7;goto B6ae100;
case 0x6ae107:c.instructions+=6;goto B6ae107;
case 0x6ae109:c.instructions+=5;goto B6ae109;
case 0x6ae10c:c.instructions+=4;goto B6ae10c;
case 0x6ae113:c.instructions+=3;goto B6ae113;
case 0x6ae116:c.instructions+=2;goto B6ae116;
case 0x6ae119:c.instructions+=1;goto B6ae119;
case 0x6ae11f:goto L6ae11f;
case 0x6ae122:goto L6ae122;
case 0x6ae125:c.instructions+=11;goto B6ae125;
case 0x6ae128:c.instructions+=10;goto B6ae128;
case 0x6ae12b:c.instructions+=9;goto B6ae12b;
case 0x6ae12e:c.instructions+=8;goto B6ae12e;
case 0x6ae131:c.instructions+=7;goto B6ae131;
case 0x6ae134:c.instructions+=6;goto B6ae134;
case 0x6ae137:c.instructions+=5;goto B6ae137;
case 0x6ae13a:c.instructions+=4;goto B6ae13a;
case 0x6ae13d:c.instructions+=3;goto B6ae13d;
case 0x6ae140:c.instructions+=2;goto B6ae140;
case 0x6ae143:c.instructions+=1;goto B6ae143;
case 0x6ae145:goto L6ae145;
case 0x6ae149:c.instructions+=1;goto B6ae149;
case 0x6ae14f:goto L6ae14f;
case 0x6ae152:c.instructions+=3;goto B6ae152;
case 0x6ae154:c.instructions+=2;goto B6ae154;
case 0x6ae15a:c.instructions+=1;goto B6ae15a;
case 0x6ae15c:goto L6ae15c;
case 0x6ae15e:c.instructions+=1;goto B6ae15e;
case 0x6ae160:goto L6ae160;
case 0x6ae163:c.instructions+=1;goto B6ae163;
case 0x6ae165:goto L6ae165;
case 0x6ae167:c.instructions+=1;goto B6ae167;
case 0x6ae169:goto L6ae169;
case 0x6ae16f:c.instructions+=1;goto B6ae16f;
case 0x6ae171:goto L6ae171;
case 0x6ae173:c.instructions+=1;goto B6ae173;
case 0x6ae175:goto L6ae175;
case 0x6ae177:c.instructions+=1;goto B6ae177;
case 0x6ae179:goto L6ae179;
case 0x6ae17b:c.instructions+=3;goto B6ae17b;
case 0x6ae17c:c.instructions+=2;goto B6ae17c;
case 0x6ae17e:c.instructions+=1;goto B6ae17e;
case 0x6ae181:goto L6ae181;
case 0x6ae186:c.instructions+=1;goto B6ae186;
case 0x6ae188:goto L6ae188;
case 0x6ae18e:c.instructions+=1;goto B6ae18e;
case 0x6ae190:goto L6ae190;
case 0x6ae196:goto L6ae196;
case 0x6ae19a:c.instructions+=2;goto B6ae19a;
case 0x6ae19e:c.instructions+=1;goto B6ae19e;
case 0x6ae1a0:goto L6ae1a0;
case 0x6ae1a3:c.instructions+=1;goto B6ae1a3;
case 0x6ae1a6:goto L6ae1a6;
case 0x6ae1a8:c.instructions+=5;goto B6ae1a8;
case 0x6ae1ab:c.instructions+=4;goto B6ae1ab;
case 0x6ae1ae:c.instructions+=3;goto B6ae1ae;
case 0x6ae1b1:c.instructions+=2;goto B6ae1b1;
case 0x6ae1b4:c.instructions+=1;goto B6ae1b4;
case 0x6ae1b6:goto L6ae1b6;
case 0x6ae1b9:c.instructions+=2;goto B6ae1b9;
case 0x6ae1bc:c.instructions+=1;goto B6ae1bc;
case 0x6ae1be:goto L6ae1be;
case 0x6ae1c1:c.instructions+=2;goto B6ae1c1;
case 0x6ae1c4:c.instructions+=1;goto B6ae1c4;
case 0x6ae1c6:goto L6ae1c6;
case 0x6ae1c9:c.instructions+=6;goto B6ae1c9;
case 0x6ae1cc:c.instructions+=5;goto B6ae1cc;
case 0x6ae1cf:c.instructions+=4;goto B6ae1cf;
case 0x6ae1d1:c.instructions+=3;goto B6ae1d1;
case 0x6ae1d4:c.instructions+=2;goto B6ae1d4;
case 0x6ae1d7:c.instructions+=1;goto B6ae1d7;
case 0x6ae1d9:goto L6ae1d9;
case 0x6ae1db:c.instructions+=1;goto B6ae1db;
case 0x6ae1dc:goto L6ae1dc;
case 0x6ae1df:c.instructions+=2;goto B6ae1df;
case 0x6ae1e2:c.instructions+=1;goto B6ae1e2;
case 0x6ae1e4:goto L6ae1e4;
case 0x6ae1e8:c.instructions+=4;goto B6ae1e8;
case 0x6ae1ea:c.instructions+=3;goto B6ae1ea;
case 0x6ae1ec:c.instructions+=2;goto B6ae1ec;
case 0x6ae1f3:c.instructions+=1;goto B6ae1f3;
case 0x6ae1f9:goto L6ae1f9;
case 0x6ae1fc:c.instructions+=1;goto B6ae1fc;
case 0x6ae1fe:goto L6ae1fe;
case 0x6ae201:c.instructions+=2;goto B6ae201;
case 0x6ae205:c.instructions+=1;goto B6ae205;
case 0x6ae20b:goto L6ae20b;
case 0x6ae20d:goto L6ae20d;
case 0x6ae210:c.instructions+=6;goto B6ae210;
case 0x6ae213:c.instructions+=5;goto B6ae213;
case 0x6ae216:c.instructions+=4;goto B6ae216;
case 0x6ae219:c.instructions+=3;goto B6ae219;
case 0x6ae21c:c.instructions+=2;goto B6ae21c;
case 0x6ae21f:c.instructions+=1;goto B6ae21f;
case 0x6ae225:goto L6ae225;
case 0x6ae228:c.instructions+=2;goto B6ae228;
case 0x6ae22b:c.instructions+=1;goto B6ae22b;
case 0x6ae22d:goto L6ae22d;
case 0x6ae230:c.instructions+=3;goto B6ae230;
case 0x6ae232:c.instructions+=2;goto B6ae232;
case 0x6ae235:c.instructions+=1;goto B6ae235;
case 0x6ae238:goto L6ae238;
case 0x6ae23b:c.instructions+=4;goto B6ae23b;
case 0x6ae23d:c.instructions+=3;goto B6ae23d;
case 0x6ae243:c.instructions+=2;goto B6ae243;
case 0x6ae249:c.instructions+=1;goto B6ae249;
case 0x6ae24b:goto L6ae24b;
case 0x6ae24e:c.instructions+=7;goto B6ae24e;
case 0x6ae251:c.instructions+=6;goto B6ae251;
case 0x6ae254:c.instructions+=5;goto B6ae254;
case 0x6ae257:c.instructions+=4;goto B6ae257;
case 0x6ae25a:c.instructions+=3;goto B6ae25a;
case 0x6ae25c:c.instructions+=2;goto B6ae25c;
case 0x6ae25e:c.instructions+=1;goto B6ae25e;
case 0x6ae261:goto L6ae261;
case 0x6ae264:c.instructions+=1;goto B6ae264;
case 0x6ae266:goto L6ae266;
case 0x6ae269:c.instructions+=2;goto B6ae269;
case 0x6ae26f:c.instructions+=1;goto B6ae26f;
case 0x6ae271:goto L6ae271;
case 0x6ae274:c.instructions+=4;goto B6ae274;
case 0x6ae277:c.instructions+=3;goto B6ae277;
case 0x6ae27a:c.instructions+=2;goto B6ae27a;
case 0x6ae27d:c.instructions+=1;goto B6ae27d;
case 0x6ae27f:goto L6ae27f;
case 0x6ae281:goto L6ae281;
case 0x6ae282:goto L6ae282;
case 0x6ae283:c.instructions+=3;goto B6ae283;
case 0x6ae284:c.instructions+=2;goto B6ae284;
case 0x6ae285:c.instructions+=1;goto B6ae285;
case 0x6ae288:goto L6ae288;
case 0x6ae28b:c.instructions+=2;goto B6ae28b;
case 0x6ae28d:c.instructions+=1;goto B6ae28d;
case 0x6ae28f:goto L6ae28f;
case 0x6ae291:goto L6ae291;
case 0x6ae293:c.instructions+=1;goto B6ae293;
case 0x6ae295:goto L6ae295;
case 0x6ae298:c.instructions+=2;goto B6ae298;
case 0x6ae29a:c.instructions+=1;goto B6ae29a;
case 0x6ae29c:goto L6ae29c;
case 0x6ae29f:c.instructions+=1;goto B6ae29f;
case 0x6ae2a1:goto L6ae2a1;
case 0x6ae2a4:c.instructions+=2;goto B6ae2a4;
case 0x6ae2a6:c.instructions+=1;goto B6ae2a6;
case 0x6ae2a8:goto L6ae2a8;
case 0x6ae2ab:c.instructions+=1;goto B6ae2ab;
case 0x6ae2ad:goto L6ae2ad;
case 0x6ae2af:c.instructions+=2;goto B6ae2af;
case 0x6ae2b0:c.instructions+=1;goto B6ae2b0;
case 0x6ae2b2:goto L6ae2b2;
case 0x6ae2b8:c.instructions+=3;goto B6ae2b8;
case 0x6ae2bd:c.instructions+=2;goto B6ae2bd;
case 0x6ae2c2:c.instructions+=1;goto B6ae2c2;
case 0x6ae2c4:goto L6ae2c4;
case 0x6ae2ca:c.instructions+=2;goto B6ae2ca;
case 0x6ae2d0:c.instructions+=1;goto B6ae2d0;
case 0x6ae2d2:goto L6ae2d2;
case 0x6ae2d4:c.instructions+=1;goto B6ae2d4;
case 0x6ae2d5:goto L6ae2d5;
case 0x6ae2d6:c.instructions+=6;goto B6ae2d6;
case 0x6ae2d7:c.instructions+=5;goto B6ae2d7;
case 0x6ae2d8:c.instructions+=4;goto B6ae2d8;
case 0x6ae2db:c.instructions+=3;goto B6ae2db;
case 0x6ae2dd:c.instructions+=2;goto B6ae2dd;
case 0x6ae2df:c.instructions+=1;goto B6ae2df;
case 0x6ae2e1:goto L6ae2e1;
case 0x6ae2e4:c.instructions+=1;goto B6ae2e4;
case 0x6ae2e7:goto L6ae2e7;
case 0x6ae2e9:c.instructions+=3;goto B6ae2e9;
case 0x6ae2ec:c.instructions+=2;goto B6ae2ec;
case 0x6ae2f0:c.instructions+=1;goto B6ae2f0;
case 0x6ae2f2:goto L6ae2f2;
case 0x6ae2f3:c.instructions+=3;goto B6ae2f3;
case 0x6ae2f6:c.instructions+=2;goto B6ae2f6;
case 0x6ae2f8:c.instructions+=1;goto B6ae2f8;
case 0x6ae2fa:goto L6ae2fa;
case 0x6ae2fc:goto L6ae2fc;
case 0x6ae2ff:c.instructions+=1;goto B6ae2ff;
case 0x6ae304:goto L6ae304;
case 0x6ae306:c.instructions+=1;goto B6ae306;
case 0x6ae308:goto L6ae308;
case 0x6ae30a:goto L6ae30a;
case 0x6ae30b:c.instructions+=3;goto B6ae30b;
case 0x6ae30c:c.instructions+=2;goto B6ae30c;
case 0x6ae30d:c.instructions+=1;goto B6ae30d;
case 0x6ae30e:goto L6ae30e;
case 0x6ae310:c.instructions+=9;goto B6ae310;
case 0x6ae311:c.instructions+=8;goto B6ae311;
case 0x6ae313:c.instructions+=7;goto B6ae313;
case 0x6ae314:c.instructions+=6;goto B6ae314;
case 0x6ae315:c.instructions+=5;goto B6ae315;
case 0x6ae316:c.instructions+=4;goto B6ae316;
case 0x6ae318:c.instructions+=3;goto B6ae318;
case 0x6ae31c:c.instructions+=2;goto B6ae31c;
case 0x6ae31d:c.instructions+=1;goto B6ae31d;
case 0x6ae31f:goto L6ae31f;
case 0x6ae324:goto L6ae324;
case 0x6ae326:c.instructions+=2;goto B6ae326;
case 0x6ae328:c.instructions+=1;goto B6ae328;
case 0x6ae32a:goto L6ae32a;
case 0x6ae32f:goto L6ae32f;
case 0x6ae332:goto L6ae332;
case 0x6ae334:c.instructions+=5;goto B6ae334;
case 0x6ae337:c.instructions+=4;goto B6ae337;
case 0x6ae338:c.instructions+=3;goto B6ae338;
case 0x6ae33b:c.instructions+=2;goto B6ae33b;
case 0x6ae340:c.instructions+=1;goto B6ae340;
case 0x6ae342:goto L6ae342;
case 0x6ae345:c.instructions+=7;goto B6ae345;
case 0x6ae34b:c.instructions+=6;goto B6ae34b;
case 0x6ae34e:c.instructions+=5;goto B6ae34e;
case 0x6ae354:c.instructions+=4;goto B6ae354;
case 0x6ae356:c.instructions+=3;goto B6ae356;
case 0x6ae358:c.instructions+=2;goto B6ae358;
case 0x6ae35d:c.instructions+=1;goto B6ae35d;
case 0x6ae35f:goto L6ae35f;
case 0x6ae361:c.instructions+=2;goto B6ae361;
case 0x6ae362:c.instructions+=1;goto B6ae362;
case 0x6ae364:goto L6ae364;
case 0x6ae366:c.instructions+=1;goto B6ae366;
case 0x6ae36b:goto L6ae36b;
case 0x6ae36d:c.instructions+=2;goto B6ae36d;
case 0x6ae36f:c.instructions+=1;goto B6ae36f;
case 0x6ae375:goto L6ae375;
case 0x6ae378:goto L6ae378;
case 0x6ae379:c.instructions+=3;goto B6ae379;
case 0x6ae37c:c.instructions+=2;goto B6ae37c;
case 0x6ae37f:c.instructions+=1;goto B6ae37f;
case 0x6ae381:goto L6ae381;
case 0x6ae388:c.instructions+=1;goto B6ae388;
case 0x6ae38a:goto L6ae38a;
case 0x6ae38c:c.instructions+=1;goto B6ae38c;
case 0x6ae391:goto L6ae391;
case 0x6ae395:c.instructions+=2;goto B6ae395;
case 0x6ae399:c.instructions+=1;goto B6ae399;
case 0x6ae39b:goto L6ae39b;
case 0x6ae39e:goto L6ae39e;
case 0x6ae3a1:c.instructions+=7;goto B6ae3a1;
case 0x6ae3a7:c.instructions+=6;goto B6ae3a7;
case 0x6ae3aa:c.instructions+=5;goto B6ae3aa;
case 0x6ae3b0:c.instructions+=4;goto B6ae3b0;
case 0x6ae3b2:c.instructions+=3;goto B6ae3b2;
case 0x6ae3b4:c.instructions+=2;goto B6ae3b4;
case 0x6ae3b9:c.instructions+=1;goto B6ae3b9;
case 0x6ae3bb:goto L6ae3bb;
case 0x6ae3bd:c.instructions+=1;goto B6ae3bd;
case 0x6ae3c2:goto L6ae3c2;
case 0x6ae3c5:goto L6ae3c5;
case 0x6ae3c6:c.instructions+=3;goto B6ae3c6;
case 0x6ae3c9:c.instructions+=2;goto B6ae3c9;
case 0x6ae3cc:c.instructions+=1;goto B6ae3cc;
case 0x6ae3ce:goto L6ae3ce;
case 0x6ae3d0:c.instructions+=1;goto B6ae3d0;
case 0x6ae3d5:goto L6ae3d5;
case 0x6ae3dc:c.instructions+=1;goto B6ae3dc;
case 0x6ae3e2:goto L6ae3e2;
case 0x6ae3e4:c.instructions+=3;goto B6ae3e4;
case 0x6ae3e7:c.instructions+=2;goto B6ae3e7;
case 0x6ae3ea:c.instructions+=1;goto B6ae3ea;
case 0x6ae3ec:goto L6ae3ec;
case 0x6ae3ef:c.instructions+=7;goto B6ae3ef;
case 0x6ae3f5:c.instructions+=6;goto B6ae3f5;
case 0x6ae3f8:c.instructions+=5;goto B6ae3f8;
case 0x6ae3fe:c.instructions+=4;goto B6ae3fe;
case 0x6ae400:c.instructions+=3;goto B6ae400;
case 0x6ae402:c.instructions+=2;goto B6ae402;
case 0x6ae407:c.instructions+=1;goto B6ae407;
case 0x6ae409:goto L6ae409;
case 0x6ae40e:c.instructions+=1;goto B6ae40e;
case 0x6ae410:goto L6ae410;
case 0x6ae415:c.instructions+=1;goto B6ae415;
case 0x6ae417:goto L6ae417;
case 0x6ae41c:c.instructions+=1;goto B6ae41c;
case 0x6ae41e:goto L6ae41e;
case 0x6ae420:c.instructions+=2;goto B6ae420;
case 0x6ae421:c.instructions+=1;goto B6ae421;
case 0x6ae423:goto L6ae423;
case 0x6ae425:c.instructions+=1;goto B6ae425;
case 0x6ae42a:goto L6ae42a;
case 0x6ae42c:c.instructions+=2;goto B6ae42c;
case 0x6ae42e:c.instructions+=1;goto B6ae42e;
case 0x6ae433:goto L6ae433;
case 0x6ae435:goto L6ae435;
case 0x6ae437:c.instructions+=2;goto B6ae437;
case 0x6ae439:c.instructions+=1;goto B6ae439;
case 0x6ae43e:goto L6ae43e;
case 0x6ae440:goto L6ae440;
case 0x6ae442:c.instructions+=1;goto B6ae442;
case 0x6ae448:goto L6ae448;
case 0x6ae44b:goto L6ae44b;
case 0x6ae44c:c.instructions+=3;goto B6ae44c;
case 0x6ae44f:c.instructions+=2;goto B6ae44f;
case 0x6ae452:c.instructions+=1;goto B6ae452;
case 0x6ae454:goto L6ae454;
case 0x6ae458:c.instructions+=1;goto B6ae458;
case 0x6ae45e:goto L6ae45e;
case 0x6ae462:c.instructions+=1;goto B6ae462;
case 0x6ae468:goto L6ae468;
case 0x6ae46a:c.instructions+=3;goto B6ae46a;
case 0x6ae46d:c.instructions+=2;goto B6ae46d;
case 0x6ae470:c.instructions+=1;goto B6ae470;
case 0x6ae472:goto L6ae472;
case 0x6ae475:c.instructions+=7;goto B6ae475;
case 0x6ae47b:c.instructions+=6;goto B6ae47b;
case 0x6ae47e:c.instructions+=5;goto B6ae47e;
case 0x6ae484:c.instructions+=4;goto B6ae484;
case 0x6ae486:c.instructions+=3;goto B6ae486;
case 0x6ae488:c.instructions+=2;goto B6ae488;
case 0x6ae48d:c.instructions+=1;goto B6ae48d;
case 0x6ae48f:goto L6ae48f;
case 0x6ae491:c.instructions+=2;goto B6ae491;
case 0x6ae492:c.instructions+=1;goto B6ae492;
case 0x6ae494:goto L6ae494;
case 0x6ae496:c.instructions+=1;goto B6ae496;
case 0x6ae49c:goto L6ae49c;
case 0x6ae49e:c.instructions+=5;goto B6ae49e;
case 0x6ae49f:c.instructions+=4;goto B6ae49f;
case 0x6ae4a0:c.instructions+=3;goto B6ae4a0;
case 0x6ae4a1:c.instructions+=2;goto B6ae4a1;
case 0x6ae4a3:c.instructions+=1;goto B6ae4a3;
case 0x6ae4a8:goto L6ae4a8;
case 0x6ae4aa:c.instructions+=2;goto B6ae4aa;
case 0x6ae4ac:c.instructions+=1;goto B6ae4ac;
case 0x6ae4b2:goto L6ae4b2;
case 0x6ae4b4:c.instructions+=5;goto B6ae4b4;
case 0x6ae4b5:c.instructions+=4;goto B6ae4b5;
case 0x6ae4b6:c.instructions+=3;goto B6ae4b6;
case 0x6ae4b7:c.instructions+=2;goto B6ae4b7;
case 0x6ae4b9:c.instructions+=1;goto B6ae4b9;
case 0x6ae4be:goto L6ae4be;
case 0x6ae4c0:c.instructions+=2;goto B6ae4c0;
case 0x6ae4c2:c.instructions+=1;goto B6ae4c2;
case 0x6ae4c8:goto L6ae4c8;
case 0x6ae4cb:goto L6ae4cb;
case 0x6ae4cc:c.instructions+=3;goto B6ae4cc;
case 0x6ae4cf:c.instructions+=2;goto B6ae4cf;
case 0x6ae4d2:c.instructions+=1;goto B6ae4d2;
case 0x6ae4d4:goto L6ae4d4;
case 0x6ae4d6:c.instructions+=1;goto B6ae4d6;
case 0x6ae4db:goto L6ae4db;
case 0x6ae4dd:c.instructions+=2;goto B6ae4dd;
case 0x6ae4df:c.instructions+=1;goto B6ae4df;
case 0x6ae4e5:goto L6ae4e5;
case 0x6ae4e7:c.instructions+=1;goto B6ae4e7;
case 0x6ae4ec:goto L6ae4ec;
case 0x6ae4f0:c.instructions+=2;goto B6ae4f0;
case 0x6ae4f4:c.instructions+=1;goto B6ae4f4;
case 0x6ae4f6:goto L6ae4f6;
case 0x6ae4f9:c.instructions+=8;goto B6ae4f9;
case 0x6ae4fc:c.instructions+=7;goto B6ae4fc;
case 0x6ae502:c.instructions+=6;goto B6ae502;
case 0x6ae505:c.instructions+=5;goto B6ae505;
case 0x6ae50b:c.instructions+=4;goto B6ae50b;
case 0x6ae50d:c.instructions+=3;goto B6ae50d;
case 0x6ae50f:c.instructions+=2;goto B6ae50f;
case 0x6ae514:c.instructions+=1;goto B6ae514;
case 0x6ae516:goto L6ae516;
case 0x6ae51b:c.instructions+=1;goto B6ae51b;
case 0x6ae51d:goto L6ae51d;
case 0x6ae522:c.instructions+=1;goto B6ae522;
case 0x6ae524:goto L6ae524;
case 0x6ae526:c.instructions+=2;goto B6ae526;
case 0x6ae527:c.instructions+=1;goto B6ae527;
case 0x6ae529:goto L6ae529;
case 0x6ae52b:c.instructions+=1;goto B6ae52b;
case 0x6ae530:goto L6ae530;
case 0x6ae532:c.instructions+=2;goto B6ae532;
case 0x6ae534:c.instructions+=1;goto B6ae534;
case 0x6ae53a:goto L6ae53a;
case 0x6ae53c:c.instructions+=1;goto B6ae53c;
case 0x6ae541:goto L6ae541;
case 0x6ae543:c.instructions+=1;goto B6ae543;
case 0x6ae545:goto L6ae545;
case 0x6ae547:c.instructions+=1;goto B6ae547;
case 0x6ae54c:goto L6ae54c;
case 0x6ae54e:c.instructions+=2;goto B6ae54e;
case 0x6ae550:c.instructions+=1;goto B6ae550;
case 0x6ae555:goto L6ae555;
case 0x6ae557:c.instructions+=1;goto B6ae557;
case 0x6ae55d:goto L6ae55d;
case 0x6ae560:goto L6ae560;
case 0x6ae561:c.instructions+=3;goto B6ae561;
case 0x6ae564:c.instructions+=2;goto B6ae564;
case 0x6ae567:c.instructions+=1;goto B6ae567;
case 0x6ae569:goto L6ae569;
case 0x6ae56b:c.instructions+=3;goto B6ae56b;
case 0x6ae56e:c.instructions+=2;goto B6ae56e;
case 0x6ae571:c.instructions+=1;goto B6ae571;
case 0x6ae577:goto L6ae577;
case 0x6ae57a:c.instructions+=7;goto B6ae57a;
case 0x6ae580:c.instructions+=6;goto B6ae580;
case 0x6ae583:c.instructions+=5;goto B6ae583;
case 0x6ae589:c.instructions+=4;goto B6ae589;
case 0x6ae58b:c.instructions+=3;goto B6ae58b;
case 0x6ae58d:c.instructions+=2;goto B6ae58d;
case 0x6ae592:c.instructions+=1;goto B6ae592;
case 0x6ae594:goto L6ae594;
case 0x6ae599:c.instructions+=1;goto B6ae599;
case 0x6ae59b:goto L6ae59b;
case 0x6ae5a0:c.instructions+=1;goto B6ae5a0;
case 0x6ae5a2:goto L6ae5a2;
case 0x6ae5a7:c.instructions+=1;goto B6ae5a7;
case 0x6ae5a9:goto L6ae5a9;
case 0x6ae5ae:c.instructions+=1;goto B6ae5ae;
case 0x6ae5b0:goto L6ae5b0;
case 0x6ae5b4:c.instructions+=1;goto B6ae5b4;
case 0x6ae5b6:goto L6ae5b6;
case 0x6ae5b8:c.instructions+=1;goto B6ae5b8;
case 0x6ae5bd:goto L6ae5bd;
case 0x6ae5bf:goto L6ae5bf;
case 0x6ae5c2:c.instructions+=1;goto B6ae5c2;
case 0x6ae5c4:goto L6ae5c4;
case 0x6ae5c5:c.instructions+=2;goto B6ae5c5;
case 0x6ae5c7:c.instructions+=1;goto B6ae5c7;
case 0x6ae5cc:goto L6ae5cc;
case 0x6ae5ce:goto L6ae5ce;
case 0x6ae5d4:c.instructions+=3;goto B6ae5d4;
case 0x6ae5d9:c.instructions+=2;goto B6ae5d9;
case 0x6ae5de:c.instructions+=1;goto B6ae5de;
case 0x6ae5e0:goto L6ae5e0;
case 0x6ae5e2:c.instructions+=1;goto B6ae5e2;
case 0x6ae5e7:goto L6ae5e7;
case 0x6ae5e9:goto L6ae5e9;
case 0x6ae5eb:c.instructions+=1;goto B6ae5eb;
case 0x6ae5f0:goto L6ae5f0;
case 0x6ae5f2:goto L6ae5f2;
case 0x6ae5f4:c.instructions+=1;goto B6ae5f4;
case 0x6ae5f9:goto L6ae5f9;
case 0x6ae5fb:c.instructions+=1;goto B6ae5fb;
case 0x6ae5fd:goto L6ae5fd;
case 0x6ae603:c.instructions+=3;goto B6ae603;
case 0x6ae608:c.instructions+=2;goto B6ae608;
case 0x6ae60d:c.instructions+=1;goto B6ae60d;
case 0x6ae60f:goto L6ae60f;
case 0x6ae611:c.instructions+=1;goto B6ae611;
case 0x6ae616:goto L6ae616;
case 0x6ae618:goto L6ae618;
case 0x6ae61a:c.instructions+=1;goto B6ae61a;
case 0x6ae61b:goto L6ae61b;
case 0x6ae61d:c.instructions+=3;goto B6ae61d;
case 0x6ae620:c.instructions+=2;goto B6ae620;
case 0x6ae623:c.instructions+=1;goto B6ae623;
case 0x6ae625:goto L6ae625;
case 0x6ae627:c.instructions+=1;goto B6ae627;
case 0x6ae628:goto L6ae628;
case 0x6ae62b:c.instructions+=7;goto B6ae62b;
case 0x6ae631:c.instructions+=6;goto B6ae631;
case 0x6ae634:c.instructions+=5;goto B6ae634;
case 0x6ae63a:c.instructions+=4;goto B6ae63a;
case 0x6ae63c:c.instructions+=3;goto B6ae63c;
case 0x6ae63e:c.instructions+=2;goto B6ae63e;
case 0x6ae643:c.instructions+=1;goto B6ae643;
case 0x6ae645:goto L6ae645;
case 0x6ae647:c.instructions+=1;goto B6ae647;
case 0x6ae64c:goto L6ae64c;
case 0x6ae64f:goto L6ae64f;
case 0x6ae650:c.instructions+=3;goto B6ae650;
case 0x6ae653:c.instructions+=2;goto B6ae653;
case 0x6ae656:c.instructions+=1;goto B6ae656;
case 0x6ae658:goto L6ae658;
case 0x6ae65a:c.instructions+=1;goto B6ae65a;
case 0x6ae660:goto L6ae660;
case 0x6ae663:c.instructions+=4;goto B6ae663;
case 0x6ae664:c.instructions+=3;goto B6ae664;
case 0x6ae667:c.instructions+=2;goto B6ae667;
case 0x6ae66a:c.instructions+=1;goto B6ae66a;
case 0x6ae670:goto L6ae670;
case 0x6ae672:c.instructions+=1;goto B6ae672;
case 0x6ae677:goto L6ae677;
case 0x6ae679:c.instructions+=2;goto B6ae679;
case 0x6ae67b:c.instructions+=1;goto B6ae67b;
case 0x6ae681:goto L6ae681;
case 0x6ae683:c.instructions+=1;goto B6ae683;
case 0x6ae688:goto L6ae688;
case 0x6ae68c:c.instructions+=2;goto B6ae68c;
case 0x6ae690:c.instructions+=1;goto B6ae690;
case 0x6ae696:goto L6ae696;
case 0x6ae699:c.instructions+=8;goto B6ae699;
case 0x6ae69c:c.instructions+=7;goto B6ae69c;
case 0x6ae6a2:c.instructions+=6;goto B6ae6a2;
case 0x6ae6a5:c.instructions+=5;goto B6ae6a5;
case 0x6ae6ab:c.instructions+=4;goto B6ae6ab;
case 0x6ae6ad:c.instructions+=3;goto B6ae6ad;
case 0x6ae6af:c.instructions+=2;goto B6ae6af;
case 0x6ae6b4:c.instructions+=1;goto B6ae6b4;
case 0x6ae6b6:goto L6ae6b6;
case 0x6ae6bb:c.instructions+=1;goto B6ae6bb;
case 0x6ae6bd:goto L6ae6bd;
case 0x6ae6c2:c.instructions+=1;goto B6ae6c2;
case 0x6ae6c4:goto L6ae6c4;
case 0x6ae6c9:c.instructions+=1;goto B6ae6c9;
case 0x6ae6cb:goto L6ae6cb;
case 0x6ae6d0:c.instructions+=1;goto B6ae6d0;
case 0x6ae6d2:goto L6ae6d2;
case 0x6ae6d7:c.instructions+=1;goto B6ae6d7;
case 0x6ae6d9:goto L6ae6d9;
case 0x6ae6de:c.instructions+=1;goto B6ae6de;
case 0x6ae6e0:goto L6ae6e0;
case 0x6ae6e2:c.instructions+=2;goto B6ae6e2;
case 0x6ae6e3:c.instructions+=1;goto B6ae6e3;
case 0x6ae6e5:goto L6ae6e5;
case 0x6ae6e7:c.instructions+=1;goto B6ae6e7;
case 0x6ae6ec:goto L6ae6ec;
case 0x6ae6ee:c.instructions+=2;goto B6ae6ee;
case 0x6ae6f0:c.instructions+=1;goto B6ae6f0;
case 0x6ae6f6:goto L6ae6f6;
case 0x6ae6f8:c.instructions+=1;goto B6ae6f8;
case 0x6ae6fd:goto L6ae6fd;
case 0x6ae6ff:goto L6ae6ff;
case 0x6ae701:c.instructions+=1;goto B6ae701;
case 0x6ae706:goto L6ae706;
case 0x6ae708:c.instructions+=2;goto B6ae708;
case 0x6ae70a:c.instructions+=1;goto B6ae70a;
case 0x6ae710:goto L6ae710;
case 0x6ae712:c.instructions+=1;goto B6ae712;
case 0x6ae717:goto L6ae717;
case 0x6ae719:goto L6ae719;
case 0x6ae71b:c.instructions+=2;goto B6ae71b;
case 0x6ae71d:c.instructions+=1;goto B6ae71d;
case 0x6ae722:goto L6ae722;
case 0x6ae724:goto L6ae724;
case 0x6ae728:c.instructions+=1;goto B6ae728;
case 0x6ae72a:goto L6ae72a;
case 0x6ae72c:c.instructions+=1;goto B6ae72c;
case 0x6ae731:goto L6ae731;
case 0x6ae733:goto L6ae733;
case 0x6ae735:c.instructions+=1;goto B6ae735;
case 0x6ae73a:goto L6ae73a;
case 0x6ae73c:goto L6ae73c;
case 0x6ae73e:c.instructions+=1;goto B6ae73e;
case 0x6ae744:goto L6ae744;
case 0x6ae747:goto L6ae747;
case 0x6ae748:c.instructions+=3;goto B6ae748;
case 0x6ae74b:c.instructions+=2;goto B6ae74b;
case 0x6ae74e:c.instructions+=1;goto B6ae74e;
case 0x6ae754:goto L6ae754;
case 0x6ae756:c.instructions+=3;goto B6ae756;
case 0x6ae759:c.instructions+=2;goto B6ae759;
case 0x6ae75c:c.instructions+=1;goto B6ae75c;
case 0x6ae75e:goto L6ae75e;
case 0x6ae761:c.instructions+=8;goto B6ae761;
case 0x6ae767:c.instructions+=7;goto B6ae767;
case 0x6ae76a:c.instructions+=6;goto B6ae76a;
case 0x6ae770:c.instructions+=5;goto B6ae770;
case 0x6ae772:c.instructions+=4;goto B6ae772;
case 0x6ae774:c.instructions+=3;goto B6ae774;
case 0x6ae779:c.instructions+=2;goto B6ae779;
case 0x6ae77b:c.instructions+=1;goto B6ae77b;
case 0x6ae77d:goto L6ae77d;
case 0x6ae77f:goto L6ae77f;
case 0x6ae784:c.instructions+=1;goto B6ae784;
case 0x6ae786:goto L6ae786;
case 0x6ae78b:c.instructions+=1;goto B6ae78b;
case 0x6ae78d:goto L6ae78d;
case 0x6ae792:c.instructions+=1;goto B6ae792;
case 0x6ae794:goto L6ae794;
case 0x6ae799:c.instructions+=1;goto B6ae799;
case 0x6ae79b:goto L6ae79b;
case 0x6ae79d:c.instructions+=1;goto B6ae79d;
case 0x6ae7a2:goto L6ae7a2;
case 0x6ae7a4:goto L6ae7a4;
case 0x6ae7a9:c.instructions+=1;goto B6ae7a9;
case 0x6ae7ab:goto L6ae7ab;
case 0x6ae7b0:c.instructions+=1;goto B6ae7b0;
case 0x6ae7b2:goto L6ae7b2;
case 0x6ae7b7:c.instructions+=1;goto B6ae7b7;
case 0x6ae7b9:goto L6ae7b9;
case 0x6ae7bb:c.instructions+=1;goto B6ae7bb;
case 0x6ae7c0:goto L6ae7c0;
case 0x6ae7c2:c.instructions+=2;goto B6ae7c2;
case 0x6ae7c4:c.instructions+=1;goto B6ae7c4;
case 0x6ae7ca:goto L6ae7ca;
case 0x6ae7cd:goto L6ae7cd;
case 0x6ae7ce:c.instructions+=3;goto B6ae7ce;
case 0x6ae7d1:c.instructions+=2;goto B6ae7d1;
case 0x6ae7d4:c.instructions+=1;goto B6ae7d4;
case 0x6ae7d6:goto L6ae7d6;
case 0x6ae7d8:c.instructions+=3;goto B6ae7d8;
case 0x6ae7db:c.instructions+=2;goto B6ae7db;
case 0x6ae7de:c.instructions+=1;goto B6ae7de;
case 0x6ae7e0:goto L6ae7e0;
case 0x6ae7e3:c.instructions+=7;goto B6ae7e3;
case 0x6ae7e9:c.instructions+=6;goto B6ae7e9;
case 0x6ae7ec:c.instructions+=5;goto B6ae7ec;
case 0x6ae7f2:c.instructions+=4;goto B6ae7f2;
case 0x6ae7f4:c.instructions+=3;goto B6ae7f4;
case 0x6ae7f6:c.instructions+=2;goto B6ae7f6;
case 0x6ae7fb:c.instructions+=1;goto B6ae7fb;
case 0x6ae7fd:goto L6ae7fd;
case 0x6ae7ff:c.instructions+=1;goto B6ae7ff;
case 0x6ae804:goto L6ae804;
case 0x6ae806:c.instructions+=2;goto B6ae806;
case 0x6ae808:c.instructions+=1;goto B6ae808;
case 0x6ae80e:goto L6ae80e;
case 0x6ae811:goto L6ae811;
case 0x6ae812:c.instructions+=3;goto B6ae812;
case 0x6ae815:c.instructions+=2;goto B6ae815;
case 0x6ae818:c.instructions+=1;goto B6ae818;
case 0x6ae81a:goto L6ae81a;
case 0x6ae81c:c.instructions+=1;goto B6ae81c;
case 0x6ae821:goto L6ae821;
case 0x6ae823:c.instructions+=3;goto B6ae823;
case 0x6ae826:c.instructions+=2;goto B6ae826;
case 0x6ae829:c.instructions+=1;goto B6ae829;
case 0x6ae82b:goto L6ae82b;
case 0x6ae82e:c.instructions+=7;goto B6ae82e;
case 0x6ae834:c.instructions+=6;goto B6ae834;
case 0x6ae837:c.instructions+=5;goto B6ae837;
case 0x6ae83d:c.instructions+=4;goto B6ae83d;
case 0x6ae83f:c.instructions+=3;goto B6ae83f;
case 0x6ae841:c.instructions+=2;goto B6ae841;
case 0x6ae846:c.instructions+=1;goto B6ae846;
case 0x6ae848:goto L6ae848;
case 0x6ae84d:c.instructions+=1;goto B6ae84d;
case 0x6ae84f:goto L6ae84f;
case 0x6ae851:c.instructions+=1;goto B6ae851;
case 0x6ae856:goto L6ae856;
case 0x6ae858:c.instructions+=2;goto B6ae858;
case 0x6ae85a:c.instructions+=1;goto B6ae85a;
case 0x6ae860:goto L6ae860;
case 0x6ae862:c.instructions+=1;goto B6ae862;
case 0x6ae867:goto L6ae867;
case 0x6ae869:c.instructions+=2;goto B6ae869;
case 0x6ae86b:c.instructions+=1;goto B6ae86b;
case 0x6ae871:goto L6ae871;
case 0x6ae874:goto L6ae874;
case 0x6ae875:c.instructions+=3;goto B6ae875;
case 0x6ae878:c.instructions+=2;goto B6ae878;
case 0x6ae87b:c.instructions+=1;goto B6ae87b;
case 0x6ae87d:goto L6ae87d;
case 0x6ae87f:c.instructions+=2;goto B6ae87f;
case 0x6ae882:c.instructions+=1;goto B6ae882;
case 0x6ae884:goto L6ae884;
case 0x6ae887:c.instructions+=7;goto B6ae887;
case 0x6ae88d:c.instructions+=6;goto B6ae88d;
case 0x6ae890:c.instructions+=5;goto B6ae890;
case 0x6ae896:c.instructions+=4;goto B6ae896;
case 0x6ae898:c.instructions+=3;goto B6ae898;
case 0x6ae89a:c.instructions+=2;goto B6ae89a;
case 0x6ae89f:c.instructions+=1;goto B6ae89f;
case 0x6ae8a1:goto L6ae8a1;
case 0x6ae8a6:c.instructions+=1;goto B6ae8a6;
case 0x6ae8a8:goto L6ae8a8;
case 0x6ae8ad:c.instructions+=1;goto B6ae8ad;
case 0x6ae8af:goto L6ae8af;
case 0x6ae8b4:c.instructions+=1;goto B6ae8b4;
case 0x6ae8b6:goto L6ae8b6;
case 0x6ae8b8:c.instructions+=1;goto B6ae8b8;
case 0x6ae8bd:goto L6ae8bd;
case 0x6ae8be:c.instructions+=2;goto B6ae8be;
case 0x6ae8c1:c.instructions+=1;goto B6ae8c1;
case 0x6ae8c3:goto L6ae8c3;
case 0x6ae8c5:c.instructions+=3;goto B6ae8c5;
case 0x6ae8c8:c.instructions+=2;goto B6ae8c8;
case 0x6ae8cb:c.instructions+=1;goto B6ae8cb;
case 0x6ae8cd:goto L6ae8cd;
case 0x6ae8d0:c.instructions+=7;goto B6ae8d0;
case 0x6ae8d6:c.instructions+=6;goto B6ae8d6;
case 0x6ae8d9:c.instructions+=5;goto B6ae8d9;
case 0x6ae8df:c.instructions+=4;goto B6ae8df;
case 0x6ae8e1:c.instructions+=3;goto B6ae8e1;
case 0x6ae8e3:c.instructions+=2;goto B6ae8e3;
case 0x6ae8e8:c.instructions+=1;goto B6ae8e8;
case 0x6ae8ea:goto L6ae8ea;
case 0x6ae8ec:c.instructions+=1;goto B6ae8ec;
case 0x6ae8f1:goto L6ae8f1;
case 0x6ae8f3:c.instructions+=2;goto B6ae8f3;
case 0x6ae8f5:c.instructions+=1;goto B6ae8f5;
case 0x6ae8fb:goto L6ae8fb;
case 0x6ae8fe:goto L6ae8fe;
case 0x6ae8ff:c.instructions+=3;goto B6ae8ff;
case 0x6ae902:c.instructions+=2;goto B6ae902;
case 0x6ae905:c.instructions+=1;goto B6ae905;
case 0x6ae907:goto L6ae907;
case 0x6ae909:c.instructions+=1;goto B6ae909;
case 0x6ae90e:goto L6ae90e;
case 0x6ae910:c.instructions+=3;goto B6ae910;
case 0x6ae913:c.instructions+=2;goto B6ae913;
case 0x6ae916:c.instructions+=1;goto B6ae916;
case 0x6ae918:goto L6ae918;
case 0x6ae91b:c.instructions+=7;goto B6ae91b;
case 0x6ae921:c.instructions+=6;goto B6ae921;
case 0x6ae924:c.instructions+=5;goto B6ae924;
case 0x6ae92a:c.instructions+=4;goto B6ae92a;
case 0x6ae92c:c.instructions+=3;goto B6ae92c;
case 0x6ae92e:c.instructions+=2;goto B6ae92e;
case 0x6ae933:c.instructions+=1;goto B6ae933;
case 0x6ae935:goto L6ae935;
case 0x6ae937:c.instructions+=1;goto B6ae937;
case 0x6ae93c:goto L6ae93c;
case 0x6ae93e:c.instructions+=2;goto B6ae93e;
case 0x6ae940:c.instructions+=1;goto B6ae940;
case 0x6ae946:goto L6ae946;
case 0x6ae949:goto L6ae949;
case 0x6ae94a:c.instructions+=3;goto B6ae94a;
case 0x6ae94d:c.instructions+=2;goto B6ae94d;
case 0x6ae950:c.instructions+=1;goto B6ae950;
case 0x6ae952:goto L6ae952;
case 0x6ae954:c.instructions+=3;goto B6ae954;
case 0x6ae957:c.instructions+=2;goto B6ae957;
case 0x6ae95a:c.instructions+=1;goto B6ae95a;
case 0x6ae95c:goto L6ae95c;
case 0x6ae95f:c.instructions+=7;goto B6ae95f;
case 0x6ae965:c.instructions+=6;goto B6ae965;
case 0x6ae968:c.instructions+=5;goto B6ae968;
case 0x6ae96e:c.instructions+=4;goto B6ae96e;
case 0x6ae970:c.instructions+=3;goto B6ae970;
case 0x6ae972:c.instructions+=2;goto B6ae972;
case 0x6ae977:c.instructions+=1;goto B6ae977;
case 0x6ae979:goto L6ae979;
case 0x6ae97b:c.instructions+=1;goto B6ae97b;
case 0x6ae980:goto L6ae980;
case 0x6ae982:c.instructions+=2;goto B6ae982;
case 0x6ae984:c.instructions+=1;goto B6ae984;
case 0x6ae98a:goto L6ae98a;
case 0x6ae98d:goto L6ae98d;
case 0x6ae98e:c.instructions+=3;goto B6ae98e;
case 0x6ae991:c.instructions+=2;goto B6ae991;
case 0x6ae994:c.instructions+=1;goto B6ae994;
case 0x6ae996:goto L6ae996;
case 0x6ae998:c.instructions+=3;goto B6ae998;
case 0x6ae99b:c.instructions+=2;goto B6ae99b;
case 0x6ae99e:c.instructions+=1;goto B6ae99e;
case 0x6ae9a0:goto L6ae9a0;
case 0x6ae9a3:c.instructions+=7;goto B6ae9a3;
case 0x6ae9a9:c.instructions+=6;goto B6ae9a9;
case 0x6ae9ac:c.instructions+=5;goto B6ae9ac;
case 0x6ae9b2:c.instructions+=4;goto B6ae9b2;
case 0x6ae9b4:c.instructions+=3;goto B6ae9b4;
case 0x6ae9b6:c.instructions+=2;goto B6ae9b6;
case 0x6ae9bb:c.instructions+=1;goto B6ae9bb;
case 0x6ae9bd:goto L6ae9bd;
case 0x6ae9bf:c.instructions+=2;goto B6ae9bf;
case 0x6ae9c1:c.instructions+=1;goto B6ae9c1;
case 0x6ae9c6:goto L6ae9c6;
case 0x6ae9c8:c.instructions+=2;goto B6ae9c8;
case 0x6ae9ca:c.instructions+=1;goto B6ae9ca;
case 0x6ae9d0:goto L6ae9d0;
case 0x6ae9d3:goto L6ae9d3;
case 0x6ae9d4:c.instructions+=3;goto B6ae9d4;
case 0x6ae9d7:c.instructions+=2;goto B6ae9d7;
case 0x6ae9da:c.instructions+=1;goto B6ae9da;
case 0x6ae9dc:goto L6ae9dc;
case 0x6ae9de:c.instructions+=1;goto B6ae9de;
case 0x6ae9e3:goto L6ae9e3;
case 0x6ae9e5:c.instructions+=3;goto B6ae9e5;
case 0x6ae9e8:c.instructions+=2;goto B6ae9e8;
case 0x6ae9eb:c.instructions+=1;goto B6ae9eb;
case 0x6ae9ed:goto L6ae9ed;
case 0x6ae9f0:c.instructions+=7;goto B6ae9f0;
case 0x6ae9f6:c.instructions+=6;goto B6ae9f6;
case 0x6ae9f9:c.instructions+=5;goto B6ae9f9;
case 0x6ae9ff:c.instructions+=4;goto B6ae9ff;
case 0x6aea01:c.instructions+=3;goto B6aea01;
case 0x6aea03:c.instructions+=2;goto B6aea03;
case 0x6aea08:c.instructions+=1;goto B6aea08;
case 0x6aea0a:goto L6aea0a;
case 0x6aea0f:c.instructions+=1;goto B6aea0f;
case 0x6aea11:goto L6aea11;
case 0x6aea16:c.instructions+=1;goto B6aea16;
case 0x6aea18:goto L6aea18;
case 0x6aea1d:c.instructions+=1;goto B6aea1d;
case 0x6aea1f:goto L6aea1f;
case 0x6aea24:c.instructions+=1;goto B6aea24;
case 0x6aea26:goto L6aea26;
case 0x6aea2b:c.instructions+=1;goto B6aea2b;
case 0x6aea2d:goto L6aea2d;
case 0x6aea2f:c.instructions+=1;goto B6aea2f;
case 0x6aea34:goto L6aea34;
case 0x6aea36:goto L6aea36;
case 0x6aea38:c.instructions+=1;goto B6aea38;
case 0x6aea3d:goto L6aea3d;
case 0x6aea3f:c.instructions+=2;goto B6aea3f;
case 0x6aea41:c.instructions+=1;goto B6aea41;
case 0x6aea43:goto L6aea43;
case 0x6aea46:goto L6aea46;
case 0x6aea47:c.instructions+=3;goto B6aea47;
case 0x6aea4a:c.instructions+=2;goto B6aea4a;
case 0x6aea4d:c.instructions+=1;goto B6aea4d;
case 0x6aea4f:goto L6aea4f;
case 0x6aea51:c.instructions+=1;goto B6aea51;
case 0x6aea56:goto L6aea56;
case 0x6aea58:c.instructions+=1;goto B6aea58;
case 0x6aea5d:goto L6aea5d;
case 0x6aea5f:c.instructions+=2;goto B6aea5f;
case 0x6aea61:c.instructions+=1;goto B6aea61;
case 0x6aea63:goto L6aea63;
case 0x6aea65:c.instructions+=1;goto B6aea65;
case 0x6aea6a:goto L6aea6a;
case 0x6aea6c:c.instructions+=2;goto B6aea6c;
case 0x6aea6e:c.instructions+=1;goto B6aea6e;
case 0x6aea70:goto L6aea70;
case 0x6aea72:c.instructions+=1;goto B6aea72;
case 0x6aea77:goto L6aea77;
case 0x6aea79:c.instructions+=2;goto B6aea79;
case 0x6aea7b:c.instructions+=1;goto B6aea7b;
case 0x6aea7d:goto L6aea7d;
case 0x6aea7f:c.instructions+=1;goto B6aea7f;
case 0x6aea84:goto L6aea84;
case 0x6aea86:c.instructions+=2;goto B6aea86;
case 0x6aea88:c.instructions+=1;goto B6aea88;
case 0x6aea8a:goto L6aea8a;
case 0x6aea8c:c.instructions+=1;goto B6aea8c;
case 0x6aea91:goto L6aea91;
case 0x6aea93:goto L6aea93;
case 0x6aea94:goto L6aea94;
case 0x6aea96:c.instructions+=4;goto B6aea96;
case 0x6aea97:c.instructions+=3;goto B6aea97;
case 0x6aea98:c.instructions+=2;goto B6aea98;
case 0x6aea99:c.instructions+=1;goto B6aea99;
case 0x6aea9a:goto L6aea9a;
case 0x6aea9c:c.instructions+=7;goto B6aea9c;
case 0x6aea9d:c.instructions+=6;goto B6aea9d;
case 0x6aea9e:c.instructions+=5;goto B6aea9e;
case 0x6aea9f:c.instructions+=4;goto B6aea9f;
case 0x6aeaa1:c.instructions+=3;goto B6aeaa1;
case 0x6aeaa3:c.instructions+=2;goto B6aeaa3;
case 0x6aeaa6:c.instructions+=1;goto B6aeaa6;
case 0x6aeaa8:goto L6aeaa8;
case 0x6aeaab:c.instructions+=5;goto B6aeaab;
case 0x6aeab1:c.instructions+=4;goto B6aeab1;
case 0x6aeab4:c.instructions+=3;goto B6aeab4;
case 0x6aeab6:c.instructions+=2;goto B6aeab6;
case 0x6aeabc:c.instructions+=1;goto B6aeabc;
case 0x6aeac1:goto L6aeac1;
case 0x6aeac2:c.instructions+=2;goto B6aeac2;
case 0x6aeac5:c.instructions+=1;goto B6aeac5;
case 0x6aeac7:goto L6aeac7;
case 0x6aeac9:c.instructions+=2;goto B6aeac9;
case 0x6aeacc:c.instructions+=1;goto B6aeacc;
case 0x6aead2:goto L6aead2;
case 0x6aead7:c.instructions+=7;goto B6aead7;
case 0x6aeada:c.instructions+=6;goto B6aeada;
case 0x6aeae0:c.instructions+=5;goto B6aeae0;
case 0x6aeae3:c.instructions+=4;goto B6aeae3;
case 0x6aeae9:c.instructions+=3;goto B6aeae9;
case 0x6aeaec:c.instructions+=2;goto B6aeaec;
case 0x6aeaee:c.instructions+=1;goto B6aeaee;
case 0x6aeaf0:goto L6aeaf0;
case 0x6aeaf4:c.instructions+=1;goto B6aeaf4;
case 0x6aeaf6:goto L6aeaf6;
case 0x6aeaf9:c.instructions+=1;goto B6aeaf9;
case 0x6aeaff:goto L6aeaff;
case 0x6aeb01:c.instructions+=1;goto B6aeb01;
case 0x6aeb06:goto L6aeb06;
case 0x6aeb08:c.instructions+=1;goto B6aeb08;
case 0x6aeb0e:goto L6aeb0e;
case 0x6aeb14:c.instructions+=5;goto B6aeb14;
case 0x6aeb16:c.instructions+=4;goto B6aeb16;
case 0x6aeb1b:c.instructions+=3;goto B6aeb1b;
case 0x6aeb20:c.instructions+=2;goto B6aeb20;
case 0x6aeb22:c.instructions+=1;goto B6aeb22;
case 0x6aeb28:goto L6aeb28;
case 0x6aeb2e:goto L6aeb2e;
case 0x6aeb33:c.instructions+=2;goto B6aeb33;
case 0x6aeb35:c.instructions+=1;goto B6aeb35;
case 0x6aeb3b:goto L6aeb3b;
case 0x6aeb41:goto L6aeb41;
case 0x6aeb46:c.instructions+=2;goto B6aeb46;
case 0x6aeb48:c.instructions+=1;goto B6aeb48;
case 0x6aeb4e:goto L6aeb4e;
case 0x6aeb54:goto L6aeb54;
case 0x6aeb59:c.instructions+=2;goto B6aeb59;
case 0x6aeb5b:c.instructions+=1;goto B6aeb5b;
case 0x6aeb5d:goto L6aeb5d;
case 0x6aeb5f:goto L6aeb5f;
case 0x6aeb61:c.instructions+=1;goto B6aeb61;
case 0x6aeb63:goto L6aeb63;
case 0x6aeb68:c.instructions+=1;goto B6aeb68;
case 0x6aeb6e:goto L6aeb6e;
case 0x6aeb73:c.instructions+=1;goto B6aeb73;
case 0x6aeb75:goto L6aeb75;
case 0x6aeb7a:c.instructions+=1;goto B6aeb7a;
case 0x6aeb7c:goto L6aeb7c;
case 0x6aeb81:c.instructions+=1;goto B6aeb81;
case 0x6aeb87:goto L6aeb87;
case 0x6aeb89:c.instructions+=1;goto B6aeb89;
case 0x6aeb8e:goto L6aeb8e;
case 0x6aeb93:goto L6aeb93;
case 0x6aeb95:c.instructions+=1;goto B6aeb95;
case 0x6aeb9a:goto L6aeb9a;
case 0x6aeb9f:goto L6aeb9f;
case 0x6aeba1:c.instructions+=1;goto B6aeba1;
case 0x6aeba6:goto L6aeba6;
case 0x6aebab:goto L6aebab;
case 0x6aebad:c.instructions+=1;goto B6aebad;
case 0x6aebb2:goto L6aebb2;
case 0x6aebb7:goto L6aebb7;
case 0x6aebb9:c.instructions+=1;goto B6aebb9;
case 0x6aebbe:goto L6aebbe;
case 0x6aebc3:goto L6aebc3;
case 0x6aebc8:c.instructions+=1;goto B6aebc8;
case 0x6aebca:goto L6aebca;
case 0x6aebcf:c.instructions+=1;goto B6aebcf;
case 0x6aebd1:goto L6aebd1;
case 0x6aebd6:c.instructions+=1;goto B6aebd6;
case 0x6aebd8:goto L6aebd8;
case 0x6aebdd:c.instructions+=1;goto B6aebdd;
case 0x6aebe3:goto L6aebe3;
case 0x6aebe7:c.instructions+=1;goto B6aebe7;
case 0x6aebe9:goto L6aebe9;
case 0x6aebeb:c.instructions+=1;goto B6aebeb;
case 0x6aebf0:goto L6aebf0;
case 0x6aebf5:goto L6aebf5;
case 0x6aebf7:c.instructions+=1;goto B6aebf7;
case 0x6aebfc:goto L6aebfc;
case 0x6aec00:c.instructions+=1;goto B6aec00;
case 0x6aec02:goto L6aec02;
case 0x6aec04:c.instructions+=1;goto B6aec04;
case 0x6aec09:goto L6aec09;
case 0x6aec0e:goto L6aec0e;
case 0x6aec10:c.instructions+=1;goto B6aec10;
case 0x6aec15:goto L6aec15;
case 0x6aec1a:goto L6aec1a;
case 0x6aec1c:c.instructions+=1;goto B6aec1c;
case 0x6aec21:goto L6aec21;
case 0x6aec26:goto L6aec26;
case 0x6aec2b:c.instructions+=2;goto B6aec2b;
case 0x6aec2d:c.instructions+=1;goto B6aec2d;
case 0x6aec2f:goto L6aec2f;
case 0x6aec35:goto L6aec35;
case 0x6aec3a:c.instructions+=1;goto B6aec3a;
case 0x6aec3c:goto L6aec3c;
case 0x6aec41:c.instructions+=1;goto B6aec41;
case 0x6aec43:goto L6aec43;
case 0x6aec48:c.instructions+=1;goto B6aec48;
case 0x6aec4e:goto L6aec4e;
case 0x6aec53:c.instructions+=1;goto B6aec53;
case 0x6aec55:goto L6aec55;
case 0x6aec5a:c.instructions+=1;goto B6aec5a;
case 0x6aec60:goto L6aec60;
case 0x6aec62:c.instructions+=1;goto B6aec62;
case 0x6aec67:goto L6aec67;
case 0x6aec6c:goto L6aec6c;
case 0x6aec6e:c.instructions+=1;goto B6aec6e;
case 0x6aec73:goto L6aec73;
case 0x6aec78:goto L6aec78;
case 0x6aec7c:c.instructions+=1;goto B6aec7c;
case 0x6aec82:goto L6aec82;
case 0x6aec84:c.instructions+=1;goto B6aec84;
case 0x6aec89:goto L6aec89;
case 0x6aec8e:goto L6aec8e;
case 0x6aec93:c.instructions+=1;goto B6aec93;
case 0x6aec95:goto L6aec95;
case 0x6aec9a:c.instructions+=1;goto B6aec9a;
case 0x6aec9c:goto L6aec9c;
case 0x6aeca1:c.instructions+=1;goto B6aeca1;
case 0x6aeca3:goto L6aeca3;
case 0x6aeca8:c.instructions+=1;goto B6aeca8;
case 0x6aecae:goto L6aecae;
case 0x6aecb0:c.instructions+=1;goto B6aecb0;
case 0x6aecb5:goto L6aecb5;
case 0x6aecba:goto L6aecba;
case 0x6aecbc:c.instructions+=1;goto B6aecbc;
case 0x6aecc1:goto L6aecc1;
case 0x6aecc6:goto L6aecc6;
case 0x6aecc8:c.instructions+=1;goto B6aecc8;
case 0x6aeccd:goto L6aeccd;
case 0x6aecd2:goto L6aecd2;
case 0x6aecd4:c.instructions+=1;goto B6aecd4;
case 0x6aecd9:goto L6aecd9;
case 0x6aecde:goto L6aecde;
case 0x6aece0:c.instructions+=1;goto B6aece0;
case 0x6aece5:goto L6aece5;
case 0x6aecea:goto L6aecea;
case 0x6aecef:c.instructions+=2;goto B6aecef;
case 0x6aecf1:c.instructions+=1;goto B6aecf1;
case 0x6aecf7:goto L6aecf7;
case 0x6aecfd:goto L6aecfd;
case 0x6aed02:c.instructions+=2;goto B6aed02;
case 0x6aed04:c.instructions+=1;goto B6aed04;
case 0x6aed06:goto L6aed06;
case 0x6aed08:goto L6aed08;
case 0x6aed0d:c.instructions+=1;goto B6aed0d;
case 0x6aed13:goto L6aed13;
case 0x6aed18:c.instructions+=1;goto B6aed18;
case 0x6aed1e:goto L6aed1e;
case 0x6aed23:c.instructions+=1;goto B6aed23;
case 0x6aed25:goto L6aed25;
case 0x6aed2a:c.instructions+=1;goto B6aed2a;
case 0x6aed2c:goto L6aed2c;
case 0x6aed31:c.instructions+=1;goto B6aed31;
case 0x6aed37:goto L6aed37;
case 0x6aed39:c.instructions+=1;goto B6aed39;
case 0x6aed3e:goto L6aed3e;
case 0x6aed43:goto L6aed43;
case 0x6aed45:c.instructions+=1;goto B6aed45;
case 0x6aed4a:goto L6aed4a;
case 0x6aed4f:goto L6aed4f;
case 0x6aed53:c.instructions+=1;goto B6aed53;
case 0x6aed59:goto L6aed59;
case 0x6aed5b:c.instructions+=1;goto B6aed5b;
case 0x6aed60:goto L6aed60;
case 0x6aed65:goto L6aed65;
case 0x6aed67:c.instructions+=1;goto B6aed67;
case 0x6aed6c:goto L6aed6c;
case 0x6aed71:goto L6aed71;
case 0x6aed76:c.instructions+=1;goto B6aed76;
case 0x6aed7c:goto L6aed7c;
case 0x6aed81:c.instructions+=1;goto B6aed81;
case 0x6aed87:goto L6aed87;
case 0x6aed8c:c.instructions+=1;goto B6aed8c;
case 0x6aed92:goto L6aed92;
case 0x6aed97:c.instructions+=1;goto B6aed97;
case 0x6aed9d:goto L6aed9d;
case 0x6aeda1:c.instructions+=1;goto B6aeda1;
case 0x6aeda7:goto L6aeda7;
case 0x6aeda9:c.instructions+=1;goto B6aeda9;
case 0x6aedae:goto L6aedae;
case 0x6aedb3:goto L6aedb3;
case 0x6aedb8:c.instructions+=2;goto B6aedb8;
case 0x6aedba:c.instructions+=1;goto B6aedba;
case 0x6aedbc:goto L6aedbc;
case 0x6aedbe:goto L6aedbe;
case 0x6aedc3:c.instructions+=1;goto B6aedc3;
case 0x6aedc5:goto L6aedc5;
case 0x6aedca:c.instructions+=1;goto B6aedca;
case 0x6aedd0:goto L6aedd0;
case 0x6aedd5:c.instructions+=1;goto B6aedd5;
case 0x6aeddb:goto L6aeddb;
case 0x6aede0:c.instructions+=1;goto B6aede0;
case 0x6aede2:goto L6aede2;
case 0x6aede7:c.instructions+=1;goto B6aede7;
case 0x6aede9:goto L6aede9;
case 0x6aedee:c.instructions+=1;goto B6aedee;
case 0x6aedf4:goto L6aedf4;
case 0x6aedf9:c.instructions+=1;goto B6aedf9;
case 0x6aedff:goto L6aedff;
case 0x6aee04:c.instructions+=1;goto B6aee04;
case 0x6aee06:goto L6aee06;
case 0x6aee0b:goto L6aee0b;
case 0x6aee11:goto L6aee11;
case 0x6aee15:c.instructions+=1;goto B6aee15;
case 0x6aee1b:goto L6aee1b;
case 0x6aee1d:c.instructions+=1;goto B6aee1d;
case 0x6aee22:goto L6aee22;
case 0x6aee27:goto L6aee27;
case 0x6aee2b:c.instructions+=1;goto B6aee2b;
case 0x6aee31:goto L6aee31;
case 0x6aee33:c.instructions+=1;goto B6aee33;
case 0x6aee38:goto L6aee38;
case 0x6aee3d:goto L6aee3d;
case 0x6aee42:c.instructions+=2;goto B6aee42;
case 0x6aee44:c.instructions+=1;goto B6aee44;
case 0x6aee4a:goto L6aee4a;
case 0x6aee50:goto L6aee50;
case 0x6aee55:c.instructions+=2;goto B6aee55;
case 0x6aee57:c.instructions+=1;goto B6aee57;
case 0x6aee5d:goto L6aee5d;
case 0x6aee63:goto L6aee63;
case 0x6aee68:c.instructions+=2;goto B6aee68;
case 0x6aee6a:c.instructions+=1;goto B6aee6a;
case 0x6aee6c:goto L6aee6c;
case 0x6aee6e:goto L6aee6e;
case 0x6aee73:c.instructions+=1;goto B6aee73;
case 0x6aee75:goto L6aee75;
case 0x6aee7a:c.instructions+=1;goto B6aee7a;
case 0x6aee7c:goto L6aee7c;
case 0x6aee81:c.instructions+=1;goto B6aee81;
case 0x6aee87:goto L6aee87;
case 0x6aee8c:c.instructions+=1;goto B6aee8c;
case 0x6aee8e:goto L6aee8e;
case 0x6aee93:c.instructions+=1;goto B6aee93;
case 0x6aee99:goto L6aee99;
case 0x6aee9b:c.instructions+=1;goto B6aee9b;
case 0x6aeea0:goto L6aeea0;
case 0x6aeea5:goto L6aeea5;
case 0x6aeea9:c.instructions+=1;goto B6aeea9;
case 0x6aeeaf:goto L6aeeaf;
case 0x6aeeb1:c.instructions+=1;goto B6aeeb1;
case 0x6aeeb6:goto L6aeeb6;
case 0x6aeebb:goto L6aeebb;
case 0x6aeebd:c.instructions+=1;goto B6aeebd;
case 0x6aeec2:goto L6aeec2;
case 0x6aeec7:goto L6aeec7;
case 0x6aeec9:c.instructions+=1;goto B6aeec9;
case 0x6aeece:goto L6aeece;
case 0x6aeed3:goto L6aeed3;
case 0x6aeed8:c.instructions+=1;goto B6aeed8;
case 0x6aeeda:goto L6aeeda;
case 0x6aeedf:c.instructions+=1;goto B6aeedf;
case 0x6aeee1:goto L6aeee1;
case 0x6aeee6:c.instructions+=1;goto B6aeee6;
case 0x6aeee8:goto L6aeee8;
case 0x6aeeed:c.instructions+=1;goto B6aeeed;
case 0x6aeef3:goto L6aeef3;
case 0x6aeef5:c.instructions+=1;goto B6aeef5;
case 0x6aeefa:goto L6aeefa;
case 0x6aeeff:goto L6aeeff;
case 0x6aef01:c.instructions+=1;goto B6aef01;
case 0x6aef06:goto L6aef06;
case 0x6aef0b:goto L6aef0b;
case 0x6aef0d:c.instructions+=1;goto B6aef0d;
case 0x6aef12:goto L6aef12;
case 0x6aef17:goto L6aef17;
case 0x6aef1c:c.instructions+=2;goto B6aef1c;
case 0x6aef1e:c.instructions+=1;goto B6aef1e;
case 0x6aef20:goto L6aef20;
case 0x6aef22:goto L6aef22;
case 0x6aef27:c.instructions+=1;goto B6aef27;
case 0x6aef29:goto L6aef29;
case 0x6aef2e:c.instructions+=1;goto B6aef2e;
case 0x6aef30:goto L6aef30;
case 0x6aef35:c.instructions+=1;goto B6aef35;
case 0x6aef37:goto L6aef37;
case 0x6aef3c:c.instructions+=1;goto B6aef3c;
case 0x6aef42:goto L6aef42;
case 0x6aef47:c.instructions+=1;goto B6aef47;
case 0x6aef4d:goto L6aef4d;
case 0x6aef4f:c.instructions+=1;goto B6aef4f;
case 0x6aef54:goto L6aef54;
case 0x6aef59:goto L6aef59;
case 0x6aef5b:c.instructions+=1;goto B6aef5b;
case 0x6aef60:goto L6aef60;
case 0x6aef65:goto L6aef65;
case 0x6aef67:c.instructions+=1;goto B6aef67;
case 0x6aef6c:goto L6aef6c;
case 0x6aef71:goto L6aef71;
case 0x6aef73:c.instructions+=1;goto B6aef73;
case 0x6aef78:goto L6aef78;
case 0x6aef7d:goto L6aef7d;
case 0x6aef82:c.instructions+=1;goto B6aef82;
case 0x6aef84:goto L6aef84;
case 0x6aef89:c.instructions+=1;goto B6aef89;
case 0x6aef8b:goto L6aef8b;
case 0x6aef90:c.instructions+=1;goto B6aef90;
case 0x6aef92:goto L6aef92;
case 0x6aef97:c.instructions+=1;goto B6aef97;
case 0x6aef9d:goto L6aef9d;
case 0x6aef9f:c.instructions+=1;goto B6aef9f;
case 0x6aefa4:goto L6aefa4;
case 0x6aefa9:goto L6aefa9;
case 0x6aefab:goto L6aefab;
case 0x6aefad:c.instructions+=1;goto B6aefad;
case 0x6aefb2:goto L6aefb2;
case 0x6aefb7:goto L6aefb7;
case 0x6aefb9:c.instructions+=1;goto B6aefb9;
case 0x6aefbb:goto L6aefbb;
case 0x6aefbd:c.instructions+=1;goto B6aefbd;
case 0x6aefc2:goto L6aefc2;
case 0x6aefc7:goto L6aefc7;
case 0x6aefcc:c.instructions+=2;goto B6aefcc;
case 0x6aefce:c.instructions+=1;goto B6aefce;
case 0x6aefd0:goto L6aefd0;
case 0x6aefd2:goto L6aefd2;
case 0x6aefd7:c.instructions+=2;goto B6aefd7;
case 0x6aefd9:c.instructions+=1;goto B6aefd9;
case 0x6aefdb:goto L6aefdb;
case 0x6aefdd:goto L6aefdd;
case 0x6aefe2:c.instructions+=1;goto B6aefe2;
case 0x6aefe4:goto L6aefe4;
case 0x6aefe9:c.instructions+=1;goto B6aefe9;
case 0x6aefeb:goto L6aefeb;
case 0x6aeff0:c.instructions+=1;goto B6aeff0;
case 0x6aeff2:goto L6aeff2;
case 0x6aeff7:c.instructions+=1;goto B6aeff7;
case 0x6aeff9:goto L6aeff9;
case 0x6aeffe:c.instructions+=1;goto B6aeffe;
default:missing_instruction(c.pc);}
B6ae001:L6ae001:{c.instructions+=1;NFSU2_TR(0x6ae001);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae006ull));
TAIL_STATIC(0x699c39u,699);
}
B6ae006:L6ae006:{c.instructions+=5;NFSU2_TR(0x6ae006);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae009:{NFSU2_TR(0x6ae009);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae00c:{NFSU2_TR(0x6ae00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae00f:{NFSU2_TR(0x6ae00f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6ae013:{NFSU2_TR(0x6ae013);
if(r1(R+518)){{goto L6ae03a;}}
}
B6ae015:L6ae015:{c.instructions+=2;NFSU2_TR(0x6ae015);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6ae019:{NFSU2_TR(0x6ae019);
if(r1(R+518)){{goto L6ae03a;}}
}
B6ae01b:L6ae01b:{c.instructions+=2;NFSU2_TR(0x6ae01b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae01e:{NFSU2_TR(0x6ae01e);
{goto L6ae029;}
}
B6ae020:L6ae020:{c.instructions+=4;NFSU2_TR(0x6ae020);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ae021:{NFSU2_TR(0x6ae021);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ae024:{NFSU2_TR(0x6ae024);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ae027:{NFSU2_TR(0x6ae027);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ae029:L6ae029:{c.instructions+=3;NFSU2_TR(0x6ae029);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ae02c:{NFSU2_TR(0x6ae02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae02f:{NFSU2_TR(0x6ae02f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae020u);}goto L6ae020;}}
}
B6ae031:L6ae031:{c.instructions+=2;NFSU2_TR(0x6ae031);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ae033:{NFSU2_TR(0x6ae033);
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
B6ae035:L6ae035:{c.instructions+=5;NFSU2_TR(0x6ae035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ae036:{NFSU2_TR(0x6ae036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ae037:{NFSU2_TR(0x6ae037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ae038:{NFSU2_TR(0x6ae038);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ae039:{NFSU2_TR(0x6ae039);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ae03a:L6ae03a:{c.instructions+=2;NFSU2_TR(0x6ae03a);
w4(R+0,u32(0x8007000eull));
}
B6ae03f:{NFSU2_TR(0x6ae03f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae035u);}goto L6ae035;}
}
B6ae041:L6ae041:{c.instructions+=11;NFSU2_TR(0x6ae041);
__builtin_memmove((R+28),(R+28),4);
}
B6ae043:{NFSU2_TR(0x6ae043);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae044:{NFSU2_TR(0x6ae044);
__builtin_memmove((R+20),(R+16),4);
}
B6ae046:{NFSU2_TR(0x6ae046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa8ull))));
}
B6ae04c:{NFSU2_TR(0x6ae04c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae04d:{NFSU2_TR(0x6ae04d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae04e:{NFSU2_TR(0x6ae04e);
__builtin_memmove((R+24),(R+4),4);
}
B6ae050:{NFSU2_TR(0x6ae050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae053:{NFSU2_TR(0x6ae053);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ae055:{NFSU2_TR(0x6ae055);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ae057:{NFSU2_TR(0x6ae057);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae061;}}
}
B6ae059:L6ae059:{c.instructions+=3;NFSU2_TR(0x6ae059);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ae05b:{NFSU2_TR(0x6ae05b);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae05c:{NFSU2_TR(0x6ae05c);
{goto L6ae282;}
}
B6ae061:L6ae061:{c.instructions+=5;NFSU2_TR(0x6ae061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae063:{NFSU2_TR(0x6ae063);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae064:{NFSU2_TR(0x6ae064);
__builtin_memmove((R+12),(R+0),4);
}
B6ae066:{NFSU2_TR(0x6ae066);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6ae06c:{NFSU2_TR(0x6ae06c);
if(r1(R+518)){{goto L6ae27f;}}
}
B6ae072:L6ae072:{c.instructions+=2;NFSU2_TR(0x6ae072);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ae078:{NFSU2_TR(0x6ae078);
if(r1(R+518)){{goto L6ae27f;}}
}
B6ae07e:L6ae07e:{c.instructions+=8;NFSU2_TR(0x6ae07e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6ae083:{NFSU2_TR(0x6ae083);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae086:{NFSU2_TR(0x6ae086);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae089:{NFSU2_TR(0x6ae089);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ae08b:{NFSU2_TR(0x6ae08b);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6ae08b);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6ae08b);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6ae08e:{NFSU2_TR(0x6ae08e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ae094:{NFSU2_TR(0x6ae094);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae097:{NFSU2_TR(0x6ae097);
if(r1(R+518)){{goto L6ae0a9;}}
}
B6ae099:L6ae099:{c.instructions+=2;NFSU2_TR(0x6ae099);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ae09f:{NFSU2_TR(0x6ae09f);
if(r1(R+518)){{goto L6ae0a9;}}
}
B6ae0a1:L6ae0a1:{c.instructions+=2;NFSU2_TR(0x6ae0a1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x70700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ae0a7:{NFSU2_TR(0x6ae0a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae0b0;}}
}
B6ae0a9:L6ae0a9:{c.instructions+=1;NFSU2_TR(0x6ae0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ae0b0:L6ae0b0:{c.instructions+=4;NFSU2_TR(0x6ae0b0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ae0b2:{NFSU2_TR(0x6ae0b2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ae0b3:{NFSU2_TR(0x6ae0b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae0b6:{NFSU2_TR(0x6ae0b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae27f;}}
}
B6ae0bc:L6ae0bc:{c.instructions+=21;NFSU2_TR(0x6ae0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae0c2:{NFSU2_TR(0x6ae0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae0c8:{NFSU2_TR(0x6ae0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ae0cb:{NFSU2_TR(0x6ae0cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ae0ce:{NFSU2_TR(0x6ae0ce);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ae0d2:{NFSU2_TR(0x6ae0d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ae0d5:{NFSU2_TR(0x6ae0d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6ae0d8:{NFSU2_TR(0x6ae0d8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ae0dc:{NFSU2_TR(0x6ae0dc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ae0e0:{NFSU2_TR(0x6ae0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ae0e6:{NFSU2_TR(0x6ae0e6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ae0ed:{NFSU2_TR(0x6ae0ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6ae0f0:{NFSU2_TR(0x6ae0f0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6ae0f5:{NFSU2_TR(0x6ae0f5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6ae100:{NFSU2_TR(0x6ae100);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ae107:{NFSU2_TR(0x6ae107);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ae109:{NFSU2_TR(0x6ae109);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae10c:{NFSU2_TR(0x6ae10c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ae113:{NFSU2_TR(0x6ae113);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae116:{NFSU2_TR(0x6ae116);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae119:{NFSU2_TR(0x6ae119);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae225;}}
}
B6ae11f:L6ae11f:{c.instructions+=1;NFSU2_TR(0x6ae11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae122:L6ae122:{c.instructions+=12;NFSU2_TR(0x6ae122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae125:{NFSU2_TR(0x6ae125);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae128:{NFSU2_TR(0x6ae128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae12b:{NFSU2_TR(0x6ae12b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae12e:{NFSU2_TR(0x6ae12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae131:{NFSU2_TR(0x6ae131);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ae134:{NFSU2_TR(0x6ae134);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae137:{NFSU2_TR(0x6ae137);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae13a:{NFSU2_TR(0x6ae13a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae13d:{NFSU2_TR(0x6ae13d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae140:{NFSU2_TR(0x6ae140);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ae143:{NFSU2_TR(0x6ae143);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae14f;}}
}
B6ae145:L6ae145:{c.instructions+=2;NFSU2_TR(0x6ae145);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae149:{NFSU2_TR(0x6ae149);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae20d;}}
}
B6ae14f:L6ae14f:{c.instructions+=4;NFSU2_TR(0x6ae14f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae152:{NFSU2_TR(0x6ae152);
__builtin_memmove((R+8),(R+0),4);
}
B6ae154:{NFSU2_TR(0x6ae154);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x200ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6ae15a:{NFSU2_TR(0x6ae15a);
if(r1(R+518)){{goto L6ae165;}}
}
B6ae15c:L6ae15c:{c.instructions+=2;NFSU2_TR(0x6ae15c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6ae15e:{NFSU2_TR(0x6ae15e);
if(r1(R+519)){{goto L6ae169;}}
}
B6ae160:L6ae160:{c.instructions+=2;NFSU2_TR(0x6ae160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ae163:{NFSU2_TR(0x6ae163);
{goto L6ae196;}
}
B6ae165:L6ae165:{c.instructions+=2;NFSU2_TR(0x6ae165);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6ae167:{NFSU2_TR(0x6ae167);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6ae171;}}
}
B6ae169:L6ae169:{c.instructions+=2;NFSU2_TR(0x6ae169);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ae16f:{NFSU2_TR(0x6ae16f);
{goto L6ae196;}
}
B6ae171:L6ae171:{c.instructions+=2;NFSU2_TR(0x6ae171);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ae173:{NFSU2_TR(0x6ae173);
if(r1(R+518)){{goto L6ae190;}}
}
B6ae175:L6ae175:{c.instructions+=2;NFSU2_TR(0x6ae175);
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
B6ae177:{NFSU2_TR(0x6ae177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae190;}}
}
B6ae179:L6ae179:{c.instructions+=4;NFSU2_TR(0x6ae179);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae17b:{NFSU2_TR(0x6ae17b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae17c:{NFSU2_TR(0x6ae17c);
__builtin_memmove((R+4),(R+24),4);
}
B6ae17e:{NFSU2_TR(0x6ae17e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae181ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ae181:L6ae181:{c.instructions+=2;NFSU2_TR(0x6ae181);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae186:{NFSU2_TR(0x6ae186);
if(r1(R+518)){{goto L6ae190;}}
}
B6ae188:L6ae188:{c.instructions+=2;NFSU2_TR(0x6ae188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ae18e:{NFSU2_TR(0x6ae18e);
{goto L6ae196;}
}
B6ae190:L6ae190:{c.instructions+=1;NFSU2_TR(0x6ae190);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ae196:L6ae196:{c.instructions+=3;NFSU2_TR(0x6ae196);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ae19a:{NFSU2_TR(0x6ae19a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae19e:{NFSU2_TR(0x6ae19e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae1dc;}}
}
B6ae1a0:L6ae1a0:{c.instructions+=2;NFSU2_TR(0x6ae1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae1a3:{NFSU2_TR(0x6ae1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae1a6:L6ae1a6:{c.instructions+=6;NFSU2_TR(0x6ae1a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6ae1a8:{NFSU2_TR(0x6ae1a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae1ab:{NFSU2_TR(0x6ae1ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae1ae:{NFSU2_TR(0x6ae1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ae1b1:{NFSU2_TR(0x6ae1b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae1b4:{NFSU2_TR(0x6ae1b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae1c6;}}
}
B6ae1b6:L6ae1b6:{c.instructions+=3;NFSU2_TR(0x6ae1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ae1b9:{NFSU2_TR(0x6ae1b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae1bc:{NFSU2_TR(0x6ae1bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae1c6;}}
}
B6ae1be:L6ae1be:{c.instructions+=3;NFSU2_TR(0x6ae1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ae1c1:{NFSU2_TR(0x6ae1c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae1c4:{NFSU2_TR(0x6ae1c4);
if(r1(R+518)){{goto L6ae1d9;}}
}
B6ae1c6:L6ae1c6:{c.instructions+=7;NFSU2_TR(0x6ae1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae1c9:{NFSU2_TR(0x6ae1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ae1cc:{NFSU2_TR(0x6ae1cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ae1cf:{NFSU2_TR(0x6ae1cf);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6ae1d1:{NFSU2_TR(0x6ae1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae1d4:{NFSU2_TR(0x6ae1d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ae1d7:{NFSU2_TR(0x6ae1d7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae1a6u);}goto L6ae1a6;}}
}
B6ae1d9:L6ae1d9:{c.instructions+=2;NFSU2_TR(0x6ae1d9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ae1db:{NFSU2_TR(0x6ae1db);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ae1dc:L6ae1dc:{c.instructions+=3;NFSU2_TR(0x6ae1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae1df:{NFSU2_TR(0x6ae1df);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae1e2:{NFSU2_TR(0x6ae1e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae1f9;}}
}
B6ae1e4:L6ae1e4:{c.instructions+=5;NFSU2_TR(0x6ae1e4);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ae1e8:{NFSU2_TR(0x6ae1e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6ae1ea:{NFSU2_TR(0x6ae1ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae1ec:{NFSU2_TR(0x6ae1ec);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+16))));
w4(U+20,u32(u32(r4(R+0))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6ae1f3:{NFSU2_TR(0x6ae1f3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ae288;}}
}
B6ae1f9:L6ae1f9:{c.instructions+=2;NFSU2_TR(0x6ae1f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae1fc:{NFSU2_TR(0x6ae1fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae20b;}}
}
B6ae1fe:L6ae1fe:{c.instructions+=3;NFSU2_TR(0x6ae1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ae201:{NFSU2_TR(0x6ae201);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae205:{NFSU2_TR(0x6ae205);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ae295;}}
}
B6ae20b:L6ae20b:{c.instructions+=1;NFSU2_TR(0x6ae20b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ae20d:L6ae20d:{c.instructions+=7;NFSU2_TR(0x6ae20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae210:{NFSU2_TR(0x6ae210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ae213:{NFSU2_TR(0x6ae213);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ae216:{NFSU2_TR(0x6ae216);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ae219:{NFSU2_TR(0x6ae219);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae21c:{NFSU2_TR(0x6ae21c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ae21f:{NFSU2_TR(0x6ae21f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae122u);}goto L6ae122;}}
}
B6ae225:L6ae225:{c.instructions+=3;NFSU2_TR(0x6ae225);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae228:{NFSU2_TR(0x6ae228);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae22b:{NFSU2_TR(0x6ae22b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae27f;}}
}
B6ae22d:L6ae22d:{c.instructions+=4;NFSU2_TR(0x6ae22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae230:{NFSU2_TR(0x6ae230);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ae232:{NFSU2_TR(0x6ae232);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ae235:{NFSU2_TR(0x6ae235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae238:L6ae238:{c.instructions+=5;NFSU2_TR(0x6ae238);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae23b:{NFSU2_TR(0x6ae23b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ae23d:{NFSU2_TR(0x6ae23d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6ae243:{NFSU2_TR(0x6ae243);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x60000000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x60000000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x60000000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae249:{NFSU2_TR(0x6ae249);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae271;}}
}
B6ae24b:L6ae24b:{c.instructions+=8;NFSU2_TR(0x6ae24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae24e:{NFSU2_TR(0x6ae24e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae251:{NFSU2_TR(0x6ae251);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae254:{NFSU2_TR(0x6ae254);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ae257:{NFSU2_TR(0x6ae257);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ae25a:{NFSU2_TR(0x6ae25a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae25c:{NFSU2_TR(0x6ae25c);
__builtin_memmove((R+4),(R+24),4);
}
B6ae25e:{NFSU2_TR(0x6ae25e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae261ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ae261:L6ae261:{c.instructions+=2;NFSU2_TR(0x6ae261);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ae264:{NFSU2_TR(0x6ae264);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae271;}}
}
B6ae266:L6ae266:{c.instructions+=3;NFSU2_TR(0x6ae266);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae269:{NFSU2_TR(0x6ae269);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae26f:{NFSU2_TR(0x6ae26f);
if(r1(R+518)){{goto L6ae2a1;}}
}
B6ae271:L6ae271:{c.instructions+=5;NFSU2_TR(0x6ae271);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ae274:{NFSU2_TR(0x6ae274);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae277:{NFSU2_TR(0x6ae277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6ae27a:{NFSU2_TR(0x6ae27a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ae27d:{NFSU2_TR(0x6ae27d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae238u);}goto L6ae238;}}
}
B6ae27f:L6ae27f:{c.instructions+=1;NFSU2_TR(0x6ae27f);
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
B6ae281:L6ae281:{c.instructions+=1;NFSU2_TR(0x6ae281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ae282:L6ae282:{c.instructions+=4;NFSU2_TR(0x6ae282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ae283:{NFSU2_TR(0x6ae283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ae284:{NFSU2_TR(0x6ae284);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ae285:{NFSU2_TR(0x6ae285);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ae288:L6ae288:{c.instructions+=3;NFSU2_TR(0x6ae288);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae28b:{NFSU2_TR(0x6ae28b);
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
B6ae28d:{NFSU2_TR(0x6ae28d);
if(r1(R+518)){{goto L6ae291;}}
}
B6ae28f:L6ae28f:{c.instructions+=1;NFSU2_TR(0x6ae28f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ae291:L6ae291:{c.instructions+=2;NFSU2_TR(0x6ae291);
__builtin_memmove((R+0),(R+12),4);
}
B6ae293:{NFSU2_TR(0x6ae293);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae281u);}goto L6ae281;}
}
B6ae295:L6ae295:{c.instructions+=3;NFSU2_TR(0x6ae295);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae298:{NFSU2_TR(0x6ae298);
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
B6ae29a:{NFSU2_TR(0x6ae29a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae291u);}goto L6ae291;}}
}
B6ae29c:L6ae29c:{c.instructions+=2;NFSU2_TR(0x6ae29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae29f:{NFSU2_TR(0x6ae29f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae28fu);}goto L6ae28f;}
}
B6ae2a1:L6ae2a1:{c.instructions+=3;NFSU2_TR(0x6ae2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae2a4:{NFSU2_TR(0x6ae2a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae2a6:{NFSU2_TR(0x6ae2a6);
if(r1(R+518)){{goto L6ae2ad;}}
}
B6ae2a8:L6ae2a8:{c.instructions+=2;NFSU2_TR(0x6ae2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae2ab:{NFSU2_TR(0x6ae2ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ae2ad:L6ae2ad:{c.instructions+=3;NFSU2_TR(0x6ae2ad);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ae2af:{NFSU2_TR(0x6ae2af);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae2b0:{NFSU2_TR(0x6ae2b0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae281u);}goto L6ae281;}
}
B6ae2b2:L6ae2b2:{c.instructions+=4;NFSU2_TR(0x6ae2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae2b8:{NFSU2_TR(0x6ae2b8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6ae2bd:{NFSU2_TR(0x6ae2bd);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6ae2c2:{NFSU2_TR(0x6ae2c2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ae2d2;}}
}
B6ae2c4:L6ae2c4:{c.instructions+=3;NFSU2_TR(0x6ae2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae2ca:{NFSU2_TR(0x6ae2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6ae2d0:{NFSU2_TR(0x6ae2d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae2d5;}}
}
B6ae2d2:L6ae2d2:{c.instructions+=2;NFSU2_TR(0x6ae2d2);
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
B6ae2d4:{NFSU2_TR(0x6ae2d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ae2d5:L6ae2d5:{c.instructions+=7;NFSU2_TR(0x6ae2d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae2d6:{NFSU2_TR(0x6ae2d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae2d7:{NFSU2_TR(0x6ae2d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae2d8:{NFSU2_TR(0x6ae2d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ae2db:{NFSU2_TR(0x6ae2db);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ae2dd:{NFSU2_TR(0x6ae2dd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae2df:{NFSU2_TR(0x6ae2df);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae308;}}
}
B6ae2e1:L6ae2e1:{c.instructions+=2;NFSU2_TR(0x6ae2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ae2e4:{NFSU2_TR(0x6ae2e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae2e7:L6ae2e7:{c.instructions+=4;NFSU2_TR(0x6ae2e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ae2e9:{NFSU2_TR(0x6ae2e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ae2ec:{NFSU2_TR(0x6ae2ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae2f0:{NFSU2_TR(0x6ae2f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae2fc;}}
}
B6ae2f2:L6ae2f2:{c.instructions+=4;NFSU2_TR(0x6ae2f2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ae2f3:{NFSU2_TR(0x6ae2f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6ae2f6:{NFSU2_TR(0x6ae2f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6ae2f8:{NFSU2_TR(0x6ae2f8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae2e7u);}goto L6ae2e7;}}
}
B6ae2fa:L6ae2fa:{c.instructions+=1;NFSU2_TR(0x6ae2fa);
{goto L6ae308;}
}
B6ae2fc:L6ae2fc:{c.instructions+=2;NFSU2_TR(0x6ae2fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ae2ff:{NFSU2_TR(0x6ae2ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae304ull));
TAIL_STATIC(0x6ad93bu,6ad);
}
B6ae304:L6ae304:{c.instructions+=2;NFSU2_TR(0x6ae304);
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
B6ae306:{NFSU2_TR(0x6ae306);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ae30a;}}
}
B6ae308:L6ae308:{c.instructions+=1;NFSU2_TR(0x6ae308);
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
B6ae30a:L6ae30a:{c.instructions+=4;NFSU2_TR(0x6ae30a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ae30b:{NFSU2_TR(0x6ae30b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ae30c:{NFSU2_TR(0x6ae30c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ae30d:{NFSU2_TR(0x6ae30d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ae30e:L6ae30e:{c.instructions+=10;NFSU2_TR(0x6ae30e);
__builtin_memmove((R+28),(R+28),4);
}
B6ae310:{NFSU2_TR(0x6ae310);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae311:{NFSU2_TR(0x6ae311);
__builtin_memmove((R+20),(R+16),4);
}
B6ae313:{NFSU2_TR(0x6ae313);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae314:{NFSU2_TR(0x6ae314);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae315:{NFSU2_TR(0x6ae315);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae316:{NFSU2_TR(0x6ae316);
__builtin_memmove((R+24),(R+4),4);
}
B6ae318:{NFSU2_TR(0x6ae318);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae31c:{NFSU2_TR(0x6ae31c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae31d:{NFSU2_TR(0x6ae31d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae32f;}}
}
B6ae31f:L6ae31f:{c.instructions+=1;NFSU2_TR(0x6ae31f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae324ull));
TAIL_STATIC(0x6addf9u,6ad);
}
B6ae324:L6ae324:{c.instructions+=3;NFSU2_TR(0x6ae324);
__builtin_memmove((R+28),(R+0),4);
}
B6ae326:{NFSU2_TR(0x6ae326);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae328:{NFSU2_TR(0x6ae328);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ae332;}}
}
B6ae32a:L6ae32a:{c.instructions+=1;NFSU2_TR(0x6ae32a);
{goto L6aea94;}
}
B6ae32f:L6ae32f:{c.instructions+=1;NFSU2_TR(0x6ae32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ae332:L6ae332:{c.instructions+=6;NFSU2_TR(0x6ae332);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae334:{NFSU2_TR(0x6ae334);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae337:{NFSU2_TR(0x6ae337);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae338:{NFSU2_TR(0x6ae338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae33b:{NFSU2_TR(0x6ae33b);
w4(R+12,u32(0xfff00000ull));
}
B6ae340:{NFSU2_TR(0x6ae340);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae381;}}
}
B6ae342:L6ae342:{c.instructions+=8;NFSU2_TR(0x6ae342);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae345:{NFSU2_TR(0x6ae345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae34b:{NFSU2_TR(0x6ae34b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae34e:{NFSU2_TR(0x6ae34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae354:{NFSU2_TR(0x6ae354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae356:{NFSU2_TR(0x6ae356);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae358:{NFSU2_TR(0x6ae358);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae35d:{NFSU2_TR(0x6ae35d);
if(r1(R+518)){{goto L6ae364;}}
}
B6ae35f:L6ae35f:{c.instructions+=3;NFSU2_TR(0x6ae35f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ae361:{NFSU2_TR(0x6ae361);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ae362:{NFSU2_TR(0x6ae362);
{goto L6ae378;}
}
B6ae364:L6ae364:{c.instructions+=2;NFSU2_TR(0x6ae364);
__builtin_memmove((R+4),(R+24),4);
}
B6ae366:{NFSU2_TR(0x6ae366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae36bull));
TAIL_STATIC(0x6c71cau,6c7);
}
B6ae36b:L6ae36b:{c.instructions+=3;NFSU2_TR(0x6ae36b);
__builtin_memmove((R+28),(R+0),4);
}
B6ae36d:{NFSU2_TR(0x6ae36d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae36f:{NFSU2_TR(0x6ae36f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae375:L6ae375:{c.instructions+=1;NFSU2_TR(0x6ae375);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae378:L6ae378:{c.instructions+=4;NFSU2_TR(0x6ae378);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae379:{NFSU2_TR(0x6ae379);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae37c:{NFSU2_TR(0x6ae37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae37f:{NFSU2_TR(0x6ae37f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae342u);}goto L6ae342;}}
}
B6ae381:L6ae381:{c.instructions+=2;NFSU2_TR(0x6ae381);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae388:{NFSU2_TR(0x6ae388);
if(r1(R+518)){{goto L6ae3e2;}}
}
B6ae38a:L6ae38a:{c.instructions+=2;NFSU2_TR(0x6ae38a);
__builtin_memmove((R+4),(R+24),4);
}
B6ae38c:{NFSU2_TR(0x6ae38c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae391ull));
TAIL_STATIC(0x69e7abu,69e);
}
B6ae391:L6ae391:{c.instructions+=3;NFSU2_TR(0x6ae391);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ae395:{NFSU2_TR(0x6ae395);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae399:{NFSU2_TR(0x6ae399);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae3ce;}}
}
B6ae39b:L6ae39b:{c.instructions+=1;NFSU2_TR(0x6ae39b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae39e:L6ae39e:{c.instructions+=8;NFSU2_TR(0x6ae39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae3a1:{NFSU2_TR(0x6ae3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae3a7:{NFSU2_TR(0x6ae3a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae3aa:{NFSU2_TR(0x6ae3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae3b0:{NFSU2_TR(0x6ae3b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae3b2:{NFSU2_TR(0x6ae3b2);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae3b4:{NFSU2_TR(0x6ae3b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae3b9:{NFSU2_TR(0x6ae3b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae3c5;}}
}
B6ae3bb:L6ae3bb:{c.instructions+=2;NFSU2_TR(0x6ae3bb);
__builtin_memmove((R+4),(R+24),4);
}
B6ae3bd:{NFSU2_TR(0x6ae3bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae3c2ull));
TAIL_STATIC(0x6c3ac6u,6c3);
}
B6ae3c2:L6ae3c2:{c.instructions+=1;NFSU2_TR(0x6ae3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae3c5:L6ae3c5:{c.instructions+=4;NFSU2_TR(0x6ae3c5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae3c6:{NFSU2_TR(0x6ae3c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae3c9:{NFSU2_TR(0x6ae3c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae3cc:{NFSU2_TR(0x6ae3cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae39eu);}goto L6ae39e;}}
}
B6ae3ce:L6ae3ce:{c.instructions+=2;NFSU2_TR(0x6ae3ce);
__builtin_memmove((R+4),(R+24),4);
}
B6ae3d0:{NFSU2_TR(0x6ae3d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae3d5ull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6ae3d5:L6ae3d5:{c.instructions+=2;NFSU2_TR(0x6ae3d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae3dc:{NFSU2_TR(0x6ae3dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae81a;}}
}
B6ae3e2:L6ae3e2:{c.instructions+=4;NFSU2_TR(0x6ae3e2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae3e4:{NFSU2_TR(0x6ae3e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae3e7:{NFSU2_TR(0x6ae3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae3ea:{NFSU2_TR(0x6ae3ea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae454;}}
}
B6ae3ec:L6ae3ec:{c.instructions+=8;NFSU2_TR(0x6ae3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae3ef:{NFSU2_TR(0x6ae3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae3f5:{NFSU2_TR(0x6ae3f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae3f8:{NFSU2_TR(0x6ae3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae3fe:{NFSU2_TR(0x6ae3fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae400:{NFSU2_TR(0x6ae400);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae402:{NFSU2_TR(0x6ae402);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae407:{NFSU2_TR(0x6ae407);
if(r1(R+518)){{goto L6ae435;}}
}
B6ae409:L6ae409:{c.instructions+=2;NFSU2_TR(0x6ae409);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae40e:{NFSU2_TR(0x6ae40e);
if(r1(R+518)){{goto L6ae423;}}
}
B6ae410:L6ae410:{c.instructions+=2;NFSU2_TR(0x6ae410);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae415:{NFSU2_TR(0x6ae415);
if(r1(R+518)){{goto L6ae423;}}
}
B6ae417:L6ae417:{c.instructions+=2;NFSU2_TR(0x6ae417);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae41c:{NFSU2_TR(0x6ae41c);
if(r1(R+518)){{goto L6ae423;}}
}
B6ae41e:L6ae41e:{c.instructions+=3;NFSU2_TR(0x6ae41e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ae420:{NFSU2_TR(0x6ae420);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ae421:{NFSU2_TR(0x6ae421);
{goto L6ae44b;}
}
B6ae423:L6ae423:{c.instructions+=2;NFSU2_TR(0x6ae423);
__builtin_memmove((R+4),(R+24),4);
}
B6ae425:{NFSU2_TR(0x6ae425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae42aull));
TAIL_STATIC(0x6c44a4u,6c4);
}
B6ae42a:L6ae42a:{c.instructions+=3;NFSU2_TR(0x6ae42a);
__builtin_memmove((R+4),(R+24),4);
}
B6ae42c:{NFSU2_TR(0x6ae42c);
__builtin_memmove((R+28),(R+0),4);
}
B6ae42e:{NFSU2_TR(0x6ae42e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae433ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ae433:L6ae433:{c.instructions+=1;NFSU2_TR(0x6ae433);
{goto L6ae440;}
}
B6ae435:L6ae435:{c.instructions+=3;NFSU2_TR(0x6ae435);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae437:{NFSU2_TR(0x6ae437);
__builtin_memmove((R+4),(R+24),4);
}
B6ae439:{NFSU2_TR(0x6ae439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae43eull));
TAIL_STATIC(0x6ce15cu,6ce);
}
B6ae43e:L6ae43e:{c.instructions+=1;NFSU2_TR(0x6ae43e);
__builtin_memmove((R+28),(R+0),4);
}
B6ae440:L6ae440:{c.instructions+=2;NFSU2_TR(0x6ae440);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae442:{NFSU2_TR(0x6ae442);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae448:L6ae448:{c.instructions+=1;NFSU2_TR(0x6ae448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae44b:L6ae44b:{c.instructions+=4;NFSU2_TR(0x6ae44b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae44c:{NFSU2_TR(0x6ae44c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae44f:{NFSU2_TR(0x6ae44f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae452:{NFSU2_TR(0x6ae452);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae3ecu);}goto L6ae3ec;}}
}
B6ae454:L6ae454:{c.instructions+=2;NFSU2_TR(0x6ae454);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae458:{NFSU2_TR(0x6ae458);
if(r1(R+518)){{goto L6ae569;}}
}
B6ae45e:L6ae45e:{c.instructions+=2;NFSU2_TR(0x6ae45e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae462:{NFSU2_TR(0x6ae462);
if(r1(R+518)){{goto L6ae569;}}
}
B6ae468:L6ae468:{c.instructions+=4;NFSU2_TR(0x6ae468);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae46a:{NFSU2_TR(0x6ae46a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae46d:{NFSU2_TR(0x6ae46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae470:{NFSU2_TR(0x6ae470);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae4d4;}}
}
B6ae472:L6ae472:{c.instructions+=8;NFSU2_TR(0x6ae472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae475:{NFSU2_TR(0x6ae475);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae47b:{NFSU2_TR(0x6ae47b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae47e:{NFSU2_TR(0x6ae47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae484:{NFSU2_TR(0x6ae484);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae486:{NFSU2_TR(0x6ae486);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae488:{NFSU2_TR(0x6ae488);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae48d:{NFSU2_TR(0x6ae48d);
if(r1(R+518)){{goto L6ae494;}}
}
B6ae48f:L6ae48f:{c.instructions+=3;NFSU2_TR(0x6ae48f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ae491:{NFSU2_TR(0x6ae491);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ae492:{NFSU2_TR(0x6ae492);
{goto L6ae4cb;}
}
B6ae494:L6ae494:{c.instructions+=2;NFSU2_TR(0x6ae494);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae496:{NFSU2_TR(0x6ae496);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae49c:L6ae49c:{c.instructions+=6;NFSU2_TR(0x6ae49c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ae49e:{NFSU2_TR(0x6ae49e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae49f:{NFSU2_TR(0x6ae49f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae4a0:{NFSU2_TR(0x6ae4a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae4a1:{NFSU2_TR(0x6ae4a1);
__builtin_memmove((R+4),(R+24),4);
}
B6ae4a3:{NFSU2_TR(0x6ae4a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae4a8ull));
TAIL_STATIC(0x6c3b49u,6c3);
}
B6ae4a8:L6ae4a8:{c.instructions+=3;NFSU2_TR(0x6ae4a8);
__builtin_memmove((R+28),(R+0),4);
}
B6ae4aa:{NFSU2_TR(0x6ae4aa);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae4ac:{NFSU2_TR(0x6ae4ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae4b2:L6ae4b2:{c.instructions+=6;NFSU2_TR(0x6ae4b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ae4b4:{NFSU2_TR(0x6ae4b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae4b5:{NFSU2_TR(0x6ae4b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae4b6:{NFSU2_TR(0x6ae4b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae4b7:{NFSU2_TR(0x6ae4b7);
__builtin_memmove((R+4),(R+24),4);
}
B6ae4b9:{NFSU2_TR(0x6ae4b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae4beull));
TAIL_STATIC(0x6c4145u,6c4);
}
B6ae4be:L6ae4be:{c.instructions+=3;NFSU2_TR(0x6ae4be);
__builtin_memmove((R+28),(R+0),4);
}
B6ae4c0:{NFSU2_TR(0x6ae4c0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae4c2:{NFSU2_TR(0x6ae4c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae4c8:L6ae4c8:{c.instructions+=1;NFSU2_TR(0x6ae4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae4cb:L6ae4cb:{c.instructions+=4;NFSU2_TR(0x6ae4cb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae4cc:{NFSU2_TR(0x6ae4cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae4cf:{NFSU2_TR(0x6ae4cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae4d2:{NFSU2_TR(0x6ae4d2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae472u);}goto L6ae472;}}
}
B6ae4d4:L6ae4d4:{c.instructions+=2;NFSU2_TR(0x6ae4d4);
__builtin_memmove((R+4),(R+24),4);
}
B6ae4d6:{NFSU2_TR(0x6ae4d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae4dbull));
TAIL_STATIC(0x69f745u,69f);
}
B6ae4db:L6ae4db:{c.instructions+=3;NFSU2_TR(0x6ae4db);
__builtin_memmove((R+28),(R+0),4);
}
B6ae4dd:{NFSU2_TR(0x6ae4dd);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae4df:{NFSU2_TR(0x6ae4df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae4e5:L6ae4e5:{c.instructions+=2;NFSU2_TR(0x6ae4e5);
__builtin_memmove((R+4),(R+24),4);
}
B6ae4e7:{NFSU2_TR(0x6ae4e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae4ecull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ae4ec:L6ae4ec:{c.instructions+=3;NFSU2_TR(0x6ae4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ae4f0:{NFSU2_TR(0x6ae4f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae4f4:{NFSU2_TR(0x6ae4f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae569;}}
}
B6ae4f6:L6ae4f6:{c.instructions+=9;NFSU2_TR(0x6ae4f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae4f9:{NFSU2_TR(0x6ae4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae4fc:{NFSU2_TR(0x6ae4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae502:{NFSU2_TR(0x6ae502);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae505:{NFSU2_TR(0x6ae505);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae50b:{NFSU2_TR(0x6ae50b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae50d:{NFSU2_TR(0x6ae50d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae50f:{NFSU2_TR(0x6ae50f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae514:{NFSU2_TR(0x6ae514);
if(r1(R+518)){{goto L6ae545;}}
}
B6ae516:L6ae516:{c.instructions+=2;NFSU2_TR(0x6ae516);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae51b:{NFSU2_TR(0x6ae51b);
if(r1(R+518)){{goto L6ae529;}}
}
B6ae51d:L6ae51d:{c.instructions+=2;NFSU2_TR(0x6ae51d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae522:{NFSU2_TR(0x6ae522);
if(r1(R+518)){{goto L6ae545;}}
}
B6ae524:L6ae524:{c.instructions+=3;NFSU2_TR(0x6ae524);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ae526:{NFSU2_TR(0x6ae526);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ae527:{NFSU2_TR(0x6ae527);
{goto L6ae560;}
}
B6ae529:L6ae529:{c.instructions+=2;NFSU2_TR(0x6ae529);
__builtin_memmove((R+4),(R+24),4);
}
B6ae52b:{NFSU2_TR(0x6ae52b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae530ull));
TAIL_STATIC(0x6c94c2u,6c9);
}
B6ae530:L6ae530:{c.instructions+=3;NFSU2_TR(0x6ae530);
__builtin_memmove((R+28),(R+0),4);
}
B6ae532:{NFSU2_TR(0x6ae532);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae534:{NFSU2_TR(0x6ae534);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae53a:L6ae53a:{c.instructions+=2;NFSU2_TR(0x6ae53a);
__builtin_memmove((R+4),(R+24),4);
}
B6ae53c:{NFSU2_TR(0x6ae53c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae541ull));
TAIL_STATIC(0x6c9594u,6c9);
}
B6ae541:L6ae541:{c.instructions+=2;NFSU2_TR(0x6ae541);
__builtin_memmove((R+28),(R+0),4);
}
B6ae543:{NFSU2_TR(0x6ae543);
{goto L6ae555;}
}
B6ae545:L6ae545:{c.instructions+=2;NFSU2_TR(0x6ae545);
__builtin_memmove((R+4),(R+24),4);
}
B6ae547:{NFSU2_TR(0x6ae547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae54cull));
TAIL_STATIC(0x6c44a4u,6c4);
}
B6ae54c:L6ae54c:{c.instructions+=3;NFSU2_TR(0x6ae54c);
__builtin_memmove((R+4),(R+24),4);
}
B6ae54e:{NFSU2_TR(0x6ae54e);
__builtin_memmove((R+28),(R+0),4);
}
B6ae550:{NFSU2_TR(0x6ae550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae555ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ae555:L6ae555:{c.instructions+=2;NFSU2_TR(0x6ae555);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae557:{NFSU2_TR(0x6ae557);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae55d:L6ae55d:{c.instructions+=1;NFSU2_TR(0x6ae55d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae560:L6ae560:{c.instructions+=4;NFSU2_TR(0x6ae560);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae561:{NFSU2_TR(0x6ae561);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae564:{NFSU2_TR(0x6ae564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae567:{NFSU2_TR(0x6ae567);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae4f6u);}goto L6ae4f6;}}
}
B6ae569:L6ae569:{c.instructions+=4;NFSU2_TR(0x6ae569);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ae56b:{NFSU2_TR(0x6ae56b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae56e:{NFSU2_TR(0x6ae56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae571:{NFSU2_TR(0x6ae571);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae670;}}
}
B6ae577:L6ae577:{c.instructions+=8;NFSU2_TR(0x6ae577);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae57a:{NFSU2_TR(0x6ae57a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae580:{NFSU2_TR(0x6ae580);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae583:{NFSU2_TR(0x6ae583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae589:{NFSU2_TR(0x6ae589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae58b:{NFSU2_TR(0x6ae58b);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae58d:{NFSU2_TR(0x6ae58d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae592:{NFSU2_TR(0x6ae592);
if(r1(R+518)){{goto L6ae5fd;}}
}
B6ae594:L6ae594:{c.instructions+=2;NFSU2_TR(0x6ae594);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae599:{NFSU2_TR(0x6ae599);
if(r1(R+518)){{goto L6ae5f2;}}
}
B6ae59b:L6ae59b:{c.instructions+=2;NFSU2_TR(0x6ae59b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae5a0:{NFSU2_TR(0x6ae5a0);
if(r1(R+518)){{goto L6ae5e9;}}
}
B6ae5a2:L6ae5a2:{c.instructions+=2;NFSU2_TR(0x6ae5a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae5a7:{NFSU2_TR(0x6ae5a7);
if(r1(R+518)){{goto L6ae5ce;}}
}
B6ae5a9:L6ae5a9:{c.instructions+=2;NFSU2_TR(0x6ae5a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae5ae:{NFSU2_TR(0x6ae5ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae618;}}
}
B6ae5b0:L6ae5b0:{c.instructions+=2;NFSU2_TR(0x6ae5b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae5b4:{NFSU2_TR(0x6ae5b4);
if(r1(R+518)){{goto L6ae5bf;}}
}
B6ae5b6:L6ae5b6:{c.instructions+=2;NFSU2_TR(0x6ae5b6);
__builtin_memmove((R+4),(R+24),4);
}
B6ae5b8:{NFSU2_TR(0x6ae5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae5bdull));
TAIL_STATIC(0x6c8e44u,6c8);
}
B6ae5bd:L6ae5bd:{c.instructions+=1;NFSU2_TR(0x6ae5bd);
__builtin_memmove((R+28),(R+0),4);
}
B6ae5bf:L6ae5bf:{c.instructions+=2;NFSU2_TR(0x6ae5bf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ae5c2:{NFSU2_TR(0x6ae5c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae61b;}}
}
B6ae5c4:L6ae5c4:{c.instructions+=3;NFSU2_TR(0x6ae5c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae5c5:{NFSU2_TR(0x6ae5c5);
__builtin_memmove((R+4),(R+24),4);
}
B6ae5c7:{NFSU2_TR(0x6ae5c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae5ccull));
TAIL_STATIC(0x6ce216u,6ce);
}
B6ae5cc:L6ae5cc:{c.instructions+=1;NFSU2_TR(0x6ae5cc);
{goto L6ae5f9;}
}
B6ae5ce:L6ae5ce:{c.instructions+=4;NFSU2_TR(0x6ae5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae5d4:{NFSU2_TR(0x6ae5d4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6ae5d9:{NFSU2_TR(0x6ae5d9);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6ae5de:{NFSU2_TR(0x6ae5de);
if(r1(R+512)){{goto L6ae618;}}
}
B6ae5e0:L6ae5e0:{c.instructions+=2;NFSU2_TR(0x6ae5e0);
__builtin_memmove((R+4),(R+24),4);
}
B6ae5e2:{NFSU2_TR(0x6ae5e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae5e7ull));
TAIL_STATIC(0x6c93cfu,6c9);
}
B6ae5e7:L6ae5e7:{c.instructions+=1;NFSU2_TR(0x6ae5e7);
{goto L6ae5f9;}
}
B6ae5e9:L6ae5e9:{c.instructions+=2;NFSU2_TR(0x6ae5e9);
__builtin_memmove((R+4),(R+24),4);
}
B6ae5eb:{NFSU2_TR(0x6ae5eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae5f0ull));
TAIL_STATIC(0x6c71cau,6c7);
}
B6ae5f0:L6ae5f0:{c.instructions+=1;NFSU2_TR(0x6ae5f0);
{goto L6ae5f9;}
}
B6ae5f2:L6ae5f2:{c.instructions+=2;NFSU2_TR(0x6ae5f2);
__builtin_memmove((R+4),(R+24),4);
}
B6ae5f4:{NFSU2_TR(0x6ae5f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae5f9ull));
TAIL_STATIC(0x6c65cbu,6c6);
}
B6ae5f9:L6ae5f9:{c.instructions+=2;NFSU2_TR(0x6ae5f9);
__builtin_memmove((R+28),(R+0),4);
}
B6ae5fb:{NFSU2_TR(0x6ae5fb);
{goto L6ae61b;}
}
B6ae5fd:L6ae5fd:{c.instructions+=4;NFSU2_TR(0x6ae5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae603:{NFSU2_TR(0x6ae603);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6ae608:{NFSU2_TR(0x6ae608);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6ae60d:{NFSU2_TR(0x6ae60d);
if(r1(R+512)){{goto L6ae618;}}
}
B6ae60f:L6ae60f:{c.instructions+=2;NFSU2_TR(0x6ae60f);
__builtin_memmove((R+4),(R+24),4);
}
B6ae611:{NFSU2_TR(0x6ae611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae616ull));
TAIL_STATIC(0x6c363du,6c3);
}
B6ae616:L6ae616:{c.instructions+=1;NFSU2_TR(0x6ae616);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae5f9u);}goto L6ae5f9;}
}
B6ae618:L6ae618:{c.instructions+=2;NFSU2_TR(0x6ae618);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ae61a:{NFSU2_TR(0x6ae61a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ae61b:L6ae61b:{c.instructions+=4;NFSU2_TR(0x6ae61b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae61d:{NFSU2_TR(0x6ae61d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae620:{NFSU2_TR(0x6ae620);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae623:{NFSU2_TR(0x6ae623);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae658;}}
}
B6ae625:L6ae625:{c.instructions+=2;NFSU2_TR(0x6ae625);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ae627:{NFSU2_TR(0x6ae627);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ae628:L6ae628:{c.instructions+=8;NFSU2_TR(0x6ae628);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae62b:{NFSU2_TR(0x6ae62b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae631:{NFSU2_TR(0x6ae631);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae634:{NFSU2_TR(0x6ae634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae63a:{NFSU2_TR(0x6ae63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae63c:{NFSU2_TR(0x6ae63c);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae63e:{NFSU2_TR(0x6ae63e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae643:{NFSU2_TR(0x6ae643);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae64f;}}
}
B6ae645:L6ae645:{c.instructions+=2;NFSU2_TR(0x6ae645);
__builtin_memmove((R+4),(R+24),4);
}
B6ae647:{NFSU2_TR(0x6ae647);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae64cull));
TAIL_STATIC(0x6ce19cu,6ce);
}
B6ae64c:L6ae64c:{c.instructions+=1;NFSU2_TR(0x6ae64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae64f:L6ae64f:{c.instructions+=4;NFSU2_TR(0x6ae64f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae650:{NFSU2_TR(0x6ae650);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae653:{NFSU2_TR(0x6ae653);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae656:{NFSU2_TR(0x6ae656);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae628u);}goto L6ae628;}}
}
B6ae658:L6ae658:{c.instructions+=2;NFSU2_TR(0x6ae658);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae65a:{NFSU2_TR(0x6ae65a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae660:L6ae660:{c.instructions+=5;NFSU2_TR(0x6ae660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae663:{NFSU2_TR(0x6ae663);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ae664:{NFSU2_TR(0x6ae664);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ae667:{NFSU2_TR(0x6ae667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae66a:{NFSU2_TR(0x6ae66a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae577u);}goto L6ae577;}}
}
B6ae670:L6ae670:{c.instructions+=2;NFSU2_TR(0x6ae670);
__builtin_memmove((R+4),(R+24),4);
}
B6ae672:{NFSU2_TR(0x6ae672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae677ull));
TAIL_STATIC(0x69f745u,69f);
}
B6ae677:L6ae677:{c.instructions+=3;NFSU2_TR(0x6ae677);
__builtin_memmove((R+28),(R+0),4);
}
B6ae679:{NFSU2_TR(0x6ae679);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae67b:{NFSU2_TR(0x6ae67b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae681:L6ae681:{c.instructions+=2;NFSU2_TR(0x6ae681);
__builtin_memmove((R+4),(R+24),4);
}
B6ae683:{NFSU2_TR(0x6ae683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae688ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ae688:L6ae688:{c.instructions+=3;NFSU2_TR(0x6ae688);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ae68c:{NFSU2_TR(0x6ae68c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae690:{NFSU2_TR(0x6ae690);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae754;}}
}
B6ae696:L6ae696:{c.instructions+=9;NFSU2_TR(0x6ae696);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae699:{NFSU2_TR(0x6ae699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae69c:{NFSU2_TR(0x6ae69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae6a2:{NFSU2_TR(0x6ae6a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae6a5:{NFSU2_TR(0x6ae6a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae6ab:{NFSU2_TR(0x6ae6ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae6ad:{NFSU2_TR(0x6ae6ad);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae6af:{NFSU2_TR(0x6ae6af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae6b4:{NFSU2_TR(0x6ae6b4);
if(r1(R+518)){{goto L6ae733;}}
}
B6ae6b6:L6ae6b6:{c.instructions+=2;NFSU2_TR(0x6ae6b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae6bb:{NFSU2_TR(0x6ae6bb);
if(r1(R+518)){{goto L6ae724;}}
}
B6ae6bd:L6ae6bd:{c.instructions+=2;NFSU2_TR(0x6ae6bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae6c2:{NFSU2_TR(0x6ae6c2);
if(r1(R+518)){{goto L6ae719;}}
}
B6ae6c4:L6ae6c4:{c.instructions+=2;NFSU2_TR(0x6ae6c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae6c9:{NFSU2_TR(0x6ae6c9);
if(r1(R+518)){{goto L6ae6ff;}}
}
B6ae6cb:L6ae6cb:{c.instructions+=2;NFSU2_TR(0x6ae6cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae6d0:{NFSU2_TR(0x6ae6d0);
if(r1(R+518)){{goto L6ae6ff;}}
}
B6ae6d2:L6ae6d2:{c.instructions+=2;NFSU2_TR(0x6ae6d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae6d7:{NFSU2_TR(0x6ae6d7);
if(r1(R+518)){{goto L6ae6e5;}}
}
B6ae6d9:L6ae6d9:{c.instructions+=2;NFSU2_TR(0x6ae6d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae6de:{NFSU2_TR(0x6ae6de);
if(r1(R+518)){{goto L6ae6e5;}}
}
B6ae6e0:L6ae6e0:{c.instructions+=3;NFSU2_TR(0x6ae6e0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ae6e2:{NFSU2_TR(0x6ae6e2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ae6e3:{NFSU2_TR(0x6ae6e3);
{goto L6ae747;}
}
B6ae6e5:L6ae6e5:{c.instructions+=2;NFSU2_TR(0x6ae6e5);
__builtin_memmove((R+4),(R+24),4);
}
B6ae6e7:{NFSU2_TR(0x6ae6e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae6ecull));
TAIL_STATIC(0x6c8379u,6c8);
}
B6ae6ec:L6ae6ec:{c.instructions+=3;NFSU2_TR(0x6ae6ec);
__builtin_memmove((R+28),(R+0),4);
}
B6ae6ee:{NFSU2_TR(0x6ae6ee);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae6f0:{NFSU2_TR(0x6ae6f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae6f6:L6ae6f6:{c.instructions+=2;NFSU2_TR(0x6ae6f6);
__builtin_memmove((R+4),(R+24),4);
}
B6ae6f8:{NFSU2_TR(0x6ae6f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae6fdull));
TAIL_STATIC(0x6c84c7u,6c8);
}
B6ae6fd:L6ae6fd:{c.instructions+=1;NFSU2_TR(0x6ae6fd);
{goto L6ae73a;}
}
B6ae6ff:L6ae6ff:{c.instructions+=2;NFSU2_TR(0x6ae6ff);
__builtin_memmove((R+4),(R+24),4);
}
B6ae701:{NFSU2_TR(0x6ae701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae706ull));
TAIL_STATIC(0x6c6d02u,6c6);
}
B6ae706:L6ae706:{c.instructions+=3;NFSU2_TR(0x6ae706);
__builtin_memmove((R+28),(R+0),4);
}
B6ae708:{NFSU2_TR(0x6ae708);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae70a:{NFSU2_TR(0x6ae70a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae710:L6ae710:{c.instructions+=2;NFSU2_TR(0x6ae710);
__builtin_memmove((R+4),(R+24),4);
}
B6ae712:{NFSU2_TR(0x6ae712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae717ull));
TAIL_STATIC(0x6c6e50u,6c6);
}
B6ae717:L6ae717:{c.instructions+=1;NFSU2_TR(0x6ae717);
{goto L6ae73a;}
}
B6ae719:L6ae719:{c.instructions+=3;NFSU2_TR(0x6ae719);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae71b:{NFSU2_TR(0x6ae71b);
__builtin_memmove((R+4),(R+24),4);
}
B6ae71d:{NFSU2_TR(0x6ae71d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae722ull));
TAIL_STATIC(0x6c9b3du,6c9);
}
B6ae722:L6ae722:{c.instructions+=1;NFSU2_TR(0x6ae722);
{goto L6ae73a;}
}
B6ae724:L6ae724:{c.instructions+=2;NFSU2_TR(0x6ae724);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae728:{NFSU2_TR(0x6ae728);
if(r1(R+518)){{goto L6ae73c;}}
}
B6ae72a:L6ae72a:{c.instructions+=2;NFSU2_TR(0x6ae72a);
__builtin_memmove((R+4),(R+24),4);
}
B6ae72c:{NFSU2_TR(0x6ae72c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae731ull));
TAIL_STATIC(0x6c9104u,6c9);
}
B6ae731:L6ae731:{c.instructions+=1;NFSU2_TR(0x6ae731);
{goto L6ae73a;}
}
B6ae733:L6ae733:{c.instructions+=2;NFSU2_TR(0x6ae733);
__builtin_memmove((R+4),(R+24),4);
}
B6ae735:{NFSU2_TR(0x6ae735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae73aull));
TAIL_STATIC(0x6c8841u,6c8);
}
B6ae73a:L6ae73a:{c.instructions+=1;NFSU2_TR(0x6ae73a);
__builtin_memmove((R+28),(R+0),4);
}
B6ae73c:L6ae73c:{c.instructions+=2;NFSU2_TR(0x6ae73c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae73e:{NFSU2_TR(0x6ae73e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae744:L6ae744:{c.instructions+=1;NFSU2_TR(0x6ae744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae747:L6ae747:{c.instructions+=4;NFSU2_TR(0x6ae747);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae748:{NFSU2_TR(0x6ae748);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae74b:{NFSU2_TR(0x6ae74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae74e:{NFSU2_TR(0x6ae74e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae696u);}goto L6ae696;}}
}
B6ae754:L6ae754:{c.instructions+=4;NFSU2_TR(0x6ae754);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae756:{NFSU2_TR(0x6ae756);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae759:{NFSU2_TR(0x6ae759);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae75c:{NFSU2_TR(0x6ae75c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae7d6;}}
}
B6ae75e:L6ae75e:{c.instructions+=9;NFSU2_TR(0x6ae75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae761:{NFSU2_TR(0x6ae761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae767:{NFSU2_TR(0x6ae767);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae76a:{NFSU2_TR(0x6ae76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae770:{NFSU2_TR(0x6ae770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae772:{NFSU2_TR(0x6ae772);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae774:{NFSU2_TR(0x6ae774);
w4(R+8,u32(0x74400000ull));
}
B6ae779:{NFSU2_TR(0x6ae779);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ae77b:{NFSU2_TR(0x6ae77b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ae7a4;}}
}
B6ae77d:L6ae77d:{c.instructions+=1;NFSU2_TR(0x6ae77d);
if(r1(R+518)){{goto L6ae7b9;}}
}
B6ae77f:L6ae77f:{c.instructions+=2;NFSU2_TR(0x6ae77f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae784:{NFSU2_TR(0x6ae784);
if(r1(R+518)){{goto L6ae79b;}}
}
B6ae786:L6ae786:{c.instructions+=2;NFSU2_TR(0x6ae786);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae78b:{NFSU2_TR(0x6ae78b);
if(r1(R+518)){{goto L6ae79b;}}
}
B6ae78d:L6ae78d:{c.instructions+=2;NFSU2_TR(0x6ae78d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae792:{NFSU2_TR(0x6ae792);
if(r1(R+518)){{goto L6ae79b;}}
}
B6ae794:L6ae794:{c.instructions+=2;NFSU2_TR(0x6ae794);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae799:{NFSU2_TR(0x6ae799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae7cd;}}
}
B6ae79b:L6ae79b:{c.instructions+=2;NFSU2_TR(0x6ae79b);
__builtin_memmove((R+4),(R+24),4);
}
B6ae79d:{NFSU2_TR(0x6ae79d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae7a2ull));
TAIL_STATIC(0x6c6fb2u,6c6);
}
B6ae7a2:L6ae7a2:{c.instructions+=1;NFSU2_TR(0x6ae7a2);
{goto L6ae7c0;}
}
B6ae7a4:L6ae7a4:{c.instructions+=2;NFSU2_TR(0x6ae7a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae7a9:{NFSU2_TR(0x6ae7a9);
if(r1(R+518)){{goto L6ae7b9;}}
}
B6ae7ab:L6ae7ab:{c.instructions+=2;NFSU2_TR(0x6ae7ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae7b0:{NFSU2_TR(0x6ae7b0);
if(r1(R+518)){{goto L6ae7b9;}}
}
B6ae7b2:L6ae7b2:{c.instructions+=2;NFSU2_TR(0x6ae7b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae7b7:{NFSU2_TR(0x6ae7b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae7cd;}}
}
B6ae7b9:L6ae7b9:{c.instructions+=2;NFSU2_TR(0x6ae7b9);
__builtin_memmove((R+4),(R+24),4);
}
B6ae7bb:{NFSU2_TR(0x6ae7bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae7c0ull));
TAIL_STATIC(0x6c8629u,6c8);
}
B6ae7c0:L6ae7c0:{c.instructions+=3;NFSU2_TR(0x6ae7c0);
__builtin_memmove((R+28),(R+0),4);
}
B6ae7c2:{NFSU2_TR(0x6ae7c2);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae7c4:{NFSU2_TR(0x6ae7c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae7ca:L6ae7ca:{c.instructions+=1;NFSU2_TR(0x6ae7ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae7cd:L6ae7cd:{c.instructions+=4;NFSU2_TR(0x6ae7cd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae7ce:{NFSU2_TR(0x6ae7ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae7d1:{NFSU2_TR(0x6ae7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae7d4:{NFSU2_TR(0x6ae7d4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae75eu);}goto L6ae75e;}}
}
B6ae7d6:L6ae7d6:{c.instructions+=4;NFSU2_TR(0x6ae7d6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae7d8:{NFSU2_TR(0x6ae7d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae7db:{NFSU2_TR(0x6ae7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae7de:{NFSU2_TR(0x6ae7de);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae81a;}}
}
B6ae7e0:L6ae7e0:{c.instructions+=8;NFSU2_TR(0x6ae7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae7e3:{NFSU2_TR(0x6ae7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae7e9:{NFSU2_TR(0x6ae7e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae7ec:{NFSU2_TR(0x6ae7ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae7f2:{NFSU2_TR(0x6ae7f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae7f4:{NFSU2_TR(0x6ae7f4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae7f6:{NFSU2_TR(0x6ae7f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae7fb:{NFSU2_TR(0x6ae7fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae811;}}
}
B6ae7fd:L6ae7fd:{c.instructions+=2;NFSU2_TR(0x6ae7fd);
__builtin_memmove((R+4),(R+24),4);
}
B6ae7ff:{NFSU2_TR(0x6ae7ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae804ull));
TAIL_STATIC(0x6c6c1bu,6c6);
}
B6ae804:L6ae804:{c.instructions+=3;NFSU2_TR(0x6ae804);
__builtin_memmove((R+28),(R+0),4);
}
B6ae806:{NFSU2_TR(0x6ae806);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae808:{NFSU2_TR(0x6ae808);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae80e:L6ae80e:{c.instructions+=1;NFSU2_TR(0x6ae80e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae811:L6ae811:{c.instructions+=4;NFSU2_TR(0x6ae811);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae812:{NFSU2_TR(0x6ae812);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae815:{NFSU2_TR(0x6ae815);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae818:{NFSU2_TR(0x6ae818);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae7e0u);}goto L6ae7e0;}}
}
B6ae81a:L6ae81a:{c.instructions+=2;NFSU2_TR(0x6ae81a);
__builtin_memmove((R+4),(R+24),4);
}
B6ae81c:{NFSU2_TR(0x6ae81c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae821ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ae821:L6ae821:{c.instructions+=4;NFSU2_TR(0x6ae821);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae823:{NFSU2_TR(0x6ae823);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae826:{NFSU2_TR(0x6ae826);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae829:{NFSU2_TR(0x6ae829);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae87d;}}
}
B6ae82b:L6ae82b:{c.instructions+=8;NFSU2_TR(0x6ae82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae82e:{NFSU2_TR(0x6ae82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae834:{NFSU2_TR(0x6ae834);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae837:{NFSU2_TR(0x6ae837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae83d:{NFSU2_TR(0x6ae83d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae83f:{NFSU2_TR(0x6ae83f);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae841:{NFSU2_TR(0x6ae841);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae846:{NFSU2_TR(0x6ae846);
if(r1(R+518)){{goto L6ae84f;}}
}
B6ae848:L6ae848:{c.instructions+=2;NFSU2_TR(0x6ae848);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae84d:{NFSU2_TR(0x6ae84d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae874;}}
}
B6ae84f:L6ae84f:{c.instructions+=2;NFSU2_TR(0x6ae84f);
__builtin_memmove((R+4),(R+24),4);
}
B6ae851:{NFSU2_TR(0x6ae851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae856ull));
TAIL_STATIC(0x6c8379u,6c8);
}
B6ae856:L6ae856:{c.instructions+=3;NFSU2_TR(0x6ae856);
__builtin_memmove((R+28),(R+0),4);
}
B6ae858:{NFSU2_TR(0x6ae858);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae85a:{NFSU2_TR(0x6ae85a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae860:L6ae860:{c.instructions+=2;NFSU2_TR(0x6ae860);
__builtin_memmove((R+4),(R+24),4);
}
B6ae862:{NFSU2_TR(0x6ae862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae867ull));
TAIL_STATIC(0x6c84c7u,6c8);
}
B6ae867:L6ae867:{c.instructions+=3;NFSU2_TR(0x6ae867);
__builtin_memmove((R+28),(R+0),4);
}
B6ae869:{NFSU2_TR(0x6ae869);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae86b:{NFSU2_TR(0x6ae86b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae871:L6ae871:{c.instructions+=1;NFSU2_TR(0x6ae871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae874:L6ae874:{c.instructions+=4;NFSU2_TR(0x6ae874);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae875:{NFSU2_TR(0x6ae875);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae878:{NFSU2_TR(0x6ae878);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae87b:{NFSU2_TR(0x6ae87b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae82bu);}goto L6ae82b;}}
}
B6ae87d:L6ae87d:{c.instructions+=3;NFSU2_TR(0x6ae87d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ae87f:{NFSU2_TR(0x6ae87f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae882:{NFSU2_TR(0x6ae882);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae8c3;}}
}
B6ae884:L6ae884:{c.instructions+=8;NFSU2_TR(0x6ae884);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae887:{NFSU2_TR(0x6ae887);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae88d:{NFSU2_TR(0x6ae88d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae890:{NFSU2_TR(0x6ae890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae896:{NFSU2_TR(0x6ae896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae898:{NFSU2_TR(0x6ae898);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae89a:{NFSU2_TR(0x6ae89a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae89f:{NFSU2_TR(0x6ae89f);
if(r1(R+518)){{goto L6ae8b6;}}
}
B6ae8a1:L6ae8a1:{c.instructions+=2;NFSU2_TR(0x6ae8a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae8a6:{NFSU2_TR(0x6ae8a6);
if(r1(R+518)){{goto L6ae8b6;}}
}
B6ae8a8:L6ae8a8:{c.instructions+=2;NFSU2_TR(0x6ae8a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae8ad:{NFSU2_TR(0x6ae8ad);
if(r1(R+518)){{goto L6ae8b6;}}
}
B6ae8af:L6ae8af:{c.instructions+=2;NFSU2_TR(0x6ae8af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae8b4:{NFSU2_TR(0x6ae8b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae8bd;}}
}
B6ae8b6:L6ae8b6:{c.instructions+=2;NFSU2_TR(0x6ae8b6);
__builtin_memmove((R+4),(R+24),4);
}
B6ae8b8:{NFSU2_TR(0x6ae8b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae8bdull));
TAIL_STATIC(0x6c8629u,6c8);
}
B6ae8bd:L6ae8bd:{c.instructions+=3;NFSU2_TR(0x6ae8bd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ae8be:{NFSU2_TR(0x6ae8be);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6ae8c1:{NFSU2_TR(0x6ae8c1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae884u);}goto L6ae884;}}
}
B6ae8c3:L6ae8c3:{c.instructions+=4;NFSU2_TR(0x6ae8c3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae8c5:{NFSU2_TR(0x6ae8c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae8c8:{NFSU2_TR(0x6ae8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae8cb:{NFSU2_TR(0x6ae8cb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae907;}}
}
B6ae8cd:L6ae8cd:{c.instructions+=8;NFSU2_TR(0x6ae8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae8d0:{NFSU2_TR(0x6ae8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae8d6:{NFSU2_TR(0x6ae8d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae8d9:{NFSU2_TR(0x6ae8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae8df:{NFSU2_TR(0x6ae8df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae8e1:{NFSU2_TR(0x6ae8e1);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae8e3:{NFSU2_TR(0x6ae8e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae8e8:{NFSU2_TR(0x6ae8e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae8fe;}}
}
B6ae8ea:L6ae8ea:{c.instructions+=2;NFSU2_TR(0x6ae8ea);
__builtin_memmove((R+4),(R+24),4);
}
B6ae8ec:{NFSU2_TR(0x6ae8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae8f1ull));
TAIL_STATIC(0x6c7b5bu,6c7);
}
B6ae8f1:L6ae8f1:{c.instructions+=3;NFSU2_TR(0x6ae8f1);
__builtin_memmove((R+28),(R+0),4);
}
B6ae8f3:{NFSU2_TR(0x6ae8f3);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae8f5:{NFSU2_TR(0x6ae8f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae8fb:L6ae8fb:{c.instructions+=1;NFSU2_TR(0x6ae8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae8fe:L6ae8fe:{c.instructions+=4;NFSU2_TR(0x6ae8fe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae8ff:{NFSU2_TR(0x6ae8ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae902:{NFSU2_TR(0x6ae902);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae905:{NFSU2_TR(0x6ae905);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae8cdu);}goto L6ae8cd;}}
}
B6ae907:L6ae907:{c.instructions+=2;NFSU2_TR(0x6ae907);
__builtin_memmove((R+4),(R+24),4);
}
B6ae909:{NFSU2_TR(0x6ae909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae90eull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ae90e:L6ae90e:{c.instructions+=4;NFSU2_TR(0x6ae90e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae910:{NFSU2_TR(0x6ae910);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae913:{NFSU2_TR(0x6ae913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae916:{NFSU2_TR(0x6ae916);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae952;}}
}
B6ae918:L6ae918:{c.instructions+=8;NFSU2_TR(0x6ae918);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae91b:{NFSU2_TR(0x6ae91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae921:{NFSU2_TR(0x6ae921);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae924:{NFSU2_TR(0x6ae924);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae92a:{NFSU2_TR(0x6ae92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae92c:{NFSU2_TR(0x6ae92c);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae92e:{NFSU2_TR(0x6ae92e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae933:{NFSU2_TR(0x6ae933);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae949;}}
}
B6ae935:L6ae935:{c.instructions+=2;NFSU2_TR(0x6ae935);
__builtin_memmove((R+4),(R+24),4);
}
B6ae937:{NFSU2_TR(0x6ae937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae93cull));
TAIL_STATIC(0x6c7681u,6c7);
}
B6ae93c:L6ae93c:{c.instructions+=3;NFSU2_TR(0x6ae93c);
__builtin_memmove((R+28),(R+0),4);
}
B6ae93e:{NFSU2_TR(0x6ae93e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae940:{NFSU2_TR(0x6ae940);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae946:L6ae946:{c.instructions+=1;NFSU2_TR(0x6ae946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae949:L6ae949:{c.instructions+=4;NFSU2_TR(0x6ae949);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae94a:{NFSU2_TR(0x6ae94a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae94d:{NFSU2_TR(0x6ae94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae950:{NFSU2_TR(0x6ae950);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae918u);}goto L6ae918;}}
}
B6ae952:L6ae952:{c.instructions+=4;NFSU2_TR(0x6ae952);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae954:{NFSU2_TR(0x6ae954);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae957:{NFSU2_TR(0x6ae957);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae95a:{NFSU2_TR(0x6ae95a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae996;}}
}
B6ae95c:L6ae95c:{c.instructions+=8;NFSU2_TR(0x6ae95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae95f:{NFSU2_TR(0x6ae95f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae965:{NFSU2_TR(0x6ae965);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae968:{NFSU2_TR(0x6ae968);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae96e:{NFSU2_TR(0x6ae96e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae970:{NFSU2_TR(0x6ae970);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae972:{NFSU2_TR(0x6ae972);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae977:{NFSU2_TR(0x6ae977);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae98d;}}
}
B6ae979:L6ae979:{c.instructions+=2;NFSU2_TR(0x6ae979);
__builtin_memmove((R+4),(R+24),4);
}
B6ae97b:{NFSU2_TR(0x6ae97b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae980ull));
TAIL_STATIC(0x6c2d19u,6c2);
}
B6ae980:L6ae980:{c.instructions+=3;NFSU2_TR(0x6ae980);
__builtin_memmove((R+28),(R+0),4);
}
B6ae982:{NFSU2_TR(0x6ae982);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae984:{NFSU2_TR(0x6ae984);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae98a:L6ae98a:{c.instructions+=1;NFSU2_TR(0x6ae98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae98d:L6ae98d:{c.instructions+=4;NFSU2_TR(0x6ae98d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae98e:{NFSU2_TR(0x6ae98e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae991:{NFSU2_TR(0x6ae991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae994:{NFSU2_TR(0x6ae994);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae95cu);}goto L6ae95c;}}
}
B6ae996:L6ae996:{c.instructions+=4;NFSU2_TR(0x6ae996);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae998:{NFSU2_TR(0x6ae998);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae99b:{NFSU2_TR(0x6ae99b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae99e:{NFSU2_TR(0x6ae99e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ae9dc;}}
}
B6ae9a0:L6ae9a0:{c.instructions+=8;NFSU2_TR(0x6ae9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae9a3:{NFSU2_TR(0x6ae9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae9a9:{NFSU2_TR(0x6ae9a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae9ac:{NFSU2_TR(0x6ae9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae9b2:{NFSU2_TR(0x6ae9b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ae9b4:{NFSU2_TR(0x6ae9b4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ae9b6:{NFSU2_TR(0x6ae9b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ae9bb:{NFSU2_TR(0x6ae9bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ae9d3;}}
}
B6ae9bd:L6ae9bd:{c.instructions+=3;NFSU2_TR(0x6ae9bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ae9bf:{NFSU2_TR(0x6ae9bf);
__builtin_memmove((R+4),(R+24),4);
}
B6ae9c1:{NFSU2_TR(0x6ae9c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae9c6ull));
TAIL_STATIC(0x6c9b3du,6c9);
}
B6ae9c6:L6ae9c6:{c.instructions+=3;NFSU2_TR(0x6ae9c6);
__builtin_memmove((R+28),(R+0),4);
}
B6ae9c8:{NFSU2_TR(0x6ae9c8);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ae9ca:{NFSU2_TR(0x6ae9ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6ae9d0:L6ae9d0:{c.instructions+=1;NFSU2_TR(0x6ae9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ae9d3:L6ae9d3:{c.instructions+=4;NFSU2_TR(0x6ae9d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ae9d4:{NFSU2_TR(0x6ae9d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6ae9d7:{NFSU2_TR(0x6ae9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae9da:{NFSU2_TR(0x6ae9da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae9a0u);}goto L6ae9a0;}}
}
B6ae9dc:L6ae9dc:{c.instructions+=2;NFSU2_TR(0x6ae9dc);
__builtin_memmove((R+4),(R+24),4);
}
B6ae9de:{NFSU2_TR(0x6ae9de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ae9e3ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ae9e3:L6ae9e3:{c.instructions+=4;NFSU2_TR(0x6ae9e3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ae9e5:{NFSU2_TR(0x6ae9e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ae9e8:{NFSU2_TR(0x6ae9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae9eb:{NFSU2_TR(0x6ae9eb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aea4f;}}
}
B6ae9ed:L6ae9ed:{c.instructions+=8;NFSU2_TR(0x6ae9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ae9f0:{NFSU2_TR(0x6ae9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae9f6:{NFSU2_TR(0x6ae9f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ae9f9:{NFSU2_TR(0x6ae9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ae9ff:{NFSU2_TR(0x6ae9ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aea01:{NFSU2_TR(0x6aea01);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6aea03:{NFSU2_TR(0x6aea03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aea08:{NFSU2_TR(0x6aea08);
if(r1(R+518)){{goto L6aea36;}}
}
B6aea0a:L6aea0a:{c.instructions+=2;NFSU2_TR(0x6aea0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aea0f:{NFSU2_TR(0x6aea0f);
if(r1(R+518)){{goto L6aea36;}}
}
B6aea11:L6aea11:{c.instructions+=2;NFSU2_TR(0x6aea11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aea16:{NFSU2_TR(0x6aea16);
if(r1(R+518)){{goto L6aea36;}}
}
B6aea18:L6aea18:{c.instructions+=2;NFSU2_TR(0x6aea18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aea1d:{NFSU2_TR(0x6aea1d);
if(r1(R+518)){{goto L6aea36;}}
}
B6aea1f:L6aea1f:{c.instructions+=2;NFSU2_TR(0x6aea1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aea24:{NFSU2_TR(0x6aea24);
if(r1(R+518)){{goto L6aea36;}}
}
B6aea26:L6aea26:{c.instructions+=2;NFSU2_TR(0x6aea26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aea2b:{NFSU2_TR(0x6aea2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aea46;}}
}
B6aea2d:L6aea2d:{c.instructions+=2;NFSU2_TR(0x6aea2d);
__builtin_memmove((R+4),(R+24),4);
}
B6aea2f:{NFSU2_TR(0x6aea2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aea34ull));
TAIL_STATIC(0x6cf6c6u,6cf);
}
B6aea34:L6aea34:{c.instructions+=1;NFSU2_TR(0x6aea34);
{goto L6aea3d;}
}
B6aea36:L6aea36:{c.instructions+=2;NFSU2_TR(0x6aea36);
__builtin_memmove((R+4),(R+24),4);
}
B6aea38:{NFSU2_TR(0x6aea38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aea3dull));
TAIL_STATIC(0x6c62ddu,6c6);
}
B6aea3d:L6aea3d:{c.instructions+=3;NFSU2_TR(0x6aea3d);
__builtin_memmove((R+28),(R+0),4);
}
B6aea3f:{NFSU2_TR(0x6aea3f);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6aea41:{NFSU2_TR(0x6aea41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6aea43:L6aea43:{c.instructions+=1;NFSU2_TR(0x6aea43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aea46:L6aea46:{c.instructions+=4;NFSU2_TR(0x6aea46);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6aea47:{NFSU2_TR(0x6aea47);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6aea4a:{NFSU2_TR(0x6aea4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aea4d:{NFSU2_TR(0x6aea4d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae9edu);}goto L6ae9ed;}}
}
B6aea4f:L6aea4f:{c.instructions+=2;NFSU2_TR(0x6aea4f);
__builtin_memmove((R+4),(R+24),4);
}
B6aea51:{NFSU2_TR(0x6aea51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aea56ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6aea56:L6aea56:{c.instructions+=2;NFSU2_TR(0x6aea56);
__builtin_memmove((R+4),(R+24),4);
}
B6aea58:{NFSU2_TR(0x6aea58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aea5dull));
TAIL_STATIC(0x69f745u,69f);
}
B6aea5d:L6aea5d:{c.instructions+=3;NFSU2_TR(0x6aea5d);
__builtin_memmove((R+28),(R+0),4);
}
B6aea5f:{NFSU2_TR(0x6aea5f);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6aea61:{NFSU2_TR(0x6aea61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6aea63:L6aea63:{c.instructions+=2;NFSU2_TR(0x6aea63);
__builtin_memmove((R+4),(R+24),4);
}
B6aea65:{NFSU2_TR(0x6aea65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aea6aull));
TAIL_STATIC(0x6a806fu,6a8);
}
B6aea6a:L6aea6a:{c.instructions+=3;NFSU2_TR(0x6aea6a);
__builtin_memmove((R+28),(R+0),4);
}
B6aea6c:{NFSU2_TR(0x6aea6c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6aea6e:{NFSU2_TR(0x6aea6e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6aea70:L6aea70:{c.instructions+=2;NFSU2_TR(0x6aea70);
__builtin_memmove((R+4),(R+24),4);
}
B6aea72:{NFSU2_TR(0x6aea72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aea77ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6aea77:L6aea77:{c.instructions+=3;NFSU2_TR(0x6aea77);
__builtin_memmove((R+28),(R+0),4);
}
B6aea79:{NFSU2_TR(0x6aea79);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6aea7b:{NFSU2_TR(0x6aea7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6aea7d:L6aea7d:{c.instructions+=2;NFSU2_TR(0x6aea7d);
__builtin_memmove((R+4),(R+24),4);
}
B6aea7f:{NFSU2_TR(0x6aea7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aea84ull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6aea84:L6aea84:{c.instructions+=3;NFSU2_TR(0x6aea84);
__builtin_memmove((R+28),(R+0),4);
}
B6aea86:{NFSU2_TR(0x6aea86);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6aea88:{NFSU2_TR(0x6aea88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6aea93;}}
}
B6aea8a:L6aea8a:{c.instructions+=2;NFSU2_TR(0x6aea8a);
__builtin_memmove((R+4),(R+24),4);
}
B6aea8c:{NFSU2_TR(0x6aea8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aea91ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6aea91:L6aea91:{c.instructions+=1;NFSU2_TR(0x6aea91);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6aea93:L6aea93:{c.instructions+=1;NFSU2_TR(0x6aea93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6aea94:L6aea94:{c.instructions+=5;NFSU2_TR(0x6aea94);
__builtin_memmove((R+0),(R+28),4);
}
B6aea96:{NFSU2_TR(0x6aea96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6aea97:{NFSU2_TR(0x6aea97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6aea98:{NFSU2_TR(0x6aea98);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6aea99:{NFSU2_TR(0x6aea99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6aea9a:L6aea9a:{c.instructions+=8;NFSU2_TR(0x6aea9a);
__builtin_memmove((R+28),(R+28),4);
}
B6aea9c:{NFSU2_TR(0x6aea9c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aea9d:{NFSU2_TR(0x6aea9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aea9e:{NFSU2_TR(0x6aea9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aea9f:{NFSU2_TR(0x6aea9f);
__builtin_memmove((R+24),(R+4),4);
}
B6aeaa1:{NFSU2_TR(0x6aeaa1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6aeaa3:{NFSU2_TR(0x6aeaa3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aeaa6:{NFSU2_TR(0x6aeaa6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aeac7;}}
}
B6aeaa8:L6aeaa8:{c.instructions+=6;NFSU2_TR(0x6aeaa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aeaab:{NFSU2_TR(0x6aeaab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aeab1:{NFSU2_TR(0x6aeab1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aeab4:{NFSU2_TR(0x6aeab4);
__builtin_memmove((R+4),(R+24),4);
}
B6aeab6:{NFSU2_TR(0x6aeab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aeabc:{NFSU2_TR(0x6aeabc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeac1ull));
TAIL_STATIC(0x6c3285u,6c3);
}
B6aeac1:L6aeac1:{c.instructions+=3;NFSU2_TR(0x6aeac1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6aeac2:{NFSU2_TR(0x6aeac2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6aeac5:{NFSU2_TR(0x6aeac5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aeaa8u);}goto L6aeaa8;}}
}
B6aeac7:L6aeac7:{c.instructions+=3;NFSU2_TR(0x6aeac7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6aeac9:{NFSU2_TR(0x6aeac9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aeacc:{NFSU2_TR(0x6aeacc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af079u,6af);}
}
B6aead2:L6aead2:{c.instructions+=8;NFSU2_TR(0x6aead2);
w4(R+12,u32(0x80004001ull));
}
B6aead7:{NFSU2_TR(0x6aead7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aeada:{NFSU2_TR(0x6aeada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aeae0:{NFSU2_TR(0x6aeae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aeae3:{NFSU2_TR(0x6aeae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aeae9:{NFSU2_TR(0x6aeae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aeaec:{NFSU2_TR(0x6aeaec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeaee:{NFSU2_TR(0x6aeaee);
if(r1(R+518)){{goto L6aeaff;}}
}
B6aeaf0:L6aeaf0:{c.instructions+=2;NFSU2_TR(0x6aeaf0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aeaf4:{NFSU2_TR(0x6aeaf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aeaff;}}
}
B6aeaf6:L6aeaf6:{c.instructions+=2;NFSU2_TR(0x6aeaf6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B6aeaf9:{NFSU2_TR(0x6aeaf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aeaff:L6aeaff:{c.instructions+=2;NFSU2_TR(0x6aeaff);
__builtin_memmove((R+4),(R+24),4);
}
B6aeb01:{NFSU2_TR(0x6aeb01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeb06ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ae2b2u);}goto L6ae2b2;}
}
B6aeb06:L6aeb06:{c.instructions+=2;NFSU2_TR(0x6aeb06);
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
B6aeb08:{NFSU2_TR(0x6aeb08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6af07bu,6af);}
}
B6aeb0e:L6aeb0e:{c.instructions+=6;NFSU2_TR(0x6aeb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aeb14:{NFSU2_TR(0x6aeb14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aeb16:{NFSU2_TR(0x6aeb16);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6aeb1b:{NFSU2_TR(0x6aeb1b);
w4(R+4,u32(0x60f00000ull));
}
B6aeb20:{NFSU2_TR(0x6aeb20);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aeb22:{NFSU2_TR(0x6aeb22);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aee3d;}}
}
B6aeb28:L6aeb28:{c.instructions+=1;NFSU2_TR(0x6aeb28);
if(r1(R+518)){{goto L6aee27;}}
}
B6aeb2e:L6aeb2e:{c.instructions+=3;NFSU2_TR(0x6aeb2e);
w4(R+4,u32(0x20700000ull));
}
B6aeb33:{NFSU2_TR(0x6aeb33);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aeb35:{NFSU2_TR(0x6aeb35);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aecea;}}
}
B6aeb3b:L6aeb3b:{c.instructions+=1;NFSU2_TR(0x6aeb3b);
if(r1(R+518)){{goto L6aecde;}}
}
B6aeb41:L6aeb41:{c.instructions+=3;NFSU2_TR(0x6aeb41);
w4(R+4,u32(0x10f00000ull));
}
B6aeb46:{NFSU2_TR(0x6aeb46);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aeb48:{NFSU2_TR(0x6aeb48);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aec26;}}
}
B6aeb4e:L6aeb4e:{c.instructions+=1;NFSU2_TR(0x6aeb4e);
if(r1(R+518)){TAIL_STATIC(0x6af00du,6af);}
}
B6aeb54:L6aeb54:{c.instructions+=3;NFSU2_TR(0x6aeb54);
w4(R+4,u32(0x10500000ull));
}
B6aeb59:{NFSU2_TR(0x6aeb59);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aeb5b:{NFSU2_TR(0x6aeb5b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aebc3;}}
}
B6aeb5d:L6aeb5d:{c.instructions+=1;NFSU2_TR(0x6aeb5d);
if(r1(R+518)){{goto L6aebb7;}}
}
B6aeb5f:L6aeb5f:{c.instructions+=2;NFSU2_TR(0x6aeb5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeb61:{NFSU2_TR(0x6aeb61);
if(r1(R+518)){{goto L6aebab;}}
}
B6aeb63:L6aeb63:{c.instructions+=2;NFSU2_TR(0x6aeb63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeb68:{NFSU2_TR(0x6aeb68);
if(r1(R+518)){{goto L6aec6c;}}
}
B6aeb6e:L6aeb6e:{c.instructions+=2;NFSU2_TR(0x6aeb6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeb73:{NFSU2_TR(0x6aeb73);
if(r1(R+518)){{goto L6aeb9f;}}
}
B6aeb75:L6aeb75:{c.instructions+=2;NFSU2_TR(0x6aeb75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeb7a:{NFSU2_TR(0x6aeb7a);
if(r1(R+518)){{goto L6aeb93;}}
}
B6aeb7c:L6aeb7c:{c.instructions+=2;NFSU2_TR(0x6aeb7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeb81:{NFSU2_TR(0x6aeb81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aeb87:L6aeb87:{c.instructions+=2;NFSU2_TR(0x6aeb87);
__builtin_memmove((R+4),(R+24),4);
}
B6aeb89:{NFSU2_TR(0x6aeb89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeb8eull));
TAIL_STATIC(0x6d37dau,6d3);
}
B6aeb8e:L6aeb8e:{c.instructions+=1;NFSU2_TR(0x6aeb8e);
TAIL_STATIC(0x6af06bu,6af);
}
B6aeb93:L6aeb93:{c.instructions+=2;NFSU2_TR(0x6aeb93);
__builtin_memmove((R+4),(R+24),4);
}
B6aeb95:{NFSU2_TR(0x6aeb95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeb9aull));
TAIL_STATIC(0x6d37bcu,6d3);
}
B6aeb9a:L6aeb9a:{c.instructions+=1;NFSU2_TR(0x6aeb9a);
TAIL_STATIC(0x6af06bu,6af);
}
B6aeb9f:L6aeb9f:{c.instructions+=2;NFSU2_TR(0x6aeb9f);
__builtin_memmove((R+4),(R+24),4);
}
B6aeba1:{NFSU2_TR(0x6aeba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeba6ull));
TAIL_STATIC(0x6d2c79u,6d2);
}
B6aeba6:L6aeba6:{c.instructions+=1;NFSU2_TR(0x6aeba6);
TAIL_STATIC(0x6af06bu,6af);
}
B6aebab:L6aebab:{c.instructions+=2;NFSU2_TR(0x6aebab);
__builtin_memmove((R+4),(R+24),4);
}
B6aebad:{NFSU2_TR(0x6aebad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aebb2ull));
TAIL_STATIC(0x727e6bu,727);
}
B6aebb2:L6aebb2:{c.instructions+=1;NFSU2_TR(0x6aebb2);
TAIL_STATIC(0x6af06bu,6af);
}
B6aebb7:L6aebb7:{c.instructions+=2;NFSU2_TR(0x6aebb7);
__builtin_memmove((R+4),(R+24),4);
}
B6aebb9:{NFSU2_TR(0x6aebb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aebbeull));
TAIL_STATIC(0x6d37e4u,6d3);
}
B6aebbe:L6aebbe:{c.instructions+=1;NFSU2_TR(0x6aebbe);
TAIL_STATIC(0x6af06bu,6af);
}
B6aebc3:L6aebc3:{c.instructions+=2;NFSU2_TR(0x6aebc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aebc8:{NFSU2_TR(0x6aebc8);
if(r1(R+518)){{goto L6aec1a;}}
}
B6aebca:L6aebca:{c.instructions+=2;NFSU2_TR(0x6aebca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aebcf:{NFSU2_TR(0x6aebcf);
if(r1(R+518)){{goto L6aec0e;}}
}
B6aebd1:L6aebd1:{c.instructions+=2;NFSU2_TR(0x6aebd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aebd6:{NFSU2_TR(0x6aebd6);
if(r1(R+518)){{goto L6aebfc;}}
}
B6aebd8:L6aebd8:{c.instructions+=2;NFSU2_TR(0x6aebd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aebdd:{NFSU2_TR(0x6aebdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aebe3:L6aebe3:{c.instructions+=2;NFSU2_TR(0x6aebe3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aebe7:{NFSU2_TR(0x6aebe7);
if(r1(R+518)){{goto L6aebf5;}}
}
B6aebe9:L6aebe9:{c.instructions+=2;NFSU2_TR(0x6aebe9);
__builtin_memmove((R+4),(R+24),4);
}
B6aebeb:{NFSU2_TR(0x6aebeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aebf0ull));
TAIL_STATIC(0x6d37b2u,6d3);
}
B6aebf0:L6aebf0:{c.instructions+=1;NFSU2_TR(0x6aebf0);
TAIL_STATIC(0x6af06bu,6af);
}
B6aebf5:L6aebf5:{c.instructions+=2;NFSU2_TR(0x6aebf5);
__builtin_memmove((R+0),(R+12),4);
}
B6aebf7:{NFSU2_TR(0x6aebf7);
TAIL_STATIC(0x6af06bu,6af);
}
B6aebfc:L6aebfc:{c.instructions+=2;NFSU2_TR(0x6aebfc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aec00:{NFSU2_TR(0x6aec00);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aebf5u);}goto L6aebf5;}}
}
B6aec02:L6aec02:{c.instructions+=2;NFSU2_TR(0x6aec02);
__builtin_memmove((R+4),(R+24),4);
}
B6aec04:{NFSU2_TR(0x6aec04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aec09ull));
TAIL_STATIC(0x6d37a8u,6d3);
}
B6aec09:L6aec09:{c.instructions+=1;NFSU2_TR(0x6aec09);
TAIL_STATIC(0x6af06bu,6af);
}
B6aec0e:L6aec0e:{c.instructions+=2;NFSU2_TR(0x6aec0e);
__builtin_memmove((R+4),(R+24),4);
}
B6aec10:{NFSU2_TR(0x6aec10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aec15ull));
TAIL_STATIC(0x6d3820u,6d3);
}
B6aec15:L6aec15:{c.instructions+=1;NFSU2_TR(0x6aec15);
TAIL_STATIC(0x6af06bu,6af);
}
B6aec1a:L6aec1a:{c.instructions+=2;NFSU2_TR(0x6aec1a);
__builtin_memmove((R+4),(R+24),4);
}
B6aec1c:{NFSU2_TR(0x6aec1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aec21ull));
TAIL_STATIC(0x6d3802u,6d3);
}
B6aec21:L6aec21:{c.instructions+=1;NFSU2_TR(0x6aec21);
TAIL_STATIC(0x6af06bu,6af);
}
B6aec26:L6aec26:{c.instructions+=3;NFSU2_TR(0x6aec26);
w4(R+4,u32(0x20100000ull));
}
B6aec2b:{NFSU2_TR(0x6aec2b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aec2d:{NFSU2_TR(0x6aec2d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aec8e;}}
}
B6aec2f:L6aec2f:{c.instructions+=1;NFSU2_TR(0x6aec2f);
if(r1(R+518)){{goto L6aef4d;}}
}
B6aec35:L6aec35:{c.instructions+=2;NFSU2_TR(0x6aec35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aec3a:{NFSU2_TR(0x6aec3a);
if(r1(R+518)){{goto L6aec78;}}
}
B6aec3c:L6aec3c:{c.instructions+=2;NFSU2_TR(0x6aec3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aec41:{NFSU2_TR(0x6aec41);
if(r1(R+518)){{goto L6aec6c;}}
}
B6aec43:L6aec43:{c.instructions+=2;NFSU2_TR(0x6aec43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aec48:{NFSU2_TR(0x6aec48);
if(r1(R+518)){TAIL_STATIC(0x6af06fu,6af);}
}
B6aec4e:L6aec4e:{c.instructions+=2;NFSU2_TR(0x6aec4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aec53:{NFSU2_TR(0x6aec53);
if(r1(R+518)){{goto L6aec6c;}}
}
B6aec55:L6aec55:{c.instructions+=2;NFSU2_TR(0x6aec55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aec5a:{NFSU2_TR(0x6aec5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aec60:L6aec60:{c.instructions+=2;NFSU2_TR(0x6aec60);
__builtin_memmove((R+4),(R+24),4);
}
B6aec62:{NFSU2_TR(0x6aec62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aec67ull));
TAIL_STATIC(0x6d383eu,6d3);
}
B6aec67:L6aec67:{c.instructions+=1;NFSU2_TR(0x6aec67);
TAIL_STATIC(0x6af06bu,6af);
}
B6aec6c:L6aec6c:{c.instructions+=2;NFSU2_TR(0x6aec6c);
__builtin_memmove((R+4),(R+24),4);
}
B6aec6e:{NFSU2_TR(0x6aec6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aec73ull));
TAIL_STATIC(0x6d366fu,6d3);
}
B6aec73:L6aec73:{c.instructions+=1;NFSU2_TR(0x6aec73);
TAIL_STATIC(0x6af06bu,6af);
}
B6aec78:L6aec78:{c.instructions+=2;NFSU2_TR(0x6aec78);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aec7c:{NFSU2_TR(0x6aec7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0c5u,6af);}
}
B6aec82:L6aec82:{c.instructions+=2;NFSU2_TR(0x6aec82);
__builtin_memmove((R+4),(R+24),4);
}
B6aec84:{NFSU2_TR(0x6aec84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aec89ull));
TAIL_STATIC(0x6d2485u,6d2);
}
B6aec89:L6aec89:{c.instructions+=1;NFSU2_TR(0x6aec89);
TAIL_STATIC(0x6af06bu,6af);
}
B6aec8e:L6aec8e:{c.instructions+=2;NFSU2_TR(0x6aec8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aec93:{NFSU2_TR(0x6aec93);
if(r1(R+518)){{goto L6aecd2;}}
}
B6aec95:L6aec95:{c.instructions+=2;NFSU2_TR(0x6aec95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aec9a:{NFSU2_TR(0x6aec9a);
if(r1(R+518)){{goto L6aecc6;}}
}
B6aec9c:L6aec9c:{c.instructions+=2;NFSU2_TR(0x6aec9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeca1:{NFSU2_TR(0x6aeca1);
if(r1(R+518)){{goto L6aecba;}}
}
B6aeca3:L6aeca3:{c.instructions+=2;NFSU2_TR(0x6aeca3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeca8:{NFSU2_TR(0x6aeca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aecae:L6aecae:{c.instructions+=2;NFSU2_TR(0x6aecae);
__builtin_memmove((R+4),(R+24),4);
}
B6aecb0:{NFSU2_TR(0x6aecb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aecb5ull));
TAIL_STATIC(0x6d3870u,6d3);
}
B6aecb5:L6aecb5:{c.instructions+=1;NFSU2_TR(0x6aecb5);
TAIL_STATIC(0x6af06bu,6af);
}
B6aecba:L6aecba:{c.instructions+=2;NFSU2_TR(0x6aecba);
__builtin_memmove((R+4),(R+24),4);
}
B6aecbc:{NFSU2_TR(0x6aecbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aecc1ull));
TAIL_STATIC(0x6d3866u,6d3);
}
B6aecc1:L6aecc1:{c.instructions+=1;NFSU2_TR(0x6aecc1);
TAIL_STATIC(0x6af06bu,6af);
}
B6aecc6:L6aecc6:{c.instructions+=2;NFSU2_TR(0x6aecc6);
__builtin_memmove((R+4),(R+24),4);
}
B6aecc8:{NFSU2_TR(0x6aecc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeccdull));
TAIL_STATIC(0x6d385cu,6d3);
}
B6aeccd:L6aeccd:{c.instructions+=1;NFSU2_TR(0x6aeccd);
TAIL_STATIC(0x6af06bu,6af);
}
B6aecd2:L6aecd2:{c.instructions+=2;NFSU2_TR(0x6aecd2);
__builtin_memmove((R+4),(R+24),4);
}
B6aecd4:{NFSU2_TR(0x6aecd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aecd9ull));
TAIL_STATIC(0x6d3852u,6d3);
}
B6aecd9:L6aecd9:{c.instructions+=1;NFSU2_TR(0x6aecd9);
TAIL_STATIC(0x6af06bu,6af);
}
B6aecde:L6aecde:{c.instructions+=2;NFSU2_TR(0x6aecde);
__builtin_memmove((R+4),(R+24),4);
}
B6aece0:{NFSU2_TR(0x6aece0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aece5ull));
TAIL_STATIC(0x6d2881u,6d2);
}
B6aece5:L6aece5:{c.instructions+=1;NFSU2_TR(0x6aece5);
TAIL_STATIC(0x6af06bu,6af);
}
B6aecea:L6aecea:{c.instructions+=3;NFSU2_TR(0x6aecea);
w4(R+4,u32(0x60400000ull));
}
B6aecef:{NFSU2_TR(0x6aecef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aecf1:{NFSU2_TR(0x6aecf1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aedb3;}}
}
B6aecf7:L6aecf7:{c.instructions+=1;NFSU2_TR(0x6aecf7);
if(r1(R+518)){{goto L6aee11;}}
}
B6aecfd:L6aecfd:{c.instructions+=3;NFSU2_TR(0x6aecfd);
w4(R+4,u32(0x50300000ull));
}
B6aed02:{NFSU2_TR(0x6aed02);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aed04:{NFSU2_TR(0x6aed04);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aed71;}}
}
B6aed06:L6aed06:{c.instructions+=1;NFSU2_TR(0x6aed06);
if(r1(R+518)){{goto L6aed65;}}
}
B6aed08:L6aed08:{c.instructions+=2;NFSU2_TR(0x6aed08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aed0d:{NFSU2_TR(0x6aed0d);
if(r1(R+518)){TAIL_STATIC(0x6af06fu,6af);}
}
B6aed13:L6aed13:{c.instructions+=2;NFSU2_TR(0x6aed13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aed18:{NFSU2_TR(0x6aed18);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aec6cu);}goto L6aec6c;}}
}
B6aed1e:L6aed1e:{c.instructions+=2;NFSU2_TR(0x6aed1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aed23:{NFSU2_TR(0x6aed23);
if(r1(R+518)){{goto L6aed4f;}}
}
B6aed25:L6aed25:{c.instructions+=2;NFSU2_TR(0x6aed25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aed2a:{NFSU2_TR(0x6aed2a);
if(r1(R+518)){{goto L6aed43;}}
}
B6aed2c:L6aed2c:{c.instructions+=2;NFSU2_TR(0x6aed2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aed31:{NFSU2_TR(0x6aed31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aed37:L6aed37:{c.instructions+=2;NFSU2_TR(0x6aed37);
__builtin_memmove((R+4),(R+24),4);
}
B6aed39:{NFSU2_TR(0x6aed39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aed3eull));
TAIL_STATIC(0x6d3937u,6d3);
}
B6aed3e:L6aed3e:{c.instructions+=1;NFSU2_TR(0x6aed3e);
TAIL_STATIC(0x6af06bu,6af);
}
B6aed43:L6aed43:{c.instructions+=2;NFSU2_TR(0x6aed43);
__builtin_memmove((R+4),(R+24),4);
}
B6aed45:{NFSU2_TR(0x6aed45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aed4aull));
TAIL_STATIC(0x6d3884u,6d3);
}
B6aed4a:L6aed4a:{c.instructions+=1;NFSU2_TR(0x6aed4a);
TAIL_STATIC(0x6af06bu,6af);
}
B6aed4f:L6aed4f:{c.instructions+=2;NFSU2_TR(0x6aed4f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aed53:{NFSU2_TR(0x6aed53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0c5u,6af);}
}
B6aed59:L6aed59:{c.instructions+=2;NFSU2_TR(0x6aed59);
__builtin_memmove((R+4),(R+24),4);
}
B6aed5b:{NFSU2_TR(0x6aed5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aed60ull));
TAIL_STATIC(0x6d3941u,6d3);
}
B6aed60:L6aed60:{c.instructions+=1;NFSU2_TR(0x6aed60);
TAIL_STATIC(0x6af06bu,6af);
}
B6aed65:L6aed65:{c.instructions+=2;NFSU2_TR(0x6aed65);
__builtin_memmove((R+4),(R+24),4);
}
B6aed67:{NFSU2_TR(0x6aed67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aed6cull));
TAIL_STATIC(0x6d25dau,6d2);
}
B6aed6c:L6aed6c:{c.instructions+=1;NFSU2_TR(0x6aed6c);
TAIL_STATIC(0x6af06bu,6af);
}
B6aed71:L6aed71:{c.instructions+=2;NFSU2_TR(0x6aed71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aed76:{NFSU2_TR(0x6aed76);
if(r1(R+518)){{goto L6aee27;}}
}
B6aed7c:L6aed7c:{c.instructions+=2;NFSU2_TR(0x6aed7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aed81:{NFSU2_TR(0x6aed81);
if(r1(R+518)){{goto L6aeebb;}}
}
B6aed87:L6aed87:{c.instructions+=2;NFSU2_TR(0x6aed87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aed8c:{NFSU2_TR(0x6aed8c);
if(r1(R+518)){{goto L6aeea5;}}
}
B6aed92:L6aed92:{c.instructions+=2;NFSU2_TR(0x6aed92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aed97:{NFSU2_TR(0x6aed97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aed9d:L6aed9d:{c.instructions+=2;NFSU2_TR(0x6aed9d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aeda1:{NFSU2_TR(0x6aeda1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0c5u,6af);}
}
B6aeda7:L6aeda7:{c.instructions+=2;NFSU2_TR(0x6aeda7);
__builtin_memmove((R+4),(R+24),4);
}
B6aeda9:{NFSU2_TR(0x6aeda9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aedaeull));
TAIL_STATIC(0x6d2384u,6d2);
}
B6aedae:L6aedae:{c.instructions+=1;NFSU2_TR(0x6aedae);
TAIL_STATIC(0x6af06bu,6af);
}
B6aedb3:L6aedb3:{c.instructions+=3;NFSU2_TR(0x6aedb3);
w4(R+4,u32(0x60a00000ull));
}
B6aedb8:{NFSU2_TR(0x6aedb8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aedba:{NFSU2_TR(0x6aedba);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aede9;}}
}
B6aedbc:L6aedbc:{c.instructions+=1;NFSU2_TR(0x6aedbc);
if(r1(R+518)){{goto L6aee27;}}
}
B6aedbe:L6aedbe:{c.instructions+=2;NFSU2_TR(0x6aedbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aedc3:{NFSU2_TR(0x6aedc3);
if(r1(R+518)){{goto L6aee27;}}
}
B6aedc5:L6aedc5:{c.instructions+=2;NFSU2_TR(0x6aedc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aedca:{NFSU2_TR(0x6aedca);
if(r1(R+518)){{goto L6aeebb;}}
}
B6aedd0:L6aedd0:{c.instructions+=2;NFSU2_TR(0x6aedd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aedd5:{NFSU2_TR(0x6aedd5);
if(r1(R+518)){{goto L6aeea5;}}
}
B6aeddb:L6aeddb:{c.instructions+=2;NFSU2_TR(0x6aeddb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aede0:{NFSU2_TR(0x6aede0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aed9du);}goto L6aed9d;}}
}
B6aede2:L6aede2:{c.instructions+=2;NFSU2_TR(0x6aede2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aede7:{NFSU2_TR(0x6aede7);
{goto L6aee0b;}
}
B6aede9:L6aede9:{c.instructions+=2;NFSU2_TR(0x6aede9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aedee:{NFSU2_TR(0x6aedee);
if(r1(R+518)){{goto L6aeebb;}}
}
B6aedf4:L6aedf4:{c.instructions+=2;NFSU2_TR(0x6aedf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60c00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aedf9:{NFSU2_TR(0x6aedf9);
if(r1(R+518)){{goto L6aeea5;}}
}
B6aedff:L6aedff:{c.instructions+=2;NFSU2_TR(0x6aedff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aee04:{NFSU2_TR(0x6aee04);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aed9du);}goto L6aed9d;}}
}
B6aee06:L6aee06:{c.instructions+=1;NFSU2_TR(0x6aee06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aee0b:L6aee0b:{c.instructions+=1;NFSU2_TR(0x6aee0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aee11:L6aee11:{c.instructions+=2;NFSU2_TR(0x6aee11);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aee15:{NFSU2_TR(0x6aee15);
if(r1(R+518)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aee1b:L6aee1b:{c.instructions+=2;NFSU2_TR(0x6aee1b);
__builtin_memmove((R+4),(R+24),4);
}
B6aee1d:{NFSU2_TR(0x6aee1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aee22ull));
TAIL_STATIC(0x6d23ebu,6d2);
}
B6aee22:L6aee22:{c.instructions+=1;NFSU2_TR(0x6aee22);
TAIL_STATIC(0x6af06bu,6af);
}
B6aee27:L6aee27:{c.instructions+=2;NFSU2_TR(0x6aee27);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aee2b:{NFSU2_TR(0x6aee2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0c5u,6af);}
}
B6aee31:L6aee31:{c.instructions+=2;NFSU2_TR(0x6aee31);
__builtin_memmove((R+4),(R+24),4);
}
B6aee33:{NFSU2_TR(0x6aee33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aee38ull));
TAIL_STATIC(0x6d208au,6d2);
}
B6aee38:L6aee38:{c.instructions+=1;NFSU2_TR(0x6aee38);
TAIL_STATIC(0x6af06bu,6af);
}
B6aee3d:L6aee3d:{c.instructions+=3;NFSU2_TR(0x6aee3d);
w4(R+4,u32(0x73400000ull));
}
B6aee42:{NFSU2_TR(0x6aee42);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aee44:{NFSU2_TR(0x6aee44);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aefc7;}}
}
B6aee4a:L6aee4a:{c.instructions+=1;NFSU2_TR(0x6aee4a);
if(r1(R+518)){{goto L6aefbb;}}
}
B6aee50:L6aee50:{c.instructions+=3;NFSU2_TR(0x6aee50);
w4(R+4,u32(0x70600000ull));
}
B6aee55:{NFSU2_TR(0x6aee55);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aee57:{NFSU2_TR(0x6aee57);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aef17;}}
}
B6aee5d:L6aee5d:{c.instructions+=1;NFSU2_TR(0x6aee5d);
if(r1(R+518)){{goto L6aeef3;}}
}
B6aee63:L6aee63:{c.instructions+=3;NFSU2_TR(0x6aee63);
w4(R+4,u32(0x70100000ull));
}
B6aee68:{NFSU2_TR(0x6aee68);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aee6a:{NFSU2_TR(0x6aee6a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aeed3;}}
}
B6aee6c:L6aee6c:{c.instructions+=1;NFSU2_TR(0x6aee6c);
if(r1(R+518)){{goto L6aeec7;}}
}
B6aee6e:L6aee6e:{c.instructions+=2;NFSU2_TR(0x6aee6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aee73:{NFSU2_TR(0x6aee73);
if(r1(R+518)){{goto L6aeebb;}}
}
B6aee75:L6aee75:{c.instructions+=2;NFSU2_TR(0x6aee75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aee7a:{NFSU2_TR(0x6aee7a);
if(r1(R+518)){{goto L6aeea5;}}
}
B6aee7c:L6aee7c:{c.instructions+=2;NFSU2_TR(0x6aee7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aee81:{NFSU2_TR(0x6aee81);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aed9du);}goto L6aed9d;}}
}
B6aee87:L6aee87:{c.instructions+=2;NFSU2_TR(0x6aee87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aee8c:{NFSU2_TR(0x6aee8c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aee11u);}goto L6aee11;}}
}
B6aee8e:L6aee8e:{c.instructions+=2;NFSU2_TR(0x6aee8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aee93:{NFSU2_TR(0x6aee93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aee99:L6aee99:{c.instructions+=2;NFSU2_TR(0x6aee99);
__builtin_memmove((R+4),(R+24),4);
}
B6aee9b:{NFSU2_TR(0x6aee9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeea0ull));
TAIL_STATIC(0x6d3955u,6d3);
}
B6aeea0:L6aeea0:{c.instructions+=1;NFSU2_TR(0x6aeea0);
TAIL_STATIC(0x6af06bu,6af);
}
B6aeea5:L6aeea5:{c.instructions+=2;NFSU2_TR(0x6aeea5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6aeea9:{NFSU2_TR(0x6aeea9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0c5u,6af);}
}
B6aeeaf:L6aeeaf:{c.instructions+=2;NFSU2_TR(0x6aeeaf);
__builtin_memmove((R+4),(R+24),4);
}
B6aeeb1:{NFSU2_TR(0x6aeeb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeeb6ull));
TAIL_STATIC(0x6d231du,6d2);
}
B6aeeb6:L6aeeb6:{c.instructions+=1;NFSU2_TR(0x6aeeb6);
TAIL_STATIC(0x6af06bu,6af);
}
B6aeebb:L6aeebb:{c.instructions+=2;NFSU2_TR(0x6aeebb);
__builtin_memmove((R+4),(R+24),4);
}
B6aeebd:{NFSU2_TR(0x6aeebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeec2ull));
TAIL_STATIC(0x6d20eeu,6d2);
}
B6aeec2:L6aeec2:{c.instructions+=1;NFSU2_TR(0x6aeec2);
TAIL_STATIC(0x6af06bu,6af);
}
B6aeec7:L6aeec7:{c.instructions+=2;NFSU2_TR(0x6aeec7);
__builtin_memmove((R+4),(R+24),4);
}
B6aeec9:{NFSU2_TR(0x6aeec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeeceull));
TAIL_STATIC(0x6d2df8u,6d2);
}
B6aeece:L6aeece:{c.instructions+=1;NFSU2_TR(0x6aeece);
TAIL_STATIC(0x6af06bu,6af);
}
B6aeed3:L6aeed3:{c.instructions+=2;NFSU2_TR(0x6aeed3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeed8:{NFSU2_TR(0x6aeed8);
if(r1(R+518)){{goto L6aef0b;}}
}
B6aeeda:L6aeeda:{c.instructions+=2;NFSU2_TR(0x6aeeda);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeedf:{NFSU2_TR(0x6aeedf);
if(r1(R+518)){{goto L6aeeff;}}
}
B6aeee1:L6aeee1:{c.instructions+=2;NFSU2_TR(0x6aeee1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeee6:{NFSU2_TR(0x6aeee6);
if(r1(R+518)){{goto L6aeeff;}}
}
B6aeee8:L6aeee8:{c.instructions+=2;NFSU2_TR(0x6aeee8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeeed:{NFSU2_TR(0x6aeeed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aeef3:L6aeef3:{c.instructions+=2;NFSU2_TR(0x6aeef3);
__builtin_memmove((R+4),(R+24),4);
}
B6aeef5:{NFSU2_TR(0x6aeef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aeefaull));
TAIL_STATIC(0x6d30f7u,6d3);
}
B6aeefa:L6aeefa:{c.instructions+=1;NFSU2_TR(0x6aeefa);
TAIL_STATIC(0x6af06bu,6af);
}
B6aeeff:L6aeeff:{c.instructions+=2;NFSU2_TR(0x6aeeff);
__builtin_memmove((R+4),(R+24),4);
}
B6aef01:{NFSU2_TR(0x6aef01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aef06ull));
TAIL_STATIC(0x6d2fb9u,6d2);
}
B6aef06:L6aef06:{c.instructions+=1;NFSU2_TR(0x6aef06);
TAIL_STATIC(0x6af06bu,6af);
}
B6aef0b:L6aef0b:{c.instructions+=2;NFSU2_TR(0x6aef0b);
__builtin_memmove((R+4),(R+24),4);
}
B6aef0d:{NFSU2_TR(0x6aef0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aef12ull));
TAIL_STATIC(0x6d2f13u,6d2);
}
B6aef12:L6aef12:{c.instructions+=1;NFSU2_TR(0x6aef12);
TAIL_STATIC(0x6af06bu,6af);
}
B6aef17:L6aef17:{c.instructions+=3;NFSU2_TR(0x6aef17);
w4(R+4,u32(0x70d00000ull));
}
B6aef1c:{NFSU2_TR(0x6aef1c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aef1e:{NFSU2_TR(0x6aef1e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6aef7d;}}
}
B6aef20:L6aef20:{c.instructions+=1;NFSU2_TR(0x6aef20);
if(r1(R+518)){{goto L6aef71;}}
}
B6aef22:L6aef22:{c.instructions+=2;NFSU2_TR(0x6aef22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aef27:{NFSU2_TR(0x6aef27);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aeef3u);}goto L6aeef3;}}
}
B6aef29:L6aef29:{c.instructions+=2;NFSU2_TR(0x6aef29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aef2e:{NFSU2_TR(0x6aef2e);
if(r1(R+518)){{goto L6aef65;}}
}
B6aef30:L6aef30:{c.instructions+=2;NFSU2_TR(0x6aef30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aef35:{NFSU2_TR(0x6aef35);
if(r1(R+518)){{goto L6aef59;}}
}
B6aef37:L6aef37:{c.instructions+=2;NFSU2_TR(0x6aef37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aef3c:{NFSU2_TR(0x6aef3c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aec60u);}goto L6aec60;}}
}
B6aef42:L6aef42:{c.instructions+=2;NFSU2_TR(0x6aef42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70c00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aef47:{NFSU2_TR(0x6aef47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aef4d:L6aef4d:{c.instructions+=2;NFSU2_TR(0x6aef4d);
__builtin_memmove((R+4),(R+24),4);
}
B6aef4f:{NFSU2_TR(0x6aef4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aef54ull));
TAIL_STATIC(0x6d3848u,6d3);
}
B6aef54:L6aef54:{c.instructions+=1;NFSU2_TR(0x6aef54);
TAIL_STATIC(0x6af06bu,6af);
}
B6aef59:L6aef59:{c.instructions+=2;NFSU2_TR(0x6aef59);
__builtin_memmove((R+4),(R+24),4);
}
B6aef5b:{NFSU2_TR(0x6aef5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aef60ull));
TAIL_STATIC(0x6d387au,6d3);
}
B6aef60:L6aef60:{c.instructions+=1;NFSU2_TR(0x6aef60);
TAIL_STATIC(0x6af06bu,6af);
}
B6aef65:L6aef65:{c.instructions+=2;NFSU2_TR(0x6aef65);
__builtin_memmove((R+4),(R+24),4);
}
B6aef67:{NFSU2_TR(0x6aef67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aef6cull));
TAIL_STATIC(0x6d244fu,6d2);
}
B6aef6c:L6aef6c:{c.instructions+=1;NFSU2_TR(0x6aef6c);
TAIL_STATIC(0x6af06bu,6af);
}
B6aef71:L6aef71:{c.instructions+=2;NFSU2_TR(0x6aef71);
__builtin_memmove((R+4),(R+24),4);
}
B6aef73:{NFSU2_TR(0x6aef73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aef78ull));
TAIL_STATIC(0x6d2d86u,6d2);
}
B6aef78:L6aef78:{c.instructions+=1;NFSU2_TR(0x6aef78);
TAIL_STATIC(0x6af06bu,6af);
}
B6aef7d:L6aef7d:{c.instructions+=2;NFSU2_TR(0x6aef7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aef82:{NFSU2_TR(0x6aef82);
if(r1(R+518)){{goto L6aefb7;}}
}
B6aef84:L6aef84:{c.instructions+=2;NFSU2_TR(0x6aef84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aef89:{NFSU2_TR(0x6aef89);
if(r1(R+518)){{goto L6aef9d;}}
}
B6aef8b:L6aef8b:{c.instructions+=2;NFSU2_TR(0x6aef8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aef90:{NFSU2_TR(0x6aef90);
if(r1(R+518)){{goto L6aefa9;}}
}
B6aef92:L6aef92:{c.instructions+=2;NFSU2_TR(0x6aef92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aef97:{NFSU2_TR(0x6aef97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
}
B6aef9d:L6aef9d:{c.instructions+=2;NFSU2_TR(0x6aef9d);
__builtin_memmove((R+4),(R+24),4);
}
B6aef9f:{NFSU2_TR(0x6aef9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aefa4ull));
TAIL_STATIC(0x6d2c25u,6d2);
}
B6aefa4:L6aefa4:{c.instructions+=1;NFSU2_TR(0x6aefa4);
TAIL_STATIC(0x6af06bu,6af);
}
B6aefa9:L6aefa9:{c.instructions+=1;NFSU2_TR(0x6aefa9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aefab:L6aefab:{c.instructions+=2;NFSU2_TR(0x6aefab);
__builtin_memmove((R+4),(R+24),4);
}
B6aefad:{NFSU2_TR(0x6aefad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aefb2ull));
TAIL_STATIC(0x6d2babu,6d2);
}
B6aefb2:L6aefb2:{c.instructions+=1;NFSU2_TR(0x6aefb2);
TAIL_STATIC(0x6af06bu,6af);
}
B6aefb7:L6aefb7:{c.instructions+=2;NFSU2_TR(0x6aefb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aefb9:{NFSU2_TR(0x6aefb9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aefabu);}goto L6aefab;}
}
B6aefbb:L6aefbb:{c.instructions+=2;NFSU2_TR(0x6aefbb);
__builtin_memmove((R+4),(R+24),4);
}
B6aefbd:{NFSU2_TR(0x6aefbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aefc2ull));
TAIL_STATIC(0x6d2c4fu,6d2);
}
B6aefc2:L6aefc2:{c.instructions+=1;NFSU2_TR(0x6aefc2);
TAIL_STATIC(0x6af06bu,6af);
}
B6aefc7:L6aefc7:{c.instructions+=3;NFSU2_TR(0x6aefc7);
w4(R+4,u32(0x73f00000ull));
}
B6aefcc:{NFSU2_TR(0x6aefcc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aefce:{NFSU2_TR(0x6aefce);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6af039u,6af);}
}
B6aefd0:L6aefd0:{c.instructions+=1;NFSU2_TR(0x6aefd0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aef9du);}goto L6aef9d;}}
}
B6aefd2:L6aefd2:{c.instructions+=3;NFSU2_TR(0x6aefd2);
w4(R+4,u32(0x73a00000ull));
}
B6aefd7:{NFSU2_TR(0x6aefd7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aefd9:{NFSU2_TR(0x6aefd9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6af016u,6af);}
}
B6aefdb:L6aefdb:{c.instructions+=1;NFSU2_TR(0x6aefdb);
if(r1(R+518)){TAIL_STATIC(0x6af004u,6af);}
}
B6aefdd:L6aefdd:{c.instructions+=2;NFSU2_TR(0x6aefdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aefe2:{NFSU2_TR(0x6aefe2);
if(r1(R+518)){TAIL_STATIC(0x6af00du,6af);}
}
B6aefe4:L6aefe4:{c.instructions+=2;NFSU2_TR(0x6aefe4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aefe9:{NFSU2_TR(0x6aefe9);
if(r1(R+518)){TAIL_STATIC(0x6af00du,6af);}
}
B6aefeb:L6aefeb:{c.instructions+=2;NFSU2_TR(0x6aefeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeff0:{NFSU2_TR(0x6aeff0);
if(r1(R+518)){TAIL_STATIC(0x6af00du,6af);}
}
B6aeff2:L6aeff2:{c.instructions+=2;NFSU2_TR(0x6aeff2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeff7:{NFSU2_TR(0x6aeff7);
if(r1(R+518)){TAIL_STATIC(0x6af00du,6af);}
}
B6aeff9:L6aeff9:{c.instructions+=2;NFSU2_TR(0x6aeff9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6aeffe:{NFSU2_TR(0x6aeffe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6af0bfu,6af);}
TAIL_STATIC(0x6af004u,6af);
}
XIT:NFSU2_TR_EXIT(0x6ae,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
