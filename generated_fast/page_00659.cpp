#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_650(u8* __restrict R,Cpu& c);
u32 body_655(u8* __restrict R,Cpu& c);
u32 body_658(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x659,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x659,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_659(u8* __restrict R,Cpu& c);
u32 page_659(Cpu& c){return body_659(c.regs.data(),c);}
__attribute__((noinline)) u32 body_659(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x659000:goto L659000;
case 0x659002:c.instructions+=1;goto B659002;
case 0x659007:goto L659007;
case 0x65900c:goto L65900c;
case 0x65900d:c.instructions+=1;goto B65900d;
case 0x65900f:goto L65900f;
case 0x659011:goto L659011;
case 0x659013:c.instructions+=1;goto B659013;
case 0x659018:goto L659018;
case 0x65901d:goto L65901d;
case 0x659022:c.instructions+=4;goto B659022;
case 0x659023:c.instructions+=3;goto B659023;
case 0x659024:c.instructions+=2;goto B659024;
case 0x659025:c.instructions+=1;goto B659025;
case 0x65902a:goto L65902a;
case 0x65902d:c.instructions+=1;goto B65902d;
case 0x659032:goto L659032;
case 0x659034:c.instructions+=1;goto B659034;
case 0x659039:goto L659039;
case 0x65903b:c.instructions+=1;goto B65903b;
case 0x65903d:goto L65903d;
case 0x659042:c.instructions+=4;goto B659042;
case 0x659045:c.instructions+=3;goto B659045;
case 0x659047:c.instructions+=2;goto B659047;
case 0x659048:c.instructions+=1;goto B659048;
case 0x65904d:goto L65904d;
case 0x65904f:goto L65904f;
case 0x659051:goto L659051;
case 0x659053:c.instructions+=1;goto B659053;
case 0x659059:goto L659059;
case 0x65905e:c.instructions+=4;goto B65905e;
case 0x65905f:c.instructions+=3;goto B65905f;
case 0x659060:c.instructions+=2;goto B659060;
case 0x659061:c.instructions+=1;goto B659061;
case 0x659066:goto L659066;
case 0x659069:c.instructions+=1;goto B659069;
case 0x659512:goto L659512;
case 0x659514:c.instructions+=18;goto B659514;
case 0x659515:c.instructions+=17;goto B659515;
case 0x659517:c.instructions+=16;goto B659517;
case 0x659518:c.instructions+=15;goto B659518;
case 0x659519:c.instructions+=14;goto B659519;
case 0x65951a:c.instructions+=13;goto B65951a;
case 0x65951b:c.instructions+=12;goto B65951b;
case 0x65951d:c.instructions+=11;goto B65951d;
case 0x65951e:c.instructions+=10;goto B65951e;
case 0x659520:c.instructions+=9;goto B659520;
case 0x659523:c.instructions+=8;goto B659523;
case 0x659525:c.instructions+=7;goto B659525;
case 0x65952b:c.instructions+=6;goto B65952b;
case 0x659531:c.instructions+=5;goto B659531;
case 0x65953b:c.instructions+=4;goto B65953b;
case 0x659545:c.instructions+=3;goto B659545;
case 0x65954c:c.instructions+=2;goto B65954c;
case 0x65954d:c.instructions+=1;goto B65954d;
case 0x659552:goto L659552;
case 0x65955a:c.instructions+=2;goto B65955a;
case 0x65955c:c.instructions+=1;goto B65955c;
case 0x659562:goto L659562;
case 0x659564:c.instructions+=1;goto B659564;
case 0x659566:goto L659566;
case 0x65956c:c.instructions+=1;goto B65956c;
case 0x659571:goto L659571;
case 0x659573:c.instructions+=2;goto B659573;
case 0x659578:c.instructions+=1;goto B659578;
case 0x65957a:goto L65957a;
case 0x65957c:c.instructions+=1;goto B65957c;
case 0x659581:goto L659581;
case 0x659589:c.instructions+=2;goto B659589;
case 0x65958b:c.instructions+=1;goto B65958b;
case 0x65958d:goto L65958d;
case 0x65958f:c.instructions+=1;goto B65958f;
case 0x659591:goto L659591;
case 0x659597:c.instructions+=1;goto B659597;
case 0x659599:goto L659599;
case 0x65959b:c.instructions+=3;goto B65959b;
case 0x6595a2:c.instructions+=2;goto B6595a2;
case 0x6595a4:c.instructions+=1;goto B6595a4;
case 0x6595a6:goto L6595a6;
case 0x6595ab:c.instructions+=2;goto B6595ab;
case 0x6595b0:c.instructions+=1;goto B6595b0;
case 0x6595b6:goto L6595b6;
case 0x6595bd:c.instructions+=12;goto B6595bd;
case 0x6595be:c.instructions+=11;goto B6595be;
case 0x6595bf:c.instructions+=10;goto B6595bf;
case 0x6595c4:c.instructions+=9;goto B6595c4;
case 0x6595c7:c.instructions+=8;goto B6595c7;
case 0x6595ce:c.instructions+=7;goto B6595ce;
case 0x6595d3:c.instructions+=6;goto B6595d3;
case 0x6595d9:c.instructions+=5;goto B6595d9;
case 0x6595db:c.instructions+=4;goto B6595db;
case 0x6595de:c.instructions+=3;goto B6595de;
case 0x6595e4:c.instructions+=2;goto B6595e4;
case 0x6595e9:c.instructions+=1;goto B6595e9;
case 0x6595ef:goto L6595ef;
case 0x6595f5:c.instructions+=1;goto B6595f5;
case 0x6595fa:goto L6595fa;
case 0x659602:c.instructions+=2;goto B659602;
case 0x659604:c.instructions+=1;goto B659604;
case 0x65960a:goto L65960a;
case 0x65960c:c.instructions+=1;goto B65960c;
case 0x659612:goto L659612;
case 0x659618:c.instructions+=1;goto B659618;
case 0x65961e:goto L65961e;
case 0x659620:c.instructions+=3;goto B659620;
case 0x659627:c.instructions+=2;goto B659627;
case 0x659629:c.instructions+=1;goto B659629;
case 0x65962f:goto L65962f;
case 0x659636:goto L659636;
case 0x65963c:c.instructions+=12;goto B65963c;
case 0x65963f:c.instructions+=11;goto B65963f;
case 0x659646:c.instructions+=10;goto B659646;
case 0x659649:c.instructions+=9;goto B659649;
case 0x65964b:c.instructions+=8;goto B65964b;
case 0x65964e:c.instructions+=7;goto B65964e;
case 0x659650:c.instructions+=6;goto B659650;
case 0x659653:c.instructions+=5;goto B659653;
case 0x659656:c.instructions+=4;goto B659656;
case 0x65965b:c.instructions+=3;goto B65965b;
case 0x65965e:c.instructions+=2;goto B65965e;
case 0x659663:c.instructions+=1;goto B659663;
case 0x659669:goto L659669;
case 0x659670:goto L659670;
case 0x659671:c.instructions+=2;goto B659671;
case 0x659672:c.instructions+=1;goto B659672;
case 0x659677:goto L659677;
case 0x659678:c.instructions+=2;goto B659678;
case 0x659679:c.instructions+=1;goto B659679;
case 0x65967e:goto L65967e;
case 0x65967f:c.instructions+=2;goto B65967f;
case 0x659681:c.instructions+=1;goto B659681;
case 0x659686:goto L659686;
case 0x659688:c.instructions+=2;goto B659688;
case 0x65968a:c.instructions+=1;goto B65968a;
case 0x65968f:goto L65968f;
case 0x659690:c.instructions+=2;goto B659690;
case 0x659692:c.instructions+=1;goto B659692;
case 0x659697:goto L659697;
case 0x659698:c.instructions+=2;goto B659698;
case 0x65969a:c.instructions+=1;goto B65969a;
case 0x65969f:goto L65969f;
case 0x6596a0:c.instructions+=2;goto B6596a0;
case 0x6596a2:c.instructions+=1;goto B6596a2;
case 0x6596a7:goto L6596a7;
case 0x6596a8:c.instructions+=2;goto B6596a8;
case 0x6596aa:c.instructions+=1;goto B6596aa;
case 0x6596af:goto L6596af;
case 0x6596b0:c.instructions+=2;goto B6596b0;
case 0x6596b2:c.instructions+=1;goto B6596b2;
case 0x6596b7:goto L6596b7;
case 0x6596b8:c.instructions+=2;goto B6596b8;
case 0x6596ba:c.instructions+=1;goto B6596ba;
case 0x6596bf:goto L6596bf;
case 0x6596c0:c.instructions+=2;goto B6596c0;
case 0x6596c2:c.instructions+=1;goto B6596c2;
case 0x6596c7:goto L6596c7;
case 0x6596c9:c.instructions+=2;goto B6596c9;
case 0x6596cb:c.instructions+=1;goto B6596cb;
case 0x6596d0:goto L6596d0;
case 0x6596d1:c.instructions+=2;goto B6596d1;
case 0x6596d3:c.instructions+=1;goto B6596d3;
case 0x6596d8:goto L6596d8;
case 0x6596d9:c.instructions+=2;goto B6596d9;
case 0x6596db:c.instructions+=1;goto B6596db;
case 0x6596e0:goto L6596e0;
case 0x6596e1:c.instructions+=2;goto B6596e1;
case 0x6596e3:c.instructions+=1;goto B6596e3;
case 0x6596e8:goto L6596e8;
case 0x6596e9:c.instructions+=2;goto B6596e9;
case 0x6596eb:c.instructions+=1;goto B6596eb;
case 0x6596f0:goto L6596f0;
case 0x6596f1:c.instructions+=2;goto B6596f1;
case 0x6596f3:c.instructions+=1;goto B6596f3;
case 0x6596f8:goto L6596f8;
case 0x6596f9:c.instructions+=2;goto B6596f9;
case 0x6596fb:c.instructions+=1;goto B6596fb;
case 0x659700:goto L659700;
case 0x659701:c.instructions+=2;goto B659701;
case 0x659703:c.instructions+=1;goto B659703;
case 0x659708:goto L659708;
case 0x659709:c.instructions+=2;goto B659709;
case 0x65970b:c.instructions+=1;goto B65970b;
case 0x659710:goto L659710;
case 0x659711:c.instructions+=2;goto B659711;
case 0x659713:c.instructions+=1;goto B659713;
case 0x659718:goto L659718;
case 0x65971a:c.instructions+=2;goto B65971a;
case 0x65971c:c.instructions+=1;goto B65971c;
case 0x659721:goto L659721;
case 0x659722:c.instructions+=2;goto B659722;
case 0x659724:c.instructions+=1;goto B659724;
case 0x659729:goto L659729;
case 0x65972a:c.instructions+=2;goto B65972a;
case 0x65972c:c.instructions+=1;goto B65972c;
case 0x659731:goto L659731;
case 0x659732:c.instructions+=2;goto B659732;
case 0x659734:c.instructions+=1;goto B659734;
case 0x659739:goto L659739;
case 0x65973a:c.instructions+=2;goto B65973a;
case 0x65973c:c.instructions+=1;goto B65973c;
case 0x659741:goto L659741;
case 0x659743:c.instructions+=2;goto B659743;
case 0x659745:c.instructions+=1;goto B659745;
case 0x65974a:goto L65974a;
case 0x65974b:c.instructions+=2;goto B65974b;
case 0x65974d:c.instructions+=1;goto B65974d;
case 0x659752:goto L659752;
case 0x659754:c.instructions+=2;goto B659754;
case 0x659756:c.instructions+=1;goto B659756;
case 0x65975b:goto L65975b;
case 0x65975d:c.instructions+=2;goto B65975d;
case 0x65975f:c.instructions+=1;goto B65975f;
case 0x659764:goto L659764;
case 0x659766:c.instructions+=2;goto B659766;
case 0x659768:c.instructions+=1;goto B659768;
case 0x65976d:goto L65976d;
case 0x65976e:c.instructions+=2;goto B65976e;
case 0x659770:c.instructions+=1;goto B659770;
case 0x659775:goto L659775;
case 0x659776:c.instructions+=2;goto B659776;
case 0x659778:c.instructions+=1;goto B659778;
case 0x65977d:goto L65977d;
case 0x65977f:c.instructions+=2;goto B65977f;
case 0x659781:c.instructions+=1;goto B659781;
case 0x659786:goto L659786;
case 0x659787:c.instructions+=2;goto B659787;
case 0x659789:c.instructions+=1;goto B659789;
case 0x65978e:goto L65978e;
case 0x65978f:c.instructions+=2;goto B65978f;
case 0x659791:c.instructions+=1;goto B659791;
case 0x659796:goto L659796;
case 0x659797:c.instructions+=2;goto B659797;
case 0x659799:c.instructions+=1;goto B659799;
case 0x65979e:goto L65979e;
case 0x65979f:c.instructions+=2;goto B65979f;
case 0x6597a1:c.instructions+=1;goto B6597a1;
case 0x6597a6:goto L6597a6;
case 0x6597a7:c.instructions+=2;goto B6597a7;
case 0x6597a9:c.instructions+=1;goto B6597a9;
case 0x6597ae:goto L6597ae;
case 0x6597b0:c.instructions+=2;goto B6597b0;
case 0x6597b2:c.instructions+=1;goto B6597b2;
case 0x6597b7:goto L6597b7;
case 0x6597b8:c.instructions+=2;goto B6597b8;
case 0x6597ba:c.instructions+=1;goto B6597ba;
case 0x6597bf:goto L6597bf;
case 0x6597c1:c.instructions+=2;goto B6597c1;
case 0x6597c3:c.instructions+=1;goto B6597c3;
case 0x6597c8:goto L6597c8;
case 0x6597c9:c.instructions+=2;goto B6597c9;
case 0x6597cb:c.instructions+=1;goto B6597cb;
case 0x6597d0:goto L6597d0;
case 0x6597d1:c.instructions+=2;goto B6597d1;
case 0x6597d3:c.instructions+=1;goto B6597d3;
case 0x6597d8:goto L6597d8;
case 0x6597d9:c.instructions+=2;goto B6597d9;
case 0x6597db:c.instructions+=1;goto B6597db;
case 0x6597e0:goto L6597e0;
case 0x6597e1:c.instructions+=2;goto B6597e1;
case 0x6597e3:c.instructions+=1;goto B6597e3;
case 0x6597e8:goto L6597e8;
case 0x6597e9:c.instructions+=2;goto B6597e9;
case 0x6597eb:c.instructions+=1;goto B6597eb;
case 0x6597f0:goto L6597f0;
case 0x6597f1:c.instructions+=2;goto B6597f1;
case 0x6597f3:c.instructions+=1;goto B6597f3;
case 0x6597f8:goto L6597f8;
case 0x6597f9:c.instructions+=2;goto B6597f9;
case 0x6597fb:c.instructions+=1;goto B6597fb;
case 0x659800:goto L659800;
case 0x659801:c.instructions+=2;goto B659801;
case 0x659803:c.instructions+=1;goto B659803;
case 0x659808:goto L659808;
case 0x659809:c.instructions+=2;goto B659809;
case 0x65980b:c.instructions+=1;goto B65980b;
case 0x659810:goto L659810;
case 0x659811:c.instructions+=2;goto B659811;
case 0x659813:c.instructions+=1;goto B659813;
case 0x659818:goto L659818;
case 0x659819:c.instructions+=2;goto B659819;
case 0x65981b:c.instructions+=1;goto B65981b;
case 0x659820:goto L659820;
case 0x659822:c.instructions+=2;goto B659822;
case 0x659824:c.instructions+=1;goto B659824;
case 0x659829:goto L659829;
case 0x65982a:c.instructions+=2;goto B65982a;
case 0x65982c:c.instructions+=1;goto B65982c;
case 0x659831:goto L659831;
case 0x659833:c.instructions+=2;goto B659833;
case 0x659835:c.instructions+=1;goto B659835;
case 0x65983a:goto L65983a;
case 0x65983b:c.instructions+=2;goto B65983b;
case 0x65983d:c.instructions+=1;goto B65983d;
case 0x659842:goto L659842;
case 0x659843:c.instructions+=2;goto B659843;
case 0x659845:c.instructions+=1;goto B659845;
case 0x65984a:goto L65984a;
case 0x65984b:c.instructions+=2;goto B65984b;
case 0x65984d:c.instructions+=1;goto B65984d;
case 0x659852:goto L659852;
case 0x659853:c.instructions+=2;goto B659853;
case 0x659855:c.instructions+=1;goto B659855;
case 0x65985a:goto L65985a;
case 0x65985b:c.instructions+=2;goto B65985b;
case 0x65985d:c.instructions+=1;goto B65985d;
case 0x659862:goto L659862;
case 0x659863:c.instructions+=2;goto B659863;
case 0x659865:c.instructions+=1;goto B659865;
case 0x65986a:goto L65986a;
case 0x65986b:c.instructions+=2;goto B65986b;
case 0x65986d:c.instructions+=1;goto B65986d;
case 0x659872:goto L659872;
case 0x659873:c.instructions+=2;goto B659873;
case 0x659875:c.instructions+=1;goto B659875;
case 0x65987a:goto L65987a;
case 0x65987b:c.instructions+=2;goto B65987b;
case 0x65987d:c.instructions+=1;goto B65987d;
case 0x659882:goto L659882;
case 0x659883:c.instructions+=2;goto B659883;
case 0x659885:c.instructions+=1;goto B659885;
case 0x65988a:goto L65988a;
case 0x65988b:c.instructions+=2;goto B65988b;
case 0x65988d:c.instructions+=1;goto B65988d;
case 0x659892:goto L659892;
case 0x659893:c.instructions+=2;goto B659893;
case 0x659895:c.instructions+=1;goto B659895;
case 0x65989a:goto L65989a;
case 0x65989b:c.instructions+=2;goto B65989b;
case 0x65989d:c.instructions+=1;goto B65989d;
case 0x6598a2:goto L6598a2;
case 0x6598a3:c.instructions+=2;goto B6598a3;
case 0x6598a5:c.instructions+=1;goto B6598a5;
case 0x6598aa:goto L6598aa;
case 0x6598ab:c.instructions+=2;goto B6598ab;
case 0x6598ad:c.instructions+=1;goto B6598ad;
case 0x6598b2:goto L6598b2;
case 0x6598b3:c.instructions+=2;goto B6598b3;
case 0x6598b5:c.instructions+=1;goto B6598b5;
case 0x6598ba:goto L6598ba;
case 0x6598bc:c.instructions+=2;goto B6598bc;
case 0x6598be:c.instructions+=1;goto B6598be;
case 0x6598c3:goto L6598c3;
case 0x6598c5:c.instructions+=2;goto B6598c5;
case 0x6598c7:c.instructions+=1;goto B6598c7;
case 0x6598cc:goto L6598cc;
case 0x6598ce:c.instructions+=2;goto B6598ce;
case 0x6598d0:c.instructions+=1;goto B6598d0;
case 0x6598d5:goto L6598d5;
case 0x6598d7:c.instructions+=2;goto B6598d7;
case 0x6598d9:c.instructions+=1;goto B6598d9;
case 0x6598de:goto L6598de;
case 0x6598df:c.instructions+=2;goto B6598df;
case 0x6598e1:c.instructions+=1;goto B6598e1;
case 0x6598e6:goto L6598e6;
case 0x6598e8:c.instructions+=2;goto B6598e8;
case 0x6598ea:c.instructions+=1;goto B6598ea;
case 0x6598ef:goto L6598ef;
case 0x6598f0:c.instructions+=2;goto B6598f0;
case 0x6598f2:c.instructions+=1;goto B6598f2;
case 0x6598f7:goto L6598f7;
case 0x6598f8:c.instructions+=2;goto B6598f8;
case 0x6598fa:c.instructions+=1;goto B6598fa;
case 0x6598ff:goto L6598ff;
case 0x659901:c.instructions+=2;goto B659901;
case 0x659903:c.instructions+=1;goto B659903;
case 0x659908:goto L659908;
case 0x659909:c.instructions+=2;goto B659909;
case 0x65990b:c.instructions+=1;goto B65990b;
case 0x659910:goto L659910;
case 0x659911:c.instructions+=2;goto B659911;
case 0x659913:c.instructions+=1;goto B659913;
case 0x659918:goto L659918;
case 0x659919:c.instructions+=2;goto B659919;
case 0x65991b:c.instructions+=1;goto B65991b;
case 0x659920:goto L659920;
case 0x659921:c.instructions+=2;goto B659921;
case 0x659923:c.instructions+=1;goto B659923;
case 0x659928:goto L659928;
case 0x65992a:c.instructions+=2;goto B65992a;
case 0x65992c:c.instructions+=1;goto B65992c;
case 0x659931:goto L659931;
case 0x659932:c.instructions+=2;goto B659932;
case 0x659934:c.instructions+=1;goto B659934;
case 0x659939:goto L659939;
case 0x65993a:c.instructions+=2;goto B65993a;
case 0x65993c:c.instructions+=1;goto B65993c;
case 0x659941:goto L659941;
case 0x659942:c.instructions+=2;goto B659942;
case 0x659944:c.instructions+=1;goto B659944;
case 0x659949:goto L659949;
case 0x65994b:c.instructions+=2;goto B65994b;
case 0x65994d:c.instructions+=1;goto B65994d;
case 0x659952:goto L659952;
case 0x659954:c.instructions+=2;goto B659954;
case 0x659956:c.instructions+=1;goto B659956;
case 0x65995b:goto L65995b;
case 0x65995d:c.instructions+=2;goto B65995d;
case 0x65995f:c.instructions+=1;goto B65995f;
case 0x659964:goto L659964;
case 0x659965:c.instructions+=2;goto B659965;
case 0x659967:c.instructions+=1;goto B659967;
case 0x65996c:goto L65996c;
case 0x65996d:c.instructions+=2;goto B65996d;
case 0x65996f:c.instructions+=1;goto B65996f;
case 0x659974:goto L659974;
case 0x659975:c.instructions+=2;goto B659975;
case 0x659977:c.instructions+=1;goto B659977;
case 0x65997c:goto L65997c;
case 0x65997d:c.instructions+=2;goto B65997d;
case 0x65997f:c.instructions+=1;goto B65997f;
case 0x659984:goto L659984;
case 0x659986:c.instructions+=2;goto B659986;
case 0x659988:c.instructions+=1;goto B659988;
case 0x65998d:goto L65998d;
case 0x65998e:c.instructions+=2;goto B65998e;
case 0x659990:c.instructions+=1;goto B659990;
case 0x659995:goto L659995;
case 0x659996:c.instructions+=2;goto B659996;
case 0x659998:c.instructions+=1;goto B659998;
case 0x65999d:goto L65999d;
case 0x65999e:c.instructions+=2;goto B65999e;
case 0x6599a0:c.instructions+=1;goto B6599a0;
case 0x6599a5:goto L6599a5;
case 0x6599a6:c.instructions+=2;goto B6599a6;
case 0x6599a8:c.instructions+=1;goto B6599a8;
case 0x6599ad:goto L6599ad;
case 0x6599ae:c.instructions+=2;goto B6599ae;
case 0x6599b0:c.instructions+=1;goto B6599b0;
case 0x6599b5:goto L6599b5;
case 0x6599b6:c.instructions+=2;goto B6599b6;
case 0x6599b8:c.instructions+=1;goto B6599b8;
case 0x6599bd:goto L6599bd;
case 0x6599bf:c.instructions+=2;goto B6599bf;
case 0x6599c1:c.instructions+=1;goto B6599c1;
case 0x6599c6:goto L6599c6;
case 0x6599c8:c.instructions+=2;goto B6599c8;
case 0x6599ca:c.instructions+=1;goto B6599ca;
case 0x6599cf:goto L6599cf;
case 0x6599d0:c.instructions+=2;goto B6599d0;
case 0x6599d2:c.instructions+=1;goto B6599d2;
case 0x6599d7:goto L6599d7;
case 0x6599d9:c.instructions+=2;goto B6599d9;
case 0x6599db:c.instructions+=1;goto B6599db;
case 0x6599e0:goto L6599e0;
case 0x6599e2:c.instructions+=2;goto B6599e2;
case 0x6599e4:c.instructions+=1;goto B6599e4;
case 0x6599e9:goto L6599e9;
case 0x6599ea:c.instructions+=2;goto B6599ea;
case 0x6599ec:c.instructions+=1;goto B6599ec;
case 0x6599f1:goto L6599f1;
case 0x6599f2:c.instructions+=2;goto B6599f2;
case 0x6599f4:c.instructions+=1;goto B6599f4;
case 0x6599f9:goto L6599f9;
case 0x6599fb:c.instructions+=2;goto B6599fb;
case 0x6599fd:c.instructions+=1;goto B6599fd;
case 0x659a02:goto L659a02;
case 0x659a03:c.instructions+=2;goto B659a03;
case 0x659a05:c.instructions+=1;goto B659a05;
case 0x659a0a:goto L659a0a;
case 0x659a0c:c.instructions+=2;goto B659a0c;
case 0x659a0e:c.instructions+=1;goto B659a0e;
case 0x659a13:goto L659a13;
case 0x659a15:c.instructions+=2;goto B659a15;
case 0x659a17:c.instructions+=1;goto B659a17;
case 0x659a1c:goto L659a1c;
case 0x659a1e:c.instructions+=2;goto B659a1e;
case 0x659a20:c.instructions+=1;goto B659a20;
case 0x659a25:goto L659a25;
case 0x659a27:c.instructions+=2;goto B659a27;
case 0x659a29:c.instructions+=1;goto B659a29;
case 0x659a2e:goto L659a2e;
case 0x659a30:c.instructions+=2;goto B659a30;
case 0x659a32:c.instructions+=1;goto B659a32;
case 0x659a37:goto L659a37;
case 0x659a38:c.instructions+=2;goto B659a38;
case 0x659a3a:c.instructions+=1;goto B659a3a;
case 0x659a3f:goto L659a3f;
case 0x659a40:c.instructions+=2;goto B659a40;
case 0x659a42:c.instructions+=1;goto B659a42;
case 0x659a47:goto L659a47;
case 0x659a48:c.instructions+=2;goto B659a48;
case 0x659a4a:c.instructions+=1;goto B659a4a;
case 0x659a4f:goto L659a4f;
case 0x659a51:c.instructions+=2;goto B659a51;
case 0x659a53:c.instructions+=1;goto B659a53;
case 0x659a58:goto L659a58;
case 0x659a5a:c.instructions+=2;goto B659a5a;
case 0x659a5c:c.instructions+=1;goto B659a5c;
case 0x659a61:goto L659a61;
case 0x659a62:c.instructions+=2;goto B659a62;
case 0x659a64:c.instructions+=1;goto B659a64;
case 0x659a69:goto L659a69;
case 0x659a6b:c.instructions+=2;goto B659a6b;
case 0x659a6d:c.instructions+=1;goto B659a6d;
case 0x659a72:goto L659a72;
case 0x659a73:c.instructions+=2;goto B659a73;
case 0x659a78:c.instructions+=1;goto B659a78;
case 0x659a7d:goto L659a7d;
case 0x659a7f:c.instructions+=2;goto B659a7f;
case 0x659a84:c.instructions+=1;goto B659a84;
case 0x659a89:goto L659a89;
case 0x659a8a:c.instructions+=2;goto B659a8a;
case 0x659a8f:c.instructions+=1;goto B659a8f;
case 0x659a94:goto L659a94;
case 0x659a95:c.instructions+=2;goto B659a95;
case 0x659a9a:c.instructions+=1;goto B659a9a;
case 0x659a9f:goto L659a9f;
case 0x659aa0:c.instructions+=2;goto B659aa0;
case 0x659aa5:c.instructions+=1;goto B659aa5;
case 0x659aaa:goto L659aaa;
case 0x659aab:c.instructions+=2;goto B659aab;
case 0x659ab0:c.instructions+=1;goto B659ab0;
case 0x659ab5:goto L659ab5;
case 0x659ab6:c.instructions+=2;goto B659ab6;
case 0x659abb:c.instructions+=1;goto B659abb;
case 0x659ac0:goto L659ac0;
case 0x659ac2:c.instructions+=2;goto B659ac2;
case 0x659ac7:c.instructions+=1;goto B659ac7;
case 0x659acc:goto L659acc;
case 0x659ace:c.instructions+=2;goto B659ace;
case 0x659ad3:c.instructions+=1;goto B659ad3;
case 0x659ad8:goto L659ad8;
case 0x659ada:c.instructions+=2;goto B659ada;
case 0x659adf:c.instructions+=1;goto B659adf;
case 0x659ae4:goto L659ae4;
case 0x659ae5:c.instructions+=2;goto B659ae5;
case 0x659aea:c.instructions+=1;goto B659aea;
case 0x659aef:goto L659aef;
case 0x659af0:c.instructions+=2;goto B659af0;
case 0x659af5:c.instructions+=1;goto B659af5;
case 0x659afa:goto L659afa;
case 0x659afb:c.instructions+=2;goto B659afb;
case 0x659b00:c.instructions+=1;goto B659b00;
case 0x659b05:goto L659b05;
case 0x659b07:c.instructions+=2;goto B659b07;
case 0x659b0c:c.instructions+=1;goto B659b0c;
case 0x659b11:goto L659b11;
case 0x659b13:c.instructions+=2;goto B659b13;
case 0x659b18:c.instructions+=1;goto B659b18;
case 0x659b1d:goto L659b1d;
case 0x659b1f:c.instructions+=2;goto B659b1f;
case 0x659b24:c.instructions+=1;goto B659b24;
case 0x659b29:goto L659b29;
case 0x659b2b:c.instructions+=2;goto B659b2b;
case 0x659b30:c.instructions+=1;goto B659b30;
case 0x659b35:goto L659b35;
case 0x659b36:c.instructions+=2;goto B659b36;
case 0x659b3b:c.instructions+=1;goto B659b3b;
case 0x659b40:goto L659b40;
case 0x659b41:c.instructions+=2;goto B659b41;
case 0x659b46:c.instructions+=1;goto B659b46;
case 0x659b4b:goto L659b4b;
case 0x659b4c:c.instructions+=2;goto B659b4c;
case 0x659b51:c.instructions+=1;goto B659b51;
case 0x659b56:goto L659b56;
case 0x659b58:c.instructions+=2;goto B659b58;
case 0x659b5d:c.instructions+=1;goto B659b5d;
case 0x659b62:goto L659b62;
case 0x659b64:c.instructions+=2;goto B659b64;
case 0x659b69:c.instructions+=1;goto B659b69;
case 0x659b6e:goto L659b6e;
case 0x659b6f:c.instructions+=2;goto B659b6f;
case 0x659b74:c.instructions+=1;goto B659b74;
case 0x659b79:goto L659b79;
case 0x659b7a:c.instructions+=2;goto B659b7a;
case 0x659b7f:c.instructions+=1;goto B659b7f;
case 0x659b84:goto L659b84;
case 0x659b85:c.instructions+=2;goto B659b85;
case 0x659b8a:c.instructions+=1;goto B659b8a;
case 0x659b8f:goto L659b8f;
case 0x659b90:c.instructions+=2;goto B659b90;
case 0x659b95:c.instructions+=1;goto B659b95;
case 0x659b9a:goto L659b9a;
case 0x659b9c:c.instructions+=2;goto B659b9c;
case 0x659ba1:c.instructions+=1;goto B659ba1;
case 0x659ba6:goto L659ba6;
case 0x659ba8:c.instructions+=2;goto B659ba8;
case 0x659bad:c.instructions+=1;goto B659bad;
case 0x659bb2:goto L659bb2;
case 0x659bb3:c.instructions+=2;goto B659bb3;
case 0x659bb8:c.instructions+=1;goto B659bb8;
case 0x659bbd:goto L659bbd;
case 0x659bbe:c.instructions+=2;goto B659bbe;
case 0x659bc3:c.instructions+=1;goto B659bc3;
case 0x659bc8:goto L659bc8;
case 0x659bc9:c.instructions+=2;goto B659bc9;
case 0x659bce:c.instructions+=1;goto B659bce;
case 0x659bd3:goto L659bd3;
case 0x659bd5:c.instructions+=2;goto B659bd5;
case 0x659bda:c.instructions+=1;goto B659bda;
case 0x659bdf:goto L659bdf;
case 0x659be0:c.instructions+=2;goto B659be0;
case 0x659be5:c.instructions+=1;goto B659be5;
case 0x659bea:goto L659bea;
case 0x659beb:c.instructions+=2;goto B659beb;
case 0x659bf0:c.instructions+=1;goto B659bf0;
case 0x659bf5:goto L659bf5;
case 0x659bf6:c.instructions+=2;goto B659bf6;
case 0x659bfb:c.instructions+=1;goto B659bfb;
case 0x659c00:goto L659c00;
case 0x659c01:c.instructions+=2;goto B659c01;
case 0x659c06:c.instructions+=1;goto B659c06;
case 0x659c0b:goto L659c0b;
case 0x659c0d:c.instructions+=2;goto B659c0d;
case 0x659c12:c.instructions+=1;goto B659c12;
case 0x659c17:goto L659c17;
case 0x659c18:c.instructions+=2;goto B659c18;
case 0x659c1d:c.instructions+=1;goto B659c1d;
case 0x659c22:goto L659c22;
case 0x659c23:c.instructions+=2;goto B659c23;
case 0x659c28:c.instructions+=1;goto B659c28;
case 0x659c2d:goto L659c2d;
case 0x659c2e:c.instructions+=2;goto B659c2e;
case 0x659c33:c.instructions+=1;goto B659c33;
case 0x659c38:goto L659c38;
case 0x659c39:c.instructions+=2;goto B659c39;
case 0x659c3e:c.instructions+=1;goto B659c3e;
case 0x659c43:goto L659c43;
case 0x659c44:c.instructions+=2;goto B659c44;
case 0x659c49:c.instructions+=1;goto B659c49;
case 0x659c4e:goto L659c4e;
case 0x659c4f:c.instructions+=2;goto B659c4f;
case 0x659c54:c.instructions+=1;goto B659c54;
case 0x659c59:goto L659c59;
case 0x659c5b:c.instructions+=2;goto B659c5b;
case 0x659c60:c.instructions+=1;goto B659c60;
case 0x659c65:goto L659c65;
case 0x659c67:c.instructions+=2;goto B659c67;
case 0x659c6c:c.instructions+=1;goto B659c6c;
case 0x659c71:goto L659c71;
case 0x659c72:c.instructions+=2;goto B659c72;
case 0x659c77:c.instructions+=1;goto B659c77;
case 0x659c7c:goto L659c7c;
case 0x659c7e:c.instructions+=2;goto B659c7e;
case 0x659c83:c.instructions+=1;goto B659c83;
case 0x659c88:goto L659c88;
case 0x659c8a:c.instructions+=2;goto B659c8a;
case 0x659c8f:c.instructions+=1;goto B659c8f;
case 0x659c94:goto L659c94;
case 0x659c96:c.instructions+=2;goto B659c96;
case 0x659c9b:c.instructions+=1;goto B659c9b;
case 0x659ca0:goto L659ca0;
case 0x659ca2:c.instructions+=2;goto B659ca2;
case 0x659ca7:c.instructions+=1;goto B659ca7;
case 0x659cac:goto L659cac;
case 0x659cad:c.instructions+=2;goto B659cad;
case 0x659cb2:c.instructions+=1;goto B659cb2;
case 0x659cb7:goto L659cb7;
case 0x659cb8:c.instructions+=2;goto B659cb8;
case 0x659cbd:c.instructions+=1;goto B659cbd;
case 0x659cc2:goto L659cc2;
case 0x659cc3:c.instructions+=2;goto B659cc3;
case 0x659cc8:c.instructions+=1;goto B659cc8;
case 0x659ccd:goto L659ccd;
case 0x659cce:c.instructions+=2;goto B659cce;
case 0x659cd3:c.instructions+=1;goto B659cd3;
case 0x659cd8:goto L659cd8;
case 0x659cd9:c.instructions+=2;goto B659cd9;
case 0x659cde:c.instructions+=1;goto B659cde;
case 0x659ce3:goto L659ce3;
case 0x659ce4:c.instructions+=2;goto B659ce4;
case 0x659ce9:c.instructions+=1;goto B659ce9;
case 0x659cee:goto L659cee;
case 0x659cef:c.instructions+=2;goto B659cef;
case 0x659cf4:c.instructions+=1;goto B659cf4;
case 0x659cf9:goto L659cf9;
case 0x659cfa:c.instructions+=2;goto B659cfa;
case 0x659cff:c.instructions+=1;goto B659cff;
case 0x659d04:goto L659d04;
case 0x659d05:c.instructions+=2;goto B659d05;
case 0x659d0a:c.instructions+=1;goto B659d0a;
case 0x659d0f:goto L659d0f;
case 0x659d11:c.instructions+=2;goto B659d11;
case 0x659d16:c.instructions+=1;goto B659d16;
case 0x659d1b:goto L659d1b;
case 0x659d1c:c.instructions+=2;goto B659d1c;
case 0x659d21:c.instructions+=1;goto B659d21;
case 0x659d26:goto L659d26;
case 0x659d27:c.instructions+=2;goto B659d27;
case 0x659d2c:c.instructions+=1;goto B659d2c;
case 0x659d31:goto L659d31;
case 0x659d32:c.instructions+=2;goto B659d32;
case 0x659d37:c.instructions+=1;goto B659d37;
case 0x659d3c:goto L659d3c;
case 0x659d3d:c.instructions+=2;goto B659d3d;
case 0x659d42:c.instructions+=1;goto B659d42;
case 0x659d47:goto L659d47;
case 0x659d48:c.instructions+=2;goto B659d48;
case 0x659d4d:c.instructions+=1;goto B659d4d;
case 0x659d52:goto L659d52;
case 0x659d53:c.instructions+=2;goto B659d53;
case 0x659d58:c.instructions+=1;goto B659d58;
case 0x659d5d:goto L659d5d;
case 0x659d5e:c.instructions+=2;goto B659d5e;
case 0x659d63:c.instructions+=1;goto B659d63;
case 0x659d68:goto L659d68;
case 0x659d69:c.instructions+=2;goto B659d69;
case 0x659d6e:c.instructions+=1;goto B659d6e;
case 0x659d73:goto L659d73;
case 0x659d74:c.instructions+=2;goto B659d74;
case 0x659d79:c.instructions+=1;goto B659d79;
case 0x659d7e:goto L659d7e;
case 0x659d7f:c.instructions+=2;goto B659d7f;
case 0x659d84:c.instructions+=1;goto B659d84;
case 0x659d89:goto L659d89;
case 0x659d8a:c.instructions+=2;goto B659d8a;
case 0x659d8f:c.instructions+=1;goto B659d8f;
case 0x659d94:goto L659d94;
case 0x659d95:c.instructions+=2;goto B659d95;
case 0x659d9a:c.instructions+=1;goto B659d9a;
case 0x659d9f:goto L659d9f;
case 0x659da1:c.instructions+=2;goto B659da1;
case 0x659da6:c.instructions+=1;goto B659da6;
case 0x659dab:goto L659dab;
case 0x659dad:c.instructions+=2;goto B659dad;
case 0x659db2:c.instructions+=1;goto B659db2;
case 0x659db7:goto L659db7;
case 0x659db9:c.instructions+=2;goto B659db9;
case 0x659dbe:c.instructions+=1;goto B659dbe;
case 0x659dc3:goto L659dc3;
case 0x659dc4:c.instructions+=2;goto B659dc4;
case 0x659dc9:c.instructions+=1;goto B659dc9;
case 0x659dce:goto L659dce;
case 0x659dcf:c.instructions+=2;goto B659dcf;
case 0x659dd4:c.instructions+=1;goto B659dd4;
case 0x659dd9:goto L659dd9;
case 0x659ddb:c.instructions+=2;goto B659ddb;
case 0x659de0:c.instructions+=1;goto B659de0;
case 0x659de5:goto L659de5;
case 0x659de6:c.instructions+=2;goto B659de6;
case 0x659deb:c.instructions+=1;goto B659deb;
case 0x659df0:goto L659df0;
case 0x659df1:c.instructions+=2;goto B659df1;
case 0x659df6:c.instructions+=1;goto B659df6;
case 0x659dfb:goto L659dfb;
case 0x659dfd:c.instructions+=2;goto B659dfd;
case 0x659e02:c.instructions+=1;goto B659e02;
case 0x659e07:goto L659e07;
case 0x659e08:c.instructions+=2;goto B659e08;
case 0x659e0d:c.instructions+=1;goto B659e0d;
case 0x659e12:goto L659e12;
case 0x659e14:c.instructions+=2;goto B659e14;
case 0x659e19:c.instructions+=1;goto B659e19;
case 0x659e1e:goto L659e1e;
case 0x659e1f:c.instructions+=2;goto B659e1f;
case 0x659e24:c.instructions+=1;goto B659e24;
case 0x659e29:goto L659e29;
case 0x659e2a:c.instructions+=2;goto B659e2a;
case 0x659e2f:c.instructions+=1;goto B659e2f;
case 0x659e34:goto L659e34;
case 0x659e35:c.instructions+=2;goto B659e35;
case 0x659e3a:c.instructions+=1;goto B659e3a;
case 0x659e3f:goto L659e3f;
case 0x659e40:c.instructions+=2;goto B659e40;
case 0x659e45:c.instructions+=1;goto B659e45;
case 0x659e4a:goto L659e4a;
case 0x659e4c:c.instructions+=2;goto B659e4c;
case 0x659e51:c.instructions+=1;goto B659e51;
case 0x659e56:goto L659e56;
case 0x659e58:c.instructions+=2;goto B659e58;
case 0x659e5d:c.instructions+=1;goto B659e5d;
case 0x659e62:goto L659e62;
case 0x659e63:c.instructions+=2;goto B659e63;
case 0x659e68:c.instructions+=1;goto B659e68;
case 0x659e6d:goto L659e6d;
case 0x659e6e:c.instructions+=2;goto B659e6e;
case 0x659e73:c.instructions+=1;goto B659e73;
case 0x659e78:goto L659e78;
case 0x659e79:c.instructions+=2;goto B659e79;
case 0x659e7e:c.instructions+=1;goto B659e7e;
case 0x659e83:goto L659e83;
case 0x659e84:c.instructions+=2;goto B659e84;
case 0x659e89:c.instructions+=1;goto B659e89;
case 0x659e8e:goto L659e8e;
case 0x659e8f:c.instructions+=2;goto B659e8f;
case 0x659e94:c.instructions+=1;goto B659e94;
case 0x659e99:goto L659e99;
case 0x659e9a:c.instructions+=2;goto B659e9a;
case 0x659e9f:c.instructions+=1;goto B659e9f;
case 0x659ea4:goto L659ea4;
case 0x659ea5:c.instructions+=2;goto B659ea5;
case 0x659eaa:c.instructions+=1;goto B659eaa;
case 0x659eaf:goto L659eaf;
case 0x659eb0:c.instructions+=2;goto B659eb0;
case 0x659eb5:c.instructions+=1;goto B659eb5;
case 0x659eba:goto L659eba;
case 0x659ebb:c.instructions+=2;goto B659ebb;
case 0x659ec0:c.instructions+=1;goto B659ec0;
case 0x659ec5:goto L659ec5;
case 0x659ec7:c.instructions+=2;goto B659ec7;
case 0x659ecc:c.instructions+=1;goto B659ecc;
case 0x659ed1:goto L659ed1;
case 0x659ed2:c.instructions+=2;goto B659ed2;
case 0x659ed7:c.instructions+=1;goto B659ed7;
case 0x659edc:goto L659edc;
case 0x659ede:c.instructions+=2;goto B659ede;
case 0x659ee3:c.instructions+=1;goto B659ee3;
case 0x659ee8:goto L659ee8;
case 0x659eea:c.instructions+=2;goto B659eea;
case 0x659eef:c.instructions+=1;goto B659eef;
case 0x659ef4:goto L659ef4;
case 0x659ef6:c.instructions+=2;goto B659ef6;
case 0x659efb:c.instructions+=1;goto B659efb;
case 0x659f00:goto L659f00;
case 0x659f01:c.instructions+=2;goto B659f01;
case 0x659f06:c.instructions+=1;goto B659f06;
case 0x659f0b:goto L659f0b;
case 0x659f0d:c.instructions+=2;goto B659f0d;
case 0x659f12:c.instructions+=1;goto B659f12;
case 0x659f17:goto L659f17;
case 0x659f19:c.instructions+=2;goto B659f19;
case 0x659f1e:c.instructions+=1;goto B659f1e;
case 0x659f23:goto L659f23;
case 0x659f24:c.instructions+=2;goto B659f24;
case 0x659f29:c.instructions+=1;goto B659f29;
case 0x659f2e:goto L659f2e;
case 0x659f30:c.instructions+=2;goto B659f30;
case 0x659f35:c.instructions+=1;goto B659f35;
case 0x659f3a:goto L659f3a;
case 0x659f3c:c.instructions+=2;goto B659f3c;
case 0x659f41:c.instructions+=1;goto B659f41;
case 0x659f46:goto L659f46;
case 0x659f48:c.instructions+=2;goto B659f48;
case 0x659f4d:c.instructions+=1;goto B659f4d;
case 0x659f52:goto L659f52;
case 0x659f54:c.instructions+=2;goto B659f54;
case 0x659f59:c.instructions+=1;goto B659f59;
case 0x659f5e:goto L659f5e;
case 0x659f5f:c.instructions+=2;goto B659f5f;
case 0x659f64:c.instructions+=1;goto B659f64;
case 0x659f69:goto L659f69;
case 0x659f6b:c.instructions+=2;goto B659f6b;
case 0x659f70:c.instructions+=1;goto B659f70;
case 0x659f75:goto L659f75;
case 0x659f77:c.instructions+=2;goto B659f77;
case 0x659f7c:c.instructions+=1;goto B659f7c;
case 0x659f81:goto L659f81;
case 0x659f82:c.instructions+=2;goto B659f82;
case 0x659f87:c.instructions+=1;goto B659f87;
case 0x659f8c:goto L659f8c;
case 0x659f8e:c.instructions+=2;goto B659f8e;
case 0x659f93:c.instructions+=1;goto B659f93;
case 0x659f98:goto L659f98;
case 0x659f99:c.instructions+=2;goto B659f99;
case 0x659f9e:c.instructions+=1;goto B659f9e;
case 0x659fa3:goto L659fa3;
case 0x659fa5:c.instructions+=2;goto B659fa5;
case 0x659faa:c.instructions+=1;goto B659faa;
case 0x659faf:goto L659faf;
case 0x659fb0:c.instructions+=2;goto B659fb0;
case 0x659fb5:c.instructions+=1;goto B659fb5;
case 0x659fba:goto L659fba;
case 0x659fbc:c.instructions+=2;goto B659fbc;
case 0x659fc1:c.instructions+=1;goto B659fc1;
case 0x659fc6:goto L659fc6;
case 0x659fc7:c.instructions+=2;goto B659fc7;
case 0x659fcc:c.instructions+=1;goto B659fcc;
case 0x659fd1:goto L659fd1;
case 0x659fd3:c.instructions+=2;goto B659fd3;
case 0x659fd8:c.instructions+=1;goto B659fd8;
case 0x659fdd:goto L659fdd;
case 0x659fdf:c.instructions+=2;goto B659fdf;
case 0x659fe4:c.instructions+=1;goto B659fe4;
case 0x659fe9:goto L659fe9;
case 0x659feb:c.instructions+=2;goto B659feb;
case 0x659ff0:c.instructions+=1;goto B659ff0;
case 0x659ff5:goto L659ff5;
case 0x659ff7:c.instructions+=2;goto B659ff7;
case 0x659ffc:c.instructions+=1;goto B659ffc;
default:missing_instruction(c.pc);}
B659000:L659000:{c.instructions+=2;NFSU2_TR(0x659000);
__builtin_memmove((R+4),(R+28),4);
}
B659002:{NFSU2_TR(0x659002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x659007ull));
TAIL_STATIC(0x6507b9u,650);
}
B659007:L659007:{c.instructions+=1;NFSU2_TR(0x659007);
TAIL_STATIC(0x658278u,658);
}
B65900c:L65900c:{c.instructions+=2;NFSU2_TR(0x65900c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65900d:{NFSU2_TR(0x65900d);
{goto L659011;}
}
B65900f:L65900f:{c.instructions+=1;NFSU2_TR(0x65900f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659011:L659011:{c.instructions+=2;NFSU2_TR(0x659011);
__builtin_memmove((R+4),(R+28),4);
}
B659013:{NFSU2_TR(0x659013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x659018ull));
TAIL_STATIC(0x6507d4u,650);
}
B659018:L659018:{c.instructions+=1;NFSU2_TR(0x659018);
TAIL_STATIC(0x658278u,658);
}
B65901d:L65901d:{c.instructions+=5;NFSU2_TR(0x65901d);
u8 U[4];
w4(U+0,u32(0x7b4f08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659022:{NFSU2_TR(0x659022);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659023:{NFSU2_TR(0x659023);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659024:{NFSU2_TR(0x659024);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659025:{NFSU2_TR(0x659025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65902aull));
TAIL_STATIC(0x64f5cdu,64f);
}
B65902a:L65902a:{c.instructions+=2;NFSU2_TR(0x65902a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B65902d:{NFSU2_TR(0x65902d);
TAIL_STATIC(0x658482u,658);
}
B659032:L659032:{c.instructions+=2;NFSU2_TR(0x659032);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659034:{NFSU2_TR(0x659034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x659039ull));
TAIL_STATIC(0x645362u,645);
}
B659039:L659039:{c.instructions+=2;NFSU2_TR(0x659039);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65903b:{NFSU2_TR(0x65903b);
if(r1(R+518)){{goto L65904f;}}
}
B65903d:L65903d:{c.instructions+=5;NFSU2_TR(0x65903d);
u8 U[4];
w4(U+0,u32(0x7abaacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659042:{NFSU2_TR(0x659042);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B659045:{NFSU2_TR(0x659045);
__builtin_memmove((R+4),(R+0),4);
}
B659047:{NFSU2_TR(0x659047);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659048:{NFSU2_TR(0x659048);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65904dull));
TAIL_STATIC(0x672498u,672);
}
B65904d:L65904d:{c.instructions+=1;NFSU2_TR(0x65904d);
{goto L659051;}
}
B65904f:L65904f:{c.instructions+=1;NFSU2_TR(0x65904f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B659051:L659051:{c.instructions+=2;NFSU2_TR(0x659051);
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
B659053:{NFSU2_TR(0x659053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6584a3u,658);}
}
B659059:L659059:{c.instructions+=5;NFSU2_TR(0x659059);
u8 U[4];
w4(U+0,u32(0x7aba8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65905e:{NFSU2_TR(0x65905e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65905f:{NFSU2_TR(0x65905f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659060:{NFSU2_TR(0x659060);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659061:{NFSU2_TR(0x659061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x659066ull));
TAIL_STATIC(0x64f5cdu,64f);
}
B659066:L659066:{c.instructions+=2;NFSU2_TR(0x659066);
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
B659069:{NFSU2_TR(0x659069);
TAIL_STATIC(0x6584a6u,658);
}
B659512:L659512:{c.instructions+=19;NFSU2_TR(0x659512);
__builtin_memmove((R+28),(R+28),4);
}
B659514:{NFSU2_TR(0x659514);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659515:{NFSU2_TR(0x659515);
__builtin_memmove((R+20),(R+16),4);
}
B659517:{NFSU2_TR(0x659517);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659518:{NFSU2_TR(0x659518);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659519:{NFSU2_TR(0x659519);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65951a:{NFSU2_TR(0x65951a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65951b:{NFSU2_TR(0x65951b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B65951d:{NFSU2_TR(0x65951d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65951e:{NFSU2_TR(0x65951e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B659520:{NFSU2_TR(0x659520);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B659523:{NFSU2_TR(0x659523);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B659525:{NFSU2_TR(0x659525);
__builtin_memmove(gp(0x8a5ce8),(R+12),4);
}
B65952b:{NFSU2_TR(0x65952b);
__builtin_memmove(gp(0x8a5ce4),(R+12),4);
}
B659531:{NFSU2_TR(0x659531);
s4(0x8a5cdc,u32(0x8a58e8ull));
}
B65953b:{NFSU2_TR(0x65953b);
s4(0x8a5cd8,u32(0x8a5118ull));
}
B659545:{NFSU2_TR(0x659545);
__builtin_memmove(gp(0x8a58e8),(R+12),2);
}
B65954c:{NFSU2_TR(0x65954c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B65954d:{NFSU2_TR(0x65954d);
__builtin_memmove(gp(0x8a5ce0),(R+0),4);
}
B659552:L659552:{c.instructions+=3;NFSU2_TR(0x659552);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x804e10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B65955a:{NFSU2_TR(0x65955a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65955c:{NFSU2_TR(0x65955c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L659636;}}
}
B659562:L659562:{c.instructions+=2;NFSU2_TR(0x659562);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B659564:{NFSU2_TR(0x659564);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L659581;}}
}
B659566:L659566:{c.instructions+=2;NFSU2_TR(0x659566);
__builtin_memmove((R+4),gp(0x8a5cf0),4);
}
B65956c:{NFSU2_TR(0x65956c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x659571ull));
TAIL_STATIC(0x6557c0u,655);
}
B659571:L659571:{c.instructions+=3;NFSU2_TR(0x659571);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B659573:{NFSU2_TR(0x659573);
__builtin_memmove(gp(0x8a5ce0),(R+0),4);
}
B659578:{NFSU2_TR(0x659578);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L659581;}}
}
B65957a:L65957a:{c.instructions+=2;NFSU2_TR(0x65957a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65957c:{NFSU2_TR(0x65957c);
__builtin_memmove(gp(0x8a5ce0),(R+0),4);
}
B659581:L659581:{c.instructions+=3;NFSU2_TR(0x659581);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8052c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B659589:{NFSU2_TR(0x659589);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65958b:{NFSU2_TR(0x65958b);
if(r1(R+518)){{goto L6595fa;}}
}
B65958d:L65958d:{c.instructions+=2;NFSU2_TR(0x65958d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B65958f:{NFSU2_TR(0x65958f);
if(r1(R+519)){{goto L6595fa;}}
}
B659591:L659591:{c.instructions+=2;NFSU2_TR(0x659591);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xd88ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd88ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B659597:{NFSU2_TR(0x659597);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6595fa;}}
}
B659599:L659599:{c.instructions+=4;NFSU2_TR(0x659599);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B65959b:{NFSU2_TR(0x65959b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x807650ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B6595a2:{NFSU2_TR(0x6595a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6595a4:{NFSU2_TR(0x6595a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6595fa;}}
}
B6595a6:L6595a6:{c.instructions+=3;NFSU2_TR(0x6595a6);
__builtin_memmove((R+0),gp(0x8a5cdc),4);
}
B6595ab:{NFSU2_TR(0x6595ab);
w1(R+512,u8((r4(R+0))<(u32(0x8a5cceull))));
}
B6595b0:{NFSU2_TR(0x6595b0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x65a364u,65a);}
}
B6595b6:L6595b6:{c.instructions+=13;NFSU2_TR(0x6595b6);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x805b38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B6595bd:{NFSU2_TR(0x6595bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6595be:{NFSU2_TR(0x6595be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6595bf:{NFSU2_TR(0x6595bf);
__builtin_memmove(gp(0x8a5cdc),(R+0),4);
}
B6595c4:{NFSU2_TR(0x6595c4);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B6595c7:{NFSU2_TR(0x6595c7);
s4(0x8a5cd8,u32(u32(m4(0x8a5cd8))+u32(u32(0x4ull))));
}
B6595ce:{NFSU2_TR(0x6595ce);
__builtin_memmove((R+0),gp(0x8a5cd0),4);
}
B6595d3:{NFSU2_TR(0x6595d3);
__builtin_memmove((R+4),gp(0x8a5cd8),4);
}
B6595d9:{NFSU2_TR(0x6595d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6595db:{NFSU2_TR(0x6595db);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6595de:{NFSU2_TR(0x6595de);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a5ce4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6595e4:{NFSU2_TR(0x6595e4);
__builtin_memmove(gp(0x8a5ce0),(R+0),4);
}
B6595e9:{NFSU2_TR(0x6595e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x659552u);}goto L659552;}}
}
B6595ef:L6595ef:{c.instructions+=2;NFSU2_TR(0x6595ef);
s4(0x8a5ce4,u32(u32(m4(0x8a5ce4))-u32(u32(0x1ull))));
}
B6595f5:{NFSU2_TR(0x6595f5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x659552u);}goto L659552;}
}
B6595fa:L6595fa:{c.instructions+=3;NFSU2_TR(0x6595fa);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x805688ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B659602:{NFSU2_TR(0x659602);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B659604:{NFSU2_TR(0x659604);
if(r1(R+518)){TAIL_STATIC(0x65a29du,65a);}
}
B65960a:L65960a:{c.instructions+=2;NFSU2_TR(0x65960a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B65960c:{NFSU2_TR(0x65960c);
if(r1(R+519)){TAIL_STATIC(0x65a29du,65a);}
}
B659612:L659612:{c.instructions+=2;NFSU2_TR(0x659612);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xd88ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd88ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B659618:{NFSU2_TR(0x659618);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x65a29du,65a);}
}
B65961e:L65961e:{c.instructions+=4;NFSU2_TR(0x65961e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B659620:{NFSU2_TR(0x659620);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x807650ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B659627:{NFSU2_TR(0x659627);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B659629:{NFSU2_TR(0x659629);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x65a29du,65a);}
}
B65962f:L65962f:{c.instructions+=1;NFSU2_TR(0x65962f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x805b38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B659636:L659636:{c.instructions+=13;NFSU2_TR(0x659636);
__builtin_memmove((R+8),gp(0x8a5cd8),4);
}
B65963c:{NFSU2_TR(0x65963c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B65963f:{NFSU2_TR(0x65963f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x804bc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B659646:{NFSU2_TR(0x659646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B659649:{NFSU2_TR(0x659649);
__builtin_memmove((R+0),(R+24),4);
}
B65964b:{NFSU2_TR(0x65964b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B65964e:{NFSU2_TR(0x65964e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B659650:{NFSU2_TR(0x659650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B659653:{NFSU2_TR(0x659653);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B659656:{NFSU2_TR(0x659656);
__builtin_memmove(gp(0x8a5cd4),(R+0),4);
}
B65965b:{NFSU2_TR(0x65965b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B65965e:{NFSU2_TR(0x65965e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x124ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x124ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x124ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B659663:{NFSU2_TR(0x659663);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x65a1c2u,65a);}
}
B659669:L659669:{c.instructions+=1;NFSU2_TR(0x659669);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x65a37dull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B659670:L659670:{c.instructions+=3;NFSU2_TR(0x659670);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659671:{NFSU2_TR(0x659671);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659672:{NFSU2_TR(0x659672);
TAIL_STATIC(0x65a1b7u,65a);
}
B659677:L659677:{c.instructions+=3;NFSU2_TR(0x659677);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659678:{NFSU2_TR(0x659678);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659679:{NFSU2_TR(0x659679);
TAIL_STATIC(0x65a1b7u,65a);
}
B65967e:L65967e:{c.instructions+=3;NFSU2_TR(0x65967e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65967f:{NFSU2_TR(0x65967f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659681:{NFSU2_TR(0x659681);
TAIL_STATIC(0x65a1b7u,65a);
}
B659686:L659686:{c.instructions+=3;NFSU2_TR(0x659686);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659688:{NFSU2_TR(0x659688);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65968a:{NFSU2_TR(0x65968a);
TAIL_STATIC(0x65a1b7u,65a);
}
B65968f:L65968f:{c.instructions+=3;NFSU2_TR(0x65968f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659690:{NFSU2_TR(0x659690);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659692:{NFSU2_TR(0x659692);
TAIL_STATIC(0x65a1b7u,65a);
}
B659697:L659697:{c.instructions+=3;NFSU2_TR(0x659697);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659698:{NFSU2_TR(0x659698);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65969a:{NFSU2_TR(0x65969a);
TAIL_STATIC(0x65a1b7u,65a);
}
B65969f:L65969f:{c.instructions+=3;NFSU2_TR(0x65969f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596a0:{NFSU2_TR(0x6596a0);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596a2:{NFSU2_TR(0x6596a2);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596a7:L6596a7:{c.instructions+=3;NFSU2_TR(0x6596a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596a8:{NFSU2_TR(0x6596a8);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596aa:{NFSU2_TR(0x6596aa);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596af:L6596af:{c.instructions+=3;NFSU2_TR(0x6596af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596b0:{NFSU2_TR(0x6596b0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596b2:{NFSU2_TR(0x6596b2);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596b7:L6596b7:{c.instructions+=3;NFSU2_TR(0x6596b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596b8:{NFSU2_TR(0x6596b8);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596ba:{NFSU2_TR(0x6596ba);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596bf:L6596bf:{c.instructions+=3;NFSU2_TR(0x6596bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596c0:{NFSU2_TR(0x6596c0);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596c2:{NFSU2_TR(0x6596c2);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596c7:L6596c7:{c.instructions+=3;NFSU2_TR(0x6596c7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596c9:{NFSU2_TR(0x6596c9);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596cb:{NFSU2_TR(0x6596cb);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596d0:L6596d0:{c.instructions+=3;NFSU2_TR(0x6596d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596d1:{NFSU2_TR(0x6596d1);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596d3:{NFSU2_TR(0x6596d3);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596d8:L6596d8:{c.instructions+=3;NFSU2_TR(0x6596d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596d9:{NFSU2_TR(0x6596d9);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596db:{NFSU2_TR(0x6596db);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596e0:L6596e0:{c.instructions+=3;NFSU2_TR(0x6596e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596e1:{NFSU2_TR(0x6596e1);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596e3:{NFSU2_TR(0x6596e3);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596e8:L6596e8:{c.instructions+=3;NFSU2_TR(0x6596e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596e9:{NFSU2_TR(0x6596e9);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596eb:{NFSU2_TR(0x6596eb);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596f0:L6596f0:{c.instructions+=3;NFSU2_TR(0x6596f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596f1:{NFSU2_TR(0x6596f1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596f3:{NFSU2_TR(0x6596f3);
TAIL_STATIC(0x65a1b7u,65a);
}
B6596f8:L6596f8:{c.instructions+=3;NFSU2_TR(0x6596f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596f9:{NFSU2_TR(0x6596f9);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6596fb:{NFSU2_TR(0x6596fb);
TAIL_STATIC(0x65a1b7u,65a);
}
B659700:L659700:{c.instructions+=3;NFSU2_TR(0x659700);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659701:{NFSU2_TR(0x659701);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659703:{NFSU2_TR(0x659703);
TAIL_STATIC(0x65a1b7u,65a);
}
B659708:L659708:{c.instructions+=3;NFSU2_TR(0x659708);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659709:{NFSU2_TR(0x659709);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65970b:{NFSU2_TR(0x65970b);
TAIL_STATIC(0x65a1b7u,65a);
}
B659710:L659710:{c.instructions+=3;NFSU2_TR(0x659710);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659711:{NFSU2_TR(0x659711);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659713:{NFSU2_TR(0x659713);
TAIL_STATIC(0x65a1b7u,65a);
}
B659718:L659718:{c.instructions+=3;NFSU2_TR(0x659718);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65971a:{NFSU2_TR(0x65971a);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65971c:{NFSU2_TR(0x65971c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659721:L659721:{c.instructions+=3;NFSU2_TR(0x659721);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659722:{NFSU2_TR(0x659722);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659724:{NFSU2_TR(0x659724);
TAIL_STATIC(0x65a1b7u,65a);
}
B659729:L659729:{c.instructions+=3;NFSU2_TR(0x659729);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65972a:{NFSU2_TR(0x65972a);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65972c:{NFSU2_TR(0x65972c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659731:L659731:{c.instructions+=3;NFSU2_TR(0x659731);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659732:{NFSU2_TR(0x659732);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659734:{NFSU2_TR(0x659734);
TAIL_STATIC(0x65a1b7u,65a);
}
B659739:L659739:{c.instructions+=3;NFSU2_TR(0x659739);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65973a:{NFSU2_TR(0x65973a);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65973c:{NFSU2_TR(0x65973c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659741:L659741:{c.instructions+=3;NFSU2_TR(0x659741);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659743:{NFSU2_TR(0x659743);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659745:{NFSU2_TR(0x659745);
TAIL_STATIC(0x65a1b7u,65a);
}
B65974a:L65974a:{c.instructions+=3;NFSU2_TR(0x65974a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65974b:{NFSU2_TR(0x65974b);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65974d:{NFSU2_TR(0x65974d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659752:L659752:{c.instructions+=3;NFSU2_TR(0x659752);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659754:{NFSU2_TR(0x659754);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659756:{NFSU2_TR(0x659756);
TAIL_STATIC(0x65a1b7u,65a);
}
B65975b:L65975b:{c.instructions+=3;NFSU2_TR(0x65975b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65975d:{NFSU2_TR(0x65975d);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65975f:{NFSU2_TR(0x65975f);
TAIL_STATIC(0x65a1b7u,65a);
}
B659764:L659764:{c.instructions+=3;NFSU2_TR(0x659764);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659766:{NFSU2_TR(0x659766);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659768:{NFSU2_TR(0x659768);
TAIL_STATIC(0x65a1b7u,65a);
}
B65976d:L65976d:{c.instructions+=3;NFSU2_TR(0x65976d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65976e:{NFSU2_TR(0x65976e);
u8 U[4];
w4(U+0,u32(0x21ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659770:{NFSU2_TR(0x659770);
TAIL_STATIC(0x65a1b7u,65a);
}
B659775:L659775:{c.instructions+=3;NFSU2_TR(0x659775);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659776:{NFSU2_TR(0x659776);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659778:{NFSU2_TR(0x659778);
TAIL_STATIC(0x65a1b7u,65a);
}
B65977d:L65977d:{c.instructions+=3;NFSU2_TR(0x65977d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65977f:{NFSU2_TR(0x65977f);
u8 U[4];
w4(U+0,u32(0x23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659781:{NFSU2_TR(0x659781);
TAIL_STATIC(0x65a1b7u,65a);
}
B659786:L659786:{c.instructions+=3;NFSU2_TR(0x659786);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659787:{NFSU2_TR(0x659787);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659789:{NFSU2_TR(0x659789);
TAIL_STATIC(0x65a1b7u,65a);
}
B65978e:L65978e:{c.instructions+=3;NFSU2_TR(0x65978e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65978f:{NFSU2_TR(0x65978f);
u8 U[4];
w4(U+0,u32(0x25ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659791:{NFSU2_TR(0x659791);
TAIL_STATIC(0x65a1b7u,65a);
}
B659796:L659796:{c.instructions+=3;NFSU2_TR(0x659796);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659797:{NFSU2_TR(0x659797);
u8 U[4];
w4(U+0,u32(0x26ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659799:{NFSU2_TR(0x659799);
TAIL_STATIC(0x65a1b7u,65a);
}
B65979e:L65979e:{c.instructions+=3;NFSU2_TR(0x65979e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65979f:{NFSU2_TR(0x65979f);
u8 U[4];
w4(U+0,u32(0x27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597a1:{NFSU2_TR(0x6597a1);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597a6:L6597a6:{c.instructions+=3;NFSU2_TR(0x6597a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597a7:{NFSU2_TR(0x6597a7);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597a9:{NFSU2_TR(0x6597a9);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597ae:L6597ae:{c.instructions+=3;NFSU2_TR(0x6597ae);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597b0:{NFSU2_TR(0x6597b0);
u8 U[4];
w4(U+0,u32(0x29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597b2:{NFSU2_TR(0x6597b2);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597b7:L6597b7:{c.instructions+=3;NFSU2_TR(0x6597b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597b8:{NFSU2_TR(0x6597b8);
u8 U[4];
w4(U+0,u32(0x2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597ba:{NFSU2_TR(0x6597ba);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597bf:L6597bf:{c.instructions+=3;NFSU2_TR(0x6597bf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597c1:{NFSU2_TR(0x6597c1);
u8 U[4];
w4(U+0,u32(0x2bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597c3:{NFSU2_TR(0x6597c3);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597c8:L6597c8:{c.instructions+=3;NFSU2_TR(0x6597c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597c9:{NFSU2_TR(0x6597c9);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597cb:{NFSU2_TR(0x6597cb);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597d0:L6597d0:{c.instructions+=3;NFSU2_TR(0x6597d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597d1:{NFSU2_TR(0x6597d1);
u8 U[4];
w4(U+0,u32(0x2dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597d3:{NFSU2_TR(0x6597d3);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597d8:L6597d8:{c.instructions+=3;NFSU2_TR(0x6597d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597d9:{NFSU2_TR(0x6597d9);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597db:{NFSU2_TR(0x6597db);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597e0:L6597e0:{c.instructions+=3;NFSU2_TR(0x6597e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597e1:{NFSU2_TR(0x6597e1);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597e3:{NFSU2_TR(0x6597e3);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597e8:L6597e8:{c.instructions+=3;NFSU2_TR(0x6597e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597e9:{NFSU2_TR(0x6597e9);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597eb:{NFSU2_TR(0x6597eb);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597f0:L6597f0:{c.instructions+=3;NFSU2_TR(0x6597f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597f1:{NFSU2_TR(0x6597f1);
u8 U[4];
w4(U+0,u32(0x31ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597f3:{NFSU2_TR(0x6597f3);
TAIL_STATIC(0x65a1b7u,65a);
}
B6597f8:L6597f8:{c.instructions+=3;NFSU2_TR(0x6597f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597f9:{NFSU2_TR(0x6597f9);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6597fb:{NFSU2_TR(0x6597fb);
TAIL_STATIC(0x65a1b7u,65a);
}
B659800:L659800:{c.instructions+=3;NFSU2_TR(0x659800);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659801:{NFSU2_TR(0x659801);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659803:{NFSU2_TR(0x659803);
TAIL_STATIC(0x65a1b7u,65a);
}
B659808:L659808:{c.instructions+=3;NFSU2_TR(0x659808);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659809:{NFSU2_TR(0x659809);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65980b:{NFSU2_TR(0x65980b);
TAIL_STATIC(0x65a1b7u,65a);
}
B659810:L659810:{c.instructions+=3;NFSU2_TR(0x659810);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659811:{NFSU2_TR(0x659811);
u8 U[4];
w4(U+0,u32(0x35ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659813:{NFSU2_TR(0x659813);
TAIL_STATIC(0x65a1b7u,65a);
}
B659818:L659818:{c.instructions+=3;NFSU2_TR(0x659818);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659819:{NFSU2_TR(0x659819);
u8 U[4];
w4(U+0,u32(0x36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65981b:{NFSU2_TR(0x65981b);
TAIL_STATIC(0x65a1b7u,65a);
}
B659820:L659820:{c.instructions+=3;NFSU2_TR(0x659820);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659822:{NFSU2_TR(0x659822);
u8 U[4];
w4(U+0,u32(0x37ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659824:{NFSU2_TR(0x659824);
TAIL_STATIC(0x65a1b7u,65a);
}
B659829:L659829:{c.instructions+=3;NFSU2_TR(0x659829);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65982a:{NFSU2_TR(0x65982a);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65982c:{NFSU2_TR(0x65982c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659831:L659831:{c.instructions+=3;NFSU2_TR(0x659831);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659833:{NFSU2_TR(0x659833);
u8 U[4];
w4(U+0,u32(0x39ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659835:{NFSU2_TR(0x659835);
TAIL_STATIC(0x65a1b7u,65a);
}
B65983a:L65983a:{c.instructions+=3;NFSU2_TR(0x65983a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65983b:{NFSU2_TR(0x65983b);
u8 U[4];
w4(U+0,u32(0x3aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65983d:{NFSU2_TR(0x65983d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659842:L659842:{c.instructions+=3;NFSU2_TR(0x659842);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659843:{NFSU2_TR(0x659843);
u8 U[4];
w4(U+0,u32(0x3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659845:{NFSU2_TR(0x659845);
TAIL_STATIC(0x65a1b7u,65a);
}
B65984a:L65984a:{c.instructions+=3;NFSU2_TR(0x65984a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65984b:{NFSU2_TR(0x65984b);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65984d:{NFSU2_TR(0x65984d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659852:L659852:{c.instructions+=3;NFSU2_TR(0x659852);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659853:{NFSU2_TR(0x659853);
u8 U[4];
w4(U+0,u32(0x3dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659855:{NFSU2_TR(0x659855);
TAIL_STATIC(0x65a1b7u,65a);
}
B65985a:L65985a:{c.instructions+=3;NFSU2_TR(0x65985a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65985b:{NFSU2_TR(0x65985b);
u8 U[4];
w4(U+0,u32(0x3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65985d:{NFSU2_TR(0x65985d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659862:L659862:{c.instructions+=3;NFSU2_TR(0x659862);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659863:{NFSU2_TR(0x659863);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659865:{NFSU2_TR(0x659865);
TAIL_STATIC(0x65a1b7u,65a);
}
B65986a:L65986a:{c.instructions+=3;NFSU2_TR(0x65986a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65986b:{NFSU2_TR(0x65986b);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65986d:{NFSU2_TR(0x65986d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659872:L659872:{c.instructions+=3;NFSU2_TR(0x659872);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659873:{NFSU2_TR(0x659873);
u8 U[4];
w4(U+0,u32(0x41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659875:{NFSU2_TR(0x659875);
TAIL_STATIC(0x65a1b7u,65a);
}
B65987a:L65987a:{c.instructions+=3;NFSU2_TR(0x65987a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65987b:{NFSU2_TR(0x65987b);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65987d:{NFSU2_TR(0x65987d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659882:L659882:{c.instructions+=3;NFSU2_TR(0x659882);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659883:{NFSU2_TR(0x659883);
u8 U[4];
w4(U+0,u32(0x43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659885:{NFSU2_TR(0x659885);
TAIL_STATIC(0x65a1b7u,65a);
}
B65988a:L65988a:{c.instructions+=3;NFSU2_TR(0x65988a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65988b:{NFSU2_TR(0x65988b);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65988d:{NFSU2_TR(0x65988d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659892:L659892:{c.instructions+=3;NFSU2_TR(0x659892);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659893:{NFSU2_TR(0x659893);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659895:{NFSU2_TR(0x659895);
TAIL_STATIC(0x65a1b7u,65a);
}
B65989a:L65989a:{c.instructions+=3;NFSU2_TR(0x65989a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65989b:{NFSU2_TR(0x65989b);
u8 U[4];
w4(U+0,u32(0x46ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65989d:{NFSU2_TR(0x65989d);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598a2:L6598a2:{c.instructions+=3;NFSU2_TR(0x6598a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598a3:{NFSU2_TR(0x6598a3);
u8 U[4];
w4(U+0,u32(0x47ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598a5:{NFSU2_TR(0x6598a5);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598aa:L6598aa:{c.instructions+=3;NFSU2_TR(0x6598aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598ab:{NFSU2_TR(0x6598ab);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598ad:{NFSU2_TR(0x6598ad);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598b2:L6598b2:{c.instructions+=3;NFSU2_TR(0x6598b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598b3:{NFSU2_TR(0x6598b3);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598b5:{NFSU2_TR(0x6598b5);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598ba:L6598ba:{c.instructions+=3;NFSU2_TR(0x6598ba);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598bc:{NFSU2_TR(0x6598bc);
u8 U[4];
w4(U+0,u32(0x4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598be:{NFSU2_TR(0x6598be);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598c3:L6598c3:{c.instructions+=3;NFSU2_TR(0x6598c3);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598c5:{NFSU2_TR(0x6598c5);
u8 U[4];
w4(U+0,u32(0x4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598c7:{NFSU2_TR(0x6598c7);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598cc:L6598cc:{c.instructions+=3;NFSU2_TR(0x6598cc);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598ce:{NFSU2_TR(0x6598ce);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598d0:{NFSU2_TR(0x6598d0);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598d5:L6598d5:{c.instructions+=3;NFSU2_TR(0x6598d5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598d7:{NFSU2_TR(0x6598d7);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598d9:{NFSU2_TR(0x6598d9);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598de:L6598de:{c.instructions+=3;NFSU2_TR(0x6598de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598df:{NFSU2_TR(0x6598df);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598e1:{NFSU2_TR(0x6598e1);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598e6:L6598e6:{c.instructions+=3;NFSU2_TR(0x6598e6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598e8:{NFSU2_TR(0x6598e8);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598ea:{NFSU2_TR(0x6598ea);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598ef:L6598ef:{c.instructions+=3;NFSU2_TR(0x6598ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598f0:{NFSU2_TR(0x6598f0);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598f2:{NFSU2_TR(0x6598f2);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598f7:L6598f7:{c.instructions+=3;NFSU2_TR(0x6598f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598f8:{NFSU2_TR(0x6598f8);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6598fa:{NFSU2_TR(0x6598fa);
TAIL_STATIC(0x65a1b7u,65a);
}
B6598ff:L6598ff:{c.instructions+=3;NFSU2_TR(0x6598ff);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659901:{NFSU2_TR(0x659901);
u8 U[4];
w4(U+0,u32(0x52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659903:{NFSU2_TR(0x659903);
TAIL_STATIC(0x65a1b7u,65a);
}
B659908:L659908:{c.instructions+=3;NFSU2_TR(0x659908);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659909:{NFSU2_TR(0x659909);
u8 U[4];
w4(U+0,u32(0x53ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65990b:{NFSU2_TR(0x65990b);
TAIL_STATIC(0x65a1b7u,65a);
}
B659910:L659910:{c.instructions+=3;NFSU2_TR(0x659910);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659911:{NFSU2_TR(0x659911);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659913:{NFSU2_TR(0x659913);
TAIL_STATIC(0x65a1b7u,65a);
}
B659918:L659918:{c.instructions+=3;NFSU2_TR(0x659918);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659919:{NFSU2_TR(0x659919);
u8 U[4];
w4(U+0,u32(0x55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65991b:{NFSU2_TR(0x65991b);
TAIL_STATIC(0x65a1b7u,65a);
}
B659920:L659920:{c.instructions+=3;NFSU2_TR(0x659920);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659921:{NFSU2_TR(0x659921);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659923:{NFSU2_TR(0x659923);
TAIL_STATIC(0x65a1b7u,65a);
}
B659928:L659928:{c.instructions+=3;NFSU2_TR(0x659928);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65992a:{NFSU2_TR(0x65992a);
u8 U[4];
w4(U+0,u32(0x57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65992c:{NFSU2_TR(0x65992c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659931:L659931:{c.instructions+=3;NFSU2_TR(0x659931);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659932:{NFSU2_TR(0x659932);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659934:{NFSU2_TR(0x659934);
TAIL_STATIC(0x65a1b7u,65a);
}
B659939:L659939:{c.instructions+=3;NFSU2_TR(0x659939);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65993a:{NFSU2_TR(0x65993a);
u8 U[4];
w4(U+0,u32(0x59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65993c:{NFSU2_TR(0x65993c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659941:L659941:{c.instructions+=3;NFSU2_TR(0x659941);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659942:{NFSU2_TR(0x659942);
u8 U[4];
w4(U+0,u32(0x5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659944:{NFSU2_TR(0x659944);
TAIL_STATIC(0x65a1b7u,65a);
}
B659949:L659949:{c.instructions+=3;NFSU2_TR(0x659949);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65994b:{NFSU2_TR(0x65994b);
u8 U[4];
w4(U+0,u32(0x5bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65994d:{NFSU2_TR(0x65994d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659952:L659952:{c.instructions+=3;NFSU2_TR(0x659952);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659954:{NFSU2_TR(0x659954);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659956:{NFSU2_TR(0x659956);
TAIL_STATIC(0x65a1b7u,65a);
}
B65995b:L65995b:{c.instructions+=3;NFSU2_TR(0x65995b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65995d:{NFSU2_TR(0x65995d);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65995f:{NFSU2_TR(0x65995f);
TAIL_STATIC(0x65a1b7u,65a);
}
B659964:L659964:{c.instructions+=3;NFSU2_TR(0x659964);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659965:{NFSU2_TR(0x659965);
u8 U[4];
w4(U+0,u32(0x5eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659967:{NFSU2_TR(0x659967);
TAIL_STATIC(0x65a1b7u,65a);
}
B65996c:L65996c:{c.instructions+=3;NFSU2_TR(0x65996c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65996d:{NFSU2_TR(0x65996d);
u8 U[4];
w4(U+0,u32(0x5full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65996f:{NFSU2_TR(0x65996f);
TAIL_STATIC(0x65a1b7u,65a);
}
B659974:L659974:{c.instructions+=3;NFSU2_TR(0x659974);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659975:{NFSU2_TR(0x659975);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659977:{NFSU2_TR(0x659977);
TAIL_STATIC(0x65a1b7u,65a);
}
B65997c:L65997c:{c.instructions+=3;NFSU2_TR(0x65997c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65997d:{NFSU2_TR(0x65997d);
u8 U[4];
w4(U+0,u32(0x61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65997f:{NFSU2_TR(0x65997f);
TAIL_STATIC(0x65a1b7u,65a);
}
B659984:L659984:{c.instructions+=3;NFSU2_TR(0x659984);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659986:{NFSU2_TR(0x659986);
u8 U[4];
w4(U+0,u32(0x62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659988:{NFSU2_TR(0x659988);
TAIL_STATIC(0x65a1b7u,65a);
}
B65998d:L65998d:{c.instructions+=3;NFSU2_TR(0x65998d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65998e:{NFSU2_TR(0x65998e);
u8 U[4];
w4(U+0,u32(0x63ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659990:{NFSU2_TR(0x659990);
TAIL_STATIC(0x65a1b7u,65a);
}
B659995:L659995:{c.instructions+=3;NFSU2_TR(0x659995);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659996:{NFSU2_TR(0x659996);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659998:{NFSU2_TR(0x659998);
TAIL_STATIC(0x65a1b7u,65a);
}
B65999d:L65999d:{c.instructions+=3;NFSU2_TR(0x65999d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65999e:{NFSU2_TR(0x65999e);
u8 U[4];
w4(U+0,u32(0x65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599a0:{NFSU2_TR(0x6599a0);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599a5:L6599a5:{c.instructions+=3;NFSU2_TR(0x6599a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599a6:{NFSU2_TR(0x6599a6);
u8 U[4];
w4(U+0,u32(0x66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599a8:{NFSU2_TR(0x6599a8);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599ad:L6599ad:{c.instructions+=3;NFSU2_TR(0x6599ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599ae:{NFSU2_TR(0x6599ae);
u8 U[4];
w4(U+0,u32(0x67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599b0:{NFSU2_TR(0x6599b0);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599b5:L6599b5:{c.instructions+=3;NFSU2_TR(0x6599b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599b6:{NFSU2_TR(0x6599b6);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599b8:{NFSU2_TR(0x6599b8);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599bd:L6599bd:{c.instructions+=3;NFSU2_TR(0x6599bd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599bf:{NFSU2_TR(0x6599bf);
u8 U[4];
w4(U+0,u32(0x69ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599c1:{NFSU2_TR(0x6599c1);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599c6:L6599c6:{c.instructions+=3;NFSU2_TR(0x6599c6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599c8:{NFSU2_TR(0x6599c8);
u8 U[4];
w4(U+0,u32(0x6aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599ca:{NFSU2_TR(0x6599ca);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599cf:L6599cf:{c.instructions+=3;NFSU2_TR(0x6599cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599d0:{NFSU2_TR(0x6599d0);
u8 U[4];
w4(U+0,u32(0x6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599d2:{NFSU2_TR(0x6599d2);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599d7:L6599d7:{c.instructions+=3;NFSU2_TR(0x6599d7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599d9:{NFSU2_TR(0x6599d9);
u8 U[4];
w4(U+0,u32(0x6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599db:{NFSU2_TR(0x6599db);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599e0:L6599e0:{c.instructions+=3;NFSU2_TR(0x6599e0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599e2:{NFSU2_TR(0x6599e2);
u8 U[4];
w4(U+0,u32(0x6dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599e4:{NFSU2_TR(0x6599e4);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599e9:L6599e9:{c.instructions+=3;NFSU2_TR(0x6599e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599ea:{NFSU2_TR(0x6599ea);
u8 U[4];
w4(U+0,u32(0x6eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599ec:{NFSU2_TR(0x6599ec);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599f1:L6599f1:{c.instructions+=3;NFSU2_TR(0x6599f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599f2:{NFSU2_TR(0x6599f2);
u8 U[4];
w4(U+0,u32(0x6full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599f4:{NFSU2_TR(0x6599f4);
TAIL_STATIC(0x65a1b7u,65a);
}
B6599f9:L6599f9:{c.instructions+=3;NFSU2_TR(0x6599f9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599fb:{NFSU2_TR(0x6599fb);
u8 U[4];
w4(U+0,u32(0x70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6599fd:{NFSU2_TR(0x6599fd);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a02:L659a02:{c.instructions+=3;NFSU2_TR(0x659a02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a03:{NFSU2_TR(0x659a03);
u8 U[4];
w4(U+0,u32(0x71ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a05:{NFSU2_TR(0x659a05);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a0a:L659a0a:{c.instructions+=3;NFSU2_TR(0x659a0a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a0c:{NFSU2_TR(0x659a0c);
u8 U[4];
w4(U+0,u32(0x72ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a0e:{NFSU2_TR(0x659a0e);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a13:L659a13:{c.instructions+=3;NFSU2_TR(0x659a13);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a15:{NFSU2_TR(0x659a15);
u8 U[4];
w4(U+0,u32(0x73ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a17:{NFSU2_TR(0x659a17);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a1c:L659a1c:{c.instructions+=3;NFSU2_TR(0x659a1c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a1e:{NFSU2_TR(0x659a1e);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a20:{NFSU2_TR(0x659a20);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a25:L659a25:{c.instructions+=3;NFSU2_TR(0x659a25);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a27:{NFSU2_TR(0x659a27);
u8 U[4];
w4(U+0,u32(0x75ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a29:{NFSU2_TR(0x659a29);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a2e:L659a2e:{c.instructions+=3;NFSU2_TR(0x659a2e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a30:{NFSU2_TR(0x659a30);
u8 U[4];
w4(U+0,u32(0x76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a32:{NFSU2_TR(0x659a32);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a37:L659a37:{c.instructions+=3;NFSU2_TR(0x659a37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a38:{NFSU2_TR(0x659a38);
u8 U[4];
w4(U+0,u32(0x77ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a3a:{NFSU2_TR(0x659a3a);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a3f:L659a3f:{c.instructions+=3;NFSU2_TR(0x659a3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a40:{NFSU2_TR(0x659a40);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a42:{NFSU2_TR(0x659a42);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a47:L659a47:{c.instructions+=3;NFSU2_TR(0x659a47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a48:{NFSU2_TR(0x659a48);
u8 U[4];
w4(U+0,u32(0x79ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a4a:{NFSU2_TR(0x659a4a);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a4f:L659a4f:{c.instructions+=3;NFSU2_TR(0x659a4f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a51:{NFSU2_TR(0x659a51);
u8 U[4];
w4(U+0,u32(0x7aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a53:{NFSU2_TR(0x659a53);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a58:L659a58:{c.instructions+=3;NFSU2_TR(0x659a58);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a5a:{NFSU2_TR(0x659a5a);
u8 U[4];
w4(U+0,u32(0x7bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a5c:{NFSU2_TR(0x659a5c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a61:L659a61:{c.instructions+=3;NFSU2_TR(0x659a61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a62:{NFSU2_TR(0x659a62);
u8 U[4];
w4(U+0,u32(0x7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a64:{NFSU2_TR(0x659a64);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a69:L659a69:{c.instructions+=3;NFSU2_TR(0x659a69);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a6b:{NFSU2_TR(0x659a6b);
u8 U[4];
w4(U+0,u32(0x7dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a6d:{NFSU2_TR(0x659a6d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a72:L659a72:{c.instructions+=3;NFSU2_TR(0x659a72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a73:{NFSU2_TR(0x659a73);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a78:{NFSU2_TR(0x659a78);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a7d:L659a7d:{c.instructions+=3;NFSU2_TR(0x659a7d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a7f:{NFSU2_TR(0x659a7f);
u8 U[4];
w4(U+0,u32(0x81ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a84:{NFSU2_TR(0x659a84);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a89:L659a89:{c.instructions+=3;NFSU2_TR(0x659a89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a8a:{NFSU2_TR(0x659a8a);
u8 U[4];
w4(U+0,u32(0x82ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a8f:{NFSU2_TR(0x659a8f);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a94:L659a94:{c.instructions+=3;NFSU2_TR(0x659a94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a95:{NFSU2_TR(0x659a95);
u8 U[4];
w4(U+0,u32(0x83ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659a9a:{NFSU2_TR(0x659a9a);
TAIL_STATIC(0x65a1b7u,65a);
}
B659a9f:L659a9f:{c.instructions+=3;NFSU2_TR(0x659a9f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659aa0:{NFSU2_TR(0x659aa0);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659aa5:{NFSU2_TR(0x659aa5);
TAIL_STATIC(0x65a1b7u,65a);
}
B659aaa:L659aaa:{c.instructions+=3;NFSU2_TR(0x659aaa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659aab:{NFSU2_TR(0x659aab);
u8 U[4];
w4(U+0,u32(0x85ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ab0:{NFSU2_TR(0x659ab0);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ab5:L659ab5:{c.instructions+=3;NFSU2_TR(0x659ab5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ab6:{NFSU2_TR(0x659ab6);
u8 U[4];
w4(U+0,u32(0x86ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659abb:{NFSU2_TR(0x659abb);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ac0:L659ac0:{c.instructions+=3;NFSU2_TR(0x659ac0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ac2:{NFSU2_TR(0x659ac2);
u8 U[4];
w4(U+0,u32(0x87ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ac7:{NFSU2_TR(0x659ac7);
TAIL_STATIC(0x65a1b7u,65a);
}
B659acc:L659acc:{c.instructions+=3;NFSU2_TR(0x659acc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ace:{NFSU2_TR(0x659ace);
u8 U[4];
w4(U+0,u32(0x88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ad3:{NFSU2_TR(0x659ad3);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ad8:L659ad8:{c.instructions+=3;NFSU2_TR(0x659ad8);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ada:{NFSU2_TR(0x659ada);
u8 U[4];
w4(U+0,u32(0x89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659adf:{NFSU2_TR(0x659adf);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ae4:L659ae4:{c.instructions+=3;NFSU2_TR(0x659ae4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ae5:{NFSU2_TR(0x659ae5);
u8 U[4];
w4(U+0,u32(0x8aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659aea:{NFSU2_TR(0x659aea);
TAIL_STATIC(0x65a1b7u,65a);
}
B659aef:L659aef:{c.instructions+=3;NFSU2_TR(0x659aef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659af0:{NFSU2_TR(0x659af0);
u8 U[4];
w4(U+0,u32(0x8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659af5:{NFSU2_TR(0x659af5);
TAIL_STATIC(0x65a1b7u,65a);
}
B659afa:L659afa:{c.instructions+=3;NFSU2_TR(0x659afa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659afb:{NFSU2_TR(0x659afb);
u8 U[4];
w4(U+0,u32(0x8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b00:{NFSU2_TR(0x659b00);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b05:L659b05:{c.instructions+=3;NFSU2_TR(0x659b05);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b07:{NFSU2_TR(0x659b07);
u8 U[4];
w4(U+0,u32(0x8dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b0c:{NFSU2_TR(0x659b0c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b11:L659b11:{c.instructions+=3;NFSU2_TR(0x659b11);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b13:{NFSU2_TR(0x659b13);
u8 U[4];
w4(U+0,u32(0x8eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b18:{NFSU2_TR(0x659b18);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b1d:L659b1d:{c.instructions+=3;NFSU2_TR(0x659b1d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b1f:{NFSU2_TR(0x659b1f);
u8 U[4];
w4(U+0,u32(0x8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b24:{NFSU2_TR(0x659b24);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b29:L659b29:{c.instructions+=3;NFSU2_TR(0x659b29);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b2b:{NFSU2_TR(0x659b2b);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b30:{NFSU2_TR(0x659b30);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b35:L659b35:{c.instructions+=3;NFSU2_TR(0x659b35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b36:{NFSU2_TR(0x659b36);
u8 U[4];
w4(U+0,u32(0x91ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b3b:{NFSU2_TR(0x659b3b);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b40:L659b40:{c.instructions+=3;NFSU2_TR(0x659b40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b41:{NFSU2_TR(0x659b41);
u8 U[4];
w4(U+0,u32(0x92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b46:{NFSU2_TR(0x659b46);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b4b:L659b4b:{c.instructions+=3;NFSU2_TR(0x659b4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b4c:{NFSU2_TR(0x659b4c);
u8 U[4];
w4(U+0,u32(0x93ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b51:{NFSU2_TR(0x659b51);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b56:L659b56:{c.instructions+=3;NFSU2_TR(0x659b56);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b58:{NFSU2_TR(0x659b58);
u8 U[4];
w4(U+0,u32(0x94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b5d:{NFSU2_TR(0x659b5d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b62:L659b62:{c.instructions+=3;NFSU2_TR(0x659b62);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b64:{NFSU2_TR(0x659b64);
u8 U[4];
w4(U+0,u32(0x95ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b69:{NFSU2_TR(0x659b69);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b6e:L659b6e:{c.instructions+=3;NFSU2_TR(0x659b6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b6f:{NFSU2_TR(0x659b6f);
u8 U[4];
w4(U+0,u32(0x96ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b74:{NFSU2_TR(0x659b74);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b79:L659b79:{c.instructions+=3;NFSU2_TR(0x659b79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b7a:{NFSU2_TR(0x659b7a);
u8 U[4];
w4(U+0,u32(0x97ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b7f:{NFSU2_TR(0x659b7f);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b84:L659b84:{c.instructions+=3;NFSU2_TR(0x659b84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b85:{NFSU2_TR(0x659b85);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b8a:{NFSU2_TR(0x659b8a);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b8f:L659b8f:{c.instructions+=3;NFSU2_TR(0x659b8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b90:{NFSU2_TR(0x659b90);
u8 U[4];
w4(U+0,u32(0x99ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b95:{NFSU2_TR(0x659b95);
TAIL_STATIC(0x65a1b7u,65a);
}
B659b9a:L659b9a:{c.instructions+=3;NFSU2_TR(0x659b9a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659b9c:{NFSU2_TR(0x659b9c);
u8 U[4];
w4(U+0,u32(0x9aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ba1:{NFSU2_TR(0x659ba1);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ba6:L659ba6:{c.instructions+=3;NFSU2_TR(0x659ba6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ba8:{NFSU2_TR(0x659ba8);
u8 U[4];
w4(U+0,u32(0x9bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bad:{NFSU2_TR(0x659bad);
TAIL_STATIC(0x65a1b7u,65a);
}
B659bb2:L659bb2:{c.instructions+=3;NFSU2_TR(0x659bb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bb3:{NFSU2_TR(0x659bb3);
u8 U[4];
w4(U+0,u32(0x9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bb8:{NFSU2_TR(0x659bb8);
TAIL_STATIC(0x65a1b7u,65a);
}
B659bbd:L659bbd:{c.instructions+=3;NFSU2_TR(0x659bbd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bbe:{NFSU2_TR(0x659bbe);
u8 U[4];
w4(U+0,u32(0x9dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bc3:{NFSU2_TR(0x659bc3);
TAIL_STATIC(0x65a1b7u,65a);
}
B659bc8:L659bc8:{c.instructions+=3;NFSU2_TR(0x659bc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bc9:{NFSU2_TR(0x659bc9);
u8 U[4];
w4(U+0,u32(0x9eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bce:{NFSU2_TR(0x659bce);
TAIL_STATIC(0x65a1b7u,65a);
}
B659bd3:L659bd3:{c.instructions+=3;NFSU2_TR(0x659bd3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bd5:{NFSU2_TR(0x659bd5);
u8 U[4];
w4(U+0,u32(0x9full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bda:{NFSU2_TR(0x659bda);
TAIL_STATIC(0x65a1b7u,65a);
}
B659bdf:L659bdf:{c.instructions+=3;NFSU2_TR(0x659bdf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659be0:{NFSU2_TR(0x659be0);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659be5:{NFSU2_TR(0x659be5);
TAIL_STATIC(0x65a1b7u,65a);
}
B659bea:L659bea:{c.instructions+=3;NFSU2_TR(0x659bea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659beb:{NFSU2_TR(0x659beb);
u8 U[4];
w4(U+0,u32(0xa1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bf0:{NFSU2_TR(0x659bf0);
TAIL_STATIC(0x65a1b7u,65a);
}
B659bf5:L659bf5:{c.instructions+=3;NFSU2_TR(0x659bf5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bf6:{NFSU2_TR(0x659bf6);
u8 U[4];
w4(U+0,u32(0xa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659bfb:{NFSU2_TR(0x659bfb);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c00:L659c00:{c.instructions+=3;NFSU2_TR(0x659c00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c01:{NFSU2_TR(0x659c01);
u8 U[4];
w4(U+0,u32(0xa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c06:{NFSU2_TR(0x659c06);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c0b:L659c0b:{c.instructions+=3;NFSU2_TR(0x659c0b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c0d:{NFSU2_TR(0x659c0d);
u8 U[4];
w4(U+0,u32(0xa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c12:{NFSU2_TR(0x659c12);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c17:L659c17:{c.instructions+=3;NFSU2_TR(0x659c17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c18:{NFSU2_TR(0x659c18);
u8 U[4];
w4(U+0,u32(0xa5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c1d:{NFSU2_TR(0x659c1d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c22:L659c22:{c.instructions+=3;NFSU2_TR(0x659c22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c23:{NFSU2_TR(0x659c23);
u8 U[4];
w4(U+0,u32(0xa6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c28:{NFSU2_TR(0x659c28);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c2d:L659c2d:{c.instructions+=3;NFSU2_TR(0x659c2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c2e:{NFSU2_TR(0x659c2e);
u8 U[4];
w4(U+0,u32(0xa7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c33:{NFSU2_TR(0x659c33);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c38:L659c38:{c.instructions+=3;NFSU2_TR(0x659c38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c39:{NFSU2_TR(0x659c39);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c3e:{NFSU2_TR(0x659c3e);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c43:L659c43:{c.instructions+=3;NFSU2_TR(0x659c43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c44:{NFSU2_TR(0x659c44);
u8 U[4];
w4(U+0,u32(0xa9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c49:{NFSU2_TR(0x659c49);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c4e:L659c4e:{c.instructions+=3;NFSU2_TR(0x659c4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c4f:{NFSU2_TR(0x659c4f);
u8 U[4];
w4(U+0,u32(0xaaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c54:{NFSU2_TR(0x659c54);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c59:L659c59:{c.instructions+=3;NFSU2_TR(0x659c59);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c5b:{NFSU2_TR(0x659c5b);
u8 U[4];
w4(U+0,u32(0xabull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c60:{NFSU2_TR(0x659c60);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c65:L659c65:{c.instructions+=3;NFSU2_TR(0x659c65);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c67:{NFSU2_TR(0x659c67);
u8 U[4];
w4(U+0,u32(0xacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c6c:{NFSU2_TR(0x659c6c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c71:L659c71:{c.instructions+=3;NFSU2_TR(0x659c71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c72:{NFSU2_TR(0x659c72);
u8 U[4];
w4(U+0,u32(0xadull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c77:{NFSU2_TR(0x659c77);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c7c:L659c7c:{c.instructions+=3;NFSU2_TR(0x659c7c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c7e:{NFSU2_TR(0x659c7e);
u8 U[4];
w4(U+0,u32(0xaeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c83:{NFSU2_TR(0x659c83);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c88:L659c88:{c.instructions+=3;NFSU2_TR(0x659c88);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c8a:{NFSU2_TR(0x659c8a);
u8 U[4];
w4(U+0,u32(0xafull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c8f:{NFSU2_TR(0x659c8f);
TAIL_STATIC(0x65a1b7u,65a);
}
B659c94:L659c94:{c.instructions+=3;NFSU2_TR(0x659c94);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c96:{NFSU2_TR(0x659c96);
u8 U[4];
w4(U+0,u32(0xb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659c9b:{NFSU2_TR(0x659c9b);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ca0:L659ca0:{c.instructions+=3;NFSU2_TR(0x659ca0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ca2:{NFSU2_TR(0x659ca2);
u8 U[4];
w4(U+0,u32(0xb1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ca7:{NFSU2_TR(0x659ca7);
TAIL_STATIC(0x65a1b7u,65a);
}
B659cac:L659cac:{c.instructions+=3;NFSU2_TR(0x659cac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cad:{NFSU2_TR(0x659cad);
u8 U[4];
w4(U+0,u32(0xb2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cb2:{NFSU2_TR(0x659cb2);
TAIL_STATIC(0x65a1b7u,65a);
}
B659cb7:L659cb7:{c.instructions+=3;NFSU2_TR(0x659cb7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cb8:{NFSU2_TR(0x659cb8);
u8 U[4];
w4(U+0,u32(0xb3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cbd:{NFSU2_TR(0x659cbd);
TAIL_STATIC(0x65a1b7u,65a);
}
B659cc2:L659cc2:{c.instructions+=3;NFSU2_TR(0x659cc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cc3:{NFSU2_TR(0x659cc3);
u8 U[4];
w4(U+0,u32(0xb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cc8:{NFSU2_TR(0x659cc8);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ccd:L659ccd:{c.instructions+=3;NFSU2_TR(0x659ccd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cce:{NFSU2_TR(0x659cce);
u8 U[4];
w4(U+0,u32(0xb5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cd3:{NFSU2_TR(0x659cd3);
TAIL_STATIC(0x65a1b7u,65a);
}
B659cd8:L659cd8:{c.instructions+=3;NFSU2_TR(0x659cd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cd9:{NFSU2_TR(0x659cd9);
u8 U[4];
w4(U+0,u32(0xb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cde:{NFSU2_TR(0x659cde);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ce3:L659ce3:{c.instructions+=3;NFSU2_TR(0x659ce3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ce4:{NFSU2_TR(0x659ce4);
u8 U[4];
w4(U+0,u32(0xb7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ce9:{NFSU2_TR(0x659ce9);
TAIL_STATIC(0x65a1b7u,65a);
}
B659cee:L659cee:{c.instructions+=3;NFSU2_TR(0x659cee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cef:{NFSU2_TR(0x659cef);
u8 U[4];
w4(U+0,u32(0xb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cf4:{NFSU2_TR(0x659cf4);
TAIL_STATIC(0x65a1b7u,65a);
}
B659cf9:L659cf9:{c.instructions+=3;NFSU2_TR(0x659cf9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cfa:{NFSU2_TR(0x659cfa);
u8 U[4];
w4(U+0,u32(0xb9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659cff:{NFSU2_TR(0x659cff);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d04:L659d04:{c.instructions+=3;NFSU2_TR(0x659d04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d05:{NFSU2_TR(0x659d05);
u8 U[4];
w4(U+0,u32(0xbaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d0a:{NFSU2_TR(0x659d0a);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d0f:L659d0f:{c.instructions+=3;NFSU2_TR(0x659d0f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d11:{NFSU2_TR(0x659d11);
u8 U[4];
w4(U+0,u32(0xbbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d16:{NFSU2_TR(0x659d16);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d1b:L659d1b:{c.instructions+=3;NFSU2_TR(0x659d1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d1c:{NFSU2_TR(0x659d1c);
u8 U[4];
w4(U+0,u32(0xbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d21:{NFSU2_TR(0x659d21);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d26:L659d26:{c.instructions+=3;NFSU2_TR(0x659d26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d27:{NFSU2_TR(0x659d27);
u8 U[4];
w4(U+0,u32(0xbdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d2c:{NFSU2_TR(0x659d2c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d31:L659d31:{c.instructions+=3;NFSU2_TR(0x659d31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d32:{NFSU2_TR(0x659d32);
u8 U[4];
w4(U+0,u32(0xbeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d37:{NFSU2_TR(0x659d37);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d3c:L659d3c:{c.instructions+=3;NFSU2_TR(0x659d3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d3d:{NFSU2_TR(0x659d3d);
u8 U[4];
w4(U+0,u32(0xbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d42:{NFSU2_TR(0x659d42);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d47:L659d47:{c.instructions+=3;NFSU2_TR(0x659d47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d48:{NFSU2_TR(0x659d48);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d4d:{NFSU2_TR(0x659d4d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d52:L659d52:{c.instructions+=3;NFSU2_TR(0x659d52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d53:{NFSU2_TR(0x659d53);
u8 U[4];
w4(U+0,u32(0xc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d58:{NFSU2_TR(0x659d58);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d5d:L659d5d:{c.instructions+=3;NFSU2_TR(0x659d5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d5e:{NFSU2_TR(0x659d5e);
u8 U[4];
w4(U+0,u32(0xc2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d63:{NFSU2_TR(0x659d63);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d68:L659d68:{c.instructions+=3;NFSU2_TR(0x659d68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d69:{NFSU2_TR(0x659d69);
u8 U[4];
w4(U+0,u32(0xc3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d6e:{NFSU2_TR(0x659d6e);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d73:L659d73:{c.instructions+=3;NFSU2_TR(0x659d73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d74:{NFSU2_TR(0x659d74);
u8 U[4];
w4(U+0,u32(0xc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d79:{NFSU2_TR(0x659d79);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d7e:L659d7e:{c.instructions+=3;NFSU2_TR(0x659d7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d7f:{NFSU2_TR(0x659d7f);
u8 U[4];
w4(U+0,u32(0xc5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d84:{NFSU2_TR(0x659d84);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d89:L659d89:{c.instructions+=3;NFSU2_TR(0x659d89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d8a:{NFSU2_TR(0x659d8a);
u8 U[4];
w4(U+0,u32(0xc6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d8f:{NFSU2_TR(0x659d8f);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d94:L659d94:{c.instructions+=3;NFSU2_TR(0x659d94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d95:{NFSU2_TR(0x659d95);
u8 U[4];
w4(U+0,u32(0xc7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659d9a:{NFSU2_TR(0x659d9a);
TAIL_STATIC(0x65a1b7u,65a);
}
B659d9f:L659d9f:{c.instructions+=3;NFSU2_TR(0x659d9f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659da1:{NFSU2_TR(0x659da1);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659da6:{NFSU2_TR(0x659da6);
TAIL_STATIC(0x65a1b7u,65a);
}
B659dab:L659dab:{c.instructions+=3;NFSU2_TR(0x659dab);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659dad:{NFSU2_TR(0x659dad);
u8 U[4];
w4(U+0,u32(0xc9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659db2:{NFSU2_TR(0x659db2);
TAIL_STATIC(0x65a1b7u,65a);
}
B659db7:L659db7:{c.instructions+=3;NFSU2_TR(0x659db7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659db9:{NFSU2_TR(0x659db9);
u8 U[4];
w4(U+0,u32(0xcaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659dbe:{NFSU2_TR(0x659dbe);
TAIL_STATIC(0x65a1b7u,65a);
}
B659dc3:L659dc3:{c.instructions+=3;NFSU2_TR(0x659dc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659dc4:{NFSU2_TR(0x659dc4);
u8 U[4];
w4(U+0,u32(0xcbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659dc9:{NFSU2_TR(0x659dc9);
TAIL_STATIC(0x65a1b7u,65a);
}
B659dce:L659dce:{c.instructions+=3;NFSU2_TR(0x659dce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659dcf:{NFSU2_TR(0x659dcf);
u8 U[4];
w4(U+0,u32(0xccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659dd4:{NFSU2_TR(0x659dd4);
TAIL_STATIC(0x65a1b7u,65a);
}
B659dd9:L659dd9:{c.instructions+=3;NFSU2_TR(0x659dd9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ddb:{NFSU2_TR(0x659ddb);
u8 U[4];
w4(U+0,u32(0xcdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659de0:{NFSU2_TR(0x659de0);
TAIL_STATIC(0x65a1b7u,65a);
}
B659de5:L659de5:{c.instructions+=3;NFSU2_TR(0x659de5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659de6:{NFSU2_TR(0x659de6);
u8 U[4];
w4(U+0,u32(0xceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659deb:{NFSU2_TR(0x659deb);
TAIL_STATIC(0x65a1b7u,65a);
}
B659df0:L659df0:{c.instructions+=3;NFSU2_TR(0x659df0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659df1:{NFSU2_TR(0x659df1);
u8 U[4];
w4(U+0,u32(0xcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659df6:{NFSU2_TR(0x659df6);
TAIL_STATIC(0x65a1b7u,65a);
}
B659dfb:L659dfb:{c.instructions+=3;NFSU2_TR(0x659dfb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659dfd:{NFSU2_TR(0x659dfd);
u8 U[4];
w4(U+0,u32(0xd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e02:{NFSU2_TR(0x659e02);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e07:L659e07:{c.instructions+=3;NFSU2_TR(0x659e07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e08:{NFSU2_TR(0x659e08);
u8 U[4];
w4(U+0,u32(0xd1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e0d:{NFSU2_TR(0x659e0d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e12:L659e12:{c.instructions+=3;NFSU2_TR(0x659e12);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e14:{NFSU2_TR(0x659e14);
u8 U[4];
w4(U+0,u32(0xd2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e19:{NFSU2_TR(0x659e19);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e1e:L659e1e:{c.instructions+=3;NFSU2_TR(0x659e1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e1f:{NFSU2_TR(0x659e1f);
u8 U[4];
w4(U+0,u32(0xd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e24:{NFSU2_TR(0x659e24);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e29:L659e29:{c.instructions+=3;NFSU2_TR(0x659e29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e2a:{NFSU2_TR(0x659e2a);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e2f:{NFSU2_TR(0x659e2f);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e34:L659e34:{c.instructions+=3;NFSU2_TR(0x659e34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e35:{NFSU2_TR(0x659e35);
u8 U[4];
w4(U+0,u32(0xd5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e3a:{NFSU2_TR(0x659e3a);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e3f:L659e3f:{c.instructions+=3;NFSU2_TR(0x659e3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e40:{NFSU2_TR(0x659e40);
u8 U[4];
w4(U+0,u32(0xd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e45:{NFSU2_TR(0x659e45);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e4a:L659e4a:{c.instructions+=3;NFSU2_TR(0x659e4a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e4c:{NFSU2_TR(0x659e4c);
u8 U[4];
w4(U+0,u32(0xd7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e51:{NFSU2_TR(0x659e51);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e56:L659e56:{c.instructions+=3;NFSU2_TR(0x659e56);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e58:{NFSU2_TR(0x659e58);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e5d:{NFSU2_TR(0x659e5d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e62:L659e62:{c.instructions+=3;NFSU2_TR(0x659e62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e63:{NFSU2_TR(0x659e63);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e68:{NFSU2_TR(0x659e68);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e6d:L659e6d:{c.instructions+=3;NFSU2_TR(0x659e6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e6e:{NFSU2_TR(0x659e6e);
u8 U[4];
w4(U+0,u32(0xdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e73:{NFSU2_TR(0x659e73);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e78:L659e78:{c.instructions+=3;NFSU2_TR(0x659e78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e79:{NFSU2_TR(0x659e79);
u8 U[4];
w4(U+0,u32(0xdbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e7e:{NFSU2_TR(0x659e7e);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e83:L659e83:{c.instructions+=3;NFSU2_TR(0x659e83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e84:{NFSU2_TR(0x659e84);
u8 U[4];
w4(U+0,u32(0xdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e89:{NFSU2_TR(0x659e89);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e8e:L659e8e:{c.instructions+=3;NFSU2_TR(0x659e8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e8f:{NFSU2_TR(0x659e8f);
u8 U[4];
w4(U+0,u32(0xddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e94:{NFSU2_TR(0x659e94);
TAIL_STATIC(0x65a1b7u,65a);
}
B659e99:L659e99:{c.instructions+=3;NFSU2_TR(0x659e99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e9a:{NFSU2_TR(0x659e9a);
u8 U[4];
w4(U+0,u32(0xdeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659e9f:{NFSU2_TR(0x659e9f);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ea4:L659ea4:{c.instructions+=3;NFSU2_TR(0x659ea4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ea5:{NFSU2_TR(0x659ea5);
u8 U[4];
w4(U+0,u32(0xdfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659eaa:{NFSU2_TR(0x659eaa);
TAIL_STATIC(0x65a1b7u,65a);
}
B659eaf:L659eaf:{c.instructions+=3;NFSU2_TR(0x659eaf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659eb0:{NFSU2_TR(0x659eb0);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659eb5:{NFSU2_TR(0x659eb5);
TAIL_STATIC(0x65a1b7u,65a);
}
B659eba:L659eba:{c.instructions+=3;NFSU2_TR(0x659eba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ebb:{NFSU2_TR(0x659ebb);
u8 U[4];
w4(U+0,u32(0xe1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ec0:{NFSU2_TR(0x659ec0);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ec5:L659ec5:{c.instructions+=3;NFSU2_TR(0x659ec5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ec7:{NFSU2_TR(0x659ec7);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ecc:{NFSU2_TR(0x659ecc);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ed1:L659ed1:{c.instructions+=3;NFSU2_TR(0x659ed1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ed2:{NFSU2_TR(0x659ed2);
u8 U[4];
w4(U+0,u32(0xe3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ed7:{NFSU2_TR(0x659ed7);
TAIL_STATIC(0x65a1b7u,65a);
}
B659edc:L659edc:{c.instructions+=3;NFSU2_TR(0x659edc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ede:{NFSU2_TR(0x659ede);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ee3:{NFSU2_TR(0x659ee3);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ee8:L659ee8:{c.instructions+=3;NFSU2_TR(0x659ee8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659eea:{NFSU2_TR(0x659eea);
u8 U[4];
w4(U+0,u32(0xe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659eef:{NFSU2_TR(0x659eef);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ef4:L659ef4:{c.instructions+=3;NFSU2_TR(0x659ef4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ef6:{NFSU2_TR(0x659ef6);
u8 U[4];
w4(U+0,u32(0xe6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659efb:{NFSU2_TR(0x659efb);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f00:L659f00:{c.instructions+=3;NFSU2_TR(0x659f00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f01:{NFSU2_TR(0x659f01);
u8 U[4];
w4(U+0,u32(0xe7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f06:{NFSU2_TR(0x659f06);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f0b:L659f0b:{c.instructions+=3;NFSU2_TR(0x659f0b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f0d:{NFSU2_TR(0x659f0d);
u8 U[4];
w4(U+0,u32(0xe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f12:{NFSU2_TR(0x659f12);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f17:L659f17:{c.instructions+=3;NFSU2_TR(0x659f17);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f19:{NFSU2_TR(0x659f19);
u8 U[4];
w4(U+0,u32(0xe9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f1e:{NFSU2_TR(0x659f1e);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f23:L659f23:{c.instructions+=3;NFSU2_TR(0x659f23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f24:{NFSU2_TR(0x659f24);
u8 U[4];
w4(U+0,u32(0xeaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f29:{NFSU2_TR(0x659f29);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f2e:L659f2e:{c.instructions+=3;NFSU2_TR(0x659f2e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f30:{NFSU2_TR(0x659f30);
u8 U[4];
w4(U+0,u32(0xebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f35:{NFSU2_TR(0x659f35);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f3a:L659f3a:{c.instructions+=3;NFSU2_TR(0x659f3a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f3c:{NFSU2_TR(0x659f3c);
u8 U[4];
w4(U+0,u32(0xecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f41:{NFSU2_TR(0x659f41);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f46:L659f46:{c.instructions+=3;NFSU2_TR(0x659f46);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f48:{NFSU2_TR(0x659f48);
u8 U[4];
w4(U+0,u32(0xedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f4d:{NFSU2_TR(0x659f4d);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f52:L659f52:{c.instructions+=3;NFSU2_TR(0x659f52);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f54:{NFSU2_TR(0x659f54);
u8 U[4];
w4(U+0,u32(0xeeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f59:{NFSU2_TR(0x659f59);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f5e:L659f5e:{c.instructions+=3;NFSU2_TR(0x659f5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f5f:{NFSU2_TR(0x659f5f);
u8 U[4];
w4(U+0,u32(0xefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f64:{NFSU2_TR(0x659f64);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f69:L659f69:{c.instructions+=3;NFSU2_TR(0x659f69);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f6b:{NFSU2_TR(0x659f6b);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f70:{NFSU2_TR(0x659f70);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f75:L659f75:{c.instructions+=3;NFSU2_TR(0x659f75);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f77:{NFSU2_TR(0x659f77);
u8 U[4];
w4(U+0,u32(0xf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f7c:{NFSU2_TR(0x659f7c);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f81:L659f81:{c.instructions+=3;NFSU2_TR(0x659f81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f82:{NFSU2_TR(0x659f82);
u8 U[4];
w4(U+0,u32(0xf2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f87:{NFSU2_TR(0x659f87);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f8c:L659f8c:{c.instructions+=3;NFSU2_TR(0x659f8c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f8e:{NFSU2_TR(0x659f8e);
u8 U[4];
w4(U+0,u32(0xf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f93:{NFSU2_TR(0x659f93);
TAIL_STATIC(0x65a1b7u,65a);
}
B659f98:L659f98:{c.instructions+=3;NFSU2_TR(0x659f98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f99:{NFSU2_TR(0x659f99);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659f9e:{NFSU2_TR(0x659f9e);
TAIL_STATIC(0x65a1b7u,65a);
}
B659fa3:L659fa3:{c.instructions+=3;NFSU2_TR(0x659fa3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fa5:{NFSU2_TR(0x659fa5);
u8 U[4];
w4(U+0,u32(0xf5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659faa:{NFSU2_TR(0x659faa);
TAIL_STATIC(0x65a1b7u,65a);
}
B659faf:L659faf:{c.instructions+=3;NFSU2_TR(0x659faf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fb0:{NFSU2_TR(0x659fb0);
u8 U[4];
w4(U+0,u32(0xfdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fb5:{NFSU2_TR(0x659fb5);
TAIL_STATIC(0x65a1b7u,65a);
}
B659fba:L659fba:{c.instructions+=3;NFSU2_TR(0x659fba);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fbc:{NFSU2_TR(0x659fbc);
u8 U[4];
w4(U+0,u32(0xfeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fc1:{NFSU2_TR(0x659fc1);
TAIL_STATIC(0x65a1b7u,65a);
}
B659fc6:L659fc6:{c.instructions+=3;NFSU2_TR(0x659fc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fc7:{NFSU2_TR(0x659fc7);
u8 U[4];
w4(U+0,u32(0xf6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fcc:{NFSU2_TR(0x659fcc);
TAIL_STATIC(0x65a1b7u,65a);
}
B659fd1:L659fd1:{c.instructions+=3;NFSU2_TR(0x659fd1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fd3:{NFSU2_TR(0x659fd3);
u8 U[4];
w4(U+0,u32(0xf7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fd8:{NFSU2_TR(0x659fd8);
TAIL_STATIC(0x65a1b7u,65a);
}
B659fdd:L659fdd:{c.instructions+=3;NFSU2_TR(0x659fdd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fdf:{NFSU2_TR(0x659fdf);
u8 U[4];
w4(U+0,u32(0xf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659fe4:{NFSU2_TR(0x659fe4);
TAIL_STATIC(0x65a1b7u,65a);
}
B659fe9:L659fe9:{c.instructions+=3;NFSU2_TR(0x659fe9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659feb:{NFSU2_TR(0x659feb);
u8 U[4];
w4(U+0,u32(0xf9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ff0:{NFSU2_TR(0x659ff0);
TAIL_STATIC(0x65a1b7u,65a);
}
B659ff5:L659ff5:{c.instructions+=3;NFSU2_TR(0x659ff5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ff7:{NFSU2_TR(0x659ff7);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B659ffc:{NFSU2_TR(0x659ffc);
TAIL_STATIC(0x65a1b7u,65a);
}
XIT:NFSU2_TR_EXIT(0x659,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
