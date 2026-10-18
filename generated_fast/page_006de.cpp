#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6db(u8* __restrict R,Cpu& c);
u32 body_6dd(u8* __restrict R,Cpu& c);
u32 body_6df(u8* __restrict R,Cpu& c);
u32 body_6e1(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6de,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6de,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6de(u8* __restrict R,Cpu& c);
u32 page_6de(Cpu& c){return body_6de(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6de(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6de003:goto L6de003;
case 0x6de007:c.instructions+=11;goto B6de007;
case 0x6de00b:c.instructions+=10;goto B6de00b;
case 0x6de00c:c.instructions+=9;goto B6de00c;
case 0x6de012:c.instructions+=8;goto B6de012;
case 0x6de016:c.instructions+=7;goto B6de016;
case 0x6de01a:c.instructions+=6;goto B6de01a;
case 0x6de01b:c.instructions+=5;goto B6de01b;
case 0x6de01f:c.instructions+=4;goto B6de01f;
case 0x6de023:c.instructions+=3;goto B6de023;
case 0x6de027:c.instructions+=2;goto B6de027;
case 0x6de02b:c.instructions+=1;goto B6de02b;
case 0x6de030:goto L6de030;
case 0x6de034:c.instructions+=10;goto B6de034;
case 0x6de038:c.instructions+=9;goto B6de038;
case 0x6de03c:c.instructions+=8;goto B6de03c;
case 0x6de03d:c.instructions+=7;goto B6de03d;
case 0x6de041:c.instructions+=6;goto B6de041;
case 0x6de042:c.instructions+=5;goto B6de042;
case 0x6de046:c.instructions+=4;goto B6de046;
case 0x6de04c:c.instructions+=3;goto B6de04c;
case 0x6de050:c.instructions+=2;goto B6de050;
case 0x6de054:c.instructions+=1;goto B6de054;
case 0x6de059:goto L6de059;
case 0x6de05f:c.instructions+=1;goto B6de05f;
case 0x6de064:goto L6de064;
case 0x6de068:c.instructions+=11;goto B6de068;
case 0x6de06e:c.instructions+=10;goto B6de06e;
case 0x6de072:c.instructions+=9;goto B6de072;
case 0x6de074:c.instructions+=8;goto B6de074;
case 0x6de076:c.instructions+=7;goto B6de076;
case 0x6de07a:c.instructions+=6;goto B6de07a;
case 0x6de07e:c.instructions+=5;goto B6de07e;
case 0x6de082:c.instructions+=4;goto B6de082;
case 0x6de085:c.instructions+=3;goto B6de085;
case 0x6de08b:c.instructions+=2;goto B6de08b;
case 0x6de08f:c.instructions+=1;goto B6de08f;
case 0x6de095:goto L6de095;
case 0x6de09a:c.instructions+=2;goto B6de09a;
case 0x6de09c:c.instructions+=1;goto B6de09c;
case 0x6de0a2:goto L6de0a2;
case 0x6de0a8:c.instructions+=3;goto B6de0a8;
case 0x6de0ae:c.instructions+=2;goto B6de0ae;
case 0x6de0b2:c.instructions+=1;goto B6de0b2;
case 0x6de0b4:goto L6de0b4;
case 0x6de0ba:c.instructions+=4;goto B6de0ba;
case 0x6de0be:c.instructions+=3;goto B6de0be;
case 0x6de0c0:c.instructions+=2;goto B6de0c0;
case 0x6de0c4:c.instructions+=1;goto B6de0c4;
case 0x6de0c8:goto L6de0c8;
case 0x6de0ce:c.instructions+=2;goto B6de0ce;
case 0x6de0d0:c.instructions+=1;goto B6de0d0;
case 0x6de0d5:goto L6de0d5;
case 0x6de0d9:c.instructions+=10;goto B6de0d9;
case 0x6de0dd:c.instructions+=9;goto B6de0dd;
case 0x6de0e1:c.instructions+=8;goto B6de0e1;
case 0x6de0e7:c.instructions+=7;goto B6de0e7;
case 0x6de0eb:c.instructions+=6;goto B6de0eb;
case 0x6de0ec:c.instructions+=5;goto B6de0ec;
case 0x6de0f2:c.instructions+=4;goto B6de0f2;
case 0x6de0f6:c.instructions+=3;goto B6de0f6;
case 0x6de0f7:c.instructions+=2;goto B6de0f7;
case 0x6de0fb:c.instructions+=1;goto B6de0fb;
case 0x6de100:goto L6de100;
case 0x6de104:c.instructions+=10;goto B6de104;
case 0x6de108:c.instructions+=9;goto B6de108;
case 0x6de10e:c.instructions+=8;goto B6de10e;
case 0x6de113:c.instructions+=7;goto B6de113;
case 0x6de114:c.instructions+=6;goto B6de114;
case 0x6de118:c.instructions+=5;goto B6de118;
case 0x6de11c:c.instructions+=4;goto B6de11c;
case 0x6de11d:c.instructions+=3;goto B6de11d;
case 0x6de121:c.instructions+=2;goto B6de121;
case 0x6de127:c.instructions+=1;goto B6de127;
case 0x6de12c:goto L6de12c;
case 0x6de130:c.instructions+=12;goto B6de130;
case 0x6de136:c.instructions+=11;goto B6de136;
case 0x6de13a:c.instructions+=10;goto B6de13a;
case 0x6de13e:c.instructions+=9;goto B6de13e;
case 0x6de143:c.instructions+=8;goto B6de143;
case 0x6de147:c.instructions+=7;goto B6de147;
case 0x6de148:c.instructions+=6;goto B6de148;
case 0x6de14c:c.instructions+=5;goto B6de14c;
case 0x6de14d:c.instructions+=4;goto B6de14d;
case 0x6de151:c.instructions+=3;goto B6de151;
case 0x6de157:c.instructions+=2;goto B6de157;
case 0x6de15b:c.instructions+=1;goto B6de15b;
case 0x6de160:goto L6de160;
case 0x6de164:c.instructions+=8;goto B6de164;
case 0x6de168:c.instructions+=7;goto B6de168;
case 0x6de16d:c.instructions+=6;goto B6de16d;
case 0x6de16e:c.instructions+=5;goto B6de16e;
case 0x6de172:c.instructions+=4;goto B6de172;
case 0x6de173:c.instructions+=3;goto B6de173;
case 0x6de179:c.instructions+=2;goto B6de179;
case 0x6de17d:c.instructions+=1;goto B6de17d;
case 0x6de182:goto L6de182;
case 0x6de187:goto L6de187;
case 0x6de18d:c.instructions+=2;goto B6de18d;
case 0x6de195:c.instructions+=1;goto B6de195;
case 0x6de197:goto L6de197;
case 0x6de19d:c.instructions+=4;goto B6de19d;
case 0x6de1a1:c.instructions+=3;goto B6de1a1;
case 0x6de1a3:c.instructions+=2;goto B6de1a3;
case 0x6de1a9:c.instructions+=1;goto B6de1a9;
case 0x6de1ad:goto L6de1ad;
case 0x6de1b3:c.instructions+=2;goto B6de1b3;
case 0x6de1b5:c.instructions+=1;goto B6de1b5;
case 0x6de1ba:goto L6de1ba;
case 0x6de1c0:goto L6de1c0;
case 0x6de1c4:c.instructions+=10;goto B6de1c4;
case 0x6de1c8:c.instructions+=9;goto B6de1c8;
case 0x6de1cc:c.instructions+=8;goto B6de1cc;
case 0x6de1d2:c.instructions+=7;goto B6de1d2;
case 0x6de1d6:c.instructions+=6;goto B6de1d6;
case 0x6de1d7:c.instructions+=5;goto B6de1d7;
case 0x6de1db:c.instructions+=4;goto B6de1db;
case 0x6de1df:c.instructions+=3;goto B6de1df;
case 0x6de1e5:c.instructions+=2;goto B6de1e5;
case 0x6de1e6:c.instructions+=1;goto B6de1e6;
case 0x6de1eb:goto L6de1eb;
case 0x6de1ef:c.instructions+=10;goto B6de1ef;
case 0x6de1f3:c.instructions+=9;goto B6de1f3;
case 0x6de1fa:c.instructions+=8;goto B6de1fa;
case 0x6de1ff:c.instructions+=7;goto B6de1ff;
case 0x6de200:c.instructions+=6;goto B6de200;
case 0x6de204:c.instructions+=5;goto B6de204;
case 0x6de208:c.instructions+=4;goto B6de208;
case 0x6de209:c.instructions+=3;goto B6de209;
case 0x6de20f:c.instructions+=2;goto B6de20f;
case 0x6de213:c.instructions+=1;goto B6de213;
case 0x6de218:goto L6de218;
case 0x6de21c:c.instructions+=5;goto B6de21c;
case 0x6de21d:c.instructions+=4;goto B6de21d;
case 0x6de220:c.instructions+=3;goto B6de220;
case 0x6de226:c.instructions+=2;goto B6de226;
case 0x6de22a:c.instructions+=1;goto B6de22a;
case 0x6de22c:goto L6de22c;
case 0x6de22e:goto L6de22e;
case 0x6de234:c.instructions+=1;goto B6de234;
case 0x6de236:goto L6de236;
case 0x6de23c:c.instructions+=1;goto B6de23c;
case 0x6de241:goto L6de241;
case 0x6de247:c.instructions+=1;goto B6de247;
case 0x6de24c:goto L6de24c;
case 0x6de251:c.instructions+=2;goto B6de251;
case 0x6de252:c.instructions+=1;goto B6de252;
case 0x6de258:goto L6de258;
case 0x6de25e:c.instructions+=2;goto B6de25e;
case 0x6de260:c.instructions+=1;goto B6de260;
case 0x6de266:goto L6de266;
case 0x6de26a:c.instructions+=3;goto B6de26a;
case 0x6de26f:c.instructions+=2;goto B6de26f;
case 0x6de275:c.instructions+=1;goto B6de275;
case 0x6de277:goto L6de277;
case 0x6de27d:c.instructions+=3;goto B6de27d;
case 0x6de281:c.instructions+=2;goto B6de281;
case 0x6de283:c.instructions+=1;goto B6de283;
case 0x6de285:goto L6de285;
case 0x6de28b:c.instructions+=12;goto B6de28b;
case 0x6de291:c.instructions+=11;goto B6de291;
case 0x6de295:c.instructions+=10;goto B6de295;
case 0x6de29b:c.instructions+=9;goto B6de29b;
case 0x6de29f:c.instructions+=8;goto B6de29f;
case 0x6de2a3:c.instructions+=7;goto B6de2a3;
case 0x6de2a9:c.instructions+=6;goto B6de2a9;
case 0x6de2af:c.instructions+=5;goto B6de2af;
case 0x6de2b3:c.instructions+=4;goto B6de2b3;
case 0x6de2b9:c.instructions+=3;goto B6de2b9;
case 0x6de2bb:c.instructions+=2;goto B6de2bb;
case 0x6de2be:c.instructions+=1;goto B6de2be;
case 0x6de2c0:goto L6de2c0;
case 0x6de2c6:c.instructions+=13;goto B6de2c6;
case 0x6de2ca:c.instructions+=12;goto B6de2ca;
case 0x6de2ce:c.instructions+=11;goto B6de2ce;
case 0x6de2d2:c.instructions+=10;goto B6de2d2;
case 0x6de2d6:c.instructions+=9;goto B6de2d6;
case 0x6de2da:c.instructions+=8;goto B6de2da;
case 0x6de2de:c.instructions+=7;goto B6de2de;
case 0x6de2df:c.instructions+=6;goto B6de2df;
case 0x6de2e4:c.instructions+=5;goto B6de2e4;
case 0x6de2e9:c.instructions+=4;goto B6de2e9;
case 0x6de2ea:c.instructions+=3;goto B6de2ea;
case 0x6de2eb:c.instructions+=2;goto B6de2eb;
case 0x6de2ec:c.instructions+=1;goto B6de2ec;
case 0x6de2f1:goto L6de2f1;
case 0x6de2f4:c.instructions+=1;goto B6de2f4;
case 0x6de2f6:goto L6de2f6;
case 0x6de2fc:c.instructions+=6;goto B6de2fc;
case 0x6de300:c.instructions+=5;goto B6de300;
case 0x6de303:c.instructions+=4;goto B6de303;
case 0x6de306:c.instructions+=3;goto B6de306;
case 0x6de308:c.instructions+=2;goto B6de308;
case 0x6de30b:c.instructions+=1;goto B6de30b;
case 0x6de30d:goto L6de30d;
case 0x6de311:c.instructions+=4;goto B6de311;
case 0x6de316:c.instructions+=3;goto B6de316;
case 0x6de317:c.instructions+=2;goto B6de317;
case 0x6de318:c.instructions+=1;goto B6de318;
case 0x6de31a:goto L6de31a;
case 0x6de31e:c.instructions+=5;goto B6de31e;
case 0x6de323:c.instructions+=4;goto B6de323;
case 0x6de329:c.instructions+=3;goto B6de329;
case 0x6de32a:c.instructions+=2;goto B6de32a;
case 0x6de32b:c.instructions+=1;goto B6de32b;
case 0x6de32e:goto L6de32e;
case 0x6de32f:c.instructions+=1;goto B6de32f;
case 0x6de334:goto L6de334;
case 0x6de337:goto L6de337;
case 0x6de339:c.instructions+=1;goto B6de339;
case 0x6de33b:goto L6de33b;
case 0x6de341:c.instructions+=5;goto B6de341;
case 0x6de347:c.instructions+=4;goto B6de347;
case 0x6de34b:c.instructions+=3;goto B6de34b;
case 0x6de34d:c.instructions+=2;goto B6de34d;
case 0x6de350:c.instructions+=1;goto B6de350;
case 0x6de352:goto L6de352;
case 0x6de358:c.instructions+=3;goto B6de358;
case 0x6de35c:c.instructions+=2;goto B6de35c;
case 0x6de360:c.instructions+=1;goto B6de360;
case 0x6de364:goto L6de364;
case 0x6de368:c.instructions+=12;goto B6de368;
case 0x6de36c:c.instructions+=11;goto B6de36c;
case 0x6de36e:c.instructions+=10;goto B6de36e;
case 0x6de374:c.instructions+=9;goto B6de374;
case 0x6de378:c.instructions+=8;goto B6de378;
case 0x6de37d:c.instructions+=7;goto B6de37d;
case 0x6de37e:c.instructions+=6;goto B6de37e;
case 0x6de383:c.instructions+=5;goto B6de383;
case 0x6de384:c.instructions+=4;goto B6de384;
case 0x6de387:c.instructions+=3;goto B6de387;
case 0x6de388:c.instructions+=2;goto B6de388;
case 0x6de389:c.instructions+=1;goto B6de389;
case 0x6de38e:goto L6de38e;
case 0x6de391:goto L6de391;
case 0x6de392:c.instructions+=2;goto B6de392;
case 0x6de395:c.instructions+=1;goto B6de395;
case 0x6de3a0:goto L6de3a0;
case 0x6de3a5:c.instructions+=2;goto B6de3a5;
case 0x6de3a7:c.instructions+=1;goto B6de3a7;
case 0x6de3a9:goto L6de3a9;
case 0x6de3af:c.instructions+=2;goto B6de3af;
case 0x6de3b4:c.instructions+=1;goto B6de3b4;
case 0x6de3b5:goto L6de3b5;
case 0x6de3bb:c.instructions+=1;goto B6de3bb;
case 0x6de3bd:goto L6de3bd;
case 0x6de3c0:goto L6de3c0;
case 0x6de3c6:c.instructions+=2;goto B6de3c6;
case 0x6de3c8:c.instructions+=1;goto B6de3c8;
case 0x6de3ca:goto L6de3ca;
case 0x6de3cc:c.instructions+=2;goto B6de3cc;
case 0x6de3d2:c.instructions+=1;goto B6de3d2;
case 0x6de3d4:goto L6de3d4;
case 0x6de3da:c.instructions+=1;goto B6de3da;
case 0x6de3dc:goto L6de3dc;
case 0x6de3e2:c.instructions+=1;goto B6de3e2;
case 0x6de3e8:goto L6de3e8;
case 0x6de3f0:goto L6de3f0;
case 0x6de3f2:c.instructions+=7;goto B6de3f2;
case 0x6de3f6:c.instructions+=6;goto B6de3f6;
case 0x6de3f8:c.instructions+=5;goto B6de3f8;
case 0x6de3fa:c.instructions+=4;goto B6de3fa;
case 0x6de400:c.instructions+=3;goto B6de400;
case 0x6de406:c.instructions+=2;goto B6de406;
case 0x6de408:c.instructions+=1;goto B6de408;
case 0x6de410:goto L6de410;
case 0x6de417:c.instructions+=4;goto B6de417;
case 0x6de41b:c.instructions+=3;goto B6de41b;
case 0x6de41c:c.instructions+=2;goto B6de41c;
case 0x6de41f:c.instructions+=1;goto B6de41f;
case 0x6de421:goto L6de421;
case 0x6de425:c.instructions+=10;goto B6de425;
case 0x6de42b:c.instructions+=9;goto B6de42b;
case 0x6de431:c.instructions+=8;goto B6de431;
case 0x6de437:c.instructions+=7;goto B6de437;
case 0x6de43d:c.instructions+=6;goto B6de43d;
case 0x6de447:c.instructions+=5;goto B6de447;
case 0x6de44d:c.instructions+=4;goto B6de44d;
case 0x6de453:c.instructions+=3;goto B6de453;
case 0x6de459:c.instructions+=2;goto B6de459;
case 0x6de45e:c.instructions+=1;goto B6de45e;
case 0x6de470:goto L6de470;
case 0x6de473:c.instructions+=6;goto B6de473;
case 0x6de478:c.instructions+=5;goto B6de478;
case 0x6de47a:c.instructions+=4;goto B6de47a;
case 0x6de47b:c.instructions+=3;goto B6de47b;
case 0x6de47c:c.instructions+=2;goto B6de47c;
case 0x6de484:c.instructions+=1;goto B6de484;
case 0x6de486:goto L6de486;
case 0x6de48b:goto L6de48b;
case 0x6de48d:c.instructions+=1;goto B6de48d;
case 0x6de492:goto L6de492;
case 0x6de494:c.instructions+=2;goto B6de494;
case 0x6de496:c.instructions+=1;goto B6de496;
case 0x6de49b:goto L6de49b;
case 0x6de49f:c.instructions+=7;goto B6de49f;
case 0x6de4a0:c.instructions+=6;goto B6de4a0;
case 0x6de4a4:c.instructions+=5;goto B6de4a4;
case 0x6de4a9:c.instructions+=4;goto B6de4a9;
case 0x6de4ab:c.instructions+=3;goto B6de4ab;
case 0x6de4ac:c.instructions+=2;goto B6de4ac;
case 0x6de4ae:c.instructions+=1;goto B6de4ae;
case 0x6de4b1:goto L6de4b1;
case 0x6de4b5:c.instructions+=9;goto B6de4b5;
case 0x6de4b9:c.instructions+=8;goto B6de4b9;
case 0x6de4be:c.instructions+=7;goto B6de4be;
case 0x6de4c0:c.instructions+=6;goto B6de4c0;
case 0x6de4c1:c.instructions+=5;goto B6de4c1;
case 0x6de4c2:c.instructions+=4;goto B6de4c2;
case 0x6de4c8:c.instructions+=3;goto B6de4c8;
case 0x6de4ca:c.instructions+=2;goto B6de4ca;
case 0x6de4cc:c.instructions+=1;goto B6de4cc;
case 0x6de4d1:goto L6de4d1;
case 0x6de4d7:c.instructions+=3;goto B6de4d7;
case 0x6de4dc:c.instructions+=2;goto B6de4dc;
case 0x6de4de:c.instructions+=1;goto B6de4de;
case 0x6de4e3:goto L6de4e3;
case 0x6de4e7:c.instructions+=1;goto B6de4e7;
case 0x6de4ed:goto L6de4ed;
case 0x6de4f2:c.instructions+=2;goto B6de4f2;
case 0x6de4f4:c.instructions+=1;goto B6de4f4;
case 0x6de4f6:goto L6de4f6;
case 0x6de4f8:c.instructions+=2;goto B6de4f8;
case 0x6de4fd:c.instructions+=1;goto B6de4fd;
case 0x6de503:goto L6de503;
case 0x6de506:c.instructions+=2;goto B6de506;
case 0x6de508:c.instructions+=1;goto B6de508;
case 0x6de50a:goto L6de50a;
case 0x6de50c:c.instructions+=1;goto B6de50c;
case 0x6de511:goto L6de511;
case 0x6de513:goto L6de513;
case 0x6de515:goto L6de515;
case 0x6de517:c.instructions+=2;goto B6de517;
case 0x6de51c:c.instructions+=1;goto B6de51c;
case 0x6de521:goto L6de521;
case 0x6de527:c.instructions+=3;goto B6de527;
case 0x6de529:c.instructions+=2;goto B6de529;
case 0x6de52c:c.instructions+=1;goto B6de52c;
case 0x6de531:goto L6de531;
case 0x6de537:c.instructions+=1;goto B6de537;
case 0x6de53c:goto L6de53c;
case 0x6de541:c.instructions+=2;goto B6de541;
case 0x6de543:c.instructions+=1;goto B6de543;
case 0x6de545:goto L6de545;
case 0x6de54c:goto L6de54c;
case 0x6de54d:c.instructions+=2;goto B6de54d;
case 0x6de54e:c.instructions+=1;goto B6de54e;
case 0x6de550:goto L6de550;
case 0x6de556:c.instructions+=7;goto B6de556;
case 0x6de55b:c.instructions+=6;goto B6de55b;
case 0x6de561:c.instructions+=5;goto B6de561;
case 0x6de563:c.instructions+=4;goto B6de563;
case 0x6de565:c.instructions+=3;goto B6de565;
case 0x6de569:c.instructions+=2;goto B6de569;
case 0x6de56d:c.instructions+=1;goto B6de56d;
case 0x6de56f:goto L6de56f;
case 0x6de571:goto L6de571;
case 0x6de578:c.instructions+=1;goto B6de578;
case 0x6de57a:goto L6de57a;
case 0x6de580:c.instructions+=2;goto B6de580;
case 0x6de582:c.instructions+=1;goto B6de582;
case 0x6de584:goto L6de584;
case 0x6de58a:c.instructions+=4;goto B6de58a;
case 0x6de590:c.instructions+=3;goto B6de590;
case 0x6de592:c.instructions+=2;goto B6de592;
case 0x6de595:c.instructions+=1;goto B6de595;
case 0x6de597:goto L6de597;
case 0x6de59b:c.instructions+=8;goto B6de59b;
case 0x6de59f:c.instructions+=7;goto B6de59f;
case 0x6de5a0:c.instructions+=6;goto B6de5a0;
case 0x6de5a1:c.instructions+=5;goto B6de5a1;
case 0x6de5a2:c.instructions+=4;goto B6de5a2;
case 0x6de5a3:c.instructions+=3;goto B6de5a3;
case 0x6de5a4:c.instructions+=2;goto B6de5a4;
case 0x6de5a6:c.instructions+=1;goto B6de5a6;
case 0x6de5ab:goto L6de5ab;
case 0x6de5af:c.instructions+=4;goto B6de5af;
case 0x6de5b5:c.instructions+=3;goto B6de5b5;
case 0x6de5b6:c.instructions+=2;goto B6de5b6;
case 0x6de5ba:c.instructions+=1;goto B6de5ba;
case 0x6de5bc:goto L6de5bc;
case 0x6de5c1:goto L6de5c1;
case 0x6de5c7:goto L6de5c7;
case 0x6de5cd:c.instructions+=2;goto B6de5cd;
case 0x6de5cf:c.instructions+=1;goto B6de5cf;
case 0x6de5d1:goto L6de5d1;
case 0x6de5d7:c.instructions+=1;goto B6de5d7;
case 0x6de5dc:goto L6de5dc;
case 0x6de5dd:c.instructions+=2;goto B6de5dd;
case 0x6de5e0:c.instructions+=1;goto B6de5e0;
case 0x6de5e6:goto L6de5e6;
case 0x6de5ec:c.instructions+=1;goto B6de5ec;
case 0x6de5f1:goto L6de5f1;
case 0x6de5f6:c.instructions+=4;goto B6de5f6;
case 0x6de5f8:c.instructions+=3;goto B6de5f8;
case 0x6de5f9:c.instructions+=2;goto B6de5f9;
case 0x6de5fa:c.instructions+=1;goto B6de5fa;
case 0x6de5fc:goto L6de5fc;
case 0x6de602:c.instructions+=1;goto B6de602;
case 0x6de607:goto L6de607;
case 0x6de60d:c.instructions+=2;goto B6de60d;
case 0x6de60f:c.instructions+=1;goto B6de60f;
case 0x6de611:goto L6de611;
case 0x6de616:goto L6de616;
case 0x6de61b:c.instructions+=2;goto B6de61b;
case 0x6de621:c.instructions+=1;goto B6de621;
case 0x6de623:goto L6de623;
case 0x6de628:goto L6de628;
case 0x6de62d:goto L6de62d;
case 0x6de633:c.instructions+=3;goto B6de633;
case 0x6de634:c.instructions+=2;goto B6de634;
case 0x6de635:c.instructions+=1;goto B6de635;
case 0x6de637:goto L6de637;
case 0x6de641:goto L6de641;
case 0x6de644:c.instructions+=1;goto B6de644;
case 0x6de650:goto L6de650;
case 0x6de651:c.instructions+=4;goto B6de651;
case 0x6de655:c.instructions+=3;goto B6de655;
case 0x6de658:c.instructions+=2;goto B6de658;
case 0x6de65a:c.instructions+=1;goto B6de65a;
case 0x6de65c:goto L6de65c;
case 0x6de65d:c.instructions+=16;goto B6de65d;
case 0x6de65f:c.instructions+=15;goto B6de65f;
case 0x6de663:c.instructions+=14;goto B6de663;
case 0x6de666:c.instructions+=13;goto B6de666;
case 0x6de668:c.instructions+=12;goto B6de668;
case 0x6de66e:c.instructions+=11;goto B6de66e;
case 0x6de670:c.instructions+=10;goto B6de670;
case 0x6de672:c.instructions+=9;goto B6de672;
case 0x6de678:c.instructions+=8;goto B6de678;
case 0x6de67c:c.instructions+=7;goto B6de67c;
case 0x6de680:c.instructions+=6;goto B6de680;
case 0x6de684:c.instructions+=5;goto B6de684;
case 0x6de687:c.instructions+=4;goto B6de687;
case 0x6de68a:c.instructions+=3;goto B6de68a;
case 0x6de68c:c.instructions+=2;goto B6de68c;
case 0x6de68d:c.instructions+=1;goto B6de68d;
case 0x6de68f:goto L6de68f;
case 0x6de695:c.instructions+=5;goto B6de695;
case 0x6de697:c.instructions+=4;goto B6de697;
case 0x6de69a:c.instructions+=3;goto B6de69a;
case 0x6de69e:c.instructions+=2;goto B6de69e;
case 0x6de69f:c.instructions+=1;goto B6de69f;
case 0x6de6a0:goto L6de6a0;
case 0x6de6a3:c.instructions+=2;goto B6de6a3;
case 0x6de6a5:c.instructions+=1;goto B6de6a5;
case 0x6de6a7:goto L6de6a7;
case 0x6de6aa:c.instructions+=1;goto B6de6aa;
case 0x6de6ad:goto L6de6ad;
case 0x6de6ae:c.instructions+=1;goto B6de6ae;
case 0x6de6b0:goto L6de6b0;
case 0x6de6b1:c.instructions+=7;goto B6de6b1;
case 0x6de6b5:c.instructions+=6;goto B6de6b5;
case 0x6de6bc:c.instructions+=5;goto B6de6bc;
case 0x6de6c0:c.instructions+=4;goto B6de6c0;
case 0x6de6c4:c.instructions+=3;goto B6de6c4;
case 0x6de6c9:c.instructions+=2;goto B6de6c9;
case 0x6de6cf:c.instructions+=1;goto B6de6cf;
case 0x6de6d1:goto L6de6d1;
case 0x6de6d5:c.instructions+=9;goto B6de6d5;
case 0x6de6d8:c.instructions+=8;goto B6de6d8;
case 0x6de6dc:c.instructions+=7;goto B6de6dc;
case 0x6de6df:c.instructions+=6;goto B6de6df;
case 0x6de6e2:c.instructions+=5;goto B6de6e2;
case 0x6de6e6:c.instructions+=4;goto B6de6e6;
case 0x6de6e9:c.instructions+=3;goto B6de6e9;
case 0x6de6ec:c.instructions+=2;goto B6de6ec;
case 0x6de6ee:c.instructions+=1;goto B6de6ee;
case 0x6de6f0:goto L6de6f0;
case 0x6de6f1:c.instructions+=8;goto B6de6f1;
case 0x6de6f3:c.instructions+=7;goto B6de6f3;
case 0x6de6f6:c.instructions+=6;goto B6de6f6;
case 0x6de6f8:c.instructions+=5;goto B6de6f8;
case 0x6de6fa:c.instructions+=4;goto B6de6fa;
case 0x6de700:c.instructions+=3;goto B6de700;
case 0x6de704:c.instructions+=2;goto B6de704;
case 0x6de708:c.instructions+=1;goto B6de708;
case 0x6de709:goto L6de709;
case 0x6de70c:c.instructions+=2;goto B6de70c;
case 0x6de70e:c.instructions+=1;goto B6de70e;
case 0x6de710:goto L6de710;
case 0x6de715:c.instructions+=5;goto B6de715;
case 0x6de717:c.instructions+=4;goto B6de717;
case 0x6de71b:c.instructions+=3;goto B6de71b;
case 0x6de71e:c.instructions+=2;goto B6de71e;
case 0x6de722:c.instructions+=1;goto B6de722;
case 0x6de726:goto L6de726;
case 0x6de727:c.instructions+=1;goto B6de727;
case 0x6de730:goto L6de730;
case 0x6de731:c.instructions+=3;goto B6de731;
case 0x6de737:c.instructions+=2;goto B6de737;
case 0x6de739:c.instructions+=1;goto B6de739;
case 0x6de73b:goto L6de73b;
case 0x6de73c:c.instructions+=1;goto B6de73c;
case 0x6de740:goto L6de740;
case 0x6de741:c.instructions+=2;goto B6de741;
case 0x6de743:c.instructions+=1;goto B6de743;
case 0x6de748:goto L6de748;
case 0x6de74e:c.instructions+=2;goto B6de74e;
case 0x6de750:c.instructions+=1;goto B6de750;
case 0x6de752:goto L6de752;
case 0x6de753:goto L6de753;
case 0x6de758:c.instructions+=5;goto B6de758;
case 0x6de759:c.instructions+=4;goto B6de759;
case 0x6de75c:c.instructions+=3;goto B6de75c;
case 0x6de761:c.instructions+=2;goto B6de761;
case 0x6de762:c.instructions+=1;goto B6de762;
case 0x6de764:goto L6de764;
case 0x6de76e:goto L6de76e;
case 0x6de773:c.instructions+=2;goto B6de773;
case 0x6de775:c.instructions+=1;goto B6de775;
case 0x6de777:goto L6de777;
case 0x6de77c:goto L6de77c;
case 0x6de780:goto L6de780;
case 0x6de783:c.instructions+=9;goto B6de783;
case 0x6de784:c.instructions+=8;goto B6de784;
case 0x6de786:c.instructions+=7;goto B6de786;
case 0x6de78c:c.instructions+=6;goto B6de78c;
case 0x6de78e:c.instructions+=5;goto B6de78e;
case 0x6de790:c.instructions+=4;goto B6de790;
case 0x6de794:c.instructions+=3;goto B6de794;
case 0x6de799:c.instructions+=2;goto B6de799;
case 0x6de7a1:c.instructions+=1;goto B6de7a1;
case 0x6de7a6:goto L6de7a6;
case 0x6de7ab:c.instructions+=2;goto B6de7ab;
case 0x6de7ad:c.instructions+=1;goto B6de7ad;
case 0x6de7af:goto L6de7af;
case 0x6de7b6:c.instructions+=1;goto B6de7b6;
case 0x6de7b8:goto L6de7b8;
case 0x6de7b9:c.instructions+=1;goto B6de7b9;
case 0x6de7be:goto L6de7be;
case 0x6de7c1:goto L6de7c1;
case 0x6de7c6:c.instructions+=3;goto B6de7c6;
case 0x6de7c8:c.instructions+=2;goto B6de7c8;
case 0x6de7c9:c.instructions+=1;goto B6de7c9;
case 0x6de7cb:goto L6de7cb;
case 0x6de7d0:goto L6de7d0;
case 0x6de7da:c.instructions+=3;goto B6de7da;
case 0x6de7e0:c.instructions+=2;goto B6de7e0;
case 0x6de7e2:c.instructions+=1;goto B6de7e2;
case 0x6de7e4:goto L6de7e4;
case 0x6de7e8:c.instructions+=1;goto B6de7e8;
case 0x6de7ed:goto L6de7ed;
case 0x6de7f0:c.instructions+=1;goto B6de7f0;
case 0x6de800:goto L6de800;
case 0x6de801:c.instructions+=54;goto B6de801;
case 0x6de803:c.instructions+=53;goto B6de803;
case 0x6de806:c.instructions+=52;goto B6de806;
case 0x6de809:c.instructions+=51;goto B6de809;
case 0x6de80c:c.instructions+=50;goto B6de80c;
case 0x6de80f:c.instructions+=49;goto B6de80f;
case 0x6de812:c.instructions+=48;goto B6de812;
case 0x6de815:c.instructions+=47;goto B6de815;
case 0x6de817:c.instructions+=46;goto B6de817;
case 0x6de81a:c.instructions+=45;goto B6de81a;
case 0x6de81f:c.instructions+=44;goto B6de81f;
case 0x6de820:c.instructions+=43;goto B6de820;
case 0x6de823:c.instructions+=42;goto B6de823;
case 0x6de829:c.instructions+=41;goto B6de829;
case 0x6de82c:c.instructions+=40;goto B6de82c;
case 0x6de830:c.instructions+=39;goto B6de830;
case 0x6de832:c.instructions+=38;goto B6de832;
case 0x6de835:c.instructions+=37;goto B6de835;
case 0x6de839:c.instructions+=36;goto B6de839;
case 0x6de83b:c.instructions+=35;goto B6de83b;
case 0x6de83d:c.instructions+=34;goto B6de83d;
case 0x6de840:c.instructions+=33;goto B6de840;
case 0x6de844:c.instructions+=32;goto B6de844;
case 0x6de84a:c.instructions+=31;goto B6de84a;
case 0x6de84e:c.instructions+=30;goto B6de84e;
case 0x6de851:c.instructions+=29;goto B6de851;
case 0x6de857:c.instructions+=28;goto B6de857;
case 0x6de85b:c.instructions+=27;goto B6de85b;
case 0x6de85e:c.instructions+=26;goto B6de85e;
case 0x6de862:c.instructions+=25;goto B6de862;
case 0x6de865:c.instructions+=24;goto B6de865;
case 0x6de868:c.instructions+=23;goto B6de868;
case 0x6de86b:c.instructions+=22;goto B6de86b;
case 0x6de86f:c.instructions+=21;goto B6de86f;
case 0x6de873:c.instructions+=20;goto B6de873;
case 0x6de876:c.instructions+=19;goto B6de876;
case 0x6de879:c.instructions+=18;goto B6de879;
case 0x6de87c:c.instructions+=17;goto B6de87c;
case 0x6de880:c.instructions+=16;goto B6de880;
case 0x6de884:c.instructions+=15;goto B6de884;
case 0x6de888:c.instructions+=14;goto B6de888;
case 0x6de88b:c.instructions+=13;goto B6de88b;
case 0x6de88e:c.instructions+=12;goto B6de88e;
case 0x6de891:c.instructions+=11;goto B6de891;
case 0x6de895:c.instructions+=10;goto B6de895;
case 0x6de899:c.instructions+=9;goto B6de899;
case 0x6de89c:c.instructions+=8;goto B6de89c;
case 0x6de8a0:c.instructions+=7;goto B6de8a0;
case 0x6de8a3:c.instructions+=6;goto B6de8a3;
case 0x6de8a6:c.instructions+=5;goto B6de8a6;
case 0x6de8aa:c.instructions+=4;goto B6de8aa;
case 0x6de8ab:c.instructions+=3;goto B6de8ab;
case 0x6de8ad:c.instructions+=2;goto B6de8ad;
case 0x6de8ae:c.instructions+=1;goto B6de8ae;
case 0x6de8b0:goto L6de8b0;
case 0x6de8b1:c.instructions+=76;goto B6de8b1;
case 0x6de8b3:c.instructions+=75;goto B6de8b3;
case 0x6de8b6:c.instructions+=74;goto B6de8b6;
case 0x6de8b9:c.instructions+=73;goto B6de8b9;
case 0x6de8bc:c.instructions+=72;goto B6de8bc;
case 0x6de8bf:c.instructions+=71;goto B6de8bf;
case 0x6de8c2:c.instructions+=70;goto B6de8c2;
case 0x6de8c6:c.instructions+=69;goto B6de8c6;
case 0x6de8c7:c.instructions+=68;goto B6de8c7;
case 0x6de8ca:c.instructions+=67;goto B6de8ca;
case 0x6de8cc:c.instructions+=66;goto B6de8cc;
case 0x6de8cf:c.instructions+=65;goto B6de8cf;
case 0x6de8d0:c.instructions+=64;goto B6de8d0;
case 0x6de8d3:c.instructions+=63;goto B6de8d3;
case 0x6de8d8:c.instructions+=62;goto B6de8d8;
case 0x6de8de:c.instructions+=61;goto B6de8de;
case 0x6de8e4:c.instructions+=60;goto B6de8e4;
case 0x6de8e7:c.instructions+=59;goto B6de8e7;
case 0x6de8eb:c.instructions+=58;goto B6de8eb;
case 0x6de8ed:c.instructions+=57;goto B6de8ed;
case 0x6de8f0:c.instructions+=56;goto B6de8f0;
case 0x6de8f4:c.instructions+=55;goto B6de8f4;
case 0x6de8f6:c.instructions+=54;goto B6de8f6;
case 0x6de8f9:c.instructions+=53;goto B6de8f9;
case 0x6de8fd:c.instructions+=52;goto B6de8fd;
case 0x6de8ff:c.instructions+=51;goto B6de8ff;
case 0x6de901:c.instructions+=50;goto B6de901;
case 0x6de905:c.instructions+=49;goto B6de905;
case 0x6de908:c.instructions+=48;goto B6de908;
case 0x6de90b:c.instructions+=47;goto B6de90b;
case 0x6de911:c.instructions+=46;goto B6de911;
case 0x6de915:c.instructions+=45;goto B6de915;
case 0x6de91b:c.instructions+=44;goto B6de91b;
case 0x6de91f:c.instructions+=43;goto B6de91f;
case 0x6de922:c.instructions+=42;goto B6de922;
case 0x6de926:c.instructions+=41;goto B6de926;
case 0x6de929:c.instructions+=40;goto B6de929;
case 0x6de92f:c.instructions+=39;goto B6de92f;
case 0x6de933:c.instructions+=38;goto B6de933;
case 0x6de936:c.instructions+=37;goto B6de936;
case 0x6de93a:c.instructions+=36;goto B6de93a;
case 0x6de93d:c.instructions+=35;goto B6de93d;
case 0x6de940:c.instructions+=34;goto B6de940;
case 0x6de943:c.instructions+=33;goto B6de943;
case 0x6de946:c.instructions+=32;goto B6de946;
case 0x6de94a:c.instructions+=31;goto B6de94a;
case 0x6de94e:c.instructions+=30;goto B6de94e;
case 0x6de952:c.instructions+=29;goto B6de952;
case 0x6de955:c.instructions+=28;goto B6de955;
case 0x6de958:c.instructions+=27;goto B6de958;
case 0x6de95b:c.instructions+=26;goto B6de95b;
case 0x6de95e:c.instructions+=25;goto B6de95e;
case 0x6de961:c.instructions+=24;goto B6de961;
case 0x6de965:c.instructions+=23;goto B6de965;
case 0x6de969:c.instructions+=22;goto B6de969;
case 0x6de96d:c.instructions+=21;goto B6de96d;
case 0x6de971:c.instructions+=20;goto B6de971;
case 0x6de974:c.instructions+=19;goto B6de974;
case 0x6de977:c.instructions+=18;goto B6de977;
case 0x6de97a:c.instructions+=17;goto B6de97a;
case 0x6de97d:c.instructions+=16;goto B6de97d;
case 0x6de980:c.instructions+=15;goto B6de980;
case 0x6de984:c.instructions+=14;goto B6de984;
case 0x6de988:c.instructions+=13;goto B6de988;
case 0x6de98b:c.instructions+=12;goto B6de98b;
case 0x6de98f:c.instructions+=11;goto B6de98f;
case 0x6de992:c.instructions+=10;goto B6de992;
case 0x6de996:c.instructions+=9;goto B6de996;
case 0x6de999:c.instructions+=8;goto B6de999;
case 0x6de99c:c.instructions+=7;goto B6de99c;
case 0x6de99f:c.instructions+=6;goto B6de99f;
case 0x6de9a0:c.instructions+=5;goto B6de9a0;
case 0x6de9a4:c.instructions+=4;goto B6de9a4;
case 0x6de9a5:c.instructions+=3;goto B6de9a5;
case 0x6de9a7:c.instructions+=2;goto B6de9a7;
case 0x6de9a8:c.instructions+=1;goto B6de9a8;
case 0x6de9b0:goto L6de9b0;
case 0x6de9b1:c.instructions+=82;goto B6de9b1;
case 0x6de9b3:c.instructions+=81;goto B6de9b3;
case 0x6de9b6:c.instructions+=80;goto B6de9b6;
case 0x6de9b9:c.instructions+=79;goto B6de9b9;
case 0x6de9bc:c.instructions+=78;goto B6de9bc;
case 0x6de9bf:c.instructions+=77;goto B6de9bf;
case 0x6de9c2:c.instructions+=76;goto B6de9c2;
case 0x6de9c4:c.instructions+=75;goto B6de9c4;
case 0x6de9c5:c.instructions+=74;goto B6de9c5;
case 0x6de9c8:c.instructions+=73;goto B6de9c8;
case 0x6de9cb:c.instructions+=72;goto B6de9cb;
case 0x6de9cd:c.instructions+=71;goto B6de9cd;
case 0x6de9d0:c.instructions+=70;goto B6de9d0;
case 0x6de9d5:c.instructions+=69;goto B6de9d5;
case 0x6de9d7:c.instructions+=68;goto B6de9d7;
case 0x6de9da:c.instructions+=67;goto B6de9da;
case 0x6de9dd:c.instructions+=66;goto B6de9dd;
case 0x6de9e0:c.instructions+=65;goto B6de9e0;
case 0x6de9e1:c.instructions+=64;goto B6de9e1;
case 0x6de9e4:c.instructions+=63;goto B6de9e4;
case 0x6de9ea:c.instructions+=62;goto B6de9ea;
case 0x6de9ed:c.instructions+=61;goto B6de9ed;
case 0x6de9f0:c.instructions+=60;goto B6de9f0;
case 0x6de9f3:c.instructions+=59;goto B6de9f3;
case 0x6de9f6:c.instructions+=58;goto B6de9f6;
case 0x6de9f9:c.instructions+=57;goto B6de9f9;
case 0x6de9fd:c.instructions+=56;goto B6de9fd;
case 0x6de9ff:c.instructions+=55;goto B6de9ff;
case 0x6dea02:c.instructions+=54;goto B6dea02;
case 0x6dea06:c.instructions+=53;goto B6dea06;
case 0x6dea0a:c.instructions+=52;goto B6dea0a;
case 0x6dea0e:c.instructions+=51;goto B6dea0e;
case 0x6dea12:c.instructions+=50;goto B6dea12;
case 0x6dea15:c.instructions+=49;goto B6dea15;
case 0x6dea1a:c.instructions+=48;goto B6dea1a;
case 0x6dea1e:c.instructions+=47;goto B6dea1e;
case 0x6dea22:c.instructions+=46;goto B6dea22;
case 0x6dea24:c.instructions+=45;goto B6dea24;
case 0x6dea28:c.instructions+=44;goto B6dea28;
case 0x6dea2c:c.instructions+=43;goto B6dea2c;
case 0x6dea30:c.instructions+=42;goto B6dea30;
case 0x6dea34:c.instructions+=41;goto B6dea34;
case 0x6dea38:c.instructions+=40;goto B6dea38;
case 0x6dea3c:c.instructions+=39;goto B6dea3c;
case 0x6dea40:c.instructions+=38;goto B6dea40;
case 0x6dea44:c.instructions+=37;goto B6dea44;
case 0x6dea48:c.instructions+=36;goto B6dea48;
case 0x6dea4c:c.instructions+=35;goto B6dea4c;
case 0x6dea50:c.instructions+=34;goto B6dea50;
case 0x6dea54:c.instructions+=33;goto B6dea54;
case 0x6dea58:c.instructions+=32;goto B6dea58;
case 0x6dea5c:c.instructions+=31;goto B6dea5c;
case 0x6dea60:c.instructions+=30;goto B6dea60;
case 0x6dea64:c.instructions+=29;goto B6dea64;
case 0x6dea68:c.instructions+=28;goto B6dea68;
case 0x6dea6c:c.instructions+=27;goto B6dea6c;
case 0x6dea70:c.instructions+=26;goto B6dea70;
case 0x6dea74:c.instructions+=25;goto B6dea74;
case 0x6dea78:c.instructions+=24;goto B6dea78;
case 0x6dea7c:c.instructions+=23;goto B6dea7c;
case 0x6dea80:c.instructions+=22;goto B6dea80;
case 0x6dea84:c.instructions+=21;goto B6dea84;
case 0x6dea88:c.instructions+=20;goto B6dea88;
case 0x6dea8c:c.instructions+=19;goto B6dea8c;
case 0x6dea90:c.instructions+=18;goto B6dea90;
case 0x6dea94:c.instructions+=17;goto B6dea94;
case 0x6dea98:c.instructions+=16;goto B6dea98;
case 0x6dea9c:c.instructions+=15;goto B6dea9c;
case 0x6deaa0:c.instructions+=14;goto B6deaa0;
case 0x6deaa4:c.instructions+=13;goto B6deaa4;
case 0x6deaa8:c.instructions+=12;goto B6deaa8;
case 0x6deaac:c.instructions+=11;goto B6deaac;
case 0x6deab0:c.instructions+=10;goto B6deab0;
case 0x6deab4:c.instructions+=9;goto B6deab4;
case 0x6deab8:c.instructions+=8;goto B6deab8;
case 0x6deabc:c.instructions+=7;goto B6deabc;
case 0x6deabd:c.instructions+=6;goto B6deabd;
case 0x6deac1:c.instructions+=5;goto B6deac1;
case 0x6deac3:c.instructions+=4;goto B6deac3;
case 0x6deac4:c.instructions+=3;goto B6deac4;
case 0x6deac6:c.instructions+=2;goto B6deac6;
case 0x6deac7:c.instructions+=1;goto B6deac7;
case 0x6dead0:goto L6dead0;
case 0x6dead1:c.instructions+=118;goto B6dead1;
case 0x6dead3:c.instructions+=117;goto B6dead3;
case 0x6dead6:c.instructions+=116;goto B6dead6;
case 0x6dead7:c.instructions+=115;goto B6dead7;
case 0x6deada:c.instructions+=114;goto B6deada;
case 0x6deadd:c.instructions+=113;goto B6deadd;
case 0x6deae0:c.instructions+=112;goto B6deae0;
case 0x6deae3:c.instructions+=111;goto B6deae3;
case 0x6deae4:c.instructions+=110;goto B6deae4;
case 0x6deae7:c.instructions+=109;goto B6deae7;
case 0x6deae8:c.instructions+=108;goto B6deae8;
case 0x6deaea:c.instructions+=107;goto B6deaea;
case 0x6deaed:c.instructions+=106;goto B6deaed;
case 0x6deaf0:c.instructions+=105;goto B6deaf0;
case 0x6deaf3:c.instructions+=104;goto B6deaf3;
case 0x6deaf6:c.instructions+=103;goto B6deaf6;
case 0x6deaf9:c.instructions+=102;goto B6deaf9;
case 0x6deafb:c.instructions+=101;goto B6deafb;
case 0x6deafe:c.instructions+=100;goto B6deafe;
case 0x6deb02:c.instructions+=99;goto B6deb02;
case 0x6deb05:c.instructions+=98;goto B6deb05;
case 0x6deb0a:c.instructions+=97;goto B6deb0a;
case 0x6deb0c:c.instructions+=96;goto B6deb0c;
case 0x6deb12:c.instructions+=95;goto B6deb12;
case 0x6deb15:c.instructions+=94;goto B6deb15;
case 0x6deb18:c.instructions+=93;goto B6deb18;
case 0x6deb1b:c.instructions+=92;goto B6deb1b;
case 0x6deb20:c.instructions+=91;goto B6deb20;
case 0x6deb26:c.instructions+=90;goto B6deb26;
case 0x6deb27:c.instructions+=89;goto B6deb27;
case 0x6deb2a:c.instructions+=88;goto B6deb2a;
case 0x6deb2d:c.instructions+=87;goto B6deb2d;
case 0x6deb31:c.instructions+=86;goto B6deb31;
case 0x6deb33:c.instructions+=85;goto B6deb33;
case 0x6deb36:c.instructions+=84;goto B6deb36;
case 0x6deb3a:c.instructions+=83;goto B6deb3a;
case 0x6deb3c:c.instructions+=82;goto B6deb3c;
case 0x6deb3f:c.instructions+=81;goto B6deb3f;
case 0x6deb41:c.instructions+=80;goto B6deb41;
case 0x6deb44:c.instructions+=79;goto B6deb44;
case 0x6deb47:c.instructions+=78;goto B6deb47;
case 0x6deb4a:c.instructions+=77;goto B6deb4a;
case 0x6deb4d:c.instructions+=76;goto B6deb4d;
case 0x6deb51:c.instructions+=75;goto B6deb51;
case 0x6deb55:c.instructions+=74;goto B6deb55;
case 0x6deb59:c.instructions+=73;goto B6deb59;
case 0x6deb5d:c.instructions+=72;goto B6deb5d;
case 0x6deb61:c.instructions+=71;goto B6deb61;
case 0x6deb64:c.instructions+=70;goto B6deb64;
case 0x6deb68:c.instructions+=69;goto B6deb68;
case 0x6deb6c:c.instructions+=68;goto B6deb6c;
case 0x6deb70:c.instructions+=67;goto B6deb70;
case 0x6deb74:c.instructions+=66;goto B6deb74;
case 0x6deb78:c.instructions+=65;goto B6deb78;
case 0x6deb7c:c.instructions+=64;goto B6deb7c;
case 0x6deb80:c.instructions+=63;goto B6deb80;
case 0x6deb84:c.instructions+=62;goto B6deb84;
case 0x6deb88:c.instructions+=61;goto B6deb88;
case 0x6deb8c:c.instructions+=60;goto B6deb8c;
case 0x6deb90:c.instructions+=59;goto B6deb90;
case 0x6deb94:c.instructions+=58;goto B6deb94;
case 0x6deb98:c.instructions+=57;goto B6deb98;
case 0x6deb9c:c.instructions+=56;goto B6deb9c;
case 0x6deba0:c.instructions+=55;goto B6deba0;
case 0x6deba4:c.instructions+=54;goto B6deba4;
case 0x6deba8:c.instructions+=53;goto B6deba8;
case 0x6debac:c.instructions+=52;goto B6debac;
case 0x6debb0:c.instructions+=51;goto B6debb0;
case 0x6debb4:c.instructions+=50;goto B6debb4;
case 0x6debb8:c.instructions+=49;goto B6debb8;
case 0x6debbc:c.instructions+=48;goto B6debbc;
case 0x6debc0:c.instructions+=47;goto B6debc0;
case 0x6debc4:c.instructions+=46;goto B6debc4;
case 0x6debc8:c.instructions+=45;goto B6debc8;
case 0x6debcc:c.instructions+=44;goto B6debcc;
case 0x6debd0:c.instructions+=43;goto B6debd0;
case 0x6debd4:c.instructions+=42;goto B6debd4;
case 0x6debd8:c.instructions+=41;goto B6debd8;
case 0x6debdc:c.instructions+=40;goto B6debdc;
case 0x6debe0:c.instructions+=39;goto B6debe0;
case 0x6debe4:c.instructions+=38;goto B6debe4;
case 0x6debe8:c.instructions+=37;goto B6debe8;
case 0x6debec:c.instructions+=36;goto B6debec;
case 0x6debf0:c.instructions+=35;goto B6debf0;
case 0x6debf4:c.instructions+=34;goto B6debf4;
case 0x6debf8:c.instructions+=33;goto B6debf8;
case 0x6debfc:c.instructions+=32;goto B6debfc;
case 0x6dec00:c.instructions+=31;goto B6dec00;
case 0x6dec04:c.instructions+=30;goto B6dec04;
case 0x6dec08:c.instructions+=29;goto B6dec08;
case 0x6dec0c:c.instructions+=28;goto B6dec0c;
case 0x6dec10:c.instructions+=27;goto B6dec10;
case 0x6dec14:c.instructions+=26;goto B6dec14;
case 0x6dec18:c.instructions+=25;goto B6dec18;
case 0x6dec1c:c.instructions+=24;goto B6dec1c;
case 0x6dec20:c.instructions+=23;goto B6dec20;
case 0x6dec24:c.instructions+=22;goto B6dec24;
case 0x6dec28:c.instructions+=21;goto B6dec28;
case 0x6dec2c:c.instructions+=20;goto B6dec2c;
case 0x6dec30:c.instructions+=19;goto B6dec30;
case 0x6dec34:c.instructions+=18;goto B6dec34;
case 0x6dec38:c.instructions+=17;goto B6dec38;
case 0x6dec3c:c.instructions+=16;goto B6dec3c;
case 0x6dec40:c.instructions+=15;goto B6dec40;
case 0x6dec44:c.instructions+=14;goto B6dec44;
case 0x6dec48:c.instructions+=13;goto B6dec48;
case 0x6dec4c:c.instructions+=12;goto B6dec4c;
case 0x6dec50:c.instructions+=11;goto B6dec50;
case 0x6dec54:c.instructions+=10;goto B6dec54;
case 0x6dec58:c.instructions+=9;goto B6dec58;
case 0x6dec5c:c.instructions+=8;goto B6dec5c;
case 0x6dec5d:c.instructions+=7;goto B6dec5d;
case 0x6dec61:c.instructions+=6;goto B6dec61;
case 0x6dec62:c.instructions+=5;goto B6dec62;
case 0x6dec64:c.instructions+=4;goto B6dec64;
case 0x6dec65:c.instructions+=3;goto B6dec65;
case 0x6dec67:c.instructions+=2;goto B6dec67;
case 0x6dec68:c.instructions+=1;goto B6dec68;
case 0x6dec70:goto L6dec70;
case 0x6dec74:c.instructions+=129;goto B6dec74;
case 0x6dec78:c.instructions+=128;goto B6dec78;
case 0x6dec7b:c.instructions+=127;goto B6dec7b;
case 0x6dec7e:c.instructions+=126;goto B6dec7e;
case 0x6dec82:c.instructions+=125;goto B6dec82;
case 0x6dec86:c.instructions+=124;goto B6dec86;
case 0x6dec88:c.instructions+=123;goto B6dec88;
case 0x6dec8a:c.instructions+=122;goto B6dec8a;
case 0x6dec8c:c.instructions+=121;goto B6dec8c;
case 0x6dec91:c.instructions+=120;goto B6dec91;
case 0x6dec94:c.instructions+=119;goto B6dec94;
case 0x6dec95:c.instructions+=118;goto B6dec95;
case 0x6dec99:c.instructions+=117;goto B6dec99;
case 0x6dec9c:c.instructions+=116;goto B6dec9c;
case 0x6dec9f:c.instructions+=115;goto B6dec9f;
case 0x6deca3:c.instructions+=114;goto B6deca3;
case 0x6deca9:c.instructions+=113;goto B6deca9;
case 0x6decab:c.instructions+=112;goto B6decab;
case 0x6decae:c.instructions+=111;goto B6decae;
case 0x6decb0:c.instructions+=110;goto B6decb0;
case 0x6decb2:c.instructions+=109;goto B6decb2;
case 0x6decb4:c.instructions+=108;goto B6decb4;
case 0x6decb6:c.instructions+=107;goto B6decb6;
case 0x6decb8:c.instructions+=106;goto B6decb8;
case 0x6decba:c.instructions+=105;goto B6decba;
case 0x6decbd:c.instructions+=104;goto B6decbd;
case 0x6decc0:c.instructions+=103;goto B6decc0;
case 0x6decc2:c.instructions+=102;goto B6decc2;
case 0x6decc5:c.instructions+=101;goto B6decc5;
case 0x6decc8:c.instructions+=100;goto B6decc8;
case 0x6deccb:c.instructions+=99;goto B6deccb;
case 0x6deccd:c.instructions+=98;goto B6deccd;
case 0x6decd0:c.instructions+=97;goto B6decd0;
case 0x6decd3:c.instructions+=96;goto B6decd3;
case 0x6decd5:c.instructions+=95;goto B6decd5;
case 0x6decd8:c.instructions+=94;goto B6decd8;
case 0x6decdb:c.instructions+=93;goto B6decdb;
case 0x6decde:c.instructions+=92;goto B6decde;
case 0x6dece0:c.instructions+=91;goto B6dece0;
case 0x6dece3:c.instructions+=90;goto B6dece3;
case 0x6dece6:c.instructions+=89;goto B6dece6;
case 0x6dece8:c.instructions+=88;goto B6dece8;
case 0x6deceb:c.instructions+=87;goto B6deceb;
case 0x6decee:c.instructions+=86;goto B6decee;
case 0x6decf1:c.instructions+=85;goto B6decf1;
case 0x6decf3:c.instructions+=84;goto B6decf3;
case 0x6decf6:c.instructions+=83;goto B6decf6;
case 0x6decf9:c.instructions+=82;goto B6decf9;
case 0x6decfb:c.instructions+=81;goto B6decfb;
case 0x6decfe:c.instructions+=80;goto B6decfe;
case 0x6ded01:c.instructions+=79;goto B6ded01;
case 0x6ded04:c.instructions+=78;goto B6ded04;
case 0x6ded06:c.instructions+=77;goto B6ded06;
case 0x6ded09:c.instructions+=76;goto B6ded09;
case 0x6ded0c:c.instructions+=75;goto B6ded0c;
case 0x6ded0e:c.instructions+=74;goto B6ded0e;
case 0x6ded11:c.instructions+=73;goto B6ded11;
case 0x6ded14:c.instructions+=72;goto B6ded14;
case 0x6ded17:c.instructions+=71;goto B6ded17;
case 0x6ded19:c.instructions+=70;goto B6ded19;
case 0x6ded1c:c.instructions+=69;goto B6ded1c;
case 0x6ded1f:c.instructions+=68;goto B6ded1f;
case 0x6ded21:c.instructions+=67;goto B6ded21;
case 0x6ded24:c.instructions+=66;goto B6ded24;
case 0x6ded27:c.instructions+=65;goto B6ded27;
case 0x6ded2a:c.instructions+=64;goto B6ded2a;
case 0x6ded2c:c.instructions+=63;goto B6ded2c;
case 0x6ded2f:c.instructions+=62;goto B6ded2f;
case 0x6ded32:c.instructions+=61;goto B6ded32;
case 0x6ded34:c.instructions+=60;goto B6ded34;
case 0x6ded37:c.instructions+=59;goto B6ded37;
case 0x6ded3a:c.instructions+=58;goto B6ded3a;
case 0x6ded3d:c.instructions+=57;goto B6ded3d;
case 0x6ded3f:c.instructions+=56;goto B6ded3f;
case 0x6ded42:c.instructions+=55;goto B6ded42;
case 0x6ded45:c.instructions+=54;goto B6ded45;
case 0x6ded47:c.instructions+=53;goto B6ded47;
case 0x6ded4a:c.instructions+=52;goto B6ded4a;
case 0x6ded4d:c.instructions+=51;goto B6ded4d;
case 0x6ded50:c.instructions+=50;goto B6ded50;
case 0x6ded52:c.instructions+=49;goto B6ded52;
case 0x6ded55:c.instructions+=48;goto B6ded55;
case 0x6ded56:c.instructions+=47;goto B6ded56;
case 0x6ded59:c.instructions+=46;goto B6ded59;
case 0x6ded5b:c.instructions+=45;goto B6ded5b;
case 0x6ded5e:c.instructions+=44;goto B6ded5e;
case 0x6ded61:c.instructions+=43;goto B6ded61;
case 0x6ded64:c.instructions+=42;goto B6ded64;
case 0x6ded66:c.instructions+=41;goto B6ded66;
case 0x6ded69:c.instructions+=40;goto B6ded69;
case 0x6ded6c:c.instructions+=39;goto B6ded6c;
case 0x6ded6e:c.instructions+=38;goto B6ded6e;
case 0x6ded71:c.instructions+=37;goto B6ded71;
case 0x6ded74:c.instructions+=36;goto B6ded74;
case 0x6ded77:c.instructions+=35;goto B6ded77;
case 0x6ded79:c.instructions+=34;goto B6ded79;
case 0x6ded7c:c.instructions+=33;goto B6ded7c;
case 0x6ded7f:c.instructions+=32;goto B6ded7f;
case 0x6ded81:c.instructions+=31;goto B6ded81;
case 0x6ded84:c.instructions+=30;goto B6ded84;
case 0x6ded87:c.instructions+=29;goto B6ded87;
case 0x6ded8a:c.instructions+=28;goto B6ded8a;
case 0x6ded8c:c.instructions+=27;goto B6ded8c;
case 0x6ded8f:c.instructions+=26;goto B6ded8f;
case 0x6ded92:c.instructions+=25;goto B6ded92;
case 0x6ded94:c.instructions+=24;goto B6ded94;
case 0x6ded97:c.instructions+=23;goto B6ded97;
case 0x6ded9a:c.instructions+=22;goto B6ded9a;
case 0x6ded9d:c.instructions+=21;goto B6ded9d;
case 0x6ded9f:c.instructions+=20;goto B6ded9f;
case 0x6deda2:c.instructions+=19;goto B6deda2;
case 0x6deda5:c.instructions+=18;goto B6deda5;
case 0x6deda7:c.instructions+=17;goto B6deda7;
case 0x6dedaa:c.instructions+=16;goto B6dedaa;
case 0x6dedad:c.instructions+=15;goto B6dedad;
case 0x6dedb0:c.instructions+=14;goto B6dedb0;
case 0x6dedb2:c.instructions+=13;goto B6dedb2;
case 0x6dedb5:c.instructions+=12;goto B6dedb5;
case 0x6dedb8:c.instructions+=11;goto B6dedb8;
case 0x6dedba:c.instructions+=10;goto B6dedba;
case 0x6dedbd:c.instructions+=9;goto B6dedbd;
case 0x6dedc0:c.instructions+=8;goto B6dedc0;
case 0x6dedc3:c.instructions+=7;goto B6dedc3;
case 0x6dedc5:c.instructions+=6;goto B6dedc5;
case 0x6dedc8:c.instructions+=5;goto B6dedc8;
case 0x6dedcb:c.instructions+=4;goto B6dedcb;
case 0x6dedce:c.instructions+=3;goto B6dedce;
case 0x6dedd1:c.instructions+=2;goto B6dedd1;
case 0x6dedd4:c.instructions+=1;goto B6dedd4;
case 0x6dede0:goto L6dede0;
case 0x6dede4:c.instructions+=186;goto B6dede4;
case 0x6dede8:c.instructions+=185;goto B6dede8;
case 0x6dedeb:c.instructions+=184;goto B6dedeb;
case 0x6dedee:c.instructions+=183;goto B6dedee;
case 0x6dedf2:c.instructions+=182;goto B6dedf2;
case 0x6dedf6:c.instructions+=181;goto B6dedf6;
case 0x6dedf8:c.instructions+=180;goto B6dedf8;
case 0x6dedfa:c.instructions+=179;goto B6dedfa;
case 0x6dedfc:c.instructions+=178;goto B6dedfc;
case 0x6dedfd:c.instructions+=177;goto B6dedfd;
case 0x6dee00:c.instructions+=176;goto B6dee00;
case 0x6dee03:c.instructions+=175;goto B6dee03;
case 0x6dee09:c.instructions+=174;goto B6dee09;
case 0x6dee0a:c.instructions+=173;goto B6dee0a;
case 0x6dee0e:c.instructions+=172;goto B6dee0e;
case 0x6dee11:c.instructions+=171;goto B6dee11;
case 0x6dee14:c.instructions+=170;goto B6dee14;
case 0x6dee16:c.instructions+=169;goto B6dee16;
case 0x6dee1a:c.instructions+=168;goto B6dee1a;
case 0x6dee1e:c.instructions+=167;goto B6dee1e;
case 0x6dee20:c.instructions+=166;goto B6dee20;
case 0x6dee26:c.instructions+=165;goto B6dee26;
case 0x6dee29:c.instructions+=164;goto B6dee29;
case 0x6dee2b:c.instructions+=163;goto B6dee2b;
case 0x6dee2d:c.instructions+=162;goto B6dee2d;
case 0x6dee2f:c.instructions+=161;goto B6dee2f;
case 0x6dee35:c.instructions+=160;goto B6dee35;
case 0x6dee38:c.instructions+=159;goto B6dee38;
case 0x6dee3a:c.instructions+=158;goto B6dee3a;
case 0x6dee3c:c.instructions+=157;goto B6dee3c;
case 0x6dee3e:c.instructions+=156;goto B6dee3e;
case 0x6dee42:c.instructions+=155;goto B6dee42;
case 0x6dee44:c.instructions+=154;goto B6dee44;
case 0x6dee46:c.instructions+=153;goto B6dee46;
case 0x6dee48:c.instructions+=152;goto B6dee48;
case 0x6dee4a:c.instructions+=151;goto B6dee4a;
case 0x6dee4d:c.instructions+=150;goto B6dee4d;
case 0x6dee50:c.instructions+=149;goto B6dee50;
case 0x6dee52:c.instructions+=148;goto B6dee52;
case 0x6dee55:c.instructions+=147;goto B6dee55;
case 0x6dee58:c.instructions+=146;goto B6dee58;
case 0x6dee5b:c.instructions+=145;goto B6dee5b;
case 0x6dee5f:c.instructions+=144;goto B6dee5f;
case 0x6dee62:c.instructions+=143;goto B6dee62;
case 0x6dee65:c.instructions+=142;goto B6dee65;
case 0x6dee68:c.instructions+=141;goto B6dee68;
case 0x6dee6a:c.instructions+=140;goto B6dee6a;
case 0x6dee6d:c.instructions+=139;goto B6dee6d;
case 0x6dee70:c.instructions+=138;goto B6dee70;
case 0x6dee72:c.instructions+=137;goto B6dee72;
case 0x6dee75:c.instructions+=136;goto B6dee75;
case 0x6dee78:c.instructions+=135;goto B6dee78;
case 0x6dee7b:c.instructions+=134;goto B6dee7b;
case 0x6dee7f:c.instructions+=133;goto B6dee7f;
case 0x6dee82:c.instructions+=132;goto B6dee82;
case 0x6dee85:c.instructions+=131;goto B6dee85;
case 0x6dee88:c.instructions+=130;goto B6dee88;
case 0x6dee8a:c.instructions+=129;goto B6dee8a;
case 0x6dee8d:c.instructions+=128;goto B6dee8d;
case 0x6dee90:c.instructions+=127;goto B6dee90;
case 0x6dee92:c.instructions+=126;goto B6dee92;
case 0x6dee95:c.instructions+=125;goto B6dee95;
case 0x6dee98:c.instructions+=124;goto B6dee98;
case 0x6dee9b:c.instructions+=123;goto B6dee9b;
case 0x6dee9f:c.instructions+=122;goto B6dee9f;
case 0x6deea2:c.instructions+=121;goto B6deea2;
case 0x6deea5:c.instructions+=120;goto B6deea5;
case 0x6deea8:c.instructions+=119;goto B6deea8;
case 0x6deeaa:c.instructions+=118;goto B6deeaa;
case 0x6deead:c.instructions+=117;goto B6deead;
case 0x6deeb0:c.instructions+=116;goto B6deeb0;
case 0x6deeb2:c.instructions+=115;goto B6deeb2;
case 0x6deeb5:c.instructions+=114;goto B6deeb5;
case 0x6deeb8:c.instructions+=113;goto B6deeb8;
case 0x6deebb:c.instructions+=112;goto B6deebb;
case 0x6deebf:c.instructions+=111;goto B6deebf;
case 0x6deec2:c.instructions+=110;goto B6deec2;
case 0x6deec5:c.instructions+=109;goto B6deec5;
case 0x6deec8:c.instructions+=108;goto B6deec8;
case 0x6deeca:c.instructions+=107;goto B6deeca;
case 0x6deecd:c.instructions+=106;goto B6deecd;
case 0x6deed0:c.instructions+=105;goto B6deed0;
case 0x6deed2:c.instructions+=104;goto B6deed2;
case 0x6deed5:c.instructions+=103;goto B6deed5;
case 0x6deed8:c.instructions+=102;goto B6deed8;
case 0x6deedb:c.instructions+=101;goto B6deedb;
case 0x6deedf:c.instructions+=100;goto B6deedf;
case 0x6deee2:c.instructions+=99;goto B6deee2;
case 0x6deee5:c.instructions+=98;goto B6deee5;
case 0x6deee8:c.instructions+=97;goto B6deee8;
case 0x6deeea:c.instructions+=96;goto B6deeea;
case 0x6deeed:c.instructions+=95;goto B6deeed;
case 0x6deef0:c.instructions+=94;goto B6deef0;
case 0x6deef2:c.instructions+=93;goto B6deef2;
case 0x6deef5:c.instructions+=92;goto B6deef5;
case 0x6deef8:c.instructions+=91;goto B6deef8;
case 0x6deefb:c.instructions+=90;goto B6deefb;
case 0x6deeff:c.instructions+=89;goto B6deeff;
case 0x6def02:c.instructions+=88;goto B6def02;
case 0x6def05:c.instructions+=87;goto B6def05;
case 0x6def08:c.instructions+=86;goto B6def08;
case 0x6def0a:c.instructions+=85;goto B6def0a;
case 0x6def0d:c.instructions+=84;goto B6def0d;
case 0x6def10:c.instructions+=83;goto B6def10;
case 0x6def12:c.instructions+=82;goto B6def12;
case 0x6def15:c.instructions+=81;goto B6def15;
case 0x6def18:c.instructions+=80;goto B6def18;
case 0x6def1b:c.instructions+=79;goto B6def1b;
case 0x6def1f:c.instructions+=78;goto B6def1f;
case 0x6def22:c.instructions+=77;goto B6def22;
case 0x6def25:c.instructions+=76;goto B6def25;
case 0x6def28:c.instructions+=75;goto B6def28;
case 0x6def2a:c.instructions+=74;goto B6def2a;
case 0x6def2d:c.instructions+=73;goto B6def2d;
case 0x6def30:c.instructions+=72;goto B6def30;
case 0x6def32:c.instructions+=71;goto B6def32;
case 0x6def35:c.instructions+=70;goto B6def35;
case 0x6def38:c.instructions+=69;goto B6def38;
case 0x6def3b:c.instructions+=68;goto B6def3b;
case 0x6def3f:c.instructions+=67;goto B6def3f;
case 0x6def42:c.instructions+=66;goto B6def42;
case 0x6def45:c.instructions+=65;goto B6def45;
case 0x6def48:c.instructions+=64;goto B6def48;
case 0x6def4a:c.instructions+=63;goto B6def4a;
case 0x6def4d:c.instructions+=62;goto B6def4d;
case 0x6def50:c.instructions+=61;goto B6def50;
case 0x6def52:c.instructions+=60;goto B6def52;
case 0x6def55:c.instructions+=59;goto B6def55;
case 0x6def58:c.instructions+=58;goto B6def58;
case 0x6def5b:c.instructions+=57;goto B6def5b;
case 0x6def5f:c.instructions+=56;goto B6def5f;
case 0x6def62:c.instructions+=55;goto B6def62;
case 0x6def65:c.instructions+=54;goto B6def65;
case 0x6def68:c.instructions+=53;goto B6def68;
case 0x6def6a:c.instructions+=52;goto B6def6a;
case 0x6def6d:c.instructions+=51;goto B6def6d;
case 0x6def70:c.instructions+=50;goto B6def70;
case 0x6def72:c.instructions+=49;goto B6def72;
case 0x6def75:c.instructions+=48;goto B6def75;
case 0x6def78:c.instructions+=47;goto B6def78;
case 0x6def7b:c.instructions+=46;goto B6def7b;
case 0x6def7f:c.instructions+=45;goto B6def7f;
case 0x6def82:c.instructions+=44;goto B6def82;
case 0x6def85:c.instructions+=43;goto B6def85;
case 0x6def88:c.instructions+=42;goto B6def88;
case 0x6def8a:c.instructions+=41;goto B6def8a;
case 0x6def8d:c.instructions+=40;goto B6def8d;
case 0x6def90:c.instructions+=39;goto B6def90;
case 0x6def92:c.instructions+=38;goto B6def92;
case 0x6def95:c.instructions+=37;goto B6def95;
case 0x6def98:c.instructions+=36;goto B6def98;
case 0x6def9b:c.instructions+=35;goto B6def9b;
case 0x6def9f:c.instructions+=34;goto B6def9f;
case 0x6defa2:c.instructions+=33;goto B6defa2;
case 0x6defa5:c.instructions+=32;goto B6defa5;
case 0x6defa8:c.instructions+=31;goto B6defa8;
case 0x6defaa:c.instructions+=30;goto B6defaa;
case 0x6defad:c.instructions+=29;goto B6defad;
case 0x6defb0:c.instructions+=28;goto B6defb0;
case 0x6defb2:c.instructions+=27;goto B6defb2;
case 0x6defb5:c.instructions+=26;goto B6defb5;
case 0x6defb8:c.instructions+=25;goto B6defb8;
case 0x6defbb:c.instructions+=24;goto B6defbb;
case 0x6defbc:c.instructions+=23;goto B6defbc;
case 0x6defc0:c.instructions+=22;goto B6defc0;
case 0x6defc3:c.instructions+=21;goto B6defc3;
case 0x6defc6:c.instructions+=20;goto B6defc6;
case 0x6defc9:c.instructions+=19;goto B6defc9;
case 0x6defcb:c.instructions+=18;goto B6defcb;
case 0x6defce:c.instructions+=17;goto B6defce;
case 0x6defd1:c.instructions+=16;goto B6defd1;
case 0x6defd3:c.instructions+=15;goto B6defd3;
case 0x6defd6:c.instructions+=14;goto B6defd6;
case 0x6defd9:c.instructions+=13;goto B6defd9;
case 0x6defdc:c.instructions+=12;goto B6defdc;
case 0x6defe0:c.instructions+=11;goto B6defe0;
case 0x6defe3:c.instructions+=10;goto B6defe3;
case 0x6defe6:c.instructions+=9;goto B6defe6;
case 0x6defe9:c.instructions+=8;goto B6defe9;
case 0x6defeb:c.instructions+=7;goto B6defeb;
case 0x6defee:c.instructions+=6;goto B6defee;
case 0x6deff1:c.instructions+=5;goto B6deff1;
case 0x6deff3:c.instructions+=4;goto B6deff3;
case 0x6deff6:c.instructions+=3;goto B6deff6;
case 0x6deff9:c.instructions+=2;goto B6deff9;
case 0x6deffc:c.instructions+=1;goto B6deffc;
default:missing_instruction(c.pc);}
B6de003:L6de003:{c.instructions+=12;NFSU2_TR(0x6de003);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6de007:{NFSU2_TR(0x6de007);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de00b:{NFSU2_TR(0x6de00b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de00c:{NFSU2_TR(0x6de00c);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de012:{NFSU2_TR(0x6de012);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6de016:{NFSU2_TR(0x6de016);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de01a:{NFSU2_TR(0x6de01a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de01b:{NFSU2_TR(0x6de01b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de01f:{NFSU2_TR(0x6de01f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de023:{NFSU2_TR(0x6de023);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de027:{NFSU2_TR(0x6de027);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de02b:{NFSU2_TR(0x6de02b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de030ull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6de030:L6de030:{c.instructions+=11;NFSU2_TR(0x6de030);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de034:{NFSU2_TR(0x6de034);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6de038:{NFSU2_TR(0x6de038);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de03c:{NFSU2_TR(0x6de03c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de03d:{NFSU2_TR(0x6de03d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6de041:{NFSU2_TR(0x6de041);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de042:{NFSU2_TR(0x6de042);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de046:{NFSU2_TR(0x6de046);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de04c:{NFSU2_TR(0x6de04c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de050:{NFSU2_TR(0x6de050);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de054:{NFSU2_TR(0x6de054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de059ull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6de059:L6de059:{c.instructions+=2;NFSU2_TR(0x6de059);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de05f:{NFSU2_TR(0x6de05f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de064ull));
TAIL_STATIC(0x6dbd20u,6db);
}
B6de064:L6de064:{c.instructions+=12;NFSU2_TR(0x6de064);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de068:{NFSU2_TR(0x6de068);
{u32 ea_=u32(r4(R+8)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de06e:{NFSU2_TR(0x6de06e);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de072:{NFSU2_TR(0x6de072);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de074:{NFSU2_TR(0x6de074);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de076:{NFSU2_TR(0x6de076);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de07a:{NFSU2_TR(0x6de07a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de07e:{NFSU2_TR(0x6de07e);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de082:{NFSU2_TR(0x6de082);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6de085:{NFSU2_TR(0x6de085);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de08b:{NFSU2_TR(0x6de08b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de08f:{NFSU2_TR(0x6de08f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de241;}}
}
B6de095:L6de095:{c.instructions+=3;NFSU2_TR(0x6de095);
__builtin_memmove((R+0),gp(0x8a85d5),1);
}
B6de09a:{NFSU2_TR(0x6de09a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6de09c:{NFSU2_TR(0x6de09c);
if(r1(R+518)){{goto L6de187;}}
}
B6de0a2:L6de0a2:{c.instructions+=4;NFSU2_TR(0x6de0a2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8a85f0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6de0a8:{NFSU2_TR(0x6de0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de0ae:{NFSU2_TR(0x6de0ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de0b2:{NFSU2_TR(0x6de0b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de0c8;}}
}
B6de0b4:L6de0b4:{c.instructions+=5;NFSU2_TR(0x6de0b4);
{u32 ea_=u32(u32(8130508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de0ba:{NFSU2_TR(0x6de0ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de0be:{NFSU2_TR(0x6de0be);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6de0c0:{NFSU2_TR(0x6de0c0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de0c4:{NFSU2_TR(0x6de0c4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de0c8:L6de0c8:{c.instructions+=3;NFSU2_TR(0x6de0c8);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de0ce:{NFSU2_TR(0x6de0ce);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de0d0:{NFSU2_TR(0x6de0d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de0d5ull));
TAIL_STATIC(0x6dbcf0u,6db);
}
B6de0d5:L6de0d5:{c.instructions+=11;NFSU2_TR(0x6de0d5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de0d9:{NFSU2_TR(0x6de0d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de0dd:{NFSU2_TR(0x6de0dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de0e1:{NFSU2_TR(0x6de0e1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10cull))));
}
B6de0e7:{NFSU2_TR(0x6de0e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de0eb:{NFSU2_TR(0x6de0eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de0ec:{NFSU2_TR(0x6de0ec);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de0f2:{NFSU2_TR(0x6de0f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6de0f6:{NFSU2_TR(0x6de0f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de0f7:{NFSU2_TR(0x6de0f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de0fb:{NFSU2_TR(0x6de0fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de100ull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6de100:L6de100:{c.instructions+=11;NFSU2_TR(0x6de100);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de104:{NFSU2_TR(0x6de104);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de108:{NFSU2_TR(0x6de108);
{u32 ea_=u32(u32(7894452u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de10e:{NFSU2_TR(0x6de10e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
}
B6de113:{NFSU2_TR(0x6de113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de114:{NFSU2_TR(0x6de114);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6de118:{NFSU2_TR(0x6de118);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6de11c:{NFSU2_TR(0x6de11c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de11d:{NFSU2_TR(0x6de11d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de121:{NFSU2_TR(0x6de121);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de127:{NFSU2_TR(0x6de127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de12cull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6de12c:L6de12c:{c.instructions+=13;NFSU2_TR(0x6de12c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de130:{NFSU2_TR(0x6de130);
{u32 ea_=u32(u32(8016256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6de136:{NFSU2_TR(0x6de136);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de13a:{NFSU2_TR(0x6de13a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de13e:{NFSU2_TR(0x6de13e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
}
B6de143:{NFSU2_TR(0x6de143);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6de147:{NFSU2_TR(0x6de147);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de148:{NFSU2_TR(0x6de148);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6de14c:{NFSU2_TR(0x6de14c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de14d:{NFSU2_TR(0x6de14d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de151:{NFSU2_TR(0x6de151);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de157:{NFSU2_TR(0x6de157);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de15b:{NFSU2_TR(0x6de15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de160ull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6de160:L6de160:{c.instructions+=9;NFSU2_TR(0x6de160);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de164:{NFSU2_TR(0x6de164);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de168:{NFSU2_TR(0x6de168);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
}
B6de16d:{NFSU2_TR(0x6de16d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de16e:{NFSU2_TR(0x6de16e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6de172:{NFSU2_TR(0x6de172);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de173:{NFSU2_TR(0x6de173);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de179:{NFSU2_TR(0x6de179);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de17d:{NFSU2_TR(0x6de17d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de182ull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6de182:L6de182:{c.instructions+=1;NFSU2_TR(0x6de182);
{goto L6de236;}
}
B6de187:L6de187:{c.instructions+=3;NFSU2_TR(0x6de187);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8a85f0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6de18d:{NFSU2_TR(0x6de18d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6de195:{NFSU2_TR(0x6de195);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de1ad;}}
}
B6de197:L6de197:{c.instructions+=5;NFSU2_TR(0x6de197);
{u32 ea_=u32(u32(8130508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de19d:{NFSU2_TR(0x6de19d);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de1a1:{NFSU2_TR(0x6de1a1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6de1a3:{NFSU2_TR(0x6de1a3);
{u32 ea_=u32(u32(8016256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6de1a9:{NFSU2_TR(0x6de1a9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de1ad:L6de1ad:{c.instructions+=3;NFSU2_TR(0x6de1ad);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de1b3:{NFSU2_TR(0x6de1b3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de1b5:{NFSU2_TR(0x6de1b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de1baull));
TAIL_STATIC(0x6dbcf0u,6db);
}
B6de1ba:L6de1ba:{c.instructions+=1;NFSU2_TR(0x6de1ba);
__builtin_memmove((R+24),gp(0x8a85b8),4);
}
B6de1c0:L6de1c0:{c.instructions+=11;NFSU2_TR(0x6de1c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de1c4:{NFSU2_TR(0x6de1c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de1c8:{NFSU2_TR(0x6de1c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de1cc:{NFSU2_TR(0x6de1cc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10cull))));
}
B6de1d2:{NFSU2_TR(0x6de1d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de1d6:{NFSU2_TR(0x6de1d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de1d7:{NFSU2_TR(0x6de1d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6de1db:{NFSU2_TR(0x6de1db);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de1df:{NFSU2_TR(0x6de1df);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de1e5:{NFSU2_TR(0x6de1e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de1e6:{NFSU2_TR(0x6de1e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de1ebull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6de1eb:L6de1eb:{c.instructions+=11;NFSU2_TR(0x6de1eb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de1ef:{NFSU2_TR(0x6de1ef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de1f3:{NFSU2_TR(0x6de1f3);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de1fa:{NFSU2_TR(0x6de1fa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
}
B6de1ff:{NFSU2_TR(0x6de1ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de200:{NFSU2_TR(0x6de200);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6de204:{NFSU2_TR(0x6de204);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6de208:{NFSU2_TR(0x6de208);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de209:{NFSU2_TR(0x6de209);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de20f:{NFSU2_TR(0x6de20f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de213:{NFSU2_TR(0x6de213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de218ull));
TAIL_STATIC(0x6dbd50u,6db);
}
B6de218:L6de218:{c.instructions+=6;NFSU2_TR(0x6de218);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de21c:{NFSU2_TR(0x6de21c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6de21d:{NFSU2_TR(0x6de21d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B6de220:{NFSU2_TR(0x6de220);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de226:{NFSU2_TR(0x6de226);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de22a:{NFSU2_TR(0x6de22a);
if(r1(R+512)){{goto L6de22e;}}
}
B6de22c:L6de22c:{c.instructions+=1;NFSU2_TR(0x6de22c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6de22e:L6de22e:{c.instructions+=2;NFSU2_TR(0x6de22e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a85b8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6de234:{NFSU2_TR(0x6de234);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de1c0u);}goto L6de1c0;}}
}
B6de236:L6de236:{c.instructions+=2;NFSU2_TR(0x6de236);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de23c:{NFSU2_TR(0x6de23c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de241ull));
TAIL_STATIC(0x6dbd20u,6db);
}
B6de241:L6de241:{c.instructions+=2;NFSU2_TR(0x6de241);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de247:{NFSU2_TR(0x6de247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de24cull));
TAIL_STATIC(0x6dbbf0u,6db);
}
B6de24c:L6de24c:{c.instructions+=3;NFSU2_TR(0x6de24c);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6de251:{NFSU2_TR(0x6de251);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6de252:{NFSU2_TR(0x6de252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de391;}}
}
B6de258:L6de258:{c.instructions+=3;NFSU2_TR(0x6de258);
__builtin_memmove((R+4),gp(0x4022c0),4);
}
B6de25e:{NFSU2_TR(0x6de25e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de260:{NFSU2_TR(0x6de260);
if(r1(R+518)){{goto L6de391;}}
}
B6de266:L6de266:{c.instructions+=4;NFSU2_TR(0x6de266);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de26a:{NFSU2_TR(0x6de26a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8a85f0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de26f:{NFSU2_TR(0x6de26f);
{u32 ea_=u32(r4(R+0)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de275:{NFSU2_TR(0x6de275);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de285;}}
}
B6de277:L6de277:{c.instructions+=4;NFSU2_TR(0x6de277);
{u32 ea_=u32(u32(8130508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de27d:{NFSU2_TR(0x6de27d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de281:{NFSU2_TR(0x6de281);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6de283:{NFSU2_TR(0x6de283);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6de285:L6de285:{c.instructions+=13;NFSU2_TR(0x6de285);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6de28b:{NFSU2_TR(0x6de28b);
{u32 ea_=u32(u32(8130504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6de291:{NFSU2_TR(0x6de291);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de295:{NFSU2_TR(0x6de295);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de29b:{NFSU2_TR(0x6de29b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de29f:{NFSU2_TR(0x6de29f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de2a3:{NFSU2_TR(0x6de2a3);
{u32 ea_=u32(u32(7890136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6de2a9:{NFSU2_TR(0x6de2a9);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de2af:{NFSU2_TR(0x6de2af);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de2b3:{NFSU2_TR(0x6de2b3);
{u32 ea_=u32(u32(8130500u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6de2b9:{NFSU2_TR(0x6de2b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6de2bb:{NFSU2_TR(0x6de2bb);
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
B6de2be:{NFSU2_TR(0x6de2be);
if(r1(R+514)){{goto L6de2f6;}}
}
B6de2c0:L6de2c0:{c.instructions+=14;NFSU2_TR(0x6de2c0);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6de2c6:{NFSU2_TR(0x6de2c6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de2ca:{NFSU2_TR(0x6de2ca);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de2ce:{NFSU2_TR(0x6de2ce);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6de2d2:{NFSU2_TR(0x6de2d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de2d6:{NFSU2_TR(0x6de2d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de2da:{NFSU2_TR(0x6de2da);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de2de:{NFSU2_TR(0x6de2de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de2df:{NFSU2_TR(0x6de2df);
__builtin_memmove((R+0),gp(0x4022c0),4);
}
B6de2e4:{NFSU2_TR(0x6de2e4);
u8 U[4];
w4(U+0,u32(0x7c0fbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de2e9:{NFSU2_TR(0x6de2e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de2ea:{NFSU2_TR(0x6de2ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de2eb:{NFSU2_TR(0x6de2eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de2ec:{NFSU2_TR(0x6de2ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de2f1ull));
TAIL_STATIC(0x4022c0u,402);
}
B6de2f1:L6de2f1:{c.instructions+=2;NFSU2_TR(0x6de2f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6de2f4:{NFSU2_TR(0x6de2f4);
{goto L6de337;}
}
B6de2f6:L6de2f6:{c.instructions+=7;NFSU2_TR(0x6de2f6);
{u32 ea_=u32(u32(8130488u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6de2fc:{NFSU2_TR(0x6de2fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de300:{NFSU2_TR(0x6de300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6de303:{NFSU2_TR(0x6de303);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6de306:{NFSU2_TR(0x6de306);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6de308:{NFSU2_TR(0x6de308);
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
B6de30b:{NFSU2_TR(0x6de30b);
if(r1(R+514)){{goto L6de31a;}}
}
B6de30d:L6de30d:{c.instructions+=5;NFSU2_TR(0x6de30d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de311:{NFSU2_TR(0x6de311);
u8 U[4];
w4(U+0,u32(0x7c0fb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de316:{NFSU2_TR(0x6de316);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de317:{NFSU2_TR(0x6de317);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de318:{NFSU2_TR(0x6de318);
{goto L6de32e;}
}
B6de31a:L6de31a:{c.instructions+=6;NFSU2_TR(0x6de31a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de31e:{NFSU2_TR(0x6de31e);
u8 U[4];
w4(U+0,u32(0x7c0fa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de323:{NFSU2_TR(0x6de323);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de329:{NFSU2_TR(0x6de329);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de32a:{NFSU2_TR(0x6de32a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de32b:{NFSU2_TR(0x6de32b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de32e:L6de32e:{c.instructions+=2;NFSU2_TR(0x6de32e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de32f:{NFSU2_TR(0x6de32f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de334ull));
TAIL_STATIC(0x4022c0u,402);
}
B6de334:L6de334:{c.instructions+=1;NFSU2_TR(0x6de334);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6de337:L6de337:{c.instructions+=2;NFSU2_TR(0x6de337);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6de339:{NFSU2_TR(0x6de339);
if(r1(R+518)){{goto L6de391;}}
}
B6de33b:L6de33b:{c.instructions+=6;NFSU2_TR(0x6de33b);
{u32 ea_=u32(u32(9078216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de341:{NFSU2_TR(0x6de341);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6de347:{NFSU2_TR(0x6de347);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6de34b:{NFSU2_TR(0x6de34b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6de34d:{NFSU2_TR(0x6de34d);
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
B6de350:{NFSU2_TR(0x6de350);
if(r1(R+514)){{goto L6de364;}}
}
B6de352:L6de352:{c.instructions+=4;NFSU2_TR(0x6de352);
{u32 ea_=u32(u32(7894452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de358:{NFSU2_TR(0x6de358);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6de35c:{NFSU2_TR(0x6de35c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de360:{NFSU2_TR(0x6de360);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de364:L6de364:{c.instructions+=13;NFSU2_TR(0x6de364);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de368:{NFSU2_TR(0x6de368);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de36c:{NFSU2_TR(0x6de36c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6de36e:{NFSU2_TR(0x6de36e);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de374:{NFSU2_TR(0x6de374);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de378:{NFSU2_TR(0x6de378);
__builtin_memmove((R+0),gp(0x4022c0),4);
}
B6de37d:{NFSU2_TR(0x6de37d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de37e:{NFSU2_TR(0x6de37e);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de383:{NFSU2_TR(0x6de383);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de384:{NFSU2_TR(0x6de384);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de387:{NFSU2_TR(0x6de387);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de388:{NFSU2_TR(0x6de388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de389:{NFSU2_TR(0x6de389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de38eull));
TAIL_STATIC(0x4022c0u,402);
}
B6de38e:L6de38e:{c.instructions+=1;NFSU2_TR(0x6de38e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6de391:L6de391:{c.instructions+=3;NFSU2_TR(0x6de391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6de392:{NFSU2_TR(0x6de392);
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
B6de395:{NFSU2_TR(0x6de395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de3a0:L6de3a0:{c.instructions+=3;NFSU2_TR(0x6de3a0);
__builtin_memmove((R+0),gp(0x8a85cc),4);
}
B6de3a5:{NFSU2_TR(0x6de3a5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6de3a7:{NFSU2_TR(0x6de3a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de3b5;}}
}
B6de3a9:L6de3a9:{c.instructions+=3;NFSU2_TR(0x6de3a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de3af:{NFSU2_TR(0x6de3af);
__builtin_memmove(gp(0x8a85cc),(R+0),4);
}
B6de3b4:{NFSU2_TR(0x6de3b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de3b5:L6de3b5:{c.instructions+=2;NFSU2_TR(0x6de3b5);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6de3bb:{NFSU2_TR(0x6de3bb);
if(r1(R+518)){{goto L6de3dc;}}
}
B6de3bd:L6de3bd:{c.instructions+=1;NFSU2_TR(0x6de3bd);
__builtin_memmove((R+4),(R+4),4);
}
B6de3c0:L6de3c0:{c.instructions+=3;NFSU2_TR(0x6de3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de3c6:{NFSU2_TR(0x6de3c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de3c8:{NFSU2_TR(0x6de3c8);
if(r1(R+518)){{goto L6de3d4;}}
}
B6de3ca:L6de3ca:{c.instructions+=3;NFSU2_TR(0x6de3ca);
__builtin_memmove((R+0),(R+8),4);
}
B6de3cc:{NFSU2_TR(0x6de3cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6de3d2:{NFSU2_TR(0x6de3d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de3c0u);}goto L6de3c0;}}
}
B6de3d4:L6de3d4:{c.instructions+=2;NFSU2_TR(0x6de3d4);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6de3da:{NFSU2_TR(0x6de3da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de3e8;}}
}
B6de3dc:L6de3dc:{c.instructions+=2;NFSU2_TR(0x6de3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de3e2:{NFSU2_TR(0x6de3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de3e8:L6de3e8:{c.instructions+=1;NFSU2_TR(0x6de3e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de3f0:L6de3f0:{c.instructions+=8;NFSU2_TR(0x6de3f0);
__builtin_memmove((R+0),(R+4),4);
}
B6de3f2:{NFSU2_TR(0x6de3f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de3f6:{NFSU2_TR(0x6de3f6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6de3f8:{NFSU2_TR(0x6de3f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6de3fa:{NFSU2_TR(0x6de3fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de400:{NFSU2_TR(0x6de400);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de406:{NFSU2_TR(0x6de406);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6de408:{NFSU2_TR(0x6de408);
{goto L6de410;}
}
B6de410:L6de410:{c.instructions+=5;NFSU2_TR(0x6de410);
u8 U[16];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6de417:{NFSU2_TR(0x6de417);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6de41b:{NFSU2_TR(0x6de41b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6de41c:{NFSU2_TR(0x6de41c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6de41f:{NFSU2_TR(0x6de41f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de410u);}goto L6de410;}}
}
B6de421:L6de421:{c.instructions+=11;NFSU2_TR(0x6de421);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de425:{NFSU2_TR(0x6de425);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de42b:{NFSU2_TR(0x6de42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de431:{NFSU2_TR(0x6de431);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de437:{NFSU2_TR(0x6de437);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de43d:{NFSU2_TR(0x6de43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6de447:{NFSU2_TR(0x6de447);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de44d:{NFSU2_TR(0x6de44d);
__builtin_memmove((R+8),gp(0x8a85cc),4);
}
B6de453:{NFSU2_TR(0x6de453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de459:{NFSU2_TR(0x6de459);
__builtin_memmove(gp(0x8a85cc),(R+0),4);
}
B6de45e:{NFSU2_TR(0x6de45e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de470:L6de470:{c.instructions+=7;NFSU2_TR(0x6de470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6de473:{NFSU2_TR(0x6de473);
__builtin_memmove((R+0),gp(0x8a85d0),4);
}
B6de478:{NFSU2_TR(0x6de478);
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
B6de47a:{NFSU2_TR(0x6de47a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de47b:{NFSU2_TR(0x6de47b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de47c:{NFSU2_TR(0x6de47c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6de484:{NFSU2_TR(0x6de484);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de4ed;}}
}
B6de486:L6de486:{c.instructions+=1;NFSU2_TR(0x6de486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de48bull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6de48b:L6de48b:{c.instructions+=2;NFSU2_TR(0x6de48b);
__builtin_memmove((R+4),(R+0),4);
}
B6de48d:{NFSU2_TR(0x6de48d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de492ull));
TAIL_STATIC(0x6d8190u,6d8);
}
B6de492:L6de492:{c.instructions+=3;NFSU2_TR(0x6de492);
__builtin_memmove((R+24),(R+0),4);
}
B6de494:{NFSU2_TR(0x6de494);
__builtin_memmove((R+4),(R+24),4);
}
B6de496:{NFSU2_TR(0x6de496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de49bull));
TAIL_STATIC(0x6d8280u,6d8);
}
B6de49b:L6de49b:{c.instructions+=8;NFSU2_TR(0x6de49b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6de49f:{NFSU2_TR(0x6de49f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4a0:{NFSU2_TR(0x6de4a0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6de4a4:{NFSU2_TR(0x6de4a4);
__builtin_memmove(gp(0x8a85d0),(R+0),4);
}
B6de4a9:{NFSU2_TR(0x6de4a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6de4ab:{NFSU2_TR(0x6de4ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4ac:{NFSU2_TR(0x6de4ac);
__builtin_memmove((R+4),(R+24),4);
}
B6de4ae:{NFSU2_TR(0x6de4ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de4b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6de4b1:L6de4b1:{c.instructions+=10;NFSU2_TR(0x6de4b1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de4b5:{NFSU2_TR(0x6de4b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de4b9:{NFSU2_TR(0x6de4b9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4be:{NFSU2_TR(0x6de4be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4c0:{NFSU2_TR(0x6de4c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4c1:{NFSU2_TR(0x6de4c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4c2:{NFSU2_TR(0x6de4c2);
__builtin_memmove((R+4),gp(0x8a85d0),4);
}
B6de4c8:{NFSU2_TR(0x6de4c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4ca:{NFSU2_TR(0x6de4ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4cc:{NFSU2_TR(0x6de4cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de4d1ull));
TAIL_STATIC(0x6e1050u,6e1);
}
B6de4d1:L6de4d1:{c.instructions+=4;NFSU2_TR(0x6de4d1);
__builtin_memmove((R+4),gp(0x8a85d0),4);
}
B6de4d7:{NFSU2_TR(0x6de4d7);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4dc:{NFSU2_TR(0x6de4dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4de:{NFSU2_TR(0x6de4de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de4e3ull));
TAIL_STATIC(0x6e13c0u,6e1);
}
B6de4e3:L6de4e3:{c.instructions+=2;NFSU2_TR(0x6de4e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de4e7:{NFSU2_TR(0x6de4e7);
__builtin_memmove(gp(0x8a85c8),(R+8),4);
}
B6de4ed:L6de4ed:{c.instructions+=3;NFSU2_TR(0x6de4ed);
__builtin_memmove((R+0),gp(0x8a85bc),4);
}
B6de4f2:{NFSU2_TR(0x6de4f2);
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
B6de4f4:{NFSU2_TR(0x6de4f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de531;}}
}
B6de4f6:L6de4f6:{c.instructions+=3;NFSU2_TR(0x6de4f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4f8:{NFSU2_TR(0x6de4f8);
u8 U[4];
w4(U+0,u32(0x10cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de4fd:{NFSU2_TR(0x6de4fd);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de503ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6de503:L6de503:{c.instructions+=3;NFSU2_TR(0x6de503);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6de506:{NFSU2_TR(0x6de506);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de508:{NFSU2_TR(0x6de508);
if(r1(R+518)){{goto L6de513;}}
}
B6de50a:L6de50a:{c.instructions+=2;NFSU2_TR(0x6de50a);
__builtin_memmove((R+4),(R+0),4);
}
B6de50c:{NFSU2_TR(0x6de50c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de511ull));
TAIL_STATIC(0x6dbf00u,6db);
}
B6de511:L6de511:{c.instructions+=1;NFSU2_TR(0x6de511);
{goto L6de515;}
}
B6de513:L6de513:{c.instructions+=1;NFSU2_TR(0x6de513);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6de515:L6de515:{c.instructions+=3;NFSU2_TR(0x6de515);
__builtin_memmove((R+4),(R+0),4);
}
B6de517:{NFSU2_TR(0x6de517);
__builtin_memmove(gp(0x8a85bc),(R+0),4);
}
B6de51c:{NFSU2_TR(0x6de51c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de521ull));
TAIL_STATIC(0x6dbb10u,6db);
}
B6de521:L6de521:{c.instructions+=4;NFSU2_TR(0x6de521);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de527:{NFSU2_TR(0x6de527);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de529:{NFSU2_TR(0x6de529);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6de52c:{NFSU2_TR(0x6de52c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de531ull));
TAIL_STATIC(0x6db2b0u,6db);
}
B6de531:L6de531:{c.instructions+=2;NFSU2_TR(0x6de531);
__builtin_memmove((R+4),gp(0x8a85d0),4);
}
B6de537:{NFSU2_TR(0x6de537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de53cull));
TAIL_STATIC(0x6e1440u,6e1);
}
B6de53c:L6de53c:{c.instructions+=3;NFSU2_TR(0x6de53c);
__builtin_memmove((R+0),gp(0x4022c0),4);
}
B6de541:{NFSU2_TR(0x6de541);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de543:{NFSU2_TR(0x6de543);
if(r1(R+518)){{goto L6de54c;}}
}
B6de545:L6de545:{c.instructions+=1;NFSU2_TR(0x6de545);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w4(U+4,u32(0xffaaaaaaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6de54c:L6de54c:{c.instructions+=3;NFSU2_TR(0x6de54c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de54d:{NFSU2_TR(0x6de54d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de54e:{NFSU2_TR(0x6de54e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6de550:L6de550:{c.instructions+=8;NFSU2_TR(0x6de550);
__builtin_memmove((R+24),gp(0x8a85cc),4);
}
B6de556:{NFSU2_TR(0x6de556);
__builtin_memmove((R+0),gp(0x80f094),4);
}
B6de55b:{NFSU2_TR(0x6de55b);
__builtin_memmove((R+4),gp(0x80f098),4);
}
B6de561:{NFSU2_TR(0x6de561);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6de563:{NFSU2_TR(0x6de563);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de565:{NFSU2_TR(0x6de565);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de569:{NFSU2_TR(0x6de569);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de56d:{NFSU2_TR(0x6de56d);
if(r1(R+518)){{goto L6de5d1;}}
}
B6de56f:L6de56f:{c.instructions+=1;NFSU2_TR(0x6de56f);
__builtin_memmove((R+20),(R+4),4);
}
B6de571:L6de571:{c.instructions+=2;NFSU2_TR(0x6de571);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x20ull))));
}
B6de578:{NFSU2_TR(0x6de578);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6de5bc;}}
}
B6de57a:L6de57a:{c.instructions+=3;NFSU2_TR(0x6de57a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de580:{NFSU2_TR(0x6de580);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de582:{NFSU2_TR(0x6de582);
if(r1(R+518)){{goto L6de597;}}
}
B6de584:L6de584:{c.instructions+=5;NFSU2_TR(0x6de584);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de58a:{NFSU2_TR(0x6de58a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6de590:{NFSU2_TR(0x6de590);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6de592:{NFSU2_TR(0x6de592);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6de595:{NFSU2_TR(0x6de595);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de5bc;}}
}
B6de597:L6de597:{c.instructions+=9;NFSU2_TR(0x6de597);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de59b:{NFSU2_TR(0x6de59b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6de59f:{NFSU2_TR(0x6de59f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de5a0:{NFSU2_TR(0x6de5a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de5a1:{NFSU2_TR(0x6de5a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de5a2:{NFSU2_TR(0x6de5a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de5a3:{NFSU2_TR(0x6de5a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de5a4:{NFSU2_TR(0x6de5a4);
__builtin_memmove((R+4),(R+24),4);
}
B6de5a6:{NFSU2_TR(0x6de5a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de5abull));
TAIL_STATIC(0x6ddce0u,6dd);
}
B6de5ab:L6de5ab:{c.instructions+=5;NFSU2_TR(0x6de5ab);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6de5af:{NFSU2_TR(0x6de5af);
{u32 ea_=u32(u32(8130520u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6de5b5:{NFSU2_TR(0x6de5b5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6de5b6:{NFSU2_TR(0x6de5b6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6de5ba:{NFSU2_TR(0x6de5ba);
{goto L6de5c7;}
}
B6de5bc:L6de5bc:{c.instructions+=1;NFSU2_TR(0x6de5bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de5c1ull));
TAIL_STATIC(0x50d510u,50d);
}
B6de5c1:L6de5c1:{c.instructions+=1;NFSU2_TR(0x6de5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de5c7:L6de5c7:{c.instructions+=3;NFSU2_TR(0x6de5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6de5cd:{NFSU2_TR(0x6de5cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de5cf:{NFSU2_TR(0x6de5cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de571u);}goto L6de571;}}
}
B6de5d1:L6de5d1:{c.instructions+=2;NFSU2_TR(0x6de5d1);
__builtin_memmove((R+4),gp(0x8a85bc),4);
}
B6de5d7:{NFSU2_TR(0x6de5d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de5dcull));
TAIL_STATIC(0x6dbbf0u,6db);
}
B6de5dc:L6de5dc:{c.instructions+=3;NFSU2_TR(0x6de5dc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6de5dd:{NFSU2_TR(0x6de5dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6de5e0:{NFSU2_TR(0x6de5e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de550u);}goto L6de550;}}
}
B6de5e6:L6de5e6:{c.instructions+=2;NFSU2_TR(0x6de5e6);
__builtin_memmove((R+4),gp(0x8a85d0),4);
}
B6de5ec:{NFSU2_TR(0x6de5ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de5f1ull));
TAIL_STATIC(0x6e1620u,6e1);
}
B6de5f1:L6de5f1:{c.instructions+=5;NFSU2_TR(0x6de5f1);
__builtin_memmove((R+0),gp(0x80f090),1);
}
B6de5f6:{NFSU2_TR(0x6de5f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6de5f8:{NFSU2_TR(0x6de5f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6de5f9:{NFSU2_TR(0x6de5f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6de5fa:{NFSU2_TR(0x6de5fa);
if(r1(R+518)){{goto L6de623;}}
}
B6de5fc:L6de5fc:{c.instructions+=2;NFSU2_TR(0x6de5fc);
__builtin_memmove((R+24),gp(0x4022c0),4);
}
B6de602:{NFSU2_TR(0x6de602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de607ull));
TAIL_STATIC(0x50d510u,50d);
}
B6de607:L6de607:{c.instructions+=3;NFSU2_TR(0x6de607);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8a85c0))));
}
B6de60d:{NFSU2_TR(0x6de60d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6de60f:{NFSU2_TR(0x6de60f);
if(r1(R+512)){{goto L6de62d;}}
}
B6de611:L6de611:{c.instructions+=1;NFSU2_TR(0x6de611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de616ull));
TAIL_STATIC(0x50d510u,50d);
}
B6de616:L6de616:{c.instructions+=3;NFSU2_TR(0x6de616);
__builtin_memmove(gp(0x8a85c0),(R+0),4);
}
B6de61b:{NFSU2_TR(0x6de61b);
s4(0x8a85c4,u32(u32(m4(0x8a85c4))+u32(u32(0x1ull))));
}
B6de621:{NFSU2_TR(0x6de621);
{goto L6de62d;}
}
B6de623:L6de623:{c.instructions+=1;NFSU2_TR(0x6de623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de628ull));
TAIL_STATIC(0x50d510u,50d);
}
B6de628:L6de628:{c.instructions+=1;NFSU2_TR(0x6de628);
__builtin_memmove(gp(0x8a85c0),(R+0),4);
}
B6de62d:L6de62d:{c.instructions+=4;NFSU2_TR(0x6de62d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8a85c4),4);
w1(R+512,u8((r4(U+0))<(r4(R+28))));
}
B6de633:{NFSU2_TR(0x6de633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6de634:{NFSU2_TR(0x6de634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6de635:{NFSU2_TR(0x6de635);
if(r1(R+512)){{goto L6de641;}}
}
B6de637:L6de637:{c.instructions+=1;NFSU2_TR(0x6de637);
s4(0x8a85c4,u32(0x0ull));
}
B6de641:L6de641:{c.instructions+=2;NFSU2_TR(0x6de641);
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
B6de644:{NFSU2_TR(0x6de644);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de650:L6de650:{c.instructions+=5;NFSU2_TR(0x6de650);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de651:{NFSU2_TR(0x6de651);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6de655:{NFSU2_TR(0x6de655);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6de658:{NFSU2_TR(0x6de658);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6de65a:{NFSU2_TR(0x6de65a);
if(r1(R+518)){{goto L6de6a0;}}
}
B6de65c:L6de65c:{c.instructions+=17;NFSU2_TR(0x6de65c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de65d:{NFSU2_TR(0x6de65d);
u8 U[8];
{SPILL();c.pc=0x6de65du;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B6de65f:{NFSU2_TR(0x6de65f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de663:{NFSU2_TR(0x6de663);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6de666:{NFSU2_TR(0x6de666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6de668:{NFSU2_TR(0x6de668);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de66e:{NFSU2_TR(0x6de66e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6de670:{NFSU2_TR(0x6de670);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6de672:{NFSU2_TR(0x6de672);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de678:{NFSU2_TR(0x6de678);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de67c:{NFSU2_TR(0x6de67c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6de680:{NFSU2_TR(0x6de680);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de684:{NFSU2_TR(0x6de684);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de687:{NFSU2_TR(0x6de687);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6de68a:{NFSU2_TR(0x6de68a);
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
B6de68c:{NFSU2_TR(0x6de68c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6de68d:{NFSU2_TR(0x6de68d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de6ad;}}
}
B6de68f:L6de68f:{c.instructions+=6;NFSU2_TR(0x6de68f);
__builtin_memmove(gp(0x80f09c),(R+4),4);
}
B6de695:{NFSU2_TR(0x6de695);
u8 U[8];
{SPILL();c.pc=0x6de695u;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B6de697:{NFSU2_TR(0x6de697);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de69a:{NFSU2_TR(0x6de69a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6de69e:{NFSU2_TR(0x6de69e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6de69f:{NFSU2_TR(0x6de69f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de6a0:L6de6a0:{c.instructions+=3;NFSU2_TR(0x6de6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de6a3:{NFSU2_TR(0x6de6a3);
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
B6de6a5:{NFSU2_TR(0x6de6a5);
if(r1(R+518)){{goto L6de6ad;}}
}
B6de6a7:L6de6a7:{c.instructions+=2;NFSU2_TR(0x6de6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de6aa:{NFSU2_TR(0x6de6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de6ad:L6de6ad:{c.instructions+=2;NFSU2_TR(0x6de6ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6de6ae:{NFSU2_TR(0x6de6ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de6b0:L6de6b0:{c.instructions+=8;NFSU2_TR(0x6de6b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de6b1:{NFSU2_TR(0x6de6b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6de6b5:{NFSU2_TR(0x6de6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6de6bc:{NFSU2_TR(0x6de6bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6de6c0:{NFSU2_TR(0x6de6c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6de6c4:{NFSU2_TR(0x6de6c4);
__builtin_memmove((R+0),gp(0x80f09c),4);
}
B6de6c9:{NFSU2_TR(0x6de6c9);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x8a85f0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x8a85f0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x8a85f0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6de6cf:{NFSU2_TR(0x6de6cf);
if(r1(R+518)){{goto L6de726;}}
}
B6de6d1:L6de6d1:{c.instructions+=10;NFSU2_TR(0x6de6d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6de6d5:{NFSU2_TR(0x6de6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de6d8:{NFSU2_TR(0x6de6d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6de6dc:{NFSU2_TR(0x6de6dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de6df:{NFSU2_TR(0x6de6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de6e2:{NFSU2_TR(0x6de6e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6de6e6:{NFSU2_TR(0x6de6e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de6e9:{NFSU2_TR(0x6de6e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6de6ec:{NFSU2_TR(0x6de6ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6de6ee:{NFSU2_TR(0x6de6ee);
if(r1(R+518)){{goto L6de709;}}
}
B6de6f0:L6de6f0:{c.instructions+=9;NFSU2_TR(0x6de6f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de6f1:{NFSU2_TR(0x6de6f1);
u8 U[8];
{SPILL();c.pc=0x6de6f1u;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B6de6f3:{NFSU2_TR(0x6de6f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6de6f6:{NFSU2_TR(0x6de6f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6de6f8:{NFSU2_TR(0x6de6f8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B6de6fa:{NFSU2_TR(0x6de6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6de700:{NFSU2_TR(0x6de700);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6de704:{NFSU2_TR(0x6de704);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de708:{NFSU2_TR(0x6de708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6de709:L6de709:{c.instructions+=3;NFSU2_TR(0x6de709);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6de70c:{NFSU2_TR(0x6de70c);
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
B6de70e:{NFSU2_TR(0x6de70e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6de726;}}
}
B6de710:L6de710:{c.instructions+=6;NFSU2_TR(0x6de710);
__builtin_memmove(gp(0x80f09c),(R+0),4);
}
B6de715:{NFSU2_TR(0x6de715);
u8 U[8];
{SPILL();c.pc=0x6de715u;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B6de717:{NFSU2_TR(0x6de717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6de71b:{NFSU2_TR(0x6de71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de71e:{NFSU2_TR(0x6de71e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6de722:{NFSU2_TR(0x6de722);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6de726:L6de726:{c.instructions+=2;NFSU2_TR(0x6de726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6de727:{NFSU2_TR(0x6de727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de730:L6de730:{c.instructions+=4;NFSU2_TR(0x6de730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de731:{NFSU2_TR(0x6de731);
__builtin_memmove((R+24),gp(0x8a85cc),4);
}
B6de737:{NFSU2_TR(0x6de737);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de739:{NFSU2_TR(0x6de739);
if(r1(R+518)){{goto L6de753;}}
}
B6de73b:L6de73b:{c.instructions+=2;NFSU2_TR(0x6de73b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de73c:{NFSU2_TR(0x6de73c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6de740:L6de740:{c.instructions+=3;NFSU2_TR(0x6de740);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de741:{NFSU2_TR(0x6de741);
__builtin_memmove((R+4),(R+24),4);
}
B6de743:{NFSU2_TR(0x6de743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de748ull));
TAIL_STATIC(0x6ddc30u,6dd);
}
B6de748:L6de748:{c.instructions+=3;NFSU2_TR(0x6de748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6de74e:{NFSU2_TR(0x6de74e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de750:{NFSU2_TR(0x6de750);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de740u);}goto L6de740;}}
}
B6de752:L6de752:{c.instructions+=1;NFSU2_TR(0x6de752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6de753:L6de753:{c.instructions+=6;NFSU2_TR(0x6de753);
__builtin_memmove((R+0),gp(0x8a85b8),4);
}
B6de758:{NFSU2_TR(0x6de758);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6de759:{NFSU2_TR(0x6de759);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B6de75c:{NFSU2_TR(0x6de75c);
__builtin_memmove(gp(0x8a85b8),(R+0),4);
}
B6de761:{NFSU2_TR(0x6de761);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6de762:{NFSU2_TR(0x6de762);
if(r1(R+512)){{goto L6de76e;}}
}
B6de764:L6de764:{c.instructions+=1;NFSU2_TR(0x6de764);
s4(0x8a85b8,u32(0x0ull));
}
B6de76e:L6de76e:{c.instructions+=3;NFSU2_TR(0x6de76e);
__builtin_memmove((R+0),gp(0x8a85d4),1);
}
B6de773:{NFSU2_TR(0x6de773);
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
B6de775:{NFSU2_TR(0x6de775);
if(r1(R+518)){{goto L6de77c;}}
}
B6de777:L6de777:{c.instructions+=1;NFSU2_TR(0x6de777);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de470u);}goto L6de470;}
}
B6de77c:L6de77c:{c.instructions+=1;NFSU2_TR(0x6de77c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de780:L6de780:{c.instructions+=10;NFSU2_TR(0x6de780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6de783:{NFSU2_TR(0x6de783);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de784:{NFSU2_TR(0x6de784);
u8 U[8];
{SPILL();c.pc=0x6de784u;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B6de786:{NFSU2_TR(0x6de786);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x8a85d8))));
}
B6de78c:{NFSU2_TR(0x6de78c);
__builtin_memmove((R+24),(R+0),4);
}
B6de78e:{NFSU2_TR(0x6de78e);
u8 U[8];
{SPILL();c.pc=0x6de78eu;V r_=user_op(c,524364,{});SPILL();wv<8>((U+0),r_);}
w4(R+8,u32(u64(r8(U+0))>>32));
w4(R+0,u32(r8(U+0)));
}
B6de790:{NFSU2_TR(0x6de790);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6de794:{NFSU2_TR(0x6de794);
__builtin_memmove(gp(0x8a85d8),(R+0),4);
}
B6de799:{NFSU2_TR(0x6de799);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x8a85f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6de7a1:{NFSU2_TR(0x6de7a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de7a6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de6b0u);}goto L6de6b0;}
}
B6de7a6:L6de7a6:{c.instructions+=3;NFSU2_TR(0x6de7a6);
__builtin_memmove((R+0),gp(0x80f0a0),1);
}
B6de7ab:{NFSU2_TR(0x6de7ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6de7ad:{NFSU2_TR(0x6de7ad);
if(r1(R+518)){{goto L6de7b8;}}
}
B6de7af:L6de7af:{c.instructions+=2;NFSU2_TR(0x6de7af);
s1(0x80f0a0,u8(0x0ull));
}
B6de7b6:{NFSU2_TR(0x6de7b6);
{goto L6de7c1;}
}
B6de7b8:L6de7b8:{c.instructions+=2;NFSU2_TR(0x6de7b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de7b9:{NFSU2_TR(0x6de7b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de7beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de730u);}goto L6de730;}
}
B6de7be:L6de7be:{c.instructions+=1;NFSU2_TR(0x6de7be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6de7c1:L6de7c1:{c.instructions+=4;NFSU2_TR(0x6de7c1);
__builtin_memmove((R+0),gp(0x8a85cc),4);
}
B6de7c6:{NFSU2_TR(0x6de7c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de7c8:{NFSU2_TR(0x6de7c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6de7c9:{NFSU2_TR(0x6de7c9);
if(r1(R+518)){{goto L6de7e4;}}
}
B6de7cb:L6de7cb:{c.instructions+=1;NFSU2_TR(0x6de7cb);
{goto L6de7d0;}
}
B6de7d0:L6de7d0:{c.instructions+=4;NFSU2_TR(0x6de7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6de7da:{NFSU2_TR(0x6de7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de7e0:{NFSU2_TR(0x6de7e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6de7e2:{NFSU2_TR(0x6de7e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de7d0u);}goto L6de7d0;}}
}
B6de7e4:L6de7e4:{c.instructions+=2;NFSU2_TR(0x6de7e4);
__builtin_memmove((R+4),(R+16),4);
}
B6de7e8:{NFSU2_TR(0x6de7e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6de7edull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6de650u);}goto L6de650;}
}
B6de7ed:L6de7ed:{c.instructions+=2;NFSU2_TR(0x6de7ed);
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
B6de7f0:{NFSU2_TR(0x6de7f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de800:L6de800:{c.instructions+=55;NFSU2_TR(0x6de800);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de801:{NFSU2_TR(0x6de801);
__builtin_memmove((R+20),(R+16),4);
}
B6de803:{NFSU2_TR(0x6de803);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6de806:{NFSU2_TR(0x6de806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6de809:{NFSU2_TR(0x6de809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de80c:{NFSU2_TR(0x6de80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de80f:{NFSU2_TR(0x6de80f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6de812:{NFSU2_TR(0x6de812);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6de815:{NFSU2_TR(0x6de815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6de817:{NFSU2_TR(0x6de817);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de81a:{NFSU2_TR(0x6de81a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6de81f:{NFSU2_TR(0x6de81f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de820:{NFSU2_TR(0x6de820);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6de823:{NFSU2_TR(0x6de823);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6de829:{NFSU2_TR(0x6de829);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6de82c:{NFSU2_TR(0x6de82c);
u8 U[40];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((U+24),(U+8),16);
__builtin_memmove((R+4800),(U+24),4);
__builtin_memmove((R+4804),(U+28),4);
__builtin_memmove((R+4808),(U+32),4);
__builtin_memmove((R+4812),(U+36),4);
}
B6de830:{NFSU2_TR(0x6de830);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6de832:{NFSU2_TR(0x6de832);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6de835:{NFSU2_TR(0x6de835);
u8 U[40];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((U+24),(U+8),16);
__builtin_memmove((R+4736),(U+24),4);
__builtin_memmove((R+4740),(U+28),4);
__builtin_memmove((R+4744),(U+32),4);
__builtin_memmove((R+4748),(U+36),4);
}
B6de839:{NFSU2_TR(0x6de839);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+24)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6de83b:{NFSU2_TR(0x6de83b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6de83d:{NFSU2_TR(0x6de83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de840:{NFSU2_TR(0x6de840);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de844:{NFSU2_TR(0x6de844);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6de84a:{NFSU2_TR(0x6de84a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de84e:{NFSU2_TR(0x6de84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de851:{NFSU2_TR(0x6de851);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B6de857:{NFSU2_TR(0x6de857);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6de85b:{NFSU2_TR(0x6de85b);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B6de85e:{NFSU2_TR(0x6de85e);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6de862:{NFSU2_TR(0x6de862);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4612))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4616))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4620))));
}
B6de865:{NFSU2_TR(0x6de865);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B6de868:{NFSU2_TR(0x6de868);
u8 U[16];
__builtin_memmove((U+0),(R+4800),16);
__builtin_memmove(gp(u32(r4(R+8))),(U+0),16);
}
B6de86b:{NFSU2_TR(0x6de86b);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B6de86f:{NFSU2_TR(0x6de86f);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B6de873:{NFSU2_TR(0x6de873);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B6de876:{NFSU2_TR(0x6de876);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4612))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4616))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4620))));
}
B6de879:{NFSU2_TR(0x6de879);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B6de87c:{NFSU2_TR(0x6de87c);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6de880:{NFSU2_TR(0x6de880);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B6de884:{NFSU2_TR(0x6de884);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B6de888:{NFSU2_TR(0x6de888);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B6de88b:{NFSU2_TR(0x6de88b);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4612))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4616))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4620))));
}
B6de88e:{NFSU2_TR(0x6de88e);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B6de891:{NFSU2_TR(0x6de891);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6de895:{NFSU2_TR(0x6de895);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B6de899:{NFSU2_TR(0x6de899);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B6de89c:{NFSU2_TR(0x6de89c);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6de8a0:{NFSU2_TR(0x6de8a0);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B6de8a3:{NFSU2_TR(0x6de8a3);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4736))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4740))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4744))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4748))));
}
B6de8a6:{NFSU2_TR(0x6de8a6);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6de8aa:{NFSU2_TR(0x6de8aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6de8ab:{NFSU2_TR(0x6de8ab);
__builtin_memmove((R+16),(R+20),4);
}
B6de8ad:{NFSU2_TR(0x6de8ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6de8ae:{NFSU2_TR(0x6de8ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de8b0:L6de8b0:{c.instructions+=77;NFSU2_TR(0x6de8b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de8b1:{NFSU2_TR(0x6de8b1);
__builtin_memmove((R+20),(R+16),4);
}
B6de8b3:{NFSU2_TR(0x6de8b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6de8b6:{NFSU2_TR(0x6de8b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6de8b9:{NFSU2_TR(0x6de8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de8bc:{NFSU2_TR(0x6de8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de8bf:{NFSU2_TR(0x6de8bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6de8c2:{NFSU2_TR(0x6de8c2);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6de8c6:{NFSU2_TR(0x6de8c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de8c7:{NFSU2_TR(0x6de8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6de8ca:{NFSU2_TR(0x6de8ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6de8cc:{NFSU2_TR(0x6de8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de8cf:{NFSU2_TR(0x6de8cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de8d0:{NFSU2_TR(0x6de8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6de8d3:{NFSU2_TR(0x6de8d3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6de8d8:{NFSU2_TR(0x6de8d8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6de8de:{NFSU2_TR(0x6de8de);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B6de8e4:{NFSU2_TR(0x6de8e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6de8e7:{NFSU2_TR(0x6de8e7);
u8 U[40];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((U+24),(U+8),16);
__builtin_memmove((R+4928),(U+24),4);
__builtin_memmove((R+4932),(U+28),4);
__builtin_memmove((R+4936),(U+32),4);
__builtin_memmove((R+4940),(U+36),4);
}
B6de8eb:{NFSU2_TR(0x6de8eb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6de8ed:{NFSU2_TR(0x6de8ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6de8f0:{NFSU2_TR(0x6de8f0);
u8 U[40];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((U+24),(U+8),16);
__builtin_memmove((R+4864),(U+24),4);
__builtin_memmove((R+4868),(U+28),4);
__builtin_memmove((R+4872),(U+32),4);
__builtin_memmove((R+4876),(U+36),4);
}
B6de8f4:{NFSU2_TR(0x6de8f4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6de8f6:{NFSU2_TR(0x6de8f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6de8f9:{NFSU2_TR(0x6de8f9);
u8 U[40];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((U+24),(U+8),16);
__builtin_memmove((R+4800),(U+24),4);
__builtin_memmove((R+4804),(U+28),4);
__builtin_memmove((R+4808),(U+32),4);
__builtin_memmove((R+4812),(U+36),4);
}
B6de8fd:{NFSU2_TR(0x6de8fd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+28)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6de8ff:{NFSU2_TR(0x6de8ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6de901:{NFSU2_TR(0x6de901);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de905:{NFSU2_TR(0x6de905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6de908:{NFSU2_TR(0x6de908);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6de90b:{NFSU2_TR(0x6de90b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B6de911:{NFSU2_TR(0x6de911);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de915:{NFSU2_TR(0x6de915);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B6de91b:{NFSU2_TR(0x6de91b);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6de91f:{NFSU2_TR(0x6de91f);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4672))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4676))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4680))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4684))));
}
B6de922:{NFSU2_TR(0x6de922);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6de926:{NFSU2_TR(0x6de926);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6de929:{NFSU2_TR(0x6de929);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B6de92f:{NFSU2_TR(0x6de92f);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6de933:{NFSU2_TR(0x6de933);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4748))));
}
B6de936:{NFSU2_TR(0x6de936);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6de93a:{NFSU2_TR(0x6de93a);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4608))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4612))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4616))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4620))));
}
B6de93d:{NFSU2_TR(0x6de93d);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4876))));
}
B6de940:{NFSU2_TR(0x6de940);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B6de943:{NFSU2_TR(0x6de943);
u8 U[16];
__builtin_memmove((U+0),(R+4928),16);
__builtin_memmove(gp(u32(r4(R+24))),(U+0),16);
}
B6de946:{NFSU2_TR(0x6de946);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B6de94a:{NFSU2_TR(0x6de94a);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B6de94e:{NFSU2_TR(0x6de94e);
u8 U[36];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B6de952:{NFSU2_TR(0x6de952);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4672))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4676))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4680))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4684))));
}
B6de955:{NFSU2_TR(0x6de955);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4748))));
}
B6de958:{NFSU2_TR(0x6de958);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4608))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4612))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4616))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4620))));
}
B6de95b:{NFSU2_TR(0x6de95b);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4876))));
}
B6de95e:{NFSU2_TR(0x6de95e);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B6de961:{NFSU2_TR(0x6de961);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6de965:{NFSU2_TR(0x6de965);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B6de969:{NFSU2_TR(0x6de969);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B6de96d:{NFSU2_TR(0x6de96d);
u8 U[36];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B6de971:{NFSU2_TR(0x6de971);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4672))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4676))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4680))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4684))));
}
B6de974:{NFSU2_TR(0x6de974);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4748))));
}
B6de977:{NFSU2_TR(0x6de977);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4608))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4612))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4616))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4620))));
}
B6de97a:{NFSU2_TR(0x6de97a);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4876))));
}
B6de97d:{NFSU2_TR(0x6de97d);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B6de980:{NFSU2_TR(0x6de980);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6de984:{NFSU2_TR(0x6de984);
u8 U[36];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B6de988:{NFSU2_TR(0x6de988);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4748))));
}
B6de98b:{NFSU2_TR(0x6de98b);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B6de98f:{NFSU2_TR(0x6de98f);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B6de992:{NFSU2_TR(0x6de992);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6de996:{NFSU2_TR(0x6de996);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B6de999:{NFSU2_TR(0x6de999);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4736))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4740))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4744))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4748))));
}
B6de99c:{NFSU2_TR(0x6de99c);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4800))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4804))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4808))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4812))));
}
B6de99f:{NFSU2_TR(0x6de99f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6de9a0:{NFSU2_TR(0x6de9a0);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6de9a4:{NFSU2_TR(0x6de9a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6de9a5:{NFSU2_TR(0x6de9a5);
__builtin_memmove((R+16),(R+20),4);
}
B6de9a7:{NFSU2_TR(0x6de9a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6de9a8:{NFSU2_TR(0x6de9a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6de9b0:L6de9b0:{c.instructions+=83;NFSU2_TR(0x6de9b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de9b1:{NFSU2_TR(0x6de9b1);
__builtin_memmove((R+20),(R+16),4);
}
B6de9b3:{NFSU2_TR(0x6de9b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B6de9b6:{NFSU2_TR(0x6de9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6de9b9:{NFSU2_TR(0x6de9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6de9bc:{NFSU2_TR(0x6de9bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6de9bf:{NFSU2_TR(0x6de9bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6de9c2:{NFSU2_TR(0x6de9c2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6de9c4:{NFSU2_TR(0x6de9c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de9c5:{NFSU2_TR(0x6de9c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6de9c8:{NFSU2_TR(0x6de9c8);
w8(R+4352,u64(r4(R+8)));
}
B6de9cb:{NFSU2_TR(0x6de9cb);
__builtin_memmove((R+0),(R+8),4);
}
B6de9cd:{NFSU2_TR(0x6de9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6de9d0:{NFSU2_TR(0x6de9d0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6de9d5:{NFSU2_TR(0x6de9d5);
__builtin_memmove((R+4),(R+24),4);
}
B6de9d7:{NFSU2_TR(0x6de9d7);
__builtin_memmove((R+4368),(R+4352),8);
}
B6de9da:{NFSU2_TR(0x6de9da);
__builtin_memmove((R+4372),(R+4352),4);
}
B6de9dd:{NFSU2_TR(0x6de9dd);
__builtin_memmove((R+4352),(R+4368),8);
}
B6de9e0:{NFSU2_TR(0x6de9e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6de9e1:{NFSU2_TR(0x6de9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6de9e4:{NFSU2_TR(0x6de9e4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6de9ea:{NFSU2_TR(0x6de9ea);
w8(R+4368,u64(r4(R+24)));
}
B6de9ed:{NFSU2_TR(0x6de9ed);
__builtin_memmove((R+4384),(R+4368),8);
}
B6de9f0:{NFSU2_TR(0x6de9f0);
__builtin_memmove((R+4388),(R+4368),4);
}
B6de9f3:{NFSU2_TR(0x6de9f3);
__builtin_memmove((R+4368),(R+4384),8);
}
B6de9f6:{NFSU2_TR(0x6de9f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6de9f9:{NFSU2_TR(0x6de9f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B6de9fd:{NFSU2_TR(0x6de9fd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6de9ff:{NFSU2_TR(0x6de9ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6dea02:{NFSU2_TR(0x6dea02);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B6dea06:{NFSU2_TR(0x6dea06);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6dea0a:{NFSU2_TR(0x6dea0a);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6dea0e:{NFSU2_TR(0x6dea0e);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6dea12:{NFSU2_TR(0x6dea12);
u8 U[8];
__builtin_memmove((U+0),(R+4400),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B6dea15:{NFSU2_TR(0x6dea15);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4384),(U+12),8);
}
B6dea1a:{NFSU2_TR(0x6dea1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6dea1e:{NFSU2_TR(0x6dea1e);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6dea22:{NFSU2_TR(0x6dea22);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dea24:{NFSU2_TR(0x6dea24);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6dea28:{NFSU2_TR(0x6dea28);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6dea2c:{NFSU2_TR(0x6dea2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6dea30:{NFSU2_TR(0x6dea30);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6dea34:{NFSU2_TR(0x6dea34);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6dea38:{NFSU2_TR(0x6dea38);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6dea3c:{NFSU2_TR(0x6dea3c);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6dea40:{NFSU2_TR(0x6dea40);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6dea44:{NFSU2_TR(0x6dea44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6dea48:{NFSU2_TR(0x6dea48);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6dea4c:{NFSU2_TR(0x6dea4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6dea50:{NFSU2_TR(0x6dea50);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6dea54:{NFSU2_TR(0x6dea54);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6dea58:{NFSU2_TR(0x6dea58);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6dea5c:{NFSU2_TR(0x6dea5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6dea60:{NFSU2_TR(0x6dea60);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6dea64:{NFSU2_TR(0x6dea64);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6dea68:{NFSU2_TR(0x6dea68);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6dea6c:{NFSU2_TR(0x6dea6c);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6dea70:{NFSU2_TR(0x6dea70);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6dea74:{NFSU2_TR(0x6dea74);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6dea78:{NFSU2_TR(0x6dea78);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6dea7c:{NFSU2_TR(0x6dea7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6dea80:{NFSU2_TR(0x6dea80);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6dea84:{NFSU2_TR(0x6dea84);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6dea88:{NFSU2_TR(0x6dea88);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6dea8c:{NFSU2_TR(0x6dea8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6dea90:{NFSU2_TR(0x6dea90);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6dea94:{NFSU2_TR(0x6dea94);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6dea98:{NFSU2_TR(0x6dea98);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6dea9c:{NFSU2_TR(0x6dea9c);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6deaa0:{NFSU2_TR(0x6deaa0);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6deaa4:{NFSU2_TR(0x6deaa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6deaa8:{NFSU2_TR(0x6deaa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6deaac:{NFSU2_TR(0x6deaac);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6deab0:{NFSU2_TR(0x6deab0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6deab4:{NFSU2_TR(0x6deab4);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6deab8:{NFSU2_TR(0x6deab8);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6deabc:{NFSU2_TR(0x6deabc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6deabd:{NFSU2_TR(0x6deabd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6deac1:{NFSU2_TR(0x6deac1);
w2(R+4260,u16(0xffffull));
}
B6deac3:{NFSU2_TR(0x6deac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6deac4:{NFSU2_TR(0x6deac4);
__builtin_memmove((R+16),(R+20),4);
}
B6deac6:{NFSU2_TR(0x6deac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6deac7:{NFSU2_TR(0x6deac7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dead0:L6dead0:{c.instructions+=119;NFSU2_TR(0x6dead0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dead1:{NFSU2_TR(0x6dead1);
__builtin_memmove((R+20),(R+16),4);
}
B6dead3:{NFSU2_TR(0x6dead3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B6dead6:{NFSU2_TR(0x6dead6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dead7:{NFSU2_TR(0x6dead7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6deada:{NFSU2_TR(0x6deada);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6deadd:{NFSU2_TR(0x6deadd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6deae0:{NFSU2_TR(0x6deae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6deae3:{NFSU2_TR(0x6deae3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6deae4:{NFSU2_TR(0x6deae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6deae7:{NFSU2_TR(0x6deae7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6deae8:{NFSU2_TR(0x6deae8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6deaea:{NFSU2_TR(0x6deaea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6deaed:{NFSU2_TR(0x6deaed);
w8(R+4352,u64(r4(R+24)));
}
B6deaf0:{NFSU2_TR(0x6deaf0);
__builtin_memmove((R+4368),(R+4352),8);
}
B6deaf3:{NFSU2_TR(0x6deaf3);
__builtin_memmove((R+4372),(R+4352),4);
}
B6deaf6:{NFSU2_TR(0x6deaf6);
__builtin_memmove((R+4352),(R+4368),8);
}
B6deaf9:{NFSU2_TR(0x6deaf9);
__builtin_memmove((R+0),(R+24),4);
}
B6deafb:{NFSU2_TR(0x6deafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6deafe:{NFSU2_TR(0x6deafe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6deb02:{NFSU2_TR(0x6deb02);
w8(R+4368,u64(r4(R+12)));
}
B6deb05:{NFSU2_TR(0x6deb05);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6deb0a:{NFSU2_TR(0x6deb0a);
__builtin_memmove((R+4),(R+12),4);
}
B6deb0c:{NFSU2_TR(0x6deb0c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6deb12:{NFSU2_TR(0x6deb12);
__builtin_memmove((R+4384),(R+4368),8);
}
B6deb15:{NFSU2_TR(0x6deb15);
__builtin_memmove((R+4388),(R+4368),4);
}
B6deb18:{NFSU2_TR(0x6deb18);
__builtin_memmove((R+4368),(R+4384),8);
}
B6deb1b:{NFSU2_TR(0x6deb1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B6deb20:{NFSU2_TR(0x6deb20);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B6deb26:{NFSU2_TR(0x6deb26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6deb27:{NFSU2_TR(0x6deb27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6deb2a:{NFSU2_TR(0x6deb2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6deb2d:{NFSU2_TR(0x6deb2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4432),(U+8),8);
}
B6deb31:{NFSU2_TR(0x6deb31);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6deb33:{NFSU2_TR(0x6deb33);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6deb36:{NFSU2_TR(0x6deb36);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4416),(U+8),8);
}
B6deb3a:{NFSU2_TR(0x6deb3a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6deb3c:{NFSU2_TR(0x6deb3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6deb3f:{NFSU2_TR(0x6deb3f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+28)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6deb41:{NFSU2_TR(0x6deb41);
__builtin_memmove((R+4400),(R+4384),8);
}
B6deb44:{NFSU2_TR(0x6deb44);
__builtin_memmove((R+4404),(R+4384),4);
}
B6deb47:{NFSU2_TR(0x6deb47);
__builtin_memmove((R+4384),(R+4400),8);
}
B6deb4a:{NFSU2_TR(0x6deb4a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B6deb4d:{NFSU2_TR(0x6deb4d);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6deb51:{NFSU2_TR(0x6deb51);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6deb55:{NFSU2_TR(0x6deb55);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6deb59:{NFSU2_TR(0x6deb59);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6deb5d:{NFSU2_TR(0x6deb5d);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6deb61:{NFSU2_TR(0x6deb61);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B6deb64:{NFSU2_TR(0x6deb64);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6deb68:{NFSU2_TR(0x6deb68);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6deb6c:{NFSU2_TR(0x6deb6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6deb70:{NFSU2_TR(0x6deb70);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6deb74:{NFSU2_TR(0x6deb74);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6deb78:{NFSU2_TR(0x6deb78);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6deb7c:{NFSU2_TR(0x6deb7c);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6deb80:{NFSU2_TR(0x6deb80);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6deb84:{NFSU2_TR(0x6deb84);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6deb88:{NFSU2_TR(0x6deb88);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6deb8c:{NFSU2_TR(0x6deb8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6deb90:{NFSU2_TR(0x6deb90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6deb94:{NFSU2_TR(0x6deb94);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6deb98:{NFSU2_TR(0x6deb98);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6deb9c:{NFSU2_TR(0x6deb9c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6deba0:{NFSU2_TR(0x6deba0);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6deba4:{NFSU2_TR(0x6deba4);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6deba8:{NFSU2_TR(0x6deba8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6debac:{NFSU2_TR(0x6debac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6debb0:{NFSU2_TR(0x6debb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6debb4:{NFSU2_TR(0x6debb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6debb8:{NFSU2_TR(0x6debb8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6debbc:{NFSU2_TR(0x6debbc);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6debc0:{NFSU2_TR(0x6debc0);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6debc4:{NFSU2_TR(0x6debc4);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6debc8:{NFSU2_TR(0x6debc8);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6debcc:{NFSU2_TR(0x6debcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6debd0:{NFSU2_TR(0x6debd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6debd4:{NFSU2_TR(0x6debd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6debd8:{NFSU2_TR(0x6debd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6debdc:{NFSU2_TR(0x6debdc);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6debe0:{NFSU2_TR(0x6debe0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6debe4:{NFSU2_TR(0x6debe4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6debe8:{NFSU2_TR(0x6debe8);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6debec:{NFSU2_TR(0x6debec);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6debf0:{NFSU2_TR(0x6debf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6debf4:{NFSU2_TR(0x6debf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6debf8:{NFSU2_TR(0x6debf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6debfc:{NFSU2_TR(0x6debfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6dec00:{NFSU2_TR(0x6dec00);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6dec04:{NFSU2_TR(0x6dec04);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6dec08:{NFSU2_TR(0x6dec08);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6dec0c:{NFSU2_TR(0x6dec0c);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6dec10:{NFSU2_TR(0x6dec10);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6dec14:{NFSU2_TR(0x6dec14);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6dec18:{NFSU2_TR(0x6dec18);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6dec1c:{NFSU2_TR(0x6dec1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6dec20:{NFSU2_TR(0x6dec20);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6dec24:{NFSU2_TR(0x6dec24);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6dec28:{NFSU2_TR(0x6dec28);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6dec2c:{NFSU2_TR(0x6dec2c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B6dec30:{NFSU2_TR(0x6dec30);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6dec34:{NFSU2_TR(0x6dec34);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4400))));}
}
B6dec38:{NFSU2_TR(0x6dec38);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6dec3c:{NFSU2_TR(0x6dec3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6dec40:{NFSU2_TR(0x6dec40);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6dec44:{NFSU2_TR(0x6dec44);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6dec48:{NFSU2_TR(0x6dec48);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6dec4c:{NFSU2_TR(0x6dec4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6dec50:{NFSU2_TR(0x6dec50);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6dec54:{NFSU2_TR(0x6dec54);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6dec58:{NFSU2_TR(0x6dec58);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6dec5c:{NFSU2_TR(0x6dec5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dec5d:{NFSU2_TR(0x6dec5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6dec61:{NFSU2_TR(0x6dec61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dec62:{NFSU2_TR(0x6dec62);
w2(R+4260,u16(0xffffull));
}
B6dec64:{NFSU2_TR(0x6dec64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dec65:{NFSU2_TR(0x6dec65);
__builtin_memmove((R+16),(R+20),4);
}
B6dec67:{NFSU2_TR(0x6dec67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dec68:{NFSU2_TR(0x6dec68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dec70:L6dec70:{c.instructions+=130;NFSU2_TR(0x6dec70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dec74:{NFSU2_TR(0x6dec74);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dec78:{NFSU2_TR(0x6dec78);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6dec7b:{NFSU2_TR(0x6dec7b);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dec7e:{NFSU2_TR(0x6dec7e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6dec82:{NFSU2_TR(0x6dec82);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dec86:{NFSU2_TR(0x6dec86);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6dec88:{NFSU2_TR(0x6dec88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dec8a:{NFSU2_TR(0x6dec8a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6dec8c:{NFSU2_TR(0x6dec8c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6dec91:{NFSU2_TR(0x6dec91);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6dec94:{NFSU2_TR(0x6dec94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dec95:{NFSU2_TR(0x6dec95);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dec99:{NFSU2_TR(0x6dec99);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dec9c:{NFSU2_TR(0x6dec9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6dec9f:{NFSU2_TR(0x6dec9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6deca3:{NFSU2_TR(0x6deca3);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B6deca9:{NFSU2_TR(0x6deca9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6decab:{NFSU2_TR(0x6decab);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6decae:{NFSU2_TR(0x6decae);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6decb0:{NFSU2_TR(0x6decb0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6decb2:{NFSU2_TR(0x6decb2);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6decb4:{NFSU2_TR(0x6decb4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6decb6:{NFSU2_TR(0x6decb6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6decb8:{NFSU2_TR(0x6decb8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6decba:{NFSU2_TR(0x6decba);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6decbd:{NFSU2_TR(0x6decbd);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6decc0:{NFSU2_TR(0x6decc0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6decc2:{NFSU2_TR(0x6decc2);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6decc5:{NFSU2_TR(0x6decc5);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6decc8:{NFSU2_TR(0x6decc8);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deccb:{NFSU2_TR(0x6deccb);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6deccd:{NFSU2_TR(0x6deccd);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6decd0:{NFSU2_TR(0x6decd0);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6decd3:{NFSU2_TR(0x6decd3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6decd5:{NFSU2_TR(0x6decd5);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6decd8:{NFSU2_TR(0x6decd8);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6decdb:{NFSU2_TR(0x6decdb);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6decde:{NFSU2_TR(0x6decde);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6dece0:{NFSU2_TR(0x6dece0);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dece3:{NFSU2_TR(0x6dece3);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dece6:{NFSU2_TR(0x6dece6);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6dece8:{NFSU2_TR(0x6dece8);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deceb:{NFSU2_TR(0x6deceb);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6decee:{NFSU2_TR(0x6decee);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6decf1:{NFSU2_TR(0x6decf1);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6decf3:{NFSU2_TR(0x6decf3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6decf6:{NFSU2_TR(0x6decf6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6decf9:{NFSU2_TR(0x6decf9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6decfb:{NFSU2_TR(0x6decfb);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6decfe:{NFSU2_TR(0x6decfe);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ded01:{NFSU2_TR(0x6ded01);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded04:{NFSU2_TR(0x6ded04);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ded06:{NFSU2_TR(0x6ded06);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded09:{NFSU2_TR(0x6ded09);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded0c:{NFSU2_TR(0x6ded0c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ded0e:{NFSU2_TR(0x6ded0e);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded11:{NFSU2_TR(0x6ded11);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ded14:{NFSU2_TR(0x6ded14);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded17:{NFSU2_TR(0x6ded17);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ded19:{NFSU2_TR(0x6ded19);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded1c:{NFSU2_TR(0x6ded1c);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded1f:{NFSU2_TR(0x6ded1f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ded21:{NFSU2_TR(0x6ded21);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded24:{NFSU2_TR(0x6ded24);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ded27:{NFSU2_TR(0x6ded27);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded2a:{NFSU2_TR(0x6ded2a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ded2c:{NFSU2_TR(0x6ded2c);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded2f:{NFSU2_TR(0x6ded2f);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded32:{NFSU2_TR(0x6ded32);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ded34:{NFSU2_TR(0x6ded34);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded37:{NFSU2_TR(0x6ded37);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ded3a:{NFSU2_TR(0x6ded3a);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded3d:{NFSU2_TR(0x6ded3d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ded3f:{NFSU2_TR(0x6ded3f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded42:{NFSU2_TR(0x6ded42);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded45:{NFSU2_TR(0x6ded45);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ded47:{NFSU2_TR(0x6ded47);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded4a:{NFSU2_TR(0x6ded4a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ded4d:{NFSU2_TR(0x6ded4d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded50:{NFSU2_TR(0x6ded50);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ded52:{NFSU2_TR(0x6ded52);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded55:{NFSU2_TR(0x6ded55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ded56:{NFSU2_TR(0x6ded56);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded59:{NFSU2_TR(0x6ded59);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ded5b:{NFSU2_TR(0x6ded5b);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded5e:{NFSU2_TR(0x6ded5e);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ded61:{NFSU2_TR(0x6ded61);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded64:{NFSU2_TR(0x6ded64);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ded66:{NFSU2_TR(0x6ded66);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded69:{NFSU2_TR(0x6ded69);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded6c:{NFSU2_TR(0x6ded6c);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ded6e:{NFSU2_TR(0x6ded6e);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded71:{NFSU2_TR(0x6ded71);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ded74:{NFSU2_TR(0x6ded74);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded77:{NFSU2_TR(0x6ded77);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ded79:{NFSU2_TR(0x6ded79);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded7c:{NFSU2_TR(0x6ded7c);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded7f:{NFSU2_TR(0x6ded7f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ded81:{NFSU2_TR(0x6ded81);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded84:{NFSU2_TR(0x6ded84);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ded87:{NFSU2_TR(0x6ded87);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded8a:{NFSU2_TR(0x6ded8a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ded8c:{NFSU2_TR(0x6ded8c);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded8f:{NFSU2_TR(0x6ded8f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded92:{NFSU2_TR(0x6ded92);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ded94:{NFSU2_TR(0x6ded94);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ded97:{NFSU2_TR(0x6ded97);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ded9a:{NFSU2_TR(0x6ded9a);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ded9d:{NFSU2_TR(0x6ded9d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6ded9f:{NFSU2_TR(0x6ded9f);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deda2:{NFSU2_TR(0x6deda2);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deda5:{NFSU2_TR(0x6deda5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6deda7:{NFSU2_TR(0x6deda7);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dedaa:{NFSU2_TR(0x6dedaa);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6dedad:{NFSU2_TR(0x6dedad);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dedb0:{NFSU2_TR(0x6dedb0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6dedb2:{NFSU2_TR(0x6dedb2);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dedb5:{NFSU2_TR(0x6dedb5);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dedb8:{NFSU2_TR(0x6dedb8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6dedba:{NFSU2_TR(0x6dedba);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dedbd:{NFSU2_TR(0x6dedbd);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6dedc0:{NFSU2_TR(0x6dedc0);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dedc3:{NFSU2_TR(0x6dedc3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6dedc5:{NFSU2_TR(0x6dedc5);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dedc8:{NFSU2_TR(0x6dedc8);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dedcb:{NFSU2_TR(0x6dedcb);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dedce:{NFSU2_TR(0x6dedce);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6dedd1:{NFSU2_TR(0x6dedd1);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dedd4:{NFSU2_TR(0x6dedd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dede0:L6dede0:{c.instructions+=187;NFSU2_TR(0x6dede0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dede4:{NFSU2_TR(0x6dede4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dede8:{NFSU2_TR(0x6dede8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6dedeb:{NFSU2_TR(0x6dedeb);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dedee:{NFSU2_TR(0x6dedee);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6dedf2:{NFSU2_TR(0x6dedf2);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dedf6:{NFSU2_TR(0x6dedf6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6dedf8:{NFSU2_TR(0x6dedf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dedfa:{NFSU2_TR(0x6dedfa);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6dedfc:{NFSU2_TR(0x6dedfc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dedfd:{NFSU2_TR(0x6dedfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dee00:{NFSU2_TR(0x6dee00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dee03:{NFSU2_TR(0x6dee03);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B6dee09:{NFSU2_TR(0x6dee09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dee0a:{NFSU2_TR(0x6dee0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dee0e:{NFSU2_TR(0x6dee0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6dee11:{NFSU2_TR(0x6dee11);
{u32 ea_=u32(r4(R+28)+r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee14:{NFSU2_TR(0x6dee14);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6dee16:{NFSU2_TR(0x6dee16);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dee1a:{NFSU2_TR(0x6dee1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dee1e:{NFSU2_TR(0x6dee1e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee20:{NFSU2_TR(0x6dee20);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B6dee26:{NFSU2_TR(0x6dee26);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6dee29:{NFSU2_TR(0x6dee29);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6dee2b:{NFSU2_TR(0x6dee2b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6dee2d:{NFSU2_TR(0x6dee2d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee2f:{NFSU2_TR(0x6dee2f);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffull))));
}
B6dee35:{NFSU2_TR(0x6dee35);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6dee38:{NFSU2_TR(0x6dee38);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+28)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dee3a:{NFSU2_TR(0x6dee3a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6dee3c:{NFSU2_TR(0x6dee3c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee3e:{NFSU2_TR(0x6dee3e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dee42:{NFSU2_TR(0x6dee42);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee44:{NFSU2_TR(0x6dee44);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6dee46:{NFSU2_TR(0x6dee46);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee48:{NFSU2_TR(0x6dee48);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6dee4a:{NFSU2_TR(0x6dee4a);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee4d:{NFSU2_TR(0x6dee4d);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee50:{NFSU2_TR(0x6dee50);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6dee52:{NFSU2_TR(0x6dee52);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee55:{NFSU2_TR(0x6dee55);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6dee58:{NFSU2_TR(0x6dee58);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee5b:{NFSU2_TR(0x6dee5b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dee5f:{NFSU2_TR(0x6dee5f);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee62:{NFSU2_TR(0x6dee62);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6dee65:{NFSU2_TR(0x6dee65);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee68:{NFSU2_TR(0x6dee68);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6dee6a:{NFSU2_TR(0x6dee6a);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee6d:{NFSU2_TR(0x6dee6d);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee70:{NFSU2_TR(0x6dee70);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6dee72:{NFSU2_TR(0x6dee72);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee75:{NFSU2_TR(0x6dee75);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6dee78:{NFSU2_TR(0x6dee78);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee7b:{NFSU2_TR(0x6dee7b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dee7f:{NFSU2_TR(0x6dee7f);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee82:{NFSU2_TR(0x6dee82);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6dee85:{NFSU2_TR(0x6dee85);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee88:{NFSU2_TR(0x6dee88);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6dee8a:{NFSU2_TR(0x6dee8a);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee8d:{NFSU2_TR(0x6dee8d);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee90:{NFSU2_TR(0x6dee90);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6dee92:{NFSU2_TR(0x6dee92);
{u32 ea_=u32(r4(R+8)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6dee95:{NFSU2_TR(0x6dee95);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6dee98:{NFSU2_TR(0x6dee98);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6dee9b:{NFSU2_TR(0x6dee9b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6dee9f:{NFSU2_TR(0x6dee9f);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deea2:{NFSU2_TR(0x6deea2);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6deea5:{NFSU2_TR(0x6deea5);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deea8:{NFSU2_TR(0x6deea8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6deeaa:{NFSU2_TR(0x6deeaa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deead:{NFSU2_TR(0x6deead);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deeb0:{NFSU2_TR(0x6deeb0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6deeb2:{NFSU2_TR(0x6deeb2);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deeb5:{NFSU2_TR(0x6deeb5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6deeb8:{NFSU2_TR(0x6deeb8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deebb:{NFSU2_TR(0x6deebb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6deebf:{NFSU2_TR(0x6deebf);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deec2:{NFSU2_TR(0x6deec2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6deec5:{NFSU2_TR(0x6deec5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deec8:{NFSU2_TR(0x6deec8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6deeca:{NFSU2_TR(0x6deeca);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deecd:{NFSU2_TR(0x6deecd);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deed0:{NFSU2_TR(0x6deed0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6deed2:{NFSU2_TR(0x6deed2);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deed5:{NFSU2_TR(0x6deed5);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6deed8:{NFSU2_TR(0x6deed8);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deedb:{NFSU2_TR(0x6deedb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6deedf:{NFSU2_TR(0x6deedf);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deee2:{NFSU2_TR(0x6deee2);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6deee5:{NFSU2_TR(0x6deee5);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deee8:{NFSU2_TR(0x6deee8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6deeea:{NFSU2_TR(0x6deeea);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deeed:{NFSU2_TR(0x6deeed);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deef0:{NFSU2_TR(0x6deef0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6deef2:{NFSU2_TR(0x6deef2);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deef5:{NFSU2_TR(0x6deef5);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6deef8:{NFSU2_TR(0x6deef8);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deefb:{NFSU2_TR(0x6deefb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6deeff:{NFSU2_TR(0x6deeff);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def02:{NFSU2_TR(0x6def02);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6def05:{NFSU2_TR(0x6def05);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def08:{NFSU2_TR(0x6def08);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6def0a:{NFSU2_TR(0x6def0a);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def0d:{NFSU2_TR(0x6def0d);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def10:{NFSU2_TR(0x6def10);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6def12:{NFSU2_TR(0x6def12);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def15:{NFSU2_TR(0x6def15);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6def18:{NFSU2_TR(0x6def18);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def1b:{NFSU2_TR(0x6def1b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6def1f:{NFSU2_TR(0x6def1f);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def22:{NFSU2_TR(0x6def22);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6def25:{NFSU2_TR(0x6def25);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def28:{NFSU2_TR(0x6def28);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6def2a:{NFSU2_TR(0x6def2a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def2d:{NFSU2_TR(0x6def2d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def30:{NFSU2_TR(0x6def30);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6def32:{NFSU2_TR(0x6def32);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def35:{NFSU2_TR(0x6def35);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6def38:{NFSU2_TR(0x6def38);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def3b:{NFSU2_TR(0x6def3b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6def3f:{NFSU2_TR(0x6def3f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def42:{NFSU2_TR(0x6def42);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6def45:{NFSU2_TR(0x6def45);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def48:{NFSU2_TR(0x6def48);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6def4a:{NFSU2_TR(0x6def4a);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def4d:{NFSU2_TR(0x6def4d);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def50:{NFSU2_TR(0x6def50);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6def52:{NFSU2_TR(0x6def52);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def55:{NFSU2_TR(0x6def55);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6def58:{NFSU2_TR(0x6def58);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def5b:{NFSU2_TR(0x6def5b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6def5f:{NFSU2_TR(0x6def5f);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def62:{NFSU2_TR(0x6def62);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6def65:{NFSU2_TR(0x6def65);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def68:{NFSU2_TR(0x6def68);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6def6a:{NFSU2_TR(0x6def6a);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def6d:{NFSU2_TR(0x6def6d);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def70:{NFSU2_TR(0x6def70);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6def72:{NFSU2_TR(0x6def72);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def75:{NFSU2_TR(0x6def75);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6def78:{NFSU2_TR(0x6def78);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def7b:{NFSU2_TR(0x6def7b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6def7f:{NFSU2_TR(0x6def7f);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def82:{NFSU2_TR(0x6def82);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6def85:{NFSU2_TR(0x6def85);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def88:{NFSU2_TR(0x6def88);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6def8a:{NFSU2_TR(0x6def8a);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def8d:{NFSU2_TR(0x6def8d);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def90:{NFSU2_TR(0x6def90);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6def92:{NFSU2_TR(0x6def92);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6def95:{NFSU2_TR(0x6def95);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6def98:{NFSU2_TR(0x6def98);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6def9b:{NFSU2_TR(0x6def9b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6def9f:{NFSU2_TR(0x6def9f);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6defa2:{NFSU2_TR(0x6defa2);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6defa5:{NFSU2_TR(0x6defa5);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6defa8:{NFSU2_TR(0x6defa8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6defaa:{NFSU2_TR(0x6defaa);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6defad:{NFSU2_TR(0x6defad);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6defb0:{NFSU2_TR(0x6defb0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6defb2:{NFSU2_TR(0x6defb2);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6defb5:{NFSU2_TR(0x6defb5);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6defb8:{NFSU2_TR(0x6defb8);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6defbb:{NFSU2_TR(0x6defbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6defbc:{NFSU2_TR(0x6defbc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6defc0:{NFSU2_TR(0x6defc0);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6defc3:{NFSU2_TR(0x6defc3);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6defc6:{NFSU2_TR(0x6defc6);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6defc9:{NFSU2_TR(0x6defc9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6defcb:{NFSU2_TR(0x6defcb);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6defce:{NFSU2_TR(0x6defce);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6defd1:{NFSU2_TR(0x6defd1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6defd3:{NFSU2_TR(0x6defd3);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6defd6:{NFSU2_TR(0x6defd6);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6defd9:{NFSU2_TR(0x6defd9);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6defdc:{NFSU2_TR(0x6defdc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6defe0:{NFSU2_TR(0x6defe0);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6defe3:{NFSU2_TR(0x6defe3);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6defe6:{NFSU2_TR(0x6defe6);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6defe9:{NFSU2_TR(0x6defe9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6defeb:{NFSU2_TR(0x6defeb);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6defee:{NFSU2_TR(0x6defee);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deff1:{NFSU2_TR(0x6deff1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6deff3:{NFSU2_TR(0x6deff3);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6deff6:{NFSU2_TR(0x6deff6);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6deff9:{NFSU2_TR(0x6deff9);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6deffc:{NFSU2_TR(0x6deffc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x6df000u,6df);
}
XIT:NFSU2_TR_EXIT(0x6de,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
