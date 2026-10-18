#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_768(u8* __restrict R,Cpu& c);
u32 body_769(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x76a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x76a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_76a(u8* __restrict R,Cpu& c);
u32 page_76a(Cpu& c){return body_76a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_76a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x76a496:goto L76a496;
case 0x76a497:c.instructions+=6;goto B76a497;
case 0x76a498:c.instructions+=5;goto B76a498;
case 0x76a499:c.instructions+=4;goto B76a499;
case 0x76a49d:c.instructions+=3;goto B76a49d;
case 0x76a4a2:c.instructions+=2;goto B76a4a2;
case 0x76a4a7:c.instructions+=1;goto B76a4a7;
case 0x76a4ad:goto L76a4ad;
case 0x76a4b0:c.instructions+=3;goto B76a4b0;
case 0x76a4b3:c.instructions+=2;goto B76a4b3;
case 0x76a4ba:c.instructions+=1;goto B76a4ba;
case 0x76a4c0:goto L76a4c0;
case 0x76a4c4:c.instructions+=3;goto B76a4c4;
case 0x76a4c9:c.instructions+=2;goto B76a4c9;
case 0x76a4ce:c.instructions+=1;goto B76a4ce;
case 0x76a4d4:goto L76a4d4;
case 0x76a4d8:c.instructions+=2;goto B76a4d8;
case 0x76a4dd:c.instructions+=1;goto B76a4dd;
case 0x76a4e3:goto L76a4e3;
case 0x76a4e8:c.instructions+=1;goto B76a4e8;
case 0x76a4ee:goto L76a4ee;
case 0x76a4f2:c.instructions+=2;goto B76a4f2;
case 0x76a4f4:c.instructions+=1;goto B76a4f4;
case 0x76a4fa:goto L76a4fa;
case 0x76a4fe:c.instructions+=2;goto B76a4fe;
case 0x76a500:c.instructions+=1;goto B76a500;
case 0x76a506:goto L76a506;
case 0x76a50a:c.instructions+=6;goto B76a50a;
case 0x76a50f:c.instructions+=5;goto B76a50f;
case 0x76a512:c.instructions+=4;goto B76a512;
case 0x76a516:c.instructions+=3;goto B76a516;
case 0x76a51c:c.instructions+=2;goto B76a51c;
case 0x76a51e:c.instructions+=1;goto B76a51e;
case 0x76a520:goto L76a520;
case 0x76a524:c.instructions+=6;goto B76a524;
case 0x76a529:c.instructions+=5;goto B76a529;
case 0x76a52c:c.instructions+=4;goto B76a52c;
case 0x76a530:c.instructions+=3;goto B76a530;
case 0x76a536:c.instructions+=2;goto B76a536;
case 0x76a538:c.instructions+=1;goto B76a538;
case 0x76a53e:goto L76a53e;
case 0x76a542:c.instructions+=19;goto B76a542;
case 0x76a546:c.instructions+=18;goto B76a546;
case 0x76a54a:c.instructions+=17;goto B76a54a;
case 0x76a550:c.instructions+=16;goto B76a550;
case 0x76a552:c.instructions+=15;goto B76a552;
case 0x76a554:c.instructions+=14;goto B76a554;
case 0x76a557:c.instructions+=13;goto B76a557;
case 0x76a55a:c.instructions+=12;goto B76a55a;
case 0x76a55c:c.instructions+=11;goto B76a55c;
case 0x76a55e:c.instructions+=10;goto B76a55e;
case 0x76a564:c.instructions+=9;goto B76a564;
case 0x76a566:c.instructions+=8;goto B76a566;
case 0x76a56a:c.instructions+=7;goto B76a56a;
case 0x76a56e:c.instructions+=6;goto B76a56e;
case 0x76a572:c.instructions+=5;goto B76a572;
case 0x76a574:c.instructions+=4;goto B76a574;
case 0x76a576:c.instructions+=3;goto B76a576;
case 0x76a57a:c.instructions+=2;goto B76a57a;
case 0x76a57c:c.instructions+=1;goto B76a57c;
case 0x76a57e:goto L76a57e;
case 0x76a584:c.instructions+=1;goto B76a584;
case 0x76a586:goto L76a586;
case 0x76a58a:c.instructions+=1;goto B76a58a;
case 0x76a58e:goto L76a58e;
case 0x76a592:c.instructions+=23;goto B76a592;
case 0x76a596:c.instructions+=22;goto B76a596;
case 0x76a59b:c.instructions+=21;goto B76a59b;
case 0x76a59f:c.instructions+=20;goto B76a59f;
case 0x76a5a3:c.instructions+=19;goto B76a5a3;
case 0x76a5a7:c.instructions+=18;goto B76a5a7;
case 0x76a5ac:c.instructions+=17;goto B76a5ac;
case 0x76a5b0:c.instructions+=16;goto B76a5b0;
case 0x76a5b6:c.instructions+=15;goto B76a5b6;
case 0x76a5b8:c.instructions+=14;goto B76a5b8;
case 0x76a5bb:c.instructions+=13;goto B76a5bb;
case 0x76a5be:c.instructions+=12;goto B76a5be;
case 0x76a5c1:c.instructions+=11;goto B76a5c1;
case 0x76a5c3:c.instructions+=10;goto B76a5c3;
case 0x76a5c7:c.instructions+=9;goto B76a5c7;
case 0x76a5cb:c.instructions+=8;goto B76a5cb;
case 0x76a5d1:c.instructions+=7;goto B76a5d1;
case 0x76a5d6:c.instructions+=6;goto B76a5d6;
case 0x76a5d8:c.instructions+=5;goto B76a5d8;
case 0x76a5dc:c.instructions+=4;goto B76a5dc;
case 0x76a5e0:c.instructions+=3;goto B76a5e0;
case 0x76a5e2:c.instructions+=2;goto B76a5e2;
case 0x76a5e6:c.instructions+=1;goto B76a5e6;
case 0x76a5e8:goto L76a5e8;
case 0x76a5ea:c.instructions+=3;goto B76a5ea;
case 0x76a5ec:c.instructions+=2;goto B76a5ec;
case 0x76a5f1:c.instructions+=1;goto B76a5f1;
case 0x76a5f3:goto L76a5f3;
case 0x76a5f5:goto L76a5f5;
case 0x76a5f7:c.instructions+=4;goto B76a5f7;
case 0x76a5fd:c.instructions+=3;goto B76a5fd;
case 0x76a5ff:c.instructions+=2;goto B76a5ff;
case 0x76a602:c.instructions+=1;goto B76a602;
case 0x76a604:goto L76a604;
case 0x76a608:c.instructions+=10;goto B76a608;
case 0x76a60c:c.instructions+=9;goto B76a60c;
case 0x76a60e:c.instructions+=8;goto B76a60e;
case 0x76a612:c.instructions+=7;goto B76a612;
case 0x76a618:c.instructions+=6;goto B76a618;
case 0x76a61a:c.instructions+=5;goto B76a61a;
case 0x76a61c:c.instructions+=4;goto B76a61c;
case 0x76a620:c.instructions+=3;goto B76a620;
case 0x76a624:c.instructions+=2;goto B76a624;
case 0x76a62a:c.instructions+=1;goto B76a62a;
case 0x76a62c:goto L76a62c;
case 0x76a62e:c.instructions+=1;goto B76a62e;
case 0x76a630:goto L76a630;
case 0x76a634:c.instructions+=2;goto B76a634;
case 0x76a638:c.instructions+=1;goto B76a638;
case 0x76a63a:goto L76a63a;
case 0x76a640:c.instructions+=1;goto B76a640;
case 0x76a642:goto L76a642;
case 0x76a646:c.instructions+=2;goto B76a646;
case 0x76a64c:c.instructions+=1;goto B76a64c;
case 0x76a64e:goto L76a64e;
case 0x76a652:c.instructions+=6;goto B76a652;
case 0x76a656:c.instructions+=5;goto B76a656;
case 0x76a65b:c.instructions+=4;goto B76a65b;
case 0x76a65f:c.instructions+=3;goto B76a65f;
case 0x76a663:c.instructions+=2;goto B76a663;
case 0x76a669:c.instructions+=1;goto B76a669;
case 0x76a66d:goto L76a66d;
case 0x76a671:c.instructions+=11;goto B76a671;
case 0x76a673:c.instructions+=10;goto B76a673;
case 0x76a675:c.instructions+=9;goto B76a675;
case 0x76a679:c.instructions+=8;goto B76a679;
case 0x76a67b:c.instructions+=7;goto B76a67b;
case 0x76a680:c.instructions+=6;goto B76a680;
case 0x76a683:c.instructions+=5;goto B76a683;
case 0x76a686:c.instructions+=4;goto B76a686;
case 0x76a68e:c.instructions+=3;goto B76a68e;
case 0x76a692:c.instructions+=2;goto B76a692;
case 0x76a695:c.instructions+=1;goto B76a695;
case 0x76a698:goto L76a698;
case 0x76a699:c.instructions+=3;goto B76a699;
case 0x76a69a:c.instructions+=2;goto B76a69a;
case 0x76a69b:c.instructions+=1;goto B76a69b;
case 0x76a69c:goto L76a69c;
case 0x76a69d:c.instructions+=7;goto B76a69d;
case 0x76a6a0:c.instructions+=6;goto B76a6a0;
case 0x76a6a4:c.instructions+=5;goto B76a6a4;
case 0x76a6a7:c.instructions+=4;goto B76a6a7;
case 0x76a6a9:c.instructions+=3;goto B76a6a9;
case 0x76a6ad:c.instructions+=2;goto B76a6ad;
case 0x76a6b2:c.instructions+=1;goto B76a6b2;
case 0x76a6b4:goto L76a6b4;
case 0x76a6b9:goto L76a6b9;
case 0x76a6bc:c.instructions+=2;goto B76a6bc;
case 0x76a6bd:c.instructions+=1;goto B76a6bd;
case 0x76a6be:goto L76a6be;
case 0x76a6c1:c.instructions+=4;goto B76a6c1;
case 0x76a6c5:c.instructions+=3;goto B76a6c5;
case 0x76a6c8:c.instructions+=2;goto B76a6c8;
case 0x76a6cc:c.instructions+=1;goto B76a6cc;
case 0x76a6ce:goto L76a6ce;
case 0x76a6d0:c.instructions+=13;goto B76a6d0;
case 0x76a6d4:c.instructions+=12;goto B76a6d4;
case 0x76a6d7:c.instructions+=11;goto B76a6d7;
case 0x76a6d9:c.instructions+=10;goto B76a6d9;
case 0x76a6dc:c.instructions+=9;goto B76a6dc;
case 0x76a6e0:c.instructions+=8;goto B76a6e0;
case 0x76a6e4:c.instructions+=7;goto B76a6e4;
case 0x76a6e9:c.instructions+=6;goto B76a6e9;
case 0x76a6ed:c.instructions+=5;goto B76a6ed;
case 0x76a6f1:c.instructions+=4;goto B76a6f1;
case 0x76a6f5:c.instructions+=3;goto B76a6f5;
case 0x76a6fa:c.instructions+=2;goto B76a6fa;
case 0x76a6ff:c.instructions+=1;goto B76a6ff;
case 0x76a701:goto L76a701;
case 0x76a704:c.instructions+=5;goto B76a704;
case 0x76a70a:c.instructions+=4;goto B76a70a;
case 0x76a70e:c.instructions+=3;goto B76a70e;
case 0x76a714:c.instructions+=2;goto B76a714;
case 0x76a717:c.instructions+=1;goto B76a717;
case 0x76a719:goto L76a719;
case 0x76a71d:c.instructions+=7;goto B76a71d;
case 0x76a721:c.instructions+=6;goto B76a721;
case 0x76a726:c.instructions+=5;goto B76a726;
case 0x76a72a:c.instructions+=4;goto B76a72a;
case 0x76a72e:c.instructions+=3;goto B76a72e;
case 0x76a730:c.instructions+=2;goto B76a730;
case 0x76a736:c.instructions+=1;goto B76a736;
case 0x76a739:goto L76a739;
case 0x76a73d:c.instructions+=1;goto B76a73d;
case 0x76a742:goto L76a742;
case 0x76a745:c.instructions+=2;goto B76a745;
case 0x76a746:c.instructions+=1;goto B76a746;
case 0x76a747:goto L76a747;
case 0x76a749:c.instructions+=3;goto B76a749;
case 0x76a74c:c.instructions+=2;goto B76a74c;
case 0x76a74d:c.instructions+=1;goto B76a74d;
case 0x76aa20:goto L76aa20;
case 0x76aa21:c.instructions+=6;goto B76aa21;
case 0x76aa23:c.instructions+=5;goto B76aa23;
case 0x76aa26:c.instructions+=4;goto B76aa26;
case 0x76aa29:c.instructions+=3;goto B76aa29;
case 0x76aa2c:c.instructions+=2;goto B76aa2c;
case 0x76aa31:c.instructions+=1;goto B76aa31;
case 0x76aa36:goto L76aa36;
case 0x76aa37:c.instructions+=1;goto B76aa37;
case 0x76aa3e:goto L76aa3e;
case 0x76aa42:c.instructions+=12;goto B76aa42;
case 0x76aa4a:c.instructions+=11;goto B76aa4a;
case 0x76aa52:c.instructions+=10;goto B76aa52;
case 0x76aa5a:c.instructions+=9;goto B76aa5a;
case 0x76aa62:c.instructions+=8;goto B76aa62;
case 0x76aa67:c.instructions+=7;goto B76aa67;
case 0x76aa6c:c.instructions+=6;goto B76aa6c;
case 0x76aa71:c.instructions+=5;goto B76aa71;
case 0x76aa73:c.instructions+=4;goto B76aa73;
case 0x76aa78:c.instructions+=3;goto B76aa78;
case 0x76aa7a:c.instructions+=2;goto B76aa7a;
case 0x76aa80:c.instructions+=1;goto B76aa80;
case 0x76aa86:goto L76aa86;
case 0x76aa8a:c.instructions+=36;goto B76aa8a;
case 0x76aa8e:c.instructions+=35;goto B76aa8e;
case 0x76aa92:c.instructions+=34;goto B76aa92;
case 0x76aa96:c.instructions+=33;goto B76aa96;
case 0x76aa9a:c.instructions+=32;goto B76aa9a;
case 0x76aaa2:c.instructions+=31;goto B76aaa2;
case 0x76aaa6:c.instructions+=30;goto B76aaa6;
case 0x76aaae:c.instructions+=29;goto B76aaae;
case 0x76aab2:c.instructions+=28;goto B76aab2;
case 0x76aab6:c.instructions+=27;goto B76aab6;
case 0x76aab8:c.instructions+=26;goto B76aab8;
case 0x76aabb:c.instructions+=25;goto B76aabb;
case 0x76aabe:c.instructions+=24;goto B76aabe;
case 0x76aac1:c.instructions+=23;goto B76aac1;
case 0x76aac3:c.instructions+=22;goto B76aac3;
case 0x76aac7:c.instructions+=21;goto B76aac7;
case 0x76aacf:c.instructions+=20;goto B76aacf;
case 0x76aad3:c.instructions+=19;goto B76aad3;
case 0x76aad7:c.instructions+=18;goto B76aad7;
case 0x76aadb:c.instructions+=17;goto B76aadb;
case 0x76aadf:c.instructions+=16;goto B76aadf;
case 0x76aae3:c.instructions+=15;goto B76aae3;
case 0x76aae7:c.instructions+=14;goto B76aae7;
case 0x76aaeb:c.instructions+=13;goto B76aaeb;
case 0x76aaf3:c.instructions+=12;goto B76aaf3;
case 0x76aaf7:c.instructions+=11;goto B76aaf7;
case 0x76aaff:c.instructions+=10;goto B76aaff;
case 0x76ab03:c.instructions+=9;goto B76ab03;
case 0x76ab08:c.instructions+=8;goto B76ab08;
case 0x76ab0c:c.instructions+=7;goto B76ab0c;
case 0x76ab10:c.instructions+=6;goto B76ab10;
case 0x76ab14:c.instructions+=5;goto B76ab14;
case 0x76ab18:c.instructions+=4;goto B76ab18;
case 0x76ab1c:c.instructions+=3;goto B76ab1c;
case 0x76ab22:c.instructions+=2;goto B76ab22;
case 0x76ab28:c.instructions+=1;goto B76ab28;
case 0x76ab2a:goto L76ab2a;
case 0x76ab2e:c.instructions+=6;goto B76ab2e;
case 0x76ab31:c.instructions+=5;goto B76ab31;
case 0x76ab35:c.instructions+=4;goto B76ab35;
case 0x76ab3b:c.instructions+=3;goto B76ab3b;
case 0x76ab3f:c.instructions+=2;goto B76ab3f;
case 0x76ab42:c.instructions+=1;goto B76ab42;
case 0x76ab43:goto L76ab43;
case 0x76ab46:c.instructions+=34;goto B76ab46;
case 0x76ab4b:c.instructions+=33;goto B76ab4b;
case 0x76ab50:c.instructions+=32;goto B76ab50;
case 0x76ab55:c.instructions+=31;goto B76ab55;
case 0x76ab59:c.instructions+=30;goto B76ab59;
case 0x76ab5c:c.instructions+=29;goto B76ab5c;
case 0x76ab5e:c.instructions+=28;goto B76ab5e;
case 0x76ab60:c.instructions+=27;goto B76ab60;
case 0x76ab62:c.instructions+=26;goto B76ab62;
case 0x76ab6a:c.instructions+=25;goto B76ab6a;
case 0x76ab6e:c.instructions+=24;goto B76ab6e;
case 0x76ab73:c.instructions+=23;goto B76ab73;
case 0x76ab77:c.instructions+=22;goto B76ab77;
case 0x76ab7c:c.instructions+=21;goto B76ab7c;
case 0x76ab80:c.instructions+=20;goto B76ab80;
case 0x76ab86:c.instructions+=19;goto B76ab86;
case 0x76ab8a:c.instructions+=18;goto B76ab8a;
case 0x76ab8f:c.instructions+=17;goto B76ab8f;
case 0x76ab94:c.instructions+=16;goto B76ab94;
case 0x76ab97:c.instructions+=15;goto B76ab97;
case 0x76ab9d:c.instructions+=14;goto B76ab9d;
case 0x76aba1:c.instructions+=13;goto B76aba1;
case 0x76aba3:c.instructions+=12;goto B76aba3;
case 0x76aba5:c.instructions+=11;goto B76aba5;
case 0x76abaa:c.instructions+=10;goto B76abaa;
case 0x76abad:c.instructions+=9;goto B76abad;
case 0x76abaf:c.instructions+=8;goto B76abaf;
case 0x76abb2:c.instructions+=7;goto B76abb2;
case 0x76abb7:c.instructions+=6;goto B76abb7;
case 0x76abbb:c.instructions+=5;goto B76abbb;
case 0x76abbe:c.instructions+=4;goto B76abbe;
case 0x76abc3:c.instructions+=3;goto B76abc3;
case 0x76abc9:c.instructions+=2;goto B76abc9;
case 0x76abcf:c.instructions+=1;goto B76abcf;
case 0x76abd1:goto L76abd1;
case 0x76abd4:c.instructions+=1;goto B76abd4;
case 0x76abd6:goto L76abd6;
case 0x76abf8:goto L76abf8;
case 0x76abfd:c.instructions+=1;goto B76abfd;
case 0x76abff:goto L76abff;
case 0x76ac04:goto L76ac04;
case 0x76ac07:c.instructions+=9;goto B76ac07;
case 0x76ac0d:c.instructions+=8;goto B76ac0d;
case 0x76ac11:c.instructions+=7;goto B76ac11;
case 0x76ac13:c.instructions+=6;goto B76ac13;
case 0x76ac16:c.instructions+=5;goto B76ac16;
case 0x76ac1a:c.instructions+=4;goto B76ac1a;
case 0x76ac1d:c.instructions+=3;goto B76ac1d;
case 0x76ac21:c.instructions+=2;goto B76ac21;
case 0x76ac24:c.instructions+=1;goto B76ac24;
case 0x76ac29:goto L76ac29;
case 0x76ac2f:c.instructions+=1;goto B76ac2f;
case 0x76ac32:goto L76ac32;
case 0x76ac35:c.instructions+=4;goto B76ac35;
case 0x76ac3b:c.instructions+=3;goto B76ac3b;
case 0x76ac3f:c.instructions+=2;goto B76ac3f;
case 0x76ac42:c.instructions+=1;goto B76ac42;
case 0x76ac43:goto L76ac43;
case 0x76ac48:c.instructions+=1;goto B76ac48;
case 0x76ac4a:goto L76ac4a;
case 0x76ac4e:c.instructions+=2;goto B76ac4e;
case 0x76ac53:c.instructions+=1;goto B76ac53;
case 0x76ac55:goto L76ac55;
case 0x76ac5d:c.instructions+=3;goto B76ac5d;
case 0x76ac61:c.instructions+=2;goto B76ac61;
case 0x76ac66:c.instructions+=1;goto B76ac66;
case 0x76ac68:goto L76ac68;
case 0x76ac70:c.instructions+=3;goto B76ac70;
case 0x76ac74:c.instructions+=2;goto B76ac74;
case 0x76ac79:c.instructions+=1;goto B76ac79;
case 0x76ac7b:goto L76ac7b;
case 0x76ac7f:c.instructions+=2;goto B76ac7f;
case 0x76ac84:c.instructions+=1;goto B76ac84;
case 0x76ac86:goto L76ac86;
case 0x76ac89:c.instructions+=1;goto B76ac89;
case 0x76ac8b:goto L76ac8b;
case 0x76ac8f:c.instructions+=2;goto B76ac8f;
case 0x76ac94:c.instructions+=1;goto B76ac94;
case 0x76ac96:goto L76ac96;
case 0x76ac9c:c.instructions+=1;goto B76ac9c;
case 0x76ac9d:goto L76ac9d;
case 0x76aca3:c.instructions+=1;goto B76aca3;
case 0x76aca4:goto L76aca4;
case 0x76aca9:c.instructions+=1;goto B76aca9;
case 0x76acae:goto L76acae;
case 0x76acb2:c.instructions+=3;goto B76acb2;
case 0x76acb7:c.instructions+=2;goto B76acb7;
case 0x76acbc:c.instructions+=1;goto B76acbc;
case 0x76acbe:goto L76acbe;
case 0x76acc4:c.instructions+=6;goto B76acc4;
case 0x76accc:c.instructions+=5;goto B76accc;
case 0x76accf:c.instructions+=4;goto B76accf;
case 0x76acd5:c.instructions+=3;goto B76acd5;
case 0x76acd9:c.instructions+=2;goto B76acd9;
case 0x76acdc:c.instructions+=1;goto B76acdc;
case 0x76ace0:goto L76ace0;
case 0x76ace2:c.instructions+=2;goto B76ace2;
case 0x76ace7:c.instructions+=1;goto B76ace7;
case 0x76acec:goto L76acec;
case 0x76acef:c.instructions+=4;goto B76acef;
case 0x76acf3:c.instructions+=3;goto B76acf3;
case 0x76acf6:c.instructions+=2;goto B76acf6;
case 0x76acf8:c.instructions+=1;goto B76acf8;
case 0x76acfa:goto L76acfa;
case 0x76acfb:goto L76acfb;
case 0x76acfd:c.instructions+=3;goto B76acfd;
case 0x76ad00:c.instructions+=2;goto B76ad00;
case 0x76ad03:c.instructions+=1;goto B76ad03;
case 0x76ad05:goto L76ad05;
case 0x76ad0c:c.instructions+=1;goto B76ad0c;
case 0x76ad0e:goto L76ad0e;
case 0x76ad11:c.instructions+=5;goto B76ad11;
case 0x76ad14:c.instructions+=4;goto B76ad14;
case 0x76ad17:c.instructions+=3;goto B76ad17;
case 0x76ad1a:c.instructions+=2;goto B76ad1a;
case 0x76ad20:c.instructions+=1;goto B76ad20;
case 0x76ad22:goto L76ad22;
case 0x76ad24:c.instructions+=1;goto B76ad24;
case 0x76ad29:goto L76ad29;
case 0x76ad2a:c.instructions+=3;goto B76ad2a;
case 0x76ad2d:c.instructions+=2;goto B76ad2d;
case 0x76ad2e:c.instructions+=1;goto B76ad2e;
case 0x76ad33:goto L76ad33;
case 0x76ad34:c.instructions+=3;goto B76ad34;
case 0x76ad37:c.instructions+=2;goto B76ad37;
case 0x76ad3b:c.instructions+=1;goto B76ad3b;
case 0x76ad40:goto L76ad40;
case 0x76ad43:c.instructions+=2;goto B76ad43;
case 0x76ad45:c.instructions+=1;goto B76ad45;
case 0x76ad47:goto L76ad47;
case 0x76ad4a:c.instructions+=3;goto B76ad4a;
case 0x76ad4c:c.instructions+=2;goto B76ad4c;
case 0x76ad4d:c.instructions+=1;goto B76ad4d;
case 0x76ad52:goto L76ad52;
case 0x76ad55:goto L76ad55;
case 0x76ad57:c.instructions+=1;goto B76ad57;
case 0x76ad59:goto L76ad59;
case 0x76ad5a:c.instructions+=3;goto B76ad5a;
case 0x76ad5c:c.instructions+=2;goto B76ad5c;
case 0x76ad62:c.instructions+=1;goto B76ad62;
case 0x76ad68:goto L76ad68;
case 0x76ad6a:goto L76ad6a;
case 0x76ad6c:c.instructions+=1;goto B76ad6c;
case 0x76ad6e:goto L76ad6e;
case 0x76ad74:c.instructions+=1;goto B76ad74;
case 0x76ad76:goto L76ad76;
case 0x76ad77:c.instructions+=1;goto B76ad77;
case 0x76ad7c:goto L76ad7c;
case 0x76ad7d:c.instructions+=2;goto B76ad7d;
case 0x76ad7f:c.instructions+=1;goto B76ad7f;
case 0x76ad85:goto L76ad85;
case 0x76ad8a:goto L76ad8a;
case 0x76ad8c:c.instructions+=1;goto B76ad8c;
case 0x76ad91:goto L76ad91;
case 0x76ad92:c.instructions+=1;goto B76ad92;
case 0x76ad93:goto L76ad93;
case 0x76ad95:goto L76ad95;
case 0x76ad9a:goto L76ad9a;
case 0x76ad9b:goto L76ad9b;
case 0x76ad9d:c.instructions+=2;goto B76ad9d;
case 0x76ada2:c.instructions+=1;goto B76ada2;
case 0x76ada7:goto L76ada7;
case 0x76ada9:c.instructions+=3;goto B76ada9;
case 0x76adac:c.instructions+=2;goto B76adac;
case 0x76adae:c.instructions+=1;goto B76adae;
case 0x76adb3:goto L76adb3;
case 0x76adb4:c.instructions+=3;goto B76adb4;
case 0x76adb7:c.instructions+=2;goto B76adb7;
case 0x76adb9:c.instructions+=1;goto B76adb9;
case 0x76adba:goto L76adba;
case 0x76adbd:c.instructions+=2;goto B76adbd;
case 0x76adc3:c.instructions+=1;goto B76adc3;
case 0x76adc5:goto L76adc5;
case 0x76adc7:c.instructions+=5;goto B76adc7;
case 0x76adca:c.instructions+=4;goto B76adca;
case 0x76adcf:c.instructions+=3;goto B76adcf;
case 0x76add2:c.instructions+=2;goto B76add2;
case 0x76add4:c.instructions+=1;goto B76add4;
case 0x76add6:goto L76add6;
case 0x76adda:c.instructions+=1;goto B76adda;
case 0x76addc:goto L76addc;
case 0x76addd:c.instructions+=1;goto B76addd;
case 0x76ade2:goto L76ade2;
case 0x76ade3:c.instructions+=2;goto B76ade3;
case 0x76ade6:c.instructions+=1;goto B76ade6;
case 0x76ade8:goto L76ade8;
case 0x76adeb:goto L76adeb;
case 0x76adee:c.instructions+=1;goto B76adee;
case 0x76adf0:goto L76adf0;
case 0x76adf5:c.instructions+=4;goto B76adf5;
case 0x76adf8:c.instructions+=3;goto B76adf8;
case 0x76adfb:c.instructions+=2;goto B76adfb;
case 0x76adfc:c.instructions+=1;goto B76adfc;
case 0x76ae02:goto L76ae02;
case 0x76ae07:c.instructions+=2;goto B76ae07;
case 0x76ae0a:c.instructions+=1;goto B76ae0a;
case 0x76ae0f:goto L76ae0f;
case 0x76ae10:c.instructions+=2;goto B76ae10;
case 0x76ae15:c.instructions+=1;goto B76ae15;
case 0x76ae18:goto L76ae18;
case 0x76ae19:c.instructions+=1;goto B76ae19;
case 0x76ae1b:goto L76ae1b;
case 0x76ae1f:c.instructions+=1;goto B76ae1f;
case 0x76ae24:goto L76ae24;
case 0x76ae27:c.instructions+=1;goto B76ae27;
case 0x76ae2c:goto L76ae2c;
case 0x76ae2d:goto L76ae2d;
case 0x76ae2f:c.instructions+=1;goto B76ae2f;
case 0x76ae34:goto L76ae34;
case 0x76ae35:c.instructions+=1;goto B76ae35;
case 0x76ae36:goto L76ae36;
case 0x76ae38:c.instructions+=1;goto B76ae38;
case 0x76ae3d:goto L76ae3d;
case 0x76ae3f:c.instructions+=1;goto B76ae3f;
case 0x76ae44:goto L76ae44;
case 0x76ae45:c.instructions+=3;goto B76ae45;
case 0x76ae46:c.instructions+=2;goto B76ae46;
case 0x76ae48:c.instructions+=1;goto B76ae48;
case 0x76ae4e:goto L76ae4e;
case 0x76ae4f:c.instructions+=8;goto B76ae4f;
case 0x76ae51:c.instructions+=7;goto B76ae51;
case 0x76ae54:c.instructions+=6;goto B76ae54;
case 0x76ae55:c.instructions+=5;goto B76ae55;
case 0x76ae57:c.instructions+=4;goto B76ae57;
case 0x76ae5d:c.instructions+=3;goto B76ae5d;
case 0x76ae5e:c.instructions+=2;goto B76ae5e;
case 0x76ae5f:c.instructions+=1;goto B76ae5f;
case 0x76ae61:goto L76ae61;
case 0x76ae66:c.instructions+=1;goto B76ae66;
case 0x76ae6c:goto L76ae6c;
case 0x76ae6e:c.instructions+=2;goto B76ae6e;
case 0x76ae70:c.instructions+=1;goto B76ae70;
case 0x76ae76:goto L76ae76;
case 0x76ae7c:c.instructions+=3;goto B76ae7c;
case 0x76ae81:c.instructions+=2;goto B76ae81;
case 0x76ae82:c.instructions+=1;goto B76ae82;
case 0x76ae84:goto L76ae84;
case 0x76ae86:c.instructions+=2;goto B76ae86;
case 0x76ae8b:c.instructions+=1;goto B76ae8b;
case 0x76ae8d:goto L76ae8d;
case 0x76ae92:c.instructions+=2;goto B76ae92;
case 0x76ae93:c.instructions+=1;goto B76ae93;
case 0x76ae95:goto L76ae95;
case 0x76ae9a:c.instructions+=3;goto B76ae9a;
case 0x76ae9b:c.instructions+=2;goto B76ae9b;
case 0x76aea0:c.instructions+=1;goto B76aea0;
case 0x76aea2:goto L76aea2;
case 0x76aea9:c.instructions+=2;goto B76aea9;
case 0x76aeae:c.instructions+=1;goto B76aeae;
case 0x76aeb0:goto L76aeb0;
case 0x76aeb5:c.instructions+=2;goto B76aeb5;
case 0x76aeb6:c.instructions+=1;goto B76aeb6;
case 0x76aeb8:goto L76aeb8;
case 0x76aeba:c.instructions+=2;goto B76aeba;
case 0x76aebf:c.instructions+=1;goto B76aebf;
case 0x76aec1:goto L76aec1;
case 0x76aec6:c.instructions+=2;goto B76aec6;
case 0x76aec7:c.instructions+=1;goto B76aec7;
case 0x76aec9:goto L76aec9;
case 0x76aece:goto L76aece;
case 0x76aed3:c.instructions+=2;goto B76aed3;
case 0x76aed5:c.instructions+=1;goto B76aed5;
case 0x76aed7:goto L76aed7;
case 0x76aed9:goto L76aed9;
case 0x76aedb:c.instructions+=1;goto B76aedb;
case 0x76aedd:goto L76aedd;
case 0x76aee0:c.instructions+=7;goto B76aee0;
case 0x76aee1:c.instructions+=6;goto B76aee1;
case 0x76aee3:c.instructions+=5;goto B76aee3;
case 0x76aee6:c.instructions+=4;goto B76aee6;
case 0x76aee7:c.instructions+=3;goto B76aee7;
case 0x76aee9:c.instructions+=2;goto B76aee9;
case 0x76aeea:c.instructions+=1;goto B76aeea;
case 0x76aef0:goto L76aef0;
case 0x76aef2:c.instructions+=1;goto B76aef2;
case 0x76aef4:goto L76aef4;
case 0x76aef8:c.instructions+=1;goto B76aef8;
case 0x76aefa:goto L76aefa;
case 0x76af01:c.instructions+=1;goto B76af01;
case 0x76af03:goto L76af03;
case 0x76af07:c.instructions+=1;goto B76af07;
case 0x76af09:goto L76af09;
case 0x76af0b:c.instructions+=1;goto B76af0b;
case 0x76af0d:goto L76af0d;
case 0x76af11:c.instructions+=1;goto B76af11;
case 0x76af13:goto L76af13;
case 0x76af18:c.instructions+=2;goto B76af18;
case 0x76af1a:c.instructions+=1;goto B76af1a;
case 0x76af1c:goto L76af1c;
case 0x76af1e:goto L76af1e;
case 0x76af20:c.instructions+=2;goto B76af20;
case 0x76af22:c.instructions+=1;goto B76af22;
case 0x76af24:goto L76af24;
case 0x76af29:c.instructions+=2;goto B76af29;
case 0x76af2b:c.instructions+=1;goto B76af2b;
case 0x76af2d:goto L76af2d;
case 0x76af2e:c.instructions+=1;goto B76af2e;
case 0x76af30:goto L76af30;
case 0x76af32:goto L76af32;
case 0x76af35:c.instructions+=4;goto B76af35;
case 0x76af38:c.instructions+=3;goto B76af38;
case 0x76af3b:c.instructions+=2;goto B76af3b;
case 0x76af3c:c.instructions+=1;goto B76af3c;
case 0x76af42:goto L76af42;
case 0x76af43:c.instructions+=4;goto B76af43;
case 0x76af44:c.instructions+=3;goto B76af44;
case 0x76af45:c.instructions+=2;goto B76af45;
case 0x76af46:c.instructions+=1;goto B76af46;
case 0x76af47:goto L76af47;
case 0x76af4c:c.instructions+=1;goto B76af4c;
case 0x76af4e:goto L76af4e;
case 0x76af51:c.instructions+=2;goto B76af51;
case 0x76af52:c.instructions+=1;goto B76af52;
case 0x76af54:goto L76af54;
case 0x76af55:c.instructions+=1;goto B76af55;
case 0x76af57:goto L76af57;
case 0x76af59:c.instructions+=3;goto B76af59;
case 0x76af5d:c.instructions+=2;goto B76af5d;
case 0x76af60:c.instructions+=1;goto B76af60;
case 0x76af62:goto L76af62;
case 0x76af65:c.instructions+=1;goto B76af65;
case 0x76af67:goto L76af67;
case 0x76af6a:goto L76af6a;
case 0x76af6c:c.instructions+=3;goto B76af6c;
case 0x76af6d:c.instructions+=2;goto B76af6d;
case 0x76af6f:c.instructions+=1;goto B76af6f;
case 0x76af71:goto L76af71;
case 0x76af74:c.instructions+=1;goto B76af74;
case 0x76af75:goto L76af75;
case 0x76af77:c.instructions+=7;goto B76af77;
case 0x76af79:c.instructions+=6;goto B76af79;
case 0x76af7b:c.instructions+=5;goto B76af7b;
case 0x76af7c:c.instructions+=4;goto B76af7c;
case 0x76af7e:c.instructions+=3;goto B76af7e;
case 0x76af7f:c.instructions+=2;goto B76af7f;
case 0x76af81:c.instructions+=1;goto B76af81;
case 0x76af83:goto L76af83;
case 0x76af84:c.instructions+=1;goto B76af84;
case 0x76af85:goto L76af85;
case 0x76af86:c.instructions+=4;goto B76af86;
case 0x76af88:c.instructions+=3;goto B76af88;
case 0x76af8c:c.instructions+=2;goto B76af8c;
case 0x76af8f:c.instructions+=1;goto B76af8f;
case 0x76af91:goto L76af91;
case 0x76af93:c.instructions+=1;goto B76af93;
case 0x76af95:goto L76af95;
case 0x76af97:c.instructions+=2;goto B76af97;
case 0x76af99:c.instructions+=1;goto B76af99;
case 0x76af9b:goto L76af9b;
case 0x76af9d:c.instructions+=1;goto B76af9d;
case 0x76afa0:goto L76afa0;
case 0x76afa3:c.instructions+=1;goto B76afa3;
case 0x76afa8:goto L76afa8;
case 0x76afab:c.instructions+=4;goto B76afab;
case 0x76afac:c.instructions+=3;goto B76afac;
case 0x76afad:c.instructions+=2;goto B76afad;
case 0x76afae:c.instructions+=1;goto B76afae;
default:missing_instruction(c.pc);}
B76a496:L76a496:{c.instructions+=7;NFSU2_TR(0x76a496);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76a497:{NFSU2_TR(0x76a497);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76a498:{NFSU2_TR(0x76a498);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76a499:{NFSU2_TR(0x76a499);
u8 U[8];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a49d:{NFSU2_TR(0x76a49d);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x700ull))));
}
B76a4a2:{NFSU2_TR(0x76a4a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x700ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76a4a7:{NFSU2_TR(0x76a4a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76a630;}}
}
B76a4ad:L76a4ad:{c.instructions+=4;NFSU2_TR(0x76a4ad);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B76a4b0:{NFSU2_TR(0x76a4b0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B76a4b3:{NFSU2_TR(0x76a4b3);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81aafcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B76a4ba:{NFSU2_TR(0x76a4ba);
if(r1(R+518)){{goto L76a630;}}
}
B76a4c0:L76a4c0:{c.instructions+=4;NFSU2_TR(0x76a4c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a4c4:{NFSU2_TR(0x76a4c4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fff0000ull))));
}
B76a4c9:{NFSU2_TR(0x76a4c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76a4ce:{NFSU2_TR(0x76a4ce);
if(r1(R+518)){{goto L76a630;}}
}
B76a4d4:L76a4d4:{c.instructions+=3;NFSU2_TR(0x76a4d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a4d8:{NFSU2_TR(0x76a4d8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fff0000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76a4dd:{NFSU2_TR(0x76a4dd);
if(r1(R+518)){{goto L76a630;}}
}
B76a4e3:L76a4e3:{c.instructions+=2;NFSU2_TR(0x76a4e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76a4e8:{NFSU2_TR(0x76a4e8);
if(r1(R+518)){{goto L76a630;}}
}
B76a4ee:L76a4ee:{c.instructions+=3;NFSU2_TR(0x76a4ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a4f2:{NFSU2_TR(0x76a4f2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76a4f4:{NFSU2_TR(0x76a4f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76a630;}}
}
B76a4fa:L76a4fa:{c.instructions+=3;NFSU2_TR(0x76a4fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a4fe:{NFSU2_TR(0x76a4fe);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76a500:{NFSU2_TR(0x76a500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76a630;}}
}
B76a506:L76a506:{c.instructions+=7;NFSU2_TR(0x76a506);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a50a:{NFSU2_TR(0x76a50a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B76a50f:{NFSU2_TR(0x76a50f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3full))));
}
B76a512:{NFSU2_TR(0x76a512);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76a516:{NFSU2_TR(0x76a516);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7fffull))));
}
B76a51c:{NFSU2_TR(0x76a51c);
w1(R+512,u8((r4(R+12))<(r4(R+0))));
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B76a51e:{NFSU2_TR(0x76a51e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76a57e;}}
}
B76a520:L76a520:{c.instructions+=7;NFSU2_TR(0x76a520);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a524:{NFSU2_TR(0x76a524);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B76a529:{NFSU2_TR(0x76a529);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B76a52c:{NFSU2_TR(0x76a52c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76a530:{NFSU2_TR(0x76a530);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7fffull))));
}
B76a536:{NFSU2_TR(0x76a536);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B76a538:{NFSU2_TR(0x76a538);
if(r1(R+519)){{goto L76a630;}}
}
B76a53e:L76a53e:{c.instructions+=20;NFSU2_TR(0x76a53e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a542:{NFSU2_TR(0x76a542);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a546:{NFSU2_TR(0x76a546);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76a54a:{NFSU2_TR(0x76a54a);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7fffull))));
}
B76a550:{NFSU2_TR(0x76a550);
__builtin_memmove((R+4),(R+12),4);
}
B76a552:{NFSU2_TR(0x76a552);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B76a554:{NFSU2_TR(0x76a554);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7ull))));
}
B76a557:{NFSU2_TR(0x76a557);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x4ull))));
}
B76a55a:{NFSU2_TR(0x76a55a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B76a55c:{NFSU2_TR(0x76a55c);
__builtin_memmove((R+12),(R+0),4);
}
B76a55e:{NFSU2_TR(0x76a55e);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x8000ull))));
}
B76a564:{NFSU2_TR(0x76a564);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B76a566:{NFSU2_TR(0x76a566);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76a56a:{NFSU2_TR(0x76a56a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a56e:{NFSU2_TR(0x76a56e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76a572:{NFSU2_TR(0x76a572);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76a574:{NFSU2_TR(0x76a574);
__asm__ volatile(".byte 0xd9,0xf8":::"memory");
}
B76a576:{NFSU2_TR(0x76a576);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B76a57a:{NFSU2_TR(0x76a57a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B76a57c:{NFSU2_TR(0x76a57c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76a520u);}goto L76a520;}
}
B76a57e:L76a57e:{c.instructions+=2;NFSU2_TR(0x76a57e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76a584:{NFSU2_TR(0x76a584);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76a58e;}}
}
B76a586:L76a586:{c.instructions+=2;NFSU2_TR(0x76a586);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a58a:{NFSU2_TR(0x76a58a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B76a58e:L76a58e:{c.instructions+=24;NFSU2_TR(0x76a58e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B76a592:{NFSU2_TR(0x76a592);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a596:{NFSU2_TR(0x76a596);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x33full))));
}
B76a59b:{NFSU2_TR(0x76a59b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76a59f:{NFSU2_TR(0x76a59f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B76a5a3:{NFSU2_TR(0x76a5a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a5a7:{NFSU2_TR(0x76a5a7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B76a5ac:{NFSU2_TR(0x76a5ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76a5b0:{NFSU2_TR(0x76a5b0);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7fffull))));
}
B76a5b6:{NFSU2_TR(0x76a5b6);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B76a5b8:{NFSU2_TR(0x76a5b8);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3full))));
}
B76a5bb:{NFSU2_TR(0x76a5bb);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x20ull))));
}
B76a5be:{NFSU2_TR(0x76a5be);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B76a5c1:{NFSU2_TR(0x76a5c1);
__builtin_memmove((R+4),(R+12),4);
}
B76a5c3:{NFSU2_TR(0x76a5c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a5c7:{NFSU2_TR(0x76a5c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76a5cb:{NFSU2_TR(0x76a5cb);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x7fffull))));
}
B76a5d1:{NFSU2_TR(0x76a5d1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ull))));
}
B76a5d6:{NFSU2_TR(0x76a5d6);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B76a5d8:{NFSU2_TR(0x76a5d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76a5dc:{NFSU2_TR(0x76a5dc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a5e0:{NFSU2_TR(0x76a5e0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B76a5e2:{NFSU2_TR(0x76a5e2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a5e6:{NFSU2_TR(0x76a5e6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B76a5e8:L76a5e8:{c.instructions+=4;NFSU2_TR(0x76a5e8);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B76a5ea:{NFSU2_TR(0x76a5ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B76a5ec:{NFSU2_TR(0x76a5ec);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x100ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76a5f1:{NFSU2_TR(0x76a5f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76a5f5;}}
}
B76a5f3:L76a5f3:{c.instructions+=1;NFSU2_TR(0x76a5f3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B76a5f5:L76a5f5:{c.instructions+=5;NFSU2_TR(0x76a5f5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76a5f7:{NFSU2_TR(0x76a5f7);
{u32 ea_=u32(u32(8497964u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B76a5fd:{NFSU2_TR(0x76a5fd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76a5ff:{NFSU2_TR(0x76a5ff);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B76a602:{NFSU2_TR(0x76a602);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76a5e8u);}goto L76a5e8;}}
}
B76a604:L76a604:{c.instructions+=11;NFSU2_TR(0x76a604);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76a608:{NFSU2_TR(0x76a608);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B76a60c:{NFSU2_TR(0x76a60c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B76a60e:{NFSU2_TR(0x76a60e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a612:{NFSU2_TR(0x76a612);
{u32 ea_=u32(u32(8497972u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a618:{NFSU2_TR(0x76a618);
__asm__ volatile(".byte 0xd9,0xf8":::"memory");
}
B76a61a:{NFSU2_TR(0x76a61a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B76a61c:{NFSU2_TR(0x76a61c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a620:{NFSU2_TR(0x76a620);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B76a624:{NFSU2_TR(0x76a624);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x8000ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B76a62a:{NFSU2_TR(0x76a62a);
if(r1(R+518)){{goto L76a63a;}}
}
B76a62c:L76a62c:{c.instructions+=2;NFSU2_TR(0x76a62c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B76a62e:{NFSU2_TR(0x76a62e);
{goto L76a63a;}
}
B76a630:L76a630:{c.instructions+=3;NFSU2_TR(0x76a630);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a634:{NFSU2_TR(0x76a634);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a638:{NFSU2_TR(0x76a638);
__asm__ volatile(".byte 0xd9,0xf8":::"memory");
}
B76a63a:L76a63a:{c.instructions+=2;NFSU2_TR(0x76a63a);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76a640:{NFSU2_TR(0x76a640);
if(r1(R+518)){{goto L76a698;}}
}
B76a642:L76a642:{c.instructions+=3;NFSU2_TR(0x76a642);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdd,0x38"::"a"(ea_):"memory");}
}
B76a646:{NFSU2_TR(0x76a646);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76a64c:{NFSU2_TR(0x76a64c);
if(r1(R+518)){{goto L76a66d;}}
}
B76a64e:L76a64e:{c.instructions+=7;NFSU2_TR(0x76a64e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B76a652:{NFSU2_TR(0x76a652);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a656:{NFSU2_TR(0x76a656);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x300ull))));
}
B76a65b:{NFSU2_TR(0x76a65b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76a65f:{NFSU2_TR(0x76a65f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B76a663:{NFSU2_TR(0x76a663);
{u32 ea_=u32(u32(8497948u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B76a669:{NFSU2_TR(0x76a669);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B76a66d:L76a66d:{c.instructions+=12;NFSU2_TR(0x76a66d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a671:{NFSU2_TR(0x76a671);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76a673:{NFSU2_TR(0x76a673);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B76a675:{NFSU2_TR(0x76a675);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a679:{NFSU2_TR(0x76a679);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76a67b:{NFSU2_TR(0x76a67b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4300ull))));
}
B76a680:{NFSU2_TR(0x76a680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B76a683:{NFSU2_TR(0x76a683);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x30"::"a"(ea_):"memory");}
}
B76a686:{NFSU2_TR(0x76a686);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xbcffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76a68e:{NFSU2_TR(0x76a68e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B76a692:{NFSU2_TR(0x76a692);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x20"::"a"(ea_):"memory");}
}
B76a695:{NFSU2_TR(0x76a695);
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
B76a698:L76a698:{c.instructions+=4;NFSU2_TR(0x76a698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76a699:{NFSU2_TR(0x76a699);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76a69a:{NFSU2_TR(0x76a69a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B76a69b:{NFSU2_TR(0x76a69b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76a69c:L76a69c:{c.instructions+=8;NFSU2_TR(0x76a69c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76a69d:{NFSU2_TR(0x76a69d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B76a6a0:{NFSU2_TR(0x76a6a0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B76a6a4:{NFSU2_TR(0x76a6a4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B76a6a7:{NFSU2_TR(0x76a6a7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76a6a9:{NFSU2_TR(0x76a6a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a6ad:{NFSU2_TR(0x76a6ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x7fff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76a6b2:{NFSU2_TR(0x76a6b2);
if(r1(R+518)){{goto L76a6be;}}
}
B76a6b4:L76a6b4:{c.instructions+=1;NFSU2_TR(0x76a6b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76a6b9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76a496u);}goto L76a496;}
}
B76a6b9:L76a6b9:{c.instructions+=3;NFSU2_TR(0x76a6b9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76a6bc:{NFSU2_TR(0x76a6bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76a6bd:{NFSU2_TR(0x76a6bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76a6be:L76a6be:{c.instructions+=5;NFSU2_TR(0x76a6be);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a6c1:{NFSU2_TR(0x76a6c1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a6c5:{NFSU2_TR(0x76a6c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B76a6c8:{NFSU2_TR(0x76a6c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B76a6cc:{NFSU2_TR(0x76a6cc);
if(r1(R+518)){{goto L76a747;}}
}
B76a6ce:L76a6ce:{c.instructions+=14;NFSU2_TR(0x76a6ce);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76a6d0:{NFSU2_TR(0x76a6d0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B76a6d4:{NFSU2_TR(0x76a6d4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76a6d7:{NFSU2_TR(0x76a6d7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76a6d9:{NFSU2_TR(0x76a6d9);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x2ull))));
}
B76a6dc:{NFSU2_TR(0x76a6dc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B76a6e0:{NFSU2_TR(0x76a6e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a6e4:{NFSU2_TR(0x76a6e4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x33full))));
}
B76a6e9:{NFSU2_TR(0x76a6e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76a6ed:{NFSU2_TR(0x76a6ed);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B76a6f1:{NFSU2_TR(0x76a6f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a6f5:{NFSU2_TR(0x76a6f5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B76a6fa:{NFSU2_TR(0x76a6fa);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x7fbeull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fbeull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76a6ff:{NFSU2_TR(0x76a6ff);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76a719;}}
}
B76a701:L76a701:{c.instructions+=6;NFSU2_TR(0x76a701);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1ull))));
}
B76a704:{NFSU2_TR(0x76a704);
{u32 ea_=u32(u32(8497940u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B76a70a:{NFSU2_TR(0x76a70a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B76a70e:{NFSU2_TR(0x76a70e);
{u32 ea_=u32(u32(8497940u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B76a714:{NFSU2_TR(0x76a714);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B76a717:{NFSU2_TR(0x76a717);
{goto L76a739;}
}
B76a719:L76a719:{c.instructions+=8;NFSU2_TR(0x76a719);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B76a71d:{NFSU2_TR(0x76a71d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76a721:{NFSU2_TR(0x76a721);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x300ull))));
}
B76a726:{NFSU2_TR(0x76a726);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76a72a:{NFSU2_TR(0x76a72a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B76a72e:{NFSU2_TR(0x76a72e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B76a730:{NFSU2_TR(0x76a730);
{u32 ea_=u32(u32(8497940u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B76a736:{NFSU2_TR(0x76a736);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B76a739:L76a739:{c.instructions+=2;NFSU2_TR(0x76a739);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B76a73d:{NFSU2_TR(0x76a73d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76a742ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76a496u);}goto L76a496;}
}
B76a742:L76a742:{c.instructions+=3;NFSU2_TR(0x76a742);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76a745:{NFSU2_TR(0x76a745);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76a746:{NFSU2_TR(0x76a746);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76a747:L76a747:{c.instructions+=4;NFSU2_TR(0x76a747);
__asm__ volatile(".byte 0xd9,0xf8":::"memory");
}
B76a749:{NFSU2_TR(0x76a749);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76a74c:{NFSU2_TR(0x76a74c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76a74d:{NFSU2_TR(0x76a74d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76aa20:L76aa20:{c.instructions+=7;NFSU2_TR(0x76aa20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76aa21:{NFSU2_TR(0x76aa21);
__builtin_memmove((R+20),(R+16),4);
}
B76aa23:{NFSU2_TR(0x76aa23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B76aa26:{NFSU2_TR(0x76aa26);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B76aa29:{NFSU2_TR(0x76aa29);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76aa2c:{NFSU2_TR(0x76aa2c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B76aa31:{NFSU2_TR(0x76aa31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76aa36ull));
{goto L76aa3e;}
}
B76aa36:L76aa36:{c.instructions+=2;NFSU2_TR(0x76aa36);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76aa37:{NFSU2_TR(0x76aa37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76aa3e:L76aa3e:{c.instructions+=13;NFSU2_TR(0x76aa3e);
__builtin_memmove((R+4616),(R+4608),8);
}
B76aa42:{NFSU2_TR(0x76aa42);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d9160),16);
__builtin_memmove((R+4672),(U+0),8);
__builtin_memmove((R+4680),(U+8),8);
}
B76aa4a:{NFSU2_TR(0x76aa4a);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d9140),16);
__builtin_memmove((R+4992),(U+0),8);
__builtin_memmove((R+5000),(U+8),8);
}
B76aa52:{NFSU2_TR(0x76aa52);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d9170),16);
__builtin_memmove((R+4736),(U+0),8);
__builtin_memmove((R+4744),(U+8),8);
}
B76aa5a:{NFSU2_TR(0x76aa5a);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d9180),16);
__builtin_memmove((R+4800),(U+0),8);
__builtin_memmove((R+4808),(U+8),8);
}
B76aa62:{NFSU2_TR(0x76aa62);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4608),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4616),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B76aa67:{NFSU2_TR(0x76aa67);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B76aa6c:{NFSU2_TR(0x76aa6c);
w4(R+8,u32(0x408full));
}
B76aa71:{NFSU2_TR(0x76aa71);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B76aa73:{NFSU2_TR(0x76aa73);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3c90ull))));
}
B76aa78:{NFSU2_TR(0x76aa78);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B76aa7a:{NFSU2_TR(0x76aa7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x80000000ull))));
}
B76aa80:{NFSU2_TR(0x76aa80);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76acae;}}
}
B76aa86:L76aa86:{c.instructions+=37;NFSU2_TR(0x76aa86);
w8(R+4672,b64(f64(r8(R+4672))*f64(r8(R+4608))));
w8(R+4680,b64(f64(r8(R+4680))*f64(r8(R+4616))));
}
B76aa8a:{NFSU2_TR(0x76aa8a);
w8(R+4672,b64(f64(r8(R+4672))+f64(r8(R+4992))));
w8(R+4680,b64(f64(r8(R+4680))+f64(r8(R+5000))));
}
B76aa8e:{NFSU2_TR(0x76aa8e);
__builtin_memmove((R+5056),(R+4672),8);
__builtin_memmove((R+5064),(R+4680),8);
}
B76aa92:{NFSU2_TR(0x76aa92);
w8(R+4672,b64(f64(r8(R+4672))-f64(r8(R+4992))));
w8(R+4680,b64(f64(r8(R+4680))-f64(r8(R+5000))));
}
B76aa96:{NFSU2_TR(0x76aa96);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(R+4672))));
w8(R+4744,b64(f64(r8(R+4744))*f64(r8(R+4680))));
}
B76aa9a:{NFSU2_TR(0x76aa9a);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d9190),16);
__builtin_memmove((R+4864),(U+0),8);
__builtin_memmove((R+4872),(U+8),8);
}
B76aaa2:{NFSU2_TR(0x76aaa2);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(R+4672))));
w8(R+4808,b64(f64(r8(R+4808))*f64(r8(R+4680))));
}
B76aaa6:{NFSU2_TR(0x76aaa6);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d91a0),16);
__builtin_memmove((R+4928),(U+0),8);
__builtin_memmove((R+4936),(U+8),8);
}
B76aaae:{NFSU2_TR(0x76aaae);
w8(R+4608,b64(f64(r8(R+4608))-f64(r8(R+4736))));
w8(R+4616,b64(f64(r8(R+4616))-f64(r8(R+4744))));
}
B76aab2:{NFSU2_TR(0x76aab2);
wv<4>((R+0),eval<Op::SUBPIECE,4,16,4>(rv<16>((R+5056)),V(0x0ull)));
}
B76aab6:{NFSU2_TR(0x76aab6);
__builtin_memmove((R+4),(R+0),4);
}
B76aab8:{NFSU2_TR(0x76aab8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B76aabb:{NFSU2_TR(0x76aabb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B76aabe:{NFSU2_TR(0x76aabe);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B76aac1:{NFSU2_TR(0x76aac1);
__builtin_memmove((R+8),(R+0),4);
}
B76aac3:{NFSU2_TR(0x76aac3);
w8(R+4608,b64(f64(r8(R+4608))-f64(r8(R+4800))));
w8(R+4616,b64(f64(r8(R+4616))-f64(r8(R+4808))));
}
B76aac7:{NFSU2_TR(0x76aac7);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7d91b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),8);
__builtin_memmove((R+4744),(U+28),8);
}
B76aacf:{NFSU2_TR(0x76aacf);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4608))));
w8(R+4872,b64(f64(r8(R+4872))*f64(r8(R+4616))));
}
B76aad3:{NFSU2_TR(0x76aad3);
__builtin_memmove((R+4672),(R+4608),8);
__builtin_memmove((R+4680),(R+4616),8);
}
B76aad7:{NFSU2_TR(0x76aad7);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4608))));
w8(R+4616,b64(f64(r8(R+4616))*f64(r8(R+4616))));
}
B76aadb:{NFSU2_TR(0x76aadb);
w8(R+4928,b64(f64(r8(R+4928))+f64(r8(R+4864))));
w8(R+4936,b64(f64(r8(R+4936))+f64(r8(R+4872))));
}
B76aadf:{NFSU2_TR(0x76aadf);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4608))));
}
B76aae3:{NFSU2_TR(0x76aae3);
w8(R+4672,b64(f64(r8(R+4672))+f64(r8(R+4736))));
}
B76aae7:{NFSU2_TR(0x76aae7);
__builtin_memmove((R+4736),(R+4744),8);
__builtin_memmove((R+4744),(R+4744),8);
}
B76aaeb:{NFSU2_TR(0x76aaeb);
__builtin_memmove((R+4992),gp(0x7d9120),16);
}
B76aaf3:{NFSU2_TR(0x76aaf3);
wv<16>((R+5056),eval<Op::INT_AND,16,16,16>(rv<16>((R+5056)),rv<16>((R+4992))));
}
B76aaf7:{NFSU2_TR(0x76aaf7);
__builtin_memmove((R+4992),gp(0x7d9130),16);
}
B76aaff:{NFSU2_TR(0x76aaff);
w8(R+5056,u64(u64(r8(R+5056))+u64(r8(R+4992))));
w8(R+5064,u64(u64(r8(R+5064))+u64(r8(R+5000))));
}
B76ab03:{NFSU2_TR(0x76ab03);
w8(R+5056,shl<u64>(r8(R+5056),u64(u32(0x2eull))));
w8(R+5064,shl<u64>(r8(R+5064),u64(u32(0x2eull))));
}
B76ab08:{NFSU2_TR(0x76ab08);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4928))));
w8(R+4616,b64(f64(r8(R+4616))*f64(r8(R+4936))));
}
B76ab0c:{NFSU2_TR(0x76ab0c);
w8(R+4672,b64(f64(r8(R+4672))+f64(r8(R+4608))));
}
B76ab10:{NFSU2_TR(0x76ab10);
wv<16>((R+4736),eval<Op::INT_OR,16,16,16>(rv<16>((R+4736)),rv<16>((R+5056))));
}
B76ab14:{NFSU2_TR(0x76ab14);
__builtin_memmove((R+4608),(R+4616),8);
__builtin_memmove((R+4616),(R+4616),8);
}
B76ab18:{NFSU2_TR(0x76ab18);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4672))));
}
B76ab1c:{NFSU2_TR(0x76ab1c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x37eull))));
}
B76ab22:{NFSU2_TR(0x76ab22);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x77cull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x77cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ab28:{NFSU2_TR(0x76ab28);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76ab43;}}
}
B76ab2a:L76ab2a:{c.instructions+=7;NFSU2_TR(0x76ab2a);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4736))));
}
B76ab2e:{NFSU2_TR(0x76ab2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B76ab31:{NFSU2_TR(0x76ab31);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4736))));
}
B76ab35:{NFSU2_TR(0x76ab35);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B76ab3b:{NFSU2_TR(0x76ab3b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76ab3f:{NFSU2_TR(0x76ab3f);
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
B76ab42:{NFSU2_TR(0x76ab42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ab43:L76ab43:{c.instructions+=35;NFSU2_TR(0x76ab43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x12ull))));
}
B76ab46:{NFSU2_TR(0x76ab46);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B76ab4b:{NFSU2_TR(0x76ab4b);
u8 U[6];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B76ab50:{NFSU2_TR(0x76ab50);
w2(R+8,u16(u32(r2(R+8))|u32(u16(0x300ull))));
}
B76ab55:{NFSU2_TR(0x76ab55);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+16)),r2(U+0));
}
B76ab59:{NFSU2_TR(0x76ab59);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B76ab5c:{NFSU2_TR(0x76ab5c);
__builtin_memmove((R+8),(R+0),4);
}
B76ab5e:{NFSU2_TR(0x76ab5e);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B76ab60:{NFSU2_TR(0x76ab60);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B76ab62:{NFSU2_TR(0x76ab62);
__builtin_memmove((R+4992),gp(0x7d9110),16);
}
B76ab6a:{NFSU2_TR(0x76ab6a);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4992))));
wv<16>((R+4992),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4736))));
}
B76ab6e:{NFSU2_TR(0x76ab6e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ffull))));
}
B76ab73:{NFSU2_TR(0x76ab73);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,4>(rv<4>((R+0))));
}
B76ab77:{NFSU2_TR(0x76ab77);
w8(R+4800,shl<u64>(r8(R+4800),u64(u32(0x34ull))));
w8(R+4808,shl<u64>(r8(R+4808),u64(u32(0x34ull))));
}
B76ab7c:{NFSU2_TR(0x76ab7c);
wv<16>((R+4992),eval<Op::INT_OR,16,16,16>(rv<16>((R+4992)),rv<16>((R+4800))));
}
B76ab80:{NFSU2_TR(0x76ab80);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ffull))));
}
B76ab86:{NFSU2_TR(0x76ab86);
wv<16>((R+4864),eval<Op::INT_ZEXT,16,4>(rv<4>((R+8))));
}
B76ab8a:{NFSU2_TR(0x76ab8a);
w8(R+4864,shl<u64>(r8(R+4864),u64(u32(0x34ull))));
w8(R+4872,shl<u64>(r8(R+4872),u64(u32(0x34ull))));
}
B76ab8f:{NFSU2_TR(0x76ab8f);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B76ab94:{NFSU2_TR(0x76ab94);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76ab97:{NFSU2_TR(0x76ab97);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4992),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B76ab9d:{NFSU2_TR(0x76ab9d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76aba1:{NFSU2_TR(0x76aba1);
__asm__ volatile(".byte 0xdc,0xc9":::"memory");
}
B76aba3:{NFSU2_TR(0x76aba3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B76aba5:{NFSU2_TR(0x76aba5);
u8 U[8];
__builtin_memmove((U+0),(R+4864),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B76abaa:{NFSU2_TR(0x76abaa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76abad:{NFSU2_TR(0x76abad);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B76abaf:{NFSU2_TR(0x76abaf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76abb2:{NFSU2_TR(0x76abb2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B76abb7:{NFSU2_TR(0x76abb7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B76abbb:{NFSU2_TR(0x76abbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x12ull))));
}
B76abbe:{NFSU2_TR(0x76abbe);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4608),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4616),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+4,u32(r2(U+36)));
}
B76abc3:{NFSU2_TR(0x76abc3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ff0ull))));
}
B76abc9:{NFSU2_TR(0x76abc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x7ff0ull))));
}
B76abcf:{NFSU2_TR(0x76abcf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76abf8;}}
}
B76abd1:L76abd1:{c.instructions+=2;NFSU2_TR(0x76abd1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76abd4:{NFSU2_TR(0x76abd4);
if(r1(R+518)){{goto L76abff;}}
}
B76abd6:L76abd6:{c.instructions+=1;NFSU2_TR(0x76abd6);
{goto L76ac32;}
}
B76abf8:L76abf8:{c.instructions+=2;NFSU2_TR(0x76abf8);
w4(R+8,u32(0xeull));
}
B76abfd:{NFSU2_TR(0x76abfd);
{goto L76ac04;}
}
B76abff:L76abff:{c.instructions+=1;NFSU2_TR(0x76abff);
w4(R+8,u32(0xfull));
}
B76ac04:L76ac04:{c.instructions+=10;NFSU2_TR(0x76ac04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B76ac07:{NFSU2_TR(0x76ac07);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B76ac0d:{NFSU2_TR(0x76ac0d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ac11:{NFSU2_TR(0x76ac11);
__builtin_memmove((R+8),(R+16),4);
}
B76ac13:{NFSU2_TR(0x76ac13);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B76ac16:{NFSU2_TR(0x76ac16);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ac1a:{NFSU2_TR(0x76ac1a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B76ac1d:{NFSU2_TR(0x76ac1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ac21:{NFSU2_TR(0x76ac21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B76ac24:{NFSU2_TR(0x76ac24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ac29ull));
TAIL_STATIC(0x7694d0u,769);
}
B76ac29:L76ac29:{c.instructions+=2;NFSU2_TR(0x76ac29);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4608),(U+4),8);
}
B76ac2f:{NFSU2_TR(0x76ac2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B76ac32:L76ac32:{c.instructions+=5;NFSU2_TR(0x76ac32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B76ac35:{NFSU2_TR(0x76ac35);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B76ac3b:{NFSU2_TR(0x76ac3b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76ac3f:{NFSU2_TR(0x76ac3f);
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
B76ac42:{NFSU2_TR(0x76ac42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ac43:L76ac43:{c.instructions+=2;NFSU2_TR(0x76ac43);
w1(R+512,u8((r4(R+0))<(u32(0x7ff00000ull))));
}
B76ac48:{NFSU2_TR(0x76ac48);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76ac7b;}}
}
B76ac4a:L76ac4a:{c.instructions+=3;NFSU2_TR(0x76ac4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ac4e:{NFSU2_TR(0x76ac4e);
w1(R+512,u8((r4(R+0))<(u32(0x80000000ull))));
}
B76ac53:{NFSU2_TR(0x76ac53);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L76ac68;}}
}
B76ac55:L76ac55:{c.instructions+=4;NFSU2_TR(0x76ac55);
__builtin_memmove((R+4608),gp(0x7d95e0),8);
}
B76ac5d:{NFSU2_TR(0x76ac5d);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4608))));
}
B76ac61:{NFSU2_TR(0x76ac61);
w4(R+8,u32(0xeull));
}
B76ac66:{NFSU2_TR(0x76ac66);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ac04u);}goto L76ac04;}
}
B76ac68:L76ac68:{c.instructions+=4;NFSU2_TR(0x76ac68);
__builtin_memmove((R+4608),gp(0x7d95e8),8);
}
B76ac70:{NFSU2_TR(0x76ac70);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4608))));
}
B76ac74:{NFSU2_TR(0x76ac74);
w4(R+8,u32(0xfull));
}
B76ac79:{NFSU2_TR(0x76ac79);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ac04u);}goto L76ac04;}
}
B76ac7b:L76ac7b:{c.instructions+=3;NFSU2_TR(0x76ac7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B76ac7f:{NFSU2_TR(0x76ac7f);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x7ff00000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76ac84:{NFSU2_TR(0x76ac84);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76aca4;}}
}
B76ac86:L76ac86:{c.instructions+=2;NFSU2_TR(0x76ac86);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ac89:{NFSU2_TR(0x76ac89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76aca4;}}
}
B76ac8b:L76ac8b:{c.instructions+=3;NFSU2_TR(0x76ac8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ac8f:{NFSU2_TR(0x76ac8f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7ff00000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7ff00000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7ff00000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76ac94:{NFSU2_TR(0x76ac94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ac9d;}}
}
B76ac96:L76ac96:{c.instructions+=2;NFSU2_TR(0x76ac96);
{u32 ea_=u32(u32(8230352u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76ac9c:{NFSU2_TR(0x76ac9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ac9d:L76ac9d:{c.instructions+=2;NFSU2_TR(0x76ac9d);
{u32 ea_=u32(u32(8230360u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76aca3:{NFSU2_TR(0x76aca3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76aca4:L76aca4:{c.instructions+=2;NFSU2_TR(0x76aca4);
w4(R+8,u32(0x3eaull));
}
B76aca9:{NFSU2_TR(0x76aca9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ac04u);}goto L76ac04;}
}
B76acae:L76acae:{c.instructions+=4;NFSU2_TR(0x76acae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76acb2:{NFSU2_TR(0x76acb2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B76acb7:{NFSU2_TR(0x76acb7);
w1(R+512,u8((r4(R+0))<(u32(0x40900000ull))));
}
B76acbc:{NFSU2_TR(0x76acbc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76ac43u);}goto L76ac43;}}
}
B76acbe:L76acbe:{c.instructions+=7;NFSU2_TR(0x76acbe);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4608),(U+4),8);
}
B76acc4:{NFSU2_TR(0x76acc4);
w8(R+4608,b64(f64(r8(R+4608))+f64(m8(0x7d95b0))));
}
B76accc:{NFSU2_TR(0x76accc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B76accf:{NFSU2_TR(0x76accf);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B76acd5:{NFSU2_TR(0x76acd5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76acd9:{NFSU2_TR(0x76acd9);
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
B76acdc:{NFSU2_TR(0x76acdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ace0:L76ace0:{c.instructions+=3;NFSU2_TR(0x76ace0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ace2:{NFSU2_TR(0x76ace2);
u8 U[4];
w4(U+0,u32(0x7d9600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ace7:{NFSU2_TR(0x76ace7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76acecull));
TAIL_STATIC(0x760da0u,760);
}
B76acec:L76acec:{c.instructions+=5;NFSU2_TR(0x76acec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B76acef:{NFSU2_TR(0x76acef);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B76acf3:{NFSU2_TR(0x76acf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76acf6:{NFSU2_TR(0x76acf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76acf8:{NFSU2_TR(0x76acf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76acfb;}}
}
B76acfa:L76acfa:{c.instructions+=1;NFSU2_TR(0x76acfa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76acfb:L76acfb:{c.instructions+=4;NFSU2_TR(0x76acfb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B76acfd:{NFSU2_TR(0x76acfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ad00:{NFSU2_TR(0x76ad00);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0xffffffe0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffe0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ad03:{NFSU2_TR(0x76ad03);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76ad6a;}}
}
B76ad05:L76ad05:{c.instructions+=2;NFSU2_TR(0x76ad05);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba4a8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ad0c:{NFSU2_TR(0x76ad0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ad55;}}
}
B76ad0e:L76ad0e:{c.instructions+=6;NFSU2_TR(0x76ad0e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfull))));
}
B76ad11:{NFSU2_TR(0x76ad11);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B76ad14:{NFSU2_TR(0x76ad14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ad17:{NFSU2_TR(0x76ad17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B76ad1a:{NFSU2_TR(0x76ad1a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba494),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ad20:{NFSU2_TR(0x76ad20);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L76ad55;}}
}
B76ad22:L76ad22:{c.instructions+=2;NFSU2_TR(0x76ad22);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ad24:{NFSU2_TR(0x76ad24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ad29ull));
TAIL_STATIC(0x7631f1u,763);
}
B76ad29:L76ad29:{c.instructions+=4;NFSU2_TR(0x76ad29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ad2a:{NFSU2_TR(0x76ad2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B76ad2d:{NFSU2_TR(0x76ad2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ad2e:{NFSU2_TR(0x76ad2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ad33ull));
TAIL_STATIC(0x763a49u,763);
}
B76ad33:L76ad33:{c.instructions+=4;NFSU2_TR(0x76ad33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ad34:{NFSU2_TR(0x76ad34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76ad37:{NFSU2_TR(0x76ad37);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B76ad3b:{NFSU2_TR(0x76ad3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ad40ull));
{goto L76ad8a;}
}
B76ad40:L76ad40:{c.instructions+=3;NFSU2_TR(0x76ad40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B76ad43:{NFSU2_TR(0x76ad43);
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
B76ad45:{NFSU2_TR(0x76ad45);
if(r1(R+518)){{goto L76ad59;}}
}
B76ad47:L76ad47:{c.instructions+=4;NFSU2_TR(0x76ad47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76ad4a:{NFSU2_TR(0x76ad4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ad4c:{NFSU2_TR(0x76ad4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ad4d:{NFSU2_TR(0x76ad4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ad52ull));
TAIL_STATIC(0x768890u,768);
}
B76ad52:L76ad52:{c.instructions+=1;NFSU2_TR(0x76ad52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B76ad55:L76ad55:{c.instructions+=2;NFSU2_TR(0x76ad55);
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
B76ad57:{NFSU2_TR(0x76ad57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ad93;}}
}
B76ad59:L76ad59:{c.instructions+=4;NFSU2_TR(0x76ad59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ad5a:{NFSU2_TR(0x76ad5a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ad5c:{NFSU2_TR(0x76ad5c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ad62:{NFSU2_TR(0x76ad62);
u8 U[4];
__builtin_memmove((U+0),gp(0x78325c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ad68ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76ad68:L76ad68:{c.instructions+=1;NFSU2_TR(0x76ad68);
__builtin_memmove((R+28),(R+0),4);
}
B76ad6a:L76ad6a:{c.instructions+=2;NFSU2_TR(0x76ad6a);
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
B76ad6c:{NFSU2_TR(0x76ad6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76ad93;}}
}
B76ad6e:L76ad6e:{c.instructions+=2;NFSU2_TR(0x76ad6e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8714),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76ad74:{NFSU2_TR(0x76ad74);
if(r1(R+518)){{goto L76ad93;}}
}
B76ad76:L76ad76:{c.instructions+=2;NFSU2_TR(0x76ad76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ad77:{NFSU2_TR(0x76ad77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ad7cull));
TAIL_STATIC(0x763d45u,763);
}
B76ad7c:L76ad7c:{c.instructions+=3;NFSU2_TR(0x76ad7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ad7d:{NFSU2_TR(0x76ad7d);
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
B76ad7f:{NFSU2_TR(0x76ad7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76acfbu);}goto L76acfb;}}
}
B76ad85:L76ad85:{c.instructions+=1;NFSU2_TR(0x76ad85);
{goto L76ad95;}
}
B76ad8a:L76ad8a:{c.instructions+=2;NFSU2_TR(0x76ad8a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ad8c:{NFSU2_TR(0x76ad8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ad91ull));
TAIL_STATIC(0x76315du,763);
}
B76ad91:L76ad91:{c.instructions+=2;NFSU2_TR(0x76ad91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ad92:{NFSU2_TR(0x76ad92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ad93:L76ad93:{c.instructions+=1;NFSU2_TR(0x76ad93);
__builtin_memmove((R+0),(R+28),4);
}
B76ad95:L76ad95:{c.instructions+=1;NFSU2_TR(0x76ad95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ad9aull));
TAIL_STATIC(0x760ddbu,760);
}
B76ad9a:L76ad9a:{c.instructions+=1;NFSU2_TR(0x76ad9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ad9b:L76ad9b:{c.instructions+=3;NFSU2_TR(0x76ad9b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ad9d:{NFSU2_TR(0x76ad9d);
u8 U[4];
w4(U+0,u32(0x7d9610ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ada2:{NFSU2_TR(0x76ada2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ada7ull));
TAIL_STATIC(0x760da0u,760);
}
B76ada7:L76ada7:{c.instructions+=4;NFSU2_TR(0x76ada7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76ada9:{NFSU2_TR(0x76ada9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76adac:{NFSU2_TR(0x76adac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76adae:{NFSU2_TR(0x76adae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76adb3ull));
TAIL_STATIC(0x7631f1u,763);
}
B76adb3:L76adb3:{c.instructions+=4;NFSU2_TR(0x76adb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76adb4:{NFSU2_TR(0x76adb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76adb7:{NFSU2_TR(0x76adb7);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76adb9:{NFSU2_TR(0x76adb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76adba:L76adba:{c.instructions+=3;NFSU2_TR(0x76adba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76adbd:{NFSU2_TR(0x76adbd);
u8 U[8];
__builtin_memmove((U+0),gp(0x8bb5e0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76adc3:{NFSU2_TR(0x76adc3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76ae1b;}}
}
B76adc5:L76adc5:{c.instructions+=6;NFSU2_TR(0x76adc5);
__builtin_memmove((R+24),(R+28),4);
}
B76adc7:{NFSU2_TR(0x76adc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B76adca:{NFSU2_TR(0x76adca);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B76adcf:{NFSU2_TR(0x76adcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B76add2:{NFSU2_TR(0x76add2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76add4:{NFSU2_TR(0x76add4);
if(r1(R+518)){{goto L76ae18;}}
}
B76add6:L76add6:{c.instructions+=2;NFSU2_TR(0x76add6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x83ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76adda:{NFSU2_TR(0x76adda);
if(r1(R+518)){{goto L76adeb;}}
}
B76addc:L76addc:{c.instructions+=2;NFSU2_TR(0x76addc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76addd:{NFSU2_TR(0x76addd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ade2ull));
TAIL_STATIC(0x75d359u,75d);
}
B76ade2:L76ade2:{c.instructions+=3;NFSU2_TR(0x76ade2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ade3:{NFSU2_TR(0x76ade3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76ade6:{NFSU2_TR(0x76ade6);
if(r1(R+518)){{goto L76adeb;}}
}
B76ade8:L76ade8:{c.instructions+=1;NFSU2_TR(0x76ade8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B76adeb:L76adeb:{c.instructions+=2;NFSU2_TR(0x76adeb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B76adee:{NFSU2_TR(0x76adee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L76ae18;}}
}
B76adf0:L76adf0:{c.instructions+=5;NFSU2_TR(0x76adf0);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B76adf5:{NFSU2_TR(0x76adf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B76adf8:{NFSU2_TR(0x76adf8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76adfb:{NFSU2_TR(0x76adfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76adfc:{NFSU2_TR(0x76adfc);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae02ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76ae02:L76ae02:{c.instructions+=3;NFSU2_TR(0x76ae02);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B76ae07:{NFSU2_TR(0x76ae07);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B76ae0a:{NFSU2_TR(0x76ae0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae0full));
TAIL_STATIC(0x75c6dau,75c);
}
B76ae0f:L76ae0f:{c.instructions+=3;NFSU2_TR(0x76ae0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ae10:{NFSU2_TR(0x76ae10);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B76ae15:{NFSU2_TR(0x76ae15);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B76ae18:L76ae18:{c.instructions+=2;NFSU2_TR(0x76ae18);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B76ae19:{NFSU2_TR(0x76ae19);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76adbau);}goto L76adba;}
}
B76ae1b:L76ae1b:{c.instructions+=2;NFSU2_TR(0x76ae1b);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B76ae1f:{NFSU2_TR(0x76ae1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae24ull));
{goto L76ae2d;}
}
B76ae24:L76ae24:{c.instructions+=2;NFSU2_TR(0x76ae24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76ae27:{NFSU2_TR(0x76ae27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae2cull));
TAIL_STATIC(0x760ddbu,760);
}
B76ae2c:L76ae2c:{c.instructions+=1;NFSU2_TR(0x76ae2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ae2d:L76ae2d:{c.instructions+=2;NFSU2_TR(0x76ae2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae2f:{NFSU2_TR(0x76ae2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae34ull));
TAIL_STATIC(0x76315du,763);
}
B76ae34:L76ae34:{c.instructions+=2;NFSU2_TR(0x76ae34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ae35:{NFSU2_TR(0x76ae35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76ae36:L76ae36:{c.instructions+=2;NFSU2_TR(0x76ae36);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae38:{NFSU2_TR(0x76ae38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae3dull));
TAIL_STATIC(0x76147au,761);
}
B76ae3d:L76ae3d:{c.instructions+=2;NFSU2_TR(0x76ae3d);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae3f:{NFSU2_TR(0x76ae3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae44ull));
TAIL_STATIC(0x766d06u,766);
}
B76ae44:L76ae44:{c.instructions+=4;NFSU2_TR(0x76ae44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ae45:{NFSU2_TR(0x76ae45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76ae46:{NFSU2_TR(0x76ae46);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae48:{NFSU2_TR(0x76ae48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae4dull));
TAIL_STATIC(0x75d5a4u,75d);
}
B76ae4e:L76ae4e:{c.instructions+=9;NFSU2_TR(0x76ae4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae4f:{NFSU2_TR(0x76ae4f);
__builtin_memmove((R+20),(R+16),4);
}
B76ae51:{NFSU2_TR(0x76ae51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B76ae54:{NFSU2_TR(0x76ae54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae55:{NFSU2_TR(0x76ae55);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B76ae57:{NFSU2_TR(0x76ae57);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8874),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76ae5d:{NFSU2_TR(0x76ae5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae5e:{NFSU2_TR(0x76ae5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae5f:{NFSU2_TR(0x76ae5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76aece;}}
}
B76ae61:L76ae61:{c.instructions+=2;NFSU2_TR(0x76ae61);
u8 U[4];
w4(U+0,u32(0x7d9680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae66:{NFSU2_TR(0x76ae66);
u8 U[4];
__builtin_memmove((U+0),gp(0x783198),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae6cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76ae6c:L76ae6c:{c.instructions+=3;NFSU2_TR(0x76ae6c);
__builtin_memmove((R+28),(R+0),4);
}
B76ae6e:{NFSU2_TR(0x76ae6e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B76ae70:{NFSU2_TR(0x76ae70);
if(r1(R+518)){{goto L76af09;}}
}
B76ae76:L76ae76:{c.instructions+=4;NFSU2_TR(0x76ae76);
__builtin_memmove((R+24),gp(0x783194),4);
}
B76ae7c:{NFSU2_TR(0x76ae7c);
u8 U[4];
w4(U+0,u32(0x7d9674ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae81:{NFSU2_TR(0x76ae81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae82:{NFSU2_TR(0x76ae82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae84ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76ae84:L76ae84:{c.instructions+=3;NFSU2_TR(0x76ae84);
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
B76ae86:{NFSU2_TR(0x76ae86);
__builtin_memmove(gp(0x8b8874),(R+0),4);
}
B76ae8b:{NFSU2_TR(0x76ae8b);
if(r1(R+518)){{goto L76af09;}}
}
B76ae8d:L76ae8d:{c.instructions+=3;NFSU2_TR(0x76ae8d);
u8 U[4];
w4(U+0,u32(0x7d9664ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae92:{NFSU2_TR(0x76ae92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae93:{NFSU2_TR(0x76ae93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76ae95ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76ae95:L76ae95:{c.instructions+=4;NFSU2_TR(0x76ae95);
u8 U[4];
w4(U+0,u32(0x7d9650ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae9a:{NFSU2_TR(0x76ae9a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76ae9b:{NFSU2_TR(0x76ae9b);
__builtin_memmove(gp(0x8b8878),(R+0),4);
}
B76aea0:{NFSU2_TR(0x76aea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76aea2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76aea2:L76aea2:{c.instructions+=3;NFSU2_TR(0x76aea2);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8430),4);
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
B76aea9:{NFSU2_TR(0x76aea9);
__builtin_memmove(gp(0x8b887c),(R+0),4);
}
B76aeae:{NFSU2_TR(0x76aeae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76aece;}}
}
B76aeb0:L76aeb0:{c.instructions+=3;NFSU2_TR(0x76aeb0);
u8 U[4];
w4(U+0,u32(0x7d9634ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76aeb5:{NFSU2_TR(0x76aeb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76aeb6:{NFSU2_TR(0x76aeb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76aeb8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76aeb8:L76aeb8:{c.instructions+=3;NFSU2_TR(0x76aeb8);
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
B76aeba:{NFSU2_TR(0x76aeba);
__builtin_memmove(gp(0x8b8884),(R+0),4);
}
B76aebf:{NFSU2_TR(0x76aebf);
if(r1(R+518)){{goto L76aece;}}
}
B76aec1:L76aec1:{c.instructions+=3;NFSU2_TR(0x76aec1);
u8 U[4];
w4(U+0,u32(0x7d961cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76aec6:{NFSU2_TR(0x76aec6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76aec7:{NFSU2_TR(0x76aec7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76aec9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76aec9:L76aec9:{c.instructions+=1;NFSU2_TR(0x76aec9);
__builtin_memmove(gp(0x8b8880),(R+0),4);
}
B76aece:L76aece:{c.instructions+=3;NFSU2_TR(0x76aece);
__builtin_memmove((R+0),gp(0x8b8880),4);
}
B76aed3:{NFSU2_TR(0x76aed3);
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
B76aed5:{NFSU2_TR(0x76aed5);
if(r1(R+518)){{goto L76af13;}}
}
B76aed7:L76aed7:{c.instructions+=1;NFSU2_TR(0x76aed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76aed9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76aed9:L76aed9:{c.instructions+=2;NFSU2_TR(0x76aed9);
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
B76aedb:{NFSU2_TR(0x76aedb);
if(r1(R+518)){{goto L76aefa;}}
}
B76aedd:L76aedd:{c.instructions+=8;NFSU2_TR(0x76aedd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B76aee0:{NFSU2_TR(0x76aee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76aee1:{NFSU2_TR(0x76aee1);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76aee3:{NFSU2_TR(0x76aee3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76aee6:{NFSU2_TR(0x76aee6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76aee7:{NFSU2_TR(0x76aee7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76aee9:{NFSU2_TR(0x76aee9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76aeea:{NFSU2_TR(0x76aeea);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8884),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76aef0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76aef0:L76aef0:{c.instructions+=2;NFSU2_TR(0x76aef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76aef2:{NFSU2_TR(0x76aef2);
if(r1(R+518)){{goto L76aefa;}}
}
B76aef4:L76aef4:{c.instructions+=2;NFSU2_TR(0x76aef4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B76aef8:{NFSU2_TR(0x76aef8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76af13;}}
}
B76aefa:L76aefa:{c.instructions+=2;NFSU2_TR(0x76aefa);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b843c),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B76af01:{NFSU2_TR(0x76af01);
if(r1(R+512)){{goto L76af0d;}}
}
B76af03:L76af03:{c.instructions+=2;NFSU2_TR(0x76af03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x20ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B76af07:{NFSU2_TR(0x76af07);
{goto L76af32;}
}
B76af09:L76af09:{c.instructions+=2;NFSU2_TR(0x76af09);
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
B76af0b:{NFSU2_TR(0x76af0b);
{goto L76af42;}
}
B76af0d:L76af0d:{c.instructions+=2;NFSU2_TR(0x76af0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x12ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x4ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B76af11:{NFSU2_TR(0x76af11);
{goto L76af32;}
}
B76af13:L76af13:{c.instructions+=3;NFSU2_TR(0x76af13);
__builtin_memmove((R+0),gp(0x8b8878),4);
}
B76af18:{NFSU2_TR(0x76af18);
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
B76af1a:{NFSU2_TR(0x76af1a);
if(r1(R+518)){{goto L76af32;}}
}
B76af1c:L76af1c:{c.instructions+=1;NFSU2_TR(0x76af1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76af1eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76af1e:L76af1e:{c.instructions+=3;NFSU2_TR(0x76af1e);
__builtin_memmove((R+12),(R+0),4);
}
B76af20:{NFSU2_TR(0x76af20);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76af22:{NFSU2_TR(0x76af22);
if(r1(R+518)){{goto L76af32;}}
}
B76af24:L76af24:{c.instructions+=3;NFSU2_TR(0x76af24);
__builtin_memmove((R+0),gp(0x8b887c),4);
}
B76af29:{NFSU2_TR(0x76af29);
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
B76af2b:{NFSU2_TR(0x76af2b);
if(r1(R+518)){{goto L76af32;}}
}
B76af2d:L76af2d:{c.instructions+=2;NFSU2_TR(0x76af2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76af2e:{NFSU2_TR(0x76af2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76af30ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76af30:L76af30:{c.instructions+=1;NFSU2_TR(0x76af30);
__builtin_memmove((R+12),(R+0),4);
}
B76af32:L76af32:{c.instructions+=5;NFSU2_TR(0x76af32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76af35:{NFSU2_TR(0x76af35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76af38:{NFSU2_TR(0x76af38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76af3b:{NFSU2_TR(0x76af3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76af3c:{NFSU2_TR(0x76af3c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8874),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76af42ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B76af42:L76af42:{c.instructions+=5;NFSU2_TR(0x76af42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B76af43:{NFSU2_TR(0x76af43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76af44:{NFSU2_TR(0x76af44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B76af45:{NFSU2_TR(0x76af45);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B76af46:{NFSU2_TR(0x76af46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76af47:L76af47:{c.instructions+=2;NFSU2_TR(0x76af47);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76af4c:{NFSU2_TR(0x76af4c);
if(r1(R+518)){{goto L76af54;}}
}
B76af4e:L76af4e:{c.instructions+=3;NFSU2_TR(0x76af4e);
u8 U[1];
w1(U+0,u8(0x2dull));
s1(u32(r4(R+4)),r1(U+0));
}
B76af51:{NFSU2_TR(0x76af51);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76af52:{NFSU2_TR(0x76af52);
w4(R+0,u32(0-u32(r4(R+0))));
}
B76af54:L76af54:{c.instructions+=2;NFSU2_TR(0x76af54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76af55:{NFSU2_TR(0x76af55);
__builtin_memmove((R+24),(R+4),4);
}
B76af57:L76af57:{c.instructions+=4;NFSU2_TR(0x76af57);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B76af59:{NFSU2_TR(0x76af59);
u8 U[64];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76af59);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x76af59);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B76af5d:{NFSU2_TR(0x76af5d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x9ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76af60:{NFSU2_TR(0x76af60);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L76af67;}}
}
B76af62:L76af62:{c.instructions+=2;NFSU2_TR(0x76af62);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x57ull))));
}
B76af65:{NFSU2_TR(0x76af65);
{goto L76af6a;}
}
B76af67:L76af67:{c.instructions+=1;NFSU2_TR(0x76af67);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x30ull))));
}
B76af6a:L76af6a:{c.instructions+=4;NFSU2_TR(0x76af6a);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B76af6c:{NFSU2_TR(0x76af6c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B76af6d:{NFSU2_TR(0x76af6d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76af6f:{NFSU2_TR(0x76af6f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76af57u);}goto L76af57;}}
}
B76af71:L76af71:{c.instructions+=2;NFSU2_TR(0x76af71);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+4)),r1(U+0));
}
B76af74:{NFSU2_TR(0x76af74);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B76af75:L76af75:{c.instructions+=8;NFSU2_TR(0x76af75);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B76af77:{NFSU2_TR(0x76af77);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B76af79:{NFSU2_TR(0x76af79);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B76af7b:{NFSU2_TR(0x76af7b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B76af7c:{NFSU2_TR(0x76af7c);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B76af7e:{NFSU2_TR(0x76af7e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B76af7f:{NFSU2_TR(0x76af7f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B76af81:{NFSU2_TR(0x76af81);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76af75u);}goto L76af75;}}
}
B76af83:L76af83:{c.instructions+=2;NFSU2_TR(0x76af83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B76af84:{NFSU2_TR(0x76af84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76af85:L76af85:{c.instructions+=5;NFSU2_TR(0x76af85);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76af86:{NFSU2_TR(0x76af86);
__builtin_memmove((R+20),(R+16),4);
}
B76af88:{NFSU2_TR(0x76af88);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76af8c:{NFSU2_TR(0x76af8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76af8f:{NFSU2_TR(0x76af8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76af9b;}}
}
B76af91:L76af91:{c.instructions+=2;NFSU2_TR(0x76af91);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B76af93:{NFSU2_TR(0x76af93);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L76af9b;}}
}
B76af95:L76af95:{c.instructions+=3;NFSU2_TR(0x76af95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76af97:{NFSU2_TR(0x76af97);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76af99:{NFSU2_TR(0x76af99);
{goto L76afa0;}
}
B76af9b:L76af9b:{c.instructions+=2;NFSU2_TR(0x76af9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76af9d:{NFSU2_TR(0x76af9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B76afa0:L76afa0:{c.instructions+=2;NFSU2_TR(0x76afa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76afa3:{NFSU2_TR(0x76afa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76afa8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76af47u);}goto L76af47;}
}
B76afa8:L76afa8:{c.instructions+=5;NFSU2_TR(0x76afa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76afab:{NFSU2_TR(0x76afab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76afac:{NFSU2_TR(0x76afac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B76afad:{NFSU2_TR(0x76afad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B76afae:{NFSU2_TR(0x76afae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x76a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
