#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_722(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_736(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x45a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x45a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_45a(u8* __restrict R,Cpu& c);
u32 page_45a(Cpu& c){return body_45a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_45a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x45a000:goto L45a000;
case 0x45a001:c.instructions+=3;goto B45a001;
case 0x45a003:c.instructions+=2;goto B45a003;
case 0x45a008:c.instructions+=1;goto B45a008;
case 0x45a00d:goto L45a00d;
case 0x45a00f:goto L45a00f;
case 0x45a014:c.instructions+=2;goto B45a014;
case 0x45a017:c.instructions+=1;goto B45a017;
case 0x45a018:goto L45a018;
case 0x45a01b:c.instructions+=6;goto B45a01b;
case 0x45a01d:c.instructions+=5;goto B45a01d;
case 0x45a020:c.instructions+=4;goto B45a020;
case 0x45a027:c.instructions+=3;goto B45a027;
case 0x45a02a:c.instructions+=2;goto B45a02a;
case 0x45a030:c.instructions+=1;goto B45a030;
case 0x45a032:goto L45a032;
case 0x45a036:c.instructions+=5;goto B45a036;
case 0x45a03b:c.instructions+=4;goto B45a03b;
case 0x45a03f:c.instructions+=3;goto B45a03f;
case 0x45a040:c.instructions+=2;goto B45a040;
case 0x45a045:c.instructions+=1;goto B45a045;
case 0x45a04a:goto L45a04a;
case 0x45a04c:c.instructions+=4;goto B45a04c;
case 0x45a04e:c.instructions+=3;goto B45a04e;
case 0x45a050:c.instructions+=2;goto B45a050;
case 0x45a055:c.instructions+=1;goto B45a055;
case 0x45a05a:goto L45a05a;
case 0x45a05d:c.instructions+=3;goto B45a05d;
case 0x45a065:c.instructions+=2;goto B45a065;
case 0x45a06d:c.instructions+=1;goto B45a06d;
case 0x45a0c0:goto L45a0c0;
case 0x45a0c4:c.instructions+=5;goto B45a0c4;
case 0x45a0c5:c.instructions+=4;goto B45a0c5;
case 0x45a0c9:c.instructions+=3;goto B45a0c9;
case 0x45a0ca:c.instructions+=2;goto B45a0ca;
case 0x45a0cc:c.instructions+=1;goto B45a0cc;
case 0x45a0d1:goto L45a0d1;
case 0x45a0d3:c.instructions+=2;goto B45a0d3;
case 0x45a0d5:c.instructions+=1;goto B45a0d5;
case 0x45a0d7:goto L45a0d7;
case 0x45a0d9:c.instructions+=1;goto B45a0d9;
case 0x45a0db:goto L45a0db;
case 0x45a0dd:goto L45a0dd;
case 0x45a0df:c.instructions+=1;goto B45a0df;
case 0x45a0e1:goto L45a0e1;
case 0x45a0e3:c.instructions+=1;goto B45a0e3;
case 0x45a0e5:goto L45a0e5;
case 0x45a0e8:c.instructions+=1;goto B45a0e8;
case 0x45a0ea:goto L45a0ea;
case 0x45a0ed:c.instructions+=3;goto B45a0ed;
case 0x45a0ee:c.instructions+=2;goto B45a0ee;
case 0x45a0f4:c.instructions+=1;goto B45a0f4;
case 0x45a0f6:goto L45a0f6;
case 0x45a0fb:goto L45a0fb;
case 0x45a0fc:c.instructions+=2;goto B45a0fc;
case 0x45a0fd:c.instructions+=1;goto B45a0fd;
case 0x45a3d0:goto L45a3d0;
case 0x45a3d4:c.instructions+=6;goto B45a3d4;
case 0x45a3d8:c.instructions+=5;goto B45a3d8;
case 0x45a3da:c.instructions+=4;goto B45a3da;
case 0x45a3db:c.instructions+=3;goto B45a3db;
case 0x45a3de:c.instructions+=2;goto B45a3de;
case 0x45a3e5:c.instructions+=1;goto B45a3e5;
case 0x45a3e7:goto L45a3e7;
case 0x45a3e8:c.instructions+=2;goto B45a3e8;
case 0x45a3e9:c.instructions+=1;goto B45a3e9;
case 0x45a3ee:goto L45a3ee;
case 0x45a3f1:c.instructions+=1;goto B45a3f1;
case 0x45a3f3:goto L45a3f3;
case 0x45a3f5:c.instructions+=6;goto B45a3f5;
case 0x45a3f7:c.instructions+=5;goto B45a3f7;
case 0x45a3fa:c.instructions+=4;goto B45a3fa;
case 0x45a3fc:c.instructions+=3;goto B45a3fc;
case 0x45a3ff:c.instructions+=2;goto B45a3ff;
case 0x45a400:c.instructions+=1;goto B45a400;
case 0x45a410:goto L45a410;
case 0x45a414:c.instructions+=2;goto B45a414;
case 0x45a416:c.instructions+=1;goto B45a416;
case 0x45a418:goto L45a418;
case 0x45a41b:c.instructions+=1;goto B45a41b;
case 0x45a41d:goto L45a41d;
case 0x45a424:c.instructions+=2;goto B45a424;
case 0x45a426:c.instructions+=1;goto B45a426;
case 0x45a428:goto L45a428;
case 0x45a42b:c.instructions+=2;goto B45a42b;
case 0x45a42d:c.instructions+=1;goto B45a42d;
case 0x45a42f:goto L45a42f;
case 0x45a433:c.instructions+=3;goto B45a433;
case 0x45a437:c.instructions+=2;goto B45a437;
case 0x45a43a:c.instructions+=1;goto B45a43a;
case 0x45a43d:goto L45a43d;
case 0x45a440:goto L45a440;
case 0x45a444:c.instructions+=3;goto B45a444;
case 0x45a44b:c.instructions+=2;goto B45a44b;
case 0x45a44d:c.instructions+=1;goto B45a44d;
case 0x45a44f:goto L45a44f;
case 0x45a454:c.instructions+=1;goto B45a454;
case 0x45a455:goto L45a455;
case 0x45a459:c.instructions+=2;goto B45a459;
case 0x45a45e:c.instructions+=1;goto B45a45e;
case 0x45a460:goto L45a460;
case 0x45a463:c.instructions+=1;goto B45a463;
case 0x45a468:goto L45a468;
case 0x45a46c:c.instructions+=3;goto B45a46c;
case 0x45a470:c.instructions+=2;goto B45a470;
case 0x45a474:c.instructions+=1;goto B45a474;
case 0x45a479:goto L45a479;
case 0x45a47d:c.instructions+=5;goto B45a47d;
case 0x45a481:c.instructions+=4;goto B45a481;
case 0x45a485:c.instructions+=3;goto B45a485;
case 0x45a48b:c.instructions+=2;goto B45a48b;
case 0x45a48e:c.instructions+=1;goto B45a48e;
case 0x45a4a0:goto L45a4a0;
case 0x45a4a4:c.instructions+=3;goto B45a4a4;
case 0x45a4ab:c.instructions+=2;goto B45a4ab;
case 0x45a4ad:c.instructions+=1;goto B45a4ad;
case 0x45a4af:goto L45a4af;
case 0x45a4b2:c.instructions+=1;goto B45a4b2;
case 0x45a4b3:goto L45a4b3;
case 0x45a4b8:c.instructions+=1;goto B45a4b8;
case 0x45a4c0:goto L45a4c0;
case 0x45a4c4:c.instructions+=3;goto B45a4c4;
case 0x45a4cb:c.instructions+=2;goto B45a4cb;
case 0x45a4cd:c.instructions+=1;goto B45a4cd;
case 0x45a4cf:goto L45a4cf;
case 0x45a4d2:c.instructions+=1;goto B45a4d2;
case 0x45a4d3:goto L45a4d3;
case 0x45a4d8:c.instructions+=1;goto B45a4d8;
case 0x45a4e0:goto L45a4e0;
case 0x45a4e4:c.instructions+=14;goto B45a4e4;
case 0x45a4e8:c.instructions+=13;goto B45a4e8;
case 0x45a4e9:c.instructions+=12;goto B45a4e9;
case 0x45a4ea:c.instructions+=11;goto B45a4ea;
case 0x45a4ee:c.instructions+=10;goto B45a4ee;
case 0x45a4ef:c.instructions+=9;goto B45a4ef;
case 0x45a4f1:c.instructions+=8;goto B45a4f1;
case 0x45a4f5:c.instructions+=7;goto B45a4f5;
case 0x45a4f6:c.instructions+=6;goto B45a4f6;
case 0x45a4f9:c.instructions+=5;goto B45a4f9;
case 0x45a4fd:c.instructions+=4;goto B45a4fd;
case 0x45a4fe:c.instructions+=3;goto B45a4fe;
case 0x45a4ff:c.instructions+=2;goto B45a4ff;
case 0x45a500:c.instructions+=1;goto B45a500;
case 0x45a505:goto L45a505;
case 0x45a508:c.instructions+=4;goto B45a508;
case 0x45a50a:c.instructions+=3;goto B45a50a;
case 0x45a50d:c.instructions+=2;goto B45a50d;
case 0x45a510:c.instructions+=1;goto B45a510;
case 0x45a512:goto L45a512;
case 0x45a515:c.instructions+=2;goto B45a515;
case 0x45a516:c.instructions+=1;goto B45a516;
case 0x45a51b:goto L45a51b;
case 0x45a51e:c.instructions+=4;goto B45a51e;
case 0x45a521:c.instructions+=3;goto B45a521;
case 0x45a522:c.instructions+=2;goto B45a522;
case 0x45a523:c.instructions+=1;goto B45a523;
case 0x45a526:goto L45a526;
case 0x45a52d:c.instructions+=1;goto B45a52d;
case 0x45a532:goto L45a532;
case 0x45a535:c.instructions+=4;goto B45a535;
case 0x45a537:c.instructions+=3;goto B45a537;
case 0x45a539:c.instructions+=2;goto B45a539;
case 0x45a53a:c.instructions+=1;goto B45a53a;
case 0x45a53f:goto L45a53f;
case 0x45a542:c.instructions+=1;goto B45a542;
case 0x45a547:goto L45a547;
case 0x45a54a:c.instructions+=3;goto B45a54a;
case 0x45a54b:c.instructions+=2;goto B45a54b;
case 0x45a54c:c.instructions+=1;goto B45a54c;
case 0x45a550:goto L45a550;
case 0x45a553:c.instructions+=3;goto B45a553;
case 0x45a554:c.instructions+=2;goto B45a554;
case 0x45a556:c.instructions+=1;goto B45a556;
case 0x45a55b:goto L45a55b;
case 0x45a55e:c.instructions+=4;goto B45a55e;
case 0x45a562:c.instructions+=3;goto B45a562;
case 0x45a563:c.instructions+=2;goto B45a563;
case 0x45a564:c.instructions+=1;goto B45a564;
case 0x45a569:goto L45a569;
case 0x45a56d:c.instructions+=4;goto B45a56d;
case 0x45a570:c.instructions+=3;goto B45a570;
case 0x45a572:c.instructions+=2;goto B45a572;
case 0x45a573:c.instructions+=1;goto B45a573;
case 0x45a575:goto L45a575;
case 0x45a57a:goto L45a57a;
case 0x45a57c:c.instructions+=2;goto B45a57c;
case 0x45a57f:c.instructions+=1;goto B45a57f;
case 0x45a580:goto L45a580;
case 0x45a584:c.instructions+=3;goto B45a584;
case 0x45a585:c.instructions+=2;goto B45a585;
case 0x45a586:c.instructions+=1;goto B45a586;
case 0x45a58b:goto L45a58b;
case 0x45a58e:c.instructions+=1;goto B45a58e;
case 0x45a593:goto L45a593;
case 0x45a598:c.instructions+=3;goto B45a598;
case 0x45a59b:c.instructions+=2;goto B45a59b;
case 0x45a59e:c.instructions+=1;goto B45a59e;
case 0x45a5a0:goto L45a5a0;
case 0x45a5a4:c.instructions+=5;goto B45a5a4;
case 0x45a5a6:c.instructions+=4;goto B45a5a6;
case 0x45a5a7:c.instructions+=3;goto B45a5a7;
case 0x45a5a8:c.instructions+=2;goto B45a5a8;
case 0x45a5aa:c.instructions+=1;goto B45a5aa;
case 0x45a5ac:goto L45a5ac;
case 0x45a5ae:c.instructions+=1;goto B45a5ae;
case 0x45a5b0:goto L45a5b0;
case 0x45a5b3:c.instructions+=1;goto B45a5b3;
case 0x45a5b5:goto L45a5b5;
case 0x45a5ba:goto L45a5ba;
case 0x45a5be:c.instructions+=2;goto B45a5be;
case 0x45a5c0:c.instructions+=1;goto B45a5c0;
case 0x45a5c2:goto L45a5c2;
case 0x45a5c3:c.instructions+=3;goto B45a5c3;
case 0x45a5c8:c.instructions+=2;goto B45a5c8;
case 0x45a5c9:c.instructions+=1;goto B45a5c9;
case 0x45a5cc:goto L45a5cc;
case 0x45a5cf:c.instructions+=1;goto B45a5cf;
case 0x45a5d4:goto L45a5d4;
case 0x45a5d7:c.instructions+=12;goto B45a5d7;
case 0x45a5da:c.instructions+=11;goto B45a5da;
case 0x45a5df:c.instructions+=10;goto B45a5df;
case 0x45a5e1:c.instructions+=9;goto B45a5e1;
case 0x45a5e4:c.instructions+=8;goto B45a5e4;
case 0x45a5e7:c.instructions+=7;goto B45a5e7;
case 0x45a5e9:c.instructions+=6;goto B45a5e9;
case 0x45a5ec:c.instructions+=5;goto B45a5ec;
case 0x45a5ee:c.instructions+=4;goto B45a5ee;
case 0x45a5ef:c.instructions+=3;goto B45a5ef;
case 0x45a5f0:c.instructions+=2;goto B45a5f0;
case 0x45a5f1:c.instructions+=1;goto B45a5f1;
case 0x45a5f6:goto L45a5f6;
case 0x45a5f9:c.instructions+=2;goto B45a5f9;
case 0x45a5fb:c.instructions+=1;goto B45a5fb;
case 0x45a600:goto L45a600;
case 0x45a602:c.instructions+=7;goto B45a602;
case 0x45a604:c.instructions+=6;goto B45a604;
case 0x45a607:c.instructions+=5;goto B45a607;
case 0x45a608:c.instructions+=4;goto B45a608;
case 0x45a609:c.instructions+=3;goto B45a609;
case 0x45a60a:c.instructions+=2;goto B45a60a;
case 0x45a60d:c.instructions+=1;goto B45a60d;
case 0x45a610:goto L45a610;
case 0x45a611:c.instructions+=2;goto B45a611;
case 0x45a613:c.instructions+=1;goto B45a613;
case 0x45a618:goto L45a618;
case 0x45a61b:c.instructions+=3;goto B45a61b;
case 0x45a61d:c.instructions+=2;goto B45a61d;
case 0x45a61e:c.instructions+=1;goto B45a61e;
case 0x45a623:goto L45a623;
case 0x45a626:c.instructions+=2;goto B45a626;
case 0x45a627:c.instructions+=1;goto B45a627;
case 0x45a630:goto L45a630;
case 0x45a631:c.instructions+=4;goto B45a631;
case 0x45a633:c.instructions+=3;goto B45a633;
case 0x45a636:c.instructions+=2;goto B45a636;
case 0x45a638:c.instructions+=1;goto B45a638;
case 0x45a63a:goto L45a63a;
case 0x45a63b:c.instructions+=2;goto B45a63b;
case 0x45a63c:c.instructions+=1;goto B45a63c;
case 0x45a641:goto L45a641;
case 0x45a644:c.instructions+=1;goto B45a644;
case 0x45a649:goto L45a649;
case 0x45a64b:c.instructions+=2;goto B45a64b;
case 0x45a64e:c.instructions+=1;goto B45a64e;
case 0x45a653:goto L45a653;
case 0x45a655:c.instructions+=1;goto B45a655;
case 0x45a657:goto L45a657;
case 0x45a65c:goto L45a65c;
case 0x45a661:goto L45a661;
case 0x45a663:c.instructions+=1;goto B45a663;
case 0x45a665:goto L45a665;
case 0x45a668:c.instructions+=2;goto B45a668;
case 0x45a669:c.instructions+=1;goto B45a669;
case 0x45a66e:goto L45a66e;
case 0x45a671:c.instructions+=1;goto B45a671;
case 0x45a672:goto L45a672;
case 0x45a673:c.instructions+=1;goto B45a673;
case 0x45a680:goto L45a680;
case 0x45a681:c.instructions+=3;goto B45a681;
case 0x45a686:c.instructions+=2;goto B45a686;
case 0x45a68b:c.instructions+=1;goto B45a68b;
case 0x45a690:goto L45a690;
case 0x45a695:c.instructions+=3;goto B45a695;
case 0x45a69a:c.instructions+=2;goto B45a69a;
case 0x45a69c:c.instructions+=1;goto B45a69c;
case 0x45a6a1:goto L45a6a1;
case 0x45a6a6:c.instructions+=3;goto B45a6a6;
case 0x45a6ab:c.instructions+=2;goto B45a6ab;
case 0x45a6ad:c.instructions+=1;goto B45a6ad;
case 0x45a6b2:goto L45a6b2;
case 0x45a6b7:c.instructions+=3;goto B45a6b7;
case 0x45a6bc:c.instructions+=2;goto B45a6bc;
case 0x45a6be:c.instructions+=1;goto B45a6be;
case 0x45a6c3:goto L45a6c3;
case 0x45a6c5:c.instructions+=2;goto B45a6c5;
case 0x45a6c6:c.instructions+=1;goto B45a6c6;
case 0x45a6d0:goto L45a6d0;
case 0x45a6d3:c.instructions+=7;goto B45a6d3;
case 0x45a6d7:c.instructions+=6;goto B45a6d7;
case 0x45a6db:c.instructions+=5;goto B45a6db;
case 0x45a6dc:c.instructions+=4;goto B45a6dc;
case 0x45a6e1:c.instructions+=3;goto B45a6e1;
case 0x45a6e5:c.instructions+=2;goto B45a6e5;
case 0x45a6e9:c.instructions+=1;goto B45a6e9;
case 0x45a6ee:goto L45a6ee;
case 0x45a6f1:c.instructions+=2;goto B45a6f1;
case 0x45a6f3:c.instructions+=1;goto B45a6f3;
case 0x45a6f5:goto L45a6f5;
case 0x45a6fa:c.instructions+=2;goto B45a6fa;
case 0x45a6ff:c.instructions+=1;goto B45a6ff;
case 0x45a704:goto L45a704;
case 0x45a708:c.instructions+=3;goto B45a708;
case 0x45a709:c.instructions+=2;goto B45a709;
case 0x45a70e:c.instructions+=1;goto B45a70e;
case 0x45a713:goto L45a713;
case 0x45a716:goto L45a716;
case 0x45a719:c.instructions+=1;goto B45a719;
case 0x45a720:goto L45a720;
case 0x45a723:c.instructions+=7;goto B45a723;
case 0x45a727:c.instructions+=6;goto B45a727;
case 0x45a72b:c.instructions+=5;goto B45a72b;
case 0x45a72c:c.instructions+=4;goto B45a72c;
case 0x45a731:c.instructions+=3;goto B45a731;
case 0x45a735:c.instructions+=2;goto B45a735;
case 0x45a739:c.instructions+=1;goto B45a739;
case 0x45a73e:goto L45a73e;
case 0x45a741:c.instructions+=2;goto B45a741;
case 0x45a743:c.instructions+=1;goto B45a743;
case 0x45a745:goto L45a745;
case 0x45a74a:c.instructions+=2;goto B45a74a;
case 0x45a74f:c.instructions+=1;goto B45a74f;
case 0x45a754:goto L45a754;
case 0x45a758:c.instructions+=3;goto B45a758;
case 0x45a759:c.instructions+=2;goto B45a759;
case 0x45a75e:c.instructions+=1;goto B45a75e;
case 0x45a763:goto L45a763;
case 0x45a766:goto L45a766;
case 0x45a769:c.instructions+=1;goto B45a769;
case 0x45a770:goto L45a770;
case 0x45a773:c.instructions+=6;goto B45a773;
case 0x45a777:c.instructions+=5;goto B45a777;
case 0x45a778:c.instructions+=4;goto B45a778;
case 0x45a77d:c.instructions+=3;goto B45a77d;
case 0x45a781:c.instructions+=2;goto B45a781;
case 0x45a785:c.instructions+=1;goto B45a785;
case 0x45a78a:goto L45a78a;
case 0x45a78d:c.instructions+=2;goto B45a78d;
case 0x45a78f:c.instructions+=1;goto B45a78f;
case 0x45a791:goto L45a791;
case 0x45a796:c.instructions+=2;goto B45a796;
case 0x45a79b:c.instructions+=1;goto B45a79b;
case 0x45a7a0:goto L45a7a0;
case 0x45a7a4:c.instructions+=3;goto B45a7a4;
case 0x45a7a5:c.instructions+=2;goto B45a7a5;
case 0x45a7aa:c.instructions+=1;goto B45a7aa;
case 0x45a7af:goto L45a7af;
case 0x45a7b2:goto L45a7b2;
case 0x45a7b5:c.instructions+=1;goto B45a7b5;
case 0x45a7c0:goto L45a7c0;
case 0x45a7c1:c.instructions+=7;goto B45a7c1;
case 0x45a7c2:c.instructions+=6;goto B45a7c2;
case 0x45a7c4:c.instructions+=5;goto B45a7c4;
case 0x45a7c7:c.instructions+=4;goto B45a7c7;
case 0x45a7c8:c.instructions+=3;goto B45a7c8;
case 0x45a7c9:c.instructions+=2;goto B45a7c9;
case 0x45a7ce:c.instructions+=1;goto B45a7ce;
case 0x45a7d0:goto L45a7d0;
case 0x45a7d1:c.instructions+=1;goto B45a7d1;
case 0x45a7d7:goto L45a7d7;
case 0x45a7da:c.instructions+=2;goto B45a7da;
case 0x45a7dc:c.instructions+=1;goto B45a7dc;
case 0x45a7e2:goto L45a7e2;
case 0x45a7e4:c.instructions+=1;goto B45a7e4;
case 0x45a7e7:goto L45a7e7;
case 0x45a7e9:c.instructions+=1;goto B45a7e9;
case 0x45a7ef:goto L45a7ef;
case 0x45a7f2:c.instructions+=2;goto B45a7f2;
case 0x45a7f4:c.instructions+=1;goto B45a7f4;
case 0x45a7fa:goto L45a7fa;
case 0x45a7fd:c.instructions+=2;goto B45a7fd;
case 0x45a7ff:c.instructions+=1;goto B45a7ff;
case 0x45a802:goto L45a802;
case 0x45a805:c.instructions+=3;goto B45a805;
case 0x45a808:c.instructions+=2;goto B45a808;
case 0x45a80a:c.instructions+=1;goto B45a80a;
case 0x45a80d:goto L45a80d;
case 0x45a80e:c.instructions+=1;goto B45a80e;
case 0x45a813:goto L45a813;
case 0x45a816:c.instructions+=1;goto B45a816;
case 0x45a81b:goto L45a81b;
case 0x45a81e:c.instructions+=3;goto B45a81e;
case 0x45a820:c.instructions+=2;goto B45a820;
case 0x45a822:c.instructions+=1;goto B45a822;
case 0x45a825:goto L45a825;
case 0x45a826:c.instructions+=3;goto B45a826;
case 0x45a828:c.instructions+=2;goto B45a828;
case 0x45a82a:c.instructions+=1;goto B45a82a;
case 0x45a82d:goto L45a82d;
case 0x45a82e:c.instructions+=1;goto B45a82e;
case 0x45a833:goto L45a833;
case 0x45a836:c.instructions+=2;goto B45a836;
case 0x45a839:c.instructions+=1;goto B45a839;
case 0x45a83e:goto L45a83e;
case 0x45a841:c.instructions+=2;goto B45a841;
case 0x45a843:c.instructions+=1;goto B45a843;
case 0x45a845:goto L45a845;
case 0x45a847:c.instructions+=1;goto B45a847;
case 0x45a84a:goto L45a84a;
case 0x45a84c:c.instructions+=1;goto B45a84c;
case 0x45a84e:goto L45a84e;
case 0x45a851:c.instructions+=2;goto B45a851;
case 0x45a853:c.instructions+=1;goto B45a853;
case 0x45a855:goto L45a855;
case 0x45a858:c.instructions+=2;goto B45a858;
case 0x45a85a:c.instructions+=1;goto B45a85a;
case 0x45a85d:goto L45a85d;
case 0x45a860:c.instructions+=3;goto B45a860;
case 0x45a863:c.instructions+=2;goto B45a863;
case 0x45a865:c.instructions+=1;goto B45a865;
case 0x45a868:goto L45a868;
case 0x45a869:c.instructions+=1;goto B45a869;
case 0x45a86e:goto L45a86e;
case 0x45a871:c.instructions+=1;goto B45a871;
case 0x45a876:goto L45a876;
case 0x45a879:c.instructions+=3;goto B45a879;
case 0x45a87b:c.instructions+=2;goto B45a87b;
case 0x45a87d:c.instructions+=1;goto B45a87d;
case 0x45a880:goto L45a880;
case 0x45a882:c.instructions+=3;goto B45a882;
case 0x45a883:c.instructions+=2;goto B45a883;
case 0x45a885:c.instructions+=1;goto B45a885;
case 0x45a888:goto L45a888;
case 0x45a889:c.instructions+=1;goto B45a889;
case 0x45a88e:goto L45a88e;
case 0x45a891:c.instructions+=1;goto B45a891;
case 0x45a894:goto L45a894;
case 0x45a897:c.instructions+=2;goto B45a897;
case 0x45a899:c.instructions+=1;goto B45a899;
case 0x45a89b:goto L45a89b;
case 0x45a89d:c.instructions+=1;goto B45a89d;
case 0x45a8a0:goto L45a8a0;
case 0x45a8a2:c.instructions+=1;goto B45a8a2;
case 0x45a8a4:goto L45a8a4;
case 0x45a8a7:c.instructions+=2;goto B45a8a7;
case 0x45a8a9:c.instructions+=1;goto B45a8a9;
case 0x45a8ab:goto L45a8ab;
case 0x45a8ae:c.instructions+=2;goto B45a8ae;
case 0x45a8b0:c.instructions+=1;goto B45a8b0;
case 0x45a8b3:goto L45a8b3;
case 0x45a8b6:c.instructions+=3;goto B45a8b6;
case 0x45a8b9:c.instructions+=2;goto B45a8b9;
case 0x45a8bb:c.instructions+=1;goto B45a8bb;
case 0x45a8be:goto L45a8be;
case 0x45a8bf:c.instructions+=1;goto B45a8bf;
case 0x45a8c4:goto L45a8c4;
case 0x45a8c7:c.instructions+=1;goto B45a8c7;
case 0x45a8cc:goto L45a8cc;
case 0x45a8cf:c.instructions+=3;goto B45a8cf;
case 0x45a8d1:c.instructions+=2;goto B45a8d1;
case 0x45a8d3:c.instructions+=1;goto B45a8d3;
case 0x45a8d6:goto L45a8d6;
case 0x45a8d7:c.instructions+=3;goto B45a8d7;
case 0x45a8d9:c.instructions+=2;goto B45a8d9;
case 0x45a8db:c.instructions+=1;goto B45a8db;
case 0x45a8de:goto L45a8de;
case 0x45a8df:c.instructions+=1;goto B45a8df;
case 0x45a8e4:goto L45a8e4;
case 0x45a8e7:c.instructions+=1;goto B45a8e7;
case 0x45a8ea:goto L45a8ea;
case 0x45a8ed:c.instructions+=2;goto B45a8ed;
case 0x45a8ef:c.instructions+=1;goto B45a8ef;
case 0x45a8f1:goto L45a8f1;
case 0x45a8f4:c.instructions+=2;goto B45a8f4;
case 0x45a8f6:c.instructions+=1;goto B45a8f6;
case 0x45a8fc:goto L45a8fc;
case 0x45a8ff:c.instructions+=2;goto B45a8ff;
case 0x45a901:c.instructions+=1;goto B45a901;
case 0x45a903:goto L45a903;
case 0x45a906:c.instructions+=2;goto B45a906;
case 0x45a908:c.instructions+=1;goto B45a908;
case 0x45a90e:goto L45a90e;
case 0x45a911:c.instructions+=3;goto B45a911;
case 0x45a912:c.instructions+=2;goto B45a912;
case 0x45a913:c.instructions+=1;goto B45a913;
case 0x45a918:goto L45a918;
case 0x45a91a:c.instructions+=5;goto B45a91a;
case 0x45a91d:c.instructions+=4;goto B45a91d;
case 0x45a920:c.instructions+=3;goto B45a920;
case 0x45a922:c.instructions+=2;goto B45a922;
case 0x45a924:c.instructions+=1;goto B45a924;
case 0x45a926:goto L45a926;
case 0x45a92c:c.instructions+=2;goto B45a92c;
case 0x45a92d:c.instructions+=1;goto B45a92d;
case 0x45a92f:goto L45a92f;
case 0x45a934:c.instructions+=1;goto B45a934;
case 0x45a935:goto L45a935;
case 0x45a93a:goto L45a93a;
case 0x45a940:c.instructions+=3;goto B45a940;
case 0x45a943:c.instructions+=2;goto B45a943;
case 0x45a945:c.instructions+=1;goto B45a945;
case 0x45a947:goto L45a947;
case 0x45a94d:c.instructions+=5;goto B45a94d;
case 0x45a950:c.instructions+=4;goto B45a950;
case 0x45a956:c.instructions+=3;goto B45a956;
case 0x45a957:c.instructions+=2;goto B45a957;
case 0x45a958:c.instructions+=1;goto B45a958;
case 0x45a95d:goto L45a95d;
case 0x45a95f:c.instructions+=1;goto B45a95f;
case 0x45a962:goto L45a962;
case 0x45a965:c.instructions+=5;goto B45a965;
case 0x45a967:c.instructions+=4;goto B45a967;
case 0x45a968:c.instructions+=3;goto B45a968;
case 0x45a969:c.instructions+=2;goto B45a969;
case 0x45a96c:c.instructions+=1;goto B45a96c;
case 0x45a971:goto L45a971;
case 0x45a974:c.instructions+=5;goto B45a974;
case 0x45a977:c.instructions+=4;goto B45a977;
case 0x45a97a:c.instructions+=3;goto B45a97a;
case 0x45a97c:c.instructions+=2;goto B45a97c;
case 0x45a97d:c.instructions+=1;goto B45a97d;
case 0x45a97f:goto L45a97f;
case 0x45a981:c.instructions+=1;goto B45a981;
case 0x45a983:goto L45a983;
case 0x45a985:c.instructions+=1;goto B45a985;
case 0x45a988:goto L45a988;
case 0x45a98b:c.instructions+=2;goto B45a98b;
case 0x45a98d:c.instructions+=1;goto B45a98d;
case 0x45a98f:goto L45a98f;
case 0x45a991:c.instructions+=1;goto B45a991;
case 0x45a994:goto L45a994;
case 0x45a995:c.instructions+=4;goto B45a995;
case 0x45a998:c.instructions+=3;goto B45a998;
case 0x45a999:c.instructions+=2;goto B45a999;
case 0x45a99a:c.instructions+=1;goto B45a99a;
case 0x45a99b:goto L45a99b;
case 0x45a99d:c.instructions+=1;goto B45a99d;
case 0x45a99f:goto L45a99f;
case 0x45a9a1:c.instructions+=1;goto B45a9a1;
case 0x45a9a4:goto L45a9a4;
case 0x45a9a7:goto L45a9a7;
case 0x45a9a8:c.instructions+=3;goto B45a9a8;
case 0x45a9a9:c.instructions+=2;goto B45a9a9;
case 0x45a9aa:c.instructions+=1;goto B45a9aa;
case 0x45a9b0:goto L45a9b0;
case 0x45a9b1:c.instructions+=6;goto B45a9b1;
case 0x45a9b2:c.instructions+=5;goto B45a9b2;
case 0x45a9b4:c.instructions+=4;goto B45a9b4;
case 0x45a9b7:c.instructions+=3;goto B45a9b7;
case 0x45a9b9:c.instructions+=2;goto B45a9b9;
case 0x45a9bb:c.instructions+=1;goto B45a9bb;
case 0x45a9bd:goto L45a9bd;
case 0x45a9c2:goto L45a9c2;
case 0x45a9c6:c.instructions+=2;goto B45a9c6;
case 0x45a9c9:c.instructions+=1;goto B45a9c9;
case 0x45a9cb:goto L45a9cb;
case 0x45a9cd:c.instructions+=1;goto B45a9cd;
case 0x45a9cf:goto L45a9cf;
case 0x45a9d1:c.instructions+=2;goto B45a9d1;
case 0x45a9d3:c.instructions+=1;goto B45a9d3;
case 0x45a9d5:goto L45a9d5;
case 0x45a9d8:c.instructions+=2;goto B45a9d8;
case 0x45a9da:c.instructions+=1;goto B45a9da;
case 0x45a9dc:goto L45a9dc;
case 0x45a9de:c.instructions+=2;goto B45a9de;
case 0x45a9e0:c.instructions+=1;goto B45a9e0;
case 0x45a9e2:goto L45a9e2;
case 0x45a9e4:goto L45a9e4;
case 0x45a9e6:c.instructions+=1;goto B45a9e6;
case 0x45a9e8:goto L45a9e8;
case 0x45a9ea:c.instructions+=2;goto B45a9ea;
case 0x45a9ec:c.instructions+=1;goto B45a9ec;
case 0x45a9ee:goto L45a9ee;
case 0x45a9f1:c.instructions+=4;goto B45a9f1;
case 0x45a9f3:c.instructions+=3;goto B45a9f3;
case 0x45a9f6:c.instructions+=2;goto B45a9f6;
case 0x45a9f9:c.instructions+=1;goto B45a9f9;
case 0x45a9fb:goto L45a9fb;
case 0x45a9fc:c.instructions+=1;goto B45a9fc;
case 0x45aa01:goto L45aa01;
case 0x45aa04:c.instructions+=1;goto B45aa04;
case 0x45aa07:goto L45aa07;
case 0x45aa0a:goto L45aa0a;
case 0x45aa0b:c.instructions+=2;goto B45aa0b;
case 0x45aa0c:c.instructions+=1;goto B45aa0c;
case 0x45aa10:goto L45aa10;
case 0x45aa14:c.instructions+=5;goto B45aa14;
case 0x45aa18:c.instructions+=4;goto B45aa18;
case 0x45aa19:c.instructions+=3;goto B45aa19;
case 0x45aa1a:c.instructions+=2;goto B45aa1a;
case 0x45aa1f:c.instructions+=1;goto B45aa1f;
case 0x45aa24:goto L45aa24;
case 0x45aa27:c.instructions+=1;goto B45aa27;
case 0x45aa30:goto L45aa30;
case 0x45aa34:c.instructions+=19;goto B45aa34;
case 0x45aa36:c.instructions+=18;goto B45aa36;
case 0x45aa3a:c.instructions+=17;goto B45aa3a;
case 0x45aa3b:c.instructions+=16;goto B45aa3b;
case 0x45aa3c:c.instructions+=15;goto B45aa3c;
case 0x45aa3e:c.instructions+=14;goto B45aa3e;
case 0x45aa3f:c.instructions+=13;goto B45aa3f;
case 0x45aa43:c.instructions+=12;goto B45aa43;
case 0x45aa46:c.instructions+=11;goto B45aa46;
case 0x45aa49:c.instructions+=10;goto B45aa49;
case 0x45aa4b:c.instructions+=9;goto B45aa4b;
case 0x45aa4d:c.instructions+=8;goto B45aa4d;
case 0x45aa4e:c.instructions+=7;goto B45aa4e;
case 0x45aa50:c.instructions+=6;goto B45aa50;
case 0x45aa52:c.instructions+=5;goto B45aa52;
case 0x45aa54:c.instructions+=4;goto B45aa54;
case 0x45aa57:c.instructions+=3;goto B45aa57;
case 0x45aa5b:c.instructions+=2;goto B45aa5b;
case 0x45aa5d:c.instructions+=1;goto B45aa5d;
case 0x45aa5f:goto L45aa5f;
case 0x45aa60:goto L45aa60;
case 0x45aa62:c.instructions+=1;goto B45aa62;
case 0x45aa64:goto L45aa64;
case 0x45aa66:c.instructions+=1;goto B45aa66;
case 0x45aa68:goto L45aa68;
case 0x45aa6a:c.instructions+=1;goto B45aa6a;
case 0x45aa6c:goto L45aa6c;
case 0x45aa6e:c.instructions+=1;goto B45aa6e;
case 0x45aa70:goto L45aa70;
case 0x45aa72:goto L45aa72;
case 0x45aa75:c.instructions+=6;goto B45aa75;
case 0x45aa77:c.instructions+=5;goto B45aa77;
case 0x45aa79:c.instructions+=4;goto B45aa79;
case 0x45aa7c:c.instructions+=3;goto B45aa7c;
case 0x45aa80:c.instructions+=2;goto B45aa80;
case 0x45aa82:c.instructions+=1;goto B45aa82;
case 0x45aa84:goto L45aa84;
case 0x45aa86:c.instructions+=3;goto B45aa86;
case 0x45aa89:c.instructions+=2;goto B45aa89;
case 0x45aa8d:c.instructions+=1;goto B45aa8d;
case 0x45aa8f:goto L45aa8f;
case 0x45aa91:c.instructions+=3;goto B45aa91;
case 0x45aa94:c.instructions+=2;goto B45aa94;
case 0x45aa98:c.instructions+=1;goto B45aa98;
case 0x45aa9a:goto L45aa9a;
case 0x45aa9c:c.instructions+=1;goto B45aa9c;
case 0x45aa9e:goto L45aa9e;
case 0x45aaa0:c.instructions+=3;goto B45aaa0;
case 0x45aaa3:c.instructions+=2;goto B45aaa3;
case 0x45aaa7:c.instructions+=1;goto B45aaa7;
case 0x45aaa9:goto L45aaa9;
case 0x45aaab:goto L45aaab;
case 0x45aaad:c.instructions+=5;goto B45aaad;
case 0x45aab0:c.instructions+=4;goto B45aab0;
case 0x45aab4:c.instructions+=3;goto B45aab4;
case 0x45aab6:c.instructions+=2;goto B45aab6;
case 0x45aab8:c.instructions+=1;goto B45aab8;
case 0x45aaba:goto L45aaba;
case 0x45aabe:c.instructions+=8;goto B45aabe;
case 0x45aabf:c.instructions+=7;goto B45aabf;
case 0x45aac0:c.instructions+=6;goto B45aac0;
case 0x45aac6:c.instructions+=5;goto B45aac6;
case 0x45aacd:c.instructions+=4;goto B45aacd;
case 0x45aad4:c.instructions+=3;goto B45aad4;
case 0x45aad7:c.instructions+=2;goto B45aad7;
case 0x45aad8:c.instructions+=1;goto B45aad8;
case 0x45aadb:goto L45aadb;
case 0x45aade:c.instructions+=14;goto B45aade;
case 0x45aae1:c.instructions+=13;goto B45aae1;
case 0x45aae4:c.instructions+=12;goto B45aae4;
case 0x45aae8:c.instructions+=11;goto B45aae8;
case 0x45aaea:c.instructions+=10;goto B45aaea;
case 0x45aaec:c.instructions+=9;goto B45aaec;
case 0x45aaef:c.instructions+=8;goto B45aaef;
case 0x45aaf2:c.instructions+=7;goto B45aaf2;
case 0x45aaf5:c.instructions+=6;goto B45aaf5;
case 0x45aaf6:c.instructions+=5;goto B45aaf6;
case 0x45aaf7:c.instructions+=4;goto B45aaf7;
case 0x45aafa:c.instructions+=3;goto B45aafa;
case 0x45aafc:c.instructions+=2;goto B45aafc;
case 0x45aafd:c.instructions+=1;goto B45aafd;
case 0x45ab00:goto L45ab00;
case 0x45ab04:c.instructions+=12;goto B45ab04;
case 0x45ab05:c.instructions+=11;goto B45ab05;
case 0x45ab09:c.instructions+=10;goto B45ab09;
case 0x45ab0a:c.instructions+=9;goto B45ab0a;
case 0x45ab0b:c.instructions+=8;goto B45ab0b;
case 0x45ab0e:c.instructions+=7;goto B45ab0e;
case 0x45ab0f:c.instructions+=6;goto B45ab0f;
case 0x45ab12:c.instructions+=5;goto B45ab12;
case 0x45ab14:c.instructions+=4;goto B45ab14;
case 0x45ab16:c.instructions+=3;goto B45ab16;
case 0x45ab18:c.instructions+=2;goto B45ab18;
case 0x45ab1c:c.instructions+=1;goto B45ab1c;
case 0x45ab1e:goto L45ab1e;
case 0x45ab20:goto L45ab20;
case 0x45ab23:c.instructions+=1;goto B45ab23;
case 0x45ab25:goto L45ab25;
case 0x45ab28:goto L45ab28;
case 0x45ab2b:c.instructions+=2;goto B45ab2b;
case 0x45ab2d:c.instructions+=1;goto B45ab2d;
case 0x45ab2f:goto L45ab2f;
case 0x45ab35:c.instructions+=3;goto B45ab35;
case 0x45ab36:c.instructions+=2;goto B45ab36;
case 0x45ab38:c.instructions+=1;goto B45ab38;
case 0x45ab3d:goto L45ab3d;
case 0x45ab43:c.instructions+=3;goto B45ab43;
case 0x45ab46:c.instructions+=2;goto B45ab46;
case 0x45ab48:c.instructions+=1;goto B45ab48;
case 0x45ab4a:goto L45ab4a;
case 0x45ab50:c.instructions+=5;goto B45ab50;
case 0x45ab53:c.instructions+=4;goto B45ab53;
case 0x45ab59:c.instructions+=3;goto B45ab59;
case 0x45ab5a:c.instructions+=2;goto B45ab5a;
case 0x45ab5b:c.instructions+=1;goto B45ab5b;
case 0x45ab60:goto L45ab60;
case 0x45ab63:c.instructions+=1;goto B45ab63;
case 0x45ab65:goto L45ab65;
case 0x45ab67:c.instructions+=3;goto B45ab67;
case 0x45ab6b:c.instructions+=2;goto B45ab6b;
case 0x45ab6d:c.instructions+=1;goto B45ab6d;
case 0x45ab6f:goto L45ab6f;
case 0x45ab70:goto L45ab70;
case 0x45ab72:c.instructions+=2;goto B45ab72;
case 0x45ab74:c.instructions+=1;goto B45ab74;
case 0x45ab76:goto L45ab76;
case 0x45ab79:c.instructions+=3;goto B45ab79;
case 0x45ab7b:c.instructions+=2;goto B45ab7b;
case 0x45ab7e:c.instructions+=1;goto B45ab7e;
case 0x45ab80:goto L45ab80;
case 0x45ab82:goto L45ab82;
case 0x45ab84:c.instructions+=1;goto B45ab84;
case 0x45ab87:goto L45ab87;
case 0x45ab89:goto L45ab89;
case 0x45ab8c:c.instructions+=5;goto B45ab8c;
case 0x45ab8e:c.instructions+=4;goto B45ab8e;
case 0x45ab90:c.instructions+=3;goto B45ab90;
case 0x45ab91:c.instructions+=2;goto B45ab91;
case 0x45ab93:c.instructions+=1;goto B45ab93;
case 0x45ab98:goto L45ab98;
case 0x45ab9c:c.instructions+=2;goto B45ab9c;
case 0x45ab9f:c.instructions+=1;goto B45ab9f;
case 0x45aba2:goto L45aba2;
case 0x45aba5:c.instructions+=2;goto B45aba5;
case 0x45aba7:c.instructions+=1;goto B45aba7;
case 0x45aba9:goto L45aba9;
case 0x45abaa:c.instructions+=5;goto B45abaa;
case 0x45abab:c.instructions+=4;goto B45abab;
case 0x45abac:c.instructions+=3;goto B45abac;
case 0x45abae:c.instructions+=2;goto B45abae;
case 0x45abaf:c.instructions+=1;goto B45abaf;
case 0x45abc0:goto L45abc0;
case 0x45abc6:c.instructions+=3;goto B45abc6;
case 0x45abcc:c.instructions+=2;goto B45abcc;
case 0x45abd2:c.instructions+=1;goto B45abd2;
case 0x45abe0:goto L45abe0;
case 0x45abe5:c.instructions+=4;goto B45abe5;
case 0x45abe7:c.instructions+=3;goto B45abe7;
case 0x45abe8:c.instructions+=2;goto B45abe8;
case 0x45abea:c.instructions+=1;goto B45abea;
case 0x45abec:goto L45abec;
case 0x45abef:c.instructions+=2;goto B45abef;
case 0x45abf0:c.instructions+=1;goto B45abf0;
case 0x45abf2:goto L45abf2;
case 0x45abf3:c.instructions+=1;goto B45abf3;
case 0x45abf5:goto L45abf5;
case 0x45abf8:c.instructions+=2;goto B45abf8;
case 0x45abfa:c.instructions+=1;goto B45abfa;
case 0x45abfc:goto L45abfc;
case 0x45abfe:c.instructions+=2;goto B45abfe;
case 0x45abff:c.instructions+=1;goto B45abff;
case 0x45ac02:goto L45ac02;
case 0x45ac05:c.instructions+=2;goto B45ac05;
case 0x45ac07:c.instructions+=1;goto B45ac07;
case 0x45ac09:goto L45ac09;
case 0x45ac0b:c.instructions+=1;goto B45ac0b;
case 0x45ac0e:goto L45ac0e;
case 0x45ac11:c.instructions+=2;goto B45ac11;
case 0x45ac13:c.instructions+=1;goto B45ac13;
case 0x45ac15:goto L45ac15;
case 0x45ac17:c.instructions+=2;goto B45ac17;
case 0x45ac18:c.instructions+=1;goto B45ac18;
case 0x45ac1b:goto L45ac1b;
case 0x45ac1c:c.instructions+=1;goto B45ac1c;
case 0x45ac20:goto L45ac20;
case 0x45ac21:c.instructions+=5;goto B45ac21;
case 0x45ac25:c.instructions+=4;goto B45ac25;
case 0x45ac27:c.instructions+=3;goto B45ac27;
case 0x45ac2a:c.instructions+=2;goto B45ac2a;
case 0x45ac2c:c.instructions+=1;goto B45ac2c;
case 0x45ac2e:goto L45ac2e;
case 0x45ac31:c.instructions+=2;goto B45ac31;
case 0x45ac33:c.instructions+=1;goto B45ac33;
case 0x45ac35:goto L45ac35;
case 0x45ac3a:c.instructions+=3;goto B45ac3a;
case 0x45ac41:c.instructions+=2;goto B45ac41;
case 0x45ac42:c.instructions+=1;goto B45ac42;
case 0x45ac44:goto L45ac44;
case 0x45ac46:c.instructions+=2;goto B45ac46;
case 0x45ac4e:c.instructions+=1;goto B45ac4e;
case 0x45ac51:goto L45ac51;
case 0x45ac53:c.instructions+=2;goto B45ac53;
case 0x45ac5b:c.instructions+=1;goto B45ac5b;
case 0x45ac5e:goto L45ac5e;
case 0x45ac61:c.instructions+=2;goto B45ac61;
case 0x45ac63:c.instructions+=1;goto B45ac63;
case 0x45ac69:goto L45ac69;
case 0x45ac6c:c.instructions+=2;goto B45ac6c;
case 0x45ac6f:c.instructions+=1;goto B45ac6f;
case 0x45ac75:goto L45ac75;
case 0x45ac7c:goto L45ac7c;
case 0x45ac7f:c.instructions+=2;goto B45ac7f;
case 0x45ac81:c.instructions+=1;goto B45ac81;
case 0x45ac87:goto L45ac87;
case 0x45ac89:c.instructions+=3;goto B45ac89;
case 0x45ac8a:c.instructions+=2;goto B45ac8a;
case 0x45ac92:c.instructions+=1;goto B45ac92;
case 0x45ac95:goto L45ac95;
case 0x45ac98:c.instructions+=2;goto B45ac98;
case 0x45ac9a:c.instructions+=1;goto B45ac9a;
case 0x45ac9c:goto L45ac9c;
case 0x45ac9e:c.instructions+=3;goto B45ac9e;
case 0x45ac9f:c.instructions+=2;goto B45ac9f;
case 0x45aca7:c.instructions+=1;goto B45aca7;
case 0x45acaa:goto L45acaa;
case 0x45acad:c.instructions+=2;goto B45acad;
case 0x45acaf:c.instructions+=1;goto B45acaf;
case 0x45acb1:goto L45acb1;
case 0x45acb3:c.instructions+=3;goto B45acb3;
case 0x45acb4:c.instructions+=2;goto B45acb4;
case 0x45acbc:c.instructions+=1;goto B45acbc;
case 0x45acbf:goto L45acbf;
case 0x45acc2:c.instructions+=2;goto B45acc2;
case 0x45acc4:c.instructions+=1;goto B45acc4;
case 0x45acc6:goto L45acc6;
case 0x45acc8:c.instructions+=3;goto B45acc8;
case 0x45acc9:c.instructions+=2;goto B45acc9;
case 0x45acd1:c.instructions+=1;goto B45acd1;
case 0x45acd4:goto L45acd4;
case 0x45acd7:c.instructions+=2;goto B45acd7;
case 0x45acd9:c.instructions+=1;goto B45acd9;
case 0x45acdb:goto L45acdb;
case 0x45acdd:c.instructions+=3;goto B45acdd;
case 0x45acde:c.instructions+=2;goto B45acde;
case 0x45ace6:c.instructions+=1;goto B45ace6;
case 0x45ace9:goto L45ace9;
case 0x45acec:c.instructions+=2;goto B45acec;
case 0x45acee:c.instructions+=1;goto B45acee;
case 0x45acf0:goto L45acf0;
case 0x45acf2:c.instructions+=3;goto B45acf2;
case 0x45acf3:c.instructions+=2;goto B45acf3;
case 0x45acfb:c.instructions+=1;goto B45acfb;
case 0x45acfe:goto L45acfe;
case 0x45ad01:c.instructions+=2;goto B45ad01;
case 0x45ad03:c.instructions+=1;goto B45ad03;
case 0x45ad05:goto L45ad05;
case 0x45ad07:c.instructions+=3;goto B45ad07;
case 0x45ad08:c.instructions+=2;goto B45ad08;
case 0x45ad10:c.instructions+=1;goto B45ad10;
case 0x45ad13:goto L45ad13;
case 0x45ad14:c.instructions+=1;goto B45ad14;
case 0x45ad40:goto L45ad40;
case 0x45ad43:c.instructions+=6;goto B45ad43;
case 0x45ad44:c.instructions+=5;goto B45ad44;
case 0x45ad45:c.instructions+=4;goto B45ad45;
case 0x45ad47:c.instructions+=3;goto B45ad47;
case 0x45ad4a:c.instructions+=2;goto B45ad4a;
case 0x45ad4d:c.instructions+=1;goto B45ad4d;
case 0x45ad52:goto L45ad52;
case 0x45ad55:c.instructions+=4;goto B45ad55;
case 0x45ad59:c.instructions+=3;goto B45ad59;
case 0x45ad5a:c.instructions+=2;goto B45ad5a;
case 0x45ad5b:c.instructions+=1;goto B45ad5b;
case 0x45ad60:goto L45ad60;
case 0x45ad63:c.instructions+=2;goto B45ad63;
case 0x45ad65:c.instructions+=1;goto B45ad65;
case 0x45ad6a:goto L45ad6a;
case 0x45ad6d:c.instructions+=8;goto B45ad6d;
case 0x45ad6f:c.instructions+=7;goto B45ad6f;
case 0x45ad71:c.instructions+=6;goto B45ad71;
case 0x45ad75:c.instructions+=5;goto B45ad75;
case 0x45ad78:c.instructions+=4;goto B45ad78;
case 0x45ad79:c.instructions+=3;goto B45ad79;
case 0x45ad7b:c.instructions+=2;goto B45ad7b;
case 0x45ad7d:c.instructions+=1;goto B45ad7d;
case 0x45ad7f:goto L45ad7f;
case 0x45ad81:c.instructions+=1;goto B45ad81;
case 0x45ad83:goto L45ad83;
case 0x45ad87:c.instructions+=1;goto B45ad87;
case 0x45ad89:goto L45ad89;
case 0x45ad8c:c.instructions+=3;goto B45ad8c;
case 0x45ad8e:c.instructions+=2;goto B45ad8e;
case 0x45ad8f:c.instructions+=1;goto B45ad8f;
case 0x45ad94:goto L45ad94;
case 0x45ad97:c.instructions+=3;goto B45ad97;
case 0x45ad9a:c.instructions+=2;goto B45ad9a;
case 0x45ad9c:c.instructions+=1;goto B45ad9c;
case 0x45ad9e:goto L45ad9e;
case 0x45ad9f:c.instructions+=1;goto B45ad9f;
case 0x45ada4:goto L45ada4;
case 0x45ada7:c.instructions+=1;goto B45ada7;
case 0x45adae:goto L45adae;
case 0x45adaf:c.instructions+=4;goto B45adaf;
case 0x45adb1:c.instructions+=3;goto B45adb1;
case 0x45adb2:c.instructions+=2;goto B45adb2;
case 0x45adb5:c.instructions+=1;goto B45adb5;
case 0x45adb8:goto L45adb8;
case 0x45adbb:c.instructions+=2;goto B45adbb;
case 0x45adbd:c.instructions+=1;goto B45adbd;
case 0x45adbf:goto L45adbf;
case 0x45adc2:c.instructions+=3;goto B45adc2;
case 0x45adc5:c.instructions+=2;goto B45adc5;
case 0x45adc6:c.instructions+=1;goto B45adc6;
case 0x45adcb:goto L45adcb;
case 0x45adce:c.instructions+=3;goto B45adce;
case 0x45add1:c.instructions+=2;goto B45add1;
case 0x45add2:c.instructions+=1;goto B45add2;
case 0x45add7:goto L45add7;
case 0x45adda:c.instructions+=4;goto B45adda;
case 0x45addd:c.instructions+=3;goto B45addd;
case 0x45addf:c.instructions+=2;goto B45addf;
case 0x45ade0:c.instructions+=1;goto B45ade0;
case 0x45ade5:goto L45ade5;
case 0x45ade8:goto L45ade8;
case 0x45ade9:c.instructions+=4;goto B45ade9;
case 0x45adeb:c.instructions+=3;goto B45adeb;
case 0x45adec:c.instructions+=2;goto B45adec;
case 0x45adef:c.instructions+=1;goto B45adef;
case 0x45ae00:goto L45ae00;
case 0x45ae01:c.instructions+=3;goto B45ae01;
case 0x45ae04:c.instructions+=2;goto B45ae04;
case 0x45ae07:c.instructions+=1;goto B45ae07;
case 0x45ae0c:goto L45ae0c;
case 0x45ae0f:c.instructions+=3;goto B45ae0f;
case 0x45ae11:c.instructions+=2;goto B45ae11;
case 0x45ae12:c.instructions+=1;goto B45ae12;
case 0x45ae17:goto L45ae17;
case 0x45ae1a:c.instructions+=2;goto B45ae1a;
case 0x45ae1b:c.instructions+=1;goto B45ae1b;
case 0x45ae20:goto L45ae20;
case 0x45ae21:c.instructions+=3;goto B45ae21;
case 0x45ae24:c.instructions+=2;goto B45ae24;
case 0x45ae27:c.instructions+=1;goto B45ae27;
case 0x45ae2c:goto L45ae2c;
case 0x45ae2f:c.instructions+=3;goto B45ae2f;
case 0x45ae34:c.instructions+=2;goto B45ae34;
case 0x45ae35:c.instructions+=1;goto B45ae35;
case 0x45ae3a:goto L45ae3a;
case 0x45ae3d:c.instructions+=2;goto B45ae3d;
case 0x45ae3e:c.instructions+=1;goto B45ae3e;
case 0x45ae50:goto L45ae50;
case 0x45ae54:c.instructions+=2;goto B45ae54;
case 0x45ae57:c.instructions+=1;goto B45ae57;
case 0x45ae59:goto L45ae59;
case 0x45ae5a:c.instructions+=1;goto B45ae5a;
case 0x45ae5c:goto L45ae5c;
case 0x45ae5d:c.instructions+=1;goto B45ae5d;
case 0x45ae5f:goto L45ae5f;
case 0x45ae65:c.instructions+=2;goto B45ae65;
case 0x45ae6c:c.instructions+=1;goto B45ae6c;
case 0x45ae71:goto L45ae71;
case 0x45ae76:c.instructions+=4;goto B45ae76;
case 0x45ae7b:c.instructions+=3;goto B45ae7b;
case 0x45ae7d:c.instructions+=2;goto B45ae7d;
case 0x45ae7f:c.instructions+=1;goto B45ae7f;
case 0x45ae81:goto L45ae81;
case 0x45ae87:c.instructions+=2;goto B45ae87;
case 0x45ae8a:c.instructions+=1;goto B45ae8a;
case 0x45ae90:goto L45ae90;
case 0x45ae92:c.instructions+=4;goto B45ae92;
case 0x45ae95:c.instructions+=3;goto B45ae95;
case 0x45ae96:c.instructions+=2;goto B45ae96;
case 0x45ae9c:c.instructions+=1;goto B45ae9c;
case 0x45ae9e:goto L45ae9e;
case 0x45aea0:goto L45aea0;
case 0x45aea3:c.instructions+=12;goto B45aea3;
case 0x45aea8:c.instructions+=11;goto B45aea8;
case 0x45aea9:c.instructions+=10;goto B45aea9;
case 0x45aeaa:c.instructions+=9;goto B45aeaa;
case 0x45aead:c.instructions+=8;goto B45aead;
case 0x45aeb2:c.instructions+=7;goto B45aeb2;
case 0x45aeb3:c.instructions+=6;goto B45aeb3;
case 0x45aeb4:c.instructions+=5;goto B45aeb4;
case 0x45aeb6:c.instructions+=4;goto B45aeb6;
case 0x45aebe:c.instructions+=3;goto B45aebe;
case 0x45aec1:c.instructions+=2;goto B45aec1;
case 0x45aec3:c.instructions+=1;goto B45aec3;
case 0x45aec8:goto L45aec8;
case 0x45aece:c.instructions+=3;goto B45aece;
case 0x45aed1:c.instructions+=2;goto B45aed1;
case 0x45aed3:c.instructions+=1;goto B45aed3;
case 0x45aed5:goto L45aed5;
case 0x45aedb:c.instructions+=5;goto B45aedb;
case 0x45aede:c.instructions+=4;goto B45aede;
case 0x45aee4:c.instructions+=3;goto B45aee4;
case 0x45aee5:c.instructions+=2;goto B45aee5;
case 0x45aee6:c.instructions+=1;goto B45aee6;
case 0x45aeeb:goto L45aeeb;
case 0x45aeee:c.instructions+=1;goto B45aeee;
case 0x45aef0:goto L45aef0;
case 0x45aef3:c.instructions+=5;goto B45aef3;
case 0x45aef8:c.instructions+=4;goto B45aef8;
case 0x45aefa:c.instructions+=3;goto B45aefa;
case 0x45aefc:c.instructions+=2;goto B45aefc;
case 0x45af00:c.instructions+=1;goto B45af00;
case 0x45af02:goto L45af02;
case 0x45af05:c.instructions+=11;goto B45af05;
case 0x45af08:c.instructions+=10;goto B45af08;
case 0x45af0b:c.instructions+=9;goto B45af0b;
case 0x45af0c:c.instructions+=8;goto B45af0c;
case 0x45af12:c.instructions+=7;goto B45af12;
case 0x45af16:c.instructions+=6;goto B45af16;
case 0x45af17:c.instructions+=5;goto B45af17;
case 0x45af1b:c.instructions+=4;goto B45af1b;
case 0x45af1c:c.instructions+=3;goto B45af1c;
case 0x45af22:c.instructions+=2;goto B45af22;
case 0x45af23:c.instructions+=1;goto B45af23;
case 0x45af28:goto L45af28;
case 0x45af2d:c.instructions+=4;goto B45af2d;
case 0x45af2e:c.instructions+=3;goto B45af2e;
case 0x45af30:c.instructions+=2;goto B45af30;
case 0x45af34:c.instructions+=1;goto B45af34;
case 0x45af36:goto L45af36;
case 0x45af3c:c.instructions+=6;goto B45af3c;
case 0x45af3d:c.instructions+=5;goto B45af3d;
case 0x45af40:c.instructions+=4;goto B45af40;
case 0x45af41:c.instructions+=3;goto B45af41;
case 0x45af44:c.instructions+=2;goto B45af44;
case 0x45af45:c.instructions+=1;goto B45af45;
case 0x45af4a:goto L45af4a;
case 0x45af50:c.instructions+=2;goto B45af50;
case 0x45af51:c.instructions+=1;goto B45af51;
case 0x45af56:goto L45af56;
case 0x45af59:c.instructions+=6;goto B45af59;
case 0x45af5a:c.instructions+=5;goto B45af5a;
case 0x45af5b:c.instructions+=4;goto B45af5b;
case 0x45af65:c.instructions+=3;goto B45af65;
case 0x45af66:c.instructions+=2;goto B45af66;
case 0x45af69:c.instructions+=1;goto B45af69;
case 0x45af70:goto L45af70;
case 0x45af75:c.instructions+=1;goto B45af75;
case 0x45af80:goto L45af80;
case 0x45af82:c.instructions+=1;goto B45af82;
case 0x45af90:goto L45af90;
case 0x45af94:c.instructions+=2;goto B45af94;
case 0x45af97:c.instructions+=1;goto B45af97;
case 0x45af99:goto L45af99;
case 0x45af9a:c.instructions+=1;goto B45af9a;
case 0x45af9c:goto L45af9c;
case 0x45af9d:c.instructions+=1;goto B45af9d;
case 0x45af9f:goto L45af9f;
case 0x45afa5:c.instructions+=2;goto B45afa5;
case 0x45afac:c.instructions+=1;goto B45afac;
case 0x45afb1:goto L45afb1;
case 0x45afb6:c.instructions+=4;goto B45afb6;
case 0x45afbb:c.instructions+=3;goto B45afbb;
case 0x45afbd:c.instructions+=2;goto B45afbd;
case 0x45afbf:c.instructions+=1;goto B45afbf;
case 0x45afc1:goto L45afc1;
case 0x45afc7:c.instructions+=2;goto B45afc7;
case 0x45afca:c.instructions+=1;goto B45afca;
case 0x45afd0:goto L45afd0;
case 0x45afd2:c.instructions+=4;goto B45afd2;
case 0x45afd5:c.instructions+=3;goto B45afd5;
case 0x45afd6:c.instructions+=2;goto B45afd6;
case 0x45afdc:c.instructions+=1;goto B45afdc;
case 0x45afde:goto L45afde;
case 0x45afe0:goto L45afe0;
case 0x45afe3:c.instructions+=10;goto B45afe3;
case 0x45afe8:c.instructions+=9;goto B45afe8;
case 0x45afe9:c.instructions+=8;goto B45afe9;
case 0x45afea:c.instructions+=7;goto B45afea;
case 0x45afed:c.instructions+=6;goto B45afed;
case 0x45aff2:c.instructions+=5;goto B45aff2;
case 0x45aff3:c.instructions+=4;goto B45aff3;
case 0x45aff4:c.instructions+=3;goto B45aff4;
case 0x45aff6:c.instructions+=2;goto B45aff6;
case 0x45affe:c.instructions+=1;goto B45affe;
default:missing_instruction(c.pc);}
B45a000:L45a000:{c.instructions+=4;NFSU2_TR(0x45a000);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a001:{NFSU2_TR(0x45a001);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45a003:{NFSU2_TR(0x45a003);
w4(R+4,u32(0x18ull));
}
B45a008:{NFSU2_TR(0x45a008);
w4(R+28,u32(0x82b620ull));
}
B45a00d:L45a00d:{c.instructions+=1;NFSU2_TR(0x45a00d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L45a00f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45a00du);}goto L45a00d;}
}
B45a00f:L45a00f:{c.instructions+=3;NFSU2_TR(0x45a00f);
w4(R+8,u32(0x82a5dcull));
}
B45a014:{NFSU2_TR(0x45a014);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B45a017:{NFSU2_TR(0x45a017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45a018:L45a018:{c.instructions+=7;NFSU2_TR(0x45a018);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a01b:{NFSU2_TR(0x45a01b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B45a01d:{NFSU2_TR(0x45a01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a020:{NFSU2_TR(0x45a020);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45a027:{NFSU2_TR(0x45a027);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x28ull))));
}
B45a02a:{NFSU2_TR(0x45a02a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x82a99cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x82a99cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45a030:{NFSU2_TR(0x45a030);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45a018u);}goto L45a018;}}
}
B45a032:L45a032:{c.instructions+=6;NFSU2_TR(0x45a032);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a036:{NFSU2_TR(0x45a036);
__builtin_memmove(gp(0x82ba24),(R+0),4);
}
B45a03b:{NFSU2_TR(0x45a03b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a03f:{NFSU2_TR(0x45a03f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a040:{NFSU2_TR(0x45a040);
__builtin_memmove(gp(0x82ba28),(R+0),4);
}
B45a045:{NFSU2_TR(0x45a045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a04aull));
TAIL_STATIC(0x721aaeu,721);
}
B45a04a:L45a04a:{c.instructions+=5;NFSU2_TR(0x45a04a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a04c:{NFSU2_TR(0x45a04c);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a04e:{NFSU2_TR(0x45a04e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a050:{NFSU2_TR(0x45a050);
u8 U[4];
w4(U+0,u32(0x459ff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a055:{NFSU2_TR(0x45a055);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a05aull));
TAIL_STATIC(0x6f55f3u,6f5);
}
B45a05a:L45a05a:{c.instructions+=4;NFSU2_TR(0x45a05a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B45a05d:{NFSU2_TR(0x45a05d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45a065:{NFSU2_TR(0x45a065);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45a06d:{NFSU2_TR(0x45a06d);
TAIL_STATIC(0x6f8c2cu,6f8);
}
B45a0c0:L45a0c0:{c.instructions+=6;NFSU2_TR(0x45a0c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45a0c4:{NFSU2_TR(0x45a0c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a0c5:{NFSU2_TR(0x45a0c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45a0c9:{NFSU2_TR(0x45a0c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a0ca:{NFSU2_TR(0x45a0ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45a0cc:{NFSU2_TR(0x45a0cc);
w4(R+4,u32(0x82a5e0ull));
}
B45a0d1:L45a0d1:{c.instructions+=3;NFSU2_TR(0x45a0d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45a0d3:{NFSU2_TR(0x45a0d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B45a0d5:{NFSU2_TR(0x45a0d5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45a0dd;}}
}
B45a0d7:L45a0d7:{c.instructions+=2;NFSU2_TR(0x45a0d7);
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
B45a0d9:{NFSU2_TR(0x45a0d9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L45a0fb;}}
}
B45a0db:L45a0db:{c.instructions+=1;NFSU2_TR(0x45a0db);
{goto L45a0ea;}
}
B45a0dd:L45a0dd:{c.instructions+=2;NFSU2_TR(0x45a0dd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45a0df:{NFSU2_TR(0x45a0df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45a0ea;}}
}
B45a0e1:L45a0e1:{c.instructions+=2;NFSU2_TR(0x45a0e1);
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
B45a0e3:{NFSU2_TR(0x45a0e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L45a0fb;}}
}
B45a0e5:L45a0e5:{c.instructions+=2;NFSU2_TR(0x45a0e5);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B45a0e8:{NFSU2_TR(0x45a0e8);
if(r1(R+518)){{goto L45a0fb;}}
}
B45a0ea:L45a0ea:{c.instructions+=4;NFSU2_TR(0x45a0ea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B45a0ed:{NFSU2_TR(0x45a0ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B45a0ee:{NFSU2_TR(0x45a0ee);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x82a9a0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x82a9a0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x82a9a0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a0f4:{NFSU2_TR(0x45a0f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45a0d1u);}goto L45a0d1;}}
}
B45a0f6:L45a0f6:{c.instructions+=1;NFSU2_TR(0x45a0f6);
w4(R+0,u32(0xfffffff8ull));
}
B45a0fb:L45a0fb:{c.instructions+=3;NFSU2_TR(0x45a0fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45a0fc:{NFSU2_TR(0x45a0fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a0fd:{NFSU2_TR(0x45a0fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a3d0:L45a3d0:{c.instructions+=7;NFSU2_TR(0x45a3d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a3d4:{NFSU2_TR(0x45a3d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a3d8:{NFSU2_TR(0x45a3d8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45a3da:{NFSU2_TR(0x45a3da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a3db:{NFSU2_TR(0x45a3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B45a3de:{NFSU2_TR(0x45a3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x70ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B45a3e5:{NFSU2_TR(0x45a3e5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45a3f3;}}
}
B45a3e7:L45a3e7:{c.instructions+=3;NFSU2_TR(0x45a3e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a3e8:{NFSU2_TR(0x45a3e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a3e9:{NFSU2_TR(0x45a3e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a3eeull));
TAIL_STATIC(0x721d90u,721);
}
B45a3ee:L45a3ee:{c.instructions+=2;NFSU2_TR(0x45a3ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a3f1:{NFSU2_TR(0x45a3f1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B45a3f3:L45a3f3:{c.instructions+=7;NFSU2_TR(0x45a3f3);
__builtin_memmove((R+4),(R+24),4);
}
B45a3f5:{NFSU2_TR(0x45a3f5);
__builtin_memmove((R+0),(R+24),4);
}
B45a3f7:{NFSU2_TR(0x45a3f7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B45a3fa:{NFSU2_TR(0x45a3fa);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B45a3fc:{NFSU2_TR(0x45a3fc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a3ff:{NFSU2_TR(0x45a3ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a400:{NFSU2_TR(0x45a400);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a410:L45a410:{c.instructions+=3;NFSU2_TR(0x45a410);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a414:{NFSU2_TR(0x45a414);
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
B45a416:{NFSU2_TR(0x45a416);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L45a43d;}}
}
B45a418:L45a418:{c.instructions+=2;NFSU2_TR(0x45a418);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a41b:{NFSU2_TR(0x45a41b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45a43d;}}
}
B45a41d:L45a41d:{c.instructions+=3;NFSU2_TR(0x45a41d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B45a424:{NFSU2_TR(0x45a424);
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
B45a426:{NFSU2_TR(0x45a426);
if(r1(R+518)){{goto L45a43d;}}
}
B45a428:L45a428:{c.instructions+=3;NFSU2_TR(0x45a428);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45a42b:{NFSU2_TR(0x45a42b);
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
B45a42d:{NFSU2_TR(0x45a42d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45a43d;}}
}
B45a42f:L45a42f:{c.instructions+=4;NFSU2_TR(0x45a42f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a433:{NFSU2_TR(0x45a433);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45a437:{NFSU2_TR(0x45a437);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a43a:{NFSU2_TR(0x45a43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a43d:L45a43d:{c.instructions+=1;NFSU2_TR(0x45a43d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a440:L45a440:{c.instructions+=4;NFSU2_TR(0x45a440);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a444:{NFSU2_TR(0x45a444);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B45a44b:{NFSU2_TR(0x45a44b);
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
B45a44d:{NFSU2_TR(0x45a44d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45a455;}}
}
B45a44f:L45a44f:{c.instructions+=2;NFSU2_TR(0x45a44f);
w4(R+0,u32(0xfffffff8ull));
}
B45a454:{NFSU2_TR(0x45a454);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a455:L45a455:{c.instructions+=3;NFSU2_TR(0x45a455);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45a459:{NFSU2_TR(0x45a459);
w4(R+0,u32(0x1ull));
}
B45a45e:{NFSU2_TR(0x45a45e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a460:L45a460:{c.instructions+=2;NFSU2_TR(0x45a460);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a463:{NFSU2_TR(0x45a463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a468ull));
TAIL_STATIC(0x6f5722u,6f5);
}
B45a468:L45a468:{c.instructions+=4;NFSU2_TR(0x45a468);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B45a46c:{NFSU2_TR(0x45a46c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45a470:{NFSU2_TR(0x45a470);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45a474:{NFSU2_TR(0x45a474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a479ull));
TAIL_STATIC(0x6f57a1u,6f5);
}
B45a479:L45a479:{c.instructions+=6;NFSU2_TR(0x45a479);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B45a47d:{NFSU2_TR(0x45a47d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45a481:{NFSU2_TR(0x45a481);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B45a485:{NFSU2_TR(0x45a485);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45a48b:{NFSU2_TR(0x45a48b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a48e:{NFSU2_TR(0x45a48e);
TAIL_STATIC(0x75bed4u,75b);
}
B45a4a0:L45a4a0:{c.instructions+=4;NFSU2_TR(0x45a4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a4a4:{NFSU2_TR(0x45a4a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B45a4ab:{NFSU2_TR(0x45a4ab);
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
B45a4ad:{NFSU2_TR(0x45a4ad);
if(r1(R+518)){{goto L45a4b3;}}
}
B45a4af:L45a4af:{c.instructions+=2;NFSU2_TR(0x45a4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a4b2:{NFSU2_TR(0x45a4b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a4b3:L45a4b3:{c.instructions+=2;NFSU2_TR(0x45a4b3);
w4(R+0,u32(0xfffffff8ull));
}
B45a4b8:{NFSU2_TR(0x45a4b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a4c0:L45a4c0:{c.instructions+=4;NFSU2_TR(0x45a4c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a4c4:{NFSU2_TR(0x45a4c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b620ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B45a4cb:{NFSU2_TR(0x45a4cb);
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
B45a4cd:{NFSU2_TR(0x45a4cd);
if(r1(R+518)){{goto L45a4d3;}}
}
B45a4cf:L45a4cf:{c.instructions+=2;NFSU2_TR(0x45a4cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a4d2:{NFSU2_TR(0x45a4d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a4d3:L45a4d3:{c.instructions+=2;NFSU2_TR(0x45a4d3);
w4(R+0,u32(0xfffffff8ull));
}
B45a4d8:{NFSU2_TR(0x45a4d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a4e0:L45a4e0:{c.instructions+=15;NFSU2_TR(0x45a4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a4e4:{NFSU2_TR(0x45a4e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45a4e8:{NFSU2_TR(0x45a4e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a4e9:{NFSU2_TR(0x45a4e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a4ea:{NFSU2_TR(0x45a4ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45a4ee:{NFSU2_TR(0x45a4ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a4ef:{NFSU2_TR(0x45a4ef);
__builtin_memmove((R+24),(R+4),4);
}
B45a4f1:{NFSU2_TR(0x45a4f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a4f5:{NFSU2_TR(0x45a4f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a4f6:{NFSU2_TR(0x45a4f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a4f9:{NFSU2_TR(0x45a4f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a4fd:{NFSU2_TR(0x45a4fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a4fe:{NFSU2_TR(0x45a4fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a4ff:{NFSU2_TR(0x45a4ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a500:{NFSU2_TR(0x45a500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a505ull));
TAIL_STATIC(0x722d95u,722);
}
B45a505:L45a505:{c.instructions+=5;NFSU2_TR(0x45a505);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B45a508:{NFSU2_TR(0x45a508);
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
B45a50a:{NFSU2_TR(0x45a50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a50d:{NFSU2_TR(0x45a50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a510:{NFSU2_TR(0x45a510);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45a526;}}
}
B45a512:L45a512:{c.instructions+=3;NFSU2_TR(0x45a512);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a515:{NFSU2_TR(0x45a515);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a516:{NFSU2_TR(0x45a516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a51bull));
TAIL_STATIC(0x440540u,440);
}
B45a51b:L45a51b:{c.instructions+=5;NFSU2_TR(0x45a51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a51e:{NFSU2_TR(0x45a51e);
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
B45a521:{NFSU2_TR(0x45a521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45a522:{NFSU2_TR(0x45a522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a523:{NFSU2_TR(0x45a523);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a526:L45a526:{c.instructions+=2;NFSU2_TR(0x45a526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45a52d:{NFSU2_TR(0x45a52d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a532ull));
TAIL_STATIC(0x721f99u,721);
}
B45a532:L45a532:{c.instructions+=5;NFSU2_TR(0x45a532);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a535:{NFSU2_TR(0x45a535);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a537:{NFSU2_TR(0x45a537);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a539:{NFSU2_TR(0x45a539);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a53a:{NFSU2_TR(0x45a53a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a53full));
TAIL_STATIC(0x72209fu,722);
}
B45a53f:L45a53f:{c.instructions+=2;NFSU2_TR(0x45a53f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45a542:{NFSU2_TR(0x45a542);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a547ull));
TAIL_STATIC(0x721fa7u,721);
}
B45a547:L45a547:{c.instructions+=4;NFSU2_TR(0x45a547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a54a:{NFSU2_TR(0x45a54a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45a54b:{NFSU2_TR(0x45a54b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a54c:{NFSU2_TR(0x45a54c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a550:L45a550:{c.instructions+=4;NFSU2_TR(0x45a550);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a553:{NFSU2_TR(0x45a553);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a554:{NFSU2_TR(0x45a554);
__builtin_memmove((R+24),(R+4),4);
}
B45a556:{NFSU2_TR(0x45a556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a55bull));
TAIL_STATIC(0x721f99u,721);
}
B45a55b:L45a55b:{c.instructions+=5;NFSU2_TR(0x45a55b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a55e:{NFSU2_TR(0x45a55e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45a562:{NFSU2_TR(0x45a562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a563:{NFSU2_TR(0x45a563);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a564:{NFSU2_TR(0x45a564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a569ull));
TAIL_STATIC(0x722eceu,722);
}
B45a569:L45a569:{c.instructions+=5;NFSU2_TR(0x45a569);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a56d:{NFSU2_TR(0x45a56d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a570:{NFSU2_TR(0x45a570);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45a572:{NFSU2_TR(0x45a572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a573:{NFSU2_TR(0x45a573);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45a580;}}
}
B45a575:L45a575:{c.instructions+=1;NFSU2_TR(0x45a575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a57aull));
TAIL_STATIC(0x721fa7u,721);
}
B45a57a:L45a57a:{c.instructions+=3;NFSU2_TR(0x45a57a);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B45a57c:{NFSU2_TR(0x45a57c);
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
B45a57f:{NFSU2_TR(0x45a57f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a580:L45a580:{c.instructions+=4;NFSU2_TR(0x45a580);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45a584:{NFSU2_TR(0x45a584);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a585:{NFSU2_TR(0x45a585);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a586:{NFSU2_TR(0x45a586);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a58bull));
TAIL_STATIC(0x722db5u,722);
}
B45a58b:L45a58b:{c.instructions+=2;NFSU2_TR(0x45a58b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a58e:{NFSU2_TR(0x45a58e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a593ull));
TAIL_STATIC(0x721fa7u,721);
}
B45a593:L45a593:{c.instructions+=4;NFSU2_TR(0x45a593);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45a598:{NFSU2_TR(0x45a598);
__builtin_memmove((R+0),(R+518),1);
}
B45a59b:{NFSU2_TR(0x45a59b);
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
B45a59e:{NFSU2_TR(0x45a59e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a5a0:L45a5a0:{c.instructions+=6;NFSU2_TR(0x45a5a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a5a4:{NFSU2_TR(0x45a5a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45a5a6:{NFSU2_TR(0x45a5a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a5a7:{NFSU2_TR(0x45a5a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a5a8:{NFSU2_TR(0x45a5a8);
__builtin_memmove((R+24),(R+4),4);
}
B45a5aa:{NFSU2_TR(0x45a5aa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45a5b0;}}
}
B45a5ac:L45a5ac:{c.instructions+=2;NFSU2_TR(0x45a5ac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45a5ae:{NFSU2_TR(0x45a5ae);
{goto L45a5ba;}
}
B45a5b0:L45a5b0:{c.instructions+=2;NFSU2_TR(0x45a5b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45a5b3:{NFSU2_TR(0x45a5b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45a5ba;}}
}
B45a5b5:L45a5b5:{c.instructions+=1;NFSU2_TR(0x45a5b5);
w4(R+0,u32(0x64ull));
}
B45a5ba:L45a5ba:{c.instructions+=3;NFSU2_TR(0x45a5ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45a5be:{NFSU2_TR(0x45a5be);
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
B45a5c0:{NFSU2_TR(0x45a5c0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45a5cc;}}
}
B45a5c2:L45a5c2:{c.instructions+=4;NFSU2_TR(0x45a5c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45a5c3:{NFSU2_TR(0x45a5c3);
w4(R+0,u32(0xfffffffbull));
}
B45a5c8:{NFSU2_TR(0x45a5c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a5c9:{NFSU2_TR(0x45a5c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a5cc:L45a5cc:{c.instructions+=2;NFSU2_TR(0x45a5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a5cf:{NFSU2_TR(0x45a5cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a5d4ull));
TAIL_STATIC(0x721f99u,721);
}
B45a5d4:L45a5d4:{c.instructions+=13;NFSU2_TR(0x45a5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a5d7:{NFSU2_TR(0x45a5d7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x7full)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B45a5da:{NFSU2_TR(0x45a5da);
w4(R+0,u32(0x51eb851full));
}
B45a5df:{NFSU2_TR(0x45a5df);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B45a5e1:{NFSU2_TR(0x45a5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a5e4:{NFSU2_TR(0x45a5e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B45a5e7:{NFSU2_TR(0x45a5e7);
__builtin_memmove((R+0),(R+8),4);
}
B45a5e9:{NFSU2_TR(0x45a5e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B45a5ec:{NFSU2_TR(0x45a5ec);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B45a5ee:{NFSU2_TR(0x45a5ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a5ef:{NFSU2_TR(0x45a5ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a5f0:{NFSU2_TR(0x45a5f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a5f1:{NFSU2_TR(0x45a5f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a5f6ull));
TAIL_STATIC(0x72209fu,722);
}
B45a5f6:L45a5f6:{c.instructions+=3;NFSU2_TR(0x45a5f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45a5f9:{NFSU2_TR(0x45a5f9);
__builtin_memmove((R+24),(R+0),4);
}
B45a5fb:{NFSU2_TR(0x45a5fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a600ull));
TAIL_STATIC(0x721fa7u,721);
}
B45a600:L45a600:{c.instructions+=8;NFSU2_TR(0x45a600);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45a602:{NFSU2_TR(0x45a602);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45a604:{NFSU2_TR(0x45a604);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B45a607:{NFSU2_TR(0x45a607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45a608:{NFSU2_TR(0x45a608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a609:{NFSU2_TR(0x45a609);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B45a60a:{NFSU2_TR(0x45a60a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffdull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a60d:{NFSU2_TR(0x45a60d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a610:L45a610:{c.instructions+=3;NFSU2_TR(0x45a610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a611:{NFSU2_TR(0x45a611);
__builtin_memmove((R+24),(R+4),4);
}
B45a613:{NFSU2_TR(0x45a613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a618ull));
TAIL_STATIC(0x721f99u,721);
}
B45a618:L45a618:{c.instructions+=4;NFSU2_TR(0x45a618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a61b:{NFSU2_TR(0x45a61b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a61d:{NFSU2_TR(0x45a61d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a61e:{NFSU2_TR(0x45a61e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a623ull));
TAIL_STATIC(0x7230a7u,723);
}
B45a623:L45a623:{c.instructions+=3;NFSU2_TR(0x45a623);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a626:{NFSU2_TR(0x45a626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a627:{NFSU2_TR(0x45a627);
TAIL_STATIC(0x721fa7u,721);
}
B45a630:L45a630:{c.instructions+=5;NFSU2_TR(0x45a630);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a631:{NFSU2_TR(0x45a631);
__builtin_memmove((R+28),(R+4),4);
}
B45a633:{NFSU2_TR(0x45a633);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a636:{NFSU2_TR(0x45a636);
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
B45a638:{NFSU2_TR(0x45a638);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L45a672;}}
}
B45a63a:L45a63a:{c.instructions+=3;NFSU2_TR(0x45a63a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a63b:{NFSU2_TR(0x45a63b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a63c:{NFSU2_TR(0x45a63c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a641ull));
TAIL_STATIC(0x7227cbu,722);
}
B45a641:L45a641:{c.instructions+=2;NFSU2_TR(0x45a641);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45a644:{NFSU2_TR(0x45a644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a649ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B45a649:L45a649:{c.instructions+=3;NFSU2_TR(0x45a649);
__builtin_memmove((R+24),(R+0),4);
}
B45a64b:{NFSU2_TR(0x45a64b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B45a64e:{NFSU2_TR(0x45a64e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a653ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B45a653:L45a653:{c.instructions+=2;NFSU2_TR(0x45a653);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45a655:{NFSU2_TR(0x45a655);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L45a665;}}
}
B45a657:L45a657:{c.instructions+=1;NFSU2_TR(0x45a657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a65cull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B45a65c:L45a65c:{c.instructions+=1;NFSU2_TR(0x45a65c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a661ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B45a661:L45a661:{c.instructions+=2;NFSU2_TR(0x45a661);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45a663:{NFSU2_TR(0x45a663);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45a657u);}goto L45a657;}}
}
B45a665:L45a665:{c.instructions+=3;NFSU2_TR(0x45a665);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a668:{NFSU2_TR(0x45a668);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a669:{NFSU2_TR(0x45a669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a66eull));
TAIL_STATIC(0x722ac0u,722);
}
B45a66e:L45a66e:{c.instructions+=2;NFSU2_TR(0x45a66e);
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
B45a671:{NFSU2_TR(0x45a671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a672:L45a672:{c.instructions+=2;NFSU2_TR(0x45a672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45a673:{NFSU2_TR(0x45a673);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a680:L45a680:{c.instructions+=4;NFSU2_TR(0x45a680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a681:{NFSU2_TR(0x45a681);
u8 U[4];
w4(U+0,u32(0x7ed01cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a686:{NFSU2_TR(0x45a686);
w4(R+4,u32(0x82c570ull));
}
B45a68b:{NFSU2_TR(0x45a68b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a690ull));
TAIL_STATIC(0x735800u,735);
}
B45a690:L45a690:{c.instructions+=4;NFSU2_TR(0x45a690);
u8 U[4];
w4(U+0,u32(0x7ed024ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a695:{NFSU2_TR(0x45a695);
w4(R+4,u32(0x82c578ull));
}
B45a69a:{NFSU2_TR(0x45a69a);
__builtin_memmove((R+24),(R+0),4);
}
B45a69c:{NFSU2_TR(0x45a69c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a6a1ull));
TAIL_STATIC(0x735800u,735);
}
B45a6a1:L45a6a1:{c.instructions+=4;NFSU2_TR(0x45a6a1);
u8 U[4];
w4(U+0,u32(0x7ed02cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a6a6:{NFSU2_TR(0x45a6a6);
w4(R+4,u32(0x82c528ull));
}
B45a6ab:{NFSU2_TR(0x45a6ab);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a6ad:{NFSU2_TR(0x45a6ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a6b2ull));
TAIL_STATIC(0x735800u,735);
}
B45a6b2:L45a6b2:{c.instructions+=4;NFSU2_TR(0x45a6b2);
u8 U[4];
w4(U+0,u32(0x7ed034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a6b7:{NFSU2_TR(0x45a6b7);
w4(R+4,u32(0x82c518ull));
}
B45a6bc:{NFSU2_TR(0x45a6bc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a6be:{NFSU2_TR(0x45a6be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a6c3ull));
TAIL_STATIC(0x735800u,735);
}
B45a6c3:L45a6c3:{c.instructions+=3;NFSU2_TR(0x45a6c3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a6c5:{NFSU2_TR(0x45a6c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a6c6:{NFSU2_TR(0x45a6c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a6d0:L45a6d0:{c.instructions+=8;NFSU2_TR(0x45a6d0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a6d3:{NFSU2_TR(0x45a6d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B45a6d7:{NFSU2_TR(0x45a6d7);
__builtin_memmove((R+0),(R+16),4);
}
B45a6db:{NFSU2_TR(0x45a6db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a6dc:{NFSU2_TR(0x45a6dc);
u8 U[4];
w4(U+0,u32(0x82c570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a6e1:{NFSU2_TR(0x45a6e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a6e5:{NFSU2_TR(0x45a6e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a6e9:{NFSU2_TR(0x45a6e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a6eeull));
TAIL_STATIC(0x735880u,735);
}
B45a6ee:L45a6ee:{c.instructions+=3;NFSU2_TR(0x45a6ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a6f1:{NFSU2_TR(0x45a6f1);
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
B45a6f3:{NFSU2_TR(0x45a6f3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45a716;}}
}
B45a6f5:L45a6f5:{c.instructions+=3;NFSU2_TR(0x45a6f5);
u8 U[4];
w4(U+0,u32(0x7ed01cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a6fa:{NFSU2_TR(0x45a6fa);
w4(R+4,u32(0x82c570ull));
}
B45a6ff:{NFSU2_TR(0x45a6ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a704ull));
TAIL_STATIC(0x735800u,735);
}
B45a704:L45a704:{c.instructions+=4;NFSU2_TR(0x45a704);
__builtin_memmove((R+4),(R+16),4);
}
B45a708:{NFSU2_TR(0x45a708);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a709:{NFSU2_TR(0x45a709);
u8 U[4];
w4(U+0,u32(0x82c570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a70e:{NFSU2_TR(0x45a70e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a713ull));
TAIL_STATIC(0x735880u,735);
}
B45a713:L45a713:{c.instructions+=1;NFSU2_TR(0x45a713);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a716:L45a716:{c.instructions+=2;NFSU2_TR(0x45a716);
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
B45a719:{NFSU2_TR(0x45a719);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a720:L45a720:{c.instructions+=8;NFSU2_TR(0x45a720);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a723:{NFSU2_TR(0x45a723);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B45a727:{NFSU2_TR(0x45a727);
__builtin_memmove((R+0),(R+16),4);
}
B45a72b:{NFSU2_TR(0x45a72b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a72c:{NFSU2_TR(0x45a72c);
u8 U[4];
w4(U+0,u32(0x82c578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a731:{NFSU2_TR(0x45a731);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a735:{NFSU2_TR(0x45a735);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a739:{NFSU2_TR(0x45a739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a73eull));
TAIL_STATIC(0x735880u,735);
}
B45a73e:L45a73e:{c.instructions+=3;NFSU2_TR(0x45a73e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a741:{NFSU2_TR(0x45a741);
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
B45a743:{NFSU2_TR(0x45a743);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45a766;}}
}
B45a745:L45a745:{c.instructions+=3;NFSU2_TR(0x45a745);
u8 U[4];
w4(U+0,u32(0x7ed024ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a74a:{NFSU2_TR(0x45a74a);
w4(R+4,u32(0x82c578ull));
}
B45a74f:{NFSU2_TR(0x45a74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a754ull));
TAIL_STATIC(0x735800u,735);
}
B45a754:L45a754:{c.instructions+=4;NFSU2_TR(0x45a754);
__builtin_memmove((R+4),(R+16),4);
}
B45a758:{NFSU2_TR(0x45a758);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a759:{NFSU2_TR(0x45a759);
u8 U[4];
w4(U+0,u32(0x82c578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a75e:{NFSU2_TR(0x45a75e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a763ull));
TAIL_STATIC(0x735880u,735);
}
B45a763:L45a763:{c.instructions+=1;NFSU2_TR(0x45a763);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a766:L45a766:{c.instructions+=2;NFSU2_TR(0x45a766);
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
B45a769:{NFSU2_TR(0x45a769);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a770:L45a770:{c.instructions+=7;NFSU2_TR(0x45a770);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45a773:{NFSU2_TR(0x45a773);
__builtin_memmove((R+8),(R+16),4);
}
B45a777:{NFSU2_TR(0x45a777);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a778:{NFSU2_TR(0x45a778);
u8 U[4];
w4(U+0,u32(0x82c518ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a77d:{NFSU2_TR(0x45a77d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a781:{NFSU2_TR(0x45a781);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a785:{NFSU2_TR(0x45a785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a78aull));
TAIL_STATIC(0x735880u,735);
}
B45a78a:L45a78a:{c.instructions+=3;NFSU2_TR(0x45a78a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a78d:{NFSU2_TR(0x45a78d);
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
B45a78f:{NFSU2_TR(0x45a78f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45a7b2;}}
}
B45a791:L45a791:{c.instructions+=3;NFSU2_TR(0x45a791);
u8 U[4];
w4(U+0,u32(0x7ed034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a796:{NFSU2_TR(0x45a796);
w4(R+4,u32(0x82c518ull));
}
B45a79b:{NFSU2_TR(0x45a79b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a7a0ull));
TAIL_STATIC(0x735800u,735);
}
B45a7a0:L45a7a0:{c.instructions+=4;NFSU2_TR(0x45a7a0);
__builtin_memmove((R+0),(R+16),4);
}
B45a7a4:{NFSU2_TR(0x45a7a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a7a5:{NFSU2_TR(0x45a7a5);
u8 U[4];
w4(U+0,u32(0x82c518ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a7aa:{NFSU2_TR(0x45a7aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a7afull));
TAIL_STATIC(0x735880u,735);
}
B45a7af:L45a7af:{c.instructions+=1;NFSU2_TR(0x45a7af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a7b2:L45a7b2:{c.instructions+=2;NFSU2_TR(0x45a7b2);
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
B45a7b5:{NFSU2_TR(0x45a7b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a7c0:L45a7c0:{c.instructions+=8;NFSU2_TR(0x45a7c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a7c1:{NFSU2_TR(0x45a7c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a7c2:{NFSU2_TR(0x45a7c2);
__builtin_memmove((R+24),(R+4),4);
}
B45a7c4:{NFSU2_TR(0x45a7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a7c7:{NFSU2_TR(0x45a7c7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B45a7c8:{NFSU2_TR(0x45a7c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a7c9:{NFSU2_TR(0x45a7c9);
w4(R+12,u32(0x1ull));
}
B45a7ce:{NFSU2_TR(0x45a7ce);
if(r1(R+518)){{goto L45a83e;}}
}
B45a7d0:L45a7d0:{c.instructions+=2;NFSU2_TR(0x45a7d0);
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
B45a7d1:{NFSU2_TR(0x45a7d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45a90e;}}
}
B45a7d7:L45a7d7:{c.instructions+=3;NFSU2_TR(0x45a7d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a7da:{NFSU2_TR(0x45a7da);
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
B45a7dc:{NFSU2_TR(0x45a7dc);
if(r1(R+518)){{goto L45a90e;}}
}
B45a7e2:L45a7e2:{c.instructions+=2;NFSU2_TR(0x45a7e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a7e4:{NFSU2_TR(0x45a7e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a7e7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a7e7:L45a7e7:{c.instructions+=2;NFSU2_TR(0x45a7e7);
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
B45a7e9:{NFSU2_TR(0x45a7e9);
if(r1(R+518)){{goto L45a90e;}}
}
B45a7ef:L45a7ef:{c.instructions+=3;NFSU2_TR(0x45a7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a7f2:{NFSU2_TR(0x45a7f2);
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
B45a7f4:{NFSU2_TR(0x45a7f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45a90e;}}
}
B45a7fa:L45a7fa:{c.instructions+=3;NFSU2_TR(0x45a7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a7fd:{NFSU2_TR(0x45a7fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45a7ff:{NFSU2_TR(0x45a7ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a802ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a802:L45a802:{c.instructions+=4;NFSU2_TR(0x45a802);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
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
B45a805:{NFSU2_TR(0x45a805);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a808:{NFSU2_TR(0x45a808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a80a:{NFSU2_TR(0x45a80a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a80dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a80d:L45a80d:{c.instructions+=2;NFSU2_TR(0x45a80d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a80e:{NFSU2_TR(0x45a80e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a813ull));
TAIL_STATIC(0x734e70u,734);
}
B45a813:L45a813:{c.instructions+=2;NFSU2_TR(0x45a813);
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
B45a816:{NFSU2_TR(0x45a816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a81bull));
TAIL_STATIC(0x4587a0u,458);
}
B45a81b:L45a81b:{c.instructions+=4;NFSU2_TR(0x45a81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45a81e:{NFSU2_TR(0x45a81e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45a820:{NFSU2_TR(0x45a820);
__builtin_memmove((R+4),(R+28),4);
}
B45a822:{NFSU2_TR(0x45a822);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a825ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a825:L45a825:{c.instructions+=4;NFSU2_TR(0x45a825);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a826:{NFSU2_TR(0x45a826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a828:{NFSU2_TR(0x45a828);
__builtin_memmove((R+4),(R+28),4);
}
B45a82a:{NFSU2_TR(0x45a82a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a82dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a82d:L45a82d:{c.instructions+=2;NFSU2_TR(0x45a82d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a82e:{NFSU2_TR(0x45a82e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a833ull));
TAIL_STATIC(0x736020u,736);
}
B45a833:L45a833:{c.instructions+=3;NFSU2_TR(0x45a833);
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
B45a836:{NFSU2_TR(0x45a836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a839:{NFSU2_TR(0x45a839);
{goto L45a90e;}
}
B45a83e:L45a83e:{c.instructions+=3;NFSU2_TR(0x45a83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a841:{NFSU2_TR(0x45a841);
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
B45a843:{NFSU2_TR(0x45a843);
if(r1(R+518)){{goto L45a894;}}
}
B45a845:L45a845:{c.instructions+=2;NFSU2_TR(0x45a845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45a847:{NFSU2_TR(0x45a847);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a84aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a84a:L45a84a:{c.instructions+=2;NFSU2_TR(0x45a84a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45a84c:{NFSU2_TR(0x45a84c);
if(r1(R+518)){{goto L45a894;}}
}
B45a84e:L45a84e:{c.instructions+=3;NFSU2_TR(0x45a84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a851:{NFSU2_TR(0x45a851);
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
B45a853:{NFSU2_TR(0x45a853);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45a894;}}
}
B45a855:L45a855:{c.instructions+=3;NFSU2_TR(0x45a855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a858:{NFSU2_TR(0x45a858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a85a:{NFSU2_TR(0x45a85a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a85dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a85d:L45a85d:{c.instructions+=4;NFSU2_TR(0x45a85d);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
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
B45a860:{NFSU2_TR(0x45a860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a863:{NFSU2_TR(0x45a863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45a865:{NFSU2_TR(0x45a865);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a868ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a868:L45a868:{c.instructions+=2;NFSU2_TR(0x45a868);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a869:{NFSU2_TR(0x45a869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a86eull));
TAIL_STATIC(0x734e70u,734);
}
B45a86e:L45a86e:{c.instructions+=2;NFSU2_TR(0x45a86e);
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
B45a871:{NFSU2_TR(0x45a871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a876ull));
TAIL_STATIC(0x4587a0u,458);
}
B45a876:L45a876:{c.instructions+=4;NFSU2_TR(0x45a876);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45a879:{NFSU2_TR(0x45a879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a87b:{NFSU2_TR(0x45a87b);
__builtin_memmove((R+4),(R+28),4);
}
B45a87d:{NFSU2_TR(0x45a87d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a880ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a880:L45a880:{c.instructions+=4;NFSU2_TR(0x45a880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45a882:{NFSU2_TR(0x45a882);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a883:{NFSU2_TR(0x45a883);
__builtin_memmove((R+4),(R+28),4);
}
B45a885:{NFSU2_TR(0x45a885);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a888ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a888:L45a888:{c.instructions+=2;NFSU2_TR(0x45a888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a889:{NFSU2_TR(0x45a889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a88eull));
TAIL_STATIC(0x736020u,736);
}
B45a88e:L45a88e:{c.instructions+=2;NFSU2_TR(0x45a88e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a891:{NFSU2_TR(0x45a891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a894:L45a894:{c.instructions+=3;NFSU2_TR(0x45a894);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a897:{NFSU2_TR(0x45a897);
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
B45a899:{NFSU2_TR(0x45a899);
if(r1(R+518)){{goto L45a8ea;}}
}
B45a89b:L45a89b:{c.instructions+=2;NFSU2_TR(0x45a89b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a89d:{NFSU2_TR(0x45a89d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a8a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a8a0:L45a8a0:{c.instructions+=2;NFSU2_TR(0x45a8a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45a8a2:{NFSU2_TR(0x45a8a2);
if(r1(R+518)){{goto L45a8ea;}}
}
B45a8a4:L45a8a4:{c.instructions+=3;NFSU2_TR(0x45a8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a8a7:{NFSU2_TR(0x45a8a7);
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
B45a8a9:{NFSU2_TR(0x45a8a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45a8ea;}}
}
B45a8ab:L45a8ab:{c.instructions+=3;NFSU2_TR(0x45a8ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a8ae:{NFSU2_TR(0x45a8ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45a8b0:{NFSU2_TR(0x45a8b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a8b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a8b3:L45a8b3:{c.instructions+=4;NFSU2_TR(0x45a8b3);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
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
B45a8b6:{NFSU2_TR(0x45a8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a8b9:{NFSU2_TR(0x45a8b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a8bb:{NFSU2_TR(0x45a8bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a8beull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a8be:L45a8be:{c.instructions+=2;NFSU2_TR(0x45a8be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a8bf:{NFSU2_TR(0x45a8bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a8c4ull));
TAIL_STATIC(0x734e70u,734);
}
B45a8c4:L45a8c4:{c.instructions+=2;NFSU2_TR(0x45a8c4);
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
B45a8c7:{NFSU2_TR(0x45a8c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a8ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45a680u);}goto L45a680;}
}
B45a8cc:L45a8cc:{c.instructions+=4;NFSU2_TR(0x45a8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45a8cf:{NFSU2_TR(0x45a8cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45a8d1:{NFSU2_TR(0x45a8d1);
__builtin_memmove((R+4),(R+28),4);
}
B45a8d3:{NFSU2_TR(0x45a8d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a8d6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a8d6:L45a8d6:{c.instructions+=4;NFSU2_TR(0x45a8d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a8d7:{NFSU2_TR(0x45a8d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a8d9:{NFSU2_TR(0x45a8d9);
__builtin_memmove((R+4),(R+28),4);
}
B45a8db:{NFSU2_TR(0x45a8db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a8deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a8de:L45a8de:{c.instructions+=2;NFSU2_TR(0x45a8de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a8df:{NFSU2_TR(0x45a8df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a8e4ull));
TAIL_STATIC(0x736020u,736);
}
B45a8e4:L45a8e4:{c.instructions+=2;NFSU2_TR(0x45a8e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a8e7:{NFSU2_TR(0x45a8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a8ea:L45a8ea:{c.instructions+=3;NFSU2_TR(0x45a8ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a8ed:{NFSU2_TR(0x45a8ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45a8ef:{NFSU2_TR(0x45a8ef);
if(r1(R+518)){{goto L45a8fc;}}
}
B45a8f1:L45a8f1:{c.instructions+=3;NFSU2_TR(0x45a8f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a8f4:{NFSU2_TR(0x45a8f4);
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
B45a8f6:{NFSU2_TR(0x45a8f6);
if(r1(R+518)){{goto L45a9a7;}}
}
B45a8fc:L45a8fc:{c.instructions+=3;NFSU2_TR(0x45a8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a8ff:{NFSU2_TR(0x45a8ff);
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
B45a901:{NFSU2_TR(0x45a901);
if(r1(R+518)){{goto L45a90e;}}
}
B45a903:L45a903:{c.instructions+=3;NFSU2_TR(0x45a903);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a906:{NFSU2_TR(0x45a906);
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
B45a908:{NFSU2_TR(0x45a908);
if(r1(R+518)){{goto L45a9a7;}}
}
B45a90e:L45a90e:{c.instructions+=4;NFSU2_TR(0x45a90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a911:{NFSU2_TR(0x45a911);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a912:{NFSU2_TR(0x45a912);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a913:{NFSU2_TR(0x45a913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a918ull));
TAIL_STATIC(0x735a50u,735);
}
B45a918:L45a918:{c.instructions+=6;NFSU2_TR(0x45a918);
__builtin_memmove((R+28),(R+0),4);
}
B45a91a:{NFSU2_TR(0x45a91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a91d:{NFSU2_TR(0x45a91d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45a920:{NFSU2_TR(0x45a920);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B45a922:{NFSU2_TR(0x45a922);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45a924:{NFSU2_TR(0x45a924);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45a92f;}}
}
B45a926:L45a926:{c.instructions+=3;NFSU2_TR(0x45a926);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B45a92c:{NFSU2_TR(0x45a92c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a92d:{NFSU2_TR(0x45a92d);
{goto L45a935;}
}
B45a92f:L45a92f:{c.instructions+=2;NFSU2_TR(0x45a92f);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B45a934:{NFSU2_TR(0x45a934);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a935:L45a935:{c.instructions+=1;NFSU2_TR(0x45a935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a93aull));
TAIL_STATIC(0x43e910u,43e);
}
B45a93a:L45a93a:{c.instructions+=4;NFSU2_TR(0x45a93a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45a940:{NFSU2_TR(0x45a940);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45a943:{NFSU2_TR(0x45a943);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45a945:{NFSU2_TR(0x45a945);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45a962;}}
}
B45a947:L45a947:{c.instructions+=6;NFSU2_TR(0x45a947);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B45a94d:{NFSU2_TR(0x45a94d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B45a950:{NFSU2_TR(0x45a950);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B45a956:{NFSU2_TR(0x45a956);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a957:{NFSU2_TR(0x45a957);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a958:{NFSU2_TR(0x45a958);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a95dull));
TAIL_STATIC(0x440820u,440);
}
B45a95d:L45a95d:{c.instructions+=2;NFSU2_TR(0x45a95d);
__builtin_memmove((R+20),(R+0),4);
}
B45a95f:{NFSU2_TR(0x45a95f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a962:L45a962:{c.instructions+=6;NFSU2_TR(0x45a962);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a965:{NFSU2_TR(0x45a965);
__builtin_memmove((R+0),(R+20),4);
}
B45a967:{NFSU2_TR(0x45a967);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a968:{NFSU2_TR(0x45a968);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a969:{NFSU2_TR(0x45a969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a96c:{NFSU2_TR(0x45a96c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a971ull));
TAIL_STATIC(0x735a60u,735);
}
B45a971:L45a971:{c.instructions+=6;NFSU2_TR(0x45a971);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a974:{NFSU2_TR(0x45a974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a977:{NFSU2_TR(0x45a977);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45a97a:{NFSU2_TR(0x45a97a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45a97c:{NFSU2_TR(0x45a97c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45a97d:{NFSU2_TR(0x45a97d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45a99b;}}
}
B45a97f:L45a97f:{c.instructions+=2;NFSU2_TR(0x45a97f);
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
B45a981:{NFSU2_TR(0x45a981);
if(r1(R+518)){{goto L45a988;}}
}
B45a983:L45a983:{c.instructions+=2;NFSU2_TR(0x45a983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45a985:{NFSU2_TR(0x45a985);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a988ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a988:L45a988:{c.instructions+=3;NFSU2_TR(0x45a988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a98b:{NFSU2_TR(0x45a98b);
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
B45a98d:{NFSU2_TR(0x45a98d);
if(r1(R+518)){{goto L45a9a4;}}
}
B45a98f:L45a98f:{c.instructions+=2;NFSU2_TR(0x45a98f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a991:{NFSU2_TR(0x45a991);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a994ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a994:L45a994:{c.instructions+=5;NFSU2_TR(0x45a994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45a995:{NFSU2_TR(0x45a995);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45a998:{NFSU2_TR(0x45a998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a999:{NFSU2_TR(0x45a999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45a99a:{NFSU2_TR(0x45a99a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a99b:L45a99b:{c.instructions+=2;NFSU2_TR(0x45a99b);
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
B45a99d:{NFSU2_TR(0x45a99d);
if(r1(R+518)){{goto L45a9a4;}}
}
B45a99f:L45a99f:{c.instructions+=2;NFSU2_TR(0x45a99f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45a9a1:{NFSU2_TR(0x45a9a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a9a4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45a9a4:L45a9a4:{c.instructions+=1;NFSU2_TR(0x45a9a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45a9a7:L45a9a7:{c.instructions+=4;NFSU2_TR(0x45a9a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45a9a8:{NFSU2_TR(0x45a9a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45a9a9:{NFSU2_TR(0x45a9a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45a9aa:{NFSU2_TR(0x45a9aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45a9b0:L45a9b0:{c.instructions+=7;NFSU2_TR(0x45a9b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a9b1:{NFSU2_TR(0x45a9b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a9b2:{NFSU2_TR(0x45a9b2);
__builtin_memmove((R+24),(R+4),4);
}
B45a9b4:{NFSU2_TR(0x45a9b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B45a9b7:{NFSU2_TR(0x45a9b7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45a9b9:{NFSU2_TR(0x45a9b9);
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
B45a9bb:{NFSU2_TR(0x45a9bb);
if(r1(R+518)){{goto L45aa0a;}}
}
B45a9bd:L45a9bd:{c.instructions+=1;NFSU2_TR(0x45a9bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a9c2ull));
TAIL_STATIC(0x736260u,736);
}
B45a9c2:L45a9c2:{c.instructions+=3;NFSU2_TR(0x45a9c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45a9c6:{NFSU2_TR(0x45a9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a9c9:{NFSU2_TR(0x45a9c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45a9e4;}}
}
B45a9cb:L45a9cb:{c.instructions+=2;NFSU2_TR(0x45a9cb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45a9cd:{NFSU2_TR(0x45a9cd);
if(r1(R+518)){{goto L45a9d5;}}
}
B45a9cf:L45a9cf:{c.instructions+=3;NFSU2_TR(0x45a9cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a9d1:{NFSU2_TR(0x45a9d1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a9d3:{NFSU2_TR(0x45a9d3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a9d5ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45a9d5:L45a9d5:{c.instructions+=3;NFSU2_TR(0x45a9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45a9d8:{NFSU2_TR(0x45a9d8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45a9da:{NFSU2_TR(0x45a9da);
if(r1(R+518)){{goto L45a9ee;}}
}
B45a9dc:L45a9dc:{c.instructions+=3;NFSU2_TR(0x45a9dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45a9de:{NFSU2_TR(0x45a9de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a9e0:{NFSU2_TR(0x45a9e0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a9e2ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45a9e2:L45a9e2:{c.instructions+=1;NFSU2_TR(0x45a9e2);
{goto L45a9ee;}
}
B45a9e4:L45a9e4:{c.instructions+=2;NFSU2_TR(0x45a9e4);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45a9e6:{NFSU2_TR(0x45a9e6);
if(r1(R+518)){{goto L45a9ee;}}
}
B45a9e8:L45a9e8:{c.instructions+=3;NFSU2_TR(0x45a9e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45a9ea:{NFSU2_TR(0x45a9ea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a9ec:{NFSU2_TR(0x45a9ec);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45a9eeull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45a9ee:L45a9ee:{c.instructions+=5;NFSU2_TR(0x45a9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45a9f1:{NFSU2_TR(0x45a9f1);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B45a9f3:{NFSU2_TR(0x45a9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a9f6:{NFSU2_TR(0x45a9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45a9f9:{NFSU2_TR(0x45a9f9);
if(r1(R+518)){{goto L45aa07;}}
}
B45a9fb:L45a9fb:{c.instructions+=2;NFSU2_TR(0x45a9fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45a9fc:{NFSU2_TR(0x45a9fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45aa01ull));
TAIL_STATIC(0x440540u,440);
}
B45aa01:L45aa01:{c.instructions+=2;NFSU2_TR(0x45aa01);
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
B45aa04:{NFSU2_TR(0x45aa04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45aa07:L45aa07:{c.instructions+=1;NFSU2_TR(0x45aa07);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45aa0a:L45aa0a:{c.instructions+=3;NFSU2_TR(0x45aa0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45aa0b:{NFSU2_TR(0x45aa0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45aa0c:{NFSU2_TR(0x45aa0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45aa10:L45aa10:{c.instructions+=6;NFSU2_TR(0x45aa10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45aa14:{NFSU2_TR(0x45aa14);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45aa18:{NFSU2_TR(0x45aa18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aa19:{NFSU2_TR(0x45aa19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aa1a:{NFSU2_TR(0x45aa1a);
u8 U[4];
w4(U+0,u32(0x82c938ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aa1f:{NFSU2_TR(0x45aa1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45aa24ull));
TAIL_STATIC(0x75c7dcu,75c);
}
B45aa24:L45aa24:{c.instructions+=2;NFSU2_TR(0x45aa24);
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
B45aa27:{NFSU2_TR(0x45aa27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45aa30:L45aa30:{c.instructions+=20;NFSU2_TR(0x45aa30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45aa34:{NFSU2_TR(0x45aa34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45aa36:{NFSU2_TR(0x45aa36);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45aa3a:{NFSU2_TR(0x45aa3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aa3b:{NFSU2_TR(0x45aa3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aa3c:{NFSU2_TR(0x45aa3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B45aa3e:{NFSU2_TR(0x45aa3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aa3f:{NFSU2_TR(0x45aa3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45aa43:{NFSU2_TR(0x45aa43);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45aa46:{NFSU2_TR(0x45aa46);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B45aa49:{NFSU2_TR(0x45aa49);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B45aa4b:{NFSU2_TR(0x45aa4b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45aa4d:{NFSU2_TR(0x45aa4d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B45aa4e:{NFSU2_TR(0x45aa4e);
__builtin_memmove((R+0),(R+8),4);
}
B45aa50:{NFSU2_TR(0x45aa50);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B45aa52:{NFSU2_TR(0x45aa52);
__builtin_memmove((R+24),(R+0),4);
}
B45aa54:{NFSU2_TR(0x45aa54);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B45aa57:{NFSU2_TR(0x45aa57);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B45aa5b:{NFSU2_TR(0x45aa5b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45aa5d:{NFSU2_TR(0x45aa5d);
if(r1(R+518)){{goto L45aa84;}}
}
B45aa5f:L45aa5f:{c.instructions+=1;NFSU2_TR(0x45aa5f);
}
B45aa60:L45aa60:{c.instructions+=2;NFSU2_TR(0x45aa60);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45aa62:{NFSU2_TR(0x45aa62);
if(r1(R+518)){{goto L45aa84;}}
}
B45aa64:L45aa64:{c.instructions+=2;NFSU2_TR(0x45aa64);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45aa66:{NFSU2_TR(0x45aa66);
if(r1(R+518)){{goto L45aa84;}}
}
B45aa68:L45aa68:{c.instructions+=2;NFSU2_TR(0x45aa68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B45aa6a:{NFSU2_TR(0x45aa6a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L45aa70;}}
}
B45aa6c:L45aa6c:{c.instructions+=2;NFSU2_TR(0x45aa6c);
__builtin_memmove((R+12),(R+0),4);
}
B45aa6e:{NFSU2_TR(0x45aa6e);
{goto L45aa72;}
}
B45aa70:L45aa70:{c.instructions+=1;NFSU2_TR(0x45aa70);
__builtin_memmove((R+8),(R+0),4);
}
B45aa72:L45aa72:{c.instructions+=7;NFSU2_TR(0x45aa72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45aa75:{NFSU2_TR(0x45aa75);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B45aa77:{NFSU2_TR(0x45aa77);
__builtin_memmove((R+24),(R+0),4);
}
B45aa79:{NFSU2_TR(0x45aa79);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B45aa7c:{NFSU2_TR(0x45aa7c);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B45aa80:{NFSU2_TR(0x45aa80);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45aa82:{NFSU2_TR(0x45aa82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45aa60u);}goto L45aa60;}}
}
B45aa84:L45aa84:{c.instructions+=4;NFSU2_TR(0x45aa84);
__builtin_memmove((R+24),(R+0),4);
}
B45aa86:{NFSU2_TR(0x45aa86);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B45aa89:{NFSU2_TR(0x45aa89);
u8 U[24];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+4))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B45aa8d:{NFSU2_TR(0x45aa8d);
if(r1(R+518)){{goto L45aaab;}}
}
B45aa8f:L45aa8f:{c.instructions+=4;NFSU2_TR(0x45aa8f);
__builtin_memmove((R+0),(R+12),4);
}
B45aa91:{NFSU2_TR(0x45aa91);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B45aa94:{NFSU2_TR(0x45aa94);
u8 U[24];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+4))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B45aa98:{NFSU2_TR(0x45aa98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45aa9e;}}
}
B45aa9a:L45aa9a:{c.instructions+=2;NFSU2_TR(0x45aa9a);
__builtin_memmove((R+0),(R+12),4);
}
B45aa9c:{NFSU2_TR(0x45aa9c);
{goto L45aaab;}
}
B45aa9e:L45aa9e:{c.instructions+=4;NFSU2_TR(0x45aa9e);
__builtin_memmove((R+0),(R+8),4);
}
B45aaa0:{NFSU2_TR(0x45aaa0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B45aaa3:{NFSU2_TR(0x45aaa3);
u8 U[24];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+4))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B45aaa7:{NFSU2_TR(0x45aaa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45aaba;}}
}
B45aaa9:L45aaa9:{c.instructions+=1;NFSU2_TR(0x45aaa9);
__builtin_memmove((R+0),(R+8),4);
}
B45aaab:L45aaab:{c.instructions+=6;NFSU2_TR(0x45aaab);
__builtin_memmove((R+4),(R+0),4);
}
B45aaad:{NFSU2_TR(0x45aaad);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B45aab0:{NFSU2_TR(0x45aab0);
u8 U[16];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B45aab4:{NFSU2_TR(0x45aab4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B45aab6:{NFSU2_TR(0x45aab6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45aab8:{NFSU2_TR(0x45aab8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45aadb;}}
}
B45aaba:L45aaba:{c.instructions+=9;NFSU2_TR(0x45aaba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45aabe:{NFSU2_TR(0x45aabe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45aabf:{NFSU2_TR(0x45aabf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45aac0:{NFSU2_TR(0x45aac0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45aac6:{NFSU2_TR(0x45aac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45aacd:{NFSU2_TR(0x45aacd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B45aad4:{NFSU2_TR(0x45aad4);
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
B45aad7:{NFSU2_TR(0x45aad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45aad8:{NFSU2_TR(0x45aad8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45aadb:L45aadb:{c.instructions+=15;NFSU2_TR(0x45aadb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B45aade:{NFSU2_TR(0x45aade);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B45aae1:{NFSU2_TR(0x45aae1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B45aae4:{NFSU2_TR(0x45aae4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45aae8:{NFSU2_TR(0x45aae8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B45aaea:{NFSU2_TR(0x45aaea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B45aaec:{NFSU2_TR(0x45aaec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45aaef:{NFSU2_TR(0x45aaef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45aaf2:{NFSU2_TR(0x45aaf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45aaf5:{NFSU2_TR(0x45aaf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45aaf6:{NFSU2_TR(0x45aaf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45aaf7:{NFSU2_TR(0x45aaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45aafa:{NFSU2_TR(0x45aafa);
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
B45aafc:{NFSU2_TR(0x45aafc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45aafd:{NFSU2_TR(0x45aafd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ab00:L45ab00:{c.instructions+=13;NFSU2_TR(0x45ab00);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ab04:{NFSU2_TR(0x45ab04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ab05:{NFSU2_TR(0x45ab05);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B45ab09:{NFSU2_TR(0x45ab09);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ab0a:{NFSU2_TR(0x45ab0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ab0b:{NFSU2_TR(0x45ab0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B45ab0e:{NFSU2_TR(0x45ab0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ab0f:{NFSU2_TR(0x45ab0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B45ab12:{NFSU2_TR(0x45ab12);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B45ab14:{NFSU2_TR(0x45ab14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B45ab16:{NFSU2_TR(0x45ab16);
__builtin_memmove((R+0),(R+12),4);
}
B45ab18:{NFSU2_TR(0x45ab18);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ab1c:{NFSU2_TR(0x45ab1c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L45ab2f;}}
}
B45ab1e:L45ab1e:{c.instructions+=1;NFSU2_TR(0x45ab1e);
__builtin_memmove((R+28),(R+28),4);
}
B45ab20:L45ab20:{c.instructions+=2;NFSU2_TR(0x45ab20);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B45ab23:{NFSU2_TR(0x45ab23);
if(r1(R+518)){{goto L45ab28;}}
}
B45ab25:L45ab25:{c.instructions+=1;NFSU2_TR(0x45ab25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B45ab28:L45ab28:{c.instructions+=3;NFSU2_TR(0x45ab28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B45ab2b:{NFSU2_TR(0x45ab2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B45ab2d:{NFSU2_TR(0x45ab2d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45ab20u);}goto L45ab20;}}
}
B45ab2f:L45ab2f:{c.instructions+=4;NFSU2_TR(0x45ab2f);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B45ab35:{NFSU2_TR(0x45ab35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ab36:{NFSU2_TR(0x45ab36);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B45ab38:{NFSU2_TR(0x45ab38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ab3dull));
TAIL_STATIC(0x43e910u,43e);
}
B45ab3d:L45ab3d:{c.instructions+=4;NFSU2_TR(0x45ab3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45ab43:{NFSU2_TR(0x45ab43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45ab46:{NFSU2_TR(0x45ab46);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ab48:{NFSU2_TR(0x45ab48);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45ab65;}}
}
B45ab4a:L45ab4a:{c.instructions+=6;NFSU2_TR(0x45ab4a);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B45ab50:{NFSU2_TR(0x45ab50);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B45ab53:{NFSU2_TR(0x45ab53);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B45ab59:{NFSU2_TR(0x45ab59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ab5a:{NFSU2_TR(0x45ab5a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ab5b:{NFSU2_TR(0x45ab5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ab60ull));
TAIL_STATIC(0x440820u,440);
}
B45ab60:L45ab60:{c.instructions+=2;NFSU2_TR(0x45ab60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45ab63:{NFSU2_TR(0x45ab63);
__builtin_memmove((R+20),(R+0),4);
}
B45ab65:L45ab65:{c.instructions+=4;NFSU2_TR(0x45ab65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B45ab67:{NFSU2_TR(0x45ab67);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ab6b:{NFSU2_TR(0x45ab6b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B45ab6d:{NFSU2_TR(0x45ab6d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L45aba9;}}
}
B45ab6f:L45ab6f:{c.instructions+=1;NFSU2_TR(0x45ab6f);
}
B45ab70:L45ab70:{c.instructions+=3;NFSU2_TR(0x45ab70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B45ab72:{NFSU2_TR(0x45ab72);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ab74:{NFSU2_TR(0x45ab74);
if(r1(R+518)){{goto L45aba2;}}
}
B45ab76:L45ab76:{c.instructions+=4;NFSU2_TR(0x45ab76);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ab79:{NFSU2_TR(0x45ab79);
__builtin_memmove((R+8),(R+4),4);
}
B45ab7b:{NFSU2_TR(0x45ab7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B45ab7e:{NFSU2_TR(0x45ab7e);
__builtin_memmove((R+28),(R+20),4);
}
B45ab80:L45ab80:{c.instructions+=1;NFSU2_TR(0x45ab80);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L45ab82;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+20),(R+28),4);
w4(U+24,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+28,u32(r1(R+522)));
w4(U+32,u32(u32(u32(0x8ull))*u32(r4(U+28))));
w4(R+28,u32(u32(r4(U+24))-u32(r4(U+32))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45ab80u);}goto L45ab80;}
}
B45ab82:L45ab82:{c.instructions+=2;NFSU2_TR(0x45ab82);
__builtin_memmove((R+4),(R+8),4);
}
B45ab84:{NFSU2_TR(0x45ab84);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B45ab87:L45ab87:{c.instructions+=1;NFSU2_TR(0x45ab87);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L45ab89;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45ab87u);}goto L45ab87;}
}
B45ab89:L45ab89:{c.instructions+=6;NFSU2_TR(0x45ab89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45ab8c:{NFSU2_TR(0x45ab8c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B45ab8e:{NFSU2_TR(0x45ab8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45ab90:{NFSU2_TR(0x45ab90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ab91:{NFSU2_TR(0x45ab91);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+24))));
}
B45ab93:{NFSU2_TR(0x45ab93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ab98ull));
TAIL_STATIC(0x735e60u,735);
}
B45ab98:L45ab98:{c.instructions+=3;NFSU2_TR(0x45ab98);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45ab9c:{NFSU2_TR(0x45ab9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45ab9f:{NFSU2_TR(0x45ab9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45aba2:L45aba2:{c.instructions+=3;NFSU2_TR(0x45aba2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B45aba5:{NFSU2_TR(0x45aba5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B45aba7:{NFSU2_TR(0x45aba7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45ab70u);}goto L45ab70;}}
}
B45aba9:L45aba9:{c.instructions+=6;NFSU2_TR(0x45aba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45abaa:{NFSU2_TR(0x45abaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45abab:{NFSU2_TR(0x45abab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45abac:{NFSU2_TR(0x45abac);
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
B45abae:{NFSU2_TR(0x45abae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45abaf:{NFSU2_TR(0x45abaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45abc0:L45abc0:{c.instructions+=4;NFSU2_TR(0x45abc0);
{u32 ea_=u32(u32(8369928u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45abc6:{NFSU2_TR(0x45abc6);
{u32 ea_=u32(u32(7904880u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45abcc:{NFSU2_TR(0x45abcc);
{u32 ea_=u32(u32(8567352u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45abd2:{NFSU2_TR(0x45abd2);
TAIL_STATIC(0x75bed4u,75b);
}
B45abe0:L45abe0:{c.instructions+=5;NFSU2_TR(0x45abe0);
__builtin_memmove((R+0),gp(0x82b90d),1);
}
B45abe5:{NFSU2_TR(0x45abe5);
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
B45abe7:{NFSU2_TR(0x45abe7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45abe8:{NFSU2_TR(0x45abe8);
__builtin_memmove((R+24),(R+4),4);
}
B45abea:{NFSU2_TR(0x45abea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45ac1b;}}
}
B45abec:L45abec:{c.instructions+=3;NFSU2_TR(0x45abec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45abef:{NFSU2_TR(0x45abef);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B45abf0:{NFSU2_TR(0x45abf0);
if(r1(R+518)){{goto L45ac02;}}
}
B45abf2:L45abf2:{c.instructions+=2;NFSU2_TR(0x45abf2);
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
B45abf3:{NFSU2_TR(0x45abf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45ac1b;}}
}
B45abf5:L45abf5:{c.instructions+=3;NFSU2_TR(0x45abf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45abf8:{NFSU2_TR(0x45abf8);
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
B45abfa:{NFSU2_TR(0x45abfa);
if(r1(R+518)){{goto L45ac1b;}}
}
B45abfc:L45abfc:{c.instructions+=3;NFSU2_TR(0x45abfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45abfe:{NFSU2_TR(0x45abfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45abff:{NFSU2_TR(0x45abff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45ac02:L45ac02:{c.instructions+=3;NFSU2_TR(0x45ac02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ac05:{NFSU2_TR(0x45ac05);
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
B45ac07:{NFSU2_TR(0x45ac07);
if(r1(R+518)){{goto L45ac0e;}}
}
B45ac09:L45ac09:{c.instructions+=2;NFSU2_TR(0x45ac09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ac0b:{NFSU2_TR(0x45ac0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ac0eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ac0e:L45ac0e:{c.instructions+=3;NFSU2_TR(0x45ac0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ac11:{NFSU2_TR(0x45ac11);
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
B45ac13:{NFSU2_TR(0x45ac13);
if(r1(R+518)){{goto L45ac1b;}}
}
B45ac15:L45ac15:{c.instructions+=3;NFSU2_TR(0x45ac15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45ac17:{NFSU2_TR(0x45ac17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ac18:{NFSU2_TR(0x45ac18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45ac1b:L45ac1b:{c.instructions+=2;NFSU2_TR(0x45ac1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ac1c:{NFSU2_TR(0x45ac1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ac20:L45ac20:{c.instructions+=6;NFSU2_TR(0x45ac20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ac21:{NFSU2_TR(0x45ac21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45ac25:{NFSU2_TR(0x45ac25);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45ac27:{NFSU2_TR(0x45ac27);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45ac2a:{NFSU2_TR(0x45ac2a);
__builtin_memmove((R+8),(R+4),4);
}
B45ac2c:{NFSU2_TR(0x45ac2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45ac5e;}}
}
B45ac2e:L45ac2e:{c.instructions+=3;NFSU2_TR(0x45ac2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ac31:{NFSU2_TR(0x45ac31);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ac33:{NFSU2_TR(0x45ac33);
if(r1(R+518)){{goto L45ac5e;}}
}
B45ac35:L45ac35:{c.instructions+=4;NFSU2_TR(0x45ac35);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B45ac3a:{NFSU2_TR(0x45ac3a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
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
B45ac41:{NFSU2_TR(0x45ac41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ac42:{NFSU2_TR(0x45ac42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45ac51;}}
}
B45ac44:L45ac44:{c.instructions+=3;NFSU2_TR(0x45ac44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ac46:{NFSU2_TR(0x45ac46);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ac4e:{NFSU2_TR(0x45ac4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45ac51:L45ac51:{c.instructions+=3;NFSU2_TR(0x45ac51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45ac53:{NFSU2_TR(0x45ac53);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ac5b:{NFSU2_TR(0x45ac5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45ac5e:L45ac5e:{c.instructions+=3;NFSU2_TR(0x45ac5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ac61:{NFSU2_TR(0x45ac61);
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
B45ac63:{NFSU2_TR(0x45ac63);
if(r1(R+518)){{goto L45ad13;}}
}
B45ac69:L45ac69:{c.instructions+=3;NFSU2_TR(0x45ac69);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B45ac6c:{NFSU2_TR(0x45ac6c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B45ac6f:{NFSU2_TR(0x45ac6f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L45ad13;}}
}
B45ac75:L45ac75:{c.instructions+=1;NFSU2_TR(0x45ac75);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x45ad18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45ac7c:L45ac7c:{c.instructions+=3;NFSU2_TR(0x45ac7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45ac7f:{NFSU2_TR(0x45ac7f);
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
B45ac81:{NFSU2_TR(0x45ac81);
if(r1(R+518)){{goto L45ad13;}}
}
B45ac87:L45ac87:{c.instructions+=4;NFSU2_TR(0x45ac87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ac89:{NFSU2_TR(0x45ac89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ac8a:{NFSU2_TR(0x45ac8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ac92:{NFSU2_TR(0x45ac92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45ac95:L45ac95:{c.instructions+=3;NFSU2_TR(0x45ac95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45ac98:{NFSU2_TR(0x45ac98);
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
B45ac9a:{NFSU2_TR(0x45ac9a);
if(r1(R+518)){{goto L45ad13;}}
}
B45ac9c:L45ac9c:{c.instructions+=4;NFSU2_TR(0x45ac9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45ac9e:{NFSU2_TR(0x45ac9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ac9f:{NFSU2_TR(0x45ac9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45aca7:{NFSU2_TR(0x45aca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45acaa:L45acaa:{c.instructions+=3;NFSU2_TR(0x45acaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45acad:{NFSU2_TR(0x45acad);
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
B45acaf:{NFSU2_TR(0x45acaf);
if(r1(R+518)){{goto L45ad13;}}
}
B45acb1:L45acb1:{c.instructions+=4;NFSU2_TR(0x45acb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45acb3:{NFSU2_TR(0x45acb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45acb4:{NFSU2_TR(0x45acb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45acbc:{NFSU2_TR(0x45acbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45acbf:L45acbf:{c.instructions+=3;NFSU2_TR(0x45acbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45acc2:{NFSU2_TR(0x45acc2);
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
B45acc4:{NFSU2_TR(0x45acc4);
if(r1(R+518)){{goto L45ad13;}}
}
B45acc6:L45acc6:{c.instructions+=4;NFSU2_TR(0x45acc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45acc8:{NFSU2_TR(0x45acc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45acc9:{NFSU2_TR(0x45acc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45acd1:{NFSU2_TR(0x45acd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45acd4:L45acd4:{c.instructions+=3;NFSU2_TR(0x45acd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45acd7:{NFSU2_TR(0x45acd7);
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
B45acd9:{NFSU2_TR(0x45acd9);
if(r1(R+518)){{goto L45ad13;}}
}
B45acdb:L45acdb:{c.instructions+=4;NFSU2_TR(0x45acdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45acdd:{NFSU2_TR(0x45acdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45acde:{NFSU2_TR(0x45acde);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ace6:{NFSU2_TR(0x45ace6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45ace9:L45ace9:{c.instructions+=3;NFSU2_TR(0x45ace9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45acec:{NFSU2_TR(0x45acec);
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
B45acee:{NFSU2_TR(0x45acee);
if(r1(R+518)){{goto L45ad13;}}
}
B45acf0:L45acf0:{c.instructions+=4;NFSU2_TR(0x45acf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45acf2:{NFSU2_TR(0x45acf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45acf3:{NFSU2_TR(0x45acf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45acfb:{NFSU2_TR(0x45acfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45acfe:L45acfe:{c.instructions+=3;NFSU2_TR(0x45acfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45ad01:{NFSU2_TR(0x45ad01);
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
B45ad03:{NFSU2_TR(0x45ad03);
if(r1(R+518)){{goto L45ad13;}}
}
B45ad05:L45ad05:{c.instructions+=4;NFSU2_TR(0x45ad05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ad07:{NFSU2_TR(0x45ad07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ad08:{NFSU2_TR(0x45ad08);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45ad10:{NFSU2_TR(0x45ad10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45ad13:L45ad13:{c.instructions+=2;NFSU2_TR(0x45ad13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ad14:{NFSU2_TR(0x45ad14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ad40:L45ad40:{c.instructions+=7;NFSU2_TR(0x45ad40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B45ad43:{NFSU2_TR(0x45ad43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ad44:{NFSU2_TR(0x45ad44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ad45:{NFSU2_TR(0x45ad45);
__builtin_memmove((R+24),(R+4),4);
}
B45ad47:{NFSU2_TR(0x45ad47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45ad4a:{NFSU2_TR(0x45ad4a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45ad4d:{NFSU2_TR(0x45ad4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ad52ull));
TAIL_STATIC(0x721f99u,721);
}
B45ad52:L45ad52:{c.instructions+=5;NFSU2_TR(0x45ad52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ad55:{NFSU2_TR(0x45ad55);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45ad59:{NFSU2_TR(0x45ad59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ad5a:{NFSU2_TR(0x45ad5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ad5b:{NFSU2_TR(0x45ad5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ad60ull));
TAIL_STATIC(0x722eceu,722);
}
B45ad60:L45ad60:{c.instructions+=3;NFSU2_TR(0x45ad60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45ad63:{NFSU2_TR(0x45ad63);
__builtin_memmove((R+28),(R+0),4);
}
B45ad65:{NFSU2_TR(0x45ad65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ad6aull));
TAIL_STATIC(0x721fa7u,721);
}
B45ad6a:L45ad6a:{c.instructions+=9;NFSU2_TR(0x45ad6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ad6d:{NFSU2_TR(0x45ad6d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45ad6f:{NFSU2_TR(0x45ad6f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B45ad71:{NFSU2_TR(0x45ad71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45ad75:{NFSU2_TR(0x45ad75);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B45ad78:{NFSU2_TR(0x45ad78);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B45ad79:{NFSU2_TR(0x45ad79);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B45ad7b:{NFSU2_TR(0x45ad7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ad7d:{NFSU2_TR(0x45ad7d);
if(r1(R+518)){{goto L45ade8;}}
}
B45ad7f:L45ad7f:{c.instructions+=2;NFSU2_TR(0x45ad7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ad81:{NFSU2_TR(0x45ad81);
if(r1(R+518)){{goto L45ade8;}}
}
B45ad83:L45ad83:{c.instructions+=2;NFSU2_TR(0x45ad83);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45ad87:{NFSU2_TR(0x45ad87);
if(r1(R+518)){{goto L45adb8;}}
}
B45ad89:L45ad89:{c.instructions+=4;NFSU2_TR(0x45ad89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45ad8c:{NFSU2_TR(0x45ad8c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ad8e:{NFSU2_TR(0x45ad8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ad8f:{NFSU2_TR(0x45ad8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ad94ull));
TAIL_STATIC(0x722f98u,722);
}
B45ad94:L45ad94:{c.instructions+=4;NFSU2_TR(0x45ad94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ad97:{NFSU2_TR(0x45ad97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45ad9a:{NFSU2_TR(0x45ad9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45ad9c:{NFSU2_TR(0x45ad9c);
if(r1(R+518)){{goto L45adae;}}
}
B45ad9e:L45ad9e:{c.instructions+=2;NFSU2_TR(0x45ad9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ad9f:{NFSU2_TR(0x45ad9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ada4ull));
TAIL_STATIC(0x575630u,575);
}
B45ada4:L45ada4:{c.instructions+=2;NFSU2_TR(0x45ada4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45ada7:{NFSU2_TR(0x45ada7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45adae:L45adae:{c.instructions+=5;NFSU2_TR(0x45adae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45adaf:{NFSU2_TR(0x45adaf);
w1(R+0,u8(0x1ull));
}
B45adb1:{NFSU2_TR(0x45adb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45adb2:{NFSU2_TR(0x45adb2);
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
B45adb5:{NFSU2_TR(0x45adb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45adb8:L45adb8:{c.instructions+=3;NFSU2_TR(0x45adb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45adbb:{NFSU2_TR(0x45adbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45adbd:{NFSU2_TR(0x45adbd);
if(r1(R+518)){{goto L45ade8;}}
}
B45adbf:L45adbf:{c.instructions+=4;NFSU2_TR(0x45adbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45adc2:{NFSU2_TR(0x45adc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45adc5:{NFSU2_TR(0x45adc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45adc6:{NFSU2_TR(0x45adc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45adcbull));
TAIL_STATIC(0x7227cbu,722);
}
B45adcb:L45adcb:{c.instructions+=4;NFSU2_TR(0x45adcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45adce:{NFSU2_TR(0x45adce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45add1:{NFSU2_TR(0x45add1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45add2:{NFSU2_TR(0x45add2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45add7ull));
TAIL_STATIC(0x7227cbu,722);
}
B45add7:L45add7:{c.instructions+=5;NFSU2_TR(0x45add7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45adda:{NFSU2_TR(0x45adda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45addd:{NFSU2_TR(0x45addd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45addf:{NFSU2_TR(0x45addf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ade0:{NFSU2_TR(0x45ade0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ade5ull));
TAIL_STATIC(0x722f98u,722);
}
B45ade5:L45ade5:{c.instructions+=1;NFSU2_TR(0x45ade5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B45ade8:L45ade8:{c.instructions+=5;NFSU2_TR(0x45ade8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45ade9:{NFSU2_TR(0x45ade9);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B45adeb:{NFSU2_TR(0x45adeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45adec:{NFSU2_TR(0x45adec);
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
B45adef:{NFSU2_TR(0x45adef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45ae00:L45ae00:{c.instructions+=4;NFSU2_TR(0x45ae00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ae01:{NFSU2_TR(0x45ae01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45ae04:{NFSU2_TR(0x45ae04);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45ae07:{NFSU2_TR(0x45ae07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ae0cull));
TAIL_STATIC(0x721f99u,721);
}
B45ae0c:L45ae0c:{c.instructions+=4;NFSU2_TR(0x45ae0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ae0f:{NFSU2_TR(0x45ae0f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ae11:{NFSU2_TR(0x45ae11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ae12:{NFSU2_TR(0x45ae12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ae17ull));
TAIL_STATIC(0x7230a7u,723);
}
B45ae17:L45ae17:{c.instructions+=3;NFSU2_TR(0x45ae17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45ae1a:{NFSU2_TR(0x45ae1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ae1b:{NFSU2_TR(0x45ae1b);
TAIL_STATIC(0x721fa7u,721);
}
B45ae20:L45ae20:{c.instructions+=4;NFSU2_TR(0x45ae20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ae21:{NFSU2_TR(0x45ae21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45ae24:{NFSU2_TR(0x45ae24);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45ae27:{NFSU2_TR(0x45ae27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ae2cull));
TAIL_STATIC(0x721f99u,721);
}
B45ae2c:L45ae2c:{c.instructions+=4;NFSU2_TR(0x45ae2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ae2f:{NFSU2_TR(0x45ae2f);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ae34:{NFSU2_TR(0x45ae34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45ae35:{NFSU2_TR(0x45ae35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ae3aull));
TAIL_STATIC(0x7230a7u,723);
}
B45ae3a:L45ae3a:{c.instructions+=3;NFSU2_TR(0x45ae3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45ae3d:{NFSU2_TR(0x45ae3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45ae3e:{NFSU2_TR(0x45ae3e);
TAIL_STATIC(0x721fa7u,721);
}
B45ae50:L45ae50:{c.instructions+=3;NFSU2_TR(0x45ae50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45ae54:{NFSU2_TR(0x45ae54);
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
B45ae57:{NFSU2_TR(0x45ae57);
if(r1(R+518)){{goto L45ae9e;}}
}
B45ae59:L45ae59:{c.instructions+=2;NFSU2_TR(0x45ae59);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B45ae5a:{NFSU2_TR(0x45ae5a);
if(r1(R+518)){{goto L45ae71;}}
}
B45ae5c:L45ae5c:{c.instructions+=2;NFSU2_TR(0x45ae5c);
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
B45ae5d:{NFSU2_TR(0x45ae5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45ae9e;}}
}
B45ae5f:L45ae5f:{c.instructions+=3;NFSU2_TR(0x45ae5f);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B45ae65:{NFSU2_TR(0x45ae65);
s1(0x82ba58,u8(0x1ull));
}
B45ae6c:{NFSU2_TR(0x45ae6c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45a7c0u);}goto L45a7c0;}
}
B45ae71:L45ae71:{c.instructions+=5;NFSU2_TR(0x45ae71);
__builtin_memmove((R+0),gp(0x82ba44),4);
}
B45ae76:{NFSU2_TR(0x45ae76);
__builtin_memmove(gp(0x82ba48),(R+0),4);
}
B45ae7b:{NFSU2_TR(0x45ae7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45ae7d:{NFSU2_TR(0x45ae7d);
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
B45ae7f:{NFSU2_TR(0x45ae7f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45ae9e;}}
}
B45ae81:L45ae81:{c.instructions+=3;NFSU2_TR(0x45ae81);
__builtin_memmove((R+4),gp(0x82ba40),4);
}
B45ae87:{NFSU2_TR(0x45ae87);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B45ae8a:{NFSU2_TR(0x45ae8a);
__builtin_memmove((R+12),(R+12),4);
}
B45ae90:L45ae90:{c.instructions+=5;NFSU2_TR(0x45ae90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B45ae92:{NFSU2_TR(0x45ae92);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B45ae95:{NFSU2_TR(0x45ae95);
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
B45ae96:{NFSU2_TR(0x45ae96);
__builtin_memmove(gp(0x82ba40),(R+4),4);
}
B45ae9c:{NFSU2_TR(0x45ae9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45ae90u);}goto L45ae90;}}
}
B45ae9e:L45ae9e:{c.instructions+=1;NFSU2_TR(0x45ae9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45aea0:L45aea0:{c.instructions+=13;NFSU2_TR(0x45aea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B45aea3:{NFSU2_TR(0x45aea3);
__builtin_memmove((R+0),gp(0x82ba40),4);
}
B45aea8:{NFSU2_TR(0x45aea8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aea9:{NFSU2_TR(0x45aea9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aeaa:{NFSU2_TR(0x45aeaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B45aead:{NFSU2_TR(0x45aead);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B45aeb2:{NFSU2_TR(0x45aeb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aeb3:{NFSU2_TR(0x45aeb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aeb4:{NFSU2_TR(0x45aeb4);
__builtin_memmove((R+28),(R+4),4);
}
B45aeb6:{NFSU2_TR(0x45aeb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45aebe:{NFSU2_TR(0x45aebe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B45aec1:{NFSU2_TR(0x45aec1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45aec3:{NFSU2_TR(0x45aec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45aec8ull));
TAIL_STATIC(0x43e910u,43e);
}
B45aec8:L45aec8:{c.instructions+=4;NFSU2_TR(0x45aec8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45aece:{NFSU2_TR(0x45aece);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45aed1:{NFSU2_TR(0x45aed1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45aed3:{NFSU2_TR(0x45aed3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45aef0;}}
}
B45aed5:L45aed5:{c.instructions+=6;NFSU2_TR(0x45aed5);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B45aedb:{NFSU2_TR(0x45aedb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B45aede:{NFSU2_TR(0x45aede);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B45aee4:{NFSU2_TR(0x45aee4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aee5:{NFSU2_TR(0x45aee5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aee6:{NFSU2_TR(0x45aee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45aeebull));
TAIL_STATIC(0x440820u,440);
}
B45aeeb:L45aeeb:{c.instructions+=2;NFSU2_TR(0x45aeeb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45aeee:{NFSU2_TR(0x45aeee);
__builtin_memmove((R+12),(R+0),4);
}
B45aef0:L45aef0:{c.instructions+=6;NFSU2_TR(0x45aef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45aef3:{NFSU2_TR(0x45aef3);
__builtin_memmove((R+0),gp(0x82ba40),4);
}
B45aef8:{NFSU2_TR(0x45aef8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B45aefa:{NFSU2_TR(0x45aefa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45aefc:{NFSU2_TR(0x45aefc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45af00:{NFSU2_TR(0x45af00);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45af36;}}
}
B45af02:L45af02:{c.instructions+=12;NFSU2_TR(0x45af02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45af05:{NFSU2_TR(0x45af05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45af08:{NFSU2_TR(0x45af08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45af0b:{NFSU2_TR(0x45af0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45af0c:{NFSU2_TR(0x45af0c);
__builtin_memmove((R+8),gp(0x82ba48),4);
}
B45af12:{NFSU2_TR(0x45af12);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45af16:{NFSU2_TR(0x45af16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45af17:{NFSU2_TR(0x45af17);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45af1b:{NFSU2_TR(0x45af1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45af1c:{NFSU2_TR(0x45af1c);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B45af22:{NFSU2_TR(0x45af22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45af23:{NFSU2_TR(0x45af23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45af28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45aa30u);}goto L45aa30;}
}
B45af28:L45af28:{c.instructions+=5;NFSU2_TR(0x45af28);
__builtin_memmove((R+0),gp(0x82ba40),4);
}
B45af2d:{NFSU2_TR(0x45af2d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B45af2e:{NFSU2_TR(0x45af2e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45af30:{NFSU2_TR(0x45af30);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45af34:{NFSU2_TR(0x45af34);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45af02u);}goto L45af02;}}
}
B45af36:L45af36:{c.instructions+=7;NFSU2_TR(0x45af36);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B45af3c:{NFSU2_TR(0x45af3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45af3d:{NFSU2_TR(0x45af3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45af40:{NFSU2_TR(0x45af40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45af41:{NFSU2_TR(0x45af41);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B45af44:{NFSU2_TR(0x45af44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45af45:{NFSU2_TR(0x45af45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45af4aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45ab00u);}goto L45ab00;}
}
B45af4a:L45af4a:{c.instructions+=3;NFSU2_TR(0x45af4a);
__builtin_memmove((R+4),gp(0x82ba48),4);
}
B45af50:{NFSU2_TR(0x45af50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45af51:{NFSU2_TR(0x45af51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45af56ull));
TAIL_STATIC(0x440540u,440);
}
B45af56:L45af56:{c.instructions+=7;NFSU2_TR(0x45af56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45af59:{NFSU2_TR(0x45af59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45af5a:{NFSU2_TR(0x45af5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45af5b:{NFSU2_TR(0x45af5b);
s4(0x82ba48,u32(0x0ull));
}
B45af65:{NFSU2_TR(0x45af65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45af66:{NFSU2_TR(0x45af66);
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
B45af69:{NFSU2_TR(0x45af69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45af70:L45af70:{c.instructions+=2;NFSU2_TR(0x45af70);
__builtin_memmove((R+0),gp(0x82ba40),4);
}
B45af75:{NFSU2_TR(0x45af75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45af80:L45af80:{c.instructions+=2;NFSU2_TR(0x45af80);
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
B45af82:{NFSU2_TR(0x45af82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45af90:L45af90:{c.instructions+=3;NFSU2_TR(0x45af90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45af94:{NFSU2_TR(0x45af94);
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
B45af97:{NFSU2_TR(0x45af97);
if(r1(R+518)){{goto L45afde;}}
}
B45af99:L45af99:{c.instructions+=2;NFSU2_TR(0x45af99);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B45af9a:{NFSU2_TR(0x45af9a);
if(r1(R+518)){{goto L45afb1;}}
}
B45af9c:L45af9c:{c.instructions+=2;NFSU2_TR(0x45af9c);
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
B45af9d:{NFSU2_TR(0x45af9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45afde;}}
}
B45af9f:L45af9f:{c.instructions+=3;NFSU2_TR(0x45af9f);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B45afa5:{NFSU2_TR(0x45afa5);
s1(0x82ba74,u8(0x1ull));
}
B45afac:{NFSU2_TR(0x45afac);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45a7c0u);}goto L45a7c0;}
}
B45afb1:L45afb1:{c.instructions+=5;NFSU2_TR(0x45afb1);
__builtin_memmove((R+0),gp(0x82ba60),4);
}
B45afb6:{NFSU2_TR(0x45afb6);
__builtin_memmove(gp(0x82ba64),(R+0),4);
}
B45afbb:{NFSU2_TR(0x45afbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45afbd:{NFSU2_TR(0x45afbd);
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
B45afbf:{NFSU2_TR(0x45afbf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45afde;}}
}
B45afc1:L45afc1:{c.instructions+=3;NFSU2_TR(0x45afc1);
__builtin_memmove((R+4),gp(0x82ba5c),4);
}
B45afc7:{NFSU2_TR(0x45afc7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B45afca:{NFSU2_TR(0x45afca);
__builtin_memmove((R+12),(R+12),4);
}
B45afd0:L45afd0:{c.instructions+=5;NFSU2_TR(0x45afd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B45afd2:{NFSU2_TR(0x45afd2);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B45afd5:{NFSU2_TR(0x45afd5);
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
B45afd6:{NFSU2_TR(0x45afd6);
__builtin_memmove(gp(0x82ba5c),(R+4),4);
}
B45afdc:{NFSU2_TR(0x45afdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45afd0u);}goto L45afd0;}}
}
B45afde:L45afde:{c.instructions+=1;NFSU2_TR(0x45afde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45afe0:L45afe0:{c.instructions+=11;NFSU2_TR(0x45afe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B45afe3:{NFSU2_TR(0x45afe3);
__builtin_memmove((R+0),gp(0x82ba5c),4);
}
B45afe8:{NFSU2_TR(0x45afe8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45afe9:{NFSU2_TR(0x45afe9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45afea:{NFSU2_TR(0x45afea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B45afed:{NFSU2_TR(0x45afed);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B45aff2:{NFSU2_TR(0x45aff2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aff3:{NFSU2_TR(0x45aff3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45aff4:{NFSU2_TR(0x45aff4);
__builtin_memmove((R+28),(R+4),4);
}
B45aff6:{NFSU2_TR(0x45aff6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45affe:{NFSU2_TR(0x45affe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
TAIL_STATIC(0x45b001u,45b);
}
XIT:NFSU2_TR_EXIT(0x45a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
