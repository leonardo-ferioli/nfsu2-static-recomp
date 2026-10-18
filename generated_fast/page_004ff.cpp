#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ff,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ff,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 page_4ff(Cpu& c){return body_4ff(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ff(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ff001:goto L4ff001;
case 0x4ff006:c.instructions+=15;goto B4ff006;
case 0x4ff00b:c.instructions+=14;goto B4ff00b;
case 0x4ff010:c.instructions+=13;goto B4ff010;
case 0x4ff015:c.instructions+=12;goto B4ff015;
case 0x4ff01c:c.instructions+=11;goto B4ff01c;
case 0x4ff022:c.instructions+=10;goto B4ff022;
case 0x4ff028:c.instructions+=9;goto B4ff028;
case 0x4ff02e:c.instructions+=8;goto B4ff02e;
case 0x4ff034:c.instructions+=7;goto B4ff034;
case 0x4ff03a:c.instructions+=6;goto B4ff03a;
case 0x4ff041:c.instructions+=5;goto B4ff041;
case 0x4ff046:c.instructions+=4;goto B4ff046;
case 0x4ff04d:c.instructions+=3;goto B4ff04d;
case 0x4ff057:c.instructions+=2;goto B4ff057;
case 0x4ff05d:c.instructions+=1;goto B4ff05d;
case 0x4ff05f:goto L4ff05f;
case 0x4ff069:goto L4ff069;
case 0x4ff070:goto L4ff070;
case 0x4ff072:c.instructions+=17;goto B4ff072;
case 0x4ff077:c.instructions+=16;goto B4ff077;
case 0x4ff07c:c.instructions+=15;goto B4ff07c;
case 0x4ff081:c.instructions+=14;goto B4ff081;
case 0x4ff086:c.instructions+=13;goto B4ff086;
case 0x4ff08b:c.instructions+=12;goto B4ff08b;
case 0x4ff090:c.instructions+=11;goto B4ff090;
case 0x4ff095:c.instructions+=10;goto B4ff095;
case 0x4ff09c:c.instructions+=9;goto B4ff09c;
case 0x4ff0a1:c.instructions+=8;goto B4ff0a1;
case 0x4ff0a7:c.instructions+=7;goto B4ff0a7;
case 0x4ff0ad:c.instructions+=6;goto B4ff0ad;
case 0x4ff0b3:c.instructions+=5;goto B4ff0b3;
case 0x4ff0bd:c.instructions+=4;goto B4ff0bd;
case 0x4ff0c7:c.instructions+=3;goto B4ff0c7;
case 0x4ff0cc:c.instructions+=2;goto B4ff0cc;
case 0x4ff0d6:c.instructions+=1;goto B4ff0d6;
case 0x4ff0e0:goto L4ff0e0;
case 0x4ff0e2:c.instructions+=17;goto B4ff0e2;
case 0x4ff0e7:c.instructions+=16;goto B4ff0e7;
case 0x4ff0ec:c.instructions+=15;goto B4ff0ec;
case 0x4ff0f1:c.instructions+=14;goto B4ff0f1;
case 0x4ff0f6:c.instructions+=13;goto B4ff0f6;
case 0x4ff0fb:c.instructions+=12;goto B4ff0fb;
case 0x4ff100:c.instructions+=11;goto B4ff100;
case 0x4ff107:c.instructions+=10;goto B4ff107;
case 0x4ff10c:c.instructions+=9;goto B4ff10c;
case 0x4ff111:c.instructions+=8;goto B4ff111;
case 0x4ff118:c.instructions+=7;goto B4ff118;
case 0x4ff11e:c.instructions+=6;goto B4ff11e;
case 0x4ff124:c.instructions+=5;goto B4ff124;
case 0x4ff12a:c.instructions+=4;goto B4ff12a;
case 0x4ff130:c.instructions+=3;goto B4ff130;
case 0x4ff13a:c.instructions+=2;goto B4ff13a;
case 0x4ff144:c.instructions+=1;goto B4ff144;
case 0x4ff146:goto L4ff146;
case 0x4ff150:goto L4ff150;
case 0x4ff160:goto L4ff160;
case 0x4ff162:c.instructions+=16;goto B4ff162;
case 0x4ff167:c.instructions+=15;goto B4ff167;
case 0x4ff16c:c.instructions+=14;goto B4ff16c;
case 0x4ff171:c.instructions+=13;goto B4ff171;
case 0x4ff176:c.instructions+=12;goto B4ff176;
case 0x4ff17b:c.instructions+=11;goto B4ff17b;
case 0x4ff180:c.instructions+=10;goto B4ff180;
case 0x4ff185:c.instructions+=9;goto B4ff185;
case 0x4ff18c:c.instructions+=8;goto B4ff18c;
case 0x4ff191:c.instructions+=7;goto B4ff191;
case 0x4ff198:c.instructions+=6;goto B4ff198;
case 0x4ff19d:c.instructions+=5;goto B4ff19d;
case 0x4ff1a3:c.instructions+=4;goto B4ff1a3;
case 0x4ff1ad:c.instructions+=3;goto B4ff1ad;
case 0x4ff1b3:c.instructions+=2;goto B4ff1b3;
case 0x4ff1bd:c.instructions+=1;goto B4ff1bd;
case 0x4ff1bf:goto L4ff1bf;
case 0x4ff1c9:goto L4ff1c9;
case 0x4ff1d0:goto L4ff1d0;
case 0x4ff1d4:c.instructions+=4;goto B4ff1d4;
case 0x4ff1da:c.instructions+=3;goto B4ff1da;
case 0x4ff1db:c.instructions+=2;goto B4ff1db;
case 0x4ff1dc:c.instructions+=1;goto B4ff1dc;
case 0x4ff1e1:goto L4ff1e1;
case 0x4ff1e4:c.instructions+=1;goto B4ff1e4;
case 0x4ff1f0:goto L4ff1f0;
case 0x4ff1f2:c.instructions+=6;goto B4ff1f2;
case 0x4ff1f4:c.instructions+=5;goto B4ff1f4;
case 0x4ff1f6:c.instructions+=4;goto B4ff1f6;
case 0x4ff1f9:c.instructions+=3;goto B4ff1f9;
case 0x4ff1fc:c.instructions+=2;goto B4ff1fc;
case 0x4ff1ff:c.instructions+=1;goto B4ff1ff;
case 0x4ff200:goto L4ff200;
case 0x4ff203:c.instructions+=2;goto B4ff203;
case 0x4ff204:c.instructions+=1;goto B4ff204;
case 0x4ff209:goto L4ff209;
case 0x4ff20a:c.instructions+=1;goto B4ff20a;
case 0x4ff210:goto L4ff210;
case 0x4ff215:c.instructions+=4;goto B4ff215;
case 0x4ff216:c.instructions+=3;goto B4ff216;
case 0x4ff218:c.instructions+=2;goto B4ff218;
case 0x4ff21e:c.instructions+=1;goto B4ff21e;
case 0x4ff220:goto L4ff220;
case 0x4ff221:c.instructions+=1;goto B4ff221;
case 0x4ff226:goto L4ff226;
case 0x4ff229:goto L4ff229;
case 0x4ff22b:c.instructions+=2;goto B4ff22b;
case 0x4ff22c:c.instructions+=1;goto B4ff22c;
case 0x4ff230:goto L4ff230;
case 0x4ff232:c.instructions+=4;goto B4ff232;
case 0x4ff238:c.instructions+=3;goto B4ff238;
case 0x4ff23f:c.instructions+=2;goto B4ff23f;
case 0x4ff246:c.instructions+=1;goto B4ff246;
case 0x4ff250:goto L4ff250;
case 0x4ff252:c.instructions+=4;goto B4ff252;
case 0x4ff254:c.instructions+=3;goto B4ff254;
case 0x4ff255:c.instructions+=2;goto B4ff255;
case 0x4ff25a:c.instructions+=1;goto B4ff25a;
case 0x4ff25c:goto L4ff25c;
case 0x4ff25e:goto L4ff25e;
case 0x4ff264:c.instructions+=18;goto B4ff264;
case 0x4ff26a:c.instructions+=17;goto B4ff26a;
case 0x4ff270:c.instructions+=16;goto B4ff270;
case 0x4ff276:c.instructions+=15;goto B4ff276;
case 0x4ff27c:c.instructions+=14;goto B4ff27c;
case 0x4ff282:c.instructions+=13;goto B4ff282;
case 0x4ff288:c.instructions+=12;goto B4ff288;
case 0x4ff28e:c.instructions+=11;goto B4ff28e;
case 0x4ff294:c.instructions+=10;goto B4ff294;
case 0x4ff29a:c.instructions+=9;goto B4ff29a;
case 0x4ff2a0:c.instructions+=8;goto B4ff2a0;
case 0x4ff2a6:c.instructions+=7;goto B4ff2a6;
case 0x4ff2ac:c.instructions+=6;goto B4ff2ac;
case 0x4ff2b2:c.instructions+=5;goto B4ff2b2;
case 0x4ff2b8:c.instructions+=4;goto B4ff2b8;
case 0x4ff2be:c.instructions+=3;goto B4ff2be;
case 0x4ff2c0:c.instructions+=2;goto B4ff2c0;
case 0x4ff2c1:c.instructions+=1;goto B4ff2c1;
case 0x4ff2d0:goto L4ff2d0;
case 0x4ff2d7:c.instructions+=1;goto B4ff2d7;
case 0x4ff2e0:goto L4ff2e0;
case 0x4ff2e4:c.instructions+=2;goto B4ff2e4;
case 0x4ff2e9:c.instructions+=1;goto B4ff2e9;
case 0x4ff2f0:goto L4ff2f0;
case 0x4ff2f4:c.instructions+=1;goto B4ff2f4;
case 0x4ff2f6:goto L4ff2f6;
case 0x4ff2fc:c.instructions+=1;goto B4ff2fc;
case 0x4ff2fe:goto L4ff2fe;
case 0x4ff2ff:c.instructions+=2;goto B4ff2ff;
case 0x4ff302:c.instructions+=1;goto B4ff302;
case 0x4ff304:goto L4ff304;
case 0x4ff306:c.instructions+=1;goto B4ff306;
case 0x4ff307:goto L4ff307;
case 0x4ff309:c.instructions+=1;goto B4ff309;
case 0x4ff310:goto L4ff310;
case 0x4ff316:c.instructions+=2;goto B4ff316;
case 0x4ff318:c.instructions+=1;goto B4ff318;
case 0x4ff31e:goto L4ff31e;
case 0x4ff324:c.instructions+=2;goto B4ff324;
case 0x4ff326:c.instructions+=1;goto B4ff326;
case 0x4ff328:goto L4ff328;
case 0x4ff32c:c.instructions+=2;goto B4ff32c;
case 0x4ff32f:c.instructions+=1;goto B4ff32f;
case 0x4ff331:goto L4ff331;
case 0x4ff334:c.instructions+=1;goto B4ff334;
case 0x4ff336:goto L4ff336;
case 0x4ff339:c.instructions+=1;goto B4ff339;
case 0x4ff33b:goto L4ff33b;
case 0x4ff33e:c.instructions+=1;goto B4ff33e;
case 0x4ff340:goto L4ff340;
case 0x4ff343:c.instructions+=1;goto B4ff343;
case 0x4ff345:goto L4ff345;
case 0x4ff348:c.instructions+=1;goto B4ff348;
case 0x4ff34a:goto L4ff34a;
case 0x4ff350:c.instructions+=2;goto B4ff350;
case 0x4ff353:c.instructions+=1;goto B4ff353;
case 0x4ff355:goto L4ff355;
case 0x4ff358:c.instructions+=1;goto B4ff358;
case 0x4ff35a:goto L4ff35a;
case 0x4ff35d:c.instructions+=1;goto B4ff35d;
case 0x4ff35f:goto L4ff35f;
case 0x4ff362:c.instructions+=1;goto B4ff362;
case 0x4ff364:goto L4ff364;
case 0x4ff367:c.instructions+=1;goto B4ff367;
case 0x4ff369:goto L4ff369;
case 0x4ff36c:c.instructions+=1;goto B4ff36c;
case 0x4ff36e:goto L4ff36e;
case 0x4ff371:c.instructions+=1;goto B4ff371;
case 0x4ff373:goto L4ff373;
case 0x4ff376:c.instructions+=1;goto B4ff376;
case 0x4ff378:goto L4ff378;
case 0x4ff37b:c.instructions+=1;goto B4ff37b;
case 0x4ff37d:goto L4ff37d;
case 0x4ff380:c.instructions+=1;goto B4ff380;
case 0x4ff382:goto L4ff382;
case 0x4ff384:c.instructions+=1;goto B4ff384;
case 0x4ff386:goto L4ff386;
case 0x4ff38b:c.instructions+=1;goto B4ff38b;
case 0x4ff38d:goto L4ff38d;
case 0x4ff392:c.instructions+=1;goto B4ff392;
case 0x4ff394:goto L4ff394;
case 0x4ff395:c.instructions+=1;goto B4ff395;
case 0x4ff39a:goto L4ff39a;
case 0x4ff39d:c.instructions+=2;goto B4ff39d;
case 0x4ff39f:c.instructions+=1;goto B4ff39f;
case 0x4ff3a1:goto L4ff3a1;
case 0x4ff3a3:c.instructions+=1;goto B4ff3a3;
case 0x4ff3a6:goto L4ff3a6;
case 0x4ff3a8:c.instructions+=1;goto B4ff3a8;
case 0x4ff3b0:goto L4ff3b0;
case 0x4ff3b4:c.instructions+=10;goto B4ff3b4;
case 0x4ff3b5:c.instructions+=9;goto B4ff3b5;
case 0x4ff3b6:c.instructions+=8;goto B4ff3b6;
case 0x4ff3b8:c.instructions+=7;goto B4ff3b8;
case 0x4ff3bc:c.instructions+=6;goto B4ff3bc;
case 0x4ff3c2:c.instructions+=5;goto B4ff3c2;
case 0x4ff3c6:c.instructions+=4;goto B4ff3c6;
case 0x4ff3cb:c.instructions+=3;goto B4ff3cb;
case 0x4ff3cc:c.instructions+=2;goto B4ff3cc;
case 0x4ff3d2:c.instructions+=1;goto B4ff3d2;
case 0x4ff3d4:goto L4ff3d4;
case 0x4ff3d9:goto L4ff3d9;
case 0x4ff3dd:c.instructions+=6;goto B4ff3dd;
case 0x4ff3e2:c.instructions+=5;goto B4ff3e2;
case 0x4ff3e8:c.instructions+=4;goto B4ff3e8;
case 0x4ff3e9:c.instructions+=3;goto B4ff3e9;
case 0x4ff3ea:c.instructions+=2;goto B4ff3ea;
case 0x4ff3f0:c.instructions+=1;goto B4ff3f0;
case 0x4ff3f5:goto L4ff3f5;
case 0x4ff3fa:c.instructions+=3;goto B4ff3fa;
case 0x4ff3fb:c.instructions+=2;goto B4ff3fb;
case 0x4ff3fc:c.instructions+=1;goto B4ff3fc;
case 0x4ff401:goto L4ff401;
case 0x4ff402:c.instructions+=1;goto B4ff402;
case 0x4ff407:goto L4ff407;
case 0x4ff40a:c.instructions+=7;goto B4ff40a;
case 0x4ff40b:c.instructions+=6;goto B4ff40b;
case 0x4ff411:c.instructions+=5;goto B4ff411;
case 0x4ff41b:c.instructions+=4;goto B4ff41b;
case 0x4ff422:c.instructions+=3;goto B4ff422;
case 0x4ff423:c.instructions+=2;goto B4ff423;
case 0x4ff424:c.instructions+=1;goto B4ff424;
case 0x4ff430:goto L4ff430;
case 0x4ff432:c.instructions+=19;goto B4ff432;
case 0x4ff434:c.instructions+=18;goto B4ff434;
case 0x4ff43a:c.instructions+=17;goto B4ff43a;
case 0x4ff441:c.instructions+=16;goto B4ff441;
case 0x4ff444:c.instructions+=15;goto B4ff444;
case 0x4ff447:c.instructions+=14;goto B4ff447;
case 0x4ff44a:c.instructions+=13;goto B4ff44a;
case 0x4ff44d:c.instructions+=12;goto B4ff44d;
case 0x4ff450:c.instructions+=11;goto B4ff450;
case 0x4ff453:c.instructions+=10;goto B4ff453;
case 0x4ff456:c.instructions+=9;goto B4ff456;
case 0x4ff459:c.instructions+=8;goto B4ff459;
case 0x4ff45c:c.instructions+=7;goto B4ff45c;
case 0x4ff45f:c.instructions+=6;goto B4ff45f;
case 0x4ff462:c.instructions+=5;goto B4ff462;
case 0x4ff465:c.instructions+=4;goto B4ff465;
case 0x4ff468:c.instructions+=3;goto B4ff468;
case 0x4ff46f:c.instructions+=2;goto B4ff46f;
case 0x4ff472:c.instructions+=1;goto B4ff472;
case 0x4ff480:goto L4ff480;
case 0x4ff484:c.instructions+=4;goto B4ff484;
case 0x4ff485:c.instructions+=3;goto B4ff485;
case 0x4ff487:c.instructions+=2;goto B4ff487;
case 0x4ff48c:c.instructions+=1;goto B4ff48c;
case 0x4ff48e:goto L4ff48e;
case 0x4ff493:c.instructions+=1;goto B4ff493;
case 0x4ff499:goto L4ff499;
case 0x4ff49c:c.instructions+=9;goto B4ff49c;
case 0x4ff49f:c.instructions+=8;goto B4ff49f;
case 0x4ff4a2:c.instructions+=7;goto B4ff4a2;
case 0x4ff4a5:c.instructions+=6;goto B4ff4a5;
case 0x4ff4a8:c.instructions+=5;goto B4ff4a8;
case 0x4ff4ac:c.instructions+=4;goto B4ff4ac;
case 0x4ff4ae:c.instructions+=3;goto B4ff4ae;
case 0x4ff4b0:c.instructions+=2;goto B4ff4b0;
case 0x4ff4b3:c.instructions+=1;goto B4ff4b3;
case 0x4ff4b5:goto L4ff4b5;
case 0x4ff4b7:c.instructions+=1;goto B4ff4b7;
case 0x4ff4bb:goto L4ff4bb;
case 0x4ff4be:c.instructions+=4;goto B4ff4be;
case 0x4ff4c1:c.instructions+=3;goto B4ff4c1;
case 0x4ff4c3:c.instructions+=2;goto B4ff4c3;
case 0x4ff4c6:c.instructions+=1;goto B4ff4c6;
case 0x4ff4c8:goto L4ff4c8;
case 0x4ff4cb:c.instructions+=2;goto B4ff4cb;
case 0x4ff4ce:c.instructions+=1;goto B4ff4ce;
case 0x4ff4d0:goto L4ff4d0;
case 0x4ff4d3:c.instructions+=9;goto B4ff4d3;
case 0x4ff4d6:c.instructions+=8;goto B4ff4d6;
case 0x4ff4d9:c.instructions+=7;goto B4ff4d9;
case 0x4ff4dc:c.instructions+=6;goto B4ff4dc;
case 0x4ff4df:c.instructions+=5;goto B4ff4df;
case 0x4ff4e3:c.instructions+=4;goto B4ff4e3;
case 0x4ff4e5:c.instructions+=3;goto B4ff4e5;
case 0x4ff4e7:c.instructions+=2;goto B4ff4e7;
case 0x4ff4ea:c.instructions+=1;goto B4ff4ea;
case 0x4ff4ec:goto L4ff4ec;
case 0x4ff4ee:c.instructions+=1;goto B4ff4ee;
case 0x4ff4f2:goto L4ff4f2;
case 0x4ff4f5:c.instructions+=4;goto B4ff4f5;
case 0x4ff4f8:c.instructions+=3;goto B4ff4f8;
case 0x4ff4fa:c.instructions+=2;goto B4ff4fa;
case 0x4ff4fd:c.instructions+=1;goto B4ff4fd;
case 0x4ff4ff:goto L4ff4ff;
case 0x4ff502:c.instructions+=1;goto B4ff502;
case 0x4ff505:goto L4ff505;
case 0x4ff507:c.instructions+=2;goto B4ff507;
case 0x4ff50a:c.instructions+=1;goto B4ff50a;
case 0x4ff50c:goto L4ff50c;
case 0x4ff50e:c.instructions+=2;goto B4ff50e;
case 0x4ff510:c.instructions+=1;goto B4ff510;
case 0x4ff513:goto L4ff513;
case 0x4ff515:c.instructions+=2;goto B4ff515;
case 0x4ff516:c.instructions+=1;goto B4ff516;
case 0x4ff519:goto L4ff519;
case 0x4ff51b:goto L4ff51b;
case 0x4ff51d:c.instructions+=1;goto B4ff51d;
case 0x4ff520:goto L4ff520;
case 0x4ff522:c.instructions+=2;goto B4ff522;
case 0x4ff523:c.instructions+=1;goto B4ff523;
case 0x4ff530:goto L4ff530;
case 0x4ff533:c.instructions+=2;goto B4ff533;
case 0x4ff535:c.instructions+=1;goto B4ff535;
case 0x4ff537:goto L4ff537;
case 0x4ff539:c.instructions+=1;goto B4ff539;
case 0x4ff53c:goto L4ff53c;
case 0x4ff53e:c.instructions+=1;goto B4ff53e;
case 0x4ff550:goto L4ff550;
case 0x4ff554:c.instructions+=8;goto B4ff554;
case 0x4ff557:c.instructions+=7;goto B4ff557;
case 0x4ff55a:c.instructions+=6;goto B4ff55a;
case 0x4ff55e:c.instructions+=5;goto B4ff55e;
case 0x4ff561:c.instructions+=4;goto B4ff561;
case 0x4ff564:c.instructions+=3;goto B4ff564;
case 0x4ff566:c.instructions+=2;goto B4ff566;
case 0x4ff569:c.instructions+=1;goto B4ff569;
case 0x4ff56b:goto L4ff56b;
case 0x4ff56e:c.instructions+=1;goto B4ff56e;
case 0x4ff571:goto L4ff571;
case 0x4ff574:c.instructions+=4;goto B4ff574;
case 0x4ff577:c.instructions+=3;goto B4ff577;
case 0x4ff579:c.instructions+=2;goto B4ff579;
case 0x4ff57c:c.instructions+=1;goto B4ff57c;
case 0x4ff57e:goto L4ff57e;
case 0x4ff581:c.instructions+=1;goto B4ff581;
case 0x4ff584:goto L4ff584;
case 0x4ff590:goto L4ff590;
case 0x4ff594:c.instructions+=4;goto B4ff594;
case 0x4ff595:c.instructions+=3;goto B4ff595;
case 0x4ff597:c.instructions+=2;goto B4ff597;
case 0x4ff59c:c.instructions+=1;goto B4ff59c;
case 0x4ff59e:goto L4ff59e;
case 0x4ff5a1:c.instructions+=9;goto B4ff5a1;
case 0x4ff5a4:c.instructions+=8;goto B4ff5a4;
case 0x4ff5a7:c.instructions+=7;goto B4ff5a7;
case 0x4ff5aa:c.instructions+=6;goto B4ff5aa;
case 0x4ff5ad:c.instructions+=5;goto B4ff5ad;
case 0x4ff5b1:c.instructions+=4;goto B4ff5b1;
case 0x4ff5b3:c.instructions+=3;goto B4ff5b3;
case 0x4ff5b5:c.instructions+=2;goto B4ff5b5;
case 0x4ff5b8:c.instructions+=1;goto B4ff5b8;
case 0x4ff5ba:goto L4ff5ba;
case 0x4ff5bc:c.instructions+=1;goto B4ff5bc;
case 0x4ff5c0:goto L4ff5c0;
case 0x4ff5c3:c.instructions+=4;goto B4ff5c3;
case 0x4ff5c6:c.instructions+=3;goto B4ff5c6;
case 0x4ff5c8:c.instructions+=2;goto B4ff5c8;
case 0x4ff5cb:c.instructions+=1;goto B4ff5cb;
case 0x4ff5cd:goto L4ff5cd;
case 0x4ff5d0:c.instructions+=2;goto B4ff5d0;
case 0x4ff5d3:c.instructions+=1;goto B4ff5d3;
case 0x4ff5d5:goto L4ff5d5;
case 0x4ff5da:c.instructions+=1;goto B4ff5da;
case 0x4ff5dc:goto L4ff5dc;
case 0x4ff5df:c.instructions+=9;goto B4ff5df;
case 0x4ff5e2:c.instructions+=8;goto B4ff5e2;
case 0x4ff5e5:c.instructions+=7;goto B4ff5e5;
case 0x4ff5e8:c.instructions+=6;goto B4ff5e8;
case 0x4ff5eb:c.instructions+=5;goto B4ff5eb;
case 0x4ff5ef:c.instructions+=4;goto B4ff5ef;
case 0x4ff5f1:c.instructions+=3;goto B4ff5f1;
case 0x4ff5f3:c.instructions+=2;goto B4ff5f3;
case 0x4ff5f6:c.instructions+=1;goto B4ff5f6;
case 0x4ff5f8:goto L4ff5f8;
case 0x4ff5fa:c.instructions+=1;goto B4ff5fa;
case 0x4ff5fe:goto L4ff5fe;
case 0x4ff601:c.instructions+=4;goto B4ff601;
case 0x4ff604:c.instructions+=3;goto B4ff604;
case 0x4ff606:c.instructions+=2;goto B4ff606;
case 0x4ff609:c.instructions+=1;goto B4ff609;
case 0x4ff60b:goto L4ff60b;
case 0x4ff60e:c.instructions+=1;goto B4ff60e;
case 0x4ff611:goto L4ff611;
case 0x4ff613:c.instructions+=2;goto B4ff613;
case 0x4ff616:c.instructions+=1;goto B4ff616;
case 0x4ff618:goto L4ff618;
case 0x4ff61a:c.instructions+=2;goto B4ff61a;
case 0x4ff61c:c.instructions+=1;goto B4ff61c;
case 0x4ff61f:goto L4ff61f;
case 0x4ff621:c.instructions+=2;goto B4ff621;
case 0x4ff622:c.instructions+=1;goto B4ff622;
case 0x4ff625:goto L4ff625;
case 0x4ff627:goto L4ff627;
case 0x4ff629:c.instructions+=1;goto B4ff629;
case 0x4ff62c:goto L4ff62c;
case 0x4ff62e:c.instructions+=2;goto B4ff62e;
case 0x4ff62f:c.instructions+=1;goto B4ff62f;
case 0x4ff640:goto L4ff640;
case 0x4ff644:c.instructions+=3;goto B4ff644;
case 0x4ff646:c.instructions+=2;goto B4ff646;
case 0x4ff64b:c.instructions+=1;goto B4ff64b;
case 0x4ff650:goto L4ff650;
case 0x4ff652:c.instructions+=1;goto B4ff652;
case 0x4ff654:goto L4ff654;
case 0x4ff657:c.instructions+=3;goto B4ff657;
case 0x4ff658:c.instructions+=2;goto B4ff658;
case 0x4ff65e:c.instructions+=1;goto B4ff65e;
case 0x4ff660:goto L4ff660;
case 0x4ff665:c.instructions+=1;goto B4ff665;
case 0x4ff666:goto L4ff666;
case 0x4ff669:c.instructions+=3;goto B4ff669;
case 0x4ff66e:c.instructions+=2;goto B4ff66e;
case 0x4ff670:c.instructions+=1;goto B4ff670;
case 0x4ff672:goto L4ff672;
case 0x4ff675:c.instructions+=1;goto B4ff675;
case 0x4ff680:goto L4ff680;
case 0x4ff681:c.instructions+=2;goto B4ff681;
case 0x4ff682:c.instructions+=1;goto B4ff682;
case 0x4ff687:goto L4ff687;
case 0x4ff689:c.instructions+=3;goto B4ff689;
case 0x4ff68c:c.instructions+=2;goto B4ff68c;
case 0x4ff691:c.instructions+=1;goto B4ff691;
case 0x4ff693:goto L4ff693;
case 0x4ff696:c.instructions+=1;goto B4ff696;
case 0x4ff698:goto L4ff698;
case 0x4ff69b:c.instructions+=3;goto B4ff69b;
case 0x4ff69c:c.instructions+=2;goto B4ff69c;
case 0x4ff6a2:c.instructions+=1;goto B4ff6a2;
case 0x4ff6a4:goto L4ff6a4;
case 0x4ff6a6:goto L4ff6a6;
case 0x4ff6a9:c.instructions+=4;goto B4ff6a9;
case 0x4ff6ab:c.instructions+=3;goto B4ff6ab;
case 0x4ff6ad:c.instructions+=2;goto B4ff6ad;
case 0x4ff6af:c.instructions+=1;goto B4ff6af;
case 0x4ff6b1:goto L4ff6b1;
case 0x4ff6b3:goto L4ff6b3;
case 0x4ff6b5:goto L4ff6b5;
case 0x4ff6bc:c.instructions+=1;goto B4ff6bc;
case 0x4ff6be:goto L4ff6be;
case 0x4ff6bf:c.instructions+=2;goto B4ff6bf;
case 0x4ff6c2:c.instructions+=1;goto B4ff6c2;
case 0x4ff6c4:goto L4ff6c4;
case 0x4ff6c6:goto L4ff6c6;
case 0x4ff6c9:c.instructions+=1;goto B4ff6c9;
case 0x4ff6cb:goto L4ff6cb;
case 0x4ff6ce:c.instructions+=3;goto B4ff6ce;
case 0x4ff6cf:c.instructions+=2;goto B4ff6cf;
case 0x4ff6d5:c.instructions+=1;goto B4ff6d5;
case 0x4ff6d7:goto L4ff6d7;
case 0x4ff6d9:goto L4ff6d9;
case 0x4ff6dc:c.instructions+=2;goto B4ff6dc;
case 0x4ff6e2:c.instructions+=1;goto B4ff6e2;
case 0x4ff6e4:goto L4ff6e4;
case 0x4ff6eb:c.instructions+=2;goto B4ff6eb;
case 0x4ff6ed:c.instructions+=1;goto B4ff6ed;
case 0x4ff6ef:goto L4ff6ef;
case 0x4ff6f1:goto L4ff6f1;
case 0x4ff6f4:c.instructions+=3;goto B4ff6f4;
case 0x4ff6f7:c.instructions+=2;goto B4ff6f7;
case 0x4ff6f9:c.instructions+=1;goto B4ff6f9;
case 0x4ff6fb:goto L4ff6fb;
case 0x4ff6fd:c.instructions+=14;goto B4ff6fd;
case 0x4ff700:c.instructions+=13;goto B4ff700;
case 0x4ff703:c.instructions+=12;goto B4ff703;
case 0x4ff704:c.instructions+=11;goto B4ff704;
case 0x4ff70a:c.instructions+=10;goto B4ff70a;
case 0x4ff710:c.instructions+=9;goto B4ff710;
case 0x4ff712:c.instructions+=8;goto B4ff712;
case 0x4ff718:c.instructions+=7;goto B4ff718;
case 0x4ff71f:c.instructions+=6;goto B4ff71f;
case 0x4ff722:c.instructions+=5;goto B4ff722;
case 0x4ff724:c.instructions+=4;goto B4ff724;
case 0x4ff725:c.instructions+=3;goto B4ff725;
case 0x4ff72a:c.instructions+=2;goto B4ff72a;
case 0x4ff72b:c.instructions+=1;goto B4ff72b;
case 0x4ff72d:goto L4ff72d;
case 0x4ff72f:c.instructions+=2;goto B4ff72f;
case 0x4ff730:c.instructions+=1;goto B4ff730;
case 0x4ff735:goto L4ff735;
case 0x4ff73b:c.instructions+=7;goto B4ff73b;
case 0x4ff740:c.instructions+=6;goto B4ff740;
case 0x4ff741:c.instructions+=5;goto B4ff741;
case 0x4ff742:c.instructions+=4;goto B4ff742;
case 0x4ff747:c.instructions+=3;goto B4ff747;
case 0x4ff74c:c.instructions+=2;goto B4ff74c;
case 0x4ff74d:c.instructions+=1;goto B4ff74d;
case 0x4ff752:goto L4ff752;
case 0x4ff755:goto L4ff755;
case 0x4ff757:c.instructions+=4;goto B4ff757;
case 0x4ff759:c.instructions+=3;goto B4ff759;
case 0x4ff75b:c.instructions+=2;goto B4ff75b;
case 0x4ff760:c.instructions+=1;goto B4ff760;
case 0x4ff765:goto L4ff765;
case 0x4ff76a:c.instructions+=1;goto B4ff76a;
case 0x4ff76f:goto L4ff76f;
case 0x4ff772:c.instructions+=1;goto B4ff772;
case 0x4ff780:goto L4ff780;
case 0x4ff786:c.instructions+=5;goto B4ff786;
case 0x4ff787:c.instructions+=4;goto B4ff787;
case 0x4ff788:c.instructions+=3;goto B4ff788;
case 0x4ff78a:c.instructions+=2;goto B4ff78a;
case 0x4ff78c:c.instructions+=1;goto B4ff78c;
case 0x4ff791:goto L4ff791;
case 0x4ff793:c.instructions+=1;goto B4ff793;
case 0x4ff799:goto L4ff799;
case 0x4ff79c:c.instructions+=3;goto B4ff79c;
case 0x4ff79d:c.instructions+=2;goto B4ff79d;
case 0x4ff7a2:c.instructions+=1;goto B4ff7a2;
case 0x4ff7a4:goto L4ff7a4;
case 0x4ff7a6:goto L4ff7a6;
case 0x4ff7aa:c.instructions+=1;goto B4ff7aa;
case 0x4ff7ac:goto L4ff7ac;
case 0x4ff7b1:c.instructions+=2;goto B4ff7b1;
case 0x4ff7b2:c.instructions+=1;goto B4ff7b2;
case 0x4ff7b7:goto L4ff7b7;
case 0x4ff7ba:c.instructions+=5;goto B4ff7ba;
case 0x4ff7c0:c.instructions+=4;goto B4ff7c0;
case 0x4ff7c3:c.instructions+=3;goto B4ff7c3;
case 0x4ff7c6:c.instructions+=2;goto B4ff7c6;
case 0x4ff7c8:c.instructions+=1;goto B4ff7c8;
case 0x4ff7ca:goto L4ff7ca;
case 0x4ff7cc:c.instructions+=2;goto B4ff7cc;
case 0x4ff7cd:c.instructions+=1;goto B4ff7cd;
case 0x4ff7d2:goto L4ff7d2;
case 0x4ff7d5:c.instructions+=2;goto B4ff7d5;
case 0x4ff7d8:c.instructions+=1;goto B4ff7d8;
case 0x4ff7db:goto L4ff7db;
case 0x4ff7df:c.instructions+=1;goto B4ff7df;
case 0x4ff7e1:goto L4ff7e1;
case 0x4ff7e4:c.instructions+=2;goto B4ff7e4;
case 0x4ff7e7:c.instructions+=1;goto B4ff7e7;
case 0x4ff7e9:goto L4ff7e9;
case 0x4ff7ec:c.instructions+=3;goto B4ff7ec;
case 0x4ff7ee:c.instructions+=2;goto B4ff7ee;
case 0x4ff7ef:c.instructions+=1;goto B4ff7ef;
case 0x4ff7f4:goto L4ff7f4;
case 0x4ff7f7:c.instructions+=2;goto B4ff7f7;
case 0x4ff7fa:c.instructions+=1;goto B4ff7fa;
case 0x4ff7fd:goto L4ff7fd;
case 0x4ff801:c.instructions+=1;goto B4ff801;
case 0x4ff803:goto L4ff803;
case 0x4ff806:c.instructions+=2;goto B4ff806;
case 0x4ff809:c.instructions+=1;goto B4ff809;
case 0x4ff80b:goto L4ff80b;
case 0x4ff80e:c.instructions+=3;goto B4ff80e;
case 0x4ff810:c.instructions+=2;goto B4ff810;
case 0x4ff811:c.instructions+=1;goto B4ff811;
case 0x4ff816:goto L4ff816;
case 0x4ff819:c.instructions+=2;goto B4ff819;
case 0x4ff81c:c.instructions+=1;goto B4ff81c;
case 0x4ff81f:goto L4ff81f;
case 0x4ff823:c.instructions+=1;goto B4ff823;
case 0x4ff829:goto L4ff829;
case 0x4ff82f:c.instructions+=1;goto B4ff82f;
case 0x4ff835:goto L4ff835;
case 0x4ff838:c.instructions+=5;goto B4ff838;
case 0x4ff839:c.instructions+=4;goto B4ff839;
case 0x4ff83a:c.instructions+=3;goto B4ff83a;
case 0x4ff83b:c.instructions+=2;goto B4ff83b;
case 0x4ff83d:c.instructions+=1;goto B4ff83d;
case 0x4ff842:goto L4ff842;
case 0x4ff848:c.instructions+=3;goto B4ff848;
case 0x4ff849:c.instructions+=2;goto B4ff849;
case 0x4ff84b:c.instructions+=1;goto B4ff84b;
case 0x4ff850:goto L4ff850;
case 0x4ff856:c.instructions+=3;goto B4ff856;
case 0x4ff859:c.instructions+=2;goto B4ff859;
case 0x4ff85b:c.instructions+=1;goto B4ff85b;
case 0x4ff85d:goto L4ff85d;
case 0x4ff863:c.instructions+=1;goto B4ff863;
case 0x4ff865:goto L4ff865;
case 0x4ff868:c.instructions+=2;goto B4ff868;
case 0x4ff86e:c.instructions+=1;goto B4ff86e;
case 0x4ff873:goto L4ff873;
case 0x4ff874:c.instructions+=1;goto B4ff874;
case 0x4ff879:goto L4ff879;
case 0x4ff87c:goto L4ff87c;
case 0x4ff87f:c.instructions+=6;goto B4ff87f;
case 0x4ff880:c.instructions+=5;goto B4ff880;
case 0x4ff881:c.instructions+=4;goto B4ff881;
case 0x4ff882:c.instructions+=3;goto B4ff882;
case 0x4ff884:c.instructions+=2;goto B4ff884;
case 0x4ff885:c.instructions+=1;goto B4ff885;
case 0x4ff88a:goto L4ff88a;
case 0x4ff88d:c.instructions+=8;goto B4ff88d;
case 0x4ff890:c.instructions+=7;goto B4ff890;
case 0x4ff891:c.instructions+=6;goto B4ff891;
case 0x4ff894:c.instructions+=5;goto B4ff894;
case 0x4ff89a:c.instructions+=4;goto B4ff89a;
case 0x4ff89b:c.instructions+=3;goto B4ff89b;
case 0x4ff89d:c.instructions+=2;goto B4ff89d;
case 0x4ff8a2:c.instructions+=1;goto B4ff8a2;
case 0x4ff8a7:goto L4ff8a7;
case 0x4ff8ad:c.instructions+=3;goto B4ff8ad;
case 0x4ff8ae:c.instructions+=2;goto B4ff8ae;
case 0x4ff8af:c.instructions+=1;goto B4ff8af;
case 0x4ff8b4:goto L4ff8b4;
case 0x4ff8b8:c.instructions+=3;goto B4ff8b8;
case 0x4ff8b9:c.instructions+=2;goto B4ff8b9;
case 0x4ff8ba:c.instructions+=1;goto B4ff8ba;
case 0x4ff8bc:goto L4ff8bc;
case 0x4ff8c1:goto L4ff8c1;
case 0x4ff8c3:c.instructions+=1;goto B4ff8c3;
case 0x4ff8c5:goto L4ff8c5;
case 0x4ff8ca:goto L4ff8ca;
case 0x4ff8cf:goto L4ff8cf;
case 0x4ff8d1:c.instructions+=1;goto B4ff8d1;
case 0x4ff8d3:goto L4ff8d3;
case 0x4ff8d6:c.instructions+=2;goto B4ff8d6;
case 0x4ff8d9:c.instructions+=1;goto B4ff8d9;
case 0x4ff8db:goto L4ff8db;
case 0x4ff8e1:c.instructions+=6;goto B4ff8e1;
case 0x4ff8e2:c.instructions+=5;goto B4ff8e2;
case 0x4ff8e3:c.instructions+=4;goto B4ff8e3;
case 0x4ff8e4:c.instructions+=3;goto B4ff8e4;
case 0x4ff8e6:c.instructions+=2;goto B4ff8e6;
case 0x4ff8e7:c.instructions+=1;goto B4ff8e7;
case 0x4ff8ec:goto L4ff8ec;
case 0x4ff8ef:c.instructions+=2;goto B4ff8ef;
case 0x4ff8f2:c.instructions+=1;goto B4ff8f2;
case 0x4ff8f9:goto L4ff8f9;
case 0x4ff8fd:c.instructions+=1;goto B4ff8fd;
case 0x4ff8ff:goto L4ff8ff;
case 0x4ff902:c.instructions+=2;goto B4ff902;
case 0x4ff905:c.instructions+=1;goto B4ff905;
case 0x4ff907:goto L4ff907;
case 0x4ff90d:c.instructions+=7;goto B4ff90d;
case 0x4ff90e:c.instructions+=6;goto B4ff90e;
case 0x4ff90f:c.instructions+=5;goto B4ff90f;
case 0x4ff910:c.instructions+=4;goto B4ff910;
case 0x4ff913:c.instructions+=3;goto B4ff913;
case 0x4ff915:c.instructions+=2;goto B4ff915;
case 0x4ff916:c.instructions+=1;goto B4ff916;
case 0x4ff91b:goto L4ff91b;
case 0x4ff91e:c.instructions+=2;goto B4ff91e;
case 0x4ff921:c.instructions+=1;goto B4ff921;
case 0x4ff928:goto L4ff928;
case 0x4ff92c:c.instructions+=1;goto B4ff92c;
case 0x4ff92e:goto L4ff92e;
case 0x4ff931:c.instructions+=2;goto B4ff931;
case 0x4ff934:c.instructions+=1;goto B4ff934;
case 0x4ff936:goto L4ff936;
case 0x4ff93c:c.instructions+=7;goto B4ff93c;
case 0x4ff93d:c.instructions+=6;goto B4ff93d;
case 0x4ff93e:c.instructions+=5;goto B4ff93e;
case 0x4ff93f:c.instructions+=4;goto B4ff93f;
case 0x4ff942:c.instructions+=3;goto B4ff942;
case 0x4ff944:c.instructions+=2;goto B4ff944;
case 0x4ff945:c.instructions+=1;goto B4ff945;
case 0x4ff94a:goto L4ff94a;
case 0x4ff94d:c.instructions+=2;goto B4ff94d;
case 0x4ff950:c.instructions+=1;goto B4ff950;
case 0x4ff957:goto L4ff957;
case 0x4ff95b:c.instructions+=4;goto B4ff95b;
case 0x4ff95c:c.instructions+=3;goto B4ff95c;
case 0x4ff95e:c.instructions+=2;goto B4ff95e;
case 0x4ff95f:c.instructions+=1;goto B4ff95f;
case 0x4ff961:goto L4ff961;
case 0x4ff966:c.instructions+=1;goto B4ff966;
case 0x4ff96b:goto L4ff96b;
case 0x4ff96c:goto L4ff96c;
case 0x4ff970:goto L4ff970;
case 0x4ff975:c.instructions+=1;goto B4ff975;
case 0x4ff980:goto L4ff980;
case 0x4ff981:c.instructions+=3;goto B4ff981;
case 0x4ff985:c.instructions+=2;goto B4ff985;
case 0x4ff987:c.instructions+=1;goto B4ff987;
case 0x4ff989:goto L4ff989;
case 0x4ff98d:c.instructions+=2;goto B4ff98d;
case 0x4ff98f:c.instructions+=1;goto B4ff98f;
case 0x4ff991:goto L4ff991;
case 0x4ff994:c.instructions+=3;goto B4ff994;
case 0x4ff996:c.instructions+=2;goto B4ff996;
case 0x4ff999:c.instructions+=1;goto B4ff999;
case 0x4ff99b:goto L4ff99b;
case 0x4ff99c:c.instructions+=2;goto B4ff99c;
case 0x4ff9a0:c.instructions+=1;goto B4ff9a0;
case 0x4ff9a1:goto L4ff9a1;
case 0x4ff9a3:c.instructions+=1;goto B4ff9a3;
case 0x4ff9a5:goto L4ff9a5;
case 0x4ff9a9:c.instructions+=1;goto B4ff9a9;
case 0x4ff9ab:goto L4ff9ab;
case 0x4ff9af:c.instructions+=1;goto B4ff9af;
case 0x4ff9b1:goto L4ff9b1;
case 0x4ff9b3:c.instructions+=5;goto B4ff9b3;
case 0x4ff9b5:c.instructions+=4;goto B4ff9b5;
case 0x4ff9b6:c.instructions+=3;goto B4ff9b6;
case 0x4ff9b9:c.instructions+=2;goto B4ff9b9;
case 0x4ff9ba:c.instructions+=1;goto B4ff9ba;
case 0x4ff9bc:goto L4ff9bc;
case 0x4ff9bf:goto L4ff9bf;
case 0x4ff9c2:c.instructions+=2;goto B4ff9c2;
case 0x4ff9c5:c.instructions+=1;goto B4ff9c5;
case 0x4ff9c7:goto L4ff9c7;
case 0x4ff9c8:goto L4ff9c8;
case 0x4ff9cb:goto L4ff9cb;
case 0x4ff9cc:c.instructions+=1;goto B4ff9cc;
case 0x4ff9d0:goto L4ff9d0;
case 0x4ff9d1:c.instructions+=12;goto B4ff9d1;
case 0x4ff9d7:c.instructions+=11;goto B4ff9d7;
case 0x4ff9d8:c.instructions+=10;goto B4ff9d8;
case 0x4ff9d9:c.instructions+=9;goto B4ff9d9;
case 0x4ff9df:c.instructions+=8;goto B4ff9df;
case 0x4ff9e0:c.instructions+=7;goto B4ff9e0;
case 0x4ff9e2:c.instructions+=6;goto B4ff9e2;
case 0x4ff9e3:c.instructions+=5;goto B4ff9e3;
case 0x4ff9e5:c.instructions+=4;goto B4ff9e5;
case 0x4ff9e7:c.instructions+=3;goto B4ff9e7;
case 0x4ff9ea:c.instructions+=2;goto B4ff9ea;
case 0x4ff9ec:c.instructions+=1;goto B4ff9ec;
case 0x4ff9ee:goto L4ff9ee;
case 0x4ff9f0:goto L4ff9f0;
case 0x4ff9f2:c.instructions+=3;goto B4ff9f2;
case 0x4ff9f4:c.instructions+=2;goto B4ff9f4;
case 0x4ff9f7:c.instructions+=1;goto B4ff9f7;
case 0x4ff9f9:goto L4ff9f9;
case 0x4ff9fc:c.instructions+=1;goto B4ff9fc;
case 0x4ff9fe:goto L4ff9fe;
case 0x4ffa00:c.instructions+=1;goto B4ffa00;
case 0x4ffa02:goto L4ffa02;
case 0x4ffa05:c.instructions+=1;goto B4ffa05;
case 0x4ffa07:goto L4ffa07;
case 0x4ffa09:c.instructions+=1;goto B4ffa09;
case 0x4ffa0b:goto L4ffa0b;
case 0x4ffa0d:c.instructions+=1;goto B4ffa0d;
case 0x4ffa0f:goto L4ffa0f;
case 0x4ffa11:goto L4ffa11;
case 0x4ffa13:goto L4ffa13;
case 0x4ffa15:goto L4ffa15;
case 0x4ffa18:c.instructions+=4;goto B4ffa18;
case 0x4ffa1a:c.instructions+=3;goto B4ffa1a;
case 0x4ffa1d:c.instructions+=2;goto B4ffa1d;
case 0x4ffa1f:c.instructions+=1;goto B4ffa1f;
case 0x4ffa21:goto L4ffa21;
case 0x4ffa25:c.instructions+=5;goto B4ffa25;
case 0x4ffa26:c.instructions+=4;goto B4ffa26;
case 0x4ffa27:c.instructions+=3;goto B4ffa27;
case 0x4ffa28:c.instructions+=2;goto B4ffa28;
case 0x4ffa29:c.instructions+=1;goto B4ffa29;
case 0x4ffa2a:goto L4ffa2a;
case 0x4ffa2e:c.instructions+=5;goto B4ffa2e;
case 0x4ffa2f:c.instructions+=4;goto B4ffa2f;
case 0x4ffa30:c.instructions+=3;goto B4ffa30;
case 0x4ffa31:c.instructions+=2;goto B4ffa31;
case 0x4ffa32:c.instructions+=1;goto B4ffa32;
case 0x4ffa33:goto L4ffa33;
case 0x4ffa37:c.instructions+=5;goto B4ffa37;
case 0x4ffa38:c.instructions+=4;goto B4ffa38;
case 0x4ffa39:c.instructions+=3;goto B4ffa39;
case 0x4ffa3a:c.instructions+=2;goto B4ffa3a;
case 0x4ffa3b:c.instructions+=1;goto B4ffa3b;
case 0x4ffa3c:goto L4ffa3c;
case 0x4ffa3d:c.instructions+=5;goto B4ffa3d;
case 0x4ffa3e:c.instructions+=4;goto B4ffa3e;
case 0x4ffa3f:c.instructions+=3;goto B4ffa3f;
case 0x4ffa41:c.instructions+=2;goto B4ffa41;
case 0x4ffa42:c.instructions+=1;goto B4ffa42;
case 0x4ffa50:goto L4ffa50;
case 0x4ffa54:c.instructions+=1;goto B4ffa54;
case 0x4ffa59:goto L4ffa59;
case 0x4ffa5b:c.instructions+=1;goto B4ffa5b;
case 0x4ffa5d:goto L4ffa5d;
case 0x4ffa62:c.instructions+=1;goto B4ffa62;
case 0x4ffa67:goto L4ffa67;
case 0x4ffa6b:c.instructions+=3;goto B4ffa6b;
case 0x4ffa6f:c.instructions+=2;goto B4ffa6f;
case 0x4ffa73:c.instructions+=1;goto B4ffa73;
case 0x4ffa80:goto L4ffa80;
case 0x4ffa84:c.instructions+=1;goto B4ffa84;
case 0x4ffa89:goto L4ffa89;
case 0x4ffa8b:c.instructions+=1;goto B4ffa8b;
case 0x4ffa8d:goto L4ffa8d;
case 0x4ffa92:c.instructions+=1;goto B4ffa92;
case 0x4ffa97:goto L4ffa97;
case 0x4ffaa0:goto L4ffaa0;
case 0x4ffaa4:c.instructions+=2;goto B4ffaa4;
case 0x4ffaa7:c.instructions+=1;goto B4ffaa7;
case 0x4ffaa9:goto L4ffaa9;
case 0x4ffaae:c.instructions+=1;goto B4ffaae;
case 0x4ffab0:goto L4ffab0;
case 0x4ffab2:c.instructions+=3;goto B4ffab2;
case 0x4ffab7:c.instructions+=2;goto B4ffab7;
case 0x4ffab9:c.instructions+=1;goto B4ffab9;
case 0x4ffac0:goto L4ffac0;
case 0x4ffac5:goto L4ffac5;
case 0x4ffac7:c.instructions+=1;goto B4ffac7;
case 0x4ffac9:goto L4ffac9;
case 0x4fface:c.instructions+=1;goto B4fface;
case 0x4ffad3:goto L4ffad3;
case 0x4ffae0:goto L4ffae0;
case 0x4ffae4:c.instructions+=4;goto B4ffae4;
case 0x4ffae6:c.instructions+=3;goto B4ffae6;
case 0x4ffae8:c.instructions+=2;goto B4ffae8;
case 0x4ffaee:c.instructions+=1;goto B4ffaee;
case 0x4ffaf0:goto L4ffaf0;
case 0x4ffaf5:c.instructions+=4;goto B4ffaf5;
case 0x4ffafa:c.instructions+=3;goto B4ffafa;
case 0x4ffaff:c.instructions+=2;goto B4ffaff;
case 0x4ffb04:c.instructions+=1;goto B4ffb04;
case 0x4ffb09:goto L4ffb09;
case 0x4ffb10:goto L4ffb10;
case 0x4ffb13:c.instructions+=10;goto B4ffb13;
case 0x4ffb14:c.instructions+=9;goto B4ffb14;
case 0x4ffb18:c.instructions+=8;goto B4ffb18;
case 0x4ffb19:c.instructions+=7;goto B4ffb19;
case 0x4ffb1a:c.instructions+=6;goto B4ffb1a;
case 0x4ffb1b:c.instructions+=5;goto B4ffb1b;
case 0x4ffb1c:c.instructions+=4;goto B4ffb1c;
case 0x4ffb1e:c.instructions+=3;goto B4ffb1e;
case 0x4ffb20:c.instructions+=2;goto B4ffb20;
case 0x4ffb25:c.instructions+=1;goto B4ffb25;
case 0x4ffb2a:goto L4ffb2a;
case 0x4ffb2e:c.instructions+=4;goto B4ffb2e;
case 0x4ffb31:c.instructions+=3;goto B4ffb31;
case 0x4ffb33:c.instructions+=2;goto B4ffb33;
case 0x4ffb37:c.instructions+=1;goto B4ffb37;
case 0x4ffb3d:goto L4ffb3d;
case 0x4ffb41:c.instructions+=2;goto B4ffb41;
case 0x4ffb42:c.instructions+=1;goto B4ffb42;
case 0x4ffb46:goto L4ffb46;
case 0x4ffb4a:c.instructions+=1;goto B4ffb4a;
case 0x4ffb50:goto L4ffb50;
case 0x4ffb53:c.instructions+=3;goto B4ffb53;
case 0x4ffb54:c.instructions+=2;goto B4ffb54;
case 0x4ffb56:c.instructions+=1;goto B4ffb56;
case 0x4ffb58:goto L4ffb58;
case 0x4ffb5c:c.instructions+=2;goto B4ffb5c;
case 0x4ffb61:c.instructions+=1;goto B4ffb61;
case 0x4ffb66:goto L4ffb66;
case 0x4ffb68:c.instructions+=3;goto B4ffb68;
case 0x4ffb6b:c.instructions+=2;goto B4ffb6b;
case 0x4ffb6e:c.instructions+=1;goto B4ffb6e;
case 0x4ffb70:goto L4ffb70;
case 0x4ffb73:c.instructions+=5;goto B4ffb73;
case 0x4ffb75:c.instructions+=4;goto B4ffb75;
case 0x4ffb77:c.instructions+=3;goto B4ffb77;
case 0x4ffb78:c.instructions+=2;goto B4ffb78;
case 0x4ffb7a:c.instructions+=1;goto B4ffb7a;
case 0x4ffb7c:goto L4ffb7c;
case 0x4ffb80:c.instructions+=3;goto B4ffb80;
case 0x4ffb81:c.instructions+=2;goto B4ffb81;
case 0x4ffb86:c.instructions+=1;goto B4ffb86;
case 0x4ffb8b:goto L4ffb8b;
case 0x4ffb8e:c.instructions+=7;goto B4ffb8e;
case 0x4ffb92:c.instructions+=6;goto B4ffb92;
case 0x4ffb95:c.instructions+=5;goto B4ffb95;
case 0x4ffb99:c.instructions+=4;goto B4ffb99;
case 0x4ffb9c:c.instructions+=3;goto B4ffb9c;
case 0x4ffb9e:c.instructions+=2;goto B4ffb9e;
case 0x4ffba3:c.instructions+=1;goto B4ffba3;
case 0x4ffba5:goto L4ffba5;
case 0x4ffba7:c.instructions+=3;goto B4ffba7;
case 0x4ffbaa:c.instructions+=2;goto B4ffbaa;
case 0x4ffbad:c.instructions+=1;goto B4ffbad;
case 0x4ffbaf:goto L4ffbaf;
case 0x4ffbb2:c.instructions+=7;goto B4ffbb2;
case 0x4ffbb6:c.instructions+=6;goto B4ffbb6;
case 0x4ffbb7:c.instructions+=5;goto B4ffbb7;
case 0x4ffbb9:c.instructions+=4;goto B4ffbb9;
case 0x4ffbbc:c.instructions+=3;goto B4ffbbc;
case 0x4ffbbd:c.instructions+=2;goto B4ffbbd;
case 0x4ffbc0:c.instructions+=1;goto B4ffbc0;
case 0x4ffbc2:goto L4ffbc2;
case 0x4ffbc4:c.instructions+=3;goto B4ffbc4;
case 0x4ffbc7:c.instructions+=2;goto B4ffbc7;
case 0x4ffbca:c.instructions+=1;goto B4ffbca;
case 0x4ffbcc:goto L4ffbcc;
case 0x4ffbcf:c.instructions+=10;goto B4ffbcf;
case 0x4ffbd3:c.instructions+=9;goto B4ffbd3;
case 0x4ffbd7:c.instructions+=8;goto B4ffbd7;
case 0x4ffbd9:c.instructions+=7;goto B4ffbd9;
case 0x4ffbdd:c.instructions+=6;goto B4ffbdd;
case 0x4ffbe0:c.instructions+=5;goto B4ffbe0;
case 0x4ffbe2:c.instructions+=4;goto B4ffbe2;
case 0x4ffbe5:c.instructions+=3;goto B4ffbe5;
case 0x4ffbe7:c.instructions+=2;goto B4ffbe7;
case 0x4ffbec:c.instructions+=1;goto B4ffbec;
case 0x4ffbee:goto L4ffbee;
case 0x4ffbf4:goto L4ffbf4;
case 0x4ffbf8:c.instructions+=2;goto B4ffbf8;
case 0x4ffbfd:c.instructions+=1;goto B4ffbfd;
case 0x4ffbff:goto L4ffbff;
case 0x4ffc03:c.instructions+=4;goto B4ffc03;
case 0x4ffc07:c.instructions+=3;goto B4ffc07;
case 0x4ffc0a:c.instructions+=2;goto B4ffc0a;
case 0x4ffc0f:c.instructions+=1;goto B4ffc0f;
case 0x4ffc11:goto L4ffc11;
case 0x4ffc15:c.instructions+=1;goto B4ffc15;
case 0x4ffc1a:goto L4ffc1a;
case 0x4ffc1f:goto L4ffc1f;
case 0x4ffc23:c.instructions+=3;goto B4ffc23;
case 0x4ffc24:c.instructions+=2;goto B4ffc24;
case 0x4ffc26:c.instructions+=1;goto B4ffc26;
case 0x4ffc2c:goto L4ffc2c;
case 0x4ffc30:c.instructions+=10;goto B4ffc30;
case 0x4ffc31:c.instructions+=9;goto B4ffc31;
case 0x4ffc38:c.instructions+=8;goto B4ffc38;
case 0x4ffc39:c.instructions+=7;goto B4ffc39;
case 0x4ffc3b:c.instructions+=6;goto B4ffc3b;
case 0x4ffc3d:c.instructions+=5;goto B4ffc3d;
case 0x4ffc3e:c.instructions+=4;goto B4ffc3e;
case 0x4ffc41:c.instructions+=3;goto B4ffc41;
case 0x4ffc42:c.instructions+=2;goto B4ffc42;
case 0x4ffc45:c.instructions+=1;goto B4ffc45;
case 0x4ffc50:goto L4ffc50;
case 0x4ffc51:c.instructions+=5;goto B4ffc51;
case 0x4ffc53:c.instructions+=4;goto B4ffc53;
case 0x4ffc58:c.instructions+=3;goto B4ffc58;
case 0x4ffc5a:c.instructions+=2;goto B4ffc5a;
case 0x4ffc5f:c.instructions+=1;goto B4ffc5f;
case 0x4ffc64:goto L4ffc64;
case 0x4ffc66:c.instructions+=1;goto B4ffc66;
case 0x4ffc68:goto L4ffc68;
case 0x4ffc6c:c.instructions+=1;goto B4ffc6c;
case 0x4ffc70:goto L4ffc70;
case 0x4ffc73:c.instructions+=1;goto B4ffc73;
case 0x4ffc75:goto L4ffc75;
case 0x4ffc76:c.instructions+=4;goto B4ffc76;
case 0x4ffc7b:c.instructions+=3;goto B4ffc7b;
case 0x4ffc7d:c.instructions+=2;goto B4ffc7d;
case 0x4ffc82:c.instructions+=1;goto B4ffc82;
case 0x4ffc87:goto L4ffc87;
case 0x4ffc89:c.instructions+=1;goto B4ffc89;
case 0x4ffc8b:goto L4ffc8b;
case 0x4ffc8d:goto L4ffc8d;
case 0x4ffc8e:c.instructions+=1;goto B4ffc8e;
case 0x4ffc90:goto L4ffc90;
case 0x4ffc96:c.instructions+=2;goto B4ffc96;
case 0x4ffc99:c.instructions+=1;goto B4ffc99;
case 0x4ffc9b:goto L4ffc9b;
case 0x4ffca0:c.instructions+=2;goto B4ffca0;
case 0x4ffca2:c.instructions+=1;goto B4ffca2;
case 0x4ffca4:goto L4ffca4;
case 0x4ffcae:goto L4ffcae;
case 0x4ffcaf:c.instructions+=4;goto B4ffcaf;
case 0x4ffcb1:c.instructions+=3;goto B4ffcb1;
case 0x4ffcb3:c.instructions+=2;goto B4ffcb3;
case 0x4ffcb4:c.instructions+=1;goto B4ffcb4;
case 0x4ffcb6:goto L4ffcb6;
case 0x4ffcbc:c.instructions+=2;goto B4ffcbc;
case 0x4ffcc0:c.instructions+=1;goto B4ffcc0;
case 0x4ffcc3:goto L4ffcc3;
case 0x4ffcc5:c.instructions+=1;goto B4ffcc5;
case 0x4ffcc7:goto L4ffcc7;
case 0x4ffcc8:c.instructions+=3;goto B4ffcc8;
case 0x4ffcce:c.instructions+=2;goto B4ffcce;
case 0x4ffcd0:c.instructions+=1;goto B4ffcd0;
case 0x4ffcd2:goto L4ffcd2;
case 0x4ffcd3:c.instructions+=3;goto B4ffcd3;
case 0x4ffcd4:c.instructions+=2;goto B4ffcd4;
case 0x4ffcd6:c.instructions+=1;goto B4ffcd6;
case 0x4ffcd7:goto L4ffcd7;
case 0x4ffcdd:c.instructions+=4;goto B4ffcdd;
case 0x4ffcdf:c.instructions+=3;goto B4ffcdf;
case 0x4ffce0:c.instructions+=2;goto B4ffce0;
case 0x4ffce1:c.instructions+=1;goto B4ffce1;
case 0x4ffcf0:goto L4ffcf0;
case 0x4ffcf4:c.instructions+=8;goto B4ffcf4;
case 0x4ffcf6:c.instructions+=7;goto B4ffcf6;
case 0x4ffcf7:c.instructions+=6;goto B4ffcf7;
case 0x4ffcfd:c.instructions+=5;goto B4ffcfd;
case 0x4ffcfe:c.instructions+=4;goto B4ffcfe;
case 0x4ffd02:c.instructions+=3;goto B4ffd02;
case 0x4ffd03:c.instructions+=2;goto B4ffd03;
case 0x4ffd04:c.instructions+=1;goto B4ffd04;
case 0x4ffd06:goto L4ffd06;
case 0x4ffd0a:c.instructions+=4;goto B4ffd0a;
case 0x4ffd0c:c.instructions+=3;goto B4ffd0c;
case 0x4ffd0e:c.instructions+=2;goto B4ffd0e;
case 0x4ffd10:c.instructions+=1;goto B4ffd10;
case 0x4ffd12:goto L4ffd12;
case 0x4ffd15:goto L4ffd15;
case 0x4ffd18:c.instructions+=2;goto B4ffd18;
case 0x4ffd1a:c.instructions+=1;goto B4ffd1a;
case 0x4ffd1c:goto L4ffd1c;
case 0x4ffd1d:c.instructions+=3;goto B4ffd1d;
case 0x4ffd20:c.instructions+=2;goto B4ffd20;
case 0x4ffd22:c.instructions+=1;goto B4ffd22;
case 0x4ffd24:goto L4ffd24;
case 0x4ffd2a:c.instructions+=5;goto B4ffd2a;
case 0x4ffd30:c.instructions+=4;goto B4ffd30;
case 0x4ffd32:c.instructions+=3;goto B4ffd32;
case 0x4ffd37:c.instructions+=2;goto B4ffd37;
case 0x4ffd39:c.instructions+=1;goto B4ffd39;
case 0x4ffd3b:goto L4ffd3b;
case 0x4ffd40:goto L4ffd40;
case 0x4ffd44:c.instructions+=3;goto B4ffd44;
case 0x4ffd46:c.instructions+=2;goto B4ffd46;
case 0x4ffd48:c.instructions+=1;goto B4ffd48;
case 0x4ffd4a:goto L4ffd4a;
case 0x4ffd4d:c.instructions+=1;goto B4ffd4d;
case 0x4ffd50:goto L4ffd50;
case 0x4ffd53:c.instructions+=2;goto B4ffd53;
case 0x4ffd55:c.instructions+=1;goto B4ffd55;
case 0x4ffd57:goto L4ffd57;
case 0x4ffd58:c.instructions+=3;goto B4ffd58;
case 0x4ffd5b:c.instructions+=2;goto B4ffd5b;
case 0x4ffd5d:c.instructions+=1;goto B4ffd5d;
case 0x4ffd5f:goto L4ffd5f;
case 0x4ffd64:c.instructions+=2;goto B4ffd64;
case 0x4ffd66:c.instructions+=1;goto B4ffd66;
case 0x4ffd68:goto L4ffd68;
case 0x4ffd6a:goto L4ffd6a;
case 0x4ffd6b:c.instructions+=4;goto B4ffd6b;
case 0x4ffd6c:c.instructions+=3;goto B4ffd6c;
case 0x4ffd6d:c.instructions+=2;goto B4ffd6d;
case 0x4ffd6e:c.instructions+=1;goto B4ffd6e;
case 0x4ffd6f:goto L4ffd6f;
case 0x4ffd70:c.instructions+=5;goto B4ffd70;
case 0x4ffd71:c.instructions+=4;goto B4ffd71;
case 0x4ffd72:c.instructions+=3;goto B4ffd72;
case 0x4ffd74:c.instructions+=2;goto B4ffd74;
case 0x4ffd75:c.instructions+=1;goto B4ffd75;
case 0x4ffd80:goto L4ffd80;
case 0x4ffd85:c.instructions+=1;goto B4ffd85;
case 0x4ffd90:goto L4ffd90;
case 0x4ffd94:c.instructions+=2;goto B4ffd94;
case 0x4ffd96:c.instructions+=1;goto B4ffd96;
case 0x4ffd98:goto L4ffd98;
case 0x4ffd9e:c.instructions+=1;goto B4ffd9e;
case 0x4ffda0:goto L4ffda0;
case 0x4ffda6:c.instructions+=3;goto B4ffda6;
case 0x4ffdac:c.instructions+=2;goto B4ffdac;
case 0x4ffdae:c.instructions+=1;goto B4ffdae;
case 0x4ffdaf:goto L4ffdaf;
case 0x4ffdb1:c.instructions+=1;goto B4ffdb1;
case 0x4ffdc0:goto L4ffdc0;
case 0x4ffdc3:c.instructions+=6;goto B4ffdc3;
case 0x4ffdc5:c.instructions+=5;goto B4ffdc5;
case 0x4ffdc7:c.instructions+=4;goto B4ffdc7;
case 0x4ffdc9:c.instructions+=3;goto B4ffdc9;
case 0x4ffdcb:c.instructions+=2;goto B4ffdcb;
case 0x4ffdcc:c.instructions+=1;goto B4ffdcc;
case 0x4ffdd0:goto L4ffdd0;
case 0x4ffdd4:c.instructions+=2;goto B4ffdd4;
case 0x4ffdda:c.instructions+=1;goto B4ffdda;
case 0x4ffde0:goto L4ffde0;
case 0x4ffde1:c.instructions+=5;goto B4ffde1;
case 0x4ffde5:c.instructions+=4;goto B4ffde5;
case 0x4ffde7:c.instructions+=3;goto B4ffde7;
case 0x4ffde9:c.instructions+=2;goto B4ffde9;
case 0x4ffdea:c.instructions+=1;goto B4ffdea;
case 0x4ffdec:goto L4ffdec;
case 0x4ffdef:c.instructions+=1;goto B4ffdef;
case 0x4ffdf3:goto L4ffdf3;
case 0x4ffdf7:c.instructions+=1;goto B4ffdf7;
case 0x4ffdf9:goto L4ffdf9;
case 0x4ffdfc:c.instructions+=2;goto B4ffdfc;
case 0x4ffdfe:c.instructions+=1;goto B4ffdfe;
case 0x4ffe00:goto L4ffe00;
case 0x4ffe01:c.instructions+=3;goto B4ffe01;
case 0x4ffe04:c.instructions+=2;goto B4ffe04;
case 0x4ffe06:c.instructions+=1;goto B4ffe06;
case 0x4ffe08:goto L4ffe08;
case 0x4ffe09:c.instructions+=3;goto B4ffe09;
case 0x4ffe0a:c.instructions+=2;goto B4ffe0a;
case 0x4ffe0c:c.instructions+=1;goto B4ffe0c;
case 0x4ffe0f:goto L4ffe0f;
case 0x4ffe10:c.instructions+=3;goto B4ffe10;
case 0x4ffe11:c.instructions+=2;goto B4ffe11;
case 0x4ffe13:c.instructions+=1;goto B4ffe13;
case 0x4ffe20:goto L4ffe20;
case 0x4ffe26:c.instructions+=5;goto B4ffe26;
case 0x4ffe27:c.instructions+=4;goto B4ffe27;
case 0x4ffe29:c.instructions+=3;goto B4ffe29;
case 0x4ffe2b:c.instructions+=2;goto B4ffe2b;
case 0x4ffe2c:c.instructions+=1;goto B4ffe2c;
case 0x4ffe2e:goto L4ffe2e;
case 0x4ffe34:c.instructions+=3;goto B4ffe34;
case 0x4ffe38:c.instructions+=2;goto B4ffe38;
case 0x4ffe3b:c.instructions+=1;goto B4ffe3b;
case 0x4ffe40:goto L4ffe40;
case 0x4ffe42:c.instructions+=1;goto B4ffe42;
case 0x4ffe44:goto L4ffe44;
case 0x4ffe45:c.instructions+=3;goto B4ffe45;
case 0x4ffe4b:c.instructions+=2;goto B4ffe4b;
case 0x4ffe4d:c.instructions+=1;goto B4ffe4d;
case 0x4ffe4f:goto L4ffe4f;
case 0x4ffe50:c.instructions+=3;goto B4ffe50;
case 0x4ffe51:c.instructions+=2;goto B4ffe51;
case 0x4ffe53:c.instructions+=1;goto B4ffe53;
case 0x4ffe54:goto L4ffe54;
case 0x4ffe57:c.instructions+=5;goto B4ffe57;
case 0x4ffe5a:c.instructions+=4;goto B4ffe5a;
case 0x4ffe5c:c.instructions+=3;goto B4ffe5c;
case 0x4ffe5d:c.instructions+=2;goto B4ffe5d;
case 0x4ffe5e:c.instructions+=1;goto B4ffe5e;
case 0x4ffe60:goto L4ffe60;
case 0x4ffe66:c.instructions+=5;goto B4ffe66;
case 0x4ffe67:c.instructions+=4;goto B4ffe67;
case 0x4ffe69:c.instructions+=3;goto B4ffe69;
case 0x4ffe6b:c.instructions+=2;goto B4ffe6b;
case 0x4ffe6c:c.instructions+=1;goto B4ffe6c;
case 0x4ffe6e:goto L4ffe6e;
case 0x4ffe74:c.instructions+=3;goto B4ffe74;
case 0x4ffe78:c.instructions+=2;goto B4ffe78;
case 0x4ffe7b:c.instructions+=1;goto B4ffe7b;
case 0x4ffe80:goto L4ffe80;
case 0x4ffe82:c.instructions+=1;goto B4ffe82;
case 0x4ffe84:goto L4ffe84;
case 0x4ffe85:c.instructions+=3;goto B4ffe85;
case 0x4ffe8b:c.instructions+=2;goto B4ffe8b;
case 0x4ffe8d:c.instructions+=1;goto B4ffe8d;
case 0x4ffe8f:goto L4ffe8f;
case 0x4ffe90:c.instructions+=3;goto B4ffe90;
case 0x4ffe91:c.instructions+=2;goto B4ffe91;
case 0x4ffe93:c.instructions+=1;goto B4ffe93;
case 0x4ffe94:goto L4ffe94;
case 0x4ffe97:c.instructions+=5;goto B4ffe97;
case 0x4ffe9a:c.instructions+=4;goto B4ffe9a;
case 0x4ffe9c:c.instructions+=3;goto B4ffe9c;
case 0x4ffe9d:c.instructions+=2;goto B4ffe9d;
case 0x4ffe9e:c.instructions+=1;goto B4ffe9e;
case 0x4ffea0:goto L4ffea0;
case 0x4ffea7:c.instructions+=1;goto B4ffea7;
case 0x4ffea9:goto L4ffea9;
case 0x4ffeae:c.instructions+=1;goto B4ffeae;
case 0x4ffeaf:goto L4ffeaf;
case 0x4ffeb3:c.instructions+=2;goto B4ffeb3;
case 0x4ffeb6:c.instructions+=1;goto B4ffeb6;
case 0x4ffeb8:goto L4ffeb8;
case 0x4ffebf:goto L4ffebf;
case 0x4ffec4:c.instructions+=1;goto B4ffec4;
case 0x4ffec5:goto L4ffec5;
case 0x4ffeca:c.instructions+=1;goto B4ffeca;
case 0x4ffecb:goto L4ffecb;
case 0x4ffed0:c.instructions+=1;goto B4ffed0;
case 0x4ffed1:goto L4ffed1;
case 0x4ffed6:c.instructions+=1;goto B4ffed6;
case 0x4ffed7:goto L4ffed7;
case 0x4ffedc:c.instructions+=1;goto B4ffedc;
case 0x4ffedd:goto L4ffedd;
case 0x4ffee2:c.instructions+=1;goto B4ffee2;
case 0x4ffee3:goto L4ffee3;
case 0x4ffee5:c.instructions+=1;goto B4ffee5;
case 0x4fff00:goto L4fff00;
case 0x4fff06:c.instructions+=5;goto B4fff06;
case 0x4fff07:c.instructions+=4;goto B4fff07;
case 0x4fff09:c.instructions+=3;goto B4fff09;
case 0x4fff0b:c.instructions+=2;goto B4fff0b;
case 0x4fff0c:c.instructions+=1;goto B4fff0c;
case 0x4fff0e:goto L4fff0e;
case 0x4fff14:c.instructions+=3;goto B4fff14;
case 0x4fff18:c.instructions+=2;goto B4fff18;
case 0x4fff1b:c.instructions+=1;goto B4fff1b;
case 0x4fff20:goto L4fff20;
case 0x4fff22:c.instructions+=1;goto B4fff22;
case 0x4fff24:goto L4fff24;
case 0x4fff25:c.instructions+=3;goto B4fff25;
case 0x4fff28:c.instructions+=2;goto B4fff28;
case 0x4fff2a:c.instructions+=1;goto B4fff2a;
case 0x4fff2c:goto L4fff2c;
case 0x4fff2d:c.instructions+=3;goto B4fff2d;
case 0x4fff2e:c.instructions+=2;goto B4fff2e;
case 0x4fff30:c.instructions+=1;goto B4fff30;
case 0x4fff31:goto L4fff31;
case 0x4fff34:c.instructions+=4;goto B4fff34;
case 0x4fff38:c.instructions+=3;goto B4fff38;
case 0x4fff39:c.instructions+=2;goto B4fff39;
case 0x4fff3a:c.instructions+=1;goto B4fff3a;
case 0x4fff40:goto L4fff40;
case 0x4fff46:c.instructions+=5;goto B4fff46;
case 0x4fff47:c.instructions+=4;goto B4fff47;
case 0x4fff49:c.instructions+=3;goto B4fff49;
case 0x4fff4b:c.instructions+=2;goto B4fff4b;
case 0x4fff4c:c.instructions+=1;goto B4fff4c;
case 0x4fff4e:goto L4fff4e;
case 0x4fff54:c.instructions+=3;goto B4fff54;
case 0x4fff58:c.instructions+=2;goto B4fff58;
case 0x4fff5b:c.instructions+=1;goto B4fff5b;
case 0x4fff60:goto L4fff60;
case 0x4fff62:c.instructions+=1;goto B4fff62;
case 0x4fff64:goto L4fff64;
case 0x4fff65:c.instructions+=3;goto B4fff65;
case 0x4fff68:c.instructions+=2;goto B4fff68;
case 0x4fff6a:c.instructions+=1;goto B4fff6a;
case 0x4fff6c:goto L4fff6c;
case 0x4fff6d:c.instructions+=3;goto B4fff6d;
case 0x4fff6e:c.instructions+=2;goto B4fff6e;
case 0x4fff70:c.instructions+=1;goto B4fff70;
case 0x4fff71:goto L4fff71;
case 0x4fff74:c.instructions+=4;goto B4fff74;
case 0x4fff76:c.instructions+=3;goto B4fff76;
case 0x4fff77:c.instructions+=2;goto B4fff77;
case 0x4fff78:c.instructions+=1;goto B4fff78;
case 0x4fff80:goto L4fff80;
case 0x4fff86:c.instructions+=5;goto B4fff86;
case 0x4fff87:c.instructions+=4;goto B4fff87;
case 0x4fff89:c.instructions+=3;goto B4fff89;
case 0x4fff8b:c.instructions+=2;goto B4fff8b;
case 0x4fff8c:c.instructions+=1;goto B4fff8c;
case 0x4fff8e:goto L4fff8e;
case 0x4fff94:c.instructions+=3;goto B4fff94;
case 0x4fff98:c.instructions+=2;goto B4fff98;
case 0x4fff9b:c.instructions+=1;goto B4fff9b;
case 0x4fffa0:goto L4fffa0;
case 0x4fffa2:c.instructions+=1;goto B4fffa2;
case 0x4fffa4:goto L4fffa4;
case 0x4fffa5:c.instructions+=3;goto B4fffa5;
case 0x4fffa8:c.instructions+=2;goto B4fffa8;
case 0x4fffaa:c.instructions+=1;goto B4fffaa;
case 0x4fffac:goto L4fffac;
case 0x4fffad:c.instructions+=3;goto B4fffad;
case 0x4fffae:c.instructions+=2;goto B4fffae;
case 0x4fffb0:c.instructions+=1;goto B4fffb0;
case 0x4fffb1:goto L4fffb1;
case 0x4fffb4:c.instructions+=4;goto B4fffb4;
case 0x4fffb6:c.instructions+=3;goto B4fffb6;
case 0x4fffb7:c.instructions+=2;goto B4fffb7;
case 0x4fffb8:c.instructions+=1;goto B4fffb8;
case 0x4fffc0:goto L4fffc0;
case 0x4fffc4:c.instructions+=7;goto B4fffc4;
case 0x4fffca:c.instructions+=6;goto B4fffca;
case 0x4fffcb:c.instructions+=5;goto B4fffcb;
case 0x4fffce:c.instructions+=4;goto B4fffce;
case 0x4fffd0:c.instructions+=3;goto B4fffd0;
case 0x4fffd2:c.instructions+=2;goto B4fffd2;
case 0x4fffd3:c.instructions+=1;goto B4fffd3;
case 0x4fffd5:goto L4fffd5;
case 0x4fffdb:c.instructions+=2;goto B4fffdb;
case 0x4fffde:c.instructions+=1;goto B4fffde;
case 0x4fffe0:goto L4fffe0;
case 0x4fffe2:c.instructions+=1;goto B4fffe2;
case 0x4fffe4:goto L4fffe4;
case 0x4fffe5:c.instructions+=3;goto B4fffe5;
case 0x4fffe8:c.instructions+=2;goto B4fffe8;
case 0x4fffea:c.instructions+=1;goto B4fffea;
case 0x4fffec:goto L4fffec;
case 0x4fffed:c.instructions+=3;goto B4fffed;
case 0x4fffee:c.instructions+=2;goto B4fffee;
case 0x4ffff0:c.instructions+=1;goto B4ffff0;
case 0x4ffff1:goto L4ffff1;
case 0x4ffff4:c.instructions+=4;goto B4ffff4;
case 0x4ffff6:c.instructions+=3;goto B4ffff6;
case 0x4ffff7:c.instructions+=2;goto B4ffff7;
case 0x4ffff8:c.instructions+=1;goto B4ffff8;
default:missing_instruction(c.pc);}
B4ff001:L4ff001:{c.instructions+=16;NFSU2_TR(0x4ff001);
__builtin_memmove(gp(0x89e7b0),(R+0),4);
}
B4ff006:{NFSU2_TR(0x4ff006);
__builtin_memmove(gp(0x89e7d2),(R+0),1);
}
B4ff00b:{NFSU2_TR(0x4ff00b);
__builtin_memmove(gp(0x89e7bc),(R+0),4);
}
B4ff010:{NFSU2_TR(0x4ff010);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B4ff015:{NFSU2_TR(0x4ff015);
w4(R+0,u32(m1(0x83aa1b)));
}
B4ff01c:{NFSU2_TR(0x4ff01c);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B4ff022:{NFSU2_TR(0x4ff022);
__builtin_memmove(gp(0x89e7a8),(R+4),4);
}
B4ff028:{NFSU2_TR(0x4ff028);
__builtin_memmove(gp(0x89e7f8),(R+4),4);
}
B4ff02e:{NFSU2_TR(0x4ff02e);
__builtin_memmove(gp(0x89e7f4),(R+4),4);
}
B4ff034:{NFSU2_TR(0x4ff034);
__builtin_memmove(gp(0x89e7a4),(R+4),4);
}
B4ff03a:{NFSU2_TR(0x4ff03a);
w4(R+4,u32(m1(0x83aa7b)));
}
B4ff041:{NFSU2_TR(0x4ff041);
__builtin_memmove(gp(0x7f68b0),(R+0),4);
}
B4ff046:{NFSU2_TR(0x4ff046);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aa74),4);
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
B4ff04d:{NFSU2_TR(0x4ff04d);
s4(0x89e7a0,u32(0x1265ull));
}
B4ff057:{NFSU2_TR(0x4ff057);
__builtin_memmove(gp(0x8900a0),(R+4),4);
}
B4ff05d:{NFSU2_TR(0x4ff05d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff069;}}
}
B4ff05f:L4ff05f:{c.instructions+=1;NFSU2_TR(0x4ff05f);
s4(0x83aa74,u32(0x3ull));
}
B4ff069:L4ff069:{c.instructions+=1;NFSU2_TR(0x4ff069);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff070:L4ff070:{c.instructions+=18;NFSU2_TR(0x4ff070);
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
B4ff072:{NFSU2_TR(0x4ff072);
__builtin_memmove(gp(0x89e7c4),(R+0),4);
}
B4ff077:{NFSU2_TR(0x4ff077);
__builtin_memmove(gp(0x89e7a8),(R+0),4);
}
B4ff07c:{NFSU2_TR(0x4ff07c);
__builtin_memmove(gp(0x89e7f8),(R+0),4);
}
B4ff081:{NFSU2_TR(0x4ff081);
__builtin_memmove(gp(0x89e7f4),(R+0),4);
}
B4ff086:{NFSU2_TR(0x4ff086);
__builtin_memmove(gp(0x89e7d2),(R+0),1);
}
B4ff08b:{NFSU2_TR(0x4ff08b);
__builtin_memmove(gp(0x89e7a4),(R+0),4);
}
B4ff090:{NFSU2_TR(0x4ff090);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B4ff095:{NFSU2_TR(0x4ff095);
w4(R+0,u32(m1(0x83aa1b)));
}
B4ff09c:{NFSU2_TR(0x4ff09c);
w4(R+4,u32(0x1ull));
}
B4ff0a1:{NFSU2_TR(0x4ff0a1);
__builtin_memmove(gp(0x89e7d9),(R+4),1);
}
B4ff0a7:{NFSU2_TR(0x4ff0a7);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B4ff0ad:{NFSU2_TR(0x4ff0ad);
__builtin_memmove(gp(0x89e7b0),(R+4),4);
}
B4ff0b3:{NFSU2_TR(0x4ff0b3);
s4(0x89e7bc,u32(0xaull));
}
B4ff0bd:{NFSU2_TR(0x4ff0bd);
s4(0x89e7a0,u32(0x1264ull));
}
B4ff0c7:{NFSU2_TR(0x4ff0c7);
__builtin_memmove(gp(0x7f68b0),(R+0),4);
}
B4ff0cc:{NFSU2_TR(0x4ff0cc);
s4(0x83aa74,u32(0x4ull));
}
B4ff0d6:{NFSU2_TR(0x4ff0d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff0e0:L4ff0e0:{c.instructions+=18;NFSU2_TR(0x4ff0e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ff0e2:{NFSU2_TR(0x4ff0e2);
__builtin_memmove(gp(0x89e7c4),(R+0),4);
}
B4ff0e7:{NFSU2_TR(0x4ff0e7);
__builtin_memmove(gp(0x89e7a8),(R+0),4);
}
B4ff0ec:{NFSU2_TR(0x4ff0ec);
__builtin_memmove(gp(0x89e7f8),(R+0),4);
}
B4ff0f1:{NFSU2_TR(0x4ff0f1);
__builtin_memmove(gp(0x89e7f4),(R+0),4);
}
B4ff0f6:{NFSU2_TR(0x4ff0f6);
__builtin_memmove(gp(0x89e7a4),(R+0),4);
}
B4ff0fb:{NFSU2_TR(0x4ff0fb);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B4ff100:{NFSU2_TR(0x4ff100);
w4(R+0,u32(m1(0x83aa1b)));
}
B4ff107:{NFSU2_TR(0x4ff107);
w4(R+4,u32(0x1ull));
}
B4ff10c:{NFSU2_TR(0x4ff10c);
__builtin_memmove(gp(0x7f68b0),(R+0),4);
}
B4ff111:{NFSU2_TR(0x4ff111);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aa74),4);
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
B4ff118:{NFSU2_TR(0x4ff118);
__builtin_memmove(gp(0x89e7e3),(R+4),1);
}
B4ff11e:{NFSU2_TR(0x4ff11e);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B4ff124:{NFSU2_TR(0x4ff124);
__builtin_memmove(gp(0x89e7b0),(R+4),4);
}
B4ff12a:{NFSU2_TR(0x4ff12a);
__builtin_memmove(gp(0x89e7d2),(R+4),1);
}
B4ff130:{NFSU2_TR(0x4ff130);
s4(0x89e7bc,u32(0xaull));
}
B4ff13a:{NFSU2_TR(0x4ff13a);
s4(0x89e7a0,u32(0x1264ull));
}
B4ff144:{NFSU2_TR(0x4ff144);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff150;}}
}
B4ff146:L4ff146:{c.instructions+=1;NFSU2_TR(0x4ff146);
s4(0x83aa74,u32(0x3ull));
}
B4ff150:L4ff150:{c.instructions+=1;NFSU2_TR(0x4ff150);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff160:L4ff160:{c.instructions+=17;NFSU2_TR(0x4ff160);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ff162:{NFSU2_TR(0x4ff162);
__builtin_memmove(gp(0x89e7c4),(R+0),4);
}
B4ff167:{NFSU2_TR(0x4ff167);
__builtin_memmove(gp(0x89e7a8),(R+0),4);
}
B4ff16c:{NFSU2_TR(0x4ff16c);
__builtin_memmove(gp(0x89e7f8),(R+0),4);
}
B4ff171:{NFSU2_TR(0x4ff171);
__builtin_memmove(gp(0x89e7f4),(R+0),4);
}
B4ff176:{NFSU2_TR(0x4ff176);
__builtin_memmove(gp(0x89e7bc),(R+0),4);
}
B4ff17b:{NFSU2_TR(0x4ff17b);
__builtin_memmove(gp(0x89e7a4),(R+0),4);
}
B4ff180:{NFSU2_TR(0x4ff180);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B4ff185:{NFSU2_TR(0x4ff185);
w4(R+0,u32(m1(0x83aa1b)));
}
B4ff18c:{NFSU2_TR(0x4ff18c);
__builtin_memmove(gp(0x7f68b0),(R+0),4);
}
B4ff191:{NFSU2_TR(0x4ff191);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aa74),4);
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
B4ff198:{NFSU2_TR(0x4ff198);
w4(R+4,u32(0x1ull));
}
B4ff19d:{NFSU2_TR(0x4ff19d);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B4ff1a3:{NFSU2_TR(0x4ff1a3);
s4(0x89e7b0,u32(0x8ull));
}
B4ff1ad:{NFSU2_TR(0x4ff1ad);
__builtin_memmove(gp(0x89e7d2),(R+4),1);
}
B4ff1b3:{NFSU2_TR(0x4ff1b3);
s4(0x89e7a0,u32(0x1262ull));
}
B4ff1bd:{NFSU2_TR(0x4ff1bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff1c9;}}
}
B4ff1bf:L4ff1bf:{c.instructions+=1;NFSU2_TR(0x4ff1bf);
s4(0x83aa74,u32(0x3ull));
}
B4ff1c9:L4ff1c9:{c.instructions+=1;NFSU2_TR(0x4ff1c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff1d0:L4ff1d0:{c.instructions+=5;NFSU2_TR(0x4ff1d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff1d4:{NFSU2_TR(0x4ff1d4);
__builtin_memmove((R+4),gp(0x83847c),4);
}
B4ff1da:{NFSU2_TR(0x4ff1da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff1db:{NFSU2_TR(0x4ff1db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff1dc:{NFSU2_TR(0x4ff1dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff1e1ull));
TAIL_STATIC(0x43f920u,43f);
}
B4ff1e1:L4ff1e1:{c.instructions+=2;NFSU2_TR(0x4ff1e1);
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
B4ff1e4:{NFSU2_TR(0x4ff1e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff1f0:L4ff1f0:{c.instructions+=7;NFSU2_TR(0x4ff1f0);
__builtin_memmove((R+0),(R+4),4);
}
B4ff1f2:{NFSU2_TR(0x4ff1f2);
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
B4ff1f4:{NFSU2_TR(0x4ff1f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ff1f6:{NFSU2_TR(0x4ff1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff1f9:{NFSU2_TR(0x4ff1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff1fc:{NFSU2_TR(0x4ff1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff1ff:{NFSU2_TR(0x4ff1ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff200:L4ff200:{c.instructions+=3;NFSU2_TR(0x4ff200);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff203:{NFSU2_TR(0x4ff203);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff204:{NFSU2_TR(0x4ff204);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff209ull));
TAIL_STATIC(0x575630u,575);
}
B4ff209:L4ff209:{c.instructions+=2;NFSU2_TR(0x4ff209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ff20a:{NFSU2_TR(0x4ff20a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff210:L4ff210:{c.instructions+=5;NFSU2_TR(0x4ff210);
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
B4ff215:{NFSU2_TR(0x4ff215);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff216:{NFSU2_TR(0x4ff216);
__builtin_memmove((R+24),(R+4),4);
}
B4ff218:{NFSU2_TR(0x4ff218);
u8 U[4];
w4(U+0,u32(0x79aa4cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ff21e:{NFSU2_TR(0x4ff21e);
if(r1(R+518)){{goto L4ff229;}}
}
B4ff220:L4ff220:{c.instructions+=2;NFSU2_TR(0x4ff220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff221:{NFSU2_TR(0x4ff221);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff226ull));
TAIL_STATIC(0x575630u,575);
}
B4ff226:L4ff226:{c.instructions+=1;NFSU2_TR(0x4ff226);
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
B4ff229:L4ff229:{c.instructions+=3;NFSU2_TR(0x4ff229);
__builtin_memmove((R+0),(R+24),4);
}
B4ff22b:{NFSU2_TR(0x4ff22b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ff22c:{NFSU2_TR(0x4ff22c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff230:L4ff230:{c.instructions+=5;NFSU2_TR(0x4ff230);
__builtin_memmove((R+0),(R+4),4);
}
B4ff232:{NFSU2_TR(0x4ff232);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4ff238:{NFSU2_TR(0x4ff238);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ff23f:{NFSU2_TR(0x4ff23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ff246:{NFSU2_TR(0x4ff246);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff250:L4ff250:{c.instructions+=5;NFSU2_TR(0x4ff250);
__builtin_memmove((R+8),(R+4),4);
}
B4ff252:{NFSU2_TR(0x4ff252);
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
B4ff254:{NFSU2_TR(0x4ff254);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff255:{NFSU2_TR(0x4ff255);
w4(R+4,u32(0xc0ull));
}
B4ff25a:{NFSU2_TR(0x4ff25a);
__builtin_memmove((R+28),(R+8),4);
}
B4ff25c:L4ff25c:{c.instructions+=1;NFSU2_TR(0x4ff25c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4ff25e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff25cu);}goto L4ff25c;}
}
B4ff25e:L4ff25e:{c.instructions+=19;NFSU2_TR(0x4ff25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x300ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff264:{NFSU2_TR(0x4ff264);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x304ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff26a:{NFSU2_TR(0x4ff26a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x308ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff270:{NFSU2_TR(0x4ff270);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff276:{NFSU2_TR(0x4ff276);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff27c:{NFSU2_TR(0x4ff27c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff282:{NFSU2_TR(0x4ff282);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff288:{NFSU2_TR(0x4ff288);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x31cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff28e:{NFSU2_TR(0x4ff28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x320ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff294:{NFSU2_TR(0x4ff294);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x324ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff29a:{NFSU2_TR(0x4ff29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x328ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff2a0:{NFSU2_TR(0x4ff2a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x32cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ff2a6:{NFSU2_TR(0x4ff2a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x32dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ff2ac:{NFSU2_TR(0x4ff2ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x32eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ff2b2:{NFSU2_TR(0x4ff2b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x32full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ff2b8:{NFSU2_TR(0x4ff2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x334ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff2be:{NFSU2_TR(0x4ff2be);
__builtin_memmove((R+0),(R+8),4);
}
B4ff2c0:{NFSU2_TR(0x4ff2c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ff2c1:{NFSU2_TR(0x4ff2c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff2d0:L4ff2d0:{c.instructions+=2;NFSU2_TR(0x4ff2d0);
s1(0x83896f,u8(0x1ull));
}
B4ff2d7:{NFSU2_TR(0x4ff2d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff2e0:L4ff2e0:{c.instructions+=3;NFSU2_TR(0x4ff2e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff2e4:{NFSU2_TR(0x4ff2e4);
__builtin_memmove(gp(0x838970),(R+0),4);
}
B4ff2e9:{NFSU2_TR(0x4ff2e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff2f0:L4ff2f0:{c.instructions+=2;NFSU2_TR(0x4ff2f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ff2f4:{NFSU2_TR(0x4ff2f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ff2f6:L4ff2f6:{c.instructions+=2;NFSU2_TR(0x4ff2f6);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7fa3d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+4)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4ff2fc:{NFSU2_TR(0x4ff2fc);
if(r1(R+518)){{goto L4ff307;}}
}
B4ff2fe:L4ff2fe:{c.instructions+=3;NFSU2_TR(0x4ff2fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ff2ff:{NFSU2_TR(0x4ff2ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ff302:{NFSU2_TR(0x4ff302);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff2f6u);}goto L4ff2f6;}}
}
B4ff304:L4ff304:{c.instructions+=2;NFSU2_TR(0x4ff304);
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
B4ff306:{NFSU2_TR(0x4ff306);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff307:L4ff307:{c.instructions+=2;NFSU2_TR(0x4ff307);
w1(R+0,u8(0x1ull));
}
B4ff309:{NFSU2_TR(0x4ff309);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff310:L4ff310:{c.instructions+=3;NFSU2_TR(0x4ff310);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ff316:{NFSU2_TR(0x4ff316);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ff318:{NFSU2_TR(0x4ff318);
if(r1(R+518)){{goto L4ff3a6;}}
}
B4ff31e:L4ff31e:{c.instructions+=3;NFSU2_TR(0x4ff31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff324:{NFSU2_TR(0x4ff324);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ff326:{NFSU2_TR(0x4ff326);
if(r1(R+518)){{goto L4ff3a6;}}
}
B4ff328:L4ff328:{c.instructions+=3;NFSU2_TR(0x4ff328);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff32c:{NFSU2_TR(0x4ff32c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ff32f:{NFSU2_TR(0x4ff32f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ff336;}}
}
B4ff331:L4ff331:{c.instructions+=2;NFSU2_TR(0x4ff331);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff334:{NFSU2_TR(0x4ff334);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ff3a1;}}
}
B4ff336:L4ff336:{c.instructions+=2;NFSU2_TR(0x4ff336);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x41ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x41ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ff339:{NFSU2_TR(0x4ff339);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ff340;}}
}
B4ff33b:L4ff33b:{c.instructions+=2;NFSU2_TR(0x4ff33b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff33e:{NFSU2_TR(0x4ff33e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ff3a1;}}
}
B4ff340:L4ff340:{c.instructions+=2;NFSU2_TR(0x4ff340);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ff343:{NFSU2_TR(0x4ff343);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ff34a;}}
}
B4ff345:L4ff345:{c.instructions+=2;NFSU2_TR(0x4ff345);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x39ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x39ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x39ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff348:{NFSU2_TR(0x4ff348);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ff3a1;}}
}
B4ff34a:L4ff34a:{c.instructions+=3;NFSU2_TR(0x4ff34a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ff350:{NFSU2_TR(0x4ff350);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ff353:{NFSU2_TR(0x4ff353);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff364;}}
}
B4ff355:L4ff355:{c.instructions+=2;NFSU2_TR(0x4ff355);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff358:{NFSU2_TR(0x4ff358);
if(r1(R+518)){{goto L4ff3a1;}}
}
B4ff35a:L4ff35a:{c.instructions+=2;NFSU2_TR(0x4ff35a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff35d:{NFSU2_TR(0x4ff35d);
if(r1(R+518)){{goto L4ff3a1;}}
}
B4ff35f:L4ff35f:{c.instructions+=2;NFSU2_TR(0x4ff35f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff362:{NFSU2_TR(0x4ff362);
if(r1(R+518)){{goto L4ff3a1;}}
}
B4ff364:L4ff364:{c.instructions+=2;NFSU2_TR(0x4ff364);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ff367:{NFSU2_TR(0x4ff367);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff37d;}}
}
B4ff369:L4ff369:{c.instructions+=2;NFSU2_TR(0x4ff369);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4ff36c:{NFSU2_TR(0x4ff36c);
if(r1(R+518)){{goto L4ff3a1;}}
}
B4ff36e:L4ff36e:{c.instructions+=2;NFSU2_TR(0x4ff36e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff371:{NFSU2_TR(0x4ff371);
if(r1(R+518)){{goto L4ff3a1;}}
}
B4ff373:L4ff373:{c.instructions+=2;NFSU2_TR(0x4ff373);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff376:{NFSU2_TR(0x4ff376);
if(r1(R+518)){{goto L4ff3a1;}}
}
B4ff378:L4ff378:{c.instructions+=2;NFSU2_TR(0x4ff378);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff37b:{NFSU2_TR(0x4ff37b);
if(r1(R+518)){{goto L4ff3a1;}}
}
B4ff37d:L4ff37d:{c.instructions+=2;NFSU2_TR(0x4ff37d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ff380:{NFSU2_TR(0x4ff380);
if(r1(R+518)){{goto L4ff386;}}
}
B4ff382:L4ff382:{c.instructions+=2;NFSU2_TR(0x4ff382);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ff384:{NFSU2_TR(0x4ff384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff3a6;}}
}
B4ff386:L4ff386:{c.instructions+=2;NFSU2_TR(0x4ff386);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4ff38b:{NFSU2_TR(0x4ff38b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ff394;}}
}
B4ff38d:L4ff38d:{c.instructions+=2;NFSU2_TR(0x4ff38d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff392:{NFSU2_TR(0x4ff392);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ff3a1;}}
}
B4ff394:L4ff394:{c.instructions+=2;NFSU2_TR(0x4ff394);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff395:{NFSU2_TR(0x4ff395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff39aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff2f0u);}goto L4ff2f0;}
}
B4ff39a:L4ff39a:{c.instructions+=3;NFSU2_TR(0x4ff39a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ff39d:{NFSU2_TR(0x4ff39d);
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
B4ff39f:{NFSU2_TR(0x4ff39f);
if(r1(R+518)){{goto L4ff3a6;}}
}
B4ff3a1:L4ff3a1:{c.instructions+=2;NFSU2_TR(0x4ff3a1);
w1(R+0,u8(0x1ull));
}
B4ff3a3:{NFSU2_TR(0x4ff3a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff3a6:L4ff3a6:{c.instructions+=2;NFSU2_TR(0x4ff3a6);
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
B4ff3a8:{NFSU2_TR(0x4ff3a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff3b0:L4ff3b0:{c.instructions+=11;NFSU2_TR(0x4ff3b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff3b4:{NFSU2_TR(0x4ff3b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff3b5:{NFSU2_TR(0x4ff3b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff3b6:{NFSU2_TR(0x4ff3b6);
__builtin_memmove((R+24),(R+4),4);
}
B4ff3b8:{NFSU2_TR(0x4ff3b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ff3bc:{NFSU2_TR(0x4ff3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff3c2:{NFSU2_TR(0x4ff3c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff3c6:{NFSU2_TR(0x4ff3c6);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ff3cb:{NFSU2_TR(0x4ff3cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff3cc:{NFSU2_TR(0x4ff3cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff3d2:{NFSU2_TR(0x4ff3d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ff3d9;}}
}
B4ff3d4:L4ff3d4:{c.instructions+=1;NFSU2_TR(0x4ff3d4);
w4(R+0,u32(0xffull));
}
B4ff3d9:L4ff3d9:{c.instructions+=7;NFSU2_TR(0x4ff3d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ff3dd:{NFSU2_TR(0x4ff3dd);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff3e2:{NFSU2_TR(0x4ff3e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ff3e8:{NFSU2_TR(0x4ff3e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff3e9:{NFSU2_TR(0x4ff3e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff3ea:{NFSU2_TR(0x4ff3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff3f0:{NFSU2_TR(0x4ff3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff3f5ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4ff3f5:L4ff3f5:{c.instructions+=4;NFSU2_TR(0x4ff3f5);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff3fa:{NFSU2_TR(0x4ff3fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff3fb:{NFSU2_TR(0x4ff3fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff3fc:{NFSU2_TR(0x4ff3fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff401ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4ff401:L4ff401:{c.instructions+=2;NFSU2_TR(0x4ff401);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff402:{NFSU2_TR(0x4ff402);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff407ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4ff407:L4ff407:{c.instructions+=8;NFSU2_TR(0x4ff407);
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
B4ff40a:{NFSU2_TR(0x4ff40a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ff40b:{NFSU2_TR(0x4ff40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff411:{NFSU2_TR(0x4ff411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x208ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ff41b:{NFSU2_TR(0x4ff41b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ff422:{NFSU2_TR(0x4ff422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ff423:{NFSU2_TR(0x4ff423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ff424:{NFSU2_TR(0x4ff424);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff430:L4ff430:{c.instructions+=20;NFSU2_TR(0x4ff430);
__builtin_memmove((R+0),(R+4),4);
}
B4ff432:{NFSU2_TR(0x4ff432);
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
B4ff434:{NFSU2_TR(0x4ff434);
u8 U[4];
w4(U+0,u32(0x78f544ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4ff43a:{NFSU2_TR(0x4ff43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x783fe5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ff441:{NFSU2_TR(0x4ff441);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff444:{NFSU2_TR(0x4ff444);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff447:{NFSU2_TR(0x4ff447);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff44a:{NFSU2_TR(0x4ff44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff44d:{NFSU2_TR(0x4ff44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff450:{NFSU2_TR(0x4ff450);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff453:{NFSU2_TR(0x4ff453);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff456:{NFSU2_TR(0x4ff456);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff459:{NFSU2_TR(0x4ff459);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff45c:{NFSU2_TR(0x4ff45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff45f:{NFSU2_TR(0x4ff45f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff462:{NFSU2_TR(0x4ff462);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff465:{NFSU2_TR(0x4ff465);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff468:{NFSU2_TR(0x4ff468);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ff46f:{NFSU2_TR(0x4ff46f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ff472:{NFSU2_TR(0x4ff472);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff480:L4ff480:{c.instructions+=5;NFSU2_TR(0x4ff480);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff484:{NFSU2_TR(0x4ff484);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff485:{NFSU2_TR(0x4ff485);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4ff487:{NFSU2_TR(0x4ff487);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ff48c:{NFSU2_TR(0x4ff48c);
if(r1(R+518)){{goto L4ff4d0;}}
}
B4ff48e:L4ff48e:{c.instructions+=2;NFSU2_TR(0x4ff48e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff493:{NFSU2_TR(0x4ff493);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff51b;}}
}
B4ff499:L4ff499:{c.instructions+=10;NFSU2_TR(0x4ff499);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff49c:{NFSU2_TR(0x4ff49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff49f:{NFSU2_TR(0x4ff49f);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ff4a2:{NFSU2_TR(0x4ff4a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff4a5:{NFSU2_TR(0x4ff4a5);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff4a8:{NFSU2_TR(0x4ff4a8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ff4ac:{NFSU2_TR(0x4ff4ac);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4ff4ae:{NFSU2_TR(0x4ff4ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff4b0:{NFSU2_TR(0x4ff4b0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ff4b3:{NFSU2_TR(0x4ff4b3);
if(r1(R+514)){{goto L4ff4bb;}}
}
B4ff4b5:L4ff4b5:{c.instructions+=2;NFSU2_TR(0x4ff4b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ff4b7:{NFSU2_TR(0x4ff4b7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff4bb:L4ff4bb:{c.instructions+=5;NFSU2_TR(0x4ff4bb);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ff4be:{NFSU2_TR(0x4ff4be);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ff4c1:{NFSU2_TR(0x4ff4c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff4c3:{NFSU2_TR(0x4ff4c3);
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
B4ff4c6:{NFSU2_TR(0x4ff4c6);
if(r1(R+514)){{goto L4ff519;}}
}
B4ff4c8:L4ff4c8:{c.instructions+=3;NFSU2_TR(0x4ff4c8);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff4cb:{NFSU2_TR(0x4ff4cb);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ff4ce:{NFSU2_TR(0x4ff4ce);
{goto L4ff505;}
}
B4ff4d0:L4ff4d0:{c.instructions+=10;NFSU2_TR(0x4ff4d0);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff4d3:{NFSU2_TR(0x4ff4d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ff4d6:{NFSU2_TR(0x4ff4d6);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ff4d9:{NFSU2_TR(0x4ff4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff4dc:{NFSU2_TR(0x4ff4dc);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff4df:{NFSU2_TR(0x4ff4df);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ff4e3:{NFSU2_TR(0x4ff4e3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4ff4e5:{NFSU2_TR(0x4ff4e5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff4e7:{NFSU2_TR(0x4ff4e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ff4ea:{NFSU2_TR(0x4ff4ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff4f2;}}
}
B4ff4ec:L4ff4ec:{c.instructions+=2;NFSU2_TR(0x4ff4ec);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ff4ee:{NFSU2_TR(0x4ff4ee);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff4f2:L4ff4f2:{c.instructions+=5;NFSU2_TR(0x4ff4f2);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ff4f5:{NFSU2_TR(0x4ff4f5);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ff4f8:{NFSU2_TR(0x4ff4f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff4fa:{NFSU2_TR(0x4ff4fa);
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
B4ff4fd:{NFSU2_TR(0x4ff4fd);
if(r1(R+514)){{goto L4ff519;}}
}
B4ff4ff:L4ff4ff:{c.instructions+=2;NFSU2_TR(0x4ff4ff);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff502:{NFSU2_TR(0x4ff502);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ff505:L4ff505:{c.instructions+=3;NFSU2_TR(0x4ff505);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff507:{NFSU2_TR(0x4ff507);
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
B4ff50a:{NFSU2_TR(0x4ff50a);
if(r1(R+514)){{goto L4ff519;}}
}
B4ff50c:L4ff50c:{c.instructions+=3;NFSU2_TR(0x4ff50c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ff50e:{NFSU2_TR(0x4ff50e);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ff510:{NFSU2_TR(0x4ff510);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff513ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ff513:L4ff513:{c.instructions+=3;NFSU2_TR(0x4ff513);
__builtin_memmove((R+0),(R+12),1);
}
B4ff515:{NFSU2_TR(0x4ff515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ff516:{NFSU2_TR(0x4ff516);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff519:L4ff519:{c.instructions+=1;NFSU2_TR(0x4ff519);
w1(R+12,u8(0x1ull));
}
B4ff51b:L4ff51b:{c.instructions+=2;NFSU2_TR(0x4ff51b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ff51d:{NFSU2_TR(0x4ff51d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff520ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ff520:L4ff520:{c.instructions+=3;NFSU2_TR(0x4ff520);
__builtin_memmove((R+0),(R+12),1);
}
B4ff522:{NFSU2_TR(0x4ff522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ff523:{NFSU2_TR(0x4ff523);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff530:L4ff530:{c.instructions+=3;NFSU2_TR(0x4ff530);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ff533:{NFSU2_TR(0x4ff533);
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
B4ff535:{NFSU2_TR(0x4ff535);
if(r1(R+518)){{goto L4ff53c;}}
}
B4ff537:L4ff537:{c.instructions+=2;NFSU2_TR(0x4ff537);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ff539:{NFSU2_TR(0x4ff539);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4ff53c:L4ff53c:{c.instructions+=2;NFSU2_TR(0x4ff53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ff53e:{NFSU2_TR(0x4ff53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4ff550:L4ff550:{c.instructions+=9;NFSU2_TR(0x4ff550);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff554:{NFSU2_TR(0x4ff554);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff557:{NFSU2_TR(0x4ff557);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ff55a:{NFSU2_TR(0x4ff55a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ff55e:{NFSU2_TR(0x4ff55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff561:{NFSU2_TR(0x4ff561);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff564:{NFSU2_TR(0x4ff564);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff566:{NFSU2_TR(0x4ff566);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ff569:{NFSU2_TR(0x4ff569);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff571;}}
}
B4ff56b:L4ff56b:{c.instructions+=2;NFSU2_TR(0x4ff56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff56e:{NFSU2_TR(0x4ff56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff571:L4ff571:{c.instructions+=5;NFSU2_TR(0x4ff571);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff574:{NFSU2_TR(0x4ff574);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ff577:{NFSU2_TR(0x4ff577);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff579:{NFSU2_TR(0x4ff579);
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
B4ff57c:{NFSU2_TR(0x4ff57c);
if(r1(R+514)){{goto L4ff584;}}
}
B4ff57e:L4ff57e:{c.instructions+=2;NFSU2_TR(0x4ff57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ff581:{NFSU2_TR(0x4ff581);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff584:L4ff584:{c.instructions+=1;NFSU2_TR(0x4ff584);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff590:L4ff590:{c.instructions+=5;NFSU2_TR(0x4ff590);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff594:{NFSU2_TR(0x4ff594);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff595:{NFSU2_TR(0x4ff595);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4ff597:{NFSU2_TR(0x4ff597);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ff59c:{NFSU2_TR(0x4ff59c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff5d5;}}
}
B4ff59e:L4ff59e:{c.instructions+=10;NFSU2_TR(0x4ff59e);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff5a1:{NFSU2_TR(0x4ff5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff5a4:{NFSU2_TR(0x4ff5a4);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff5a7:{NFSU2_TR(0x4ff5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff5aa:{NFSU2_TR(0x4ff5aa);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ff5ad:{NFSU2_TR(0x4ff5ad);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ff5b1:{NFSU2_TR(0x4ff5b1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4ff5b3:{NFSU2_TR(0x4ff5b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff5b5:{NFSU2_TR(0x4ff5b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ff5b8:{NFSU2_TR(0x4ff5b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff5c0;}}
}
B4ff5ba:L4ff5ba:{c.instructions+=2;NFSU2_TR(0x4ff5ba);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ff5bc:{NFSU2_TR(0x4ff5bc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff5c0:L4ff5c0:{c.instructions+=5;NFSU2_TR(0x4ff5c0);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ff5c3:{NFSU2_TR(0x4ff5c3);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ff5c6:{NFSU2_TR(0x4ff5c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff5c8:{NFSU2_TR(0x4ff5c8);
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
B4ff5cb:{NFSU2_TR(0x4ff5cb);
if(r1(R+514)){{goto L4ff625;}}
}
B4ff5cd:L4ff5cd:{c.instructions+=3;NFSU2_TR(0x4ff5cd);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff5d0:{NFSU2_TR(0x4ff5d0);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ff5d3:{NFSU2_TR(0x4ff5d3);
{goto L4ff611;}
}
B4ff5d5:L4ff5d5:{c.instructions+=2;NFSU2_TR(0x4ff5d5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff5da:{NFSU2_TR(0x4ff5da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff627;}}
}
B4ff5dc:L4ff5dc:{c.instructions+=10;NFSU2_TR(0x4ff5dc);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff5df:{NFSU2_TR(0x4ff5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ff5e2:{NFSU2_TR(0x4ff5e2);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff5e5:{NFSU2_TR(0x4ff5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff5e8:{NFSU2_TR(0x4ff5e8);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ff5eb:{NFSU2_TR(0x4ff5eb);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ff5ef:{NFSU2_TR(0x4ff5ef);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4ff5f1:{NFSU2_TR(0x4ff5f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff5f3:{NFSU2_TR(0x4ff5f3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ff5f6:{NFSU2_TR(0x4ff5f6);
if(r1(R+514)){{goto L4ff5fe;}}
}
B4ff5f8:L4ff5f8:{c.instructions+=2;NFSU2_TR(0x4ff5f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ff5fa:{NFSU2_TR(0x4ff5fa);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff5fe:L4ff5fe:{c.instructions+=5;NFSU2_TR(0x4ff5fe);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ff601:{NFSU2_TR(0x4ff601);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ff604:{NFSU2_TR(0x4ff604);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff606:{NFSU2_TR(0x4ff606);
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
B4ff609:{NFSU2_TR(0x4ff609);
if(r1(R+514)){{goto L4ff625;}}
}
B4ff60b:L4ff60b:{c.instructions+=2;NFSU2_TR(0x4ff60b);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ff60e:{NFSU2_TR(0x4ff60e);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ff611:L4ff611:{c.instructions+=3;NFSU2_TR(0x4ff611);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ff613:{NFSU2_TR(0x4ff613);
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
B4ff616:{NFSU2_TR(0x4ff616);
if(r1(R+514)){{goto L4ff625;}}
}
B4ff618:L4ff618:{c.instructions+=3;NFSU2_TR(0x4ff618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ff61a:{NFSU2_TR(0x4ff61a);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ff61c:{NFSU2_TR(0x4ff61c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff61full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ff61f:L4ff61f:{c.instructions+=3;NFSU2_TR(0x4ff61f);
__builtin_memmove((R+0),(R+12),1);
}
B4ff621:{NFSU2_TR(0x4ff621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ff622:{NFSU2_TR(0x4ff622);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff625:L4ff625:{c.instructions+=1;NFSU2_TR(0x4ff625);
w1(R+12,u8(0x1ull));
}
B4ff627:L4ff627:{c.instructions+=2;NFSU2_TR(0x4ff627);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ff629:{NFSU2_TR(0x4ff629);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff62cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ff62c:L4ff62c:{c.instructions+=3;NFSU2_TR(0x4ff62c);
__builtin_memmove((R+0),(R+12),1);
}
B4ff62e:{NFSU2_TR(0x4ff62e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ff62f:{NFSU2_TR(0x4ff62f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff640:L4ff640:{c.instructions+=4;NFSU2_TR(0x4ff640);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ff644:{NFSU2_TR(0x4ff644);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ff646:{NFSU2_TR(0x4ff646);
w4(R+4,u32(0x7f7020ull));
}
B4ff64b:{NFSU2_TR(0x4ff64b);
{goto L4ff650;}
}
B4ff650:L4ff650:{c.instructions+=2;NFSU2_TR(0x4ff650);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ff652:{NFSU2_TR(0x4ff652);
if(r1(R+518)){{goto L4ff666;}}
}
B4ff654:L4ff654:{c.instructions+=4;NFSU2_TR(0x4ff654);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4ff657:{NFSU2_TR(0x4ff657);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ff658:{NFSU2_TR(0x4ff658);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x7f70d0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7f70d0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7f70d0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff65e:{NFSU2_TR(0x4ff65e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff650u);}goto L4ff650;}}
}
B4ff660:L4ff660:{c.instructions+=2;NFSU2_TR(0x4ff660);
w4(R+0,u32(0x79aa54ull));
}
B4ff665:{NFSU2_TR(0x4ff665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff666:L4ff666:{c.instructions+=4;NFSU2_TR(0x4ff666);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4ff669:{NFSU2_TR(0x4ff669);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f7020ull))));
}
B4ff66e:{NFSU2_TR(0x4ff66e);
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
B4ff670:{NFSU2_TR(0x4ff670);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff660u);}goto L4ff660;}}
}
B4ff672:L4ff672:{c.instructions+=2;NFSU2_TR(0x4ff672);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff675:{NFSU2_TR(0x4ff675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff680:L4ff680:{c.instructions+=3;NFSU2_TR(0x4ff680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff681:{NFSU2_TR(0x4ff681);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff682:{NFSU2_TR(0x4ff682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff687ull));
TAIL_STATIC(0x570a30u,570);
}
B4ff687:L4ff687:{c.instructions+=4;NFSU2_TR(0x4ff687);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ff689:{NFSU2_TR(0x4ff689);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ff68c:{NFSU2_TR(0x4ff68c);
w4(R+4,u32(0x7f7020ull));
}
B4ff691:{NFSU2_TR(0x4ff691);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff6c6;}}
}
B4ff693:L4ff693:{c.instructions+=2;NFSU2_TR(0x4ff693);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ff696:{NFSU2_TR(0x4ff696);
if(r1(R+518)){{goto L4ff6d9;}}
}
B4ff698:L4ff698:{c.instructions+=4;NFSU2_TR(0x4ff698);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4ff69b:{NFSU2_TR(0x4ff69b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4ff69c:{NFSU2_TR(0x4ff69c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f70d0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f70d0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ff6a2:{NFSU2_TR(0x4ff6a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff693u);}goto L4ff693;}}
}
B4ff6a4:L4ff6a4:{c.instructions+=1;NFSU2_TR(0x4ff6a4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ff6a6:L4ff6a6:{c.instructions+=5;NFSU2_TR(0x4ff6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ff6a9:{NFSU2_TR(0x4ff6a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ff6ab:{NFSU2_TR(0x4ff6ab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ff6ad:{NFSU2_TR(0x4ff6ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ff6af:{NFSU2_TR(0x4ff6af);
if(r1(R+518)){{goto L4ff6fb;}}
}
B4ff6b1:L4ff6b1:{c.instructions+=1;NFSU2_TR(0x4ff6b1);
__builtin_memmove((R+24),(R+4),4);
}
B4ff6b3:L4ff6b3:{c.instructions+=1;NFSU2_TR(0x4ff6b3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ff6b5:L4ff6b5:{c.instructions+=2;NFSU2_TR(0x4ff6b5);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7f6de8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B4ff6bc:{NFSU2_TR(0x4ff6bc);
if(r1(R+518)){{goto L4ff6e4;}}
}
B4ff6be:L4ff6be:{c.instructions+=3;NFSU2_TR(0x4ff6be);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4ff6bf:{NFSU2_TR(0x4ff6bf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ff6c2:{NFSU2_TR(0x4ff6c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff6b5u);}goto L4ff6b5;}}
}
B4ff6c4:L4ff6c4:{c.instructions+=1;NFSU2_TR(0x4ff6c4);
{goto L4ff6f1;}
}
B4ff6c6:L4ff6c6:{c.instructions+=2;NFSU2_TR(0x4ff6c6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ff6c9:{NFSU2_TR(0x4ff6c9);
if(r1(R+518)){{goto L4ff6d9;}}
}
B4ff6cb:L4ff6cb:{c.instructions+=4;NFSU2_TR(0x4ff6cb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4ff6ce:{NFSU2_TR(0x4ff6ce);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4ff6cf:{NFSU2_TR(0x4ff6cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f70d0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f70d0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ff6d5:{NFSU2_TR(0x4ff6d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff6c6u);}goto L4ff6c6;}}
}
B4ff6d7:L4ff6d7:{c.instructions+=1;NFSU2_TR(0x4ff6d7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff6a4u);}goto L4ff6a4;}
}
B4ff6d9:L4ff6d9:{c.instructions+=3;NFSU2_TR(0x4ff6d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4ff6dc:{NFSU2_TR(0x4ff6dc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7f7020ull))));
}
B4ff6e2:{NFSU2_TR(0x4ff6e2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff6a6u);}goto L4ff6a6;}
}
B4ff6e4:L4ff6e4:{c.instructions+=3;NFSU2_TR(0x4ff6e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7f6decull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4ff6eb:{NFSU2_TR(0x4ff6eb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4ff6ed:{NFSU2_TR(0x4ff6ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ff6f1;}}
}
B4ff6ef:L4ff6ef:{c.instructions+=1;NFSU2_TR(0x4ff6ef);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B4ff6f1:L4ff6f1:{c.instructions+=4;NFSU2_TR(0x4ff6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ff6f4:{NFSU2_TR(0x4ff6f4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4ff6f7:{NFSU2_TR(0x4ff6f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ff6f9:{NFSU2_TR(0x4ff6f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff6b3u);}goto L4ff6b3;}}
}
B4ff6fb:L4ff6fb:{c.instructions+=15;NFSU2_TR(0x4ff6fb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ff6fd:{NFSU2_TR(0x4ff6fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ff700:{NFSU2_TR(0x4ff700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B4ff703:{NFSU2_TR(0x4ff703);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4ff704:{NFSU2_TR(0x4ff704);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff0500ull))));
}
B4ff70a:{NFSU2_TR(0x4ff70a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x42bf8ull))));
}
B4ff710:{NFSU2_TR(0x4ff710);
__builtin_memmove((R+0),(R+4),4);
}
B4ff712:{NFSU2_TR(0x4ff712);
__builtin_memmove((R+4),gp(0x7f6de4),4);
}
B4ff718:{NFSU2_TR(0x4ff718);
u8 U[12];
w4(U+0,u32(u32(u32(0x4000ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4ff71f:{NFSU2_TR(0x4ff71f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffc0ull))));
}
B4ff722:{NFSU2_TR(0x4ff722);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ff724:{NFSU2_TR(0x4ff724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ff725:{NFSU2_TR(0x4ff725);
__builtin_memmove(gp(0x8383c4),(R+0),4);
}
B4ff72a:{NFSU2_TR(0x4ff72a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ff72b:{NFSU2_TR(0x4ff72b);
if(r1(R+518)){{goto L4ff755;}}
}
B4ff72d:L4ff72d:{c.instructions+=3;NFSU2_TR(0x4ff72d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff72f:{NFSU2_TR(0x4ff72f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff730:{NFSU2_TR(0x4ff730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff735ull));
TAIL_STATIC(0x440820u,440);
}
B4ff735:L4ff735:{c.instructions+=8;NFSU2_TR(0x4ff735);
__builtin_memmove((R+8),gp(0x8383c4),4);
}
B4ff73b:{NFSU2_TR(0x4ff73b);
u8 U[4];
w4(U+0,u32(0x79aa7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff740:{NFSU2_TR(0x4ff740);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff741:{NFSU2_TR(0x4ff741);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff742:{NFSU2_TR(0x4ff742);
__builtin_memmove(gp(0x8383c0),(R+0),4);
}
B4ff747:{NFSU2_TR(0x4ff747);
__builtin_memmove((R+0),gp(0x7f6de4),4);
}
B4ff74c:{NFSU2_TR(0x4ff74c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff74d:{NFSU2_TR(0x4ff74d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff752ull));
TAIL_STATIC(0x440330u,440);
}
B4ff752:L4ff752:{c.instructions+=1;NFSU2_TR(0x4ff752);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4ff755:L4ff755:{c.instructions+=5;NFSU2_TR(0x4ff755);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff757:{NFSU2_TR(0x4ff757);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff759:{NFSU2_TR(0x4ff759);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff75b:{NFSU2_TR(0x4ff75b);
u8 U[4];
w4(U+0,u32(0x79aa5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff760:{NFSU2_TR(0x4ff760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff765ull));
TAIL_STATIC(0x4944d0u,494);
}
B4ff765:L4ff765:{c.instructions+=2;NFSU2_TR(0x4ff765);
u8 U[4];
w4(U+0,u32(0x79aa5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff76a:{NFSU2_TR(0x4ff76a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff76full));
TAIL_STATIC(0x490170u,490);
}
B4ff76f:L4ff76f:{c.instructions+=2;NFSU2_TR(0x4ff76f);
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
B4ff772:{NFSU2_TR(0x4ff772);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff780:L4ff780:{c.instructions+=6;NFSU2_TR(0x4ff780);
__builtin_memmove((R+4),gp(0x7f70d0),4);
}
B4ff786:{NFSU2_TR(0x4ff786);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff787:{NFSU2_TR(0x4ff787);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff788:{NFSU2_TR(0x4ff788);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ff78a:{NFSU2_TR(0x4ff78a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ff78c:{NFSU2_TR(0x4ff78c);
w4(R+0,u32(0x7f7020ull));
}
B4ff791:L4ff791:{c.instructions+=2;NFSU2_TR(0x4ff791);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ff793:{NFSU2_TR(0x4ff793);
if(r1(R+518)){{goto L4ff865;}}
}
B4ff799:L4ff799:{c.instructions+=4;NFSU2_TR(0x4ff799);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B4ff79c:{NFSU2_TR(0x4ff79c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4ff79d:{NFSU2_TR(0x4ff79d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7f70d0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7f70d0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4ff7a2:{NFSU2_TR(0x4ff7a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff791u);}goto L4ff791;}}
}
B4ff7a4:L4ff7a4:{c.instructions+=1;NFSU2_TR(0x4ff7a4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ff7a6:L4ff7a6:{c.instructions+=2;NFSU2_TR(0x4ff7a6);
u8 U[7];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ff7aa:{NFSU2_TR(0x4ff7aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff7db;}}
}
B4ff7ac:L4ff7ac:{c.instructions+=3;NFSU2_TR(0x4ff7ac);
__builtin_memmove((R+0),gp(0x8383cc),4);
}
B4ff7b1:{NFSU2_TR(0x4ff7b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff7b2:{NFSU2_TR(0x4ff7b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff7b7ull));
TAIL_STATIC(0x580e90u,580);
}
B4ff7b7:L4ff7b7:{c.instructions+=6;NFSU2_TR(0x4ff7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff7ba:{NFSU2_TR(0x4ff7ba);
__builtin_memmove(gp(0x8383cc),(R+12),4);
}
B4ff7c0:{NFSU2_TR(0x4ff7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ff7c3:{NFSU2_TR(0x4ff7c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ff7c6:{NFSU2_TR(0x4ff7c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ff7c8:{NFSU2_TR(0x4ff7c8);
if(r1(R+518)){{goto L4ff7db;}}
}
B4ff7ca:L4ff7ca:{c.instructions+=3;NFSU2_TR(0x4ff7ca);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff7cc:{NFSU2_TR(0x4ff7cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff7cd:{NFSU2_TR(0x4ff7cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff7d2ull));
TAIL_STATIC(0x490150u,490);
}
B4ff7d2:L4ff7d2:{c.instructions+=3;NFSU2_TR(0x4ff7d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ff7d5:{NFSU2_TR(0x4ff7d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ff7d8:{NFSU2_TR(0x4ff7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff7db:L4ff7db:{c.instructions+=2;NFSU2_TR(0x4ff7db);
u8 U[7];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ff7df:{NFSU2_TR(0x4ff7df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff7fd;}}
}
B4ff7e1:L4ff7e1:{c.instructions+=3;NFSU2_TR(0x4ff7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff7e4:{NFSU2_TR(0x4ff7e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ff7e7:{NFSU2_TR(0x4ff7e7);
if(r1(R+518)){{goto L4ff7fd;}}
}
B4ff7e9:L4ff7e9:{c.instructions+=4;NFSU2_TR(0x4ff7e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B4ff7ec:{NFSU2_TR(0x4ff7ec);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff7ee:{NFSU2_TR(0x4ff7ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff7ef:{NFSU2_TR(0x4ff7ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff7f4ull));
TAIL_STATIC(0x490150u,490);
}
B4ff7f4:L4ff7f4:{c.instructions+=3;NFSU2_TR(0x4ff7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ff7f7:{NFSU2_TR(0x4ff7f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ff7fa:{NFSU2_TR(0x4ff7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff7fd:L4ff7fd:{c.instructions+=2;NFSU2_TR(0x4ff7fd);
u8 U[7];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ff801:{NFSU2_TR(0x4ff801);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff81f;}}
}
B4ff803:L4ff803:{c.instructions+=3;NFSU2_TR(0x4ff803);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff806:{NFSU2_TR(0x4ff806);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ff809:{NFSU2_TR(0x4ff809);
if(r1(R+518)){{goto L4ff81f;}}
}
B4ff80b:L4ff80b:{c.instructions+=4;NFSU2_TR(0x4ff80b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B4ff80e:{NFSU2_TR(0x4ff80e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff810:{NFSU2_TR(0x4ff810);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff811:{NFSU2_TR(0x4ff811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff816ull));
TAIL_STATIC(0x490150u,490);
}
B4ff816:L4ff816:{c.instructions+=3;NFSU2_TR(0x4ff816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff819:{NFSU2_TR(0x4ff819);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ff81c:{NFSU2_TR(0x4ff81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ff81f:L4ff81f:{c.instructions+=2;NFSU2_TR(0x4ff81f);
u8 U[7];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ff823:{NFSU2_TR(0x4ff823);
if(r1(R+518)){{goto L4ff8f9;}}
}
B4ff829:L4ff829:{c.instructions+=2;NFSU2_TR(0x4ff829);
u8 U[8];
__builtin_memmove((U+0),gp(0x8383cc),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ff82f:{NFSU2_TR(0x4ff82f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff8d3;}}
}
B4ff835:L4ff835:{c.instructions+=6;NFSU2_TR(0x4ff835);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ff838:{NFSU2_TR(0x4ff838);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff839:{NFSU2_TR(0x4ff839);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff83a:{NFSU2_TR(0x4ff83a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff83b:{NFSU2_TR(0x4ff83b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ff83d:{NFSU2_TR(0x4ff83d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff842ull));
TAIL_STATIC(0x57d900u,57d);
}
B4ff842:L4ff842:{c.instructions+=4;NFSU2_TR(0x4ff842);
__builtin_memmove((R+8),gp(0x7f6de4),4);
}
B4ff848:{NFSU2_TR(0x4ff848);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff849:{NFSU2_TR(0x4ff849);
__builtin_memmove((R+20),(R+0),4);
}
B4ff84b:{NFSU2_TR(0x4ff84b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff850ull));
TAIL_STATIC(0x43e910u,43e);
}
B4ff850:L4ff850:{c.instructions+=4;NFSU2_TR(0x4ff850);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x80ull))));
}
B4ff856:{NFSU2_TR(0x4ff856);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ff859:{NFSU2_TR(0x4ff859);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ff85b:{NFSU2_TR(0x4ff85b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ff873;}}
}
B4ff85d:L4ff85d:{c.instructions+=2;NFSU2_TR(0x4ff85d);
__builtin_memmove((R+28),gp(0x7f6de4),4);
}
B4ff863:{NFSU2_TR(0x4ff863);
{goto L4ff87c;}
}
B4ff865:L4ff865:{c.instructions+=3;NFSU2_TR(0x4ff865);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B4ff868:{NFSU2_TR(0x4ff868);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7f7020ull))));
}
B4ff86e:{NFSU2_TR(0x4ff86e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff7a6u);}goto L4ff7a6;}
}
B4ff873:L4ff873:{c.instructions+=2;NFSU2_TR(0x4ff873);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff874:{NFSU2_TR(0x4ff874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff879ull));
TAIL_STATIC(0x43e910u,43e);
}
B4ff879:L4ff879:{c.instructions+=1;NFSU2_TR(0x4ff879);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ff87c:L4ff87c:{c.instructions+=7;NFSU2_TR(0x4ff87c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff87f:{NFSU2_TR(0x4ff87f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff880:{NFSU2_TR(0x4ff880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff881:{NFSU2_TR(0x4ff881);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff882:{NFSU2_TR(0x4ff882);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff884:{NFSU2_TR(0x4ff884);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff885:{NFSU2_TR(0x4ff885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff88aull));
TAIL_STATIC(0x57cef0u,57c);
}
B4ff88a:L4ff88a:{c.instructions+=9;NFSU2_TR(0x4ff88a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ff88d:{NFSU2_TR(0x4ff88d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4ff890:{NFSU2_TR(0x4ff890);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff891:{NFSU2_TR(0x4ff891);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ull))));
}
B4ff894:{NFSU2_TR(0x4ff894);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x2000ull))));
}
B4ff89a:{NFSU2_TR(0x4ff89a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff89b:{NFSU2_TR(0x4ff89b);
__builtin_memmove((R+4),(R+0),4);
}
B4ff89d:{NFSU2_TR(0x4ff89d);
__builtin_memmove(gp(0x8383cc),(R+0),4);
}
B4ff8a2:{NFSU2_TR(0x4ff8a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff8a7ull));
TAIL_STATIC(0x570fa0u,570);
}
B4ff8a7:L4ff8a7:{c.instructions+=4;NFSU2_TR(0x4ff8a7);
__builtin_memmove((R+4),gp(0x8383cc),4);
}
B4ff8ad:{NFSU2_TR(0x4ff8ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff8ae:{NFSU2_TR(0x4ff8ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff8af:{NFSU2_TR(0x4ff8af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff8b4ull));
TAIL_STATIC(0x57bd70u,57b);
}
B4ff8b4:L4ff8b4:{c.instructions+=4;NFSU2_TR(0x4ff8b4);
u8 U[7];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ff8b8:{NFSU2_TR(0x4ff8b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ff8b9:{NFSU2_TR(0x4ff8b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ff8ba:{NFSU2_TR(0x4ff8ba);
if(r1(R+518)){{goto L4ff8d3;}}
}
B4ff8bc:L4ff8bc:{c.instructions+=1;NFSU2_TR(0x4ff8bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff8c1ull));
TAIL_STATIC(0x571060u,571);
}
B4ff8c1:L4ff8c1:{c.instructions+=2;NFSU2_TR(0x4ff8c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ff8c3:{NFSU2_TR(0x4ff8c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff8d3;}}
}
B4ff8c5:L4ff8c5:{c.instructions+=1;NFSU2_TR(0x4ff8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff8caull));
TAIL_STATIC(0x57ef60u,57e);
}
B4ff8ca:L4ff8ca:{c.instructions+=1;NFSU2_TR(0x4ff8ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff8cfull));
TAIL_STATIC(0x571060u,571);
}
B4ff8cf:L4ff8cf:{c.instructions+=2;NFSU2_TR(0x4ff8cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ff8d1:{NFSU2_TR(0x4ff8d1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff8c5u);}goto L4ff8c5;}}
}
B4ff8d3:L4ff8d3:{c.instructions+=3;NFSU2_TR(0x4ff8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff8d6:{NFSU2_TR(0x4ff8d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ff8d9:{NFSU2_TR(0x4ff8d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff8f9;}}
}
B4ff8db:L4ff8db:{c.instructions+=7;NFSU2_TR(0x4ff8db);
__builtin_memmove((R+8),gp(0x7f6de4),4);
}
B4ff8e1:{NFSU2_TR(0x4ff8e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff8e2:{NFSU2_TR(0x4ff8e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff8e3:{NFSU2_TR(0x4ff8e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff8e4:{NFSU2_TR(0x4ff8e4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff8e6:{NFSU2_TR(0x4ff8e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff8e7:{NFSU2_TR(0x4ff8e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff8ecull));
TAIL_STATIC(0x494d60u,494);
}
B4ff8ec:L4ff8ec:{c.instructions+=3;NFSU2_TR(0x4ff8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff8ef:{NFSU2_TR(0x4ff8ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4ff8f2:{NFSU2_TR(0x4ff8f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ff8f9:L4ff8f9:{c.instructions+=2;NFSU2_TR(0x4ff8f9);
u8 U[7];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ff8fd:{NFSU2_TR(0x4ff8fd);
if(r1(R+518)){{goto L4ff928;}}
}
B4ff8ff:L4ff8ff:{c.instructions+=3;NFSU2_TR(0x4ff8ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff902:{NFSU2_TR(0x4ff902);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ff905:{NFSU2_TR(0x4ff905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff928;}}
}
B4ff907:L4ff907:{c.instructions+=8;NFSU2_TR(0x4ff907);
__builtin_memmove((R+4),gp(0x7f6de4),4);
}
B4ff90d:{NFSU2_TR(0x4ff90d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff90e:{NFSU2_TR(0x4ff90e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff90f:{NFSU2_TR(0x4ff90f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff910:{NFSU2_TR(0x4ff910);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B4ff913:{NFSU2_TR(0x4ff913);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff915:{NFSU2_TR(0x4ff915);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff916:{NFSU2_TR(0x4ff916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff91bull));
TAIL_STATIC(0x494d60u,494);
}
B4ff91b:L4ff91b:{c.instructions+=3;NFSU2_TR(0x4ff91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ff91e:{NFSU2_TR(0x4ff91e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4ff921:{NFSU2_TR(0x4ff921);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ff928:L4ff928:{c.instructions+=2;NFSU2_TR(0x4ff928);
u8 U[7];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ff92c:{NFSU2_TR(0x4ff92c);
if(r1(R+518)){{goto L4ff957;}}
}
B4ff92e:L4ff92e:{c.instructions+=3;NFSU2_TR(0x4ff92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ff931:{NFSU2_TR(0x4ff931);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ff934:{NFSU2_TR(0x4ff934);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ff957;}}
}
B4ff936:L4ff936:{c.instructions+=8;NFSU2_TR(0x4ff936);
__builtin_memmove((R+4),gp(0x7f6de4),4);
}
B4ff93c:{NFSU2_TR(0x4ff93c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff93d:{NFSU2_TR(0x4ff93d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff93e:{NFSU2_TR(0x4ff93e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff93f:{NFSU2_TR(0x4ff93f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B4ff942:{NFSU2_TR(0x4ff942);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff944:{NFSU2_TR(0x4ff944);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff945:{NFSU2_TR(0x4ff945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff94aull));
TAIL_STATIC(0x494d60u,494);
}
B4ff94a:L4ff94a:{c.instructions+=3;NFSU2_TR(0x4ff94a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ff94d:{NFSU2_TR(0x4ff94d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4ff950:{NFSU2_TR(0x4ff950);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ff957:L4ff957:{c.instructions+=5;NFSU2_TR(0x4ff957);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ff95b:{NFSU2_TR(0x4ff95b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ff95c:{NFSU2_TR(0x4ff95c);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ff95e:{NFSU2_TR(0x4ff95e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ff95f:{NFSU2_TR(0x4ff95f);
if(r1(R+518)){{goto L4ff96c;}}
}
B4ff961:L4ff961:{c.instructions+=2;NFSU2_TR(0x4ff961);
u8 U[4];
w4(U+0,u32(0x79aa5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff966:{NFSU2_TR(0x4ff966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ff96bull));
TAIL_STATIC(0x490170u,490);
}
B4ff96b:L4ff96b:{c.instructions+=1;NFSU2_TR(0x4ff96b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ff96c:L4ff96c:{c.instructions+=1;NFSU2_TR(0x4ff96c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff970:L4ff970:{c.instructions+=2;NFSU2_TR(0x4ff970);
__builtin_memmove((R+0),gp(0x7f70d0),4);
}
B4ff975:{NFSU2_TR(0x4ff975);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff980:L4ff980:{c.instructions+=4;NFSU2_TR(0x4ff980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff981:{NFSU2_TR(0x4ff981);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ff985:{NFSU2_TR(0x4ff985);
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
B4ff987:{NFSU2_TR(0x4ff987);
if(r1(R+518)){{goto L4ff9cb;}}
}
B4ff989:L4ff989:{c.instructions+=3;NFSU2_TR(0x4ff989);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ff98d:{NFSU2_TR(0x4ff98d);
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
B4ff98f:{NFSU2_TR(0x4ff98f);
if(r1(R+518)){{goto L4ff9cb;}}
}
B4ff991:L4ff991:{c.instructions+=4;NFSU2_TR(0x4ff991);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+0),(U+0),2);
}
B4ff994:{NFSU2_TR(0x4ff994);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ff996:{NFSU2_TR(0x4ff996);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4ff999:{NFSU2_TR(0x4ff999);
if(r1(R+518)){{goto L4ff9c8;}}
}
B4ff99b:L4ff99b:{c.instructions+=3;NFSU2_TR(0x4ff99b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff99c:{NFSU2_TR(0x4ff99c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ff9a0:{NFSU2_TR(0x4ff9a0);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4ff9a1:L4ff9a1:{c.instructions+=2;NFSU2_TR(0x4ff9a1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ff9a3:{NFSU2_TR(0x4ff9a3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4ff9c7;}}
}
B4ff9a5:L4ff9a5:{c.instructions+=2;NFSU2_TR(0x4ff9a5);
u8 U[2];
w1(R+523,sborrow<u16>(r2(R+0),u16(0xff80ull)));
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xff80ull))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
}
B4ff9a9:{NFSU2_TR(0x4ff9a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ff9bc;}}
}
B4ff9ab:L4ff9ab:{c.instructions+=2;NFSU2_TR(0x4ff9ab);
u8 U[2];
w1(R+523,sborrow<u16>(r2(R+0),u16(0x7full)));
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x7full))));
w1(R+519,u8(s16(r2(U+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4ff9af:{NFSU2_TR(0x4ff9af);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4ff9bc;}}
}
B4ff9b1:L4ff9b1:{c.instructions+=6;NFSU2_TR(0x4ff9b1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B4ff9b3:{NFSU2_TR(0x4ff9b3);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B4ff9b5:{NFSU2_TR(0x4ff9b5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4ff9b6:{NFSU2_TR(0x4ff9b6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B4ff9b9:{NFSU2_TR(0x4ff9b9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4ff9ba:{NFSU2_TR(0x4ff9ba);
{goto L4ff9bf;}
}
B4ff9bc:L4ff9bc:{c.instructions+=1;NFSU2_TR(0x4ff9bc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B4ff9bf:L4ff9bf:{c.instructions+=3;NFSU2_TR(0x4ff9bf);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+0),(U+0),2);
}
B4ff9c2:{NFSU2_TR(0x4ff9c2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4ff9c5:{NFSU2_TR(0x4ff9c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff9a1u);}goto L4ff9a1;}}
}
B4ff9c7:L4ff9c7:{c.instructions+=1;NFSU2_TR(0x4ff9c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ff9c8:L4ff9c8:{c.instructions+=1;NFSU2_TR(0x4ff9c8);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B4ff9cb:L4ff9cb:{c.instructions+=2;NFSU2_TR(0x4ff9cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ff9cc:{NFSU2_TR(0x4ff9cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ff9d0:L4ff9d0:{c.instructions+=13;NFSU2_TR(0x4ff9d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff9d1:{NFSU2_TR(0x4ff9d1);
__builtin_memmove((R+12),gp(0x8383d8),4);
}
B4ff9d7:{NFSU2_TR(0x4ff9d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff9d8:{NFSU2_TR(0x4ff9d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff9d9:{NFSU2_TR(0x4ff9d9);
__builtin_memmove((R+24),gp(0x8383d0),4);
}
B4ff9df:{NFSU2_TR(0x4ff9df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ff9e0:{NFSU2_TR(0x4ff9e0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ff9e2:{NFSU2_TR(0x4ff9e2);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B4ff9e3:{NFSU2_TR(0x4ff9e3);
__builtin_memmove((R+0),(R+24),4);
}
B4ff9e5:{NFSU2_TR(0x4ff9e5);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B4ff9e7:{NFSU2_TR(0x4ff9e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4ff9ea:{NFSU2_TR(0x4ff9ea);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4ff9ec:{NFSU2_TR(0x4ff9ec);
if(r1(R+518)){{goto L4ffa21;}}
}
B4ff9ee:L4ff9ee:{c.instructions+=1;NFSU2_TR(0x4ff9ee);
__builtin_memmove((R+28),(R+28),4);
}
B4ff9f0:L4ff9f0:{c.instructions+=4;NFSU2_TR(0x4ff9f0);
__builtin_memmove((R+20),(R+24),4);
}
B4ff9f2:{NFSU2_TR(0x4ff9f2);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+28))));
}
B4ff9f4:{NFSU2_TR(0x4ff9f4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ff9f7:{NFSU2_TR(0x4ff9f7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ffa07;}}
}
B4ff9f9:L4ff9f9:{c.instructions+=2;NFSU2_TR(0x4ff9f9);
u8 U[26];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+8)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B4ff9fc:{NFSU2_TR(0x4ff9fc);
if(r1(R+518)){{goto L4ffa2a;}}
}
B4ff9fe:L4ff9fe:{c.instructions+=2;NFSU2_TR(0x4ff9fe);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4ffa00:{NFSU2_TR(0x4ffa00);
if(r1(R+518)){{goto L4ffa21;}}
}
B4ffa02:L4ffa02:{c.instructions+=2;NFSU2_TR(0x4ffa02);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+8)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B4ffa05:{NFSU2_TR(0x4ffa05);
if(r1(R+518)){{goto L4ffa33;}}
}
B4ffa07:L4ffa07:{c.instructions+=2;NFSU2_TR(0x4ffa07);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ffa09:{NFSU2_TR(0x4ffa09);
if(r1(R+518)){{goto L4ffa3c;}}
}
B4ffa0b:L4ffa0b:{c.instructions+=2;NFSU2_TR(0x4ffa0b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ffa0d:{NFSU2_TR(0x4ffa0d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4ffa11;}}
}
B4ffa0f:L4ffa0f:{c.instructions+=1;NFSU2_TR(0x4ffa0f);
__builtin_memmove((R+24),(R+0),4);
}
B4ffa11:L4ffa11:{c.instructions+=1;NFSU2_TR(0x4ffa11);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4ffa15;}}
}
B4ffa13:L4ffa13:{c.instructions+=1;NFSU2_TR(0x4ffa13);
__builtin_memmove((R+28),(R+0),4);
}
B4ffa15:L4ffa15:{c.instructions+=5;NFSU2_TR(0x4ffa15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4ffa18:{NFSU2_TR(0x4ffa18);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B4ffa1a:{NFSU2_TR(0x4ffa1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4ffa1d:{NFSU2_TR(0x4ffa1d);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4ffa1f:{NFSU2_TR(0x4ffa1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff9f0u);}goto L4ff9f0;}}
}
B4ffa21:L4ffa21:{c.instructions+=6;NFSU2_TR(0x4ffa21);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4ffa25:{NFSU2_TR(0x4ffa25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffa26:{NFSU2_TR(0x4ffa26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffa27:{NFSU2_TR(0x4ffa27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ffa28:{NFSU2_TR(0x4ffa28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ffa29:{NFSU2_TR(0x4ffa29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffa2a:L4ffa2a:{c.instructions+=6;NFSU2_TR(0x4ffa2a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4ffa2e:{NFSU2_TR(0x4ffa2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffa2f:{NFSU2_TR(0x4ffa2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffa30:{NFSU2_TR(0x4ffa30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ffa31:{NFSU2_TR(0x4ffa31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ffa32:{NFSU2_TR(0x4ffa32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffa33:L4ffa33:{c.instructions+=6;NFSU2_TR(0x4ffa33);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4ffa37:{NFSU2_TR(0x4ffa37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffa38:{NFSU2_TR(0x4ffa38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffa39:{NFSU2_TR(0x4ffa39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ffa3a:{NFSU2_TR(0x4ffa3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ffa3b:{NFSU2_TR(0x4ffa3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffa3c:L4ffa3c:{c.instructions+=6;NFSU2_TR(0x4ffa3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffa3d:{NFSU2_TR(0x4ffa3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffa3e:{NFSU2_TR(0x4ffa3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ffa3f:{NFSU2_TR(0x4ffa3f);
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
B4ffa41:{NFSU2_TR(0x4ffa41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ffa42:{NFSU2_TR(0x4ffa42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffa50:L4ffa50:{c.instructions+=2;NFSU2_TR(0x4ffa50);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ffa54:{NFSU2_TR(0x4ffa54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ffa59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff9d0u);}goto L4ff9d0;}
}
B4ffa59:L4ffa59:{c.instructions+=2;NFSU2_TR(0x4ffa59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffa5b:{NFSU2_TR(0x4ffa5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffa67;}}
}
B4ffa5d:L4ffa5d:{c.instructions+=2;NFSU2_TR(0x4ffa5d);
w4(R+8,u32(0xc01a6f63ull));
}
B4ffa62:{NFSU2_TR(0x4ffa62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ffa67ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff9d0u);}goto L4ff9d0;}
}
B4ffa67:L4ffa67:{c.instructions+=4;NFSU2_TR(0x4ffa67);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ffa6b:{NFSU2_TR(0x4ffa6b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ffa6f:{NFSU2_TR(0x4ffa6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ffa73:{NFSU2_TR(0x4ffa73);
TAIL_STATIC(0x43dc00u,43d);
}
B4ffa80:L4ffa80:{c.instructions+=2;NFSU2_TR(0x4ffa80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ffa84:{NFSU2_TR(0x4ffa84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ffa89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff9d0u);}goto L4ff9d0;}
}
B4ffa89:L4ffa89:{c.instructions+=2;NFSU2_TR(0x4ffa89);
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
B4ffa8b:{NFSU2_TR(0x4ffa8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffa97;}}
}
B4ffa8d:L4ffa8d:{c.instructions+=2;NFSU2_TR(0x4ffa8d);
w4(R+8,u32(0xc01a6f63ull));
}
B4ffa92:{NFSU2_TR(0x4ffa92);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff9d0u);}goto L4ff9d0;}
}
B4ffa97:L4ffa97:{c.instructions+=1;NFSU2_TR(0x4ffa97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffaa0:L4ffaa0:{c.instructions+=3;NFSU2_TR(0x4ffaa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ffaa4:{NFSU2_TR(0x4ffaa4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ffaa7:{NFSU2_TR(0x4ffaa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffab0;}}
}
B4ffaa9:L4ffaa9:{c.instructions+=2;NFSU2_TR(0x4ffaa9);
w4(R+8,u32(0xbcdd9448ull));
}
B4ffaae:{NFSU2_TR(0x4ffaae);
{goto L4ffac0;}
}
B4ffab0:L4ffab0:{c.instructions+=4;NFSU2_TR(0x4ffab0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ffab2:{NFSU2_TR(0x4ffab2);
w4(R+4,u32(0xaull));
}
B4ffab7:{NFSU2_TR(0x4ffab7);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x4ffab7);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x4ffab7);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B4ffab9:{NFSU2_TR(0x4ffab9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f70d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4ffac0:L4ffac0:{c.instructions+=1;NFSU2_TR(0x4ffac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ffac5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff9d0u);}goto L4ff9d0;}
}
B4ffac5:L4ffac5:{c.instructions+=2;NFSU2_TR(0x4ffac5);
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
B4ffac7:{NFSU2_TR(0x4ffac7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffad3;}}
}
B4ffac9:L4ffac9:{c.instructions+=2;NFSU2_TR(0x4ffac9);
w4(R+8,u32(0xc01a6f63ull));
}
B4fface:{NFSU2_TR(0x4fface);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ff9d0u);}goto L4ff9d0;}
}
B4ffad3:L4ffad3:{c.instructions+=1;NFSU2_TR(0x4ffad3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffae0:L4ffae0:{c.instructions+=5;NFSU2_TR(0x4ffae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ffae4:{NFSU2_TR(0x4ffae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ffae6:{NFSU2_TR(0x4ffae6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ffae8:{NFSU2_TR(0x4ffae8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x39000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x39000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x39000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ffaee:{NFSU2_TR(0x4ffaee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffb09;}}
}
B4ffaf0:L4ffaf0:{c.instructions+=5;NFSU2_TR(0x4ffaf0);
__builtin_memmove(gp(0x8383d0),(R+0),4);
}
B4ffaf5:{NFSU2_TR(0x4ffaf5);
__builtin_memmove(gp(0x8383d4),(R+0),4);
}
B4ffafa:{NFSU2_TR(0x4ffafa);
__builtin_memmove(gp(0x8383d8),(R+0),4);
}
B4ffaff:{NFSU2_TR(0x4ffaff);
__builtin_memmove(gp(0x8383dc),(R+0),4);
}
B4ffb04:{NFSU2_TR(0x4ffb04);
w4(R+0,u32(0x1ull));
}
B4ffb09:L4ffb09:{c.instructions+=1;NFSU2_TR(0x4ffb09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffb10:L4ffb10:{c.instructions+=11;NFSU2_TR(0x4ffb10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4ffb13:{NFSU2_TR(0x4ffb13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffb14:{NFSU2_TR(0x4ffb14);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ffb18:{NFSU2_TR(0x4ffb18);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffb19:{NFSU2_TR(0x4ffb19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffb1a:{NFSU2_TR(0x4ffb1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffb1b:{NFSU2_TR(0x4ffb1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffb1c:{NFSU2_TR(0x4ffb1c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ffb1e:{NFSU2_TR(0x4ffb1e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ffb20:{NFSU2_TR(0x4ffb20);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ffb25:{NFSU2_TR(0x4ffb25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ffb2aull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4ffb2a:L4ffb2a:{c.instructions+=5;NFSU2_TR(0x4ffb2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ffb2e:{NFSU2_TR(0x4ffb2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ffb31:{NFSU2_TR(0x4ffb31);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffb33:{NFSU2_TR(0x4ffb33);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ffb37:{NFSU2_TR(0x4ffb37);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ffc2c;}}
}
B4ffb3d:L4ffb3d:{c.instructions+=3;NFSU2_TR(0x4ffb3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ffb41:{NFSU2_TR(0x4ffb41);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ffb42:{NFSU2_TR(0x4ffb42);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ffb46:L4ffb46:{c.instructions+=2;NFSU2_TR(0x4ffb46);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4ffb4a:{NFSU2_TR(0x4ffb4a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4ffc2c;}}
}
B4ffb50:L4ffb50:{c.instructions+=4;NFSU2_TR(0x4ffb50);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B4ffb53:{NFSU2_TR(0x4ffb53);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4ffb54:{NFSU2_TR(0x4ffb54);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B4ffb56:{NFSU2_TR(0x4ffb56);
if(r1(R+519)){{goto L4ffb66;}}
}
B4ffb58:L4ffb58:{c.instructions+=3;NFSU2_TR(0x4ffb58);
w2(R+4,u16(r1(R+4)));
}
B4ffb5c:{NFSU2_TR(0x4ffb5c);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B4ffb61:{NFSU2_TR(0x4ffb61);
{goto L4ffc1f;}
}
B4ffb66:L4ffb66:{c.instructions+=4;NFSU2_TR(0x4ffb66);
__builtin_memmove((R+8),(R+4),1);
}
B4ffb68:{NFSU2_TR(0x4ffb68);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xe0ull))));
}
B4ffb6b:{NFSU2_TR(0x4ffb6b);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xc0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4ffb6e:{NFSU2_TR(0x4ffb6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffba5;}}
}
B4ffb70:L4ffb70:{c.instructions+=6;NFSU2_TR(0x4ffb70);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B4ffb73:{NFSU2_TR(0x4ffb73);
__builtin_memmove((R+0),(R+8),1);
}
B4ffb75:{NFSU2_TR(0x4ffb75);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xc0ull))));
}
B4ffb77:{NFSU2_TR(0x4ffb77);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4ffb78:{NFSU2_TR(0x4ffb78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x80ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ffb7a:{NFSU2_TR(0x4ffb7a);
if(r1(R+518)){{goto L4ffb8b;}}
}
B4ffb7c:L4ffb7c:{c.instructions+=4;NFSU2_TR(0x4ffb7c);
w2(R+4,u16(r1(R+4)));
}
B4ffb80:{NFSU2_TR(0x4ffb80);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4ffb81:{NFSU2_TR(0x4ffb81);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B4ffb86:{NFSU2_TR(0x4ffb86);
{goto L4ffc1a;}
}
B4ffb8b:L4ffb8b:{c.instructions+=8;NFSU2_TR(0x4ffb8b);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1full))));
}
B4ffb8e:{NFSU2_TR(0x4ffb8e);
w2(R+0,u16(r1(R+4)));
}
B4ffb92:{NFSU2_TR(0x4ffb92);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x3full))));
}
B4ffb95:{NFSU2_TR(0x4ffb95);
w2(R+4,u16(r1(R+8)));
}
B4ffb99:{NFSU2_TR(0x4ffb99);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4ffb9c:{NFSU2_TR(0x4ffb9c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4ffb9e:{NFSU2_TR(0x4ffb9e);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B4ffba3:{NFSU2_TR(0x4ffba3);
{goto L4ffc1f;}
}
B4ffba5:L4ffba5:{c.instructions+=4;NFSU2_TR(0x4ffba5);
__builtin_memmove((R+8),(R+4),1);
}
B4ffba7:{NFSU2_TR(0x4ffba7);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xf0ull))));
}
B4ffbaa:{NFSU2_TR(0x4ffbaa);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4ffbad:{NFSU2_TR(0x4ffbad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffc11;}}
}
B4ffbaf:L4ffbaf:{c.instructions+=8;NFSU2_TR(0x4ffbaf);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B4ffbb2:{NFSU2_TR(0x4ffbb2);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B4ffbb6:{NFSU2_TR(0x4ffbb6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4ffbb7:{NFSU2_TR(0x4ffbb7);
__builtin_memmove((R+12),(R+8),1);
}
B4ffbb9:{NFSU2_TR(0x4ffbb9);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xc0ull))));
}
B4ffbbc:{NFSU2_TR(0x4ffbbc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4ffbbd:{NFSU2_TR(0x4ffbbd);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x80ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4ffbc0:{NFSU2_TR(0x4ffbc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffbff;}}
}
B4ffbc2:L4ffbc2:{c.instructions+=4;NFSU2_TR(0x4ffbc2);
__builtin_memmove((R+12),(R+0),1);
}
B4ffbc4:{NFSU2_TR(0x4ffbc4);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xc0ull))));
}
B4ffbc7:{NFSU2_TR(0x4ffbc7);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x80ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4ffbca:{NFSU2_TR(0x4ffbca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffbff;}}
}
B4ffbcc:L4ffbcc:{c.instructions+=11;NFSU2_TR(0x4ffbcc);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x3full))));
}
B4ffbcf:{NFSU2_TR(0x4ffbcf);
w2(R+8,u16(r1(R+8)));
}
B4ffbd3:{NFSU2_TR(0x4ffbd3);
w2(R+4,u16(r1(R+4)));
}
B4ffbd7:{NFSU2_TR(0x4ffbd7);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x3full))));
}
B4ffbd9:{NFSU2_TR(0x4ffbd9);
w2(R+0,u16(r1(R+0)));
}
B4ffbdd:{NFSU2_TR(0x4ffbdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4ffbe0:{NFSU2_TR(0x4ffbe0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4ffbe2:{NFSU2_TR(0x4ffbe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4ffbe5:{NFSU2_TR(0x4ffbe5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4ffbe7:{NFSU2_TR(0x4ffbe7);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
w1(R+512,u8((r2(U+0))<(u16(0xff80ull))));
}
B4ffbec:{NFSU2_TR(0x4ffbec);
if(r1(R+512)){{goto L4ffbf4;}}
}
B4ffbee:L4ffbee:{c.instructions+=1;NFSU2_TR(0x4ffbee);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B4ffbf4:L4ffbf4:{c.instructions+=3;NFSU2_TR(0x4ffbf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ffbf8:{NFSU2_TR(0x4ffbf8);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B4ffbfd:{NFSU2_TR(0x4ffbfd);
{goto L4ffc1f;}
}
B4ffbff:L4ffbff:{c.instructions+=5;NFSU2_TR(0x4ffbff);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ffc03:{NFSU2_TR(0x4ffc03);
w2(R+4,u16(r1(R+4)));
}
B4ffc07:{NFSU2_TR(0x4ffc07);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x2ull))));
}
B4ffc0a:{NFSU2_TR(0x4ffc0a);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B4ffc0f:{NFSU2_TR(0x4ffc0f);
{goto L4ffc1a;}
}
B4ffc11:L4ffc11:{c.instructions+=2;NFSU2_TR(0x4ffc11);
w2(R+8,u16(r1(R+4)));
}
B4ffc15:{NFSU2_TR(0x4ffc15);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B4ffc1a:L4ffc1a:{c.instructions+=1;NFSU2_TR(0x4ffc1a);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ffc1f:L4ffc1f:{c.instructions+=4;NFSU2_TR(0x4ffc1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ffc23:{NFSU2_TR(0x4ffc23);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4ffc24:{NFSU2_TR(0x4ffc24);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ffc26:{NFSU2_TR(0x4ffc26);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ffb46u);}goto L4ffb46;}}
}
B4ffc2c:L4ffc2c:{c.instructions+=11;NFSU2_TR(0x4ffc2c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ffc30:{NFSU2_TR(0x4ffc30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffc31:{NFSU2_TR(0x4ffc31);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
w2(U+8,u16(0x0ull));
s2(u32(r4(U+4)),r2(U+8));
}
B4ffc38:{NFSU2_TR(0x4ffc38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffc39:{NFSU2_TR(0x4ffc39);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ffc3b:{NFSU2_TR(0x4ffc3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ffc3d:{NFSU2_TR(0x4ffc3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ffc3e:{NFSU2_TR(0x4ffc3e);
__builtin_memmove((R+0),(R+518),1);
}
B4ffc41:{NFSU2_TR(0x4ffc41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ffc42:{NFSU2_TR(0x4ffc42);
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
B4ffc45:{NFSU2_TR(0x4ffc45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffc50:L4ffc50:{c.instructions+=6;NFSU2_TR(0x4ffc50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffc51:{NFSU2_TR(0x4ffc51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffc53:{NFSU2_TR(0x4ffc53);
u8 U[4];
w4(U+0,u32(0xe000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffc58:{NFSU2_TR(0x4ffc58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffc5a:{NFSU2_TR(0x4ffc5a);
w4(R+4,u32(0x88f298ull));
}
B4ffc5f:{NFSU2_TR(0x4ffc5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ffc64ull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B4ffc64:L4ffc64:{c.instructions+=2;NFSU2_TR(0x4ffc64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffc66:{NFSU2_TR(0x4ffc66);
if(r1(R+518)){{goto L4ffc8b;}}
}
B4ffc68:L4ffc68:{c.instructions+=2;NFSU2_TR(0x4ffc68);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ffc6c:{NFSU2_TR(0x4ffc6c);
__builtin_memmove((R+16),(R+16),4);
}
B4ffc70:L4ffc70:{c.instructions+=2;NFSU2_TR(0x4ffc70);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4ffc73:{NFSU2_TR(0x4ffc73);
if(r1(R+518)){{goto L4ffc8d;}}
}
B4ffc75:L4ffc75:{c.instructions+=5;NFSU2_TR(0x4ffc75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffc76:{NFSU2_TR(0x4ffc76);
u8 U[4];
w4(U+0,u32(0xe000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffc7b:{NFSU2_TR(0x4ffc7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffc7d:{NFSU2_TR(0x4ffc7d);
w4(R+4,u32(0x88f298ull));
}
B4ffc82:{NFSU2_TR(0x4ffc82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ffc87ull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B4ffc87:L4ffc87:{c.instructions+=2;NFSU2_TR(0x4ffc87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffc89:{NFSU2_TR(0x4ffc89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ffc70u);}goto L4ffc70;}}
}
B4ffc8b:L4ffc8b:{c.instructions+=1;NFSU2_TR(0x4ffc8b);
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
B4ffc8d:L4ffc8d:{c.instructions+=2;NFSU2_TR(0x4ffc8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffc8e:{NFSU2_TR(0x4ffc8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffc90:L4ffc90:{c.instructions+=3;NFSU2_TR(0x4ffc90);
__builtin_memmove((R+8),gp(0x8383e4),4);
}
B4ffc96:{NFSU2_TR(0x4ffc96);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ffc99:{NFSU2_TR(0x4ffc99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ffcae;}}
}
B4ffc9b:L4ffc9b:{c.instructions+=3;NFSU2_TR(0x4ffc9b);
__builtin_memmove((R+0),gp(0x8641f0),4);
}
B4ffca0:{NFSU2_TR(0x4ffca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffca2:{NFSU2_TR(0x4ffca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffcae;}}
}
B4ffca4:L4ffca4:{c.instructions+=1;NFSU2_TR(0x4ffca4);
s4(0x8641f0,u32(0x1ull));
}
B4ffcae:L4ffcae:{c.instructions+=5;NFSU2_TR(0x4ffcae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffcaf:{NFSU2_TR(0x4ffcaf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ffcb1:{NFSU2_TR(0x4ffcb1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffcb3:{NFSU2_TR(0x4ffcb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffcb4:{NFSU2_TR(0x4ffcb4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ffcd2;}}
}
B4ffcb6:L4ffcb6:{c.instructions+=3;NFSU2_TR(0x4ffcb6);
__builtin_memmove((R+28),gp(0x8383e0),4);
}
B4ffcbc:{NFSU2_TR(0x4ffcbc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ffcc0:{NFSU2_TR(0x4ffcc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ffcc3:L4ffcc3:{c.instructions+=2;NFSU2_TR(0x4ffcc3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ffcc5:{NFSU2_TR(0x4ffcc5);
if(r1(R+518)){{goto L4ffcd7;}}
}
B4ffcc7:L4ffcc7:{c.instructions+=4;NFSU2_TR(0x4ffcc7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ffcc8:{NFSU2_TR(0x4ffcc8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x88ull))));
}
B4ffcce:{NFSU2_TR(0x4ffcce);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ffcd0:{NFSU2_TR(0x4ffcd0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ffcc3u);}goto L4ffcc3;}}
}
B4ffcd2:L4ffcd2:{c.instructions+=4;NFSU2_TR(0x4ffcd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffcd3:{NFSU2_TR(0x4ffcd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffcd4:{NFSU2_TR(0x4ffcd4);
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
B4ffcd6:{NFSU2_TR(0x4ffcd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffcd7:L4ffcd7:{c.instructions+=5;NFSU2_TR(0x4ffcd7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4ffcdd:{NFSU2_TR(0x4ffcdd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ffcdf:{NFSU2_TR(0x4ffcdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffce0:{NFSU2_TR(0x4ffce0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffce1:{NFSU2_TR(0x4ffce1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffcf0:L4ffcf0:{c.instructions+=9;NFSU2_TR(0x4ffcf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ffcf4:{NFSU2_TR(0x4ffcf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffcf6:{NFSU2_TR(0x4ffcf6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffcf7:{NFSU2_TR(0x4ffcf7);
__builtin_memmove((R+12),gp(0x8383e0),4);
}
B4ffcfd:{NFSU2_TR(0x4ffcfd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffcfe:{NFSU2_TR(0x4ffcfe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ffd02:{NFSU2_TR(0x4ffd02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffd03:{NFSU2_TR(0x4ffd03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffd04:{NFSU2_TR(0x4ffd04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffd24;}}
}
B4ffd06:L4ffd06:{c.instructions+=5;NFSU2_TR(0x4ffd06);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4ffd0a:{NFSU2_TR(0x4ffd0a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ffd0c:{NFSU2_TR(0x4ffd0c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffd0e:{NFSU2_TR(0x4ffd0e);
__builtin_memmove((R+0),(R+12),4);
}
B4ffd10:{NFSU2_TR(0x4ffd10);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ffd24;}}
}
B4ffd12:L4ffd12:{c.instructions+=1;NFSU2_TR(0x4ffd12);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffd15:L4ffd15:{c.instructions+=3;NFSU2_TR(0x4ffd15);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B4ffd18:{NFSU2_TR(0x4ffd18);
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
B4ffd1a:{NFSU2_TR(0x4ffd1a);
if(r1(R+518)){{goto L4ffd6f;}}
}
B4ffd1c:L4ffd1c:{c.instructions+=4;NFSU2_TR(0x4ffd1c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4ffd1d:{NFSU2_TR(0x4ffd1d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4ffd20:{NFSU2_TR(0x4ffd20);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ffd22:{NFSU2_TR(0x4ffd22);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ffd15u);}goto L4ffd15;}}
}
B4ffd24:L4ffd24:{c.instructions+=6;NFSU2_TR(0x4ffd24);
__builtin_memmove((R+28),gp(0x8383e4),4);
}
B4ffd2a:{NFSU2_TR(0x4ffd2a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B4ffd30:{NFSU2_TR(0x4ffd30);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B4ffd32:{NFSU2_TR(0x4ffd32);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
}
B4ffd37:{NFSU2_TR(0x4ffd37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B4ffd39:{NFSU2_TR(0x4ffd39);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4ffd68;}}
}
B4ffd3b:L4ffd3b:{c.instructions+=1;NFSU2_TR(0x4ffd3b);
{goto L4ffd40;}
}
B4ffd40:L4ffd40:{c.instructions+=4;NFSU2_TR(0x4ffd40);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B4ffd44:{NFSU2_TR(0x4ffd44);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ffd46:{NFSU2_TR(0x4ffd46);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffd48:{NFSU2_TR(0x4ffd48);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ffd5f;}}
}
B4ffd4a:L4ffd4a:{c.instructions+=2;NFSU2_TR(0x4ffd4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4ffd4d:{NFSU2_TR(0x4ffd4d);
__builtin_memmove((R+4),(R+4),4);
}
B4ffd50:L4ffd50:{c.instructions+=3;NFSU2_TR(0x4ffd50);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B4ffd53:{NFSU2_TR(0x4ffd53);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ffd55:{NFSU2_TR(0x4ffd55);
if(r1(R+518)){{goto L4ffd6a;}}
}
B4ffd57:L4ffd57:{c.instructions+=4;NFSU2_TR(0x4ffd57);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4ffd58:{NFSU2_TR(0x4ffd58);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4ffd5b:{NFSU2_TR(0x4ffd5b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ffd5d:{NFSU2_TR(0x4ffd5d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ffd50u);}goto L4ffd50;}}
}
B4ffd5f:L4ffd5f:{c.instructions+=3;NFSU2_TR(0x4ffd5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
}
B4ffd64:{NFSU2_TR(0x4ffd64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B4ffd66:{NFSU2_TR(0x4ffd66);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ffd40u);}goto L4ffd40;}}
}
B4ffd68:L4ffd68:{c.instructions+=1;NFSU2_TR(0x4ffd68);
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
B4ffd6a:L4ffd6a:{c.instructions+=5;NFSU2_TR(0x4ffd6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffd6b:{NFSU2_TR(0x4ffd6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffd6c:{NFSU2_TR(0x4ffd6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ffd6d:{NFSU2_TR(0x4ffd6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ffd6e:{NFSU2_TR(0x4ffd6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffd6f:L4ffd6f:{c.instructions+=6;NFSU2_TR(0x4ffd6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffd70:{NFSU2_TR(0x4ffd70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffd71:{NFSU2_TR(0x4ffd71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ffd72:{NFSU2_TR(0x4ffd72);
__builtin_memmove((R+0),(R+12),4);
}
B4ffd74:{NFSU2_TR(0x4ffd74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ffd75:{NFSU2_TR(0x4ffd75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffd80:L4ffd80:{c.instructions+=2;NFSU2_TR(0x4ffd80);
__builtin_memmove((R+0),gp(0x8383e4),4);
}
B4ffd85:{NFSU2_TR(0x4ffd85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffd90:L4ffd90:{c.instructions+=3;NFSU2_TR(0x4ffd90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ffd94:{NFSU2_TR(0x4ffd94);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4ffd96:{NFSU2_TR(0x4ffd96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ffdaf;}}
}
B4ffd98:L4ffd98:{c.instructions+=2;NFSU2_TR(0x4ffd98);
u8 U[8];
__builtin_memmove((U+0),gp(0x8383e4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ffd9e:{NFSU2_TR(0x4ffd9e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4ffdaf;}}
}
B4ffda0:L4ffda0:{c.instructions+=4;NFSU2_TR(0x4ffda0);
__builtin_memmove((R+4),gp(0x8383e0),4);
}
B4ffda6:{NFSU2_TR(0x4ffda6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4ffdac:{NFSU2_TR(0x4ffdac);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ffdae:{NFSU2_TR(0x4ffdae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffdaf:L4ffdaf:{c.instructions+=2;NFSU2_TR(0x4ffdaf);
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
B4ffdb1:{NFSU2_TR(0x4ffdb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffdc0:L4ffdc0:{c.instructions+=7;NFSU2_TR(0x4ffdc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ffdc3:{NFSU2_TR(0x4ffdc3);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B4ffdc5:{NFSU2_TR(0x4ffdc5);
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
}
B4ffdc7:{NFSU2_TR(0x4ffdc7);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B4ffdc9:{NFSU2_TR(0x4ffdc9);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4ffdcb:{NFSU2_TR(0x4ffdcb);
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
B4ffdcc:{NFSU2_TR(0x4ffdcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffdd0:L4ffdd0:{c.instructions+=3;NFSU2_TR(0x4ffdd0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4ffdd4:{NFSU2_TR(0x4ffdd4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),m4(0x838428)));
w1(R+523,scarry<u32>(r4(R+0),m4(0x838428)));
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x838428))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ffdda:{NFSU2_TR(0x4ffdda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffde0:L4ffde0:{c.instructions+=6;NFSU2_TR(0x4ffde0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffde1:{NFSU2_TR(0x4ffde1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x35ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B4ffde5:{NFSU2_TR(0x4ffde5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ffde7:{NFSU2_TR(0x4ffde7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffde9:{NFSU2_TR(0x4ffde9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffdea:{NFSU2_TR(0x4ffdea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ffe08;}}
}
B4ffdec:L4ffdec:{c.instructions+=2;NFSU2_TR(0x4ffdec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ffdef:{NFSU2_TR(0x4ffdef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ffdf3:L4ffdf3:{c.instructions+=2;NFSU2_TR(0x4ffdf3);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ffdf7:{NFSU2_TR(0x4ffdf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffe00;}}
}
B4ffdf9:L4ffdf9:{c.instructions+=3;NFSU2_TR(0x4ffdf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ffdfc:{NFSU2_TR(0x4ffdfc);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+10)));
w4(U+14,u32(u32(r4(R+28))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4ffdfe:{NFSU2_TR(0x4ffdfe);
if(r1(R+518)){{goto L4ffe0f;}}
}
B4ffe00:L4ffe00:{c.instructions+=4;NFSU2_TR(0x4ffe00);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4ffe01:{NFSU2_TR(0x4ffe01);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B4ffe04:{NFSU2_TR(0x4ffe04);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ffe06:{NFSU2_TR(0x4ffe06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ffdf3u);}goto L4ffdf3;}}
}
B4ffe08:L4ffe08:{c.instructions+=4;NFSU2_TR(0x4ffe08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffe09:{NFSU2_TR(0x4ffe09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffe0a:{NFSU2_TR(0x4ffe0a);
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
B4ffe0c:{NFSU2_TR(0x4ffe0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffe0f:L4ffe0f:{c.instructions+=4;NFSU2_TR(0x4ffe0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffe10:{NFSU2_TR(0x4ffe10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffe11:{NFSU2_TR(0x4ffe11);
w1(R+0,u8(0x1ull));
}
B4ffe13:{NFSU2_TR(0x4ffe13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffe20:L4ffe20:{c.instructions+=6;NFSU2_TR(0x4ffe20);
__builtin_memmove((R+8),gp(0x8383f4),4);
}
B4ffe26:{NFSU2_TR(0x4ffe26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffe27:{NFSU2_TR(0x4ffe27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ffe29:{NFSU2_TR(0x4ffe29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffe2b:{NFSU2_TR(0x4ffe2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffe2c:{NFSU2_TR(0x4ffe2c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ffe4f;}}
}
B4ffe2e:L4ffe2e:{c.instructions+=4;NFSU2_TR(0x4ffe2e);
__builtin_memmove((R+28),gp(0x8383f0),4);
}
B4ffe34:{NFSU2_TR(0x4ffe34);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ffe38:{NFSU2_TR(0x4ffe38);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ffe3b:{NFSU2_TR(0x4ffe3b);
{goto L4ffe40;}
}
B4ffe40:L4ffe40:{c.instructions+=2;NFSU2_TR(0x4ffe40);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ffe42:{NFSU2_TR(0x4ffe42);
if(r1(R+518)){{goto L4ffe54;}}
}
B4ffe44:L4ffe44:{c.instructions+=4;NFSU2_TR(0x4ffe44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ffe45:{NFSU2_TR(0x4ffe45);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
}
B4ffe4b:{NFSU2_TR(0x4ffe4b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ffe4d:{NFSU2_TR(0x4ffe4d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ffe40u);}goto L4ffe40;}}
}
B4ffe4f:L4ffe4f:{c.instructions+=4;NFSU2_TR(0x4ffe4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffe50:{NFSU2_TR(0x4ffe50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffe51:{NFSU2_TR(0x4ffe51);
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
B4ffe53:{NFSU2_TR(0x4ffe53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffe54:L4ffe54:{c.instructions+=6;NFSU2_TR(0x4ffe54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4ffe57:{NFSU2_TR(0x4ffe57);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4ffe5a:{NFSU2_TR(0x4ffe5a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ffe5c:{NFSU2_TR(0x4ffe5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffe5d:{NFSU2_TR(0x4ffe5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffe5e:{NFSU2_TR(0x4ffe5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffe60:L4ffe60:{c.instructions+=6;NFSU2_TR(0x4ffe60);
__builtin_memmove((R+8),gp(0x8383f4),4);
}
B4ffe66:{NFSU2_TR(0x4ffe66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffe67:{NFSU2_TR(0x4ffe67);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ffe69:{NFSU2_TR(0x4ffe69);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ffe6b:{NFSU2_TR(0x4ffe6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ffe6c:{NFSU2_TR(0x4ffe6c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ffe8f;}}
}
B4ffe6e:L4ffe6e:{c.instructions+=4;NFSU2_TR(0x4ffe6e);
__builtin_memmove((R+28),gp(0x8383f0),4);
}
B4ffe74:{NFSU2_TR(0x4ffe74);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ffe78:{NFSU2_TR(0x4ffe78);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ffe7b:{NFSU2_TR(0x4ffe7b);
{goto L4ffe80;}
}
B4ffe80:L4ffe80:{c.instructions+=2;NFSU2_TR(0x4ffe80);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ffe82:{NFSU2_TR(0x4ffe82);
if(r1(R+518)){{goto L4ffe94;}}
}
B4ffe84:L4ffe84:{c.instructions+=4;NFSU2_TR(0x4ffe84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ffe85:{NFSU2_TR(0x4ffe85);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
}
B4ffe8b:{NFSU2_TR(0x4ffe8b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ffe8d:{NFSU2_TR(0x4ffe8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ffe80u);}goto L4ffe80;}}
}
B4ffe8f:L4ffe8f:{c.instructions+=4;NFSU2_TR(0x4ffe8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffe90:{NFSU2_TR(0x4ffe90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffe91:{NFSU2_TR(0x4ffe91);
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
B4ffe93:{NFSU2_TR(0x4ffe93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffe94:L4ffe94:{c.instructions+=6;NFSU2_TR(0x4ffe94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4ffe97:{NFSU2_TR(0x4ffe97);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4ffe9a:{NFSU2_TR(0x4ffe9a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ffe9c:{NFSU2_TR(0x4ffe9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffe9d:{NFSU2_TR(0x4ffe9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffe9e:{NFSU2_TR(0x4ffe9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffea0:L4ffea0:{c.instructions+=2;NFSU2_TR(0x4ffea0);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x7fc8d0d0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x7fc8d0d0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x7fc8d0d0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4ffea7:{NFSU2_TR(0x4ffea7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ffeaf;}}
}
B4ffea9:L4ffea9:{c.instructions+=2;NFSU2_TR(0x4ffea9);
w4(R+0,u32(0x6aa654c5ull));
}
B4ffeae:{NFSU2_TR(0x4ffeae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffeaf:L4ffeaf:{c.instructions+=3;NFSU2_TR(0x4ffeaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4ffeb3:{NFSU2_TR(0x4ffeb3);
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
B4ffeb6:{NFSU2_TR(0x4ffeb6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ffee3;}}
}
B4ffeb8:L4ffeb8:{c.instructions+=1;NFSU2_TR(0x4ffeb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ffee8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ffebf:L4ffebf:{c.instructions+=2;NFSU2_TR(0x4ffebf);
w4(R+0,u32(0x7ce21662ull));
}
B4ffec4:{NFSU2_TR(0x4ffec4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffec5:L4ffec5:{c.instructions+=2;NFSU2_TR(0x4ffec5);
w4(R+0,u32(0xa5f04bd7ull));
}
B4ffeca:{NFSU2_TR(0x4ffeca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffecb:L4ffecb:{c.instructions+=2;NFSU2_TR(0x4ffecb);
w4(R+0,u32(0xb9253e9ull));
}
B4ffed0:{NFSU2_TR(0x4ffed0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffed1:L4ffed1:{c.instructions+=2;NFSU2_TR(0x4ffed1);
w4(R+0,u32(0xaf258ee8ull));
}
B4ffed6:{NFSU2_TR(0x4ffed6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffed7:L4ffed7:{c.instructions+=2;NFSU2_TR(0x4ffed7);
w4(R+0,u32(0x4dc0a646ull));
}
B4ffedc:{NFSU2_TR(0x4ffedc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffedd:L4ffedd:{c.instructions+=2;NFSU2_TR(0x4ffedd);
w4(R+0,u32(0xa4e5ee6cull));
}
B4ffee2:{NFSU2_TR(0x4ffee2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffee3:L4ffee3:{c.instructions+=2;NFSU2_TR(0x4ffee3);
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
B4ffee5:{NFSU2_TR(0x4ffee5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fff00:L4fff00:{c.instructions+=6;NFSU2_TR(0x4fff00);
__builtin_memmove((R+8),gp(0x838404),4);
}
B4fff06:{NFSU2_TR(0x4fff06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fff07:{NFSU2_TR(0x4fff07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fff09:{NFSU2_TR(0x4fff09);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fff0b:{NFSU2_TR(0x4fff0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fff0c:{NFSU2_TR(0x4fff0c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fff2c;}}
}
B4fff0e:L4fff0e:{c.instructions+=4;NFSU2_TR(0x4fff0e);
__builtin_memmove((R+28),gp(0x838400),4);
}
B4fff14:{NFSU2_TR(0x4fff14);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fff18:{NFSU2_TR(0x4fff18);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fff1b:{NFSU2_TR(0x4fff1b);
{goto L4fff20;}
}
B4fff20:L4fff20:{c.instructions+=2;NFSU2_TR(0x4fff20);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4fff22:{NFSU2_TR(0x4fff22);
if(r1(R+518)){{goto L4fff31;}}
}
B4fff24:L4fff24:{c.instructions+=4;NFSU2_TR(0x4fff24);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fff25:{NFSU2_TR(0x4fff25);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x44ull))));
}
B4fff28:{NFSU2_TR(0x4fff28);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fff2a:{NFSU2_TR(0x4fff2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fff20u);}goto L4fff20;}}
}
B4fff2c:L4fff2c:{c.instructions+=4;NFSU2_TR(0x4fff2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fff2d:{NFSU2_TR(0x4fff2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fff2e:{NFSU2_TR(0x4fff2e);
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
B4fff30:{NFSU2_TR(0x4fff30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fff31:L4fff31:{c.instructions+=5;NFSU2_TR(0x4fff31);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x44ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B4fff34:{NFSU2_TR(0x4fff34);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4fff38:{NFSU2_TR(0x4fff38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fff39:{NFSU2_TR(0x4fff39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fff3a:{NFSU2_TR(0x4fff3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fff40:L4fff40:{c.instructions+=6;NFSU2_TR(0x4fff40);
__builtin_memmove((R+8),gp(0x838404),4);
}
B4fff46:{NFSU2_TR(0x4fff46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fff47:{NFSU2_TR(0x4fff47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fff49:{NFSU2_TR(0x4fff49);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fff4b:{NFSU2_TR(0x4fff4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fff4c:{NFSU2_TR(0x4fff4c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fff6c;}}
}
B4fff4e:L4fff4e:{c.instructions+=4;NFSU2_TR(0x4fff4e);
__builtin_memmove((R+28),gp(0x838400),4);
}
B4fff54:{NFSU2_TR(0x4fff54);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fff58:{NFSU2_TR(0x4fff58);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fff5b:{NFSU2_TR(0x4fff5b);
{goto L4fff60;}
}
B4fff60:L4fff60:{c.instructions+=2;NFSU2_TR(0x4fff60);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4fff62:{NFSU2_TR(0x4fff62);
if(r1(R+518)){{goto L4fff71;}}
}
B4fff64:L4fff64:{c.instructions+=4;NFSU2_TR(0x4fff64);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fff65:{NFSU2_TR(0x4fff65);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x44ull))));
}
B4fff68:{NFSU2_TR(0x4fff68);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fff6a:{NFSU2_TR(0x4fff6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fff60u);}goto L4fff60;}}
}
B4fff6c:L4fff6c:{c.instructions+=4;NFSU2_TR(0x4fff6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fff6d:{NFSU2_TR(0x4fff6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fff6e:{NFSU2_TR(0x4fff6e);
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
B4fff70:{NFSU2_TR(0x4fff70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fff71:L4fff71:{c.instructions+=5;NFSU2_TR(0x4fff71);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4fff74:{NFSU2_TR(0x4fff74);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fff76:{NFSU2_TR(0x4fff76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fff77:{NFSU2_TR(0x4fff77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fff78:{NFSU2_TR(0x4fff78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fff80:L4fff80:{c.instructions+=6;NFSU2_TR(0x4fff80);
__builtin_memmove((R+8),gp(0x838408),4);
}
B4fff86:{NFSU2_TR(0x4fff86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fff87:{NFSU2_TR(0x4fff87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fff89:{NFSU2_TR(0x4fff89);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fff8b:{NFSU2_TR(0x4fff8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fff8c:{NFSU2_TR(0x4fff8c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fffac;}}
}
B4fff8e:L4fff8e:{c.instructions+=4;NFSU2_TR(0x4fff8e);
__builtin_memmove((R+28),gp(0x83840c),4);
}
B4fff94:{NFSU2_TR(0x4fff94);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fff98:{NFSU2_TR(0x4fff98);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fff9b:{NFSU2_TR(0x4fff9b);
{goto L4fffa0;}
}
B4fffa0:L4fffa0:{c.instructions+=2;NFSU2_TR(0x4fffa0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4fffa2:{NFSU2_TR(0x4fffa2);
if(r1(R+518)){{goto L4fffb1;}}
}
B4fffa4:L4fffa4:{c.instructions+=4;NFSU2_TR(0x4fffa4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fffa5:{NFSU2_TR(0x4fffa5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B4fffa8:{NFSU2_TR(0x4fffa8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fffaa:{NFSU2_TR(0x4fffaa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fffa0u);}goto L4fffa0;}}
}
B4fffac:L4fffac:{c.instructions+=4;NFSU2_TR(0x4fffac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fffad:{NFSU2_TR(0x4fffad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fffae:{NFSU2_TR(0x4fffae);
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
B4fffb0:{NFSU2_TR(0x4fffb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fffb1:L4fffb1:{c.instructions+=5;NFSU2_TR(0x4fffb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4fffb4:{NFSU2_TR(0x4fffb4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fffb6:{NFSU2_TR(0x4fffb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fffb7:{NFSU2_TR(0x4fffb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fffb8:{NFSU2_TR(0x4fffb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fffc0:L4fffc0:{c.instructions+=8;NFSU2_TR(0x4fffc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fffc4:{NFSU2_TR(0x4fffc4);
__builtin_memmove((R+8),gp(0x838408),4);
}
B4fffca:{NFSU2_TR(0x4fffca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fffcb:{NFSU2_TR(0x4fffcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fffce:{NFSU2_TR(0x4fffce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fffd0:{NFSU2_TR(0x4fffd0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fffd2:{NFSU2_TR(0x4fffd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fffd3:{NFSU2_TR(0x4fffd3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fffec;}}
}
B4fffd5:L4fffd5:{c.instructions+=3;NFSU2_TR(0x4fffd5);
__builtin_memmove((R+28),gp(0x83840c),4);
}
B4fffdb:{NFSU2_TR(0x4fffdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fffde:{NFSU2_TR(0x4fffde);
__builtin_memmove((R+28),(R+28),4);
}
B4fffe0:L4fffe0:{c.instructions+=2;NFSU2_TR(0x4fffe0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4fffe2:{NFSU2_TR(0x4fffe2);
if(r1(R+518)){{goto L4ffff1;}}
}
B4fffe4:L4fffe4:{c.instructions+=4;NFSU2_TR(0x4fffe4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fffe5:{NFSU2_TR(0x4fffe5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B4fffe8:{NFSU2_TR(0x4fffe8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fffea:{NFSU2_TR(0x4fffea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fffe0u);}goto L4fffe0;}}
}
B4fffec:L4fffec:{c.instructions+=4;NFSU2_TR(0x4fffec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fffed:{NFSU2_TR(0x4fffed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fffee:{NFSU2_TR(0x4fffee);
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
B4ffff0:{NFSU2_TR(0x4ffff0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ffff1:L4ffff1:{c.instructions+=5;NFSU2_TR(0x4ffff1);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4ffff4:{NFSU2_TR(0x4ffff4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ffff6:{NFSU2_TR(0x4ffff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ffff7:{NFSU2_TR(0x4ffff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ffff8:{NFSU2_TR(0x4ffff8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x4ff,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
