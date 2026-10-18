#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_49f(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4a1(u8* __restrict R,Cpu& c);
u32 body_4a2(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ae,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ae,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 page_4ae(Cpu& c){return body_4ae(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ae(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ae001:goto L4ae001;
case 0x4ae004:c.instructions+=1;goto B4ae004;
case 0x4ae010:goto L4ae010;
case 0x4ae013:c.instructions+=6;goto B4ae013;
case 0x4ae016:c.instructions+=5;goto B4ae016;
case 0x4ae017:c.instructions+=4;goto B4ae017;
case 0x4ae019:c.instructions+=3;goto B4ae019;
case 0x4ae01b:c.instructions+=2;goto B4ae01b;
case 0x4ae01c:c.instructions+=1;goto B4ae01c;
case 0x4ae021:goto L4ae021;
case 0x4ae024:c.instructions+=1;goto B4ae024;
case 0x4ae030:goto L4ae030;
case 0x4ae033:c.instructions+=6;goto B4ae033;
case 0x4ae036:c.instructions+=5;goto B4ae036;
case 0x4ae037:c.instructions+=4;goto B4ae037;
case 0x4ae039:c.instructions+=3;goto B4ae039;
case 0x4ae03b:c.instructions+=2;goto B4ae03b;
case 0x4ae03c:c.instructions+=1;goto B4ae03c;
case 0x4ae041:goto L4ae041;
case 0x4ae044:c.instructions+=1;goto B4ae044;
case 0x4ae050:goto L4ae050;
case 0x4ae053:c.instructions+=6;goto B4ae053;
case 0x4ae056:c.instructions+=5;goto B4ae056;
case 0x4ae057:c.instructions+=4;goto B4ae057;
case 0x4ae059:c.instructions+=3;goto B4ae059;
case 0x4ae05b:c.instructions+=2;goto B4ae05b;
case 0x4ae05c:c.instructions+=1;goto B4ae05c;
case 0x4ae061:goto L4ae061;
case 0x4ae064:c.instructions+=1;goto B4ae064;
case 0x4ae070:goto L4ae070;
case 0x4ae071:c.instructions+=7;goto B4ae071;
case 0x4ae073:c.instructions+=6;goto B4ae073;
case 0x4ae076:c.instructions+=5;goto B4ae076;
case 0x4ae07c:c.instructions+=4;goto B4ae07c;
case 0x4ae07e:c.instructions+=3;goto B4ae07e;
case 0x4ae080:c.instructions+=2;goto B4ae080;
case 0x4ae086:c.instructions+=1;goto B4ae086;
case 0x4ae08b:goto L4ae08b;
case 0x4ae08d:c.instructions+=2;goto B4ae08d;
case 0x4ae08f:c.instructions+=1;goto B4ae08f;
case 0x4ae092:goto L4ae092;
case 0x4ae093:c.instructions+=1;goto B4ae093;
case 0x4ae0a0:goto L4ae0a0;
case 0x4ae0a1:c.instructions+=7;goto B4ae0a1;
case 0x4ae0a3:c.instructions+=6;goto B4ae0a3;
case 0x4ae0a6:c.instructions+=5;goto B4ae0a6;
case 0x4ae0ac:c.instructions+=4;goto B4ae0ac;
case 0x4ae0ae:c.instructions+=3;goto B4ae0ae;
case 0x4ae0b0:c.instructions+=2;goto B4ae0b0;
case 0x4ae0b6:c.instructions+=1;goto B4ae0b6;
case 0x4ae0bb:goto L4ae0bb;
case 0x4ae0bd:c.instructions+=2;goto B4ae0bd;
case 0x4ae0bf:c.instructions+=1;goto B4ae0bf;
case 0x4ae0c2:goto L4ae0c2;
case 0x4ae0c3:c.instructions+=1;goto B4ae0c3;
case 0x4ae0d0:goto L4ae0d0;
case 0x4ae0d1:c.instructions+=7;goto B4ae0d1;
case 0x4ae0d3:c.instructions+=6;goto B4ae0d3;
case 0x4ae0d6:c.instructions+=5;goto B4ae0d6;
case 0x4ae0dc:c.instructions+=4;goto B4ae0dc;
case 0x4ae0de:c.instructions+=3;goto B4ae0de;
case 0x4ae0e0:c.instructions+=2;goto B4ae0e0;
case 0x4ae0e6:c.instructions+=1;goto B4ae0e6;
case 0x4ae0eb:goto L4ae0eb;
case 0x4ae0ed:c.instructions+=2;goto B4ae0ed;
case 0x4ae0ef:c.instructions+=1;goto B4ae0ef;
case 0x4ae0f2:goto L4ae0f2;
case 0x4ae0f3:c.instructions+=1;goto B4ae0f3;
case 0x4ae100:goto L4ae100;
case 0x4ae101:c.instructions+=7;goto B4ae101;
case 0x4ae103:c.instructions+=6;goto B4ae103;
case 0x4ae106:c.instructions+=5;goto B4ae106;
case 0x4ae10c:c.instructions+=4;goto B4ae10c;
case 0x4ae10e:c.instructions+=3;goto B4ae10e;
case 0x4ae110:c.instructions+=2;goto B4ae110;
case 0x4ae116:c.instructions+=1;goto B4ae116;
case 0x4ae11b:goto L4ae11b;
case 0x4ae11d:c.instructions+=2;goto B4ae11d;
case 0x4ae11f:c.instructions+=1;goto B4ae11f;
case 0x4ae122:goto L4ae122;
case 0x4ae123:c.instructions+=1;goto B4ae123;
case 0x4ae130:goto L4ae130;
case 0x4ae131:c.instructions+=7;goto B4ae131;
case 0x4ae133:c.instructions+=6;goto B4ae133;
case 0x4ae136:c.instructions+=5;goto B4ae136;
case 0x4ae13c:c.instructions+=4;goto B4ae13c;
case 0x4ae13e:c.instructions+=3;goto B4ae13e;
case 0x4ae140:c.instructions+=2;goto B4ae140;
case 0x4ae146:c.instructions+=1;goto B4ae146;
case 0x4ae14b:goto L4ae14b;
case 0x4ae14d:c.instructions+=2;goto B4ae14d;
case 0x4ae14f:c.instructions+=1;goto B4ae14f;
case 0x4ae152:goto L4ae152;
case 0x4ae153:c.instructions+=1;goto B4ae153;
case 0x4ae160:goto L4ae160;
case 0x4ae161:c.instructions+=7;goto B4ae161;
case 0x4ae163:c.instructions+=6;goto B4ae163;
case 0x4ae166:c.instructions+=5;goto B4ae166;
case 0x4ae16c:c.instructions+=4;goto B4ae16c;
case 0x4ae16e:c.instructions+=3;goto B4ae16e;
case 0x4ae170:c.instructions+=2;goto B4ae170;
case 0x4ae176:c.instructions+=1;goto B4ae176;
case 0x4ae17b:goto L4ae17b;
case 0x4ae17d:c.instructions+=2;goto B4ae17d;
case 0x4ae17f:c.instructions+=1;goto B4ae17f;
case 0x4ae182:goto L4ae182;
case 0x4ae183:c.instructions+=1;goto B4ae183;
case 0x4ae190:goto L4ae190;
case 0x4ae191:c.instructions+=7;goto B4ae191;
case 0x4ae193:c.instructions+=6;goto B4ae193;
case 0x4ae196:c.instructions+=5;goto B4ae196;
case 0x4ae19c:c.instructions+=4;goto B4ae19c;
case 0x4ae19e:c.instructions+=3;goto B4ae19e;
case 0x4ae1a0:c.instructions+=2;goto B4ae1a0;
case 0x4ae1a6:c.instructions+=1;goto B4ae1a6;
case 0x4ae1ab:goto L4ae1ab;
case 0x4ae1ad:c.instructions+=2;goto B4ae1ad;
case 0x4ae1af:c.instructions+=1;goto B4ae1af;
case 0x4ae1b2:goto L4ae1b2;
case 0x4ae1b3:c.instructions+=1;goto B4ae1b3;
case 0x4ae1c0:goto L4ae1c0;
case 0x4ae1c1:c.instructions+=7;goto B4ae1c1;
case 0x4ae1c3:c.instructions+=6;goto B4ae1c3;
case 0x4ae1c6:c.instructions+=5;goto B4ae1c6;
case 0x4ae1cc:c.instructions+=4;goto B4ae1cc;
case 0x4ae1ce:c.instructions+=3;goto B4ae1ce;
case 0x4ae1d0:c.instructions+=2;goto B4ae1d0;
case 0x4ae1d6:c.instructions+=1;goto B4ae1d6;
case 0x4ae1db:goto L4ae1db;
case 0x4ae1dd:c.instructions+=2;goto B4ae1dd;
case 0x4ae1df:c.instructions+=1;goto B4ae1df;
case 0x4ae1e2:goto L4ae1e2;
case 0x4ae1e3:c.instructions+=1;goto B4ae1e3;
case 0x4ae1f0:goto L4ae1f0;
case 0x4ae1f1:c.instructions+=7;goto B4ae1f1;
case 0x4ae1f3:c.instructions+=6;goto B4ae1f3;
case 0x4ae1f6:c.instructions+=5;goto B4ae1f6;
case 0x4ae1fc:c.instructions+=4;goto B4ae1fc;
case 0x4ae1fe:c.instructions+=3;goto B4ae1fe;
case 0x4ae200:c.instructions+=2;goto B4ae200;
case 0x4ae206:c.instructions+=1;goto B4ae206;
case 0x4ae20b:goto L4ae20b;
case 0x4ae20d:c.instructions+=2;goto B4ae20d;
case 0x4ae20f:c.instructions+=1;goto B4ae20f;
case 0x4ae212:goto L4ae212;
case 0x4ae213:c.instructions+=1;goto B4ae213;
case 0x4ae220:goto L4ae220;
case 0x4ae221:c.instructions+=7;goto B4ae221;
case 0x4ae223:c.instructions+=6;goto B4ae223;
case 0x4ae226:c.instructions+=5;goto B4ae226;
case 0x4ae22c:c.instructions+=4;goto B4ae22c;
case 0x4ae22e:c.instructions+=3;goto B4ae22e;
case 0x4ae230:c.instructions+=2;goto B4ae230;
case 0x4ae236:c.instructions+=1;goto B4ae236;
case 0x4ae23b:goto L4ae23b;
case 0x4ae23d:c.instructions+=2;goto B4ae23d;
case 0x4ae23f:c.instructions+=1;goto B4ae23f;
case 0x4ae242:goto L4ae242;
case 0x4ae243:c.instructions+=1;goto B4ae243;
case 0x4ae250:goto L4ae250;
case 0x4ae251:c.instructions+=7;goto B4ae251;
case 0x4ae253:c.instructions+=6;goto B4ae253;
case 0x4ae256:c.instructions+=5;goto B4ae256;
case 0x4ae25c:c.instructions+=4;goto B4ae25c;
case 0x4ae25e:c.instructions+=3;goto B4ae25e;
case 0x4ae260:c.instructions+=2;goto B4ae260;
case 0x4ae266:c.instructions+=1;goto B4ae266;
case 0x4ae26b:goto L4ae26b;
case 0x4ae26d:c.instructions+=2;goto B4ae26d;
case 0x4ae26f:c.instructions+=1;goto B4ae26f;
case 0x4ae272:goto L4ae272;
case 0x4ae273:c.instructions+=1;goto B4ae273;
case 0x4ae280:goto L4ae280;
case 0x4ae281:c.instructions+=7;goto B4ae281;
case 0x4ae283:c.instructions+=6;goto B4ae283;
case 0x4ae286:c.instructions+=5;goto B4ae286;
case 0x4ae28c:c.instructions+=4;goto B4ae28c;
case 0x4ae28e:c.instructions+=3;goto B4ae28e;
case 0x4ae290:c.instructions+=2;goto B4ae290;
case 0x4ae296:c.instructions+=1;goto B4ae296;
case 0x4ae29b:goto L4ae29b;
case 0x4ae29d:c.instructions+=2;goto B4ae29d;
case 0x4ae29f:c.instructions+=1;goto B4ae29f;
case 0x4ae2a2:goto L4ae2a2;
case 0x4ae2a3:c.instructions+=1;goto B4ae2a3;
case 0x4ae2b0:goto L4ae2b0;
case 0x4ae2b1:c.instructions+=7;goto B4ae2b1;
case 0x4ae2b3:c.instructions+=6;goto B4ae2b3;
case 0x4ae2b6:c.instructions+=5;goto B4ae2b6;
case 0x4ae2bc:c.instructions+=4;goto B4ae2bc;
case 0x4ae2be:c.instructions+=3;goto B4ae2be;
case 0x4ae2c0:c.instructions+=2;goto B4ae2c0;
case 0x4ae2c6:c.instructions+=1;goto B4ae2c6;
case 0x4ae2cb:goto L4ae2cb;
case 0x4ae2cd:c.instructions+=2;goto B4ae2cd;
case 0x4ae2cf:c.instructions+=1;goto B4ae2cf;
case 0x4ae2d2:goto L4ae2d2;
case 0x4ae2d3:c.instructions+=1;goto B4ae2d3;
case 0x4ae2e0:goto L4ae2e0;
case 0x4ae2e1:c.instructions+=7;goto B4ae2e1;
case 0x4ae2e3:c.instructions+=6;goto B4ae2e3;
case 0x4ae2e6:c.instructions+=5;goto B4ae2e6;
case 0x4ae2ec:c.instructions+=4;goto B4ae2ec;
case 0x4ae2ee:c.instructions+=3;goto B4ae2ee;
case 0x4ae2f0:c.instructions+=2;goto B4ae2f0;
case 0x4ae2f6:c.instructions+=1;goto B4ae2f6;
case 0x4ae2fb:goto L4ae2fb;
case 0x4ae2fd:c.instructions+=2;goto B4ae2fd;
case 0x4ae2ff:c.instructions+=1;goto B4ae2ff;
case 0x4ae302:goto L4ae302;
case 0x4ae303:c.instructions+=1;goto B4ae303;
case 0x4ae310:goto L4ae310;
case 0x4ae311:c.instructions+=7;goto B4ae311;
case 0x4ae313:c.instructions+=6;goto B4ae313;
case 0x4ae316:c.instructions+=5;goto B4ae316;
case 0x4ae31c:c.instructions+=4;goto B4ae31c;
case 0x4ae31e:c.instructions+=3;goto B4ae31e;
case 0x4ae320:c.instructions+=2;goto B4ae320;
case 0x4ae326:c.instructions+=1;goto B4ae326;
case 0x4ae32b:goto L4ae32b;
case 0x4ae32d:c.instructions+=2;goto B4ae32d;
case 0x4ae32f:c.instructions+=1;goto B4ae32f;
case 0x4ae332:goto L4ae332;
case 0x4ae333:c.instructions+=1;goto B4ae333;
case 0x4ae340:goto L4ae340;
case 0x4ae341:c.instructions+=7;goto B4ae341;
case 0x4ae343:c.instructions+=6;goto B4ae343;
case 0x4ae346:c.instructions+=5;goto B4ae346;
case 0x4ae34c:c.instructions+=4;goto B4ae34c;
case 0x4ae34e:c.instructions+=3;goto B4ae34e;
case 0x4ae350:c.instructions+=2;goto B4ae350;
case 0x4ae356:c.instructions+=1;goto B4ae356;
case 0x4ae35b:goto L4ae35b;
case 0x4ae35d:c.instructions+=2;goto B4ae35d;
case 0x4ae35f:c.instructions+=1;goto B4ae35f;
case 0x4ae362:goto L4ae362;
case 0x4ae363:c.instructions+=1;goto B4ae363;
case 0x4ae370:goto L4ae370;
case 0x4ae371:c.instructions+=7;goto B4ae371;
case 0x4ae373:c.instructions+=6;goto B4ae373;
case 0x4ae376:c.instructions+=5;goto B4ae376;
case 0x4ae37c:c.instructions+=4;goto B4ae37c;
case 0x4ae37e:c.instructions+=3;goto B4ae37e;
case 0x4ae380:c.instructions+=2;goto B4ae380;
case 0x4ae386:c.instructions+=1;goto B4ae386;
case 0x4ae38b:goto L4ae38b;
case 0x4ae38d:c.instructions+=2;goto B4ae38d;
case 0x4ae38f:c.instructions+=1;goto B4ae38f;
case 0x4ae392:goto L4ae392;
case 0x4ae393:c.instructions+=1;goto B4ae393;
case 0x4ae3a0:goto L4ae3a0;
case 0x4ae3a1:c.instructions+=7;goto B4ae3a1;
case 0x4ae3a3:c.instructions+=6;goto B4ae3a3;
case 0x4ae3a6:c.instructions+=5;goto B4ae3a6;
case 0x4ae3ac:c.instructions+=4;goto B4ae3ac;
case 0x4ae3ae:c.instructions+=3;goto B4ae3ae;
case 0x4ae3b0:c.instructions+=2;goto B4ae3b0;
case 0x4ae3b6:c.instructions+=1;goto B4ae3b6;
case 0x4ae3bb:goto L4ae3bb;
case 0x4ae3bd:c.instructions+=2;goto B4ae3bd;
case 0x4ae3bf:c.instructions+=1;goto B4ae3bf;
case 0x4ae3c2:goto L4ae3c2;
case 0x4ae3c3:c.instructions+=1;goto B4ae3c3;
case 0x4ae3d0:goto L4ae3d0;
case 0x4ae3d1:c.instructions+=7;goto B4ae3d1;
case 0x4ae3d3:c.instructions+=6;goto B4ae3d3;
case 0x4ae3d6:c.instructions+=5;goto B4ae3d6;
case 0x4ae3dc:c.instructions+=4;goto B4ae3dc;
case 0x4ae3de:c.instructions+=3;goto B4ae3de;
case 0x4ae3e0:c.instructions+=2;goto B4ae3e0;
case 0x4ae3e6:c.instructions+=1;goto B4ae3e6;
case 0x4ae3eb:goto L4ae3eb;
case 0x4ae3ed:c.instructions+=2;goto B4ae3ed;
case 0x4ae3ef:c.instructions+=1;goto B4ae3ef;
case 0x4ae3f2:goto L4ae3f2;
case 0x4ae3f3:c.instructions+=1;goto B4ae3f3;
case 0x4ae400:goto L4ae400;
case 0x4ae401:c.instructions+=7;goto B4ae401;
case 0x4ae403:c.instructions+=6;goto B4ae403;
case 0x4ae406:c.instructions+=5;goto B4ae406;
case 0x4ae40c:c.instructions+=4;goto B4ae40c;
case 0x4ae40e:c.instructions+=3;goto B4ae40e;
case 0x4ae410:c.instructions+=2;goto B4ae410;
case 0x4ae416:c.instructions+=1;goto B4ae416;
case 0x4ae41b:goto L4ae41b;
case 0x4ae41d:c.instructions+=2;goto B4ae41d;
case 0x4ae41f:c.instructions+=1;goto B4ae41f;
case 0x4ae422:goto L4ae422;
case 0x4ae423:c.instructions+=1;goto B4ae423;
case 0x4ae430:goto L4ae430;
case 0x4ae431:c.instructions+=7;goto B4ae431;
case 0x4ae433:c.instructions+=6;goto B4ae433;
case 0x4ae436:c.instructions+=5;goto B4ae436;
case 0x4ae43c:c.instructions+=4;goto B4ae43c;
case 0x4ae43e:c.instructions+=3;goto B4ae43e;
case 0x4ae440:c.instructions+=2;goto B4ae440;
case 0x4ae446:c.instructions+=1;goto B4ae446;
case 0x4ae44b:goto L4ae44b;
case 0x4ae44d:c.instructions+=2;goto B4ae44d;
case 0x4ae44f:c.instructions+=1;goto B4ae44f;
case 0x4ae452:goto L4ae452;
case 0x4ae453:c.instructions+=1;goto B4ae453;
case 0x4ae460:goto L4ae460;
case 0x4ae461:c.instructions+=7;goto B4ae461;
case 0x4ae463:c.instructions+=6;goto B4ae463;
case 0x4ae466:c.instructions+=5;goto B4ae466;
case 0x4ae46c:c.instructions+=4;goto B4ae46c;
case 0x4ae46e:c.instructions+=3;goto B4ae46e;
case 0x4ae470:c.instructions+=2;goto B4ae470;
case 0x4ae476:c.instructions+=1;goto B4ae476;
case 0x4ae47b:goto L4ae47b;
case 0x4ae47d:c.instructions+=2;goto B4ae47d;
case 0x4ae47f:c.instructions+=1;goto B4ae47f;
case 0x4ae482:goto L4ae482;
case 0x4ae483:c.instructions+=1;goto B4ae483;
case 0x4ae490:goto L4ae490;
case 0x4ae491:c.instructions+=7;goto B4ae491;
case 0x4ae493:c.instructions+=6;goto B4ae493;
case 0x4ae496:c.instructions+=5;goto B4ae496;
case 0x4ae49c:c.instructions+=4;goto B4ae49c;
case 0x4ae49e:c.instructions+=3;goto B4ae49e;
case 0x4ae4a0:c.instructions+=2;goto B4ae4a0;
case 0x4ae4a6:c.instructions+=1;goto B4ae4a6;
case 0x4ae4ab:goto L4ae4ab;
case 0x4ae4ad:c.instructions+=2;goto B4ae4ad;
case 0x4ae4af:c.instructions+=1;goto B4ae4af;
case 0x4ae4b2:goto L4ae4b2;
case 0x4ae4b3:c.instructions+=1;goto B4ae4b3;
case 0x4ae4c0:goto L4ae4c0;
case 0x4ae4c1:c.instructions+=7;goto B4ae4c1;
case 0x4ae4c3:c.instructions+=6;goto B4ae4c3;
case 0x4ae4c6:c.instructions+=5;goto B4ae4c6;
case 0x4ae4cc:c.instructions+=4;goto B4ae4cc;
case 0x4ae4ce:c.instructions+=3;goto B4ae4ce;
case 0x4ae4d0:c.instructions+=2;goto B4ae4d0;
case 0x4ae4d6:c.instructions+=1;goto B4ae4d6;
case 0x4ae4db:goto L4ae4db;
case 0x4ae4dd:c.instructions+=2;goto B4ae4dd;
case 0x4ae4df:c.instructions+=1;goto B4ae4df;
case 0x4ae4e2:goto L4ae4e2;
case 0x4ae4e3:c.instructions+=1;goto B4ae4e3;
case 0x4ae4f0:goto L4ae4f0;
case 0x4ae4f1:c.instructions+=7;goto B4ae4f1;
case 0x4ae4f3:c.instructions+=6;goto B4ae4f3;
case 0x4ae4f6:c.instructions+=5;goto B4ae4f6;
case 0x4ae4fc:c.instructions+=4;goto B4ae4fc;
case 0x4ae4fe:c.instructions+=3;goto B4ae4fe;
case 0x4ae500:c.instructions+=2;goto B4ae500;
case 0x4ae506:c.instructions+=1;goto B4ae506;
case 0x4ae50b:goto L4ae50b;
case 0x4ae50d:c.instructions+=2;goto B4ae50d;
case 0x4ae50f:c.instructions+=1;goto B4ae50f;
case 0x4ae512:goto L4ae512;
case 0x4ae513:c.instructions+=1;goto B4ae513;
case 0x4ae520:goto L4ae520;
case 0x4ae521:c.instructions+=7;goto B4ae521;
case 0x4ae523:c.instructions+=6;goto B4ae523;
case 0x4ae526:c.instructions+=5;goto B4ae526;
case 0x4ae52c:c.instructions+=4;goto B4ae52c;
case 0x4ae52e:c.instructions+=3;goto B4ae52e;
case 0x4ae530:c.instructions+=2;goto B4ae530;
case 0x4ae536:c.instructions+=1;goto B4ae536;
case 0x4ae53b:goto L4ae53b;
case 0x4ae53d:c.instructions+=2;goto B4ae53d;
case 0x4ae53f:c.instructions+=1;goto B4ae53f;
case 0x4ae542:goto L4ae542;
case 0x4ae543:c.instructions+=1;goto B4ae543;
case 0x4ae550:goto L4ae550;
case 0x4ae551:c.instructions+=7;goto B4ae551;
case 0x4ae553:c.instructions+=6;goto B4ae553;
case 0x4ae556:c.instructions+=5;goto B4ae556;
case 0x4ae55c:c.instructions+=4;goto B4ae55c;
case 0x4ae55e:c.instructions+=3;goto B4ae55e;
case 0x4ae560:c.instructions+=2;goto B4ae560;
case 0x4ae566:c.instructions+=1;goto B4ae566;
case 0x4ae56b:goto L4ae56b;
case 0x4ae56d:c.instructions+=2;goto B4ae56d;
case 0x4ae56f:c.instructions+=1;goto B4ae56f;
case 0x4ae572:goto L4ae572;
case 0x4ae573:c.instructions+=1;goto B4ae573;
case 0x4ae580:goto L4ae580;
case 0x4ae581:c.instructions+=7;goto B4ae581;
case 0x4ae583:c.instructions+=6;goto B4ae583;
case 0x4ae586:c.instructions+=5;goto B4ae586;
case 0x4ae58c:c.instructions+=4;goto B4ae58c;
case 0x4ae58e:c.instructions+=3;goto B4ae58e;
case 0x4ae590:c.instructions+=2;goto B4ae590;
case 0x4ae596:c.instructions+=1;goto B4ae596;
case 0x4ae59b:goto L4ae59b;
case 0x4ae59d:c.instructions+=2;goto B4ae59d;
case 0x4ae59f:c.instructions+=1;goto B4ae59f;
case 0x4ae5a2:goto L4ae5a2;
case 0x4ae5a3:c.instructions+=1;goto B4ae5a3;
case 0x4ae5b0:goto L4ae5b0;
case 0x4ae5b1:c.instructions+=7;goto B4ae5b1;
case 0x4ae5b3:c.instructions+=6;goto B4ae5b3;
case 0x4ae5b6:c.instructions+=5;goto B4ae5b6;
case 0x4ae5bc:c.instructions+=4;goto B4ae5bc;
case 0x4ae5be:c.instructions+=3;goto B4ae5be;
case 0x4ae5c0:c.instructions+=2;goto B4ae5c0;
case 0x4ae5c6:c.instructions+=1;goto B4ae5c6;
case 0x4ae5cb:goto L4ae5cb;
case 0x4ae5cd:c.instructions+=2;goto B4ae5cd;
case 0x4ae5cf:c.instructions+=1;goto B4ae5cf;
case 0x4ae5d2:goto L4ae5d2;
case 0x4ae5d3:c.instructions+=1;goto B4ae5d3;
case 0x4ae5e0:goto L4ae5e0;
case 0x4ae5e1:c.instructions+=7;goto B4ae5e1;
case 0x4ae5e3:c.instructions+=6;goto B4ae5e3;
case 0x4ae5e6:c.instructions+=5;goto B4ae5e6;
case 0x4ae5ec:c.instructions+=4;goto B4ae5ec;
case 0x4ae5ee:c.instructions+=3;goto B4ae5ee;
case 0x4ae5f0:c.instructions+=2;goto B4ae5f0;
case 0x4ae5f6:c.instructions+=1;goto B4ae5f6;
case 0x4ae5fb:goto L4ae5fb;
case 0x4ae5fd:c.instructions+=2;goto B4ae5fd;
case 0x4ae5ff:c.instructions+=1;goto B4ae5ff;
case 0x4ae602:goto L4ae602;
case 0x4ae603:c.instructions+=1;goto B4ae603;
case 0x4ae610:goto L4ae610;
case 0x4ae611:c.instructions+=7;goto B4ae611;
case 0x4ae613:c.instructions+=6;goto B4ae613;
case 0x4ae616:c.instructions+=5;goto B4ae616;
case 0x4ae61c:c.instructions+=4;goto B4ae61c;
case 0x4ae61e:c.instructions+=3;goto B4ae61e;
case 0x4ae620:c.instructions+=2;goto B4ae620;
case 0x4ae626:c.instructions+=1;goto B4ae626;
case 0x4ae62b:goto L4ae62b;
case 0x4ae62d:c.instructions+=2;goto B4ae62d;
case 0x4ae62f:c.instructions+=1;goto B4ae62f;
case 0x4ae632:goto L4ae632;
case 0x4ae633:c.instructions+=1;goto B4ae633;
case 0x4ae640:goto L4ae640;
case 0x4ae644:c.instructions+=3;goto B4ae644;
case 0x4ae648:c.instructions+=2;goto B4ae648;
case 0x4ae649:c.instructions+=1;goto B4ae649;
case 0x4ae64e:goto L4ae64e;
case 0x4ae650:goto L4ae650;
case 0x4ae654:c.instructions+=5;goto B4ae654;
case 0x4ae658:c.instructions+=4;goto B4ae658;
case 0x4ae659:c.instructions+=3;goto B4ae659;
case 0x4ae65a:c.instructions+=2;goto B4ae65a;
case 0x4ae65e:c.instructions+=1;goto B4ae65e;
case 0x4ae663:goto L4ae663;
case 0x4ae670:goto L4ae670;
case 0x4ae674:c.instructions+=5;goto B4ae674;
case 0x4ae678:c.instructions+=4;goto B4ae678;
case 0x4ae679:c.instructions+=3;goto B4ae679;
case 0x4ae67a:c.instructions+=2;goto B4ae67a;
case 0x4ae67e:c.instructions+=1;goto B4ae67e;
case 0x4ae683:goto L4ae683;
case 0x4ae690:goto L4ae690;
case 0x4ae694:c.instructions+=5;goto B4ae694;
case 0x4ae698:c.instructions+=4;goto B4ae698;
case 0x4ae699:c.instructions+=3;goto B4ae699;
case 0x4ae69a:c.instructions+=2;goto B4ae69a;
case 0x4ae69e:c.instructions+=1;goto B4ae69e;
case 0x4ae6a3:goto L4ae6a3;
case 0x4ae6b0:goto L4ae6b0;
case 0x4ae6b4:c.instructions+=5;goto B4ae6b4;
case 0x4ae6b8:c.instructions+=4;goto B4ae6b8;
case 0x4ae6b9:c.instructions+=3;goto B4ae6b9;
case 0x4ae6ba:c.instructions+=2;goto B4ae6ba;
case 0x4ae6be:c.instructions+=1;goto B4ae6be;
case 0x4ae6c3:goto L4ae6c3;
case 0x4ae6d0:goto L4ae6d0;
case 0x4ae6d4:c.instructions+=5;goto B4ae6d4;
case 0x4ae6d8:c.instructions+=4;goto B4ae6d8;
case 0x4ae6d9:c.instructions+=3;goto B4ae6d9;
case 0x4ae6da:c.instructions+=2;goto B4ae6da;
case 0x4ae6de:c.instructions+=1;goto B4ae6de;
case 0x4ae6e3:goto L4ae6e3;
case 0x4ae6f0:goto L4ae6f0;
case 0x4ae6f4:c.instructions+=5;goto B4ae6f4;
case 0x4ae6f8:c.instructions+=4;goto B4ae6f8;
case 0x4ae6f9:c.instructions+=3;goto B4ae6f9;
case 0x4ae6fa:c.instructions+=2;goto B4ae6fa;
case 0x4ae6fe:c.instructions+=1;goto B4ae6fe;
case 0x4ae703:goto L4ae703;
case 0x4ae710:goto L4ae710;
case 0x4ae714:c.instructions+=5;goto B4ae714;
case 0x4ae718:c.instructions+=4;goto B4ae718;
case 0x4ae719:c.instructions+=3;goto B4ae719;
case 0x4ae71a:c.instructions+=2;goto B4ae71a;
case 0x4ae71e:c.instructions+=1;goto B4ae71e;
case 0x4ae723:goto L4ae723;
case 0x4ae730:goto L4ae730;
case 0x4ae734:c.instructions+=5;goto B4ae734;
case 0x4ae738:c.instructions+=4;goto B4ae738;
case 0x4ae739:c.instructions+=3;goto B4ae739;
case 0x4ae73a:c.instructions+=2;goto B4ae73a;
case 0x4ae73e:c.instructions+=1;goto B4ae73e;
case 0x4ae743:goto L4ae743;
case 0x4ae750:goto L4ae750;
case 0x4ae754:c.instructions+=3;goto B4ae754;
case 0x4ae758:c.instructions+=2;goto B4ae758;
case 0x4ae759:c.instructions+=1;goto B4ae759;
case 0x4ae75e:goto L4ae75e;
case 0x4ae760:goto L4ae760;
case 0x4ae764:c.instructions+=2;goto B4ae764;
case 0x4ae766:c.instructions+=1;goto B4ae766;
case 0x4ae768:goto L4ae768;
case 0x4ae769:c.instructions+=3;goto B4ae769;
case 0x4ae76d:c.instructions+=2;goto B4ae76d;
case 0x4ae76f:c.instructions+=1;goto B4ae76f;
case 0x4ae771:goto L4ae771;
case 0x4ae775:c.instructions+=2;goto B4ae775;
case 0x4ae777:c.instructions+=1;goto B4ae777;
case 0x4ae779:goto L4ae779;
case 0x4ae77b:c.instructions+=5;goto B4ae77b;
case 0x4ae77c:c.instructions+=4;goto B4ae77c;
case 0x4ae77e:c.instructions+=3;goto B4ae77e;
case 0x4ae77f:c.instructions+=2;goto B4ae77f;
case 0x4ae781:c.instructions+=1;goto B4ae781;
case 0x4ae783:goto L4ae783;
case 0x4ae785:c.instructions+=1;goto B4ae785;
case 0x4ae787:goto L4ae787;
case 0x4ae78b:c.instructions+=7;goto B4ae78b;
case 0x4ae78e:c.instructions+=6;goto B4ae78e;
case 0x4ae791:c.instructions+=5;goto B4ae791;
case 0x4ae794:c.instructions+=4;goto B4ae794;
case 0x4ae795:c.instructions+=3;goto B4ae795;
case 0x4ae796:c.instructions+=2;goto B4ae796;
case 0x4ae798:c.instructions+=1;goto B4ae798;
case 0x4ae79a:goto L4ae79a;
case 0x4ae79b:goto L4ae79b;
case 0x4ae7a0:goto L4ae7a0;
case 0x4ae7a1:goto L4ae7a1;
case 0x4ae7b0:goto L4ae7b0;
case 0x4ae7b4:c.instructions+=5;goto B4ae7b4;
case 0x4ae7b5:c.instructions+=4;goto B4ae7b5;
case 0x4ae7bb:c.instructions+=3;goto B4ae7bb;
case 0x4ae7bd:c.instructions+=2;goto B4ae7bd;
case 0x4ae7c3:c.instructions+=1;goto B4ae7c3;
case 0x4ae7c8:goto L4ae7c8;
case 0x4ae7ca:c.instructions+=3;goto B4ae7ca;
case 0x4ae7cc:c.instructions+=2;goto B4ae7cc;
case 0x4ae7cd:c.instructions+=1;goto B4ae7cd;
case 0x4ae7d0:goto L4ae7d0;
case 0x4ae7d5:c.instructions+=5;goto B4ae7d5;
case 0x4ae7d7:c.instructions+=4;goto B4ae7d7;
case 0x4ae7d9:c.instructions+=3;goto B4ae7d9;
case 0x4ae7dc:c.instructions+=2;goto B4ae7dc;
case 0x4ae7dd:c.instructions+=1;goto B4ae7dd;
case 0x4ae7e2:goto L4ae7e2;
case 0x4ae7f0:goto L4ae7f0;
case 0x4ae7f2:c.instructions+=25;goto B4ae7f2;
case 0x4ae7f7:c.instructions+=24;goto B4ae7f7;
case 0x4ae7fd:c.instructions+=23;goto B4ae7fd;
case 0x4ae7fe:c.instructions+=22;goto B4ae7fe;
case 0x4ae805:c.instructions+=21;goto B4ae805;
case 0x4ae806:c.instructions+=20;goto B4ae806;
case 0x4ae807:c.instructions+=19;goto B4ae807;
case 0x4ae808:c.instructions+=18;goto B4ae808;
case 0x4ae80a:c.instructions+=17;goto B4ae80a;
case 0x4ae80f:c.instructions+=16;goto B4ae80f;
case 0x4ae814:c.instructions+=15;goto B4ae814;
case 0x4ae816:c.instructions+=14;goto B4ae816;
case 0x4ae818:c.instructions+=13;goto B4ae818;
case 0x4ae81a:c.instructions+=12;goto B4ae81a;
case 0x4ae81d:c.instructions+=11;goto B4ae81d;
case 0x4ae81e:c.instructions+=10;goto B4ae81e;
case 0x4ae822:c.instructions+=9;goto B4ae822;
case 0x4ae825:c.instructions+=8;goto B4ae825;
case 0x4ae828:c.instructions+=7;goto B4ae828;
case 0x4ae82b:c.instructions+=6;goto B4ae82b;
case 0x4ae82e:c.instructions+=5;goto B4ae82e;
case 0x4ae831:c.instructions+=4;goto B4ae831;
case 0x4ae834:c.instructions+=3;goto B4ae834;
case 0x4ae837:c.instructions+=2;goto B4ae837;
case 0x4ae83a:c.instructions+=1;goto B4ae83a;
case 0x4ae83f:goto L4ae83f;
case 0x4ae844:c.instructions+=15;goto B4ae844;
case 0x4ae849:c.instructions+=14;goto B4ae849;
case 0x4ae84b:c.instructions+=13;goto B4ae84b;
case 0x4ae84d:c.instructions+=12;goto B4ae84d;
case 0x4ae853:c.instructions+=11;goto B4ae853;
case 0x4ae854:c.instructions+=10;goto B4ae854;
case 0x4ae858:c.instructions+=9;goto B4ae858;
case 0x4ae85e:c.instructions+=8;goto B4ae85e;
case 0x4ae864:c.instructions+=7;goto B4ae864;
case 0x4ae86a:c.instructions+=6;goto B4ae86a;
case 0x4ae870:c.instructions+=5;goto B4ae870;
case 0x4ae876:c.instructions+=4;goto B4ae876;
case 0x4ae87c:c.instructions+=3;goto B4ae87c;
case 0x4ae882:c.instructions+=2;goto B4ae882;
case 0x4ae888:c.instructions+=1;goto B4ae888;
case 0x4ae88d:goto L4ae88d;
case 0x4ae891:c.instructions+=8;goto B4ae891;
case 0x4ae897:c.instructions+=7;goto B4ae897;
case 0x4ae899:c.instructions+=6;goto B4ae899;
case 0x4ae89b:c.instructions+=5;goto B4ae89b;
case 0x4ae89c:c.instructions+=4;goto B4ae89c;
case 0x4ae89d:c.instructions+=3;goto B4ae89d;
case 0x4ae8a4:c.instructions+=2;goto B4ae8a4;
case 0x4ae8a7:c.instructions+=1;goto B4ae8a7;
case 0x4ae8b0:goto L4ae8b0;
case 0x4ae8b4:c.instructions+=1;goto B4ae8b4;
case 0x4ae8b6:goto L4ae8b6;
case 0x4ae8b9:c.instructions+=3;goto B4ae8b9;
case 0x4ae8be:c.instructions+=2;goto B4ae8be;
case 0x4ae8c0:c.instructions+=1;goto B4ae8c0;
case 0x4ae8c2:goto L4ae8c2;
case 0x4ae8c4:goto L4ae8c4;
case 0x4ae8d0:goto L4ae8d0;
case 0x4ae8d6:c.instructions+=2;goto B4ae8d6;
case 0x4ae8db:c.instructions+=1;goto B4ae8db;
case 0x4ae8dd:goto L4ae8dd;
case 0x4ae8e0:c.instructions+=1;goto B4ae8e0;
case 0x4ae8e2:goto L4ae8e2;
case 0x4ae8e9:c.instructions+=1;goto B4ae8e9;
case 0x4ae8eb:goto L4ae8eb;
case 0x4ae8f0:c.instructions+=1;goto B4ae8f0;
case 0x4ae8f1:goto L4ae8f1;
case 0x4ae8f3:c.instructions+=1;goto B4ae8f3;
case 0x4ae900:goto L4ae900;
case 0x4ae901:c.instructions+=2;goto B4ae901;
case 0x4ae903:c.instructions+=1;goto B4ae903;
case 0x4ae908:goto L4ae908;
case 0x4ae90a:c.instructions+=1;goto B4ae90a;
case 0x4ae90c:goto L4ae90c;
case 0x4ae90e:c.instructions+=1;goto B4ae90e;
case 0x4ae913:goto L4ae913;
case 0x4ae916:c.instructions+=1;goto B4ae916;
case 0x4ae918:goto L4ae918;
case 0x4ae91a:c.instructions+=1;goto B4ae91a;
case 0x4ae91f:goto L4ae91f;
case 0x4ae922:c.instructions+=1;goto B4ae922;
case 0x4ae924:goto L4ae924;
case 0x4ae926:c.instructions+=2;goto B4ae926;
case 0x4ae927:c.instructions+=1;goto B4ae927;
case 0x4ae928:goto L4ae928;
case 0x4ae92d:c.instructions+=2;goto B4ae92d;
case 0x4ae92e:c.instructions+=1;goto B4ae92e;
case 0x4ae930:goto L4ae930;
case 0x4ae931:c.instructions+=2;goto B4ae931;
case 0x4ae933:c.instructions+=1;goto B4ae933;
case 0x4ae938:goto L4ae938;
case 0x4ae93a:c.instructions+=1;goto B4ae93a;
case 0x4ae93c:goto L4ae93c;
case 0x4ae93e:c.instructions+=1;goto B4ae93e;
case 0x4ae943:goto L4ae943;
case 0x4ae946:c.instructions+=1;goto B4ae946;
case 0x4ae948:goto L4ae948;
case 0x4ae94a:c.instructions+=1;goto B4ae94a;
case 0x4ae94f:goto L4ae94f;
case 0x4ae952:c.instructions+=1;goto B4ae952;
case 0x4ae954:goto L4ae954;
case 0x4ae956:c.instructions+=1;goto B4ae956;
case 0x4ae95b:goto L4ae95b;
case 0x4ae95e:c.instructions+=1;goto B4ae95e;
case 0x4ae960:goto L4ae960;
case 0x4ae965:c.instructions+=2;goto B4ae965;
case 0x4ae966:c.instructions+=1;goto B4ae966;
case 0x4ae967:goto L4ae967;
case 0x4ae969:c.instructions+=2;goto B4ae969;
case 0x4ae96a:c.instructions+=1;goto B4ae96a;
case 0x4ae970:goto L4ae970;
case 0x4ae974:c.instructions+=1;goto B4ae974;
case 0x4ae980:goto L4ae980;
case 0x4ae984:c.instructions+=1;goto B4ae984;
case 0x4ae990:goto L4ae990;
case 0x4ae994:c.instructions+=5;goto B4ae994;
case 0x4ae996:c.instructions+=4;goto B4ae996;
case 0x4ae999:c.instructions+=3;goto B4ae999;
case 0x4ae99c:c.instructions+=2;goto B4ae99c;
case 0x4ae99f:c.instructions+=1;goto B4ae99f;
case 0x4ae9b0:goto L4ae9b0;
case 0x4ae9b4:c.instructions+=2;goto B4ae9b4;
case 0x4ae9b7:c.instructions+=1;goto B4ae9b7;
case 0x4ae9c0:goto L4ae9c0;
case 0x4ae9c1:c.instructions+=8;goto B4ae9c1;
case 0x4ae9c2:c.instructions+=7;goto B4ae9c2;
case 0x4ae9c6:c.instructions+=6;goto B4ae9c6;
case 0x4ae9c8:c.instructions+=5;goto B4ae9c8;
case 0x4ae9ca:c.instructions+=4;goto B4ae9ca;
case 0x4ae9cc:c.instructions+=3;goto B4ae9cc;
case 0x4ae9cd:c.instructions+=2;goto B4ae9cd;
case 0x4ae9cf:c.instructions+=1;goto B4ae9cf;
case 0x4ae9d2:goto L4ae9d2;
case 0x4ae9d5:c.instructions+=4;goto B4ae9d5;
case 0x4ae9d7:c.instructions+=3;goto B4ae9d7;
case 0x4ae9d8:c.instructions+=2;goto B4ae9d8;
case 0x4ae9da:c.instructions+=1;goto B4ae9da;
case 0x4ae9dd:goto L4ae9dd;
case 0x4ae9de:c.instructions+=2;goto B4ae9de;
case 0x4ae9df:c.instructions+=1;goto B4ae9df;
case 0x4ae9f0:goto L4ae9f0;
case 0x4ae9f3:c.instructions+=3;goto B4ae9f3;
case 0x4ae9f8:c.instructions+=2;goto B4ae9f8;
case 0x4ae9f9:c.instructions+=1;goto B4ae9f9;
case 0x4ae9fe:goto L4ae9fe;
case 0x4aea01:c.instructions+=1;goto B4aea01;
case 0x4aea10:goto L4aea10;
case 0x4aea11:c.instructions+=2;goto B4aea11;
case 0x4aea13:c.instructions+=1;goto B4aea13;
case 0x4aea18:goto L4aea18;
case 0x4aea1d:c.instructions+=1;goto B4aea1d;
case 0x4aea1f:goto L4aea1f;
case 0x4aea20:c.instructions+=1;goto B4aea20;
case 0x4aea25:goto L4aea25;
case 0x4aea28:goto L4aea28;
case 0x4aea2a:c.instructions+=2;goto B4aea2a;
case 0x4aea2b:c.instructions+=1;goto B4aea2b;
case 0x4aea30:goto L4aea30;
case 0x4aea36:c.instructions+=1;goto B4aea36;
case 0x4aea40:goto L4aea40;
case 0x4aea41:c.instructions+=2;goto B4aea41;
case 0x4aea43:c.instructions+=1;goto B4aea43;
case 0x4aea48:goto L4aea48;
case 0x4aea4d:c.instructions+=1;goto B4aea4d;
case 0x4aea4f:goto L4aea4f;
case 0x4aea50:c.instructions+=1;goto B4aea50;
case 0x4aea55:goto L4aea55;
case 0x4aea58:goto L4aea58;
case 0x4aea5a:c.instructions+=2;goto B4aea5a;
case 0x4aea5b:c.instructions+=1;goto B4aea5b;
case 0x4aea60:goto L4aea60;
case 0x4aea62:c.instructions+=10;goto B4aea62;
case 0x4aea67:c.instructions+=9;goto B4aea67;
case 0x4aea6d:c.instructions+=8;goto B4aea6d;
case 0x4aea6e:c.instructions+=7;goto B4aea6e;
case 0x4aea75:c.instructions+=6;goto B4aea75;
case 0x4aea76:c.instructions+=5;goto B4aea76;
case 0x4aea77:c.instructions+=4;goto B4aea77;
case 0x4aea78:c.instructions+=3;goto B4aea78;
case 0x4aea7d:c.instructions+=2;goto B4aea7d;
case 0x4aea7f:c.instructions+=1;goto B4aea7f;
case 0x4aea84:goto L4aea84;
case 0x4aea86:c.instructions+=6;goto B4aea86;
case 0x4aea89:c.instructions+=5;goto B4aea89;
case 0x4aea8d:c.instructions+=4;goto B4aea8d;
case 0x4aea8f:c.instructions+=3;goto B4aea8f;
case 0x4aea91:c.instructions+=2;goto B4aea91;
case 0x4aea95:c.instructions+=1;goto B4aea95;
case 0x4aea97:goto L4aea97;
case 0x4aea9b:c.instructions+=8;goto B4aea9b;
case 0x4aea9f:c.instructions+=7;goto B4aea9f;
case 0x4aeaa0:c.instructions+=6;goto B4aeaa0;
case 0x4aeaa3:c.instructions+=5;goto B4aeaa3;
case 0x4aeaa8:c.instructions+=4;goto B4aeaa8;
case 0x4aeaa9:c.instructions+=3;goto B4aeaa9;
case 0x4aeaaf:c.instructions+=2;goto B4aeaaf;
case 0x4aeab5:c.instructions+=1;goto B4aeab5;
case 0x4aeaba:goto L4aeaba;
case 0x4aeabe:c.instructions+=3;goto B4aeabe;
case 0x4aeac4:c.instructions+=2;goto B4aeac4;
case 0x4aeac7:c.instructions+=1;goto B4aeac7;
case 0x4aeaca:goto L4aeaca;
case 0x4aeacd:c.instructions+=11;goto B4aeacd;
case 0x4aead0:c.instructions+=10;goto B4aead0;
case 0x4aead2:c.instructions+=9;goto B4aead2;
case 0x4aead5:c.instructions+=8;goto B4aead5;
case 0x4aead7:c.instructions+=7;goto B4aead7;
case 0x4aeadb:c.instructions+=6;goto B4aeadb;
case 0x4aeadc:c.instructions+=5;goto B4aeadc;
case 0x4aeadf:c.instructions+=4;goto B4aeadf;
case 0x4aeae0:c.instructions+=3;goto B4aeae0;
case 0x4aeae7:c.instructions+=2;goto B4aeae7;
case 0x4aeaea:c.instructions+=1;goto B4aeaea;
case 0x4aeaf0:goto L4aeaf0;
case 0x4aeaf1:c.instructions+=2;goto B4aeaf1;
case 0x4aeaf3:c.instructions+=1;goto B4aeaf3;
case 0x4aeaf8:goto L4aeaf8;
case 0x4aeafd:c.instructions+=1;goto B4aeafd;
case 0x4aeaff:goto L4aeaff;
case 0x4aeb00:c.instructions+=1;goto B4aeb00;
case 0x4aeb05:goto L4aeb05;
case 0x4aeb08:goto L4aeb08;
case 0x4aeb0a:c.instructions+=2;goto B4aeb0a;
case 0x4aeb0b:c.instructions+=1;goto B4aeb0b;
case 0x4aeb10:goto L4aeb10;
case 0x4aeb16:c.instructions+=1;goto B4aeb16;
case 0x4aeb20:goto L4aeb20;
case 0x4aeb23:c.instructions+=2;goto B4aeb23;
case 0x4aeb25:c.instructions+=1;goto B4aeb25;
case 0x4aeb27:goto L4aeb27;
case 0x4aeb28:c.instructions+=8;goto B4aeb28;
case 0x4aeb2b:c.instructions+=7;goto B4aeb2b;
case 0x4aeb2e:c.instructions+=6;goto B4aeb2e;
case 0x4aeb30:c.instructions+=5;goto B4aeb30;
case 0x4aeb32:c.instructions+=4;goto B4aeb32;
case 0x4aeb35:c.instructions+=3;goto B4aeb35;
case 0x4aeb37:c.instructions+=2;goto B4aeb37;
case 0x4aeb38:c.instructions+=1;goto B4aeb38;
case 0x4aeb39:goto L4aeb39;
case 0x4aeb3a:c.instructions+=8;goto B4aeb3a;
case 0x4aeb3d:c.instructions+=7;goto B4aeb3d;
case 0x4aeb3f:c.instructions+=6;goto B4aeb3f;
case 0x4aeb41:c.instructions+=5;goto B4aeb41;
case 0x4aeb43:c.instructions+=4;goto B4aeb43;
case 0x4aeb46:c.instructions+=3;goto B4aeb46;
case 0x4aeb48:c.instructions+=2;goto B4aeb48;
case 0x4aeb49:c.instructions+=1;goto B4aeb49;
case 0x4aeb50:goto L4aeb50;
case 0x4aeb54:c.instructions+=3;goto B4aeb54;
case 0x4aeb55:c.instructions+=2;goto B4aeb55;
case 0x4aeb58:c.instructions+=1;goto B4aeb58;
case 0x4aeb5d:goto L4aeb5d;
case 0x4aeb5f:c.instructions+=1;goto B4aeb5f;
case 0x4aeb61:goto L4aeb61;
case 0x4aeb64:c.instructions+=1;goto B4aeb64;
case 0x4aeb67:goto L4aeb67;
case 0x4aeb69:c.instructions+=1;goto B4aeb69;
case 0x4aeb70:goto L4aeb70;
case 0x4aeb71:c.instructions+=2;goto B4aeb71;
case 0x4aeb73:c.instructions+=1;goto B4aeb73;
case 0x4aeb78:goto L4aeb78;
case 0x4aeb7d:c.instructions+=1;goto B4aeb7d;
case 0x4aeb7f:goto L4aeb7f;
case 0x4aeb80:c.instructions+=1;goto B4aeb80;
case 0x4aeb85:goto L4aeb85;
case 0x4aeb88:goto L4aeb88;
case 0x4aeb8a:c.instructions+=2;goto B4aeb8a;
case 0x4aeb8b:c.instructions+=1;goto B4aeb8b;
case 0x4aeb90:goto L4aeb90;
case 0x4aeb93:c.instructions+=2;goto B4aeb93;
case 0x4aeb95:c.instructions+=1;goto B4aeb95;
case 0x4aeb97:goto L4aeb97;
case 0x4aeb98:c.instructions+=8;goto B4aeb98;
case 0x4aeb9b:c.instructions+=7;goto B4aeb9b;
case 0x4aeb9e:c.instructions+=6;goto B4aeb9e;
case 0x4aeba0:c.instructions+=5;goto B4aeba0;
case 0x4aeba2:c.instructions+=4;goto B4aeba2;
case 0x4aeba5:c.instructions+=3;goto B4aeba5;
case 0x4aeba7:c.instructions+=2;goto B4aeba7;
case 0x4aeba8:c.instructions+=1;goto B4aeba8;
case 0x4aeba9:goto L4aeba9;
case 0x4aebaa:c.instructions+=8;goto B4aebaa;
case 0x4aebad:c.instructions+=7;goto B4aebad;
case 0x4aebaf:c.instructions+=6;goto B4aebaf;
case 0x4aebb1:c.instructions+=5;goto B4aebb1;
case 0x4aebb3:c.instructions+=4;goto B4aebb3;
case 0x4aebb6:c.instructions+=3;goto B4aebb6;
case 0x4aebb8:c.instructions+=2;goto B4aebb8;
case 0x4aebb9:c.instructions+=1;goto B4aebb9;
case 0x4aebc0:goto L4aebc0;
case 0x4aebc3:c.instructions+=2;goto B4aebc3;
case 0x4aebc5:c.instructions+=1;goto B4aebc5;
case 0x4aebc7:goto L4aebc7;
case 0x4aebc8:c.instructions+=8;goto B4aebc8;
case 0x4aebcb:c.instructions+=7;goto B4aebcb;
case 0x4aebce:c.instructions+=6;goto B4aebce;
case 0x4aebd0:c.instructions+=5;goto B4aebd0;
case 0x4aebd2:c.instructions+=4;goto B4aebd2;
case 0x4aebd5:c.instructions+=3;goto B4aebd5;
case 0x4aebd7:c.instructions+=2;goto B4aebd7;
case 0x4aebd8:c.instructions+=1;goto B4aebd8;
case 0x4aebd9:goto L4aebd9;
case 0x4aebda:c.instructions+=8;goto B4aebda;
case 0x4aebdd:c.instructions+=7;goto B4aebdd;
case 0x4aebdf:c.instructions+=6;goto B4aebdf;
case 0x4aebe1:c.instructions+=5;goto B4aebe1;
case 0x4aebe3:c.instructions+=4;goto B4aebe3;
case 0x4aebe6:c.instructions+=3;goto B4aebe6;
case 0x4aebe8:c.instructions+=2;goto B4aebe8;
case 0x4aebe9:c.instructions+=1;goto B4aebe9;
case 0x4aebf0:goto L4aebf0;
case 0x4aebf4:c.instructions+=2;goto B4aebf4;
case 0x4aebf8:c.instructions+=1;goto B4aebf8;
case 0x4aec00:goto L4aec00;
case 0x4aec02:c.instructions+=18;goto B4aec02;
case 0x4aec04:c.instructions+=17;goto B4aec04;
case 0x4aec07:c.instructions+=16;goto B4aec07;
case 0x4aec0a:c.instructions+=15;goto B4aec0a;
case 0x4aec0d:c.instructions+=14;goto B4aec0d;
case 0x4aec10:c.instructions+=13;goto B4aec10;
case 0x4aec13:c.instructions+=12;goto B4aec13;
case 0x4aec16:c.instructions+=11;goto B4aec16;
case 0x4aec18:c.instructions+=10;goto B4aec18;
case 0x4aec1f:c.instructions+=9;goto B4aec1f;
case 0x4aec22:c.instructions+=8;goto B4aec22;
case 0x4aec25:c.instructions+=7;goto B4aec25;
case 0x4aec28:c.instructions+=6;goto B4aec28;
case 0x4aec2b:c.instructions+=5;goto B4aec2b;
case 0x4aec2e:c.instructions+=4;goto B4aec2e;
case 0x4aec31:c.instructions+=3;goto B4aec31;
case 0x4aec34:c.instructions+=2;goto B4aec34;
case 0x4aec37:c.instructions+=1;goto B4aec37;
case 0x4aec40:goto L4aec40;
case 0x4aec42:c.instructions+=33;goto B4aec42;
case 0x4aec44:c.instructions+=32;goto B4aec44;
case 0x4aec47:c.instructions+=31;goto B4aec47;
case 0x4aec4a:c.instructions+=30;goto B4aec4a;
case 0x4aec4d:c.instructions+=29;goto B4aec4d;
case 0x4aec50:c.instructions+=28;goto B4aec50;
case 0x4aec53:c.instructions+=27;goto B4aec53;
case 0x4aec56:c.instructions+=26;goto B4aec56;
case 0x4aec59:c.instructions+=25;goto B4aec59;
case 0x4aec5c:c.instructions+=24;goto B4aec5c;
case 0x4aec5e:c.instructions+=23;goto B4aec5e;
case 0x4aec61:c.instructions+=22;goto B4aec61;
case 0x4aec64:c.instructions+=21;goto B4aec64;
case 0x4aec67:c.instructions+=20;goto B4aec67;
case 0x4aec6a:c.instructions+=19;goto B4aec6a;
case 0x4aec6d:c.instructions+=18;goto B4aec6d;
case 0x4aec70:c.instructions+=17;goto B4aec70;
case 0x4aec73:c.instructions+=16;goto B4aec73;
case 0x4aec76:c.instructions+=15;goto B4aec76;
case 0x4aec79:c.instructions+=14;goto B4aec79;
case 0x4aec7c:c.instructions+=13;goto B4aec7c;
case 0x4aec7f:c.instructions+=12;goto B4aec7f;
case 0x4aec82:c.instructions+=11;goto B4aec82;
case 0x4aec85:c.instructions+=10;goto B4aec85;
case 0x4aec88:c.instructions+=9;goto B4aec88;
case 0x4aec8b:c.instructions+=8;goto B4aec8b;
case 0x4aec8e:c.instructions+=7;goto B4aec8e;
case 0x4aec91:c.instructions+=6;goto B4aec91;
case 0x4aec94:c.instructions+=5;goto B4aec94;
case 0x4aec97:c.instructions+=4;goto B4aec97;
case 0x4aec9a:c.instructions+=3;goto B4aec9a;
case 0x4aec9d:c.instructions+=2;goto B4aec9d;
case 0x4aeca0:c.instructions+=1;goto B4aeca0;
case 0x4aecb0:goto L4aecb0;
case 0x4aecb8:c.instructions+=1;goto B4aecb8;
case 0x4aecba:goto L4aecba;
case 0x4aecbe:c.instructions+=2;goto B4aecbe;
case 0x4aecbf:c.instructions+=1;goto B4aecbf;
case 0x4aecc4:goto L4aecc4;
case 0x4aecc8:c.instructions+=4;goto B4aecc8;
case 0x4aecc9:c.instructions+=3;goto B4aecc9;
case 0x4aecce:c.instructions+=2;goto B4aecce;
case 0x4aecd3:c.instructions+=1;goto B4aecd3;
case 0x4aecd8:goto L4aecd8;
case 0x4aecdb:goto L4aecdb;
case 0x4aece0:goto L4aece0;
case 0x4aece8:c.instructions+=1;goto B4aece8;
case 0x4aecea:goto L4aecea;
case 0x4aeceb:c.instructions+=6;goto B4aeceb;
case 0x4aecef:c.instructions+=5;goto B4aecef;
case 0x4aecf1:c.instructions+=4;goto B4aecf1;
case 0x4aecf6:c.instructions+=3;goto B4aecf6;
case 0x4aed00:c.instructions+=2;goto B4aed00;
case 0x4aed06:c.instructions+=1;goto B4aed06;
case 0x4aed0b:goto L4aed0b;
case 0x4aed0d:c.instructions+=3;goto B4aed0d;
case 0x4aed12:c.instructions+=2;goto B4aed12;
case 0x4aed13:c.instructions+=1;goto B4aed13;
case 0x4aed18:goto L4aed18;
case 0x4aed1d:c.instructions+=3;goto B4aed1d;
case 0x4aed20:c.instructions+=2;goto B4aed20;
case 0x4aed25:c.instructions+=1;goto B4aed25;
case 0x4aed26:goto L4aed26;
case 0x4aed30:goto L4aed30;
case 0x4aed38:c.instructions+=1;goto B4aed38;
case 0x4aed3a:goto L4aed3a;
case 0x4aed44:c.instructions+=1;goto B4aed44;
case 0x4aed49:goto L4aed49;
case 0x4aed4e:goto L4aed4e;
case 0x4aed50:c.instructions+=1;goto B4aed50;
case 0x4aed52:goto L4aed52;
case 0x4aed56:c.instructions+=2;goto B4aed56;
case 0x4aed57:c.instructions+=1;goto B4aed57;
case 0x4aed5c:goto L4aed5c;
case 0x4aed5f:c.instructions+=1;goto B4aed5f;
case 0x4aed62:goto L4aed62;
case 0x4aed66:c.instructions+=4;goto B4aed66;
case 0x4aed68:c.instructions+=3;goto B4aed68;
case 0x4aed6d:c.instructions+=2;goto B4aed6d;
case 0x4aed6e:c.instructions+=1;goto B4aed6e;
case 0x4aed73:goto L4aed73;
case 0x4aed76:goto L4aed76;
case 0x4aed80:goto L4aed80;
case 0x4aed88:c.instructions+=1;goto B4aed88;
case 0x4aed8a:goto L4aed8a;
case 0x4aed8f:c.instructions+=4;goto B4aed8f;
case 0x4aed91:c.instructions+=3;goto B4aed91;
case 0x4aed96:c.instructions+=2;goto B4aed96;
case 0x4aed97:c.instructions+=1;goto B4aed97;
case 0x4aed9c:goto L4aed9c;
case 0x4aed9f:goto L4aed9f;
case 0x4aedb0:goto L4aedb0;
case 0x4aedb8:c.instructions+=1;goto B4aedb8;
case 0x4aedba:goto L4aedba;
case 0x4aedbe:c.instructions+=4;goto B4aedbe;
case 0x4aedc0:c.instructions+=3;goto B4aedc0;
case 0x4aedc5:c.instructions+=2;goto B4aedc5;
case 0x4aedc6:c.instructions+=1;goto B4aedc6;
case 0x4aedcb:goto L4aedcb;
case 0x4aedce:goto L4aedce;
case 0x4aede0:goto L4aede0;
case 0x4aede8:c.instructions+=1;goto B4aede8;
case 0x4aedea:goto L4aedea;
case 0x4aedec:c.instructions+=2;goto B4aedec;
case 0x4aedee:c.instructions+=1;goto B4aedee;
case 0x4aedf3:goto L4aedf3;
case 0x4aedf5:c.instructions+=2;goto B4aedf5;
case 0x4aedf7:c.instructions+=1;goto B4aedf7;
case 0x4aedfc:goto L4aedfc;
case 0x4aedfe:c.instructions+=2;goto B4aedfe;
case 0x4aee00:c.instructions+=1;goto B4aee00;
case 0x4aee05:goto L4aee05;
case 0x4aee07:c.instructions+=2;goto B4aee07;
case 0x4aee09:c.instructions+=1;goto B4aee09;
case 0x4aee0e:goto L4aee0e;
case 0x4aee12:c.instructions+=5;goto B4aee12;
case 0x4aee14:c.instructions+=4;goto B4aee14;
case 0x4aee19:c.instructions+=3;goto B4aee19;
case 0x4aee1a:c.instructions+=2;goto B4aee1a;
case 0x4aee24:c.instructions+=1;goto B4aee24;
case 0x4aee29:goto L4aee29;
case 0x4aee2c:goto L4aee2c;
case 0x4aee30:goto L4aee30;
case 0x4aee32:c.instructions+=10;goto B4aee32;
case 0x4aee37:c.instructions+=9;goto B4aee37;
case 0x4aee3d:c.instructions+=8;goto B4aee3d;
case 0x4aee3e:c.instructions+=7;goto B4aee3e;
case 0x4aee45:c.instructions+=6;goto B4aee45;
case 0x4aee46:c.instructions+=5;goto B4aee46;
case 0x4aee47:c.instructions+=4;goto B4aee47;
case 0x4aee48:c.instructions+=3;goto B4aee48;
case 0x4aee4a:c.instructions+=2;goto B4aee4a;
case 0x4aee4c:c.instructions+=1;goto B4aee4c;
case 0x4aee51:goto L4aee51;
case 0x4aee53:c.instructions+=5;goto B4aee53;
case 0x4aee56:c.instructions+=4;goto B4aee56;
case 0x4aee5a:c.instructions+=3;goto B4aee5a;
case 0x4aee5c:c.instructions+=2;goto B4aee5c;
case 0x4aee64:c.instructions+=1;goto B4aee64;
case 0x4aee66:goto L4aee66;
case 0x4aee68:c.instructions+=4;goto B4aee68;
case 0x4aee6d:c.instructions+=3;goto B4aee6d;
case 0x4aee72:c.instructions+=2;goto B4aee72;
case 0x4aee74:c.instructions+=1;goto B4aee74;
case 0x4aee79:goto L4aee79;
case 0x4aee7f:c.instructions+=1;goto B4aee7f;
case 0x4aee81:goto L4aee81;
case 0x4aee83:goto L4aee83;
case 0x4aee85:c.instructions+=6;goto B4aee85;
case 0x4aee86:c.instructions+=5;goto B4aee86;
case 0x4aee89:c.instructions+=4;goto B4aee89;
case 0x4aee8a:c.instructions+=3;goto B4aee8a;
case 0x4aee8c:c.instructions+=2;goto B4aee8c;
case 0x4aee90:c.instructions+=1;goto B4aee90;
case 0x4aee93:goto L4aee93;
case 0x4aee95:c.instructions+=1;goto B4aee95;
case 0x4aee9a:goto L4aee9a;
case 0x4aee9c:c.instructions+=5;goto B4aee9c;
case 0x4aee9f:c.instructions+=4;goto B4aee9f;
case 0x4aeea3:c.instructions+=3;goto B4aeea3;
case 0x4aeea5:c.instructions+=2;goto B4aeea5;
case 0x4aeead:c.instructions+=1;goto B4aeead;
case 0x4aeeaf:goto L4aeeaf;
case 0x4aeeb1:c.instructions+=4;goto B4aeeb1;
case 0x4aeeb6:c.instructions+=3;goto B4aeeb6;
case 0x4aeebb:c.instructions+=2;goto B4aeebb;
case 0x4aeebd:c.instructions+=1;goto B4aeebd;
case 0x4aeec2:goto L4aeec2;
case 0x4aeec8:c.instructions+=1;goto B4aeec8;
case 0x4aeeca:goto L4aeeca;
case 0x4aeecc:goto L4aeecc;
case 0x4aeece:c.instructions+=4;goto B4aeece;
case 0x4aeecf:c.instructions+=3;goto B4aeecf;
case 0x4aeed1:c.instructions+=2;goto B4aeed1;
case 0x4aeed5:c.instructions+=1;goto B4aeed5;
case 0x4aeed8:goto L4aeed8;
case 0x4aeedd:goto L4aeedd;
case 0x4aeedf:c.instructions+=1;goto B4aeedf;
case 0x4aeee1:goto L4aeee1;
case 0x4aeee3:c.instructions+=1;goto B4aeee3;
case 0x4aeee8:goto L4aeee8;
case 0x4aeeea:c.instructions+=5;goto B4aeeea;
case 0x4aeeed:c.instructions+=4;goto B4aeeed;
case 0x4aeef1:c.instructions+=3;goto B4aeef1;
case 0x4aeef3:c.instructions+=2;goto B4aeef3;
case 0x4aeefb:c.instructions+=1;goto B4aeefb;
case 0x4aeefd:goto L4aeefd;
case 0x4aeeff:c.instructions+=4;goto B4aeeff;
case 0x4aef04:c.instructions+=3;goto B4aef04;
case 0x4aef09:c.instructions+=2;goto B4aef09;
case 0x4aef0b:c.instructions+=1;goto B4aef0b;
case 0x4aef10:goto L4aef10;
case 0x4aef16:c.instructions+=1;goto B4aef16;
case 0x4aef18:goto L4aef18;
case 0x4aef1a:goto L4aef1a;
case 0x4aef1c:c.instructions+=4;goto B4aef1c;
case 0x4aef1d:c.instructions+=3;goto B4aef1d;
case 0x4aef1f:c.instructions+=2;goto B4aef1f;
case 0x4aef23:c.instructions+=1;goto B4aef23;
case 0x4aef26:goto L4aef26;
case 0x4aef28:c.instructions+=1;goto B4aef28;
case 0x4aef2d:goto L4aef2d;
case 0x4aef2f:c.instructions+=5;goto B4aef2f;
case 0x4aef32:c.instructions+=4;goto B4aef32;
case 0x4aef36:c.instructions+=3;goto B4aef36;
case 0x4aef38:c.instructions+=2;goto B4aef38;
case 0x4aef40:c.instructions+=1;goto B4aef40;
case 0x4aef42:goto L4aef42;
case 0x4aef44:c.instructions+=4;goto B4aef44;
case 0x4aef49:c.instructions+=3;goto B4aef49;
case 0x4aef4e:c.instructions+=2;goto B4aef4e;
case 0x4aef50:c.instructions+=1;goto B4aef50;
case 0x4aef55:goto L4aef55;
case 0x4aef5b:c.instructions+=2;goto B4aef5b;
case 0x4aef5f:c.instructions+=1;goto B4aef5f;
case 0x4aef61:goto L4aef61;
case 0x4aef63:goto L4aef63;
case 0x4aef65:c.instructions+=4;goto B4aef65;
case 0x4aef66:c.instructions+=3;goto B4aef66;
case 0x4aef68:c.instructions+=2;goto B4aef68;
case 0x4aef6c:c.instructions+=1;goto B4aef6c;
case 0x4aef6f:goto L4aef6f;
case 0x4aef71:c.instructions+=1;goto B4aef71;
case 0x4aef76:goto L4aef76;
case 0x4aef78:c.instructions+=5;goto B4aef78;
case 0x4aef7b:c.instructions+=4;goto B4aef7b;
case 0x4aef7f:c.instructions+=3;goto B4aef7f;
case 0x4aef81:c.instructions+=2;goto B4aef81;
case 0x4aef89:c.instructions+=1;goto B4aef89;
case 0x4aef8b:goto L4aef8b;
case 0x4aef8d:c.instructions+=4;goto B4aef8d;
case 0x4aef92:c.instructions+=3;goto B4aef92;
case 0x4aef97:c.instructions+=2;goto B4aef97;
case 0x4aef99:c.instructions+=1;goto B4aef99;
case 0x4aef9e:goto L4aef9e;
case 0x4aefa4:c.instructions+=1;goto B4aefa4;
case 0x4aefa6:goto L4aefa6;
case 0x4aefa8:goto L4aefa8;
case 0x4aefaa:c.instructions+=4;goto B4aefaa;
case 0x4aefab:c.instructions+=3;goto B4aefab;
case 0x4aefad:c.instructions+=2;goto B4aefad;
case 0x4aefb1:c.instructions+=1;goto B4aefb1;
case 0x4aefb4:goto L4aefb4;
case 0x4aefb6:c.instructions+=1;goto B4aefb6;
case 0x4aefbb:goto L4aefbb;
case 0x4aefbd:c.instructions+=5;goto B4aefbd;
case 0x4aefc0:c.instructions+=4;goto B4aefc0;
case 0x4aefc4:c.instructions+=3;goto B4aefc4;
case 0x4aefc6:c.instructions+=2;goto B4aefc6;
case 0x4aefce:c.instructions+=1;goto B4aefce;
case 0x4aefd0:goto L4aefd0;
case 0x4aefd2:c.instructions+=4;goto B4aefd2;
case 0x4aefd7:c.instructions+=3;goto B4aefd7;
case 0x4aefdc:c.instructions+=2;goto B4aefdc;
case 0x4aefde:c.instructions+=1;goto B4aefde;
case 0x4aefe3:goto L4aefe3;
case 0x4aefe9:c.instructions+=2;goto B4aefe9;
case 0x4aefed:c.instructions+=1;goto B4aefed;
case 0x4aefef:goto L4aefef;
case 0x4aeff1:goto L4aeff1;
case 0x4aeff3:c.instructions+=4;goto B4aeff3;
case 0x4aeff4:c.instructions+=3;goto B4aeff4;
case 0x4aeff6:c.instructions+=2;goto B4aeff6;
case 0x4aeffa:c.instructions+=1;goto B4aeffa;
case 0x4aeffd:goto L4aeffd;
case 0x4aefff:c.instructions+=1;goto B4aefff;
default:missing_instruction(c.pc);}
B4ae001:L4ae001:{c.instructions+=2;NFSU2_TR(0x4ae001);
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
B4ae004:{NFSU2_TR(0x4ae004);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae010:L4ae010:{c.instructions+=7;NFSU2_TR(0x4ae010);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae013:{NFSU2_TR(0x4ae013);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae016:{NFSU2_TR(0x4ae016);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae017:{NFSU2_TR(0x4ae017);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae019:{NFSU2_TR(0x4ae019);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae01b:{NFSU2_TR(0x4ae01b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae01c:{NFSU2_TR(0x4ae01c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae021ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ae021:L4ae021:{c.instructions+=2;NFSU2_TR(0x4ae021);
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
B4ae024:{NFSU2_TR(0x4ae024);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae030:L4ae030:{c.instructions+=7;NFSU2_TR(0x4ae030);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae033:{NFSU2_TR(0x4ae033);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae036:{NFSU2_TR(0x4ae036);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae037:{NFSU2_TR(0x4ae037);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae039:{NFSU2_TR(0x4ae039);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae03b:{NFSU2_TR(0x4ae03b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae03c:{NFSU2_TR(0x4ae03c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae041ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ae041:L4ae041:{c.instructions+=2;NFSU2_TR(0x4ae041);
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
B4ae044:{NFSU2_TR(0x4ae044);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae050:L4ae050:{c.instructions+=7;NFSU2_TR(0x4ae050);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae053:{NFSU2_TR(0x4ae053);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae056:{NFSU2_TR(0x4ae056);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae057:{NFSU2_TR(0x4ae057);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae059:{NFSU2_TR(0x4ae059);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae05b:{NFSU2_TR(0x4ae05b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae05c:{NFSU2_TR(0x4ae05c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae061ull));
TAIL_STATIC(0x4acf40u,4ac);
}
B4ae061:L4ae061:{c.instructions+=2;NFSU2_TR(0x4ae061);
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
B4ae064:{NFSU2_TR(0x4ae064);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae070:L4ae070:{c.instructions+=8;NFSU2_TR(0x4ae070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae071:{NFSU2_TR(0x4ae071);
__builtin_memmove((R+24),(R+4),4);
}
B4ae073:{NFSU2_TR(0x4ae073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae076:{NFSU2_TR(0x4ae076);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae07c:{NFSU2_TR(0x4ae07c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae07e:{NFSU2_TR(0x4ae07e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae080:{NFSU2_TR(0x4ae080);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae086:{NFSU2_TR(0x4ae086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae08bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae08b:L4ae08b:{c.instructions+=3;NFSU2_TR(0x4ae08b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae08d:{NFSU2_TR(0x4ae08d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae08f:{NFSU2_TR(0x4ae08f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae092ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae092:L4ae092:{c.instructions+=2;NFSU2_TR(0x4ae092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae093:{NFSU2_TR(0x4ae093);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae0a0:L4ae0a0:{c.instructions+=8;NFSU2_TR(0x4ae0a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae0a1:{NFSU2_TR(0x4ae0a1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae0a3:{NFSU2_TR(0x4ae0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae0a6:{NFSU2_TR(0x4ae0a6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae0ac:{NFSU2_TR(0x4ae0ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae0ae:{NFSU2_TR(0x4ae0ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae0b0:{NFSU2_TR(0x4ae0b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae0b6:{NFSU2_TR(0x4ae0b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae0bbull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae0bb:L4ae0bb:{c.instructions+=3;NFSU2_TR(0x4ae0bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae0bd:{NFSU2_TR(0x4ae0bd);
__builtin_memmove((R+4),(R+24),4);
}
B4ae0bf:{NFSU2_TR(0x4ae0bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae0c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae0c2:L4ae0c2:{c.instructions+=2;NFSU2_TR(0x4ae0c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae0c3:{NFSU2_TR(0x4ae0c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae0d0:L4ae0d0:{c.instructions+=8;NFSU2_TR(0x4ae0d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae0d1:{NFSU2_TR(0x4ae0d1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae0d3:{NFSU2_TR(0x4ae0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae0d6:{NFSU2_TR(0x4ae0d6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae0dc:{NFSU2_TR(0x4ae0dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae0de:{NFSU2_TR(0x4ae0de);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae0e0:{NFSU2_TR(0x4ae0e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae0e6:{NFSU2_TR(0x4ae0e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae0ebull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae0eb:L4ae0eb:{c.instructions+=3;NFSU2_TR(0x4ae0eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae0ed:{NFSU2_TR(0x4ae0ed);
__builtin_memmove((R+4),(R+24),4);
}
B4ae0ef:{NFSU2_TR(0x4ae0ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae0f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae0f2:L4ae0f2:{c.instructions+=2;NFSU2_TR(0x4ae0f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae0f3:{NFSU2_TR(0x4ae0f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae100:L4ae100:{c.instructions+=8;NFSU2_TR(0x4ae100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae101:{NFSU2_TR(0x4ae101);
__builtin_memmove((R+24),(R+4),4);
}
B4ae103:{NFSU2_TR(0x4ae103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae106:{NFSU2_TR(0x4ae106);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae10c:{NFSU2_TR(0x4ae10c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae10e:{NFSU2_TR(0x4ae10e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae110:{NFSU2_TR(0x4ae110);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae116:{NFSU2_TR(0x4ae116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae11bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae11b:L4ae11b:{c.instructions+=3;NFSU2_TR(0x4ae11b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae11d:{NFSU2_TR(0x4ae11d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae11f:{NFSU2_TR(0x4ae11f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae122ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae122:L4ae122:{c.instructions+=2;NFSU2_TR(0x4ae122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae123:{NFSU2_TR(0x4ae123);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae130:L4ae130:{c.instructions+=8;NFSU2_TR(0x4ae130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae131:{NFSU2_TR(0x4ae131);
__builtin_memmove((R+24),(R+4),4);
}
B4ae133:{NFSU2_TR(0x4ae133);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae136:{NFSU2_TR(0x4ae136);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae13c:{NFSU2_TR(0x4ae13c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae13e:{NFSU2_TR(0x4ae13e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae140:{NFSU2_TR(0x4ae140);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae146:{NFSU2_TR(0x4ae146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae14bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae14b:L4ae14b:{c.instructions+=3;NFSU2_TR(0x4ae14b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae14d:{NFSU2_TR(0x4ae14d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae14f:{NFSU2_TR(0x4ae14f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae152ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae152:L4ae152:{c.instructions+=2;NFSU2_TR(0x4ae152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae153:{NFSU2_TR(0x4ae153);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae160:L4ae160:{c.instructions+=8;NFSU2_TR(0x4ae160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae161:{NFSU2_TR(0x4ae161);
__builtin_memmove((R+24),(R+4),4);
}
B4ae163:{NFSU2_TR(0x4ae163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae166:{NFSU2_TR(0x4ae166);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae16c:{NFSU2_TR(0x4ae16c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae16e:{NFSU2_TR(0x4ae16e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae170:{NFSU2_TR(0x4ae170);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae176:{NFSU2_TR(0x4ae176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae17bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae17b:L4ae17b:{c.instructions+=3;NFSU2_TR(0x4ae17b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae17d:{NFSU2_TR(0x4ae17d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae17f:{NFSU2_TR(0x4ae17f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae182ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae182:L4ae182:{c.instructions+=2;NFSU2_TR(0x4ae182);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae183:{NFSU2_TR(0x4ae183);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae190:L4ae190:{c.instructions+=8;NFSU2_TR(0x4ae190);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae191:{NFSU2_TR(0x4ae191);
__builtin_memmove((R+24),(R+4),4);
}
B4ae193:{NFSU2_TR(0x4ae193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae196:{NFSU2_TR(0x4ae196);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae19c:{NFSU2_TR(0x4ae19c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae19e:{NFSU2_TR(0x4ae19e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae1a0:{NFSU2_TR(0x4ae1a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae1a6:{NFSU2_TR(0x4ae1a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae1abull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae1ab:L4ae1ab:{c.instructions+=3;NFSU2_TR(0x4ae1ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae1ad:{NFSU2_TR(0x4ae1ad);
__builtin_memmove((R+4),(R+24),4);
}
B4ae1af:{NFSU2_TR(0x4ae1af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae1b2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae1b2:L4ae1b2:{c.instructions+=2;NFSU2_TR(0x4ae1b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae1b3:{NFSU2_TR(0x4ae1b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae1c0:L4ae1c0:{c.instructions+=8;NFSU2_TR(0x4ae1c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae1c1:{NFSU2_TR(0x4ae1c1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae1c3:{NFSU2_TR(0x4ae1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae1c6:{NFSU2_TR(0x4ae1c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae1cc:{NFSU2_TR(0x4ae1cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae1ce:{NFSU2_TR(0x4ae1ce);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae1d0:{NFSU2_TR(0x4ae1d0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae1d6:{NFSU2_TR(0x4ae1d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae1dbull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae1db:L4ae1db:{c.instructions+=3;NFSU2_TR(0x4ae1db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae1dd:{NFSU2_TR(0x4ae1dd);
__builtin_memmove((R+4),(R+24),4);
}
B4ae1df:{NFSU2_TR(0x4ae1df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae1e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae1e2:L4ae1e2:{c.instructions+=2;NFSU2_TR(0x4ae1e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae1e3:{NFSU2_TR(0x4ae1e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae1f0:L4ae1f0:{c.instructions+=8;NFSU2_TR(0x4ae1f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae1f1:{NFSU2_TR(0x4ae1f1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae1f3:{NFSU2_TR(0x4ae1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae1f6:{NFSU2_TR(0x4ae1f6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae1fc:{NFSU2_TR(0x4ae1fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae1fe:{NFSU2_TR(0x4ae1fe);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae200:{NFSU2_TR(0x4ae200);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae206:{NFSU2_TR(0x4ae206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae20bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae20b:L4ae20b:{c.instructions+=3;NFSU2_TR(0x4ae20b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae20d:{NFSU2_TR(0x4ae20d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae20f:{NFSU2_TR(0x4ae20f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae212ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae212:L4ae212:{c.instructions+=2;NFSU2_TR(0x4ae212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae213:{NFSU2_TR(0x4ae213);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae220:L4ae220:{c.instructions+=8;NFSU2_TR(0x4ae220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae221:{NFSU2_TR(0x4ae221);
__builtin_memmove((R+24),(R+4),4);
}
B4ae223:{NFSU2_TR(0x4ae223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae226:{NFSU2_TR(0x4ae226);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae22c:{NFSU2_TR(0x4ae22c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae22e:{NFSU2_TR(0x4ae22e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae230:{NFSU2_TR(0x4ae230);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae236:{NFSU2_TR(0x4ae236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae23bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae23b:L4ae23b:{c.instructions+=3;NFSU2_TR(0x4ae23b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae23d:{NFSU2_TR(0x4ae23d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae23f:{NFSU2_TR(0x4ae23f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae242ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae242:L4ae242:{c.instructions+=2;NFSU2_TR(0x4ae242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae243:{NFSU2_TR(0x4ae243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae250:L4ae250:{c.instructions+=8;NFSU2_TR(0x4ae250);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae251:{NFSU2_TR(0x4ae251);
__builtin_memmove((R+24),(R+4),4);
}
B4ae253:{NFSU2_TR(0x4ae253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae256:{NFSU2_TR(0x4ae256);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae25c:{NFSU2_TR(0x4ae25c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae25e:{NFSU2_TR(0x4ae25e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae260:{NFSU2_TR(0x4ae260);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae266:{NFSU2_TR(0x4ae266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae26bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae26b:L4ae26b:{c.instructions+=3;NFSU2_TR(0x4ae26b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae26d:{NFSU2_TR(0x4ae26d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae26f:{NFSU2_TR(0x4ae26f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae272ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae272:L4ae272:{c.instructions+=2;NFSU2_TR(0x4ae272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae273:{NFSU2_TR(0x4ae273);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae280:L4ae280:{c.instructions+=8;NFSU2_TR(0x4ae280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae281:{NFSU2_TR(0x4ae281);
__builtin_memmove((R+24),(R+4),4);
}
B4ae283:{NFSU2_TR(0x4ae283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae286:{NFSU2_TR(0x4ae286);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae28c:{NFSU2_TR(0x4ae28c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae28e:{NFSU2_TR(0x4ae28e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae290:{NFSU2_TR(0x4ae290);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae296:{NFSU2_TR(0x4ae296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae29bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae29b:L4ae29b:{c.instructions+=3;NFSU2_TR(0x4ae29b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae29d:{NFSU2_TR(0x4ae29d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae29f:{NFSU2_TR(0x4ae29f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae2a2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae2a2:L4ae2a2:{c.instructions+=2;NFSU2_TR(0x4ae2a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae2a3:{NFSU2_TR(0x4ae2a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae2b0:L4ae2b0:{c.instructions+=8;NFSU2_TR(0x4ae2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae2b1:{NFSU2_TR(0x4ae2b1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae2b3:{NFSU2_TR(0x4ae2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae2b6:{NFSU2_TR(0x4ae2b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae2bc:{NFSU2_TR(0x4ae2bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae2be:{NFSU2_TR(0x4ae2be);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae2c0:{NFSU2_TR(0x4ae2c0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae2c6:{NFSU2_TR(0x4ae2c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae2cbull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae2cb:L4ae2cb:{c.instructions+=3;NFSU2_TR(0x4ae2cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae2cd:{NFSU2_TR(0x4ae2cd);
__builtin_memmove((R+4),(R+24),4);
}
B4ae2cf:{NFSU2_TR(0x4ae2cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae2d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae2d2:L4ae2d2:{c.instructions+=2;NFSU2_TR(0x4ae2d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae2d3:{NFSU2_TR(0x4ae2d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae2e0:L4ae2e0:{c.instructions+=8;NFSU2_TR(0x4ae2e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae2e1:{NFSU2_TR(0x4ae2e1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae2e3:{NFSU2_TR(0x4ae2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae2e6:{NFSU2_TR(0x4ae2e6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae2ec:{NFSU2_TR(0x4ae2ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae2ee:{NFSU2_TR(0x4ae2ee);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae2f0:{NFSU2_TR(0x4ae2f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae2f6:{NFSU2_TR(0x4ae2f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae2fbull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae2fb:L4ae2fb:{c.instructions+=3;NFSU2_TR(0x4ae2fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae2fd:{NFSU2_TR(0x4ae2fd);
__builtin_memmove((R+4),(R+24),4);
}
B4ae2ff:{NFSU2_TR(0x4ae2ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae302ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae302:L4ae302:{c.instructions+=2;NFSU2_TR(0x4ae302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae303:{NFSU2_TR(0x4ae303);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae310:L4ae310:{c.instructions+=8;NFSU2_TR(0x4ae310);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae311:{NFSU2_TR(0x4ae311);
__builtin_memmove((R+24),(R+4),4);
}
B4ae313:{NFSU2_TR(0x4ae313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae316:{NFSU2_TR(0x4ae316);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae31c:{NFSU2_TR(0x4ae31c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae31e:{NFSU2_TR(0x4ae31e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae320:{NFSU2_TR(0x4ae320);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae326:{NFSU2_TR(0x4ae326);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae32bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae32b:L4ae32b:{c.instructions+=3;NFSU2_TR(0x4ae32b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae32d:{NFSU2_TR(0x4ae32d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae32f:{NFSU2_TR(0x4ae32f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae332ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae332:L4ae332:{c.instructions+=2;NFSU2_TR(0x4ae332);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae333:{NFSU2_TR(0x4ae333);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae340:L4ae340:{c.instructions+=8;NFSU2_TR(0x4ae340);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae341:{NFSU2_TR(0x4ae341);
__builtin_memmove((R+24),(R+4),4);
}
B4ae343:{NFSU2_TR(0x4ae343);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae346:{NFSU2_TR(0x4ae346);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae34c:{NFSU2_TR(0x4ae34c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae34e:{NFSU2_TR(0x4ae34e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae350:{NFSU2_TR(0x4ae350);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae356:{NFSU2_TR(0x4ae356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae35bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae35b:L4ae35b:{c.instructions+=3;NFSU2_TR(0x4ae35b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae35d:{NFSU2_TR(0x4ae35d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae35f:{NFSU2_TR(0x4ae35f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae362ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae362:L4ae362:{c.instructions+=2;NFSU2_TR(0x4ae362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae363:{NFSU2_TR(0x4ae363);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae370:L4ae370:{c.instructions+=8;NFSU2_TR(0x4ae370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae371:{NFSU2_TR(0x4ae371);
__builtin_memmove((R+24),(R+4),4);
}
B4ae373:{NFSU2_TR(0x4ae373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae376:{NFSU2_TR(0x4ae376);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae37c:{NFSU2_TR(0x4ae37c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae37e:{NFSU2_TR(0x4ae37e);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae380:{NFSU2_TR(0x4ae380);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae386:{NFSU2_TR(0x4ae386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae38bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae38b:L4ae38b:{c.instructions+=3;NFSU2_TR(0x4ae38b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae38d:{NFSU2_TR(0x4ae38d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae38f:{NFSU2_TR(0x4ae38f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae392ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae392:L4ae392:{c.instructions+=2;NFSU2_TR(0x4ae392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae393:{NFSU2_TR(0x4ae393);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae3a0:L4ae3a0:{c.instructions+=8;NFSU2_TR(0x4ae3a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae3a1:{NFSU2_TR(0x4ae3a1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae3a3:{NFSU2_TR(0x4ae3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae3a6:{NFSU2_TR(0x4ae3a6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae3ac:{NFSU2_TR(0x4ae3ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae3ae:{NFSU2_TR(0x4ae3ae);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae3b0:{NFSU2_TR(0x4ae3b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae3b6:{NFSU2_TR(0x4ae3b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae3bbull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae3bb:L4ae3bb:{c.instructions+=3;NFSU2_TR(0x4ae3bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae3bd:{NFSU2_TR(0x4ae3bd);
__builtin_memmove((R+4),(R+24),4);
}
B4ae3bf:{NFSU2_TR(0x4ae3bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae3c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae3c2:L4ae3c2:{c.instructions+=2;NFSU2_TR(0x4ae3c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae3c3:{NFSU2_TR(0x4ae3c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae3d0:L4ae3d0:{c.instructions+=8;NFSU2_TR(0x4ae3d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae3d1:{NFSU2_TR(0x4ae3d1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae3d3:{NFSU2_TR(0x4ae3d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae3d6:{NFSU2_TR(0x4ae3d6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae3dc:{NFSU2_TR(0x4ae3dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae3de:{NFSU2_TR(0x4ae3de);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae3e0:{NFSU2_TR(0x4ae3e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae3e6:{NFSU2_TR(0x4ae3e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae3ebull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae3eb:L4ae3eb:{c.instructions+=3;NFSU2_TR(0x4ae3eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae3ed:{NFSU2_TR(0x4ae3ed);
__builtin_memmove((R+4),(R+24),4);
}
B4ae3ef:{NFSU2_TR(0x4ae3ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae3f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae3f2:L4ae3f2:{c.instructions+=2;NFSU2_TR(0x4ae3f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae3f3:{NFSU2_TR(0x4ae3f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae400:L4ae400:{c.instructions+=8;NFSU2_TR(0x4ae400);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae401:{NFSU2_TR(0x4ae401);
__builtin_memmove((R+24),(R+4),4);
}
B4ae403:{NFSU2_TR(0x4ae403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae406:{NFSU2_TR(0x4ae406);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae40c:{NFSU2_TR(0x4ae40c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae40e:{NFSU2_TR(0x4ae40e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae410:{NFSU2_TR(0x4ae410);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae416:{NFSU2_TR(0x4ae416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae41bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae41b:L4ae41b:{c.instructions+=3;NFSU2_TR(0x4ae41b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae41d:{NFSU2_TR(0x4ae41d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae41f:{NFSU2_TR(0x4ae41f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae422ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae422:L4ae422:{c.instructions+=2;NFSU2_TR(0x4ae422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae423:{NFSU2_TR(0x4ae423);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae430:L4ae430:{c.instructions+=8;NFSU2_TR(0x4ae430);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae431:{NFSU2_TR(0x4ae431);
__builtin_memmove((R+24),(R+4),4);
}
B4ae433:{NFSU2_TR(0x4ae433);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae436:{NFSU2_TR(0x4ae436);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae43c:{NFSU2_TR(0x4ae43c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae43e:{NFSU2_TR(0x4ae43e);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae440:{NFSU2_TR(0x4ae440);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae446:{NFSU2_TR(0x4ae446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae44bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae44b:L4ae44b:{c.instructions+=3;NFSU2_TR(0x4ae44b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae44d:{NFSU2_TR(0x4ae44d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae44f:{NFSU2_TR(0x4ae44f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae452ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae452:L4ae452:{c.instructions+=2;NFSU2_TR(0x4ae452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae453:{NFSU2_TR(0x4ae453);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae460:L4ae460:{c.instructions+=8;NFSU2_TR(0x4ae460);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae461:{NFSU2_TR(0x4ae461);
__builtin_memmove((R+24),(R+4),4);
}
B4ae463:{NFSU2_TR(0x4ae463);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae466:{NFSU2_TR(0x4ae466);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae46c:{NFSU2_TR(0x4ae46c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae46e:{NFSU2_TR(0x4ae46e);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae470:{NFSU2_TR(0x4ae470);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae476:{NFSU2_TR(0x4ae476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae47bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae47b:L4ae47b:{c.instructions+=3;NFSU2_TR(0x4ae47b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae47d:{NFSU2_TR(0x4ae47d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae47f:{NFSU2_TR(0x4ae47f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae482ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae482:L4ae482:{c.instructions+=2;NFSU2_TR(0x4ae482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae483:{NFSU2_TR(0x4ae483);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae490:L4ae490:{c.instructions+=8;NFSU2_TR(0x4ae490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae491:{NFSU2_TR(0x4ae491);
__builtin_memmove((R+24),(R+4),4);
}
B4ae493:{NFSU2_TR(0x4ae493);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae496:{NFSU2_TR(0x4ae496);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae49c:{NFSU2_TR(0x4ae49c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae49e:{NFSU2_TR(0x4ae49e);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae4a0:{NFSU2_TR(0x4ae4a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae4a6:{NFSU2_TR(0x4ae4a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae4abull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae4ab:L4ae4ab:{c.instructions+=3;NFSU2_TR(0x4ae4ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae4ad:{NFSU2_TR(0x4ae4ad);
__builtin_memmove((R+4),(R+24),4);
}
B4ae4af:{NFSU2_TR(0x4ae4af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae4b2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae4b2:L4ae4b2:{c.instructions+=2;NFSU2_TR(0x4ae4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae4b3:{NFSU2_TR(0x4ae4b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae4c0:L4ae4c0:{c.instructions+=8;NFSU2_TR(0x4ae4c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae4c1:{NFSU2_TR(0x4ae4c1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae4c3:{NFSU2_TR(0x4ae4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae4c6:{NFSU2_TR(0x4ae4c6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae4cc:{NFSU2_TR(0x4ae4cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae4ce:{NFSU2_TR(0x4ae4ce);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae4d0:{NFSU2_TR(0x4ae4d0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae4d6:{NFSU2_TR(0x4ae4d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae4dbull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae4db:L4ae4db:{c.instructions+=3;NFSU2_TR(0x4ae4db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae4dd:{NFSU2_TR(0x4ae4dd);
__builtin_memmove((R+4),(R+24),4);
}
B4ae4df:{NFSU2_TR(0x4ae4df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae4e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae4e2:L4ae4e2:{c.instructions+=2;NFSU2_TR(0x4ae4e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae4e3:{NFSU2_TR(0x4ae4e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae4f0:L4ae4f0:{c.instructions+=8;NFSU2_TR(0x4ae4f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae4f1:{NFSU2_TR(0x4ae4f1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae4f3:{NFSU2_TR(0x4ae4f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae4f6:{NFSU2_TR(0x4ae4f6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae4fc:{NFSU2_TR(0x4ae4fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae4fe:{NFSU2_TR(0x4ae4fe);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae500:{NFSU2_TR(0x4ae500);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae506:{NFSU2_TR(0x4ae506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae50bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae50b:L4ae50b:{c.instructions+=3;NFSU2_TR(0x4ae50b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae50d:{NFSU2_TR(0x4ae50d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae50f:{NFSU2_TR(0x4ae50f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae512ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae512:L4ae512:{c.instructions+=2;NFSU2_TR(0x4ae512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae513:{NFSU2_TR(0x4ae513);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae520:L4ae520:{c.instructions+=8;NFSU2_TR(0x4ae520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae521:{NFSU2_TR(0x4ae521);
__builtin_memmove((R+24),(R+4),4);
}
B4ae523:{NFSU2_TR(0x4ae523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae526:{NFSU2_TR(0x4ae526);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae52c:{NFSU2_TR(0x4ae52c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae52e:{NFSU2_TR(0x4ae52e);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae530:{NFSU2_TR(0x4ae530);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae536:{NFSU2_TR(0x4ae536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae53bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae53b:L4ae53b:{c.instructions+=3;NFSU2_TR(0x4ae53b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae53d:{NFSU2_TR(0x4ae53d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae53f:{NFSU2_TR(0x4ae53f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae542ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae542:L4ae542:{c.instructions+=2;NFSU2_TR(0x4ae542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae543:{NFSU2_TR(0x4ae543);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae550:L4ae550:{c.instructions+=8;NFSU2_TR(0x4ae550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae551:{NFSU2_TR(0x4ae551);
__builtin_memmove((R+24),(R+4),4);
}
B4ae553:{NFSU2_TR(0x4ae553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae556:{NFSU2_TR(0x4ae556);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae55c:{NFSU2_TR(0x4ae55c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae55e:{NFSU2_TR(0x4ae55e);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae560:{NFSU2_TR(0x4ae560);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae566:{NFSU2_TR(0x4ae566);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae56bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae56b:L4ae56b:{c.instructions+=3;NFSU2_TR(0x4ae56b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae56d:{NFSU2_TR(0x4ae56d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae56f:{NFSU2_TR(0x4ae56f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae572ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae572:L4ae572:{c.instructions+=2;NFSU2_TR(0x4ae572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae573:{NFSU2_TR(0x4ae573);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae580:L4ae580:{c.instructions+=8;NFSU2_TR(0x4ae580);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae581:{NFSU2_TR(0x4ae581);
__builtin_memmove((R+24),(R+4),4);
}
B4ae583:{NFSU2_TR(0x4ae583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae586:{NFSU2_TR(0x4ae586);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae58c:{NFSU2_TR(0x4ae58c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae58e:{NFSU2_TR(0x4ae58e);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae590:{NFSU2_TR(0x4ae590);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae596:{NFSU2_TR(0x4ae596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae59bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae59b:L4ae59b:{c.instructions+=3;NFSU2_TR(0x4ae59b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae59d:{NFSU2_TR(0x4ae59d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae59f:{NFSU2_TR(0x4ae59f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae5a2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae5a2:L4ae5a2:{c.instructions+=2;NFSU2_TR(0x4ae5a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae5a3:{NFSU2_TR(0x4ae5a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae5b0:L4ae5b0:{c.instructions+=8;NFSU2_TR(0x4ae5b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae5b1:{NFSU2_TR(0x4ae5b1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae5b3:{NFSU2_TR(0x4ae5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae5b6:{NFSU2_TR(0x4ae5b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae5bc:{NFSU2_TR(0x4ae5bc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae5be:{NFSU2_TR(0x4ae5be);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae5c0:{NFSU2_TR(0x4ae5c0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae5c6:{NFSU2_TR(0x4ae5c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae5cbull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae5cb:L4ae5cb:{c.instructions+=3;NFSU2_TR(0x4ae5cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae5cd:{NFSU2_TR(0x4ae5cd);
__builtin_memmove((R+4),(R+24),4);
}
B4ae5cf:{NFSU2_TR(0x4ae5cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae5d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae5d2:L4ae5d2:{c.instructions+=2;NFSU2_TR(0x4ae5d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae5d3:{NFSU2_TR(0x4ae5d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae5e0:L4ae5e0:{c.instructions+=8;NFSU2_TR(0x4ae5e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae5e1:{NFSU2_TR(0x4ae5e1);
__builtin_memmove((R+24),(R+4),4);
}
B4ae5e3:{NFSU2_TR(0x4ae5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae5e6:{NFSU2_TR(0x4ae5e6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae5ec:{NFSU2_TR(0x4ae5ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae5ee:{NFSU2_TR(0x4ae5ee);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae5f0:{NFSU2_TR(0x4ae5f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae5f6:{NFSU2_TR(0x4ae5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae5fbull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae5fb:L4ae5fb:{c.instructions+=3;NFSU2_TR(0x4ae5fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae5fd:{NFSU2_TR(0x4ae5fd);
__builtin_memmove((R+4),(R+24),4);
}
B4ae5ff:{NFSU2_TR(0x4ae5ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae602ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae602:L4ae602:{c.instructions+=2;NFSU2_TR(0x4ae602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae603:{NFSU2_TR(0x4ae603);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae610:L4ae610:{c.instructions+=8;NFSU2_TR(0x4ae610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae611:{NFSU2_TR(0x4ae611);
__builtin_memmove((R+24),(R+4),4);
}
B4ae613:{NFSU2_TR(0x4ae613);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae616:{NFSU2_TR(0x4ae616);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4ae61c:{NFSU2_TR(0x4ae61c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae61e:{NFSU2_TR(0x4ae61e);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae620:{NFSU2_TR(0x4ae620);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B4ae626:{NFSU2_TR(0x4ae626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae62bull));
TAIL_STATIC(0x5c2100u,5c2);
}
B4ae62b:L4ae62b:{c.instructions+=3;NFSU2_TR(0x4ae62b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae62d:{NFSU2_TR(0x4ae62d);
__builtin_memmove((R+4),(R+24),4);
}
B4ae62f:{NFSU2_TR(0x4ae62f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae632ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae632:L4ae632:{c.instructions+=2;NFSU2_TR(0x4ae632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae633:{NFSU2_TR(0x4ae633);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae640:L4ae640:{c.instructions+=4;NFSU2_TR(0x4ae640);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae644:{NFSU2_TR(0x4ae644);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae648:{NFSU2_TR(0x4ae648);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae649:{NFSU2_TR(0x4ae649);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae64eull));
TAIL_STATIC(0x49f8f0u,49f);
}
B4ae64e:L4ae64e:{c.instructions+=1;NFSU2_TR(0x4ae64e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae650:L4ae650:{c.instructions+=6;NFSU2_TR(0x4ae650);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae654:{NFSU2_TR(0x4ae654);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae658:{NFSU2_TR(0x4ae658);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae659:{NFSU2_TR(0x4ae659);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae65a:{NFSU2_TR(0x4ae65a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae65e:{NFSU2_TR(0x4ae65e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae663ull));
TAIL_STATIC(0x4a0df0u,4a0);
}
B4ae663:L4ae663:{c.instructions+=1;NFSU2_TR(0x4ae663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae670:L4ae670:{c.instructions+=6;NFSU2_TR(0x4ae670);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae674:{NFSU2_TR(0x4ae674);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae678:{NFSU2_TR(0x4ae678);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae679:{NFSU2_TR(0x4ae679);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae67a:{NFSU2_TR(0x4ae67a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae67e:{NFSU2_TR(0x4ae67e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae683ull));
TAIL_STATIC(0x4a1bf0u,4a1);
}
B4ae683:L4ae683:{c.instructions+=1;NFSU2_TR(0x4ae683);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae690:L4ae690:{c.instructions+=6;NFSU2_TR(0x4ae690);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae694:{NFSU2_TR(0x4ae694);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae698:{NFSU2_TR(0x4ae698);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae699:{NFSU2_TR(0x4ae699);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae69a:{NFSU2_TR(0x4ae69a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae69e:{NFSU2_TR(0x4ae69e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae6a3ull));
TAIL_STATIC(0x4a1800u,4a1);
}
B4ae6a3:L4ae6a3:{c.instructions+=1;NFSU2_TR(0x4ae6a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae6b0:L4ae6b0:{c.instructions+=6;NFSU2_TR(0x4ae6b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae6b4:{NFSU2_TR(0x4ae6b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae6b8:{NFSU2_TR(0x4ae6b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae6b9:{NFSU2_TR(0x4ae6b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae6ba:{NFSU2_TR(0x4ae6ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae6be:{NFSU2_TR(0x4ae6be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae6c3ull));
TAIL_STATIC(0x4a1a00u,4a1);
}
B4ae6c3:L4ae6c3:{c.instructions+=1;NFSU2_TR(0x4ae6c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae6d0:L4ae6d0:{c.instructions+=6;NFSU2_TR(0x4ae6d0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae6d4:{NFSU2_TR(0x4ae6d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae6d8:{NFSU2_TR(0x4ae6d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae6d9:{NFSU2_TR(0x4ae6d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae6da:{NFSU2_TR(0x4ae6da);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae6de:{NFSU2_TR(0x4ae6de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae6e3ull));
TAIL_STATIC(0x4a1ac0u,4a1);
}
B4ae6e3:L4ae6e3:{c.instructions+=1;NFSU2_TR(0x4ae6e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae6f0:L4ae6f0:{c.instructions+=6;NFSU2_TR(0x4ae6f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae6f4:{NFSU2_TR(0x4ae6f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae6f8:{NFSU2_TR(0x4ae6f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae6f9:{NFSU2_TR(0x4ae6f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae6fa:{NFSU2_TR(0x4ae6fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae6fe:{NFSU2_TR(0x4ae6fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae703ull));
TAIL_STATIC(0x4a1b80u,4a1);
}
B4ae703:L4ae703:{c.instructions+=1;NFSU2_TR(0x4ae703);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae710:L4ae710:{c.instructions+=6;NFSU2_TR(0x4ae710);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae714:{NFSU2_TR(0x4ae714);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae718:{NFSU2_TR(0x4ae718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae719:{NFSU2_TR(0x4ae719);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae71a:{NFSU2_TR(0x4ae71a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae71e:{NFSU2_TR(0x4ae71e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae723ull));
TAIL_STATIC(0x4a1ed0u,4a1);
}
B4ae723:L4ae723:{c.instructions+=1;NFSU2_TR(0x4ae723);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae730:L4ae730:{c.instructions+=6;NFSU2_TR(0x4ae730);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae734:{NFSU2_TR(0x4ae734);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae738:{NFSU2_TR(0x4ae738);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae739:{NFSU2_TR(0x4ae739);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae73a:{NFSU2_TR(0x4ae73a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae73e:{NFSU2_TR(0x4ae73e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae743ull));
TAIL_STATIC(0x4a1f30u,4a1);
}
B4ae743:L4ae743:{c.instructions+=1;NFSU2_TR(0x4ae743);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae750:L4ae750:{c.instructions+=4;NFSU2_TR(0x4ae750);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae754:{NFSU2_TR(0x4ae754);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae758:{NFSU2_TR(0x4ae758);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae759:{NFSU2_TR(0x4ae759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae75eull));
TAIL_STATIC(0x4a2560u,4a2);
}
B4ae75e:L4ae75e:{c.instructions+=1;NFSU2_TR(0x4ae75e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae760:L4ae760:{c.instructions+=3;NFSU2_TR(0x4ae760);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ae764:{NFSU2_TR(0x4ae764);
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
B4ae766:{NFSU2_TR(0x4ae766);
if(r1(R+518)){{goto L4ae7a1;}}
}
B4ae768:L4ae768:{c.instructions+=4;NFSU2_TR(0x4ae768);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae769:{NFSU2_TR(0x4ae769);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ae76d:{NFSU2_TR(0x4ae76d);
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
B4ae76f:{NFSU2_TR(0x4ae76f);
if(r1(R+518)){{goto L4ae7a0;}}
}
B4ae771:L4ae771:{c.instructions+=3;NFSU2_TR(0x4ae771);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae775:{NFSU2_TR(0x4ae775);
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
B4ae777:{NFSU2_TR(0x4ae777);
if(r1(R+518)){{goto L4ae79b;}}
}
B4ae779:L4ae779:{c.instructions+=6;NFSU2_TR(0x4ae779);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B4ae77b:{NFSU2_TR(0x4ae77b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae77c:{NFSU2_TR(0x4ae77c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ae77e:{NFSU2_TR(0x4ae77e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4ae77f:{NFSU2_TR(0x4ae77f);
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
B4ae781:{NFSU2_TR(0x4ae781);
if(r1(R+518)){{goto L4ae79a;}}
}
B4ae783:L4ae783:{c.instructions+=2;NFSU2_TR(0x4ae783);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4ae785:{NFSU2_TR(0x4ae785);
if(r1(R+518)){{goto L4ae79a;}}
}
B4ae787:L4ae787:{c.instructions+=8;NFSU2_TR(0x4ae787);
w2(R+0,u16(s16(s8(r1(R+0)))));
}
B4ae78b:{NFSU2_TR(0x4ae78b);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+8)),r2(U+0));
}
B4ae78e:{NFSU2_TR(0x4ae78e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ae791:{NFSU2_TR(0x4ae791);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B4ae794:{NFSU2_TR(0x4ae794);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4ae795:{NFSU2_TR(0x4ae795);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4ae796:{NFSU2_TR(0x4ae796);
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
B4ae798:{NFSU2_TR(0x4ae798);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ae783u);}goto L4ae783;}}
}
B4ae79a:L4ae79a:{c.instructions+=1;NFSU2_TR(0x4ae79a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae79b:L4ae79b:{c.instructions+=1;NFSU2_TR(0x4ae79b);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+8)),r2(U+0));
}
B4ae7a0:L4ae7a0:{c.instructions+=1;NFSU2_TR(0x4ae7a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ae7a1:L4ae7a1:{c.instructions+=1;NFSU2_TR(0x4ae7a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae7b0:L4ae7b0:{c.instructions+=6;NFSU2_TR(0x4ae7b0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ae7b4:{NFSU2_TR(0x4ae7b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae7b5:{NFSU2_TR(0x4ae7b5);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ae7bb:{NFSU2_TR(0x4ae7bb);
__builtin_memmove((R+24),(R+4),4);
}
B4ae7bd:{NFSU2_TR(0x4ae7bd);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ae7c3:{NFSU2_TR(0x4ae7c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae7c8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4ae7c8:L4ae7c8:{c.instructions+=4;NFSU2_TR(0x4ae7c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4ae7ca:{NFSU2_TR(0x4ae7ca);
__builtin_memmove((R+0),(R+24),4);
}
B4ae7cc:{NFSU2_TR(0x4ae7cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae7cd:{NFSU2_TR(0x4ae7cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae7d0:L4ae7d0:{c.instructions+=6;NFSU2_TR(0x4ae7d0);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae7d5:{NFSU2_TR(0x4ae7d5);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae7d7:{NFSU2_TR(0x4ae7d7);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae7d9:{NFSU2_TR(0x4ae7d9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B4ae7dc:{NFSU2_TR(0x4ae7dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae7dd:{NFSU2_TR(0x4ae7dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae7e2ull));
TAIL_STATIC(0x75c401u,75c);
}
B4ae7e2:L4ae7e2:{c.instructions+=1;NFSU2_TR(0x4ae7e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae7f0:L4ae7f0:{c.instructions+=26;NFSU2_TR(0x4ae7f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae7f2:{NFSU2_TR(0x4ae7f2);
u8 U[4];
w4(U+0,u32(0x772bbbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae7f7:{NFSU2_TR(0x4ae7f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae7fd:{NFSU2_TR(0x4ae7fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae7fe:{NFSU2_TR(0x4ae7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae805:{NFSU2_TR(0x4ae805);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae806:{NFSU2_TR(0x4ae806);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae807:{NFSU2_TR(0x4ae807);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae808:{NFSU2_TR(0x4ae808);
__builtin_memmove((R+24),(R+4),4);
}
B4ae80a:{NFSU2_TR(0x4ae80a);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae80f:{NFSU2_TR(0x4ae80f);
u8 U[4];
w4(U+0,u32(0x4951d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae814:{NFSU2_TR(0x4ae814);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ae816:{NFSU2_TR(0x4ae816);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae818:{NFSU2_TR(0x4ae818);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae81a:{NFSU2_TR(0x4ae81a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ae81d:{NFSU2_TR(0x4ae81d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae81e:{NFSU2_TR(0x4ae81e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae822:{NFSU2_TR(0x4ae822);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae825:{NFSU2_TR(0x4ae825);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae828:{NFSU2_TR(0x4ae828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae82b:{NFSU2_TR(0x4ae82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae82e:{NFSU2_TR(0x4ae82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae831:{NFSU2_TR(0x4ae831);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae834:{NFSU2_TR(0x4ae834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae837:{NFSU2_TR(0x4ae837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae83a:{NFSU2_TR(0x4ae83a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae83full));
TAIL_STATIC(0x75c461u,75c);
}
B4ae83f:L4ae83f:{c.instructions+=16;NFSU2_TR(0x4ae83f);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae844:{NFSU2_TR(0x4ae844);
u8 U[4];
w4(U+0,u32(0x4951d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae849:{NFSU2_TR(0x4ae849);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae84b:{NFSU2_TR(0x4ae84b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae84d:{NFSU2_TR(0x4ae84d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ae853:{NFSU2_TR(0x4ae853);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae854:{NFSU2_TR(0x4ae854);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae858:{NFSU2_TR(0x4ae858);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae85e:{NFSU2_TR(0x4ae85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae864:{NFSU2_TR(0x4ae864);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae86a:{NFSU2_TR(0x4ae86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae870:{NFSU2_TR(0x4ae870);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae876:{NFSU2_TR(0x4ae876);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae87c:{NFSU2_TR(0x4ae87c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae882:{NFSU2_TR(0x4ae882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae888:{NFSU2_TR(0x4ae888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae88dull));
TAIL_STATIC(0x75c461u,75c);
}
B4ae88d:L4ae88d:{c.instructions+=9;NFSU2_TR(0x4ae88d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ae891:{NFSU2_TR(0x4ae891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae897:{NFSU2_TR(0x4ae897);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B4ae899:{NFSU2_TR(0x4ae899);
__builtin_memmove((R+0),(R+24),4);
}
B4ae89b:{NFSU2_TR(0x4ae89b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae89c:{NFSU2_TR(0x4ae89c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ae89d:{NFSU2_TR(0x4ae89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae8a4:{NFSU2_TR(0x4ae8a4);
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
B4ae8a7:{NFSU2_TR(0x4ae8a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae8b0:L4ae8b0:{c.instructions+=2;NFSU2_TR(0x4ae8b0);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ae8b4:{NFSU2_TR(0x4ae8b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ae8c2;}}
}
B4ae8b6:L4ae8b6:{c.instructions+=4;NFSU2_TR(0x4ae8b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4ae8b9:{NFSU2_TR(0x4ae8b9);
w4(R+0,u32(0x1ull));
}
B4ae8be:{NFSU2_TR(0x4ae8be);
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
B4ae8c0:{NFSU2_TR(0x4ae8c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ae8c4;}}
}
B4ae8c2:L4ae8c2:{c.instructions+=1;NFSU2_TR(0x4ae8c2);
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
B4ae8c4:L4ae8c4:{c.instructions+=1;NFSU2_TR(0x4ae8c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae8d0:L4ae8d0:{c.instructions+=3;NFSU2_TR(0x4ae8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x156a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae8d6:{NFSU2_TR(0x4ae8d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ae8db:{NFSU2_TR(0x4ae8db);
if(r1(R+518)){{goto L4ae8e2;}}
}
B4ae8dd:L4ae8dd:{c.instructions+=2;NFSU2_TR(0x4ae8dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ae8e0:{NFSU2_TR(0x4ae8e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ae8f1;}}
}
B4ae8e2:L4ae8e2:{c.instructions+=2;NFSU2_TR(0x4ae8e2);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x156b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x8ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4ae8e9:{NFSU2_TR(0x4ae8e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ae8f1;}}
}
B4ae8eb:L4ae8eb:{c.instructions+=2;NFSU2_TR(0x4ae8eb);
w4(R+0,u32(0x1ull));
}
B4ae8f0:{NFSU2_TR(0x4ae8f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae8f1:L4ae8f1:{c.instructions+=2;NFSU2_TR(0x4ae8f1);
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
B4ae8f3:{NFSU2_TR(0x4ae8f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae900:L4ae900:{c.instructions+=3;NFSU2_TR(0x4ae900);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae901:{NFSU2_TR(0x4ae901);
__builtin_memmove((R+24),(R+4),4);
}
B4ae903:{NFSU2_TR(0x4ae903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae908ull));
TAIL_STATIC(0x501100u,501);
}
B4ae908:L4ae908:{c.instructions+=2;NFSU2_TR(0x4ae908);
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
B4ae90a:{NFSU2_TR(0x4ae90a);
if(r1(R+518)){{goto L4ae928;}}
}
B4ae90c:L4ae90c:{c.instructions+=2;NFSU2_TR(0x4ae90c);
__builtin_memmove((R+4),(R+24),4);
}
B4ae90e:{NFSU2_TR(0x4ae90e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae913ull));
TAIL_STATIC(0x501100u,501);
}
B4ae913:L4ae913:{c.instructions+=2;NFSU2_TR(0x4ae913);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ae916:{NFSU2_TR(0x4ae916);
if(r1(R+518)){{goto L4ae928;}}
}
B4ae918:L4ae918:{c.instructions+=2;NFSU2_TR(0x4ae918);
__builtin_memmove((R+4),(R+24),4);
}
B4ae91a:{NFSU2_TR(0x4ae91a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae91full));
TAIL_STATIC(0x501100u,501);
}
B4ae91f:L4ae91f:{c.instructions+=2;NFSU2_TR(0x4ae91f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4ae922:{NFSU2_TR(0x4ae922);
if(r1(R+518)){{goto L4ae928;}}
}
B4ae924:L4ae924:{c.instructions+=3;NFSU2_TR(0x4ae924);
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
B4ae926:{NFSU2_TR(0x4ae926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae927:{NFSU2_TR(0x4ae927);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae928:L4ae928:{c.instructions+=3;NFSU2_TR(0x4ae928);
w4(R+0,u32(0x1ull));
}
B4ae92d:{NFSU2_TR(0x4ae92d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae92e:{NFSU2_TR(0x4ae92e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae930:L4ae930:{c.instructions+=3;NFSU2_TR(0x4ae930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae931:{NFSU2_TR(0x4ae931);
__builtin_memmove((R+24),(R+4),4);
}
B4ae933:{NFSU2_TR(0x4ae933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae938ull));
TAIL_STATIC(0x501100u,501);
}
B4ae938:L4ae938:{c.instructions+=2;NFSU2_TR(0x4ae938);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ae93a:{NFSU2_TR(0x4ae93a);
if(r1(R+518)){{goto L4ae967;}}
}
B4ae93c:L4ae93c:{c.instructions+=2;NFSU2_TR(0x4ae93c);
__builtin_memmove((R+4),(R+24),4);
}
B4ae93e:{NFSU2_TR(0x4ae93e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae943ull));
TAIL_STATIC(0x501100u,501);
}
B4ae943:L4ae943:{c.instructions+=2;NFSU2_TR(0x4ae943);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ae946:{NFSU2_TR(0x4ae946);
if(r1(R+518)){{goto L4ae967;}}
}
B4ae948:L4ae948:{c.instructions+=2;NFSU2_TR(0x4ae948);
__builtin_memmove((R+4),(R+24),4);
}
B4ae94a:{NFSU2_TR(0x4ae94a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae94full));
TAIL_STATIC(0x501100u,501);
}
B4ae94f:L4ae94f:{c.instructions+=2;NFSU2_TR(0x4ae94f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ae952:{NFSU2_TR(0x4ae952);
if(r1(R+518)){{goto L4ae967;}}
}
B4ae954:L4ae954:{c.instructions+=2;NFSU2_TR(0x4ae954);
__builtin_memmove((R+4),(R+24),4);
}
B4ae956:{NFSU2_TR(0x4ae956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae95bull));
TAIL_STATIC(0x501100u,501);
}
B4ae95b:L4ae95b:{c.instructions+=2;NFSU2_TR(0x4ae95b);
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
B4ae95e:{NFSU2_TR(0x4ae95e);
if(r1(R+518)){{goto L4ae967;}}
}
B4ae960:L4ae960:{c.instructions+=3;NFSU2_TR(0x4ae960);
w4(R+0,u32(0x1ull));
}
B4ae965:{NFSU2_TR(0x4ae965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae966:{NFSU2_TR(0x4ae966);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae967:L4ae967:{c.instructions+=3;NFSU2_TR(0x4ae967);
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
B4ae969:{NFSU2_TR(0x4ae969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae96a:{NFSU2_TR(0x4ae96a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae970:L4ae970:{c.instructions+=2;NFSU2_TR(0x4ae970);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ae974:{NFSU2_TR(0x4ae974);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae980:L4ae980:{c.instructions+=2;NFSU2_TR(0x4ae980);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ae984:{NFSU2_TR(0x4ae984);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae990:L4ae990:{c.instructions+=6;NFSU2_TR(0x4ae990);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae994:{NFSU2_TR(0x4ae994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ae996:{NFSU2_TR(0x4ae996);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae999:{NFSU2_TR(0x4ae999);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae99c:{NFSU2_TR(0x4ae99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae99f:{NFSU2_TR(0x4ae99f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae9b0:L4ae9b0:{c.instructions+=3;NFSU2_TR(0x4ae9b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae9b4:{NFSU2_TR(0x4ae9b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ae9b7:{NFSU2_TR(0x4ae9b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae9c0:L4ae9c0:{c.instructions+=9;NFSU2_TR(0x4ae9c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae9c1:{NFSU2_TR(0x4ae9c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae9c2:{NFSU2_TR(0x4ae9c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ae9c6:{NFSU2_TR(0x4ae9c6);
__builtin_memmove((R+24),(R+4),4);
}
B4ae9c8:{NFSU2_TR(0x4ae9c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ae9ca:{NFSU2_TR(0x4ae9ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ae9cc:{NFSU2_TR(0x4ae9cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae9cd:{NFSU2_TR(0x4ae9cd);
__builtin_memmove((R+4),(R+24),4);
}
B4ae9cf:{NFSU2_TR(0x4ae9cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae9d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae9d2:L4ae9d2:{c.instructions+=5;NFSU2_TR(0x4ae9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae9d5:{NFSU2_TR(0x4ae9d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ae9d7:{NFSU2_TR(0x4ae9d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae9d8:{NFSU2_TR(0x4ae9d8);
__builtin_memmove((R+4),(R+24),4);
}
B4ae9da:{NFSU2_TR(0x4ae9da);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae9ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ae9dd:L4ae9dd:{c.instructions+=3;NFSU2_TR(0x4ae9dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ae9de:{NFSU2_TR(0x4ae9de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ae9df:{NFSU2_TR(0x4ae9df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ae9f0:L4ae9f0:{c.instructions+=4;NFSU2_TR(0x4ae9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ae9f3:{NFSU2_TR(0x4ae9f3);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae9f8:{NFSU2_TR(0x4ae9f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ae9f9:{NFSU2_TR(0x4ae9f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ae9feull));
TAIL_STATIC(0x537be0u,537);
}
B4ae9fe:L4ae9fe:{c.instructions+=2;NFSU2_TR(0x4ae9fe);
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
B4aea01:{NFSU2_TR(0x4aea01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aea10:L4aea10:{c.instructions+=3;NFSU2_TR(0x4aea10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea11:{NFSU2_TR(0x4aea11);
__builtin_memmove((R+24),(R+4),4);
}
B4aea13:{NFSU2_TR(0x4aea13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aea18ull));
TAIL_STATIC(0x4cf650u,4cf);
}
B4aea18:L4aea18:{c.instructions+=2;NFSU2_TR(0x4aea18);
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
B4aea1d:{NFSU2_TR(0x4aea1d);
if(r1(R+518)){{goto L4aea28;}}
}
B4aea1f:L4aea1f:{c.instructions+=2;NFSU2_TR(0x4aea1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea20:{NFSU2_TR(0x4aea20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aea25ull));
TAIL_STATIC(0x575630u,575);
}
B4aea25:L4aea25:{c.instructions+=1;NFSU2_TR(0x4aea25);
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
B4aea28:L4aea28:{c.instructions+=3;NFSU2_TR(0x4aea28);
__builtin_memmove((R+0),(R+24),4);
}
B4aea2a:{NFSU2_TR(0x4aea2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aea2b:{NFSU2_TR(0x4aea2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aea30:L4aea30:{c.instructions+=2;NFSU2_TR(0x4aea30);
u8 U[4];
w4(U+0,u32(0x790f38ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4aea36:{NFSU2_TR(0x4aea36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aea40:L4aea40:{c.instructions+=3;NFSU2_TR(0x4aea40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea41:{NFSU2_TR(0x4aea41);
__builtin_memmove((R+24),(R+4),4);
}
B4aea43:{NFSU2_TR(0x4aea43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aea48ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aea30u);}goto L4aea30;}
}
B4aea48:L4aea48:{c.instructions+=2;NFSU2_TR(0x4aea48);
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
B4aea4d:{NFSU2_TR(0x4aea4d);
if(r1(R+518)){{goto L4aea58;}}
}
B4aea4f:L4aea4f:{c.instructions+=2;NFSU2_TR(0x4aea4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea50:{NFSU2_TR(0x4aea50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aea55ull));
TAIL_STATIC(0x575630u,575);
}
B4aea55:L4aea55:{c.instructions+=1;NFSU2_TR(0x4aea55);
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
B4aea58:L4aea58:{c.instructions+=3;NFSU2_TR(0x4aea58);
__builtin_memmove((R+0),(R+24),4);
}
B4aea5a:{NFSU2_TR(0x4aea5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aea5b:{NFSU2_TR(0x4aea5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aea60:L4aea60:{c.instructions+=11;NFSU2_TR(0x4aea60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea62:{NFSU2_TR(0x4aea62);
u8 U[4];
w4(U+0,u32(0x772be4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea67:{NFSU2_TR(0x4aea67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aea6d:{NFSU2_TR(0x4aea6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea6e:{NFSU2_TR(0x4aea6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aea75:{NFSU2_TR(0x4aea75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea76:{NFSU2_TR(0x4aea76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea77:{NFSU2_TR(0x4aea77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea78:{NFSU2_TR(0x4aea78);
u8 U[4];
w4(U+0,u32(0x94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aea7d:{NFSU2_TR(0x4aea7d);
__builtin_memmove((R+28),(R+4),4);
}
B4aea7f:{NFSU2_TR(0x4aea7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aea84ull));
TAIL_STATIC(0x575620u,575);
}
B4aea84:L4aea84:{c.instructions+=7;NFSU2_TR(0x4aea84);
__builtin_memmove((R+24),(R+0),4);
}
B4aea86:{NFSU2_TR(0x4aea86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4aea89:{NFSU2_TR(0x4aea89);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aea8d:{NFSU2_TR(0x4aea8d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4aea8f:{NFSU2_TR(0x4aea8f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aea91:{NFSU2_TR(0x4aea91);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aea95:{NFSU2_TR(0x4aea95);
if(r1(R+518)){{goto L4aeaca;}}
}
B4aea97:L4aea97:{c.instructions+=9;NFSU2_TR(0x4aea97);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aea9b:{NFSU2_TR(0x4aea9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aea9f:{NFSU2_TR(0x4aea9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeaa0:{NFSU2_TR(0x4aeaa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4aeaa3:{NFSU2_TR(0x4aeaa3);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeaa8:{NFSU2_TR(0x4aeaa8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeaa9:{NFSU2_TR(0x4aeaa9);
u8 U[4];
w4(U+0,u32(0x790f38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4aeaaf:{NFSU2_TR(0x4aeaaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aeab5:{NFSU2_TR(0x4aeab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeabaull));
TAIL_STATIC(0x50c960u,50c);
}
B4aeaba:L4aeaba:{c.instructions+=4;NFSU2_TR(0x4aeaba);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aeabe:{NFSU2_TR(0x4aeabe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aeac4:{NFSU2_TR(0x4aeac4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aeac7:{NFSU2_TR(0x4aeac7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4aeaca:L4aeaca:{c.instructions+=12;NFSU2_TR(0x4aeaca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aeacd:{NFSU2_TR(0x4aeacd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4aead0:{NFSU2_TR(0x4aead0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4aead2:{NFSU2_TR(0x4aead2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aead5:{NFSU2_TR(0x4aead5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4aead7:{NFSU2_TR(0x4aead7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aeadb:{NFSU2_TR(0x4aeadb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aeadc:{NFSU2_TR(0x4aeadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aeadf:{NFSU2_TR(0x4aeadf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aeae0:{NFSU2_TR(0x4aeae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aeae7:{NFSU2_TR(0x4aeae7);
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
B4aeaea:{NFSU2_TR(0x4aeaea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aeaf0:L4aeaf0:{c.instructions+=3;NFSU2_TR(0x4aeaf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeaf1:{NFSU2_TR(0x4aeaf1);
__builtin_memmove((R+24),(R+4),4);
}
B4aeaf3:{NFSU2_TR(0x4aeaf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeaf8ull));
{goto L4aeb10;}
}
B4aeaf8:L4aeaf8:{c.instructions+=2;NFSU2_TR(0x4aeaf8);
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
B4aeafd:{NFSU2_TR(0x4aeafd);
if(r1(R+518)){{goto L4aeb08;}}
}
B4aeaff:L4aeaff:{c.instructions+=2;NFSU2_TR(0x4aeaff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeb00:{NFSU2_TR(0x4aeb00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeb05ull));
TAIL_STATIC(0x575630u,575);
}
B4aeb05:L4aeb05:{c.instructions+=1;NFSU2_TR(0x4aeb05);
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
B4aeb08:L4aeb08:{c.instructions+=3;NFSU2_TR(0x4aeb08);
__builtin_memmove((R+0),(R+24),4);
}
B4aeb0a:{NFSU2_TR(0x4aeb0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aeb0b:{NFSU2_TR(0x4aeb0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aeb10:L4aeb10:{c.instructions+=2;NFSU2_TR(0x4aeb10);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+4)),r4(U+0));
}
B4aeb16:{NFSU2_TR(0x4aeb16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aeb20:L4aeb20:{c.instructions+=3;NFSU2_TR(0x4aeb20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aeb23:{NFSU2_TR(0x4aeb23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aeb25:{NFSU2_TR(0x4aeb25);
if(r1(R+518)){{goto L4aeb39;}}
}
B4aeb27:L4aeb27:{c.instructions+=9;NFSU2_TR(0x4aeb27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeb28:{NFSU2_TR(0x4aeb28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4aeb2b:{NFSU2_TR(0x4aeb2b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4aeb2e:{NFSU2_TR(0x4aeb2e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4aeb30:{NFSU2_TR(0x4aeb30);
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
B4aeb32:{NFSU2_TR(0x4aeb32);
__builtin_memmove((R+8),(R+518),1);
}
B4aeb35:{NFSU2_TR(0x4aeb35);
__builtin_memmove((R+0),(R+8),1);
}
B4aeb37:{NFSU2_TR(0x4aeb37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aeb38:{NFSU2_TR(0x4aeb38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aeb39:L4aeb39:{c.instructions+=9;NFSU2_TR(0x4aeb39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeb3a:{NFSU2_TR(0x4aeb3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4aeb3d:{NFSU2_TR(0x4aeb3d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4aeb3f:{NFSU2_TR(0x4aeb3f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4aeb41:{NFSU2_TR(0x4aeb41);
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
B4aeb43:{NFSU2_TR(0x4aeb43);
__builtin_memmove((R+8),(R+518),1);
}
B4aeb46:{NFSU2_TR(0x4aeb46);
__builtin_memmove((R+0),(R+8),1);
}
B4aeb48:{NFSU2_TR(0x4aeb48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aeb49:{NFSU2_TR(0x4aeb49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aeb50:L4aeb50:{c.instructions+=4;NFSU2_TR(0x4aeb50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aeb54:{NFSU2_TR(0x4aeb54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeb55:{NFSU2_TR(0x4aeb55);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B4aeb58:{NFSU2_TR(0x4aeb58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeb5dull));
TAIL_STATIC(0x43be60u,43b);
}
B4aeb5d:L4aeb5d:{c.instructions+=2;NFSU2_TR(0x4aeb5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aeb5f:{NFSU2_TR(0x4aeb5f);
if(r1(R+518)){{goto L4aeb67;}}
}
B4aeb61:L4aeb61:{c.instructions+=2;NFSU2_TR(0x4aeb61);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4aeb64:{NFSU2_TR(0x4aeb64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aeb67:L4aeb67:{c.instructions+=2;NFSU2_TR(0x4aeb67);
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
B4aeb69:{NFSU2_TR(0x4aeb69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aeb70:L4aeb70:{c.instructions+=3;NFSU2_TR(0x4aeb70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeb71:{NFSU2_TR(0x4aeb71);
__builtin_memmove((R+24),(R+4),4);
}
B4aeb73:{NFSU2_TR(0x4aeb73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeb78ull));
TAIL_STATIC(0x527770u,527);
}
B4aeb78:L4aeb78:{c.instructions+=2;NFSU2_TR(0x4aeb78);
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
B4aeb7d:{NFSU2_TR(0x4aeb7d);
if(r1(R+518)){{goto L4aeb88;}}
}
B4aeb7f:L4aeb7f:{c.instructions+=2;NFSU2_TR(0x4aeb7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeb80:{NFSU2_TR(0x4aeb80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeb85ull));
TAIL_STATIC(0x575630u,575);
}
B4aeb85:L4aeb85:{c.instructions+=1;NFSU2_TR(0x4aeb85);
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
B4aeb88:L4aeb88:{c.instructions+=3;NFSU2_TR(0x4aeb88);
__builtin_memmove((R+0),(R+24),4);
}
B4aeb8a:{NFSU2_TR(0x4aeb8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aeb8b:{NFSU2_TR(0x4aeb8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aeb90:L4aeb90:{c.instructions+=3;NFSU2_TR(0x4aeb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aeb93:{NFSU2_TR(0x4aeb93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aeb95:{NFSU2_TR(0x4aeb95);
if(r1(R+518)){{goto L4aeba9;}}
}
B4aeb97:L4aeb97:{c.instructions+=9;NFSU2_TR(0x4aeb97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeb98:{NFSU2_TR(0x4aeb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4aeb9b:{NFSU2_TR(0x4aeb9b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4aeb9e:{NFSU2_TR(0x4aeb9e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4aeba0:{NFSU2_TR(0x4aeba0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4aeba2:{NFSU2_TR(0x4aeba2);
__builtin_memmove((R+8),(R+518),1);
}
B4aeba5:{NFSU2_TR(0x4aeba5);
__builtin_memmove((R+0),(R+8),1);
}
B4aeba7:{NFSU2_TR(0x4aeba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aeba8:{NFSU2_TR(0x4aeba8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aeba9:L4aeba9:{c.instructions+=9;NFSU2_TR(0x4aeba9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aebaa:{NFSU2_TR(0x4aebaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4aebad:{NFSU2_TR(0x4aebad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4aebaf:{NFSU2_TR(0x4aebaf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4aebb1:{NFSU2_TR(0x4aebb1);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4aebb3:{NFSU2_TR(0x4aebb3);
__builtin_memmove((R+8),(R+518),1);
}
B4aebb6:{NFSU2_TR(0x4aebb6);
__builtin_memmove((R+0),(R+8),1);
}
B4aebb8:{NFSU2_TR(0x4aebb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aebb9:{NFSU2_TR(0x4aebb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aebc0:L4aebc0:{c.instructions+=3;NFSU2_TR(0x4aebc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aebc3:{NFSU2_TR(0x4aebc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aebc5:{NFSU2_TR(0x4aebc5);
if(r1(R+518)){{goto L4aebd9;}}
}
B4aebc7:L4aebc7:{c.instructions+=9;NFSU2_TR(0x4aebc7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aebc8:{NFSU2_TR(0x4aebc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4aebcb:{NFSU2_TR(0x4aebcb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4aebce:{NFSU2_TR(0x4aebce);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4aebd0:{NFSU2_TR(0x4aebd0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4aebd2:{NFSU2_TR(0x4aebd2);
__builtin_memmove((R+8),(R+518),1);
}
B4aebd5:{NFSU2_TR(0x4aebd5);
__builtin_memmove((R+0),(R+8),1);
}
B4aebd7:{NFSU2_TR(0x4aebd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aebd8:{NFSU2_TR(0x4aebd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aebd9:L4aebd9:{c.instructions+=9;NFSU2_TR(0x4aebd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aebda:{NFSU2_TR(0x4aebda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4aebdd:{NFSU2_TR(0x4aebdd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4aebdf:{NFSU2_TR(0x4aebdf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4aebe1:{NFSU2_TR(0x4aebe1);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4aebe3:{NFSU2_TR(0x4aebe3);
__builtin_memmove((R+8),(R+518),1);
}
B4aebe6:{NFSU2_TR(0x4aebe6);
__builtin_memmove((R+0),(R+8),1);
}
B4aebe8:{NFSU2_TR(0x4aebe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aebe9:{NFSU2_TR(0x4aebe9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aebf0:L4aebf0:{c.instructions+=3;NFSU2_TR(0x4aebf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aebf4:{NFSU2_TR(0x4aebf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4aebf8:{NFSU2_TR(0x4aebf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aec00:L4aec00:{c.instructions+=19;NFSU2_TR(0x4aec00);
__builtin_memmove((R+0),(R+4),4);
}
B4aec02:{NFSU2_TR(0x4aec02);
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
B4aec04:{NFSU2_TR(0x4aec04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec07:{NFSU2_TR(0x4aec07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec0a:{NFSU2_TR(0x4aec0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec0d:{NFSU2_TR(0x4aec0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec10:{NFSU2_TR(0x4aec10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec13:{NFSU2_TR(0x4aec13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec16:{NFSU2_TR(0x4aec16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4aec18:{NFSU2_TR(0x4aec18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aec1f:{NFSU2_TR(0x4aec1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec22:{NFSU2_TR(0x4aec22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec25:{NFSU2_TR(0x4aec25);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aec28:{NFSU2_TR(0x4aec28);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aec2b:{NFSU2_TR(0x4aec2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aec2e:{NFSU2_TR(0x4aec2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aec31:{NFSU2_TR(0x4aec31);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aec34:{NFSU2_TR(0x4aec34);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aec37:{NFSU2_TR(0x4aec37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aec40:L4aec40:{c.instructions+=34;NFSU2_TR(0x4aec40);
__builtin_memmove((R+0),(R+4),4);
}
B4aec42:{NFSU2_TR(0x4aec42);
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
B4aec44:{NFSU2_TR(0x4aec44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec47:{NFSU2_TR(0x4aec47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec4a:{NFSU2_TR(0x4aec4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec4d:{NFSU2_TR(0x4aec4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec50:{NFSU2_TR(0x4aec50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec53:{NFSU2_TR(0x4aec53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec56:{NFSU2_TR(0x4aec56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec59:{NFSU2_TR(0x4aec59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec5c:{NFSU2_TR(0x4aec5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4aec5e:{NFSU2_TR(0x4aec5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec61:{NFSU2_TR(0x4aec61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec64:{NFSU2_TR(0x4aec64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec67:{NFSU2_TR(0x4aec67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec6a:{NFSU2_TR(0x4aec6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec6d:{NFSU2_TR(0x4aec6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec70:{NFSU2_TR(0x4aec70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec73:{NFSU2_TR(0x4aec73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec76:{NFSU2_TR(0x4aec76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec79:{NFSU2_TR(0x4aec79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec7c:{NFSU2_TR(0x4aec7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec7f:{NFSU2_TR(0x4aec7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec82:{NFSU2_TR(0x4aec82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec85:{NFSU2_TR(0x4aec85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec88:{NFSU2_TR(0x4aec88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec8b:{NFSU2_TR(0x4aec8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec8e:{NFSU2_TR(0x4aec8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec91:{NFSU2_TR(0x4aec91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec94:{NFSU2_TR(0x4aec94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec97:{NFSU2_TR(0x4aec97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec9a:{NFSU2_TR(0x4aec9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aec9d:{NFSU2_TR(0x4aec9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aeca0:{NFSU2_TR(0x4aeca0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aecb0:L4aecb0:{c.instructions+=2;NFSU2_TR(0x4aecb0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4aecb8:{NFSU2_TR(0x4aecb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aecdb;}}
}
B4aecba:L4aecba:{c.instructions+=3;NFSU2_TR(0x4aecba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aecbe:{NFSU2_TR(0x4aecbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aecbf:{NFSU2_TR(0x4aecbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aecc4ull));
TAIL_STATIC(0x50d2a0u,50d);
}
B4aecc4:L4aecc4:{c.instructions+=5;NFSU2_TR(0x4aecc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aecc8:{NFSU2_TR(0x4aecc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aecc9:{NFSU2_TR(0x4aecc9);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aecce:{NFSU2_TR(0x4aecce);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B4aecd3:{NFSU2_TR(0x4aecd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aecd8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4aecd8:L4aecd8:{c.instructions+=1;NFSU2_TR(0x4aecd8);
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
B4aecdb:L4aecdb:{c.instructions+=1;NFSU2_TR(0x4aecdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aece0:L4aece0:{c.instructions+=2;NFSU2_TR(0x4aece0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4aece8:{NFSU2_TR(0x4aece8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aed26;}}
}
B4aecea:L4aecea:{c.instructions+=7;NFSU2_TR(0x4aecea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeceb:{NFSU2_TR(0x4aeceb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4aecef:{NFSU2_TR(0x4aecef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aecf1:{NFSU2_TR(0x4aecf1);
w4(R+4,u32(0x83a9d0ull));
}
B4aecf6:{NFSU2_TR(0x4aecf6);
s4(0x850078,u32(0x10ull));
}
B4aed00:{NFSU2_TR(0x4aed00);
__builtin_memmove(gp(0x83635c),(R+24),4);
}
B4aed06:{NFSU2_TR(0x4aed06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aed0bull));
TAIL_STATIC(0x52a460u,52a);
}
B4aed0b:L4aed0b:{c.instructions+=4;NFSU2_TR(0x4aed0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aed0d:{NFSU2_TR(0x4aed0d);
u8 U[4];
w4(U+0,u32(0x78fa3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aed12:{NFSU2_TR(0x4aed12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aed13:{NFSU2_TR(0x4aed13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aed18ull));
TAIL_STATIC(0x537980u,537);
}
B4aed18:L4aed18:{c.instructions+=4;NFSU2_TR(0x4aed18);
__builtin_memmove((R+0),gp(0x844ad8),1);
}
B4aed1d:{NFSU2_TR(0x4aed1d);
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
B4aed20:{NFSU2_TR(0x4aed20);
__builtin_memmove(gp(0x836360),(R+0),1);
}
B4aed25:{NFSU2_TR(0x4aed25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aed26:L4aed26:{c.instructions+=1;NFSU2_TR(0x4aed26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aed30:L4aed30:{c.instructions+=2;NFSU2_TR(0x4aed30);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4aed38:{NFSU2_TR(0x4aed38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aed76;}}
}
B4aed3a:L4aed3a:{c.instructions+=2;NFSU2_TR(0x4aed3a);
s4(0x850078,u32(0x20ull));
}
B4aed44:{NFSU2_TR(0x4aed44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aed49ull));
TAIL_STATIC(0x50e2d0u,50e);
}
B4aed49:L4aed49:{c.instructions+=1;NFSU2_TR(0x4aed49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aed4eull));
TAIL_STATIC(0x404800u,404);
}
B4aed4e:L4aed4e:{c.instructions+=2;NFSU2_TR(0x4aed4e);
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
B4aed50:{NFSU2_TR(0x4aed50);
if(r1(R+518)){{goto L4aed62;}}
}
B4aed52:L4aed52:{c.instructions+=3;NFSU2_TR(0x4aed52);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aed56:{NFSU2_TR(0x4aed56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aed57:{NFSU2_TR(0x4aed57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aed5cull));
TAIL_STATIC(0x4022c0u,402);
}
B4aed5c:L4aed5c:{c.instructions+=2;NFSU2_TR(0x4aed5c);
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
B4aed5f:{NFSU2_TR(0x4aed5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aed62:L4aed62:{c.instructions+=5;NFSU2_TR(0x4aed62);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aed66:{NFSU2_TR(0x4aed66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aed68:{NFSU2_TR(0x4aed68);
u8 U[4];
w4(U+0,u32(0x78f354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aed6d:{NFSU2_TR(0x4aed6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aed6e:{NFSU2_TR(0x4aed6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aed73ull));
TAIL_STATIC(0x537980u,537);
}
B4aed73:L4aed73:{c.instructions+=1;NFSU2_TR(0x4aed73);
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
B4aed76:L4aed76:{c.instructions+=1;NFSU2_TR(0x4aed76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aed80:L4aed80:{c.instructions+=2;NFSU2_TR(0x4aed80);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4aed88:{NFSU2_TR(0x4aed88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aed9f;}}
}
B4aed8a:L4aed8a:{c.instructions+=5;NFSU2_TR(0x4aed8a);
__builtin_memmove((R+0),gp(0x7f42c0),4);
}
B4aed8f:{NFSU2_TR(0x4aed8f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aed91:{NFSU2_TR(0x4aed91);
u8 U[4];
w4(U+0,u32(0x78f590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aed96:{NFSU2_TR(0x4aed96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aed97:{NFSU2_TR(0x4aed97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aed9cull));
TAIL_STATIC(0x537980u,537);
}
B4aed9c:L4aed9c:{c.instructions+=1;NFSU2_TR(0x4aed9c);
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
B4aed9f:L4aed9f:{c.instructions+=1;NFSU2_TR(0x4aed9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aedb0:L4aedb0:{c.instructions+=2;NFSU2_TR(0x4aedb0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4aedb8:{NFSU2_TR(0x4aedb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aedce;}}
}
B4aedba:L4aedba:{c.instructions+=5;NFSU2_TR(0x4aedba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aedbe:{NFSU2_TR(0x4aedbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aedc0:{NFSU2_TR(0x4aedc0);
u8 U[4];
w4(U+0,u32(0x790924ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aedc5:{NFSU2_TR(0x4aedc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aedc6:{NFSU2_TR(0x4aedc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aedcbull));
TAIL_STATIC(0x537980u,537);
}
B4aedcb:L4aedcb:{c.instructions+=1;NFSU2_TR(0x4aedcb);
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
B4aedce:L4aedce:{c.instructions+=1;NFSU2_TR(0x4aedce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aede0:L4aede0:{c.instructions+=2;NFSU2_TR(0x4aede0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4aede8:{NFSU2_TR(0x4aede8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aee2c;}}
}
B4aedea:L4aedea:{c.instructions+=3;NFSU2_TR(0x4aedea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aedec:{NFSU2_TR(0x4aedec);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aedee:{NFSU2_TR(0x4aedee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aedf3ull));
TAIL_STATIC(0x50cee0u,50c);
}
B4aedf3:L4aedf3:{c.instructions+=3;NFSU2_TR(0x4aedf3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aedf5:{NFSU2_TR(0x4aedf5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aedf7:{NFSU2_TR(0x4aedf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aedfcull));
TAIL_STATIC(0x50cee0u,50c);
}
B4aedfc:L4aedfc:{c.instructions+=3;NFSU2_TR(0x4aedfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aedfe:{NFSU2_TR(0x4aedfe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee00:{NFSU2_TR(0x4aee00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aee05ull));
TAIL_STATIC(0x50cee0u,50c);
}
B4aee05:L4aee05:{c.instructions+=3;NFSU2_TR(0x4aee05);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee07:{NFSU2_TR(0x4aee07);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee09:{NFSU2_TR(0x4aee09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aee0eull));
TAIL_STATIC(0x50cee0u,50c);
}
B4aee0e:L4aee0e:{c.instructions+=6;NFSU2_TR(0x4aee0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aee12:{NFSU2_TR(0x4aee12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee14:{NFSU2_TR(0x4aee14);
u8 U[4];
w4(U+0,u32(0x790428ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee19:{NFSU2_TR(0x4aee19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee1a:{NFSU2_TR(0x4aee1a);
s4(0x850078,u32(0x200ull));
}
B4aee24:{NFSU2_TR(0x4aee24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aee29ull));
TAIL_STATIC(0x537980u,537);
}
B4aee29:L4aee29:{c.instructions+=1;NFSU2_TR(0x4aee29);
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
B4aee2c:L4aee2c:{c.instructions+=1;NFSU2_TR(0x4aee2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aee30:L4aee30:{c.instructions+=11;NFSU2_TR(0x4aee30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee32:{NFSU2_TR(0x4aee32);
u8 U[4];
w4(U+0,u32(0x772c7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee37:{NFSU2_TR(0x4aee37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aee3d:{NFSU2_TR(0x4aee3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee3e:{NFSU2_TR(0x4aee3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aee45:{NFSU2_TR(0x4aee45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee46:{NFSU2_TR(0x4aee46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee47:{NFSU2_TR(0x4aee47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee48:{NFSU2_TR(0x4aee48);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee4a:{NFSU2_TR(0x4aee4a);
__builtin_memmove((R+24),(R+4),4);
}
B4aee4c:{NFSU2_TR(0x4aee4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aee51ull));
TAIL_STATIC(0x575620u,575);
}
B4aee51:L4aee51:{c.instructions+=6;NFSU2_TR(0x4aee51);
__builtin_memmove((R+28),(R+0),4);
}
B4aee53:{NFSU2_TR(0x4aee53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4aee56:{NFSU2_TR(0x4aee56);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aee5a:{NFSU2_TR(0x4aee5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aee5c:{NFSU2_TR(0x4aee5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aee64:{NFSU2_TR(0x4aee64);
if(r1(R+518)){{goto L4aee81;}}
}
B4aee66:L4aee66:{c.instructions+=5;NFSU2_TR(0x4aee66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee68:{NFSU2_TR(0x4aee68);
u8 U[4];
w4(U+0,u32(0x5e7e1192ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee6d:{NFSU2_TR(0x4aee6d);
u8 U[4];
w4(U+0,u32(0x3704f3dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee72:{NFSU2_TR(0x4aee72);
__builtin_memmove((R+4),(R+28),4);
}
B4aee74:{NFSU2_TR(0x4aee74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aee79ull));
TAIL_STATIC(0x51f670u,51f);
}
B4aee79:L4aee79:{c.instructions+=2;NFSU2_TR(0x4aee79);
u8 U[4];
w4(U+0,u32(0x790c50ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4aee7f:{NFSU2_TR(0x4aee7f);
{goto L4aee83;}
}
B4aee81:L4aee81:{c.instructions+=1;NFSU2_TR(0x4aee81);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4aee83:L4aee83:{c.instructions+=7;NFSU2_TR(0x4aee83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aee85:{NFSU2_TR(0x4aee85);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee86:{NFSU2_TR(0x4aee86);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4aee89:{NFSU2_TR(0x4aee89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee8a:{NFSU2_TR(0x4aee8a);
__builtin_memmove((R+4),(R+24),4);
}
B4aee8c:{NFSU2_TR(0x4aee8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aee90:{NFSU2_TR(0x4aee90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aee93ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4aee93:L4aee93:{c.instructions+=2;NFSU2_TR(0x4aee93);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aee95:{NFSU2_TR(0x4aee95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aee9aull));
TAIL_STATIC(0x575620u,575);
}
B4aee9a:L4aee9a:{c.instructions+=6;NFSU2_TR(0x4aee9a);
__builtin_memmove((R+28),(R+0),4);
}
B4aee9c:{NFSU2_TR(0x4aee9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4aee9f:{NFSU2_TR(0x4aee9f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aeea3:{NFSU2_TR(0x4aeea3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aeea5:{NFSU2_TR(0x4aeea5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aeead:{NFSU2_TR(0x4aeead);
if(r1(R+518)){{goto L4aeeca;}}
}
B4aeeaf:L4aeeaf:{c.instructions+=5;NFSU2_TR(0x4aeeaf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeeb1:{NFSU2_TR(0x4aeeb1);
u8 U[4];
w4(U+0,u32(0x24909fd7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeeb6:{NFSU2_TR(0x4aeeb6);
u8 U[4];
w4(U+0,u32(0x4e6fbb02ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeebb:{NFSU2_TR(0x4aeebb);
__builtin_memmove((R+4),(R+28),4);
}
B4aeebd:{NFSU2_TR(0x4aeebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeec2ull));
TAIL_STATIC(0x51f670u,51f);
}
B4aeec2:L4aeec2:{c.instructions+=2;NFSU2_TR(0x4aeec2);
u8 U[4];
w4(U+0,u32(0x790c30ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4aeec8:{NFSU2_TR(0x4aeec8);
{goto L4aeecc;}
}
B4aeeca:L4aeeca:{c.instructions+=1;NFSU2_TR(0x4aeeca);
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
B4aeecc:L4aeecc:{c.instructions+=5;NFSU2_TR(0x4aeecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aeece:{NFSU2_TR(0x4aeece);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeecf:{NFSU2_TR(0x4aeecf);
__builtin_memmove((R+4),(R+24),4);
}
B4aeed1:{NFSU2_TR(0x4aeed1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aeed5:{NFSU2_TR(0x4aeed5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeed8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4aeed8:L4aeed8:{c.instructions+=1;NFSU2_TR(0x4aeed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeeddull));
TAIL_STATIC(0x570a60u,570);
}
B4aeedd:L4aeedd:{c.instructions+=2;NFSU2_TR(0x4aeedd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aeedf:{NFSU2_TR(0x4aeedf);
if(r1(R+518)){{goto L4aef26;}}
}
B4aeee1:L4aeee1:{c.instructions+=2;NFSU2_TR(0x4aeee1);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeee3:{NFSU2_TR(0x4aeee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeee8ull));
TAIL_STATIC(0x575620u,575);
}
B4aeee8:L4aeee8:{c.instructions+=6;NFSU2_TR(0x4aeee8);
__builtin_memmove((R+28),(R+0),4);
}
B4aeeea:{NFSU2_TR(0x4aeeea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4aeeed:{NFSU2_TR(0x4aeeed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aeef1:{NFSU2_TR(0x4aeef1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aeef3:{NFSU2_TR(0x4aeef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aeefb:{NFSU2_TR(0x4aeefb);
if(r1(R+518)){{goto L4aef18;}}
}
B4aeefd:L4aeefd:{c.instructions+=5;NFSU2_TR(0x4aeefd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeeff:{NFSU2_TR(0x4aeeff);
u8 U[4];
w4(U+0,u32(0x7b63ff85ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef04:{NFSU2_TR(0x4aef04);
u8 U[4];
w4(U+0,u32(0x771849a5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef09:{NFSU2_TR(0x4aef09);
__builtin_memmove((R+4),(R+28),4);
}
B4aef0b:{NFSU2_TR(0x4aef0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aef10ull));
TAIL_STATIC(0x51f670u,51f);
}
B4aef10:L4aef10:{c.instructions+=2;NFSU2_TR(0x4aef10);
u8 U[4];
w4(U+0,u32(0x790c38ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4aef16:{NFSU2_TR(0x4aef16);
{goto L4aef1a;}
}
B4aef18:L4aef18:{c.instructions+=1;NFSU2_TR(0x4aef18);
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
B4aef1a:L4aef1a:{c.instructions+=5;NFSU2_TR(0x4aef1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aef1c:{NFSU2_TR(0x4aef1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef1d:{NFSU2_TR(0x4aef1d);
__builtin_memmove((R+4),(R+24),4);
}
B4aef1f:{NFSU2_TR(0x4aef1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aef23:{NFSU2_TR(0x4aef23);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aef26ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4aef26:L4aef26:{c.instructions+=2;NFSU2_TR(0x4aef26);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef28:{NFSU2_TR(0x4aef28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aef2dull));
TAIL_STATIC(0x575620u,575);
}
B4aef2d:L4aef2d:{c.instructions+=6;NFSU2_TR(0x4aef2d);
__builtin_memmove((R+28),(R+0),4);
}
B4aef2f:{NFSU2_TR(0x4aef2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4aef32:{NFSU2_TR(0x4aef32);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aef36:{NFSU2_TR(0x4aef36);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aef38:{NFSU2_TR(0x4aef38);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aef40:{NFSU2_TR(0x4aef40);
if(r1(R+518)){{goto L4aef61;}}
}
B4aef42:L4aef42:{c.instructions+=5;NFSU2_TR(0x4aef42);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef44:{NFSU2_TR(0x4aef44);
u8 U[4];
w4(U+0,u32(0x7294434cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef49:{NFSU2_TR(0x4aef49);
u8 U[4];
w4(U+0,u32(0xd13a2e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef4e:{NFSU2_TR(0x4aef4e);
__builtin_memmove((R+4),(R+28),4);
}
B4aef50:{NFSU2_TR(0x4aef50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aef55ull));
TAIL_STATIC(0x51f670u,51f);
}
B4aef55:L4aef55:{c.instructions+=3;NFSU2_TR(0x4aef55);
u8 U[4];
w4(U+0,u32(0x790c60ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4aef5b:{NFSU2_TR(0x4aef5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4aef5f:{NFSU2_TR(0x4aef5f);
{goto L4aef63;}
}
B4aef61:L4aef61:{c.instructions+=1;NFSU2_TR(0x4aef61);
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
B4aef63:L4aef63:{c.instructions+=5;NFSU2_TR(0x4aef63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aef65:{NFSU2_TR(0x4aef65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef66:{NFSU2_TR(0x4aef66);
__builtin_memmove((R+4),(R+24),4);
}
B4aef68:{NFSU2_TR(0x4aef68);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aef6c:{NFSU2_TR(0x4aef6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aef6full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4aef6f:L4aef6f:{c.instructions+=2;NFSU2_TR(0x4aef6f);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef71:{NFSU2_TR(0x4aef71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aef76ull));
TAIL_STATIC(0x575620u,575);
}
B4aef76:L4aef76:{c.instructions+=6;NFSU2_TR(0x4aef76);
__builtin_memmove((R+28),(R+0),4);
}
B4aef78:{NFSU2_TR(0x4aef78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4aef7b:{NFSU2_TR(0x4aef7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aef7f:{NFSU2_TR(0x4aef7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aef81:{NFSU2_TR(0x4aef81);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aef89:{NFSU2_TR(0x4aef89);
if(r1(R+518)){{goto L4aefa6;}}
}
B4aef8b:L4aef8b:{c.instructions+=5;NFSU2_TR(0x4aef8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef8d:{NFSU2_TR(0x4aef8d);
u8 U[4];
w4(U+0,u32(0xa53039a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef92:{NFSU2_TR(0x4aef92);
u8 U[4];
w4(U+0,u32(0xb0c46023ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aef97:{NFSU2_TR(0x4aef97);
__builtin_memmove((R+4),(R+28),4);
}
B4aef99:{NFSU2_TR(0x4aef99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aef9eull));
TAIL_STATIC(0x51f670u,51f);
}
B4aef9e:L4aef9e:{c.instructions+=2;NFSU2_TR(0x4aef9e);
u8 U[4];
w4(U+0,u32(0x790c48ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4aefa4:{NFSU2_TR(0x4aefa4);
{goto L4aefa8;}
}
B4aefa6:L4aefa6:{c.instructions+=1;NFSU2_TR(0x4aefa6);
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
B4aefa8:L4aefa8:{c.instructions+=5;NFSU2_TR(0x4aefa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aefaa:{NFSU2_TR(0x4aefaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aefab:{NFSU2_TR(0x4aefab);
__builtin_memmove((R+4),(R+24),4);
}
B4aefad:{NFSU2_TR(0x4aefad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aefb1:{NFSU2_TR(0x4aefb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aefb4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4aefb4:L4aefb4:{c.instructions+=2;NFSU2_TR(0x4aefb4);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aefb6:{NFSU2_TR(0x4aefb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aefbbull));
TAIL_STATIC(0x575620u,575);
}
B4aefbb:L4aefbb:{c.instructions+=6;NFSU2_TR(0x4aefbb);
__builtin_memmove((R+28),(R+0),4);
}
B4aefbd:{NFSU2_TR(0x4aefbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4aefc0:{NFSU2_TR(0x4aefc0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aefc4:{NFSU2_TR(0x4aefc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aefc6:{NFSU2_TR(0x4aefc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aefce:{NFSU2_TR(0x4aefce);
if(r1(R+518)){{goto L4aefef;}}
}
B4aefd0:L4aefd0:{c.instructions+=5;NFSU2_TR(0x4aefd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aefd2:{NFSU2_TR(0x4aefd2);
u8 U[4];
w4(U+0,u32(0xbcb18f38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aefd7:{NFSU2_TR(0x4aefd7);
u8 U[4];
w4(U+0,u32(0x6b303856ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aefdc:{NFSU2_TR(0x4aefdc);
__builtin_memmove((R+4),(R+28),4);
}
B4aefde:{NFSU2_TR(0x4aefde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aefe3ull));
TAIL_STATIC(0x51f670u,51f);
}
B4aefe3:L4aefe3:{c.instructions+=3;NFSU2_TR(0x4aefe3);
u8 U[4];
w4(U+0,u32(0x790c58ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4aefe9:{NFSU2_TR(0x4aefe9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4aefed:{NFSU2_TR(0x4aefed);
{goto L4aeff1;}
}
B4aefef:L4aefef:{c.instructions+=1;NFSU2_TR(0x4aefef);
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
B4aeff1:L4aeff1:{c.instructions+=5;NFSU2_TR(0x4aeff1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aeff3:{NFSU2_TR(0x4aeff3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aeff4:{NFSU2_TR(0x4aeff4);
__builtin_memmove((R+4),(R+24),4);
}
B4aeff6:{NFSU2_TR(0x4aeff6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aeffa:{NFSU2_TR(0x4aeffa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aeffdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4aeffd:L4aeffd:{c.instructions+=2;NFSU2_TR(0x4aeffd);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aefff:{NFSU2_TR(0x4aefff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4af004ull));
TAIL_STATIC(0x575620u,575);
}
XIT:NFSU2_TR_EXIT(0x4ae,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
