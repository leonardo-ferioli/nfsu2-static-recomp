#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_77d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x77c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x77c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_77c(u8* __restrict R,Cpu& c);
u32 page_77c(Cpu& c){return body_77c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_77c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x77c001:goto L77c001;
case 0x77c006:c.instructions+=11;goto B77c006;
case 0x77c00b:c.instructions+=10;goto B77c00b;
case 0x77c010:c.instructions+=9;goto B77c010;
case 0x77c016:c.instructions+=8;goto B77c016;
case 0x77c01c:c.instructions+=7;goto B77c01c;
case 0x77c022:c.instructions+=6;goto B77c022;
case 0x77c028:c.instructions+=5;goto B77c028;
case 0x77c02a:c.instructions+=4;goto B77c02a;
case 0x77c030:c.instructions+=3;goto B77c030;
case 0x77c032:c.instructions+=2;goto B77c032;
case 0x77c035:c.instructions+=1;goto B77c035;
case 0x77c037:goto L77c037;
case 0x77c03d:c.instructions+=2;goto B77c03d;
case 0x77c043:c.instructions+=1;goto B77c043;
case 0x77c049:goto L77c049;
case 0x77c04f:c.instructions+=3;goto B77c04f;
case 0x77c054:c.instructions+=2;goto B77c054;
case 0x77c05a:c.instructions+=1;goto B77c05a;
case 0x77c05f:goto L77c05f;
case 0x77c060:c.instructions+=1;goto B77c060;
case 0x77c070:goto L77c070;
case 0x77c075:c.instructions+=1;goto B77c075;
case 0x77c07a:goto L77c07a;
case 0x77c07b:c.instructions+=1;goto B77c07b;
case 0x77c080:goto L77c080;
case 0x77c085:c.instructions+=1;goto B77c085;
case 0x77c08a:goto L77c08a;
case 0x77c08b:c.instructions+=1;goto B77c08b;
case 0x77c090:goto L77c090;
case 0x77c095:c.instructions+=1;goto B77c095;
case 0x77c09a:goto L77c09a;
case 0x77c09b:c.instructions+=1;goto B77c09b;
case 0x77c0a0:goto L77c0a0;
case 0x77c0a5:c.instructions+=1;goto B77c0a5;
case 0x77c0aa:goto L77c0aa;
case 0x77c0ab:c.instructions+=1;goto B77c0ab;
case 0x77c0b0:goto L77c0b0;
case 0x77c0b5:c.instructions+=1;goto B77c0b5;
case 0x77c0ba:goto L77c0ba;
case 0x77c0bb:c.instructions+=1;goto B77c0bb;
case 0x77c0c0:goto L77c0c0;
case 0x77c0c5:c.instructions+=1;goto B77c0c5;
case 0x77c0ca:goto L77c0ca;
case 0x77c0cf:c.instructions+=1;goto B77c0cf;
case 0x77c0d4:goto L77c0d4;
case 0x77c0d5:c.instructions+=1;goto B77c0d5;
case 0x77c0e0:goto L77c0e0;
case 0x77c0e1:c.instructions+=4;goto B77c0e1;
case 0x77c0e2:c.instructions+=3;goto B77c0e2;
case 0x77c0e7:c.instructions+=2;goto B77c0e7;
case 0x77c0ec:c.instructions+=1;goto B77c0ec;
case 0x77c0f0:goto L77c0f0;
case 0x77c0f2:c.instructions+=1;goto B77c0f2;
case 0x77c0f7:goto L77c0f7;
case 0x77c0fa:c.instructions+=2;goto B77c0fa;
case 0x77c0fb:c.instructions+=1;goto B77c0fb;
case 0x77c0fd:goto L77c0fd;
case 0x77c0fe:c.instructions+=2;goto B77c0fe;
case 0x77c0ff:c.instructions+=1;goto B77c0ff;
case 0x77c100:goto L77c100;
case 0x77c105:c.instructions+=2;goto B77c105;
case 0x77c10a:c.instructions+=1;goto B77c10a;
case 0x77c10f:goto L77c10f;
case 0x77c114:c.instructions+=1;goto B77c114;
case 0x77c119:goto L77c119;
case 0x77c11a:c.instructions+=1;goto B77c11a;
case 0x77c120:goto L77c120;
case 0x77c125:c.instructions+=2;goto B77c125;
case 0x77c12a:c.instructions+=1;goto B77c12a;
case 0x77c12f:goto L77c12f;
case 0x77c134:c.instructions+=1;goto B77c134;
case 0x77c139:goto L77c139;
case 0x77c13a:c.instructions+=1;goto B77c13a;
case 0x77c140:goto L77c140;
case 0x77c145:c.instructions+=1;goto B77c145;
case 0x77c150:goto L77c150;
case 0x77c155:c.instructions+=1;goto B77c155;
case 0x77c160:goto L77c160;
case 0x77c165:c.instructions+=1;goto B77c165;
case 0x77c170:goto L77c170;
case 0x77c175:c.instructions+=1;goto B77c175;
case 0x77c180:goto L77c180;
case 0x77c185:c.instructions+=1;goto B77c185;
case 0x77c190:goto L77c190;
case 0x77c195:c.instructions+=1;goto B77c195;
case 0x77c1a0:goto L77c1a0;
case 0x77c1a5:c.instructions+=1;goto B77c1a5;
case 0x77c1b0:goto L77c1b0;
case 0x77c1b5:c.instructions+=1;goto B77c1b5;
case 0x77c1c0:goto L77c1c0;
case 0x77c1c5:c.instructions+=1;goto B77c1c5;
case 0x77c1d0:goto L77c1d0;
case 0x77c1d5:c.instructions+=1;goto B77c1d5;
case 0x77c1e0:goto L77c1e0;
case 0x77c1e5:c.instructions+=1;goto B77c1e5;
case 0x77c1f0:goto L77c1f0;
case 0x77c1f5:c.instructions+=1;goto B77c1f5;
case 0x77c200:goto L77c200;
case 0x77c205:c.instructions+=1;goto B77c205;
case 0x77c210:goto L77c210;
case 0x77c215:c.instructions+=1;goto B77c215;
case 0x77c220:goto L77c220;
case 0x77c225:c.instructions+=53;goto B77c225;
case 0x77c22b:c.instructions+=52;goto B77c22b;
case 0x77c22d:c.instructions+=51;goto B77c22d;
case 0x77c232:c.instructions+=50;goto B77c232;
case 0x77c238:c.instructions+=49;goto B77c238;
case 0x77c23e:c.instructions+=48;goto B77c23e;
case 0x77c240:c.instructions+=47;goto B77c240;
case 0x77c246:c.instructions+=46;goto B77c246;
case 0x77c248:c.instructions+=45;goto B77c248;
case 0x77c24d:c.instructions+=44;goto B77c24d;
case 0x77c253:c.instructions+=43;goto B77c253;
case 0x77c255:c.instructions+=42;goto B77c255;
case 0x77c257:c.instructions+=41;goto B77c257;
case 0x77c25c:c.instructions+=40;goto B77c25c;
case 0x77c261:c.instructions+=39;goto B77c261;
case 0x77c263:c.instructions+=38;goto B77c263;
case 0x77c269:c.instructions+=37;goto B77c269;
case 0x77c26f:c.instructions+=36;goto B77c26f;
case 0x77c275:c.instructions+=35;goto B77c275;
case 0x77c27b:c.instructions+=34;goto B77c27b;
case 0x77c281:c.instructions+=33;goto B77c281;
case 0x77c287:c.instructions+=32;goto B77c287;
case 0x77c289:c.instructions+=31;goto B77c289;
case 0x77c293:c.instructions+=30;goto B77c293;
case 0x77c29d:c.instructions+=29;goto B77c29d;
case 0x77c2a7:c.instructions+=28;goto B77c2a7;
case 0x77c2b1:c.instructions+=27;goto B77c2b1;
case 0x77c2bb:c.instructions+=26;goto B77c2bb;
case 0x77c2c5:c.instructions+=25;goto B77c2c5;
case 0x77c2cf:c.instructions+=24;goto B77c2cf;
case 0x77c2d9:c.instructions+=23;goto B77c2d9;
case 0x77c2e3:c.instructions+=22;goto B77c2e3;
case 0x77c2ed:c.instructions+=21;goto B77c2ed;
case 0x77c2f7:c.instructions+=20;goto B77c2f7;
case 0x77c301:c.instructions+=19;goto B77c301;
case 0x77c307:c.instructions+=18;goto B77c307;
case 0x77c311:c.instructions+=17;goto B77c311;
case 0x77c31b:c.instructions+=16;goto B77c31b;
case 0x77c325:c.instructions+=15;goto B77c325;
case 0x77c32f:c.instructions+=14;goto B77c32f;
case 0x77c339:c.instructions+=13;goto B77c339;
case 0x77c343:c.instructions+=12;goto B77c343;
case 0x77c348:c.instructions+=11;goto B77c348;
case 0x77c34d:c.instructions+=10;goto B77c34d;
case 0x77c352:c.instructions+=9;goto B77c352;
case 0x77c357:c.instructions+=8;goto B77c357;
case 0x77c35c:c.instructions+=7;goto B77c35c;
case 0x77c362:c.instructions+=6;goto B77c362;
case 0x77c367:c.instructions+=5;goto B77c367;
case 0x77c36d:c.instructions+=4;goto B77c36d;
case 0x77c372:c.instructions+=3;goto B77c372;
case 0x77c377:c.instructions+=2;goto B77c377;
case 0x77c37c:c.instructions+=1;goto B77c37c;
case 0x77c380:goto L77c380;
case 0x77c385:c.instructions+=8;goto B77c385;
case 0x77c38a:c.instructions+=7;goto B77c38a;
case 0x77c390:c.instructions+=6;goto B77c390;
case 0x77c396:c.instructions+=5;goto B77c396;
case 0x77c398:c.instructions+=4;goto B77c398;
case 0x77c39e:c.instructions+=3;goto B77c39e;
case 0x77c3a0:c.instructions+=2;goto B77c3a0;
case 0x77c3a3:c.instructions+=1;goto B77c3a3;
case 0x77c3a5:goto L77c3a5;
case 0x77c3ab:c.instructions+=2;goto B77c3ab;
case 0x77c3b1:c.instructions+=1;goto B77c3b1;
case 0x77c3b7:goto L77c3b7;
case 0x77c3bc:c.instructions+=1;goto B77c3bc;
case 0x77c3c1:goto L77c3c1;
case 0x77c3c2:c.instructions+=1;goto B77c3c2;
case 0x77c3d0:goto L77c3d0;
case 0x77c3d6:c.instructions+=5;goto B77c3d6;
case 0x77c3d8:c.instructions+=4;goto B77c3d8;
case 0x77c3de:c.instructions+=3;goto B77c3de;
case 0x77c3e0:c.instructions+=2;goto B77c3e0;
case 0x77c3e3:c.instructions+=1;goto B77c3e3;
case 0x77c3e5:goto L77c3e5;
case 0x77c3ef:goto L77c3ef;
case 0x77c3f4:c.instructions+=1;goto B77c3f4;
case 0x77c3f9:goto L77c3f9;
case 0x77c3fa:c.instructions+=1;goto B77c3fa;
case 0x77c400:goto L77c400;
case 0x77c406:c.instructions+=5;goto B77c406;
case 0x77c408:c.instructions+=4;goto B77c408;
case 0x77c40e:c.instructions+=3;goto B77c40e;
case 0x77c410:c.instructions+=2;goto B77c410;
case 0x77c413:c.instructions+=1;goto B77c413;
case 0x77c415:goto L77c415;
case 0x77c41f:goto L77c41f;
case 0x77c424:c.instructions+=1;goto B77c424;
case 0x77c429:goto L77c429;
case 0x77c42a:c.instructions+=1;goto B77c42a;
case 0x77c430:goto L77c430;
case 0x77c436:c.instructions+=5;goto B77c436;
case 0x77c438:c.instructions+=4;goto B77c438;
case 0x77c43e:c.instructions+=3;goto B77c43e;
case 0x77c440:c.instructions+=2;goto B77c440;
case 0x77c443:c.instructions+=1;goto B77c443;
case 0x77c445:goto L77c445;
case 0x77c44f:goto L77c44f;
case 0x77c454:c.instructions+=1;goto B77c454;
case 0x77c459:goto L77c459;
case 0x77c45a:c.instructions+=1;goto B77c45a;
case 0x77c460:goto L77c460;
case 0x77c462:c.instructions+=3;goto B77c462;
case 0x77c467:c.instructions+=2;goto B77c467;
case 0x77c46c:c.instructions+=1;goto B77c46c;
case 0x77c471:goto L77c471;
case 0x77c480:goto L77c480;
case 0x77c486:c.instructions+=9;goto B77c486;
case 0x77c48b:c.instructions+=8;goto B77c48b;
case 0x77c491:c.instructions+=7;goto B77c491;
case 0x77c493:c.instructions+=6;goto B77c493;
case 0x77c499:c.instructions+=5;goto B77c499;
case 0x77c49e:c.instructions+=4;goto B77c49e;
case 0x77c4a4:c.instructions+=3;goto B77c4a4;
case 0x77c4a6:c.instructions+=2;goto B77c4a6;
case 0x77c4a9:c.instructions+=1;goto B77c4a9;
case 0x77c4ab:goto L77c4ab;
case 0x77c4b5:goto L77c4b5;
case 0x77c4bb:c.instructions+=3;goto B77c4bb;
case 0x77c4c0:c.instructions+=2;goto B77c4c0;
case 0x77c4c6:c.instructions+=1;goto B77c4c6;
case 0x77c4cb:goto L77c4cb;
case 0x77c4cc:c.instructions+=1;goto B77c4cc;
case 0x77c4d0:goto L77c4d0;
case 0x77c4d5:c.instructions+=7;goto B77c4d5;
case 0x77c4da:c.instructions+=6;goto B77c4da;
case 0x77c4e0:c.instructions+=5;goto B77c4e0;
case 0x77c4e2:c.instructions+=4;goto B77c4e2;
case 0x77c4e8:c.instructions+=3;goto B77c4e8;
case 0x77c4ea:c.instructions+=2;goto B77c4ea;
case 0x77c4ed:c.instructions+=1;goto B77c4ed;
case 0x77c4ef:goto L77c4ef;
case 0x77c4f5:c.instructions+=2;goto B77c4f5;
case 0x77c4fb:c.instructions+=1;goto B77c4fb;
case 0x77c501:goto L77c501;
case 0x77c506:c.instructions+=1;goto B77c506;
case 0x77c50b:goto L77c50b;
case 0x77c50c:c.instructions+=1;goto B77c50c;
case 0x77c510:goto L77c510;
case 0x77c515:c.instructions+=2;goto B77c515;
case 0x77c51a:c.instructions+=1;goto B77c51a;
case 0x77c51f:goto L77c51f;
case 0x77c524:c.instructions+=5;goto B77c524;
case 0x77c529:c.instructions+=4;goto B77c529;
case 0x77c533:c.instructions+=3;goto B77c533;
case 0x77c53d:c.instructions+=2;goto B77c53d;
case 0x77c547:c.instructions+=1;goto B77c547;
case 0x77c54c:goto L77c54c;
case 0x77c551:c.instructions+=5;goto B77c551;
case 0x77c556:c.instructions+=4;goto B77c556;
case 0x77c560:c.instructions+=3;goto B77c560;
case 0x77c56a:c.instructions+=2;goto B77c56a;
case 0x77c574:c.instructions+=1;goto B77c574;
case 0x77c579:goto L77c579;
case 0x77c57e:c.instructions+=5;goto B77c57e;
case 0x77c583:c.instructions+=4;goto B77c583;
case 0x77c58d:c.instructions+=3;goto B77c58d;
case 0x77c597:c.instructions+=2;goto B77c597;
case 0x77c5a1:c.instructions+=1;goto B77c5a1;
case 0x77c5a6:goto L77c5a6;
case 0x77c5a9:c.instructions+=1;goto B77c5a9;
case 0x77c5b0:goto L77c5b0;
case 0x77c5b6:c.instructions+=10;goto B77c5b6;
case 0x77c5bb:c.instructions+=9;goto B77c5bb;
case 0x77c5c1:c.instructions+=8;goto B77c5c1;
case 0x77c5c7:c.instructions+=7;goto B77c5c7;
case 0x77c5cc:c.instructions+=6;goto B77c5cc;
case 0x77c5d2:c.instructions+=5;goto B77c5d2;
case 0x77c5d4:c.instructions+=4;goto B77c5d4;
case 0x77c5da:c.instructions+=3;goto B77c5da;
case 0x77c5dc:c.instructions+=2;goto B77c5dc;
case 0x77c5df:c.instructions+=1;goto B77c5df;
case 0x77c5e1:goto L77c5e1;
case 0x77c5e7:c.instructions+=2;goto B77c5e7;
case 0x77c5ed:c.instructions+=1;goto B77c5ed;
case 0x77c5f3:goto L77c5f3;
case 0x77c5f8:c.instructions+=1;goto B77c5f8;
case 0x77c5fd:goto L77c5fd;
case 0x77c5fe:c.instructions+=1;goto B77c5fe;
case 0x77c600:goto L77c600;
case 0x77c606:c.instructions+=5;goto B77c606;
case 0x77c608:c.instructions+=4;goto B77c608;
case 0x77c60e:c.instructions+=3;goto B77c60e;
case 0x77c610:c.instructions+=2;goto B77c610;
case 0x77c613:c.instructions+=1;goto B77c613;
case 0x77c615:goto L77c615;
case 0x77c61f:goto L77c61f;
case 0x77c624:c.instructions+=1;goto B77c624;
case 0x77c629:goto L77c629;
case 0x77c62a:c.instructions+=1;goto B77c62a;
case 0x77c630:goto L77c630;
case 0x77c635:c.instructions+=2;goto B77c635;
case 0x77c63a:c.instructions+=1;goto B77c63a;
case 0x77c63f:goto L77c63f;
case 0x77c644:c.instructions+=1;goto B77c644;
case 0x77c649:goto L77c649;
case 0x77c64a:c.instructions+=1;goto B77c64a;
case 0x77c650:goto L77c650;
case 0x77c655:c.instructions+=1;goto B77c655;
case 0x77c65a:goto L77c65a;
case 0x77c65f:c.instructions+=1;goto B77c65f;
case 0x77c664:goto L77c664;
case 0x77c665:c.instructions+=1;goto B77c665;
case 0x77c670:goto L77c670;
case 0x77c675:c.instructions+=1;goto B77c675;
case 0x77c67a:goto L77c67a;
case 0x77c67f:c.instructions+=1;goto B77c67f;
case 0x77c684:goto L77c684;
case 0x77c685:c.instructions+=1;goto B77c685;
case 0x77c690:goto L77c690;
case 0x77c695:c.instructions+=1;goto B77c695;
case 0x77c69a:goto L77c69a;
case 0x77c69f:c.instructions+=1;goto B77c69f;
case 0x77c6a4:goto L77c6a4;
case 0x77c6a5:c.instructions+=1;goto B77c6a5;
case 0x77c6b0:goto L77c6b0;
case 0x77c6b5:c.instructions+=1;goto B77c6b5;
case 0x77c6c0:goto L77c6c0;
case 0x77c6c5:c.instructions+=1;goto B77c6c5;
case 0x77c6d0:goto L77c6d0;
case 0x77c6d5:c.instructions+=1;goto B77c6d5;
case 0x77c6e0:goto L77c6e0;
case 0x77c6e5:c.instructions+=1;goto B77c6e5;
case 0x77c6f0:goto L77c6f0;
case 0x77c6f5:c.instructions+=1;goto B77c6f5;
case 0x77c700:goto L77c700;
case 0x77c705:c.instructions+=1;goto B77c705;
case 0x77c710:goto L77c710;
case 0x77c715:c.instructions+=1;goto B77c715;
case 0x77c720:goto L77c720;
case 0x77c725:c.instructions+=1;goto B77c725;
case 0x77c730:goto L77c730;
case 0x77c735:c.instructions+=1;goto B77c735;
case 0x77c740:goto L77c740;
case 0x77c745:c.instructions+=1;goto B77c745;
case 0x77c750:goto L77c750;
case 0x77c755:c.instructions+=1;goto B77c755;
case 0x77c760:goto L77c760;
case 0x77c765:c.instructions+=1;goto B77c765;
case 0x77c770:goto L77c770;
case 0x77c775:c.instructions+=1;goto B77c775;
case 0x77c780:goto L77c780;
case 0x77c785:c.instructions+=1;goto B77c785;
case 0x77c790:goto L77c790;
case 0x77c795:c.instructions+=1;goto B77c795;
case 0x77c7a0:goto L77c7a0;
case 0x77c7a5:c.instructions+=1;goto B77c7a5;
case 0x77c7b0:goto L77c7b0;
case 0x77c7b5:c.instructions+=1;goto B77c7b5;
case 0x77c7c0:goto L77c7c0;
case 0x77c7c5:c.instructions+=1;goto B77c7c5;
case 0x77c7d0:goto L77c7d0;
case 0x77c7d5:c.instructions+=1;goto B77c7d5;
case 0x77c7e0:goto L77c7e0;
case 0x77c7e5:c.instructions+=1;goto B77c7e5;
case 0x77c7f0:goto L77c7f0;
case 0x77c7f5:c.instructions+=1;goto B77c7f5;
case 0x77c800:goto L77c800;
case 0x77c805:c.instructions+=1;goto B77c805;
case 0x77c810:goto L77c810;
case 0x77c815:c.instructions+=1;goto B77c815;
case 0x77c820:goto L77c820;
case 0x77c825:c.instructions+=1;goto B77c825;
case 0x77c830:goto L77c830;
case 0x77c835:c.instructions+=1;goto B77c835;
case 0x77c840:goto L77c840;
case 0x77c845:c.instructions+=1;goto B77c845;
case 0x77c850:goto L77c850;
case 0x77c855:c.instructions+=1;goto B77c855;
case 0x77c860:goto L77c860;
case 0x77c865:c.instructions+=1;goto B77c865;
case 0x77c870:goto L77c870;
case 0x77c875:c.instructions+=1;goto B77c875;
case 0x77c880:goto L77c880;
case 0x77c886:c.instructions+=3;goto B77c886;
case 0x77c88c:c.instructions+=2;goto B77c88c;
case 0x77c892:c.instructions+=1;goto B77c892;
case 0x77c8a0:goto L77c8a0;
case 0x77c8a5:c.instructions+=1;goto B77c8a5;
case 0x77c8aa:goto L77c8aa;
case 0x77c8af:c.instructions+=1;goto B77c8af;
case 0x77c8b4:goto L77c8b4;
case 0x77c8b5:c.instructions+=1;goto B77c8b5;
case 0x77c8c0:goto L77c8c0;
case 0x77c8c5:c.instructions+=1;goto B77c8c5;
case 0x77c8ca:goto L77c8ca;
case 0x77c8cf:c.instructions+=1;goto B77c8cf;
case 0x77c8d4:goto L77c8d4;
case 0x77c8d5:c.instructions+=1;goto B77c8d5;
case 0x77c8e0:goto L77c8e0;
case 0x77c8e5:c.instructions+=1;goto B77c8e5;
case 0x77c8ea:goto L77c8ea;
case 0x77c8ef:c.instructions+=1;goto B77c8ef;
case 0x77c8f4:goto L77c8f4;
case 0x77c8f5:c.instructions+=1;goto B77c8f5;
case 0x77c900:goto L77c900;
case 0x77c905:c.instructions+=53;goto B77c905;
case 0x77c90b:c.instructions+=52;goto B77c90b;
case 0x77c90d:c.instructions+=51;goto B77c90d;
case 0x77c912:c.instructions+=50;goto B77c912;
case 0x77c918:c.instructions+=49;goto B77c918;
case 0x77c91e:c.instructions+=48;goto B77c91e;
case 0x77c920:c.instructions+=47;goto B77c920;
case 0x77c926:c.instructions+=46;goto B77c926;
case 0x77c928:c.instructions+=45;goto B77c928;
case 0x77c92d:c.instructions+=44;goto B77c92d;
case 0x77c933:c.instructions+=43;goto B77c933;
case 0x77c935:c.instructions+=42;goto B77c935;
case 0x77c937:c.instructions+=41;goto B77c937;
case 0x77c93c:c.instructions+=40;goto B77c93c;
case 0x77c941:c.instructions+=39;goto B77c941;
case 0x77c943:c.instructions+=38;goto B77c943;
case 0x77c949:c.instructions+=37;goto B77c949;
case 0x77c94f:c.instructions+=36;goto B77c94f;
case 0x77c955:c.instructions+=35;goto B77c955;
case 0x77c95b:c.instructions+=34;goto B77c95b;
case 0x77c961:c.instructions+=33;goto B77c961;
case 0x77c967:c.instructions+=32;goto B77c967;
case 0x77c969:c.instructions+=31;goto B77c969;
case 0x77c973:c.instructions+=30;goto B77c973;
case 0x77c97d:c.instructions+=29;goto B77c97d;
case 0x77c987:c.instructions+=28;goto B77c987;
case 0x77c991:c.instructions+=27;goto B77c991;
case 0x77c99b:c.instructions+=26;goto B77c99b;
case 0x77c9a5:c.instructions+=25;goto B77c9a5;
case 0x77c9af:c.instructions+=24;goto B77c9af;
case 0x77c9b9:c.instructions+=23;goto B77c9b9;
case 0x77c9c3:c.instructions+=22;goto B77c9c3;
case 0x77c9cd:c.instructions+=21;goto B77c9cd;
case 0x77c9d7:c.instructions+=20;goto B77c9d7;
case 0x77c9e1:c.instructions+=19;goto B77c9e1;
case 0x77c9e7:c.instructions+=18;goto B77c9e7;
case 0x77c9f1:c.instructions+=17;goto B77c9f1;
case 0x77c9fb:c.instructions+=16;goto B77c9fb;
case 0x77ca05:c.instructions+=15;goto B77ca05;
case 0x77ca0f:c.instructions+=14;goto B77ca0f;
case 0x77ca19:c.instructions+=13;goto B77ca19;
case 0x77ca23:c.instructions+=12;goto B77ca23;
case 0x77ca28:c.instructions+=11;goto B77ca28;
case 0x77ca2d:c.instructions+=10;goto B77ca2d;
case 0x77ca32:c.instructions+=9;goto B77ca32;
case 0x77ca37:c.instructions+=8;goto B77ca37;
case 0x77ca3c:c.instructions+=7;goto B77ca3c;
case 0x77ca42:c.instructions+=6;goto B77ca42;
case 0x77ca47:c.instructions+=5;goto B77ca47;
case 0x77ca4d:c.instructions+=4;goto B77ca4d;
case 0x77ca52:c.instructions+=3;goto B77ca52;
case 0x77ca57:c.instructions+=2;goto B77ca57;
case 0x77ca5c:c.instructions+=1;goto B77ca5c;
case 0x77ca60:goto L77ca60;
case 0x77ca65:c.instructions+=1;goto B77ca65;
case 0x77ca6a:goto L77ca6a;
case 0x77ca6f:c.instructions+=1;goto B77ca6f;
case 0x77ca74:goto L77ca74;
case 0x77ca75:c.instructions+=1;goto B77ca75;
case 0x77ca80:goto L77ca80;
case 0x77ca85:c.instructions+=1;goto B77ca85;
case 0x77ca8a:goto L77ca8a;
case 0x77ca8f:c.instructions+=1;goto B77ca8f;
case 0x77ca94:goto L77ca94;
case 0x77ca95:c.instructions+=1;goto B77ca95;
case 0x77caa0:goto L77caa0;
case 0x77caa5:c.instructions+=1;goto B77caa5;
case 0x77caaa:goto L77caaa;
case 0x77caaf:c.instructions+=1;goto B77caaf;
case 0x77cab4:goto L77cab4;
case 0x77cab5:c.instructions+=1;goto B77cab5;
case 0x77cac0:goto L77cac0;
case 0x77cac5:c.instructions+=1;goto B77cac5;
case 0x77caca:goto L77caca;
case 0x77cacf:c.instructions+=1;goto B77cacf;
case 0x77cad4:goto L77cad4;
case 0x77cad5:c.instructions+=1;goto B77cad5;
case 0x77cae0:goto L77cae0;
case 0x77cae5:c.instructions+=1;goto B77cae5;
case 0x77caea:goto L77caea;
case 0x77caef:c.instructions+=1;goto B77caef;
case 0x77caf4:goto L77caf4;
case 0x77caf5:c.instructions+=1;goto B77caf5;
case 0x77cb00:goto L77cb00;
case 0x77cb05:c.instructions+=4;goto B77cb05;
case 0x77cb0a:c.instructions+=3;goto B77cb0a;
case 0x77cb0f:c.instructions+=2;goto B77cb0f;
case 0x77cb14:c.instructions+=1;goto B77cb14;
case 0x77cb19:goto L77cb19;
case 0x77cb20:goto L77cb20;
case 0x77cb25:c.instructions+=7;goto B77cb25;
case 0x77cb2a:c.instructions+=6;goto B77cb2a;
case 0x77cb2f:c.instructions+=5;goto B77cb2f;
case 0x77cb34:c.instructions+=4;goto B77cb34;
case 0x77cb39:c.instructions+=3;goto B77cb39;
case 0x77cb3e:c.instructions+=2;goto B77cb3e;
case 0x77cb43:c.instructions+=1;goto B77cb43;
case 0x77cb48:goto L77cb48;
case 0x77cb4d:c.instructions+=1;goto B77cb4d;
case 0x77cb52:goto L77cb52;
case 0x77cb53:c.instructions+=1;goto B77cb53;
case 0x77cb60:goto L77cb60;
case 0x77cb65:c.instructions+=1;goto B77cb65;
case 0x77cb6a:goto L77cb6a;
case 0x77cb6f:c.instructions+=1;goto B77cb6f;
case 0x77cb74:goto L77cb74;
case 0x77cb75:c.instructions+=1;goto B77cb75;
case 0x77cb80:goto L77cb80;
case 0x77cb85:c.instructions+=1;goto B77cb85;
case 0x77cb8a:goto L77cb8a;
case 0x77cb8b:c.instructions+=1;goto B77cb8b;
case 0x77cb90:goto L77cb90;
case 0x77cb95:c.instructions+=1;goto B77cb95;
case 0x77cb9a:goto L77cb9a;
case 0x77cb9f:c.instructions+=1;goto B77cb9f;
case 0x77cba4:goto L77cba4;
case 0x77cba5:c.instructions+=1;goto B77cba5;
case 0x77cbb0:goto L77cbb0;
case 0x77cbb5:c.instructions+=1;goto B77cbb5;
case 0x77cbba:goto L77cbba;
case 0x77cbbf:c.instructions+=1;goto B77cbbf;
case 0x77cbc4:goto L77cbc4;
case 0x77cbc5:c.instructions+=1;goto B77cbc5;
case 0x77cbd0:goto L77cbd0;
case 0x77cbd5:c.instructions+=1;goto B77cbd5;
case 0x77cbda:goto L77cbda;
case 0x77cbdf:c.instructions+=1;goto B77cbdf;
case 0x77cbe4:goto L77cbe4;
case 0x77cbe5:c.instructions+=1;goto B77cbe5;
case 0x77cbf0:goto L77cbf0;
case 0x77cbf5:c.instructions+=1;goto B77cbf5;
case 0x77cbfa:goto L77cbfa;
case 0x77cbff:c.instructions+=1;goto B77cbff;
case 0x77cc04:goto L77cc04;
case 0x77cc05:c.instructions+=1;goto B77cc05;
case 0x77cc10:goto L77cc10;
case 0x77cc15:c.instructions+=1;goto B77cc15;
case 0x77cc1a:goto L77cc1a;
case 0x77cc1b:c.instructions+=1;goto B77cc1b;
case 0x77cc20:goto L77cc20;
case 0x77cc25:c.instructions+=4;goto B77cc25;
case 0x77cc2a:c.instructions+=3;goto B77cc2a;
case 0x77cc2f:c.instructions+=2;goto B77cc2f;
case 0x77cc34:c.instructions+=1;goto B77cc34;
case 0x77cc39:goto L77cc39;
case 0x77cc40:goto L77cc40;
case 0x77cc45:c.instructions+=4;goto B77cc45;
case 0x77cc4a:c.instructions+=3;goto B77cc4a;
case 0x77cc4f:c.instructions+=2;goto B77cc4f;
case 0x77cc54:c.instructions+=1;goto B77cc54;
case 0x77cc59:goto L77cc59;
case 0x77cc60:goto L77cc60;
case 0x77cc65:c.instructions+=4;goto B77cc65;
case 0x77cc6a:c.instructions+=3;goto B77cc6a;
case 0x77cc6f:c.instructions+=2;goto B77cc6f;
case 0x77cc74:c.instructions+=1;goto B77cc74;
case 0x77cc79:goto L77cc79;
case 0x77cc80:goto L77cc80;
case 0x77cc85:c.instructions+=1;goto B77cc85;
case 0x77cc8a:goto L77cc8a;
case 0x77cc8f:c.instructions+=1;goto B77cc8f;
case 0x77cc94:goto L77cc94;
case 0x77cc95:c.instructions+=1;goto B77cc95;
case 0x77cca0:goto L77cca0;
case 0x77cca5:c.instructions+=5;goto B77cca5;
case 0x77ccaa:c.instructions+=4;goto B77ccaa;
case 0x77ccaf:c.instructions+=3;goto B77ccaf;
case 0x77ccb1:c.instructions+=2;goto B77ccb1;
case 0x77ccb6:c.instructions+=1;goto B77ccb6;
case 0x77ccbb:goto L77ccbb;
case 0x77ccc0:c.instructions+=1;goto B77ccc0;
case 0x77ccc5:goto L77ccc5;
case 0x77ccc6:c.instructions+=1;goto B77ccc6;
case 0x77ccd0:goto L77ccd0;
case 0x77ccd5:c.instructions+=5;goto B77ccd5;
case 0x77ccda:c.instructions+=4;goto B77ccda;
case 0x77ccdc:c.instructions+=3;goto B77ccdc;
case 0x77ccde:c.instructions+=2;goto B77ccde;
case 0x77cce3:c.instructions+=1;goto B77cce3;
case 0x77cce8:goto L77cce8;
case 0x77cced:c.instructions+=1;goto B77cced;
case 0x77ccf2:goto L77ccf2;
case 0x77ccf3:c.instructions+=1;goto B77ccf3;
case 0x77cd00:goto L77cd00;
case 0x77cd05:c.instructions+=1;goto B77cd05;
case 0x77cd0a:goto L77cd0a;
case 0x77cd0f:c.instructions+=1;goto B77cd0f;
case 0x77cd14:goto L77cd14;
case 0x77cd15:c.instructions+=1;goto B77cd15;
case 0x77cd20:goto L77cd20;
case 0x77cd25:c.instructions+=1;goto B77cd25;
case 0x77cd2a:goto L77cd2a;
case 0x77cd2f:c.instructions+=1;goto B77cd2f;
case 0x77cd34:goto L77cd34;
case 0x77cd35:c.instructions+=1;goto B77cd35;
case 0x77cd40:goto L77cd40;
case 0x77cd45:c.instructions+=1;goto B77cd45;
case 0x77cd4a:goto L77cd4a;
case 0x77cd4f:c.instructions+=1;goto B77cd4f;
case 0x77cd54:goto L77cd54;
case 0x77cd55:c.instructions+=1;goto B77cd55;
case 0x77cd60:goto L77cd60;
case 0x77cd65:c.instructions+=4;goto B77cd65;
case 0x77cd6a:c.instructions+=3;goto B77cd6a;
case 0x77cd6f:c.instructions+=2;goto B77cd6f;
case 0x77cd74:c.instructions+=1;goto B77cd74;
case 0x77cd79:goto L77cd79;
case 0x77cd80:goto L77cd80;
case 0x77cd85:c.instructions+=4;goto B77cd85;
case 0x77cd8a:c.instructions+=3;goto B77cd8a;
case 0x77cd8f:c.instructions+=2;goto B77cd8f;
case 0x77cd94:c.instructions+=1;goto B77cd94;
case 0x77cd99:goto L77cd99;
case 0x77cda0:goto L77cda0;
case 0x77cda5:c.instructions+=4;goto B77cda5;
case 0x77cdaa:c.instructions+=3;goto B77cdaa;
case 0x77cdaf:c.instructions+=2;goto B77cdaf;
case 0x77cdb4:c.instructions+=1;goto B77cdb4;
case 0x77cdb9:goto L77cdb9;
case 0x77cdc0:goto L77cdc0;
case 0x77cdc5:c.instructions+=7;goto B77cdc5;
case 0x77cdca:c.instructions+=6;goto B77cdca;
case 0x77cdcf:c.instructions+=5;goto B77cdcf;
case 0x77cdd4:c.instructions+=4;goto B77cdd4;
case 0x77cdd9:c.instructions+=3;goto B77cdd9;
case 0x77cdde:c.instructions+=2;goto B77cdde;
case 0x77cde3:c.instructions+=1;goto B77cde3;
case 0x77cde8:goto L77cde8;
case 0x77cded:c.instructions+=1;goto B77cded;
case 0x77cdf2:goto L77cdf2;
case 0x77cdf3:c.instructions+=1;goto B77cdf3;
case 0x77ce00:goto L77ce00;
case 0x77ce06:c.instructions+=3;goto B77ce06;
case 0x77ce0c:c.instructions+=2;goto B77ce0c;
case 0x77ce12:c.instructions+=1;goto B77ce12;
case 0x77ce20:goto L77ce20;
case 0x77ce25:c.instructions+=5;goto B77ce25;
case 0x77ce2a:c.instructions+=4;goto B77ce2a;
case 0x77ce2c:c.instructions+=3;goto B77ce2c;
case 0x77ce2e:c.instructions+=2;goto B77ce2e;
case 0x77ce33:c.instructions+=1;goto B77ce33;
case 0x77ce38:goto L77ce38;
case 0x77ce3d:c.instructions+=1;goto B77ce3d;
case 0x77ce42:goto L77ce42;
case 0x77ce43:c.instructions+=1;goto B77ce43;
case 0x77ce50:goto L77ce50;
case 0x77ce55:c.instructions+=2;goto B77ce55;
case 0x77ce5a:c.instructions+=1;goto B77ce5a;
case 0x77ce5f:goto L77ce5f;
case 0x77ce60:goto L77ce60;
case 0x77ce62:c.instructions+=2;goto B77ce62;
case 0x77ce67:c.instructions+=1;goto B77ce67;
case 0x77ce6c:goto L77ce6c;
case 0x77ce70:goto L77ce70;
case 0x77ce75:c.instructions+=2;goto B77ce75;
case 0x77ce7a:c.instructions+=1;goto B77ce7a;
case 0x77ce7f:goto L77ce7f;
case 0x77ce80:goto L77ce80;
case 0x77ce85:c.instructions+=2;goto B77ce85;
case 0x77ce8a:c.instructions+=1;goto B77ce8a;
case 0x77ce8f:goto L77ce8f;
case 0x77ce90:goto L77ce90;
case 0x77ce95:c.instructions+=1;goto B77ce95;
case 0x77ce9a:goto L77ce9a;
case 0x77ce9f:c.instructions+=1;goto B77ce9f;
case 0x77cea4:goto L77cea4;
case 0x77cea5:c.instructions+=1;goto B77cea5;
case 0x77ceb0:goto L77ceb0;
case 0x77ceb5:c.instructions+=50;goto B77ceb5;
case 0x77cebb:c.instructions+=49;goto B77cebb;
case 0x77cebd:c.instructions+=48;goto B77cebd;
case 0x77cec2:c.instructions+=47;goto B77cec2;
case 0x77cec8:c.instructions+=46;goto B77cec8;
case 0x77cece:c.instructions+=45;goto B77cece;
case 0x77ced0:c.instructions+=44;goto B77ced0;
case 0x77ced6:c.instructions+=43;goto B77ced6;
case 0x77ced8:c.instructions+=42;goto B77ced8;
case 0x77cedd:c.instructions+=41;goto B77cedd;
case 0x77cee3:c.instructions+=40;goto B77cee3;
case 0x77cee5:c.instructions+=39;goto B77cee5;
case 0x77cee7:c.instructions+=38;goto B77cee7;
case 0x77ceec:c.instructions+=37;goto B77ceec;
case 0x77cef1:c.instructions+=36;goto B77cef1;
case 0x77cef3:c.instructions+=35;goto B77cef3;
case 0x77cef9:c.instructions+=34;goto B77cef9;
case 0x77ceff:c.instructions+=33;goto B77ceff;
case 0x77cf05:c.instructions+=32;goto B77cf05;
case 0x77cf0b:c.instructions+=31;goto B77cf0b;
case 0x77cf11:c.instructions+=30;goto B77cf11;
case 0x77cf17:c.instructions+=29;goto B77cf17;
case 0x77cf19:c.instructions+=28;goto B77cf19;
case 0x77cf23:c.instructions+=27;goto B77cf23;
case 0x77cf2d:c.instructions+=26;goto B77cf2d;
case 0x77cf37:c.instructions+=25;goto B77cf37;
case 0x77cf41:c.instructions+=24;goto B77cf41;
case 0x77cf4b:c.instructions+=23;goto B77cf4b;
case 0x77cf55:c.instructions+=22;goto B77cf55;
case 0x77cf5f:c.instructions+=21;goto B77cf5f;
case 0x77cf69:c.instructions+=20;goto B77cf69;
case 0x77cf73:c.instructions+=19;goto B77cf73;
case 0x77cf7d:c.instructions+=18;goto B77cf7d;
case 0x77cf87:c.instructions+=17;goto B77cf87;
case 0x77cf91:c.instructions+=16;goto B77cf91;
case 0x77cf97:c.instructions+=15;goto B77cf97;
case 0x77cfa1:c.instructions+=14;goto B77cfa1;
case 0x77cfab:c.instructions+=13;goto B77cfab;
case 0x77cfb5:c.instructions+=12;goto B77cfb5;
case 0x77cfbf:c.instructions+=11;goto B77cfbf;
case 0x77cfc9:c.instructions+=10;goto B77cfc9;
case 0x77cfd3:c.instructions+=9;goto B77cfd3;
case 0x77cfd8:c.instructions+=8;goto B77cfd8;
case 0x77cfdd:c.instructions+=7;goto B77cfdd;
case 0x77cfe2:c.instructions+=6;goto B77cfe2;
case 0x77cfe7:c.instructions+=5;goto B77cfe7;
case 0x77cfec:c.instructions+=4;goto B77cfec;
case 0x77cff2:c.instructions+=3;goto B77cff2;
case 0x77cff7:c.instructions+=2;goto B77cff7;
case 0x77cffd:c.instructions+=1;goto B77cffd;
default:missing_instruction(c.pc);}
B77c001:L77c001:{c.instructions+=12;NFSU2_TR(0x77c001);
__builtin_memmove(gp(0x82bcd0),(R+0),4);
}
B77c006:{NFSU2_TR(0x77c006);
__builtin_memmove((R+0),gp(0x7884a0),4);
}
B77c00b:{NFSU2_TR(0x77c00b);
__builtin_memmove(gp(0x82bcdc),(R+0),4);
}
B77c010:{NFSU2_TR(0x77c010);
{u32 ea_=u32(u32(8568028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77c016:{NFSU2_TR(0x77c016);
__builtin_memmove(gp(0x82bcd8),(R+8),4);
}
B77c01c:{NFSU2_TR(0x77c01c);
{u32 ea_=u32(u32(8568024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77c022:{NFSU2_TR(0x77c022);
__builtin_memmove(gp(0x82bcd4),(R+4),4);
}
B77c028:{NFSU2_TR(0x77c028);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77c02a:{NFSU2_TR(0x77c02a);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77c030:{NFSU2_TR(0x77c030);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77c032:{NFSU2_TR(0x77c032);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77c035:{NFSU2_TR(0x77c035);
if(r1(R+514)){{goto L77c049;}}
}
B77c037:L77c037:{c.instructions+=3;NFSU2_TR(0x77c037);
{u32 ea_=u32(u32(8568028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77c03d:{NFSU2_TR(0x77c03d);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B77c043:{NFSU2_TR(0x77c043);
{u32 ea_=u32(u32(8568028u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77c049:L77c049:{c.instructions+=4;NFSU2_TR(0x77c049);
__builtin_memmove((R+4),gp(0x788494),4);
}
B77c04f:{NFSU2_TR(0x77c04f);
u8 U[4];
w4(U+0,u32(0x781cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c054:{NFSU2_TR(0x77c054);
__builtin_memmove(gp(0x82bce4),(R+4),4);
}
B77c05a:{NFSU2_TR(0x77c05a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c05full));
TAIL_STATIC(0x75c5edu,75c);
}
B77c05f:L77c05f:{c.instructions+=2;NFSU2_TR(0x77c05f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c060:{NFSU2_TR(0x77c060);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c070:L77c070:{c.instructions+=2;NFSU2_TR(0x77c070);
u8 U[4];
w4(U+0,u32(0x781ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c075:{NFSU2_TR(0x77c075);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c07aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c07a:L77c07a:{c.instructions+=2;NFSU2_TR(0x77c07a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c07b:{NFSU2_TR(0x77c07b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c080:L77c080:{c.instructions+=2;NFSU2_TR(0x77c080);
u8 U[4];
w4(U+0,u32(0x781cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c085:{NFSU2_TR(0x77c085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c08aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c08a:L77c08a:{c.instructions+=2;NFSU2_TR(0x77c08a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c08b:{NFSU2_TR(0x77c08b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c090:L77c090:{c.instructions+=2;NFSU2_TR(0x77c090);
u8 U[4];
w4(U+0,u32(0x781d00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c095:{NFSU2_TR(0x77c095);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c09aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c09a:L77c09a:{c.instructions+=2;NFSU2_TR(0x77c09a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c09b:{NFSU2_TR(0x77c09b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c0a0:L77c0a0:{c.instructions+=2;NFSU2_TR(0x77c0a0);
u8 U[4];
w4(U+0,u32(0x781d10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c0a5:{NFSU2_TR(0x77c0a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c0aaull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c0aa:L77c0aa:{c.instructions+=2;NFSU2_TR(0x77c0aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c0ab:{NFSU2_TR(0x77c0ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c0b0:L77c0b0:{c.instructions+=2;NFSU2_TR(0x77c0b0);
u8 U[4];
w4(U+0,u32(0x781d20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c0b5:{NFSU2_TR(0x77c0b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c0baull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c0ba:L77c0ba:{c.instructions+=2;NFSU2_TR(0x77c0ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c0bb:{NFSU2_TR(0x77c0bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c0c0:L77c0c0:{c.instructions+=2;NFSU2_TR(0x77c0c0);
w4(R+4,u32(0x82c694ull));
}
B77c0c5:{NFSU2_TR(0x77c0c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c0caull));
TAIL_STATIC(0x468ed0u,468);
}
B77c0ca:L77c0ca:{c.instructions+=2;NFSU2_TR(0x77c0ca);
u8 U[4];
w4(U+0,u32(0x781bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c0cf:{NFSU2_TR(0x77c0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c0d4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c0d4:L77c0d4:{c.instructions+=2;NFSU2_TR(0x77c0d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c0d5:{NFSU2_TR(0x77c0d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c0e0:L77c0e0:{c.instructions+=5;NFSU2_TR(0x77c0e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c0e1:{NFSU2_TR(0x77c0e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c0e2:{NFSU2_TR(0x77c0e2);
w4(R+24,u32(0x82bf48ull));
}
B77c0e7:{NFSU2_TR(0x77c0e7);
w4(R+28,u32(0xdull));
}
B77c0ec:{NFSU2_TR(0x77c0ec);
__builtin_memmove((R+16),(R+16),4);
}
B77c0f0:L77c0f0:{c.instructions+=2;NFSU2_TR(0x77c0f0);
__builtin_memmove((R+4),(R+24),4);
}
B77c0f2:{NFSU2_TR(0x77c0f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c0f7ull));
TAIL_STATIC(0x458f80u,458);
}
B77c0f7:L77c0f7:{c.instructions+=3;NFSU2_TR(0x77c0f7);
w1(R+512,carry<u32>(r4(R+24),u32(0x70ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x70ull))));
}
B77c0fa:{NFSU2_TR(0x77c0fa);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77c0fb:{NFSU2_TR(0x77c0fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77c0f0u);}goto L77c0f0;}}
}
B77c0fd:L77c0fd:{c.instructions+=3;NFSU2_TR(0x77c0fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B77c0fe:{NFSU2_TR(0x77c0fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B77c0ff:{NFSU2_TR(0x77c0ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c100:L77c100:{c.instructions+=3;NFSU2_TR(0x77c100);
u8 U[4];
w4(U+0,u32(0x78c250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c105:{NFSU2_TR(0x77c105);
w4(R+4,u32(0x82c710ull));
}
B77c10a:{NFSU2_TR(0x77c10a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c10full));
TAIL_STATIC(0x60b780u,60b);
}
B77c10f:L77c10f:{c.instructions+=2;NFSU2_TR(0x77c10f);
u8 U[4];
w4(U+0,u32(0x781be0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c114:{NFSU2_TR(0x77c114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c119ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c119:L77c119:{c.instructions+=2;NFSU2_TR(0x77c119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c11a:{NFSU2_TR(0x77c11a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c120:L77c120:{c.instructions+=3;NFSU2_TR(0x77c120);
u8 U[4];
w4(U+0,u32(0x78c25cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c125:{NFSU2_TR(0x77c125);
w4(R+4,u32(0x82bea0ull));
}
B77c12a:{NFSU2_TR(0x77c12a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c12full));
TAIL_STATIC(0x60b780u,60b);
}
B77c12f:L77c12f:{c.instructions+=2;NFSU2_TR(0x77c12f);
u8 U[4];
w4(U+0,u32(0x781bf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c134:{NFSU2_TR(0x77c134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c139ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c139:L77c139:{c.instructions+=2;NFSU2_TR(0x77c139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c13a:{NFSU2_TR(0x77c13a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c140:L77c140:{c.instructions+=2;NFSU2_TR(0x77c140);
w4(R+4,u32(0x82c570ull));
}
B77c145:{NFSU2_TR(0x77c145);
TAIL_STATIC(0x734da0u,734);
}
B77c150:L77c150:{c.instructions+=2;NFSU2_TR(0x77c150);
w4(R+4,u32(0x82c578ull));
}
B77c155:{NFSU2_TR(0x77c155);
TAIL_STATIC(0x734da0u,734);
}
B77c160:L77c160:{c.instructions+=2;NFSU2_TR(0x77c160);
w4(R+4,u32(0x82c528ull));
}
B77c165:{NFSU2_TR(0x77c165);
TAIL_STATIC(0x734da0u,734);
}
B77c170:L77c170:{c.instructions+=2;NFSU2_TR(0x77c170);
w4(R+4,u32(0x82c518ull));
}
B77c175:{NFSU2_TR(0x77c175);
TAIL_STATIC(0x734da0u,734);
}
B77c180:L77c180:{c.instructions+=2;NFSU2_TR(0x77c180);
w4(R+4,u32(0x82c6acull));
}
B77c185:{NFSU2_TR(0x77c185);
TAIL_STATIC(0x734da0u,734);
}
B77c190:L77c190:{c.instructions+=2;NFSU2_TR(0x77c190);
w4(R+4,u32(0x82c560ull));
}
B77c195:{NFSU2_TR(0x77c195);
TAIL_STATIC(0x734da0u,734);
}
B77c1a0:L77c1a0:{c.instructions+=2;NFSU2_TR(0x77c1a0);
w4(R+4,u32(0x82c588ull));
}
B77c1a5:{NFSU2_TR(0x77c1a5);
TAIL_STATIC(0x734da0u,734);
}
B77c1b0:L77c1b0:{c.instructions+=2;NFSU2_TR(0x77c1b0);
w4(R+4,u32(0x82c650ull));
}
B77c1b5:{NFSU2_TR(0x77c1b5);
TAIL_STATIC(0x734da0u,734);
}
B77c1c0:L77c1c0:{c.instructions+=2;NFSU2_TR(0x77c1c0);
w4(R+4,u32(0x82c5b8ull));
}
B77c1c5:{NFSU2_TR(0x77c1c5);
TAIL_STATIC(0x734da0u,734);
}
B77c1d0:L77c1d0:{c.instructions+=2;NFSU2_TR(0x77c1d0);
w4(R+4,u32(0x82c658ull));
}
B77c1d5:{NFSU2_TR(0x77c1d5);
TAIL_STATIC(0x734da0u,734);
}
B77c1e0:L77c1e0:{c.instructions+=2;NFSU2_TR(0x77c1e0);
w4(R+4,u32(0x82c604ull));
}
B77c1e5:{NFSU2_TR(0x77c1e5);
TAIL_STATIC(0x734da0u,734);
}
B77c1f0:L77c1f0:{c.instructions+=2;NFSU2_TR(0x77c1f0);
w4(R+4,u32(0x82c580ull));
}
B77c1f5:{NFSU2_TR(0x77c1f5);
TAIL_STATIC(0x734da0u,734);
}
B77c200:L77c200:{c.instructions+=2;NFSU2_TR(0x77c200);
w4(R+4,u32(0x82c5c0ull));
}
B77c205:{NFSU2_TR(0x77c205);
TAIL_STATIC(0x734da0u,734);
}
B77c210:L77c210:{c.instructions+=2;NFSU2_TR(0x77c210);
w4(R+4,u32(0x82c640ull));
}
B77c215:{NFSU2_TR(0x77c215);
TAIL_STATIC(0x734da0u,734);
}
B77c220:L77c220:{c.instructions+=54;NFSU2_TR(0x77c220);
__builtin_memmove((R+0),gp(0x78859c),4);
}
B77c225:{NFSU2_TR(0x77c225);
__builtin_memmove((R+8),gp(0x788594),4);
}
B77c22b:{NFSU2_TR(0x77c22b);
__builtin_memmove((R+4),(R+0),4);
}
B77c22d:{NFSU2_TR(0x77c22d);
__builtin_memmove(gp(0x7f38a8),(R+0),4);
}
B77c232:{NFSU2_TR(0x77c232);
__builtin_memmove(gp(0x7f38ac),(R+4),4);
}
B77c238:{NFSU2_TR(0x77c238);
__builtin_memmove((R+4),gp(0x788598),4);
}
B77c23e:{NFSU2_TR(0x77c23e);
__builtin_memmove((R+0),(R+8),4);
}
B77c240:{NFSU2_TR(0x77c240);
__builtin_memmove(gp(0x7f38e0),(R+8),4);
}
B77c246:{NFSU2_TR(0x77c246);
__builtin_memmove((R+8),(R+4),4);
}
B77c248:{NFSU2_TR(0x77c248);
__builtin_memmove(gp(0x7f38e4),(R+0),4);
}
B77c24d:{NFSU2_TR(0x77c24d);
__builtin_memmove(gp(0x7f38e8),(R+4),4);
}
B77c253:{NFSU2_TR(0x77c253);
w1(R+4,u8(0x80ull));
}
B77c255:{NFSU2_TR(0x77c255);
w1(R+0,u8(0x25ull));
}
B77c257:{NFSU2_TR(0x77c257);
__builtin_memmove(gp(0x7f3908),(R+0),1);
}
B77c25c:{NFSU2_TR(0x77c25c);
__builtin_memmove(gp(0x7f3909),(R+0),1);
}
B77c261:{NFSU2_TR(0x77c261);
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
B77c263:{NFSU2_TR(0x77c263);
__builtin_memmove(gp(0x7f390e),(R+4),1);
}
B77c269:{NFSU2_TR(0x77c269);
__builtin_memmove(gp(0x7f390f),(R+4),1);
}
B77c26f:{NFSU2_TR(0x77c26f);
__builtin_memmove(gp(0x7f3910),(R+4),1);
}
B77c275:{NFSU2_TR(0x77c275);
__builtin_memmove(gp(0x7f3911),(R+4),1);
}
B77c27b:{NFSU2_TR(0x77c27b);
__builtin_memmove(gp(0x7f3912),(R+4),1);
}
B77c281:{NFSU2_TR(0x77c281);
__builtin_memmove(gp(0x7f3913),(R+4),1);
}
B77c287:{NFSU2_TR(0x77c287);
w1(R+4,u8(0x32ull));
}
B77c289:{NFSU2_TR(0x77c289);
s4(0x7f38b0,u32(0x0ull));
}
B77c293:{NFSU2_TR(0x77c293);
s4(0x7f38b4,u32(0x41200000ull));
}
B77c29d:{NFSU2_TR(0x77c29d);
s4(0x7f38b8,u32(0x40000000ull));
}
B77c2a7:{NFSU2_TR(0x77c2a7);
s4(0x7f38bc,u32(0x0ull));
}
B77c2b1:{NFSU2_TR(0x77c2b1);
s4(0x7f38c0,u32(0x41200000ull));
}
B77c2bb:{NFSU2_TR(0x77c2bb);
s4(0x7f38c4,u32(0x40000000ull));
}
B77c2c5:{NFSU2_TR(0x77c2c5);
s4(0x7f38c8,u32(0x0ull));
}
B77c2cf:{NFSU2_TR(0x77c2cf);
s4(0x7f38cc,u32(0x0ull));
}
B77c2d9:{NFSU2_TR(0x77c2d9);
s4(0x7f38d0,u32(0x0ull));
}
B77c2e3:{NFSU2_TR(0x77c2e3);
s4(0x7f38d4,u32(0x0ull));
}
B77c2ed:{NFSU2_TR(0x77c2ed);
s4(0x7f38d8,u32(0x0ull));
}
B77c2f7:{NFSU2_TR(0x77c2f7);
s4(0x7f38dc,u32(0x0ull));
}
B77c301:{NFSU2_TR(0x77c301);
__builtin_memmove(gp(0x7f38ec),(R+8),4);
}
B77c307:{NFSU2_TR(0x77c307);
s4(0x7f38f0,u32(0x0ull));
}
B77c311:{NFSU2_TR(0x77c311);
s4(0x7f38f4,u32(0x0ull));
}
B77c31b:{NFSU2_TR(0x77c31b);
s4(0x7f38f8,u32(0x0ull));
}
B77c325:{NFSU2_TR(0x77c325);
s4(0x7f38fc,u32(0x0ull));
}
B77c32f:{NFSU2_TR(0x77c32f);
s4(0x7f3900,u32(0x0ull));
}
B77c339:{NFSU2_TR(0x77c339);
s4(0x7f3904,u32(0x0ull));
}
B77c343:{NFSU2_TR(0x77c343);
__builtin_memmove(gp(0x7f390a),(R+0),1);
}
B77c348:{NFSU2_TR(0x77c348);
__builtin_memmove(gp(0x7f390b),(R+0),1);
}
B77c34d:{NFSU2_TR(0x77c34d);
__builtin_memmove(gp(0x7f390c),(R+0),1);
}
B77c352:{NFSU2_TR(0x77c352);
__builtin_memmove(gp(0x7f390d),(R+0),1);
}
B77c357:{NFSU2_TR(0x77c357);
__builtin_memmove(gp(0x7f3914),(R+0),1);
}
B77c35c:{NFSU2_TR(0x77c35c);
__builtin_memmove(gp(0x7f3915),(R+4),1);
}
B77c362:{NFSU2_TR(0x77c362);
__builtin_memmove(gp(0x7f3916),(R+0),1);
}
B77c367:{NFSU2_TR(0x77c367);
__builtin_memmove(gp(0x7f3917),(R+4),1);
}
B77c36d:{NFSU2_TR(0x77c36d);
__builtin_memmove(gp(0x7f3918),(R+0),1);
}
B77c372:{NFSU2_TR(0x77c372);
__builtin_memmove(gp(0x7f3919),(R+0),1);
}
B77c377:{NFSU2_TR(0x77c377);
__builtin_memmove(gp(0x7f391c),(R+0),4);
}
B77c37c:{NFSU2_TR(0x77c37c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c380:L77c380:{c.instructions+=9;NFSU2_TR(0x77c380);
__builtin_memmove((R+0),gp(0x788604),4);
}
B77c385:{NFSU2_TR(0x77c385);
__builtin_memmove(gp(0x7f005c),(R+0),4);
}
B77c38a:{NFSU2_TR(0x77c38a);
{u32 ea_=u32(u32(8323164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77c390:{NFSU2_TR(0x77c390);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77c396:{NFSU2_TR(0x77c396);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77c398:{NFSU2_TR(0x77c398);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77c39e:{NFSU2_TR(0x77c39e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77c3a0:{NFSU2_TR(0x77c3a0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77c3a3:{NFSU2_TR(0x77c3a3);
if(r1(R+514)){{goto L77c3b7;}}
}
B77c3a5:L77c3a5:{c.instructions+=3;NFSU2_TR(0x77c3a5);
{u32 ea_=u32(u32(8323164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77c3ab:{NFSU2_TR(0x77c3ab);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B77c3b1:{NFSU2_TR(0x77c3b1);
{u32 ea_=u32(u32(8323164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77c3b7:L77c3b7:{c.instructions+=2;NFSU2_TR(0x77c3b7);
u8 U[4];
w4(U+0,u32(0x781c00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c3bc:{NFSU2_TR(0x77c3bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c3c1ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c3c1:L77c3c1:{c.instructions+=2;NFSU2_TR(0x77c3c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c3c2:{NFSU2_TR(0x77c3c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c3d0:L77c3d0:{c.instructions+=6;NFSU2_TR(0x77c3d0);
{u32 ea_=u32(u32(7914088u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77c3d6:{NFSU2_TR(0x77c3d6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77c3d8:{NFSU2_TR(0x77c3d8);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77c3de:{NFSU2_TR(0x77c3de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77c3e0:{NFSU2_TR(0x77c3e0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77c3e3:{NFSU2_TR(0x77c3e3);
if(r1(R+514)){{goto L77c3ef;}}
}
B77c3e5:L77c3e5:{c.instructions+=1;NFSU2_TR(0x77c3e5);
s4(0x7f0968,u32(0x45dac000ull));
}
B77c3ef:L77c3ef:{c.instructions+=2;NFSU2_TR(0x77c3ef);
u8 U[4];
w4(U+0,u32(0x781c10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c3f4:{NFSU2_TR(0x77c3f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c3f9ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c3f9:L77c3f9:{c.instructions+=2;NFSU2_TR(0x77c3f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c3fa:{NFSU2_TR(0x77c3fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c400:L77c400:{c.instructions+=6;NFSU2_TR(0x77c400);
{u32 ea_=u32(u32(7914096u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77c406:{NFSU2_TR(0x77c406);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77c408:{NFSU2_TR(0x77c408);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77c40e:{NFSU2_TR(0x77c40e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77c410:{NFSU2_TR(0x77c410);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77c413:{NFSU2_TR(0x77c413);
if(r1(R+514)){{goto L77c41f;}}
}
B77c415:L77c415:{c.instructions+=1;NFSU2_TR(0x77c415);
s4(0x7f0984,u32(0x42700000ull));
}
B77c41f:L77c41f:{c.instructions+=2;NFSU2_TR(0x77c41f);
u8 U[4];
w4(U+0,u32(0x781c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c424:{NFSU2_TR(0x77c424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c429ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c429:L77c429:{c.instructions+=2;NFSU2_TR(0x77c429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c42a:{NFSU2_TR(0x77c42a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c430:L77c430:{c.instructions+=6;NFSU2_TR(0x77c430);
{u32 ea_=u32(u32(7914096u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77c436:{NFSU2_TR(0x77c436);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77c438:{NFSU2_TR(0x77c438);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77c43e:{NFSU2_TR(0x77c43e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77c440:{NFSU2_TR(0x77c440);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77c443:{NFSU2_TR(0x77c443);
if(r1(R+514)){{goto L77c44f;}}
}
B77c445:L77c445:{c.instructions+=1;NFSU2_TR(0x77c445);
s4(0x7f09a0,u32(0x42700000ull));
}
B77c44f:L77c44f:{c.instructions+=2;NFSU2_TR(0x77c44f);
u8 U[4];
w4(U+0,u32(0x781c30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c454:{NFSU2_TR(0x77c454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c459ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c459:L77c459:{c.instructions+=2;NFSU2_TR(0x77c459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c45a:{NFSU2_TR(0x77c45a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c460:L77c460:{c.instructions+=4;NFSU2_TR(0x77c460);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c462:{NFSU2_TR(0x77c462);
u8 U[4];
w4(U+0,u32(0x7f09b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c467:{NFSU2_TR(0x77c467);
w4(R+4,u32(0x82c69cull));
}
B77c46c:{NFSU2_TR(0x77c46c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c471ull));
TAIL_STATIC(0x576770u,576);
}
B77c471:L77c471:{c.instructions+=1;NFSU2_TR(0x77c471);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c480:L77c480:{c.instructions+=10;NFSU2_TR(0x77c480);
{u32 ea_=u32(u32(7914104u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77c486:{NFSU2_TR(0x77c486);
__builtin_memmove((R+0),gp(0x788818),4);
}
B77c48b:{NFSU2_TR(0x77c48b);
__builtin_memmove((R+4),gp(0x78881c),4);
}
B77c491:{NFSU2_TR(0x77c491);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77c493:{NFSU2_TR(0x77c493);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77c499:{NFSU2_TR(0x77c499);
__builtin_memmove(gp(0x7f09d8),(R+0),4);
}
B77c49e:{NFSU2_TR(0x77c49e);
__builtin_memmove(gp(0x7f09dc),(R+4),4);
}
B77c4a4:{NFSU2_TR(0x77c4a4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77c4a6:{NFSU2_TR(0x77c4a6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77c4a9:{NFSU2_TR(0x77c4a9);
if(r1(R+514)){{goto L77c4b5;}}
}
B77c4ab:L77c4ab:{c.instructions+=1;NFSU2_TR(0x77c4ab);
s4(0x7f09e4,u32(0x42c80000ull));
}
B77c4b5:L77c4b5:{c.instructions+=4;NFSU2_TR(0x77c4b5);
__builtin_memmove((R+8),gp(0x788818),4);
}
B77c4bb:{NFSU2_TR(0x77c4bb);
u8 U[4];
w4(U+0,u32(0x781c40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c4c0:{NFSU2_TR(0x77c4c0);
__builtin_memmove(gp(0x7f09ec),(R+8),4);
}
B77c4c6:{NFSU2_TR(0x77c4c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c4cbull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c4cb:L77c4cb:{c.instructions+=2;NFSU2_TR(0x77c4cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c4cc:{NFSU2_TR(0x77c4cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c4d0:L77c4d0:{c.instructions+=8;NFSU2_TR(0x77c4d0);
__builtin_memmove((R+0),gp(0x78885c),4);
}
B77c4d5:{NFSU2_TR(0x77c4d5);
__builtin_memmove(gp(0x7f0a00),(R+0),4);
}
B77c4da:{NFSU2_TR(0x77c4da);
{u32 ea_=u32(u32(8325632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77c4e0:{NFSU2_TR(0x77c4e0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77c4e2:{NFSU2_TR(0x77c4e2);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77c4e8:{NFSU2_TR(0x77c4e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77c4ea:{NFSU2_TR(0x77c4ea);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77c4ed:{NFSU2_TR(0x77c4ed);
if(r1(R+514)){{goto L77c501;}}
}
B77c4ef:L77c4ef:{c.instructions+=3;NFSU2_TR(0x77c4ef);
{u32 ea_=u32(u32(8325632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77c4f5:{NFSU2_TR(0x77c4f5);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B77c4fb:{NFSU2_TR(0x77c4fb);
{u32 ea_=u32(u32(8325632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77c501:L77c501:{c.instructions+=2;NFSU2_TR(0x77c501);
u8 U[4];
w4(U+0,u32(0x781c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c506:{NFSU2_TR(0x77c506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c50bull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c50b:L77c50b:{c.instructions+=2;NFSU2_TR(0x77c50b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c50c:{NFSU2_TR(0x77c50c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c510:L77c510:{c.instructions+=3;NFSU2_TR(0x77c510);
u8 U[4];
w4(U+0,u32(0x78c298ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c515:{NFSU2_TR(0x77c515);
u8 U[4];
w4(U+0,u32(0x7f0a1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c51a:{NFSU2_TR(0x77c51a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c51full));
TAIL_STATIC(0x43dbd0u,43d);
}
B77c51f:L77c51f:{c.instructions+=6;NFSU2_TR(0x77c51f);
u8 U[4];
w4(U+0,u32(0x78c28cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c524:{NFSU2_TR(0x77c524);
u8 U[4];
w4(U+0,u32(0x7f0a68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c529:{NFSU2_TR(0x77c529);
s4(0x7f0a5c,u32(0x42280000ull));
}
B77c533:{NFSU2_TR(0x77c533);
s4(0x7f0a60,u32(0x20ull));
}
B77c53d:{NFSU2_TR(0x77c53d);
s4(0x7f0a64,u32(0x41b80000ull));
}
B77c547:{NFSU2_TR(0x77c547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c54cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B77c54c:L77c54c:{c.instructions+=6;NFSU2_TR(0x77c54c);
u8 U[4];
w4(U+0,u32(0x78c280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c551:{NFSU2_TR(0x77c551);
u8 U[4];
w4(U+0,u32(0x7f0ab4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c556:{NFSU2_TR(0x77c556);
s4(0x7f0aa8,u32(0x42280000ull));
}
B77c560:{NFSU2_TR(0x77c560);
s4(0x7f0aac,u32(0x20ull));
}
B77c56a:{NFSU2_TR(0x77c56a);
s4(0x7f0ab0,u32(0x41b80000ull));
}
B77c574:{NFSU2_TR(0x77c574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c579ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B77c579:L77c579:{c.instructions+=6;NFSU2_TR(0x77c579);
u8 U[4];
w4(U+0,u32(0x78c280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c57e:{NFSU2_TR(0x77c57e);
u8 U[4];
w4(U+0,u32(0x7f0b00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c583:{NFSU2_TR(0x77c583);
s4(0x7f0af4,u32(0x42280000ull));
}
B77c58d:{NFSU2_TR(0x77c58d);
s4(0x7f0af8,u32(0x20ull));
}
B77c597:{NFSU2_TR(0x77c597);
s4(0x7f0afc,u32(0x41b80000ull));
}
B77c5a1:{NFSU2_TR(0x77c5a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c5a6ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B77c5a6:L77c5a6:{c.instructions+=2;NFSU2_TR(0x77c5a6);
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
B77c5a9:{NFSU2_TR(0x77c5a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c5b0:L77c5b0:{c.instructions+=11;NFSU2_TR(0x77c5b0);
__builtin_memmove((R+4),gp(0x788864),4);
}
B77c5b6:{NFSU2_TR(0x77c5b6);
__builtin_memmove((R+0),gp(0x788868),4);
}
B77c5bb:{NFSU2_TR(0x77c5bb);
__builtin_memmove(gp(0x7f0b4c),(R+4),4);
}
B77c5c1:{NFSU2_TR(0x77c5c1);
{u32 ea_=u32(u32(8325964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77c5c7:{NFSU2_TR(0x77c5c7);
__builtin_memmove(gp(0x7f0b48),(R+0),4);
}
B77c5cc:{NFSU2_TR(0x77c5cc);
{u32 ea_=u32(u32(8325960u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77c5d2:{NFSU2_TR(0x77c5d2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77c5d4:{NFSU2_TR(0x77c5d4);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77c5da:{NFSU2_TR(0x77c5da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77c5dc:{NFSU2_TR(0x77c5dc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77c5df:{NFSU2_TR(0x77c5df);
if(r1(R+514)){{goto L77c5f3;}}
}
B77c5e1:L77c5e1:{c.instructions+=3;NFSU2_TR(0x77c5e1);
{u32 ea_=u32(u32(8325964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77c5e7:{NFSU2_TR(0x77c5e7);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B77c5ed:{NFSU2_TR(0x77c5ed);
{u32 ea_=u32(u32(8325964u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77c5f3:L77c5f3:{c.instructions+=2;NFSU2_TR(0x77c5f3);
u8 U[4];
w4(U+0,u32(0x781c60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c5f8:{NFSU2_TR(0x77c5f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c5fdull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c5fd:L77c5fd:{c.instructions+=2;NFSU2_TR(0x77c5fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c5fe:{NFSU2_TR(0x77c5fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c600:L77c600:{c.instructions+=6;NFSU2_TR(0x77c600);
{u32 ea_=u32(u32(7914152u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77c606:{NFSU2_TR(0x77c606);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77c608:{NFSU2_TR(0x77c608);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77c60e:{NFSU2_TR(0x77c60e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77c610:{NFSU2_TR(0x77c610);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77c613:{NFSU2_TR(0x77c613);
if(r1(R+514)){{goto L77c61f;}}
}
B77c615:L77c615:{c.instructions+=1;NFSU2_TR(0x77c615);
s4(0x7f0b68,u32(0x3f800008ull));
}
B77c61f:L77c61f:{c.instructions+=2;NFSU2_TR(0x77c61f);
u8 U[4];
w4(U+0,u32(0x781c70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c624:{NFSU2_TR(0x77c624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c629ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c629:L77c629:{c.instructions+=2;NFSU2_TR(0x77c629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c62a:{NFSU2_TR(0x77c62a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c630:L77c630:{c.instructions+=3;NFSU2_TR(0x77c630);
u8 U[4];
w4(U+0,u32(0x78c2b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c635:{NFSU2_TR(0x77c635);
w4(R+4,u32(0x82c5e8ull));
}
B77c63a:{NFSU2_TR(0x77c63a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c63full));
TAIL_STATIC(0x60b780u,60b);
}
B77c63f:L77c63f:{c.instructions+=2;NFSU2_TR(0x77c63f);
u8 U[4];
w4(U+0,u32(0x781c80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c644:{NFSU2_TR(0x77c644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c649ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c649:L77c649:{c.instructions+=2;NFSU2_TR(0x77c649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c64a:{NFSU2_TR(0x77c64a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c650:L77c650:{c.instructions+=2;NFSU2_TR(0x77c650);
w4(R+4,u32(0x82c6a4ull));
}
B77c655:{NFSU2_TR(0x77c655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c65aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77c65a:L77c65a:{c.instructions+=2;NFSU2_TR(0x77c65a);
u8 U[4];
w4(U+0,u32(0x781d40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c65f:{NFSU2_TR(0x77c65f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c664ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c664:L77c664:{c.instructions+=2;NFSU2_TR(0x77c664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c665:{NFSU2_TR(0x77c665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c670:L77c670:{c.instructions+=2;NFSU2_TR(0x77c670);
w4(R+4,u32(0x82bebcull));
}
B77c675:{NFSU2_TR(0x77c675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c67aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77c67a:L77c67a:{c.instructions+=2;NFSU2_TR(0x77c67a);
u8 U[4];
w4(U+0,u32(0x781d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c67f:{NFSU2_TR(0x77c67f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c684ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c684:L77c684:{c.instructions+=2;NFSU2_TR(0x77c684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c685:{NFSU2_TR(0x77c685);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c690:L77c690:{c.instructions+=2;NFSU2_TR(0x77c690);
w4(R+4,u32(0x82bec4ull));
}
B77c695:{NFSU2_TR(0x77c695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c69aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77c69a:L77c69a:{c.instructions+=2;NFSU2_TR(0x77c69a);
u8 U[4];
w4(U+0,u32(0x781d50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c69f:{NFSU2_TR(0x77c69f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c6a4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c6a4:L77c6a4:{c.instructions+=2;NFSU2_TR(0x77c6a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c6a5:{NFSU2_TR(0x77c6a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c6b0:L77c6b0:{c.instructions+=2;NFSU2_TR(0x77c6b0);
w4(R+4,u32(0x82c540ull));
}
B77c6b5:{NFSU2_TR(0x77c6b5);
TAIL_STATIC(0x734da0u,734);
}
B77c6c0:L77c6c0:{c.instructions+=2;NFSU2_TR(0x77c6c0);
w4(R+4,u32(0x82c6b4ull));
}
B77c6c5:{NFSU2_TR(0x77c6c5);
TAIL_STATIC(0x734da0u,734);
}
B77c6d0:L77c6d0:{c.instructions+=2;NFSU2_TR(0x77c6d0);
w4(R+4,u32(0x82c510ull));
}
B77c6d5:{NFSU2_TR(0x77c6d5);
TAIL_STATIC(0x734da0u,734);
}
B77c6e0:L77c6e0:{c.instructions+=2;NFSU2_TR(0x77c6e0);
w4(R+4,u32(0x82c548ull));
}
B77c6e5:{NFSU2_TR(0x77c6e5);
TAIL_STATIC(0x734da0u,734);
}
B77c6f0:L77c6f0:{c.instructions+=2;NFSU2_TR(0x77c6f0);
w4(R+4,u32(0x82c530ull));
}
B77c6f5:{NFSU2_TR(0x77c6f5);
TAIL_STATIC(0x734da0u,734);
}
B77c700:L77c700:{c.instructions+=2;NFSU2_TR(0x77c700);
w4(R+4,u32(0x82c4f8ull));
}
B77c705:{NFSU2_TR(0x77c705);
TAIL_STATIC(0x734da0u,734);
}
B77c710:L77c710:{c.instructions+=2;NFSU2_TR(0x77c710);
w4(R+4,u32(0x82c668ull));
}
B77c715:{NFSU2_TR(0x77c715);
TAIL_STATIC(0x734da0u,734);
}
B77c720:L77c720:{c.instructions+=2;NFSU2_TR(0x77c720);
w4(R+4,u32(0x82c5a8ull));
}
B77c725:{NFSU2_TR(0x77c725);
TAIL_STATIC(0x734da0u,734);
}
B77c730:L77c730:{c.instructions+=2;NFSU2_TR(0x77c730);
w4(R+4,u32(0x82c660ull));
}
B77c735:{NFSU2_TR(0x77c735);
TAIL_STATIC(0x734da0u,734);
}
B77c740:L77c740:{c.instructions+=2;NFSU2_TR(0x77c740);
w4(R+4,u32(0x82c590ull));
}
B77c745:{NFSU2_TR(0x77c745);
TAIL_STATIC(0x734da0u,734);
}
B77c750:L77c750:{c.instructions+=2;NFSU2_TR(0x77c750);
w4(R+4,u32(0x82c520ull));
}
B77c755:{NFSU2_TR(0x77c755);
TAIL_STATIC(0x734da0u,734);
}
B77c760:L77c760:{c.instructions+=2;NFSU2_TR(0x77c760);
w4(R+4,u32(0x82c6bcull));
}
B77c765:{NFSU2_TR(0x77c765);
TAIL_STATIC(0x734da0u,734);
}
B77c770:L77c770:{c.instructions+=2;NFSU2_TR(0x77c770);
w4(R+4,u32(0x82c5b0ull));
}
B77c775:{NFSU2_TR(0x77c775);
TAIL_STATIC(0x734da0u,734);
}
B77c780:L77c780:{c.instructions+=2;NFSU2_TR(0x77c780);
w4(R+4,u32(0x82c5a0ull));
}
B77c785:{NFSU2_TR(0x77c785);
TAIL_STATIC(0x734da0u,734);
}
B77c790:L77c790:{c.instructions+=2;NFSU2_TR(0x77c790);
w4(R+4,u32(0x82c5c8ull));
}
B77c795:{NFSU2_TR(0x77c795);
TAIL_STATIC(0x734da0u,734);
}
B77c7a0:L77c7a0:{c.instructions+=2;NFSU2_TR(0x77c7a0);
w4(R+4,u32(0x82c500ull));
}
B77c7a5:{NFSU2_TR(0x77c7a5);
TAIL_STATIC(0x734da0u,734);
}
B77c7b0:L77c7b0:{c.instructions+=2;NFSU2_TR(0x77c7b0);
w4(R+4,u32(0x82c558ull));
}
B77c7b5:{NFSU2_TR(0x77c7b5);
TAIL_STATIC(0x734da0u,734);
}
B77c7c0:L77c7c0:{c.instructions+=2;NFSU2_TR(0x77c7c0);
w4(R+4,u32(0x82c550ull));
}
B77c7c5:{NFSU2_TR(0x77c7c5);
TAIL_STATIC(0x734da0u,734);
}
B77c7d0:L77c7d0:{c.instructions+=2;NFSU2_TR(0x77c7d0);
w4(R+4,u32(0x82c508ull));
}
B77c7d5:{NFSU2_TR(0x77c7d5);
TAIL_STATIC(0x734da0u,734);
}
B77c7e0:L77c7e0:{c.instructions+=2;NFSU2_TR(0x77c7e0);
w4(R+4,u32(0x82c72cull));
}
B77c7e5:{NFSU2_TR(0x77c7e5);
TAIL_STATIC(0x734da0u,734);
}
B77c7f0:L77c7f0:{c.instructions+=2;NFSU2_TR(0x77c7f0);
w4(R+4,u32(0x82c5d8ull));
}
B77c7f5:{NFSU2_TR(0x77c7f5);
TAIL_STATIC(0x734da0u,734);
}
B77c800:L77c800:{c.instructions+=2;NFSU2_TR(0x77c800);
w4(R+4,u32(0x82c5e0ull));
}
B77c805:{NFSU2_TR(0x77c805);
TAIL_STATIC(0x734da0u,734);
}
B77c810:L77c810:{c.instructions+=2;NFSU2_TR(0x77c810);
w4(R+4,u32(0x82c5d0ull));
}
B77c815:{NFSU2_TR(0x77c815);
TAIL_STATIC(0x734da0u,734);
}
B77c820:L77c820:{c.instructions+=2;NFSU2_TR(0x77c820);
w4(R+4,u32(0x82c6e0ull));
}
B77c825:{NFSU2_TR(0x77c825);
TAIL_STATIC(0x734da0u,734);
}
B77c830:L77c830:{c.instructions+=2;NFSU2_TR(0x77c830);
w4(R+4,u32(0x82c598ull));
}
B77c835:{NFSU2_TR(0x77c835);
TAIL_STATIC(0x734da0u,734);
}
B77c840:L77c840:{c.instructions+=2;NFSU2_TR(0x77c840);
w4(R+4,u32(0x82c538ull));
}
B77c845:{NFSU2_TR(0x77c845);
TAIL_STATIC(0x734da0u,734);
}
B77c850:L77c850:{c.instructions+=2;NFSU2_TR(0x77c850);
w4(R+4,u32(0x82c680ull));
}
B77c855:{NFSU2_TR(0x77c855);
TAIL_STATIC(0x734da0u,734);
}
B77c860:L77c860:{c.instructions+=2;NFSU2_TR(0x77c860);
w4(R+4,u32(0x82c568ull));
}
B77c865:{NFSU2_TR(0x77c865);
TAIL_STATIC(0x734da0u,734);
}
B77c870:L77c870:{c.instructions+=2;NFSU2_TR(0x77c870);
w4(R+4,u32(0x82c648ull));
}
B77c875:{NFSU2_TR(0x77c875);
TAIL_STATIC(0x734da0u,734);
}
B77c880:L77c880:{c.instructions+=4;NFSU2_TR(0x77c880);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77c886:{NFSU2_TR(0x77c886);
{u32 ea_=u32(u32(7919460u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77c88c:{NFSU2_TR(0x77c88c);
{u32 ea_=u32(u32(8588560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77c892:{NFSU2_TR(0x77c892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c8a0:L77c8a0:{c.instructions+=2;NFSU2_TR(0x77c8a0);
w4(R+4,u32(0x830d08ull));
}
B77c8a5:{NFSU2_TR(0x77c8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c8aaull));
TAIL_STATIC(0x598750u,598);
}
B77c8aa:L77c8aa:{c.instructions+=2;NFSU2_TR(0x77c8aa);
u8 U[4];
w4(U+0,u32(0x781da0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c8af:{NFSU2_TR(0x77c8af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c8b4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c8b4:L77c8b4:{c.instructions+=2;NFSU2_TR(0x77c8b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c8b5:{NFSU2_TR(0x77c8b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c8c0:L77c8c0:{c.instructions+=2;NFSU2_TR(0x77c8c0);
w4(R+4,u32(0x835860ull));
}
B77c8c5:{NFSU2_TR(0x77c8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c8caull));
TAIL_STATIC(0x494650u,494);
}
B77c8ca:L77c8ca:{c.instructions+=2;NFSU2_TR(0x77c8ca);
u8 U[4];
w4(U+0,u32(0x781e80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c8cf:{NFSU2_TR(0x77c8cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c8d4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c8d4:L77c8d4:{c.instructions+=2;NFSU2_TR(0x77c8d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c8d5:{NFSU2_TR(0x77c8d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c8e0:L77c8e0:{c.instructions+=2;NFSU2_TR(0x77c8e0);
w4(R+4,u32(0x8357e0ull));
}
B77c8e5:{NFSU2_TR(0x77c8e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c8eaull));
TAIL_STATIC(0x494650u,494);
}
B77c8ea:L77c8ea:{c.instructions+=2;NFSU2_TR(0x77c8ea);
u8 U[4];
w4(U+0,u32(0x781e20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77c8ef:{NFSU2_TR(0x77c8ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77c8f4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77c8f4:L77c8f4:{c.instructions+=2;NFSU2_TR(0x77c8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77c8f5:{NFSU2_TR(0x77c8f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77c900:L77c900:{c.instructions+=54;NFSU2_TR(0x77c900);
__builtin_memmove((R+0),gp(0x78d778),4);
}
B77c905:{NFSU2_TR(0x77c905);
__builtin_memmove((R+8),gp(0x78d770),4);
}
B77c90b:{NFSU2_TR(0x77c90b);
__builtin_memmove((R+4),(R+0),4);
}
B77c90d:{NFSU2_TR(0x77c90d);
__builtin_memmove(gp(0x7f4240),(R+0),4);
}
B77c912:{NFSU2_TR(0x77c912);
__builtin_memmove(gp(0x7f4244),(R+4),4);
}
B77c918:{NFSU2_TR(0x77c918);
__builtin_memmove((R+4),gp(0x78d774),4);
}
B77c91e:{NFSU2_TR(0x77c91e);
__builtin_memmove((R+0),(R+8),4);
}
B77c920:{NFSU2_TR(0x77c920);
__builtin_memmove(gp(0x7f4278),(R+8),4);
}
B77c926:{NFSU2_TR(0x77c926);
__builtin_memmove((R+8),(R+4),4);
}
B77c928:{NFSU2_TR(0x77c928);
__builtin_memmove(gp(0x7f427c),(R+0),4);
}
B77c92d:{NFSU2_TR(0x77c92d);
__builtin_memmove(gp(0x7f4280),(R+4),4);
}
B77c933:{NFSU2_TR(0x77c933);
w1(R+4,u8(0x80ull));
}
B77c935:{NFSU2_TR(0x77c935);
w1(R+0,u8(0x25ull));
}
B77c937:{NFSU2_TR(0x77c937);
__builtin_memmove(gp(0x7f42a0),(R+0),1);
}
B77c93c:{NFSU2_TR(0x77c93c);
__builtin_memmove(gp(0x7f42a1),(R+0),1);
}
B77c941:{NFSU2_TR(0x77c941);
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
B77c943:{NFSU2_TR(0x77c943);
__builtin_memmove(gp(0x7f42a6),(R+4),1);
}
B77c949:{NFSU2_TR(0x77c949);
__builtin_memmove(gp(0x7f42a7),(R+4),1);
}
B77c94f:{NFSU2_TR(0x77c94f);
__builtin_memmove(gp(0x7f42a8),(R+4),1);
}
B77c955:{NFSU2_TR(0x77c955);
__builtin_memmove(gp(0x7f42a9),(R+4),1);
}
B77c95b:{NFSU2_TR(0x77c95b);
__builtin_memmove(gp(0x7f42aa),(R+4),1);
}
B77c961:{NFSU2_TR(0x77c961);
__builtin_memmove(gp(0x7f42ab),(R+4),1);
}
B77c967:{NFSU2_TR(0x77c967);
w1(R+4,u8(0x32ull));
}
B77c969:{NFSU2_TR(0x77c969);
s4(0x7f4248,u32(0x0ull));
}
B77c973:{NFSU2_TR(0x77c973);
s4(0x7f424c,u32(0x41200000ull));
}
B77c97d:{NFSU2_TR(0x77c97d);
s4(0x7f4250,u32(0x40000000ull));
}
B77c987:{NFSU2_TR(0x77c987);
s4(0x7f4254,u32(0x0ull));
}
B77c991:{NFSU2_TR(0x77c991);
s4(0x7f4258,u32(0x41200000ull));
}
B77c99b:{NFSU2_TR(0x77c99b);
s4(0x7f425c,u32(0x40000000ull));
}
B77c9a5:{NFSU2_TR(0x77c9a5);
s4(0x7f4260,u32(0x0ull));
}
B77c9af:{NFSU2_TR(0x77c9af);
s4(0x7f4264,u32(0x0ull));
}
B77c9b9:{NFSU2_TR(0x77c9b9);
s4(0x7f4268,u32(0x0ull));
}
B77c9c3:{NFSU2_TR(0x77c9c3);
s4(0x7f426c,u32(0x0ull));
}
B77c9cd:{NFSU2_TR(0x77c9cd);
s4(0x7f4270,u32(0x0ull));
}
B77c9d7:{NFSU2_TR(0x77c9d7);
s4(0x7f4274,u32(0x0ull));
}
B77c9e1:{NFSU2_TR(0x77c9e1);
__builtin_memmove(gp(0x7f4284),(R+8),4);
}
B77c9e7:{NFSU2_TR(0x77c9e7);
s4(0x7f4288,u32(0x0ull));
}
B77c9f1:{NFSU2_TR(0x77c9f1);
s4(0x7f428c,u32(0x0ull));
}
B77c9fb:{NFSU2_TR(0x77c9fb);
s4(0x7f4290,u32(0x0ull));
}
B77ca05:{NFSU2_TR(0x77ca05);
s4(0x7f4294,u32(0x0ull));
}
B77ca0f:{NFSU2_TR(0x77ca0f);
s4(0x7f4298,u32(0x0ull));
}
B77ca19:{NFSU2_TR(0x77ca19);
s4(0x7f429c,u32(0x0ull));
}
B77ca23:{NFSU2_TR(0x77ca23);
__builtin_memmove(gp(0x7f42a2),(R+0),1);
}
B77ca28:{NFSU2_TR(0x77ca28);
__builtin_memmove(gp(0x7f42a3),(R+0),1);
}
B77ca2d:{NFSU2_TR(0x77ca2d);
__builtin_memmove(gp(0x7f42a4),(R+0),1);
}
B77ca32:{NFSU2_TR(0x77ca32);
__builtin_memmove(gp(0x7f42a5),(R+0),1);
}
B77ca37:{NFSU2_TR(0x77ca37);
__builtin_memmove(gp(0x7f42ac),(R+0),1);
}
B77ca3c:{NFSU2_TR(0x77ca3c);
__builtin_memmove(gp(0x7f42ad),(R+4),1);
}
B77ca42:{NFSU2_TR(0x77ca42);
__builtin_memmove(gp(0x7f42ae),(R+0),1);
}
B77ca47:{NFSU2_TR(0x77ca47);
__builtin_memmove(gp(0x7f42af),(R+4),1);
}
B77ca4d:{NFSU2_TR(0x77ca4d);
__builtin_memmove(gp(0x7f42b0),(R+0),1);
}
B77ca52:{NFSU2_TR(0x77ca52);
__builtin_memmove(gp(0x7f42b1),(R+0),1);
}
B77ca57:{NFSU2_TR(0x77ca57);
__builtin_memmove(gp(0x7f42b4),(R+0),4);
}
B77ca5c:{NFSU2_TR(0x77ca5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ca60:L77ca60:{c.instructions+=2;NFSU2_TR(0x77ca60);
w4(R+4,u32(0x82dbc0ull));
}
B77ca65:{NFSU2_TR(0x77ca65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ca6aull));
TAIL_STATIC(0x598750u,598);
}
B77ca6a:L77ca6a:{c.instructions+=2;NFSU2_TR(0x77ca6a);
u8 U[4];
w4(U+0,u32(0x781e30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ca6f:{NFSU2_TR(0x77ca6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ca74ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ca74:L77ca74:{c.instructions+=2;NFSU2_TR(0x77ca74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ca75:{NFSU2_TR(0x77ca75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ca80:L77ca80:{c.instructions+=2;NFSU2_TR(0x77ca80);
w4(R+4,u32(0x832da4ull));
}
B77ca85:{NFSU2_TR(0x77ca85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ca8aull));
TAIL_STATIC(0x598750u,598);
}
B77ca8a:L77ca8a:{c.instructions+=2;NFSU2_TR(0x77ca8a);
u8 U[4];
w4(U+0,u32(0x781e40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ca8f:{NFSU2_TR(0x77ca8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ca94ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ca94:L77ca94:{c.instructions+=2;NFSU2_TR(0x77ca94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ca95:{NFSU2_TR(0x77ca95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77caa0:L77caa0:{c.instructions+=2;NFSU2_TR(0x77caa0);
w4(R+4,u32(0x830d1cull));
}
B77caa5:{NFSU2_TR(0x77caa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77caaaull));
TAIL_STATIC(0x598750u,598);
}
B77caaa:L77caaa:{c.instructions+=2;NFSU2_TR(0x77caaa);
u8 U[4];
w4(U+0,u32(0x781eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77caaf:{NFSU2_TR(0x77caaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cab4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cab4:L77cab4:{c.instructions+=2;NFSU2_TR(0x77cab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cab5:{NFSU2_TR(0x77cab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cac0:L77cac0:{c.instructions+=2;NFSU2_TR(0x77cac0);
w4(R+4,u32(0x835858ull));
}
B77cac5:{NFSU2_TR(0x77cac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cacaull));
TAIL_STATIC(0x598750u,598);
}
B77caca:L77caca:{c.instructions+=2;NFSU2_TR(0x77caca);
u8 U[4];
w4(U+0,u32(0x781ec0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cacf:{NFSU2_TR(0x77cacf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cad4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cad4:L77cad4:{c.instructions+=2;NFSU2_TR(0x77cad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cad5:{NFSU2_TR(0x77cad5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cae0:L77cae0:{c.instructions+=2;NFSU2_TR(0x77cae0);
w4(R+4,u32(0x835794ull));
}
B77cae5:{NFSU2_TR(0x77cae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77caeaull));
TAIL_STATIC(0x598750u,598);
}
B77caea:L77caea:{c.instructions+=2;NFSU2_TR(0x77caea);
u8 U[4];
w4(U+0,u32(0x781ed0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77caef:{NFSU2_TR(0x77caef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77caf4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77caf4:L77caf4:{c.instructions+=2;NFSU2_TR(0x77caf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77caf5:{NFSU2_TR(0x77caf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cb00:L77cb00:{c.instructions+=5;NFSU2_TR(0x77cb00);
u8 U[4];
w4(U+0,u32(0x4940e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb05:{NFSU2_TR(0x77cb05);
u8 U[4];
w4(U+0,u32(0x494060ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb0a:{NFSU2_TR(0x77cb0a);
u8 U[4];
w4(U+0,u32(0x80134000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb0f:{NFSU2_TR(0x77cb0f);
w4(R+4,u32(0x835840ull));
}
B77cb14:{NFSU2_TR(0x77cb14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cb19ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77cb19:L77cb19:{c.instructions+=1;NFSU2_TR(0x77cb19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cb20:L77cb20:{c.instructions+=8;NFSU2_TR(0x77cb20);
u8 U[4];
w4(U+0,u32(0x494210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb25:{NFSU2_TR(0x77cb25);
u8 U[4];
w4(U+0,u32(0x48da00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb2a:{NFSU2_TR(0x77cb2a);
u8 U[4];
w4(U+0,u32(0x48b410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb2f:{NFSU2_TR(0x77cb2f);
u8 U[4];
w4(U+0,u32(0x494190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb34:{NFSU2_TR(0x77cb34);
u8 U[4];
w4(U+0,u32(0x494140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb39:{NFSU2_TR(0x77cb39);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb3e:{NFSU2_TR(0x77cb3e);
w4(R+4,u32(0x82dbc8ull));
}
B77cb43:{NFSU2_TR(0x77cb43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cb48ull));
TAIL_STATIC(0x493390u,493);
}
B77cb48:L77cb48:{c.instructions+=2;NFSU2_TR(0x77cb48);
u8 U[4];
w4(U+0,u32(0x781db0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb4d:{NFSU2_TR(0x77cb4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cb52ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cb52:L77cb52:{c.instructions+=2;NFSU2_TR(0x77cb52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cb53:{NFSU2_TR(0x77cb53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cb60:L77cb60:{c.instructions+=2;NFSU2_TR(0x77cb60);
w4(R+4,u32(0x830c78ull));
}
B77cb65:{NFSU2_TR(0x77cb65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cb6aull));
TAIL_STATIC(0x494960u,494);
}
B77cb6a:L77cb6a:{c.instructions+=2;NFSU2_TR(0x77cb6a);
u8 U[4];
w4(U+0,u32(0x781e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb6f:{NFSU2_TR(0x77cb6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cb74ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cb74:L77cb74:{c.instructions+=2;NFSU2_TR(0x77cb74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cb75:{NFSU2_TR(0x77cb75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cb80:L77cb80:{c.instructions+=2;NFSU2_TR(0x77cb80);
u8 U[4];
w4(U+0,u32(0x781d60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb85:{NFSU2_TR(0x77cb85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cb8aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cb8a:L77cb8a:{c.instructions+=2;NFSU2_TR(0x77cb8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cb8b:{NFSU2_TR(0x77cb8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cb90:L77cb90:{c.instructions+=2;NFSU2_TR(0x77cb90);
w4(R+4,u32(0x830d30ull));
}
B77cb95:{NFSU2_TR(0x77cb95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cb9aull));
TAIL_STATIC(0x494230u,494);
}
B77cb9a:L77cb9a:{c.instructions+=2;NFSU2_TR(0x77cb9a);
u8 U[4];
w4(U+0,u32(0x781e50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cb9f:{NFSU2_TR(0x77cb9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cba4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cba4:L77cba4:{c.instructions+=2;NFSU2_TR(0x77cba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cba5:{NFSU2_TR(0x77cba5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cbb0:L77cbb0:{c.instructions+=2;NFSU2_TR(0x77cbb0);
w4(R+4,u32(0x830ae8ull));
}
B77cbb5:{NFSU2_TR(0x77cbb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cbbaull));
TAIL_STATIC(0x598750u,598);
}
B77cbba:L77cbba:{c.instructions+=2;NFSU2_TR(0x77cbba);
u8 U[4];
w4(U+0,u32(0x781ea0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cbbf:{NFSU2_TR(0x77cbbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cbc4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cbc4:L77cbc4:{c.instructions+=2;NFSU2_TR(0x77cbc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cbc5:{NFSU2_TR(0x77cbc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cbd0:L77cbd0:{c.instructions+=2;NFSU2_TR(0x77cbd0);
w4(R+4,u32(0x830d14ull));
}
B77cbd5:{NFSU2_TR(0x77cbd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cbdaull));
TAIL_STATIC(0x598750u,598);
}
B77cbda:L77cbda:{c.instructions+=2;NFSU2_TR(0x77cbda);
u8 U[4];
w4(U+0,u32(0x781e60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cbdf:{NFSU2_TR(0x77cbdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cbe4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cbe4:L77cbe4:{c.instructions+=2;NFSU2_TR(0x77cbe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cbe5:{NFSU2_TR(0x77cbe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cbf0:L77cbf0:{c.instructions+=2;NFSU2_TR(0x77cbf0);
w4(R+4,u32(0x8358c0ull));
}
B77cbf5:{NFSU2_TR(0x77cbf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cbfaull));
TAIL_STATIC(0x598750u,598);
}
B77cbfa:L77cbfa:{c.instructions+=2;NFSU2_TR(0x77cbfa);
u8 U[4];
w4(U+0,u32(0x781dc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cbff:{NFSU2_TR(0x77cbff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cc04ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cc04:L77cc04:{c.instructions+=2;NFSU2_TR(0x77cc04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cc05:{NFSU2_TR(0x77cc05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cc10:L77cc10:{c.instructions+=2;NFSU2_TR(0x77cc10);
u8 U[4];
w4(U+0,u32(0x781d70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc15:{NFSU2_TR(0x77cc15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cc1aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cc1a:L77cc1a:{c.instructions+=2;NFSU2_TR(0x77cc1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cc1b:{NFSU2_TR(0x77cc1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cc20:L77cc20:{c.instructions+=5;NFSU2_TR(0x77cc20);
u8 U[4];
w4(U+0,u32(0x48e270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc25:{NFSU2_TR(0x77cc25);
u8 U[4];
w4(U+0,u32(0x48e070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc2a:{NFSU2_TR(0x77cc2a);
u8 U[4];
w4(U+0,u32(0x135200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc2f:{NFSU2_TR(0x77cc2f);
w4(R+4,u32(0x835784ull));
}
B77cc34:{NFSU2_TR(0x77cc34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cc39ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77cc39:L77cc39:{c.instructions+=1;NFSU2_TR(0x77cc39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cc40:L77cc40:{c.instructions+=5;NFSU2_TR(0x77cc40);
u8 U[4];
w4(U+0,u32(0x48e270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc45:{NFSU2_TR(0x77cc45);
u8 U[4];
w4(U+0,u32(0x48e070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc4a:{NFSU2_TR(0x77cc4a);
u8 U[4];
w4(U+0,u32(0x80135100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc4f:{NFSU2_TR(0x77cc4f);
w4(R+4,u32(0x830af8ull));
}
B77cc54:{NFSU2_TR(0x77cc54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cc59ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77cc59:L77cc59:{c.instructions+=1;NFSU2_TR(0x77cc59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cc60:L77cc60:{c.instructions+=5;NFSU2_TR(0x77cc60);
u8 U[4];
w4(U+0,u32(0x48e270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc65:{NFSU2_TR(0x77cc65);
u8 U[4];
w4(U+0,u32(0x48e070ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc6a:{NFSU2_TR(0x77cc6a);
u8 U[4];
w4(U+0,u32(0x80135000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc6f:{NFSU2_TR(0x77cc6f);
w4(R+4,u32(0x82dbb0ull));
}
B77cc74:{NFSU2_TR(0x77cc74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cc79ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77cc79:L77cc79:{c.instructions+=1;NFSU2_TR(0x77cc79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cc80:L77cc80:{c.instructions+=2;NFSU2_TR(0x77cc80);
w4(R+4,u32(0x835850ull));
}
B77cc85:{NFSU2_TR(0x77cc85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cc8aull));
TAIL_STATIC(0x598750u,598);
}
B77cc8a:L77cc8a:{c.instructions+=2;NFSU2_TR(0x77cc8a);
u8 U[4];
w4(U+0,u32(0x781ee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cc8f:{NFSU2_TR(0x77cc8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cc94ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cc94:L77cc94:{c.instructions+=2;NFSU2_TR(0x77cc94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cc95:{NFSU2_TR(0x77cc95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cca0:L77cca0:{c.instructions+=6;NFSU2_TR(0x77cca0);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cca5:{NFSU2_TR(0x77cca5);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ccaa:{NFSU2_TR(0x77ccaa);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ccaf:{NFSU2_TR(0x77ccaf);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ccb1:{NFSU2_TR(0x77ccb1);
u8 U[4];
w4(U+0,u32(0x82dc08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ccb6:{NFSU2_TR(0x77ccb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ccbbull));
TAIL_STATIC(0x75c461u,75c);
}
B77ccbb:L77ccbb:{c.instructions+=2;NFSU2_TR(0x77ccbb);
u8 U[4];
w4(U+0,u32(0x781d80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ccc0:{NFSU2_TR(0x77ccc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ccc5ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ccc5:L77ccc5:{c.instructions+=2;NFSU2_TR(0x77ccc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ccc6:{NFSU2_TR(0x77ccc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ccd0:L77ccd0:{c.instructions+=6;NFSU2_TR(0x77ccd0);
u8 U[4];
w4(U+0,u32(0x4919d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ccd5:{NFSU2_TR(0x77ccd5);
u8 U[4];
w4(U+0,u32(0x491940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ccda:{NFSU2_TR(0x77ccda);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ccdc:{NFSU2_TR(0x77ccdc);
u8 U[4];
w4(U+0,u32(0x70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ccde:{NFSU2_TR(0x77ccde);
u8 U[4];
w4(U+0,u32(0x832de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cce3:{NFSU2_TR(0x77cce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cce8ull));
TAIL_STATIC(0x75c461u,75c);
}
B77cce8:L77cce8:{c.instructions+=2;NFSU2_TR(0x77cce8);
u8 U[4];
w4(U+0,u32(0x781dd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cced:{NFSU2_TR(0x77cced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ccf2ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ccf2:L77ccf2:{c.instructions+=2;NFSU2_TR(0x77ccf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ccf3:{NFSU2_TR(0x77ccf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cd00:L77cd00:{c.instructions+=2;NFSU2_TR(0x77cd00);
w4(R+4,u32(0x830af0ull));
}
B77cd05:{NFSU2_TR(0x77cd05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cd0aull));
TAIL_STATIC(0x598750u,598);
}
B77cd0a:L77cd0a:{c.instructions+=2;NFSU2_TR(0x77cd0a);
u8 U[4];
w4(U+0,u32(0x781df0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cd0f:{NFSU2_TR(0x77cd0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cd14ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cd14:L77cd14:{c.instructions+=2;NFSU2_TR(0x77cd14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cd15:{NFSU2_TR(0x77cd15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cd20:L77cd20:{c.instructions+=2;NFSU2_TR(0x77cd20);
w4(R+4,u32(0x82dc00ull));
}
B77cd25:{NFSU2_TR(0x77cd25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cd2aull));
TAIL_STATIC(0x598750u,598);
}
B77cd2a:L77cd2a:{c.instructions+=2;NFSU2_TR(0x77cd2a);
u8 U[4];
w4(U+0,u32(0x781e00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cd2f:{NFSU2_TR(0x77cd2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cd34ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cd34:L77cd34:{c.instructions+=2;NFSU2_TR(0x77cd34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cd35:{NFSU2_TR(0x77cd35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cd40:L77cd40:{c.instructions+=2;NFSU2_TR(0x77cd40);
w4(R+4,u32(0x8358c8ull));
}
B77cd45:{NFSU2_TR(0x77cd45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cd4aull));
TAIL_STATIC(0x598750u,598);
}
B77cd4a:L77cd4a:{c.instructions+=2;NFSU2_TR(0x77cd4a);
u8 U[4];
w4(U+0,u32(0x781e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cd4f:{NFSU2_TR(0x77cd4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cd54ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cd54:L77cd54:{c.instructions+=2;NFSU2_TR(0x77cd54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cd55:{NFSU2_TR(0x77cd55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cd60:L77cd60:{c.instructions+=5;NFSU2_TR(0x77cd60);
u8 U[4];
w4(U+0,u32(0x495040ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cd65:{NFSU2_TR(0x77cd65);
u8 U[4];
w4(U+0,u32(0x494ea0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cd6a:{NFSU2_TR(0x77cd6a);
u8 U[4];
w4(U+0,u32(0xb3300000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cd6f:{NFSU2_TR(0x77cd6f);
w4(R+4,u32(0x82dba0ull));
}
B77cd74:{NFSU2_TR(0x77cd74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cd79ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77cd79:L77cd79:{c.instructions+=1;NFSU2_TR(0x77cd79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cd80:L77cd80:{c.instructions+=5;NFSU2_TR(0x77cd80);
u8 U[4];
w4(U+0,u32(0x495040ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cd85:{NFSU2_TR(0x77cd85);
u8 U[4];
w4(U+0,u32(0x494ea0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cd8a:{NFSU2_TR(0x77cd8a);
u8 U[4];
w4(U+0,u32(0xb3320000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cd8f:{NFSU2_TR(0x77cd8f);
w4(R+4,u32(0x8358d0ull));
}
B77cd94:{NFSU2_TR(0x77cd94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cd99ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77cd99:L77cd99:{c.instructions+=1;NFSU2_TR(0x77cd99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cda0:L77cda0:{c.instructions+=5;NFSU2_TR(0x77cda0);
u8 U[4];
w4(U+0,u32(0x495040ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cda5:{NFSU2_TR(0x77cda5);
u8 U[4];
w4(U+0,u32(0x494ea0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cdaa:{NFSU2_TR(0x77cdaa);
u8 U[4];
w4(U+0,u32(0xb0300100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cdaf:{NFSU2_TR(0x77cdaf);
w4(R+4,u32(0x830b08ull));
}
B77cdb4:{NFSU2_TR(0x77cdb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cdb9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77cdb9:L77cdb9:{c.instructions+=1;NFSU2_TR(0x77cdb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77cdc0:L77cdc0:{c.instructions+=8;NFSU2_TR(0x77cdc0);
u8 U[4];
w4(U+0,u32(0x4950d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cdc5:{NFSU2_TR(0x77cdc5);
u8 U[4];
w4(U+0,u32(0x494500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cdca:{NFSU2_TR(0x77cdca);
u8 U[4];
w4(U+0,u32(0x48b410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cdcf:{NFSU2_TR(0x77cdcf);
u8 U[4];
w4(U+0,u32(0x494c80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cdd4:{NFSU2_TR(0x77cdd4);
u8 U[4];
w4(U+0,u32(0x494c10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cdd9:{NFSU2_TR(0x77cdd9);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cdde:{NFSU2_TR(0x77cdde);
w4(R+4,u32(0x83579cull));
}
B77cde3:{NFSU2_TR(0x77cde3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cde8ull));
TAIL_STATIC(0x493390u,493);
}
B77cde8:L77cde8:{c.instructions+=2;NFSU2_TR(0x77cde8);
u8 U[4];
w4(U+0,u32(0x781e10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77cded:{NFSU2_TR(0x77cded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cdf2ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cdf2:L77cdf2:{c.instructions+=2;NFSU2_TR(0x77cdf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cdf3:{NFSU2_TR(0x77cdf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ce00:L77ce00:{c.instructions+=4;NFSU2_TR(0x77ce00);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ce06:{NFSU2_TR(0x77ce06);
{u32 ea_=u32(u32(7920564u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77ce0c:{NFSU2_TR(0x77ce0c);
{u32 ea_=u32(u32(8611148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77ce12:{NFSU2_TR(0x77ce12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ce20:L77ce20:{c.instructions+=6;NFSU2_TR(0x77ce20);
u8 U[4];
w4(U+0,u32(0x4957a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce25:{NFSU2_TR(0x77ce25);
u8 U[4];
w4(U+0,u32(0x4ff430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce2a:{NFSU2_TR(0x77ce2a);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce2c:{NFSU2_TR(0x77ce2c);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce2e:{NFSU2_TR(0x77ce2e);
u8 U[4];
w4(U+0,u32(0x836568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce33:{NFSU2_TR(0x77ce33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ce38ull));
TAIL_STATIC(0x75c461u,75c);
}
B77ce38:L77ce38:{c.instructions+=2;NFSU2_TR(0x77ce38);
u8 U[4];
w4(U+0,u32(0x781ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce3d:{NFSU2_TR(0x77ce3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ce42ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ce42:L77ce42:{c.instructions+=2;NFSU2_TR(0x77ce42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ce43:{NFSU2_TR(0x77ce43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ce50:L77ce50:{c.instructions+=3;NFSU2_TR(0x77ce50);
u8 U[4];
w4(U+0,u32(0xc8cfe9f2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce55:{NFSU2_TR(0x77ce55);
w4(R+4,u32(0x837188ull));
}
B77ce5a:{NFSU2_TR(0x77ce5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ce5full));
TAIL_STATIC(0x5054a0u,505);
}
B77ce5f:L77ce5f:{c.instructions+=1;NFSU2_TR(0x77ce5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ce60:L77ce60:{c.instructions+=3;NFSU2_TR(0x77ce60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce62:{NFSU2_TR(0x77ce62);
w4(R+4,u32(0x837198ull));
}
B77ce67:{NFSU2_TR(0x77ce67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ce6cull));
TAIL_STATIC(0x5054a0u,505);
}
B77ce6c:L77ce6c:{c.instructions+=1;NFSU2_TR(0x77ce6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ce70:L77ce70:{c.instructions+=3;NFSU2_TR(0x77ce70);
u8 U[4];
w4(U+0,u32(0x50549ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce75:{NFSU2_TR(0x77ce75);
w4(R+4,u32(0x836550ull));
}
B77ce7a:{NFSU2_TR(0x77ce7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ce7full));
TAIL_STATIC(0x5054a0u,505);
}
B77ce7f:L77ce7f:{c.instructions+=1;NFSU2_TR(0x77ce7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ce80:L77ce80:{c.instructions+=3;NFSU2_TR(0x77ce80);
u8 U[4];
w4(U+0,u32(0xff323232ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce85:{NFSU2_TR(0x77ce85);
w4(R+4,u32(0x837178ull));
}
B77ce8a:{NFSU2_TR(0x77ce8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ce8full));
TAIL_STATIC(0x5054a0u,505);
}
B77ce8f:L77ce8f:{c.instructions+=1;NFSU2_TR(0x77ce8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ce90:L77ce90:{c.instructions+=2;NFSU2_TR(0x77ce90);
w4(R+4,u32(0x8364f4ull));
}
B77ce95:{NFSU2_TR(0x77ce95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ce9aull));
TAIL_STATIC(0x510920u,510);
}
B77ce9a:L77ce9a:{c.instructions+=2;NFSU2_TR(0x77ce9a);
u8 U[4];
w4(U+0,u32(0x781f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ce9f:{NFSU2_TR(0x77ce9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77cea4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77cea4:L77cea4:{c.instructions+=2;NFSU2_TR(0x77cea4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77cea5:{NFSU2_TR(0x77cea5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ceb0:L77ceb0:{c.instructions+=51;NFSU2_TR(0x77ceb0);
__builtin_memmove((R+0),gp(0x78dffc),4);
}
B77ceb5:{NFSU2_TR(0x77ceb5);
__builtin_memmove((R+8),gp(0x78dff4),4);
}
B77cebb:{NFSU2_TR(0x77cebb);
__builtin_memmove((R+4),(R+0),4);
}
B77cebd:{NFSU2_TR(0x77cebd);
__builtin_memmove(gp(0x7f6900),(R+0),4);
}
B77cec2:{NFSU2_TR(0x77cec2);
__builtin_memmove(gp(0x7f6904),(R+4),4);
}
B77cec8:{NFSU2_TR(0x77cec8);
__builtin_memmove((R+4),gp(0x78dff8),4);
}
B77cece:{NFSU2_TR(0x77cece);
__builtin_memmove((R+0),(R+8),4);
}
B77ced0:{NFSU2_TR(0x77ced0);
__builtin_memmove(gp(0x7f6938),(R+8),4);
}
B77ced6:{NFSU2_TR(0x77ced6);
__builtin_memmove((R+8),(R+4),4);
}
B77ced8:{NFSU2_TR(0x77ced8);
__builtin_memmove(gp(0x7f693c),(R+0),4);
}
B77cedd:{NFSU2_TR(0x77cedd);
__builtin_memmove(gp(0x7f6940),(R+4),4);
}
B77cee3:{NFSU2_TR(0x77cee3);
w1(R+4,u8(0x80ull));
}
B77cee5:{NFSU2_TR(0x77cee5);
w1(R+0,u8(0x25ull));
}
B77cee7:{NFSU2_TR(0x77cee7);
__builtin_memmove(gp(0x7f6960),(R+0),1);
}
B77ceec:{NFSU2_TR(0x77ceec);
__builtin_memmove(gp(0x7f6961),(R+0),1);
}
B77cef1:{NFSU2_TR(0x77cef1);
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
B77cef3:{NFSU2_TR(0x77cef3);
__builtin_memmove(gp(0x7f6966),(R+4),1);
}
B77cef9:{NFSU2_TR(0x77cef9);
__builtin_memmove(gp(0x7f6967),(R+4),1);
}
B77ceff:{NFSU2_TR(0x77ceff);
__builtin_memmove(gp(0x7f6968),(R+4),1);
}
B77cf05:{NFSU2_TR(0x77cf05);
__builtin_memmove(gp(0x7f6969),(R+4),1);
}
B77cf0b:{NFSU2_TR(0x77cf0b);
__builtin_memmove(gp(0x7f696a),(R+4),1);
}
B77cf11:{NFSU2_TR(0x77cf11);
__builtin_memmove(gp(0x7f696b),(R+4),1);
}
B77cf17:{NFSU2_TR(0x77cf17);
w1(R+4,u8(0x32ull));
}
B77cf19:{NFSU2_TR(0x77cf19);
s4(0x7f6908,u32(0x0ull));
}
B77cf23:{NFSU2_TR(0x77cf23);
s4(0x7f690c,u32(0x41200000ull));
}
B77cf2d:{NFSU2_TR(0x77cf2d);
s4(0x7f6910,u32(0x40000000ull));
}
B77cf37:{NFSU2_TR(0x77cf37);
s4(0x7f6914,u32(0x0ull));
}
B77cf41:{NFSU2_TR(0x77cf41);
s4(0x7f6918,u32(0x41200000ull));
}
B77cf4b:{NFSU2_TR(0x77cf4b);
s4(0x7f691c,u32(0x40000000ull));
}
B77cf55:{NFSU2_TR(0x77cf55);
s4(0x7f6920,u32(0x0ull));
}
B77cf5f:{NFSU2_TR(0x77cf5f);
s4(0x7f6924,u32(0x0ull));
}
B77cf69:{NFSU2_TR(0x77cf69);
s4(0x7f6928,u32(0x0ull));
}
B77cf73:{NFSU2_TR(0x77cf73);
s4(0x7f692c,u32(0x0ull));
}
B77cf7d:{NFSU2_TR(0x77cf7d);
s4(0x7f6930,u32(0x0ull));
}
B77cf87:{NFSU2_TR(0x77cf87);
s4(0x7f6934,u32(0x0ull));
}
B77cf91:{NFSU2_TR(0x77cf91);
__builtin_memmove(gp(0x7f6944),(R+8),4);
}
B77cf97:{NFSU2_TR(0x77cf97);
s4(0x7f6948,u32(0x0ull));
}
B77cfa1:{NFSU2_TR(0x77cfa1);
s4(0x7f694c,u32(0x0ull));
}
B77cfab:{NFSU2_TR(0x77cfab);
s4(0x7f6950,u32(0x0ull));
}
B77cfb5:{NFSU2_TR(0x77cfb5);
s4(0x7f6954,u32(0x0ull));
}
B77cfbf:{NFSU2_TR(0x77cfbf);
s4(0x7f6958,u32(0x0ull));
}
B77cfc9:{NFSU2_TR(0x77cfc9);
s4(0x7f695c,u32(0x0ull));
}
B77cfd3:{NFSU2_TR(0x77cfd3);
__builtin_memmove(gp(0x7f6962),(R+0),1);
}
B77cfd8:{NFSU2_TR(0x77cfd8);
__builtin_memmove(gp(0x7f6963),(R+0),1);
}
B77cfdd:{NFSU2_TR(0x77cfdd);
__builtin_memmove(gp(0x7f6964),(R+0),1);
}
B77cfe2:{NFSU2_TR(0x77cfe2);
__builtin_memmove(gp(0x7f6965),(R+0),1);
}
B77cfe7:{NFSU2_TR(0x77cfe7);
__builtin_memmove(gp(0x7f696c),(R+0),1);
}
B77cfec:{NFSU2_TR(0x77cfec);
__builtin_memmove(gp(0x7f696d),(R+4),1);
}
B77cff2:{NFSU2_TR(0x77cff2);
__builtin_memmove(gp(0x7f696e),(R+0),1);
}
B77cff7:{NFSU2_TR(0x77cff7);
__builtin_memmove(gp(0x7f696f),(R+4),1);
}
B77cffd:{NFSU2_TR(0x77cffd);
__builtin_memmove(gp(0x7f6970),(R+0),1);
TAIL_STATIC(0x77d002u,77d);
}
XIT:NFSU2_TR_EXIT(0x77c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
