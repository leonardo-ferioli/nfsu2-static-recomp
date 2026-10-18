#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_70c(u8* __restrict R,Cpu& c);
u32 body_70e(u8* __restrict R,Cpu& c);
u32 body_71f(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x70d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x70d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_70d(u8* __restrict R,Cpu& c);
u32 page_70d(Cpu& c){return body_70d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_70d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x70d01a:goto L70d01a;
case 0x70d01b:c.instructions+=9;goto B70d01b;
case 0x70d01d:c.instructions+=8;goto B70d01d;
case 0x70d020:c.instructions+=7;goto B70d020;
case 0x70d023:c.instructions+=6;goto B70d023;
case 0x70d024:c.instructions+=5;goto B70d024;
case 0x70d027:c.instructions+=4;goto B70d027;
case 0x70d028:c.instructions+=3;goto B70d028;
case 0x70d02b:c.instructions+=2;goto B70d02b;
case 0x70d02c:c.instructions+=1;goto B70d02c;
case 0x70d031:goto L70d031;
case 0x70d034:c.instructions+=2;goto B70d034;
case 0x70d038:c.instructions+=1;goto B70d038;
case 0x70d03e:goto L70d03e;
case 0x70d040:c.instructions+=2;goto B70d040;
case 0x70d045:c.instructions+=1;goto B70d045;
case 0x70d04a:goto L70d04a;
case 0x70d04d:c.instructions+=1;goto B70d04d;
case 0x70d04f:goto L70d04f;
case 0x70d055:c.instructions+=1;goto B70d055;
case 0x70d057:goto L70d057;
case 0x70d05a:c.instructions+=1;goto B70d05a;
case 0x70d05c:goto L70d05c;
case 0x70d066:c.instructions+=1;goto B70d066;
case 0x70d068:goto L70d068;
case 0x70d072:goto L70d072;
case 0x70d075:c.instructions+=2;goto B70d075;
case 0x70d077:c.instructions+=1;goto B70d077;
case 0x70d079:goto L70d079;
case 0x70d07b:goto L70d07b;
case 0x70d07e:c.instructions+=1;goto B70d07e;
case 0x70d080:goto L70d080;
case 0x70d086:c.instructions+=1;goto B70d086;
case 0x70d088:goto L70d088;
case 0x70d08b:c.instructions+=1;goto B70d08b;
case 0x70d08d:goto L70d08d;
case 0x70d097:c.instructions+=1;goto B70d097;
case 0x70d099:goto L70d099;
case 0x70d0a3:goto L70d0a3;
case 0x70d0a6:c.instructions+=2;goto B70d0a6;
case 0x70d0a8:c.instructions+=1;goto B70d0a8;
case 0x70d0aa:goto L70d0aa;
case 0x70d0b4:c.instructions+=11;goto B70d0b4;
case 0x70d0be:c.instructions+=10;goto B70d0be;
case 0x70d0c8:c.instructions+=9;goto B70d0c8;
case 0x70d0d2:c.instructions+=8;goto B70d0d2;
case 0x70d0dc:c.instructions+=7;goto B70d0dc;
case 0x70d0e6:c.instructions+=6;goto B70d0e6;
case 0x70d0f0:c.instructions+=5;goto B70d0f0;
case 0x70d0fa:c.instructions+=4;goto B70d0fa;
case 0x70d104:c.instructions+=3;goto B70d104;
case 0x70d10e:c.instructions+=2;goto B70d10e;
case 0x70d118:c.instructions+=1;goto B70d118;
case 0x70d11d:goto L70d11d;
case 0x70d121:c.instructions+=1;goto B70d121;
case 0x70d127:goto L70d127;
case 0x70d129:c.instructions+=2;goto B70d129;
case 0x70d12e:c.instructions+=1;goto B70d12e;
case 0x70d133:goto L70d133;
case 0x70d136:c.instructions+=1;goto B70d136;
case 0x70d138:goto L70d138;
case 0x70d13e:c.instructions+=1;goto B70d13e;
case 0x70d140:goto L70d140;
case 0x70d143:c.instructions+=1;goto B70d143;
case 0x70d145:goto L70d145;
case 0x70d14f:c.instructions+=1;goto B70d14f;
case 0x70d151:goto L70d151;
case 0x70d15b:goto L70d15b;
case 0x70d15e:c.instructions+=2;goto B70d15e;
case 0x70d160:c.instructions+=1;goto B70d160;
case 0x70d162:goto L70d162;
case 0x70d164:goto L70d164;
case 0x70d167:c.instructions+=1;goto B70d167;
case 0x70d169:goto L70d169;
case 0x70d16f:c.instructions+=1;goto B70d16f;
case 0x70d171:goto L70d171;
case 0x70d174:c.instructions+=1;goto B70d174;
case 0x70d176:goto L70d176;
case 0x70d180:c.instructions+=1;goto B70d180;
case 0x70d182:goto L70d182;
case 0x70d18c:goto L70d18c;
case 0x70d18f:c.instructions+=2;goto B70d18f;
case 0x70d191:c.instructions+=1;goto B70d191;
case 0x70d193:goto L70d193;
case 0x70d19d:c.instructions+=11;goto B70d19d;
case 0x70d1a7:c.instructions+=10;goto B70d1a7;
case 0x70d1b1:c.instructions+=9;goto B70d1b1;
case 0x70d1bb:c.instructions+=8;goto B70d1bb;
case 0x70d1c5:c.instructions+=7;goto B70d1c5;
case 0x70d1cf:c.instructions+=6;goto B70d1cf;
case 0x70d1d9:c.instructions+=5;goto B70d1d9;
case 0x70d1e3:c.instructions+=4;goto B70d1e3;
case 0x70d1ed:c.instructions+=3;goto B70d1ed;
case 0x70d1f7:c.instructions+=2;goto B70d1f7;
case 0x70d201:c.instructions+=1;goto B70d201;
case 0x70d206:goto L70d206;
case 0x70d207:c.instructions+=4;goto B70d207;
case 0x70d20c:c.instructions+=3;goto B70d20c;
case 0x70d211:c.instructions+=2;goto B70d211;
case 0x70d216:c.instructions+=1;goto B70d216;
case 0x70d21b:goto L70d21b;
case 0x70d220:c.instructions+=1;goto B70d220;
case 0x70d222:goto L70d222;
case 0x70d224:c.instructions+=1;goto B70d224;
case 0x70d226:goto L70d226;
case 0x70d22b:c.instructions+=1;goto B70d22b;
case 0x70d22d:goto L70d22d;
case 0x70d22f:c.instructions+=1;goto B70d22f;
case 0x70d231:goto L70d231;
case 0x70d233:goto L70d233;
case 0x70d236:c.instructions+=2;goto B70d236;
case 0x70d23b:c.instructions+=1;goto B70d23b;
case 0x70d23d:goto L70d23d;
case 0x70d242:goto L70d242;
case 0x70d247:c.instructions+=1;goto B70d247;
case 0x70d249:goto L70d249;
case 0x70d24b:c.instructions+=1;goto B70d24b;
case 0x70d24d:goto L70d24d;
case 0x70d252:c.instructions+=1;goto B70d252;
case 0x70d254:goto L70d254;
case 0x70d256:c.instructions+=1;goto B70d256;
case 0x70d258:goto L70d258;
case 0x70d25a:goto L70d25a;
case 0x70d25d:c.instructions+=2;goto B70d25d;
case 0x70d262:c.instructions+=1;goto B70d262;
case 0x70d264:goto L70d264;
case 0x70d26e:c.instructions+=11;goto B70d26e;
case 0x70d278:c.instructions+=10;goto B70d278;
case 0x70d282:c.instructions+=9;goto B70d282;
case 0x70d28c:c.instructions+=8;goto B70d28c;
case 0x70d296:c.instructions+=7;goto B70d296;
case 0x70d2a0:c.instructions+=6;goto B70d2a0;
case 0x70d2aa:c.instructions+=5;goto B70d2aa;
case 0x70d2b4:c.instructions+=4;goto B70d2b4;
case 0x70d2be:c.instructions+=3;goto B70d2be;
case 0x70d2c8:c.instructions+=2;goto B70d2c8;
case 0x70d2d2:c.instructions+=1;goto B70d2d2;
case 0x70d2d3:goto L70d2d3;
case 0x70d2dd:c.instructions+=2;goto B70d2dd;
case 0x70d2de:c.instructions+=1;goto B70d2de;
case 0x70d2df:goto L70d2df;
case 0x70d2e0:c.instructions+=4;goto B70d2e0;
case 0x70d2e2:c.instructions+=3;goto B70d2e2;
case 0x70d2e5:c.instructions+=2;goto B70d2e5;
case 0x70d2ef:c.instructions+=1;goto B70d2ef;
case 0x70d2f1:goto L70d2f1;
case 0x70d2f8:c.instructions+=5;goto B70d2f8;
case 0x70d2ff:c.instructions+=4;goto B70d2ff;
case 0x70d306:c.instructions+=3;goto B70d306;
case 0x70d307:c.instructions+=2;goto B70d307;
case 0x70d30a:c.instructions+=1;goto B70d30a;
case 0x70d30c:goto L70d30c;
case 0x70d30d:c.instructions+=1;goto B70d30d;
case 0x70d30e:goto L70d30e;
case 0x70d30f:c.instructions+=4;goto B70d30f;
case 0x70d311:c.instructions+=3;goto B70d311;
case 0x70d314:c.instructions+=2;goto B70d314;
case 0x70d31e:c.instructions+=1;goto B70d31e;
case 0x70d320:goto L70d320;
case 0x70d327:c.instructions+=5;goto B70d327;
case 0x70d32e:c.instructions+=4;goto B70d32e;
case 0x70d335:c.instructions+=3;goto B70d335;
case 0x70d336:c.instructions+=2;goto B70d336;
case 0x70d339:c.instructions+=1;goto B70d339;
case 0x70d33b:goto L70d33b;
case 0x70d33c:c.instructions+=1;goto B70d33c;
case 0x70d5f7:goto L70d5f7;
case 0x70d5f8:c.instructions+=16;goto B70d5f8;
case 0x70d5fa:c.instructions+=15;goto B70d5fa;
case 0x70d600:c.instructions+=14;goto B70d600;
case 0x70d603:c.instructions+=13;goto B70d603;
case 0x70d609:c.instructions+=12;goto B70d609;
case 0x70d60a:c.instructions+=11;goto B70d60a;
case 0x70d610:c.instructions+=10;goto B70d610;
case 0x70d611:c.instructions+=9;goto B70d611;
case 0x70d612:c.instructions+=8;goto B70d612;
case 0x70d615:c.instructions+=7;goto B70d615;
case 0x70d618:c.instructions+=6;goto B70d618;
case 0x70d61a:c.instructions+=5;goto B70d61a;
case 0x70d61b:c.instructions+=4;goto B70d61b;
case 0x70d61d:c.instructions+=3;goto B70d61d;
case 0x70d61f:c.instructions+=2;goto B70d61f;
case 0x70d625:c.instructions+=1;goto B70d625;
case 0x70d62b:goto L70d62b;
case 0x70d62d:goto L70d62d;
case 0x70d62f:c.instructions+=10;goto B70d62f;
case 0x70d630:c.instructions+=9;goto B70d630;
case 0x70d633:c.instructions+=8;goto B70d633;
case 0x70d634:c.instructions+=7;goto B70d634;
case 0x70d637:c.instructions+=6;goto B70d637;
case 0x70d63d:c.instructions+=5;goto B70d63d;
case 0x70d642:c.instructions+=4;goto B70d642;
case 0x70d643:c.instructions+=3;goto B70d643;
case 0x70d646:c.instructions+=2;goto B70d646;
case 0x70d649:c.instructions+=1;goto B70d649;
case 0x70d64e:goto L70d64e;
case 0x70d654:c.instructions+=4;goto B70d654;
case 0x70d657:c.instructions+=3;goto B70d657;
case 0x70d65a:c.instructions+=2;goto B70d65a;
case 0x70d65d:c.instructions+=1;goto B70d65d;
case 0x70d660:goto L70d660;
case 0x70d662:c.instructions+=3;goto B70d662;
case 0x70d663:c.instructions+=2;goto B70d663;
case 0x70d665:c.instructions+=1;goto B70d665;
case 0x70d667:goto L70d667;
case 0x70d669:c.instructions+=5;goto B70d669;
case 0x70d66c:c.instructions+=4;goto B70d66c;
case 0x70d66d:c.instructions+=3;goto B70d66d;
case 0x70d670:c.instructions+=2;goto B70d670;
case 0x70d677:c.instructions+=1;goto B70d677;
case 0x70d67d:goto L70d67d;
case 0x70d683:c.instructions+=3;goto B70d683;
case 0x70d685:c.instructions+=2;goto B70d685;
case 0x70d687:c.instructions+=1;goto B70d687;
case 0x70d68d:goto L70d68d;
case 0x70d68e:c.instructions+=5;goto B70d68e;
case 0x70d690:c.instructions+=4;goto B70d690;
case 0x70d692:c.instructions+=3;goto B70d692;
case 0x70d695:c.instructions+=2;goto B70d695;
case 0x70d698:c.instructions+=1;goto B70d698;
case 0x70d69e:goto L70d69e;
case 0x70d6a0:c.instructions+=2;goto B70d6a0;
case 0x70d6a3:c.instructions+=1;goto B70d6a3;
case 0x70d6a9:goto L70d6a9;
case 0x70d6aa:c.instructions+=2;goto B70d6aa;
case 0x70d6ab:c.instructions+=1;goto B70d6ab;
case 0x70d6ad:goto L70d6ad;
case 0x70d6af:c.instructions+=2;goto B70d6af;
case 0x70d6b2:c.instructions+=1;goto B70d6b2;
case 0x70d6b8:goto L70d6b8;
case 0x70d6bd:c.instructions+=14;goto B70d6bd;
case 0x70d6bf:c.instructions+=13;goto B70d6bf;
case 0x70d6c0:c.instructions+=12;goto B70d6c0;
case 0x70d6c1:c.instructions+=11;goto B70d6c1;
case 0x70d6c2:c.instructions+=10;goto B70d6c2;
case 0x70d6c3:c.instructions+=9;goto B70d6c3;
case 0x70d6c4:c.instructions+=8;goto B70d6c4;
case 0x70d6c5:c.instructions+=7;goto B70d6c5;
case 0x70d6c6:c.instructions+=6;goto B70d6c6;
case 0x70d6c7:c.instructions+=5;goto B70d6c7;
case 0x70d6c8:c.instructions+=4;goto B70d6c8;
case 0x70d6c9:c.instructions+=3;goto B70d6c9;
case 0x70d6ca:c.instructions+=2;goto B70d6ca;
case 0x70d6cc:c.instructions+=1;goto B70d6cc;
case 0x70d6d2:goto L70d6d2;
case 0x70d6d4:c.instructions+=2;goto B70d6d4;
case 0x70d6d7:c.instructions+=1;goto B70d6d7;
case 0x70d6dd:goto L70d6dd;
case 0x70d6e0:c.instructions+=2;goto B70d6e0;
case 0x70d6e1:c.instructions+=1;goto B70d6e1;
case 0x70d6e3:goto L70d6e3;
case 0x70d6e5:c.instructions+=2;goto B70d6e5;
case 0x70d6e8:c.instructions+=1;goto B70d6e8;
case 0x70d6ee:goto L70d6ee;
case 0x70d6f1:c.instructions+=2;goto B70d6f1;
case 0x70d6f2:c.instructions+=1;goto B70d6f2;
case 0x70d6f4:goto L70d6f4;
case 0x70d6f6:c.instructions+=2;goto B70d6f6;
case 0x70d6f7:c.instructions+=1;goto B70d6f7;
case 0x70d6fd:goto L70d6fd;
case 0x70d6fe:c.instructions+=2;goto B70d6fe;
case 0x70d6ff:c.instructions+=1;goto B70d6ff;
case 0x70d705:goto L70d705;
case 0x70d707:c.instructions+=2;goto B70d707;
case 0x70d708:c.instructions+=1;goto B70d708;
case 0x70d70e:goto L70d70e;
case 0x70d710:c.instructions+=9;goto B70d710;
case 0x70d713:c.instructions+=8;goto B70d713;
case 0x70d716:c.instructions+=7;goto B70d716;
case 0x70d717:c.instructions+=6;goto B70d717;
case 0x70d71a:c.instructions+=5;goto B70d71a;
case 0x70d71d:c.instructions+=4;goto B70d71d;
case 0x70d720:c.instructions+=3;goto B70d720;
case 0x70d723:c.instructions+=2;goto B70d723;
case 0x70d724:c.instructions+=1;goto B70d724;
case 0x70d72a:goto L70d72a;
case 0x70d72c:c.instructions+=1;goto B70d72c;
case 0x70d732:goto L70d732;
case 0x70d738:c.instructions+=1;goto B70d738;
case 0x70d73b:goto L70d73b;
case 0x70d73d:c.instructions+=3;goto B70d73d;
case 0x70d73e:c.instructions+=2;goto B70d73e;
case 0x70d740:c.instructions+=1;goto B70d740;
case 0x70d742:goto L70d742;
case 0x70d743:c.instructions+=11;goto B70d743;
case 0x70d745:c.instructions+=10;goto B70d745;
case 0x70d746:c.instructions+=9;goto B70d746;
case 0x70d74c:c.instructions+=8;goto B70d74c;
case 0x70d74d:c.instructions+=7;goto B70d74d;
case 0x70d750:c.instructions+=6;goto B70d750;
case 0x70d751:c.instructions+=5;goto B70d751;
case 0x70d753:c.instructions+=4;goto B70d753;
case 0x70d754:c.instructions+=3;goto B70d754;
case 0x70d755:c.instructions+=2;goto B70d755;
case 0x70d756:c.instructions+=1;goto B70d756;
case 0x70d75c:goto L70d75c;
case 0x70d75e:c.instructions+=1;goto B70d75e;
case 0x70d760:goto L70d760;
case 0x70d763:c.instructions+=4;goto B70d763;
case 0x70d766:c.instructions+=3;goto B70d766;
case 0x70d768:c.instructions+=2;goto B70d768;
case 0x70d76b:c.instructions+=1;goto B70d76b;
case 0x70d76d:goto L70d76d;
case 0x70d770:c.instructions+=3;goto B70d770;
case 0x70d773:c.instructions+=2;goto B70d773;
case 0x70d776:c.instructions+=1;goto B70d776;
case 0x70d778:goto L70d778;
case 0x70d77b:c.instructions+=5;goto B70d77b;
case 0x70d77c:c.instructions+=4;goto B70d77c;
case 0x70d77d:c.instructions+=3;goto B70d77d;
case 0x70d780:c.instructions+=2;goto B70d780;
case 0x70d781:c.instructions+=1;goto B70d781;
case 0x70d787:goto L70d787;
case 0x70d789:c.instructions+=1;goto B70d789;
case 0x70d78b:goto L70d78b;
case 0x70d78e:c.instructions+=2;goto B70d78e;
case 0x70d791:c.instructions+=1;goto B70d791;
case 0x70d795:goto L70d795;
case 0x70d798:c.instructions+=4;goto B70d798;
case 0x70d79b:c.instructions+=3;goto B70d79b;
case 0x70d79e:c.instructions+=2;goto B70d79e;
case 0x70d7a1:c.instructions+=1;goto B70d7a1;
case 0x70d7a3:goto L70d7a3;
case 0x70d7a6:c.instructions+=4;goto B70d7a6;
case 0x70d7a9:c.instructions+=3;goto B70d7a9;
case 0x70d7ac:c.instructions+=2;goto B70d7ac;
case 0x70d7af:c.instructions+=1;goto B70d7af;
case 0x70d7b1:goto L70d7b1;
case 0x70d7b7:c.instructions+=1;goto B70d7b7;
case 0x70d7ba:goto L70d7ba;
case 0x70d7bc:c.instructions+=3;goto B70d7bc;
case 0x70d7bd:c.instructions+=2;goto B70d7bd;
case 0x70d7bf:c.instructions+=1;goto B70d7bf;
case 0x70d7c1:goto L70d7c1;
case 0x70d7c3:c.instructions+=1;goto B70d7c3;
case 0x70d7c6:goto L70d7c6;
case 0x70d7c9:c.instructions+=2;goto B70d7c9;
case 0x70d7ca:c.instructions+=1;goto B70d7ca;
case 0x70d7cc:goto L70d7cc;
case 0x70d7cf:c.instructions+=1;goto B70d7cf;
case 0x70d7d5:goto L70d7d5;
case 0x70d7d8:c.instructions+=1;goto B70d7d8;
case 0x70d7da:goto L70d7da;
case 0x70d7dd:c.instructions+=1;goto B70d7dd;
case 0x70d7df:goto L70d7df;
case 0x70d7e2:c.instructions+=2;goto B70d7e2;
case 0x70d7e3:c.instructions+=1;goto B70d7e3;
case 0x70d7e5:goto L70d7e5;
case 0x70d7e8:c.instructions+=1;goto B70d7e8;
case 0x70d7ee:goto L70d7ee;
case 0x70d7f0:c.instructions+=1;goto B70d7f0;
case 0x70d7f2:goto L70d7f2;
case 0x70d7f3:c.instructions+=1;goto B70d7f3;
case 0x70d7f9:goto L70d7f9;
case 0x70d7fc:c.instructions+=5;goto B70d7fc;
case 0x70d7fd:c.instructions+=4;goto B70d7fd;
case 0x70d7fe:c.instructions+=3;goto B70d7fe;
case 0x70d7ff:c.instructions+=2;goto B70d7ff;
case 0x70d800:c.instructions+=1;goto B70d800;
case 0x70d801:goto L70d801;
case 0x70d802:c.instructions+=20;goto B70d802;
case 0x70d804:c.instructions+=19;goto B70d804;
case 0x70d805:c.instructions+=18;goto B70d805;
case 0x70d808:c.instructions+=17;goto B70d808;
case 0x70d80c:c.instructions+=16;goto B70d80c;
case 0x70d80f:c.instructions+=15;goto B70d80f;
case 0x70d810:c.instructions+=14;goto B70d810;
case 0x70d811:c.instructions+=13;goto B70d811;
case 0x70d814:c.instructions+=12;goto B70d814;
case 0x70d817:c.instructions+=11;goto B70d817;
case 0x70d81b:c.instructions+=10;goto B70d81b;
case 0x70d81e:c.instructions+=9;goto B70d81e;
case 0x70d81f:c.instructions+=8;goto B70d81f;
case 0x70d821:c.instructions+=7;goto B70d821;
case 0x70d822:c.instructions+=6;goto B70d822;
case 0x70d825:c.instructions+=5;goto B70d825;
case 0x70d828:c.instructions+=4;goto B70d828;
case 0x70d82a:c.instructions+=3;goto B70d82a;
case 0x70d82d:c.instructions+=2;goto B70d82d;
case 0x70d82f:c.instructions+=1;goto B70d82f;
case 0x70d831:goto L70d831;
case 0x70d833:c.instructions+=3;goto B70d833;
case 0x70d835:c.instructions+=2;goto B70d835;
case 0x70d837:c.instructions+=1;goto B70d837;
case 0x70d83e:goto L70d83e;
case 0x70d843:c.instructions+=1;goto B70d843;
case 0x70d845:goto L70d845;
case 0x70d848:goto L70d848;
case 0x70d84a:c.instructions+=3;goto B70d84a;
case 0x70d84c:c.instructions+=2;goto B70d84c;
case 0x70d84d:c.instructions+=1;goto B70d84d;
case 0x70d84f:goto L70d84f;
case 0x70d852:c.instructions+=7;goto B70d852;
case 0x70d855:c.instructions+=6;goto B70d855;
case 0x70d859:c.instructions+=5;goto B70d859;
case 0x70d85b:c.instructions+=4;goto B70d85b;
case 0x70d85d:c.instructions+=3;goto B70d85d;
case 0x70d85e:c.instructions+=2;goto B70d85e;
case 0x70d85f:c.instructions+=1;goto B70d85f;
case 0x70d862:goto L70d862;
case 0x70d867:c.instructions+=1;goto B70d867;
case 0x70d869:goto L70d869;
case 0x70d86c:goto L70d86c;
case 0x70d86f:c.instructions+=7;goto B70d86f;
case 0x70d870:c.instructions+=6;goto B70d870;
case 0x70d871:c.instructions+=5;goto B70d871;
case 0x70d874:c.instructions+=4;goto B70d874;
case 0x70d877:c.instructions+=3;goto B70d877;
case 0x70d878:c.instructions+=2;goto B70d878;
case 0x70d879:c.instructions+=1;goto B70d879;
case 0x70d87a:goto L70d87a;
case 0x70d87b:c.instructions+=14;goto B70d87b;
case 0x70d87d:c.instructions+=13;goto B70d87d;
case 0x70d880:c.instructions+=12;goto B70d880;
case 0x70d883:c.instructions+=11;goto B70d883;
case 0x70d884:c.instructions+=10;goto B70d884;
case 0x70d887:c.instructions+=9;goto B70d887;
case 0x70d888:c.instructions+=8;goto B70d888;
case 0x70d88b:c.instructions+=7;goto B70d88b;
case 0x70d88e:c.instructions+=6;goto B70d88e;
case 0x70d890:c.instructions+=5;goto B70d890;
case 0x70d891:c.instructions+=4;goto B70d891;
case 0x70d893:c.instructions+=3;goto B70d893;
case 0x70d896:c.instructions+=2;goto B70d896;
case 0x70d898:c.instructions+=1;goto B70d898;
case 0x70d89a:goto L70d89a;
case 0x70d89c:c.instructions+=5;goto B70d89c;
case 0x70d89e:c.instructions+=4;goto B70d89e;
case 0x70d8a0:c.instructions+=3;goto B70d8a0;
case 0x70d8a2:c.instructions+=2;goto B70d8a2;
case 0x70d8a9:c.instructions+=1;goto B70d8a9;
case 0x70d8ab:goto L70d8ab;
case 0x70d8ad:c.instructions+=2;goto B70d8ad;
case 0x70d8b1:c.instructions+=1;goto B70d8b1;
case 0x70d8b4:goto L70d8b4;
case 0x70d8b5:c.instructions+=1;goto B70d8b5;
case 0x70d8b7:goto L70d8b7;
case 0x70d8ba:c.instructions+=7;goto B70d8ba;
case 0x70d8bd:c.instructions+=6;goto B70d8bd;
case 0x70d8c1:c.instructions+=5;goto B70d8c1;
case 0x70d8c3:c.instructions+=4;goto B70d8c3;
case 0x70d8c5:c.instructions+=3;goto B70d8c5;
case 0x70d8c6:c.instructions+=2;goto B70d8c6;
case 0x70d8c7:c.instructions+=1;goto B70d8c7;
case 0x70d8ca:goto L70d8ca;
case 0x70d8cb:c.instructions+=8;goto B70d8cb;
case 0x70d8ce:c.instructions+=7;goto B70d8ce;
case 0x70d8cf:c.instructions+=6;goto B70d8cf;
case 0x70d8d2:c.instructions+=5;goto B70d8d2;
case 0x70d8d5:c.instructions+=4;goto B70d8d5;
case 0x70d8d8:c.instructions+=3;goto B70d8d8;
case 0x70d8d9:c.instructions+=2;goto B70d8d9;
case 0x70d8da:c.instructions+=1;goto B70d8da;
case 0x70d8db:goto L70d8db;
case 0x70d8dc:c.instructions+=9;goto B70d8dc;
case 0x70d8de:c.instructions+=8;goto B70d8de;
case 0x70d8e5:c.instructions+=7;goto B70d8e5;
case 0x70d8e8:c.instructions+=6;goto B70d8e8;
case 0x70d8eb:c.instructions+=5;goto B70d8eb;
case 0x70d8ec:c.instructions+=4;goto B70d8ec;
case 0x70d8ee:c.instructions+=3;goto B70d8ee;
case 0x70d8f0:c.instructions+=2;goto B70d8f0;
case 0x70d8f2:c.instructions+=1;goto B70d8f2;
case 0x70d8f4:goto L70d8f4;
case 0x70d8f6:c.instructions+=18;goto B70d8f6;
case 0x70d8f7:c.instructions+=17;goto B70d8f7;
case 0x70d8f9:c.instructions+=16;goto B70d8f9;
case 0x70d8fc:c.instructions+=15;goto B70d8fc;
case 0x70d8ff:c.instructions+=14;goto B70d8ff;
case 0x70d903:c.instructions+=13;goto B70d903;
case 0x70d906:c.instructions+=12;goto B70d906;
case 0x70d908:c.instructions+=11;goto B70d908;
case 0x70d90c:c.instructions+=10;goto B70d90c;
case 0x70d90f:c.instructions+=9;goto B70d90f;
case 0x70d911:c.instructions+=8;goto B70d911;
case 0x70d915:c.instructions+=7;goto B70d915;
case 0x70d918:c.instructions+=6;goto B70d918;
case 0x70d91a:c.instructions+=5;goto B70d91a;
case 0x70d91d:c.instructions+=4;goto B70d91d;
case 0x70d920:c.instructions+=3;goto B70d920;
case 0x70d923:c.instructions+=2;goto B70d923;
case 0x70d926:c.instructions+=1;goto B70d926;
case 0x70d927:goto L70d927;
case 0x70d929:c.instructions+=7;goto B70d929;
case 0x70d92b:c.instructions+=6;goto B70d92b;
case 0x70d92e:c.instructions+=5;goto B70d92e;
case 0x70d930:c.instructions+=4;goto B70d930;
case 0x70d932:c.instructions+=3;goto B70d932;
case 0x70d933:c.instructions+=2;goto B70d933;
case 0x70d934:c.instructions+=1;goto B70d934;
case 0x70d935:goto L70d935;
case 0x70d936:c.instructions+=9;goto B70d936;
case 0x70d938:c.instructions+=8;goto B70d938;
case 0x70d93a:c.instructions+=7;goto B70d93a;
case 0x70d93c:c.instructions+=6;goto B70d93c;
case 0x70d93d:c.instructions+=5;goto B70d93d;
case 0x70d93f:c.instructions+=4;goto B70d93f;
case 0x70d940:c.instructions+=3;goto B70d940;
case 0x70d943:c.instructions+=2;goto B70d943;
case 0x70d946:c.instructions+=1;goto B70d946;
case 0x70d948:goto L70d948;
case 0x70d94b:c.instructions+=2;goto B70d94b;
case 0x70d94d:c.instructions+=1;goto B70d94d;
case 0x70d94f:goto L70d94f;
case 0x70d952:c.instructions+=5;goto B70d952;
case 0x70d955:c.instructions+=4;goto B70d955;
case 0x70d958:c.instructions+=3;goto B70d958;
case 0x70d95b:c.instructions+=2;goto B70d95b;
case 0x70d95d:c.instructions+=1;goto B70d95d;
case 0x70d960:goto L70d960;
case 0x70d962:c.instructions+=2;goto B70d962;
case 0x70d963:c.instructions+=1;goto B70d963;
case 0x70d99e:goto L70d99e;
case 0x70d9a0:c.instructions+=2;goto B70d9a0;
case 0x70d9a2:c.instructions+=1;goto B70d9a2;
case 0x70d9a4:goto L70d9a4;
case 0x70d9a5:c.instructions+=5;goto B70d9a5;
case 0x70d9a7:c.instructions+=4;goto B70d9a7;
case 0x70d9aa:c.instructions+=3;goto B70d9aa;
case 0x70d9ac:c.instructions+=2;goto B70d9ac;
case 0x70d9af:c.instructions+=1;goto B70d9af;
case 0x70d9b0:goto L70d9b0;
case 0x70d9b3:c.instructions+=19;goto B70d9b3;
case 0x70d9b6:c.instructions+=18;goto B70d9b6;
case 0x70d9b7:c.instructions+=17;goto B70d9b7;
case 0x70d9bb:c.instructions+=16;goto B70d9bb;
case 0x70d9be:c.instructions+=15;goto B70d9be;
case 0x70d9c0:c.instructions+=14;goto B70d9c0;
case 0x70d9c4:c.instructions+=13;goto B70d9c4;
case 0x70d9c7:c.instructions+=12;goto B70d9c7;
case 0x70d9c9:c.instructions+=11;goto B70d9c9;
case 0x70d9cd:c.instructions+=10;goto B70d9cd;
case 0x70d9d0:c.instructions+=9;goto B70d9d0;
case 0x70d9d2:c.instructions+=8;goto B70d9d2;
case 0x70d9d5:c.instructions+=7;goto B70d9d5;
case 0x70d9d8:c.instructions+=6;goto B70d9d8;
case 0x70d9db:c.instructions+=5;goto B70d9db;
case 0x70d9e1:c.instructions+=4;goto B70d9e1;
case 0x70d9e3:c.instructions+=3;goto B70d9e3;
case 0x70d9e6:c.instructions+=2;goto B70d9e6;
case 0x70d9e7:c.instructions+=1;goto B70d9e7;
case 0x70d9e8:goto L70d9e8;
case 0x70d9e9:c.instructions+=18;goto B70d9e9;
case 0x70d9eb:c.instructions+=17;goto B70d9eb;
case 0x70d9ec:c.instructions+=16;goto B70d9ec;
case 0x70d9ef:c.instructions+=15;goto B70d9ef;
case 0x70d9f3:c.instructions+=14;goto B70d9f3;
case 0x70d9f6:c.instructions+=13;goto B70d9f6;
case 0x70d9f7:c.instructions+=12;goto B70d9f7;
case 0x70d9fa:c.instructions+=11;goto B70d9fa;
case 0x70d9fb:c.instructions+=10;goto B70d9fb;
case 0x70d9fe:c.instructions+=9;goto B70d9fe;
case 0x70da01:c.instructions+=8;goto B70da01;
case 0x70da05:c.instructions+=7;goto B70da05;
case 0x70da08:c.instructions+=6;goto B70da08;
case 0x70da09:c.instructions+=5;goto B70da09;
case 0x70da0a:c.instructions+=4;goto B70da0a;
case 0x70da0c:c.instructions+=3;goto B70da0c;
case 0x70da0f:c.instructions+=2;goto B70da0f;
case 0x70da11:c.instructions+=1;goto B70da11;
case 0x70da13:goto L70da13;
case 0x70da15:c.instructions+=3;goto B70da15;
case 0x70da17:c.instructions+=2;goto B70da17;
case 0x70da1e:c.instructions+=1;goto B70da1e;
case 0x70da20:goto L70da20;
case 0x70da22:c.instructions+=1;goto B70da22;
case 0x70da24:goto L70da24;
case 0x70da26:c.instructions+=3;goto B70da26;
case 0x70da28:c.instructions+=2;goto B70da28;
case 0x70da29:c.instructions+=1;goto B70da29;
case 0x70da2b:goto L70da2b;
case 0x70da2e:c.instructions+=7;goto B70da2e;
case 0x70da31:c.instructions+=6;goto B70da31;
case 0x70da35:c.instructions+=5;goto B70da35;
case 0x70da37:c.instructions+=4;goto B70da37;
case 0x70da39:c.instructions+=3;goto B70da39;
case 0x70da3a:c.instructions+=2;goto B70da3a;
case 0x70da3b:c.instructions+=1;goto B70da3b;
case 0x70da3e:goto L70da3e;
case 0x70da44:c.instructions+=1;goto B70da44;
case 0x70da46:goto L70da46;
case 0x70da47:c.instructions+=8;goto B70da47;
case 0x70da4a:c.instructions+=7;goto B70da4a;
case 0x70da4b:c.instructions+=6;goto B70da4b;
case 0x70da4e:c.instructions+=5;goto B70da4e;
case 0x70da51:c.instructions+=4;goto B70da51;
case 0x70da54:c.instructions+=3;goto B70da54;
case 0x70da55:c.instructions+=2;goto B70da55;
case 0x70da56:c.instructions+=1;goto B70da56;
case 0x70da57:goto L70da57;
case 0x70da58:c.instructions+=9;goto B70da58;
case 0x70da5a:c.instructions+=8;goto B70da5a;
case 0x70da5c:c.instructions+=7;goto B70da5c;
case 0x70da5e:c.instructions+=6;goto B70da5e;
case 0x70da5f:c.instructions+=5;goto B70da5f;
case 0x70da61:c.instructions+=4;goto B70da61;
case 0x70da62:c.instructions+=3;goto B70da62;
case 0x70da65:c.instructions+=2;goto B70da65;
case 0x70da68:c.instructions+=1;goto B70da68;
case 0x70da6a:goto L70da6a;
case 0x70da6d:c.instructions+=3;goto B70da6d;
case 0x70da6f:c.instructions+=2;goto B70da6f;
case 0x70da71:c.instructions+=1;goto B70da71;
case 0x70da73:goto L70da73;
case 0x70da76:c.instructions+=5;goto B70da76;
case 0x70da79:c.instructions+=4;goto B70da79;
case 0x70da7c:c.instructions+=3;goto B70da7c;
case 0x70da7e:c.instructions+=2;goto B70da7e;
case 0x70da81:c.instructions+=1;goto B70da81;
case 0x70da83:goto L70da83;
case 0x70da86:c.instructions+=6;goto B70da86;
case 0x70da89:c.instructions+=5;goto B70da89;
case 0x70da8c:c.instructions+=4;goto B70da8c;
case 0x70da8f:c.instructions+=3;goto B70da8f;
case 0x70da91:c.instructions+=2;goto B70da91;
case 0x70da92:c.instructions+=1;goto B70da92;
case 0x70da94:goto L70da94;
case 0x70da97:c.instructions+=14;goto B70da97;
case 0x70da9a:c.instructions+=13;goto B70da9a;
case 0x70da9e:c.instructions+=12;goto B70da9e;
case 0x70daa1:c.instructions+=11;goto B70daa1;
case 0x70daa3:c.instructions+=10;goto B70daa3;
case 0x70daa7:c.instructions+=9;goto B70daa7;
case 0x70daaa:c.instructions+=8;goto B70daaa;
case 0x70daac:c.instructions+=7;goto B70daac;
case 0x70dab0:c.instructions+=6;goto B70dab0;
case 0x70dab3:c.instructions+=5;goto B70dab3;
case 0x70dab5:c.instructions+=4;goto B70dab5;
case 0x70dab8:c.instructions+=3;goto B70dab8;
case 0x70dabb:c.instructions+=2;goto B70dabb;
case 0x70dabe:c.instructions+=1;goto B70dabe;
case 0x70dac1:goto L70dac1;
case 0x70dac3:c.instructions+=3;goto B70dac3;
case 0x70dac6:c.instructions+=2;goto B70dac6;
case 0x70dac8:c.instructions+=1;goto B70dac8;
case 0x70daca:goto L70daca;
case 0x70dacc:c.instructions+=2;goto B70dacc;
case 0x70dacf:c.instructions+=1;goto B70dacf;
case 0x70dad1:goto L70dad1;
case 0x70dad4:c.instructions+=4;goto B70dad4;
case 0x70dad7:c.instructions+=3;goto B70dad7;
case 0x70dadd:c.instructions+=2;goto B70dadd;
case 0x70dadf:c.instructions+=1;goto B70dadf;
case 0x70dae1:goto L70dae1;
case 0x70dae3:c.instructions+=1;goto B70dae3;
case 0x70dae8:goto L70dae8;
case 0x70daea:c.instructions+=2;goto B70daea;
case 0x70daec:c.instructions+=1;goto B70daec;
case 0x70daee:goto L70daee;
case 0x70daf0:c.instructions+=4;goto B70daf0;
case 0x70daf3:c.instructions+=3;goto B70daf3;
case 0x70daf6:c.instructions+=2;goto B70daf6;
case 0x70dafa:c.instructions+=1;goto B70dafa;
case 0x70dafc:goto L70dafc;
case 0x70dafe:c.instructions+=3;goto B70dafe;
case 0x70db01:c.instructions+=2;goto B70db01;
case 0x70db04:c.instructions+=1;goto B70db04;
case 0x70db07:goto L70db07;
case 0x70db0a:c.instructions+=1;goto B70db0a;
case 0x70db0c:goto L70db0c;
case 0x70db0e:c.instructions+=2;goto B70db0e;
case 0x70db10:c.instructions+=1;goto B70db10;
case 0x70db13:goto L70db13;
case 0x70db14:c.instructions+=2;goto B70db14;
case 0x70db15:c.instructions+=1;goto B70db15;
case 0x70db16:goto L70db16;
case 0x70db17:c.instructions+=7;goto B70db17;
case 0x70db19:c.instructions+=6;goto B70db19;
case 0x70db1a:c.instructions+=5;goto B70db1a;
case 0x70db1b:c.instructions+=4;goto B70db1b;
case 0x70db1e:c.instructions+=3;goto B70db1e;
case 0x70db24:c.instructions+=2;goto B70db24;
case 0x70db25:c.instructions+=1;goto B70db25;
case 0x70db2a:goto L70db2a;
case 0x70db2c:c.instructions+=3;goto B70db2c;
case 0x70db2d:c.instructions+=2;goto B70db2d;
case 0x70db2f:c.instructions+=1;goto B70db2f;
case 0x70db34:goto L70db34;
case 0x70db35:c.instructions+=6;goto B70db35;
case 0x70db36:c.instructions+=5;goto B70db36;
case 0x70db38:c.instructions+=4;goto B70db38;
case 0x70db3b:c.instructions+=3;goto B70db3b;
case 0x70db3c:c.instructions+=2;goto B70db3c;
case 0x70db3d:c.instructions+=1;goto B70db3d;
case 0x70db3f:goto L70db3f;
case 0x70db40:c.instructions+=1;goto B70db40;
case 0x70db42:goto L70db42;
case 0x70db43:c.instructions+=1;goto B70db43;
case 0x70db45:goto L70db45;
case 0x70db46:c.instructions+=1;goto B70db46;
case 0x70db48:goto L70db48;
case 0x70db4a:goto L70db4a;
case 0x70db4b:c.instructions+=2;goto B70db4b;
case 0x70db4c:c.instructions+=1;goto B70db4c;
case 0x70db4d:goto L70db4d;
case 0x70db4f:c.instructions+=1;goto B70db4f;
case 0x70db51:goto L70db51;
case 0x70db53:c.instructions+=1;goto B70db53;
case 0x70db55:goto L70db55;
case 0x70db57:c.instructions+=2;goto B70db57;
case 0x70db58:c.instructions+=1;goto B70db58;
case 0x70db59:goto L70db59;
case 0x70db5a:c.instructions+=15;goto B70db5a;
case 0x70db5c:c.instructions+=14;goto B70db5c;
case 0x70db5f:c.instructions+=13;goto B70db5f;
case 0x70db62:c.instructions+=12;goto B70db62;
case 0x70db63:c.instructions+=11;goto B70db63;
case 0x70db64:c.instructions+=10;goto B70db64;
case 0x70db67:c.instructions+=9;goto B70db67;
case 0x70db68:c.instructions+=8;goto B70db68;
case 0x70db6b:c.instructions+=7;goto B70db6b;
case 0x70db6d:c.instructions+=6;goto B70db6d;
case 0x70db70:c.instructions+=5;goto B70db70;
case 0x70db78:c.instructions+=4;goto B70db78;
case 0x70db79:c.instructions+=3;goto B70db79;
case 0x70db7f:c.instructions+=2;goto B70db7f;
case 0x70db80:c.instructions+=1;goto B70db80;
case 0x70db85:goto L70db85;
case 0x70db87:c.instructions+=3;goto B70db87;
case 0x70db88:c.instructions+=2;goto B70db88;
case 0x70db89:c.instructions+=1;goto B70db89;
case 0x70db8b:goto L70db8b;
case 0x70db8e:c.instructions+=1;goto B70db8e;
case 0x70db93:goto L70db93;
case 0x70db96:c.instructions+=7;goto B70db96;
case 0x70db98:c.instructions+=6;goto B70db98;
case 0x70db9b:c.instructions+=5;goto B70db9b;
case 0x70dba2:c.instructions+=4;goto B70dba2;
case 0x70dba5:c.instructions+=3;goto B70dba5;
case 0x70dba6:c.instructions+=2;goto B70dba6;
case 0x70dba7:c.instructions+=1;goto B70dba7;
case 0x70dbac:goto L70dbac;
case 0x70dbae:c.instructions+=3;goto B70dbae;
case 0x70dbaf:c.instructions+=2;goto B70dbaf;
case 0x70dbb0:c.instructions+=1;goto B70dbb0;
case 0x70dbb2:goto L70dbb2;
case 0x70dbb6:c.instructions+=3;goto B70dbb6;
case 0x70dbb7:c.instructions+=2;goto B70dbb7;
case 0x70dbb8:c.instructions+=1;goto B70dbb8;
case 0x70dbbd:goto L70dbbd;
case 0x70dbbf:c.instructions+=3;goto B70dbbf;
case 0x70dbc0:c.instructions+=2;goto B70dbc0;
case 0x70dbc1:c.instructions+=1;goto B70dbc1;
case 0x70dbc3:goto L70dbc3;
case 0x70dbc7:c.instructions+=3;goto B70dbc7;
case 0x70dbc8:c.instructions+=2;goto B70dbc8;
case 0x70dbc9:c.instructions+=1;goto B70dbc9;
case 0x70dbce:goto L70dbce;
case 0x70dbd0:c.instructions+=3;goto B70dbd0;
case 0x70dbd1:c.instructions+=2;goto B70dbd1;
case 0x70dbd2:c.instructions+=1;goto B70dbd2;
case 0x70dbd4:goto L70dbd4;
case 0x70dbd8:c.instructions+=3;goto B70dbd8;
case 0x70dbd9:c.instructions+=2;goto B70dbd9;
case 0x70dbda:c.instructions+=1;goto B70dbda;
case 0x70dbdf:goto L70dbdf;
case 0x70dbe1:c.instructions+=2;goto B70dbe1;
case 0x70dbe4:c.instructions+=1;goto B70dbe4;
case 0x70dbe6:goto L70dbe6;
case 0x70dbea:c.instructions+=3;goto B70dbea;
case 0x70dbeb:c.instructions+=2;goto B70dbeb;
case 0x70dbec:c.instructions+=1;goto B70dbec;
case 0x70dbf1:goto L70dbf1;
case 0x70dbf3:c.instructions+=2;goto B70dbf3;
case 0x70dbf6:c.instructions+=1;goto B70dbf6;
case 0x70dbf8:goto L70dbf8;
case 0x70dbfc:c.instructions+=5;goto B70dbfc;
case 0x70dbfd:c.instructions+=4;goto B70dbfd;
case 0x70dbff:c.instructions+=3;goto B70dbff;
case 0x70dc00:c.instructions+=2;goto B70dc00;
case 0x70dc01:c.instructions+=1;goto B70dc01;
case 0x70dc06:goto L70dc06;
case 0x70dc08:c.instructions+=3;goto B70dc08;
case 0x70dc09:c.instructions+=2;goto B70dc09;
case 0x70dc0a:c.instructions+=1;goto B70dc0a;
case 0x70dc0c:goto L70dc0c;
case 0x70dc0e:c.instructions+=2;goto B70dc0e;
case 0x70dc0f:c.instructions+=1;goto B70dc0f;
case 0x70dc11:goto L70dc11;
case 0x70dc15:c.instructions+=3;goto B70dc15;
case 0x70dc16:c.instructions+=2;goto B70dc16;
case 0x70dc17:c.instructions+=1;goto B70dc17;
case 0x70dc1c:goto L70dc1c;
case 0x70dc1e:c.instructions+=3;goto B70dc1e;
case 0x70dc1f:c.instructions+=2;goto B70dc1f;
case 0x70dc20:c.instructions+=1;goto B70dc20;
case 0x70dc22:goto L70dc22;
case 0x70dc26:c.instructions+=3;goto B70dc26;
case 0x70dc27:c.instructions+=2;goto B70dc27;
case 0x70dc28:c.instructions+=1;goto B70dc28;
case 0x70dc2d:goto L70dc2d;
case 0x70dc2f:c.instructions+=2;goto B70dc2f;
case 0x70dc32:c.instructions+=1;goto B70dc32;
case 0x70dc34:goto L70dc34;
case 0x70dc38:c.instructions+=3;goto B70dc38;
case 0x70dc39:c.instructions+=2;goto B70dc39;
case 0x70dc3a:c.instructions+=1;goto B70dc3a;
case 0x70dc3f:goto L70dc3f;
case 0x70dc41:c.instructions+=1;goto B70dc41;
case 0x70dc43:goto L70dc43;
case 0x70dc44:c.instructions+=1;goto B70dc44;
case 0x70dc45:goto L70dc45;
case 0x70dc47:c.instructions+=5;goto B70dc47;
case 0x70dc48:c.instructions+=4;goto B70dc48;
case 0x70dc49:c.instructions+=3;goto B70dc49;
case 0x70dc4a:c.instructions+=2;goto B70dc4a;
case 0x70dc4b:c.instructions+=1;goto B70dc4b;
case 0x70dc4c:goto L70dc4c;
case 0x70dc4d:c.instructions+=11;goto B70dc4d;
case 0x70dc4f:c.instructions+=10;goto B70dc4f;
case 0x70dc52:c.instructions+=9;goto B70dc52;
case 0x70dc53:c.instructions+=8;goto B70dc53;
case 0x70dc54:c.instructions+=7;goto B70dc54;
case 0x70dc56:c.instructions+=6;goto B70dc56;
case 0x70dc5a:c.instructions+=5;goto B70dc5a;
case 0x70dc5b:c.instructions+=4;goto B70dc5b;
case 0x70dc5e:c.instructions+=3;goto B70dc5e;
case 0x70dc61:c.instructions+=2;goto B70dc61;
case 0x70dc64:c.instructions+=1;goto B70dc64;
case 0x70dc66:goto L70dc66;
case 0x70dc6a:c.instructions+=1;goto B70dc6a;
case 0x70dc6c:goto L70dc6c;
case 0x70dc70:c.instructions+=3;goto B70dc70;
case 0x70dc73:c.instructions+=2;goto B70dc73;
case 0x70dc77:c.instructions+=1;goto B70dc77;
case 0x70dc79:goto L70dc79;
case 0x70dc7d:c.instructions+=1;goto B70dc7d;
case 0x70dc7f:goto L70dc7f;
case 0x70dc83:c.instructions+=2;goto B70dc83;
case 0x70dc86:c.instructions+=1;goto B70dc86;
case 0x70dc8a:goto L70dc8a;
case 0x70dc8d:goto L70dc8d;
case 0x70dc90:c.instructions+=1;goto B70dc90;
case 0x70dc92:goto L70dc92;
case 0x70dc95:goto L70dc95;
case 0x70dc9d:c.instructions+=4;goto B70dc9d;
case 0x70dc9e:c.instructions+=3;goto B70dc9e;
case 0x70dca4:c.instructions+=2;goto B70dca4;
case 0x70dca5:c.instructions+=1;goto B70dca5;
case 0x70dcaa:goto L70dcaa;
case 0x70dcac:c.instructions+=3;goto B70dcac;
case 0x70dcad:c.instructions+=2;goto B70dcad;
case 0x70dcae:c.instructions+=1;goto B70dcae;
case 0x70dcb4:goto L70dcb4;
case 0x70dcb7:c.instructions+=5;goto B70dcb7;
case 0x70dcb9:c.instructions+=4;goto B70dcb9;
case 0x70dcc0:c.instructions+=3;goto B70dcc0;
case 0x70dcc1:c.instructions+=2;goto B70dcc1;
case 0x70dcc2:c.instructions+=1;goto B70dcc2;
case 0x70dcc7:goto L70dcc7;
case 0x70dcc9:c.instructions+=3;goto B70dcc9;
case 0x70dcca:c.instructions+=2;goto B70dcca;
case 0x70dccb:c.instructions+=1;goto B70dccb;
case 0x70dccd:goto L70dccd;
case 0x70dcd4:c.instructions+=3;goto B70dcd4;
case 0x70dcd5:c.instructions+=2;goto B70dcd5;
case 0x70dcd6:c.instructions+=1;goto B70dcd6;
case 0x70dcdb:goto L70dcdb;
case 0x70dcdd:c.instructions+=3;goto B70dcdd;
case 0x70dcde:c.instructions+=2;goto B70dcde;
case 0x70dcdf:c.instructions+=1;goto B70dcdf;
case 0x70dce1:goto L70dce1;
case 0x70dce4:c.instructions+=6;goto B70dce4;
case 0x70dce9:c.instructions+=5;goto B70dce9;
case 0x70dcec:c.instructions+=4;goto B70dcec;
case 0x70dcf0:c.instructions+=3;goto B70dcf0;
case 0x70dcf1:c.instructions+=2;goto B70dcf1;
case 0x70dcf2:c.instructions+=1;goto B70dcf2;
case 0x70dcf7:goto L70dcf7;
case 0x70dcf8:c.instructions+=4;goto B70dcf8;
case 0x70dcfa:c.instructions+=3;goto B70dcfa;
case 0x70dcfb:c.instructions+=2;goto B70dcfb;
case 0x70dcfe:c.instructions+=1;goto B70dcfe;
case 0x70dd03:goto L70dd03;
case 0x70dd0a:c.instructions+=3;goto B70dd0a;
case 0x70dd0b:c.instructions+=2;goto B70dd0b;
case 0x70dd0c:c.instructions+=1;goto B70dd0c;
case 0x70dd11:goto L70dd11;
case 0x70dd12:c.instructions+=4;goto B70dd12;
case 0x70dd14:c.instructions+=3;goto B70dd14;
case 0x70dd15:c.instructions+=2;goto B70dd15;
case 0x70dd18:c.instructions+=1;goto B70dd18;
case 0x70dd1d:goto L70dd1d;
case 0x70dd24:c.instructions+=3;goto B70dd24;
case 0x70dd25:c.instructions+=2;goto B70dd25;
case 0x70dd26:c.instructions+=1;goto B70dd26;
case 0x70dd2b:goto L70dd2b;
case 0x70dd2d:c.instructions+=3;goto B70dd2d;
case 0x70dd2e:c.instructions+=2;goto B70dd2e;
case 0x70dd2f:c.instructions+=1;goto B70dd2f;
case 0x70dd31:goto L70dd31;
case 0x70dd38:c.instructions+=3;goto B70dd38;
case 0x70dd39:c.instructions+=2;goto B70dd39;
case 0x70dd3a:c.instructions+=1;goto B70dd3a;
case 0x70dd3f:goto L70dd3f;
case 0x70dd41:c.instructions+=5;goto B70dd41;
case 0x70dd42:c.instructions+=4;goto B70dd42;
case 0x70dd43:c.instructions+=3;goto B70dd43;
case 0x70dd44:c.instructions+=2;goto B70dd44;
case 0x70dd45:c.instructions+=1;goto B70dd45;
case 0x70dd4a:goto L70dd4a;
case 0x70dd51:c.instructions+=3;goto B70dd51;
case 0x70dd52:c.instructions+=2;goto B70dd52;
case 0x70dd53:c.instructions+=1;goto B70dd53;
case 0x70dd58:goto L70dd58;
case 0x70dd59:c.instructions+=3;goto B70dd59;
case 0x70dd5a:c.instructions+=2;goto B70dd5a;
case 0x70dd5c:c.instructions+=1;goto B70dd5c;
case 0x70dd61:goto L70dd61;
case 0x70dd64:c.instructions+=4;goto B70dd64;
case 0x70dd6b:c.instructions+=3;goto B70dd6b;
case 0x70dd6c:c.instructions+=2;goto B70dd6c;
case 0x70dd6d:c.instructions+=1;goto B70dd6d;
case 0x70dd72:goto L70dd72;
case 0x70dd75:c.instructions+=4;goto B70dd75;
case 0x70dd7c:c.instructions+=3;goto B70dd7c;
case 0x70dd7d:c.instructions+=2;goto B70dd7d;
case 0x70dd7e:c.instructions+=1;goto B70dd7e;
case 0x70dd83:goto L70dd83;
case 0x70dd86:c.instructions+=6;goto B70dd86;
case 0x70dd89:c.instructions+=5;goto B70dd89;
case 0x70dd8c:c.instructions+=4;goto B70dd8c;
case 0x70dd93:c.instructions+=3;goto B70dd93;
case 0x70dd94:c.instructions+=2;goto B70dd94;
case 0x70dd95:c.instructions+=1;goto B70dd95;
case 0x70dd9a:goto L70dd9a;
case 0x70dd9d:c.instructions+=6;goto B70dd9d;
case 0x70dda0:c.instructions+=5;goto B70dda0;
case 0x70dda7:c.instructions+=4;goto B70dda7;
case 0x70dda8:c.instructions+=3;goto B70dda8;
case 0x70ddae:c.instructions+=2;goto B70ddae;
case 0x70ddaf:c.instructions+=1;goto B70ddaf;
case 0x70ddb4:goto L70ddb4;
case 0x70ddb7:c.instructions+=6;goto B70ddb7;
case 0x70ddb9:c.instructions+=5;goto B70ddb9;
case 0x70ddc0:c.instructions+=4;goto B70ddc0;
case 0x70ddc1:c.instructions+=3;goto B70ddc1;
case 0x70ddc7:c.instructions+=2;goto B70ddc7;
case 0x70ddc8:c.instructions+=1;goto B70ddc8;
case 0x70ddcd:goto L70ddcd;
case 0x70ddd0:c.instructions+=6;goto B70ddd0;
case 0x70ddd2:c.instructions+=5;goto B70ddd2;
case 0x70ddd9:c.instructions+=4;goto B70ddd9;
case 0x70ddda:c.instructions+=3;goto B70ddda;
case 0x70dde0:c.instructions+=2;goto B70dde0;
case 0x70dde1:c.instructions+=1;goto B70dde1;
case 0x70dde6:goto L70dde6;
case 0x70dde9:c.instructions+=7;goto B70dde9;
case 0x70ddeb:c.instructions+=6;goto B70ddeb;
case 0x70ddee:c.instructions+=5;goto B70ddee;
case 0x70ddf6:c.instructions+=4;goto B70ddf6;
case 0x70ddf7:c.instructions+=3;goto B70ddf7;
case 0x70ddfd:c.instructions+=2;goto B70ddfd;
case 0x70ddfe:c.instructions+=1;goto B70ddfe;
case 0x70de03:goto L70de03;
case 0x70de06:c.instructions+=4;goto B70de06;
case 0x70de08:c.instructions+=3;goto B70de08;
case 0x70de0b:c.instructions+=2;goto B70de0b;
case 0x70de0e:c.instructions+=1;goto B70de0e;
case 0x70de10:goto L70de10;
case 0x70de17:c.instructions+=4;goto B70de17;
case 0x70de18:c.instructions+=3;goto B70de18;
case 0x70de1e:c.instructions+=2;goto B70de1e;
case 0x70de1f:c.instructions+=1;goto B70de1f;
case 0x70de24:goto L70de24;
case 0x70de25:c.instructions+=3;goto B70de25;
case 0x70de26:c.instructions+=2;goto B70de26;
case 0x70de29:c.instructions+=1;goto B70de29;
case 0x70de2b:goto L70de2b;
case 0x70de2e:goto L70de2e;
case 0x70de30:c.instructions+=1;goto B70de30;
case 0x70de32:goto L70de32;
case 0x70de35:c.instructions+=5;goto B70de35;
case 0x70de3d:c.instructions+=4;goto B70de3d;
case 0x70de3e:c.instructions+=3;goto B70de3e;
case 0x70de44:c.instructions+=2;goto B70de44;
case 0x70de45:c.instructions+=1;goto B70de45;
case 0x70de4a:goto L70de4a;
case 0x70de4c:c.instructions+=3;goto B70de4c;
case 0x70de4d:c.instructions+=2;goto B70de4d;
case 0x70de4e:c.instructions+=1;goto B70de4e;
case 0x70de50:goto L70de50;
case 0x70de52:goto L70de52;
case 0x70de56:c.instructions+=1;goto B70de56;
case 0x70de58:goto L70de58;
case 0x70de5b:c.instructions+=4;goto B70de5b;
case 0x70de5d:c.instructions+=3;goto B70de5d;
case 0x70de60:c.instructions+=2;goto B70de60;
case 0x70de64:c.instructions+=1;goto B70de64;
case 0x70de66:goto L70de66;
case 0x70de69:c.instructions+=3;goto B70de69;
case 0x70de6c:c.instructions+=2;goto B70de6c;
case 0x70de6e:c.instructions+=1;goto B70de6e;
case 0x70de71:goto L70de71;
case 0x70de74:c.instructions+=2;goto B70de74;
case 0x70de78:c.instructions+=1;goto B70de78;
case 0x70de7e:goto L70de7e;
case 0x70de7f:c.instructions+=4;goto B70de7f;
case 0x70de80:c.instructions+=3;goto B70de80;
case 0x70de81:c.instructions+=2;goto B70de81;
case 0x70de82:c.instructions+=1;goto B70de82;
case 0x70de83:goto L70de83;
case 0x70de84:c.instructions+=17;goto B70de84;
case 0x70de86:c.instructions+=16;goto B70de86;
case 0x70de87:c.instructions+=15;goto B70de87;
case 0x70de88:c.instructions+=14;goto B70de88;
case 0x70de8b:c.instructions+=13;goto B70de8b;
case 0x70de91:c.instructions+=12;goto B70de91;
case 0x70de95:c.instructions+=11;goto B70de95;
case 0x70de98:c.instructions+=10;goto B70de98;
case 0x70de99:c.instructions+=9;goto B70de99;
case 0x70de9b:c.instructions+=8;goto B70de9b;
case 0x70de9c:c.instructions+=7;goto B70de9c;
case 0x70dea0:c.instructions+=6;goto B70dea0;
case 0x70dea3:c.instructions+=5;goto B70dea3;
case 0x70dea6:c.instructions+=4;goto B70dea6;
case 0x70dead:c.instructions+=3;goto B70dead;
case 0x70deb0:c.instructions+=2;goto B70deb0;
case 0x70deb6:c.instructions+=1;goto B70deb6;
case 0x70deb7:goto L70deb7;
case 0x70deb9:c.instructions+=5;goto B70deb9;
case 0x70debf:c.instructions+=4;goto B70debf;
case 0x70dec1:c.instructions+=3;goto B70dec1;
case 0x70dec5:c.instructions+=2;goto B70dec5;
case 0x70decc:c.instructions+=1;goto B70decc;
case 0x70dece:goto L70dece;
case 0x70ded4:c.instructions+=3;goto B70ded4;
case 0x70ded7:c.instructions+=2;goto B70ded7;
case 0x70ded9:c.instructions+=1;goto B70ded9;
case 0x70dedb:goto L70dedb;
case 0x70dede:c.instructions+=3;goto B70dede;
case 0x70dee1:c.instructions+=2;goto B70dee1;
case 0x70dee5:c.instructions+=1;goto B70dee5;
case 0x70dee7:goto L70dee7;
case 0x70dee9:goto L70dee9;
case 0x70deec:c.instructions+=1;goto B70deec;
case 0x70def3:goto L70def3;
case 0x70def6:c.instructions+=5;goto B70def6;
case 0x70def9:c.instructions+=4;goto B70def9;
case 0x70defa:c.instructions+=3;goto B70defa;
case 0x70defd:c.instructions+=2;goto B70defd;
case 0x70df00:c.instructions+=1;goto B70df00;
case 0x70df02:goto L70df02;
case 0x70df09:goto L70df09;
case 0x70df0b:c.instructions+=5;goto B70df0b;
case 0x70df11:c.instructions+=4;goto B70df11;
case 0x70df13:c.instructions+=3;goto B70df13;
case 0x70df17:c.instructions+=2;goto B70df17;
case 0x70df1e:c.instructions+=1;goto B70df1e;
case 0x70df20:goto L70df20;
case 0x70df26:c.instructions+=3;goto B70df26;
case 0x70df29:c.instructions+=2;goto B70df29;
case 0x70df2c:c.instructions+=1;goto B70df2c;
case 0x70df2e:goto L70df2e;
case 0x70df30:c.instructions+=1;goto B70df30;
case 0x70df32:goto L70df32;
case 0x70df35:c.instructions+=3;goto B70df35;
case 0x70df38:c.instructions+=2;goto B70df38;
case 0x70df3c:c.instructions+=1;goto B70df3c;
case 0x70df3e:goto L70df3e;
case 0x70df41:goto L70df41;
case 0x70df45:c.instructions+=2;goto B70df45;
case 0x70df46:c.instructions+=1;goto B70df46;
case 0x70df48:goto L70df48;
case 0x70df4b:c.instructions+=8;goto B70df4b;
case 0x70df4e:c.instructions+=7;goto B70df4e;
case 0x70df50:c.instructions+=6;goto B70df50;
case 0x70df53:c.instructions+=5;goto B70df53;
case 0x70df56:c.instructions+=4;goto B70df56;
case 0x70df59:c.instructions+=3;goto B70df59;
case 0x70df5c:c.instructions+=2;goto B70df5c;
case 0x70df5f:c.instructions+=1;goto B70df5f;
case 0x70df61:goto L70df61;
case 0x70df65:c.instructions+=2;goto B70df65;
case 0x70df67:c.instructions+=1;goto B70df67;
case 0x70df69:goto L70df69;
case 0x70df6c:c.instructions+=4;goto B70df6c;
case 0x70df6f:c.instructions+=3;goto B70df6f;
case 0x70df72:c.instructions+=2;goto B70df72;
case 0x70df75:c.instructions+=1;goto B70df75;
case 0x70df78:goto L70df78;
case 0x70df79:c.instructions+=3;goto B70df79;
case 0x70df7a:c.instructions+=2;goto B70df7a;
case 0x70df7b:c.instructions+=1;goto B70df7b;
case 0x70df7c:goto L70df7c;
case 0x70df7d:c.instructions+=12;goto B70df7d;
case 0x70df7f:c.instructions+=11;goto B70df7f;
case 0x70df82:c.instructions+=10;goto B70df82;
case 0x70df83:c.instructions+=9;goto B70df83;
case 0x70df84:c.instructions+=8;goto B70df84;
case 0x70df85:c.instructions+=7;goto B70df85;
case 0x70df88:c.instructions+=6;goto B70df88;
case 0x70df8b:c.instructions+=5;goto B70df8b;
case 0x70df93:c.instructions+=4;goto B70df93;
case 0x70df99:c.instructions+=3;goto B70df99;
case 0x70df9f:c.instructions+=2;goto B70df9f;
case 0x70dfa2:c.instructions+=1;goto B70dfa2;
case 0x70dfa4:goto L70dfa4;
case 0x70dfaa:c.instructions+=1;goto B70dfaa;
case 0x70dfad:goto L70dfad;
case 0x70dfb4:c.instructions+=1;goto B70dfb4;
case 0x70dfb6:goto L70dfb6;
case 0x70dfbd:c.instructions+=1;goto B70dfbd;
case 0x70dfbf:goto L70dfbf;
case 0x70dfc2:c.instructions+=10;goto B70dfc2;
case 0x70dfc6:c.instructions+=9;goto B70dfc6;
case 0x70dfcb:c.instructions+=8;goto B70dfcb;
case 0x70dfcc:c.instructions+=7;goto B70dfcc;
case 0x70dfcf:c.instructions+=6;goto B70dfcf;
case 0x70dfd0:c.instructions+=5;goto B70dfd0;
case 0x70dfd3:c.instructions+=4;goto B70dfd3;
case 0x70dfd5:c.instructions+=3;goto B70dfd5;
case 0x70dfd6:c.instructions+=2;goto B70dfd6;
case 0x70dfd7:c.instructions+=1;goto B70dfd7;
case 0x70dfdc:goto L70dfdc;
case 0x70dfdf:c.instructions+=10;goto B70dfdf;
case 0x70dfe2:c.instructions+=9;goto B70dfe2;
case 0x70dfe7:c.instructions+=8;goto B70dfe7;
case 0x70dfed:c.instructions+=7;goto B70dfed;
case 0x70dff3:c.instructions+=6;goto B70dff3;
case 0x70dff6:c.instructions+=5;goto B70dff6;
case 0x70dff8:c.instructions+=4;goto B70dff8;
case 0x70dff9:c.instructions+=3;goto B70dff9;
case 0x70dffc:c.instructions+=2;goto B70dffc;
case 0x70dfff:c.instructions+=1;goto B70dfff;
default:missing_instruction(c.pc);}
B70d01a:L70d01a:{c.instructions+=10;NFSU2_TR(0x70d01a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d01b:{NFSU2_TR(0x70d01b);
__builtin_memmove((R+20),(R+16),4);
}
B70d01d:{NFSU2_TR(0x70d01d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B70d020:{NFSU2_TR(0x70d020);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B70d023:{NFSU2_TR(0x70d023);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d024:{NFSU2_TR(0x70d024);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70d027:{NFSU2_TR(0x70d027);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d028:{NFSU2_TR(0x70d028);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70d02b:{NFSU2_TR(0x70d02b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d02c:{NFSU2_TR(0x70d02c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d031ull));
TAIL_STATIC(0x70cf98u,70c);
}
B70d031:L70d031:{c.instructions+=3;NFSU2_TR(0x70d031);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70d034:{NFSU2_TR(0x70d034);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70d038:{NFSU2_TR(0x70d038);
if(r1(R+518)){{goto L70d11d;}}
}
B70d03e:L70d03e:{c.instructions+=3;NFSU2_TR(0x70d03e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70d040:{NFSU2_TR(0x70d040);
w4(R+8,u32(0x71faa0ull));
}
B70d045:{NFSU2_TR(0x70d045);
w4(R+4,u32(0x100ull));
}
B70d04a:L70d04a:{c.instructions+=2;NFSU2_TR(0x70d04a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70d04d:{NFSU2_TR(0x70d04d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L70d057;}}
}
B70d04f:L70d04f:{c.instructions+=2;NFSU2_TR(0x70d04f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9c80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d055:{NFSU2_TR(0x70d055);
{goto L70d072;}
}
B70d057:L70d057:{c.instructions+=2;NFSU2_TR(0x70d057);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x28ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70d05a:{NFSU2_TR(0x70d05a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L70d068;}}
}
B70d05c:L70d05c:{c.instructions+=2;NFSU2_TR(0x70d05c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9c80ull))));
w4(U+4,u32(0x71f69full));
s4(u32(r4(U+0)),r4(U+4));
}
B70d066:{NFSU2_TR(0x70d066);
{goto L70d072;}
}
B70d068:L70d068:{c.instructions+=1;NFSU2_TR(0x70d068);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9c80ull))));
w4(U+4,u32(0x71f1a6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d072:L70d072:{c.instructions+=3;NFSU2_TR(0x70d072);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70d075:{NFSU2_TR(0x70d075);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70d077:{NFSU2_TR(0x70d077);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d04au);}goto L70d04a;}}
}
B70d079:L70d079:{c.instructions+=1;NFSU2_TR(0x70d079);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70d07b:L70d07b:{c.instructions+=2;NFSU2_TR(0x70d07b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70d07e:{NFSU2_TR(0x70d07e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L70d088;}}
}
B70d080:L70d080:{c.instructions+=2;NFSU2_TR(0x70d080);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9da0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d086:{NFSU2_TR(0x70d086);
{goto L70d0a3;}
}
B70d088:L70d088:{c.instructions+=2;NFSU2_TR(0x70d088);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x28ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70d08b:{NFSU2_TR(0x70d08b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L70d099;}}
}
B70d08d:L70d08d:{c.instructions+=2;NFSU2_TR(0x70d08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9da0ull))));
w4(U+4,u32(0x71bb15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d097:{NFSU2_TR(0x70d097);
{goto L70d0a3;}
}
B70d099:L70d099:{c.instructions+=1;NFSU2_TR(0x70d099);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9da0ull))));
w4(U+4,u32(0x71b1cfull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d0a3:L70d0a3:{c.instructions+=3;NFSU2_TR(0x70d0a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70d0a6:{NFSU2_TR(0x70d0a6);
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
B70d0a8:{NFSU2_TR(0x70d0a8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d07bu);}goto L70d07b;}}
}
B70d0aa:L70d0aa:{c.instructions+=12;NFSU2_TR(0x70d0aa);
s4(0x8b9eac,u32(0x71f0c4ull));
}
B70d0b4:{NFSU2_TR(0x70d0b4);
s4(0x8b9ea4,u32(0x71f102ull));
}
B70d0be:{NFSU2_TR(0x70d0be);
s4(0x8b9c70,u32(0x71f147ull));
}
B70d0c8:{NFSU2_TR(0x70d0c8);
s4(0x8b9c60,u32(0x71d0f5ull));
}
B70d0d2:{NFSU2_TR(0x70d0d2);
s4(0x8b9c64,u32(0x71d189ull));
}
B70d0dc:{NFSU2_TR(0x70d0dc);
s4(0x8b9c68,u32(0x71d1ddull));
}
B70d0e6:{NFSU2_TR(0x70d0e6);
s4(0x8b9ea8,u32(0x71d254ull));
}
B70d0f0:{NFSU2_TR(0x70d0f0);
s4(0x8b9c74,u32(0x71d212ull));
}
B70d0fa:{NFSU2_TR(0x70d0fa);
s4(0x8b9c5c,u32(0x71d0f8ull));
}
B70d104:{NFSU2_TR(0x70d104);
s4(0x8b9c54,u32(0x71ee1aull));
}
B70d10e:{NFSU2_TR(0x70d10e);
s4(0x8b9c6c,u32(0x71ef10ull));
}
B70d118:{NFSU2_TR(0x70d118);
{goto L70d2d3;}
}
B70d11d:L70d11d:{c.instructions+=2;NFSU2_TR(0x70d11d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70d121:{NFSU2_TR(0x70d121);
if(r1(R+518)){{goto L70d206;}}
}
B70d127:L70d127:{c.instructions+=3;NFSU2_TR(0x70d127);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70d129:{NFSU2_TR(0x70d129);
w4(R+4,u32(0x100ull));
}
B70d12e:{NFSU2_TR(0x70d12e);
w4(R+8,u32(0x71c1d1ull));
}
B70d133:L70d133:{c.instructions+=2;NFSU2_TR(0x70d133);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70d136:{NFSU2_TR(0x70d136);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L70d140;}}
}
B70d138:L70d138:{c.instructions+=2;NFSU2_TR(0x70d138);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9da0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d13e:{NFSU2_TR(0x70d13e);
{goto L70d15b;}
}
B70d140:L70d140:{c.instructions+=2;NFSU2_TR(0x70d140);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x28ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70d143:{NFSU2_TR(0x70d143);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L70d151;}}
}
B70d145:L70d145:{c.instructions+=2;NFSU2_TR(0x70d145);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9da0ull))));
w4(U+4,u32(0x71bb15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d14f:{NFSU2_TR(0x70d14f);
{goto L70d15b;}
}
B70d151:L70d151:{c.instructions+=1;NFSU2_TR(0x70d151);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9da0ull))));
w4(U+4,u32(0x71b1cfull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d15b:L70d15b:{c.instructions+=3;NFSU2_TR(0x70d15b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70d15e:{NFSU2_TR(0x70d15e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70d160:{NFSU2_TR(0x70d160);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d133u);}goto L70d133;}}
}
B70d162:L70d162:{c.instructions+=1;NFSU2_TR(0x70d162);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70d164:L70d164:{c.instructions+=2;NFSU2_TR(0x70d164);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70d167:{NFSU2_TR(0x70d167);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L70d171;}}
}
B70d169:L70d169:{c.instructions+=2;NFSU2_TR(0x70d169);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9c80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d16f:{NFSU2_TR(0x70d16f);
{goto L70d18c;}
}
B70d171:L70d171:{c.instructions+=2;NFSU2_TR(0x70d171);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x28ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70d174:{NFSU2_TR(0x70d174);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L70d182;}}
}
B70d176:L70d176:{c.instructions+=2;NFSU2_TR(0x70d176);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9c80ull))));
w4(U+4,u32(0x71c917ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d180:{NFSU2_TR(0x70d180);
{goto L70d18c;}
}
B70d182:L70d182:{c.instructions+=1;NFSU2_TR(0x70d182);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b9c80ull))));
w4(U+4,u32(0x71c226ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d18c:L70d18c:{c.instructions+=3;NFSU2_TR(0x70d18c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70d18f:{NFSU2_TR(0x70d18f);
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
B70d191:{NFSU2_TR(0x70d191);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d164u);}goto L70d164;}}
}
B70d193:L70d193:{c.instructions+=12;NFSU2_TR(0x70d193);
s4(0x8b9eac,u32(0x71e8f7ull));
}
B70d19d:{NFSU2_TR(0x70d19d);
s4(0x8b9ea4,u32(0x71e92eull));
}
B70d1a7:{NFSU2_TR(0x70d1a7);
s4(0x8b9c70,u32(0x71e979ull));
}
B70d1b1:{NFSU2_TR(0x70d1b1);
s4(0x8b9c60,u32(0x71d0f5ull));
}
B70d1bb:{NFSU2_TR(0x70d1bb);
s4(0x8b9c64,u32(0x71d189ull));
}
B70d1c5:{NFSU2_TR(0x70d1c5);
s4(0x8b9c68,u32(0x71d1ddull));
}
B70d1cf:{NFSU2_TR(0x70d1cf);
s4(0x8b9ea8,u32(0x71d254ull));
}
B70d1d9:{NFSU2_TR(0x70d1d9);
s4(0x8b9c74,u32(0x71d212ull));
}
B70d1e3:{NFSU2_TR(0x70d1e3);
s4(0x8b9c5c,u32(0x71d0f8ull));
}
B70d1ed:{NFSU2_TR(0x70d1ed);
s4(0x8b9c54,u32(0x71e598ull));
}
B70d1f7:{NFSU2_TR(0x70d1f7);
s4(0x8b9c6c,u32(0x71e68cull));
}
B70d201:{NFSU2_TR(0x70d201);
{goto L70d2d3;}
}
B70d206:L70d206:{c.instructions+=5;NFSU2_TR(0x70d206);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d207:{NFSU2_TR(0x70d207);
w4(R+0,u32(0x8b9da0ull));
}
B70d20c:{NFSU2_TR(0x70d20c);
w4(R+24,u32(0x71e136ull));
}
B70d211:{NFSU2_TR(0x70d211);
w4(R+8,u32(0x71de7cull));
}
B70d216:{NFSU2_TR(0x70d216);
w4(R+4,u32(0x71da07ull));
}
B70d21b:L70d21b:{c.instructions+=2;NFSU2_TR(0x70d21b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b9da4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b9da4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70d220:{NFSU2_TR(0x70d220);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70d226;}}
}
B70d222:L70d222:{c.instructions+=2;NFSU2_TR(0x70d222);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70d224:{NFSU2_TR(0x70d224);
{goto L70d233;}
}
B70d226:L70d226:{c.instructions+=2;NFSU2_TR(0x70d226);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b9dc8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b9dc8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70d22b:{NFSU2_TR(0x70d22b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70d231;}}
}
B70d22d:L70d22d:{c.instructions+=2;NFSU2_TR(0x70d22d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70d22f:{NFSU2_TR(0x70d22f);
{goto L70d233;}
}
B70d231:L70d231:{c.instructions+=1;NFSU2_TR(0x70d231);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70d233:L70d233:{c.instructions+=3;NFSU2_TR(0x70d233);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70d236:{NFSU2_TR(0x70d236);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b9ea0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b9ea0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70d23b:{NFSU2_TR(0x70d23b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d21bu);}goto L70d21b;}}
}
B70d23d:L70d23d:{c.instructions+=1;NFSU2_TR(0x70d23d);
w4(R+0,u32(0x8b9c80ull));
}
B70d242:L70d242:{c.instructions+=2;NFSU2_TR(0x70d242);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b9c84ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b9c84ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70d247:{NFSU2_TR(0x70d247);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70d24d;}}
}
B70d249:L70d249:{c.instructions+=2;NFSU2_TR(0x70d249);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70d24b:{NFSU2_TR(0x70d24b);
{goto L70d25a;}
}
B70d24d:L70d24d:{c.instructions+=2;NFSU2_TR(0x70d24d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b9ca8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b9ca8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70d252:{NFSU2_TR(0x70d252);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70d258;}}
}
B70d254:L70d254:{c.instructions+=2;NFSU2_TR(0x70d254);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70d256:{NFSU2_TR(0x70d256);
{goto L70d25a;}
}
B70d258:L70d258:{c.instructions+=1;NFSU2_TR(0x70d258);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70d25a:L70d25a:{c.instructions+=3;NFSU2_TR(0x70d25a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70d25d:{NFSU2_TR(0x70d25d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8b9d80ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b9d80ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8b9d80ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70d262:{NFSU2_TR(0x70d262);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d242u);}goto L70d242;}}
}
B70d264:L70d264:{c.instructions+=12;NFSU2_TR(0x70d264);
s4(0x8b9c60,u32(0x703e63ull));
}
B70d26e:{NFSU2_TR(0x70d26e);
s4(0x8b9eac,u32(0x71d39eull));
}
B70d278:{NFSU2_TR(0x70d278);
s4(0x8b9ea4,u32(0x71d42aull));
}
B70d282:{NFSU2_TR(0x70d282);
s4(0x8b9c70,u32(0x71d4c6ull));
}
B70d28c:{NFSU2_TR(0x70d28c);
s4(0x8b9c64,u32(0x703e64ull));
}
B70d296:{NFSU2_TR(0x70d296);
s4(0x8b9c68,u32(0x703f08ull));
}
B70d2a0:{NFSU2_TR(0x70d2a0);
s4(0x8b9ea8,u32(0x71d5acull));
}
B70d2aa:{NFSU2_TR(0x70d2aa);
s4(0x8b9c74,u32(0x703f67ull));
}
B70d2b4:{NFSU2_TR(0x70d2b4);
s4(0x8b9c5c,u32(0x703fe5ull));
}
B70d2be:{NFSU2_TR(0x70d2be);
s4(0x8b9c54,u32(0x7045d5ull));
}
B70d2c8:{NFSU2_TR(0x70d2c8);
s4(0x8b9c6c,u32(0x7043d2ull));
}
B70d2d2:{NFSU2_TR(0x70d2d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70d2d3:L70d2d3:{c.instructions+=3;NFSU2_TR(0x70d2d3);
s4(0x8b9c58,u32(0x71d160ull));
}
B70d2dd:{NFSU2_TR(0x70d2dd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70d2de:{NFSU2_TR(0x70d2de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70d2df:L70d2df:{c.instructions+=5;NFSU2_TR(0x70d2df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d2e0:{NFSU2_TR(0x70d2e0);
__builtin_memmove((R+20),(R+16),4);
}
B70d2e2:{NFSU2_TR(0x70d2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70d2e5:{NFSU2_TR(0x70d2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
w4(U+4,u32(0x817348ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d2ef:{NFSU2_TR(0x70d2ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70d2f1:L70d2f1:{c.instructions+=6;NFSU2_TR(0x70d2f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817248ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70d2f8:{NFSU2_TR(0x70d2f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817348ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70d2ff:{NFSU2_TR(0x70d2ff);
u8 U[13];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B70d306:{NFSU2_TR(0x70d306);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70d307:{NFSU2_TR(0x70d307);
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
B70d30a:{NFSU2_TR(0x70d30a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d2f1u);}goto L70d2f1;}}
}
B70d30c:L70d30c:{c.instructions+=2;NFSU2_TR(0x70d30c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70d30d:{NFSU2_TR(0x70d30d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70d30e:L70d30e:{c.instructions+=5;NFSU2_TR(0x70d30e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d30f:{NFSU2_TR(0x70d30f);
__builtin_memmove((R+20),(R+16),4);
}
B70d311:{NFSU2_TR(0x70d311);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70d314:{NFSU2_TR(0x70d314);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
w4(U+4,u32(0x817448ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d31e:{NFSU2_TR(0x70d31e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70d320:L70d320:{c.instructions+=6;NFSU2_TR(0x70d320);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817248ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70d327:{NFSU2_TR(0x70d327);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x817448ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70d32e:{NFSU2_TR(0x70d32e);
u8 U[13];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B70d335:{NFSU2_TR(0x70d335);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70d336:{NFSU2_TR(0x70d336);
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
B70d339:{NFSU2_TR(0x70d339);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d320u);}goto L70d320;}}
}
B70d33b:L70d33b:{c.instructions+=2;NFSU2_TR(0x70d33b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70d33c:{NFSU2_TR(0x70d33c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70d5f7:L70d5f7:{c.instructions+=17;NFSU2_TR(0x70d5f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d5f8:{NFSU2_TR(0x70d5f8);
__builtin_memmove((R+20),(R+16),4);
}
B70d5fa:{NFSU2_TR(0x70d5fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x12cull))));
}
B70d600:{NFSU2_TR(0x70d600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70d603:{NFSU2_TR(0x70d603);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d609:{NFSU2_TR(0x70d609);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d60a:{NFSU2_TR(0x70d60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x25cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70d610:{NFSU2_TR(0x70d610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d611:{NFSU2_TR(0x70d611);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d612:{NFSU2_TR(0x70d612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B70d615:{NFSU2_TR(0x70d615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d618:{NFSU2_TR(0x70d618);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d61a:{NFSU2_TR(0x70d61a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70d61b:{NFSU2_TR(0x70d61b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70d61d:{NFSU2_TR(0x70d61d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B70d61f:{NFSU2_TR(0x70d61f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70d625:{NFSU2_TR(0x70d625);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed5ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70d62b:L70d62b:{c.instructions+=1;NFSU2_TR(0x70d62b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L70d62d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d62bu);}goto L70d62b;}
}
B70d62d:L70d62d:{c.instructions+=11;NFSU2_TR(0x70d62d);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B70d62f:{NFSU2_TR(0x70d62f);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B70d630:{NFSU2_TR(0x70d630);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70d633:{NFSU2_TR(0x70d633);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d634:{NFSU2_TR(0x70d634);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d637:{NFSU2_TR(0x70d637);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70d63d:{NFSU2_TR(0x70d63d);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d642:{NFSU2_TR(0x70d642);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d643:{NFSU2_TR(0x70d643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d646:{NFSU2_TR(0x70d646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d649:{NFSU2_TR(0x70d649);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d64eull));
TAIL_STATIC(0x75e02bu,75e);
}
B70d64e:L70d64e:{c.instructions+=5;NFSU2_TR(0x70d64e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70d654:{NFSU2_TR(0x70d654);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70d657:{NFSU2_TR(0x70d657);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d65a:{NFSU2_TR(0x70d65a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d65d:{NFSU2_TR(0x70d65d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70d660:L70d660:{c.instructions+=4;NFSU2_TR(0x70d660);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B70d662:{NFSU2_TR(0x70d662);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70d663:{NFSU2_TR(0x70d663);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B70d665:{NFSU2_TR(0x70d665);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d660u);}goto L70d660;}}
}
B70d667:L70d667:{c.instructions+=6;NFSU2_TR(0x70d667);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70d669:{NFSU2_TR(0x70d669);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B70d66c:{NFSU2_TR(0x70d66c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d66d:{NFSU2_TR(0x70d66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d670:{NFSU2_TR(0x70d670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d677:{NFSU2_TR(0x70d677);
u8 U[4];
__builtin_memmove((U+0),gp(0x783038),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d67dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d67d:L70d67d:{c.instructions+=4;NFSU2_TR(0x70d67d);
__builtin_memmove((R+24),gp(0x78305c),4);
}
B70d683:{NFSU2_TR(0x70d683);
__builtin_memmove((R+28),(R+0),4);
}
B70d685:{NFSU2_TR(0x70d685);
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
B70d687:{NFSU2_TR(0x70d687);
if(r1(R+518)){{goto L70d7d5;}}
}
B70d68d:L70d68d:{c.instructions+=6;NFSU2_TR(0x70d68d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d68e:{NFSU2_TR(0x70d68e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d690:{NFSU2_TR(0x70d690);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d692:{NFSU2_TR(0x70d692);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d695:{NFSU2_TR(0x70d695);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d698:{NFSU2_TR(0x70d698);
u8 U[4];
__builtin_memmove((U+0),gp(0x783040),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d69eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d69e:L70d69e:{c.instructions+=3;NFSU2_TR(0x70d69e);
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
B70d6a0:{NFSU2_TR(0x70d6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d6a3:{NFSU2_TR(0x70d6a3);
if(r1(R+518)){{goto L70d7d5;}}
}
B70d6a9:L70d6a9:{c.instructions+=3;NFSU2_TR(0x70d6a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6aa:{NFSU2_TR(0x70d6aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6ab:{NFSU2_TR(0x70d6ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d6adull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d6ad:L70d6ad:{c.instructions+=3;NFSU2_TR(0x70d6ad);
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
B70d6af:{NFSU2_TR(0x70d6af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d6b2:{NFSU2_TR(0x70d6b2);
if(r1(R+518)){{goto L70d7cc;}}
}
B70d6b8:L70d6b8:{c.instructions+=15;NFSU2_TR(0x70d6b8);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6bd:{NFSU2_TR(0x70d6bd);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6bf:{NFSU2_TR(0x70d6bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6c0:{NFSU2_TR(0x70d6c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6c1:{NFSU2_TR(0x70d6c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6c2:{NFSU2_TR(0x70d6c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6c3:{NFSU2_TR(0x70d6c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6c4:{NFSU2_TR(0x70d6c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6c5:{NFSU2_TR(0x70d6c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6c6:{NFSU2_TR(0x70d6c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6c7:{NFSU2_TR(0x70d6c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6c8:{NFSU2_TR(0x70d6c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6c9:{NFSU2_TR(0x70d6c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6ca:{NFSU2_TR(0x70d6ca);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6cc:{NFSU2_TR(0x70d6cc);
u8 U[4];
__builtin_memmove((U+0),gp(0x78303c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d6d2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d6d2:L70d6d2:{c.instructions+=3;NFSU2_TR(0x70d6d2);
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
B70d6d4:{NFSU2_TR(0x70d6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d6d7:{NFSU2_TR(0x70d6d7);
if(r1(R+518)){{goto L70d7c6;}}
}
B70d6dd:L70d6dd:{c.instructions+=3;NFSU2_TR(0x70d6dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d6e0:{NFSU2_TR(0x70d6e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6e1:{NFSU2_TR(0x70d6e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d6e3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d6e3:L70d6e3:{c.instructions+=3;NFSU2_TR(0x70d6e3);
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
B70d6e5:{NFSU2_TR(0x70d6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d6e8:{NFSU2_TR(0x70d6e8);
if(r1(R+518)){{goto L70d7c6;}}
}
B70d6ee:L70d6ee:{c.instructions+=3;NFSU2_TR(0x70d6ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d6f1:{NFSU2_TR(0x70d6f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6f2:{NFSU2_TR(0x70d6f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d6f4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d6f4:L70d6f4:{c.instructions+=3;NFSU2_TR(0x70d6f4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6f6:{NFSU2_TR(0x70d6f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6f7:{NFSU2_TR(0x70d6f7);
u8 U[4];
__builtin_memmove((U+0),gp(0x783034),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d6fdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d6fd:L70d6fd:{c.instructions+=3;NFSU2_TR(0x70d6fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6fe:{NFSU2_TR(0x70d6fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d6ff:{NFSU2_TR(0x70d6ff);
u8 U[4];
__builtin_memmove((U+0),gp(0x783050),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d705ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d705:L70d705:{c.instructions+=3;NFSU2_TR(0x70d705);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d707:{NFSU2_TR(0x70d707);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d708:{NFSU2_TR(0x70d708);
u8 U[4];
__builtin_memmove((U+0),gp(0x783044),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d70eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d70e:L70d70e:{c.instructions+=10;NFSU2_TR(0x70d70e);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d710:{NFSU2_TR(0x70d710);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d713:{NFSU2_TR(0x70d713);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d716:{NFSU2_TR(0x70d716);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d717:{NFSU2_TR(0x70d717);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d71a:{NFSU2_TR(0x70d71a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d71d:{NFSU2_TR(0x70d71d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d720:{NFSU2_TR(0x70d720);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d723:{NFSU2_TR(0x70d723);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d724:{NFSU2_TR(0x70d724);
u8 U[4];
__builtin_memmove((U+0),gp(0x783060),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d72aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d72a:L70d72a:{c.instructions+=2;NFSU2_TR(0x70d72a);
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
B70d72c:{NFSU2_TR(0x70d72c);
if(r1(R+518)){{goto L70d7c6;}}
}
B70d732:L70d732:{c.instructions+=2;NFSU2_TR(0x70d732);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70d738:{NFSU2_TR(0x70d738);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70d73b:L70d73b:{c.instructions+=4;NFSU2_TR(0x70d73b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B70d73d:{NFSU2_TR(0x70d73d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70d73e:{NFSU2_TR(0x70d73e);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B70d740:{NFSU2_TR(0x70d740);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d73bu);}goto L70d73b;}}
}
B70d742:L70d742:{c.instructions+=12;NFSU2_TR(0x70d742);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d743:{NFSU2_TR(0x70d743);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70d745:{NFSU2_TR(0x70d745);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d746:{NFSU2_TR(0x70d746);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70d74c:{NFSU2_TR(0x70d74c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d74d:{NFSU2_TR(0x70d74d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70d750:{NFSU2_TR(0x70d750);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d751:{NFSU2_TR(0x70d751);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d753:{NFSU2_TR(0x70d753);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d754:{NFSU2_TR(0x70d754);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d755:{NFSU2_TR(0x70d755);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d756:{NFSU2_TR(0x70d756);
u8 U[4];
__builtin_memmove((U+0),gp(0x78304c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d75cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d75c:L70d75c:{c.instructions+=2;NFSU2_TR(0x70d75c);
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
B70d75e:{NFSU2_TR(0x70d75e);
if(r1(R+518)){{goto L70d7c6;}}
}
B70d760:L70d760:{c.instructions+=5;NFSU2_TR(0x70d760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70d763:{NFSU2_TR(0x70d763);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d766:{NFSU2_TR(0x70d766);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70d768:{NFSU2_TR(0x70d768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d76b:{NFSU2_TR(0x70d76b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70d7b1;}}
}
B70d76d:L70d76d:{c.instructions+=4;NFSU2_TR(0x70d76d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70d770:{NFSU2_TR(0x70d770);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70d773:{NFSU2_TR(0x70d773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d776:{NFSU2_TR(0x70d776);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70d7a3;}}
}
B70d778:L70d778:{c.instructions+=6;NFSU2_TR(0x70d778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B70d77b:{NFSU2_TR(0x70d77b);
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
B70d77c:{NFSU2_TR(0x70d77c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d77d:{NFSU2_TR(0x70d77d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d780:{NFSU2_TR(0x70d780);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d781:{NFSU2_TR(0x70d781);
u8 U[4];
__builtin_memmove((U+0),gp(0x783054),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d787ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d787:L70d787:{c.instructions+=2;NFSU2_TR(0x70d787);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70d789:{NFSU2_TR(0x70d789);
if(r1(R+518)){{goto L70d795;}}
}
B70d78b:L70d78b:{c.instructions+=3;NFSU2_TR(0x70d78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d78e:{NFSU2_TR(0x70d78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70d791:{NFSU2_TR(0x70d791);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w1(U+8,u8(0xffull));
s1(u32(r4(U+4)),r1(U+8));
}
B70d795:L70d795:{c.instructions+=5;NFSU2_TR(0x70d795);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70d798:{NFSU2_TR(0x70d798);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d79b:{NFSU2_TR(0x70d79b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70d79e:{NFSU2_TR(0x70d79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d7a1:{NFSU2_TR(0x70d7a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d778u);}goto L70d778;}}
}
B70d7a3:L70d7a3:{c.instructions+=5;NFSU2_TR(0x70d7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70d7a6:{NFSU2_TR(0x70d7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70d7a9:{NFSU2_TR(0x70d7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70d7ac:{NFSU2_TR(0x70d7ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70d7af:{NFSU2_TR(0x70d7af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d76du);}goto L70d76d;}}
}
B70d7b1:L70d7b1:{c.instructions+=2;NFSU2_TR(0x70d7b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70d7b7:{NFSU2_TR(0x70d7b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70d7ba:L70d7ba:{c.instructions+=4;NFSU2_TR(0x70d7ba);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B70d7bc:{NFSU2_TR(0x70d7bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70d7bd:{NFSU2_TR(0x70d7bd);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B70d7bf:{NFSU2_TR(0x70d7bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d7bau);}goto L70d7ba;}}
}
B70d7c1:L70d7c1:{c.instructions+=2;NFSU2_TR(0x70d7c1);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70d7c3:{NFSU2_TR(0x70d7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d7c6:L70d7c6:{c.instructions+=3;NFSU2_TR(0x70d7c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d7c9:{NFSU2_TR(0x70d7c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d7ca:{NFSU2_TR(0x70d7ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d7ccull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d7cc:L70d7cc:{c.instructions+=2;NFSU2_TR(0x70d7cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d7cf:{NFSU2_TR(0x70d7cf);
u8 U[4];
__builtin_memmove((U+0),gp(0x783058),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d7d5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d7d5:L70d7d5:{c.instructions+=2;NFSU2_TR(0x70d7d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70d7d8:{NFSU2_TR(0x70d7d8);
if(r1(R+518)){{goto L70d7ee;}}
}
B70d7da:L70d7da:{c.instructions+=2;NFSU2_TR(0x70d7da);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70d7dd:{NFSU2_TR(0x70d7dd);
if(r1(R+518)){{goto L70d7e5;}}
}
B70d7df:L70d7df:{c.instructions+=3;NFSU2_TR(0x70d7df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d7e2:{NFSU2_TR(0x70d7e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d7e3:{NFSU2_TR(0x70d7e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d7e5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d7e5:L70d7e5:{c.instructions+=2;NFSU2_TR(0x70d7e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70d7e8:{NFSU2_TR(0x70d7e8);
u8 U[4];
__builtin_memmove((U+0),gp(0x783058),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d7eeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d7ee:L70d7ee:{c.instructions+=2;NFSU2_TR(0x70d7ee);
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
B70d7f0:{NFSU2_TR(0x70d7f0);
if(r1(R+518)){{goto L70d7f9;}}
}
B70d7f2:L70d7f2:{c.instructions+=2;NFSU2_TR(0x70d7f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d7f3:{NFSU2_TR(0x70d7f3);
u8 U[4];
__builtin_memmove((U+0),gp(0x783048),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70d7f9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70d7f9:L70d7f9:{c.instructions+=6;NFSU2_TR(0x70d7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d7fc:{NFSU2_TR(0x70d7fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70d7fd:{NFSU2_TR(0x70d7fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70d7fe:{NFSU2_TR(0x70d7fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70d7ff:{NFSU2_TR(0x70d7ff);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70d800:{NFSU2_TR(0x70d800);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70d801:L70d801:{c.instructions+=21;NFSU2_TR(0x70d801);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d802:{NFSU2_TR(0x70d802);
__builtin_memmove((R+20),(R+16),4);
}
B70d804:{NFSU2_TR(0x70d804);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d805:{NFSU2_TR(0x70d805);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70d808:{NFSU2_TR(0x70d808);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70d80c:{NFSU2_TR(0x70d80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d80f:{NFSU2_TR(0x70d80f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d810:{NFSU2_TR(0x70d810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d811:{NFSU2_TR(0x70d811);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70d814:{NFSU2_TR(0x70d814);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B70d817:{NFSU2_TR(0x70d817);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B70d81b:{NFSU2_TR(0x70d81b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B70d81e:{NFSU2_TR(0x70d81e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70d81f:{NFSU2_TR(0x70d81f);
__builtin_memmove((R+12),(R+8),4);
}
B70d821:{NFSU2_TR(0x70d821);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d822:{NFSU2_TR(0x70d822);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70d825:{NFSU2_TR(0x70d825);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B70d828:{NFSU2_TR(0x70d828);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B70d82a:{NFSU2_TR(0x70d82a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d82d:{NFSU2_TR(0x70d82d);
__builtin_memmove((R+0),(R+8),4);
}
B70d82f:{NFSU2_TR(0x70d82f);
if(r1(R+512)){{goto L70d83e;}}
}
B70d831:L70d831:{c.instructions+=4;NFSU2_TR(0x70d831);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B70d833:{NFSU2_TR(0x70d833);
__builtin_memmove((R+0),(R+24),4);
}
B70d835:{NFSU2_TR(0x70d835);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B70d837:{NFSU2_TR(0x70d837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d83e:L70d83e:{c.instructions+=2;NFSU2_TR(0x70d83e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70d843:{NFSU2_TR(0x70d843);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L70d86c;}}
}
B70d845:L70d845:{c.instructions+=1;NFSU2_TR(0x70d845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70d848:L70d848:{c.instructions+=4;NFSU2_TR(0x70d848);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B70d84a:{NFSU2_TR(0x70d84a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+28))));
}
B70d84c:{NFSU2_TR(0x70d84c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B70d84d:{NFSU2_TR(0x70d84d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70d862;}}
}
B70d84f:L70d84f:{c.instructions+=8;NFSU2_TR(0x70d84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70d852:{NFSU2_TR(0x70d852);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70d855:{NFSU2_TR(0x70d855);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B70d859:{NFSU2_TR(0x70d859);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+12))));
}
B70d85b:{NFSU2_TR(0x70d85b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d85d:{NFSU2_TR(0x70d85d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70d85e:{NFSU2_TR(0x70d85e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70d85f:{NFSU2_TR(0x70d85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d862:L70d862:{c.instructions+=2;NFSU2_TR(0x70d862);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70d867:{NFSU2_TR(0x70d867);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d848u);}goto L70d848;}}
}
B70d869:L70d869:{c.instructions+=1;NFSU2_TR(0x70d869);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d86c:L70d86c:{c.instructions+=8;NFSU2_TR(0x70d86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d86f:{NFSU2_TR(0x70d86f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70d870:{NFSU2_TR(0x70d870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70d871:{NFSU2_TR(0x70d871);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d874:{NFSU2_TR(0x70d874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d877:{NFSU2_TR(0x70d877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70d878:{NFSU2_TR(0x70d878);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70d879:{NFSU2_TR(0x70d879);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70d87a:L70d87a:{c.instructions+=15;NFSU2_TR(0x70d87a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d87b:{NFSU2_TR(0x70d87b);
__builtin_memmove((R+20),(R+16),4);
}
B70d87d:{NFSU2_TR(0x70d87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70d880:{NFSU2_TR(0x70d880);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d883:{NFSU2_TR(0x70d883);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d884:{NFSU2_TR(0x70d884);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70d887:{NFSU2_TR(0x70d887);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d888:{NFSU2_TR(0x70d888);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70d88b:{NFSU2_TR(0x70d88b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70d88e:{NFSU2_TR(0x70d88e);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70d890:{NFSU2_TR(0x70d890);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d891:{NFSU2_TR(0x70d891);
__builtin_memmove((R+28),(R+8),4);
}
B70d893:{NFSU2_TR(0x70d893);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70d896:{NFSU2_TR(0x70d896);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B70d898:{NFSU2_TR(0x70d898);
if(r1(R+512)){{goto L70d8ab;}}
}
B70d89a:L70d89a:{c.instructions+=6;NFSU2_TR(0x70d89a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70d89c:{NFSU2_TR(0x70d89c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B70d89e:{NFSU2_TR(0x70d89e);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70d8a0:{NFSU2_TR(0x70d8a0);
w1(R+512,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B70d8a2:{NFSU2_TR(0x70d8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70d8a9:{NFSU2_TR(0x70d8a9);
{goto L70d8b4;}
}
B70d8ab:L70d8ab:{c.instructions+=3;NFSU2_TR(0x70d8ab);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B70d8ad:{NFSU2_TR(0x70d8ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70d8b1:{NFSU2_TR(0x70d8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70d8b4:L70d8b4:{c.instructions+=2;NFSU2_TR(0x70d8b4);
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
B70d8b5:{NFSU2_TR(0x70d8b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70d8ca;}}
}
B70d8b7:L70d8b7:{c.instructions+=8;NFSU2_TR(0x70d8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70d8ba:{NFSU2_TR(0x70d8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70d8bd:{NFSU2_TR(0x70d8bd);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70d8c1:{NFSU2_TR(0x70d8c1);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B70d8c3:{NFSU2_TR(0x70d8c3);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d8c5:{NFSU2_TR(0x70d8c5);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70d8c6:{NFSU2_TR(0x70d8c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70d8c7:{NFSU2_TR(0x70d8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d8ca:L70d8ca:{c.instructions+=9;NFSU2_TR(0x70d8ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70d8cb:{NFSU2_TR(0x70d8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d8ce:{NFSU2_TR(0x70d8ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70d8cf:{NFSU2_TR(0x70d8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d8d2:{NFSU2_TR(0x70d8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d8d5:{NFSU2_TR(0x70d8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d8d8:{NFSU2_TR(0x70d8d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70d8d9:{NFSU2_TR(0x70d8d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70d8da:{NFSU2_TR(0x70d8da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70d8db:L70d8db:{c.instructions+=10;NFSU2_TR(0x70d8db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d8dc:{NFSU2_TR(0x70d8dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B70d8de:{NFSU2_TR(0x70d8de);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5af0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70d8e5:{NFSU2_TR(0x70d8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B70d8e8:{NFSU2_TR(0x70d8e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70d8eb:{NFSU2_TR(0x70d8eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d8ec:{NFSU2_TR(0x70d8ec);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B70d8ee:{NFSU2_TR(0x70d8ee);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70d8f0:{NFSU2_TR(0x70d8f0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70d8f2:{NFSU2_TR(0x70d8f2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70d927;}}
}
B70d8f4:L70d8f4:{c.instructions+=19;NFSU2_TR(0x70d8f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B70d8f6:{NFSU2_TR(0x70d8f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d8f7:{NFSU2_TR(0x70d8f7);
__builtin_memmove((R+28),(R+8),4);
}
B70d8f9:{NFSU2_TR(0x70d8f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70d8fc:{NFSU2_TR(0x70d8fc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+12,u32(r1(U+0)));
}
B70d8ff:{NFSU2_TR(0x70d8ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B70d903:{NFSU2_TR(0x70d903);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B70d906:{NFSU2_TR(0x70d906);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B70d908:{NFSU2_TR(0x70d908);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70d90c:{NFSU2_TR(0x70d90c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B70d90f:{NFSU2_TR(0x70d90f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B70d911:{NFSU2_TR(0x70d911);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70d915:{NFSU2_TR(0x70d915);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B70d918:{NFSU2_TR(0x70d918);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B70d91a:{NFSU2_TR(0x70d91a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B70d91d:{NFSU2_TR(0x70d91d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d920:{NFSU2_TR(0x70d920);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d923:{NFSU2_TR(0x70d923);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x20ull))));
}
B70d926:{NFSU2_TR(0x70d926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70d927:L70d927:{c.instructions+=8;NFSU2_TR(0x70d927);
w4(R+4,u32(0-u32(r4(R+4))));
}
B70d929:{NFSU2_TR(0x70d929);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70d92b:{NFSU2_TR(0x70d92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d92e:{NFSU2_TR(0x70d92e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B70d930:{NFSU2_TR(0x70d930);
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
B70d932:{NFSU2_TR(0x70d932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70d933:{NFSU2_TR(0x70d933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70d934:{NFSU2_TR(0x70d934);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70d935:L70d935:{c.instructions+=10;NFSU2_TR(0x70d935);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d936:{NFSU2_TR(0x70d936);
__builtin_memmove((R+20),(R+16),4);
}
B70d938:{NFSU2_TR(0x70d938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B70d93a:{NFSU2_TR(0x70d93a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70d93c:{NFSU2_TR(0x70d93c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70d93d:{NFSU2_TR(0x70d93d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B70d93f:{NFSU2_TR(0x70d93f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B70d940:{NFSU2_TR(0x70d940);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(U+4))));
}
B70d943:{NFSU2_TR(0x70d943);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B70d946:{NFSU2_TR(0x70d946);
if(r1(R+512)){{goto L70d94f;}}
}
B70d948:L70d948:{c.instructions+=3;NFSU2_TR(0x70d948);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+4))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70d94b:{NFSU2_TR(0x70d94b);
__builtin_memmove((R+0),(R+8),4);
}
B70d94d:{NFSU2_TR(0x70d94d);
{goto L70d960;}
}
B70d94f:L70d94f:{c.instructions+=6;NFSU2_TR(0x70d94f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d952:{NFSU2_TR(0x70d952);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(r1(U+0)));
}
B70d955:{NFSU2_TR(0x70d955);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B70d958:{NFSU2_TR(0x70d958);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70d95b:{NFSU2_TR(0x70d95b);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B70d95d:{NFSU2_TR(0x70d95d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70d960:L70d960:{c.instructions+=3;NFSU2_TR(0x70d960);
u8 U[42];
w1(U+37,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+38),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+37))));
w1(U+24,u8((r1(U+37))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+37))-u32(u8(0x1ull))));
w4(U+26,shr<u32>(r4(U+38),u64(r1(U+25))));
w4(U+30,u32(u32(r4(U+26))&u32(u32(0x1ull))));
w1(U+34,u8((r4(U+30))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+34))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+35,u8((r1(U+37))==(u8(0x1ull))));
w1(U+36,u8(s32(r4(U+38))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+35),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+35))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+36))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+37))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B70d962:{NFSU2_TR(0x70d962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70d963:{NFSU2_TR(0x70d963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70d99e:L70d99e:{c.instructions+=3;NFSU2_TR(0x70d99e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B70d9a0:{NFSU2_TR(0x70d9a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70d9a2:{NFSU2_TR(0x70d9a2);
if(r1(R+518)){{goto L70d9b0;}}
}
B70d9a4:L70d9a4:{c.instructions+=6;NFSU2_TR(0x70d9a4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B70d9a5:{NFSU2_TR(0x70d9a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70d9a7:{NFSU2_TR(0x70d9a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d9aa:{NFSU2_TR(0x70d9aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B70d9ac:{NFSU2_TR(0x70d9ac);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70d9af:{NFSU2_TR(0x70d9af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70d9b0:L70d9b0:{c.instructions+=20;NFSU2_TR(0x70d9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70d9b3:{NFSU2_TR(0x70d9b3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B70d9b6:{NFSU2_TR(0x70d9b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d9b7:{NFSU2_TR(0x70d9b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B70d9bb:{NFSU2_TR(0x70d9bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70d9be:{NFSU2_TR(0x70d9be);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B70d9c0:{NFSU2_TR(0x70d9c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B70d9c4:{NFSU2_TR(0x70d9c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70d9c7:{NFSU2_TR(0x70d9c7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B70d9c9:{NFSU2_TR(0x70d9c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B70d9cd:{NFSU2_TR(0x70d9cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70d9d0:{NFSU2_TR(0x70d9d0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B70d9d2:{NFSU2_TR(0x70d9d2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70d9d5:{NFSU2_TR(0x70d9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d9d8:{NFSU2_TR(0x70d9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70d9db:{NFSU2_TR(0x70d9db);
u8 U[4];
w4(U+0,u32(0x1full));
s4(u32(r4(R+0)),r4(U+0));
}
B70d9e1:{NFSU2_TR(0x70d9e1);
__builtin_memmove((R+0),(R+8),4);
}
B70d9e3:{NFSU2_TR(0x70d9e3);
u8 U[48];
w4(U+40,u32(u32(u32(0x1full))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B70d9e6:{NFSU2_TR(0x70d9e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70d9e7:{NFSU2_TR(0x70d9e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70d9e8:L70d9e8:{c.instructions+=19;NFSU2_TR(0x70d9e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d9e9:{NFSU2_TR(0x70d9e9);
__builtin_memmove((R+20),(R+16),4);
}
B70d9eb:{NFSU2_TR(0x70d9eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d9ec:{NFSU2_TR(0x70d9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70d9ef:{NFSU2_TR(0x70d9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70d9f3:{NFSU2_TR(0x70d9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70d9f6:{NFSU2_TR(0x70d9f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d9f7:{NFSU2_TR(0x70d9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70d9fa:{NFSU2_TR(0x70d9fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70d9fb:{NFSU2_TR(0x70d9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70d9fe:{NFSU2_TR(0x70d9fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B70da01:{NFSU2_TR(0x70da01);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B70da05:{NFSU2_TR(0x70da05);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B70da08:{NFSU2_TR(0x70da08);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70da09:{NFSU2_TR(0x70da09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70da0a:{NFSU2_TR(0x70da0a);
__builtin_memmove((R+28),(R+8),4);
}
B70da0c:{NFSU2_TR(0x70da0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70da0f:{NFSU2_TR(0x70da0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B70da11:{NFSU2_TR(0x70da11);
if(r1(R+512)){{goto L70da20;}}
}
B70da13:L70da13:{c.instructions+=4;NFSU2_TR(0x70da13);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B70da15:{NFSU2_TR(0x70da15);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B70da17:{NFSU2_TR(0x70da17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70da1e:{NFSU2_TR(0x70da1e);
{goto L70da3e;}
}
B70da20:L70da20:{c.instructions+=2;NFSU2_TR(0x70da20);
__builtin_memmove((R+24),(R+8),4);
}
B70da22:{NFSU2_TR(0x70da22);
{goto L70da3e;}
}
B70da24:L70da24:{c.instructions+=4;NFSU2_TR(0x70da24);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+24))));
}
B70da26:{NFSU2_TR(0x70da26);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+12))));
}
B70da28:{NFSU2_TR(0x70da28);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70da29:{NFSU2_TR(0x70da29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70da3e;}}
}
B70da2b:L70da2b:{c.instructions+=8;NFSU2_TR(0x70da2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70da2e:{NFSU2_TR(0x70da2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70da31:{NFSU2_TR(0x70da31);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B70da35:{NFSU2_TR(0x70da35);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+28))));
}
B70da37:{NFSU2_TR(0x70da37);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70da39:{NFSU2_TR(0x70da39);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70da3a:{NFSU2_TR(0x70da3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70da3b:{NFSU2_TR(0x70da3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70da3e:L70da3e:{c.instructions+=2;NFSU2_TR(0x70da3e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x80ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70da44:{NFSU2_TR(0x70da44);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70da24u);}goto L70da24;}}
}
B70da46:L70da46:{c.instructions+=9;NFSU2_TR(0x70da46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70da47:{NFSU2_TR(0x70da47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70da4a:{NFSU2_TR(0x70da4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70da4b:{NFSU2_TR(0x70da4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70da4e:{NFSU2_TR(0x70da4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70da51:{NFSU2_TR(0x70da51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70da54:{NFSU2_TR(0x70da54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70da55:{NFSU2_TR(0x70da55);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70da56:{NFSU2_TR(0x70da56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70da57:L70da57:{c.instructions+=10;NFSU2_TR(0x70da57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70da58:{NFSU2_TR(0x70da58);
__builtin_memmove((R+20),(R+16),4);
}
B70da5a:{NFSU2_TR(0x70da5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B70da5c:{NFSU2_TR(0x70da5c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70da5e:{NFSU2_TR(0x70da5e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70da5f:{NFSU2_TR(0x70da5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B70da61:{NFSU2_TR(0x70da61);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70da62:{NFSU2_TR(0x70da62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B70da65:{NFSU2_TR(0x70da65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B70da68:{NFSU2_TR(0x70da68);
if(r1(R+512)){{goto L70da73;}}
}
B70da6a:L70da6a:{c.instructions+=4;NFSU2_TR(0x70da6a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffaull))));
}
B70da6d:{NFSU2_TR(0x70da6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B70da6f:{NFSU2_TR(0x70da6f);
__builtin_memmove((R+8),(R+0),4);
}
B70da71:{NFSU2_TR(0x70da71);
{goto L70da83;}
}
B70da73:L70da73:{c.instructions+=6;NFSU2_TR(0x70da73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70da76:{NFSU2_TR(0x70da76);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+8,u32(r1(U+0)));
}
B70da79:{NFSU2_TR(0x70da79);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70da7c:{NFSU2_TR(0x70da7c);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B70da7e:{NFSU2_TR(0x70da7e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B70da81:{NFSU2_TR(0x70da81);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B70da83:L70da83:{c.instructions+=7;NFSU2_TR(0x70da83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70da86:{NFSU2_TR(0x70da86);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70da89:{NFSU2_TR(0x70da89);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B70da8c:{NFSU2_TR(0x70da8c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B70da8f:{NFSU2_TR(0x70da8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B70da91:{NFSU2_TR(0x70da91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70da92:{NFSU2_TR(0x70da92);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70dac1;}}
}
B70da94:L70da94:{c.instructions+=15;NFSU2_TR(0x70da94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70da97:{NFSU2_TR(0x70da97);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+12,u32(r1(U+0)));
}
B70da9a:{NFSU2_TR(0x70da9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70da9e:{NFSU2_TR(0x70da9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B70daa1:{NFSU2_TR(0x70daa1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B70daa3:{NFSU2_TR(0x70daa3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70daa7:{NFSU2_TR(0x70daa7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70daaa:{NFSU2_TR(0x70daaa);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B70daac:{NFSU2_TR(0x70daac);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70dab0:{NFSU2_TR(0x70dab0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70dab3:{NFSU2_TR(0x70dab3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B70dab5:{NFSU2_TR(0x70dab5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70dab8:{NFSU2_TR(0x70dab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x20ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B70dabb:{NFSU2_TR(0x70dabb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dabe:{NFSU2_TR(0x70dabe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dac1:L70dac1:{c.instructions+=4;NFSU2_TR(0x70dac1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70dac3:{NFSU2_TR(0x70dac3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+0),(U+0),2);
}
B70dac6:{NFSU2_TR(0x70dac6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70dac8:{NFSU2_TR(0x70dac8);
if(r1(R+518)){{goto L70dad1;}}
}
B70daca:L70daca:{c.instructions+=3;NFSU2_TR(0x70daca);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70dacc:{NFSU2_TR(0x70dacc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70dacf:{NFSU2_TR(0x70dacf);
{goto L70db13;}
}
B70dad1:L70dad1:{c.instructions+=5;NFSU2_TR(0x70dad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70dad4:{NFSU2_TR(0x70dad4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3eull))));
}
B70dad7:{NFSU2_TR(0x70dad7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffff01ull))));
}
B70dadd:{NFSU2_TR(0x70dadd);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B70dadf:{NFSU2_TR(0x70dadf);
__builtin_memmove((R+12),(R+0),4);
}
B70dae1:L70dae1:{c.instructions+=2;NFSU2_TR(0x70dae1);
__builtin_memmove((R+0),(R+24),4);
}
B70dae3:{NFSU2_TR(0x70dae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dae8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d99eu);}goto L70d99e;}
}
B70dae8:L70dae8:{c.instructions+=3;NFSU2_TR(0x70dae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70daea:{NFSU2_TR(0x70daea);
__builtin_memmove((R+0),(R+12),4);
}
B70daec:{NFSU2_TR(0x70daec);
if(r1(R+518)){{goto L70dafc;}}
}
B70daee:L70daee:{c.instructions+=5;NFSU2_TR(0x70daee);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70daf0:{NFSU2_TR(0x70daf0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70daf3:{NFSU2_TR(0x70daf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70daf6:{NFSU2_TR(0x70daf6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B70dafa:{NFSU2_TR(0x70dafa);
{goto L70db07;}
}
B70dafc:L70dafc:{c.instructions+=4;NFSU2_TR(0x70dafc);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70dafe:{NFSU2_TR(0x70dafe);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
}
B70db01:{NFSU2_TR(0x70db01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70db04:{NFSU2_TR(0x70db04);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B70db07:L70db07:{c.instructions+=2;NFSU2_TR(0x70db07);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70db0a:{NFSU2_TR(0x70db0a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70dae1u);}goto L70dae1;}}
}
B70db0c:L70db0c:{c.instructions+=3;NFSU2_TR(0x70db0c);
__builtin_memmove((R+0),(R+12),4);
}
B70db0e:{NFSU2_TR(0x70db0e);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70db10:{NFSU2_TR(0x70db10);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70db13:L70db13:{c.instructions+=3;NFSU2_TR(0x70db13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70db14:{NFSU2_TR(0x70db14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70db15:{NFSU2_TR(0x70db15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70db16:L70db16:{c.instructions+=8;NFSU2_TR(0x70db16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db17:{NFSU2_TR(0x70db17);
__builtin_memmove((R+20),(R+16),4);
}
B70db19:{NFSU2_TR(0x70db19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db1a:{NFSU2_TR(0x70db1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db1b:{NFSU2_TR(0x70db1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70db1e:{NFSU2_TR(0x70db1e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x150ull))));
}
B70db24:{NFSU2_TR(0x70db24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db25:{NFSU2_TR(0x70db25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70db2aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d87au);}goto L70d87a;}
}
B70db2a:L70db2a:{c.instructions+=4;NFSU2_TR(0x70db2a);
__builtin_memmove((R+24),(R+0),4);
}
B70db2c:{NFSU2_TR(0x70db2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db2d:{NFSU2_TR(0x70db2d);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B70db2f:{NFSU2_TR(0x70db2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70db34ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d87au);}goto L70d87a;}
}
B70db34:L70db34:{c.instructions+=7;NFSU2_TR(0x70db34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70db35:{NFSU2_TR(0x70db35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70db36:{NFSU2_TR(0x70db36);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B70db38:{NFSU2_TR(0x70db38);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70db3b:{NFSU2_TR(0x70db3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70db3c:{NFSU2_TR(0x70db3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70db3d:{NFSU2_TR(0x70db3d);
if(r1(R+518)){{goto L70db55;}}
}
B70db3f:L70db3f:{c.instructions+=2;NFSU2_TR(0x70db3f);
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
B70db40:{NFSU2_TR(0x70db40);
if(r1(R+518)){{goto L70db51;}}
}
B70db42:L70db42:{c.instructions+=2;NFSU2_TR(0x70db42);
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
B70db43:{NFSU2_TR(0x70db43);
if(r1(R+518)){{goto L70db4d;}}
}
B70db45:L70db45:{c.instructions+=2;NFSU2_TR(0x70db45);
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
B70db46:{NFSU2_TR(0x70db46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70db55;}}
}
B70db48:L70db48:{c.instructions+=1;NFSU2_TR(0x70db48);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db4a:L70db4a:{c.instructions+=3;NFSU2_TR(0x70db4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70db4b:{NFSU2_TR(0x70db4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70db4c:{NFSU2_TR(0x70db4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70db4d:L70db4d:{c.instructions+=2;NFSU2_TR(0x70db4d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db4f:{NFSU2_TR(0x70db4f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70db4au);}goto L70db4a;}
}
B70db51:L70db51:{c.instructions+=2;NFSU2_TR(0x70db51);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db53:{NFSU2_TR(0x70db53);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70db4au);}goto L70db4a;}
}
B70db55:L70db55:{c.instructions+=3;NFSU2_TR(0x70db55);
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
B70db57:{NFSU2_TR(0x70db57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70db58:{NFSU2_TR(0x70db58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70db59:L70db59:{c.instructions+=16;NFSU2_TR(0x70db59);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db5a:{NFSU2_TR(0x70db5a);
__builtin_memmove((R+20),(R+16),4);
}
B70db5c:{NFSU2_TR(0x70db5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70db5f:{NFSU2_TR(0x70db5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70db62:{NFSU2_TR(0x70db62);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db63:{NFSU2_TR(0x70db63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db64:{NFSU2_TR(0x70db64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70db67:{NFSU2_TR(0x70db67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db68:{NFSU2_TR(0x70db68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70db6b:{NFSU2_TR(0x70db6b);
w4(R+24,shl<u32>(r4(R+24),u64(u32(0x1ull))));
}
B70db6d:{NFSU2_TR(0x70db6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70db70:{NFSU2_TR(0x70db70);
u8 U[13];
w4(U+0,u32(u32(u32(0x77cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B70db78:{NFSU2_TR(0x70db78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db79:{NFSU2_TR(0x70db79);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70db7f:{NFSU2_TR(0x70db7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70db80:{NFSU2_TR(0x70db80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70db85ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70db85:L70db85:{c.instructions+=4;NFSU2_TR(0x70db85);
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
B70db87:{NFSU2_TR(0x70db87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70db88:{NFSU2_TR(0x70db88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70db89:{NFSU2_TR(0x70db89);
if(r1(R+518)){{goto L70db93;}}
}
B70db8b:L70db8b:{c.instructions+=2;NFSU2_TR(0x70db8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70db8e:{NFSU2_TR(0x70db8e);
{goto L70dc45;}
}
B70db93:L70db93:{c.instructions+=8;NFSU2_TR(0x70db93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70db96:{NFSU2_TR(0x70db96);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B70db98:{NFSU2_TR(0x70db98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70db9b:{NFSU2_TR(0x70db9b);
u8 U[12];
w4(U+0,u32(u32(u32(0x7a4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B70dba2:{NFSU2_TR(0x70dba2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B70dba5:{NFSU2_TR(0x70dba5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dba6:{NFSU2_TR(0x70dba6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dba7:{NFSU2_TR(0x70dba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dbacull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dbac:L70dbac:{c.instructions+=4;NFSU2_TR(0x70dbac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70dbae:{NFSU2_TR(0x70dbae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dbaf:{NFSU2_TR(0x70dbaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dbb0:{NFSU2_TR(0x70dbb0);
if(r1(R+518)){{goto L70dc11;}}
}
B70dbb2:L70dbb2:{c.instructions+=4;NFSU2_TR(0x70dbb2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dbb6:{NFSU2_TR(0x70dbb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dbb7:{NFSU2_TR(0x70dbb7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dbb8:{NFSU2_TR(0x70dbb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dbbdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dbbd:L70dbbd:{c.instructions+=4;NFSU2_TR(0x70dbbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70dbbf:{NFSU2_TR(0x70dbbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dbc0:{NFSU2_TR(0x70dbc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dbc1:{NFSU2_TR(0x70dbc1);
if(r1(R+518)){{goto L70dbf8;}}
}
B70dbc3:L70dbc3:{c.instructions+=4;NFSU2_TR(0x70dbc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dbc7:{NFSU2_TR(0x70dbc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dbc8:{NFSU2_TR(0x70dbc8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dbc9:{NFSU2_TR(0x70dbc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dbceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dbce:L70dbce:{c.instructions+=4;NFSU2_TR(0x70dbce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70dbd0:{NFSU2_TR(0x70dbd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dbd1:{NFSU2_TR(0x70dbd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dbd2:{NFSU2_TR(0x70dbd2);
if(r1(R+518)){{goto L70dbe6;}}
}
B70dbd4:L70dbd4:{c.instructions+=4;NFSU2_TR(0x70dbd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dbd8:{NFSU2_TR(0x70dbd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dbd9:{NFSU2_TR(0x70dbd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dbda:{NFSU2_TR(0x70dbda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dbdfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dbdf:L70dbdf:{c.instructions+=3;NFSU2_TR(0x70dbdf);
__builtin_memmove((R+28),(R+0),4);
}
B70dbe1:{NFSU2_TR(0x70dbe1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x8ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70dbe4:{NFSU2_TR(0x70dbe4);
{goto L70dc43;}
}
B70dbe6:L70dbe6:{c.instructions+=4;NFSU2_TR(0x70dbe6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dbea:{NFSU2_TR(0x70dbea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dbeb:{NFSU2_TR(0x70dbeb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dbec:{NFSU2_TR(0x70dbec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dbf1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dbf1:L70dbf1:{c.instructions+=3;NFSU2_TR(0x70dbf1);
__builtin_memmove((R+28),(R+0),4);
}
B70dbf3:{NFSU2_TR(0x70dbf3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x5ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x5ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70dbf6:{NFSU2_TR(0x70dbf6);
{goto L70dc43;}
}
B70dbf8:L70dbf8:{c.instructions+=6;NFSU2_TR(0x70dbf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dbfc:{NFSU2_TR(0x70dbfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dbfd:{NFSU2_TR(0x70dbfd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70dbff:{NFSU2_TR(0x70dbff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc00:{NFSU2_TR(0x70dc00);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70dc01:{NFSU2_TR(0x70dc01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dc06ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dc06:L70dc06:{c.instructions+=4;NFSU2_TR(0x70dc06);
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
B70dc08:{NFSU2_TR(0x70dc08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dc09:{NFSU2_TR(0x70dc09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dc0a:{NFSU2_TR(0x70dc0a);
if(r1(R+518)){{goto L70dc45;}}
}
B70dc0c:L70dc0c:{c.instructions+=3;NFSU2_TR(0x70dc0c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc0e:{NFSU2_TR(0x70dc0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70dc0f:{NFSU2_TR(0x70dc0f);
{goto L70dc45;}
}
B70dc11:L70dc11:{c.instructions+=4;NFSU2_TR(0x70dc11);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dc15:{NFSU2_TR(0x70dc15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc16:{NFSU2_TR(0x70dc16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc17:{NFSU2_TR(0x70dc17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dc1cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dc1c:L70dc1c:{c.instructions+=4;NFSU2_TR(0x70dc1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70dc1e:{NFSU2_TR(0x70dc1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dc1f:{NFSU2_TR(0x70dc1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dc20:{NFSU2_TR(0x70dc20);
if(r1(R+518)){{goto L70dc34;}}
}
B70dc22:L70dc22:{c.instructions+=4;NFSU2_TR(0x70dc22);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dc26:{NFSU2_TR(0x70dc26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc27:{NFSU2_TR(0x70dc27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc28:{NFSU2_TR(0x70dc28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dc2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dc2d:L70dc2d:{c.instructions+=3;NFSU2_TR(0x70dc2d);
__builtin_memmove((R+28),(R+0),4);
}
B70dc2f:{NFSU2_TR(0x70dc2f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x3ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x3ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70dc32:{NFSU2_TR(0x70dc32);
{goto L70dc43;}
}
B70dc34:L70dc34:{c.instructions+=4;NFSU2_TR(0x70dc34);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dc38:{NFSU2_TR(0x70dc38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc39:{NFSU2_TR(0x70dc39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc3a:{NFSU2_TR(0x70dc3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dc3full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dc3f:L70dc3f:{c.instructions+=2;NFSU2_TR(0x70dc3f);
__builtin_memmove((R+28),(R+0),4);
}
B70dc41:{NFSU2_TR(0x70dc41);
u8 U[7];
w1(R+512,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+523,u8(u32(r1(R+512))^u32(r1(U+6))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70dc43:L70dc43:{c.instructions+=2;NFSU2_TR(0x70dc43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dc44:{NFSU2_TR(0x70dc44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dc45:L70dc45:{c.instructions+=6;NFSU2_TR(0x70dc45);
__builtin_memmove((R+0),(R+28),4);
}
B70dc47:{NFSU2_TR(0x70dc47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70dc48:{NFSU2_TR(0x70dc48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70dc49:{NFSU2_TR(0x70dc49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70dc4a:{NFSU2_TR(0x70dc4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70dc4b:{NFSU2_TR(0x70dc4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70dc4c:L70dc4c:{c.instructions+=12;NFSU2_TR(0x70dc4c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc4d:{NFSU2_TR(0x70dc4d);
__builtin_memmove((R+20),(R+16),4);
}
B70dc4f:{NFSU2_TR(0x70dc4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B70dc52:{NFSU2_TR(0x70dc52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc53:{NFSU2_TR(0x70dc53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc54:{NFSU2_TR(0x70dc54);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B70dc56:{NFSU2_TR(0x70dc56);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70dc5a:{NFSU2_TR(0x70dc5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc5b:{NFSU2_TR(0x70dc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70dc5e:{NFSU2_TR(0x70dc5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dc61:{NFSU2_TR(0x70dc61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dc64:{NFSU2_TR(0x70dc64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70dc79;}}
}
B70dc66:L70dc66:{c.instructions+=2;NFSU2_TR(0x70dc66);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70dc6a:{NFSU2_TR(0x70dc6a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70dc8d;}}
}
B70dc6c:L70dc6c:{c.instructions+=4;NFSU2_TR(0x70dc6c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70dc70:{NFSU2_TR(0x70dc70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dc73:{NFSU2_TR(0x70dc73);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70dc77:{NFSU2_TR(0x70dc77);
{goto L70dc8a;}
}
B70dc79:L70dc79:{c.instructions+=2;NFSU2_TR(0x70dc79);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70dc7d:{NFSU2_TR(0x70dc7d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70dc8d;}}
}
B70dc7f:L70dc7f:{c.instructions+=3;NFSU2_TR(0x70dc7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70dc83:{NFSU2_TR(0x70dc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dc86:{NFSU2_TR(0x70dc86);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B70dc8a:L70dc8a:{c.instructions+=1;NFSU2_TR(0x70dc8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dc8d:L70dc8d:{c.instructions+=2;NFSU2_TR(0x70dc8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dc90:{NFSU2_TR(0x70dc90);
{goto L70dc95;}
}
B70dc92:L70dc92:{c.instructions+=1;NFSU2_TR(0x70dc92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70dc95:L70dc95:{c.instructions+=5;NFSU2_TR(0x70dc95);
u8 U[13];
w4(U+0,u32(u32(u32(0x706ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B70dc9d:{NFSU2_TR(0x70dc9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dc9e:{NFSU2_TR(0x70dc9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70dca4:{NFSU2_TR(0x70dca4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dca5:{NFSU2_TR(0x70dca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dcaaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dcaa:L70dcaa:{c.instructions+=4;NFSU2_TR(0x70dcaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70dcac:{NFSU2_TR(0x70dcac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dcad:{NFSU2_TR(0x70dcad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dcae:{NFSU2_TR(0x70dcae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70dd61;}}
}
B70dcb4:L70dcb4:{c.instructions+=6;NFSU2_TR(0x70dcb4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x7ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B70dcb7:{NFSU2_TR(0x70dcb7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B70dcb9:{NFSU2_TR(0x70dcb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x708ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dcc0:{NFSU2_TR(0x70dcc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dcc1:{NFSU2_TR(0x70dcc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dcc2:{NFSU2_TR(0x70dcc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dcc7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dcc7:L70dcc7:{c.instructions+=4;NFSU2_TR(0x70dcc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70dcc9:{NFSU2_TR(0x70dcc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dcca:{NFSU2_TR(0x70dcca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dccb:{NFSU2_TR(0x70dccb);
if(r1(R+518)){{goto L70dd1d;}}
}
B70dccd:L70dccd:{c.instructions+=4;NFSU2_TR(0x70dccd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dcd4:{NFSU2_TR(0x70dcd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dcd5:{NFSU2_TR(0x70dcd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dcd6:{NFSU2_TR(0x70dcd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dcdbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dcdb:L70dcdb:{c.instructions+=4;NFSU2_TR(0x70dcdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70dcdd:{NFSU2_TR(0x70dcdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dcde:{NFSU2_TR(0x70dcde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dcdf:{NFSU2_TR(0x70dcdf);
if(r1(R+518)){{goto L70dd03;}}
}
B70dce1:L70dce1:{c.instructions+=7;NFSU2_TR(0x70dce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70dce4:{NFSU2_TR(0x70dce4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x102ull))));
}
B70dce9:{NFSU2_TR(0x70dce9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70dcec:{NFSU2_TR(0x70dcec);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B70dcf0:{NFSU2_TR(0x70dcf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dcf1:{NFSU2_TR(0x70dcf1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dcf2:{NFSU2_TR(0x70dcf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dcf7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dcf7:L70dcf7:{c.instructions+=5;NFSU2_TR(0x70dcf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dcf8:{NFSU2_TR(0x70dcf8);
__builtin_memmove((R+12),(R+0),4);
}
B70dcfa:{NFSU2_TR(0x70dcfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dcfb:{NFSU2_TR(0x70dcfb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x6ull))));
}
B70dcfe:{NFSU2_TR(0x70dcfe);
{goto L70de2e;}
}
B70dd03:L70dd03:{c.instructions+=4;NFSU2_TR(0x70dd03);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dd0a:{NFSU2_TR(0x70dd0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd0b:{NFSU2_TR(0x70dd0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd0c:{NFSU2_TR(0x70dd0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dd11ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dd11:L70dd11:{c.instructions+=5;NFSU2_TR(0x70dd11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dd12:{NFSU2_TR(0x70dd12);
__builtin_memmove((R+12),(R+0),4);
}
B70dd14:{NFSU2_TR(0x70dd14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dd15:{NFSU2_TR(0x70dd15);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B70dd18:{NFSU2_TR(0x70dd18);
{goto L70de2e;}
}
B70dd1d:L70dd1d:{c.instructions+=4;NFSU2_TR(0x70dd1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x709ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dd24:{NFSU2_TR(0x70dd24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd25:{NFSU2_TR(0x70dd25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd26:{NFSU2_TR(0x70dd26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dd2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dd2b:L70dd2b:{c.instructions+=4;NFSU2_TR(0x70dd2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70dd2d:{NFSU2_TR(0x70dd2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dd2e:{NFSU2_TR(0x70dd2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dd2f:{NFSU2_TR(0x70dd2f);
if(r1(R+518)){{goto L70dd4a;}}
}
B70dd31:L70dd31:{c.instructions+=4;NFSU2_TR(0x70dd31);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dd38:{NFSU2_TR(0x70dd38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd39:{NFSU2_TR(0x70dd39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd3a:{NFSU2_TR(0x70dd3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dd3full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dd3f:L70dd3f:{c.instructions+=6;NFSU2_TR(0x70dd3f);
__builtin_memmove((R+12),(R+0),4);
}
B70dd41:{NFSU2_TR(0x70dd41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dd42:{NFSU2_TR(0x70dd42);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70dd43:{NFSU2_TR(0x70dd43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dd44:{NFSU2_TR(0x70dd44);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70dd45:{NFSU2_TR(0x70dd45);
{goto L70de2e;}
}
B70dd4a:L70dd4a:{c.instructions+=4;NFSU2_TR(0x70dd4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dd51:{NFSU2_TR(0x70dd51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd52:{NFSU2_TR(0x70dd52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd53:{NFSU2_TR(0x70dd53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dd58ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dd58:L70dd58:{c.instructions+=4;NFSU2_TR(0x70dd58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dd59:{NFSU2_TR(0x70dd59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70dd5a:{NFSU2_TR(0x70dd5a);
__builtin_memmove((R+12),(R+0),4);
}
B70dd5c:{NFSU2_TR(0x70dd5c);
{goto L70de2e;}
}
B70dd61:L70dd61:{c.instructions+=5;NFSU2_TR(0x70dd61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70dd64:{NFSU2_TR(0x70dd64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dd6b:{NFSU2_TR(0x70dd6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd6c:{NFSU2_TR(0x70dd6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd6d:{NFSU2_TR(0x70dd6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dd72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dd72:L70dd72:{c.instructions+=5;NFSU2_TR(0x70dd72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dd75:{NFSU2_TR(0x70dd75);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dd7c:{NFSU2_TR(0x70dd7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd7d:{NFSU2_TR(0x70dd7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd7e:{NFSU2_TR(0x70dd7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dd83ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dd83:L70dd83:{c.instructions+=7;NFSU2_TR(0x70dd83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70dd86:{NFSU2_TR(0x70dd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70dd89:{NFSU2_TR(0x70dd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dd8c:{NFSU2_TR(0x70dd8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dd93:{NFSU2_TR(0x70dd93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd94:{NFSU2_TR(0x70dd94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dd95:{NFSU2_TR(0x70dd95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dd9aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dd9a:L70dd9a:{c.instructions+=7;NFSU2_TR(0x70dd9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70dd9d:{NFSU2_TR(0x70dd9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70dda0:{NFSU2_TR(0x70dda0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x723ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70dda7:{NFSU2_TR(0x70dda7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dda8:{NFSU2_TR(0x70dda8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70ddae:{NFSU2_TR(0x70ddae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ddaf:{NFSU2_TR(0x70ddaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ddb4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70ddb4:L70ddb4:{c.instructions+=7;NFSU2_TR(0x70ddb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ddb7:{NFSU2_TR(0x70ddb7);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70ddb9:{NFSU2_TR(0x70ddb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x722ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70ddc0:{NFSU2_TR(0x70ddc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ddc1:{NFSU2_TR(0x70ddc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70ddc7:{NFSU2_TR(0x70ddc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ddc8:{NFSU2_TR(0x70ddc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ddcdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70ddcd:L70ddcd:{c.instructions+=7;NFSU2_TR(0x70ddcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ddd0:{NFSU2_TR(0x70ddd0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70ddd2:{NFSU2_TR(0x70ddd2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x721ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70ddd9:{NFSU2_TR(0x70ddd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ddda:{NFSU2_TR(0x70ddda);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70dde0:{NFSU2_TR(0x70dde0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dde1:{NFSU2_TR(0x70dde1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dde6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70dde6:L70dde6:{c.instructions+=8;NFSU2_TR(0x70dde6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70dde9:{NFSU2_TR(0x70dde9);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70ddeb:{NFSU2_TR(0x70ddeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ddee:{NFSU2_TR(0x70ddee);
u8 U[13];
w4(U+0,u32(u32(u32(0x720ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B70ddf6:{NFSU2_TR(0x70ddf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ddf7:{NFSU2_TR(0x70ddf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70ddfd:{NFSU2_TR(0x70ddfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ddfe:{NFSU2_TR(0x70ddfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70de03ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70de03:L70de03:{c.instructions+=5;NFSU2_TR(0x70de03);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70de06:{NFSU2_TR(0x70de06);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70de08:{NFSU2_TR(0x70de08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B70de0b:{NFSU2_TR(0x70de0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xf0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B70de0e:{NFSU2_TR(0x70de0e);
if(r1(R+518)){{goto L70de2b;}}
}
B70de10:L70de10:{c.instructions+=5;NFSU2_TR(0x70de10);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70de17:{NFSU2_TR(0x70de17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70de18:{NFSU2_TR(0x70de18);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70de1e:{NFSU2_TR(0x70de1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70de1f:{NFSU2_TR(0x70de1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70de24ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70de24:L70de24:{c.instructions+=4;NFSU2_TR(0x70de24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70de25:{NFSU2_TR(0x70de25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70de26:{NFSU2_TR(0x70de26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70de29:{NFSU2_TR(0x70de29);
{goto L70de2e;}
}
B70de2b:L70de2b:{c.instructions+=1;NFSU2_TR(0x70de2b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B70de2e:L70de2e:{c.instructions+=2;NFSU2_TR(0x70de2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70de30:{NFSU2_TR(0x70de30);
if(r1(R+518)){{goto L70de52;}}
}
B70de32:L70de32:{c.instructions+=6;NFSU2_TR(0x70de32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70de35:{NFSU2_TR(0x70de35);
u8 U[13];
w4(U+0,u32(u32(u32(0x704ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B70de3d:{NFSU2_TR(0x70de3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70de3e:{NFSU2_TR(0x70de3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x150ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70de44:{NFSU2_TR(0x70de44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70de45:{NFSU2_TR(0x70de45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70de4aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70d801u);}goto L70d801;}
}
B70de4a:L70de4a:{c.instructions+=4;NFSU2_TR(0x70de4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70de4c:{NFSU2_TR(0x70de4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70de4d:{NFSU2_TR(0x70de4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70de4e:{NFSU2_TR(0x70de4e);
if(r1(R+518)){{goto L70de52;}}
}
B70de50:L70de50:{c.instructions+=1;NFSU2_TR(0x70de50);
w4(R+12,u32(0-u32(r4(R+12))));
}
B70de52:L70de52:{c.instructions+=2;NFSU2_TR(0x70de52);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70de56:{NFSU2_TR(0x70de56);
if(r1(R+518)){{goto L70de66;}}
}
B70de58:L70de58:{c.instructions+=5;NFSU2_TR(0x70de58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70de5b:{NFSU2_TR(0x70de5b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70de5d:{NFSU2_TR(0x70de5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70de60:{NFSU2_TR(0x70de60);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70de64:{NFSU2_TR(0x70de64);
{goto L70de71;}
}
B70de66:L70de66:{c.instructions+=4;NFSU2_TR(0x70de66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70de69:{NFSU2_TR(0x70de69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70de6c:{NFSU2_TR(0x70de6c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70de6e:{NFSU2_TR(0x70de6e);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B70de71:L70de71:{c.instructions+=3;NFSU2_TR(0x70de71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70de74:{NFSU2_TR(0x70de74);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70de78:{NFSU2_TR(0x70de78);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70dc92u);}goto L70dc92;}}
}
B70de7e:L70de7e:{c.instructions+=5;NFSU2_TR(0x70de7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70de7f:{NFSU2_TR(0x70de7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70de80:{NFSU2_TR(0x70de80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70de81:{NFSU2_TR(0x70de81);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70de82:{NFSU2_TR(0x70de82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70de83:L70de83:{c.instructions+=18;NFSU2_TR(0x70de83);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70de84:{NFSU2_TR(0x70de84);
__builtin_memmove((R+20),(R+16),4);
}
B70de86:{NFSU2_TR(0x70de86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70de87:{NFSU2_TR(0x70de87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70de88:{NFSU2_TR(0x70de88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70de8b:{NFSU2_TR(0x70de8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70de91:{NFSU2_TR(0x70de91);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B70de95:{NFSU2_TR(0x70de95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70de98:{NFSU2_TR(0x70de98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70de99:{NFSU2_TR(0x70de99);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70de9b:{NFSU2_TR(0x70de9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70de9c:{NFSU2_TR(0x70de9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70dea0:{NFSU2_TR(0x70dea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dea3:{NFSU2_TR(0x70dea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dea6:{NFSU2_TR(0x70dea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70dead:{NFSU2_TR(0x70dead);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70deb0:{NFSU2_TR(0x70deb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6a8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70deb6:{NFSU2_TR(0x70deb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70deb7:L70deb7:{c.instructions+=6;NFSU2_TR(0x70deb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70deb9:{NFSU2_TR(0x70deb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70debf:{NFSU2_TR(0x70debf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70dec1:{NFSU2_TR(0x70dec1);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(s32(s8(r1(U+8)))));
}
B70dec5:{NFSU2_TR(0x70dec5);
u8 U[20];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5ab0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70decc:{NFSU2_TR(0x70decc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70dedb;}}
}
B70dece:L70dece:{c.instructions+=4;NFSU2_TR(0x70dece);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70ded4:{NFSU2_TR(0x70ded4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70ded7:{NFSU2_TR(0x70ded7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70ded9:{NFSU2_TR(0x70ded9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70dee9;}}
}
B70dedb:L70dedb:{c.instructions+=4;NFSU2_TR(0x70dedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70dede:{NFSU2_TR(0x70dede);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B70dee1:{NFSU2_TR(0x70dee1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xcull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70dee5:{NFSU2_TR(0x70dee5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70deb7u);}goto L70deb7;}}
}
B70dee7:L70dee7:{c.instructions+=1;NFSU2_TR(0x70dee7);
{goto L70def3;}
}
B70dee9:L70dee9:{c.instructions+=2;NFSU2_TR(0x70dee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70deec:{NFSU2_TR(0x70deec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70def3:L70def3:{c.instructions+=6;NFSU2_TR(0x70def3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70def6:{NFSU2_TR(0x70def6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70def9:{NFSU2_TR(0x70def9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70defa:{NFSU2_TR(0x70defa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70defd:{NFSU2_TR(0x70defd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70df00:{NFSU2_TR(0x70df00);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70df3e;}}
}
B70df02:L70df02:{c.instructions+=1;NFSU2_TR(0x70df02);
u8 U[12];
w4(U+0,u32(u32(u32(0x6a8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B70df09:L70df09:{c.instructions+=6;NFSU2_TR(0x70df09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70df0b:{NFSU2_TR(0x70df0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70df11:{NFSU2_TR(0x70df11);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70df13:{NFSU2_TR(0x70df13);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(s32(s8(r1(U+8)))));
}
B70df17:{NFSU2_TR(0x70df17);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5ab0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70df1e:{NFSU2_TR(0x70df1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70df32;}}
}
B70df20:L70df20:{c.instructions+=4;NFSU2_TR(0x70df20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70df26:{NFSU2_TR(0x70df26);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70df29:{NFSU2_TR(0x70df29);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70df2c:{NFSU2_TR(0x70df2c);
if(r1(R+518)){{goto L70df32;}}
}
B70df2e:L70df2e:{c.instructions+=2;NFSU2_TR(0x70df2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70df30:{NFSU2_TR(0x70df30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70df61;}}
}
B70df32:L70df32:{c.instructions+=4;NFSU2_TR(0x70df32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70df35:{NFSU2_TR(0x70df35);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B70df38:{NFSU2_TR(0x70df38);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xcull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70df3c:{NFSU2_TR(0x70df3c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70df09u);}goto L70df09;}}
}
B70df3e:L70df3e:{c.instructions+=1;NFSU2_TR(0x70df3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70df41:L70df41:{c.instructions+=3;NFSU2_TR(0x70df41);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70df45:{NFSU2_TR(0x70df45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70df46:{NFSU2_TR(0x70df46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70df69;}}
}
B70df48:L70df48:{c.instructions+=9;NFSU2_TR(0x70df48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70df4b:{NFSU2_TR(0x70df4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70df4e:{NFSU2_TR(0x70df4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B70df50:{NFSU2_TR(0x70df50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70df53:{NFSU2_TR(0x70df53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70df56:{NFSU2_TR(0x70df56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70df59:{NFSU2_TR(0x70df59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70df5c:{NFSU2_TR(0x70df5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70df5f:{NFSU2_TR(0x70df5f);
{goto L70df78;}
}
B70df61:L70df61:{c.instructions+=3;NFSU2_TR(0x70df61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70df65:{NFSU2_TR(0x70df65);
__builtin_memmove((R+4),(R+8),4);
}
B70df67:{NFSU2_TR(0x70df67);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70df41u);}goto L70df41;}
}
B70df69:L70df69:{c.instructions+=5;NFSU2_TR(0x70df69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70df6c:{NFSU2_TR(0x70df6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70df6f:{NFSU2_TR(0x70df6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70df72:{NFSU2_TR(0x70df72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70df75:{NFSU2_TR(0x70df75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70df78:L70df78:{c.instructions+=4;NFSU2_TR(0x70df78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70df79:{NFSU2_TR(0x70df79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70df7a:{NFSU2_TR(0x70df7a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70df7b:{NFSU2_TR(0x70df7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70df7c:L70df7c:{c.instructions+=13;NFSU2_TR(0x70df7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70df7d:{NFSU2_TR(0x70df7d);
__builtin_memmove((R+20),(R+16),4);
}
B70df7f:{NFSU2_TR(0x70df7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B70df82:{NFSU2_TR(0x70df82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70df83:{NFSU2_TR(0x70df83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70df84:{NFSU2_TR(0x70df84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70df85:{NFSU2_TR(0x70df85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70df88:{NFSU2_TR(0x70df88);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70df8b:{NFSU2_TR(0x70df8b);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5ab0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70df93:{NFSU2_TR(0x70df93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70df99:{NFSU2_TR(0x70df99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70df9f:{NFSU2_TR(0x70df9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dfa2:{NFSU2_TR(0x70dfa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70dfad;}}
}
B70dfa4:L70dfa4:{c.instructions+=2;NFSU2_TR(0x70dfa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70dfaa:{NFSU2_TR(0x70dfaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dfad:L70dfad:{c.instructions+=2;NFSU2_TR(0x70dfad);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B70dfb4:{NFSU2_TR(0x70dfb4);
if(r1(R+518)){TAIL_STATIC(0x70e020u,70e);}
}
B70dfb6:L70dfb6:{c.instructions+=2;NFSU2_TR(0x70dfb6);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4534ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B70dfbd:{NFSU2_TR(0x70dfbd);
if(r1(R+518)){TAIL_STATIC(0x70e020u,70e);}
}
B70dfbf:L70dfbf:{c.instructions+=11;NFSU2_TR(0x70dfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70dfc2:{NFSU2_TR(0x70dfc2);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B70dfc6:{NFSU2_TR(0x70dfc6);
u8 U[14];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B70dfcb:{NFSU2_TR(0x70dfcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dfcc:{NFSU2_TR(0x70dfcc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B70dfcf:{NFSU2_TR(0x70dfcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dfd0:{NFSU2_TR(0x70dfd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70dfd3:{NFSU2_TR(0x70dfd3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70dfd5:{NFSU2_TR(0x70dfd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dfd6:{NFSU2_TR(0x70dfd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dfd7:{NFSU2_TR(0x70dfd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70dfdcull));
TAIL_STATIC(0x71fddfu,71f);
}
B70dfdc:L70dfdc:{c.instructions+=11;NFSU2_TR(0x70dfdc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B70dfdf:{NFSU2_TR(0x70dfdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70dfe2:{NFSU2_TR(0x70dfe2);
u8 U[14];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B70dfe7:{NFSU2_TR(0x70dfe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70dfed:{NFSU2_TR(0x70dfed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x290ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70dff3:{NFSU2_TR(0x70dff3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70dff6:{NFSU2_TR(0x70dff6);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70dff8:{NFSU2_TR(0x70dff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70dff9:{NFSU2_TR(0x70dff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dffc:{NFSU2_TR(0x70dffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70dfff:{NFSU2_TR(0x70dfff);
w4(R+0,u32(s32(s16(r2(R+12)))));
TAIL_STATIC(0x70e002u,70e);
}
XIT:NFSU2_TR_EXIT(0x70d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
