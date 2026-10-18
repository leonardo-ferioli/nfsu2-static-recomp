#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_58f(u8* __restrict R,Cpu& c);
u32 body_5a8(u8* __restrict R,Cpu& c);
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e4(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6da(u8* __restrict R,Cpu& c);
u32 body_6de(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x782,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x782,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_782(u8* __restrict R,Cpu& c);
u32 page_782(Cpu& c){return body_782(c.regs.data(),c);}
__attribute__((noinline)) u32 body_782(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x782000:goto L782000;
case 0x782005:c.instructions+=1;goto B782005;
case 0x782010:goto L782010;
case 0x782015:c.instructions+=1;goto B782015;
case 0x782020:goto L782020;
case 0x782025:c.instructions+=1;goto B782025;
case 0x782030:goto L782030;
case 0x782035:c.instructions+=1;goto B782035;
case 0x782040:goto L782040;
case 0x782045:c.instructions+=1;goto B782045;
case 0x782050:goto L782050;
case 0x782055:c.instructions+=1;goto B782055;
case 0x782060:goto L782060;
case 0x782065:c.instructions+=4;goto B782065;
case 0x782067:c.instructions+=3;goto B782067;
case 0x782069:c.instructions+=2;goto B782069;
case 0x78206e:c.instructions+=1;goto B78206e;
case 0x782073:goto L782073;
case 0x782080:goto L782080;
case 0x782085:c.instructions+=1;goto B782085;
case 0x782090:goto L782090;
case 0x7820a0:goto L7820a0;
case 0x7820b0:goto L7820b0;
case 0x7820c0:goto L7820c0;
case 0x7820d0:goto L7820d0;
case 0x7820e0:goto L7820e0;
case 0x7820f0:goto L7820f0;
case 0x782100:goto L782100;
case 0x782110:goto L782110;
case 0x782120:goto L782120;
case 0x782130:goto L782130;
case 0x782140:goto L782140;
case 0x782150:goto L782150;
case 0x782160:goto L782160;
case 0x782170:goto L782170;
case 0x782180:goto L782180;
case 0x782190:goto L782190;
case 0x782195:c.instructions+=4;goto B782195;
case 0x782197:c.instructions+=3;goto B782197;
case 0x782199:c.instructions+=2;goto B782199;
case 0x78219e:c.instructions+=1;goto B78219e;
case 0x7821a3:goto L7821a3;
case 0x7821b0:goto L7821b0;
case 0x7821b5:c.instructions+=4;goto B7821b5;
case 0x7821b7:c.instructions+=3;goto B7821b7;
case 0x7821b9:c.instructions+=2;goto B7821b9;
case 0x7821be:c.instructions+=1;goto B7821be;
case 0x7821c3:goto L7821c3;
case 0x7821d0:goto L7821d0;
case 0x7821da:c.instructions+=1;goto B7821da;
case 0x7821e0:goto L7821e0;
case 0x7821e5:c.instructions+=1;goto B7821e5;
case 0x7821f0:goto L7821f0;
case 0x7821f5:c.instructions+=1;goto B7821f5;
case 0x782200:goto L782200;
case 0x782205:c.instructions+=1;goto B782205;
case 0x782210:goto L782210;
case 0x782215:c.instructions+=1;goto B782215;
case 0x782220:goto L782220;
case 0x782225:c.instructions+=1;goto B782225;
case 0x782230:goto L782230;
case 0x782235:c.instructions+=1;goto B782235;
case 0x782240:goto L782240;
case 0x782245:c.instructions+=1;goto B782245;
case 0x782250:goto L782250;
case 0x782255:c.instructions+=1;goto B782255;
case 0x782260:goto L782260;
case 0x782265:c.instructions+=1;goto B782265;
case 0x782270:goto L782270;
case 0x782275:c.instructions+=1;goto B782275;
case 0x782280:goto L782280;
case 0x782285:c.instructions+=1;goto B782285;
case 0x782290:goto L782290;
case 0x782295:c.instructions+=4;goto B782295;
case 0x782297:c.instructions+=3;goto B782297;
case 0x78229c:c.instructions+=2;goto B78229c;
case 0x7822a1:c.instructions+=1;goto B7822a1;
case 0x7822a6:goto L7822a6;
case 0x7822b0:goto L7822b0;
case 0x7822b5:c.instructions+=1;goto B7822b5;
case 0x7822c0:goto L7822c0;
case 0x7822d0:goto L7822d0;
case 0x7822e0:goto L7822e0;
case 0x7822f0:goto L7822f0;
case 0x782300:goto L782300;
case 0x782310:goto L782310;
case 0x782320:goto L782320;
case 0x782330:goto L782330;
case 0x782340:goto L782340;
case 0x782345:c.instructions+=4;goto B782345;
case 0x782347:c.instructions+=3;goto B782347;
case 0x782349:c.instructions+=2;goto B782349;
case 0x78234e:c.instructions+=1;goto B78234e;
case 0x782353:goto L782353;
case 0x782360:goto L782360;
case 0x782365:c.instructions+=1;goto B782365;
case 0x782370:goto L782370;
case 0x782375:c.instructions+=1;goto B782375;
case 0x782380:goto L782380;
case 0x782385:c.instructions+=1;goto B782385;
case 0x782390:goto L782390;
case 0x782395:c.instructions+=1;goto B782395;
case 0x7823a0:goto L7823a0;
case 0x7823a5:c.instructions+=1;goto B7823a5;
case 0x7823b0:goto L7823b0;
case 0x7823b5:c.instructions+=1;goto B7823b5;
case 0x7823c0:goto L7823c0;
case 0x7823c5:c.instructions+=1;goto B7823c5;
case 0x7823d0:goto L7823d0;
case 0x7823d5:c.instructions+=1;goto B7823d5;
case 0x7823e0:goto L7823e0;
case 0x7823e5:c.instructions+=1;goto B7823e5;
case 0x7823f0:goto L7823f0;
case 0x7823f5:c.instructions+=1;goto B7823f5;
case 0x782400:goto L782400;
case 0x782405:c.instructions+=1;goto B782405;
case 0x782410:goto L782410;
case 0x782415:c.instructions+=1;goto B782415;
case 0x782420:goto L782420;
case 0x782425:c.instructions+=1;goto B782425;
case 0x782430:goto L782430;
case 0x782435:c.instructions+=1;goto B782435;
case 0x782440:goto L782440;
case 0x782450:goto L782450;
case 0x782460:goto L782460;
case 0x782470:goto L782470;
case 0x782475:c.instructions+=4;goto B782475;
case 0x782477:c.instructions+=3;goto B782477;
case 0x78247c:c.instructions+=2;goto B78247c;
case 0x782481:c.instructions+=1;goto B782481;
case 0x782486:goto L782486;
case 0x782490:goto L782490;
case 0x7824a0:goto L7824a0;
case 0x7824a5:c.instructions+=1;goto B7824a5;
case 0x7824b0:goto L7824b0;
case 0x7824b5:c.instructions+=1;goto B7824b5;
case 0x7824c0:goto L7824c0;
case 0x7824c5:c.instructions+=1;goto B7824c5;
case 0x7824d0:goto L7824d0;
case 0x7824d5:c.instructions+=1;goto B7824d5;
case 0x7824e0:goto L7824e0;
case 0x7824e5:c.instructions+=1;goto B7824e5;
case 0x7824f0:goto L7824f0;
case 0x7824f5:c.instructions+=4;goto B7824f5;
case 0x7824f7:c.instructions+=3;goto B7824f7;
case 0x7824fc:c.instructions+=2;goto B7824fc;
case 0x782501:c.instructions+=1;goto B782501;
case 0x782506:goto L782506;
case 0x782510:goto L782510;
case 0x782520:goto L782520;
case 0x782525:c.instructions+=4;goto B782525;
case 0x782527:c.instructions+=3;goto B782527;
case 0x782529:c.instructions+=2;goto B782529;
case 0x78252e:c.instructions+=1;goto B78252e;
case 0x782533:goto L782533;
case 0x782540:goto L782540;
case 0x782545:c.instructions+=4;goto B782545;
case 0x782547:c.instructions+=3;goto B782547;
case 0x782549:c.instructions+=2;goto B782549;
case 0x78254e:c.instructions+=1;goto B78254e;
case 0x782553:goto L782553;
case 0x782560:goto L782560;
case 0x782565:c.instructions+=4;goto B782565;
case 0x782567:c.instructions+=3;goto B782567;
case 0x782569:c.instructions+=2;goto B782569;
case 0x78256e:c.instructions+=1;goto B78256e;
case 0x782573:goto L782573;
case 0x782580:goto L782580;
case 0x782585:c.instructions+=1;goto B782585;
case 0x782590:goto L782590;
case 0x782595:c.instructions+=1;goto B782595;
case 0x7825a0:goto L7825a0;
case 0x7825a5:c.instructions+=1;goto B7825a5;
case 0x7825b0:goto L7825b0;
case 0x7825b5:c.instructions+=1;goto B7825b5;
case 0x7825c0:goto L7825c0;
case 0x7825c5:c.instructions+=1;goto B7825c5;
case 0x7825d0:goto L7825d0;
case 0x7825d5:c.instructions+=1;goto B7825d5;
case 0x7825e0:goto L7825e0;
case 0x7825e5:c.instructions+=1;goto B7825e5;
case 0x7825f0:goto L7825f0;
case 0x7825f5:c.instructions+=1;goto B7825f5;
case 0x782600:goto L782600;
case 0x782605:c.instructions+=1;goto B782605;
case 0x782610:goto L782610;
case 0x782615:c.instructions+=1;goto B782615;
case 0x782620:goto L782620;
case 0x782625:c.instructions+=1;goto B782625;
case 0x782630:goto L782630;
case 0x782635:c.instructions+=1;goto B782635;
case 0x782640:goto L782640;
case 0x782645:c.instructions+=1;goto B782645;
case 0x782650:goto L782650;
case 0x782655:c.instructions+=4;goto B782655;
case 0x782657:c.instructions+=3;goto B782657;
case 0x782659:c.instructions+=2;goto B782659;
case 0x78265e:c.instructions+=1;goto B78265e;
case 0x782663:goto L782663;
case 0x782670:goto L782670;
case 0x782675:c.instructions+=1;goto B782675;
case 0x782680:goto L782680;
case 0x782685:c.instructions+=1;goto B782685;
case 0x782690:goto L782690;
case 0x782695:c.instructions+=1;goto B782695;
case 0x7826a0:goto L7826a0;
case 0x7826a5:c.instructions+=1;goto B7826a5;
case 0x7826b0:goto L7826b0;
case 0x7826b5:c.instructions+=1;goto B7826b5;
case 0x7826c0:goto L7826c0;
case 0x7826c5:c.instructions+=1;goto B7826c5;
case 0x7826d0:goto L7826d0;
case 0x7826d5:c.instructions+=4;goto B7826d5;
case 0x7826d7:c.instructions+=3;goto B7826d7;
case 0x7826dc:c.instructions+=2;goto B7826dc;
case 0x7826e1:c.instructions+=1;goto B7826e1;
case 0x7826e6:goto L7826e6;
case 0x7826f0:goto L7826f0;
case 0x7826f5:c.instructions+=1;goto B7826f5;
case 0x782700:goto L782700;
case 0x782705:c.instructions+=1;goto B782705;
case 0x782710:goto L782710;
case 0x782715:c.instructions+=1;goto B782715;
case 0x782720:goto L782720;
case 0x782730:goto L782730;
case 0x782735:c.instructions+=1;goto B782735;
case 0x782740:goto L782740;
case 0x782745:c.instructions+=4;goto B782745;
case 0x782747:c.instructions+=3;goto B782747;
case 0x782749:c.instructions+=2;goto B782749;
case 0x78274e:c.instructions+=1;goto B78274e;
case 0x782753:goto L782753;
case 0x782760:goto L782760;
case 0x782765:c.instructions+=4;goto B782765;
case 0x782767:c.instructions+=3;goto B782767;
case 0x782769:c.instructions+=2;goto B782769;
case 0x78276e:c.instructions+=1;goto B78276e;
case 0x782773:goto L782773;
case 0x782780:goto L782780;
case 0x782785:c.instructions+=4;goto B782785;
case 0x782787:c.instructions+=3;goto B782787;
case 0x782789:c.instructions+=2;goto B782789;
case 0x78278e:c.instructions+=1;goto B78278e;
case 0x782793:goto L782793;
case 0x7827a0:goto L7827a0;
case 0x7827a5:c.instructions+=4;goto B7827a5;
case 0x7827a7:c.instructions+=3;goto B7827a7;
case 0x7827a9:c.instructions+=2;goto B7827a9;
case 0x7827ae:c.instructions+=1;goto B7827ae;
case 0x7827b3:goto L7827b3;
case 0x7827c0:goto L7827c0;
case 0x7827c5:c.instructions+=4;goto B7827c5;
case 0x7827c7:c.instructions+=3;goto B7827c7;
case 0x7827c9:c.instructions+=2;goto B7827c9;
case 0x7827ce:c.instructions+=1;goto B7827ce;
case 0x7827d3:goto L7827d3;
case 0x7827e0:goto L7827e0;
case 0x7827e5:c.instructions+=1;goto B7827e5;
case 0x7827f0:goto L7827f0;
case 0x7827f5:c.instructions+=1;goto B7827f5;
case 0x782800:goto L782800;
case 0x782805:c.instructions+=1;goto B782805;
case 0x782810:goto L782810;
case 0x782815:c.instructions+=1;goto B782815;
case 0x782820:goto L782820;
case 0x782825:c.instructions+=4;goto B782825;
case 0x782827:c.instructions+=3;goto B782827;
case 0x782829:c.instructions+=2;goto B782829;
case 0x78282e:c.instructions+=1;goto B78282e;
case 0x782833:goto L782833;
case 0x782840:goto L782840;
case 0x782845:c.instructions+=1;goto B782845;
case 0x782850:goto L782850;
case 0x782855:c.instructions+=1;goto B782855;
case 0x782860:goto L782860;
case 0x782865:c.instructions+=1;goto B782865;
case 0x782870:goto L782870;
case 0x782875:c.instructions+=1;goto B782875;
case 0x782880:goto L782880;
case 0x782885:c.instructions+=1;goto B782885;
case 0x782890:goto L782890;
case 0x782895:c.instructions+=1;goto B782895;
case 0x7828a0:goto L7828a0;
case 0x7828a5:c.instructions+=1;goto B7828a5;
case 0x7828b0:goto L7828b0;
case 0x7828b5:c.instructions+=1;goto B7828b5;
case 0x7828c0:goto L7828c0;
case 0x7828c5:c.instructions+=1;goto B7828c5;
case 0x7828d0:goto L7828d0;
case 0x7828d5:c.instructions+=1;goto B7828d5;
case 0x7828e0:goto L7828e0;
case 0x7828e5:c.instructions+=1;goto B7828e5;
case 0x7828f0:goto L7828f0;
case 0x7828f5:c.instructions+=1;goto B7828f5;
case 0x782900:goto L782900;
case 0x782905:c.instructions+=1;goto B782905;
case 0x782910:goto L782910;
case 0x782915:c.instructions+=1;goto B782915;
case 0x782920:goto L782920;
case 0x782930:goto L782930;
case 0x782935:c.instructions+=1;goto B782935;
case 0x782940:goto L782940;
case 0x782945:c.instructions+=1;goto B782945;
case 0x782950:goto L782950;
case 0x782955:c.instructions+=1;goto B782955;
case 0x782960:goto L782960;
case 0x782965:c.instructions+=1;goto B782965;
case 0x782970:goto L782970;
case 0x782975:c.instructions+=1;goto B782975;
case 0x782980:goto L782980;
case 0x782985:c.instructions+=1;goto B782985;
case 0x782990:goto L782990;
case 0x78299a:c.instructions+=1;goto B78299a;
case 0x78299b:goto L78299b;
case 0x7829a0:c.instructions+=1;goto B7829a0;
case 0x7829a5:goto L7829a5;
case 0x7829af:c.instructions+=1;goto B7829af;
case 0x7829b0:goto L7829b0;
case 0x7829ba:c.instructions+=1;goto B7829ba;
case 0x7829bb:goto L7829bb;
case 0x7829c5:c.instructions+=1;goto B7829c5;
case 0x7829c6:goto L7829c6;
case 0x7829d0:c.instructions+=1;goto B7829d0;
case 0x7829d1:goto L7829d1;
case 0x7829db:c.instructions+=1;goto B7829db;
case 0x7829dc:goto L7829dc;
case 0x7829e6:c.instructions+=1;goto B7829e6;
case 0x7829e7:goto L7829e7;
case 0x7829f1:c.instructions+=1;goto B7829f1;
case 0x7829f2:goto L7829f2;
case 0x7829fc:c.instructions+=1;goto B7829fc;
case 0x7829fd:goto L7829fd;
case 0x782a07:c.instructions+=1;goto B782a07;
case 0x782a08:goto L782a08;
case 0x782a12:c.instructions+=1;goto B782a12;
case 0x782a13:goto L782a13;
case 0x782a1d:c.instructions+=1;goto B782a1d;
case 0x782a1e:goto L782a1e;
case 0x782a28:c.instructions+=1;goto B782a28;
case 0x782a29:goto L782a29;
case 0x782a33:c.instructions+=1;goto B782a33;
case 0x782a34:goto L782a34;
case 0x782a3e:c.instructions+=1;goto B782a3e;
case 0x782a3f:goto L782a3f;
case 0x782a49:c.instructions+=1;goto B782a49;
case 0x782a4a:goto L782a4a;
case 0x782a54:c.instructions+=1;goto B782a54;
case 0x782a55:goto L782a55;
case 0x782a5f:c.instructions+=1;goto B782a5f;
case 0x782a60:goto L782a60;
case 0x782a6a:c.instructions+=1;goto B782a6a;
case 0x782a6b:goto L782a6b;
case 0x782a75:c.instructions+=1;goto B782a75;
case 0x782a76:goto L782a76;
case 0x782a80:c.instructions+=1;goto B782a80;
case 0x782a81:goto L782a81;
case 0x782a8b:c.instructions+=1;goto B782a8b;
case 0x782a8c:goto L782a8c;
case 0x782a96:c.instructions+=1;goto B782a96;
case 0x782a97:goto L782a97;
case 0x782aa1:c.instructions+=1;goto B782aa1;
case 0x782aa2:goto L782aa2;
case 0x782aac:c.instructions+=1;goto B782aac;
case 0x782aad:goto L782aad;
case 0x782ab7:c.instructions+=1;goto B782ab7;
case 0x782ab8:goto L782ab8;
case 0x782ac2:c.instructions+=1;goto B782ac2;
case 0x782ac3:goto L782ac3;
case 0x782acd:c.instructions+=1;goto B782acd;
case 0x782ace:goto L782ace;
case 0x782ad8:c.instructions+=1;goto B782ad8;
default:missing_instruction(c.pc);}
B782000:L782000:{c.instructions+=2;NFSU2_TR(0x782000);
w4(R+4,u32(0x863770ull));
}
B782005:{NFSU2_TR(0x782005);
TAIL_STATIC(0x52c420u,52c);
}
B782010:L782010:{c.instructions+=2;NFSU2_TR(0x782010);
w4(R+4,u32(0x839c30ull));
}
B782015:{NFSU2_TR(0x782015);
TAIL_STATIC(0x52c420u,52c);
}
B782020:L782020:{c.instructions+=2;NFSU2_TR(0x782020);
w4(R+4,u32(0x839bd0ull));
}
B782025:{NFSU2_TR(0x782025);
TAIL_STATIC(0x52c420u,52c);
}
B782030:L782030:{c.instructions+=2;NFSU2_TR(0x782030);
w4(R+4,u32(0x863768ull));
}
B782035:{NFSU2_TR(0x782035);
TAIL_STATIC(0x531940u,531);
}
B782040:L782040:{c.instructions+=2;NFSU2_TR(0x782040);
w4(R+4,u32(0x838980ull));
}
B782045:{NFSU2_TR(0x782045);
TAIL_STATIC(0x5398e0u,539);
}
B782050:L782050:{c.instructions+=2;NFSU2_TR(0x782050);
w4(R+4,u32(0x8637bcull));
}
B782055:{NFSU2_TR(0x782055);
TAIL_STATIC(0x4835c0u,483);
}
B782060:L782060:{c.instructions+=5;NFSU2_TR(0x782060);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782065:{NFSU2_TR(0x782065);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782067:{NFSU2_TR(0x782067);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782069:{NFSU2_TR(0x782069);
u8 U[4];
w4(U+0,u32(0x864640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78206e:{NFSU2_TR(0x78206e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782073ull));
TAIL_STATIC(0x75c401u,75c);
}
B782073:L782073:{c.instructions+=1;NFSU2_TR(0x782073);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782080:L782080:{c.instructions+=2;NFSU2_TR(0x782080);
w4(R+4,u32(0x864630ull));
}
B782085:{NFSU2_TR(0x782085);
TAIL_STATIC(0x4def30u,4de);
}
B782090:L782090:{c.instructions+=1;NFSU2_TR(0x782090);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7820a0:L7820a0:{c.instructions+=1;NFSU2_TR(0x7820a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7820b0:L7820b0:{c.instructions+=1;NFSU2_TR(0x7820b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7820c0:L7820c0:{c.instructions+=1;NFSU2_TR(0x7820c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7820d0:L7820d0:{c.instructions+=1;NFSU2_TR(0x7820d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7820e0:L7820e0:{c.instructions+=1;NFSU2_TR(0x7820e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7820f0:L7820f0:{c.instructions+=1;NFSU2_TR(0x7820f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782100:L782100:{c.instructions+=1;NFSU2_TR(0x782100);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782110:L782110:{c.instructions+=1;NFSU2_TR(0x782110);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782120:L782120:{c.instructions+=1;NFSU2_TR(0x782120);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782130:L782130:{c.instructions+=1;NFSU2_TR(0x782130);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782140:L782140:{c.instructions+=1;NFSU2_TR(0x782140);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782150:L782150:{c.instructions+=1;NFSU2_TR(0x782150);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782160:L782160:{c.instructions+=1;NFSU2_TR(0x782160);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782170:L782170:{c.instructions+=1;NFSU2_TR(0x782170);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782180:L782180:{c.instructions+=1;NFSU2_TR(0x782180);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782190:L782190:{c.instructions+=5;NFSU2_TR(0x782190);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782195:{NFSU2_TR(0x782195);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782197:{NFSU2_TR(0x782197);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782199:{NFSU2_TR(0x782199);
u8 U[4];
w4(U+0,u32(0x8653b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78219e:{NFSU2_TR(0x78219e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7821a3ull));
TAIL_STATIC(0x75c401u,75c);
}
B7821a3:L7821a3:{c.instructions+=1;NFSU2_TR(0x7821a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7821b0:L7821b0:{c.instructions+=5;NFSU2_TR(0x7821b0);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7821b5:{NFSU2_TR(0x7821b5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7821b7:{NFSU2_TR(0x7821b7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7821b9:{NFSU2_TR(0x7821b9);
u8 U[4];
w4(U+0,u32(0x865360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7821be:{NFSU2_TR(0x7821be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7821c3ull));
TAIL_STATIC(0x75c401u,75c);
}
B7821c3:L7821c3:{c.instructions+=1;NFSU2_TR(0x7821c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7821d0:L7821d0:{c.instructions+=2;NFSU2_TR(0x7821d0);
s4(0x865930,u32(0x7a0604ull));
}
B7821da:{NFSU2_TR(0x7821da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7821e0:L7821e0:{c.instructions+=2;NFSU2_TR(0x7821e0);
w4(R+4,u32(0x8652f8ull));
}
B7821e5:{NFSU2_TR(0x7821e5);
TAIL_STATIC(0x577a70u,577);
}
B7821f0:L7821f0:{c.instructions+=2;NFSU2_TR(0x7821f0);
w4(R+4,u32(0x8651a4ull));
}
B7821f5:{NFSU2_TR(0x7821f5);
TAIL_STATIC(0x57a280u,57a);
}
B782200:L782200:{c.instructions+=2;NFSU2_TR(0x782200);
w4(R+4,u32(0x86519cull));
}
B782205:{NFSU2_TR(0x782205);
TAIL_STATIC(0x57a250u,57a);
}
B782210:L782210:{c.instructions+=2;NFSU2_TR(0x782210);
w4(R+4,u32(0x866584ull));
}
B782215:{NFSU2_TR(0x782215);
TAIL_STATIC(0x57a2c0u,57a);
}
B782220:L782220:{c.instructions+=2;NFSU2_TR(0x782220);
w4(R+4,u32(0x86555cull));
}
B782225:{NFSU2_TR(0x782225);
TAIL_STATIC(0x57a250u,57a);
}
B782230:L782230:{c.instructions+=2;NFSU2_TR(0x782230);
w4(R+4,u32(0x865564ull));
}
B782235:{NFSU2_TR(0x782235);
TAIL_STATIC(0x57af70u,57a);
}
B782240:L782240:{c.instructions+=2;NFSU2_TR(0x782240);
w4(R+4,u32(0x865220ull));
}
B782245:{NFSU2_TR(0x782245);
TAIL_STATIC(0x57bc50u,57b);
}
B782250:L782250:{c.instructions+=2;NFSU2_TR(0x782250);
w4(R+4,u32(0x865550ull));
}
B782255:{NFSU2_TR(0x782255);
TAIL_STATIC(0x57bc50u,57b);
}
B782260:L782260:{c.instructions+=2;NFSU2_TR(0x782260);
w4(R+4,u32(0x8652f0ull));
}
B782265:{NFSU2_TR(0x782265);
TAIL_STATIC(0x57bc90u,57b);
}
B782270:L782270:{c.instructions+=2;NFSU2_TR(0x782270);
w4(R+4,u32(0x865190ull));
}
B782275:{NFSU2_TR(0x782275);
TAIL_STATIC(0x57bc90u,57b);
}
B782280:L782280:{c.instructions+=2;NFSU2_TR(0x782280);
w4(R+4,u32(0x865210ull));
}
B782285:{NFSU2_TR(0x782285);
TAIL_STATIC(0x4835c0u,483);
}
B782290:L782290:{c.instructions+=5;NFSU2_TR(0x782290);
u8 U[4];
w4(U+0,u32(0x57c320ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782295:{NFSU2_TR(0x782295);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782297:{NFSU2_TR(0x782297);
u8 U[4];
w4(U+0,u32(0x1c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78229c:{NFSU2_TR(0x78229c);
u8 U[4];
w4(U+0,u32(0x8655a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7822a1:{NFSU2_TR(0x7822a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7822a6ull));
TAIL_STATIC(0x75c401u,75c);
}
B7822a6:L7822a6:{c.instructions+=1;NFSU2_TR(0x7822a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7822b0:L7822b0:{c.instructions+=2;NFSU2_TR(0x7822b0);
w4(R+4,u32(0x865218ull));
}
B7822b5:{NFSU2_TR(0x7822b5);
TAIL_STATIC(0x57a250u,57a);
}
B7822c0:L7822c0:{c.instructions+=1;NFSU2_TR(0x7822c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7822d0:L7822d0:{c.instructions+=1;NFSU2_TR(0x7822d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7822e0:L7822e0:{c.instructions+=1;NFSU2_TR(0x7822e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7822f0:L7822f0:{c.instructions+=1;NFSU2_TR(0x7822f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782300:L782300:{c.instructions+=1;NFSU2_TR(0x782300);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782310:L782310:{c.instructions+=1;NFSU2_TR(0x782310);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782320:L782320:{c.instructions+=1;NFSU2_TR(0x782320);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782330:L782330:{c.instructions+=1;NFSU2_TR(0x782330);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782340:L782340:{c.instructions+=5;NFSU2_TR(0x782340);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782345:{NFSU2_TR(0x782345);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782347:{NFSU2_TR(0x782347);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782349:{NFSU2_TR(0x782349);
u8 U[4];
w4(U+0,u32(0x8693c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78234e:{NFSU2_TR(0x78234e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782353ull));
TAIL_STATIC(0x75c401u,75c);
}
B782353:L782353:{c.instructions+=1;NFSU2_TR(0x782353);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782360:L782360:{c.instructions+=2;NFSU2_TR(0x782360);
w4(R+4,u32(0x86a454ull));
}
B782365:{NFSU2_TR(0x782365);
TAIL_STATIC(0x584730u,584);
}
B782370:L782370:{c.instructions+=2;NFSU2_TR(0x782370);
w4(R+4,u32(0x86a388ull));
}
B782375:{NFSU2_TR(0x782375);
TAIL_STATIC(0x5884e0u,588);
}
B782380:L782380:{c.instructions+=2;NFSU2_TR(0x782380);
w4(R+4,u32(0x86a490ull));
}
B782385:{NFSU2_TR(0x782385);
TAIL_STATIC(0x588580u,588);
}
B782390:L782390:{c.instructions+=2;NFSU2_TR(0x782390);
w4(R+4,u32(0x86a5e8ull));
}
B782395:{NFSU2_TR(0x782395);
TAIL_STATIC(0x4def30u,4de);
}
B7823a0:L7823a0:{c.instructions+=2;NFSU2_TR(0x7823a0);
w4(R+4,u32(0x86a5f4ull));
}
B7823a5:{NFSU2_TR(0x7823a5);
TAIL_STATIC(0x4def30u,4de);
}
B7823b0:L7823b0:{c.instructions+=2;NFSU2_TR(0x7823b0);
w4(R+4,u32(0x86a758ull));
}
B7823b5:{NFSU2_TR(0x7823b5);
TAIL_STATIC(0x58a1d0u,58a);
}
B7823c0:L7823c0:{c.instructions+=2;NFSU2_TR(0x7823c0);
w4(R+4,u32(0x86a834ull));
}
B7823c5:{NFSU2_TR(0x7823c5);
TAIL_STATIC(0x58f560u,58f);
}
B7823d0:L7823d0:{c.instructions+=2;NFSU2_TR(0x7823d0);
w4(R+4,u32(0x86a858ull));
}
B7823d5:{NFSU2_TR(0x7823d5);
TAIL_STATIC(0x58f5c0u,58f);
}
B7823e0:L7823e0:{c.instructions+=2;NFSU2_TR(0x7823e0);
w4(R+4,u32(0x86b4c8ull));
}
B7823e5:{NFSU2_TR(0x7823e5);
TAIL_STATIC(0x4358e0u,435);
}
B7823f0:L7823f0:{c.instructions+=2;NFSU2_TR(0x7823f0);
w4(R+4,u32(0x86b490ull));
}
B7823f5:{NFSU2_TR(0x7823f5);
TAIL_STATIC(0x5a8fd0u,5a8);
}
B782400:L782400:{c.instructions+=2;NFSU2_TR(0x782400);
w4(R+4,u32(0x86b598ull));
}
B782405:{NFSU2_TR(0x782405);
TAIL_STATIC(0x5e0800u,5e0);
}
B782410:L782410:{c.instructions+=2;NFSU2_TR(0x782410);
w4(R+4,u32(0x86b5a0ull));
}
B782415:{NFSU2_TR(0x782415);
TAIL_STATIC(0x4835c0u,483);
}
B782420:L782420:{c.instructions+=2;NFSU2_TR(0x782420);
w4(R+4,u32(0x86b4c0ull));
}
B782425:{NFSU2_TR(0x782425);
TAIL_STATIC(0x4def30u,4de);
}
B782430:L782430:{c.instructions+=2;NFSU2_TR(0x782430);
w4(R+4,u32(0x86b5a8ull));
}
B782435:{NFSU2_TR(0x782435);
TAIL_STATIC(0x5b3320u,5b3);
}
B782440:L782440:{c.instructions+=1;NFSU2_TR(0x782440);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782450:L782450:{c.instructions+=1;NFSU2_TR(0x782450);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782460:L782460:{c.instructions+=1;NFSU2_TR(0x782460);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782470:L782470:{c.instructions+=5;NFSU2_TR(0x782470);
u8 U[4];
w4(U+0,u32(0x5b8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782475:{NFSU2_TR(0x782475);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782477:{NFSU2_TR(0x782477);
u8 U[4];
w4(U+0,u32(0x370ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78247c:{NFSU2_TR(0x78247c);
u8 U[4];
w4(U+0,u32(0x874c40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782481:{NFSU2_TR(0x782481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782486ull));
TAIL_STATIC(0x75c401u,75c);
}
B782486:L782486:{c.instructions+=1;NFSU2_TR(0x782486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782490:L782490:{c.instructions+=1;NFSU2_TR(0x782490);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7824a0:L7824a0:{c.instructions+=2;NFSU2_TR(0x7824a0);
w4(R+4,u32(0x872b4cull));
}
B7824a5:{NFSU2_TR(0x7824a5);
TAIL_STATIC(0x4def30u,4de);
}
B7824b0:L7824b0:{c.instructions+=2;NFSU2_TR(0x7824b0);
w4(R+4,u32(0x8763b0ull));
}
B7824b5:{NFSU2_TR(0x7824b5);
TAIL_STATIC(0x4835c0u,483);
}
B7824c0:L7824c0:{c.instructions+=2;NFSU2_TR(0x7824c0);
w4(R+4,u32(0x872ed0ull));
}
B7824c5:{NFSU2_TR(0x7824c5);
TAIL_STATIC(0x4def30u,4de);
}
B7824d0:L7824d0:{c.instructions+=2;NFSU2_TR(0x7824d0);
w4(R+4,u32(0x872b44ull));
}
B7824d5:{NFSU2_TR(0x7824d5);
TAIL_STATIC(0x4835c0u,483);
}
B7824e0:L7824e0:{c.instructions+=2;NFSU2_TR(0x7824e0);
w4(R+4,u32(0x870d28ull));
}
B7824e5:{NFSU2_TR(0x7824e5);
TAIL_STATIC(0x4835c0u,483);
}
B7824f0:L7824f0:{c.instructions+=5;NFSU2_TR(0x7824f0);
u8 U[4];
w4(U+0,u32(0x5cf410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7824f5:{NFSU2_TR(0x7824f5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7824f7:{NFSU2_TR(0x7824f7);
u8 U[4];
w4(U+0,u32(0xb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7824fc:{NFSU2_TR(0x7824fc);
u8 U[4];
w4(U+0,u32(0x870d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782501:{NFSU2_TR(0x782501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782506ull));
TAIL_STATIC(0x75c401u,75c);
}
B782506:L782506:{c.instructions+=1;NFSU2_TR(0x782506);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782510:L782510:{c.instructions+=1;NFSU2_TR(0x782510);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782520:L782520:{c.instructions+=5;NFSU2_TR(0x782520);
u8 U[4];
w4(U+0,u32(0x605400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782525:{NFSU2_TR(0x782525);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782527:{NFSU2_TR(0x782527);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782529:{NFSU2_TR(0x782529);
u8 U[4];
w4(U+0,u32(0x88a2c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78252e:{NFSU2_TR(0x78252e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782533ull));
TAIL_STATIC(0x75c401u,75c);
}
B782533:L782533:{c.instructions+=1;NFSU2_TR(0x782533);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782540:L782540:{c.instructions+=5;NFSU2_TR(0x782540);
u8 U[4];
w4(U+0,u32(0x605400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782545:{NFSU2_TR(0x782545);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782547:{NFSU2_TR(0x782547);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782549:{NFSU2_TR(0x782549);
u8 U[4];
w4(U+0,u32(0x88ea08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78254e:{NFSU2_TR(0x78254e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782553ull));
TAIL_STATIC(0x75c401u,75c);
}
B782553:L782553:{c.instructions+=1;NFSU2_TR(0x782553);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782560:L782560:{c.instructions+=5;NFSU2_TR(0x782560);
u8 U[4];
w4(U+0,u32(0x605400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782565:{NFSU2_TR(0x782565);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782567:{NFSU2_TR(0x782567);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782569:{NFSU2_TR(0x782569);
u8 U[4];
w4(U+0,u32(0x88f210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78256e:{NFSU2_TR(0x78256e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782573ull));
TAIL_STATIC(0x75c401u,75c);
}
B782573:L782573:{c.instructions+=1;NFSU2_TR(0x782573);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782580:L782580:{c.instructions+=2;NFSU2_TR(0x782580);
w4(R+4,u32(0x88ea68ull));
}
B782585:{NFSU2_TR(0x782585);
TAIL_STATIC(0x4367c0u,436);
}
B782590:L782590:{c.instructions+=2;NFSU2_TR(0x782590);
w4(R+4,u32(0x88ea8cull));
}
B782595:{NFSU2_TR(0x782595);
TAIL_STATIC(0x5dc590u,5dc);
}
B7825a0:L7825a0:{c.instructions+=2;NFSU2_TR(0x7825a0);
w4(R+4,u32(0x88e9fcull));
}
B7825a5:{NFSU2_TR(0x7825a5);
TAIL_STATIC(0x5dc5c0u,5dc);
}
B7825b0:L7825b0:{c.instructions+=2;NFSU2_TR(0x7825b0);
w4(R+4,u32(0x88ea84ull));
}
B7825b5:{NFSU2_TR(0x7825b5);
TAIL_STATIC(0x5dc600u,5dc);
}
B7825c0:L7825c0:{c.instructions+=2;NFSU2_TR(0x7825c0);
w4(R+4,u32(0x88eadcull));
}
B7825c5:{NFSU2_TR(0x7825c5);
TAIL_STATIC(0x5dc640u,5dc);
}
B7825d0:L7825d0:{c.instructions+=2;NFSU2_TR(0x7825d0);
w4(R+4,u32(0x88f760ull));
}
B7825d5:{NFSU2_TR(0x7825d5);
TAIL_STATIC(0x4def30u,4de);
}
B7825e0:L7825e0:{c.instructions+=2;NFSU2_TR(0x7825e0);
w4(R+4,u32(0x88e9c4ull));
}
B7825e5:{NFSU2_TR(0x7825e5);
TAIL_STATIC(0x5e0830u,5e0);
}
B7825f0:L7825f0:{c.instructions+=2;NFSU2_TR(0x7825f0);
w4(R+4,u32(0x88f208ull));
}
B7825f5:{NFSU2_TR(0x7825f5);
TAIL_STATIC(0x5e0870u,5e0);
}
B782600:L782600:{c.instructions+=2;NFSU2_TR(0x782600);
w4(R+4,u32(0x88ff98ull));
}
B782605:{NFSU2_TR(0x782605);
TAIL_STATIC(0x4835c0u,483);
}
B782610:L782610:{c.instructions+=2;NFSU2_TR(0x782610);
w4(R+4,u32(0x88f270ull));
}
B782615:{NFSU2_TR(0x782615);
TAIL_STATIC(0x5e57e0u,5e5);
}
B782620:L782620:{c.instructions+=2;NFSU2_TR(0x782620);
w4(R+4,u32(0x88f740ull));
}
B782625:{NFSU2_TR(0x782625);
TAIL_STATIC(0x4def30u,4de);
}
B782630:L782630:{c.instructions+=2;NFSU2_TR(0x782630);
w4(R+4,u32(0x88f298ull));
}
B782635:{NFSU2_TR(0x782635);
TAIL_STATIC(0x5e48a0u,5e4);
}
B782640:L782640:{c.instructions+=2;NFSU2_TR(0x782640);
w4(R+4,u32(0x88ead4ull));
}
B782645:{NFSU2_TR(0x782645);
TAIL_STATIC(0x4def30u,4de);
}
B782650:L782650:{c.instructions+=5;NFSU2_TR(0x782650);
u8 U[4];
w4(U+0,u32(0x4def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782655:{NFSU2_TR(0x782655);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782657:{NFSU2_TR(0x782657);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782659:{NFSU2_TR(0x782659);
u8 U[4];
w4(U+0,u32(0x88f1c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78265e:{NFSU2_TR(0x78265e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782663ull));
TAIL_STATIC(0x75c401u,75c);
}
B782663:L782663:{c.instructions+=1;NFSU2_TR(0x782663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782670:L782670:{c.instructions+=2;NFSU2_TR(0x782670);
w4(R+4,u32(0x88f28cull));
}
B782675:{NFSU2_TR(0x782675);
TAIL_STATIC(0x4def30u,4de);
}
B782680:L782680:{c.instructions+=2;NFSU2_TR(0x782680);
w4(R+4,u32(0x88ffa0ull));
}
B782685:{NFSU2_TR(0x782685);
TAIL_STATIC(0x4def30u,4de);
}
B782690:L782690:{c.instructions+=2;NFSU2_TR(0x782690);
w4(R+4,u32(0x88f1bcull));
}
B782695:{NFSU2_TR(0x782695);
TAIL_STATIC(0x5e66a0u,5e6);
}
B7826a0:L7826a0:{c.instructions+=2;NFSU2_TR(0x7826a0);
w4(R+4,u32(0x88a320ull));
}
B7826a5:{NFSU2_TR(0x7826a5);
TAIL_STATIC(0x5e5b10u,5e5);
}
B7826b0:L7826b0:{c.instructions+=2;NFSU2_TR(0x7826b0);
w4(R+4,u32(0x883e70ull));
}
B7826b5:{NFSU2_TR(0x7826b5);
TAIL_STATIC(0x5e6490u,5e6);
}
B7826c0:L7826c0:{c.instructions+=2;NFSU2_TR(0x7826c0);
w4(R+4,u32(0x88f768ull));
}
B7826c5:{NFSU2_TR(0x7826c5);
TAIL_STATIC(0x5e8200u,5e8);
}
B7826d0:L7826d0:{c.instructions+=5;NFSU2_TR(0x7826d0);
u8 U[4];
w4(U+0,u32(0x50f7d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7826d5:{NFSU2_TR(0x7826d5);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7826d7:{NFSU2_TR(0x7826d7);
u8 U[4];
w4(U+0,u32(0x940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7826dc:{NFSU2_TR(0x7826dc);
u8 U[4];
w4(U+0,u32(0x890160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7826e1:{NFSU2_TR(0x7826e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7826e6ull));
TAIL_STATIC(0x75c401u,75c);
}
B7826e6:L7826e6:{c.instructions+=1;NFSU2_TR(0x7826e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7826f0:L7826f0:{c.instructions+=2;NFSU2_TR(0x7826f0);
w4(R+4,u32(0x89cf48ull));
}
B7826f5:{NFSU2_TR(0x7826f5);
TAIL_STATIC(0x5efcb0u,5ef);
}
B782700:L782700:{c.instructions+=2;NFSU2_TR(0x782700);
w4(R+4,u32(0x89e838ull));
}
B782705:{NFSU2_TR(0x782705);
TAIL_STATIC(0x4358e0u,435);
}
B782710:L782710:{c.instructions+=2;NFSU2_TR(0x782710);
w4(R+4,u32(0x89e844ull));
}
B782715:{NFSU2_TR(0x782715);
TAIL_STATIC(0x60b2f0u,60b);
}
B782720:L782720:{c.instructions+=1;NFSU2_TR(0x782720);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782730:L782730:{c.instructions+=2;NFSU2_TR(0x782730);
w4(R+4,u32(0x8a1f28ull));
}
B782735:{NFSU2_TR(0x782735);
TAIL_STATIC(0x605390u,605);
}
B782740:L782740:{c.instructions+=5;NFSU2_TR(0x782740);
u8 U[4];
w4(U+0,u32(0x605400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782745:{NFSU2_TR(0x782745);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782747:{NFSU2_TR(0x782747);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782749:{NFSU2_TR(0x782749);
u8 U[4];
w4(U+0,u32(0x8a3180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78274e:{NFSU2_TR(0x78274e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782753ull));
TAIL_STATIC(0x75c401u,75c);
}
B782753:L782753:{c.instructions+=1;NFSU2_TR(0x782753);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782760:L782760:{c.instructions+=5;NFSU2_TR(0x782760);
u8 U[4];
w4(U+0,u32(0x605400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782765:{NFSU2_TR(0x782765);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782767:{NFSU2_TR(0x782767);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782769:{NFSU2_TR(0x782769);
u8 U[4];
w4(U+0,u32(0x8a1e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78276e:{NFSU2_TR(0x78276e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782773ull));
TAIL_STATIC(0x75c401u,75c);
}
B782773:L782773:{c.instructions+=1;NFSU2_TR(0x782773);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782780:L782780:{c.instructions+=5;NFSU2_TR(0x782780);
u8 U[4];
w4(U+0,u32(0x605400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782785:{NFSU2_TR(0x782785);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782787:{NFSU2_TR(0x782787);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782789:{NFSU2_TR(0x782789);
u8 U[4];
w4(U+0,u32(0x8a31f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78278e:{NFSU2_TR(0x78278e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782793ull));
TAIL_STATIC(0x75c401u,75c);
}
B782793:L782793:{c.instructions+=1;NFSU2_TR(0x782793);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7827a0:L7827a0:{c.instructions+=5;NFSU2_TR(0x7827a0);
u8 U[4];
w4(U+0,u32(0x605400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7827a5:{NFSU2_TR(0x7827a5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7827a7:{NFSU2_TR(0x7827a7);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7827a9:{NFSU2_TR(0x7827a9);
u8 U[4];
w4(U+0,u32(0x8a1e30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7827ae:{NFSU2_TR(0x7827ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7827b3ull));
TAIL_STATIC(0x75c401u,75c);
}
B7827b3:L7827b3:{c.instructions+=1;NFSU2_TR(0x7827b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7827c0:L7827c0:{c.instructions+=5;NFSU2_TR(0x7827c0);
u8 U[4];
w4(U+0,u32(0x605390ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7827c5:{NFSU2_TR(0x7827c5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7827c7:{NFSU2_TR(0x7827c7);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7827c9:{NFSU2_TR(0x7827c9);
u8 U[4];
w4(U+0,u32(0x8a3250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7827ce:{NFSU2_TR(0x7827ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7827d3ull));
TAIL_STATIC(0x75c401u,75c);
}
B7827d3:L7827d3:{c.instructions+=1;NFSU2_TR(0x7827d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7827e0:L7827e0:{c.instructions+=2;NFSU2_TR(0x7827e0);
w4(R+4,u32(0x8a1de4ull));
}
B7827e5:{NFSU2_TR(0x7827e5);
TAIL_STATIC(0x4903b0u,490);
}
B7827f0:L7827f0:{c.instructions+=2;NFSU2_TR(0x7827f0);
w4(R+4,u32(0x8a3168ull));
}
B7827f5:{NFSU2_TR(0x7827f5);
TAIL_STATIC(0x4903b0u,490);
}
B782800:L782800:{c.instructions+=2;NFSU2_TR(0x782800);
w4(R+4,u32(0x8a1dfcull));
}
B782805:{NFSU2_TR(0x782805);
TAIL_STATIC(0x4903b0u,490);
}
B782810:L782810:{c.instructions+=2;NFSU2_TR(0x782810);
w4(R+4,u32(0x8a1f10ull));
}
B782815:{NFSU2_TR(0x782815);
TAIL_STATIC(0x4903b0u,490);
}
B782820:L782820:{c.instructions+=5;NFSU2_TR(0x782820);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782825:{NFSU2_TR(0x782825);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782827:{NFSU2_TR(0x782827);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B782829:{NFSU2_TR(0x782829);
u8 U[4];
w4(U+0,u32(0x8a42c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78282e:{NFSU2_TR(0x78282e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x782833ull));
TAIL_STATIC(0x75c401u,75c);
}
B782833:L782833:{c.instructions+=1;NFSU2_TR(0x782833);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782840:L782840:{c.instructions+=2;NFSU2_TR(0x782840);
w4(R+4,u32(0x8a2b50ull));
}
B782845:{NFSU2_TR(0x782845);
TAIL_STATIC(0x637ed0u,637);
}
B782850:L782850:{c.instructions+=2;NFSU2_TR(0x782850);
w4(R+4,u32(0x8a2b68ull));
}
B782855:{NFSU2_TR(0x782855);
TAIL_STATIC(0x4def30u,4de);
}
B782860:L782860:{c.instructions+=2;NFSU2_TR(0x782860);
w4(R+4,u32(0x8a31e4ull));
}
B782865:{NFSU2_TR(0x782865);
TAIL_STATIC(0x4def30u,4de);
}
B782870:L782870:{c.instructions+=2;NFSU2_TR(0x782870);
w4(R+4,u32(0x8a3288ull));
}
B782875:{NFSU2_TR(0x782875);
TAIL_STATIC(0x6379b0u,637);
}
B782880:L782880:{c.instructions+=2;NFSU2_TR(0x782880);
w4(R+4,u32(0x8a3148ull));
}
B782885:{NFSU2_TR(0x782885);
TAIL_STATIC(0x4def30u,4de);
}
B782890:L782890:{c.instructions+=2;NFSU2_TR(0x782890);
w4(R+4,u32(0x8a4260ull));
}
B782895:{NFSU2_TR(0x782895);
TAIL_STATIC(0x637f10u,637);
}
B7828a0:L7828a0:{c.instructions+=2;NFSU2_TR(0x7828a0);
w4(R+4,u32(0x8a2ca4ull));
}
B7828a5:{NFSU2_TR(0x7828a5);
TAIL_STATIC(0x63b4d0u,63b);
}
B7828b0:L7828b0:{c.instructions+=2;NFSU2_TR(0x7828b0);
w4(R+4,u32(0x8a30f0ull));
}
B7828b5:{NFSU2_TR(0x7828b5);
TAIL_STATIC(0x63b510u,63b);
}
B7828c0:L7828c0:{c.instructions+=2;NFSU2_TR(0x7828c0);
w4(R+4,u32(0x8a2c9cull));
}
B7828c5:{NFSU2_TR(0x7828c5);
TAIL_STATIC(0x63b550u,63b);
}
B7828d0:L7828d0:{c.instructions+=2;NFSU2_TR(0x7828d0);
w4(R+4,u32(0x8a7114ull));
}
B7828d5:{NFSU2_TR(0x7828d5);
TAIL_STATIC(0x6d86e0u,6d8);
}
B7828e0:L7828e0:{c.instructions+=2;NFSU2_TR(0x7828e0);
w4(R+4,u32(0x8a7168ull));
}
B7828e5:{NFSU2_TR(0x7828e5);
TAIL_STATIC(0x6d87c0u,6d8);
}
B7828f0:L7828f0:{c.instructions+=2;NFSU2_TR(0x7828f0);
w4(R+4,u32(0x8a7140ull));
}
B7828f5:{NFSU2_TR(0x7828f5);
TAIL_STATIC(0x6d87c0u,6d8);
}
B782900:L782900:{c.instructions+=2;NFSU2_TR(0x782900);
w4(R+4,u32(0x8a7bf8ull));
}
B782905:{NFSU2_TR(0x782905);
TAIL_STATIC(0x4022c0u,402);
}
B782910:L782910:{c.instructions+=2;NFSU2_TR(0x782910);
w4(R+4,u32(0x8a7e38ull));
}
B782915:{NFSU2_TR(0x782915);
TAIL_STATIC(0x4022c0u,402);
}
B782920:L782920:{c.instructions+=1;NFSU2_TR(0x782920);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782930:L782930:{c.instructions+=2;NFSU2_TR(0x782930);
w4(R+4,u32(0x8a85f0ull));
}
B782935:{NFSU2_TR(0x782935);
TAIL_STATIC(0x6de3a0u,6de);
}
B782940:L782940:{c.instructions+=2;NFSU2_TR(0x782940);
w4(R+4,u32(0x8a8738ull));
}
B782945:{NFSU2_TR(0x782945);
TAIL_STATIC(0x6de3a0u,6de);
}
B782950:L782950:{c.instructions+=2;NFSU2_TR(0x782950);
w4(R+4,u32(0x8a8718ull));
}
B782955:{NFSU2_TR(0x782955);
TAIL_STATIC(0x6de650u,6de);
}
B782960:L782960:{c.instructions+=2;NFSU2_TR(0x782960);
w4(R+4,u32(0x8aaad8ull));
}
B782965:{NFSU2_TR(0x782965);
TAIL_STATIC(0x4022c0u,402);
}
B782970:L782970:{c.instructions+=2;NFSU2_TR(0x782970);
w4(R+4,u32(0x8ab668ull));
}
B782975:{NFSU2_TR(0x782975);
TAIL_STATIC(0x6dae70u,6da);
}
B782980:L782980:{c.instructions+=2;NFSU2_TR(0x782980);
w4(R+4,u32(0x8ab6b8ull));
}
B782985:{NFSU2_TR(0x782985);
TAIL_STATIC(0x6dae70u,6da);
}
B782990:L782990:{c.instructions+=2;NFSU2_TR(0x782990);
s4(0x8ad618,u32(0x7a0358ull));
}
B78299a:{NFSU2_TR(0x78299a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B78299b:L78299b:{c.instructions+=2;NFSU2_TR(0x78299b);
w4(R+4,u32(0x8ad69cull));
}
B7829a0:{NFSU2_TR(0x7829a0);
TAIL_STATIC(0x6f6b35u,6f6);
}
B7829a5:L7829a5:{c.instructions+=2;NFSU2_TR(0x7829a5);
s4(0x8ad74c,u32(0x7a0358ull));
}
B7829af:{NFSU2_TR(0x7829af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7829b0:L7829b0:{c.instructions+=2;NFSU2_TR(0x7829b0);
s4(0x8ad7b0,u32(0x7a0358ull));
}
B7829ba:{NFSU2_TR(0x7829ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7829bb:L7829bb:{c.instructions+=2;NFSU2_TR(0x7829bb);
s4(0x8ad7d8,u32(0x7a0358ull));
}
B7829c5:{NFSU2_TR(0x7829c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7829c6:L7829c6:{c.instructions+=2;NFSU2_TR(0x7829c6);
s4(0x8ad710,u32(0x7a0358ull));
}
B7829d0:{NFSU2_TR(0x7829d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7829d1:L7829d1:{c.instructions+=2;NFSU2_TR(0x7829d1);
s4(0x8ad800,u32(0x7a0358ull));
}
B7829db:{NFSU2_TR(0x7829db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7829dc:L7829dc:{c.instructions+=2;NFSU2_TR(0x7829dc);
s4(0x8ad760,u32(0x7a0358ull));
}
B7829e6:{NFSU2_TR(0x7829e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7829e7:L7829e7:{c.instructions+=2;NFSU2_TR(0x7829e7);
s4(0x8ad850,u32(0x7a0358ull));
}
B7829f1:{NFSU2_TR(0x7829f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7829f2:L7829f2:{c.instructions+=2;NFSU2_TR(0x7829f2);
s4(0x8ad724,u32(0x7a0358ull));
}
B7829fc:{NFSU2_TR(0x7829fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7829fd:L7829fd:{c.instructions+=2;NFSU2_TR(0x7829fd);
s4(0x8ad83c,u32(0x7a0358ull));
}
B782a07:{NFSU2_TR(0x782a07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a08:L782a08:{c.instructions+=2;NFSU2_TR(0x782a08);
s4(0x8ad788,u32(0x7a0358ull));
}
B782a12:{NFSU2_TR(0x782a12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a13:L782a13:{c.instructions+=2;NFSU2_TR(0x782a13);
s4(0x8ad814,u32(0x7a0358ull));
}
B782a1d:{NFSU2_TR(0x782a1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a1e:L782a1e:{c.instructions+=2;NFSU2_TR(0x782a1e);
s4(0x8ad8b4,u32(0x7a0358ull));
}
B782a28:{NFSU2_TR(0x782a28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a29:L782a29:{c.instructions+=2;NFSU2_TR(0x782a29);
s4(0x8ad904,u32(0x7a0358ull));
}
B782a33:{NFSU2_TR(0x782a33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a34:L782a34:{c.instructions+=2;NFSU2_TR(0x782a34);
s4(0x8ad878,u32(0x7a0358ull));
}
B782a3e:{NFSU2_TR(0x782a3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a3f:L782a3f:{c.instructions+=2;NFSU2_TR(0x782a3f);
s4(0x8ad864,u32(0x7a0358ull));
}
B782a49:{NFSU2_TR(0x782a49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a4a:L782a4a:{c.instructions+=2;NFSU2_TR(0x782a4a);
s4(0x8ad8c8,u32(0x7a0358ull));
}
B782a54:{NFSU2_TR(0x782a54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a55:L782a55:{c.instructions+=2;NFSU2_TR(0x782a55);
s4(0x8ad738,u32(0x7a0358ull));
}
B782a5f:{NFSU2_TR(0x782a5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a60:L782a60:{c.instructions+=2;NFSU2_TR(0x782a60);
s4(0x8ad828,u32(0x7a0358ull));
}
B782a6a:{NFSU2_TR(0x782a6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a6b:L782a6b:{c.instructions+=2;NFSU2_TR(0x782a6b);
s4(0x8ad774,u32(0x7a0358ull));
}
B782a75:{NFSU2_TR(0x782a75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a76:L782a76:{c.instructions+=2;NFSU2_TR(0x782a76);
s4(0x8ad8a0,u32(0x7a0358ull));
}
B782a80:{NFSU2_TR(0x782a80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a81:L782a81:{c.instructions+=2;NFSU2_TR(0x782a81);
s4(0x8ad8dc,u32(0x7a0358ull));
}
B782a8b:{NFSU2_TR(0x782a8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a8c:L782a8c:{c.instructions+=2;NFSU2_TR(0x782a8c);
s4(0x8ad8f0,u32(0x7a0358ull));
}
B782a96:{NFSU2_TR(0x782a96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782a97:L782a97:{c.instructions+=2;NFSU2_TR(0x782a97);
s4(0x8ad7c4,u32(0x7a0358ull));
}
B782aa1:{NFSU2_TR(0x782aa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782aa2:L782aa2:{c.instructions+=2;NFSU2_TR(0x782aa2);
s4(0x8ad88c,u32(0x7a0358ull));
}
B782aac:{NFSU2_TR(0x782aac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782aad:L782aad:{c.instructions+=2;NFSU2_TR(0x782aad);
s4(0x8ad79c,u32(0x7a0358ull));
}
B782ab7:{NFSU2_TR(0x782ab7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782ab8:L782ab8:{c.instructions+=2;NFSU2_TR(0x782ab8);
s4(0x8ad7ec,u32(0x7a0358ull));
}
B782ac2:{NFSU2_TR(0x782ac2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782ac3:L782ac3:{c.instructions+=2;NFSU2_TR(0x782ac3);
s4(0x8161e8,u32(0x7c3508ull));
}
B782acd:{NFSU2_TR(0x782acd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B782ace:L782ace:{c.instructions+=2;NFSU2_TR(0x782ace);
s4(0x8161f8,u32(0x786dbcull));
}
B782ad8:{NFSU2_TR(0x782ad8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x782,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
