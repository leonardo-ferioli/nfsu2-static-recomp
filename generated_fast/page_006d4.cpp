#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_6d5(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6d4,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6d4,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6d4(u8* __restrict R,Cpu& c);
u32 page_6d4(Cpu& c){return body_6d4(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6d4(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6d4460:goto L6d4460;
case 0x6d4463:c.instructions+=29;goto B6d4463;
case 0x6d446a:c.instructions+=28;goto B6d446a;
case 0x6d446c:c.instructions+=27;goto B6d446c;
case 0x6d446e:c.instructions+=26;goto B6d446e;
case 0x6d4471:c.instructions+=25;goto B6d4471;
case 0x6d4477:c.instructions+=24;goto B6d4477;
case 0x6d447a:c.instructions+=23;goto B6d447a;
case 0x6d447c:c.instructions+=22;goto B6d447c;
case 0x6d4483:c.instructions+=21;goto B6d4483;
case 0x6d4486:c.instructions+=20;goto B6d4486;
case 0x6d448a:c.instructions+=19;goto B6d448a;
case 0x6d4491:c.instructions+=18;goto B6d4491;
case 0x6d4495:c.instructions+=17;goto B6d4495;
case 0x6d449c:c.instructions+=16;goto B6d449c;
case 0x6d449f:c.instructions+=15;goto B6d449f;
case 0x6d44a3:c.instructions+=14;goto B6d44a3;
case 0x6d44a5:c.instructions+=13;goto B6d44a5;
case 0x6d44ac:c.instructions+=12;goto B6d44ac;
case 0x6d44af:c.instructions+=11;goto B6d44af;
case 0x6d44b6:c.instructions+=10;goto B6d44b6;
case 0x6d44ba:c.instructions+=9;goto B6d44ba;
case 0x6d44c1:c.instructions+=8;goto B6d44c1;
case 0x6d44c5:c.instructions+=7;goto B6d44c5;
case 0x6d44c8:c.instructions+=6;goto B6d44c8;
case 0x6d44cb:c.instructions+=5;goto B6d44cb;
case 0x6d44cd:c.instructions+=4;goto B6d44cd;
case 0x6d44d1:c.instructions+=3;goto B6d44d1;
case 0x6d44d7:c.instructions+=2;goto B6d44d7;
case 0x6d44da:c.instructions+=1;goto B6d44da;
case 0x6d44dc:goto L6d44dc;
case 0x6d44e0:goto L6d44e0;
case 0x6d44e3:c.instructions+=29;goto B6d44e3;
case 0x6d44e6:c.instructions+=28;goto B6d44e6;
case 0x6d44e9:c.instructions+=27;goto B6d44e9;
case 0x6d44ed:c.instructions+=26;goto B6d44ed;
case 0x6d44ef:c.instructions+=25;goto B6d44ef;
case 0x6d44f6:c.instructions+=24;goto B6d44f6;
case 0x6d44f8:c.instructions+=23;goto B6d44f8;
case 0x6d44fc:c.instructions+=22;goto B6d44fc;
case 0x6d44fe:c.instructions+=21;goto B6d44fe;
case 0x6d4502:c.instructions+=20;goto B6d4502;
case 0x6d4505:c.instructions+=19;goto B6d4505;
case 0x6d4509:c.instructions+=18;goto B6d4509;
case 0x6d450b:c.instructions+=17;goto B6d450b;
case 0x6d450f:c.instructions+=16;goto B6d450f;
case 0x6d4513:c.instructions+=15;goto B6d4513;
case 0x6d451a:c.instructions+=14;goto B6d451a;
case 0x6d451e:c.instructions+=13;goto B6d451e;
case 0x6d4522:c.instructions+=12;goto B6d4522;
case 0x6d4526:c.instructions+=11;goto B6d4526;
case 0x6d4529:c.instructions+=10;goto B6d4529;
case 0x6d452d:c.instructions+=9;goto B6d452d;
case 0x6d4530:c.instructions+=8;goto B6d4530;
case 0x6d4534:c.instructions+=7;goto B6d4534;
case 0x6d4538:c.instructions+=6;goto B6d4538;
case 0x6d453b:c.instructions+=5;goto B6d453b;
case 0x6d453e:c.instructions+=4;goto B6d453e;
case 0x6d4542:c.instructions+=3;goto B6d4542;
case 0x6d4548:c.instructions+=2;goto B6d4548;
case 0x6d454c:c.instructions+=1;goto B6d454c;
case 0x6d454e:goto L6d454e;
case 0x6d4551:c.instructions+=1;goto B6d4551;
case 0x6d4554:goto L6d4554;
case 0x6d4557:c.instructions+=3;goto B6d4557;
case 0x6d455a:c.instructions+=2;goto B6d455a;
case 0x6d455b:c.instructions+=1;goto B6d455b;
case 0x6d4560:goto L6d4560;
case 0x6d4563:c.instructions+=29;goto B6d4563;
case 0x6d456a:c.instructions+=28;goto B6d456a;
case 0x6d456c:c.instructions+=27;goto B6d456c;
case 0x6d456e:c.instructions+=26;goto B6d456e;
case 0x6d4571:c.instructions+=25;goto B6d4571;
case 0x6d4577:c.instructions+=24;goto B6d4577;
case 0x6d457a:c.instructions+=23;goto B6d457a;
case 0x6d457c:c.instructions+=22;goto B6d457c;
case 0x6d4583:c.instructions+=21;goto B6d4583;
case 0x6d4586:c.instructions+=20;goto B6d4586;
case 0x6d458a:c.instructions+=19;goto B6d458a;
case 0x6d4591:c.instructions+=18;goto B6d4591;
case 0x6d4595:c.instructions+=17;goto B6d4595;
case 0x6d459c:c.instructions+=16;goto B6d459c;
case 0x6d459f:c.instructions+=15;goto B6d459f;
case 0x6d45a3:c.instructions+=14;goto B6d45a3;
case 0x6d45a5:c.instructions+=13;goto B6d45a5;
case 0x6d45ac:c.instructions+=12;goto B6d45ac;
case 0x6d45af:c.instructions+=11;goto B6d45af;
case 0x6d45b6:c.instructions+=10;goto B6d45b6;
case 0x6d45ba:c.instructions+=9;goto B6d45ba;
case 0x6d45c1:c.instructions+=8;goto B6d45c1;
case 0x6d45c5:c.instructions+=7;goto B6d45c5;
case 0x6d45c8:c.instructions+=6;goto B6d45c8;
case 0x6d45cb:c.instructions+=5;goto B6d45cb;
case 0x6d45cd:c.instructions+=4;goto B6d45cd;
case 0x6d45d1:c.instructions+=3;goto B6d45d1;
case 0x6d45d7:c.instructions+=2;goto B6d45d7;
case 0x6d45da:c.instructions+=1;goto B6d45da;
case 0x6d45dc:goto L6d45dc;
case 0x6d45e0:goto L6d45e0;
case 0x6d45e3:c.instructions+=29;goto B6d45e3;
case 0x6d45e6:c.instructions+=28;goto B6d45e6;
case 0x6d45e9:c.instructions+=27;goto B6d45e9;
case 0x6d45ed:c.instructions+=26;goto B6d45ed;
case 0x6d45ef:c.instructions+=25;goto B6d45ef;
case 0x6d45f6:c.instructions+=24;goto B6d45f6;
case 0x6d45f8:c.instructions+=23;goto B6d45f8;
case 0x6d45fc:c.instructions+=22;goto B6d45fc;
case 0x6d45fe:c.instructions+=21;goto B6d45fe;
case 0x6d4602:c.instructions+=20;goto B6d4602;
case 0x6d4605:c.instructions+=19;goto B6d4605;
case 0x6d4609:c.instructions+=18;goto B6d4609;
case 0x6d460b:c.instructions+=17;goto B6d460b;
case 0x6d460f:c.instructions+=16;goto B6d460f;
case 0x6d4613:c.instructions+=15;goto B6d4613;
case 0x6d461a:c.instructions+=14;goto B6d461a;
case 0x6d461e:c.instructions+=13;goto B6d461e;
case 0x6d4622:c.instructions+=12;goto B6d4622;
case 0x6d4626:c.instructions+=11;goto B6d4626;
case 0x6d4629:c.instructions+=10;goto B6d4629;
case 0x6d462d:c.instructions+=9;goto B6d462d;
case 0x6d4630:c.instructions+=8;goto B6d4630;
case 0x6d4634:c.instructions+=7;goto B6d4634;
case 0x6d4638:c.instructions+=6;goto B6d4638;
case 0x6d463b:c.instructions+=5;goto B6d463b;
case 0x6d463e:c.instructions+=4;goto B6d463e;
case 0x6d4642:c.instructions+=3;goto B6d4642;
case 0x6d4648:c.instructions+=2;goto B6d4648;
case 0x6d464c:c.instructions+=1;goto B6d464c;
case 0x6d464e:goto L6d464e;
case 0x6d4651:c.instructions+=1;goto B6d4651;
case 0x6d4654:goto L6d4654;
case 0x6d4657:c.instructions+=3;goto B6d4657;
case 0x6d465a:c.instructions+=2;goto B6d465a;
case 0x6d465d:c.instructions+=1;goto B6d465d;
case 0x6d4918:goto L6d4918;
case 0x6d491a:c.instructions+=1;goto B6d491a;
case 0x6d491b:goto L6d491b;
case 0x6d491d:c.instructions+=5;goto B6d491d;
case 0x6d491e:c.instructions+=4;goto B6d491e;
case 0x6d4920:c.instructions+=3;goto B6d4920;
case 0x6d4923:c.instructions+=2;goto B6d4923;
case 0x6d4926:c.instructions+=1;goto B6d4926;
case 0x6d4928:goto L6d4928;
case 0x6d492a:c.instructions+=1;goto B6d492a;
case 0x6d492b:goto L6d492b;
case 0x6d492e:c.instructions+=18;goto B6d492e;
case 0x6d4932:c.instructions+=17;goto B6d4932;
case 0x6d4936:c.instructions+=16;goto B6d4936;
case 0x6d4938:c.instructions+=15;goto B6d4938;
case 0x6d493b:c.instructions+=14;goto B6d493b;
case 0x6d493e:c.instructions+=13;goto B6d493e;
case 0x6d4941:c.instructions+=12;goto B6d4941;
case 0x6d4944:c.instructions+=11;goto B6d4944;
case 0x6d4946:c.instructions+=10;goto B6d4946;
case 0x6d494a:c.instructions+=9;goto B6d494a;
case 0x6d494d:c.instructions+=8;goto B6d494d;
case 0x6d4950:c.instructions+=7;goto B6d4950;
case 0x6d4953:c.instructions+=6;goto B6d4953;
case 0x6d4956:c.instructions+=5;goto B6d4956;
case 0x6d4959:c.instructions+=4;goto B6d4959;
case 0x6d495c:c.instructions+=3;goto B6d495c;
case 0x6d495f:c.instructions+=2;goto B6d495f;
case 0x6d4960:c.instructions+=1;goto B6d4960;
case 0x6d4963:goto L6d4963;
case 0x6d4965:c.instructions+=5;goto B6d4965;
case 0x6d4966:c.instructions+=4;goto B6d4966;
case 0x6d4968:c.instructions+=3;goto B6d4968;
case 0x6d496b:c.instructions+=2;goto B6d496b;
case 0x6d496d:c.instructions+=1;goto B6d496d;
case 0x6d496f:goto L6d496f;
case 0x6d4974:c.instructions+=1;goto B6d4974;
case 0x6d4976:goto L6d4976;
case 0x6d4978:c.instructions+=26;goto B6d4978;
case 0x6d497a:c.instructions+=25;goto B6d497a;
case 0x6d497d:c.instructions+=24;goto B6d497d;
case 0x6d4980:c.instructions+=23;goto B6d4980;
case 0x6d4983:c.instructions+=22;goto B6d4983;
case 0x6d4986:c.instructions+=21;goto B6d4986;
case 0x6d4989:c.instructions+=20;goto B6d4989;
case 0x6d498c:c.instructions+=19;goto B6d498c;
case 0x6d498f:c.instructions+=18;goto B6d498f;
case 0x6d4992:c.instructions+=17;goto B6d4992;
case 0x6d4995:c.instructions+=16;goto B6d4995;
case 0x6d4998:c.instructions+=15;goto B6d4998;
case 0x6d499b:c.instructions+=14;goto B6d499b;
case 0x6d499e:c.instructions+=13;goto B6d499e;
case 0x6d49a1:c.instructions+=12;goto B6d49a1;
case 0x6d49a4:c.instructions+=11;goto B6d49a4;
case 0x6d49a7:c.instructions+=10;goto B6d49a7;
case 0x6d49aa:c.instructions+=9;goto B6d49aa;
case 0x6d49ad:c.instructions+=8;goto B6d49ad;
case 0x6d49b0:c.instructions+=7;goto B6d49b0;
case 0x6d49b3:c.instructions+=6;goto B6d49b3;
case 0x6d49b6:c.instructions+=5;goto B6d49b6;
case 0x6d49b9:c.instructions+=4;goto B6d49b9;
case 0x6d49bc:c.instructions+=3;goto B6d49bc;
case 0x6d49bf:c.instructions+=2;goto B6d49bf;
case 0x6d49c2:c.instructions+=1;goto B6d49c2;
case 0x6d49c4:goto L6d49c4;
case 0x6d49c5:c.instructions+=1;goto B6d49c5;
case 0x6d49c8:goto L6d49c8;
case 0x6d49ca:c.instructions+=7;goto B6d49ca;
case 0x6d49cb:c.instructions+=6;goto B6d49cb;
case 0x6d49cd:c.instructions+=5;goto B6d49cd;
case 0x6d49d0:c.instructions+=4;goto B6d49d0;
case 0x6d49d1:c.instructions+=3;goto B6d49d1;
case 0x6d49d2:c.instructions+=2;goto B6d49d2;
case 0x6d49d5:c.instructions+=1;goto B6d49d5;
case 0x6d49d6:goto L6d49d6;
case 0x6d49d9:c.instructions+=5;goto B6d49d9;
case 0x6d49dc:c.instructions+=4;goto B6d49dc;
case 0x6d49df:c.instructions+=3;goto B6d49df;
case 0x6d49e2:c.instructions+=2;goto B6d49e2;
case 0x6d49e5:c.instructions+=1;goto B6d49e5;
case 0x6d49e7:goto L6d49e7;
case 0x6d49e9:c.instructions+=1;goto B6d49e9;
case 0x6d49eb:goto L6d49eb;
case 0x6d49ef:c.instructions+=7;goto B6d49ef;
case 0x6d49f2:c.instructions+=6;goto B6d49f2;
case 0x6d49f5:c.instructions+=5;goto B6d49f5;
case 0x6d49f8:c.instructions+=4;goto B6d49f8;
case 0x6d49fb:c.instructions+=3;goto B6d49fb;
case 0x6d49fe:c.instructions+=2;goto B6d49fe;
case 0x6d4a02:c.instructions+=1;goto B6d4a02;
case 0x6d4a04:goto L6d4a04;
case 0x6d4a08:c.instructions+=1;goto B6d4a08;
case 0x6d4a0a:goto L6d4a0a;
case 0x6d4a0d:c.instructions+=7;goto B6d4a0d;
case 0x6d4a10:c.instructions+=6;goto B6d4a10;
case 0x6d4a13:c.instructions+=5;goto B6d4a13;
case 0x6d4a16:c.instructions+=4;goto B6d4a16;
case 0x6d4a19:c.instructions+=3;goto B6d4a19;
case 0x6d4a1c:c.instructions+=2;goto B6d4a1c;
case 0x6d4a1f:c.instructions+=1;goto B6d4a1f;
case 0x6d4a22:goto L6d4a22;
case 0x6d4a25:c.instructions+=2;goto B6d4a25;
case 0x6d4a28:c.instructions+=1;goto B6d4a28;
case 0x6d4a2a:goto L6d4a2a;
case 0x6d4a2d:c.instructions+=2;goto B6d4a2d;
case 0x6d4a30:c.instructions+=1;goto B6d4a30;
case 0x6d4a32:goto L6d4a32;
case 0x6d4a34:c.instructions+=1;goto B6d4a34;
case 0x6d4a36:goto L6d4a36;
case 0x6d4a37:c.instructions+=4;goto B6d4a37;
case 0x6d4a38:c.instructions+=3;goto B6d4a38;
case 0x6d4a39:c.instructions+=2;goto B6d4a39;
case 0x6d4a3a:c.instructions+=1;goto B6d4a3a;
case 0x6d4a3d:goto L6d4a3d;
case 0x6d4a3f:c.instructions+=13;goto B6d4a3f;
case 0x6d4a40:c.instructions+=12;goto B6d4a40;
case 0x6d4a42:c.instructions+=11;goto B6d4a42;
case 0x6d4a45:c.instructions+=10;goto B6d4a45;
case 0x6d4a48:c.instructions+=9;goto B6d4a48;
case 0x6d4a4b:c.instructions+=8;goto B6d4a4b;
case 0x6d4a4c:c.instructions+=7;goto B6d4a4c;
case 0x6d4a4f:c.instructions+=6;goto B6d4a4f;
case 0x6d4a52:c.instructions+=5;goto B6d4a52;
case 0x6d4a55:c.instructions+=4;goto B6d4a55;
case 0x6d4a58:c.instructions+=3;goto B6d4a58;
case 0x6d4a5c:c.instructions+=2;goto B6d4a5c;
case 0x6d4a5f:c.instructions+=1;goto B6d4a5f;
case 0x6d4a61:goto L6d4a61;
case 0x6d4a65:c.instructions+=1;goto B6d4a65;
case 0x6d4a67:goto L6d4a67;
case 0x6d4a6a:c.instructions+=2;goto B6d4a6a;
case 0x6d4a6c:c.instructions+=1;goto B6d4a6c;
case 0x6d4a6e:goto L6d4a6e;
case 0x6d4a6f:c.instructions+=11;goto B6d4a6f;
case 0x6d4a72:c.instructions+=10;goto B6d4a72;
case 0x6d4a73:c.instructions+=9;goto B6d4a73;
case 0x6d4a76:c.instructions+=8;goto B6d4a76;
case 0x6d4a79:c.instructions+=7;goto B6d4a79;
case 0x6d4a7c:c.instructions+=6;goto B6d4a7c;
case 0x6d4a7f:c.instructions+=5;goto B6d4a7f;
case 0x6d4a82:c.instructions+=4;goto B6d4a82;
case 0x6d4a85:c.instructions+=3;goto B6d4a85;
case 0x6d4a88:c.instructions+=2;goto B6d4a88;
case 0x6d4a89:c.instructions+=1;goto B6d4a89;
case 0x6d4a8a:goto L6d4a8a;
case 0x6d4a8d:c.instructions+=2;goto B6d4a8d;
case 0x6d4a90:c.instructions+=1;goto B6d4a90;
case 0x6d4a92:goto L6d4a92;
case 0x6d4a95:c.instructions+=2;goto B6d4a95;
case 0x6d4a98:c.instructions+=1;goto B6d4a98;
case 0x6d4a9a:goto L6d4a9a;
case 0x6d4a9b:c.instructions+=2;goto B6d4a9b;
case 0x6d4a9c:c.instructions+=1;goto B6d4a9c;
case 0x6d4aa1:goto L6d4aa1;
case 0x6d4aa2:c.instructions+=2;goto B6d4aa2;
case 0x6d4aa3:c.instructions+=1;goto B6d4aa3;
case 0x6d4aa6:goto L6d4aa6;
case 0x6d4aa8:c.instructions+=9;goto B6d4aa8;
case 0x6d4aa9:c.instructions+=8;goto B6d4aa9;
case 0x6d4aab:c.instructions+=7;goto B6d4aab;
case 0x6d4aae:c.instructions+=6;goto B6d4aae;
case 0x6d4aaf:c.instructions+=5;goto B6d4aaf;
case 0x6d4ab2:c.instructions+=4;goto B6d4ab2;
case 0x6d4ab4:c.instructions+=3;goto B6d4ab4;
case 0x6d4ab6:c.instructions+=2;goto B6d4ab6;
case 0x6d4ab8:c.instructions+=1;goto B6d4ab8;
case 0x6d4aba:goto L6d4aba;
case 0x6d4abb:c.instructions+=5;goto B6d4abb;
case 0x6d4abc:c.instructions+=4;goto B6d4abc;
case 0x6d4abe:c.instructions+=3;goto B6d4abe;
case 0x6d4ac1:c.instructions+=2;goto B6d4ac1;
case 0x6d4ac8:c.instructions+=1;goto B6d4ac8;
case 0x6d4acb:goto L6d4acb;
case 0x6d4ace:c.instructions+=10;goto B6d4ace;
case 0x6d4ad1:c.instructions+=9;goto B6d4ad1;
case 0x6d4ad4:c.instructions+=8;goto B6d4ad4;
case 0x6d4ad6:c.instructions+=7;goto B6d4ad6;
case 0x6d4ad8:c.instructions+=6;goto B6d4ad8;
case 0x6d4adb:c.instructions+=5;goto B6d4adb;
case 0x6d4ade:c.instructions+=4;goto B6d4ade;
case 0x6d4ae1:c.instructions+=3;goto B6d4ae1;
case 0x6d4ae4:c.instructions+=2;goto B6d4ae4;
case 0x6d4ae7:c.instructions+=1;goto B6d4ae7;
case 0x6d4ae9:goto L6d4ae9;
case 0x6d4aea:c.instructions+=1;goto B6d4aea;
case 0x6d4aeb:goto L6d4aeb;
case 0x6d4aec:c.instructions+=2;goto B6d4aec;
case 0x6d4aed:c.instructions+=1;goto B6d4aed;
case 0x6d4af0:goto L6d4af0;
case 0x6d4af2:c.instructions+=14;goto B6d4af2;
case 0x6d4af3:c.instructions+=13;goto B6d4af3;
case 0x6d4af5:c.instructions+=12;goto B6d4af5;
case 0x6d4af8:c.instructions+=11;goto B6d4af8;
case 0x6d4afb:c.instructions+=10;goto B6d4afb;
case 0x6d4afe:c.instructions+=9;goto B6d4afe;
case 0x6d4aff:c.instructions+=8;goto B6d4aff;
case 0x6d4b02:c.instructions+=7;goto B6d4b02;
case 0x6d4b05:c.instructions+=6;goto B6d4b05;
case 0x6d4b08:c.instructions+=5;goto B6d4b08;
case 0x6d4b0b:c.instructions+=4;goto B6d4b0b;
case 0x6d4b0c:c.instructions+=3;goto B6d4b0c;
case 0x6d4b0f:c.instructions+=2;goto B6d4b0f;
case 0x6d4b12:c.instructions+=1;goto B6d4b12;
case 0x6d4b14:goto L6d4b14;
case 0x6d4b17:c.instructions+=1;goto B6d4b17;
case 0x6d4b19:goto L6d4b19;
case 0x6d4b1c:c.instructions+=3;goto B6d4b1c;
case 0x6d4b1f:c.instructions+=2;goto B6d4b1f;
case 0x6d4b22:c.instructions+=1;goto B6d4b22;
case 0x6d4b24:goto L6d4b24;
case 0x6d4b26:c.instructions+=2;goto B6d4b26;
case 0x6d4b27:c.instructions+=1;goto B6d4b27;
case 0x6d4b29:goto L6d4b29;
case 0x6d4b2b:c.instructions+=1;goto B6d4b2b;
case 0x6d4b2d:goto L6d4b2d;
case 0x6d4b2f:c.instructions+=1;goto B6d4b2f;
case 0x6d4b31:goto L6d4b31;
case 0x6d4b32:c.instructions+=3;goto B6d4b32;
case 0x6d4b33:c.instructions+=2;goto B6d4b33;
case 0x6d4b34:c.instructions+=1;goto B6d4b34;
case 0x6d4b37:goto L6d4b37;
case 0x6d4b39:c.instructions+=7;goto B6d4b39;
case 0x6d4b3a:c.instructions+=6;goto B6d4b3a;
case 0x6d4b3c:c.instructions+=5;goto B6d4b3c;
case 0x6d4b3d:c.instructions+=4;goto B6d4b3d;
case 0x6d4b40:c.instructions+=3;goto B6d4b40;
case 0x6d4b42:c.instructions+=2;goto B6d4b42;
case 0x6d4b45:c.instructions+=1;goto B6d4b45;
case 0x6d4b47:goto L6d4b47;
case 0x6d4b48:c.instructions+=6;goto B6d4b48;
case 0x6d4b4b:c.instructions+=5;goto B6d4b4b;
case 0x6d4b4d:c.instructions+=4;goto B6d4b4d;
case 0x6d4b4e:c.instructions+=3;goto B6d4b4e;
case 0x6d4b4f:c.instructions+=2;goto B6d4b4f;
case 0x6d4b54:c.instructions+=1;goto B6d4b54;
case 0x6d4b59:goto L6d4b59;
case 0x6d4b5b:c.instructions+=5;goto B6d4b5b;
case 0x6d4b5d:c.instructions+=4;goto B6d4b5d;
case 0x6d4b5e:c.instructions+=3;goto B6d4b5e;
case 0x6d4b5f:c.instructions+=2;goto B6d4b5f;
case 0x6d4b61:c.instructions+=1;goto B6d4b61;
case 0x6d4b63:goto L6d4b63;
case 0x6d4b66:c.instructions+=2;goto B6d4b66;
case 0x6d4b6a:c.instructions+=1;goto B6d4b6a;
case 0x6d4b6c:goto L6d4b6c;
case 0x6d4b6f:c.instructions+=1;goto B6d4b6f;
case 0x6d4b70:goto L6d4b70;
case 0x6d4b71:c.instructions+=2;goto B6d4b71;
case 0x6d4b73:c.instructions+=1;goto B6d4b73;
case 0x6d4b75:goto L6d4b75;
case 0x6d4b77:c.instructions+=1;goto B6d4b77;
case 0x6d4b78:goto L6d4b78;
case 0x6d4b79:c.instructions+=2;goto B6d4b79;
case 0x6d4b7a:c.instructions+=1;goto B6d4b7a;
case 0x6d4b7d:goto L6d4b7d;
case 0x6d4b7f:c.instructions+=11;goto B6d4b7f;
case 0x6d4b80:c.instructions+=10;goto B6d4b80;
case 0x6d4b82:c.instructions+=9;goto B6d4b82;
case 0x6d4b85:c.instructions+=8;goto B6d4b85;
case 0x6d4b86:c.instructions+=7;goto B6d4b86;
case 0x6d4b88:c.instructions+=6;goto B6d4b88;
case 0x6d4b8b:c.instructions+=5;goto B6d4b8b;
case 0x6d4b8e:c.instructions+=4;goto B6d4b8e;
case 0x6d4b91:c.instructions+=3;goto B6d4b91;
case 0x6d4b94:c.instructions+=2;goto B6d4b94;
case 0x6d4b97:c.instructions+=1;goto B6d4b97;
case 0x6d4b9d:goto L6d4b9d;
case 0x6d4b9e:c.instructions+=1;goto B6d4b9e;
case 0x6d4b9f:goto L6d4b9f;
case 0x6d4ba2:c.instructions+=13;goto B6d4ba2;
case 0x6d4ba5:c.instructions+=12;goto B6d4ba5;
case 0x6d4ba8:c.instructions+=11;goto B6d4ba8;
case 0x6d4bab:c.instructions+=10;goto B6d4bab;
case 0x6d4bae:c.instructions+=9;goto B6d4bae;
case 0x6d4bb1:c.instructions+=8;goto B6d4bb1;
case 0x6d4bb3:c.instructions+=7;goto B6d4bb3;
case 0x6d4bb6:c.instructions+=6;goto B6d4bb6;
case 0x6d4bb9:c.instructions+=5;goto B6d4bb9;
case 0x6d4bbc:c.instructions+=4;goto B6d4bbc;
case 0x6d4bbf:c.instructions+=3;goto B6d4bbf;
case 0x6d4bc3:c.instructions+=2;goto B6d4bc3;
case 0x6d4bc9:c.instructions+=1;goto B6d4bc9;
case 0x6d4bcf:goto L6d4bcf;
case 0x6d4bd2:c.instructions+=9;goto B6d4bd2;
case 0x6d4bd5:c.instructions+=8;goto B6d4bd5;
case 0x6d4bd8:c.instructions+=7;goto B6d4bd8;
case 0x6d4bdc:c.instructions+=6;goto B6d4bdc;
case 0x6d4bdf:c.instructions+=5;goto B6d4bdf;
case 0x6d4be2:c.instructions+=4;goto B6d4be2;
case 0x6d4be5:c.instructions+=3;goto B6d4be5;
case 0x6d4be7:c.instructions+=2;goto B6d4be7;
case 0x6d4bea:c.instructions+=1;goto B6d4bea;
case 0x6d4bec:goto L6d4bec;
case 0x6d4bef:c.instructions+=6;goto B6d4bef;
case 0x6d4bf2:c.instructions+=5;goto B6d4bf2;
case 0x6d4bf5:c.instructions+=4;goto B6d4bf5;
case 0x6d4bf8:c.instructions+=3;goto B6d4bf8;
case 0x6d4bfb:c.instructions+=2;goto B6d4bfb;
case 0x6d4bfe:c.instructions+=1;goto B6d4bfe;
case 0x6d4c00:goto L6d4c00;
case 0x6d4c03:c.instructions+=2;goto B6d4c03;
case 0x6d4c05:c.instructions+=1;goto B6d4c05;
case 0x6d4c07:goto L6d4c07;
case 0x6d4c0a:c.instructions+=3;goto B6d4c0a;
case 0x6d4c0d:c.instructions+=2;goto B6d4c0d;
case 0x6d4c10:c.instructions+=1;goto B6d4c10;
case 0x6d4c12:goto L6d4c12;
case 0x6d4c15:goto L6d4c15;
case 0x6d4c18:c.instructions+=10;goto B6d4c18;
case 0x6d4c1b:c.instructions+=9;goto B6d4c1b;
case 0x6d4c1e:c.instructions+=8;goto B6d4c1e;
case 0x6d4c21:c.instructions+=7;goto B6d4c21;
case 0x6d4c24:c.instructions+=6;goto B6d4c24;
case 0x6d4c27:c.instructions+=5;goto B6d4c27;
case 0x6d4c29:c.instructions+=4;goto B6d4c29;
case 0x6d4c2b:c.instructions+=3;goto B6d4c2b;
case 0x6d4c2e:c.instructions+=2;goto B6d4c2e;
case 0x6d4c31:c.instructions+=1;goto B6d4c31;
case 0x6d4c33:goto L6d4c33;
case 0x6d4c36:c.instructions+=5;goto B6d4c36;
case 0x6d4c39:c.instructions+=4;goto B6d4c39;
case 0x6d4c3c:c.instructions+=3;goto B6d4c3c;
case 0x6d4c3f:c.instructions+=2;goto B6d4c3f;
case 0x6d4c43:c.instructions+=1;goto B6d4c43;
case 0x6d4c45:goto L6d4c45;
case 0x6d4c48:c.instructions+=2;goto B6d4c48;
case 0x6d4c4a:c.instructions+=1;goto B6d4c4a;
case 0x6d4c4c:goto L6d4c4c;
case 0x6d4c4f:c.instructions+=4;goto B6d4c4f;
case 0x6d4c50:c.instructions+=3;goto B6d4c50;
case 0x6d4c53:c.instructions+=2;goto B6d4c53;
case 0x6d4c56:c.instructions+=1;goto B6d4c56;
case 0x6d4c58:goto L6d4c58;
case 0x6d4c5b:c.instructions+=2;goto B6d4c5b;
case 0x6d4c5e:c.instructions+=1;goto B6d4c5e;
case 0x6d4c60:goto L6d4c60;
case 0x6d4c63:goto L6d4c63;
case 0x6d4c66:c.instructions+=2;goto B6d4c66;
case 0x6d4c69:c.instructions+=1;goto B6d4c69;
case 0x6d4c6c:goto L6d4c6c;
case 0x6d4c6f:c.instructions+=3;goto B6d4c6f;
case 0x6d4c72:c.instructions+=2;goto B6d4c72;
case 0x6d4c75:c.instructions+=1;goto B6d4c75;
case 0x6d4c7b:goto L6d4c7b;
case 0x6d4c7c:c.instructions+=1;goto B6d4c7c;
case 0x6d4c7d:goto L6d4c7d;
case 0x6d4c80:c.instructions+=3;goto B6d4c80;
case 0x6d4c82:c.instructions+=2;goto B6d4c82;
case 0x6d4c83:c.instructions+=1;goto B6d4c83;
case 0x6d4c85:goto L6d4c85;
case 0x6d4c88:c.instructions+=1;goto B6d4c88;
case 0x6d4c8a:goto L6d4c8a;
case 0x6d4c8d:c.instructions+=2;goto B6d4c8d;
case 0x6d4c8f:c.instructions+=1;goto B6d4c8f;
case 0x6d4c91:goto L6d4c91;
case 0x6d4c94:c.instructions+=1;goto B6d4c94;
case 0x6d4c96:goto L6d4c96;
case 0x6d4c97:c.instructions+=1;goto B6d4c97;
case 0x6d4c9a:goto L6d4c9a;
case 0x6d4c9c:c.instructions+=23;goto B6d4c9c;
case 0x6d4c9d:c.instructions+=22;goto B6d4c9d;
case 0x6d4c9f:c.instructions+=21;goto B6d4c9f;
case 0x6d4ca2:c.instructions+=20;goto B6d4ca2;
case 0x6d4ca5:c.instructions+=19;goto B6d4ca5;
case 0x6d4ca9:c.instructions+=18;goto B6d4ca9;
case 0x6d4caa:c.instructions+=17;goto B6d4caa;
case 0x6d4cac:c.instructions+=16;goto B6d4cac;
case 0x6d4caf:c.instructions+=15;goto B6d4caf;
case 0x6d4cb2:c.instructions+=14;goto B6d4cb2;
case 0x6d4cb5:c.instructions+=13;goto B6d4cb5;
case 0x6d4cb8:c.instructions+=12;goto B6d4cb8;
case 0x6d4cbb:c.instructions+=11;goto B6d4cbb;
case 0x6d4cbc:c.instructions+=10;goto B6d4cbc;
case 0x6d4cbf:c.instructions+=9;goto B6d4cbf;
case 0x6d4cc2:c.instructions+=8;goto B6d4cc2;
case 0x6d4cc4:c.instructions+=7;goto B6d4cc4;
case 0x6d4cc5:c.instructions+=6;goto B6d4cc5;
case 0x6d4cc8:c.instructions+=5;goto B6d4cc8;
case 0x6d4ccb:c.instructions+=4;goto B6d4ccb;
case 0x6d4ccf:c.instructions+=3;goto B6d4ccf;
case 0x6d4cd2:c.instructions+=2;goto B6d4cd2;
case 0x6d4cd5:c.instructions+=1;goto B6d4cd5;
case 0x6d4cdb:goto L6d4cdb;
case 0x6d4cde:c.instructions+=15;goto B6d4cde;
case 0x6d4ce0:c.instructions+=14;goto B6d4ce0;
case 0x6d4ce3:c.instructions+=13;goto B6d4ce3;
case 0x6d4ce6:c.instructions+=12;goto B6d4ce6;
case 0x6d4ce9:c.instructions+=11;goto B6d4ce9;
case 0x6d4cec:c.instructions+=10;goto B6d4cec;
case 0x6d4cef:c.instructions+=9;goto B6d4cef;
case 0x6d4cf2:c.instructions+=8;goto B6d4cf2;
case 0x6d4cf5:c.instructions+=7;goto B6d4cf5;
case 0x6d4cf8:c.instructions+=6;goto B6d4cf8;
case 0x6d4cfb:c.instructions+=5;goto B6d4cfb;
case 0x6d4cfe:c.instructions+=4;goto B6d4cfe;
case 0x6d4d01:c.instructions+=3;goto B6d4d01;
case 0x6d4d04:c.instructions+=2;goto B6d4d04;
case 0x6d4d07:c.instructions+=1;goto B6d4d07;
case 0x6d4d0a:goto L6d4d0a;
case 0x6d4d0c:goto L6d4d0c;
case 0x6d4d10:c.instructions+=3;goto B6d4d10;
case 0x6d4d13:c.instructions+=2;goto B6d4d13;
case 0x6d4d16:c.instructions+=1;goto B6d4d16;
case 0x6d4d18:goto L6d4d18;
case 0x6d4d1b:c.instructions+=7;goto B6d4d1b;
case 0x6d4d1e:c.instructions+=6;goto B6d4d1e;
case 0x6d4d21:c.instructions+=5;goto B6d4d21;
case 0x6d4d24:c.instructions+=4;goto B6d4d24;
case 0x6d4d27:c.instructions+=3;goto B6d4d27;
case 0x6d4d29:c.instructions+=2;goto B6d4d29;
case 0x6d4d2c:c.instructions+=1;goto B6d4d2c;
case 0x6d4d2e:goto L6d4d2e;
case 0x6d4d31:c.instructions+=9;goto B6d4d31;
case 0x6d4d34:c.instructions+=8;goto B6d4d34;
case 0x6d4d37:c.instructions+=7;goto B6d4d37;
case 0x6d4d3a:c.instructions+=6;goto B6d4d3a;
case 0x6d4d3d:c.instructions+=5;goto B6d4d3d;
case 0x6d4d40:c.instructions+=4;goto B6d4d40;
case 0x6d4d41:c.instructions+=3;goto B6d4d41;
case 0x6d4d44:c.instructions+=2;goto B6d4d44;
case 0x6d4d47:c.instructions+=1;goto B6d4d47;
case 0x6d4d49:goto L6d4d49;
case 0x6d4d4b:c.instructions+=2;goto B6d4d4b;
case 0x6d4d4e:c.instructions+=1;goto B6d4d4e;
case 0x6d4d50:goto L6d4d50;
case 0x6d4d53:c.instructions+=9;goto B6d4d53;
case 0x6d4d56:c.instructions+=8;goto B6d4d56;
case 0x6d4d59:c.instructions+=7;goto B6d4d59;
case 0x6d4d5c:c.instructions+=6;goto B6d4d5c;
case 0x6d4d5f:c.instructions+=5;goto B6d4d5f;
case 0x6d4d62:c.instructions+=4;goto B6d4d62;
case 0x6d4d63:c.instructions+=3;goto B6d4d63;
case 0x6d4d66:c.instructions+=2;goto B6d4d66;
case 0x6d4d69:c.instructions+=1;goto B6d4d69;
case 0x6d4d6b:goto L6d4d6b;
case 0x6d4d6e:c.instructions+=6;goto B6d4d6e;
case 0x6d4d71:c.instructions+=5;goto B6d4d71;
case 0x6d4d74:c.instructions+=4;goto B6d4d74;
case 0x6d4d77:c.instructions+=3;goto B6d4d77;
case 0x6d4d7a:c.instructions+=2;goto B6d4d7a;
case 0x6d4d7d:c.instructions+=1;goto B6d4d7d;
case 0x6d4d7e:goto L6d4d7e;
case 0x6d4d81:c.instructions+=2;goto B6d4d81;
case 0x6d4d84:c.instructions+=1;goto B6d4d84;
case 0x6d4d86:goto L6d4d86;
case 0x6d4d88:c.instructions+=2;goto B6d4d88;
case 0x6d4d8b:c.instructions+=1;goto B6d4d8b;
case 0x6d4d8d:goto L6d4d8d;
case 0x6d4d90:c.instructions+=11;goto B6d4d90;
case 0x6d4d93:c.instructions+=10;goto B6d4d93;
case 0x6d4d96:c.instructions+=9;goto B6d4d96;
case 0x6d4d99:c.instructions+=8;goto B6d4d99;
case 0x6d4d9c:c.instructions+=7;goto B6d4d9c;
case 0x6d4d9e:c.instructions+=6;goto B6d4d9e;
case 0x6d4da1:c.instructions+=5;goto B6d4da1;
case 0x6d4da4:c.instructions+=4;goto B6d4da4;
case 0x6d4da5:c.instructions+=3;goto B6d4da5;
case 0x6d4da8:c.instructions+=2;goto B6d4da8;
case 0x6d4dab:c.instructions+=1;goto B6d4dab;
case 0x6d4dad:goto L6d4dad;
case 0x6d4db1:c.instructions+=1;goto B6d4db1;
case 0x6d4db3:goto L6d4db3;
case 0x6d4db6:c.instructions+=4;goto B6d4db6;
case 0x6d4dba:c.instructions+=3;goto B6d4dba;
case 0x6d4dbd:c.instructions+=2;goto B6d4dbd;
case 0x6d4dc0:c.instructions+=1;goto B6d4dc0;
case 0x6d4dc2:goto L6d4dc2;
case 0x6d4dc8:goto L6d4dc8;
case 0x6d4dcb:c.instructions+=4;goto B6d4dcb;
case 0x6d4dce:c.instructions+=3;goto B6d4dce;
case 0x6d4dd1:c.instructions+=2;goto B6d4dd1;
case 0x6d4dd4:c.instructions+=1;goto B6d4dd4;
case 0x6d4ddb:goto L6d4ddb;
case 0x6d4ddd:c.instructions+=4;goto B6d4ddd;
case 0x6d4de0:c.instructions+=3;goto B6d4de0;
case 0x6d4de3:c.instructions+=2;goto B6d4de3;
case 0x6d4de6:c.instructions+=1;goto B6d4de6;
case 0x6d4deb:goto L6d4deb;
case 0x6d4dee:c.instructions+=6;goto B6d4dee;
case 0x6d4df1:c.instructions+=5;goto B6d4df1;
case 0x6d4df4:c.instructions+=4;goto B6d4df4;
case 0x6d4df7:c.instructions+=3;goto B6d4df7;
case 0x6d4dfa:c.instructions+=2;goto B6d4dfa;
case 0x6d4dfe:c.instructions+=1;goto B6d4dfe;
case 0x6d4e00:goto L6d4e00;
case 0x6d4e03:c.instructions+=10;goto B6d4e03;
case 0x6d4e06:c.instructions+=9;goto B6d4e06;
case 0x6d4e09:c.instructions+=8;goto B6d4e09;
case 0x6d4e0c:c.instructions+=7;goto B6d4e0c;
case 0x6d4e0e:c.instructions+=6;goto B6d4e0e;
case 0x6d4e11:c.instructions+=5;goto B6d4e11;
case 0x6d4e14:c.instructions+=4;goto B6d4e14;
case 0x6d4e17:c.instructions+=3;goto B6d4e17;
case 0x6d4e1a:c.instructions+=2;goto B6d4e1a;
case 0x6d4e1d:c.instructions+=1;goto B6d4e1d;
case 0x6d4e1f:goto L6d4e1f;
case 0x6d4e22:c.instructions+=1;goto B6d4e22;
case 0x6d4e24:goto L6d4e24;
case 0x6d4e27:c.instructions+=3;goto B6d4e27;
case 0x6d4e2a:c.instructions+=2;goto B6d4e2a;
case 0x6d4e2d:c.instructions+=1;goto B6d4e2d;
case 0x6d4e30:goto L6d4e30;
case 0x6d4e33:c.instructions+=1;goto B6d4e33;
case 0x6d4e35:goto L6d4e35;
case 0x6d4e38:c.instructions+=1;goto B6d4e38;
case 0x6d4e3e:goto L6d4e3e;
case 0x6d4e41:c.instructions+=1;goto B6d4e41;
case 0x6d4e47:goto L6d4e47;
case 0x6d4e4a:goto L6d4e4a;
case 0x6d4e4d:c.instructions+=1;goto B6d4e4d;
case 0x6d4e4f:goto L6d4e4f;
case 0x6d4e52:goto L6d4e52;
case 0x6d4e55:c.instructions+=1;goto B6d4e55;
case 0x6d4e57:goto L6d4e57;
case 0x6d4e58:c.instructions+=1;goto B6d4e58;
case 0x6d4e5b:goto L6d4e5b;
case 0x6d4e5e:c.instructions+=9;goto B6d4e5e;
case 0x6d4e61:c.instructions+=8;goto B6d4e61;
case 0x6d4e64:c.instructions+=7;goto B6d4e64;
case 0x6d4e67:c.instructions+=6;goto B6d4e67;
case 0x6d4e6a:c.instructions+=5;goto B6d4e6a;
case 0x6d4e6d:c.instructions+=4;goto B6d4e6d;
case 0x6d4e70:c.instructions+=3;goto B6d4e70;
case 0x6d4e73:c.instructions+=2;goto B6d4e73;
case 0x6d4e76:c.instructions+=1;goto B6d4e76;
case 0x6d4e79:goto L6d4e79;
case 0x6d4e7b:goto L6d4e7b;
case 0x6d4e7e:c.instructions+=18;goto B6d4e7e;
case 0x6d4e81:c.instructions+=17;goto B6d4e81;
case 0x6d4e84:c.instructions+=16;goto B6d4e84;
case 0x6d4e87:c.instructions+=15;goto B6d4e87;
case 0x6d4e8a:c.instructions+=14;goto B6d4e8a;
case 0x6d4e8d:c.instructions+=13;goto B6d4e8d;
case 0x6d4e90:c.instructions+=12;goto B6d4e90;
case 0x6d4e93:c.instructions+=11;goto B6d4e93;
case 0x6d4e96:c.instructions+=10;goto B6d4e96;
case 0x6d4e99:c.instructions+=9;goto B6d4e99;
case 0x6d4e9c:c.instructions+=8;goto B6d4e9c;
case 0x6d4e9e:c.instructions+=7;goto B6d4e9e;
case 0x6d4ea0:c.instructions+=6;goto B6d4ea0;
case 0x6d4ea1:c.instructions+=5;goto B6d4ea1;
case 0x6d4ea4:c.instructions+=4;goto B6d4ea4;
case 0x6d4ea6:c.instructions+=3;goto B6d4ea6;
case 0x6d4ea9:c.instructions+=2;goto B6d4ea9;
case 0x6d4eac:c.instructions+=1;goto B6d4eac;
case 0x6d4eae:goto L6d4eae;
case 0x6d4eb1:goto L6d4eb1;
case 0x6d4eb4:c.instructions+=7;goto B6d4eb4;
case 0x6d4eb7:c.instructions+=6;goto B6d4eb7;
case 0x6d4eba:c.instructions+=5;goto B6d4eba;
case 0x6d4ebd:c.instructions+=4;goto B6d4ebd;
case 0x6d4ec0:c.instructions+=3;goto B6d4ec0;
case 0x6d4ec3:c.instructions+=2;goto B6d4ec3;
case 0x6d4ec6:c.instructions+=1;goto B6d4ec6;
case 0x6d4ec8:goto L6d4ec8;
case 0x6d4ecb:c.instructions+=1;goto B6d4ecb;
case 0x6d4ecd:goto L6d4ecd;
case 0x6d4ed0:c.instructions+=5;goto B6d4ed0;
case 0x6d4ed2:c.instructions+=4;goto B6d4ed2;
case 0x6d4ed5:c.instructions+=3;goto B6d4ed5;
case 0x6d4ed8:c.instructions+=2;goto B6d4ed8;
case 0x6d4ed9:c.instructions+=1;goto B6d4ed9;
case 0x6d4edc:goto L6d4edc;
case 0x6d4edf:c.instructions+=4;goto B6d4edf;
case 0x6d4ee0:c.instructions+=3;goto B6d4ee0;
case 0x6d4ee3:c.instructions+=2;goto B6d4ee3;
case 0x6d4ee6:c.instructions+=1;goto B6d4ee6;
case 0x6d4ee8:goto L6d4ee8;
case 0x6d4eeb:c.instructions+=2;goto B6d4eeb;
case 0x6d4eef:c.instructions+=1;goto B6d4eef;
case 0x6d4ef1:goto L6d4ef1;
case 0x6d4ef4:c.instructions+=3;goto B6d4ef4;
case 0x6d4ef7:c.instructions+=2;goto B6d4ef7;
case 0x6d4efa:c.instructions+=1;goto B6d4efa;
case 0x6d4efc:goto L6d4efc;
case 0x6d4eff:c.instructions+=2;goto B6d4eff;
case 0x6d4f02:c.instructions+=1;goto B6d4f02;
case 0x6d4f04:goto L6d4f04;
case 0x6d4f07:goto L6d4f07;
case 0x6d4f0a:c.instructions+=3;goto B6d4f0a;
case 0x6d4f0d:c.instructions+=2;goto B6d4f0d;
case 0x6d4f10:c.instructions+=1;goto B6d4f10;
case 0x6d4f16:goto L6d4f16;
case 0x6d4f19:c.instructions+=2;goto B6d4f19;
case 0x6d4f1c:c.instructions+=1;goto B6d4f1c;
case 0x6d4f22:goto L6d4f22;
case 0x6d4f23:c.instructions+=2;goto B6d4f23;
case 0x6d4f26:c.instructions+=1;goto B6d4f26;
case 0x6d4f28:goto L6d4f28;
case 0x6d4f2b:c.instructions+=4;goto B6d4f2b;
case 0x6d4f2c:c.instructions+=3;goto B6d4f2c;
case 0x6d4f2f:c.instructions+=2;goto B6d4f2f;
case 0x6d4f31:c.instructions+=1;goto B6d4f31;
case 0x6d4f36:goto L6d4f36;
case 0x6d4f39:goto L6d4f39;
case 0x6d4f3d:c.instructions+=1;goto B6d4f3d;
case 0x6d4f3f:goto L6d4f3f;
case 0x6d4f43:c.instructions+=1;goto B6d4f43;
case 0x6d4f45:goto L6d4f45;
case 0x6d4f47:c.instructions+=3;goto B6d4f47;
case 0x6d4f4a:c.instructions+=2;goto B6d4f4a;
case 0x6d4f4d:c.instructions+=1;goto B6d4f4d;
case 0x6d4f4f:goto L6d4f4f;
case 0x6d4f52:c.instructions+=3;goto B6d4f52;
case 0x6d4f55:c.instructions+=2;goto B6d4f55;
case 0x6d4f58:c.instructions+=1;goto B6d4f58;
case 0x6d4f5a:goto L6d4f5a;
case 0x6d4f5c:c.instructions+=3;goto B6d4f5c;
case 0x6d4f5f:c.instructions+=2;goto B6d4f5f;
case 0x6d4f63:c.instructions+=1;goto B6d4f63;
case 0x6d4f65:goto L6d4f65;
case 0x6d4f68:goto L6d4f68;
case 0x6d4f6b:c.instructions+=2;goto B6d4f6b;
case 0x6d4f6c:c.instructions+=1;goto B6d4f6c;
case 0x6d4f6e:goto L6d4f6e;
case 0x6d4f71:c.instructions+=2;goto B6d4f71;
case 0x6d4f74:c.instructions+=1;goto B6d4f74;
case 0x6d4f76:goto L6d4f76;
case 0x6d4f78:goto L6d4f78;
case 0x6d4f7b:c.instructions+=4;goto B6d4f7b;
case 0x6d4f7d:c.instructions+=3;goto B6d4f7d;
case 0x6d4f80:c.instructions+=2;goto B6d4f80;
case 0x6d4f83:c.instructions+=1;goto B6d4f83;
case 0x6d4f85:goto L6d4f85;
case 0x6d4f88:c.instructions+=2;goto B6d4f88;
case 0x6d4f8b:c.instructions+=1;goto B6d4f8b;
case 0x6d4f8e:goto L6d4f8e;
case 0x6d4f90:c.instructions+=3;goto B6d4f90;
case 0x6d4f93:c.instructions+=2;goto B6d4f93;
case 0x6d4f97:c.instructions+=1;goto B6d4f97;
case 0x6d4f99:goto L6d4f99;
case 0x6d4f9c:goto L6d4f9c;
case 0x6d4f9f:c.instructions+=2;goto B6d4f9f;
case 0x6d4fa0:c.instructions+=1;goto B6d4fa0;
case 0x6d4fa2:goto L6d4fa2;
case 0x6d4fa5:goto L6d4fa5;
case 0x6d4fa8:c.instructions+=1;goto B6d4fa8;
case 0x6d4faa:goto L6d4faa;
case 0x6d4fb1:goto L6d4fb1;
case 0x6d4fb4:c.instructions+=2;goto B6d4fb4;
case 0x6d4fb7:c.instructions+=1;goto B6d4fb7;
case 0x6d4fb9:goto L6d4fb9;
case 0x6d4fbc:goto L6d4fbc;
case 0x6d4fbf:c.instructions+=2;goto B6d4fbf;
case 0x6d4fc2:c.instructions+=1;goto B6d4fc2;
case 0x6d4fc4:goto L6d4fc4;
case 0x6d4fc7:goto L6d4fc7;
case 0x6d4fcb:c.instructions+=1;goto B6d4fcb;
case 0x6d4fd1:goto L6d4fd1;
case 0x6d4fd4:c.instructions+=4;goto B6d4fd4;
case 0x6d4fd6:c.instructions+=3;goto B6d4fd6;
case 0x6d4fd8:c.instructions+=2;goto B6d4fd8;
case 0x6d4fdb:c.instructions+=1;goto B6d4fdb;
case 0x6d4fdd:goto L6d4fdd;
case 0x6d4fe0:c.instructions+=11;goto B6d4fe0;
case 0x6d4fe3:c.instructions+=10;goto B6d4fe3;
case 0x6d4fe6:c.instructions+=9;goto B6d4fe6;
case 0x6d4fe9:c.instructions+=8;goto B6d4fe9;
case 0x6d4fec:c.instructions+=7;goto B6d4fec;
case 0x6d4fee:c.instructions+=6;goto B6d4fee;
case 0x6d4ff1:c.instructions+=5;goto B6d4ff1;
case 0x6d4ff4:c.instructions+=4;goto B6d4ff4;
case 0x6d4ff5:c.instructions+=3;goto B6d4ff5;
case 0x6d4ff7:c.instructions+=2;goto B6d4ff7;
case 0x6d4ffa:c.instructions+=1;goto B6d4ffa;
case 0x6d4ffc:goto L6d4ffc;
case 0x6d4fff:c.instructions+=1;goto B6d4fff;
default:missing_instruction(c.pc);}
B6d4460:L6d4460:{c.instructions+=30;NFSU2_TR(0x6d4460);
w4(R+0,u32(r8(R+4352)));
}
B6d4463:{NFSU2_TR(0x6d4463);
w8(R+4400,u64(m4(0x80bf1c)));
}
B6d446a:{NFSU2_TR(0x6d446a);
__builtin_memmove((R+12),(R+0),4);
}
B6d446c:{NFSU2_TR(0x6d446c);
__builtin_memmove((R+8),(R+0),4);
}
B6d446e:{NFSU2_TR(0x6d446e);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4400))));
}
B6d4471:{NFSU2_TR(0x6d4471);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x80000000ull))));
}
B6d4477:{NFSU2_TR(0x6d4477);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6d447a:{NFSU2_TR(0x6d447a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+12))));
}
B6d447c:{NFSU2_TR(0x6d447c);
w8(R+4384,u64(m4(0x80bfd0)));
}
B6d4483:{NFSU2_TR(0x6d4483);
__builtin_memmove((R+4368),(R+4352),8);
}
B6d4486:{NFSU2_TR(0x6d4486);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6d448a:{NFSU2_TR(0x6d448a);
__builtin_memmove((R+4400),gp(0x80bee0),8);
}
B6d4491:{NFSU2_TR(0x6d4491);
{wv<8>((R+4352),uo::pf2id<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6d4495:{NFSU2_TR(0x6d4495);
__builtin_memmove((R+4464),gp(0x80bee8),8);
}
B6d449c:{NFSU2_TR(0x6d449c);
w4(R+4,u32(r8(R+4352)));
}
B6d449f:{NFSU2_TR(0x6d449f);
{wv<8>((R+4352),uo::pi2fd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6d44a3:{NFSU2_TR(0x6d44a3);
__builtin_memmove((R+24),(R+4),4);
}
B6d44a5:{NFSU2_TR(0x6d44a5);
__builtin_memmove((R+4448),gp(0x80bef8),8);
}
B6d44ac:{NFSU2_TR(0x6d44ac);
__builtin_memmove((R+4356),(R+4352),4);
}
B6d44af:{NFSU2_TR(0x6d44af);
__builtin_memmove((R+4432),gp(0x80be98),8);
}
B6d44b6:{NFSU2_TR(0x6d44b6);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6d44ba:{NFSU2_TR(0x6d44ba);
__builtin_memmove((R+4400),gp(0x80bef0),8);
}
B6d44c1:{NFSU2_TR(0x6d44c1);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6d44c5:{NFSU2_TR(0x6d44c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6d44c8:{NFSU2_TR(0x6d44c8);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B6d44cb:{NFSU2_TR(0x6d44cb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+24))));
}
B6d44cd:{NFSU2_TR(0x6d44cd);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6d44d1:{NFSU2_TR(0x6d44d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d44d7:{NFSU2_TR(0x6d44d7);
__builtin_memmove((R+4372),(R+4368),4);
}
B6d44da:{NFSU2_TR(0x6d44da);
if(r1(R+518)){{goto L6d44e0;}}
}
B6d44dc:L6d44dc:{c.instructions+=1;NFSU2_TR(0x6d44dc);
{wv<8>((R+4368),uo::pfsubr<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6d44e0:L6d44e0:{c.instructions+=30;NFSU2_TR(0x6d44e0);
__builtin_memmove((R+4384),(R+4432),8);
}
B6d44e3:{NFSU2_TR(0x6d44e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6d44e6:{NFSU2_TR(0x6d44e6);
__builtin_memmove((R+4388),(R+4368),4);
}
B6d44e9:{NFSU2_TR(0x6d44e9);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B6d44ed:{NFSU2_TR(0x6d44ed);
__builtin_memmove((R+24),(R+4),4);
}
B6d44ef:{NFSU2_TR(0x6d44ef);
__builtin_memmove((R+4416),gp(0x80bf00),8);
}
B6d44f6:{NFSU2_TR(0x6d44f6);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B6d44f8:{NFSU2_TR(0x6d44f8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B6d44fc:{NFSU2_TR(0x6d44fc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B6d44fe:{NFSU2_TR(0x6d44fe);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6d4502:{NFSU2_TR(0x6d4502);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d4505:{NFSU2_TR(0x6d4505);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4432))));}
}
B6d4509:{NFSU2_TR(0x6d4509);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+24))));
}
B6d450b:{NFSU2_TR(0x6d450b);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6d450f:{NFSU2_TR(0x6d450f);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6d4513:{NFSU2_TR(0x6d4513);
__builtin_memmove((R+4448),gp(0x80bf08),8);
}
B6d451a:{NFSU2_TR(0x6d451a);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4432))));}
}
B6d451e:{NFSU2_TR(0x6d451e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6d4522:{NFSU2_TR(0x6d4522);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B6d4526:{NFSU2_TR(0x6d4526);
w8(R+4352,u64(r4(R+8)));
}
B6d4529:{NFSU2_TR(0x6d4529);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B6d452d:{NFSU2_TR(0x6d452d);
__builtin_memmove((R+4452),(R+4432),4);
}
B6d4530:{NFSU2_TR(0x6d4530);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x20ull))));
}
B6d4534:{NFSU2_TR(0x6d4534);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6d4538:{NFSU2_TR(0x6d4538);
__builtin_memmove((R+4356),(R+4352),4);
}
B6d453b:{NFSU2_TR(0x6d453b);
w8(R+4368,u64(r4(R+12)));
}
B6d453e:{NFSU2_TR(0x6d453e);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B6d4542:{NFSU2_TR(0x6d4542);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d4548:{NFSU2_TR(0x6d4548);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B6d454c:{NFSU2_TR(0x6d454c);
if(r1(R+518)){{goto L6d4554;}}
}
B6d454e:L6d454e:{c.instructions+=2;NFSU2_TR(0x6d454e);
__builtin_memmove((R+4436),(R+4416),4);
}
B6d4551:{NFSU2_TR(0x6d4551);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B6d4554:L6d4554:{c.instructions+=4;NFSU2_TR(0x6d4554);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4368))));
}
B6d4557:{NFSU2_TR(0x6d4557);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4416))));
}
B6d455a:{NFSU2_TR(0x6d455a);
}
B6d455b:{NFSU2_TR(0x6d455b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d4560:L6d4560:{c.instructions+=30;NFSU2_TR(0x6d4560);
w4(R+0,u32(r8(R+4352)));
}
B6d4563:{NFSU2_TR(0x6d4563);
w8(R+4400,u64(m4(0x80bf1c)));
}
B6d456a:{NFSU2_TR(0x6d456a);
__builtin_memmove((R+12),(R+0),4);
}
B6d456c:{NFSU2_TR(0x6d456c);
__builtin_memmove((R+8),(R+0),4);
}
B6d456e:{NFSU2_TR(0x6d456e);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4400))));
}
B6d4571:{NFSU2_TR(0x6d4571);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x80000000ull))));
}
B6d4577:{NFSU2_TR(0x6d4577);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6d457a:{NFSU2_TR(0x6d457a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+12))));
}
B6d457c:{NFSU2_TR(0x6d457c);
w8(R+4384,u64(m4(0x80bfd0)));
}
B6d4583:{NFSU2_TR(0x6d4583);
__builtin_memmove((R+4368),(R+4352),8);
}
B6d4586:{NFSU2_TR(0x6d4586);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6d458a:{NFSU2_TR(0x6d458a);
__builtin_memmove((R+4400),gp(0x80bee0),8);
}
B6d4591:{NFSU2_TR(0x6d4591);
{wv<8>((R+4352),uo::pf2id<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6d4595:{NFSU2_TR(0x6d4595);
__builtin_memmove((R+4464),gp(0x80bee8),8);
}
B6d459c:{NFSU2_TR(0x6d459c);
w4(R+4,u32(r8(R+4352)));
}
B6d459f:{NFSU2_TR(0x6d459f);
{wv<8>((R+4352),uo::pi2fd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6d45a3:{NFSU2_TR(0x6d45a3);
__builtin_memmove((R+24),(R+4),4);
}
B6d45a5:{NFSU2_TR(0x6d45a5);
__builtin_memmove((R+4448),gp(0x80bef8),8);
}
B6d45ac:{NFSU2_TR(0x6d45ac);
__builtin_memmove((R+4356),(R+4352),4);
}
B6d45af:{NFSU2_TR(0x6d45af);
__builtin_memmove((R+4432),gp(0x80be98),8);
}
B6d45b6:{NFSU2_TR(0x6d45b6);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6d45ba:{NFSU2_TR(0x6d45ba);
__builtin_memmove((R+4400),gp(0x80bef0),8);
}
B6d45c1:{NFSU2_TR(0x6d45c1);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6d45c5:{NFSU2_TR(0x6d45c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6d45c8:{NFSU2_TR(0x6d45c8);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B6d45cb:{NFSU2_TR(0x6d45cb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+24))));
}
B6d45cd:{NFSU2_TR(0x6d45cd);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6d45d1:{NFSU2_TR(0x6d45d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d45d7:{NFSU2_TR(0x6d45d7);
__builtin_memmove((R+4372),(R+4368),4);
}
B6d45da:{NFSU2_TR(0x6d45da);
if(r1(R+518)){{goto L6d45e0;}}
}
B6d45dc:L6d45dc:{c.instructions+=1;NFSU2_TR(0x6d45dc);
{wv<8>((R+4368),uo::pfsubr<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6d45e0:L6d45e0:{c.instructions+=30;NFSU2_TR(0x6d45e0);
__builtin_memmove((R+4384),(R+4432),8);
}
B6d45e3:{NFSU2_TR(0x6d45e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6d45e6:{NFSU2_TR(0x6d45e6);
__builtin_memmove((R+4388),(R+4368),4);
}
B6d45e9:{NFSU2_TR(0x6d45e9);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B6d45ed:{NFSU2_TR(0x6d45ed);
__builtin_memmove((R+24),(R+4),4);
}
B6d45ef:{NFSU2_TR(0x6d45ef);
__builtin_memmove((R+4416),gp(0x80bf00),8);
}
B6d45f6:{NFSU2_TR(0x6d45f6);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B6d45f8:{NFSU2_TR(0x6d45f8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B6d45fc:{NFSU2_TR(0x6d45fc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B6d45fe:{NFSU2_TR(0x6d45fe);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6d4602:{NFSU2_TR(0x6d4602);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d4605:{NFSU2_TR(0x6d4605);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4432))));}
}
B6d4609:{NFSU2_TR(0x6d4609);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+24))));
}
B6d460b:{NFSU2_TR(0x6d460b);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B6d460f:{NFSU2_TR(0x6d460f);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6d4613:{NFSU2_TR(0x6d4613);
__builtin_memmove((R+4448),gp(0x80bf08),8);
}
B6d461a:{NFSU2_TR(0x6d461a);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4432))));}
}
B6d461e:{NFSU2_TR(0x6d461e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6d4622:{NFSU2_TR(0x6d4622);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B6d4626:{NFSU2_TR(0x6d4626);
w8(R+4352,u64(r4(R+8)));
}
B6d4629:{NFSU2_TR(0x6d4629);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B6d462d:{NFSU2_TR(0x6d462d);
__builtin_memmove((R+4452),(R+4432),4);
}
B6d4630:{NFSU2_TR(0x6d4630);
w8(R+4432,shr<u64>(r8(R+4432),u64(u32(0x20ull))));
}
B6d4634:{NFSU2_TR(0x6d4634);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6d4638:{NFSU2_TR(0x6d4638);
__builtin_memmove((R+4356),(R+4352),4);
}
B6d463b:{NFSU2_TR(0x6d463b);
w8(R+4368,u64(r4(R+12)));
}
B6d463e:{NFSU2_TR(0x6d463e);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B6d4642:{NFSU2_TR(0x6d4642);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d4648:{NFSU2_TR(0x6d4648);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B6d464c:{NFSU2_TR(0x6d464c);
if(r1(R+518)){{goto L6d4654;}}
}
B6d464e:L6d464e:{c.instructions+=2;NFSU2_TR(0x6d464e);
__builtin_memmove((R+4436),(R+4416),4);
}
B6d4651:{NFSU2_TR(0x6d4651);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B6d4654:L6d4654:{c.instructions+=4;NFSU2_TR(0x6d4654);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4368))));
}
B6d4657:{NFSU2_TR(0x6d4657);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4416))));
}
B6d465a:{NFSU2_TR(0x6d465a);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4356),4);
}
B6d465d:{NFSU2_TR(0x6d465d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d4918:L6d4918:{c.instructions+=2;NFSU2_TR(0x6d4918);
__builtin_memmove((R+0),(R+4),4);
}
B6d491a:{NFSU2_TR(0x6d491a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d491b:L6d491b:{c.instructions+=6;NFSU2_TR(0x6d491b);
__builtin_memmove((R+28),(R+28),4);
}
B6d491d:{NFSU2_TR(0x6d491d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d491e:{NFSU2_TR(0x6d491e);
__builtin_memmove((R+20),(R+16),4);
}
B6d4920:{NFSU2_TR(0x6d4920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4923:{NFSU2_TR(0x6d4923);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d4926:{NFSU2_TR(0x6d4926);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d492b;}}
}
B6d4928:L6d4928:{c.instructions+=2;NFSU2_TR(0x6d4928);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d492a:{NFSU2_TR(0x6d492a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d492b:L6d492b:{c.instructions+=19;NFSU2_TR(0x6d492b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d492e:{NFSU2_TR(0x6d492e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4932:{NFSU2_TR(0x6d4932);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4936:{NFSU2_TR(0x6d4936);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6d4938:{NFSU2_TR(0x6d4938);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d493b:{NFSU2_TR(0x6d493b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d493e:{NFSU2_TR(0x6d493e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4941:{NFSU2_TR(0x6d4941);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4944:{NFSU2_TR(0x6d4944);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d4946:{NFSU2_TR(0x6d4946);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
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
B6d494a:{NFSU2_TR(0x6d494a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d494d:{NFSU2_TR(0x6d494d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4950:{NFSU2_TR(0x6d4950);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4953:{NFSU2_TR(0x6d4953);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4956:{NFSU2_TR(0x6d4956);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4959:{NFSU2_TR(0x6d4959);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d495c:{NFSU2_TR(0x6d495c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d495f:{NFSU2_TR(0x6d495f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d4960:{NFSU2_TR(0x6d4960);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d4963:L6d4963:{c.instructions+=6;NFSU2_TR(0x6d4963);
__builtin_memmove((R+28),(R+28),4);
}
B6d4965:{NFSU2_TR(0x6d4965);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4966:{NFSU2_TR(0x6d4966);
__builtin_memmove((R+20),(R+16),4);
}
B6d4968:{NFSU2_TR(0x6d4968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d496b:{NFSU2_TR(0x6d496b);
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
B6d496d:{NFSU2_TR(0x6d496d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4976;}}
}
B6d496f:L6d496f:{c.instructions+=2;NFSU2_TR(0x6d496f);
w4(R+0,u32(0x80004005ull));
}
B6d4974:{NFSU2_TR(0x6d4974);
{goto L6d49c4;}
}
B6d4976:L6d4976:{c.instructions+=27;NFSU2_TR(0x6d4976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d4978:{NFSU2_TR(0x6d4978);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6d497a:{NFSU2_TR(0x6d497a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d497d:{NFSU2_TR(0x6d497d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4980:{NFSU2_TR(0x6d4980);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4983:{NFSU2_TR(0x6d4983);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4986:{NFSU2_TR(0x6d4986);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4989:{NFSU2_TR(0x6d4989);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d498c:{NFSU2_TR(0x6d498c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d498f:{NFSU2_TR(0x6d498f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4992:{NFSU2_TR(0x6d4992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4995:{NFSU2_TR(0x6d4995);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4998:{NFSU2_TR(0x6d4998);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d499b:{NFSU2_TR(0x6d499b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d499e:{NFSU2_TR(0x6d499e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d49a1:{NFSU2_TR(0x6d49a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d49a4:{NFSU2_TR(0x6d49a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d49a7:{NFSU2_TR(0x6d49a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d49aa:{NFSU2_TR(0x6d49aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d49ad:{NFSU2_TR(0x6d49ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d49b0:{NFSU2_TR(0x6d49b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d49b3:{NFSU2_TR(0x6d49b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d49b6:{NFSU2_TR(0x6d49b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d49b9:{NFSU2_TR(0x6d49b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d49bc:{NFSU2_TR(0x6d49bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d49bf:{NFSU2_TR(0x6d49bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d49c2:{NFSU2_TR(0x6d49c2);
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
B6d49c4:L6d49c4:{c.instructions+=2;NFSU2_TR(0x6d49c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d49c5:{NFSU2_TR(0x6d49c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d49c8:L6d49c8:{c.instructions+=8;NFSU2_TR(0x6d49c8);
__builtin_memmove((R+28),(R+28),4);
}
B6d49ca:{NFSU2_TR(0x6d49ca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d49cb:{NFSU2_TR(0x6d49cb);
__builtin_memmove((R+20),(R+16),4);
}
B6d49cd:{NFSU2_TR(0x6d49cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d49d0:{NFSU2_TR(0x6d49d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d49d1:{NFSU2_TR(0x6d49d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d49d2:{NFSU2_TR(0x6d49d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d49d5:{NFSU2_TR(0x6d49d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d49d6:L6d49d6:{c.instructions+=6;NFSU2_TR(0x6d49d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d49d9:{NFSU2_TR(0x6d49d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d49dc:{NFSU2_TR(0x6d49dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d49df:{NFSU2_TR(0x6d49df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d49e2:{NFSU2_TR(0x6d49e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d49e5:{NFSU2_TR(0x6d49e5);
if(r1(R+518)){{goto L6d49eb;}}
}
B6d49e7:L6d49e7:{c.instructions+=2;NFSU2_TR(0x6d49e7);
__builtin_memmove((R+8),(R+28),4);
}
B6d49e9:{NFSU2_TR(0x6d49e9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d49d6u);}goto L6d49d6;}
}
B6d49eb:L6d49eb:{c.instructions+=8;NFSU2_TR(0x6d49eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d49ef:{NFSU2_TR(0x6d49ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d49f2:{NFSU2_TR(0x6d49f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d49f5:{NFSU2_TR(0x6d49f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d49f8:{NFSU2_TR(0x6d49f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d49fb:{NFSU2_TR(0x6d49fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d49fe:{NFSU2_TR(0x6d49fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d4a02:{NFSU2_TR(0x6d4a02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4a2a;}}
}
B6d4a04:L6d4a04:{c.instructions+=2;NFSU2_TR(0x6d4a04);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4a08:{NFSU2_TR(0x6d4a08);
if(r1(R+518)){{goto L6d4a22;}}
}
B6d4a0a:L6d4a0a:{c.instructions+=8;NFSU2_TR(0x6d4a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4a0d:{NFSU2_TR(0x6d4a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d4a10:{NFSU2_TR(0x6d4a10);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d4a13:{NFSU2_TR(0x6d4a13);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d4a16:{NFSU2_TR(0x6d4a16);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+8))));
}
B6d4a19:{NFSU2_TR(0x6d4a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4a1c:{NFSU2_TR(0x6d4a1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d4a1f:{NFSU2_TR(0x6d4a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4a22:L6d4a22:{c.instructions+=3;NFSU2_TR(0x6d4a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4a25:{NFSU2_TR(0x6d4a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6d4a28:{NFSU2_TR(0x6d4a28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B6d4a2a:L6d4a2a:{c.instructions+=3;NFSU2_TR(0x6d4a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4a2d:{NFSU2_TR(0x6d4a2d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d4a30:{NFSU2_TR(0x6d4a30);
if(r1(R+518)){{goto L6d4a36;}}
}
B6d4a32:L6d4a32:{c.instructions+=2;NFSU2_TR(0x6d4a32);
__builtin_memmove((R+8),(R+0),4);
}
B6d4a34:{NFSU2_TR(0x6d4a34);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d49d6u);}goto L6d49d6;}
}
B6d4a36:L6d4a36:{c.instructions+=5;NFSU2_TR(0x6d4a36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d4a37:{NFSU2_TR(0x6d4a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d4a38:{NFSU2_TR(0x6d4a38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d4a39:{NFSU2_TR(0x6d4a39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d4a3a:{NFSU2_TR(0x6d4a3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d4a3d:L6d4a3d:{c.instructions+=14;NFSU2_TR(0x6d4a3d);
__builtin_memmove((R+28),(R+28),4);
}
B6d4a3f:{NFSU2_TR(0x6d4a3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4a40:{NFSU2_TR(0x6d4a40);
__builtin_memmove((R+20),(R+16),4);
}
B6d4a42:{NFSU2_TR(0x6d4a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4a45:{NFSU2_TR(0x6d4a45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4a48:{NFSU2_TR(0x6d4a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4a4b:{NFSU2_TR(0x6d4a4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4a4c:{NFSU2_TR(0x6d4a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4a4f:{NFSU2_TR(0x6d4a4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d4a52:{NFSU2_TR(0x6d4a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4a55:{NFSU2_TR(0x6d4a55);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d4a58:{NFSU2_TR(0x6d4a58);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6d4a5c:{NFSU2_TR(0x6d4a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4a5f:{NFSU2_TR(0x6d4a5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4a92;}}
}
B6d4a61:L6d4a61:{c.instructions+=2;NFSU2_TR(0x6d4a61);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4a65:{NFSU2_TR(0x6d4a65);
if(r1(R+518)){{goto L6d4a92;}}
}
B6d4a67:L6d4a67:{c.instructions+=3;NFSU2_TR(0x6d4a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4a6a:{NFSU2_TR(0x6d4a6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d4a6c:{NFSU2_TR(0x6d4a6c);
if(r1(R+518)){{goto L6d4a8a;}}
}
B6d4a6e:L6d4a6e:{c.instructions+=12;NFSU2_TR(0x6d4a6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4a6f:{NFSU2_TR(0x6d4a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d4a72:{NFSU2_TR(0x6d4a72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4a73:{NFSU2_TR(0x6d4a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4a76:{NFSU2_TR(0x6d4a76);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6d4a79:{NFSU2_TR(0x6d4a79);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d4a7c:{NFSU2_TR(0x6d4a7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+8))));
}
B6d4a7f:{NFSU2_TR(0x6d4a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4a82:{NFSU2_TR(0x6d4a82);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d4a85:{NFSU2_TR(0x6d4a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4a88:{NFSU2_TR(0x6d4a88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d4a89:{NFSU2_TR(0x6d4a89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d4a8a:L6d4a8a:{c.instructions+=3;NFSU2_TR(0x6d4a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4a8d:{NFSU2_TR(0x6d4a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d4a90:{NFSU2_TR(0x6d4a90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6d4a92:L6d4a92:{c.instructions+=3;NFSU2_TR(0x6d4a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4a95:{NFSU2_TR(0x6d4a95);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d4a98:{NFSU2_TR(0x6d4a98);
if(r1(R+518)){{goto L6d4aa1;}}
}
B6d4a9a:L6d4a9a:{c.instructions+=3;NFSU2_TR(0x6d4a9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4a9b:{NFSU2_TR(0x6d4a9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4a9c:{NFSU2_TR(0x6d4a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d4aa1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d49c8u);}goto L6d49c8;}
}
B6d4aa1:L6d4aa1:{c.instructions+=3;NFSU2_TR(0x6d4aa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d4aa2:{NFSU2_TR(0x6d4aa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d4aa3:{NFSU2_TR(0x6d4aa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d4aa6:L6d4aa6:{c.instructions+=10;NFSU2_TR(0x6d4aa6);
__builtin_memmove((R+28),(R+28),4);
}
B6d4aa8:{NFSU2_TR(0x6d4aa8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4aa9:{NFSU2_TR(0x6d4aa9);
__builtin_memmove((R+20),(R+16),4);
}
B6d4aab:{NFSU2_TR(0x6d4aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4aae:{NFSU2_TR(0x6d4aae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4aaf:{NFSU2_TR(0x6d4aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4ab2:{NFSU2_TR(0x6d4ab2);
__builtin_memmove((R+8),(R+0),4);
}
B6d4ab4:{NFSU2_TR(0x6d4ab4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B6d4ab6:{NFSU2_TR(0x6d4ab6);
u8 U[10];
w4(U+6,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+6))!=(u32(0x0ull))));
w1(R+523,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d4ab8:{NFSU2_TR(0x6d4ab8);
if(r1(R+518)){{goto L6d4aeb;}}
}
B6d4aba:L6d4aba:{c.instructions+=6;NFSU2_TR(0x6d4aba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4abb:{NFSU2_TR(0x6d4abb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4abc:{NFSU2_TR(0x6d4abc);
__builtin_memmove((R+28),(R+24),4);
}
B6d4abe:{NFSU2_TR(0x6d4abe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d4ac1:{NFSU2_TR(0x6d4ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0xfffffffcull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d4ac8:{NFSU2_TR(0x6d4ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4acb:L6d4acb:{c.instructions+=11;NFSU2_TR(0x6d4acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4ace:{NFSU2_TR(0x6d4ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6d4ad1:{NFSU2_TR(0x6d4ad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d4ad4:{NFSU2_TR(0x6d4ad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6d4ad6:{NFSU2_TR(0x6d4ad6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6d4ad8:{NFSU2_TR(0x6d4ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4adb:{NFSU2_TR(0x6d4adb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d4ade:{NFSU2_TR(0x6d4ade);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6d4ae1:{NFSU2_TR(0x6d4ae1);
w1(R+512,u8((r4(R+0))<(u32(0x4ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B6d4ae4:{NFSU2_TR(0x6d4ae4);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B6d4ae7:{NFSU2_TR(0x6d4ae7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4acbu);}goto L6d4acb;}}
}
B6d4ae9:L6d4ae9:{c.instructions+=2;NFSU2_TR(0x6d4ae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d4aea:{NFSU2_TR(0x6d4aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d4aeb:L6d4aeb:{c.instructions+=3;NFSU2_TR(0x6d4aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d4aec:{NFSU2_TR(0x6d4aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d4aed:{NFSU2_TR(0x6d4aed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d4af0:L6d4af0:{c.instructions+=15;NFSU2_TR(0x6d4af0);
__builtin_memmove((R+28),(R+28),4);
}
B6d4af2:{NFSU2_TR(0x6d4af2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4af3:{NFSU2_TR(0x6d4af3);
__builtin_memmove((R+20),(R+16),4);
}
B6d4af5:{NFSU2_TR(0x6d4af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4af8:{NFSU2_TR(0x6d4af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4afb:{NFSU2_TR(0x6d4afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4afe:{NFSU2_TR(0x6d4afe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4aff:{NFSU2_TR(0x6d4aff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4b02:{NFSU2_TR(0x6d4b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4b05:{NFSU2_TR(0x6d4b05);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d4b08:{NFSU2_TR(0x6d4b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4b0b:{NFSU2_TR(0x6d4b0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b0c:{NFSU2_TR(0x6d4b0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d4b0f:{NFSU2_TR(0x6d4b0f);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+12))));
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d4b12:{NFSU2_TR(0x6d4b12);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4b19;}}
}
B6d4b14:L6d4b14:{c.instructions+=2;NFSU2_TR(0x6d4b14);
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
B6d4b17:{NFSU2_TR(0x6d4b17);
{goto L6d4b31;}
}
B6d4b19:L6d4b19:{c.instructions+=4;NFSU2_TR(0x6d4b19);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4b1c:{NFSU2_TR(0x6d4b1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d4b1f:{NFSU2_TR(0x6d4b1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+12))));
}
B6d4b22:{NFSU2_TR(0x6d4b22);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d4b29;}}
}
B6d4b24:L6d4b24:{c.instructions+=3;NFSU2_TR(0x6d4b24);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d4b26:{NFSU2_TR(0x6d4b26);
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
B6d4b27:{NFSU2_TR(0x6d4b27);
{goto L6d4b31;}
}
B6d4b29:L6d4b29:{c.instructions+=2;NFSU2_TR(0x6d4b29);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d4b2b:{NFSU2_TR(0x6d4b2b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4b14u);}goto L6d4b14;}}
}
B6d4b2d:L6d4b2d:{c.instructions+=2;NFSU2_TR(0x6d4b2d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d4b2f:{NFSU2_TR(0x6d4b2f);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d4b31:L6d4b31:{c.instructions+=4;NFSU2_TR(0x6d4b31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d4b32:{NFSU2_TR(0x6d4b32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d4b33:{NFSU2_TR(0x6d4b33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d4b34:{NFSU2_TR(0x6d4b34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d4b37:L6d4b37:{c.instructions+=8;NFSU2_TR(0x6d4b37);
__builtin_memmove((R+28),(R+28),4);
}
B6d4b39:{NFSU2_TR(0x6d4b39);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b3a:{NFSU2_TR(0x6d4b3a);
__builtin_memmove((R+20),(R+16),4);
}
B6d4b3c:{NFSU2_TR(0x6d4b3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b3d:{NFSU2_TR(0x6d4b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4b40:{NFSU2_TR(0x6d4b40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d4b42:{NFSU2_TR(0x6d4b42);
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
B6d4b45:{NFSU2_TR(0x6d4b45);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4b78;}}
}
B6d4b47:L6d4b47:{c.instructions+=7;NFSU2_TR(0x6d4b47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b48:{NFSU2_TR(0x6d4b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4b4b:{NFSU2_TR(0x6d4b4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b4d:{NFSU2_TR(0x6d4b4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b4e:{NFSU2_TR(0x6d4b4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b4f:{NFSU2_TR(0x6d4b4f);
u8 U[4];
w4(U+0,u32(0x69a0c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b54:{NFSU2_TR(0x6d4b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d4b59ull));
TAIL_STATIC(0x69a41du,69a);
}
B6d4b59:L6d4b59:{c.instructions+=6;NFSU2_TR(0x6d4b59);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d4b5b:{NFSU2_TR(0x6d4b5b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d4b5d:{NFSU2_TR(0x6d4b5d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d4b5e:{NFSU2_TR(0x6d4b5e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d4b5f:{NFSU2_TR(0x6d4b5f);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+4)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6d4b61:{NFSU2_TR(0x6d4b61);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4b75;}}
}
B6d4b63:L6d4b63:{c.instructions+=3;NFSU2_TR(0x6d4b63);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d4b66:{NFSU2_TR(0x6d4b66);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+0))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6d4b6a:{NFSU2_TR(0x6d4b6a);
if(r1(R+518)){{goto L6d4b70;}}
}
B6d4b6c:L6d4b6c:{c.instructions+=2;NFSU2_TR(0x6d4b6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d4b6f:{NFSU2_TR(0x6d4b6f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d4b70:L6d4b70:{c.instructions+=3;NFSU2_TR(0x6d4b70);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d4b71:{NFSU2_TR(0x6d4b71);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+10)));
w4(U+14,u32(u32(r4(R+4))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6d4b73:{NFSU2_TR(0x6d4b73);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4b63u);}goto L6d4b63;}}
}
B6d4b75:L6d4b75:{c.instructions+=2;NFSU2_TR(0x6d4b75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6d4b77:{NFSU2_TR(0x6d4b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d4b78:L6d4b78:{c.instructions+=3;NFSU2_TR(0x6d4b78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d4b79:{NFSU2_TR(0x6d4b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d4b7a:{NFSU2_TR(0x6d4b7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d4b7d:L6d4b7d:{c.instructions+=12;NFSU2_TR(0x6d4b7d);
__builtin_memmove((R+28),(R+28),4);
}
B6d4b7f:{NFSU2_TR(0x6d4b7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b80:{NFSU2_TR(0x6d4b80);
__builtin_memmove((R+20),(R+16),4);
}
B6d4b82:{NFSU2_TR(0x6d4b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6d4b85:{NFSU2_TR(0x6d4b85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b86:{NFSU2_TR(0x6d4b86);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6d4b88:{NFSU2_TR(0x6d4b88);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4b8b:{NFSU2_TR(0x6d4b8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4b8e:{NFSU2_TR(0x6d4b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4b91:{NFSU2_TR(0x6d4b91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4b94:{NFSU2_TR(0x6d4b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4b97:{NFSU2_TR(0x6d4b97);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4c7d;}}
}
B6d4b9d:L6d4b9d:{c.instructions+=2;NFSU2_TR(0x6d4b9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b9e:{NFSU2_TR(0x6d4b9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4b9f:L6d4b9f:{c.instructions+=14;NFSU2_TR(0x6d4b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4ba2:{NFSU2_TR(0x6d4ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4ba5:{NFSU2_TR(0x6d4ba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d4ba8:{NFSU2_TR(0x6d4ba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4bab:{NFSU2_TR(0x6d4bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4bae:{NFSU2_TR(0x6d4bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4bb1:{NFSU2_TR(0x6d4bb1);
__builtin_memmove((R+0),(R+8),4);
}
B6d4bb3:{NFSU2_TR(0x6d4bb3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d4bb6:{NFSU2_TR(0x6d4bb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4bb9:{NFSU2_TR(0x6d4bb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d4bbc:{NFSU2_TR(0x6d4bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4bbf:{NFSU2_TR(0x6d4bbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+8,u32(u32(r4(U+8))&u32(u32(0x0ull))));
s4(u32(r4(U+4)),r4(U+8));
}
B6d4bc3:{NFSU2_TR(0x6d4bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6d4bc9:{NFSU2_TR(0x6d4bc9);
if(r1(R+518)){{goto L6d4c6c;}}
}
B6d4bcf:L6d4bcf:{c.instructions+=10;NFSU2_TR(0x6d4bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4bd2:{NFSU2_TR(0x6d4bd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4bd5:{NFSU2_TR(0x6d4bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4bd8:{NFSU2_TR(0x6d4bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4bdc:{NFSU2_TR(0x6d4bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6d4bdf:{NFSU2_TR(0x6d4bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4be2:{NFSU2_TR(0x6d4be2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4be5:{NFSU2_TR(0x6d4be5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d4be7:{NFSU2_TR(0x6d4be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4bea:{NFSU2_TR(0x6d4bea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4c15;}}
}
B6d4bec:L6d4bec:{c.instructions+=7;NFSU2_TR(0x6d4bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4bef:{NFSU2_TR(0x6d4bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d4bf2:{NFSU2_TR(0x6d4bf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4bf5:{NFSU2_TR(0x6d4bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d4bf8:{NFSU2_TR(0x6d4bf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4bfb:{NFSU2_TR(0x6d4bfb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4bfe:{NFSU2_TR(0x6d4bfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4c07;}}
}
B6d4c00:L6d4c00:{c.instructions+=3;NFSU2_TR(0x6d4c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4c03:{NFSU2_TR(0x6d4c03);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6d4c05:{NFSU2_TR(0x6d4c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6d4c07:L6d4c07:{c.instructions+=4;NFSU2_TR(0x6d4c07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4c0a:{NFSU2_TR(0x6d4c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4c0d:{NFSU2_TR(0x6d4c0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6d4c10:{NFSU2_TR(0x6d4c10);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4becu);}goto L6d4bec;}}
}
B6d4c12:L6d4c12:{c.instructions+=1;NFSU2_TR(0x6d4c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d4c15:L6d4c15:{c.instructions+=11;NFSU2_TR(0x6d4c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4c18:{NFSU2_TR(0x6d4c18);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d4c1b:{NFSU2_TR(0x6d4c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4c1e:{NFSU2_TR(0x6d4c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6d4c21:{NFSU2_TR(0x6d4c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4c24:{NFSU2_TR(0x6d4c24);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d4c27:{NFSU2_TR(0x6d4c27);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d4c29:{NFSU2_TR(0x6d4c29);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d4c2b:{NFSU2_TR(0x6d4c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4c2e:{NFSU2_TR(0x6d4c2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4c31:{NFSU2_TR(0x6d4c31);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4c58;}}
}
B6d4c33:L6d4c33:{c.instructions+=6;NFSU2_TR(0x6d4c33);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d4c36:{NFSU2_TR(0x6d4c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4c39:{NFSU2_TR(0x6d4c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4c3c:{NFSU2_TR(0x6d4c3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d4c3f:{NFSU2_TR(0x6d4c3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4c43:{NFSU2_TR(0x6d4c43);
if(r1(R+518)){{goto L6d4c4c;}}
}
B6d4c45:L6d4c45:{c.instructions+=3;NFSU2_TR(0x6d4c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4c48:{NFSU2_TR(0x6d4c48);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6d4c4a:{NFSU2_TR(0x6d4c4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B6d4c4c:L6d4c4c:{c.instructions+=5;NFSU2_TR(0x6d4c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4c4f:{NFSU2_TR(0x6d4c4f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d4c50:{NFSU2_TR(0x6d4c50);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6d4c53:{NFSU2_TR(0x6d4c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4c56:{NFSU2_TR(0x6d4c56);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4c33u);}goto L6d4c33;}}
}
B6d4c58:L6d4c58:{c.instructions+=3;NFSU2_TR(0x6d4c58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4c5b:{NFSU2_TR(0x6d4c5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4c5e:{NFSU2_TR(0x6d4c5e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4c63;}}
}
B6d4c60:L6d4c60:{c.instructions+=1;NFSU2_TR(0x6d4c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4c63:L6d4c63:{c.instructions+=3;NFSU2_TR(0x6d4c63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4c66:{NFSU2_TR(0x6d4c66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+8))));
}
B6d4c69:{NFSU2_TR(0x6d4c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4c6c:L6d4c6c:{c.instructions+=4;NFSU2_TR(0x6d4c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4c6f:{NFSU2_TR(0x6d4c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4c72:{NFSU2_TR(0x6d4c72);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d4c75:{NFSU2_TR(0x6d4c75);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4b9fu);}goto L6d4b9f;}}
}
B6d4c7b:L6d4c7b:{c.instructions+=2;NFSU2_TR(0x6d4c7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d4c7c:{NFSU2_TR(0x6d4c7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d4c7d:L6d4c7d:{c.instructions+=4;NFSU2_TR(0x6d4c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4c80:{NFSU2_TR(0x6d4c80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d4c82:{NFSU2_TR(0x6d4c82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d4c83:{NFSU2_TR(0x6d4c83);
if(r1(R+518)){{goto L6d4c8a;}}
}
B6d4c85:L6d4c85:{c.instructions+=2;NFSU2_TR(0x6d4c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4c88:{NFSU2_TR(0x6d4c88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6d4c8a:L6d4c8a:{c.instructions+=3;NFSU2_TR(0x6d4c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4c8d:{NFSU2_TR(0x6d4c8d);
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
B6d4c8f:{NFSU2_TR(0x6d4c8f);
if(r1(R+518)){{goto L6d4c96;}}
}
B6d4c91:L6d4c91:{c.instructions+=2;NFSU2_TR(0x6d4c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4c94:{NFSU2_TR(0x6d4c94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6d4c96:L6d4c96:{c.instructions+=2;NFSU2_TR(0x6d4c96);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6d4c97:{NFSU2_TR(0x6d4c97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d4c9a:L6d4c9a:{c.instructions+=24;NFSU2_TR(0x6d4c9a);
__builtin_memmove((R+28),(R+28),4);
}
B6d4c9c:{NFSU2_TR(0x6d4c9c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4c9d:{NFSU2_TR(0x6d4c9d);
__builtin_memmove((R+20),(R+16),4);
}
B6d4c9f:{NFSU2_TR(0x6d4c9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B6d4ca2:{NFSU2_TR(0x6d4ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4ca5:{NFSU2_TR(0x6d4ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4ca9:{NFSU2_TR(0x6d4ca9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4caa:{NFSU2_TR(0x6d4caa);
__builtin_memmove((R+12),(R+4),4);
}
B6d4cac:{NFSU2_TR(0x6d4cac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d4caf:{NFSU2_TR(0x6d4caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4cb2:{NFSU2_TR(0x6d4cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4cb5:{NFSU2_TR(0x6d4cb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d4cb8:{NFSU2_TR(0x6d4cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4cbb:{NFSU2_TR(0x6d4cbb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4cbc:{NFSU2_TR(0x6d4cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4cbf:{NFSU2_TR(0x6d4cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4cc2:{NFSU2_TR(0x6d4cc2);
__builtin_memmove((R+0),(R+8),4);
}
B6d4cc4:{NFSU2_TR(0x6d4cc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4cc5:{NFSU2_TR(0x6d4cc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4cc8:{NFSU2_TR(0x6d4cc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d4ccb:{NFSU2_TR(0x6d4ccb);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d4ccf:{NFSU2_TR(0x6d4ccf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4cd2:{NFSU2_TR(0x6d4cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4cd5:{NFSU2_TR(0x6d4cd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d5122u,6d5);}
}
B6d4cdb:L6d4cdb:{c.instructions+=16;NFSU2_TR(0x6d4cdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4cde:{NFSU2_TR(0x6d4cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6d4ce0:{NFSU2_TR(0x6d4ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4ce3:{NFSU2_TR(0x6d4ce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d4ce6:{NFSU2_TR(0x6d4ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4ce9:{NFSU2_TR(0x6d4ce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4cec:{NFSU2_TR(0x6d4cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4cef:{NFSU2_TR(0x6d4cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4cf2:{NFSU2_TR(0x6d4cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4cf5:{NFSU2_TR(0x6d4cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4cf8:{NFSU2_TR(0x6d4cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4cfb:{NFSU2_TR(0x6d4cfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d4cfe:{NFSU2_TR(0x6d4cfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d4d01:{NFSU2_TR(0x6d4d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4d04:{NFSU2_TR(0x6d4d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6d4d07:{NFSU2_TR(0x6d4d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4d0a:L6d4d0a:{c.instructions+=1;NFSU2_TR(0x6d4d0a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6d4d0c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4d0au);}goto L6d4d0a;}
}
B6d4d0c:L6d4d0c:{c.instructions+=4;NFSU2_TR(0x6d4d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4d10:{NFSU2_TR(0x6d4d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4d13:{NFSU2_TR(0x6d4d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4d16:{NFSU2_TR(0x6d4d16);
{goto L6d4d7e;}
}
B6d4d18:L6d4d18:{c.instructions+=8;NFSU2_TR(0x6d4d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4d1b:{NFSU2_TR(0x6d4d1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d4d1e:{NFSU2_TR(0x6d4d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4d21:{NFSU2_TR(0x6d4d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4d24:{NFSU2_TR(0x6d4d24);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d4d27:{NFSU2_TR(0x6d4d27);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d4d29:{NFSU2_TR(0x6d4d29);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4d2c:{NFSU2_TR(0x6d4d2c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4d49;}}
}
B6d4d2e:L6d4d2e:{c.instructions+=10;NFSU2_TR(0x6d4d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4d31:{NFSU2_TR(0x6d4d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4d34:{NFSU2_TR(0x6d4d34);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4d37:{NFSU2_TR(0x6d4d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4d3a:{NFSU2_TR(0x6d4d3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4d3d:{NFSU2_TR(0x6d4d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4d40:{NFSU2_TR(0x6d4d40);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d4d41:{NFSU2_TR(0x6d4d41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4d44:{NFSU2_TR(0x6d4d44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d4d47:{NFSU2_TR(0x6d4d47);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4d2eu);}goto L6d4d2e;}}
}
B6d4d49:L6d4d49:{c.instructions+=3;NFSU2_TR(0x6d4d49);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d4d4b:{NFSU2_TR(0x6d4d4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4d4e:{NFSU2_TR(0x6d4d4e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4d6b;}}
}
B6d4d50:L6d4d50:{c.instructions+=10;NFSU2_TR(0x6d4d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4d53:{NFSU2_TR(0x6d4d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4d56:{NFSU2_TR(0x6d4d56);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4d59:{NFSU2_TR(0x6d4d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4d5c:{NFSU2_TR(0x6d4d5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4d5f:{NFSU2_TR(0x6d4d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4d62:{NFSU2_TR(0x6d4d62);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d4d63:{NFSU2_TR(0x6d4d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4d66:{NFSU2_TR(0x6d4d66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d4d69:{NFSU2_TR(0x6d4d69);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4d50u);}goto L6d4d50;}}
}
B6d4d6b:L6d4d6b:{c.instructions+=7;NFSU2_TR(0x6d4d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4d6e:{NFSU2_TR(0x6d4d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4d71:{NFSU2_TR(0x6d4d71);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d4d74:{NFSU2_TR(0x6d4d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4d77:{NFSU2_TR(0x6d4d77);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d4d7a:{NFSU2_TR(0x6d4d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4d7d:{NFSU2_TR(0x6d4d7d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d4d7e:L6d4d7e:{c.instructions+=3;NFSU2_TR(0x6d4d7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d4d81:{NFSU2_TR(0x6d4d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4d84:{NFSU2_TR(0x6d4d84);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4d18u);}goto L6d4d18;}}
}
B6d4d86:L6d4d86:{c.instructions+=3;NFSU2_TR(0x6d4d86);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d4d88:{NFSU2_TR(0x6d4d88);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4d8b:{NFSU2_TR(0x6d4d8b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4dad;}}
}
B6d4d8d:L6d4d8d:{c.instructions+=12;NFSU2_TR(0x6d4d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4d90:{NFSU2_TR(0x6d4d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4d93:{NFSU2_TR(0x6d4d93);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d4d96:{NFSU2_TR(0x6d4d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4d99:{NFSU2_TR(0x6d4d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4d9c:{NFSU2_TR(0x6d4d9c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d4d9e:{NFSU2_TR(0x6d4d9e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4da1:{NFSU2_TR(0x6d4da1);
__builtin_memmove((R+4),(R+518),1);
}
B6d4da4:{NFSU2_TR(0x6d4da4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d4da5:{NFSU2_TR(0x6d4da5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6d4da8:{NFSU2_TR(0x6d4da8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4dab:{NFSU2_TR(0x6d4dab);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4d8du);}goto L6d4d8d;}}
}
B6d4dad:L6d4dad:{c.instructions+=2;NFSU2_TR(0x6d4dad);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4db1:{NFSU2_TR(0x6d4db1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d4dc2;}}
}
B6d4db3:L6d4db3:{c.instructions+=5;NFSU2_TR(0x6d4db3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4db6:{NFSU2_TR(0x6d4db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4dba:{NFSU2_TR(0x6d4dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4dbd:{NFSU2_TR(0x6d4dbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4dc0:{NFSU2_TR(0x6d4dc0);
{goto L6d4ddb;}
}
B6d4dc2:L6d4dc2:{c.instructions+=1;NFSU2_TR(0x6d4dc2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6d50f7u,6d5);}
}
B6d4dc8:L6d4dc8:{c.instructions+=5;NFSU2_TR(0x6d4dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4dcb:{NFSU2_TR(0x6d4dcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d4dce:{NFSU2_TR(0x6d4dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4dd1:{NFSU2_TR(0x6d4dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4dd4:{NFSU2_TR(0x6d4dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4ddb:L6d4ddb:{c.instructions+=5;NFSU2_TR(0x6d4ddb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d4ddd:{NFSU2_TR(0x6d4ddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4de0:{NFSU2_TR(0x6d4de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4de3:{NFSU2_TR(0x6d4de3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4de6:{NFSU2_TR(0x6d4de6);
{goto L6d4f07;}
}
B6d4deb:L6d4deb:{c.instructions+=7;NFSU2_TR(0x6d4deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4dee:{NFSU2_TR(0x6d4dee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d4df1:{NFSU2_TR(0x6d4df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4df4:{NFSU2_TR(0x6d4df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4df7:{NFSU2_TR(0x6d4df7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6d4dfa:{NFSU2_TR(0x6d4dfa);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d4dfe:{NFSU2_TR(0x6d4dfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4e4a;}}
}
B6d4e00:L6d4e00:{c.instructions+=11;NFSU2_TR(0x6d4e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4e03:{NFSU2_TR(0x6d4e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4e06:{NFSU2_TR(0x6d4e06);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d4e09:{NFSU2_TR(0x6d4e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4e0c:{NFSU2_TR(0x6d4e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d4e0e:{NFSU2_TR(0x6d4e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4e11:{NFSU2_TR(0x6d4e11);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d4e14:{NFSU2_TR(0x6d4e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4e17:{NFSU2_TR(0x6d4e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4e1a:{NFSU2_TR(0x6d4e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4e1d:{NFSU2_TR(0x6d4e1d);
{goto L6d4e30;}
}
B6d4e1f:L6d4e1f:{c.instructions+=2;NFSU2_TR(0x6d4e1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4e22:{NFSU2_TR(0x6d4e22);
if(r1(R+518)){{goto L6d4e3e;}}
}
B6d4e24:L6d4e24:{c.instructions+=4;NFSU2_TR(0x6d4e24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4e27:{NFSU2_TR(0x6d4e27);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d4e2a:{NFSU2_TR(0x6d4e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4e2d:{NFSU2_TR(0x6d4e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4e30:L6d4e30:{c.instructions+=2;NFSU2_TR(0x6d4e30);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d4e33:{NFSU2_TR(0x6d4e33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4e1fu);}goto L6d4e1f;}}
}
B6d4e35:L6d4e35:{c.instructions+=2;NFSU2_TR(0x6d4e35);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4e38:{NFSU2_TR(0x6d4e38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d50f7u,6d5);}
}
B6d4e3e:L6d4e3e:{c.instructions+=2;NFSU2_TR(0x6d4e3e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4e41:{NFSU2_TR(0x6d4e41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d50f7u,6d5);}
}
B6d4e47:L6d4e47:{c.instructions+=1;NFSU2_TR(0x6d4e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4e4a:L6d4e4a:{c.instructions+=2;NFSU2_TR(0x6d4e4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4e4d:{NFSU2_TR(0x6d4e4d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4e52;}}
}
B6d4e4f:L6d4e4f:{c.instructions+=1;NFSU2_TR(0x6d4e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4e52:L6d4e52:{c.instructions+=2;NFSU2_TR(0x6d4e52);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4e55:{NFSU2_TR(0x6d4e55);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d4e5b;}}
}
B6d4e57:L6d4e57:{c.instructions+=2;NFSU2_TR(0x6d4e57);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d4e58:{NFSU2_TR(0x6d4e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4e5b:L6d4e5b:{c.instructions+=10;NFSU2_TR(0x6d4e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4e5e:{NFSU2_TR(0x6d4e5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d4e61:{NFSU2_TR(0x6d4e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4e64:{NFSU2_TR(0x6d4e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4e67:{NFSU2_TR(0x6d4e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6d4e6a:{NFSU2_TR(0x6d4e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4e6d:{NFSU2_TR(0x6d4e6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d4e70:{NFSU2_TR(0x6d4e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4e73:{NFSU2_TR(0x6d4e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4e76:{NFSU2_TR(0x6d4e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6d4e79:L6d4e79:{c.instructions+=1;NFSU2_TR(0x6d4e79);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6d4e7b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4e79u);}goto L6d4e79;}
}
B6d4e7b:L6d4e7b:{c.instructions+=19;NFSU2_TR(0x6d4e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4e7e:{NFSU2_TR(0x6d4e7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+8))));
}
B6d4e81:{NFSU2_TR(0x6d4e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4e84:{NFSU2_TR(0x6d4e84);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d4e87:{NFSU2_TR(0x6d4e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4e8a:{NFSU2_TR(0x6d4e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4e8d:{NFSU2_TR(0x6d4e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4e90:{NFSU2_TR(0x6d4e90);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d4e93:{NFSU2_TR(0x6d4e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4e96:{NFSU2_TR(0x6d4e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B6d4e99:{NFSU2_TR(0x6d4e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4e9c:{NFSU2_TR(0x6d4e9c);
w1(R+512,u8((r4(R+24))!=(u32(0x0ull))));
w4(R+24,u32(0-u32(r4(R+24))));
}
B6d4e9e:{NFSU2_TR(0x6d4e9e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d4ea0:{NFSU2_TR(0x6d4ea0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d4ea1:{NFSU2_TR(0x6d4ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4ea4:{NFSU2_TR(0x6d4ea4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d4ea6:{NFSU2_TR(0x6d4ea6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4ea9:{NFSU2_TR(0x6d4ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4eac:{NFSU2_TR(0x6d4eac);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4ee8;}}
}
B6d4eae:L6d4eae:{c.instructions+=1;NFSU2_TR(0x6d4eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4eb1:L6d4eb1:{c.instructions+=8;NFSU2_TR(0x6d4eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4eb4:{NFSU2_TR(0x6d4eb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d4eb7:{NFSU2_TR(0x6d4eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4eba:{NFSU2_TR(0x6d4eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4ebd:{NFSU2_TR(0x6d4ebd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6d4ec0:{NFSU2_TR(0x6d4ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4ec3:{NFSU2_TR(0x6d4ec3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4ec6:{NFSU2_TR(0x6d4ec6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4ecd;}}
}
B6d4ec8:L6d4ec8:{c.instructions+=2;NFSU2_TR(0x6d4ec8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4ecb:{NFSU2_TR(0x6d4ecb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4edc;}}
}
B6d4ecd:L6d4ecd:{c.instructions+=6;NFSU2_TR(0x6d4ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4ed0:{NFSU2_TR(0x6d4ed0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d4ed2:{NFSU2_TR(0x6d4ed2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4ed5:{NFSU2_TR(0x6d4ed5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6d4ed8:{NFSU2_TR(0x6d4ed8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6d4ed9:{NFSU2_TR(0x6d4ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4edc:L6d4edc:{c.instructions+=5;NFSU2_TR(0x6d4edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4edf:{NFSU2_TR(0x6d4edf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d4ee0:{NFSU2_TR(0x6d4ee0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6d4ee3:{NFSU2_TR(0x6d4ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4ee6:{NFSU2_TR(0x6d4ee6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4eb1u);}goto L6d4eb1;}}
}
B6d4ee8:L6d4ee8:{c.instructions+=3;NFSU2_TR(0x6d4ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4eeb:{NFSU2_TR(0x6d4eeb);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d4eef:{NFSU2_TR(0x6d4eef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4f04;}}
}
B6d4ef1:L6d4ef1:{c.instructions+=4;NFSU2_TR(0x6d4ef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4ef4:{NFSU2_TR(0x6d4ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4ef7:{NFSU2_TR(0x6d4ef7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4efa:{NFSU2_TR(0x6d4efa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4f04;}}
}
B6d4efc:L6d4efc:{c.instructions+=3;NFSU2_TR(0x6d4efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4eff:{NFSU2_TR(0x6d4eff);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4f02:{NFSU2_TR(0x6d4f02);
if(r1(R+518)){{goto L6d4f16;}}
}
B6d4f04:L6d4f04:{c.instructions+=1;NFSU2_TR(0x6d4f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4f07:L6d4f07:{c.instructions+=4;NFSU2_TR(0x6d4f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6d4f0a:{NFSU2_TR(0x6d4f0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6d4f0d:{NFSU2_TR(0x6d4f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4f10:{NFSU2_TR(0x6d4f10);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4debu);}goto L6d4deb;}}
}
B6d4f16:L6d4f16:{c.instructions+=3;NFSU2_TR(0x6d4f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4f19:{NFSU2_TR(0x6d4f19);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d4f1c:{NFSU2_TR(0x6d4f1c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6d50f7u,6d5);}
}
B6d4f22:L6d4f22:{c.instructions+=3;NFSU2_TR(0x6d4f22);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d4f23:{NFSU2_TR(0x6d4f23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6d4f26:{NFSU2_TR(0x6d4f26);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6d4f39;}}
}
B6d4f28:L6d4f28:{c.instructions+=5;NFSU2_TR(0x6d4f28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d4f2b:{NFSU2_TR(0x6d4f2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d4f2c:{NFSU2_TR(0x6d4f2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6d4f2f:{NFSU2_TR(0x6d4f2f);
__builtin_memmove((R+4),(R+12),4);
}
B6d4f31:{NFSU2_TR(0x6d4f31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d4f36ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4b37u);}goto L6d4b37;}
}
B6d4f36:L6d4f36:{c.instructions+=1;NFSU2_TR(0x6d4f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d4f39:L6d4f39:{c.instructions+=2;NFSU2_TR(0x6d4f39);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4f3d:{NFSU2_TR(0x6d4f3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4fb1;}}
}
B6d4f3f:L6d4f3f:{c.instructions+=2;NFSU2_TR(0x6d4f3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6d4f43:{NFSU2_TR(0x6d4f43);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d4f78;}}
}
B6d4f45:L6d4f45:{c.instructions+=4;NFSU2_TR(0x6d4f45);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d4f47:{NFSU2_TR(0x6d4f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4f4a:{NFSU2_TR(0x6d4f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4f4d:{NFSU2_TR(0x6d4f4d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4f6e;}}
}
B6d4f4f:L6d4f4f:{c.instructions+=4;NFSU2_TR(0x6d4f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4f52:{NFSU2_TR(0x6d4f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4f55:{NFSU2_TR(0x6d4f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4f58:{NFSU2_TR(0x6d4f58);
__builtin_memmove((R+24),(R+8),4);
}
B6d4f5a:L6d4f5a:{c.instructions+=4;NFSU2_TR(0x6d4f5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6d4f5c:{NFSU2_TR(0x6d4f5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d4f5f:{NFSU2_TR(0x6d4f5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4f63:{NFSU2_TR(0x6d4f63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4f68;}}
}
B6d4f65:L6d4f65:{c.instructions+=1;NFSU2_TR(0x6d4f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4f68:L6d4f68:{c.instructions+=3;NFSU2_TR(0x6d4f68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6d4f6b:{NFSU2_TR(0x6d4f6b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6d4f6c:{NFSU2_TR(0x6d4f6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4f5au);}goto L6d4f5a;}}
}
B6d4f6e:L6d4f6e:{c.instructions+=3;NFSU2_TR(0x6d4f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4f71:{NFSU2_TR(0x6d4f71);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4f74:{NFSU2_TR(0x6d4f74);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d4fb1;}}
}
B6d4f76:L6d4f76:{c.instructions+=1;NFSU2_TR(0x6d4f76);
{goto L6d4faa;}
}
B6d4f78:L6d4f78:{c.instructions+=5;NFSU2_TR(0x6d4f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4f7b:{NFSU2_TR(0x6d4f7b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d4f7d:{NFSU2_TR(0x6d4f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4f80:{NFSU2_TR(0x6d4f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4f83:{NFSU2_TR(0x6d4f83);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4fa5;}}
}
B6d4f85:L6d4f85:{c.instructions+=3;NFSU2_TR(0x6d4f85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4f88:{NFSU2_TR(0x6d4f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4f8b:{NFSU2_TR(0x6d4f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4f8e:L6d4f8e:{c.instructions+=4;NFSU2_TR(0x6d4f8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6d4f90:{NFSU2_TR(0x6d4f90);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d4f93:{NFSU2_TR(0x6d4f93);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4f97:{NFSU2_TR(0x6d4f97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d4f9c;}}
}
B6d4f99:L6d4f99:{c.instructions+=1;NFSU2_TR(0x6d4f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4f9c:L6d4f9c:{c.instructions+=3;NFSU2_TR(0x6d4f9c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6d4f9f:{NFSU2_TR(0x6d4f9f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6d4fa0:{NFSU2_TR(0x6d4fa0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4f8eu);}goto L6d4f8e;}}
}
B6d4fa2:L6d4fa2:{c.instructions+=1;NFSU2_TR(0x6d4fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4fa5:L6d4fa5:{c.instructions+=2;NFSU2_TR(0x6d4fa5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6d4fa8:{NFSU2_TR(0x6d4fa8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d4fb1;}}
}
B6d4faa:L6d4faa:{c.instructions+=1;NFSU2_TR(0x6d4faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d4fb1:L6d4fb1:{c.instructions+=3;NFSU2_TR(0x6d4fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4fb4:{NFSU2_TR(0x6d4fb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6d4fb7:{NFSU2_TR(0x6d4fb7);
if(r1(R+512)){{goto L6d4fbc;}}
}
B6d4fb9:L6d4fb9:{c.instructions+=1;NFSU2_TR(0x6d4fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d4fbc:L6d4fbc:{c.instructions+=3;NFSU2_TR(0x6d4fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4fbf:{NFSU2_TR(0x6d4fbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4fc2:{NFSU2_TR(0x6d4fc2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d4fc7;}}
}
B6d4fc4:L6d4fc4:{c.instructions+=1;NFSU2_TR(0x6d4fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d4fc7:L6d4fc7:{c.instructions+=2;NFSU2_TR(0x6d4fc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4fcb:{NFSU2_TR(0x6d4fcb);
if(r1(R+518)){TAIL_STATIC(0x6d5084u,6d5);}
}
B6d4fd1:L6d4fd1:{c.instructions+=5;NFSU2_TR(0x6d4fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4fd4:{NFSU2_TR(0x6d4fd4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6d4fd6:{NFSU2_TR(0x6d4fd6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d4fd8:{NFSU2_TR(0x6d4fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4fdb:{NFSU2_TR(0x6d4fdb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d4ffc;}}
}
B6d4fdd:L6d4fdd:{c.instructions+=12;NFSU2_TR(0x6d4fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4fe0:{NFSU2_TR(0x6d4fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4fe3:{NFSU2_TR(0x6d4fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d4fe6:{NFSU2_TR(0x6d4fe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d4fe9:{NFSU2_TR(0x6d4fe9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d4fec:{NFSU2_TR(0x6d4fec);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d4fee:{NFSU2_TR(0x6d4fee);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d4ff1:{NFSU2_TR(0x6d4ff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6d4ff4:{NFSU2_TR(0x6d4ff4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d4ff5:{NFSU2_TR(0x6d4ff5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6d4ff7:{NFSU2_TR(0x6d4ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d4ffa:{NFSU2_TR(0x6d4ffa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d4fddu);}goto L6d4fdd;}}
}
B6d4ffc:L6d4ffc:{c.instructions+=2;NFSU2_TR(0x6d4ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d4fff:{NFSU2_TR(0x6d4fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
TAIL_STATIC(0x6d5002u,6d5);
}
XIT:NFSU2_TR_EXIT(0x6d4,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
