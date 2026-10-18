#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x45c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x45c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_45c(u8* __restrict R,Cpu& c);
u32 page_45c(Cpu& c){return body_45c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_45c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x45c002:goto L45c002;
case 0x45c004:goto L45c004;
case 0x45c009:c.instructions+=2;goto B45c009;
case 0x45c00b:c.instructions+=1;goto B45c00b;
case 0x45c00d:goto L45c00d;
case 0x45c010:c.instructions+=1;goto B45c010;
case 0x45c012:goto L45c012;
case 0x45c017:c.instructions+=5;goto B45c017;
case 0x45c01d:c.instructions+=4;goto B45c01d;
case 0x45c023:c.instructions+=3;goto B45c023;
case 0x45c025:c.instructions+=2;goto B45c025;
case 0x45c027:c.instructions+=1;goto B45c027;
case 0x45c029:goto L45c029;
case 0x45c02a:c.instructions+=6;goto B45c02a;
case 0x45c02f:c.instructions+=5;goto B45c02f;
case 0x45c030:c.instructions+=4;goto B45c030;
case 0x45c036:c.instructions+=3;goto B45c036;
case 0x45c03c:c.instructions+=2;goto B45c03c;
case 0x45c03d:c.instructions+=1;goto B45c03d;
case 0x45c03e:goto L45c03e;
case 0x45c03f:c.instructions+=5;goto B45c03f;
case 0x45c045:c.instructions+=4;goto B45c045;
case 0x45c046:c.instructions+=3;goto B45c046;
case 0x45c04c:c.instructions+=2;goto B45c04c;
case 0x45c04d:c.instructions+=1;goto B45c04d;
case 0x45c050:goto L45c050;
case 0x45c055:c.instructions+=1;goto B45c055;
case 0x45c060:goto L45c060;
case 0x45c065:c.instructions+=1;goto B45c065;
case 0x45c070:goto L45c070;
case 0x45c075:c.instructions+=1;goto B45c075;
case 0x45c080:goto L45c080;
case 0x45c085:c.instructions+=1;goto B45c085;
case 0x45c090:goto L45c090;
case 0x45c093:c.instructions+=2;goto B45c093;
case 0x45c096:c.instructions+=1;goto B45c096;
case 0x45c098:goto L45c098;
case 0x45c09a:c.instructions+=1;goto B45c09a;
case 0x45c09c:goto L45c09c;
case 0x45c09d:goto L45c09d;
case 0x45c0a2:c.instructions+=1;goto B45c0a2;
case 0x45c0b0:goto L45c0b0;
case 0x45c0b5:c.instructions+=1;goto B45c0b5;
case 0x45c0c0:goto L45c0c0;
case 0x45c0c5:c.instructions+=1;goto B45c0c5;
case 0x45c0d0:goto L45c0d0;
case 0x45c0d2:c.instructions+=5;goto B45c0d2;
case 0x45c0d3:c.instructions+=4;goto B45c0d3;
case 0x45c0d9:c.instructions+=3;goto B45c0d9;
case 0x45c0dc:c.instructions+=2;goto B45c0dc;
case 0x45c0e1:c.instructions+=1;goto B45c0e1;
case 0x45c0e3:goto L45c0e3;
case 0x45c0e5:c.instructions+=4;goto B45c0e5;
case 0x45c0e8:c.instructions+=3;goto B45c0e8;
case 0x45c0e9:c.instructions+=2;goto B45c0e9;
case 0x45c0ed:c.instructions+=1;goto B45c0ed;
case 0x45c0ef:goto L45c0ef;
case 0x45c0f2:c.instructions+=51;goto B45c0f2;
case 0x45c0f5:c.instructions+=50;goto B45c0f5;
case 0x45c0f8:c.instructions+=49;goto B45c0f8;
case 0x45c0fb:c.instructions+=48;goto B45c0fb;
case 0x45c0fe:c.instructions+=47;goto B45c0fe;
case 0x45c104:c.instructions+=46;goto B45c104;
case 0x45c10a:c.instructions+=45;goto B45c10a;
case 0x45c110:c.instructions+=44;goto B45c110;
case 0x45c116:c.instructions+=43;goto B45c116;
case 0x45c11c:c.instructions+=42;goto B45c11c;
case 0x45c122:c.instructions+=41;goto B45c122;
case 0x45c128:c.instructions+=40;goto B45c128;
case 0x45c12a:c.instructions+=39;goto B45c12a;
case 0x45c130:c.instructions+=38;goto B45c130;
case 0x45c136:c.instructions+=37;goto B45c136;
case 0x45c13c:c.instructions+=36;goto B45c13c;
case 0x45c142:c.instructions+=35;goto B45c142;
case 0x45c148:c.instructions+=34;goto B45c148;
case 0x45c14e:c.instructions+=33;goto B45c14e;
case 0x45c154:c.instructions+=32;goto B45c154;
case 0x45c15a:c.instructions+=31;goto B45c15a;
case 0x45c160:c.instructions+=30;goto B45c160;
case 0x45c166:c.instructions+=29;goto B45c166;
case 0x45c16c:c.instructions+=28;goto B45c16c;
case 0x45c172:c.instructions+=27;goto B45c172;
case 0x45c178:c.instructions+=26;goto B45c178;
case 0x45c17e:c.instructions+=25;goto B45c17e;
case 0x45c184:c.instructions+=24;goto B45c184;
case 0x45c18a:c.instructions+=23;goto B45c18a;
case 0x45c190:c.instructions+=22;goto B45c190;
case 0x45c196:c.instructions+=21;goto B45c196;
case 0x45c19c:c.instructions+=20;goto B45c19c;
case 0x45c1a2:c.instructions+=19;goto B45c1a2;
case 0x45c1a8:c.instructions+=18;goto B45c1a8;
case 0x45c1ae:c.instructions+=17;goto B45c1ae;
case 0x45c1b4:c.instructions+=16;goto B45c1b4;
case 0x45c1ba:c.instructions+=15;goto B45c1ba;
case 0x45c1c0:c.instructions+=14;goto B45c1c0;
case 0x45c1c6:c.instructions+=13;goto B45c1c6;
case 0x45c1cc:c.instructions+=12;goto B45c1cc;
case 0x45c1d2:c.instructions+=11;goto B45c1d2;
case 0x45c1d8:c.instructions+=10;goto B45c1d8;
case 0x45c1de:c.instructions+=9;goto B45c1de;
case 0x45c1e4:c.instructions+=8;goto B45c1e4;
case 0x45c1ea:c.instructions+=7;goto B45c1ea;
case 0x45c1f0:c.instructions+=6;goto B45c1f0;
case 0x45c1f6:c.instructions+=5;goto B45c1f6;
case 0x45c1fc:c.instructions+=4;goto B45c1fc;
case 0x45c202:c.instructions+=3;goto B45c202;
case 0x45c205:c.instructions+=2;goto B45c205;
case 0x45c206:c.instructions+=1;goto B45c206;
case 0x45c210:goto L45c210;
case 0x45c215:c.instructions+=6;goto B45c215;
case 0x45c21b:c.instructions+=5;goto B45c21b;
case 0x45c21e:c.instructions+=4;goto B45c21e;
case 0x45c220:c.instructions+=3;goto B45c220;
case 0x45c221:c.instructions+=2;goto B45c221;
case 0x45c223:c.instructions+=1;goto B45c223;
case 0x45c225:goto L45c225;
case 0x45c227:c.instructions+=3;goto B45c227;
case 0x45c22a:c.instructions+=2;goto B45c22a;
case 0x45c22c:c.instructions+=1;goto B45c22c;
case 0x45c232:goto L45c232;
case 0x45c237:goto L45c237;
case 0x45c23d:c.instructions+=5;goto B45c23d;
case 0x45c240:c.instructions+=4;goto B45c240;
case 0x45c246:c.instructions+=3;goto B45c246;
case 0x45c249:c.instructions+=2;goto B45c249;
case 0x45c24b:c.instructions+=1;goto B45c24b;
case 0x45c24d:goto L45c24d;
case 0x45c24f:c.instructions+=3;goto B45c24f;
case 0x45c252:c.instructions+=2;goto B45c252;
case 0x45c254:c.instructions+=1;goto B45c254;
case 0x45c25a:goto L45c25a;
case 0x45c25f:goto L45c25f;
case 0x45c262:c.instructions+=7;goto B45c262;
case 0x45c268:c.instructions+=6;goto B45c268;
case 0x45c26b:c.instructions+=5;goto B45c26b;
case 0x45c271:c.instructions+=4;goto B45c271;
case 0x45c276:c.instructions+=3;goto B45c276;
case 0x45c278:c.instructions+=2;goto B45c278;
case 0x45c27a:c.instructions+=1;goto B45c27a;
case 0x45c27c:goto L45c27c;
case 0x45c27e:c.instructions+=1;goto B45c27e;
case 0x45c280:goto L45c280;
case 0x45c285:c.instructions+=1;goto B45c285;
case 0x45c287:goto L45c287;
case 0x45c28c:goto L45c28c;
case 0x45c292:c.instructions+=5;goto B45c292;
case 0x45c295:c.instructions+=4;goto B45c295;
case 0x45c29a:c.instructions+=3;goto B45c29a;
case 0x45c29d:c.instructions+=2;goto B45c29d;
case 0x45c29f:c.instructions+=1;goto B45c29f;
case 0x45c2a1:goto L45c2a1;
case 0x45c2a3:c.instructions+=3;goto B45c2a3;
case 0x45c2a6:c.instructions+=2;goto B45c2a6;
case 0x45c2a8:c.instructions+=1;goto B45c2a8;
case 0x45c2ae:goto L45c2ae;
case 0x45c2b3:goto L45c2b3;
case 0x45c2b9:c.instructions+=5;goto B45c2b9;
case 0x45c2bc:c.instructions+=4;goto B45c2bc;
case 0x45c2c2:c.instructions+=3;goto B45c2c2;
case 0x45c2c5:c.instructions+=2;goto B45c2c5;
case 0x45c2c7:c.instructions+=1;goto B45c2c7;
case 0x45c2c9:goto L45c2c9;
case 0x45c2cb:c.instructions+=3;goto B45c2cb;
case 0x45c2ce:c.instructions+=2;goto B45c2ce;
case 0x45c2d0:c.instructions+=1;goto B45c2d0;
case 0x45c2d6:goto L45c2d6;
case 0x45c2db:goto L45c2db;
case 0x45c2e1:c.instructions+=5;goto B45c2e1;
case 0x45c2e4:c.instructions+=4;goto B45c2e4;
case 0x45c2ea:c.instructions+=3;goto B45c2ea;
case 0x45c2ed:c.instructions+=2;goto B45c2ed;
case 0x45c2ef:c.instructions+=1;goto B45c2ef;
case 0x45c2f1:goto L45c2f1;
case 0x45c2f3:c.instructions+=3;goto B45c2f3;
case 0x45c2f6:c.instructions+=2;goto B45c2f6;
case 0x45c2f8:c.instructions+=1;goto B45c2f8;
case 0x45c2fe:goto L45c2fe;
case 0x45c303:goto L45c303;
case 0x45c306:c.instructions+=2;goto B45c306;
case 0x45c307:c.instructions+=1;goto B45c307;
case 0x45c310:goto L45c310;
case 0x45c314:c.instructions+=5;goto B45c314;
case 0x45c316:c.instructions+=4;goto B45c316;
case 0x45c318:c.instructions+=3;goto B45c318;
case 0x45c31b:c.instructions+=2;goto B45c31b;
case 0x45c31e:c.instructions+=1;goto B45c31e;
case 0x45c330:goto L45c330;
case 0x45c334:c.instructions+=5;goto B45c334;
case 0x45c337:c.instructions+=4;goto B45c337;
case 0x45c33a:c.instructions+=3;goto B45c33a;
case 0x45c33b:c.instructions+=2;goto B45c33b;
case 0x45c33d:c.instructions+=1;goto B45c33d;
case 0x45c33f:goto L45c33f;
case 0x45c342:c.instructions+=1;goto B45c342;
case 0x45c344:goto L45c344;
case 0x45c347:c.instructions+=1;goto B45c347;
case 0x45c349:goto L45c349;
case 0x45c350:c.instructions+=1;goto B45c350;
case 0x45c352:goto L45c352;
case 0x45c355:goto L45c355;
case 0x45c358:c.instructions+=5;goto B45c358;
case 0x45c35b:c.instructions+=4;goto B45c35b;
case 0x45c361:c.instructions+=3;goto B45c361;
case 0x45c364:c.instructions+=2;goto B45c364;
case 0x45c368:c.instructions+=1;goto B45c368;
case 0x45c36a:goto L45c36a;
case 0x45c370:c.instructions+=8;goto B45c370;
case 0x45c373:c.instructions+=7;goto B45c373;
case 0x45c376:c.instructions+=6;goto B45c376;
case 0x45c37d:c.instructions+=5;goto B45c37d;
case 0x45c380:c.instructions+=4;goto B45c380;
case 0x45c383:c.instructions+=3;goto B45c383;
case 0x45c388:c.instructions+=2;goto B45c388;
case 0x45c38b:c.instructions+=1;goto B45c38b;
case 0x45c38d:goto L45c38d;
case 0x45c38f:c.instructions+=1;goto B45c38f;
case 0x45c392:goto L45c392;
case 0x45c395:c.instructions+=1;goto B45c395;
case 0x45c397:goto L45c397;
case 0x45c39a:c.instructions+=1;goto B45c39a;
case 0x45c39c:goto L45c39c;
case 0x45c3a3:goto L45c3a3;
case 0x45c3aa:goto L45c3aa;
case 0x45c3ad:c.instructions+=2;goto B45c3ad;
case 0x45c3b2:c.instructions+=1;goto B45c3b2;
case 0x45c3b4:goto L45c3b4;
case 0x45c3b5:c.instructions+=2;goto B45c3b5;
case 0x45c3b8:c.instructions+=1;goto B45c3b8;
case 0x45c3b9:goto L45c3b9;
case 0x45c3bf:c.instructions+=2;goto B45c3bf;
case 0x45c3c0:c.instructions+=1;goto B45c3c0;
case 0x45c3d0:goto L45c3d0;
case 0x45c3d2:c.instructions+=17;goto B45c3d2;
case 0x45c3d7:c.instructions+=16;goto B45c3d7;
case 0x45c3da:c.instructions+=15;goto B45c3da;
case 0x45c3e0:c.instructions+=14;goto B45c3e0;
case 0x45c3e6:c.instructions+=13;goto B45c3e6;
case 0x45c3ec:c.instructions+=12;goto B45c3ec;
case 0x45c3f2:c.instructions+=11;goto B45c3f2;
case 0x45c3f8:c.instructions+=10;goto B45c3f8;
case 0x45c3fe:c.instructions+=9;goto B45c3fe;
case 0x45c401:c.instructions+=8;goto B45c401;
case 0x45c404:c.instructions+=7;goto B45c404;
case 0x45c40a:c.instructions+=6;goto B45c40a;
case 0x45c410:c.instructions+=5;goto B45c410;
case 0x45c416:c.instructions+=4;goto B45c416;
case 0x45c41c:c.instructions+=3;goto B45c41c;
case 0x45c422:c.instructions+=2;goto B45c422;
case 0x45c428:c.instructions+=1;goto B45c428;
case 0x45c430:goto L45c430;
case 0x45c432:c.instructions+=10;goto B45c432;
case 0x45c438:c.instructions+=9;goto B45c438;
case 0x45c43e:c.instructions+=8;goto B45c43e;
case 0x45c444:c.instructions+=7;goto B45c444;
case 0x45c44a:c.instructions+=6;goto B45c44a;
case 0x45c450:c.instructions+=5;goto B45c450;
case 0x45c456:c.instructions+=4;goto B45c456;
case 0x45c45c:c.instructions+=3;goto B45c45c;
case 0x45c45f:c.instructions+=2;goto B45c45f;
case 0x45c462:c.instructions+=1;goto B45c462;
case 0x45c470:goto L45c470;
case 0x45c475:c.instructions+=1;goto B45c475;
case 0x45c480:goto L45c480;
case 0x45c485:c.instructions+=1;goto B45c485;
case 0x45c490:goto L45c490;
case 0x45c491:c.instructions+=2;goto B45c491;
case 0x45c493:c.instructions+=1;goto B45c493;
case 0x45c498:goto L45c498;
case 0x45c49e:c.instructions+=3;goto B45c49e;
case 0x45c4a0:c.instructions+=2;goto B45c4a0;
case 0x45c4a1:c.instructions+=1;goto B45c4a1;
case 0x45c4b0:goto L45c4b0;
case 0x45c4b5:c.instructions+=1;goto B45c4b5;
case 0x45c4c0:goto L45c4c0;
case 0x45c4c5:c.instructions+=1;goto B45c4c5;
case 0x45c4d0:goto L45c4d0;
case 0x45c4d2:c.instructions+=12;goto B45c4d2;
case 0x45c4d7:c.instructions+=11;goto B45c4d7;
case 0x45c4dd:c.instructions+=10;goto B45c4dd;
case 0x45c4de:c.instructions+=9;goto B45c4de;
case 0x45c4e5:c.instructions+=8;goto B45c4e5;
case 0x45c4e6:c.instructions+=7;goto B45c4e6;
case 0x45c4e7:c.instructions+=6;goto B45c4e7;
case 0x45c4e9:c.instructions+=5;goto B45c4e9;
case 0x45c4ed:c.instructions+=4;goto B45c4ed;
case 0x45c4f3:c.instructions+=3;goto B45c4f3;
case 0x45c4f9:c.instructions+=2;goto B45c4f9;
case 0x45c501:c.instructions+=1;goto B45c501;
case 0x45c506:goto L45c506;
case 0x45c50c:c.instructions+=2;goto B45c50c;
case 0x45c511:c.instructions+=1;goto B45c511;
case 0x45c516:goto L45c516;
case 0x45c51a:c.instructions+=5;goto B45c51a;
case 0x45c520:c.instructions+=4;goto B45c520;
case 0x45c521:c.instructions+=3;goto B45c521;
case 0x45c528:c.instructions+=2;goto B45c528;
case 0x45c52b:c.instructions+=1;goto B45c52b;
case 0x45c530:goto L45c530;
case 0x45c536:c.instructions+=1;goto B45c536;
case 0x45c540:goto L45c540;
case 0x45c546:c.instructions+=1;goto B45c546;
case 0x45c550:goto L45c550;
case 0x45c551:c.instructions+=5;goto B45c551;
case 0x45c553:c.instructions+=4;goto B45c553;
case 0x45c557:c.instructions+=3;goto B45c557;
case 0x45c55a:c.instructions+=2;goto B45c55a;
case 0x45c55d:c.instructions+=1;goto B45c55d;
case 0x45c55f:goto L45c55f;
case 0x45c562:c.instructions+=1;goto B45c562;
case 0x45c564:goto L45c564;
case 0x45c567:c.instructions+=1;goto B45c567;
case 0x45c569:goto L45c569;
case 0x45c570:c.instructions+=4;goto B45c570;
case 0x45c573:c.instructions+=3;goto B45c573;
case 0x45c576:c.instructions+=2;goto B45c576;
case 0x45c578:c.instructions+=1;goto B45c578;
case 0x45c57b:goto L45c57b;
case 0x45c57e:c.instructions+=2;goto B45c57e;
case 0x45c57f:c.instructions+=1;goto B45c57f;
case 0x45c582:goto L45c582;
case 0x45c585:c.instructions+=3;goto B45c585;
case 0x45c588:c.instructions+=2;goto B45c588;
case 0x45c58a:c.instructions+=1;goto B45c58a;
case 0x45c58d:goto L45c58d;
case 0x45c590:c.instructions+=2;goto B45c590;
case 0x45c591:c.instructions+=1;goto B45c591;
case 0x45c5a0:goto L45c5a0;
case 0x45c5a1:c.instructions+=8;goto B45c5a1;
case 0x45c5a2:c.instructions+=7;goto B45c5a2;
case 0x45c5a4:c.instructions+=6;goto B45c5a4;
case 0x45c5a6:c.instructions+=5;goto B45c5a6;
case 0x45c5a7:c.instructions+=4;goto B45c5a7;
case 0x45c5ad:c.instructions+=3;goto B45c5ad;
case 0x45c5b1:c.instructions+=2;goto B45c5b1;
case 0x45c5bb:c.instructions+=1;goto B45c5bb;
case 0x45c5c0:goto L45c5c0;
case 0x45c5c1:c.instructions+=2;goto B45c5c1;
case 0x45c5c7:c.instructions+=1;goto B45c5c7;
case 0x45c5cc:goto L45c5cc;
case 0x45c5cf:c.instructions+=13;goto B45c5cf;
case 0x45c5d5:c.instructions+=12;goto B45c5d5;
case 0x45c5db:c.instructions+=11;goto B45c5db;
case 0x45c5e1:c.instructions+=10;goto B45c5e1;
case 0x45c5e7:c.instructions+=9;goto B45c5e7;
case 0x45c5ed:c.instructions+=8;goto B45c5ed;
case 0x45c5f3:c.instructions+=7;goto B45c5f3;
case 0x45c5fa:c.instructions+=6;goto B45c5fa;
case 0x45c601:c.instructions+=5;goto B45c601;
case 0x45c608:c.instructions+=4;goto B45c608;
case 0x45c612:c.instructions+=3;goto B45c612;
case 0x45c614:c.instructions+=2;goto B45c614;
case 0x45c615:c.instructions+=1;goto B45c615;
case 0x45c618:goto L45c618;
case 0x45c61b:c.instructions+=6;goto B45c61b;
case 0x45c61e:c.instructions+=5;goto B45c61e;
case 0x45c621:c.instructions+=4;goto B45c621;
case 0x45c623:c.instructions+=3;goto B45c623;
case 0x45c629:c.instructions+=2;goto B45c629;
case 0x45c62a:c.instructions+=1;goto B45c62a;
case 0x45c62d:goto L45c62d;
case 0x45c630:c.instructions+=2;goto B45c630;
case 0x45c632:c.instructions+=1;goto B45c632;
case 0x45c635:goto L45c635;
case 0x45c636:c.instructions+=1;goto B45c636;
case 0x45c638:goto L45c638;
case 0x45c639:c.instructions+=1;goto B45c639;
case 0x45c63b:goto L45c63b;
case 0x45c63c:c.instructions+=1;goto B45c63c;
case 0x45c63e:goto L45c63e;
case 0x45c641:c.instructions+=3;goto B45c641;
case 0x45c642:c.instructions+=2;goto B45c642;
case 0x45c643:c.instructions+=1;goto B45c643;
case 0x45c644:goto L45c644;
case 0x45c64b:c.instructions+=3;goto B45c64b;
case 0x45c64c:c.instructions+=2;goto B45c64c;
case 0x45c64d:c.instructions+=1;goto B45c64d;
case 0x45c64e:goto L45c64e;
case 0x45c655:c.instructions+=3;goto B45c655;
case 0x45c656:c.instructions+=2;goto B45c656;
case 0x45c657:c.instructions+=1;goto B45c657;
case 0x45c658:goto L45c658;
case 0x45c65f:c.instructions+=3;goto B45c65f;
case 0x45c660:c.instructions+=2;goto B45c660;
case 0x45c661:c.instructions+=1;goto B45c661;
case 0x45c670:goto L45c670;
case 0x45c674:c.instructions+=2;goto B45c674;
case 0x45c677:c.instructions+=1;goto B45c677;
case 0x45c679:goto L45c679;
case 0x45c680:goto L45c680;
case 0x45c685:c.instructions+=1;goto B45c685;
case 0x45c688:goto L45c688;
case 0x45c68d:c.instructions+=1;goto B45c68d;
case 0x45c690:goto L45c690;
case 0x45c692:c.instructions+=1;goto B45c692;
case 0x45c695:goto L45c695;
case 0x45c69a:c.instructions+=1;goto B45c69a;
case 0x45c69d:goto L45c69d;
case 0x45c6a0:c.instructions+=1;goto B45c6a0;
case 0x45c6c0:goto L45c6c0;
case 0x45c6c1:c.instructions+=6;goto B45c6c1;
case 0x45c6c3:c.instructions+=5;goto B45c6c3;
case 0x45c6c6:c.instructions+=4;goto B45c6c6;
case 0x45c6d0:c.instructions+=3;goto B45c6d0;
case 0x45c6d3:c.instructions+=2;goto B45c6d3;
case 0x45c6d6:c.instructions+=1;goto B45c6d6;
case 0x45c6d8:goto L45c6d8;
case 0x45c6da:c.instructions+=1;goto B45c6da;
case 0x45c6dc:goto L45c6dc;
case 0x45c6e2:c.instructions+=2;goto B45c6e2;
case 0x45c6e8:c.instructions+=1;goto B45c6e8;
case 0x45c6ed:goto L45c6ed;
case 0x45c6f2:c.instructions+=2;goto B45c6f2;
case 0x45c6f4:c.instructions+=1;goto B45c6f4;
case 0x45c6fa:goto L45c6fa;
case 0x45c700:c.instructions+=1;goto B45c700;
case 0x45c705:goto L45c705;
case 0x45c70b:c.instructions+=2;goto B45c70b;
case 0x45c70c:c.instructions+=1;goto B45c70c;
case 0x45c710:goto L45c710;
case 0x45c711:c.instructions+=5;goto B45c711;
case 0x45c713:c.instructions+=4;goto B45c713;
case 0x45c716:c.instructions+=3;goto B45c716;
case 0x45c718:c.instructions+=2;goto B45c718;
case 0x45c719:c.instructions+=1;goto B45c719;
case 0x45c71b:goto L45c71b;
case 0x45c71e:c.instructions+=2;goto B45c71e;
case 0x45c721:c.instructions+=1;goto B45c721;
case 0x45c723:goto L45c723;
case 0x45c725:c.instructions+=1;goto B45c725;
case 0x45c727:goto L45c727;
case 0x45c72d:c.instructions+=5;goto B45c72d;
case 0x45c72e:c.instructions+=4;goto B45c72e;
case 0x45c734:c.instructions+=3;goto B45c734;
case 0x45c737:c.instructions+=2;goto B45c737;
case 0x45c739:c.instructions+=1;goto B45c739;
case 0x45c73e:goto L45c73e;
case 0x45c740:goto L45c740;
case 0x45c743:c.instructions+=6;goto B45c743;
case 0x45c749:c.instructions+=5;goto B45c749;
case 0x45c74f:c.instructions+=4;goto B45c74f;
case 0x45c750:c.instructions+=3;goto B45c750;
case 0x45c752:c.instructions+=2;goto B45c752;
case 0x45c754:c.instructions+=1;goto B45c754;
case 0x45c756:goto L45c756;
case 0x45c75c:c.instructions+=2;goto B45c75c;
case 0x45c75f:c.instructions+=1;goto B45c75f;
case 0x45c764:goto L45c764;
case 0x45c766:goto L45c766;
case 0x45c769:c.instructions+=3;goto B45c769;
case 0x45c76c:c.instructions+=2;goto B45c76c;
case 0x45c76f:c.instructions+=1;goto B45c76f;
case 0x45c774:goto L45c774;
case 0x45c776:c.instructions+=2;goto B45c776;
case 0x45c778:c.instructions+=1;goto B45c778;
case 0x45c77b:goto L45c77b;
case 0x45c781:c.instructions+=5;goto B45c781;
case 0x45c787:c.instructions+=4;goto B45c787;
case 0x45c788:c.instructions+=3;goto B45c788;
case 0x45c78e:c.instructions+=2;goto B45c78e;
case 0x45c78f:c.instructions+=1;goto B45c78f;
case 0x45c7a0:goto L45c7a0;
case 0x45c7a3:c.instructions+=16;goto B45c7a3;
case 0x45c7a4:c.instructions+=15;goto B45c7a4;
case 0x45c7a5:c.instructions+=14;goto B45c7a5;
case 0x45c7a6:c.instructions+=13;goto B45c7a6;
case 0x45c7a8:c.instructions+=12;goto B45c7a8;
case 0x45c7ab:c.instructions+=11;goto B45c7ab;
case 0x45c7ac:c.instructions+=10;goto B45c7ac;
case 0x45c7ae:c.instructions+=9;goto B45c7ae;
case 0x45c7b0:c.instructions+=8;goto B45c7b0;
case 0x45c7b2:c.instructions+=7;goto B45c7b2;
case 0x45c7b4:c.instructions+=6;goto B45c7b4;
case 0x45c7b6:c.instructions+=5;goto B45c7b6;
case 0x45c7b8:c.instructions+=4;goto B45c7b8;
case 0x45c7bc:c.instructions+=3;goto B45c7bc;
case 0x45c7c0:c.instructions+=2;goto B45c7c0;
case 0x45c7c4:c.instructions+=1;goto B45c7c4;
case 0x45c7c6:goto L45c7c6;
case 0x45c7c9:c.instructions+=2;goto B45c7c9;
case 0x45c7cc:c.instructions+=1;goto B45c7cc;
case 0x45c7ce:goto L45c7ce;
case 0x45c7d0:c.instructions+=1;goto B45c7d0;
case 0x45c7d2:goto L45c7d2;
case 0x45c7d8:c.instructions+=10;goto B45c7d8;
case 0x45c7de:c.instructions+=9;goto B45c7de;
case 0x45c7e4:c.instructions+=8;goto B45c7e4;
case 0x45c7ea:c.instructions+=7;goto B45c7ea;
case 0x45c7ee:c.instructions+=6;goto B45c7ee;
case 0x45c7f4:c.instructions+=5;goto B45c7f4;
case 0x45c7fa:c.instructions+=4;goto B45c7fa;
case 0x45c7fd:c.instructions+=3;goto B45c7fd;
case 0x45c801:c.instructions+=2;goto B45c801;
case 0x45c805:c.instructions+=1;goto B45c805;
case 0x45c807:goto L45c807;
case 0x45c80c:c.instructions+=2;goto B45c80c;
case 0x45c811:c.instructions+=1;goto B45c811;
case 0x45c813:goto L45c813;
case 0x45c815:goto L45c815;
case 0x45c81a:c.instructions+=9;goto B45c81a;
case 0x45c820:c.instructions+=8;goto B45c820;
case 0x45c827:c.instructions+=7;goto B45c827;
case 0x45c82d:c.instructions+=6;goto B45c82d;
case 0x45c834:c.instructions+=5;goto B45c834;
case 0x45c83a:c.instructions+=4;goto B45c83a;
case 0x45c841:c.instructions+=3;goto B45c841;
case 0x45c846:c.instructions+=2;goto B45c846;
case 0x45c84b:c.instructions+=1;goto B45c84b;
case 0x45c84d:goto L45c84d;
case 0x45c852:c.instructions+=3;goto B45c852;
case 0x45c854:c.instructions+=2;goto B45c854;
case 0x45c858:c.instructions+=1;goto B45c858;
case 0x45c85a:goto L45c85a;
case 0x45c85e:goto L45c85e;
case 0x45c861:c.instructions+=1;goto B45c861;
case 0x45c867:goto L45c867;
case 0x45c869:c.instructions+=3;goto B45c869;
case 0x45c86b:c.instructions+=2;goto B45c86b;
case 0x45c86f:c.instructions+=1;goto B45c86f;
case 0x45c871:goto L45c871;
case 0x45c875:goto L45c875;
case 0x45c878:c.instructions+=1;goto B45c878;
case 0x45c87e:goto L45c87e;
case 0x45c880:c.instructions+=3;goto B45c880;
case 0x45c882:c.instructions+=2;goto B45c882;
case 0x45c886:c.instructions+=1;goto B45c886;
case 0x45c888:goto L45c888;
case 0x45c88c:goto L45c88c;
case 0x45c88e:c.instructions+=1;goto B45c88e;
case 0x45c890:goto L45c890;
case 0x45c894:c.instructions+=4;goto B45c894;
case 0x45c89a:c.instructions+=3;goto B45c89a;
case 0x45c89e:c.instructions+=2;goto B45c89e;
case 0x45c8a4:c.instructions+=1;goto B45c8a4;
case 0x45c8a9:goto L45c8a9;
case 0x45c8b0:c.instructions+=8;goto B45c8b0;
case 0x45c8b3:c.instructions+=7;goto B45c8b3;
case 0x45c8b6:c.instructions+=6;goto B45c8b6;
case 0x45c8b7:c.instructions+=5;goto B45c8b7;
case 0x45c8bc:c.instructions+=4;goto B45c8bc;
case 0x45c8be:c.instructions+=3;goto B45c8be;
case 0x45c8bf:c.instructions+=2;goto B45c8bf;
case 0x45c8c6:c.instructions+=1;goto B45c8c6;
case 0x45c8cb:goto L45c8cb;
case 0x45c8cf:c.instructions+=2;goto B45c8cf;
case 0x45c8d2:c.instructions+=1;goto B45c8d2;
case 0x45c8d8:goto L45c8d8;
case 0x45c8da:c.instructions+=1;goto B45c8da;
case 0x45c8dc:goto L45c8dc;
case 0x45c8e0:c.instructions+=4;goto B45c8e0;
case 0x45c8e6:c.instructions+=3;goto B45c8e6;
case 0x45c8ea:c.instructions+=2;goto B45c8ea;
case 0x45c8f0:c.instructions+=1;goto B45c8f0;
case 0x45c8f5:goto L45c8f5;
case 0x45c8fc:c.instructions+=8;goto B45c8fc;
case 0x45c8ff:c.instructions+=7;goto B45c8ff;
case 0x45c902:c.instructions+=6;goto B45c902;
case 0x45c903:c.instructions+=5;goto B45c903;
case 0x45c908:c.instructions+=4;goto B45c908;
case 0x45c90a:c.instructions+=3;goto B45c90a;
case 0x45c90b:c.instructions+=2;goto B45c90b;
case 0x45c912:c.instructions+=1;goto B45c912;
case 0x45c917:goto L45c917;
case 0x45c91b:c.instructions+=2;goto B45c91b;
case 0x45c91e:c.instructions+=1;goto B45c91e;
case 0x45c924:goto L45c924;
case 0x45c928:c.instructions+=2;goto B45c928;
case 0x45c92a:c.instructions+=1;goto B45c92a;
case 0x45c92c:goto L45c92c;
case 0x45c930:c.instructions+=4;goto B45c930;
case 0x45c936:c.instructions+=3;goto B45c936;
case 0x45c93a:c.instructions+=2;goto B45c93a;
case 0x45c940:c.instructions+=1;goto B45c940;
case 0x45c945:goto L45c945;
case 0x45c94c:c.instructions+=8;goto B45c94c;
case 0x45c94f:c.instructions+=7;goto B45c94f;
case 0x45c952:c.instructions+=6;goto B45c952;
case 0x45c953:c.instructions+=5;goto B45c953;
case 0x45c958:c.instructions+=4;goto B45c958;
case 0x45c95a:c.instructions+=3;goto B45c95a;
case 0x45c95b:c.instructions+=2;goto B45c95b;
case 0x45c962:c.instructions+=1;goto B45c962;
case 0x45c967:goto L45c967;
case 0x45c96b:c.instructions+=2;goto B45c96b;
case 0x45c96e:c.instructions+=1;goto B45c96e;
case 0x45c974:goto L45c974;
case 0x45c975:c.instructions+=5;goto B45c975;
case 0x45c976:c.instructions+=4;goto B45c976;
case 0x45c977:c.instructions+=3;goto B45c977;
case 0x45c978:c.instructions+=2;goto B45c978;
case 0x45c97b:c.instructions+=1;goto B45c97b;
case 0x45c97e:goto L45c97e;
case 0x45c983:c.instructions+=1;goto B45c983;
case 0x45c988:goto L45c988;
case 0x45c98d:c.instructions+=1;goto B45c98d;
case 0x45c9a0:goto L45c9a0;
case 0x45c9a5:c.instructions+=1;goto B45c9a5;
case 0x45c9b0:goto L45c9b0;
case 0x45c9b5:c.instructions+=1;goto B45c9b5;
case 0x45c9c0:goto L45c9c0;
case 0x45c9c2:c.instructions+=5;goto B45c9c2;
case 0x45c9c3:c.instructions+=4;goto B45c9c3;
case 0x45c9c9:c.instructions+=3;goto B45c9c9;
case 0x45c9cc:c.instructions+=2;goto B45c9cc;
case 0x45c9d1:c.instructions+=1;goto B45c9d1;
case 0x45c9d3:goto L45c9d3;
case 0x45c9d5:c.instructions+=4;goto B45c9d5;
case 0x45c9d8:c.instructions+=3;goto B45c9d8;
case 0x45c9d9:c.instructions+=2;goto B45c9d9;
case 0x45c9dd:c.instructions+=1;goto B45c9dd;
case 0x45c9df:goto L45c9df;
case 0x45c9e2:c.instructions+=32;goto B45c9e2;
case 0x45c9e5:c.instructions+=31;goto B45c9e5;
case 0x45c9e8:c.instructions+=30;goto B45c9e8;
case 0x45c9eb:c.instructions+=29;goto B45c9eb;
case 0x45c9ee:c.instructions+=28;goto B45c9ee;
case 0x45c9f4:c.instructions+=27;goto B45c9f4;
case 0x45c9fa:c.instructions+=26;goto B45c9fa;
case 0x45c9fd:c.instructions+=25;goto B45c9fd;
case 0x45ca00:c.instructions+=24;goto B45ca00;
case 0x45ca06:c.instructions+=23;goto B45ca06;
case 0x45ca09:c.instructions+=22;goto B45ca09;
case 0x45ca0f:c.instructions+=21;goto B45ca0f;
case 0x45ca11:c.instructions+=20;goto B45ca11;
case 0x45ca17:c.instructions+=19;goto B45ca17;
case 0x45ca1d:c.instructions+=18;goto B45ca1d;
case 0x45ca23:c.instructions+=17;goto B45ca23;
case 0x45ca29:c.instructions+=16;goto B45ca29;
case 0x45ca2f:c.instructions+=15;goto B45ca2f;
case 0x45ca35:c.instructions+=14;goto B45ca35;
case 0x45ca3b:c.instructions+=13;goto B45ca3b;
case 0x45ca41:c.instructions+=12;goto B45ca41;
case 0x45ca47:c.instructions+=11;goto B45ca47;
case 0x45ca4d:c.instructions+=10;goto B45ca4d;
case 0x45ca53:c.instructions+=9;goto B45ca53;
case 0x45ca59:c.instructions+=8;goto B45ca59;
case 0x45ca5f:c.instructions+=7;goto B45ca5f;
case 0x45ca65:c.instructions+=6;goto B45ca65;
case 0x45ca6b:c.instructions+=5;goto B45ca6b;
case 0x45ca6e:c.instructions+=4;goto B45ca6e;
case 0x45ca71:c.instructions+=3;goto B45ca71;
case 0x45ca77:c.instructions+=2;goto B45ca77;
case 0x45ca78:c.instructions+=1;goto B45ca78;
case 0x45ca80:goto L45ca80;
case 0x45ca81:c.instructions+=5;goto B45ca81;
case 0x45ca83:c.instructions+=4;goto B45ca83;
case 0x45ca87:c.instructions+=3;goto B45ca87;
case 0x45ca8a:c.instructions+=2;goto B45ca8a;
case 0x45ca8d:c.instructions+=1;goto B45ca8d;
case 0x45ca8f:goto L45ca8f;
case 0x45ca92:c.instructions+=1;goto B45ca92;
case 0x45ca94:goto L45ca94;
case 0x45ca97:c.instructions+=1;goto B45ca97;
case 0x45ca99:goto L45ca99;
case 0x45caa0:c.instructions+=1;goto B45caa0;
case 0x45caa2:goto L45caa2;
case 0x45caa5:goto L45caa5;
case 0x45caa8:c.instructions+=3;goto B45caa8;
case 0x45caab:c.instructions+=2;goto B45caab;
case 0x45caad:c.instructions+=1;goto B45caad;
case 0x45cab0:goto L45cab0;
case 0x45cab3:c.instructions+=3;goto B45cab3;
case 0x45cab6:c.instructions+=2;goto B45cab6;
case 0x45caba:c.instructions+=1;goto B45caba;
case 0x45cabc:goto L45cabc;
case 0x45cabf:c.instructions+=7;goto B45cabf;
case 0x45cac5:c.instructions+=6;goto B45cac5;
case 0x45cac8:c.instructions+=5;goto B45cac8;
case 0x45cacb:c.instructions+=4;goto B45cacb;
case 0x45cad2:c.instructions+=3;goto B45cad2;
case 0x45cad8:c.instructions+=2;goto B45cad8;
case 0x45cad9:c.instructions+=1;goto B45cad9;
case 0x45cadc:goto L45cadc;
case 0x45cade:c.instructions+=1;goto B45cade;
case 0x45cae3:goto L45cae3;
case 0x45cae6:c.instructions+=2;goto B45cae6;
case 0x45cae8:c.instructions+=1;goto B45cae8;
case 0x45caea:goto L45caea;
case 0x45caf4:c.instructions+=2;goto B45caf4;
case 0x45caf5:c.instructions+=1;goto B45caf5;
case 0x45caf8:goto L45caf8;
case 0x45cb02:c.instructions+=2;goto B45cb02;
case 0x45cb03:c.instructions+=1;goto B45cb03;
case 0x45cb10:goto L45cb10;
case 0x45cb12:c.instructions+=7;goto B45cb12;
case 0x45cb16:c.instructions+=6;goto B45cb16;
case 0x45cb1c:c.instructions+=5;goto B45cb1c;
case 0x45cb22:c.instructions+=4;goto B45cb22;
case 0x45cb28:c.instructions+=3;goto B45cb28;
case 0x45cb2e:c.instructions+=2;goto B45cb2e;
case 0x45cb34:c.instructions+=1;goto B45cb34;
case 0x45cb40:goto L45cb40;
case 0x45cb44:c.instructions+=2;goto B45cb44;
case 0x45cb47:c.instructions+=1;goto B45cb47;
case 0x45cb49:goto L45cb49;
case 0x45cb4a:c.instructions+=1;goto B45cb4a;
case 0x45cb4c:goto L45cb4c;
case 0x45cb4f:c.instructions+=1;goto B45cb4f;
case 0x45cb52:goto L45cb52;
case 0x45cb57:c.instructions+=1;goto B45cb57;
case 0x45cb5a:goto L45cb5a;
case 0x45cb5f:c.instructions+=1;goto B45cb5f;
case 0x45cb70:goto L45cb70;
case 0x45cb73:c.instructions+=32;goto B45cb73;
case 0x45cb76:c.instructions+=31;goto B45cb76;
case 0x45cb7c:c.instructions+=30;goto B45cb7c;
case 0x45cb82:c.instructions+=29;goto B45cb82;
case 0x45cb85:c.instructions+=28;goto B45cb85;
case 0x45cb8c:c.instructions+=27;goto B45cb8c;
case 0x45cb96:c.instructions+=26;goto B45cb96;
case 0x45cb98:c.instructions+=25;goto B45cb98;
case 0x45cb9e:c.instructions+=24;goto B45cb9e;
case 0x45cba0:c.instructions+=23;goto B45cba0;
case 0x45cba6:c.instructions+=22;goto B45cba6;
case 0x45cba9:c.instructions+=21;goto B45cba9;
case 0x45cbac:c.instructions+=20;goto B45cbac;
case 0x45cbb2:c.instructions+=19;goto B45cbb2;
case 0x45cbbc:c.instructions+=18;goto B45cbbc;
case 0x45cbc2:c.instructions+=17;goto B45cbc2;
case 0x45cbc8:c.instructions+=16;goto B45cbc8;
case 0x45cbd2:c.instructions+=15;goto B45cbd2;
case 0x45cbd8:c.instructions+=14;goto B45cbd8;
case 0x45cbde:c.instructions+=13;goto B45cbde;
case 0x45cbe4:c.instructions+=12;goto B45cbe4;
case 0x45cbea:c.instructions+=11;goto B45cbea;
case 0x45cbef:c.instructions+=10;goto B45cbef;
case 0x45cbf9:c.instructions+=9;goto B45cbf9;
case 0x45cbff:c.instructions+=8;goto B45cbff;
case 0x45cc05:c.instructions+=7;goto B45cc05;
case 0x45cc0b:c.instructions+=6;goto B45cc0b;
case 0x45cc11:c.instructions+=5;goto B45cc11;
case 0x45cc17:c.instructions+=4;goto B45cc17;
case 0x45cc1d:c.instructions+=3;goto B45cc1d;
case 0x45cc20:c.instructions+=2;goto B45cc20;
case 0x45cc26:c.instructions+=1;goto B45cc26;
case 0x45cc30:goto L45cc30;
case 0x45cc33:c.instructions+=14;goto B45cc33;
case 0x45cc39:c.instructions+=13;goto B45cc39;
case 0x45cc3f:c.instructions+=12;goto B45cc3f;
case 0x45cc42:c.instructions+=11;goto B45cc42;
case 0x45cc4c:c.instructions+=10;goto B45cc4c;
case 0x45cc4f:c.instructions+=9;goto B45cc4f;
case 0x45cc52:c.instructions+=8;goto B45cc52;
case 0x45cc55:c.instructions+=7;goto B45cc55;
case 0x45cc58:c.instructions+=6;goto B45cc58;
case 0x45cc5e:c.instructions+=5;goto B45cc5e;
case 0x45cc61:c.instructions+=4;goto B45cc61;
case 0x45cc67:c.instructions+=3;goto B45cc67;
case 0x45cc69:c.instructions+=2;goto B45cc69;
case 0x45cc6c:c.instructions+=1;goto B45cc6c;
case 0x45cc6e:goto L45cc6e;
case 0x45cc75:goto L45cc75;
case 0x45cc7b:c.instructions+=15;goto B45cc7b;
case 0x45cc7d:c.instructions+=14;goto B45cc7d;
case 0x45cc87:c.instructions+=13;goto B45cc87;
case 0x45cc8a:c.instructions+=12;goto B45cc8a;
case 0x45cc90:c.instructions+=11;goto B45cc90;
case 0x45cc96:c.instructions+=10;goto B45cc96;
case 0x45cc99:c.instructions+=9;goto B45cc99;
case 0x45cc9f:c.instructions+=8;goto B45cc9f;
case 0x45cca1:c.instructions+=7;goto B45cca1;
case 0x45cca4:c.instructions+=6;goto B45cca4;
case 0x45ccaa:c.instructions+=5;goto B45ccaa;
case 0x45ccb0:c.instructions+=4;goto B45ccb0;
case 0x45ccb6:c.instructions+=3;goto B45ccb6;
case 0x45ccb8:c.instructions+=2;goto B45ccb8;
case 0x45ccbb:c.instructions+=1;goto B45ccbb;
case 0x45ccbd:goto L45ccbd;
case 0x45ccc7:goto L45ccc7;
case 0x45cccd:c.instructions+=17;goto B45cccd;
case 0x45ccd3:c.instructions+=16;goto B45ccd3;
case 0x45ccd9:c.instructions+=15;goto B45ccd9;
case 0x45ccdf:c.instructions+=14;goto B45ccdf;
case 0x45cce5:c.instructions+=13;goto B45cce5;
case 0x45cceb:c.instructions+=12;goto B45cceb;
case 0x45ccee:c.instructions+=11;goto B45ccee;
case 0x45ccf1:c.instructions+=10;goto B45ccf1;
case 0x45ccf4:c.instructions+=9;goto B45ccf4;
case 0x45ccfe:c.instructions+=8;goto B45ccfe;
case 0x45cd00:c.instructions+=7;goto B45cd00;
case 0x45cd06:c.instructions+=6;goto B45cd06;
case 0x45cd0c:c.instructions+=5;goto B45cd0c;
case 0x45cd12:c.instructions+=4;goto B45cd12;
case 0x45cd18:c.instructions+=3;goto B45cd18;
case 0x45cd1e:c.instructions+=2;goto B45cd1e;
case 0x45cd24:c.instructions+=1;goto B45cd24;
case 0x45cd30:goto L45cd30;
case 0x45cd31:c.instructions+=8;goto B45cd31;
case 0x45cd34:c.instructions+=7;goto B45cd34;
case 0x45cd37:c.instructions+=6;goto B45cd37;
case 0x45cd3d:c.instructions+=5;goto B45cd3d;
case 0x45cd43:c.instructions+=4;goto B45cd43;
case 0x45cd49:c.instructions+=3;goto B45cd49;
case 0x45cd4b:c.instructions+=2;goto B45cd4b;
case 0x45cd4e:c.instructions+=1;goto B45cd4e;
case 0x45cd50:goto L45cd50;
case 0x45cd53:c.instructions+=7;goto B45cd53;
case 0x45cd56:c.instructions+=6;goto B45cd56;
case 0x45cd59:c.instructions+=5;goto B45cd59;
case 0x45cd5f:c.instructions+=4;goto B45cd5f;
case 0x45cd65:c.instructions+=3;goto B45cd65;
case 0x45cd67:c.instructions+=2;goto B45cd67;
case 0x45cd6a:c.instructions+=1;goto B45cd6a;
case 0x45cd6c:goto L45cd6c;
case 0x45cd6f:c.instructions+=3;goto B45cd6f;
case 0x45cd75:c.instructions+=2;goto B45cd75;
case 0x45cd77:c.instructions+=1;goto B45cd77;
case 0x45cd79:goto L45cd79;
case 0x45cd7f:c.instructions+=2;goto B45cd7f;
case 0x45cd81:c.instructions+=1;goto B45cd81;
case 0x45cd83:goto L45cd83;
case 0x45cd86:c.instructions+=2;goto B45cd86;
case 0x45cd88:c.instructions+=1;goto B45cd88;
case 0x45cd8a:goto L45cd8a;
case 0x45cd8f:goto L45cd8f;
case 0x45cd91:c.instructions+=1;goto B45cd91;
case 0x45cd93:goto L45cd93;
case 0x45cd97:c.instructions+=1;goto B45cd97;
case 0x45cd99:goto L45cd99;
case 0x45cda0:c.instructions+=1;goto B45cda0;
case 0x45cda2:goto L45cda2;
case 0x45cda5:c.instructions+=4;goto B45cda5;
case 0x45cdab:c.instructions+=3;goto B45cdab;
case 0x45cdad:c.instructions+=2;goto B45cdad;
case 0x45cdb0:c.instructions+=1;goto B45cdb0;
case 0x45cdb2:goto L45cdb2;
case 0x45cdb4:c.instructions+=2;goto B45cdb4;
case 0x45cdb5:c.instructions+=1;goto B45cdb5;
case 0x45cdb6:goto L45cdb6;
case 0x45cdb8:c.instructions+=2;goto B45cdb8;
case 0x45cdb9:c.instructions+=1;goto B45cdb9;
case 0x45cdc0:goto L45cdc0;
case 0x45cdc6:c.instructions+=2;goto B45cdc6;
case 0x45cdc8:c.instructions+=1;goto B45cdc8;
case 0x45cdca:goto L45cdca;
case 0x45cdcc:c.instructions+=1;goto B45cdcc;
case 0x45cdcd:goto L45cdcd;
case 0x45cdd0:c.instructions+=2;goto B45cdd0;
case 0x45cdd2:c.instructions+=1;goto B45cdd2;
case 0x45cdd4:goto L45cdd4;
case 0x45cdd7:c.instructions+=2;goto B45cdd7;
case 0x45cdda:c.instructions+=1;goto B45cdda;
case 0x45cddc:goto L45cddc;
case 0x45cdde:c.instructions+=1;goto B45cdde;
case 0x45cde0:goto L45cde0;
case 0x45cde3:c.instructions+=5;goto B45cde3;
case 0x45cde6:c.instructions+=4;goto B45cde6;
case 0x45cdec:c.instructions+=3;goto B45cdec;
case 0x45cdee:c.instructions+=2;goto B45cdee;
case 0x45cdf1:c.instructions+=1;goto B45cdf1;
case 0x45cdf3:goto L45cdf3;
case 0x45cdf7:c.instructions+=2;goto B45cdf7;
case 0x45cdfa:c.instructions+=1;goto B45cdfa;
case 0x45ce00:goto L45ce00;
case 0x45ce05:c.instructions+=1;goto B45ce05;
case 0x45ce10:goto L45ce10;
case 0x45ce15:c.instructions+=1;goto B45ce15;
case 0x45ce20:goto L45ce20;
case 0x45ce22:c.instructions+=15;goto B45ce22;
case 0x45ce27:c.instructions+=14;goto B45ce27;
case 0x45ce2d:c.instructions+=13;goto B45ce2d;
case 0x45ce2e:c.instructions+=12;goto B45ce2e;
case 0x45ce35:c.instructions+=11;goto B45ce35;
case 0x45ce36:c.instructions+=10;goto B45ce36;
case 0x45ce37:c.instructions+=9;goto B45ce37;
case 0x45ce38:c.instructions+=8;goto B45ce38;
case 0x45ce39:c.instructions+=7;goto B45ce39;
case 0x45ce3b:c.instructions+=6;goto B45ce3b;
case 0x45ce3c:c.instructions+=5;goto B45ce3c;
case 0x45ce40:c.instructions+=4;goto B45ce40;
case 0x45ce46:c.instructions+=3;goto B45ce46;
case 0x45ce49:c.instructions+=2;goto B45ce49;
case 0x45ce4e:c.instructions+=1;goto B45ce4e;
case 0x45ce50:goto L45ce50;
case 0x45ce52:c.instructions+=4;goto B45ce52;
case 0x45ce55:c.instructions+=3;goto B45ce55;
case 0x45ce56:c.instructions+=2;goto B45ce56;
case 0x45ce5a:c.instructions+=1;goto B45ce5a;
case 0x45ce5c:goto L45ce5c;
case 0x45ce5f:c.instructions+=11;goto B45ce5f;
case 0x45ce62:c.instructions+=10;goto B45ce62;
case 0x45ce65:c.instructions+=9;goto B45ce65;
case 0x45ce68:c.instructions+=8;goto B45ce68;
case 0x45ce6b:c.instructions+=7;goto B45ce6b;
case 0x45ce6d:c.instructions+=6;goto B45ce6d;
case 0x45ce73:c.instructions+=5;goto B45ce73;
case 0x45ce74:c.instructions+=4;goto B45ce74;
case 0x45ce7a:c.instructions+=3;goto B45ce7a;
case 0x45ce7e:c.instructions+=2;goto B45ce7e;
case 0x45ce84:c.instructions+=1;goto B45ce84;
case 0x45ce89:goto L45ce89;
case 0x45ce8f:c.instructions+=3;goto B45ce8f;
case 0x45ce91:c.instructions+=2;goto B45ce91;
case 0x45ce93:c.instructions+=1;goto B45ce93;
case 0x45ce98:goto L45ce98;
case 0x45ce99:c.instructions+=3;goto B45ce99;
case 0x45ce9b:c.instructions+=2;goto B45ce9b;
case 0x45cea0:c.instructions+=1;goto B45cea0;
case 0x45cea5:goto L45cea5;
case 0x45cea9:c.instructions+=29;goto B45cea9;
case 0x45ceaf:c.instructions+=28;goto B45ceaf;
case 0x45ceb5:c.instructions+=27;goto B45ceb5;
case 0x45cebb:c.instructions+=26;goto B45cebb;
case 0x45cec1:c.instructions+=25;goto B45cec1;
case 0x45cec7:c.instructions+=24;goto B45cec7;
case 0x45cecd:c.instructions+=23;goto B45cecd;
case 0x45ced0:c.instructions+=22;goto B45ced0;
case 0x45ceda:c.instructions+=21;goto B45ceda;
case 0x45cedc:c.instructions+=20;goto B45cedc;
case 0x45cedf:c.instructions+=19;goto B45cedf;
case 0x45cee5:c.instructions+=18;goto B45cee5;
case 0x45ceeb:c.instructions+=17;goto B45ceeb;
case 0x45cef1:c.instructions+=16;goto B45cef1;
case 0x45cef7:c.instructions+=15;goto B45cef7;
case 0x45cefd:c.instructions+=14;goto B45cefd;
case 0x45cf03:c.instructions+=13;goto B45cf03;
case 0x45cf09:c.instructions+=12;goto B45cf09;
case 0x45cf0f:c.instructions+=11;goto B45cf0f;
case 0x45cf15:c.instructions+=10;goto B45cf15;
case 0x45cf1b:c.instructions+=9;goto B45cf1b;
case 0x45cf1c:c.instructions+=8;goto B45cf1c;
case 0x45cf23:c.instructions+=7;goto B45cf23;
case 0x45cf25:c.instructions+=6;goto B45cf25;
case 0x45cf26:c.instructions+=5;goto B45cf26;
case 0x45cf27:c.instructions+=4;goto B45cf27;
case 0x45cf28:c.instructions+=3;goto B45cf28;
case 0x45cf2f:c.instructions+=2;goto B45cf2f;
case 0x45cf32:c.instructions+=1;goto B45cf32;
case 0x45cf40:goto L45cf40;
case 0x45cf42:c.instructions+=12;goto B45cf42;
case 0x45cf47:c.instructions+=11;goto B45cf47;
case 0x45cf4d:c.instructions+=10;goto B45cf4d;
case 0x45cf4e:c.instructions+=9;goto B45cf4e;
case 0x45cf55:c.instructions+=8;goto B45cf55;
case 0x45cf56:c.instructions+=7;goto B45cf56;
case 0x45cf57:c.instructions+=6;goto B45cf57;
case 0x45cf59:c.instructions+=5;goto B45cf59;
case 0x45cf5d:c.instructions+=4;goto B45cf5d;
case 0x45cf63:c.instructions+=3;goto B45cf63;
case 0x45cf69:c.instructions+=2;goto B45cf69;
case 0x45cf71:c.instructions+=1;goto B45cf71;
case 0x45cf76:goto L45cf76;
case 0x45cf7a:c.instructions+=5;goto B45cf7a;
case 0x45cf80:c.instructions+=4;goto B45cf80;
case 0x45cf81:c.instructions+=3;goto B45cf81;
case 0x45cf88:c.instructions+=2;goto B45cf88;
case 0x45cf8b:c.instructions+=1;goto B45cf8b;
case 0x45cf90:goto L45cf90;
case 0x45cf91:c.instructions+=6;goto B45cf91;
case 0x45cf95:c.instructions+=5;goto B45cf95;
case 0x45cf96:c.instructions+=4;goto B45cf96;
case 0x45cf98:c.instructions+=3;goto B45cf98;
case 0x45cf9b:c.instructions+=2;goto B45cf9b;
case 0x45cf9e:c.instructions+=1;goto B45cf9e;
case 0x45cfa0:goto L45cfa0;
case 0x45cfa3:c.instructions+=1;goto B45cfa3;
case 0x45cfa5:goto L45cfa5;
case 0x45cfa8:c.instructions+=1;goto B45cfa8;
case 0x45cfaa:goto L45cfaa;
case 0x45cfb1:c.instructions+=1;goto B45cfb1;
case 0x45cfb3:goto L45cfb3;
case 0x45cfb6:goto L45cfb6;
case 0x45cfb9:c.instructions+=3;goto B45cfb9;
case 0x45cfbc:c.instructions+=2;goto B45cfbc;
case 0x45cfbe:c.instructions+=1;goto B45cfbe;
case 0x45cfc1:goto L45cfc1;
case 0x45cfc4:c.instructions+=13;goto B45cfc4;
case 0x45cfc7:c.instructions+=12;goto B45cfc7;
case 0x45cfcd:c.instructions+=11;goto B45cfcd;
case 0x45cfd0:c.instructions+=10;goto B45cfd0;
case 0x45cfd3:c.instructions+=9;goto B45cfd3;
case 0x45cfd7:c.instructions+=8;goto B45cfd7;
case 0x45cfdb:c.instructions+=7;goto B45cfdb;
case 0x45cfdd:c.instructions+=6;goto B45cfdd;
case 0x45cfe7:c.instructions+=5;goto B45cfe7;
case 0x45cfeb:c.instructions+=4;goto B45cfeb;
case 0x45cff1:c.instructions+=3;goto B45cff1;
case 0x45cff7:c.instructions+=2;goto B45cff7;
case 0x45cffb:c.instructions+=1;goto B45cffb;
default:missing_instruction(c.pc);}
B45c002:L45c002:{c.instructions+=1;NFSU2_TR(0x45c002);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45c03e;}}
}
B45c004:L45c004:{c.instructions+=3;NFSU2_TR(0x45c004);
__builtin_memmove((R+0),gp(0x890118),4);
}
B45c009:{NFSU2_TR(0x45c009);
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
B45c00b:{NFSU2_TR(0x45c00b);
if(r1(R+518)){{goto L45c03e;}}
}
B45c00d:L45c00d:{c.instructions+=2;NFSU2_TR(0x45c00d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B45c010:{NFSU2_TR(0x45c010);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45c03e;}}
}
B45c012:L45c012:{c.instructions+=6;NFSU2_TR(0x45c012);
__builtin_memmove((R+0),gp(0x827ec8),4);
}
B45c017:{NFSU2_TR(0x45c017);
__builtin_memmove((R+12),gp(0x827eb0),4);
}
B45c01d:{NFSU2_TR(0x45c01d);
__builtin_memmove((R+28),gp(0x827e98),4);
}
B45c023:{NFSU2_TR(0x45c023);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B45c025:{NFSU2_TR(0x45c025);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45c027:{NFSU2_TR(0x45c027);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45c03e;}}
}
B45c029:L45c029:{c.instructions+=7;NFSU2_TR(0x45c029);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45c02a:{NFSU2_TR(0x45c02a);
w4(R+0,u32(0x19ull));
}
B45c02f:{NFSU2_TR(0x45c02f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c030:{NFSU2_TR(0x45c030);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c036:{NFSU2_TR(0x45c036);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c03c:{NFSU2_TR(0x45c03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45c03d:{NFSU2_TR(0x45c03d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c03e:L45c03e:{c.instructions+=6;NFSU2_TR(0x45c03e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45c03f:{NFSU2_TR(0x45c03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c045:{NFSU2_TR(0x45c045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c046:{NFSU2_TR(0x45c046);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c04c:{NFSU2_TR(0x45c04c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45c04d:{NFSU2_TR(0x45c04d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c050:L45c050:{c.instructions+=2;NFSU2_TR(0x45c050);
w4(R+0,u32(0x7ed27cull));
}
B45c055:{NFSU2_TR(0x45c055);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c060:L45c060:{c.instructions+=2;NFSU2_TR(0x45c060);
__builtin_memmove((R+0),gp(0x7ed280),4);
}
B45c065:{NFSU2_TR(0x45c065);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c070:L45c070:{c.instructions+=2;NFSU2_TR(0x45c070);
w4(R+0,u32(0x7ed28cull));
}
B45c075:{NFSU2_TR(0x45c075);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c080:L45c080:{c.instructions+=2;NFSU2_TR(0x45c080);
__builtin_memmove((R+0),gp(0x7ed290),4);
}
B45c085:{NFSU2_TR(0x45c085);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c090:L45c090:{c.instructions+=3;NFSU2_TR(0x45c090);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c093:{NFSU2_TR(0x45c093);
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
B45c096:{NFSU2_TR(0x45c096);
if(r1(R+518)){{goto L45c09d;}}
}
B45c098:L45c098:{c.instructions+=2;NFSU2_TR(0x45c098);
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
B45c09a:{NFSU2_TR(0x45c09a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45c09d;}}
}
B45c09c:L45c09c:{c.instructions+=1;NFSU2_TR(0x45c09c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c09d:L45c09d:{c.instructions+=2;NFSU2_TR(0x45c09d);
w4(R+0,u32(0x1ull));
}
B45c0a2:{NFSU2_TR(0x45c0a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c0b0:L45c0b0:{c.instructions+=2;NFSU2_TR(0x45c0b0);
w4(R+0,u32(0x7ed2a4ull));
}
B45c0b5:{NFSU2_TR(0x45c0b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c0c0:L45c0c0:{c.instructions+=2;NFSU2_TR(0x45c0c0);
__builtin_memmove((R+0),gp(0x7ed2a8),4);
}
B45c0c5:{NFSU2_TR(0x45c0c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c0d0:L45c0d0:{c.instructions+=6;NFSU2_TR(0x45c0d0);
__builtin_memmove((R+0),(R+4),4);
}
B45c0d2:{NFSU2_TR(0x45c0d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c0d3:{NFSU2_TR(0x45c0d3);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45c0d9:{NFSU2_TR(0x45c0d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B45c0dc:{NFSU2_TR(0x45c0dc);
w4(R+24,u32(0x10ull));
}
B45c0e1:{NFSU2_TR(0x45c0e1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45c0e3:L45c0e3:{c.instructions+=5;NFSU2_TR(0x45c0e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B45c0e5:{NFSU2_TR(0x45c0e5);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B45c0e8:{NFSU2_TR(0x45c0e8);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45c0e9:{NFSU2_TR(0x45c0e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c0ed:{NFSU2_TR(0x45c0ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45c0e3u);}goto L45c0e3;}}
}
B45c0ef:L45c0ef:{c.instructions+=52;NFSU2_TR(0x45c0ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c0f2:{NFSU2_TR(0x45c0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c0f5:{NFSU2_TR(0x45c0f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c0f8:{NFSU2_TR(0x45c0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c0fb:{NFSU2_TR(0x45c0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c0fe:{NFSU2_TR(0x45c0fe);
u8 U[4];
w4(U+0,u32(0x789f28ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45c104:{NFSU2_TR(0x45c104);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c10a:{NFSU2_TR(0x45c10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c110:{NFSU2_TR(0x45c110);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c116:{NFSU2_TR(0x45c116);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c11c:{NFSU2_TR(0x45c11c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c122:{NFSU2_TR(0x45c122);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c128:{NFSU2_TR(0x45c128);
w1(R+8,u8(0x1ull));
}
B45c12a:{NFSU2_TR(0x45c12a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c130:{NFSU2_TR(0x45c130);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c136:{NFSU2_TR(0x45c136);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c13c:{NFSU2_TR(0x45c13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c142:{NFSU2_TR(0x45c142);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c148:{NFSU2_TR(0x45c148);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c14e:{NFSU2_TR(0x45c14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c154:{NFSU2_TR(0x45c154);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c15a:{NFSU2_TR(0x45c15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c160:{NFSU2_TR(0x45c160);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c166:{NFSU2_TR(0x45c166);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c16c:{NFSU2_TR(0x45c16c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c172:{NFSU2_TR(0x45c172);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c178:{NFSU2_TR(0x45c178);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c17e:{NFSU2_TR(0x45c17e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c184:{NFSU2_TR(0x45c184);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c18a:{NFSU2_TR(0x45c18a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c190:{NFSU2_TR(0x45c190);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c196:{NFSU2_TR(0x45c196);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c19c:{NFSU2_TR(0x45c19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1a2:{NFSU2_TR(0x45c1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1a8:{NFSU2_TR(0x45c1a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c1ae:{NFSU2_TR(0x45c1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1b4:{NFSU2_TR(0x45c1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1ba:{NFSU2_TR(0x45c1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1c0:{NFSU2_TR(0x45c1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1c6:{NFSU2_TR(0x45c1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1cc:{NFSU2_TR(0x45c1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1d2:{NFSU2_TR(0x45c1d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c1d8:{NFSU2_TR(0x45c1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1de:{NFSU2_TR(0x45c1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1e4:{NFSU2_TR(0x45c1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1ea:{NFSU2_TR(0x45c1ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1f0:{NFSU2_TR(0x45c1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1f6:{NFSU2_TR(0x45c1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c1fc:{NFSU2_TR(0x45c1fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c202:{NFSU2_TR(0x45c202);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c205:{NFSU2_TR(0x45c205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c206:{NFSU2_TR(0x45c206);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c210:L45c210:{c.instructions+=7;NFSU2_TR(0x45c210);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B45c215:{NFSU2_TR(0x45c215);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c21b:{NFSU2_TR(0x45c21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c21e:{NFSU2_TR(0x45c21e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c220:{NFSU2_TR(0x45c220);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c221:{NFSU2_TR(0x45c221);
__builtin_memmove((R+24),(R+4),4);
}
B45c223:{NFSU2_TR(0x45c223);
if(r1(R+518)){{goto L45c232;}}
}
B45c225:L45c225:{c.instructions+=4;NFSU2_TR(0x45c225);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45c227:{NFSU2_TR(0x45c227);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c22a:{NFSU2_TR(0x45c22a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c22c:{NFSU2_TR(0x45c22c);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c232:L45c232:{c.instructions+=1;NFSU2_TR(0x45c232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c237ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45c237:L45c237:{c.instructions+=6;NFSU2_TR(0x45c237);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c23d:{NFSU2_TR(0x45c23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c240:{NFSU2_TR(0x45c240);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B45c246:{NFSU2_TR(0x45c246);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c249:{NFSU2_TR(0x45c249);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c24b:{NFSU2_TR(0x45c24b);
if(r1(R+518)){{goto L45c25a;}}
}
B45c24d:L45c24d:{c.instructions+=4;NFSU2_TR(0x45c24d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45c24f:{NFSU2_TR(0x45c24f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c252:{NFSU2_TR(0x45c252);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c254:{NFSU2_TR(0x45c254);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c25a:L45c25a:{c.instructions+=1;NFSU2_TR(0x45c25a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c25full));
TAIL_STATIC(0x75bed4u,75b);
}
B45c25f:L45c25f:{c.instructions+=8;NFSU2_TR(0x45c25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c262:{NFSU2_TR(0x45c262);
__builtin_memmove((R+8),gp(0x7ed344),4);
}
B45c268:{NFSU2_TR(0x45c268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c26b:{NFSU2_TR(0x45c26b);
__builtin_memmove((R+8),gp(0x7ed344),4);
}
B45c271:{NFSU2_TR(0x45c271);
w4(R+0,u32(0x7fffull));
}
B45c276:{NFSU2_TR(0x45c276);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B45c278:{NFSU2_TR(0x45c278);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c27a:{NFSU2_TR(0x45c27a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45c280;}}
}
B45c27c:L45c27c:{c.instructions+=2;NFSU2_TR(0x45c27c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45c27e:{NFSU2_TR(0x45c27e);
{goto L45c28c;}
}
B45c280:L45c280:{c.instructions+=2;NFSU2_TR(0x45c280);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c285:{NFSU2_TR(0x45c285);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45c28c;}}
}
B45c287:L45c287:{c.instructions+=1;NFSU2_TR(0x45c287);
w4(R+0,u32(0x7fffull));
}
B45c28c:L45c28c:{c.instructions+=6;NFSU2_TR(0x45c28c);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c292:{NFSU2_TR(0x45c292);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c295:{NFSU2_TR(0x45c295);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B45c29a:{NFSU2_TR(0x45c29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c29d:{NFSU2_TR(0x45c29d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c29f:{NFSU2_TR(0x45c29f);
if(r1(R+518)){{goto L45c2ae;}}
}
B45c2a1:L45c2a1:{c.instructions+=4;NFSU2_TR(0x45c2a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45c2a3:{NFSU2_TR(0x45c2a3);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c2a6:{NFSU2_TR(0x45c2a6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c2a8:{NFSU2_TR(0x45c2a8);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c2ae:L45c2ae:{c.instructions+=1;NFSU2_TR(0x45c2ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c2b3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45c2b3:L45c2b3:{c.instructions+=6;NFSU2_TR(0x45c2b3);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c2b9:{NFSU2_TR(0x45c2b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c2bc:{NFSU2_TR(0x45c2bc);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B45c2c2:{NFSU2_TR(0x45c2c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c2c5:{NFSU2_TR(0x45c2c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c2c7:{NFSU2_TR(0x45c2c7);
if(r1(R+518)){{goto L45c2d6;}}
}
B45c2c9:L45c2c9:{c.instructions+=4;NFSU2_TR(0x45c2c9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45c2cb:{NFSU2_TR(0x45c2cb);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c2ce:{NFSU2_TR(0x45c2ce);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c2d0:{NFSU2_TR(0x45c2d0);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c2d6:L45c2d6:{c.instructions+=1;NFSU2_TR(0x45c2d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c2dbull));
TAIL_STATIC(0x75bed4u,75b);
}
B45c2db:L45c2db:{c.instructions+=6;NFSU2_TR(0x45c2db);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c2e1:{NFSU2_TR(0x45c2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c2e4:{NFSU2_TR(0x45c2e4);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B45c2ea:{NFSU2_TR(0x45c2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c2ed:{NFSU2_TR(0x45c2ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c2ef:{NFSU2_TR(0x45c2ef);
if(r1(R+518)){{goto L45c2fe;}}
}
B45c2f1:L45c2f1:{c.instructions+=4;NFSU2_TR(0x45c2f1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45c2f3:{NFSU2_TR(0x45c2f3);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c2f6:{NFSU2_TR(0x45c2f6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c2f8:{NFSU2_TR(0x45c2f8);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c2fe:L45c2fe:{c.instructions+=1;NFSU2_TR(0x45c2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c303ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45c303:L45c303:{c.instructions+=3;NFSU2_TR(0x45c303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c306:{NFSU2_TR(0x45c306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c307:{NFSU2_TR(0x45c307);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c310:L45c310:{c.instructions+=6;NFSU2_TR(0x45c310);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c314:{NFSU2_TR(0x45c314);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B45c316:{NFSU2_TR(0x45c316);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B45c318:{NFSU2_TR(0x45c318);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffaull))));
}
B45c31b:{NFSU2_TR(0x45c31b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x5ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x5ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45c31e:{NFSU2_TR(0x45c31e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c330:L45c330:{c.instructions+=6;NFSU2_TR(0x45c330);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45c334:{NFSU2_TR(0x45c334);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c337:{NFSU2_TR(0x45c337);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c33a:{NFSU2_TR(0x45c33a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c33b:{NFSU2_TR(0x45c33b);
__builtin_memmove((R+24),(R+4),4);
}
B45c33d:{NFSU2_TR(0x45c33d);
if(r1(R+518)){{goto L45c352;}}
}
B45c33f:L45c33f:{c.instructions+=2;NFSU2_TR(0x45c33f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c342:{NFSU2_TR(0x45c342);
if(r1(R+518)){{goto L45c352;}}
}
B45c344:L45c344:{c.instructions+=2;NFSU2_TR(0x45c344);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c347:{NFSU2_TR(0x45c347);
if(r1(R+518)){{goto L45c352;}}
}
B45c349:L45c349:{c.instructions+=2;NFSU2_TR(0x45c349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c350:{NFSU2_TR(0x45c350);
{goto L45c355;}
}
B45c352:L45c352:{c.instructions+=1;NFSU2_TR(0x45c352);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c355:L45c355:{c.instructions+=6;NFSU2_TR(0x45c355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c358:{NFSU2_TR(0x45c358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c35b:{NFSU2_TR(0x45c35b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c361:{NFSU2_TR(0x45c361);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c364:{NFSU2_TR(0x45c364);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
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
B45c368:{NFSU2_TR(0x45c368);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45c38d;}}
}
B45c36a:L45c36a:{c.instructions+=9;NFSU2_TR(0x45c36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c370:{NFSU2_TR(0x45c370);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45c373:{NFSU2_TR(0x45c373);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45c376:{NFSU2_TR(0x45c376);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f2234ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B45c37d:{NFSU2_TR(0x45c37d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45c380:{NFSU2_TR(0x45c380);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B45c383:{NFSU2_TR(0x45c383);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f2860ull))));
}
B45c388:{NFSU2_TR(0x45c388);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c38b:{NFSU2_TR(0x45c38b);
{goto L45c3aa;}
}
B45c38d:L45c38d:{c.instructions+=2;NFSU2_TR(0x45c38d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45c38f:{NFSU2_TR(0x45c38f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c392ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45c392:L45c392:{c.instructions+=2;NFSU2_TR(0x45c392);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45c395:{NFSU2_TR(0x45c395);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L45c39c;}}
}
B45c397:L45c397:{c.instructions+=2;NFSU2_TR(0x45c397);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c39a:{NFSU2_TR(0x45c39a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45c3a3;}}
}
B45c39c:L45c39c:{c.instructions+=1;NFSU2_TR(0x45c39c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x7f2e60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c3a3:L45c3a3:{c.instructions+=1;NFSU2_TR(0x45c3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x7f2ec0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c3aa:L45c3aa:{c.instructions+=3;NFSU2_TR(0x45c3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c3ad:{NFSU2_TR(0x45c3ad);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45c3b2:{NFSU2_TR(0x45c3b2);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L45c3b9;}}
}
B45c3b4:L45c3b4:{c.instructions+=3;NFSU2_TR(0x45c3b4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B45c3b5:{NFSU2_TR(0x45c3b5);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffeull))));
}
B45c3b8:{NFSU2_TR(0x45c3b8);
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
B45c3b9:L45c3b9:{c.instructions+=3;NFSU2_TR(0x45c3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c3bf:{NFSU2_TR(0x45c3bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c3c0:{NFSU2_TR(0x45c3c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c3d0:L45c3d0:{c.instructions+=18;NFSU2_TR(0x45c3d0);
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
B45c3d2:{NFSU2_TR(0x45c3d2);
w4(R+8,u32(0x1ull));
}
B45c3d7:{NFSU2_TR(0x45c3d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c3da:{NFSU2_TR(0x45c3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c3e0:{NFSU2_TR(0x45c3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c3e6:{NFSU2_TR(0x45c3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c3ec:{NFSU2_TR(0x45c3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c3f2:{NFSU2_TR(0x45c3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c3f8:{NFSU2_TR(0x45c3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c3fe:{NFSU2_TR(0x45c3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c401:{NFSU2_TR(0x45c401);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c404:{NFSU2_TR(0x45c404);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c40a:{NFSU2_TR(0x45c40a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c410:{NFSU2_TR(0x45c410);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c416:{NFSU2_TR(0x45c416);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c41c:{NFSU2_TR(0x45c41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c422:{NFSU2_TR(0x45c422);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c428:{NFSU2_TR(0x45c428);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c430:L45c430:{c.instructions+=11;NFSU2_TR(0x45c430);
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
B45c432:{NFSU2_TR(0x45c432);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c438:{NFSU2_TR(0x45c438);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c43e:{NFSU2_TR(0x45c43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c444:{NFSU2_TR(0x45c444);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c44a:{NFSU2_TR(0x45c44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c450:{NFSU2_TR(0x45c450);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c456:{NFSU2_TR(0x45c456);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c45c:{NFSU2_TR(0x45c45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c45f:{NFSU2_TR(0x45c45f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c462:{NFSU2_TR(0x45c462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c470:L45c470:{c.instructions+=2;NFSU2_TR(0x45c470);
w4(R+0,u32(0x7ed2b4ull));
}
B45c475:{NFSU2_TR(0x45c475);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c480:L45c480:{c.instructions+=2;NFSU2_TR(0x45c480);
__builtin_memmove((R+0),gp(0x7ed2b8),4);
}
B45c485:{NFSU2_TR(0x45c485);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c490:L45c490:{c.instructions+=3;NFSU2_TR(0x45c490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c491:{NFSU2_TR(0x45c491);
__builtin_memmove((R+24),(R+4),4);
}
B45c493:{NFSU2_TR(0x45c493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c498ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45c0d0u);}goto L45c0d0;}
}
B45c498:L45c498:{c.instructions+=4;NFSU2_TR(0x45c498);
u8 U[4];
w4(U+0,u32(0x789f4cull));
s4(u32(r4(R+24)),r4(U+0));
}
B45c49e:{NFSU2_TR(0x45c49e);
__builtin_memmove((R+0),(R+24),4);
}
B45c4a0:{NFSU2_TR(0x45c4a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c4a1:{NFSU2_TR(0x45c4a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c4b0:L45c4b0:{c.instructions+=2;NFSU2_TR(0x45c4b0);
w4(R+0,u32(0x7ed2c4ull));
}
B45c4b5:{NFSU2_TR(0x45c4b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c4c0:L45c4c0:{c.instructions+=2;NFSU2_TR(0x45c4c0);
__builtin_memmove((R+0),gp(0x7ed2c8),4);
}
B45c4c5:{NFSU2_TR(0x45c4c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c4d0:L45c4d0:{c.instructions+=13;NFSU2_TR(0x45c4d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c4d2:{NFSU2_TR(0x45c4d2);
u8 U[4];
w4(U+0,u32(0x772386ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c4d7:{NFSU2_TR(0x45c4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c4dd:{NFSU2_TR(0x45c4dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c4de:{NFSU2_TR(0x45c4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c4e5:{NFSU2_TR(0x45c4e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c4e6:{NFSU2_TR(0x45c4e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c4e7:{NFSU2_TR(0x45c4e7);
__builtin_memmove((R+24),(R+4),4);
}
B45c4e9:{NFSU2_TR(0x45c4e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c4ed:{NFSU2_TR(0x45c4ed);
u8 U[4];
w4(U+0,u32(0x789f70ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45c4f3:{NFSU2_TR(0x45c4f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45c4f9:{NFSU2_TR(0x45c4f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c501:{NFSU2_TR(0x45c501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c506ull));
TAIL_STATIC(0x5768e0u,576);
}
B45c506:L45c506:{c.instructions+=3;NFSU2_TR(0x45c506);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45c50c:{NFSU2_TR(0x45c50c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45c511:{NFSU2_TR(0x45c511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c516ull));
TAIL_STATIC(0x5768e0u,576);
}
B45c516:L45c516:{c.instructions+=6;NFSU2_TR(0x45c516);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c51a:{NFSU2_TR(0x45c51a);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45c520:{NFSU2_TR(0x45c520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c521:{NFSU2_TR(0x45c521);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c528:{NFSU2_TR(0x45c528);
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
B45c52b:{NFSU2_TR(0x45c52b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c530:L45c530:{c.instructions+=2;NFSU2_TR(0x45c530);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c536:{NFSU2_TR(0x45c536);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c540:L45c540:{c.instructions+=2;NFSU2_TR(0x45c540);
{u32 ea_=u32(r4(R+4)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c546:{NFSU2_TR(0x45c546);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c550:L45c550:{c.instructions+=6;NFSU2_TR(0x45c550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c551:{NFSU2_TR(0x45c551);
__builtin_memmove((R+24),(R+4),4);
}
B45c553:{NFSU2_TR(0x45c553);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c557:{NFSU2_TR(0x45c557);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c55a:{NFSU2_TR(0x45c55a);
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
B45c55d:{NFSU2_TR(0x45c55d);
if(r1(R+518)){{goto L45c582;}}
}
B45c55f:L45c55f:{c.instructions+=2;NFSU2_TR(0x45c55f);
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
B45c562:{NFSU2_TR(0x45c562);
if(r1(R+518)){{goto L45c582;}}
}
B45c564:L45c564:{c.instructions+=2;NFSU2_TR(0x45c564);
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
B45c567:{NFSU2_TR(0x45c567);
if(r1(R+518)){{goto L45c582;}}
}
B45c569:L45c569:{c.instructions+=5;NFSU2_TR(0x45c569);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c570:{NFSU2_TR(0x45c570);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c573:{NFSU2_TR(0x45c573);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c576:{NFSU2_TR(0x45c576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45c578:{NFSU2_TR(0x45c578);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c57bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45c57b:L45c57b:{c.instructions+=3;NFSU2_TR(0x45c57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c57e:{NFSU2_TR(0x45c57e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c57f:{NFSU2_TR(0x45c57f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c582:L45c582:{c.instructions+=4;NFSU2_TR(0x45c582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c585:{NFSU2_TR(0x45c585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c588:{NFSU2_TR(0x45c588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45c58a:{NFSU2_TR(0x45c58a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c58dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45c58d:L45c58d:{c.instructions+=3;NFSU2_TR(0x45c58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c590:{NFSU2_TR(0x45c590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c591:{NFSU2_TR(0x45c591);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c5a0:L45c5a0:{c.instructions+=9;NFSU2_TR(0x45c5a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c5a1:{NFSU2_TR(0x45c5a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c5a2:{NFSU2_TR(0x45c5a2);
__builtin_memmove((R+24),(R+4),4);
}
B45c5a4:{NFSU2_TR(0x45c5a4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45c5a6:{NFSU2_TR(0x45c5a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c5a7:{NFSU2_TR(0x45c5a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45c5ad:{NFSU2_TR(0x45c5ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45c5b1:{NFSU2_TR(0x45c5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
w4(U+4,u32(0x96ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c5bb:{NFSU2_TR(0x45c5bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c5c0ull));
TAIL_STATIC(0x576a10u,576);
}
B45c5c0:L45c5c0:{c.instructions+=3;NFSU2_TR(0x45c5c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c5c1:{NFSU2_TR(0x45c5c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45c5c7:{NFSU2_TR(0x45c5c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c5ccull));
TAIL_STATIC(0x576a10u,576);
}
B45c5cc:L45c5cc:{c.instructions+=14;NFSU2_TR(0x45c5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c5cf:{NFSU2_TR(0x45c5cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B45c5d5:{NFSU2_TR(0x45c5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c5db:{NFSU2_TR(0x45c5db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c5e1:{NFSU2_TR(0x45c5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c5e7:{NFSU2_TR(0x45c5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c5ed:{NFSU2_TR(0x45c5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c5f3:{NFSU2_TR(0x45c5f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c5fa:{NFSU2_TR(0x45c5fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c601:{NFSU2_TR(0x45c601);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c608:{NFSU2_TR(0x45c608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
w4(U+4,u32(0x5dc0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c612:{NFSU2_TR(0x45c612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45c614:{NFSU2_TR(0x45c614);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c615:{NFSU2_TR(0x45c615);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c618ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45c618:L45c618:{c.instructions+=7;NFSU2_TR(0x45c618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45c61b:{NFSU2_TR(0x45c61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45c61e:{NFSU2_TR(0x45c61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c621:{NFSU2_TR(0x45c621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45c623:{NFSU2_TR(0x45c623);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x90ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45c629:{NFSU2_TR(0x45c629);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c62a:{NFSU2_TR(0x45c62a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c62dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45c62d:L45c62d:{c.instructions+=3;NFSU2_TR(0x45c62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c630:{NFSU2_TR(0x45c630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45c632:{NFSU2_TR(0x45c632);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c635ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45c635:L45c635:{c.instructions+=2;NFSU2_TR(0x45c635);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45c636:{NFSU2_TR(0x45c636);
if(r1(R+518)){{goto L45c658;}}
}
B45c638:L45c638:{c.instructions+=2;NFSU2_TR(0x45c638);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45c639:{NFSU2_TR(0x45c639);
if(r1(R+518)){{goto L45c64e;}}
}
B45c63b:L45c63b:{c.instructions+=2;NFSU2_TR(0x45c63b);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45c63c:{NFSU2_TR(0x45c63c);
if(r1(R+518)){{goto L45c644;}}
}
B45c63e:L45c63e:{c.instructions+=4;NFSU2_TR(0x45c63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c641:{NFSU2_TR(0x45c641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c642:{NFSU2_TR(0x45c642);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45c643:{NFSU2_TR(0x45c643);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c644:L45c644:{c.instructions+=4;NFSU2_TR(0x45c644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c64b:{NFSU2_TR(0x45c64b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c64c:{NFSU2_TR(0x45c64c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45c64d:{NFSU2_TR(0x45c64d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c64e:L45c64e:{c.instructions+=4;NFSU2_TR(0x45c64e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x5554ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c655:{NFSU2_TR(0x45c655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c656:{NFSU2_TR(0x45c656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45c657:{NFSU2_TR(0x45c657);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c658:L45c658:{c.instructions+=4;NFSU2_TR(0x45c658);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x2aaaull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c65f:{NFSU2_TR(0x45c65f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c660:{NFSU2_TR(0x45c660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45c661:{NFSU2_TR(0x45c661);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c670:L45c670:{c.instructions+=3;NFSU2_TR(0x45c670);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c674:{NFSU2_TR(0x45c674);
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
B45c677:{NFSU2_TR(0x45c677);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L45c69d;}}
}
B45c679:L45c679:{c.instructions+=1;NFSU2_TR(0x45c679);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x45c6a4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45c680:L45c680:{c.instructions+=2;NFSU2_TR(0x45c680);
w4(R+0,u32(0x3ull));
}
B45c685:{NFSU2_TR(0x45c685);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c688:L45c688:{c.instructions+=2;NFSU2_TR(0x45c688);
w4(R+0,u32(0x4ull));
}
B45c68d:{NFSU2_TR(0x45c68d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c690:L45c690:{c.instructions+=2;NFSU2_TR(0x45c690);
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
B45c692:{NFSU2_TR(0x45c692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c695:L45c695:{c.instructions+=2;NFSU2_TR(0x45c695);
w4(R+0,u32(0x8ull));
}
B45c69a:{NFSU2_TR(0x45c69a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c69d:L45c69d:{c.instructions+=2;NFSU2_TR(0x45c69d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45c6a0:{NFSU2_TR(0x45c6a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c6c0:L45c6c0:{c.instructions+=7;NFSU2_TR(0x45c6c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c6c1:{NFSU2_TR(0x45c6c1);
__builtin_memmove((R+24),(R+4),4);
}
B45c6c3:{NFSU2_TR(0x45c6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c6c6:{NFSU2_TR(0x45c6c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B45c6d0:{NFSU2_TR(0x45c6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c6d3:{NFSU2_TR(0x45c6d3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c6d6:{NFSU2_TR(0x45c6d6);
if(r1(R+518)){{goto L45c6dc;}}
}
B45c6d8:L45c6d8:{c.instructions+=2;NFSU2_TR(0x45c6d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c6da:{NFSU2_TR(0x45c6da);
if(r1(R+518)){{goto L45c6fa;}}
}
B45c6dc:L45c6dc:{c.instructions+=3;NFSU2_TR(0x45c6dc);
{u32 ea_=u32(r4(R+0)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c6e2:{NFSU2_TR(0x45c6e2);
{u32 ea_=u32(u32(7905200u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c6e8:{NFSU2_TR(0x45c6e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c6edull));
TAIL_STATIC(0x75bed4u,75b);
}
B45c6ed:L45c6ed:{c.instructions+=3;NFSU2_TR(0x45c6ed);
w4(R+4,u32(0x7fffull));
}
B45c6f2:{NFSU2_TR(0x45c6f2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B45c6f4:{NFSU2_TR(0x45c6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c6fa:L45c6fa:{c.instructions+=2;NFSU2_TR(0x45c6fa);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c700:{NFSU2_TR(0x45c700);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c705ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45c705:L45c705:{c.instructions+=3;NFSU2_TR(0x45c705);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B45c70b:{NFSU2_TR(0x45c70b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c70c:{NFSU2_TR(0x45c70c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c710:L45c710:{c.instructions+=6;NFSU2_TR(0x45c710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c711:{NFSU2_TR(0x45c711);
__builtin_memmove((R+24),(R+4),4);
}
B45c713:{NFSU2_TR(0x45c713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c716:{NFSU2_TR(0x45c716);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c718:{NFSU2_TR(0x45c718);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c719:{NFSU2_TR(0x45c719);
if(r1(R+518)){{goto L45c740;}}
}
B45c71b:L45c71b:{c.instructions+=3;NFSU2_TR(0x45c71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c71e:{NFSU2_TR(0x45c71e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c721:{NFSU2_TR(0x45c721);
if(r1(R+518)){{goto L45c727;}}
}
B45c723:L45c723:{c.instructions+=2;NFSU2_TR(0x45c723);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c725:{NFSU2_TR(0x45c725);
if(r1(R+518)){{goto L45c740;}}
}
B45c727:L45c727:{c.instructions+=6;NFSU2_TR(0x45c727);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c72d:{NFSU2_TR(0x45c72d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c72e:{NFSU2_TR(0x45c72e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45c734:{NFSU2_TR(0x45c734);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45c737:{NFSU2_TR(0x45c737);
__builtin_memmove((R+4),(R+28),4);
}
B45c739:{NFSU2_TR(0x45c739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c73eull));
TAIL_STATIC(0x576a10u,576);
}
B45c73e:L45c73e:{c.instructions+=1;NFSU2_TR(0x45c73e);
{goto L45c774;}
}
B45c740:L45c740:{c.instructions+=7;NFSU2_TR(0x45c740);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c743:{NFSU2_TR(0x45c743);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c749:{NFSU2_TR(0x45c749);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45c74f:{NFSU2_TR(0x45c74f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c750:{NFSU2_TR(0x45c750);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c752:{NFSU2_TR(0x45c752);
__builtin_memmove((R+4),(R+28),4);
}
B45c754:{NFSU2_TR(0x45c754);
if(r1(R+518)){{goto L45c766;}}
}
B45c756:L45c756:{c.instructions+=3;NFSU2_TR(0x45c756);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c75c:{NFSU2_TR(0x45c75c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45c75f:{NFSU2_TR(0x45c75f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c764ull));
TAIL_STATIC(0x576a10u,576);
}
B45c764:L45c764:{c.instructions+=1;NFSU2_TR(0x45c764);
{goto L45c774;}
}
B45c766:L45c766:{c.instructions+=4;NFSU2_TR(0x45c766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c769:{NFSU2_TR(0x45c769);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c76c:{NFSU2_TR(0x45c76c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45c76f:{NFSU2_TR(0x45c76f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c774ull));
TAIL_STATIC(0x576970u,576);
}
B45c774:L45c774:{c.instructions+=3;NFSU2_TR(0x45c774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45c776:{NFSU2_TR(0x45c776);
__builtin_memmove((R+4),(R+28),4);
}
B45c778:{NFSU2_TR(0x45c778);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c77bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45c77b:L45c77b:{c.instructions+=6;NFSU2_TR(0x45c77b);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45c781:{NFSU2_TR(0x45c781);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45c787:{NFSU2_TR(0x45c787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45c788:{NFSU2_TR(0x45c788);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45c78e:{NFSU2_TR(0x45c78e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c78f:{NFSU2_TR(0x45c78f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c7a0:L45c7a0:{c.instructions+=17;NFSU2_TR(0x45c7a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B45c7a3:{NFSU2_TR(0x45c7a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c7a4:{NFSU2_TR(0x45c7a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c7a5:{NFSU2_TR(0x45c7a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c7a6:{NFSU2_TR(0x45c7a6);
__builtin_memmove((R+24),(R+4),4);
}
B45c7a8:{NFSU2_TR(0x45c7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c7ab:{NFSU2_TR(0x45c7ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c7ac:{NFSU2_TR(0x45c7ac);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B45c7ae:{NFSU2_TR(0x45c7ae);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B45c7b0:{NFSU2_TR(0x45c7b0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45c7b2:{NFSU2_TR(0x45c7b2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B45c7b4:{NFSU2_TR(0x45c7b4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45c7b6:{NFSU2_TR(0x45c7b6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c7b8:{NFSU2_TR(0x45c7b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c7bc:{NFSU2_TR(0x45c7bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c7c0:{NFSU2_TR(0x45c7c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c7c4:{NFSU2_TR(0x45c7c4);
if(r1(R+518)){{goto L45c815;}}
}
B45c7c6:L45c7c6:{c.instructions+=3;NFSU2_TR(0x45c7c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45c7c9:{NFSU2_TR(0x45c7c9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c7cc:{NFSU2_TR(0x45c7cc);
if(r1(R+518)){{goto L45c7d2;}}
}
B45c7ce:L45c7ce:{c.instructions+=2;NFSU2_TR(0x45c7ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c7d0:{NFSU2_TR(0x45c7d0);
if(r1(R+518)){{goto L45c813;}}
}
B45c7d2:L45c7d2:{c.instructions+=11;NFSU2_TR(0x45c7d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c7d8:{NFSU2_TR(0x45c7d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B45c7de:{NFSU2_TR(0x45c7de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B45c7e4:{NFSU2_TR(0x45c7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45c7ea:{NFSU2_TR(0x45c7ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c7ee:{NFSU2_TR(0x45c7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45c7f4:{NFSU2_TR(0x45c7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c7fa:{NFSU2_TR(0x45c7fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c7fd:{NFSU2_TR(0x45c7fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c801:{NFSU2_TR(0x45c801);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c805:{NFSU2_TR(0x45c805);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45c84d;}}
}
B45c807:L45c807:{c.instructions+=3;NFSU2_TR(0x45c807);
w4(R+0,u32(0x1ull));
}
B45c80c:{NFSU2_TR(0x45c80c);
w4(R+28,u32(0x2710ull));
}
B45c811:{NFSU2_TR(0x45c811);
{goto L45c85a;}
}
B45c813:L45c813:{c.instructions+=1;NFSU2_TR(0x45c813);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B45c815:L45c815:{c.instructions+=10;NFSU2_TR(0x45c815);
w4(R+0,u32(0x4097ull));
}
B45c81a:{NFSU2_TR(0x45c81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c820:{NFSU2_TR(0x45c820);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c827:{NFSU2_TR(0x45c827);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c82d:{NFSU2_TR(0x45c82d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c834:{NFSU2_TR(0x45c834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c83a:{NFSU2_TR(0x45c83a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c841:{NFSU2_TR(0x45c841);
w4(R+0,u32(0x1ull));
}
B45c846:{NFSU2_TR(0x45c846);
w4(R+28,u32(0x2710ull));
}
B45c84b:{NFSU2_TR(0x45c84b);
{goto L45c85a;}
}
B45c84d:L45c84d:{c.instructions+=4;NFSU2_TR(0x45c84d);
w4(R+28,u32(0x2710ull));
}
B45c852:{NFSU2_TR(0x45c852);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c854:{NFSU2_TR(0x45c854);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c858:{NFSU2_TR(0x45c858);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45c85e;}}
}
B45c85a:L45c85a:{c.instructions+=1;NFSU2_TR(0x45c85a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c85e:L45c85e:{c.instructions+=2;NFSU2_TR(0x45c85e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c861:{NFSU2_TR(0x45c861);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45c97e;}}
}
B45c867:L45c867:{c.instructions+=4;NFSU2_TR(0x45c867);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c869:{NFSU2_TR(0x45c869);
__builtin_memmove((R+0),(R+4),4);
}
B45c86b:{NFSU2_TR(0x45c86b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c86f:{NFSU2_TR(0x45c86f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45c875;}}
}
B45c871:L45c871:{c.instructions+=1;NFSU2_TR(0x45c871);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c875:L45c875:{c.instructions+=2;NFSU2_TR(0x45c875);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c878:{NFSU2_TR(0x45c878);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45c988;}}
}
B45c87e:L45c87e:{c.instructions+=4;NFSU2_TR(0x45c87e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45c880:{NFSU2_TR(0x45c880);
__builtin_memmove((R+0),(R+8),4);
}
B45c882:{NFSU2_TR(0x45c882);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c886:{NFSU2_TR(0x45c886);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45c88c;}}
}
B45c888:L45c888:{c.instructions+=1;NFSU2_TR(0x45c888);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c88c:L45c88c:{c.instructions+=2;NFSU2_TR(0x45c88c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c88e:{NFSU2_TR(0x45c88e);
if(r1(R+518)){{goto L45c8d8;}}
}
B45c890:L45c890:{c.instructions+=5;NFSU2_TR(0x45c890);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45c894:{NFSU2_TR(0x45c894);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c89a:{NFSU2_TR(0x45c89a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B45c89e:{NFSU2_TR(0x45c89e);
{u32 ea_=u32(u32(7905204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c8a4:{NFSU2_TR(0x45c8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c8a9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45c8a9:L45c8a9:{c.instructions+=9;NFSU2_TR(0x45c8a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B45c8b0:{NFSU2_TR(0x45c8b0);
w2(R+8,u16(u32(r2(R+8))-u32(r2(R+0))));
}
B45c8b3:{NFSU2_TR(0x45c8b3);
w4(R+0,u32(r2(R+8)));
}
B45c8b6:{NFSU2_TR(0x45c8b6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B45c8b7:{NFSU2_TR(0x45c8b7);
w4(R+4,u32(0xffffull));
}
B45c8bc:{NFSU2_TR(0x45c8bc);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x45c8bc);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x45c8bc);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B45c8be:{NFSU2_TR(0x45c8be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c8bf:{NFSU2_TR(0x45c8bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c8c6:{NFSU2_TR(0x45c8c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c8cbull));
TAIL_STATIC(0x43c2b0u,43c);
}
B45c8cb:L45c8cb:{c.instructions+=3;NFSU2_TR(0x45c8cb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B45c8cf:{NFSU2_TR(0x45c8cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45c8d2:{NFSU2_TR(0x45c8d2);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45c8d8:L45c8d8:{c.instructions+=2;NFSU2_TR(0x45c8d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c8da:{NFSU2_TR(0x45c8da);
if(r1(R+518)){{goto L45c924;}}
}
B45c8dc:L45c8dc:{c.instructions+=5;NFSU2_TR(0x45c8dc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45c8e0:{NFSU2_TR(0x45c8e0);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c8e6:{NFSU2_TR(0x45c8e6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B45c8ea:{NFSU2_TR(0x45c8ea);
{u32 ea_=u32(u32(7905204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c8f0:{NFSU2_TR(0x45c8f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c8f5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45c8f5:L45c8f5:{c.instructions+=9;NFSU2_TR(0x45c8f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B45c8fc:{NFSU2_TR(0x45c8fc);
w2(R+8,u16(u32(r2(R+8))-u32(r2(R+0))));
}
B45c8ff:{NFSU2_TR(0x45c8ff);
w4(R+0,u32(r2(R+8)));
}
B45c902:{NFSU2_TR(0x45c902);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B45c903:{NFSU2_TR(0x45c903);
w4(R+4,u32(0xffffull));
}
B45c908:{NFSU2_TR(0x45c908);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x45c908);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x45c908);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B45c90a:{NFSU2_TR(0x45c90a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c90b:{NFSU2_TR(0x45c90b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c912:{NFSU2_TR(0x45c912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c917ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B45c917:L45c917:{c.instructions+=3;NFSU2_TR(0x45c917);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B45c91b:{NFSU2_TR(0x45c91b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45c91e:{NFSU2_TR(0x45c91e);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45c924:L45c924:{c.instructions+=3;NFSU2_TR(0x45c924);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45c928:{NFSU2_TR(0x45c928);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45c92a:{NFSU2_TR(0x45c92a);
if(r1(R+518)){{goto L45c974;}}
}
B45c92c:L45c92c:{c.instructions+=5;NFSU2_TR(0x45c92c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45c930:{NFSU2_TR(0x45c930);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c936:{NFSU2_TR(0x45c936);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B45c93a:{NFSU2_TR(0x45c93a);
{u32 ea_=u32(u32(7905204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45c940:{NFSU2_TR(0x45c940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c945ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45c945:L45c945:{c.instructions+=9;NFSU2_TR(0x45c945);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B45c94c:{NFSU2_TR(0x45c94c);
w2(R+8,u16(u32(r2(R+8))-u32(r2(R+0))));
}
B45c94f:{NFSU2_TR(0x45c94f);
w4(R+0,u32(r2(R+8)));
}
B45c952:{NFSU2_TR(0x45c952);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B45c953:{NFSU2_TR(0x45c953);
w4(R+4,u32(0xffffull));
}
B45c958:{NFSU2_TR(0x45c958);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x45c958);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x45c958);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B45c95a:{NFSU2_TR(0x45c95a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c95b:{NFSU2_TR(0x45c95b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c962:{NFSU2_TR(0x45c962);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45c967ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B45c967:L45c967:{c.instructions+=3;NFSU2_TR(0x45c967);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B45c96b:{NFSU2_TR(0x45c96b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45c96e:{NFSU2_TR(0x45c96e);
{u32 ea_=u32(r4(R+24)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45c974:L45c974:{c.instructions+=6;NFSU2_TR(0x45c974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45c975:{NFSU2_TR(0x45c975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45c976:{NFSU2_TR(0x45c976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45c977:{NFSU2_TR(0x45c977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45c978:{NFSU2_TR(0x45c978);
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
B45c97b:{NFSU2_TR(0x45c97b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c97e:L45c97e:{c.instructions+=2;NFSU2_TR(0x45c97e);
w4(R+0,u32(0x1ull));
}
B45c983:{NFSU2_TR(0x45c983);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45c871u);}goto L45c871;}
}
B45c988:L45c988:{c.instructions+=2;NFSU2_TR(0x45c988);
w4(R+0,u32(0x1ull));
}
B45c98d:{NFSU2_TR(0x45c98d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45c888u);}goto L45c888;}
}
B45c9a0:L45c9a0:{c.instructions+=2;NFSU2_TR(0x45c9a0);
w4(R+0,u32(0x7ed2d4ull));
}
B45c9a5:{NFSU2_TR(0x45c9a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c9b0:L45c9b0:{c.instructions+=2;NFSU2_TR(0x45c9b0);
__builtin_memmove((R+0),gp(0x7ed2d8),4);
}
B45c9b5:{NFSU2_TR(0x45c9b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45c9c0:L45c9c0:{c.instructions+=6;NFSU2_TR(0x45c9c0);
__builtin_memmove((R+0),(R+4),4);
}
B45c9c2:{NFSU2_TR(0x45c9c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45c9c3:{NFSU2_TR(0x45c9c3);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45c9c9:{NFSU2_TR(0x45c9c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B45c9cc:{NFSU2_TR(0x45c9cc);
w4(R+24,u32(0x10ull));
}
B45c9d1:{NFSU2_TR(0x45c9d1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45c9d3:L45c9d3:{c.instructions+=5;NFSU2_TR(0x45c9d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B45c9d5:{NFSU2_TR(0x45c9d5);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B45c9d8:{NFSU2_TR(0x45c9d8);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45c9d9:{NFSU2_TR(0x45c9d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45c9dd:{NFSU2_TR(0x45c9dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45c9d3u);}goto L45c9d3;}}
}
B45c9df:L45c9df:{c.instructions+=33;NFSU2_TR(0x45c9df);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45c9e2:{NFSU2_TR(0x45c9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c9e5:{NFSU2_TR(0x45c9e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c9e8:{NFSU2_TR(0x45c9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c9eb:{NFSU2_TR(0x45c9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c9ee:{NFSU2_TR(0x45c9ee);
u8 U[4];
w4(U+0,u32(0x789fb8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45c9f4:{NFSU2_TR(0x45c9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c9fa:{NFSU2_TR(0x45c9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45c9fd:{NFSU2_TR(0x45c9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca00:{NFSU2_TR(0x45ca00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca06:{NFSU2_TR(0x45ca06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca09:{NFSU2_TR(0x45ca09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca0f:{NFSU2_TR(0x45ca0f);
w1(R+8,u8(0x1ull));
}
B45ca11:{NFSU2_TR(0x45ca11);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ca17:{NFSU2_TR(0x45ca17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca1d:{NFSU2_TR(0x45ca1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca23:{NFSU2_TR(0x45ca23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca29:{NFSU2_TR(0x45ca29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca2f:{NFSU2_TR(0x45ca2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca35:{NFSU2_TR(0x45ca35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca3b:{NFSU2_TR(0x45ca3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ca41:{NFSU2_TR(0x45ca41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca47:{NFSU2_TR(0x45ca47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca4d:{NFSU2_TR(0x45ca4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca53:{NFSU2_TR(0x45ca53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca59:{NFSU2_TR(0x45ca59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca5f:{NFSU2_TR(0x45ca5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca65:{NFSU2_TR(0x45ca65);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ca6b:{NFSU2_TR(0x45ca6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca6e:{NFSU2_TR(0x45ca6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca71:{NFSU2_TR(0x45ca71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ca77:{NFSU2_TR(0x45ca77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ca78:{NFSU2_TR(0x45ca78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ca80:L45ca80:{c.instructions+=6;NFSU2_TR(0x45ca80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ca81:{NFSU2_TR(0x45ca81);
__builtin_memmove((R+24),(R+4),4);
}
B45ca83:{NFSU2_TR(0x45ca83);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ca87:{NFSU2_TR(0x45ca87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ca8a:{NFSU2_TR(0x45ca8a);
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
B45ca8d:{NFSU2_TR(0x45ca8d);
if(r1(R+518)){{goto L45caa2;}}
}
B45ca8f:L45ca8f:{c.instructions+=2;NFSU2_TR(0x45ca8f);
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
B45ca92:{NFSU2_TR(0x45ca92);
if(r1(R+518)){{goto L45caa2;}}
}
B45ca94:L45ca94:{c.instructions+=2;NFSU2_TR(0x45ca94);
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
B45ca97:{NFSU2_TR(0x45ca97);
if(r1(R+518)){{goto L45caa2;}}
}
B45ca99:L45ca99:{c.instructions+=2;NFSU2_TR(0x45ca99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45caa0:{NFSU2_TR(0x45caa0);
{goto L45caa5;}
}
B45caa2:L45caa2:{c.instructions+=1;NFSU2_TR(0x45caa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45caa5:L45caa5:{c.instructions+=4;NFSU2_TR(0x45caa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45caa8:{NFSU2_TR(0x45caa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45caab:{NFSU2_TR(0x45caab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45caad:{NFSU2_TR(0x45caad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45cab0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45cab0:L45cab0:{c.instructions+=4;NFSU2_TR(0x45cab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45cab3:{NFSU2_TR(0x45cab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cab6:{NFSU2_TR(0x45cab6);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
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
B45caba:{NFSU2_TR(0x45caba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45cadc;}}
}
B45cabc:L45cabc:{c.instructions+=8;NFSU2_TR(0x45cabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45cabf:{NFSU2_TR(0x45cabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cac5:{NFSU2_TR(0x45cac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cac8:{NFSU2_TR(0x45cac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B45cacb:{NFSU2_TR(0x45cacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f3248ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45cad2:{NFSU2_TR(0x45cad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cad8:{NFSU2_TR(0x45cad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45cad9:{NFSU2_TR(0x45cad9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cadc:L45cadc:{c.instructions+=2;NFSU2_TR(0x45cadc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45cade:{NFSU2_TR(0x45cade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45cae3ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B45cae3:L45cae3:{c.instructions+=3;NFSU2_TR(0x45cae3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45cae6:{NFSU2_TR(0x45cae6);
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
B45cae8:{NFSU2_TR(0x45cae8);
if(r1(R+518)){{goto L45caf8;}}
}
B45caea:L45caea:{c.instructions+=3;NFSU2_TR(0x45caea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w4(U+4,u32(0x7f3284ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45caf4:{NFSU2_TR(0x45caf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45caf5:{NFSU2_TR(0x45caf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45caf8:L45caf8:{c.instructions+=3;NFSU2_TR(0x45caf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w4(U+4,u32(0x7f32c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cb02:{NFSU2_TR(0x45cb02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45cb03:{NFSU2_TR(0x45cb03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cb10:L45cb10:{c.instructions+=8;NFSU2_TR(0x45cb10);
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
B45cb12:{NFSU2_TR(0x45cb12);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45cb16:{NFSU2_TR(0x45cb16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cb1c:{NFSU2_TR(0x45cb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cb22:{NFSU2_TR(0x45cb22);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45cb28:{NFSU2_TR(0x45cb28);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45cb2e:{NFSU2_TR(0x45cb2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45cb34:{NFSU2_TR(0x45cb34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cb40:L45cb40:{c.instructions+=3;NFSU2_TR(0x45cb40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cb44:{NFSU2_TR(0x45cb44);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45cb47:{NFSU2_TR(0x45cb47);
if(r1(R+518)){{goto L45cb5a;}}
}
B45cb49:L45cb49:{c.instructions+=2;NFSU2_TR(0x45cb49);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45cb4a:{NFSU2_TR(0x45cb4a);
if(r1(R+518)){{goto L45cb52;}}
}
B45cb4c:L45cb4c:{c.instructions+=2;NFSU2_TR(0x45cb4c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45cb4f:{NFSU2_TR(0x45cb4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cb52:L45cb52:{c.instructions+=2;NFSU2_TR(0x45cb52);
w4(R+0,u32(0x3ull));
}
B45cb57:{NFSU2_TR(0x45cb57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cb5a:L45cb5a:{c.instructions+=2;NFSU2_TR(0x45cb5a);
w4(R+0,u32(0x5ull));
}
B45cb5f:{NFSU2_TR(0x45cb5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cb70:L45cb70:{c.instructions+=33;NFSU2_TR(0x45cb70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cb73:{NFSU2_TR(0x45cb73);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45cb76:{NFSU2_TR(0x45cb76);
__builtin_memmove((R+8),gp(0x788610),4);
}
B45cb7c:{NFSU2_TR(0x45cb7c);
{u32 ea_=u32(u32(7898644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45cb82:{NFSU2_TR(0x45cb82);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45cb85:{NFSU2_TR(0x45cb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cb8c:{NFSU2_TR(0x45cb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cb96:{NFSU2_TR(0x45cb96);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45cb98:{NFSU2_TR(0x45cb98);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45cb9e:{NFSU2_TR(0x45cb9e);
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
B45cba0:{NFSU2_TR(0x45cba0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45cba6:{NFSU2_TR(0x45cba6);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45cba9:{NFSU2_TR(0x45cba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cbac:{NFSU2_TR(0x45cbac);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45cbb2:{NFSU2_TR(0x45cbb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cbbc:{NFSU2_TR(0x45cbbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cbc2:{NFSU2_TR(0x45cbc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cbc8:{NFSU2_TR(0x45cbc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
w4(U+4,u32(0x3e4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cbd2:{NFSU2_TR(0x45cbd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cbd8:{NFSU2_TR(0x45cbd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cbde:{NFSU2_TR(0x45cbde);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45cbe4:{NFSU2_TR(0x45cbe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cbea:{NFSU2_TR(0x45cbea);
w4(R+8,u32(0x42c80000ull));
}
B45cbef:{NFSU2_TR(0x45cbef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
w4(U+4,u32(0x3c23d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cbf9:{NFSU2_TR(0x45cbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cbff:{NFSU2_TR(0x45cbff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cc05:{NFSU2_TR(0x45cc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cc0b:{NFSU2_TR(0x45cc0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45cc11:{NFSU2_TR(0x45cc11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cc17:{NFSU2_TR(0x45cc17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cc1d:{NFSU2_TR(0x45cc1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cc20:{NFSU2_TR(0x45cc20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cc26:{NFSU2_TR(0x45cc26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cc30:L45cc30:{c.instructions+=15;NFSU2_TR(0x45cc30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cc33:{NFSU2_TR(0x45cc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45cc39:{NFSU2_TR(0x45cc39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cc3f:{NFSU2_TR(0x45cc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cc42:{NFSU2_TR(0x45cc42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cc4c:{NFSU2_TR(0x45cc4c);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45cc4f:{NFSU2_TR(0x45cc4f);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45cc52:{NFSU2_TR(0x45cc52);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45cc55:{NFSU2_TR(0x45cc55);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45cc58:{NFSU2_TR(0x45cc58);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45cc5e:{NFSU2_TR(0x45cc5e);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45cc61:{NFSU2_TR(0x45cc61);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45cc67:{NFSU2_TR(0x45cc67);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45cc69:{NFSU2_TR(0x45cc69);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45cc6c:{NFSU2_TR(0x45cc6c);
if(r1(R+514)){{goto L45cc75;}}
}
B45cc6e:L45cc6e:{c.instructions+=1;NFSU2_TR(0x45cc6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3c23d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cc75:L45cc75:{c.instructions+=16;NFSU2_TR(0x45cc75);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45cc7b:{NFSU2_TR(0x45cc7b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B45cc7d:{NFSU2_TR(0x45cc7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cc87:{NFSU2_TR(0x45cc87);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45cc8a:{NFSU2_TR(0x45cc8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45cc90:{NFSU2_TR(0x45cc90);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45cc96:{NFSU2_TR(0x45cc96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cc99:{NFSU2_TR(0x45cc99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cc9f:{NFSU2_TR(0x45cc9f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45cca1:{NFSU2_TR(0x45cca1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45cca4:{NFSU2_TR(0x45cca4);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45ccaa:{NFSU2_TR(0x45ccaa);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45ccb0:{NFSU2_TR(0x45ccb0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45ccb6:{NFSU2_TR(0x45ccb6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45ccb8:{NFSU2_TR(0x45ccb8);
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
B45ccbb:{NFSU2_TR(0x45ccbb);
if(r1(R+514)){{goto L45ccc7;}}
}
B45ccbd:L45ccbd:{c.instructions+=1;NFSU2_TR(0x45ccbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
w4(U+4,u32(0x3c23d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ccc7:L45ccc7:{c.instructions+=18;NFSU2_TR(0x45ccc7);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45cccd:{NFSU2_TR(0x45cccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ccd3:{NFSU2_TR(0x45ccd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ccd9:{NFSU2_TR(0x45ccd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ccdf:{NFSU2_TR(0x45ccdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cce5:{NFSU2_TR(0x45cce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cceb:{NFSU2_TR(0x45cceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ccee:{NFSU2_TR(0x45ccee);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45ccf1:{NFSU2_TR(0x45ccf1);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45ccf4:{NFSU2_TR(0x45ccf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
w4(U+4,u32(0x3c23d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ccfe:{NFSU2_TR(0x45ccfe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45cd00:{NFSU2_TR(0x45cd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cd06:{NFSU2_TR(0x45cd06);
{u32 ea_=u32(r4(R+4)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45cd0c:{NFSU2_TR(0x45cd0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45cd12:{NFSU2_TR(0x45cd12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cd18:{NFSU2_TR(0x45cd18);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45cd1e:{NFSU2_TR(0x45cd1e);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45cd24:{NFSU2_TR(0x45cd24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cd30:L45cd30:{c.instructions+=9;NFSU2_TR(0x45cd30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45cd31:{NFSU2_TR(0x45cd31);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45cd34:{NFSU2_TR(0x45cd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cd37:{NFSU2_TR(0x45cd37);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45cd3d:{NFSU2_TR(0x45cd3d);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45cd43:{NFSU2_TR(0x45cd43);
{u32 ea_=u32(u32(7895796u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45cd49:{NFSU2_TR(0x45cd49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45cd4b:{NFSU2_TR(0x45cd4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45cd4e:{NFSU2_TR(0x45cd4e);
if(r1(R+518)){{goto L45cdb2;}}
}
B45cd50:L45cd50:{c.instructions+=8;NFSU2_TR(0x45cd50);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45cd53:{NFSU2_TR(0x45cd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45cd56:{NFSU2_TR(0x45cd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cd59:{NFSU2_TR(0x45cd59);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45cd5f:{NFSU2_TR(0x45cd5f);
{u32 ea_=u32(u32(7898648u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45cd65:{NFSU2_TR(0x45cd65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45cd67:{NFSU2_TR(0x45cd67);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45cd6a:{NFSU2_TR(0x45cd6a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L45cdb2;}}
}
B45cd6c:L45cd6c:{c.instructions+=4;NFSU2_TR(0x45cd6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45cd6f:{NFSU2_TR(0x45cd6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B45cd75:{NFSU2_TR(0x45cd75);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45cd77:{NFSU2_TR(0x45cd77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45cdb2;}}
}
B45cd79:L45cd79:{c.instructions+=3;NFSU2_TR(0x45cd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cd7f:{NFSU2_TR(0x45cd7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45cd81:{NFSU2_TR(0x45cd81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45cdb2;}}
}
B45cd83:L45cd83:{c.instructions+=3;NFSU2_TR(0x45cd83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45cd86:{NFSU2_TR(0x45cd86);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45cd88:{NFSU2_TR(0x45cd88);
if(r1(R+518)){{goto L45cd93;}}
}
B45cd8a:L45cd8a:{c.instructions+=1;NFSU2_TR(0x45cd8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45cd8full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45c090u);}goto L45c090;}
}
B45cd8f:L45cd8f:{c.instructions+=2;NFSU2_TR(0x45cd8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45cd91:{NFSU2_TR(0x45cd91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45cdb2;}}
}
B45cd93:L45cd93:{c.instructions+=2;NFSU2_TR(0x45cd93);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45cd97:{NFSU2_TR(0x45cd97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45cdb2;}}
}
B45cd99:L45cd99:{c.instructions+=2;NFSU2_TR(0x45cd99);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45cda0:{NFSU2_TR(0x45cda0);
if(r1(R+518)){{goto L45cdb2;}}
}
B45cda2:L45cda2:{c.instructions+=5;NFSU2_TR(0x45cda2);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45cda5:{NFSU2_TR(0x45cda5);
{u32 ea_=u32(u32(7905244u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45cdab:{NFSU2_TR(0x45cdab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45cdad:{NFSU2_TR(0x45cdad);
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
B45cdb0:{NFSU2_TR(0x45cdb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45cdb6;}}
}
B45cdb2:L45cdb2:{c.instructions+=3;NFSU2_TR(0x45cdb2);
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
B45cdb4:{NFSU2_TR(0x45cdb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45cdb5:{NFSU2_TR(0x45cdb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cdb6:L45cdb6:{c.instructions+=3;NFSU2_TR(0x45cdb6);
w1(R+0,u8(0x1ull));
}
B45cdb8:{NFSU2_TR(0x45cdb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45cdb9:{NFSU2_TR(0x45cdb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cdc0:L45cdc0:{c.instructions+=3;NFSU2_TR(0x45cdc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cdc6:{NFSU2_TR(0x45cdc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45cdc8:{NFSU2_TR(0x45cdc8);
if(r1(R+518)){{goto L45cdcd;}}
}
B45cdca:L45cdca:{c.instructions+=2;NFSU2_TR(0x45cdca);
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
B45cdcc:{NFSU2_TR(0x45cdcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cdcd:L45cdcd:{c.instructions+=3;NFSU2_TR(0x45cdcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cdd0:{NFSU2_TR(0x45cdd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45cdd2:{NFSU2_TR(0x45cdd2);
if(r1(R+518)){{goto L45cde0;}}
}
B45cdd4:L45cdd4:{c.instructions+=3;NFSU2_TR(0x45cdd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cdd7:{NFSU2_TR(0x45cdd7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45cdda:{NFSU2_TR(0x45cdda);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45cdcau);}goto L45cdca;}}
}
B45cddc:L45cddc:{c.instructions+=2;NFSU2_TR(0x45cddc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45cdde:{NFSU2_TR(0x45cdde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45cdcau);}goto L45cdca;}}
}
B45cde0:L45cde0:{c.instructions+=6;NFSU2_TR(0x45cde0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45cde3:{NFSU2_TR(0x45cde3);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45cde6:{NFSU2_TR(0x45cde6);
{u32 ea_=u32(u32(7905248u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45cdec:{NFSU2_TR(0x45cdec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45cdee:{NFSU2_TR(0x45cdee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45cdf1:{NFSU2_TR(0x45cdf1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45cdcau);}goto L45cdca;}}
}
B45cdf3:L45cdf3:{c.instructions+=3;NFSU2_TR(0x45cdf3);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B45cdf7:{NFSU2_TR(0x45cdf7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B45cdfa:{NFSU2_TR(0x45cdfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ce00:L45ce00:{c.instructions+=2;NFSU2_TR(0x45ce00);
w4(R+0,u32(0x7ed2e4ull));
}
B45ce05:{NFSU2_TR(0x45ce05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ce10:L45ce10:{c.instructions+=2;NFSU2_TR(0x45ce10);
__builtin_memmove((R+0),gp(0x7ed2e8),4);
}
B45ce15:{NFSU2_TR(0x45ce15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ce20:L45ce20:{c.instructions+=16;NFSU2_TR(0x45ce20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce22:{NFSU2_TR(0x45ce22);
u8 U[4];
w4(U+0,u32(0x7723a6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce27:{NFSU2_TR(0x45ce27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ce2d:{NFSU2_TR(0x45ce2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce2e:{NFSU2_TR(0x45ce2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ce35:{NFSU2_TR(0x45ce35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce36:{NFSU2_TR(0x45ce36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce37:{NFSU2_TR(0x45ce37);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce38:{NFSU2_TR(0x45ce38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce39:{NFSU2_TR(0x45ce39);
__builtin_memmove((R+24),(R+4),4);
}
B45ce3b:{NFSU2_TR(0x45ce3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce3c:{NFSU2_TR(0x45ce3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ce40:{NFSU2_TR(0x45ce40);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45ce46:{NFSU2_TR(0x45ce46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B45ce49:{NFSU2_TR(0x45ce49);
w4(R+4,u32(0x10ull));
}
B45ce4e:{NFSU2_TR(0x45ce4e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45ce50:L45ce50:{c.instructions+=5;NFSU2_TR(0x45ce50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B45ce52:{NFSU2_TR(0x45ce52);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B45ce55:{NFSU2_TR(0x45ce55);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45ce56:{NFSU2_TR(0x45ce56);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45ce5a:{NFSU2_TR(0x45ce5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45ce50u);}goto L45ce50;}}
}
B45ce5c:L45ce5c:{c.instructions+=12;NFSU2_TR(0x45ce5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45ce5f:{NFSU2_TR(0x45ce5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ce62:{NFSU2_TR(0x45ce62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ce65:{NFSU2_TR(0x45ce65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ce68:{NFSU2_TR(0x45ce68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ce6b:{NFSU2_TR(0x45ce6b);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce6d:{NFSU2_TR(0x45ce6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45ce73:{NFSU2_TR(0x45ce73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce74:{NFSU2_TR(0x45ce74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45ce7a:{NFSU2_TR(0x45ce7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ce7e:{NFSU2_TR(0x45ce7e);
u8 U[4];
w4(U+0,u32(0x789fe4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45ce84:{NFSU2_TR(0x45ce84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ce89ull));
TAIL_STATIC(0x576770u,576);
}
B45ce89:L45ce89:{c.instructions+=4;NFSU2_TR(0x45ce89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45ce8f:{NFSU2_TR(0x45ce8f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce91:{NFSU2_TR(0x45ce91);
__builtin_memmove((R+4),(R+20),4);
}
B45ce93:{NFSU2_TR(0x45ce93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ce98ull));
TAIL_STATIC(0x579f20u,579);
}
B45ce98:L45ce98:{c.instructions+=4;NFSU2_TR(0x45ce98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ce99:{NFSU2_TR(0x45ce99);
__builtin_memmove((R+4),(R+20),4);
}
B45ce9b:{NFSU2_TR(0x45ce9b);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45cea0:{NFSU2_TR(0x45cea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45cea5ull));
TAIL_STATIC(0x576a10u,576);
}
B45cea5:L45cea5:{c.instructions+=30;NFSU2_TR(0x45cea5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45cea9:{NFSU2_TR(0x45cea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ceaf:{NFSU2_TR(0x45ceaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ceb5:{NFSU2_TR(0x45ceb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cebb:{NFSU2_TR(0x45cebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cec1:{NFSU2_TR(0x45cec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cec7:{NFSU2_TR(0x45cec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cecd:{NFSU2_TR(0x45cecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ced0:{NFSU2_TR(0x45ced0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w4(U+4,u32(0x46bb8000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ceda:{NFSU2_TR(0x45ceda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B45cedc:{NFSU2_TR(0x45cedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cedf:{NFSU2_TR(0x45cedf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cee5:{NFSU2_TR(0x45cee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ceeb:{NFSU2_TR(0x45ceeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cef1:{NFSU2_TR(0x45cef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cef7:{NFSU2_TR(0x45cef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cefd:{NFSU2_TR(0x45cefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cf03:{NFSU2_TR(0x45cf03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cf09:{NFSU2_TR(0x45cf09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cf0f:{NFSU2_TR(0x45cf0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cf15:{NFSU2_TR(0x45cf15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cf1b:{NFSU2_TR(0x45cf1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45cf1c:{NFSU2_TR(0x45cf1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc2ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45cf23:{NFSU2_TR(0x45cf23);
__builtin_memmove((R+0),(R+24),4);
}
B45cf25:{NFSU2_TR(0x45cf25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45cf26:{NFSU2_TR(0x45cf26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45cf27:{NFSU2_TR(0x45cf27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45cf28:{NFSU2_TR(0x45cf28);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cf2f:{NFSU2_TR(0x45cf2f);
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
B45cf32:{NFSU2_TR(0x45cf32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cf40:L45cf40:{c.instructions+=13;NFSU2_TR(0x45cf40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45cf42:{NFSU2_TR(0x45cf42);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45cf47:{NFSU2_TR(0x45cf47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cf4d:{NFSU2_TR(0x45cf4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45cf4e:{NFSU2_TR(0x45cf4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cf55:{NFSU2_TR(0x45cf55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45cf56:{NFSU2_TR(0x45cf56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45cf57:{NFSU2_TR(0x45cf57);
__builtin_memmove((R+24),(R+4),4);
}
B45cf59:{NFSU2_TR(0x45cf59);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cf5d:{NFSU2_TR(0x45cf5d);
u8 U[4];
w4(U+0,u32(0x789fe4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45cf63:{NFSU2_TR(0x45cf63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45cf69:{NFSU2_TR(0x45cf69);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cf71:{NFSU2_TR(0x45cf71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45cf76ull));
TAIL_STATIC(0x5768e0u,576);
}
B45cf76:L45cf76:{c.instructions+=6;NFSU2_TR(0x45cf76);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45cf7a:{NFSU2_TR(0x45cf7a);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45cf80:{NFSU2_TR(0x45cf80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45cf81:{NFSU2_TR(0x45cf81);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cf88:{NFSU2_TR(0x45cf88);
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
B45cf8b:{NFSU2_TR(0x45cf8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45cf90:L45cf90:{c.instructions+=7;NFSU2_TR(0x45cf90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45cf91:{NFSU2_TR(0x45cf91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cf95:{NFSU2_TR(0x45cf95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45cf96:{NFSU2_TR(0x45cf96);
__builtin_memmove((R+24),(R+4),4);
}
B45cf98:{NFSU2_TR(0x45cf98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45cf9b:{NFSU2_TR(0x45cf9b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B45cf9e:{NFSU2_TR(0x45cf9e);
if(r1(R+518)){{goto L45cfb3;}}
}
B45cfa0:L45cfa0:{c.instructions+=2;NFSU2_TR(0x45cfa0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B45cfa3:{NFSU2_TR(0x45cfa3);
if(r1(R+518)){{goto L45cfb3;}}
}
B45cfa5:L45cfa5:{c.instructions+=2;NFSU2_TR(0x45cfa5);
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
B45cfa8:{NFSU2_TR(0x45cfa8);
if(r1(R+518)){{goto L45cfb3;}}
}
B45cfaa:L45cfaa:{c.instructions+=2;NFSU2_TR(0x45cfaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cfb1:{NFSU2_TR(0x45cfb1);
{goto L45cfb6;}
}
B45cfb3:L45cfb3:{c.instructions+=1;NFSU2_TR(0x45cfb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cfb6:L45cfb6:{c.instructions+=4;NFSU2_TR(0x45cfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45cfb9:{NFSU2_TR(0x45cfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cfbc:{NFSU2_TR(0x45cfbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45cfbe:{NFSU2_TR(0x45cfbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45cfc1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45cfc1:L45cfc1:{c.instructions+=14;NFSU2_TR(0x45cfc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cfc4:{NFSU2_TR(0x45cfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45cfc7:{NFSU2_TR(0x45cfc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45cfcd:{NFSU2_TR(0x45cfcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45cfd0:{NFSU2_TR(0x45cfd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45cfd3:{NFSU2_TR(0x45cfd3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cfd7:{NFSU2_TR(0x45cfd7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45cfdb:{NFSU2_TR(0x45cfdb);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45cfdd:{NFSU2_TR(0x45cfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45cfe7:{NFSU2_TR(0x45cfe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45cfeb:{NFSU2_TR(0x45cfeb);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45cff1:{NFSU2_TR(0x45cff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45cff7:{NFSU2_TR(0x45cff7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45cffb:{NFSU2_TR(0x45cffb);
w4(R+8,u32(0x3f800000ull));
TAIL_STATIC(0x45d000u,45d);
}
XIT:NFSU2_TR_EXIT(0x45c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
