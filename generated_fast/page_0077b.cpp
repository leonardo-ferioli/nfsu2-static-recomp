#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_439(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_77c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x77b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x77b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_77b(u8* __restrict R,Cpu& c);
u32 page_77b(Cpu& c){return body_77b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_77b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x77b000:goto L77b000;
case 0x77b005:c.instructions+=5;goto B77b005;
case 0x77b00a:c.instructions+=4;goto B77b00a;
case 0x77b00c:c.instructions+=3;goto B77b00c;
case 0x77b00e:c.instructions+=2;goto B77b00e;
case 0x77b013:c.instructions+=1;goto B77b013;
case 0x77b018:goto L77b018;
case 0x77b01d:c.instructions+=1;goto B77b01d;
case 0x77b022:goto L77b022;
case 0x77b023:c.instructions+=1;goto B77b023;
case 0x77b030:goto L77b030;
case 0x77b035:c.instructions+=5;goto B77b035;
case 0x77b03a:c.instructions+=4;goto B77b03a;
case 0x77b03c:c.instructions+=3;goto B77b03c;
case 0x77b03e:c.instructions+=2;goto B77b03e;
case 0x77b043:c.instructions+=1;goto B77b043;
case 0x77b048:goto L77b048;
case 0x77b04d:c.instructions+=1;goto B77b04d;
case 0x77b052:goto L77b052;
case 0x77b053:c.instructions+=1;goto B77b053;
case 0x77b060:goto L77b060;
case 0x77b065:c.instructions+=5;goto B77b065;
case 0x77b06a:c.instructions+=4;goto B77b06a;
case 0x77b06c:c.instructions+=3;goto B77b06c;
case 0x77b06e:c.instructions+=2;goto B77b06e;
case 0x77b073:c.instructions+=1;goto B77b073;
case 0x77b078:goto L77b078;
case 0x77b07d:c.instructions+=1;goto B77b07d;
case 0x77b082:goto L77b082;
case 0x77b083:c.instructions+=1;goto B77b083;
case 0x77b090:goto L77b090;
case 0x77b095:c.instructions+=5;goto B77b095;
case 0x77b09a:c.instructions+=4;goto B77b09a;
case 0x77b09c:c.instructions+=3;goto B77b09c;
case 0x77b09e:c.instructions+=2;goto B77b09e;
case 0x77b0a3:c.instructions+=1;goto B77b0a3;
case 0x77b0a8:goto L77b0a8;
case 0x77b0ad:c.instructions+=1;goto B77b0ad;
case 0x77b0b2:goto L77b0b2;
case 0x77b0b3:c.instructions+=1;goto B77b0b3;
case 0x77b0c0:goto L77b0c0;
case 0x77b0c5:c.instructions+=1;goto B77b0c5;
case 0x77b0ca:goto L77b0ca;
case 0x77b0cb:c.instructions+=1;goto B77b0cb;
case 0x77b0d0:goto L77b0d0;
case 0x77b0d5:c.instructions+=1;goto B77b0d5;
case 0x77b0da:goto L77b0da;
case 0x77b0db:c.instructions+=1;goto B77b0db;
case 0x77b0e0:goto L77b0e0;
case 0x77b0e5:c.instructions+=1;goto B77b0e5;
case 0x77b0ea:goto L77b0ea;
case 0x77b0eb:c.instructions+=1;goto B77b0eb;
case 0x77b0f0:goto L77b0f0;
case 0x77b0f5:c.instructions+=1;goto B77b0f5;
case 0x77b0fa:goto L77b0fa;
case 0x77b0fb:c.instructions+=1;goto B77b0fb;
case 0x77b100:goto L77b100;
case 0x77b105:c.instructions+=1;goto B77b105;
case 0x77b10a:goto L77b10a;
case 0x77b10f:c.instructions+=1;goto B77b10f;
case 0x77b114:goto L77b114;
case 0x77b115:c.instructions+=1;goto B77b115;
case 0x77b120:goto L77b120;
case 0x77b125:c.instructions+=1;goto B77b125;
case 0x77b12a:goto L77b12a;
case 0x77b12f:c.instructions+=1;goto B77b12f;
case 0x77b134:goto L77b134;
case 0x77b135:c.instructions+=1;goto B77b135;
case 0x77b140:goto L77b140;
case 0x77b145:c.instructions+=1;goto B77b145;
case 0x77b14a:goto L77b14a;
case 0x77b14d:c.instructions+=2;goto B77b14d;
case 0x77b152:c.instructions+=1;goto B77b152;
case 0x77b160:goto L77b160;
case 0x77b165:c.instructions+=1;goto B77b165;
case 0x77b16a:goto L77b16a;
case 0x77b16d:c.instructions+=2;goto B77b16d;
case 0x77b172:c.instructions+=1;goto B77b172;
case 0x77b180:goto L77b180;
case 0x77b185:c.instructions+=1;goto B77b185;
case 0x77b18a:goto L77b18a;
case 0x77b18d:c.instructions+=2;goto B77b18d;
case 0x77b192:c.instructions+=1;goto B77b192;
case 0x77b1a0:goto L77b1a0;
case 0x77b1a5:c.instructions+=1;goto B77b1a5;
case 0x77b1aa:goto L77b1aa;
case 0x77b1ad:c.instructions+=2;goto B77b1ad;
case 0x77b1b2:c.instructions+=1;goto B77b1b2;
case 0x77b1c0:goto L77b1c0;
case 0x77b1c5:c.instructions+=1;goto B77b1c5;
case 0x77b1ca:goto L77b1ca;
case 0x77b1cd:c.instructions+=2;goto B77b1cd;
case 0x77b1d2:c.instructions+=1;goto B77b1d2;
case 0x77b1e0:goto L77b1e0;
case 0x77b1e5:c.instructions+=1;goto B77b1e5;
case 0x77b1ea:goto L77b1ea;
case 0x77b1ed:c.instructions+=2;goto B77b1ed;
case 0x77b1f2:c.instructions+=1;goto B77b1f2;
case 0x77b200:goto L77b200;
case 0x77b205:c.instructions+=1;goto B77b205;
case 0x77b20a:goto L77b20a;
case 0x77b20d:c.instructions+=2;goto B77b20d;
case 0x77b212:c.instructions+=1;goto B77b212;
case 0x77b220:goto L77b220;
case 0x77b225:c.instructions+=1;goto B77b225;
case 0x77b22a:goto L77b22a;
case 0x77b22d:c.instructions+=2;goto B77b22d;
case 0x77b232:c.instructions+=1;goto B77b232;
case 0x77b240:goto L77b240;
case 0x77b245:c.instructions+=1;goto B77b245;
case 0x77b24a:goto L77b24a;
case 0x77b24d:c.instructions+=2;goto B77b24d;
case 0x77b252:c.instructions+=1;goto B77b252;
case 0x77b260:goto L77b260;
case 0x77b265:c.instructions+=1;goto B77b265;
case 0x77b26a:goto L77b26a;
case 0x77b26d:c.instructions+=2;goto B77b26d;
case 0x77b272:c.instructions+=1;goto B77b272;
case 0x77b280:goto L77b280;
case 0x77b285:c.instructions+=1;goto B77b285;
case 0x77b28a:goto L77b28a;
case 0x77b28d:c.instructions+=2;goto B77b28d;
case 0x77b292:c.instructions+=1;goto B77b292;
case 0x77b2a0:goto L77b2a0;
case 0x77b2a5:c.instructions+=1;goto B77b2a5;
case 0x77b2aa:goto L77b2aa;
case 0x77b2ad:c.instructions+=2;goto B77b2ad;
case 0x77b2b2:c.instructions+=1;goto B77b2b2;
case 0x77b2c0:goto L77b2c0;
case 0x77b2c5:c.instructions+=1;goto B77b2c5;
case 0x77b2ca:goto L77b2ca;
case 0x77b2cd:c.instructions+=2;goto B77b2cd;
case 0x77b2d2:c.instructions+=1;goto B77b2d2;
case 0x77b2e0:goto L77b2e0;
case 0x77b2e5:c.instructions+=1;goto B77b2e5;
case 0x77b2ea:goto L77b2ea;
case 0x77b2ed:c.instructions+=2;goto B77b2ed;
case 0x77b2f2:c.instructions+=1;goto B77b2f2;
case 0x77b300:goto L77b300;
case 0x77b305:c.instructions+=1;goto B77b305;
case 0x77b30a:goto L77b30a;
case 0x77b30d:c.instructions+=2;goto B77b30d;
case 0x77b312:c.instructions+=1;goto B77b312;
case 0x77b320:goto L77b320;
case 0x77b325:c.instructions+=1;goto B77b325;
case 0x77b32a:goto L77b32a;
case 0x77b32d:c.instructions+=2;goto B77b32d;
case 0x77b332:c.instructions+=1;goto B77b332;
case 0x77b340:goto L77b340;
case 0x77b345:c.instructions+=1;goto B77b345;
case 0x77b34a:goto L77b34a;
case 0x77b34d:c.instructions+=2;goto B77b34d;
case 0x77b352:c.instructions+=1;goto B77b352;
case 0x77b360:goto L77b360;
case 0x77b365:c.instructions+=1;goto B77b365;
case 0x77b36a:goto L77b36a;
case 0x77b36d:c.instructions+=2;goto B77b36d;
case 0x77b372:c.instructions+=1;goto B77b372;
case 0x77b380:goto L77b380;
case 0x77b385:c.instructions+=1;goto B77b385;
case 0x77b38a:goto L77b38a;
case 0x77b38d:c.instructions+=2;goto B77b38d;
case 0x77b392:c.instructions+=1;goto B77b392;
case 0x77b3a0:goto L77b3a0;
case 0x77b3a5:c.instructions+=1;goto B77b3a5;
case 0x77b3aa:goto L77b3aa;
case 0x77b3ad:c.instructions+=2;goto B77b3ad;
case 0x77b3b2:c.instructions+=1;goto B77b3b2;
case 0x77b3c0:goto L77b3c0;
case 0x77b3c5:c.instructions+=1;goto B77b3c5;
case 0x77b3ca:goto L77b3ca;
case 0x77b3cd:c.instructions+=2;goto B77b3cd;
case 0x77b3d2:c.instructions+=1;goto B77b3d2;
case 0x77b3e0:goto L77b3e0;
case 0x77b3e5:c.instructions+=62;goto B77b3e5;
case 0x77b3eb:c.instructions+=61;goto B77b3eb;
case 0x77b3f1:c.instructions+=60;goto B77b3f1;
case 0x77b3f6:c.instructions+=59;goto B77b3f6;
case 0x77b3fb:c.instructions+=58;goto B77b3fb;
case 0x77b401:c.instructions+=57;goto B77b401;
case 0x77b407:c.instructions+=56;goto B77b407;
case 0x77b40d:c.instructions+=55;goto B77b40d;
case 0x77b413:c.instructions+=54;goto B77b413;
case 0x77b418:c.instructions+=53;goto B77b418;
case 0x77b41d:c.instructions+=52;goto B77b41d;
case 0x77b423:c.instructions+=51;goto B77b423;
case 0x77b429:c.instructions+=50;goto B77b429;
case 0x77b42f:c.instructions+=49;goto B77b42f;
case 0x77b435:c.instructions+=48;goto B77b435;
case 0x77b43a:c.instructions+=47;goto B77b43a;
case 0x77b43f:c.instructions+=46;goto B77b43f;
case 0x77b445:c.instructions+=45;goto B77b445;
case 0x77b44b:c.instructions+=44;goto B77b44b;
case 0x77b451:c.instructions+=43;goto B77b451;
case 0x77b457:c.instructions+=42;goto B77b457;
case 0x77b45c:c.instructions+=41;goto B77b45c;
case 0x77b461:c.instructions+=40;goto B77b461;
case 0x77b467:c.instructions+=39;goto B77b467;
case 0x77b46d:c.instructions+=38;goto B77b46d;
case 0x77b473:c.instructions+=37;goto B77b473;
case 0x77b479:c.instructions+=36;goto B77b479;
case 0x77b47e:c.instructions+=35;goto B77b47e;
case 0x77b483:c.instructions+=34;goto B77b483;
case 0x77b489:c.instructions+=33;goto B77b489;
case 0x77b48f:c.instructions+=32;goto B77b48f;
case 0x77b495:c.instructions+=31;goto B77b495;
case 0x77b49b:c.instructions+=30;goto B77b49b;
case 0x77b4a0:c.instructions+=29;goto B77b4a0;
case 0x77b4a5:c.instructions+=28;goto B77b4a5;
case 0x77b4ab:c.instructions+=27;goto B77b4ab;
case 0x77b4b1:c.instructions+=26;goto B77b4b1;
case 0x77b4b7:c.instructions+=25;goto B77b4b7;
case 0x77b4bd:c.instructions+=24;goto B77b4bd;
case 0x77b4c7:c.instructions+=23;goto B77b4c7;
case 0x77b4d1:c.instructions+=22;goto B77b4d1;
case 0x77b4db:c.instructions+=21;goto B77b4db;
case 0x77b4e5:c.instructions+=20;goto B77b4e5;
case 0x77b4ef:c.instructions+=19;goto B77b4ef;
case 0x77b4f9:c.instructions+=18;goto B77b4f9;
case 0x77b503:c.instructions+=17;goto B77b503;
case 0x77b50d:c.instructions+=16;goto B77b50d;
case 0x77b517:c.instructions+=15;goto B77b517;
case 0x77b521:c.instructions+=14;goto B77b521;
case 0x77b52b:c.instructions+=13;goto B77b52b;
case 0x77b535:c.instructions+=12;goto B77b535;
case 0x77b53f:c.instructions+=11;goto B77b53f;
case 0x77b549:c.instructions+=10;goto B77b549;
case 0x77b553:c.instructions+=9;goto B77b553;
case 0x77b55d:c.instructions+=8;goto B77b55d;
case 0x77b567:c.instructions+=7;goto B77b567;
case 0x77b571:c.instructions+=6;goto B77b571;
case 0x77b576:c.instructions+=5;goto B77b576;
case 0x77b580:c.instructions+=4;goto B77b580;
case 0x77b586:c.instructions+=3;goto B77b586;
case 0x77b590:c.instructions+=2;goto B77b590;
case 0x77b596:c.instructions+=1;goto B77b596;
case 0x77b5a0:goto L77b5a0;
case 0x77b5a5:c.instructions+=1;goto B77b5a5;
case 0x77b5aa:goto L77b5aa;
case 0x77b5af:c.instructions+=1;goto B77b5af;
case 0x77b5b4:goto L77b5b4;
case 0x77b5b5:c.instructions+=1;goto B77b5b5;
case 0x77b5c0:goto L77b5c0;
case 0x77b5c5:c.instructions+=1;goto B77b5c5;
case 0x77b5ca:goto L77b5ca;
case 0x77b5cf:c.instructions+=1;goto B77b5cf;
case 0x77b5d4:goto L77b5d4;
case 0x77b5d5:c.instructions+=1;goto B77b5d5;
case 0x77b5e0:goto L77b5e0;
case 0x77b5e5:c.instructions+=1;goto B77b5e5;
case 0x77b5ea:goto L77b5ea;
case 0x77b5ef:c.instructions+=1;goto B77b5ef;
case 0x77b5f4:goto L77b5f4;
case 0x77b5f5:c.instructions+=1;goto B77b5f5;
case 0x77b600:goto L77b600;
case 0x77b605:c.instructions+=1;goto B77b605;
case 0x77b60a:goto L77b60a;
case 0x77b60f:c.instructions+=1;goto B77b60f;
case 0x77b614:goto L77b614;
case 0x77b615:c.instructions+=1;goto B77b615;
case 0x77b620:goto L77b620;
case 0x77b625:c.instructions+=6;goto B77b625;
case 0x77b62a:c.instructions+=5;goto B77b62a;
case 0x77b62f:c.instructions+=4;goto B77b62f;
case 0x77b631:c.instructions+=3;goto B77b631;
case 0x77b63b:c.instructions+=2;goto B77b63b;
case 0x77b640:c.instructions+=1;goto B77b640;
case 0x77b650:goto L77b650;
case 0x77b655:c.instructions+=1;goto B77b655;
case 0x77b65a:goto L77b65a;
case 0x77b65f:c.instructions+=1;goto B77b65f;
case 0x77b664:goto L77b664;
case 0x77b665:c.instructions+=1;goto B77b665;
case 0x77b670:goto L77b670;
case 0x77b675:c.instructions+=1;goto B77b675;
case 0x77b67a:goto L77b67a;
case 0x77b67f:c.instructions+=1;goto B77b67f;
case 0x77b684:goto L77b684;
case 0x77b685:c.instructions+=1;goto B77b685;
case 0x77b690:goto L77b690;
case 0x77b696:c.instructions+=3;goto B77b696;
case 0x77b69c:c.instructions+=2;goto B77b69c;
case 0x77b6a2:c.instructions+=1;goto B77b6a2;
case 0x77b6b0:goto L77b6b0;
case 0x77b6b5:c.instructions+=12;goto B77b6b5;
case 0x77b6bb:c.instructions+=11;goto B77b6bb;
case 0x77b6bd:c.instructions+=10;goto B77b6bd;
case 0x77b6c3:c.instructions+=9;goto B77b6c3;
case 0x77b6c9:c.instructions+=8;goto B77b6c9;
case 0x77b6ce:c.instructions+=7;goto B77b6ce;
case 0x77b6d0:c.instructions+=6;goto B77b6d0;
case 0x77b6d6:c.instructions+=5;goto B77b6d6;
case 0x77b6d8:c.instructions+=4;goto B77b6d8;
case 0x77b6dd:c.instructions+=3;goto B77b6dd;
case 0x77b6e3:c.instructions+=2;goto B77b6e3;
case 0x77b6e9:c.instructions+=1;goto B77b6e9;
case 0x77b6f0:goto L77b6f0;
case 0x77b6f5:c.instructions+=1;goto B77b6f5;
case 0x77b6fa:goto L77b6fa;
case 0x77b6ff:c.instructions+=2;goto B77b6ff;
case 0x77b704:c.instructions+=1;goto B77b704;
case 0x77b709:goto L77b709;
case 0x77b70e:c.instructions+=5;goto B77b70e;
case 0x77b713:c.instructions+=4;goto B77b713;
case 0x77b71d:c.instructions+=3;goto B77b71d;
case 0x77b727:c.instructions+=2;goto B77b727;
case 0x77b731:c.instructions+=1;goto B77b731;
case 0x77b736:goto L77b736;
case 0x77b73b:c.instructions+=2;goto B77b73b;
case 0x77b740:c.instructions+=1;goto B77b740;
case 0x77b745:goto L77b745;
case 0x77b74a:c.instructions+=5;goto B77b74a;
case 0x77b74f:c.instructions+=4;goto B77b74f;
case 0x77b759:c.instructions+=3;goto B77b759;
case 0x77b763:c.instructions+=2;goto B77b763;
case 0x77b76d:c.instructions+=1;goto B77b76d;
case 0x77b772:goto L77b772;
case 0x77b777:c.instructions+=2;goto B77b777;
case 0x77b77c:c.instructions+=1;goto B77b77c;
case 0x77b781:goto L77b781;
case 0x77b786:c.instructions+=5;goto B77b786;
case 0x77b78b:c.instructions+=4;goto B77b78b;
case 0x77b795:c.instructions+=3;goto B77b795;
case 0x77b79f:c.instructions+=2;goto B77b79f;
case 0x77b7a9:c.instructions+=1;goto B77b7a9;
case 0x77b7ae:goto L77b7ae;
case 0x77b7b3:c.instructions+=2;goto B77b7b3;
case 0x77b7b8:c.instructions+=1;goto B77b7b8;
case 0x77b7bd:goto L77b7bd;
case 0x77b7c2:c.instructions+=5;goto B77b7c2;
case 0x77b7c7:c.instructions+=4;goto B77b7c7;
case 0x77b7d1:c.instructions+=3;goto B77b7d1;
case 0x77b7db:c.instructions+=2;goto B77b7db;
case 0x77b7e5:c.instructions+=1;goto B77b7e5;
case 0x77b7ea:goto L77b7ea;
case 0x77b7ef:c.instructions+=2;goto B77b7ef;
case 0x77b7f4:c.instructions+=1;goto B77b7f4;
case 0x77b7f9:goto L77b7f9;
case 0x77b7fe:c.instructions+=5;goto B77b7fe;
case 0x77b803:c.instructions+=4;goto B77b803;
case 0x77b80d:c.instructions+=3;goto B77b80d;
case 0x77b817:c.instructions+=2;goto B77b817;
case 0x77b821:c.instructions+=1;goto B77b821;
case 0x77b826:goto L77b826;
case 0x77b82b:c.instructions+=2;goto B77b82b;
case 0x77b830:c.instructions+=1;goto B77b830;
case 0x77b835:goto L77b835;
case 0x77b838:c.instructions+=2;goto B77b838;
case 0x77b83d:c.instructions+=1;goto B77b83d;
case 0x77b840:goto L77b840;
case 0x77b845:c.instructions+=2;goto B77b845;
case 0x77b84a:c.instructions+=1;goto B77b84a;
case 0x77b850:goto L77b850;
case 0x77b856:c.instructions+=3;goto B77b856;
case 0x77b85c:c.instructions+=2;goto B77b85c;
case 0x77b862:c.instructions+=1;goto B77b862;
case 0x77b870:goto L77b870;
case 0x77b876:c.instructions+=4;goto B77b876;
case 0x77b87c:c.instructions+=3;goto B77b87c;
case 0x77b882:c.instructions+=2;goto B77b882;
case 0x77b888:c.instructions+=1;goto B77b888;
case 0x77b890:goto L77b890;
case 0x77b896:c.instructions+=3;goto B77b896;
case 0x77b89c:c.instructions+=2;goto B77b89c;
case 0x77b8a2:c.instructions+=1;goto B77b8a2;
case 0x77b8b0:goto L77b8b0;
case 0x77b8b6:c.instructions+=4;goto B77b8b6;
case 0x77b8bc:c.instructions+=3;goto B77b8bc;
case 0x77b8c2:c.instructions+=2;goto B77b8c2;
case 0x77b8c8:c.instructions+=1;goto B77b8c8;
case 0x77b8d0:goto L77b8d0;
case 0x77b8d6:c.instructions+=4;goto B77b8d6;
case 0x77b8dc:c.instructions+=3;goto B77b8dc;
case 0x77b8e2:c.instructions+=2;goto B77b8e2;
case 0x77b8e8:c.instructions+=1;goto B77b8e8;
case 0x77b8f0:goto L77b8f0;
case 0x77b8f6:c.instructions+=6;goto B77b8f6;
case 0x77b8fc:c.instructions+=5;goto B77b8fc;
case 0x77b902:c.instructions+=4;goto B77b902;
case 0x77b908:c.instructions+=3;goto B77b908;
case 0x77b90e:c.instructions+=2;goto B77b90e;
case 0x77b914:c.instructions+=1;goto B77b914;
case 0x77b920:goto L77b920;
case 0x77b926:c.instructions+=4;goto B77b926;
case 0x77b92c:c.instructions+=3;goto B77b92c;
case 0x77b932:c.instructions+=2;goto B77b932;
case 0x77b938:c.instructions+=1;goto B77b938;
case 0x77b940:goto L77b940;
case 0x77b946:c.instructions+=3;goto B77b946;
case 0x77b948:c.instructions+=2;goto B77b948;
case 0x77b94e:c.instructions+=1;goto B77b94e;
case 0x77b950:goto L77b950;
case 0x77b956:c.instructions+=5;goto B77b956;
case 0x77b95c:c.instructions+=4;goto B77b95c;
case 0x77b962:c.instructions+=3;goto B77b962;
case 0x77b968:c.instructions+=2;goto B77b968;
case 0x77b96e:c.instructions+=1;goto B77b96e;
case 0x77b970:goto L77b970;
case 0x77b976:c.instructions+=5;goto B77b976;
case 0x77b97c:c.instructions+=4;goto B77b97c;
case 0x77b982:c.instructions+=3;goto B77b982;
case 0x77b988:c.instructions+=2;goto B77b988;
case 0x77b98e:c.instructions+=1;goto B77b98e;
case 0x77b990:goto L77b990;
case 0x77b995:c.instructions+=2;goto B77b995;
case 0x77b99a:c.instructions+=1;goto B77b99a;
case 0x77b9a0:goto L77b9a0;
case 0x77b9a6:c.instructions+=3;goto B77b9a6;
case 0x77b9a8:c.instructions+=2;goto B77b9a8;
case 0x77b9ae:c.instructions+=1;goto B77b9ae;
case 0x77b9b0:goto L77b9b0;
case 0x77b9b5:c.instructions+=2;goto B77b9b5;
case 0x77b9ba:c.instructions+=1;goto B77b9ba;
case 0x77b9c0:goto L77b9c0;
case 0x77b9c6:c.instructions+=5;goto B77b9c6;
case 0x77b9cc:c.instructions+=4;goto B77b9cc;
case 0x77b9d2:c.instructions+=3;goto B77b9d2;
case 0x77b9d8:c.instructions+=2;goto B77b9d8;
case 0x77b9de:c.instructions+=1;goto B77b9de;
case 0x77b9e0:goto L77b9e0;
case 0x77b9e6:c.instructions+=1;goto B77b9e6;
case 0x77b9eb:goto L77b9eb;
case 0x77b9f0:c.instructions+=1;goto B77b9f0;
case 0x77ba00:goto L77ba00;
case 0x77ba06:c.instructions+=6;goto B77ba06;
case 0x77ba0c:c.instructions+=5;goto B77ba0c;
case 0x77ba12:c.instructions+=4;goto B77ba12;
case 0x77ba18:c.instructions+=3;goto B77ba18;
case 0x77ba1e:c.instructions+=2;goto B77ba1e;
case 0x77ba20:c.instructions+=1;goto B77ba20;
case 0x77ba25:goto L77ba25;
case 0x77ba2a:c.instructions+=1;goto B77ba2a;
case 0x77ba30:goto L77ba30;
case 0x77ba36:c.instructions+=5;goto B77ba36;
case 0x77ba3c:c.instructions+=4;goto B77ba3c;
case 0x77ba42:c.instructions+=3;goto B77ba42;
case 0x77ba48:c.instructions+=2;goto B77ba48;
case 0x77ba4a:c.instructions+=1;goto B77ba4a;
case 0x77ba4f:goto L77ba4f;
case 0x77ba54:c.instructions+=1;goto B77ba54;
case 0x77ba60:goto L77ba60;
case 0x77ba66:c.instructions+=6;goto B77ba66;
case 0x77ba6c:c.instructions+=5;goto B77ba6c;
case 0x77ba72:c.instructions+=4;goto B77ba72;
case 0x77ba78:c.instructions+=3;goto B77ba78;
case 0x77ba7a:c.instructions+=2;goto B77ba7a;
case 0x77ba7c:c.instructions+=1;goto B77ba7c;
case 0x77ba81:goto L77ba81;
case 0x77ba83:c.instructions+=2;goto B77ba83;
case 0x77ba88:c.instructions+=1;goto B77ba88;
case 0x77ba90:goto L77ba90;
case 0x77ba96:c.instructions+=6;goto B77ba96;
case 0x77ba9c:c.instructions+=5;goto B77ba9c;
case 0x77baa2:c.instructions+=4;goto B77baa2;
case 0x77baa8:c.instructions+=3;goto B77baa8;
case 0x77baaa:c.instructions+=2;goto B77baaa;
case 0x77baac:c.instructions+=1;goto B77baac;
case 0x77bab1:goto L77bab1;
case 0x77bab3:c.instructions+=2;goto B77bab3;
case 0x77bab8:c.instructions+=1;goto B77bab8;
case 0x77bac0:goto L77bac0;
case 0x77bac6:c.instructions+=6;goto B77bac6;
case 0x77bacc:c.instructions+=5;goto B77bacc;
case 0x77bad2:c.instructions+=4;goto B77bad2;
case 0x77bad8:c.instructions+=3;goto B77bad8;
case 0x77bade:c.instructions+=2;goto B77bade;
case 0x77bae0:c.instructions+=1;goto B77bae0;
case 0x77bae5:goto L77bae5;
case 0x77baea:c.instructions+=1;goto B77baea;
case 0x77baf0:goto L77baf0;
case 0x77baf6:c.instructions+=6;goto B77baf6;
case 0x77bafc:c.instructions+=5;goto B77bafc;
case 0x77bb02:c.instructions+=4;goto B77bb02;
case 0x77bb08:c.instructions+=3;goto B77bb08;
case 0x77bb0e:c.instructions+=2;goto B77bb0e;
case 0x77bb10:c.instructions+=1;goto B77bb10;
case 0x77bb15:goto L77bb15;
case 0x77bb1a:c.instructions+=1;goto B77bb1a;
case 0x77bb20:goto L77bb20;
case 0x77bb26:c.instructions+=2;goto B77bb26;
case 0x77bb2c:c.instructions+=1;goto B77bb2c;
case 0x77bb31:goto L77bb31;
case 0x77bb36:c.instructions+=1;goto B77bb36;
case 0x77bb40:goto L77bb40;
case 0x77bb46:c.instructions+=2;goto B77bb46;
case 0x77bb4c:c.instructions+=1;goto B77bb4c;
case 0x77bb51:goto L77bb51;
case 0x77bb56:c.instructions+=1;goto B77bb56;
case 0x77bb60:goto L77bb60;
case 0x77bb66:c.instructions+=2;goto B77bb66;
case 0x77bb6c:c.instructions+=1;goto B77bb6c;
case 0x77bb71:goto L77bb71;
case 0x77bb76:c.instructions+=1;goto B77bb76;
case 0x77bb80:goto L77bb80;
case 0x77bb86:c.instructions+=2;goto B77bb86;
case 0x77bb8c:c.instructions+=1;goto B77bb8c;
case 0x77bb91:goto L77bb91;
case 0x77bb96:c.instructions+=1;goto B77bb96;
case 0x77bba0:goto L77bba0;
case 0x77bba6:c.instructions+=2;goto B77bba6;
case 0x77bbac:c.instructions+=1;goto B77bbac;
case 0x77bbb1:goto L77bbb1;
case 0x77bbb6:c.instructions+=1;goto B77bbb6;
case 0x77bbc0:goto L77bbc0;
case 0x77bbc6:c.instructions+=2;goto B77bbc6;
case 0x77bbcc:c.instructions+=1;goto B77bbcc;
case 0x77bbd1:goto L77bbd1;
case 0x77bbd6:c.instructions+=1;goto B77bbd6;
case 0x77bbe0:goto L77bbe0;
case 0x77bbe6:c.instructions+=2;goto B77bbe6;
case 0x77bbec:c.instructions+=1;goto B77bbec;
case 0x77bbf1:goto L77bbf1;
case 0x77bbf6:c.instructions+=1;goto B77bbf6;
case 0x77bc00:goto L77bc00;
case 0x77bc06:c.instructions+=2;goto B77bc06;
case 0x77bc0c:c.instructions+=1;goto B77bc0c;
case 0x77bc11:goto L77bc11;
case 0x77bc16:c.instructions+=1;goto B77bc16;
case 0x77bc20:goto L77bc20;
case 0x77bc26:c.instructions+=2;goto B77bc26;
case 0x77bc2c:c.instructions+=1;goto B77bc2c;
case 0x77bc31:goto L77bc31;
case 0x77bc36:c.instructions+=1;goto B77bc36;
case 0x77bc40:goto L77bc40;
case 0x77bc46:c.instructions+=2;goto B77bc46;
case 0x77bc4c:c.instructions+=1;goto B77bc4c;
case 0x77bc51:goto L77bc51;
case 0x77bc56:c.instructions+=1;goto B77bc56;
case 0x77bc60:goto L77bc60;
case 0x77bc66:c.instructions+=2;goto B77bc66;
case 0x77bc6c:c.instructions+=1;goto B77bc6c;
case 0x77bc71:goto L77bc71;
case 0x77bc76:c.instructions+=1;goto B77bc76;
case 0x77bc80:goto L77bc80;
case 0x77bc86:c.instructions+=2;goto B77bc86;
case 0x77bc8c:c.instructions+=1;goto B77bc8c;
case 0x77bc91:goto L77bc91;
case 0x77bc96:c.instructions+=1;goto B77bc96;
case 0x77bca0:goto L77bca0;
case 0x77bca6:c.instructions+=2;goto B77bca6;
case 0x77bcac:c.instructions+=1;goto B77bcac;
case 0x77bcb1:goto L77bcb1;
case 0x77bcb6:c.instructions+=1;goto B77bcb6;
case 0x77bcc0:goto L77bcc0;
case 0x77bcc6:c.instructions+=2;goto B77bcc6;
case 0x77bccc:c.instructions+=1;goto B77bccc;
case 0x77bcd1:goto L77bcd1;
case 0x77bcd6:c.instructions+=1;goto B77bcd6;
case 0x77bce0:goto L77bce0;
case 0x77bce6:c.instructions+=2;goto B77bce6;
case 0x77bcec:c.instructions+=1;goto B77bcec;
case 0x77bcf1:goto L77bcf1;
case 0x77bcf6:c.instructions+=1;goto B77bcf6;
case 0x77bd00:goto L77bd00;
case 0x77bd06:c.instructions+=2;goto B77bd06;
case 0x77bd0c:c.instructions+=1;goto B77bd0c;
case 0x77bd11:goto L77bd11;
case 0x77bd16:c.instructions+=1;goto B77bd16;
case 0x77bd20:goto L77bd20;
case 0x77bd26:c.instructions+=1;goto B77bd26;
case 0x77bd2b:goto L77bd2b;
case 0x77bd30:c.instructions+=1;goto B77bd30;
case 0x77bd40:goto L77bd40;
case 0x77bd46:c.instructions+=2;goto B77bd46;
case 0x77bd4c:c.instructions+=1;goto B77bd4c;
case 0x77bd51:goto L77bd51;
case 0x77bd56:c.instructions+=1;goto B77bd56;
case 0x77bd60:goto L77bd60;
case 0x77bd66:c.instructions+=2;goto B77bd66;
case 0x77bd6c:c.instructions+=1;goto B77bd6c;
case 0x77bd71:goto L77bd71;
case 0x77bd76:c.instructions+=1;goto B77bd76;
case 0x77bd80:goto L77bd80;
case 0x77bd85:c.instructions+=1;goto B77bd85;
case 0x77bd8a:goto L77bd8a;
case 0x77bd8f:c.instructions+=1;goto B77bd8f;
case 0x77bd94:goto L77bd94;
case 0x77bd95:c.instructions+=1;goto B77bd95;
case 0x77bda0:goto L77bda0;
case 0x77bda6:c.instructions+=3;goto B77bda6;
case 0x77bda8:c.instructions+=2;goto B77bda8;
case 0x77bdae:c.instructions+=1;goto B77bdae;
case 0x77bdb0:goto L77bdb0;
case 0x77bdb6:c.instructions+=3;goto B77bdb6;
case 0x77bdbc:c.instructions+=2;goto B77bdbc;
case 0x77bdc2:c.instructions+=1;goto B77bdc2;
case 0x77bdd0:goto L77bdd0;
case 0x77bdd6:c.instructions+=3;goto B77bdd6;
case 0x77bdd8:c.instructions+=2;goto B77bdd8;
case 0x77bdde:c.instructions+=1;goto B77bdde;
case 0x77bde0:goto L77bde0;
case 0x77bde6:c.instructions+=3;goto B77bde6;
case 0x77bdec:c.instructions+=2;goto B77bdec;
case 0x77bdf2:c.instructions+=1;goto B77bdf2;
case 0x77be00:goto L77be00;
case 0x77be02:c.instructions+=3;goto B77be02;
case 0x77be07:c.instructions+=2;goto B77be07;
case 0x77be0c:c.instructions+=1;goto B77be0c;
case 0x77be11:goto L77be11;
case 0x77be20:goto L77be20;
case 0x77be26:c.instructions+=8;goto B77be26;
case 0x77be2b:c.instructions+=7;goto B77be2b;
case 0x77be31:c.instructions+=6;goto B77be31;
case 0x77be36:c.instructions+=5;goto B77be36;
case 0x77be38:c.instructions+=4;goto B77be38;
case 0x77be39:c.instructions+=3;goto B77be39;
case 0x77be3e:c.instructions+=2;goto B77be3e;
case 0x77be41:c.instructions+=1;goto B77be41;
case 0x77be46:goto L77be46;
case 0x77be4b:c.instructions+=1;goto B77be4b;
case 0x77be50:goto L77be50;
case 0x77be51:c.instructions+=1;goto B77be51;
case 0x77be60:goto L77be60;
case 0x77be69:c.instructions+=1;goto B77be69;
case 0x77be70:goto L77be70;
case 0x77be79:c.instructions+=1;goto B77be79;
case 0x77be80:goto L77be80;
case 0x77be89:c.instructions+=1;goto B77be89;
case 0x77be90:goto L77be90;
case 0x77be95:c.instructions+=1;goto B77be95;
case 0x77be9a:goto L77be9a;
case 0x77be9b:c.instructions+=1;goto B77be9b;
case 0x77bea0:goto L77bea0;
case 0x77bea5:c.instructions+=20;goto B77bea5;
case 0x77beab:c.instructions+=19;goto B77beab;
case 0x77beae:c.instructions+=18;goto B77beae;
case 0x77beb4:c.instructions+=17;goto B77beb4;
case 0x77beb9:c.instructions+=16;goto B77beb9;
case 0x77bebb:c.instructions+=15;goto B77bebb;
case 0x77bec1:c.instructions+=14;goto B77bec1;
case 0x77bec3:c.instructions+=13;goto B77bec3;
case 0x77bec8:c.instructions+=12;goto B77bec8;
case 0x77beca:c.instructions+=11;goto B77beca;
case 0x77bed0:c.instructions+=10;goto B77bed0;
case 0x77bed2:c.instructions+=9;goto B77bed2;
case 0x77bed7:c.instructions+=8;goto B77bed7;
case 0x77bed9:c.instructions+=7;goto B77bed9;
case 0x77bedf:c.instructions+=6;goto B77bedf;
case 0x77bee1:c.instructions+=5;goto B77bee1;
case 0x77bee6:c.instructions+=4;goto B77bee6;
case 0x77bee8:c.instructions+=3;goto B77bee8;
case 0x77beea:c.instructions+=2;goto B77beea;
case 0x77bef0:c.instructions+=1;goto B77bef0;
case 0x77bf00:goto L77bf00;
case 0x77bf06:c.instructions+=3;goto B77bf06;
case 0x77bf0c:c.instructions+=2;goto B77bf0c;
case 0x77bf12:c.instructions+=1;goto B77bf12;
case 0x77bf20:goto L77bf20;
case 0x77bf22:c.instructions+=2;goto B77bf22;
case 0x77bf27:c.instructions+=1;goto B77bf27;
case 0x77bf2c:goto L77bf2c;
case 0x77bf31:c.instructions+=1;goto B77bf31;
case 0x77bf36:goto L77bf36;
case 0x77bf37:c.instructions+=1;goto B77bf37;
case 0x77bf40:goto L77bf40;
case 0x77bf46:c.instructions+=5;goto B77bf46;
case 0x77bf48:c.instructions+=4;goto B77bf48;
case 0x77bf4e:c.instructions+=3;goto B77bf4e;
case 0x77bf50:c.instructions+=2;goto B77bf50;
case 0x77bf53:c.instructions+=1;goto B77bf53;
case 0x77bf55:goto L77bf55;
case 0x77bf5f:goto L77bf5f;
case 0x77bf64:c.instructions+=1;goto B77bf64;
case 0x77bf69:goto L77bf69;
case 0x77bf6a:c.instructions+=1;goto B77bf6a;
case 0x77bf70:goto L77bf70;
case 0x77bf76:c.instructions+=5;goto B77bf76;
case 0x77bf78:c.instructions+=4;goto B77bf78;
case 0x77bf7e:c.instructions+=3;goto B77bf7e;
case 0x77bf80:c.instructions+=2;goto B77bf80;
case 0x77bf83:c.instructions+=1;goto B77bf83;
case 0x77bf85:goto L77bf85;
case 0x77bf8f:goto L77bf8f;
case 0x77bf94:c.instructions+=1;goto B77bf94;
case 0x77bf99:goto L77bf99;
case 0x77bf9a:c.instructions+=1;goto B77bf9a;
case 0x77bfa0:goto L77bfa0;
case 0x77bfa6:c.instructions+=10;goto B77bfa6;
case 0x77bfab:c.instructions+=9;goto B77bfab;
case 0x77bfb1:c.instructions+=8;goto B77bfb1;
case 0x77bfb6:c.instructions+=7;goto B77bfb6;
case 0x77bfbc:c.instructions+=6;goto B77bfbc;
case 0x77bfc2:c.instructions+=5;goto B77bfc2;
case 0x77bfc4:c.instructions+=4;goto B77bfc4;
case 0x77bfca:c.instructions+=3;goto B77bfca;
case 0x77bfcc:c.instructions+=2;goto B77bfcc;
case 0x77bfcf:c.instructions+=1;goto B77bfcf;
case 0x77bfd1:goto L77bfd1;
case 0x77bfdb:goto L77bfdb;
case 0x77bfe0:c.instructions+=2;goto B77bfe0;
case 0x77bfe6:c.instructions+=1;goto B77bfe6;
case 0x77bfeb:goto L77bfeb;
case 0x77bfec:c.instructions+=1;goto B77bfec;
case 0x77bff0:goto L77bff0;
case 0x77bff5:c.instructions+=2;goto B77bff5;
case 0x77bffb:c.instructions+=1;goto B77bffb;
default:missing_instruction(c.pc);}
B77b000:L77b000:{c.instructions+=6;NFSU2_TR(0x77b000);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b005:{NFSU2_TR(0x77b005);
u8 U[4];
w4(U+0,u32(0x4fe910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b00a:{NFSU2_TR(0x77b00a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b00c:{NFSU2_TR(0x77b00c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b00e:{NFSU2_TR(0x77b00e);
u8 U[4];
w4(U+0,u32(0x827d38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b013:{NFSU2_TR(0x77b013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b018ull));
TAIL_STATIC(0x75c461u,75c);
}
B77b018:L77b018:{c.instructions+=2;NFSU2_TR(0x77b018);
u8 U[4];
w4(U+0,u32(0x7819b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b01d:{NFSU2_TR(0x77b01d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b022ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b022:L77b022:{c.instructions+=2;NFSU2_TR(0x77b022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b023:{NFSU2_TR(0x77b023);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b030:L77b030:{c.instructions+=6;NFSU2_TR(0x77b030);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b035:{NFSU2_TR(0x77b035);
u8 U[4];
w4(U+0,u32(0x4fe910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b03a:{NFSU2_TR(0x77b03a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b03c:{NFSU2_TR(0x77b03c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b03e:{NFSU2_TR(0x77b03e);
u8 U[4];
w4(U+0,u32(0x827db8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b043:{NFSU2_TR(0x77b043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b048ull));
TAIL_STATIC(0x75c461u,75c);
}
B77b048:L77b048:{c.instructions+=2;NFSU2_TR(0x77b048);
u8 U[4];
w4(U+0,u32(0x7819d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b04d:{NFSU2_TR(0x77b04d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b052ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b052:L77b052:{c.instructions+=2;NFSU2_TR(0x77b052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b053:{NFSU2_TR(0x77b053);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b060:L77b060:{c.instructions+=6;NFSU2_TR(0x77b060);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b065:{NFSU2_TR(0x77b065);
u8 U[4];
w4(U+0,u32(0x4fe910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b06a:{NFSU2_TR(0x77b06a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b06c:{NFSU2_TR(0x77b06c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b06e:{NFSU2_TR(0x77b06e);
u8 U[4];
w4(U+0,u32(0x827e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b073:{NFSU2_TR(0x77b073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b078ull));
TAIL_STATIC(0x75c461u,75c);
}
B77b078:L77b078:{c.instructions+=2;NFSU2_TR(0x77b078);
u8 U[4];
w4(U+0,u32(0x7819f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b07d:{NFSU2_TR(0x77b07d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b082ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b082:L77b082:{c.instructions+=2;NFSU2_TR(0x77b082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b083:{NFSU2_TR(0x77b083);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b090:L77b090:{c.instructions+=6;NFSU2_TR(0x77b090);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b095:{NFSU2_TR(0x77b095);
u8 U[4];
w4(U+0,u32(0x4fe910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b09a:{NFSU2_TR(0x77b09a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b09c:{NFSU2_TR(0x77b09c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b09e:{NFSU2_TR(0x77b09e);
u8 U[4];
w4(U+0,u32(0x827cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b0a3:{NFSU2_TR(0x77b0a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b0a8ull));
TAIL_STATIC(0x75c461u,75c);
}
B77b0a8:L77b0a8:{c.instructions+=2;NFSU2_TR(0x77b0a8);
u8 U[4];
w4(U+0,u32(0x781a10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b0ad:{NFSU2_TR(0x77b0ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b0b2ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b0b2:L77b0b2:{c.instructions+=2;NFSU2_TR(0x77b0b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b0b3:{NFSU2_TR(0x77b0b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b0c0:L77b0c0:{c.instructions+=2;NFSU2_TR(0x77b0c0);
u8 U[4];
w4(U+0,u32(0x781a50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b0c5:{NFSU2_TR(0x77b0c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b0caull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b0ca:L77b0ca:{c.instructions+=2;NFSU2_TR(0x77b0ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b0cb:{NFSU2_TR(0x77b0cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b0d0:L77b0d0:{c.instructions+=2;NFSU2_TR(0x77b0d0);
u8 U[4];
w4(U+0,u32(0x781a70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b0d5:{NFSU2_TR(0x77b0d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b0daull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b0da:L77b0da:{c.instructions+=2;NFSU2_TR(0x77b0da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b0db:{NFSU2_TR(0x77b0db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b0e0:L77b0e0:{c.instructions+=2;NFSU2_TR(0x77b0e0);
u8 U[4];
w4(U+0,u32(0x781a90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b0e5:{NFSU2_TR(0x77b0e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b0eaull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b0ea:L77b0ea:{c.instructions+=2;NFSU2_TR(0x77b0ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b0eb:{NFSU2_TR(0x77b0eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b0f0:L77b0f0:{c.instructions+=2;NFSU2_TR(0x77b0f0);
u8 U[4];
w4(U+0,u32(0x781ab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b0f5:{NFSU2_TR(0x77b0f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b0faull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b0fa:L77b0fa:{c.instructions+=2;NFSU2_TR(0x77b0fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b0fb:{NFSU2_TR(0x77b0fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b100:L77b100:{c.instructions+=2;NFSU2_TR(0x77b100);
w4(R+4,u32(0x827c9cull));
}
B77b105:{NFSU2_TR(0x77b105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b10aull));
TAIL_STATIC(0x598750u,598);
}
B77b10a:L77b10a:{c.instructions+=2;NFSU2_TR(0x77b10a);
u8 U[4];
w4(U+0,u32(0x781ae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b10f:{NFSU2_TR(0x77b10f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b114ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b114:L77b114:{c.instructions+=2;NFSU2_TR(0x77b114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b115:{NFSU2_TR(0x77b115);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b120:L77b120:{c.instructions+=2;NFSU2_TR(0x77b120);
w4(R+4,u32(0x827ca4ull));
}
B77b125:{NFSU2_TR(0x77b125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b12aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77b12a:L77b12a:{c.instructions+=2;NFSU2_TR(0x77b12a);
u8 U[4];
w4(U+0,u32(0x781b40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b12f:{NFSU2_TR(0x77b12f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b134ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b134:L77b134:{c.instructions+=2;NFSU2_TR(0x77b134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b135:{NFSU2_TR(0x77b135);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b140:L77b140:{c.instructions+=2;NFSU2_TR(0x77b140);
u8 U[4];
w4(U+0,u32(0x785c3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b145:{NFSU2_TR(0x77b145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b14aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b14a:L77b14a:{c.instructions+=3;NFSU2_TR(0x77b14a);
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
B77b14d:{NFSU2_TR(0x77b14d);
__builtin_memmove(gp(0x827c84),(R+0),4);
}
B77b152:{NFSU2_TR(0x77b152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b160:L77b160:{c.instructions+=2;NFSU2_TR(0x77b160);
u8 U[4];
w4(U+0,u32(0x786738ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b165:{NFSU2_TR(0x77b165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b16aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b16a:L77b16a:{c.instructions+=3;NFSU2_TR(0x77b16a);
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
B77b16d:{NFSU2_TR(0x77b16d);
__builtin_memmove(gp(0x827f54),(R+0),4);
}
B77b172:{NFSU2_TR(0x77b172);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b180:L77b180:{c.instructions+=2;NFSU2_TR(0x77b180);
u8 U[4];
w4(U+0,u32(0x786748ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b185:{NFSU2_TR(0x77b185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b18aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b18a:L77b18a:{c.instructions+=3;NFSU2_TR(0x77b18a);
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
B77b18d:{NFSU2_TR(0x77b18d);
__builtin_memmove(gp(0x827c6c),(R+0),4);
}
B77b192:{NFSU2_TR(0x77b192);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b1a0:L77b1a0:{c.instructions+=2;NFSU2_TR(0x77b1a0);
u8 U[4];
w4(U+0,u32(0x786760ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b1a5:{NFSU2_TR(0x77b1a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b1aaull));
TAIL_STATIC(0x43db50u,43d);
}
B77b1aa:L77b1aa:{c.instructions+=3;NFSU2_TR(0x77b1aa);
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
B77b1ad:{NFSU2_TR(0x77b1ad);
__builtin_memmove(gp(0x827f48),(R+0),4);
}
B77b1b2:{NFSU2_TR(0x77b1b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b1c0:L77b1c0:{c.instructions+=2;NFSU2_TR(0x77b1c0);
u8 U[4];
w4(U+0,u32(0x786774ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b1c5:{NFSU2_TR(0x77b1c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b1caull));
TAIL_STATIC(0x43db50u,43d);
}
B77b1ca:L77b1ca:{c.instructions+=3;NFSU2_TR(0x77b1ca);
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
B77b1cd:{NFSU2_TR(0x77b1cd);
__builtin_memmove(gp(0x827f4c),(R+0),4);
}
B77b1d2:{NFSU2_TR(0x77b1d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b1e0:L77b1e0:{c.instructions+=2;NFSU2_TR(0x77b1e0);
u8 U[4];
w4(U+0,u32(0x78678cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b1e5:{NFSU2_TR(0x77b1e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b1eaull));
TAIL_STATIC(0x43db50u,43d);
}
B77b1ea:L77b1ea:{c.instructions+=3;NFSU2_TR(0x77b1ea);
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
B77b1ed:{NFSU2_TR(0x77b1ed);
__builtin_memmove(gp(0x827cc8),(R+0),4);
}
B77b1f2:{NFSU2_TR(0x77b1f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b200:L77b200:{c.instructions+=2;NFSU2_TR(0x77b200);
u8 U[4];
w4(U+0,u32(0x7867a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b205:{NFSU2_TR(0x77b205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b20aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b20a:L77b20a:{c.instructions+=3;NFSU2_TR(0x77b20a);
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
B77b20d:{NFSU2_TR(0x77b20d);
__builtin_memmove(gp(0x827f44),(R+0),4);
}
B77b212:{NFSU2_TR(0x77b212);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b220:L77b220:{c.instructions+=2;NFSU2_TR(0x77b220);
u8 U[4];
w4(U+0,u32(0x7867b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b225:{NFSU2_TR(0x77b225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b22aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b22a:L77b22a:{c.instructions+=3;NFSU2_TR(0x77b22a);
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
B77b22d:{NFSU2_TR(0x77b22d);
__builtin_memmove(gp(0x827f5c),(R+0),4);
}
B77b232:{NFSU2_TR(0x77b232);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b240:L77b240:{c.instructions+=2;NFSU2_TR(0x77b240);
u8 U[4];
w4(U+0,u32(0x7867ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b245:{NFSU2_TR(0x77b245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b24aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b24a:L77b24a:{c.instructions+=3;NFSU2_TR(0x77b24a);
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
B77b24d:{NFSU2_TR(0x77b24d);
__builtin_memmove(gp(0x827f58),(R+0),4);
}
B77b252:{NFSU2_TR(0x77b252);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b260:L77b260:{c.instructions+=2;NFSU2_TR(0x77b260);
u8 U[4];
w4(U+0,u32(0x7867e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b265:{NFSU2_TR(0x77b265);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b26aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b26a:L77b26a:{c.instructions+=3;NFSU2_TR(0x77b26a);
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
B77b26d:{NFSU2_TR(0x77b26d);
__builtin_memmove(gp(0x827f50),(R+0),4);
}
B77b272:{NFSU2_TR(0x77b272);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b280:L77b280:{c.instructions+=2;NFSU2_TR(0x77b280);
u8 U[4];
w4(U+0,u32(0x7867f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b285:{NFSU2_TR(0x77b285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b28aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b28a:L77b28a:{c.instructions+=3;NFSU2_TR(0x77b28a);
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
B77b28d:{NFSU2_TR(0x77b28d);
__builtin_memmove(gp(0x827c44),(R+0),4);
}
B77b292:{NFSU2_TR(0x77b292);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b2a0:L77b2a0:{c.instructions+=2;NFSU2_TR(0x77b2a0);
u8 U[4];
w4(U+0,u32(0x786810ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b2a5:{NFSU2_TR(0x77b2a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b2aaull));
TAIL_STATIC(0x43db50u,43d);
}
B77b2aa:L77b2aa:{c.instructions+=3;NFSU2_TR(0x77b2aa);
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
B77b2ad:{NFSU2_TR(0x77b2ad);
__builtin_memmove(gp(0x827c58),(R+0),4);
}
B77b2b2:{NFSU2_TR(0x77b2b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b2c0:L77b2c0:{c.instructions+=2;NFSU2_TR(0x77b2c0);
u8 U[4];
w4(U+0,u32(0x786828ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b2c5:{NFSU2_TR(0x77b2c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b2caull));
TAIL_STATIC(0x43db50u,43d);
}
B77b2ca:L77b2ca:{c.instructions+=3;NFSU2_TR(0x77b2ca);
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
B77b2cd:{NFSU2_TR(0x77b2cd);
__builtin_memmove(gp(0x827c94),(R+0),4);
}
B77b2d2:{NFSU2_TR(0x77b2d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b2e0:L77b2e0:{c.instructions+=2;NFSU2_TR(0x77b2e0);
u8 U[4];
w4(U+0,u32(0x786838ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b2e5:{NFSU2_TR(0x77b2e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b2eaull));
TAIL_STATIC(0x43db50u,43d);
}
B77b2ea:L77b2ea:{c.instructions+=3;NFSU2_TR(0x77b2ea);
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
B77b2ed:{NFSU2_TR(0x77b2ed);
__builtin_memmove(gp(0x827c90),(R+0),4);
}
B77b2f2:{NFSU2_TR(0x77b2f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b300:L77b300:{c.instructions+=2;NFSU2_TR(0x77b300);
u8 U[4];
w4(U+0,u32(0x78684cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b305:{NFSU2_TR(0x77b305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b30aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b30a:L77b30a:{c.instructions+=3;NFSU2_TR(0x77b30a);
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
B77b30d:{NFSU2_TR(0x77b30d);
__builtin_memmove(gp(0x827c70),(R+0),4);
}
B77b312:{NFSU2_TR(0x77b312);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b320:L77b320:{c.instructions+=2;NFSU2_TR(0x77b320);
u8 U[4];
w4(U+0,u32(0x786860ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b325:{NFSU2_TR(0x77b325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b32aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b32a:L77b32a:{c.instructions+=3;NFSU2_TR(0x77b32a);
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
B77b32d:{NFSU2_TR(0x77b32d);
__builtin_memmove(gp(0x827c54),(R+0),4);
}
B77b332:{NFSU2_TR(0x77b332);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b340:L77b340:{c.instructions+=2;NFSU2_TR(0x77b340);
u8 U[4];
w4(U+0,u32(0x786874ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b345:{NFSU2_TR(0x77b345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b34aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b34a:L77b34a:{c.instructions+=3;NFSU2_TR(0x77b34a);
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
B77b34d:{NFSU2_TR(0x77b34d);
__builtin_memmove(gp(0x827c80),(R+0),4);
}
B77b352:{NFSU2_TR(0x77b352);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b360:L77b360:{c.instructions+=2;NFSU2_TR(0x77b360);
u8 U[4];
w4(U+0,u32(0x786888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b365:{NFSU2_TR(0x77b365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b36aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b36a:L77b36a:{c.instructions+=3;NFSU2_TR(0x77b36a);
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
B77b36d:{NFSU2_TR(0x77b36d);
__builtin_memmove(gp(0x827db4),(R+0),4);
}
B77b372:{NFSU2_TR(0x77b372);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b380:L77b380:{c.instructions+=2;NFSU2_TR(0x77b380);
u8 U[4];
w4(U+0,u32(0x7868a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b385:{NFSU2_TR(0x77b385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b38aull));
TAIL_STATIC(0x43db50u,43d);
}
B77b38a:L77b38a:{c.instructions+=3;NFSU2_TR(0x77b38a);
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
B77b38d:{NFSU2_TR(0x77b38d);
__builtin_memmove(gp(0x827d30),(R+0),4);
}
B77b392:{NFSU2_TR(0x77b392);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b3a0:L77b3a0:{c.instructions+=2;NFSU2_TR(0x77b3a0);
u8 U[4];
w4(U+0,u32(0x7868b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b3a5:{NFSU2_TR(0x77b3a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b3aaull));
TAIL_STATIC(0x43db50u,43d);
}
B77b3aa:L77b3aa:{c.instructions+=3;NFSU2_TR(0x77b3aa);
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
B77b3ad:{NFSU2_TR(0x77b3ad);
__builtin_memmove(gp(0x827c88),(R+0),4);
}
B77b3b2:{NFSU2_TR(0x77b3b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b3c0:L77b3c0:{c.instructions+=2;NFSU2_TR(0x77b3c0);
u8 U[4];
w4(U+0,u32(0x7868d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b3c5:{NFSU2_TR(0x77b3c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b3caull));
TAIL_STATIC(0x43db50u,43d);
}
B77b3ca:L77b3ca:{c.instructions+=3;NFSU2_TR(0x77b3ca);
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
B77b3cd:{NFSU2_TR(0x77b3cd);
__builtin_memmove(gp(0x827e18),(R+0),4);
}
B77b3d2:{NFSU2_TR(0x77b3d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b3e0:L77b3e0:{c.instructions+=63;NFSU2_TR(0x77b3e0);
__builtin_memmove((R+0),gp(0x827c84),4);
}
B77b3e5:{NFSU2_TR(0x77b3e5);
__builtin_memmove((R+4),gp(0x827f54),4);
}
B77b3eb:{NFSU2_TR(0x77b3eb);
__builtin_memmove((R+8),gp(0x827c6c),4);
}
B77b3f1:{NFSU2_TR(0x77b3f1);
__builtin_memmove(gp(0x7ea56c),(R+0),4);
}
B77b3f6:{NFSU2_TR(0x77b3f6);
__builtin_memmove((R+0),gp(0x827f48),4);
}
B77b3fb:{NFSU2_TR(0x77b3fb);
__builtin_memmove(gp(0x7ea574),(R+4),4);
}
B77b401:{NFSU2_TR(0x77b401);
__builtin_memmove((R+4),gp(0x827f4c),4);
}
B77b407:{NFSU2_TR(0x77b407);
__builtin_memmove(gp(0x7ea57c),(R+8),4);
}
B77b40d:{NFSU2_TR(0x77b40d);
__builtin_memmove((R+8),gp(0x827cc8),4);
}
B77b413:{NFSU2_TR(0x77b413);
__builtin_memmove(gp(0x7ea584),(R+0),4);
}
B77b418:{NFSU2_TR(0x77b418);
__builtin_memmove((R+0),gp(0x827f44),4);
}
B77b41d:{NFSU2_TR(0x77b41d);
__builtin_memmove(gp(0x7ea58c),(R+4),4);
}
B77b423:{NFSU2_TR(0x77b423);
__builtin_memmove((R+4),gp(0x827f5c),4);
}
B77b429:{NFSU2_TR(0x77b429);
__builtin_memmove(gp(0x7ea594),(R+8),4);
}
B77b42f:{NFSU2_TR(0x77b42f);
__builtin_memmove((R+8),gp(0x827f58),4);
}
B77b435:{NFSU2_TR(0x77b435);
__builtin_memmove(gp(0x7ea59c),(R+0),4);
}
B77b43a:{NFSU2_TR(0x77b43a);
__builtin_memmove((R+0),gp(0x827f50),4);
}
B77b43f:{NFSU2_TR(0x77b43f);
__builtin_memmove(gp(0x7ea5a4),(R+4),4);
}
B77b445:{NFSU2_TR(0x77b445);
__builtin_memmove((R+4),gp(0x827c44),4);
}
B77b44b:{NFSU2_TR(0x77b44b);
__builtin_memmove(gp(0x7ea5ac),(R+8),4);
}
B77b451:{NFSU2_TR(0x77b451);
__builtin_memmove((R+8),gp(0x827c58),4);
}
B77b457:{NFSU2_TR(0x77b457);
__builtin_memmove(gp(0x7ea5b4),(R+0),4);
}
B77b45c:{NFSU2_TR(0x77b45c);
__builtin_memmove((R+0),gp(0x827c94),4);
}
B77b461:{NFSU2_TR(0x77b461);
__builtin_memmove(gp(0x7ea5bc),(R+4),4);
}
B77b467:{NFSU2_TR(0x77b467);
__builtin_memmove((R+4),gp(0x827c90),4);
}
B77b46d:{NFSU2_TR(0x77b46d);
__builtin_memmove(gp(0x7ea5c4),(R+8),4);
}
B77b473:{NFSU2_TR(0x77b473);
__builtin_memmove((R+8),gp(0x827c70),4);
}
B77b479:{NFSU2_TR(0x77b479);
__builtin_memmove(gp(0x7ea5cc),(R+0),4);
}
B77b47e:{NFSU2_TR(0x77b47e);
__builtin_memmove((R+0),gp(0x827c54),4);
}
B77b483:{NFSU2_TR(0x77b483);
__builtin_memmove(gp(0x7ea5d4),(R+4),4);
}
B77b489:{NFSU2_TR(0x77b489);
__builtin_memmove((R+4),gp(0x827c80),4);
}
B77b48f:{NFSU2_TR(0x77b48f);
__builtin_memmove(gp(0x7ea5dc),(R+8),4);
}
B77b495:{NFSU2_TR(0x77b495);
__builtin_memmove((R+8),gp(0x827db4),4);
}
B77b49b:{NFSU2_TR(0x77b49b);
__builtin_memmove(gp(0x7ea5e4),(R+0),4);
}
B77b4a0:{NFSU2_TR(0x77b4a0);
__builtin_memmove((R+0),gp(0x827d30),4);
}
B77b4a5:{NFSU2_TR(0x77b4a5);
__builtin_memmove(gp(0x7ea5ec),(R+4),4);
}
B77b4ab:{NFSU2_TR(0x77b4ab);
__builtin_memmove((R+4),gp(0x827c88),4);
}
B77b4b1:{NFSU2_TR(0x77b4b1);
__builtin_memmove(gp(0x7ea5f4),(R+8),4);
}
B77b4b7:{NFSU2_TR(0x77b4b7);
__builtin_memmove((R+8),gp(0x827e18),4);
}
B77b4bd:{NFSU2_TR(0x77b4bd);
s4(0x7ea570,u32(0x786738ull));
}
B77b4c7:{NFSU2_TR(0x77b4c7);
s4(0x7ea578,u32(0x786748ull));
}
B77b4d1:{NFSU2_TR(0x77b4d1);
s4(0x7ea580,u32(0x786760ull));
}
B77b4db:{NFSU2_TR(0x77b4db);
s4(0x7ea588,u32(0x786774ull));
}
B77b4e5:{NFSU2_TR(0x77b4e5);
s4(0x7ea590,u32(0x78678cull));
}
B77b4ef:{NFSU2_TR(0x77b4ef);
s4(0x7ea598,u32(0x7867a0ull));
}
B77b4f9:{NFSU2_TR(0x77b4f9);
s4(0x7ea5a0,u32(0x7867b4ull));
}
B77b503:{NFSU2_TR(0x77b503);
s4(0x7ea5a8,u32(0x7867ccull));
}
B77b50d:{NFSU2_TR(0x77b50d);
s4(0x7ea5b0,u32(0x7867e4ull));
}
B77b517:{NFSU2_TR(0x77b517);
s4(0x7ea5b8,u32(0x7867f8ull));
}
B77b521:{NFSU2_TR(0x77b521);
s4(0x7ea5c0,u32(0x786810ull));
}
B77b52b:{NFSU2_TR(0x77b52b);
s4(0x7ea5c8,u32(0x786828ull));
}
B77b535:{NFSU2_TR(0x77b535);
s4(0x7ea5d0,u32(0x786838ull));
}
B77b53f:{NFSU2_TR(0x77b53f);
s4(0x7ea5d8,u32(0x78684cull));
}
B77b549:{NFSU2_TR(0x77b549);
s4(0x7ea5e0,u32(0x786860ull));
}
B77b553:{NFSU2_TR(0x77b553);
s4(0x7ea5e8,u32(0x786874ull));
}
B77b55d:{NFSU2_TR(0x77b55d);
s4(0x7ea5f0,u32(0x786888ull));
}
B77b567:{NFSU2_TR(0x77b567);
s4(0x7ea5f8,u32(0x7868a0ull));
}
B77b571:{NFSU2_TR(0x77b571);
__builtin_memmove(gp(0x7ea5fc),(R+0),4);
}
B77b576:{NFSU2_TR(0x77b576);
s4(0x7ea600,u32(0x7868b8ull));
}
B77b580:{NFSU2_TR(0x77b580);
__builtin_memmove(gp(0x7ea604),(R+4),4);
}
B77b586:{NFSU2_TR(0x77b586);
s4(0x7ea608,u32(0x7868d0ull));
}
B77b590:{NFSU2_TR(0x77b590);
__builtin_memmove(gp(0x7ea60c),(R+8),4);
}
B77b596:{NFSU2_TR(0x77b596);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b5a0:L77b5a0:{c.instructions+=2;NFSU2_TR(0x77b5a0);
w4(R+4,u32(0x827da4ull));
}
B77b5a5:{NFSU2_TR(0x77b5a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b5aaull));
TAIL_STATIC(0x598750u,598);
}
B77b5aa:L77b5aa:{c.instructions+=2;NFSU2_TR(0x77b5aa);
u8 U[4];
w4(U+0,u32(0x781af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b5af:{NFSU2_TR(0x77b5af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b5b4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b5b4:L77b5b4:{c.instructions+=2;NFSU2_TR(0x77b5b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b5b5:{NFSU2_TR(0x77b5b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b5c0:L77b5c0:{c.instructions+=2;NFSU2_TR(0x77b5c0);
w4(R+4,u32(0x827c74ull));
}
B77b5c5:{NFSU2_TR(0x77b5c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b5caull));
TAIL_STATIC(0x598750u,598);
}
B77b5ca:L77b5ca:{c.instructions+=2;NFSU2_TR(0x77b5ca);
u8 U[4];
w4(U+0,u32(0x781b00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b5cf:{NFSU2_TR(0x77b5cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b5d4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b5d4:L77b5d4:{c.instructions+=2;NFSU2_TR(0x77b5d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b5d5:{NFSU2_TR(0x77b5d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b5e0:L77b5e0:{c.instructions+=2;NFSU2_TR(0x77b5e0);
w4(R+4,u32(0x827ef0ull));
}
B77b5e5:{NFSU2_TR(0x77b5e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b5eaull));
TAIL_STATIC(0x439ea0u,439);
}
B77b5ea:L77b5ea:{c.instructions+=2;NFSU2_TR(0x77b5ea);
u8 U[4];
w4(U+0,u32(0x781b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b5ef:{NFSU2_TR(0x77b5ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b5f4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b5f4:L77b5f4:{c.instructions+=2;NFSU2_TR(0x77b5f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b5f5:{NFSU2_TR(0x77b5f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b600:L77b600:{c.instructions+=2;NFSU2_TR(0x77b600);
w4(R+4,u32(0x828520ull));
}
B77b605:{NFSU2_TR(0x77b605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b60aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77b60a:L77b60a:{c.instructions+=2;NFSU2_TR(0x77b60a);
u8 U[4];
w4(U+0,u32(0x781b80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b60f:{NFSU2_TR(0x77b60f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b614ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b614:L77b614:{c.instructions+=2;NFSU2_TR(0x77b614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b615:{NFSU2_TR(0x77b615);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b620:L77b620:{c.instructions+=7;NFSU2_TR(0x77b620);
__builtin_memmove((R+0),gp(0x828050),4);
}
B77b625:{NFSU2_TR(0x77b625);
__builtin_memmove(gp(0x7eb3f4),(R+0),4);
}
B77b62a:{NFSU2_TR(0x77b62a);
__builtin_memmove((R+0),gp(0x827fe8),1);
}
B77b62f:{NFSU2_TR(0x77b62f);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77b631:{NFSU2_TR(0x77b631);
s4(0x828050,u32(0x7eb3f4ull));
}
B77b63b:{NFSU2_TR(0x77b63b);
__builtin_memmove(gp(0x827fe8),(R+0),1);
}
B77b640:{NFSU2_TR(0x77b640);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b650:L77b650:{c.instructions+=2;NFSU2_TR(0x77b650);
w4(R+4,u32(0x828528ull));
}
B77b655:{NFSU2_TR(0x77b655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b65aull));
TAIL_STATIC(0x43e820u,43e);
}
B77b65a:L77b65a:{c.instructions+=2;NFSU2_TR(0x77b65a);
u8 U[4];
w4(U+0,u32(0x781b70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b65f:{NFSU2_TR(0x77b65f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b664ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b664:L77b664:{c.instructions+=2;NFSU2_TR(0x77b664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b665:{NFSU2_TR(0x77b665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b670:L77b670:{c.instructions+=2;NFSU2_TR(0x77b670);
w4(R+4,u32(0x828530ull));
}
B77b675:{NFSU2_TR(0x77b675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b67aull));
TAIL_STATIC(0x4407b0u,440);
}
B77b67a:L77b67a:{c.instructions+=2;NFSU2_TR(0x77b67a);
u8 U[4];
w4(U+0,u32(0x781b90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b67f:{NFSU2_TR(0x77b67f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b684ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77b684:L77b684:{c.instructions+=2;NFSU2_TR(0x77b684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77b685:{NFSU2_TR(0x77b685);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b690:L77b690:{c.instructions+=4;NFSU2_TR(0x77b690);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b696:{NFSU2_TR(0x77b696);
{u32 ea_=u32(u32(7892856u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77b69c:{NFSU2_TR(0x77b69c);
{u32 ea_=u32(u32(8554292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b6a2:{NFSU2_TR(0x77b6a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b6b0:L77b6b0:{c.instructions+=13;NFSU2_TR(0x77b6b0);
__builtin_memmove((R+0),gp(0x786f8c),4);
}
B77b6b5:{NFSU2_TR(0x77b6b5);
__builtin_memmove((R+8),gp(0x786f84),4);
}
B77b6bb:{NFSU2_TR(0x77b6bb);
__builtin_memmove((R+4),(R+0),4);
}
B77b6bd:{NFSU2_TR(0x77b6bd);
__builtin_memmove(gp(0x7ec7c4),(R+4),4);
}
B77b6c3:{NFSU2_TR(0x77b6c3);
__builtin_memmove((R+4),gp(0x786f88),4);
}
B77b6c9:{NFSU2_TR(0x77b6c9);
__builtin_memmove(gp(0x7ec7c0),(R+0),4);
}
B77b6ce:{NFSU2_TR(0x77b6ce);
__builtin_memmove((R+0),(R+8),4);
}
B77b6d0:{NFSU2_TR(0x77b6d0);
__builtin_memmove(gp(0x7ec7f8),(R+8),4);
}
B77b6d6:{NFSU2_TR(0x77b6d6);
__builtin_memmove((R+8),(R+4),4);
}
B77b6d8:{NFSU2_TR(0x77b6d8);
__builtin_memmove(gp(0x7ec7fc),(R+0),4);
}
B77b6dd:{NFSU2_TR(0x77b6dd);
__builtin_memmove(gp(0x7ec800),(R+4),4);
}
B77b6e3:{NFSU2_TR(0x77b6e3);
__builtin_memmove(gp(0x7ec804),(R+8),4);
}
B77b6e9:{NFSU2_TR(0x77b6e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b6f0:L77b6f0:{c.instructions+=2;NFSU2_TR(0x77b6f0);
u8 U[4];
w4(U+0,u32(0x7881e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b6f5:{NFSU2_TR(0x77b6f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b6faull));
TAIL_STATIC(0x43db50u,43d);
}
B77b6fa:L77b6fa:{c.instructions+=3;NFSU2_TR(0x77b6fa);
u8 U[4];
w4(U+0,u32(0x7881e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b6ff:{NFSU2_TR(0x77b6ff);
__builtin_memmove(gp(0x7ec1f8),(R+0),4);
}
B77b704:{NFSU2_TR(0x77b704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b709ull));
TAIL_STATIC(0x43db50u,43d);
}
B77b709:L77b709:{c.instructions+=6;NFSU2_TR(0x77b709);
u8 U[4];
w4(U+0,u32(0x7881d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b70e:{NFSU2_TR(0x77b70e);
__builtin_memmove(gp(0x7ec1fc),(R+0),4);
}
B77b713:{NFSU2_TR(0x77b713);
s4(0x7ec214,u32(0x7881ccull));
}
B77b71d:{NFSU2_TR(0x77b71d);
s4(0x7ec218,u32(0x441b40ull));
}
B77b727:{NFSU2_TR(0x77b727);
s4(0x7ec21c,u32(0x404800ull));
}
B77b731:{NFSU2_TR(0x77b731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b736ull));
TAIL_STATIC(0x43db50u,43d);
}
B77b736:L77b736:{c.instructions+=3;NFSU2_TR(0x77b736);
u8 U[4];
w4(U+0,u32(0x7881ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b73b:{NFSU2_TR(0x77b73b);
__builtin_memmove(gp(0x7ec20c),(R+0),4);
}
B77b740:{NFSU2_TR(0x77b740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b745ull));
TAIL_STATIC(0x43db50u,43d);
}
B77b745:L77b745:{c.instructions+=6;NFSU2_TR(0x77b745);
u8 U[4];
w4(U+0,u32(0x7881bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b74a:{NFSU2_TR(0x77b74a);
__builtin_memmove(gp(0x7ec210),(R+0),4);
}
B77b74f:{NFSU2_TR(0x77b74f);
s4(0x7ec228,u32(0x7881b4ull));
}
B77b759:{NFSU2_TR(0x77b759);
s4(0x7ec22c,u32(0x441bf0ull));
}
B77b763:{NFSU2_TR(0x77b763);
s4(0x7ec230,u32(0x404800ull));
}
B77b76d:{NFSU2_TR(0x77b76d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b772ull));
TAIL_STATIC(0x43db50u,43d);
}
B77b772:L77b772:{c.instructions+=3;NFSU2_TR(0x77b772);
u8 U[4];
w4(U+0,u32(0x7881b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b777:{NFSU2_TR(0x77b777);
__builtin_memmove(gp(0x7ec220),(R+0),4);
}
B77b77c:{NFSU2_TR(0x77b77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b781ull));
TAIL_STATIC(0x43db50u,43d);
}
B77b781:L77b781:{c.instructions+=6;NFSU2_TR(0x77b781);
u8 U[4];
w4(U+0,u32(0x7881a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b786:{NFSU2_TR(0x77b786);
__builtin_memmove(gp(0x7ec224),(R+0),4);
}
B77b78b:{NFSU2_TR(0x77b78b);
s4(0x7ec23c,u32(0x78819cull));
}
B77b795:{NFSU2_TR(0x77b795);
s4(0x7ec240,u32(0x441c80ull));
}
B77b79f:{NFSU2_TR(0x77b79f);
s4(0x7ec244,u32(0x441d00ull));
}
B77b7a9:{NFSU2_TR(0x77b7a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b7aeull));
TAIL_STATIC(0x43db50u,43d);
}
B77b7ae:L77b7ae:{c.instructions+=3;NFSU2_TR(0x77b7ae);
u8 U[4];
w4(U+0,u32(0x78819cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b7b3:{NFSU2_TR(0x77b7b3);
__builtin_memmove(gp(0x7ec234),(R+0),4);
}
B77b7b8:{NFSU2_TR(0x77b7b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b7bdull));
TAIL_STATIC(0x43db50u,43d);
}
B77b7bd:L77b7bd:{c.instructions+=6;NFSU2_TR(0x77b7bd);
u8 U[4];
w4(U+0,u32(0x78818cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b7c2:{NFSU2_TR(0x77b7c2);
__builtin_memmove(gp(0x7ec238),(R+0),4);
}
B77b7c7:{NFSU2_TR(0x77b7c7);
s4(0x7ec250,u32(0x788184ull));
}
B77b7d1:{NFSU2_TR(0x77b7d1);
s4(0x7ec254,u32(0x441d30ull));
}
B77b7db:{NFSU2_TR(0x77b7db);
s4(0x7ec258,u32(0x404800ull));
}
B77b7e5:{NFSU2_TR(0x77b7e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b7eaull));
TAIL_STATIC(0x43db50u,43d);
}
B77b7ea:L77b7ea:{c.instructions+=3;NFSU2_TR(0x77b7ea);
u8 U[4];
w4(U+0,u32(0x788184ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b7ef:{NFSU2_TR(0x77b7ef);
__builtin_memmove(gp(0x7ec248),(R+0),4);
}
B77b7f4:{NFSU2_TR(0x77b7f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b7f9ull));
TAIL_STATIC(0x43db50u,43d);
}
B77b7f9:L77b7f9:{c.instructions+=6;NFSU2_TR(0x77b7f9);
u8 U[4];
w4(U+0,u32(0x788174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b7fe:{NFSU2_TR(0x77b7fe);
__builtin_memmove(gp(0x7ec24c),(R+0),4);
}
B77b803:{NFSU2_TR(0x77b803);
s4(0x7ec264,u32(0x788168ull));
}
B77b80d:{NFSU2_TR(0x77b80d);
s4(0x7ec268,u32(0x441e90ull));
}
B77b817:{NFSU2_TR(0x77b817);
s4(0x7ec26c,u32(0x441f40ull));
}
B77b821:{NFSU2_TR(0x77b821);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b826ull));
TAIL_STATIC(0x43db50u,43d);
}
B77b826:L77b826:{c.instructions+=3;NFSU2_TR(0x77b826);
u8 U[4];
w4(U+0,u32(0x788168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77b82b:{NFSU2_TR(0x77b82b);
__builtin_memmove(gp(0x7ec25c),(R+0),4);
}
B77b830:{NFSU2_TR(0x77b830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b835ull));
TAIL_STATIC(0x43db50u,43d);
}
B77b835:L77b835:{c.instructions+=3;NFSU2_TR(0x77b835);
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
B77b838:{NFSU2_TR(0x77b838);
__builtin_memmove(gp(0x7ec260),(R+0),4);
}
B77b83d:{NFSU2_TR(0x77b83d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b840:L77b840:{c.instructions+=3;NFSU2_TR(0x77b840);
__builtin_memmove((R+0),gp(0x786fbc),4);
}
B77b845:{NFSU2_TR(0x77b845);
__builtin_memmove(gp(0x8286e0),(R+0),4);
}
B77b84a:{NFSU2_TR(0x77b84a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b850:L77b850:{c.instructions+=4;NFSU2_TR(0x77b850);
{u32 ea_=u32(u32(7892916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b856:{NFSU2_TR(0x77b856);
{u32 ea_=u32(u32(7892924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b85c:{NFSU2_TR(0x77b85c);
{u32 ea_=u32(u32(8561752u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b862:{NFSU2_TR(0x77b862);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b870:L77b870:{c.instructions+=5;NFSU2_TR(0x77b870);
{u32 ea_=u32(u32(7892920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b876:{NFSU2_TR(0x77b876);
{u32 ea_=u32(u32(7892924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b87c:{NFSU2_TR(0x77b87c);
{u32 ea_=u32(u32(7897584u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b882:{NFSU2_TR(0x77b882);
{u32 ea_=u32(u32(8554268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b888:{NFSU2_TR(0x77b888);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b890:L77b890:{c.instructions+=4;NFSU2_TR(0x77b890);
{u32 ea_=u32(u32(7892920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b896:{NFSU2_TR(0x77b896);
{u32 ea_=u32(u32(7892924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b89c:{NFSU2_TR(0x77b89c);
{u32 ea_=u32(u32(8554288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b8a2:{NFSU2_TR(0x77b8a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b8b0:L77b8b0:{c.instructions+=5;NFSU2_TR(0x77b8b0);
{u32 ea_=u32(u32(7892920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b8b6:{NFSU2_TR(0x77b8b6);
{u32 ea_=u32(u32(7892924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b8bc:{NFSU2_TR(0x77b8bc);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B77b8c2:{NFSU2_TR(0x77b8c2);
{u32 ea_=u32(u32(8554228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b8c8:{NFSU2_TR(0x77b8c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b8d0:L77b8d0:{c.instructions+=5;NFSU2_TR(0x77b8d0);
{u32 ea_=u32(u32(7892920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b8d6:{NFSU2_TR(0x77b8d6);
{u32 ea_=u32(u32(7892924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b8dc:{NFSU2_TR(0x77b8dc);
{u32 ea_=u32(u32(7897592u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B77b8e2:{NFSU2_TR(0x77b8e2);
{u32 ea_=u32(u32(8554256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b8e8:{NFSU2_TR(0x77b8e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b8f0:L77b8f0:{c.instructions+=7;NFSU2_TR(0x77b8f0);
{u32 ea_=u32(u32(8561752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b8f6:{NFSU2_TR(0x77b8f6);
{u32 ea_=u32(u32(7892976u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b8fc:{NFSU2_TR(0x77b8fc);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b902:{NFSU2_TR(0x77b902);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b908:{NFSU2_TR(0x77b908);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b90e:{NFSU2_TR(0x77b90e);
{u32 ea_=u32(u32(8561896u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b914:{NFSU2_TR(0x77b914);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b920:L77b920:{c.instructions+=5;NFSU2_TR(0x77b920);
{u32 ea_=u32(u32(8554268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b926:{NFSU2_TR(0x77b926);
{u32 ea_=u32(u32(7892932u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b92c:{NFSU2_TR(0x77b92c);
{u32 ea_=u32(u32(7892976u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b932:{NFSU2_TR(0x77b932);
{u32 ea_=u32(u32(8554316u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b938:{NFSU2_TR(0x77b938);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b940:L77b940:{c.instructions+=4;NFSU2_TR(0x77b940);
{u32 ea_=u32(u32(7892976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b946:{NFSU2_TR(0x77b946);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77b948:{NFSU2_TR(0x77b948);
{u32 ea_=u32(u32(8554320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b94e:{NFSU2_TR(0x77b94e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b950:L77b950:{c.instructions+=6;NFSU2_TR(0x77b950);
{u32 ea_=u32(u32(8561896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b956:{NFSU2_TR(0x77b956);
{u32 ea_=u32(u32(7892976u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b95c:{NFSU2_TR(0x77b95c);
{u32 ea_=u32(u32(7892980u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b962:{NFSU2_TR(0x77b962);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b968:{NFSU2_TR(0x77b968);
{u32 ea_=u32(u32(8561768u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b96e:{NFSU2_TR(0x77b96e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b970:L77b970:{c.instructions+=6;NFSU2_TR(0x77b970);
{u32 ea_=u32(u32(7892980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b976:{NFSU2_TR(0x77b976);
{u32 ea_=u32(u32(7892976u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B77b97c:{NFSU2_TR(0x77b97c);
{u32 ea_=u32(u32(8561896u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B77b982:{NFSU2_TR(0x77b982);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B77b988:{NFSU2_TR(0x77b988);
{u32 ea_=u32(u32(8554332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b98e:{NFSU2_TR(0x77b98e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b990:L77b990:{c.instructions+=3;NFSU2_TR(0x77b990);
__builtin_memmove((R+0),gp(0x82874c),4);
}
B77b995:{NFSU2_TR(0x77b995);
__builtin_memmove(gp(0x828724),(R+0),4);
}
B77b99a:{NFSU2_TR(0x77b99a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b9a0:L77b9a0:{c.instructions+=4;NFSU2_TR(0x77b9a0);
{u32 ea_=u32(u32(7892976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b9a6:{NFSU2_TR(0x77b9a6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77b9a8:{NFSU2_TR(0x77b9a8);
{u32 ea_=u32(u32(8561764u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b9ae:{NFSU2_TR(0x77b9ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b9b0:L77b9b0:{c.instructions+=3;NFSU2_TR(0x77b9b0);
__builtin_memmove((R+0),gp(0x82a4e8),4);
}
B77b9b5:{NFSU2_TR(0x77b9b5);
__builtin_memmove(gp(0x82a4ec),(R+0),4);
}
B77b9ba:{NFSU2_TR(0x77b9ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b9c0:L77b9c0:{c.instructions+=6;NFSU2_TR(0x77b9c0);
{u32 ea_=u32(u32(8554316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b9c6:{NFSU2_TR(0x77b9c6);
{u32 ea_=u32(u32(7892976u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b9cc:{NFSU2_TR(0x77b9cc);
{u32 ea_=u32(u32(7892984u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b9d2:{NFSU2_TR(0x77b9d2);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77b9d8:{NFSU2_TR(0x77b9d8);
{u32 ea_=u32(u32(8554348u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77b9de:{NFSU2_TR(0x77b9de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77b9e0:L77b9e0:{c.instructions+=2;NFSU2_TR(0x77b9e0);
{u32 ea_=u32(u32(7892932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77b9e6:{NFSU2_TR(0x77b9e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77b9ebull));
TAIL_STATIC(0x75bed4u,75b);
}
B77b9eb:L77b9eb:{c.instructions+=2;NFSU2_TR(0x77b9eb);
__builtin_memmove(gp(0x82a47c),(R+0),4);
}
B77b9f0:{NFSU2_TR(0x77b9f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ba00:L77ba00:{c.instructions+=7;NFSU2_TR(0x77ba00);
{u32 ea_=u32(u32(8554268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ba06:{NFSU2_TR(0x77ba06);
{u32 ea_=u32(u32(7892932u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77ba0c:{NFSU2_TR(0x77ba0c);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77ba12:{NFSU2_TR(0x77ba12);
{u32 ea_=u32(u32(7892920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ba18:{NFSU2_TR(0x77ba18);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77ba1e:{NFSU2_TR(0x77ba1e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B77ba20:{NFSU2_TR(0x77ba20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ba25ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77ba25:L77ba25:{c.instructions+=2;NFSU2_TR(0x77ba25);
__builtin_memmove(gp(0x82873c),(R+0),4);
}
B77ba2a:{NFSU2_TR(0x77ba2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ba30:L77ba30:{c.instructions+=6;NFSU2_TR(0x77ba30);
{u32 ea_=u32(u32(8554208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ba36:{NFSU2_TR(0x77ba36);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B77ba3c:{NFSU2_TR(0x77ba3c);
{u32 ea_=u32(u32(7892916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ba42:{NFSU2_TR(0x77ba42);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77ba48:{NFSU2_TR(0x77ba48);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B77ba4a:{NFSU2_TR(0x77ba4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ba4full));
TAIL_STATIC(0x75bed4u,75b);
}
B77ba4f:L77ba4f:{c.instructions+=2;NFSU2_TR(0x77ba4f);
__builtin_memmove(gp(0x828718),(R+0),4);
}
B77ba54:{NFSU2_TR(0x77ba54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ba60:L77ba60:{c.instructions+=7;NFSU2_TR(0x77ba60);
{u32 ea_=u32(u32(7892916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ba66:{NFSU2_TR(0x77ba66);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77ba6c:{NFSU2_TR(0x77ba6c);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ba72:{NFSU2_TR(0x77ba72);
{u32 ea_=u32(u32(7897596u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77ba78:{NFSU2_TR(0x77ba78);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B77ba7a:{NFSU2_TR(0x77ba7a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B77ba7c:{NFSU2_TR(0x77ba7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ba81ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77ba81:L77ba81:{c.instructions+=3;NFSU2_TR(0x77ba81);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B77ba83:{NFSU2_TR(0x77ba83);
__builtin_memmove(gp(0x82a44c),(R+0),4);
}
B77ba88:{NFSU2_TR(0x77ba88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ba90:L77ba90:{c.instructions+=7;NFSU2_TR(0x77ba90);
{u32 ea_=u32(u32(7892916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ba96:{NFSU2_TR(0x77ba96);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77ba9c:{NFSU2_TR(0x77ba9c);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77baa2:{NFSU2_TR(0x77baa2);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77baa8:{NFSU2_TR(0x77baa8);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B77baaa:{NFSU2_TR(0x77baaa);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B77baac:{NFSU2_TR(0x77baac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bab1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bab1:L77bab1:{c.instructions+=3;NFSU2_TR(0x77bab1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B77bab3:{NFSU2_TR(0x77bab3);
__builtin_memmove(gp(0x8286f0),(R+0),4);
}
B77bab8:{NFSU2_TR(0x77bab8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bac0:L77bac0:{c.instructions+=7;NFSU2_TR(0x77bac0);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bac6:{NFSU2_TR(0x77bac6);
{u32 ea_=u32(u32(7897596u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bacc:{NFSU2_TR(0x77bacc);
{u32 ea_=u32(u32(8561752u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B77bad2:{NFSU2_TR(0x77bad2);
{u32 ea_=u32(u32(7892916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bad8:{NFSU2_TR(0x77bad8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bade:{NFSU2_TR(0x77bade);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B77bae0:{NFSU2_TR(0x77bae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bae5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bae5:L77bae5:{c.instructions+=2;NFSU2_TR(0x77bae5);
__builtin_memmove(gp(0x82a4d8),(R+0),4);
}
B77baea:{NFSU2_TR(0x77baea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77baf0:L77baf0:{c.instructions+=7;NFSU2_TR(0x77baf0);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77baf6:{NFSU2_TR(0x77baf6);
{u32 ea_=u32(u32(7897592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bafc:{NFSU2_TR(0x77bafc);
{u32 ea_=u32(u32(8561752u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B77bb02:{NFSU2_TR(0x77bb02);
{u32 ea_=u32(u32(7892916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bb08:{NFSU2_TR(0x77bb08);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bb0e:{NFSU2_TR(0x77bb0e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B77bb10:{NFSU2_TR(0x77bb10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bb15ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bb15:L77bb15:{c.instructions+=2;NFSU2_TR(0x77bb15);
__builtin_memmove(gp(0x82a474),(R+0),4);
}
B77bb1a:{NFSU2_TR(0x77bb1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bb20:L77bb20:{c.instructions+=3;NFSU2_TR(0x77bb20);
{u32 ea_=u32(u32(7892932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bb26:{NFSU2_TR(0x77bb26);
{u32 ea_=u32(u32(7897600u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bb2c:{NFSU2_TR(0x77bb2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bb31ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bb31:L77bb31:{c.instructions+=2;NFSU2_TR(0x77bb31);
__builtin_memmove(gp(0x828738),(R+0),4);
}
B77bb36:{NFSU2_TR(0x77bb36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bb40:L77bb40:{c.instructions+=3;NFSU2_TR(0x77bb40);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bb46:{NFSU2_TR(0x77bb46);
{u32 ea_=u32(u32(7897604u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bb4c:{NFSU2_TR(0x77bb4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bb51ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bb51:L77bb51:{c.instructions+=2;NFSU2_TR(0x77bb51);
__builtin_memmove(gp(0x828728),(R+0),4);
}
B77bb56:{NFSU2_TR(0x77bb56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bb60:L77bb60:{c.instructions+=3;NFSU2_TR(0x77bb60);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bb66:{NFSU2_TR(0x77bb66);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bb6c:{NFSU2_TR(0x77bb6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bb71ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bb71:L77bb71:{c.instructions+=2;NFSU2_TR(0x77bb71);
__builtin_memmove(gp(0x828758),(R+0),4);
}
B77bb76:{NFSU2_TR(0x77bb76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bb80:L77bb80:{c.instructions+=3;NFSU2_TR(0x77bb80);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bb86:{NFSU2_TR(0x77bb86);
{u32 ea_=u32(u32(7897592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bb8c:{NFSU2_TR(0x77bb8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bb91ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bb91:L77bb91:{c.instructions+=2;NFSU2_TR(0x77bb91);
__builtin_memmove(gp(0x828748),(R+0),4);
}
B77bb96:{NFSU2_TR(0x77bb96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bba0:L77bba0:{c.instructions+=3;NFSU2_TR(0x77bba0);
{u32 ea_=u32(u32(7892932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bba6:{NFSU2_TR(0x77bba6);
{u32 ea_=u32(u32(7897608u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bbac:{NFSU2_TR(0x77bbac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bbb1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bbb1:L77bbb1:{c.instructions+=2;NFSU2_TR(0x77bbb1);
__builtin_memmove(gp(0x828754),(R+0),4);
}
B77bbb6:{NFSU2_TR(0x77bbb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bbc0:L77bbc0:{c.instructions+=3;NFSU2_TR(0x77bbc0);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bbc6:{NFSU2_TR(0x77bbc6);
{u32 ea_=u32(u32(7897612u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bbcc:{NFSU2_TR(0x77bbcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bbd1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bbd1:L77bbd1:{c.instructions+=2;NFSU2_TR(0x77bbd1);
__builtin_memmove(gp(0x82a470),(R+0),4);
}
B77bbd6:{NFSU2_TR(0x77bbd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bbe0:L77bbe0:{c.instructions+=3;NFSU2_TR(0x77bbe0);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bbe6:{NFSU2_TR(0x77bbe6);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bbec:{NFSU2_TR(0x77bbec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bbf1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bbf1:L77bbf1:{c.instructions+=2;NFSU2_TR(0x77bbf1);
__builtin_memmove(gp(0x82a460),(R+0),4);
}
B77bbf6:{NFSU2_TR(0x77bbf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bc00:L77bc00:{c.instructions+=3;NFSU2_TR(0x77bc00);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bc06:{NFSU2_TR(0x77bc06);
{u32 ea_=u32(u32(7897616u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bc0c:{NFSU2_TR(0x77bc0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bc11ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bc11:L77bc11:{c.instructions+=2;NFSU2_TR(0x77bc11);
__builtin_memmove(gp(0x82872c),(R+0),4);
}
B77bc16:{NFSU2_TR(0x77bc16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bc20:L77bc20:{c.instructions+=3;NFSU2_TR(0x77bc20);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bc26:{NFSU2_TR(0x77bc26);
{u32 ea_=u32(u32(7897592u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bc2c:{NFSU2_TR(0x77bc2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bc31ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bc31:L77bc31:{c.instructions+=2;NFSU2_TR(0x77bc31);
__builtin_memmove(gp(0x82a46c),(R+0),4);
}
B77bc36:{NFSU2_TR(0x77bc36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bc40:L77bc40:{c.instructions+=3;NFSU2_TR(0x77bc40);
{u32 ea_=u32(u32(7892932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bc46:{NFSU2_TR(0x77bc46);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bc4c:{NFSU2_TR(0x77bc4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bc51ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bc51:L77bc51:{c.instructions+=2;NFSU2_TR(0x77bc51);
__builtin_memmove(gp(0x82a45c),(R+0),4);
}
B77bc56:{NFSU2_TR(0x77bc56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bc60:L77bc60:{c.instructions+=3;NFSU2_TR(0x77bc60);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bc66:{NFSU2_TR(0x77bc66);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bc6c:{NFSU2_TR(0x77bc6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bc71ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bc71:L77bc71:{c.instructions+=2;NFSU2_TR(0x77bc71);
__builtin_memmove(gp(0x8286f8),(R+0),4);
}
B77bc76:{NFSU2_TR(0x77bc76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bc80:L77bc80:{c.instructions+=3;NFSU2_TR(0x77bc80);
{u32 ea_=u32(u32(7892932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bc86:{NFSU2_TR(0x77bc86);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bc8c:{NFSU2_TR(0x77bc8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bc91ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bc91:L77bc91:{c.instructions+=2;NFSU2_TR(0x77bc91);
__builtin_memmove(gp(0x8286e4),(R+0),4);
}
B77bc96:{NFSU2_TR(0x77bc96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bca0:L77bca0:{c.instructions+=3;NFSU2_TR(0x77bca0);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bca6:{NFSU2_TR(0x77bca6);
{u32 ea_=u32(u32(7897620u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bcac:{NFSU2_TR(0x77bcac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bcb1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bcb1:L77bcb1:{c.instructions+=2;NFSU2_TR(0x77bcb1);
__builtin_memmove(gp(0x828740),(R+0),4);
}
B77bcb6:{NFSU2_TR(0x77bcb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bcc0:L77bcc0:{c.instructions+=3;NFSU2_TR(0x77bcc0);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bcc6:{NFSU2_TR(0x77bcc6);
{u32 ea_=u32(u32(7897624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bccc:{NFSU2_TR(0x77bccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bcd1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bcd1:L77bcd1:{c.instructions+=2;NFSU2_TR(0x77bcd1);
__builtin_memmove(gp(0x828714),(R+0),4);
}
B77bcd6:{NFSU2_TR(0x77bcd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bce0:L77bce0:{c.instructions+=3;NFSU2_TR(0x77bce0);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bce6:{NFSU2_TR(0x77bce6);
{u32 ea_=u32(u32(7897628u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bcec:{NFSU2_TR(0x77bcec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bcf1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bcf1:L77bcf1:{c.instructions+=2;NFSU2_TR(0x77bcf1);
__builtin_memmove(gp(0x828720),(R+0),4);
}
B77bcf6:{NFSU2_TR(0x77bcf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bd00:L77bd00:{c.instructions+=3;NFSU2_TR(0x77bd00);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bd06:{NFSU2_TR(0x77bd06);
{u32 ea_=u32(u32(7897632u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bd0c:{NFSU2_TR(0x77bd0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bd11ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bd11:L77bd11:{c.instructions+=2;NFSU2_TR(0x77bd11);
__builtin_memmove(gp(0x82a4d4),(R+0),4);
}
B77bd16:{NFSU2_TR(0x77bd16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bd20:L77bd20:{c.instructions+=2;NFSU2_TR(0x77bd20);
{u32 ea_=u32(u32(7892928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bd26:{NFSU2_TR(0x77bd26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bd2bull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bd2b:L77bd2b:{c.instructions+=2;NFSU2_TR(0x77bd2b);
__builtin_memmove(gp(0x8286ec),(R+0),4);
}
B77bd30:{NFSU2_TR(0x77bd30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bd40:L77bd40:{c.instructions+=3;NFSU2_TR(0x77bd40);
{u32 ea_=u32(u32(7892932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bd46:{NFSU2_TR(0x77bd46);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bd4c:{NFSU2_TR(0x77bd4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bd51ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bd51:L77bd51:{c.instructions+=2;NFSU2_TR(0x77bd51);
__builtin_memmove(gp(0x82a478),(R+0),4);
}
B77bd56:{NFSU2_TR(0x77bd56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bd60:L77bd60:{c.instructions+=3;NFSU2_TR(0x77bd60);
{u32 ea_=u32(u32(7892932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bd66:{NFSU2_TR(0x77bd66);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bd6c:{NFSU2_TR(0x77bd6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bd71ull));
TAIL_STATIC(0x75bed4u,75b);
}
B77bd71:L77bd71:{c.instructions+=2;NFSU2_TR(0x77bd71);
__builtin_memmove(gp(0x828744),(R+0),4);
}
B77bd76:{NFSU2_TR(0x77bd76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bd80:L77bd80:{c.instructions+=2;NFSU2_TR(0x77bd80);
w4(R+4,u32(0x828770ull));
}
B77bd85:{NFSU2_TR(0x77bd85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bd8aull));
TAIL_STATIC(0x447c40u,447);
}
B77bd8a:L77bd8a:{c.instructions+=2;NFSU2_TR(0x77bd8a);
u8 U[4];
w4(U+0,u32(0x781bb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77bd8f:{NFSU2_TR(0x77bd8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bd94ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77bd94:L77bd94:{c.instructions+=2;NFSU2_TR(0x77bd94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77bd95:{NFSU2_TR(0x77bd95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bda0:L77bda0:{c.instructions+=4;NFSU2_TR(0x77bda0);
{u32 ea_=u32(u32(7893100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bda6:{NFSU2_TR(0x77bda6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77bda8:{NFSU2_TR(0x77bda8);
{u32 ea_=u32(u32(8554344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77bdae:{NFSU2_TR(0x77bdae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bdb0:L77bdb0:{c.instructions+=4;NFSU2_TR(0x77bdb0);
{u32 ea_=u32(u32(7893100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bdb6:{NFSU2_TR(0x77bdb6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77bdbc:{NFSU2_TR(0x77bdbc);
{u32 ea_=u32(u32(8561736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77bdc2:{NFSU2_TR(0x77bdc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bdd0:L77bdd0:{c.instructions+=4;NFSU2_TR(0x77bdd0);
{u32 ea_=u32(u32(7893104u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77bdd6:{NFSU2_TR(0x77bdd6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77bdd8:{NFSU2_TR(0x77bdd8);
{u32 ea_=u32(u32(8561744u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77bdde:{NFSU2_TR(0x77bdde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bde0:L77bde0:{c.instructions+=4;NFSU2_TR(0x77bde0);
{u32 ea_=u32(u32(7893104u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77bde6:{NFSU2_TR(0x77bde6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77bdec:{NFSU2_TR(0x77bdec);
{u32 ea_=u32(u32(8554336u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77bdf2:{NFSU2_TR(0x77bdf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77be00:L77be00:{c.instructions+=4;NFSU2_TR(0x77be00);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77be02:{NFSU2_TR(0x77be02);
u8 U[4];
w4(U+0,u32(0x7ec420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77be07:{NFSU2_TR(0x77be07);
w4(R+4,u32(0x82a4e0ull));
}
B77be0c:{NFSU2_TR(0x77be0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77be11ull));
TAIL_STATIC(0x576770u,576);
}
B77be11:L77be11:{c.instructions+=1;NFSU2_TR(0x77be11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77be20:L77be20:{c.instructions+=9;NFSU2_TR(0x77be20);
{u32 ea_=u32(u32(7892832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77be26:{NFSU2_TR(0x77be26);
u8 U[4];
w4(U+0,u32(0x3dcccccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77be2b:{NFSU2_TR(0x77be2b);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77be31:{NFSU2_TR(0x77be31);
u8 U[4];
w4(U+0,u32(0x3cf5c28full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77be36:{NFSU2_TR(0x77be36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77be38:{NFSU2_TR(0x77be38);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77be39:{NFSU2_TR(0x77be39);
w4(R+4,u32(0x8286fcull));
}
B77be3e:{NFSU2_TR(0x77be3e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77be41:{NFSU2_TR(0x77be41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77be46ull));
TAIL_STATIC(0x446690u,446);
}
B77be46:L77be46:{c.instructions+=2;NFSU2_TR(0x77be46);
u8 U[4];
w4(U+0,u32(0x781ba0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77be4b:{NFSU2_TR(0x77be4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77be50ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77be50:L77be50:{c.instructions+=2;NFSU2_TR(0x77be50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77be51:{NFSU2_TR(0x77be51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77be60:L77be60:{c.instructions+=2;NFSU2_TR(0x77be60);
s2(0x8286e8,u16(0x38eull));
}
B77be69:{NFSU2_TR(0x77be69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77be70:L77be70:{c.instructions+=2;NFSU2_TR(0x77be70);
s2(0x82a4d0,u16(0xbbbull));
}
B77be79:{NFSU2_TR(0x77be79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77be80:L77be80:{c.instructions+=2;NFSU2_TR(0x77be80);
s2(0x82a4dc,u16(0x38eull));
}
B77be89:{NFSU2_TR(0x77be89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77be90:L77be90:{c.instructions+=2;NFSU2_TR(0x77be90);
u8 U[4];
w4(U+0,u32(0x781c90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77be95:{NFSU2_TR(0x77be95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77be9aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77be9a:L77be9a:{c.instructions+=2;NFSU2_TR(0x77be9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77be9b:{NFSU2_TR(0x77be9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bea0:L77bea0:{c.instructions+=21;NFSU2_TR(0x77bea0);
__builtin_memmove((R+0),gp(0x7ed908),4);
}
B77bea5:{NFSU2_TR(0x77bea5);
__builtin_memmove((R+4),gp(0x7ed91c),4);
}
B77beab:{NFSU2_TR(0x77beab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B77beae:{NFSU2_TR(0x77beae);
__builtin_memmove((R+4),gp(0x7ed918),4);
}
B77beb4:{NFSU2_TR(0x77beb4);
__builtin_memmove((R+0),gp(0x7ed8f8),4);
}
B77beb9:{NFSU2_TR(0x77beb9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B77bebb:{NFSU2_TR(0x77bebb);
__builtin_memmove((R+4),gp(0x7ed914),4);
}
B77bec1:{NFSU2_TR(0x77bec1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B77bec3:{NFSU2_TR(0x77bec3);
__builtin_memmove((R+0),gp(0x7ed8fc),4);
}
B77bec8:{NFSU2_TR(0x77bec8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B77beca:{NFSU2_TR(0x77beca);
__builtin_memmove((R+4),gp(0x7ed900),4);
}
B77bed0:{NFSU2_TR(0x77bed0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B77bed2:{NFSU2_TR(0x77bed2);
__builtin_memmove((R+0),gp(0x7ed904),4);
}
B77bed7:{NFSU2_TR(0x77bed7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B77bed9:{NFSU2_TR(0x77bed9);
__builtin_memmove((R+4),gp(0x7ed90c),4);
}
B77bedf:{NFSU2_TR(0x77bedf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B77bee1:{NFSU2_TR(0x77bee1);
__builtin_memmove((R+0),gp(0x7ed910),4);
}
B77bee6:{NFSU2_TR(0x77bee6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B77bee8:{NFSU2_TR(0x77bee8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77beea:{NFSU2_TR(0x77beea);
__builtin_memmove(gp(0x82bf30),(R+8),4);
}
B77bef0:{NFSU2_TR(0x77bef0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bf00:L77bf00:{c.instructions+=4;NFSU2_TR(0x77bf00);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bf06:{NFSU2_TR(0x77bf06);
{u32 ea_=u32(u32(7898240u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77bf0c:{NFSU2_TR(0x77bf0c);
{u32 ea_=u32(u32(8568644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77bf12:{NFSU2_TR(0x77bf12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bf20:L77bf20:{c.instructions+=3;NFSU2_TR(0x77bf20);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77bf22:{NFSU2_TR(0x77bf22);
w4(R+4,u32(0x82c6e8ull));
}
B77bf27:{NFSU2_TR(0x77bf27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bf2cull));
TAIL_STATIC(0x579f20u,579);
}
B77bf2c:L77bf2c:{c.instructions+=2;NFSU2_TR(0x77bf2c);
u8 U[4];
w4(U+0,u32(0x781bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77bf31:{NFSU2_TR(0x77bf31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bf36ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77bf36:L77bf36:{c.instructions+=2;NFSU2_TR(0x77bf36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77bf37:{NFSU2_TR(0x77bf37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bf40:L77bf40:{c.instructions+=6;NFSU2_TR(0x77bf40);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77bf46:{NFSU2_TR(0x77bf46);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77bf48:{NFSU2_TR(0x77bf48);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77bf4e:{NFSU2_TR(0x77bf4e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77bf50:{NFSU2_TR(0x77bf50);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77bf53:{NFSU2_TR(0x77bf53);
if(r1(R+514)){{goto L77bf5f;}}
}
B77bf55:L77bf55:{c.instructions+=1;NFSU2_TR(0x77bf55);
s4(0x7f0008,u32(0x3f800008ull));
}
B77bf5f:L77bf5f:{c.instructions+=2;NFSU2_TR(0x77bf5f);
u8 U[4];
w4(U+0,u32(0x781ca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77bf64:{NFSU2_TR(0x77bf64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bf69ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77bf69:L77bf69:{c.instructions+=2;NFSU2_TR(0x77bf69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77bf6a:{NFSU2_TR(0x77bf6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bf70:L77bf70:{c.instructions+=6;NFSU2_TR(0x77bf70);
{u32 ea_=u32(u32(7914048u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77bf76:{NFSU2_TR(0x77bf76);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77bf78:{NFSU2_TR(0x77bf78);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77bf7e:{NFSU2_TR(0x77bf7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77bf80:{NFSU2_TR(0x77bf80);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77bf83:{NFSU2_TR(0x77bf83);
if(r1(R+514)){{goto L77bf8f;}}
}
B77bf85:L77bf85:{c.instructions+=1;NFSU2_TR(0x77bf85);
s4(0x7f0024,u32(0x42c80000ull));
}
B77bf8f:L77bf8f:{c.instructions+=2;NFSU2_TR(0x77bf8f);
u8 U[4];
w4(U+0,u32(0x781cb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77bf94:{NFSU2_TR(0x77bf94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bf99ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77bf99:L77bf99:{c.instructions+=2;NFSU2_TR(0x77bf99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77bf9a:{NFSU2_TR(0x77bf9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bfa0:L77bfa0:{c.instructions+=11;NFSU2_TR(0x77bfa0);
{u32 ea_=u32(u32(7898252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77bfa6:{NFSU2_TR(0x77bfa6);
__builtin_memmove((R+0),gp(0x78848c),4);
}
B77bfab:{NFSU2_TR(0x77bfab);
{u32 ea_=u32(u32(7898256u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77bfb1:{NFSU2_TR(0x77bfb1);
__builtin_memmove(gp(0x7f0038),(R+0),4);
}
B77bfb6:{NFSU2_TR(0x77bfb6);
{u32 ea_=u32(u32(8323124u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B77bfbc:{NFSU2_TR(0x77bfbc);
{u32 ea_=u32(u32(7914056u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77bfc2:{NFSU2_TR(0x77bfc2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B77bfc4:{NFSU2_TR(0x77bfc4);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B77bfca:{NFSU2_TR(0x77bfca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B77bfcc:{NFSU2_TR(0x77bfcc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B77bfcf:{NFSU2_TR(0x77bfcf);
if(r1(R+514)){{goto L77bfdb;}}
}
B77bfd1:L77bfd1:{c.instructions+=1;NFSU2_TR(0x77bfd1);
s4(0x7f0040,u32(0x42fe0000ull));
}
B77bfdb:L77bfdb:{c.instructions+=3;NFSU2_TR(0x77bfdb);
u8 U[4];
w4(U+0,u32(0x781cc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77bfe0:{NFSU2_TR(0x77bfe0);
{u32 ea_=u32(u32(8323144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77bfe6:{NFSU2_TR(0x77bfe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77bfebull));
TAIL_STATIC(0x75c5edu,75c);
}
B77bfeb:L77bfeb:{c.instructions+=2;NFSU2_TR(0x77bfeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77bfec:{NFSU2_TR(0x77bfec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77bff0:L77bff0:{c.instructions+=3;NFSU2_TR(0x77bff0);
__builtin_memmove((R+0),gp(0x788494),4);
}
B77bff5:{NFSU2_TR(0x77bff5);
__builtin_memmove((R+8),gp(0x78849c),4);
}
B77bffb:{NFSU2_TR(0x77bffb);
__builtin_memmove((R+4),gp(0x788498),4);
TAIL_STATIC(0x77c001u,77c);
}
XIT:NFSU2_TR_EXIT(0x77b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
