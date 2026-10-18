#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_522(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_53e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_77e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x77d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x77d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_77d(u8* __restrict R,Cpu& c);
u32 page_77d(Cpu& c){return body_77d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_77d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x77d002:goto L77d002;
case 0x77d007:c.instructions+=2;goto B77d007;
case 0x77d00c:c.instructions+=1;goto B77d00c;
case 0x77d010:goto L77d010;
case 0x77d015:c.instructions+=68;goto B77d015;
case 0x77d01a:c.instructions+=67;goto B77d01a;
case 0x77d01f:c.instructions+=66;goto B77d01f;
case 0x77d021:c.instructions+=65;goto B77d021;
case 0x77d02b:c.instructions+=64;goto B77d02b;
case 0x77d035:c.instructions+=63;goto B77d035;
case 0x77d03f:c.instructions+=62;goto B77d03f;
case 0x77d045:c.instructions+=61;goto B77d045;
case 0x77d04b:c.instructions+=60;goto B77d04b;
case 0x77d055:c.instructions+=59;goto B77d055;
case 0x77d05f:c.instructions+=58;goto B77d05f;
case 0x77d069:c.instructions+=57;goto B77d069;
case 0x77d073:c.instructions+=56;goto B77d073;
case 0x77d078:c.instructions+=55;goto B77d078;
case 0x77d082:c.instructions+=54;goto B77d082;
case 0x77d08c:c.instructions+=53;goto B77d08c;
case 0x77d096:c.instructions+=52;goto B77d096;
case 0x77d09b:c.instructions+=51;goto B77d09b;
case 0x77d0a0:c.instructions+=50;goto B77d0a0;
case 0x77d0aa:c.instructions+=49;goto B77d0aa;
case 0x77d0b4:c.instructions+=48;goto B77d0b4;
case 0x77d0b9:c.instructions+=47;goto B77d0b9;
case 0x77d0c3:c.instructions+=46;goto B77d0c3;
case 0x77d0c9:c.instructions+=45;goto B77d0c9;
case 0x77d0d3:c.instructions+=44;goto B77d0d3;
case 0x77d0dd:c.instructions+=43;goto B77d0dd;
case 0x77d0e7:c.instructions+=42;goto B77d0e7;
case 0x77d0f1:c.instructions+=41;goto B77d0f1;
case 0x77d0f6:c.instructions+=40;goto B77d0f6;
case 0x77d100:c.instructions+=39;goto B77d100;
case 0x77d10a:c.instructions+=38;goto B77d10a;
case 0x77d10f:c.instructions+=37;goto B77d10f;
case 0x77d114:c.instructions+=36;goto B77d114;
case 0x77d119:c.instructions+=35;goto B77d119;
case 0x77d123:c.instructions+=34;goto B77d123;
case 0x77d12d:c.instructions+=33;goto B77d12d;
case 0x77d132:c.instructions+=32;goto B77d132;
case 0x77d13c:c.instructions+=31;goto B77d13c;
case 0x77d141:c.instructions+=30;goto B77d141;
case 0x77d14b:c.instructions+=29;goto B77d14b;
case 0x77d155:c.instructions+=28;goto B77d155;
case 0x77d15a:c.instructions+=27;goto B77d15a;
case 0x77d164:c.instructions+=26;goto B77d164;
case 0x77d169:c.instructions+=25;goto B77d169;
case 0x77d173:c.instructions+=24;goto B77d173;
case 0x77d17d:c.instructions+=23;goto B77d17d;
case 0x77d187:c.instructions+=22;goto B77d187;
case 0x77d18c:c.instructions+=21;goto B77d18c;
case 0x77d191:c.instructions+=20;goto B77d191;
case 0x77d19b:c.instructions+=19;goto B77d19b;
case 0x77d1a5:c.instructions+=18;goto B77d1a5;
case 0x77d1aa:c.instructions+=17;goto B77d1aa;
case 0x77d1b4:c.instructions+=16;goto B77d1b4;
case 0x77d1b9:c.instructions+=15;goto B77d1b9;
case 0x77d1c3:c.instructions+=14;goto B77d1c3;
case 0x77d1cd:c.instructions+=13;goto B77d1cd;
case 0x77d1d7:c.instructions+=12;goto B77d1d7;
case 0x77d1e1:c.instructions+=11;goto B77d1e1;
case 0x77d1e6:c.instructions+=10;goto B77d1e6;
case 0x77d1f0:c.instructions+=9;goto B77d1f0;
case 0x77d1fa:c.instructions+=8;goto B77d1fa;
case 0x77d1ff:c.instructions+=7;goto B77d1ff;
case 0x77d204:c.instructions+=6;goto B77d204;
case 0x77d209:c.instructions+=5;goto B77d209;
case 0x77d213:c.instructions+=4;goto B77d213;
case 0x77d21d:c.instructions+=3;goto B77d21d;
case 0x77d222:c.instructions+=2;goto B77d222;
case 0x77d22c:c.instructions+=1;goto B77d22c;
case 0x77d230:goto L77d230;
case 0x77d235:c.instructions+=1;goto B77d235;
case 0x77d23a:goto L77d23a;
case 0x77d23f:c.instructions+=1;goto B77d23f;
case 0x77d244:goto L77d244;
case 0x77d245:c.instructions+=1;goto B77d245;
case 0x77d250:goto L77d250;
case 0x77d255:c.instructions+=1;goto B77d255;
case 0x77d25a:goto L77d25a;
case 0x77d25f:c.instructions+=1;goto B77d25f;
case 0x77d264:goto L77d264;
case 0x77d265:c.instructions+=1;goto B77d265;
case 0x77d270:goto L77d270;
case 0x77d271:c.instructions+=5;goto B77d271;
case 0x77d272:c.instructions+=4;goto B77d272;
case 0x77d273:c.instructions+=3;goto B77d273;
case 0x77d278:c.instructions+=2;goto B77d278;
case 0x77d27d:c.instructions+=1;goto B77d27d;
case 0x77d280:goto L77d280;
case 0x77d285:c.instructions+=8;goto B77d285;
case 0x77d28b:c.instructions+=7;goto B77d28b;
case 0x77d28e:c.instructions+=6;goto B77d28e;
case 0x77d290:c.instructions+=5;goto B77d290;
case 0x77d291:c.instructions+=4;goto B77d291;
case 0x77d294:c.instructions+=3;goto B77d294;
case 0x77d297:c.instructions+=2;goto B77d297;
case 0x77d29d:c.instructions+=1;goto B77d29d;
case 0x77d2a2:goto L77d2a2;
case 0x77d2a9:c.instructions+=4;goto B77d2a9;
case 0x77d2ac:c.instructions+=3;goto B77d2ac;
case 0x77d2af:c.instructions+=2;goto B77d2af;
case 0x77d2b0:c.instructions+=1;goto B77d2b0;
case 0x77d2b2:goto L77d2b2;
case 0x77d2b3:c.instructions+=3;goto B77d2b3;
case 0x77d2b4:c.instructions+=2;goto B77d2b4;
case 0x77d2b5:c.instructions+=1;goto B77d2b5;
case 0x77d2c0:goto L77d2c0;
case 0x77d2c5:c.instructions+=1;goto B77d2c5;
case 0x77d2ca:goto L77d2ca;
case 0x77d2cf:c.instructions+=1;goto B77d2cf;
case 0x77d2d4:goto L77d2d4;
case 0x77d2d5:c.instructions+=1;goto B77d2d5;
case 0x77d2e0:goto L77d2e0;
case 0x77d2e5:c.instructions+=1;goto B77d2e5;
case 0x77d2ea:goto L77d2ea;
case 0x77d2ef:c.instructions+=1;goto B77d2ef;
case 0x77d2f4:goto L77d2f4;
case 0x77d2f5:c.instructions+=1;goto B77d2f5;
case 0x77d300:goto L77d300;
case 0x77d305:c.instructions+=1;goto B77d305;
case 0x77d30a:goto L77d30a;
case 0x77d30b:c.instructions+=1;goto B77d30b;
case 0x77d310:goto L77d310;
case 0x77d316:c.instructions+=3;goto B77d316;
case 0x77d31c:c.instructions+=2;goto B77d31c;
case 0x77d322:c.instructions+=1;goto B77d322;
case 0x77d330:goto L77d330;
case 0x77d335:c.instructions+=1;goto B77d335;
case 0x77d340:goto L77d340;
case 0x77d345:c.instructions+=8;goto B77d345;
case 0x77d34b:c.instructions+=7;goto B77d34b;
case 0x77d351:c.instructions+=6;goto B77d351;
case 0x77d356:c.instructions+=5;goto B77d356;
case 0x77d35b:c.instructions+=4;goto B77d35b;
case 0x77d361:c.instructions+=3;goto B77d361;
case 0x77d367:c.instructions+=2;goto B77d367;
case 0x77d36c:c.instructions+=1;goto B77d36c;
case 0x77d370:goto L77d370;
case 0x77d375:c.instructions+=1;goto B77d375;
case 0x77d37a:goto L77d37a;
case 0x77d37f:c.instructions+=1;goto B77d37f;
case 0x77d384:goto L77d384;
case 0x77d385:c.instructions+=1;goto B77d385;
case 0x77d390:goto L77d390;
case 0x77d395:c.instructions+=1;goto B77d395;
case 0x77d39a:goto L77d39a;
case 0x77d39f:c.instructions+=1;goto B77d39f;
case 0x77d3a4:goto L77d3a4;
case 0x77d3a5:c.instructions+=1;goto B77d3a5;
case 0x77d3b0:goto L77d3b0;
case 0x77d3b5:c.instructions+=1;goto B77d3b5;
case 0x77d3ba:goto L77d3ba;
case 0x77d3bf:c.instructions+=4;goto B77d3bf;
case 0x77d3c4:c.instructions+=3;goto B77d3c4;
case 0x77d3ce:c.instructions+=2;goto B77d3ce;
case 0x77d3d8:c.instructions+=1;goto B77d3d8;
case 0x77d3dd:goto L77d3dd;
case 0x77d3e2:c.instructions+=4;goto B77d3e2;
case 0x77d3e7:c.instructions+=3;goto B77d3e7;
case 0x77d3f1:c.instructions+=2;goto B77d3f1;
case 0x77d3fb:c.instructions+=1;goto B77d3fb;
case 0x77d400:goto L77d400;
case 0x77d405:c.instructions+=5;goto B77d405;
case 0x77d40a:c.instructions+=4;goto B77d40a;
case 0x77d40f:c.instructions+=3;goto B77d40f;
case 0x77d414:c.instructions+=2;goto B77d414;
case 0x77d419:c.instructions+=1;goto B77d419;
case 0x77d41e:goto L77d41e;
case 0x77d423:c.instructions+=4;goto B77d423;
case 0x77d428:c.instructions+=3;goto B77d428;
case 0x77d432:c.instructions+=2;goto B77d432;
case 0x77d43c:c.instructions+=1;goto B77d43c;
case 0x77d441:goto L77d441;
case 0x77d446:c.instructions+=4;goto B77d446;
case 0x77d44b:c.instructions+=3;goto B77d44b;
case 0x77d455:c.instructions+=2;goto B77d455;
case 0x77d45f:c.instructions+=1;goto B77d45f;
case 0x77d464:goto L77d464;
case 0x77d467:c.instructions+=3;goto B77d467;
case 0x77d46c:c.instructions+=2;goto B77d46c;
case 0x77d476:c.instructions+=1;goto B77d476;
case 0x77d480:goto L77d480;
case 0x77d485:c.instructions+=1;goto B77d485;
case 0x77d48a:goto L77d48a;
case 0x77d48f:c.instructions+=1;goto B77d48f;
case 0x77d494:goto L77d494;
case 0x77d495:c.instructions+=1;goto B77d495;
case 0x77d4a0:goto L77d4a0;
case 0x77d4a5:c.instructions+=1;goto B77d4a5;
case 0x77d4aa:goto L77d4aa;
case 0x77d4af:c.instructions+=1;goto B77d4af;
case 0x77d4b4:goto L77d4b4;
case 0x77d4b5:c.instructions+=1;goto B77d4b5;
case 0x77d4c0:goto L77d4c0;
case 0x77d4c5:c.instructions+=1;goto B77d4c5;
case 0x77d4ca:goto L77d4ca;
case 0x77d4cf:c.instructions+=1;goto B77d4cf;
case 0x77d4d4:goto L77d4d4;
case 0x77d4d5:c.instructions+=1;goto B77d4d5;
case 0x77d4e0:goto L77d4e0;
case 0x77d4e5:c.instructions+=1;goto B77d4e5;
case 0x77d4ea:goto L77d4ea;
case 0x77d4ef:c.instructions+=1;goto B77d4ef;
case 0x77d4f4:goto L77d4f4;
case 0x77d4f5:c.instructions+=1;goto B77d4f5;
case 0x77d500:goto L77d500;
case 0x77d505:c.instructions+=5;goto B77d505;
case 0x77d50a:c.instructions+=4;goto B77d50a;
case 0x77d50f:c.instructions+=3;goto B77d50f;
case 0x77d511:c.instructions+=2;goto B77d511;
case 0x77d516:c.instructions+=1;goto B77d516;
case 0x77d51b:goto L77d51b;
case 0x77d520:c.instructions+=1;goto B77d520;
case 0x77d525:goto L77d525;
case 0x77d526:c.instructions+=1;goto B77d526;
case 0x77d530:goto L77d530;
case 0x77d535:c.instructions+=1;goto B77d535;
case 0x77d53a:goto L77d53a;
case 0x77d53f:c.instructions+=1;goto B77d53f;
case 0x77d544:goto L77d544;
case 0x77d545:c.instructions+=1;goto B77d545;
case 0x77d550:goto L77d550;
case 0x77d555:c.instructions+=1;goto B77d555;
case 0x77d55a:goto L77d55a;
case 0x77d55f:c.instructions+=1;goto B77d55f;
case 0x77d564:goto L77d564;
case 0x77d565:c.instructions+=1;goto B77d565;
case 0x77d570:goto L77d570;
case 0x77d575:c.instructions+=1;goto B77d575;
case 0x77d57a:goto L77d57a;
case 0x77d57f:c.instructions+=1;goto B77d57f;
case 0x77d584:goto L77d584;
case 0x77d585:c.instructions+=1;goto B77d585;
case 0x77d590:goto L77d590;
case 0x77d595:c.instructions+=1;goto B77d595;
case 0x77d59a:goto L77d59a;
case 0x77d59f:c.instructions+=1;goto B77d59f;
case 0x77d5a4:goto L77d5a4;
case 0x77d5a5:c.instructions+=1;goto B77d5a5;
case 0x77d5b0:goto L77d5b0;
case 0x77d5b5:c.instructions+=1;goto B77d5b5;
case 0x77d5ba:goto L77d5ba;
case 0x77d5bf:c.instructions+=1;goto B77d5bf;
case 0x77d5c4:goto L77d5c4;
case 0x77d5c5:c.instructions+=1;goto B77d5c5;
case 0x77d5d0:goto L77d5d0;
case 0x77d5d6:c.instructions+=4;goto B77d5d6;
case 0x77d5dc:c.instructions+=3;goto B77d5dc;
case 0x77d5e2:c.instructions+=2;goto B77d5e2;
case 0x77d5e8:c.instructions+=1;goto B77d5e8;
case 0x77d5f0:goto L77d5f0;
case 0x77d5f5:c.instructions+=1;goto B77d5f5;
case 0x77d5fa:goto L77d5fa;
case 0x77d5ff:c.instructions+=1;goto B77d5ff;
case 0x77d604:goto L77d604;
case 0x77d605:c.instructions+=1;goto B77d605;
case 0x77d610:goto L77d610;
case 0x77d615:c.instructions+=1;goto B77d615;
case 0x77d61a:goto L77d61a;
case 0x77d61b:c.instructions+=1;goto B77d61b;
case 0x77d620:goto L77d620;
case 0x77d626:c.instructions+=3;goto B77d626;
case 0x77d62c:c.instructions+=2;goto B77d62c;
case 0x77d632:c.instructions+=1;goto B77d632;
case 0x77d640:goto L77d640;
case 0x77d645:c.instructions+=5;goto B77d645;
case 0x77d64a:c.instructions+=4;goto B77d64a;
case 0x77d64c:c.instructions+=3;goto B77d64c;
case 0x77d64e:c.instructions+=2;goto B77d64e;
case 0x77d653:c.instructions+=1;goto B77d653;
case 0x77d658:goto L77d658;
case 0x77d65d:c.instructions+=1;goto B77d65d;
case 0x77d662:goto L77d662;
case 0x77d663:c.instructions+=1;goto B77d663;
case 0x77d670:goto L77d670;
case 0x77d675:c.instructions+=1;goto B77d675;
case 0x77d67a:goto L77d67a;
case 0x77d67f:c.instructions+=1;goto B77d67f;
case 0x77d684:goto L77d684;
case 0x77d685:c.instructions+=1;goto B77d685;
case 0x77d690:goto L77d690;
case 0x77d695:c.instructions+=1;goto B77d695;
case 0x77d69a:goto L77d69a;
case 0x77d69f:c.instructions+=1;goto B77d69f;
case 0x77d6a4:goto L77d6a4;
case 0x77d6a5:c.instructions+=1;goto B77d6a5;
case 0x77d6b0:goto L77d6b0;
case 0x77d6b6:c.instructions+=3;goto B77d6b6;
case 0x77d6bc:c.instructions+=2;goto B77d6bc;
case 0x77d6c2:c.instructions+=1;goto B77d6c2;
case 0x77d6d0:goto L77d6d0;
case 0x77d6d5:c.instructions+=53;goto B77d6d5;
case 0x77d6db:c.instructions+=52;goto B77d6db;
case 0x77d6dd:c.instructions+=51;goto B77d6dd;
case 0x77d6e2:c.instructions+=50;goto B77d6e2;
case 0x77d6e8:c.instructions+=49;goto B77d6e8;
case 0x77d6ee:c.instructions+=48;goto B77d6ee;
case 0x77d6f0:c.instructions+=47;goto B77d6f0;
case 0x77d6f6:c.instructions+=46;goto B77d6f6;
case 0x77d6f8:c.instructions+=45;goto B77d6f8;
case 0x77d6fd:c.instructions+=44;goto B77d6fd;
case 0x77d703:c.instructions+=43;goto B77d703;
case 0x77d705:c.instructions+=42;goto B77d705;
case 0x77d707:c.instructions+=41;goto B77d707;
case 0x77d70c:c.instructions+=40;goto B77d70c;
case 0x77d711:c.instructions+=39;goto B77d711;
case 0x77d713:c.instructions+=38;goto B77d713;
case 0x77d719:c.instructions+=37;goto B77d719;
case 0x77d71f:c.instructions+=36;goto B77d71f;
case 0x77d725:c.instructions+=35;goto B77d725;
case 0x77d72b:c.instructions+=34;goto B77d72b;
case 0x77d731:c.instructions+=33;goto B77d731;
case 0x77d737:c.instructions+=32;goto B77d737;
case 0x77d739:c.instructions+=31;goto B77d739;
case 0x77d743:c.instructions+=30;goto B77d743;
case 0x77d74d:c.instructions+=29;goto B77d74d;
case 0x77d757:c.instructions+=28;goto B77d757;
case 0x77d761:c.instructions+=27;goto B77d761;
case 0x77d76b:c.instructions+=26;goto B77d76b;
case 0x77d775:c.instructions+=25;goto B77d775;
case 0x77d77f:c.instructions+=24;goto B77d77f;
case 0x77d789:c.instructions+=23;goto B77d789;
case 0x77d793:c.instructions+=22;goto B77d793;
case 0x77d79d:c.instructions+=21;goto B77d79d;
case 0x77d7a7:c.instructions+=20;goto B77d7a7;
case 0x77d7b1:c.instructions+=19;goto B77d7b1;
case 0x77d7b7:c.instructions+=18;goto B77d7b7;
case 0x77d7c1:c.instructions+=17;goto B77d7c1;
case 0x77d7cb:c.instructions+=16;goto B77d7cb;
case 0x77d7d5:c.instructions+=15;goto B77d7d5;
case 0x77d7df:c.instructions+=14;goto B77d7df;
case 0x77d7e9:c.instructions+=13;goto B77d7e9;
case 0x77d7f3:c.instructions+=12;goto B77d7f3;
case 0x77d7f8:c.instructions+=11;goto B77d7f8;
case 0x77d7fd:c.instructions+=10;goto B77d7fd;
case 0x77d802:c.instructions+=9;goto B77d802;
case 0x77d807:c.instructions+=8;goto B77d807;
case 0x77d80c:c.instructions+=7;goto B77d80c;
case 0x77d812:c.instructions+=6;goto B77d812;
case 0x77d817:c.instructions+=5;goto B77d817;
case 0x77d81d:c.instructions+=4;goto B77d81d;
case 0x77d822:c.instructions+=3;goto B77d822;
case 0x77d827:c.instructions+=2;goto B77d827;
case 0x77d82c:c.instructions+=1;goto B77d82c;
case 0x77d830:goto L77d830;
case 0x77d835:c.instructions+=1;goto B77d835;
case 0x77d83a:goto L77d83a;
case 0x77d83f:c.instructions+=1;goto B77d83f;
case 0x77d844:goto L77d844;
case 0x77d845:c.instructions+=1;goto B77d845;
case 0x77d850:goto L77d850;
case 0x77d855:c.instructions+=22;goto B77d855;
case 0x77d85b:c.instructions+=21;goto B77d85b;
case 0x77d861:c.instructions+=20;goto B77d861;
case 0x77d866:c.instructions+=19;goto B77d866;
case 0x77d86b:c.instructions+=18;goto B77d86b;
case 0x77d871:c.instructions+=17;goto B77d871;
case 0x77d877:c.instructions+=16;goto B77d877;
case 0x77d87d:c.instructions+=15;goto B77d87d;
case 0x77d883:c.instructions+=14;goto B77d883;
case 0x77d888:c.instructions+=13;goto B77d888;
case 0x77d88d:c.instructions+=12;goto B77d88d;
case 0x77d893:c.instructions+=11;goto B77d893;
case 0x77d899:c.instructions+=10;goto B77d899;
case 0x77d89f:c.instructions+=9;goto B77d89f;
case 0x77d8a5:c.instructions+=8;goto B77d8a5;
case 0x77d8aa:c.instructions+=7;goto B77d8aa;
case 0x77d8af:c.instructions+=6;goto B77d8af;
case 0x77d8b5:c.instructions+=5;goto B77d8b5;
case 0x77d8bb:c.instructions+=4;goto B77d8bb;
case 0x77d8c1:c.instructions+=3;goto B77d8c1;
case 0x77d8c6:c.instructions+=2;goto B77d8c6;
case 0x77d8cc:c.instructions+=1;goto B77d8cc;
case 0x77d8d0:goto L77d8d0;
case 0x77d8d5:c.instructions+=1;goto B77d8d5;
case 0x77d8da:goto L77d8da;
case 0x77d8db:c.instructions+=1;goto B77d8db;
case 0x77d8e0:goto L77d8e0;
case 0x77d8e5:c.instructions+=1;goto B77d8e5;
case 0x77d8ea:goto L77d8ea;
case 0x77d8ed:c.instructions+=2;goto B77d8ed;
case 0x77d8f2:c.instructions+=1;goto B77d8f2;
case 0x77d900:goto L77d900;
case 0x77d905:c.instructions+=1;goto B77d905;
case 0x77d90a:goto L77d90a;
case 0x77d90f:c.instructions+=1;goto B77d90f;
case 0x77d914:goto L77d914;
case 0x77d915:c.instructions+=1;goto B77d915;
case 0x77d920:goto L77d920;
case 0x77d925:c.instructions+=1;goto B77d925;
case 0x77d92a:goto L77d92a;
case 0x77d92f:c.instructions+=1;goto B77d92f;
case 0x77d934:goto L77d934;
case 0x77d935:c.instructions+=1;goto B77d935;
case 0x77d940:goto L77d940;
case 0x77d945:c.instructions+=1;goto B77d945;
case 0x77d94a:goto L77d94a;
case 0x77d94f:c.instructions+=1;goto B77d94f;
case 0x77d954:goto L77d954;
case 0x77d955:c.instructions+=1;goto B77d955;
case 0x77d960:goto L77d960;
case 0x77d965:c.instructions+=4;goto B77d965;
case 0x77d96a:c.instructions+=3;goto B77d96a;
case 0x77d96f:c.instructions+=2;goto B77d96f;
case 0x77d974:c.instructions+=1;goto B77d974;
case 0x77d979:goto L77d979;
case 0x77d980:goto L77d980;
case 0x77d985:c.instructions+=4;goto B77d985;
case 0x77d98a:c.instructions+=3;goto B77d98a;
case 0x77d98f:c.instructions+=2;goto B77d98f;
case 0x77d994:c.instructions+=1;goto B77d994;
case 0x77d999:goto L77d999;
case 0x77d9a0:goto L77d9a0;
case 0x77d9a5:c.instructions+=4;goto B77d9a5;
case 0x77d9aa:c.instructions+=3;goto B77d9aa;
case 0x77d9af:c.instructions+=2;goto B77d9af;
case 0x77d9b4:c.instructions+=1;goto B77d9b4;
case 0x77d9b9:goto L77d9b9;
case 0x77d9c0:goto L77d9c0;
case 0x77d9c5:c.instructions+=5;goto B77d9c5;
case 0x77d9ca:c.instructions+=4;goto B77d9ca;
case 0x77d9cc:c.instructions+=3;goto B77d9cc;
case 0x77d9d1:c.instructions+=2;goto B77d9d1;
case 0x77d9d6:c.instructions+=1;goto B77d9d6;
case 0x77d9db:goto L77d9db;
case 0x77d9e0:c.instructions+=1;goto B77d9e0;
case 0x77d9e5:goto L77d9e5;
case 0x77d9e6:c.instructions+=1;goto B77d9e6;
case 0x77d9f0:goto L77d9f0;
case 0x77d9f5:c.instructions+=1;goto B77d9f5;
case 0x77d9fa:goto L77d9fa;
case 0x77d9fb:c.instructions+=1;goto B77d9fb;
case 0x77da00:goto L77da00;
case 0x77da05:c.instructions+=1;goto B77da05;
case 0x77da0a:goto L77da0a;
case 0x77da0b:c.instructions+=1;goto B77da0b;
case 0x77da10:goto L77da10;
case 0x77da15:c.instructions+=1;goto B77da15;
case 0x77da1a:goto L77da1a;
case 0x77da1b:c.instructions+=1;goto B77da1b;
case 0x77da20:goto L77da20;
case 0x77da25:c.instructions+=1;goto B77da25;
case 0x77da2a:goto L77da2a;
case 0x77da2b:c.instructions+=1;goto B77da2b;
case 0x77da30:goto L77da30;
case 0x77da35:c.instructions+=1;goto B77da35;
case 0x77da3a:goto L77da3a;
case 0x77da3b:c.instructions+=1;goto B77da3b;
case 0x77da40:goto L77da40;
case 0x77da45:c.instructions+=1;goto B77da45;
case 0x77da4a:goto L77da4a;
case 0x77da4b:c.instructions+=1;goto B77da4b;
case 0x77da50:goto L77da50;
case 0x77da55:c.instructions+=1;goto B77da55;
case 0x77da5a:goto L77da5a;
case 0x77da5b:c.instructions+=1;goto B77da5b;
case 0x77da60:goto L77da60;
case 0x77da65:c.instructions+=1;goto B77da65;
case 0x77da6a:goto L77da6a;
case 0x77da6b:c.instructions+=1;goto B77da6b;
case 0x77da70:goto L77da70;
case 0x77da75:c.instructions+=1;goto B77da75;
case 0x77da7a:goto L77da7a;
case 0x77da7b:c.instructions+=1;goto B77da7b;
case 0x77da80:goto L77da80;
case 0x77da85:c.instructions+=1;goto B77da85;
case 0x77da8a:goto L77da8a;
case 0x77da8b:c.instructions+=1;goto B77da8b;
case 0x77da90:goto L77da90;
case 0x77da95:c.instructions+=1;goto B77da95;
case 0x77da9a:goto L77da9a;
case 0x77da9b:c.instructions+=1;goto B77da9b;
case 0x77daa0:goto L77daa0;
case 0x77daa5:c.instructions+=1;goto B77daa5;
case 0x77daaa:goto L77daaa;
case 0x77daab:c.instructions+=1;goto B77daab;
case 0x77dab0:goto L77dab0;
case 0x77dab5:c.instructions+=1;goto B77dab5;
case 0x77daba:goto L77daba;
case 0x77dabb:c.instructions+=1;goto B77dabb;
case 0x77dac0:goto L77dac0;
case 0x77dac5:c.instructions+=1;goto B77dac5;
case 0x77daca:goto L77daca;
case 0x77dacb:c.instructions+=1;goto B77dacb;
case 0x77dad0:goto L77dad0;
case 0x77dad5:c.instructions+=1;goto B77dad5;
case 0x77dada:goto L77dada;
case 0x77dadb:c.instructions+=1;goto B77dadb;
case 0x77dae0:goto L77dae0;
case 0x77dae1:c.instructions+=3;goto B77dae1;
case 0x77dae6:c.instructions+=2;goto B77dae6;
case 0x77dae8:c.instructions+=1;goto B77dae8;
case 0x77daed:goto L77daed;
case 0x77daef:goto L77daef;
case 0x77daf0:c.instructions+=1;goto B77daf0;
case 0x77db00:goto L77db00;
case 0x77db05:c.instructions+=5;goto B77db05;
case 0x77db0a:c.instructions+=4;goto B77db0a;
case 0x77db0c:c.instructions+=3;goto B77db0c;
case 0x77db0e:c.instructions+=2;goto B77db0e;
case 0x77db13:c.instructions+=1;goto B77db13;
case 0x77db18:goto L77db18;
case 0x77db1d:c.instructions+=1;goto B77db1d;
case 0x77db22:goto L77db22;
case 0x77db23:c.instructions+=1;goto B77db23;
case 0x77db30:goto L77db30;
case 0x77db35:c.instructions+=5;goto B77db35;
case 0x77db3a:c.instructions+=4;goto B77db3a;
case 0x77db3c:c.instructions+=3;goto B77db3c;
case 0x77db3e:c.instructions+=2;goto B77db3e;
case 0x77db43:c.instructions+=1;goto B77db43;
case 0x77db48:goto L77db48;
case 0x77db4d:c.instructions+=1;goto B77db4d;
case 0x77db52:goto L77db52;
case 0x77db53:c.instructions+=1;goto B77db53;
case 0x77db60:goto L77db60;
case 0x77db65:c.instructions+=1;goto B77db65;
case 0x77db6a:goto L77db6a;
case 0x77db6f:c.instructions+=1;goto B77db6f;
case 0x77db74:goto L77db74;
case 0x77db75:c.instructions+=1;goto B77db75;
case 0x77db80:goto L77db80;
case 0x77db85:c.instructions+=1;goto B77db85;
case 0x77db8a:goto L77db8a;
case 0x77db8f:c.instructions+=1;goto B77db8f;
case 0x77db94:goto L77db94;
case 0x77db95:c.instructions+=1;goto B77db95;
case 0x77dba0:goto L77dba0;
case 0x77dba5:c.instructions+=1;goto B77dba5;
case 0x77dbaa:goto L77dbaa;
case 0x77dbaf:c.instructions+=1;goto B77dbaf;
case 0x77dbb4:goto L77dbb4;
case 0x77dbb5:c.instructions+=1;goto B77dbb5;
case 0x77dbc0:goto L77dbc0;
case 0x77dbc5:c.instructions+=1;goto B77dbc5;
case 0x77dbca:goto L77dbca;
case 0x77dbcf:c.instructions+=1;goto B77dbcf;
case 0x77dbd4:goto L77dbd4;
case 0x77dbd5:c.instructions+=1;goto B77dbd5;
case 0x77dbe0:goto L77dbe0;
case 0x77dbe5:c.instructions+=1;goto B77dbe5;
case 0x77dbea:goto L77dbea;
case 0x77dbef:c.instructions+=1;goto B77dbef;
case 0x77dbf4:goto L77dbf4;
case 0x77dbf5:c.instructions+=1;goto B77dbf5;
case 0x77dc00:goto L77dc00;
case 0x77dc05:c.instructions+=1;goto B77dc05;
case 0x77dc0a:goto L77dc0a;
case 0x77dc0f:c.instructions+=1;goto B77dc0f;
case 0x77dc14:goto L77dc14;
case 0x77dc15:c.instructions+=1;goto B77dc15;
case 0x77dc20:goto L77dc20;
case 0x77dc25:c.instructions+=18;goto B77dc25;
case 0x77dc2b:c.instructions+=17;goto B77dc2b;
case 0x77dc31:c.instructions+=16;goto B77dc31;
case 0x77dc36:c.instructions+=15;goto B77dc36;
case 0x77dc3b:c.instructions+=14;goto B77dc3b;
case 0x77dc40:c.instructions+=13;goto B77dc40;
case 0x77dc45:c.instructions+=12;goto B77dc45;
case 0x77dc47:c.instructions+=11;goto B77dc47;
case 0x77dc51:c.instructions+=10;goto B77dc51;
case 0x77dc57:c.instructions+=9;goto B77dc57;
case 0x77dc61:c.instructions+=8;goto B77dc61;
case 0x77dc67:c.instructions+=7;goto B77dc67;
case 0x77dc71:c.instructions+=6;goto B77dc71;
case 0x77dc7b:c.instructions+=5;goto B77dc7b;
case 0x77dc80:c.instructions+=4;goto B77dc80;
case 0x77dc8a:c.instructions+=3;goto B77dc8a;
case 0x77dc8f:c.instructions+=2;goto B77dc8f;
case 0x77dc94:c.instructions+=1;goto B77dc94;
case 0x77dca0:goto L77dca0;
case 0x77dca5:c.instructions+=1;goto B77dca5;
case 0x77dcaa:goto L77dcaa;
case 0x77dcaf:c.instructions+=1;goto B77dcaf;
case 0x77dcb4:goto L77dcb4;
case 0x77dcb5:c.instructions+=1;goto B77dcb5;
case 0x77dcc0:goto L77dcc0;
case 0x77dcc6:c.instructions+=3;goto B77dcc6;
case 0x77dccc:c.instructions+=2;goto B77dccc;
case 0x77dcd2:c.instructions+=1;goto B77dcd2;
case 0x77dce0:goto L77dce0;
case 0x77dce5:c.instructions+=2;goto B77dce5;
case 0x77dcea:c.instructions+=1;goto B77dcea;
case 0x77dcf0:goto L77dcf0;
case 0x77dcf5:c.instructions+=1;goto B77dcf5;
case 0x77dcfa:goto L77dcfa;
case 0x77dcff:c.instructions+=1;goto B77dcff;
case 0x77dd04:goto L77dd04;
case 0x77dd05:c.instructions+=1;goto B77dd05;
case 0x77dd10:goto L77dd10;
case 0x77dd15:goto L77dd15;
case 0x77dd18:c.instructions+=3;goto B77dd18;
case 0x77dd1b:c.instructions+=2;goto B77dd1b;
case 0x77dd20:c.instructions+=1;goto B77dd20;
case 0x77dd22:goto L77dd22;
case 0x77dd27:c.instructions+=2;goto B77dd27;
case 0x77dd2e:c.instructions+=1;goto B77dd2e;
case 0x77dd33:goto L77dd33;
case 0x77dd34:c.instructions+=1;goto B77dd34;
case 0x77dd40:goto L77dd40;
case 0x77dd45:c.instructions+=3;goto B77dd45;
case 0x77dd46:c.instructions+=2;goto B77dd46;
case 0x77dd4c:c.instructions+=1;goto B77dd4c;
case 0x77dd50:goto L77dd50;
case 0x77dd55:c.instructions+=1;goto B77dd55;
case 0x77dd5a:goto L77dd5a;
case 0x77dd5b:c.instructions+=1;goto B77dd5b;
case 0x77dd60:goto L77dd60;
case 0x77dd65:c.instructions+=1;goto B77dd65;
case 0x77dd6a:goto L77dd6a;
case 0x77dd6b:c.instructions+=1;goto B77dd6b;
case 0x77dd70:goto L77dd70;
case 0x77dd75:c.instructions+=2;goto B77dd75;
case 0x77dd7a:c.instructions+=1;goto B77dd7a;
case 0x77dd80:goto L77dd80;
case 0x77dd86:c.instructions+=3;goto B77dd86;
case 0x77dd89:c.instructions+=2;goto B77dd89;
case 0x77dd8a:c.instructions+=1;goto B77dd8a;
case 0x77dd8c:goto L77dd8c;
case 0x77dd90:goto L77dd90;
case 0x77dd95:c.instructions+=1;goto B77dd95;
case 0x77dd9a:goto L77dd9a;
case 0x77dd9b:c.instructions+=1;goto B77dd9b;
case 0x77dda0:goto L77dda0;
case 0x77dda5:c.instructions+=1;goto B77dda5;
case 0x77ddaa:goto L77ddaa;
case 0x77ddab:c.instructions+=1;goto B77ddab;
case 0x77ddb0:goto L77ddb0;
case 0x77ddb2:c.instructions+=5;goto B77ddb2;
case 0x77ddb7:c.instructions+=4;goto B77ddb7;
case 0x77ddbc:c.instructions+=3;goto B77ddbc;
case 0x77ddc1:c.instructions+=2;goto B77ddc1;
case 0x77ddc6:c.instructions+=1;goto B77ddc6;
case 0x77ddd0:goto L77ddd0;
case 0x77ddd5:c.instructions+=2;goto B77ddd5;
case 0x77ddda:c.instructions+=1;goto B77ddda;
case 0x77dddf:goto L77dddf;
case 0x77dde4:c.instructions+=1;goto B77dde4;
case 0x77dde9:goto L77dde9;
case 0x77ddec:c.instructions+=1;goto B77ddec;
case 0x77ddf0:goto L77ddf0;
case 0x77ddf5:c.instructions+=1;goto B77ddf5;
case 0x77ddfa:goto L77ddfa;
case 0x77ddfb:c.instructions+=1;goto B77ddfb;
case 0x77de00:goto L77de00;
case 0x77de05:c.instructions+=3;goto B77de05;
case 0x77de0a:c.instructions+=2;goto B77de0a;
case 0x77de0c:c.instructions+=1;goto B77de0c;
case 0x77de10:goto L77de10;
case 0x77de16:c.instructions+=7;goto B77de16;
case 0x77de19:c.instructions+=6;goto B77de19;
case 0x77de1b:c.instructions+=5;goto B77de1b;
case 0x77de1e:c.instructions+=4;goto B77de1e;
case 0x77de21:c.instructions+=3;goto B77de21;
case 0x77de26:c.instructions+=2;goto B77de26;
case 0x77de27:c.instructions+=1;goto B77de27;
case 0x77de29:goto L77de29;
case 0x77de30:goto L77de30;
case 0x77de35:c.instructions+=5;goto B77de35;
case 0x77de3a:c.instructions+=4;goto B77de3a;
case 0x77de3c:c.instructions+=3;goto B77de3c;
case 0x77de3e:c.instructions+=2;goto B77de3e;
case 0x77de43:c.instructions+=1;goto B77de43;
case 0x77de48:goto L77de48;
case 0x77de4d:c.instructions+=1;goto B77de4d;
case 0x77de52:goto L77de52;
case 0x77de53:c.instructions+=1;goto B77de53;
case 0x77de60:goto L77de60;
case 0x77de66:c.instructions+=3;goto B77de66;
case 0x77de6c:c.instructions+=2;goto B77de6c;
case 0x77de72:c.instructions+=1;goto B77de72;
case 0x77de80:goto L77de80;
case 0x77de82:c.instructions+=3;goto B77de82;
case 0x77de87:c.instructions+=2;goto B77de87;
case 0x77de8c:c.instructions+=1;goto B77de8c;
case 0x77de91:goto L77de91;
case 0x77dea0:goto L77dea0;
case 0x77dea2:c.instructions+=3;goto B77dea2;
case 0x77dea7:c.instructions+=2;goto B77dea7;
case 0x77deac:c.instructions+=1;goto B77deac;
case 0x77deb1:goto L77deb1;
case 0x77dec0:goto L77dec0;
case 0x77dec5:c.instructions+=1;goto B77dec5;
case 0x77deca:goto L77deca;
case 0x77decf:c.instructions+=1;goto B77decf;
case 0x77ded4:goto L77ded4;
case 0x77ded5:c.instructions+=1;goto B77ded5;
case 0x77dee0:goto L77dee0;
case 0x77dee5:c.instructions+=1;goto B77dee5;
case 0x77deea:goto L77deea;
case 0x77deef:c.instructions+=1;goto B77deef;
case 0x77def4:goto L77def4;
case 0x77def5:c.instructions+=1;goto B77def5;
case 0x77df00:goto L77df00;
case 0x77df05:c.instructions+=1;goto B77df05;
case 0x77df0a:goto L77df0a;
case 0x77df0f:c.instructions+=1;goto B77df0f;
case 0x77df14:goto L77df14;
case 0x77df15:c.instructions+=1;goto B77df15;
case 0x77df20:goto L77df20;
case 0x77df25:c.instructions+=1;goto B77df25;
case 0x77df2a:goto L77df2a;
case 0x77df2f:c.instructions+=1;goto B77df2f;
case 0x77df34:goto L77df34;
case 0x77df35:c.instructions+=1;goto B77df35;
case 0x77df40:goto L77df40;
case 0x77df42:c.instructions+=3;goto B77df42;
case 0x77df47:c.instructions+=2;goto B77df47;
case 0x77df4c:c.instructions+=1;goto B77df4c;
case 0x77df51:goto L77df51;
case 0x77df60:goto L77df60;
case 0x77df62:c.instructions+=3;goto B77df62;
case 0x77df67:c.instructions+=2;goto B77df67;
case 0x77df6c:c.instructions+=1;goto B77df6c;
case 0x77df71:goto L77df71;
case 0x77df80:goto L77df80;
case 0x77df8a:c.instructions+=1;goto B77df8a;
case 0x77df90:goto L77df90;
case 0x77df92:c.instructions+=3;goto B77df92;
case 0x77df97:c.instructions+=2;goto B77df97;
case 0x77df9c:c.instructions+=1;goto B77df9c;
case 0x77dfa1:goto L77dfa1;
case 0x77dfb0:goto L77dfb0;
case 0x77dfba:c.instructions+=7;goto B77dfba;
case 0x77dfc4:c.instructions+=6;goto B77dfc4;
case 0x77dfce:c.instructions+=5;goto B77dfce;
case 0x77dfd8:c.instructions+=4;goto B77dfd8;
case 0x77dfe2:c.instructions+=3;goto B77dfe2;
case 0x77dfec:c.instructions+=2;goto B77dfec;
case 0x77dff6:c.instructions+=1;goto B77dff6;
default:missing_instruction(c.pc);}
B77d002:L77d002:{c.instructions+=3;NFSU2_TR(0x77d002);
__builtin_memmove(gp(0x7f6971),(R+0),1);
}
B77d007:{NFSU2_TR(0x77d007);
__builtin_memmove(gp(0x7f6974),(R+0),4);
}
B77d00c:{NFSU2_TR(0x77d00c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d010:L77d010:{c.instructions+=69;NFSU2_TR(0x77d010);
__builtin_memmove((R+0),gp(0x78e024),4);
}
B77d015:{NFSU2_TR(0x77d015);
w4(R+4,u32(0x1ull));
}
B77d01a:{NFSU2_TR(0x77d01a);
__builtin_memmove(gp(0x7f6bb0),(R+0),4);
}
B77d01f:{NFSU2_TR(0x77d01f);
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
B77d021:{NFSU2_TR(0x77d021);
s4(0x7f6bb4,u32(0x3e800000ull));
}
B77d02b:{NFSU2_TR(0x77d02b);
s4(0x7f6bb8,u32(0xbdcccccdull));
}
B77d035:{NFSU2_TR(0x77d035);
s4(0x7f6bbc,u32(0x41200000ull));
}
B77d03f:{NFSU2_TR(0x77d03f);
__builtin_memmove(gp(0x7f6bc0),(R+4),4);
}
B77d045:{NFSU2_TR(0x77d045);
__builtin_memmove(gp(0x7f6bc4),(R+4),4);
}
B77d04b:{NFSU2_TR(0x77d04b);
s4(0x7f6bc8,u32(0x3f000000ull));
}
B77d055:{NFSU2_TR(0x77d055);
s4(0x7f6bcc,u32(0x40100000ull));
}
B77d05f:{NFSU2_TR(0x77d05f);
s4(0x7f6bd0,u32(0x0ull));
}
B77d069:{NFSU2_TR(0x77d069);
s4(0x7f6bd4,u32(0x3ecccccdull));
}
B77d073:{NFSU2_TR(0x77d073);
__builtin_memmove(gp(0x7f6bd8),(R+0),4);
}
B77d078:{NFSU2_TR(0x77d078);
s4(0x7f6bdc,u32(0x3f800000ull));
}
B77d082:{NFSU2_TR(0x77d082);
s4(0x7f6be0,u32(0x40533333ull));
}
B77d08c:{NFSU2_TR(0x77d08c);
s4(0x7f6be4,u32(0x42200000ull));
}
B77d096:{NFSU2_TR(0x77d096);
__builtin_memmove(gp(0x7f6be8),(R+0),4);
}
B77d09b:{NFSU2_TR(0x77d09b);
__builtin_memmove(gp(0x7f6bec),(R+0),4);
}
B77d0a0:{NFSU2_TR(0x77d0a0);
s4(0x7f6bf0,u32(0x3f800000ull));
}
B77d0aa:{NFSU2_TR(0x77d0aa);
s4(0x7f6bf4,u32(0x3ecccccdull));
}
B77d0b4:{NFSU2_TR(0x77d0b4);
__builtin_memmove(gp(0x7f6bf8),(R+0),4);
}
B77d0b9:{NFSU2_TR(0x77d0b9);
s4(0x7f6bfc,u32(0xbf800000ull));
}
B77d0c3:{NFSU2_TR(0x77d0c3);
__builtin_memmove(gp(0x7f6c00),(R+4),4);
}
B77d0c9:{NFSU2_TR(0x77d0c9);
s4(0x7f6c04,u32(0x3f000000ull));
}
B77d0d3:{NFSU2_TR(0x77d0d3);
s4(0x7f6c08,u32(0x40100000ull));
}
B77d0dd:{NFSU2_TR(0x77d0dd);
s4(0x7f6c0c,u32(0x41880000ull));
}
B77d0e7:{NFSU2_TR(0x77d0e7);
s4(0x7f6c10,u32(0x3ecccccdull));
}
B77d0f1:{NFSU2_TR(0x77d0f1);
__builtin_memmove(gp(0x7f6c14),(R+0),4);
}
B77d0f6:{NFSU2_TR(0x77d0f6);
s4(0x7f6c18,u32(0x3f800000ull));
}
B77d100:{NFSU2_TR(0x77d100);
s4(0x7f6c1c,u32(0x40000000ull));
}
B77d10a:{NFSU2_TR(0x77d10a);
__builtin_memmove(gp(0x7f6c20),(R+0),4);
}
B77d10f:{NFSU2_TR(0x77d10f);
__builtin_memmove(gp(0x7f6c24),(R+0),4);
}
B77d114:{NFSU2_TR(0x77d114);
__builtin_memmove(gp(0x7f6c28),(R+0),4);
}
B77d119:{NFSU2_TR(0x77d119);
s4(0x7f6c2c,u32(0x3f800000ull));
}
B77d123:{NFSU2_TR(0x77d123);
s4(0x7f6c30,u32(0x3ecccccdull));
}
B77d12d:{NFSU2_TR(0x77d12d);
__builtin_memmove(gp(0x7f6c34),(R+0),4);
}
B77d132:{NFSU2_TR(0x77d132);
s4(0x7f6c38,u32(0xbf800000ull));
}
B77d13c:{NFSU2_TR(0x77d13c);
__builtin_memmove(gp(0x7f6c3c),(R+0),4);
}
B77d141:{NFSU2_TR(0x77d141);
s4(0x7f6c40,u32(0x3f000000ull));
}
B77d14b:{NFSU2_TR(0x77d14b);
s4(0x7f6c44,u32(0x40100000ull));
}
B77d155:{NFSU2_TR(0x77d155);
__builtin_memmove(gp(0x7f6c48),(R+0),4);
}
B77d15a:{NFSU2_TR(0x77d15a);
s4(0x7f6c4c,u32(0x3ecccccdull));
}
B77d164:{NFSU2_TR(0x77d164);
__builtin_memmove(gp(0x7f6c50),(R+0),4);
}
B77d169:{NFSU2_TR(0x77d169);
s4(0x7f6c54,u32(0x3f800000ull));
}
B77d173:{NFSU2_TR(0x77d173);
s4(0x7f6c58,u32(0x4007df3bull));
}
B77d17d:{NFSU2_TR(0x77d17d);
s4(0x7f6c5c,u32(0x42200000ull));
}
B77d187:{NFSU2_TR(0x77d187);
__builtin_memmove(gp(0x7f6c60),(R+0),4);
}
B77d18c:{NFSU2_TR(0x77d18c);
__builtin_memmove(gp(0x7f6c64),(R+0),4);
}
B77d191:{NFSU2_TR(0x77d191);
s4(0x7f6c68,u32(0xbf800000ull));
}
B77d19b:{NFSU2_TR(0x77d19b);
s4(0x7f6c6c,u32(0x3ecccccdull));
}
B77d1a5:{NFSU2_TR(0x77d1a5);
__builtin_memmove(gp(0x7f6c70),(R+0),4);
}
B77d1aa:{NFSU2_TR(0x77d1aa);
s4(0x7f6c74,u32(0xbf800000ull));
}
B77d1b4:{NFSU2_TR(0x77d1b4);
__builtin_memmove(gp(0x7f6c78),(R+0),4);
}
B77d1b9:{NFSU2_TR(0x77d1b9);
s4(0x7f6c7c,u32(0x3f000000ull));
}
B77d1c3:{NFSU2_TR(0x77d1c3);
s4(0x7f6c80,u32(0x40100000ull));
}
B77d1cd:{NFSU2_TR(0x77d1cd);
s4(0x7f6c84,u32(0x41880000ull));
}
B77d1d7:{NFSU2_TR(0x77d1d7);
s4(0x7f6c88,u32(0x3ecccccdull));
}
B77d1e1:{NFSU2_TR(0x77d1e1);
__builtin_memmove(gp(0x7f6c8c),(R+0),4);
}
B77d1e6:{NFSU2_TR(0x77d1e6);
s4(0x7f6c90,u32(0x3f800000ull));
}
B77d1f0:{NFSU2_TR(0x77d1f0);
s4(0x7f6c94,u32(0x40000000ull));
}
B77d1fa:{NFSU2_TR(0x77d1fa);
__builtin_memmove(gp(0x7f6c98),(R+0),4);
}
B77d1ff:{NFSU2_TR(0x77d1ff);
__builtin_memmove(gp(0x7f6c9c),(R+0),4);
}
B77d204:{NFSU2_TR(0x77d204);
__builtin_memmove(gp(0x7f6ca0),(R+0),4);
}
B77d209:{NFSU2_TR(0x77d209);
s4(0x7f6ca4,u32(0xbf800000ull));
}
B77d213:{NFSU2_TR(0x77d213);
s4(0x7f6ca8,u32(0x3ecccccdull));
}
B77d21d:{NFSU2_TR(0x77d21d);
__builtin_memmove(gp(0x7f6cac),(R+0),4);
}
B77d222:{NFSU2_TR(0x77d222);
s4(0x7f6cb0,u32(0xbf800000ull));
}
B77d22c:{NFSU2_TR(0x77d22c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d230:L77d230:{c.instructions+=2;NFSU2_TR(0x77d230);
w4(R+4,u32(0x8371b0ull));
}
B77d235:{NFSU2_TR(0x77d235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d23aull));
TAIL_STATIC(0x40c910u,40c);
}
B77d23a:L77d23a:{c.instructions+=2;NFSU2_TR(0x77d23a);
u8 U[4];
w4(U+0,u32(0x781f20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d23f:{NFSU2_TR(0x77d23f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d244ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d244:L77d244:{c.instructions+=2;NFSU2_TR(0x77d244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d245:{NFSU2_TR(0x77d245);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d250:L77d250:{c.instructions+=2;NFSU2_TR(0x77d250);
w4(R+4,u32(0x836750ull));
}
B77d255:{NFSU2_TR(0x77d255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d25aull));
TAIL_STATIC(0x40c910u,40c);
}
B77d25a:L77d25a:{c.instructions+=2;NFSU2_TR(0x77d25a);
u8 U[4];
w4(U+0,u32(0x781f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d25f:{NFSU2_TR(0x77d25f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d264ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d264:L77d264:{c.instructions+=2;NFSU2_TR(0x77d264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d265:{NFSU2_TR(0x77d265);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d270:L77d270:{c.instructions+=6;NFSU2_TR(0x77d270);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d271:{NFSU2_TR(0x77d271);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d272:{NFSU2_TR(0x77d272);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d273:{NFSU2_TR(0x77d273);
w4(R+24,u32(0x837048ull));
}
B77d278:{NFSU2_TR(0x77d278);
w4(R+12,u32(0x6ull));
}
B77d27d:{NFSU2_TR(0x77d27d);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B77d280:L77d280:{c.instructions+=9;NFSU2_TR(0x77d280);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d285:{NFSU2_TR(0x77d285);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B77d28b:{NFSU2_TR(0x77d28b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B77d28e:{NFSU2_TR(0x77d28e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d290:{NFSU2_TR(0x77d290);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d291:{NFSU2_TR(0x77d291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77d294:{NFSU2_TR(0x77d294);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77d297:{NFSU2_TR(0x77d297);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B77d29d:{NFSU2_TR(0x77d29d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d2a2ull));
TAIL_STATIC(0x50c960u,50c);
}
B77d2a2:L77d2a2:{c.instructions+=5;NFSU2_TR(0x77d2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B77d2a9:{NFSU2_TR(0x77d2a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B77d2ac:{NFSU2_TR(0x77d2ac);
w1(R+512,carry<u32>(r4(R+24),u32(0x34ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x34ull))));
}
B77d2af:{NFSU2_TR(0x77d2af);
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
B77d2b0:{NFSU2_TR(0x77d2b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77d280u);}goto L77d280;}}
}
B77d2b2:L77d2b2:{c.instructions+=4;NFSU2_TR(0x77d2b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B77d2b3:{NFSU2_TR(0x77d2b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B77d2b4:{NFSU2_TR(0x77d2b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B77d2b5:{NFSU2_TR(0x77d2b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d2c0:L77d2c0:{c.instructions+=2;NFSU2_TR(0x77d2c0);
w4(R+4,u32(0x836560ull));
}
B77d2c5:{NFSU2_TR(0x77d2c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d2caull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77d2ca:L77d2ca:{c.instructions+=2;NFSU2_TR(0x77d2ca);
u8 U[4];
w4(U+0,u32(0x781f40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d2cf:{NFSU2_TR(0x77d2cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d2d4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d2d4:L77d2d4:{c.instructions+=2;NFSU2_TR(0x77d2d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d2d5:{NFSU2_TR(0x77d2d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d2e0:L77d2e0:{c.instructions+=2;NFSU2_TR(0x77d2e0);
w4(R+4,u32(0x863760ull));
}
B77d2e5:{NFSU2_TR(0x77d2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d2eaull));
TAIL_STATIC(0x4fe350u,4fe);
}
B77d2ea:L77d2ea:{c.instructions+=2;NFSU2_TR(0x77d2ea);
u8 U[4];
w4(U+0,u32(0x781f50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d2ef:{NFSU2_TR(0x77d2ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d2f4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d2f4:L77d2f4:{c.instructions+=2;NFSU2_TR(0x77d2f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d2f5:{NFSU2_TR(0x77d2f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d300:L77d300:{c.instructions+=2;NFSU2_TR(0x77d300);
u8 U[4];
w4(U+0,u32(0x781f90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d305:{NFSU2_TR(0x77d305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d30aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d30a:L77d30a:{c.instructions+=2;NFSU2_TR(0x77d30a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d30b:{NFSU2_TR(0x77d30b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d310:L77d310:{c.instructions+=4;NFSU2_TR(0x77d310);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77d316:{NFSU2_TR(0x77d316);
{u32 ea_=u32(u32(7967456u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77d31c:{NFSU2_TR(0x77d31c);
{u32 ea_=u32(u32(8795996u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77d322:{NFSU2_TR(0x77d322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d330:L77d330:{c.instructions+=2;NFSU2_TR(0x77d330);
w4(R+4,u32(0x838640ull));
}
B77d335:{NFSU2_TR(0x77d335);
TAIL_STATIC(0x4ff250u,4ff);
}
B77d340:L77d340:{c.instructions+=9;NFSU2_TR(0x77d340);
__builtin_memmove((R+0),gp(0x7fa2b0),4);
}
B77d345:{NFSU2_TR(0x77d345);
__builtin_memmove((R+4),gp(0x7fa2b4),4);
}
B77d34b:{NFSU2_TR(0x77d34b);
__builtin_memmove((R+8),gp(0x7fa2b8),4);
}
B77d351:{NFSU2_TR(0x77d351);
__builtin_memmove(gp(0x839be0),(R+0),4);
}
B77d356:{NFSU2_TR(0x77d356);
__builtin_memmove((R+0),gp(0x7fa2bc),4);
}
B77d35b:{NFSU2_TR(0x77d35b);
__builtin_memmove(gp(0x839be4),(R+4),4);
}
B77d361:{NFSU2_TR(0x77d361);
__builtin_memmove(gp(0x839be8),(R+8),4);
}
B77d367:{NFSU2_TR(0x77d367);
__builtin_memmove(gp(0x839bec),(R+0),4);
}
B77d36c:{NFSU2_TR(0x77d36c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d370:L77d370:{c.instructions+=2;NFSU2_TR(0x77d370);
w4(R+4,u32(0x85ad40ull));
}
B77d375:{NFSU2_TR(0x77d375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d37aull));
TAIL_STATIC(0x532740u,532);
}
B77d37a:L77d37a:{c.instructions+=2;NFSU2_TR(0x77d37a);
u8 U[4];
w4(U+0,u32(0x781fa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d37f:{NFSU2_TR(0x77d37f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d384ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d384:L77d384:{c.instructions+=2;NFSU2_TR(0x77d384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d385:{NFSU2_TR(0x77d385);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d390:L77d390:{c.instructions+=2;NFSU2_TR(0x77d390);
w4(R+4,u32(0x83a9d0ull));
}
B77d395:{NFSU2_TR(0x77d395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d39aull));
TAIL_STATIC(0x53ed20u,53e);
}
B77d39a:L77d39a:{c.instructions+=2;NFSU2_TR(0x77d39a);
u8 U[4];
w4(U+0,u32(0x781fe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d39f:{NFSU2_TR(0x77d39f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d3a4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d3a4:L77d3a4:{c.instructions+=2;NFSU2_TR(0x77d3a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d3a5:{NFSU2_TR(0x77d3a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d3b0:L77d3b0:{c.instructions+=2;NFSU2_TR(0x77d3b0);
u8 U[4];
w4(U+0,u32(0x79da1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d3b5:{NFSU2_TR(0x77d3b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d3baull));
TAIL_STATIC(0x43db50u,43d);
}
B77d3ba:L77d3ba:{c.instructions+=5;NFSU2_TR(0x77d3ba);
u8 U[4];
w4(U+0,u32(0x79da04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d3bf:{NFSU2_TR(0x77d3bf);
__builtin_memmove(gp(0x8641ac),(R+0),4);
}
B77d3c4:{NFSU2_TR(0x77d3c4);
s4(0x8641b0,u32(0x4ull));
}
B77d3ce:{NFSU2_TR(0x77d3ce);
s4(0x8641b4,u32(0x1ull));
}
B77d3d8:{NFSU2_TR(0x77d3d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d3ddull));
TAIL_STATIC(0x43db50u,43d);
}
B77d3dd:L77d3dd:{c.instructions+=5;NFSU2_TR(0x77d3dd);
u8 U[4];
w4(U+0,u32(0x79d9f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d3e2:{NFSU2_TR(0x77d3e2);
__builtin_memmove(gp(0x8641b8),(R+0),4);
}
B77d3e7:{NFSU2_TR(0x77d3e7);
s4(0x8641bc,u32(0x1ull));
}
B77d3f1:{NFSU2_TR(0x77d3f1);
s4(0x8641c0,u32(0x2ull));
}
B77d3fb:{NFSU2_TR(0x77d3fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d400ull));
TAIL_STATIC(0x43db50u,43d);
}
B77d400:L77d400:{c.instructions+=6;NFSU2_TR(0x77d400);
__builtin_memmove(gp(0x8641c4),(R+0),4);
}
B77d405:{NFSU2_TR(0x77d405);
w4(R+0,u32(0x3ull));
}
B77d40a:{NFSU2_TR(0x77d40a);
u8 U[4];
w4(U+0,u32(0x79d9dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d40f:{NFSU2_TR(0x77d40f);
__builtin_memmove(gp(0x8641c8),(R+0),4);
}
B77d414:{NFSU2_TR(0x77d414);
__builtin_memmove(gp(0x8641cc),(R+0),4);
}
B77d419:{NFSU2_TR(0x77d419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d41eull));
TAIL_STATIC(0x43db50u,43d);
}
B77d41e:L77d41e:{c.instructions+=5;NFSU2_TR(0x77d41e);
u8 U[4];
w4(U+0,u32(0x79d9c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d423:{NFSU2_TR(0x77d423);
__builtin_memmove(gp(0x8641d0),(R+0),4);
}
B77d428:{NFSU2_TR(0x77d428);
s4(0x8641d4,u32(0x2ull));
}
B77d432:{NFSU2_TR(0x77d432);
s4(0x8641d8,u32(0x4ull));
}
B77d43c:{NFSU2_TR(0x77d43c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d441ull));
TAIL_STATIC(0x43db50u,43d);
}
B77d441:L77d441:{c.instructions+=5;NFSU2_TR(0x77d441);
u8 U[4];
w4(U+0,u32(0x79d9acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d446:{NFSU2_TR(0x77d446);
__builtin_memmove(gp(0x8641dc),(R+0),4);
}
B77d44b:{NFSU2_TR(0x77d44b);
s4(0x8641e0,u32(0x0ull));
}
B77d455:{NFSU2_TR(0x77d455);
s4(0x8641e4,u32(0xaull));
}
B77d45f:{NFSU2_TR(0x77d45f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d464ull));
TAIL_STATIC(0x43db50u,43d);
}
B77d464:L77d464:{c.instructions+=4;NFSU2_TR(0x77d464);
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
B77d467:{NFSU2_TR(0x77d467);
__builtin_memmove(gp(0x8641e8),(R+0),4);
}
B77d46c:{NFSU2_TR(0x77d46c);
s4(0x8641ec,u32(0x1ull));
}
B77d476:{NFSU2_TR(0x77d476);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d480:L77d480:{c.instructions+=2;NFSU2_TR(0x77d480);
w4(R+4,u32(0x8637a0ull));
}
B77d485:{NFSU2_TR(0x77d485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d48aull));
TAIL_STATIC(0x52c270u,52c);
}
B77d48a:L77d48a:{c.instructions+=2;NFSU2_TR(0x77d48a);
u8 U[4];
w4(U+0,u32(0x781ff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d48f:{NFSU2_TR(0x77d48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d494ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d494:L77d494:{c.instructions+=2;NFSU2_TR(0x77d494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d495:{NFSU2_TR(0x77d495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d4a0:L77d4a0:{c.instructions+=2;NFSU2_TR(0x77d4a0);
w4(R+4,u32(0x863770ull));
}
B77d4a5:{NFSU2_TR(0x77d4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d4aaull));
TAIL_STATIC(0x52c270u,52c);
}
B77d4aa:L77d4aa:{c.instructions+=2;NFSU2_TR(0x77d4aa);
u8 U[4];
w4(U+0,u32(0x782000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d4af:{NFSU2_TR(0x77d4af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d4b4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d4b4:L77d4b4:{c.instructions+=2;NFSU2_TR(0x77d4b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d4b5:{NFSU2_TR(0x77d4b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d4c0:L77d4c0:{c.instructions+=2;NFSU2_TR(0x77d4c0);
w4(R+4,u32(0x839c30ull));
}
B77d4c5:{NFSU2_TR(0x77d4c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d4caull));
TAIL_STATIC(0x52c270u,52c);
}
B77d4ca:L77d4ca:{c.instructions+=2;NFSU2_TR(0x77d4ca);
u8 U[4];
w4(U+0,u32(0x782010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d4cf:{NFSU2_TR(0x77d4cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d4d4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d4d4:L77d4d4:{c.instructions+=2;NFSU2_TR(0x77d4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d4d5:{NFSU2_TR(0x77d4d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d4e0:L77d4e0:{c.instructions+=2;NFSU2_TR(0x77d4e0);
w4(R+4,u32(0x839bd0ull));
}
B77d4e5:{NFSU2_TR(0x77d4e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d4eaull));
TAIL_STATIC(0x52c270u,52c);
}
B77d4ea:L77d4ea:{c.instructions+=2;NFSU2_TR(0x77d4ea);
u8 U[4];
w4(U+0,u32(0x782020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d4ef:{NFSU2_TR(0x77d4ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d4f4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d4f4:L77d4f4:{c.instructions+=2;NFSU2_TR(0x77d4f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d4f5:{NFSU2_TR(0x77d4f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d500:L77d500:{c.instructions+=6;NFSU2_TR(0x77d500);
u8 U[4];
w4(U+0,u32(0x525c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d505:{NFSU2_TR(0x77d505);
u8 U[4];
w4(U+0,u32(0x57bcd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d50a:{NFSU2_TR(0x77d50a);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d50f:{NFSU2_TR(0x77d50f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d511:{NFSU2_TR(0x77d511);
u8 U[4];
w4(U+0,u32(0x8639a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d516:{NFSU2_TR(0x77d516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d51bull));
TAIL_STATIC(0x75c461u,75c);
}
B77d51b:L77d51b:{c.instructions+=2;NFSU2_TR(0x77d51b);
u8 U[4];
w4(U+0,u32(0x781fb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d520:{NFSU2_TR(0x77d520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d525ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d525:L77d525:{c.instructions+=2;NFSU2_TR(0x77d525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d526:{NFSU2_TR(0x77d526);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d530:L77d530:{c.instructions+=2;NFSU2_TR(0x77d530);
w4(R+4,u32(0x8637b0ull));
}
B77d535:{NFSU2_TR(0x77d535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d53aull));
TAIL_STATIC(0x52cc50u,52c);
}
B77d53a:L77d53a:{c.instructions+=2;NFSU2_TR(0x77d53a);
u8 U[4];
w4(U+0,u32(0x781fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d53f:{NFSU2_TR(0x77d53f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d544ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d544:L77d544:{c.instructions+=2;NFSU2_TR(0x77d544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d545:{NFSU2_TR(0x77d545);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d550:L77d550:{c.instructions+=2;NFSU2_TR(0x77d550);
w4(R+4,u32(0x863768ull));
}
B77d555:{NFSU2_TR(0x77d555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d55aull));
TAIL_STATIC(0x598750u,598);
}
B77d55a:L77d55a:{c.instructions+=2;NFSU2_TR(0x77d55a);
u8 U[4];
w4(U+0,u32(0x782030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d55f:{NFSU2_TR(0x77d55f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d564ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d564:L77d564:{c.instructions+=2;NFSU2_TR(0x77d564);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d565:{NFSU2_TR(0x77d565);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d570:L77d570:{c.instructions+=2;NFSU2_TR(0x77d570);
w4(R+4,u32(0x8637bcull));
}
B77d575:{NFSU2_TR(0x77d575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d57aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77d57a:L77d57a:{c.instructions+=2;NFSU2_TR(0x77d57a);
u8 U[4];
w4(U+0,u32(0x782050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d57f:{NFSU2_TR(0x77d57f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d584ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d584:L77d584:{c.instructions+=2;NFSU2_TR(0x77d584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d585:{NFSU2_TR(0x77d585);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d590:L77d590:{c.instructions+=2;NFSU2_TR(0x77d590);
w4(R+4,u32(0x838980ull));
}
B77d595:{NFSU2_TR(0x77d595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d59aull));
TAIL_STATIC(0x53adf0u,53a);
}
B77d59a:L77d59a:{c.instructions+=2;NFSU2_TR(0x77d59a);
u8 U[4];
w4(U+0,u32(0x782040ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d59f:{NFSU2_TR(0x77d59f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d5a4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d5a4:L77d5a4:{c.instructions+=2;NFSU2_TR(0x77d5a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d5a5:{NFSU2_TR(0x77d5a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d5b0:L77d5b0:{c.instructions+=2;NFSU2_TR(0x77d5b0);
w4(R+4,u32(0x839c40ull));
}
B77d5b5:{NFSU2_TR(0x77d5b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d5baull));
TAIL_STATIC(0x522400u,522);
}
B77d5ba:L77d5ba:{c.instructions+=2;NFSU2_TR(0x77d5ba);
u8 U[4];
w4(U+0,u32(0x781f60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d5bf:{NFSU2_TR(0x77d5bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d5c4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d5c4:L77d5c4:{c.instructions+=2;NFSU2_TR(0x77d5c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d5c5:{NFSU2_TR(0x77d5c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d5d0:L77d5d0:{c.instructions+=5;NFSU2_TR(0x77d5d0);
{u32 ea_=u32(u32(7967624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77d5d6:{NFSU2_TR(0x77d5d6);
{u32 ea_=u32(u32(7985716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77d5dc:{NFSU2_TR(0x77d5dc);
{u32 ea_=u32(u32(7967632u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77d5e2:{NFSU2_TR(0x77d5e2);
{u32 ea_=u32(u32(8796100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77d5e8:{NFSU2_TR(0x77d5e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d5f0:L77d5f0:{c.instructions+=2;NFSU2_TR(0x77d5f0);
w4(R+4,u32(0x8637d0ull));
}
B77d5f5:{NFSU2_TR(0x77d5f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d5faull));
TAIL_STATIC(0x5315b0u,531);
}
B77d5fa:L77d5fa:{c.instructions+=2;NFSU2_TR(0x77d5fa);
u8 U[4];
w4(U+0,u32(0x781f80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d5ff:{NFSU2_TR(0x77d5ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d604ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d604:L77d604:{c.instructions+=2;NFSU2_TR(0x77d604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d605:{NFSU2_TR(0x77d605);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d610:L77d610:{c.instructions+=2;NFSU2_TR(0x77d610);
u8 U[4];
w4(U+0,u32(0x781f70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d615:{NFSU2_TR(0x77d615);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d61aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d61a:L77d61a:{c.instructions+=2;NFSU2_TR(0x77d61a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d61b:{NFSU2_TR(0x77d61b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d620:L77d620:{c.instructions+=4;NFSU2_TR(0x77d620);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77d626:{NFSU2_TR(0x77d626);
{u32 ea_=u32(u32(7985728u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77d62c:{NFSU2_TR(0x77d62c);
{u32 ea_=u32(u32(8799800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77d632:{NFSU2_TR(0x77d632);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d640:L77d640:{c.instructions+=6;NFSU2_TR(0x77d640);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d645:{NFSU2_TR(0x77d645);
u8 U[4];
w4(U+0,u32(0x56d770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d64a:{NFSU2_TR(0x77d64a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d64c:{NFSU2_TR(0x77d64c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d64e:{NFSU2_TR(0x77d64e);
u8 U[4];
w4(U+0,u32(0x864640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d653:{NFSU2_TR(0x77d653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d658ull));
TAIL_STATIC(0x75c461u,75c);
}
B77d658:L77d658:{c.instructions+=2;NFSU2_TR(0x77d658);
u8 U[4];
w4(U+0,u32(0x782060ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d65d:{NFSU2_TR(0x77d65d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d662ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d662:L77d662:{c.instructions+=2;NFSU2_TR(0x77d662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d663:{NFSU2_TR(0x77d663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d670:L77d670:{c.instructions+=2;NFSU2_TR(0x77d670);
w4(R+4,u32(0x864630ull));
}
B77d675:{NFSU2_TR(0x77d675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d67aull));
TAIL_STATIC(0x598750u,598);
}
B77d67a:L77d67a:{c.instructions+=2;NFSU2_TR(0x77d67a);
u8 U[4];
w4(U+0,u32(0x782080ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d67f:{NFSU2_TR(0x77d67f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d684ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d684:L77d684:{c.instructions+=2;NFSU2_TR(0x77d684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d685:{NFSU2_TR(0x77d685);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d690:L77d690:{c.instructions+=2;NFSU2_TR(0x77d690);
w4(R+4,u32(0x865210ull));
}
B77d695:{NFSU2_TR(0x77d695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d69aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77d69a:L77d69a:{c.instructions+=2;NFSU2_TR(0x77d69a);
u8 U[4];
w4(U+0,u32(0x782280ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d69f:{NFSU2_TR(0x77d69f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d6a4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d6a4:L77d6a4:{c.instructions+=2;NFSU2_TR(0x77d6a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d6a5:{NFSU2_TR(0x77d6a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d6b0:L77d6b0:{c.instructions+=4;NFSU2_TR(0x77d6b0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77d6b6:{NFSU2_TR(0x77d6b6);
{u32 ea_=u32(u32(7986244u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77d6bc:{NFSU2_TR(0x77d6bc);
{u32 ea_=u32(u32(8803660u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77d6c2:{NFSU2_TR(0x77d6c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d6d0:L77d6d0:{c.instructions+=54;NFSU2_TR(0x77d6d0);
__builtin_memmove((R+0),gp(0x79dc50),4);
}
B77d6d5:{NFSU2_TR(0x77d6d5);
__builtin_memmove((R+8),gp(0x79dc48),4);
}
B77d6db:{NFSU2_TR(0x77d6db);
__builtin_memmove((R+4),(R+0),4);
}
B77d6dd:{NFSU2_TR(0x77d6dd);
__builtin_memmove(gp(0x7fb8e8),(R+0),4);
}
B77d6e2:{NFSU2_TR(0x77d6e2);
__builtin_memmove(gp(0x7fb8ec),(R+4),4);
}
B77d6e8:{NFSU2_TR(0x77d6e8);
__builtin_memmove((R+4),gp(0x79dc4c),4);
}
B77d6ee:{NFSU2_TR(0x77d6ee);
__builtin_memmove((R+0),(R+8),4);
}
B77d6f0:{NFSU2_TR(0x77d6f0);
__builtin_memmove(gp(0x7fb920),(R+8),4);
}
B77d6f6:{NFSU2_TR(0x77d6f6);
__builtin_memmove((R+8),(R+4),4);
}
B77d6f8:{NFSU2_TR(0x77d6f8);
__builtin_memmove(gp(0x7fb924),(R+0),4);
}
B77d6fd:{NFSU2_TR(0x77d6fd);
__builtin_memmove(gp(0x7fb928),(R+4),4);
}
B77d703:{NFSU2_TR(0x77d703);
w1(R+4,u8(0x80ull));
}
B77d705:{NFSU2_TR(0x77d705);
w1(R+0,u8(0x25ull));
}
B77d707:{NFSU2_TR(0x77d707);
__builtin_memmove(gp(0x7fb948),(R+0),1);
}
B77d70c:{NFSU2_TR(0x77d70c);
__builtin_memmove(gp(0x7fb949),(R+0),1);
}
B77d711:{NFSU2_TR(0x77d711);
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
B77d713:{NFSU2_TR(0x77d713);
__builtin_memmove(gp(0x7fb94e),(R+4),1);
}
B77d719:{NFSU2_TR(0x77d719);
__builtin_memmove(gp(0x7fb94f),(R+4),1);
}
B77d71f:{NFSU2_TR(0x77d71f);
__builtin_memmove(gp(0x7fb950),(R+4),1);
}
B77d725:{NFSU2_TR(0x77d725);
__builtin_memmove(gp(0x7fb951),(R+4),1);
}
B77d72b:{NFSU2_TR(0x77d72b);
__builtin_memmove(gp(0x7fb952),(R+4),1);
}
B77d731:{NFSU2_TR(0x77d731);
__builtin_memmove(gp(0x7fb953),(R+4),1);
}
B77d737:{NFSU2_TR(0x77d737);
w1(R+4,u8(0x32ull));
}
B77d739:{NFSU2_TR(0x77d739);
s4(0x7fb8f0,u32(0x0ull));
}
B77d743:{NFSU2_TR(0x77d743);
s4(0x7fb8f4,u32(0x41200000ull));
}
B77d74d:{NFSU2_TR(0x77d74d);
s4(0x7fb8f8,u32(0x40000000ull));
}
B77d757:{NFSU2_TR(0x77d757);
s4(0x7fb8fc,u32(0x0ull));
}
B77d761:{NFSU2_TR(0x77d761);
s4(0x7fb900,u32(0x41200000ull));
}
B77d76b:{NFSU2_TR(0x77d76b);
s4(0x7fb904,u32(0x40000000ull));
}
B77d775:{NFSU2_TR(0x77d775);
s4(0x7fb908,u32(0x0ull));
}
B77d77f:{NFSU2_TR(0x77d77f);
s4(0x7fb90c,u32(0x0ull));
}
B77d789:{NFSU2_TR(0x77d789);
s4(0x7fb910,u32(0x0ull));
}
B77d793:{NFSU2_TR(0x77d793);
s4(0x7fb914,u32(0x0ull));
}
B77d79d:{NFSU2_TR(0x77d79d);
s4(0x7fb918,u32(0x0ull));
}
B77d7a7:{NFSU2_TR(0x77d7a7);
s4(0x7fb91c,u32(0x0ull));
}
B77d7b1:{NFSU2_TR(0x77d7b1);
__builtin_memmove(gp(0x7fb92c),(R+8),4);
}
B77d7b7:{NFSU2_TR(0x77d7b7);
s4(0x7fb930,u32(0x0ull));
}
B77d7c1:{NFSU2_TR(0x77d7c1);
s4(0x7fb934,u32(0x0ull));
}
B77d7cb:{NFSU2_TR(0x77d7cb);
s4(0x7fb938,u32(0x0ull));
}
B77d7d5:{NFSU2_TR(0x77d7d5);
s4(0x7fb93c,u32(0x0ull));
}
B77d7df:{NFSU2_TR(0x77d7df);
s4(0x7fb940,u32(0x0ull));
}
B77d7e9:{NFSU2_TR(0x77d7e9);
s4(0x7fb944,u32(0x0ull));
}
B77d7f3:{NFSU2_TR(0x77d7f3);
__builtin_memmove(gp(0x7fb94a),(R+0),1);
}
B77d7f8:{NFSU2_TR(0x77d7f8);
__builtin_memmove(gp(0x7fb94b),(R+0),1);
}
B77d7fd:{NFSU2_TR(0x77d7fd);
__builtin_memmove(gp(0x7fb94c),(R+0),1);
}
B77d802:{NFSU2_TR(0x77d802);
__builtin_memmove(gp(0x7fb94d),(R+0),1);
}
B77d807:{NFSU2_TR(0x77d807);
__builtin_memmove(gp(0x7fb954),(R+0),1);
}
B77d80c:{NFSU2_TR(0x77d80c);
__builtin_memmove(gp(0x7fb955),(R+4),1);
}
B77d812:{NFSU2_TR(0x77d812);
__builtin_memmove(gp(0x7fb956),(R+0),1);
}
B77d817:{NFSU2_TR(0x77d817);
__builtin_memmove(gp(0x7fb957),(R+4),1);
}
B77d81d:{NFSU2_TR(0x77d81d);
__builtin_memmove(gp(0x7fb958),(R+0),1);
}
B77d822:{NFSU2_TR(0x77d822);
__builtin_memmove(gp(0x7fb959),(R+0),1);
}
B77d827:{NFSU2_TR(0x77d827);
__builtin_memmove(gp(0x7fb95c),(R+0),4);
}
B77d82c:{NFSU2_TR(0x77d82c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d830:L77d830:{c.instructions+=2;NFSU2_TR(0x77d830);
w4(R+4,u32(0x8651a4ull));
}
B77d835:{NFSU2_TR(0x77d835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d83aull));
TAIL_STATIC(0x598750u,598);
}
B77d83a:L77d83a:{c.instructions+=2;NFSU2_TR(0x77d83a);
u8 U[4];
w4(U+0,u32(0x7821f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d83f:{NFSU2_TR(0x77d83f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d844ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d844:L77d844:{c.instructions+=2;NFSU2_TR(0x77d844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d845:{NFSU2_TR(0x77d845);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d850:L77d850:{c.instructions+=23;NFSU2_TR(0x77d850);
__builtin_memmove((R+0),gp(0x7fa99c),4);
}
B77d855:{NFSU2_TR(0x77d855);
__builtin_memmove((R+4),gp(0x7fa9a0),4);
}
B77d85b:{NFSU2_TR(0x77d85b);
__builtin_memmove((R+8),gp(0x7fa97c),4);
}
B77d861:{NFSU2_TR(0x77d861);
__builtin_memmove(gp(0x86658c),(R+0),4);
}
B77d866:{NFSU2_TR(0x77d866);
__builtin_memmove((R+0),gp(0x7fa980),4);
}
B77d86b:{NFSU2_TR(0x77d86b);
__builtin_memmove(gp(0x866590),(R+4),4);
}
B77d871:{NFSU2_TR(0x77d871);
__builtin_memmove((R+4),gp(0x7fa984),4);
}
B77d877:{NFSU2_TR(0x77d877);
__builtin_memmove(gp(0x866594),(R+8),4);
}
B77d87d:{NFSU2_TR(0x77d87d);
__builtin_memmove((R+8),gp(0x7fa988),4);
}
B77d883:{NFSU2_TR(0x77d883);
__builtin_memmove(gp(0x866598),(R+0),4);
}
B77d888:{NFSU2_TR(0x77d888);
__builtin_memmove((R+0),gp(0x7fa98c),4);
}
B77d88d:{NFSU2_TR(0x77d88d);
__builtin_memmove(gp(0x86659c),(R+4),4);
}
B77d893:{NFSU2_TR(0x77d893);
__builtin_memmove((R+4),gp(0x7fa990),4);
}
B77d899:{NFSU2_TR(0x77d899);
__builtin_memmove(gp(0x8665a0),(R+8),4);
}
B77d89f:{NFSU2_TR(0x77d89f);
__builtin_memmove((R+8),gp(0x7fa994),4);
}
B77d8a5:{NFSU2_TR(0x77d8a5);
__builtin_memmove(gp(0x8665a4),(R+0),4);
}
B77d8aa:{NFSU2_TR(0x77d8aa);
__builtin_memmove((R+0),gp(0x7fa998),4);
}
B77d8af:{NFSU2_TR(0x77d8af);
__builtin_memmove(gp(0x8665a8),(R+4),4);
}
B77d8b5:{NFSU2_TR(0x77d8b5);
__builtin_memmove((R+4),gp(0x7fa978),4);
}
B77d8bb:{NFSU2_TR(0x77d8bb);
__builtin_memmove(gp(0x8665ac),(R+8),4);
}
B77d8c1:{NFSU2_TR(0x77d8c1);
__builtin_memmove(gp(0x8665b0),(R+0),4);
}
B77d8c6:{NFSU2_TR(0x77d8c6);
__builtin_memmove(gp(0x8665b4),(R+4),4);
}
B77d8cc:{NFSU2_TR(0x77d8cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d8d0:L77d8d0:{c.instructions+=2;NFSU2_TR(0x77d8d0);
u8 U[4];
w4(U+0,u32(0x782090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d8d5:{NFSU2_TR(0x77d8d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d8daull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d8da:L77d8da:{c.instructions+=2;NFSU2_TR(0x77d8da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d8db:{NFSU2_TR(0x77d8db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d8e0:L77d8e0:{c.instructions+=2;NFSU2_TR(0x77d8e0);
u8 U[4];
w4(U+0,u32(0x78c13cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d8e5:{NFSU2_TR(0x77d8e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d8eaull));
TAIL_STATIC(0x43db50u,43d);
}
B77d8ea:L77d8ea:{c.instructions+=3;NFSU2_TR(0x77d8ea);
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
B77d8ed:{NFSU2_TR(0x77d8ed);
__builtin_memmove(gp(0x865598),(R+0),4);
}
B77d8f2:{NFSU2_TR(0x77d8f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d900:L77d900:{c.instructions+=2;NFSU2_TR(0x77d900);
w4(R+4,u32(0x86519cull));
}
B77d905:{NFSU2_TR(0x77d905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d90aull));
TAIL_STATIC(0x598750u,598);
}
B77d90a:L77d90a:{c.instructions+=2;NFSU2_TR(0x77d90a);
u8 U[4];
w4(U+0,u32(0x782200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d90f:{NFSU2_TR(0x77d90f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d914ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d914:L77d914:{c.instructions+=2;NFSU2_TR(0x77d914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d915:{NFSU2_TR(0x77d915);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d920:L77d920:{c.instructions+=2;NFSU2_TR(0x77d920);
w4(R+4,u32(0x86555cull));
}
B77d925:{NFSU2_TR(0x77d925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d92aull));
TAIL_STATIC(0x598750u,598);
}
B77d92a:L77d92a:{c.instructions+=2;NFSU2_TR(0x77d92a);
u8 U[4];
w4(U+0,u32(0x782220ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d92f:{NFSU2_TR(0x77d92f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d934ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d934:L77d934:{c.instructions+=2;NFSU2_TR(0x77d934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d935:{NFSU2_TR(0x77d935);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d940:L77d940:{c.instructions+=2;NFSU2_TR(0x77d940);
w4(R+4,u32(0x865564ull));
}
B77d945:{NFSU2_TR(0x77d945);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d94aull));
TAIL_STATIC(0x57afa0u,57a);
}
B77d94a:L77d94a:{c.instructions+=2;NFSU2_TR(0x77d94a);
u8 U[4];
w4(U+0,u32(0x782230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d94f:{NFSU2_TR(0x77d94f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d954ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d954:L77d954:{c.instructions+=2;NFSU2_TR(0x77d954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d955:{NFSU2_TR(0x77d955);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d960:L77d960:{c.instructions+=5;NFSU2_TR(0x77d960);
u8 U[4];
w4(U+0,u32(0x579350ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d965:{NFSU2_TR(0x77d965);
u8 U[4];
w4(U+0,u32(0x579340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d96a:{NFSU2_TR(0x77d96a);
u8 U[4];
w4(U+0,u32(0x39100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d96f:{NFSU2_TR(0x77d96f);
w4(R+4,u32(0x86596cull));
}
B77d974:{NFSU2_TR(0x77d974);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d979ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77d979:L77d979:{c.instructions+=1;NFSU2_TR(0x77d979);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d980:L77d980:{c.instructions+=5;NFSU2_TR(0x77d980);
u8 U[4];
w4(U+0,u32(0x579350ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d985:{NFSU2_TR(0x77d985);
u8 U[4];
w4(U+0,u32(0x579340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d98a:{NFSU2_TR(0x77d98a);
u8 U[4];
w4(U+0,u32(0x39101ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d98f:{NFSU2_TR(0x77d98f);
w4(R+4,u32(0x8653a0ull));
}
B77d994:{NFSU2_TR(0x77d994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d999ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77d999:L77d999:{c.instructions+=1;NFSU2_TR(0x77d999);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d9a0:L77d9a0:{c.instructions+=5;NFSU2_TR(0x77d9a0);
u8 U[4];
w4(U+0,u32(0x579350ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d9a5:{NFSU2_TR(0x77d9a5);
u8 U[4];
w4(U+0,u32(0x579340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d9aa:{NFSU2_TR(0x77d9aa);
u8 U[4];
w4(U+0,u32(0x39102ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d9af:{NFSU2_TR(0x77d9af);
w4(R+4,u32(0x865470ull));
}
B77d9b4:{NFSU2_TR(0x77d9b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d9b9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77d9b9:L77d9b9:{c.instructions+=1;NFSU2_TR(0x77d9b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d9c0:L77d9c0:{c.instructions+=6;NFSU2_TR(0x77d9c0);
u8 U[4];
w4(U+0,u32(0x57c320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d9c5:{NFSU2_TR(0x77d9c5);
u8 U[4];
w4(U+0,u32(0x57c240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d9ca:{NFSU2_TR(0x77d9ca);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d9cc:{NFSU2_TR(0x77d9cc);
u8 U[4];
w4(U+0,u32(0x1c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d9d1:{NFSU2_TR(0x77d9d1);
u8 U[4];
w4(U+0,u32(0x8655a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d9d6:{NFSU2_TR(0x77d9d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d9dbull));
TAIL_STATIC(0x75c461u,75c);
}
B77d9db:L77d9db:{c.instructions+=2;NFSU2_TR(0x77d9db);
u8 U[4];
w4(U+0,u32(0x782290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d9e0:{NFSU2_TR(0x77d9e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d9e5ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d9e5:L77d9e5:{c.instructions+=2;NFSU2_TR(0x77d9e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d9e6:{NFSU2_TR(0x77d9e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77d9f0:L77d9f0:{c.instructions+=2;NFSU2_TR(0x77d9f0);
u8 U[4];
w4(U+0,u32(0x7820a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77d9f5:{NFSU2_TR(0x77d9f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77d9faull));
TAIL_STATIC(0x75c5edu,75c);
}
B77d9fa:L77d9fa:{c.instructions+=2;NFSU2_TR(0x77d9fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77d9fb:{NFSU2_TR(0x77d9fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77da00:L77da00:{c.instructions+=2;NFSU2_TR(0x77da00);
u8 U[4];
w4(U+0,u32(0x7820b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77da05:{NFSU2_TR(0x77da05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77da0aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77da0a:L77da0a:{c.instructions+=2;NFSU2_TR(0x77da0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77da0b:{NFSU2_TR(0x77da0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77da10:L77da10:{c.instructions+=2;NFSU2_TR(0x77da10);
u8 U[4];
w4(U+0,u32(0x7820c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77da15:{NFSU2_TR(0x77da15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77da1aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77da1a:L77da1a:{c.instructions+=2;NFSU2_TR(0x77da1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77da1b:{NFSU2_TR(0x77da1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77da20:L77da20:{c.instructions+=2;NFSU2_TR(0x77da20);
u8 U[4];
w4(U+0,u32(0x7820d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77da25:{NFSU2_TR(0x77da25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77da2aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77da2a:L77da2a:{c.instructions+=2;NFSU2_TR(0x77da2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77da2b:{NFSU2_TR(0x77da2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77da30:L77da30:{c.instructions+=2;NFSU2_TR(0x77da30);
u8 U[4];
w4(U+0,u32(0x7820e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77da35:{NFSU2_TR(0x77da35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77da3aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77da3a:L77da3a:{c.instructions+=2;NFSU2_TR(0x77da3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77da3b:{NFSU2_TR(0x77da3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77da40:L77da40:{c.instructions+=2;NFSU2_TR(0x77da40);
u8 U[4];
w4(U+0,u32(0x7820f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77da45:{NFSU2_TR(0x77da45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77da4aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77da4a:L77da4a:{c.instructions+=2;NFSU2_TR(0x77da4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77da4b:{NFSU2_TR(0x77da4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77da50:L77da50:{c.instructions+=2;NFSU2_TR(0x77da50);
u8 U[4];
w4(U+0,u32(0x782100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77da55:{NFSU2_TR(0x77da55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77da5aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77da5a:L77da5a:{c.instructions+=2;NFSU2_TR(0x77da5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77da5b:{NFSU2_TR(0x77da5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77da60:L77da60:{c.instructions+=2;NFSU2_TR(0x77da60);
u8 U[4];
w4(U+0,u32(0x782110ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77da65:{NFSU2_TR(0x77da65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77da6aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77da6a:L77da6a:{c.instructions+=2;NFSU2_TR(0x77da6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77da6b:{NFSU2_TR(0x77da6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77da70:L77da70:{c.instructions+=2;NFSU2_TR(0x77da70);
u8 U[4];
w4(U+0,u32(0x782120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77da75:{NFSU2_TR(0x77da75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77da7aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77da7a:L77da7a:{c.instructions+=2;NFSU2_TR(0x77da7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77da7b:{NFSU2_TR(0x77da7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77da80:L77da80:{c.instructions+=2;NFSU2_TR(0x77da80);
u8 U[4];
w4(U+0,u32(0x782130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77da85:{NFSU2_TR(0x77da85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77da8aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77da8a:L77da8a:{c.instructions+=2;NFSU2_TR(0x77da8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77da8b:{NFSU2_TR(0x77da8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77da90:L77da90:{c.instructions+=2;NFSU2_TR(0x77da90);
u8 U[4];
w4(U+0,u32(0x782140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77da95:{NFSU2_TR(0x77da95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77da9aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77da9a:L77da9a:{c.instructions+=2;NFSU2_TR(0x77da9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77da9b:{NFSU2_TR(0x77da9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77daa0:L77daa0:{c.instructions+=2;NFSU2_TR(0x77daa0);
u8 U[4];
w4(U+0,u32(0x782150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77daa5:{NFSU2_TR(0x77daa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77daaaull));
TAIL_STATIC(0x75c5edu,75c);
}
B77daaa:L77daaa:{c.instructions+=2;NFSU2_TR(0x77daaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77daab:{NFSU2_TR(0x77daab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dab0:L77dab0:{c.instructions+=2;NFSU2_TR(0x77dab0);
u8 U[4];
w4(U+0,u32(0x782160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dab5:{NFSU2_TR(0x77dab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dabaull));
TAIL_STATIC(0x75c5edu,75c);
}
B77daba:L77daba:{c.instructions+=2;NFSU2_TR(0x77daba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dabb:{NFSU2_TR(0x77dabb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dac0:L77dac0:{c.instructions+=2;NFSU2_TR(0x77dac0);
u8 U[4];
w4(U+0,u32(0x782170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dac5:{NFSU2_TR(0x77dac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dacaull));
TAIL_STATIC(0x75c5edu,75c);
}
B77daca:L77daca:{c.instructions+=2;NFSU2_TR(0x77daca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dacb:{NFSU2_TR(0x77dacb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dad0:L77dad0:{c.instructions+=2;NFSU2_TR(0x77dad0);
u8 U[4];
w4(U+0,u32(0x782180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dad5:{NFSU2_TR(0x77dad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dadaull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dada:L77dada:{c.instructions+=2;NFSU2_TR(0x77dada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dadb:{NFSU2_TR(0x77dadb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dae0:L77dae0:{c.instructions+=4;NFSU2_TR(0x77dae0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dae1:{NFSU2_TR(0x77dae1);
w4(R+4,u32(0x18ull));
}
B77dae6:{NFSU2_TR(0x77dae6);
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
B77dae8:{NFSU2_TR(0x77dae8);
w4(R+28,u32(0x8651b0ull));
}
B77daed:L77daed:{c.instructions+=1;NFSU2_TR(0x77daed);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L77daef;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77daedu);}goto L77daed;}
}
B77daef:L77daef:{c.instructions+=2;NFSU2_TR(0x77daef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B77daf0:{NFSU2_TR(0x77daf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77db00:L77db00:{c.instructions+=6;NFSU2_TR(0x77db00);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db05:{NFSU2_TR(0x77db05);
u8 U[4];
w4(U+0,u32(0x572340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db0a:{NFSU2_TR(0x77db0a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db0c:{NFSU2_TR(0x77db0c);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db0e:{NFSU2_TR(0x77db0e);
u8 U[4];
w4(U+0,u32(0x8653b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db13:{NFSU2_TR(0x77db13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77db18ull));
TAIL_STATIC(0x75c461u,75c);
}
B77db18:L77db18:{c.instructions+=2;NFSU2_TR(0x77db18);
u8 U[4];
w4(U+0,u32(0x782190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db1d:{NFSU2_TR(0x77db1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77db22ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77db22:L77db22:{c.instructions+=2;NFSU2_TR(0x77db22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77db23:{NFSU2_TR(0x77db23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77db30:L77db30:{c.instructions+=6;NFSU2_TR(0x77db30);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db35:{NFSU2_TR(0x77db35);
u8 U[4];
w4(U+0,u32(0x5796d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db3a:{NFSU2_TR(0x77db3a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db3c:{NFSU2_TR(0x77db3c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db3e:{NFSU2_TR(0x77db3e);
u8 U[4];
w4(U+0,u32(0x865360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db43:{NFSU2_TR(0x77db43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77db48ull));
TAIL_STATIC(0x75c461u,75c);
}
B77db48:L77db48:{c.instructions+=2;NFSU2_TR(0x77db48);
u8 U[4];
w4(U+0,u32(0x7821b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db4d:{NFSU2_TR(0x77db4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77db52ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77db52:L77db52:{c.instructions+=2;NFSU2_TR(0x77db52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77db53:{NFSU2_TR(0x77db53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77db60:L77db60:{c.instructions+=2;NFSU2_TR(0x77db60);
w4(R+4,u32(0x865220ull));
}
B77db65:{NFSU2_TR(0x77db65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77db6aull));
TAIL_STATIC(0x598750u,598);
}
B77db6a:L77db6a:{c.instructions+=2;NFSU2_TR(0x77db6a);
u8 U[4];
w4(U+0,u32(0x782240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db6f:{NFSU2_TR(0x77db6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77db74ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77db74:L77db74:{c.instructions+=2;NFSU2_TR(0x77db74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77db75:{NFSU2_TR(0x77db75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77db80:L77db80:{c.instructions+=2;NFSU2_TR(0x77db80);
w4(R+4,u32(0x865550ull));
}
B77db85:{NFSU2_TR(0x77db85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77db8aull));
TAIL_STATIC(0x598750u,598);
}
B77db8a:L77db8a:{c.instructions+=2;NFSU2_TR(0x77db8a);
u8 U[4];
w4(U+0,u32(0x782250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77db8f:{NFSU2_TR(0x77db8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77db94ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77db94:L77db94:{c.instructions+=2;NFSU2_TR(0x77db94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77db95:{NFSU2_TR(0x77db95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dba0:L77dba0:{c.instructions+=2;NFSU2_TR(0x77dba0);
w4(R+4,u32(0x865218ull));
}
B77dba5:{NFSU2_TR(0x77dba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dbaaull));
TAIL_STATIC(0x598750u,598);
}
B77dbaa:L77dbaa:{c.instructions+=2;NFSU2_TR(0x77dbaa);
u8 U[4];
w4(U+0,u32(0x7822b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dbaf:{NFSU2_TR(0x77dbaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dbb4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dbb4:L77dbb4:{c.instructions+=2;NFSU2_TR(0x77dbb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dbb5:{NFSU2_TR(0x77dbb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dbc0:L77dbc0:{c.instructions+=2;NFSU2_TR(0x77dbc0);
w4(R+4,u32(0x866584ull));
}
B77dbc5:{NFSU2_TR(0x77dbc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dbcaull));
TAIL_STATIC(0x598750u,598);
}
B77dbca:L77dbca:{c.instructions+=2;NFSU2_TR(0x77dbca);
u8 U[4];
w4(U+0,u32(0x782210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dbcf:{NFSU2_TR(0x77dbcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dbd4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dbd4:L77dbd4:{c.instructions+=2;NFSU2_TR(0x77dbd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dbd5:{NFSU2_TR(0x77dbd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dbe0:L77dbe0:{c.instructions+=2;NFSU2_TR(0x77dbe0);
w4(R+4,u32(0x8652f0ull));
}
B77dbe5:{NFSU2_TR(0x77dbe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dbeaull));
TAIL_STATIC(0x598750u,598);
}
B77dbea:L77dbea:{c.instructions+=2;NFSU2_TR(0x77dbea);
u8 U[4];
w4(U+0,u32(0x782260ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dbef:{NFSU2_TR(0x77dbef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dbf4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dbf4:L77dbf4:{c.instructions+=2;NFSU2_TR(0x77dbf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dbf5:{NFSU2_TR(0x77dbf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dc00:L77dc00:{c.instructions+=2;NFSU2_TR(0x77dc00);
w4(R+4,u32(0x865190ull));
}
B77dc05:{NFSU2_TR(0x77dc05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dc0aull));
TAIL_STATIC(0x598750u,598);
}
B77dc0a:L77dc0a:{c.instructions+=2;NFSU2_TR(0x77dc0a);
u8 U[4];
w4(U+0,u32(0x782270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dc0f:{NFSU2_TR(0x77dc0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dc14ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dc14:L77dc14:{c.instructions+=2;NFSU2_TR(0x77dc14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dc15:{NFSU2_TR(0x77dc15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dc20:L77dc20:{c.instructions+=19;NFSU2_TR(0x77dc20);
__builtin_memmove((R+0),gp(0x79dd48),4);
}
B77dc25:{NFSU2_TR(0x77dc25);
__builtin_memmove((R+4),gp(0x79dd4c),4);
}
B77dc2b:{NFSU2_TR(0x77dc2b);
__builtin_memmove((R+8),gp(0x79dd50),4);
}
B77dc31:{NFSU2_TR(0x77dc31);
__builtin_memmove(gp(0x7fb8a0),(R+0),4);
}
B77dc36:{NFSU2_TR(0x77dc36);
w4(R+0,u32(0x3ull));
}
B77dc3b:{NFSU2_TR(0x77dc3b);
__builtin_memmove(gp(0x7fb8a4),(R+0),4);
}
B77dc40:{NFSU2_TR(0x77dc40);
__builtin_memmove(gp(0x7fb8b0),(R+0),4);
}
B77dc45:{NFSU2_TR(0x77dc45);
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
B77dc47:{NFSU2_TR(0x77dc47);
s4(0x7fb8a8,u32(0x8a3b24ull));
}
B77dc51:{NFSU2_TR(0x77dc51);
__builtin_memmove(gp(0x7fb8ac),(R+4),4);
}
B77dc57:{NFSU2_TR(0x77dc57);
s4(0x7fb8b4,u32(0x8a3b38ull));
}
B77dc61:{NFSU2_TR(0x77dc61);
__builtin_memmove(gp(0x7fb8b8),(R+8),4);
}
B77dc67:{NFSU2_TR(0x77dc67);
s4(0x7fb8bc,u32(0x6ull));
}
B77dc71:{NFSU2_TR(0x77dc71);
s4(0x7fb8c0,u32(0x7fb624ull));
}
B77dc7b:{NFSU2_TR(0x77dc7b);
__builtin_memmove(gp(0x7fb8c4),(R+0),4);
}
B77dc80:{NFSU2_TR(0x77dc80);
s4(0x7fb8c8,u32(0x7ull));
}
B77dc8a:{NFSU2_TR(0x77dc8a);
__builtin_memmove(gp(0x7fb8cc),(R+0),4);
}
B77dc8f:{NFSU2_TR(0x77dc8f);
__builtin_memmove(gp(0x7fb8d0),(R+0),4);
}
B77dc94:{NFSU2_TR(0x77dc94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dca0:L77dca0:{c.instructions+=2;NFSU2_TR(0x77dca0);
w4(R+4,u32(0x865930ull));
}
B77dca5:{NFSU2_TR(0x77dca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dcaaull));
TAIL_STATIC(0x575770u,575);
}
B77dcaa:L77dcaa:{c.instructions+=2;NFSU2_TR(0x77dcaa);
u8 U[4];
w4(U+0,u32(0x7821d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dcaf:{NFSU2_TR(0x77dcaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dcb4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dcb4:L77dcb4:{c.instructions+=2;NFSU2_TR(0x77dcb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dcb5:{NFSU2_TR(0x77dcb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dcc0:L77dcc0:{c.instructions+=4;NFSU2_TR(0x77dcc0);
{u32 ea_=u32(u32(8369932u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B77dcc6:{NFSU2_TR(0x77dcc6);
{u32 ea_=u32(u32(7890016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77dccc:{NFSU2_TR(0x77dccc);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77dcd2:{NFSU2_TR(0x77dcd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dce0:L77dce0:{c.instructions+=3;NFSU2_TR(0x77dce0);
__builtin_memmove((R+0),gp(0x7fb710),4);
}
B77dce5:{NFSU2_TR(0x77dce5);
__builtin_memmove(gp(0x865558),(R+0),4);
}
B77dcea:{NFSU2_TR(0x77dcea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dcf0:L77dcf0:{c.instructions+=2;NFSU2_TR(0x77dcf0);
w4(R+4,u32(0x8652f8ull));
}
B77dcf5:{NFSU2_TR(0x77dcf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dcfaull));
TAIL_STATIC(0x577430u,577);
}
B77dcfa:L77dcfa:{c.instructions+=2;NFSU2_TR(0x77dcfa);
u8 U[4];
w4(U+0,u32(0x7821e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dcff:{NFSU2_TR(0x77dcff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dd04ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dd04:L77dd04:{c.instructions+=2;NFSU2_TR(0x77dd04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dd05:{NFSU2_TR(0x77dd05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dd10:L77dd10:{c.instructions+=1;NFSU2_TR(0x77dd10);
w4(R+0,u32(0x8698dcull));
}
B77dd15:L77dd15:{c.instructions+=4;NFSU2_TR(0x77dd15);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B77dd18:{NFSU2_TR(0x77dd18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B77dd1b:{NFSU2_TR(0x77dd1b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x86993cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x86993cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B77dd20:{NFSU2_TR(0x77dd20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77dd15u);}goto L77dd15;}}
}
B77dd22:L77dd22:{c.instructions+=3;NFSU2_TR(0x77dd22);
u8 U[4];
w4(U+0,u32(0x7822c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dd27:{NFSU2_TR(0x77dd27);
s1(0x86993c,u8(0x0ull));
}
B77dd2e:{NFSU2_TR(0x77dd2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dd33ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dd33:L77dd33:{c.instructions+=2;NFSU2_TR(0x77dd33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dd34:{NFSU2_TR(0x77dd34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dd40:L77dd40:{c.instructions+=4;NFSU2_TR(0x77dd40);
__builtin_memmove((R+0),gp(0x7fbdfc),4);
}
B77dd45:{NFSU2_TR(0x77dd45);
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
B77dd46:{NFSU2_TR(0x77dd46);
__builtin_memmove(gp(0x869674),(R+0),2);
}
B77dd4c:{NFSU2_TR(0x77dd4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dd50:L77dd50:{c.instructions+=2;NFSU2_TR(0x77dd50);
u8 U[4];
w4(U+0,u32(0x7822e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dd55:{NFSU2_TR(0x77dd55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dd5aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dd5a:L77dd5a:{c.instructions+=2;NFSU2_TR(0x77dd5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dd5b:{NFSU2_TR(0x77dd5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dd60:L77dd60:{c.instructions+=2;NFSU2_TR(0x77dd60);
u8 U[4];
w4(U+0,u32(0x7822f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dd65:{NFSU2_TR(0x77dd65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dd6aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dd6a:L77dd6a:{c.instructions+=2;NFSU2_TR(0x77dd6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dd6b:{NFSU2_TR(0x77dd6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dd70:L77dd70:{c.instructions+=3;NFSU2_TR(0x77dd70);
w4(R+0,u32(0x8691e0ull));
}
B77dd75:{NFSU2_TR(0x77dd75);
w4(R+4,u32(0x5ull));
}
B77dd7a:{NFSU2_TR(0x77dd7a);
__builtin_memmove((R+12),(R+12),4);
}
B77dd80:L77dd80:{c.instructions+=4;NFSU2_TR(0x77dd80);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B77dd86:{NFSU2_TR(0x77dd86);
w1(R+512,carry<u32>(r4(R+0),u32(0x14ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B77dd89:{NFSU2_TR(0x77dd89);
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
B77dd8a:{NFSU2_TR(0x77dd8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77dd80u);}goto L77dd80;}}
}
B77dd8c:L77dd8c:{c.instructions+=1;NFSU2_TR(0x77dd8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dd90:L77dd90:{c.instructions+=2;NFSU2_TR(0x77dd90);
u8 U[4];
w4(U+0,u32(0x782300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dd95:{NFSU2_TR(0x77dd95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dd9aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dd9a:L77dd9a:{c.instructions+=2;NFSU2_TR(0x77dd9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77dd9b:{NFSU2_TR(0x77dd9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dda0:L77dda0:{c.instructions+=2;NFSU2_TR(0x77dda0);
u8 U[4];
w4(U+0,u32(0x782310ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dda5:{NFSU2_TR(0x77dda5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ddaaull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ddaa:L77ddaa:{c.instructions+=2;NFSU2_TR(0x77ddaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ddab:{NFSU2_TR(0x77ddab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ddb0:L77ddb0:{c.instructions+=6;NFSU2_TR(0x77ddb0);
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
B77ddb2:{NFSU2_TR(0x77ddb2);
__builtin_memmove(gp(0x869074),(R+0),4);
}
B77ddb7:{NFSU2_TR(0x77ddb7);
__builtin_memmove(gp(0x869078),(R+0),4);
}
B77ddbc:{NFSU2_TR(0x77ddbc);
__builtin_memmove(gp(0x86907c),(R+0),4);
}
B77ddc1:{NFSU2_TR(0x77ddc1);
__builtin_memmove(gp(0x869080),(R+0),4);
}
B77ddc6:{NFSU2_TR(0x77ddc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ddd0:L77ddd0:{c.instructions+=3;NFSU2_TR(0x77ddd0);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ddd5:{NFSU2_TR(0x77ddd5);
u8 U[4];
w4(U+0,u32(0x869088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ddda:{NFSU2_TR(0x77ddda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dddfull));
TAIL_STATIC(0x43dbd0u,43d);
}
B77dddf:L77dddf:{c.instructions+=2;NFSU2_TR(0x77dddf);
u8 U[4];
w4(U+0,u32(0x782320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dde4:{NFSU2_TR(0x77dde4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dde9ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77dde9:L77dde9:{c.instructions+=2;NFSU2_TR(0x77dde9);
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
B77ddec:{NFSU2_TR(0x77ddec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ddf0:L77ddf0:{c.instructions+=2;NFSU2_TR(0x77ddf0);
u8 U[4];
w4(U+0,u32(0x782330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ddf5:{NFSU2_TR(0x77ddf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ddfaull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ddfa:L77ddfa:{c.instructions+=2;NFSU2_TR(0x77ddfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ddfb:{NFSU2_TR(0x77ddfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77de00:L77de00:{c.instructions+=4;NFSU2_TR(0x77de00);
w4(R+0,u32(0x866c20ull));
}
B77de05:{NFSU2_TR(0x77de05);
w4(R+8,u32(0x12ull));
}
B77de0a:{NFSU2_TR(0x77de0a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B77de0c:{NFSU2_TR(0x77de0c);
__builtin_memmove((R+16),(R+16),4);
}
B77de10:L77de10:{c.instructions+=8;NFSU2_TR(0x77de10);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffe08ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B77de16:{NFSU2_TR(0x77de16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77de19:{NFSU2_TR(0x77de19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B77de1b:{NFSU2_TR(0x77de1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77de1e:{NFSU2_TR(0x77de1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77de21:{NFSU2_TR(0x77de21);
w1(R+512,carry<u32>(r4(R+0),u32(0x204ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
}
B77de26:{NFSU2_TR(0x77de26);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77de27:{NFSU2_TR(0x77de27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77de10u);}goto L77de10;}}
}
B77de29:L77de29:{c.instructions+=1;NFSU2_TR(0x77de29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77de30:L77de30:{c.instructions+=6;NFSU2_TR(0x77de30);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77de35:{NFSU2_TR(0x77de35);
u8 U[4];
w4(U+0,u32(0x588130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77de3a:{NFSU2_TR(0x77de3a);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77de3c:{NFSU2_TR(0x77de3c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77de3e:{NFSU2_TR(0x77de3e);
u8 U[4];
w4(U+0,u32(0x8693c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77de43:{NFSU2_TR(0x77de43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77de48ull));
TAIL_STATIC(0x75c461u,75c);
}
B77de48:L77de48:{c.instructions+=2;NFSU2_TR(0x77de48);
u8 U[4];
w4(U+0,u32(0x782340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77de4d:{NFSU2_TR(0x77de4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77de52ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77de52:L77de52:{c.instructions+=2;NFSU2_TR(0x77de52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77de53:{NFSU2_TR(0x77de53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77de60:L77de60:{c.instructions+=4;NFSU2_TR(0x77de60);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77de66:{NFSU2_TR(0x77de66);
{u32 ea_=u32(u32(8001468u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77de6c:{NFSU2_TR(0x77de6c);
{u32 ea_=u32(u32(8828092u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77de72:{NFSU2_TR(0x77de72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77de80:L77de80:{c.instructions+=4;NFSU2_TR(0x77de80);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77de82:{NFSU2_TR(0x77de82);
u8 U[4];
w4(U+0,u32(0x7fc880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77de87:{NFSU2_TR(0x77de87);
w4(R+4,u32(0x86b3c0ull));
}
B77de8c:{NFSU2_TR(0x77de8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77de91ull));
TAIL_STATIC(0x576770u,576);
}
B77de91:L77de91:{c.instructions+=1;NFSU2_TR(0x77de91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dea0:L77dea0:{c.instructions+=4;NFSU2_TR(0x77dea0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dea2:{NFSU2_TR(0x77dea2);
u8 U[4];
w4(U+0,u32(0x7fc8a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77dea7:{NFSU2_TR(0x77dea7);
w4(R+4,u32(0x86b590ull));
}
B77deac:{NFSU2_TR(0x77deac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77deb1ull));
TAIL_STATIC(0x576770u,576);
}
B77deb1:L77deb1:{c.instructions+=1;NFSU2_TR(0x77deb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dec0:L77dec0:{c.instructions+=2;NFSU2_TR(0x77dec0);
w4(R+4,u32(0x86b4c8ull));
}
B77dec5:{NFSU2_TR(0x77dec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77decaull));
TAIL_STATIC(0x598750u,598);
}
B77deca:L77deca:{c.instructions+=2;NFSU2_TR(0x77deca);
u8 U[4];
w4(U+0,u32(0x7823e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77decf:{NFSU2_TR(0x77decf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ded4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ded4:L77ded4:{c.instructions+=2;NFSU2_TR(0x77ded4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ded5:{NFSU2_TR(0x77ded5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dee0:L77dee0:{c.instructions+=2;NFSU2_TR(0x77dee0);
w4(R+4,u32(0x86b490ull));
}
B77dee5:{NFSU2_TR(0x77dee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77deeaull));
TAIL_STATIC(0x598750u,598);
}
B77deea:L77deea:{c.instructions+=2;NFSU2_TR(0x77deea);
u8 U[4];
w4(U+0,u32(0x7823f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77deef:{NFSU2_TR(0x77deef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77def4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77def4:L77def4:{c.instructions+=2;NFSU2_TR(0x77def4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77def5:{NFSU2_TR(0x77def5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77df00:L77df00:{c.instructions+=2;NFSU2_TR(0x77df00);
w4(R+4,u32(0x86b5a0ull));
}
B77df05:{NFSU2_TR(0x77df05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77df0aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77df0a:L77df0a:{c.instructions+=2;NFSU2_TR(0x77df0a);
u8 U[4];
w4(U+0,u32(0x782410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77df0f:{NFSU2_TR(0x77df0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77df14ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77df14:L77df14:{c.instructions+=2;NFSU2_TR(0x77df14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77df15:{NFSU2_TR(0x77df15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77df20:L77df20:{c.instructions+=2;NFSU2_TR(0x77df20);
w4(R+4,u32(0x86b598ull));
}
B77df25:{NFSU2_TR(0x77df25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77df2aull));
TAIL_STATIC(0x598750u,598);
}
B77df2a:L77df2a:{c.instructions+=2;NFSU2_TR(0x77df2a);
u8 U[4];
w4(U+0,u32(0x782400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77df2f:{NFSU2_TR(0x77df2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77df34ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77df34:L77df34:{c.instructions+=2;NFSU2_TR(0x77df34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77df35:{NFSU2_TR(0x77df35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77df40:L77df40:{c.instructions+=4;NFSU2_TR(0x77df40);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77df42:{NFSU2_TR(0x77df42);
u8 U[4];
w4(U+0,u32(0x7fc8c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77df47:{NFSU2_TR(0x77df47);
w4(R+4,u32(0x86b578ull));
}
B77df4c:{NFSU2_TR(0x77df4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77df51ull));
TAIL_STATIC(0x576770u,576);
}
B77df51:L77df51:{c.instructions+=1;NFSU2_TR(0x77df51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77df60:L77df60:{c.instructions+=4;NFSU2_TR(0x77df60);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77df62:{NFSU2_TR(0x77df62);
u8 U[4];
w4(U+0,u32(0x7fc8e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77df67:{NFSU2_TR(0x77df67);
w4(R+4,u32(0x86b498ull));
}
B77df6c:{NFSU2_TR(0x77df6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77df71ull));
TAIL_STATIC(0x576770u,576);
}
B77df71:L77df71:{c.instructions+=1;NFSU2_TR(0x77df71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77df80:L77df80:{c.instructions+=2;NFSU2_TR(0x77df80);
s4(0x86b4a8,u32(0x3db2b8c2ull));
}
B77df8a:{NFSU2_TR(0x77df8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77df90:L77df90:{c.instructions+=4;NFSU2_TR(0x77df90);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77df92:{NFSU2_TR(0x77df92);
u8 U[4];
w4(U+0,u32(0x7fc8f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77df97:{NFSU2_TR(0x77df97);
w4(R+4,u32(0x86b4a0ull));
}
B77df9c:{NFSU2_TR(0x77df9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77dfa1ull));
TAIL_STATIC(0x576770u,576);
}
B77dfa1:L77dfa1:{c.instructions+=1;NFSU2_TR(0x77dfa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77dfb0:L77dfb0:{c.instructions+=8;NFSU2_TR(0x77dfb0);
s4(0x86b5e8,u32(0x0ull));
}
B77dfba:{NFSU2_TR(0x77dfba);
s4(0x86b5ec,u32(0x0ull));
}
B77dfc4:{NFSU2_TR(0x77dfc4);
s4(0x86b5f0,u32(0x3e860a92ull));
}
B77dfce:{NFSU2_TR(0x77dfce);
s4(0x86b5f4,u32(0x3dcccccdull));
}
B77dfd8:{NFSU2_TR(0x77dfd8);
s4(0x86b5f8,u32(0x3f060a92ull));
}
B77dfe2:{NFSU2_TR(0x77dfe2);
s4(0x86b5fc,u32(0x3ee66666ull));
}
B77dfec:{NFSU2_TR(0x77dfec);
s4(0x86b600,u32(0x3f490fdbull));
}
B77dff6:{NFSU2_TR(0x77dff6);
s4(0x86b604,u32(0x3f59999aull));
TAIL_STATIC(0x77e000u,77e);
}
XIT:NFSU2_TR_EXIT(0x77d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
