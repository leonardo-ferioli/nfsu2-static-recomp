#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_764(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_767(u8* __restrict R,Cpu& c);
u32 body_769(u8* __restrict R,Cpu& c);
u32 body_76c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x765,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x765,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_765(u8* __restrict R,Cpu& c);
u32 page_765(Cpu& c){return body_765(c.regs.data(),c);}
__attribute__((noinline)) u32 body_765(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x765000:goto L765000;
case 0x765002:c.instructions+=66;goto B765002;
case 0x765004:c.instructions+=65;goto B765004;
case 0x765006:c.instructions+=64;goto B765006;
case 0x765008:c.instructions+=63;goto B765008;
case 0x765010:c.instructions+=62;goto B765010;
case 0x765018:c.instructions+=61;goto B765018;
case 0x76501c:c.instructions+=60;goto B76501c;
case 0x765020:c.instructions+=59;goto B765020;
case 0x765025:c.instructions+=58;goto B765025;
case 0x765029:c.instructions+=57;goto B765029;
case 0x76502d:c.instructions+=56;goto B76502d;
case 0x765031:c.instructions+=55;goto B765031;
case 0x765039:c.instructions+=54;goto B765039;
case 0x76503d:c.instructions+=53;goto B76503d;
case 0x765043:c.instructions+=52;goto B765043;
case 0x765045:c.instructions+=51;goto B765045;
case 0x765048:c.instructions+=50;goto B765048;
case 0x76504b:c.instructions+=49;goto B76504b;
case 0x76504d:c.instructions+=48;goto B76504d;
case 0x765050:c.instructions+=47;goto B765050;
case 0x765052:c.instructions+=46;goto B765052;
case 0x765056:c.instructions+=45;goto B765056;
case 0x76505b:c.instructions+=44;goto B76505b;
case 0x765060:c.instructions+=43;goto B765060;
case 0x765066:c.instructions+=42;goto B765066;
case 0x76506a:c.instructions+=41;goto B76506a;
case 0x76506f:c.instructions+=40;goto B76506f;
case 0x765074:c.instructions+=39;goto B765074;
case 0x76507c:c.instructions+=38;goto B76507c;
case 0x765080:c.instructions+=37;goto B765080;
case 0x765084:c.instructions+=36;goto B765084;
case 0x765088:c.instructions+=35;goto B765088;
case 0x76508c:c.instructions+=34;goto B76508c;
case 0x765090:c.instructions+=33;goto B765090;
case 0x765094:c.instructions+=32;goto B765094;
case 0x765098:c.instructions+=31;goto B765098;
case 0x76509c:c.instructions+=30;goto B76509c;
case 0x7650a0:c.instructions+=29;goto B7650a0;
case 0x7650a4:c.instructions+=28;goto B7650a4;
case 0x7650a9:c.instructions+=27;goto B7650a9;
case 0x7650ad:c.instructions+=26;goto B7650ad;
case 0x7650b2:c.instructions+=25;goto B7650b2;
case 0x7650b6:c.instructions+=24;goto B7650b6;
case 0x7650ba:c.instructions+=23;goto B7650ba;
case 0x7650be:c.instructions+=22;goto B7650be;
case 0x7650c3:c.instructions+=21;goto B7650c3;
case 0x7650c7:c.instructions+=20;goto B7650c7;
case 0x7650cb:c.instructions+=19;goto B7650cb;
case 0x7650cf:c.instructions+=18;goto B7650cf;
case 0x7650d3:c.instructions+=17;goto B7650d3;
case 0x7650d7:c.instructions+=16;goto B7650d7;
case 0x7650db:c.instructions+=15;goto B7650db;
case 0x7650df:c.instructions+=14;goto B7650df;
case 0x7650e3:c.instructions+=13;goto B7650e3;
case 0x7650e7:c.instructions+=12;goto B7650e7;
case 0x7650eb:c.instructions+=11;goto B7650eb;
case 0x7650ef:c.instructions+=10;goto B7650ef;
case 0x7650f3:c.instructions+=9;goto B7650f3;
case 0x7650f7:c.instructions+=8;goto B7650f7;
case 0x7650fb:c.instructions+=7;goto B7650fb;
case 0x765100:c.instructions+=6;goto B765100;
case 0x765101:c.instructions+=5;goto B765101;
case 0x765105:c.instructions+=4;goto B765105;
case 0x765109:c.instructions+=3;goto B765109;
case 0x76510d:c.instructions+=2;goto B76510d;
case 0x765110:c.instructions+=1;goto B765110;
case 0x765112:goto L765112;
case 0x765113:c.instructions+=10;goto B765113;
case 0x765117:c.instructions+=9;goto B765117;
case 0x76511b:c.instructions+=8;goto B76511b;
case 0x76511f:c.instructions+=7;goto B76511f;
case 0x765123:c.instructions+=6;goto B765123;
case 0x765127:c.instructions+=5;goto B765127;
case 0x76512c:c.instructions+=4;goto B76512c;
case 0x765131:c.instructions+=3;goto B765131;
case 0x765136:c.instructions+=2;goto B765136;
case 0x76513b:c.instructions+=1;goto B76513b;
case 0x765141:goto L765141;
case 0x765146:c.instructions+=2;goto B765146;
case 0x765149:c.instructions+=1;goto B765149;
case 0x76514f:goto L76514f;
case 0x765152:c.instructions+=4;goto B765152;
case 0x765158:c.instructions+=3;goto B765158;
case 0x76515c:c.instructions+=2;goto B76515c;
case 0x76515f:c.instructions+=1;goto B76515f;
case 0x765160:goto L765160;
case 0x765161:c.instructions+=9;goto B765161;
case 0x765165:c.instructions+=8;goto B765165;
case 0x765169:c.instructions+=7;goto B765169;
case 0x76516d:c.instructions+=6;goto B76516d;
case 0x765171:c.instructions+=5;goto B765171;
case 0x765176:c.instructions+=4;goto B765176;
case 0x76517b:c.instructions+=3;goto B76517b;
case 0x765180:c.instructions+=2;goto B765180;
case 0x765185:c.instructions+=1;goto B765185;
case 0x76518b:goto L76518b;
case 0x765190:c.instructions+=2;goto B765190;
case 0x765193:c.instructions+=1;goto B765193;
case 0x765199:goto L765199;
case 0x76519c:c.instructions+=4;goto B76519c;
case 0x7651a2:c.instructions+=3;goto B7651a2;
case 0x7651a6:c.instructions+=2;goto B7651a6;
case 0x7651a9:c.instructions+=1;goto B7651a9;
case 0x7651aa:goto L7651aa;
case 0x7651b2:c.instructions+=6;goto B7651b2;
case 0x7651b6:c.instructions+=5;goto B7651b6;
case 0x7651ba:c.instructions+=4;goto B7651ba;
case 0x7651bf:c.instructions+=3;goto B7651bf;
case 0x7651c3:c.instructions+=2;goto B7651c3;
case 0x7651c8:c.instructions+=1;goto B7651c8;
case 0x7651cd:goto L7651cd;
case 0x7651d2:c.instructions+=2;goto B7651d2;
case 0x7651d5:c.instructions+=1;goto B7651d5;
case 0x7651d7:goto L7651d7;
case 0x7651df:c.instructions+=1;goto B7651df;
case 0x7651e4:goto L7651e4;
case 0x7651ec:c.instructions+=1;goto B7651ec;
case 0x7651f1:goto L7651f1;
case 0x7651f6:c.instructions+=9;goto B7651f6;
case 0x7651fa:c.instructions+=8;goto B7651fa;
case 0x7651ff:c.instructions+=7;goto B7651ff;
case 0x765204:c.instructions+=6;goto B765204;
case 0x765209:c.instructions+=5;goto B765209;
case 0x76520b:c.instructions+=4;goto B76520b;
case 0x765210:c.instructions+=3;goto B765210;
case 0x765212:c.instructions+=2;goto B765212;
case 0x765218:c.instructions+=1;goto B765218;
case 0x76521e:goto L76521e;
case 0x765223:c.instructions+=1;goto B765223;
case 0x765225:goto L765225;
case 0x76522b:c.instructions+=7;goto B76522b;
case 0x76522f:c.instructions+=6;goto B76522f;
case 0x765234:c.instructions+=5;goto B765234;
case 0x765237:c.instructions+=4;goto B765237;
case 0x76523d:c.instructions+=3;goto B76523d;
case 0x765241:c.instructions+=2;goto B765241;
case 0x765244:c.instructions+=1;goto B765244;
case 0x765245:goto L765245;
case 0x76524b:c.instructions+=8;goto B76524b;
case 0x765250:c.instructions+=7;goto B765250;
case 0x765256:c.instructions+=6;goto B765256;
case 0x76525c:c.instructions+=5;goto B76525c;
case 0x765261:c.instructions+=4;goto B765261;
case 0x765263:c.instructions+=3;goto B765263;
case 0x765268:c.instructions+=2;goto B765268;
case 0x76526b:c.instructions+=1;goto B76526b;
case 0x765271:goto L765271;
case 0x765490:goto L765490;
case 0x765494:c.instructions+=1;goto B765494;
case 0x765496:goto L765496;
case 0x76549d:c.instructions+=4;goto B76549d;
case 0x7654a0:c.instructions+=3;goto B7654a0;
case 0x7654a3:c.instructions+=2;goto B7654a3;
case 0x7654a5:c.instructions+=1;goto B7654a5;
case 0x7654a7:goto L7654a7;
case 0x7654ab:goto L7654ab;
case 0x7654b2:c.instructions+=20;goto B7654b2;
case 0x7654b8:c.instructions+=19;goto B7654b8;
case 0x7654bd:c.instructions+=18;goto B7654bd;
case 0x7654bf:c.instructions+=17;goto B7654bf;
case 0x7654c5:c.instructions+=16;goto B7654c5;
case 0x7654cc:c.instructions+=15;goto B7654cc;
case 0x7654d3:c.instructions+=14;goto B7654d3;
case 0x7654d4:c.instructions+=13;goto B7654d4;
case 0x7654da:c.instructions+=12;goto B7654da;
case 0x7654dc:c.instructions+=11;goto B7654dc;
case 0x7654de:c.instructions+=10;goto B7654de;
case 0x7654e0:c.instructions+=9;goto B7654e0;
case 0x7654e2:c.instructions+=8;goto B7654e2;
case 0x7654e4:c.instructions+=7;goto B7654e4;
case 0x7654e5:c.instructions+=6;goto B7654e5;
case 0x7654e8:c.instructions+=5;goto B7654e8;
case 0x7654ee:c.instructions+=4;goto B7654ee;
case 0x7654f0:c.instructions+=3;goto B7654f0;
case 0x7654f2:c.instructions+=2;goto B7654f2;
case 0x7654f5:c.instructions+=1;goto B7654f5;
case 0x7654f7:goto L7654f7;
case 0x7654fb:c.instructions+=1;goto B7654fb;
case 0x7654fd:goto L7654fd;
case 0x765504:c.instructions+=4;goto B765504;
case 0x765507:c.instructions+=3;goto B765507;
case 0x76550a:c.instructions+=2;goto B76550a;
case 0x76550c:c.instructions+=1;goto B76550c;
case 0x76550e:goto L76550e;
case 0x765512:goto L765512;
case 0x765519:c.instructions+=34;goto B765519;
case 0x76551f:c.instructions+=33;goto B76551f;
case 0x765524:c.instructions+=32;goto B765524;
case 0x765526:c.instructions+=31;goto B765526;
case 0x76552c:c.instructions+=30;goto B76552c;
case 0x765533:c.instructions+=29;goto B765533;
case 0x76553a:c.instructions+=28;goto B76553a;
case 0x76553c:c.instructions+=27;goto B76553c;
case 0x765542:c.instructions+=26;goto B765542;
case 0x765544:c.instructions+=25;goto B765544;
case 0x76554b:c.instructions+=24;goto B76554b;
case 0x76554d:c.instructions+=23;goto B76554d;
case 0x765553:c.instructions+=22;goto B765553;
case 0x765555:c.instructions+=21;goto B765555;
case 0x765557:c.instructions+=20;goto B765557;
case 0x765559:c.instructions+=19;goto B765559;
case 0x76555b:c.instructions+=18;goto B76555b;
case 0x76555d:c.instructions+=17;goto B76555d;
case 0x76555e:c.instructions+=16;goto B76555e;
case 0x765560:c.instructions+=15;goto B765560;
case 0x765562:c.instructions+=14;goto B765562;
case 0x765564:c.instructions+=13;goto B765564;
case 0x765566:c.instructions+=12;goto B765566;
case 0x765568:c.instructions+=11;goto B765568;
case 0x76556a:c.instructions+=10;goto B76556a;
case 0x76556b:c.instructions+=9;goto B76556b;
case 0x76556d:c.instructions+=8;goto B76556d;
case 0x76556f:c.instructions+=7;goto B76556f;
case 0x765571:c.instructions+=6;goto B765571;
case 0x765574:c.instructions+=5;goto B765574;
case 0x76557a:c.instructions+=4;goto B76557a;
case 0x76557c:c.instructions+=3;goto B76557c;
case 0x76557e:c.instructions+=2;goto B76557e;
case 0x765581:c.instructions+=1;goto B765581;
case 0x765594:goto L765594;
case 0x765596:c.instructions+=3;goto B765596;
case 0x765598:c.instructions+=2;goto B765598;
case 0x76559a:c.instructions+=1;goto B76559a;
case 0x7655cd:goto L7655cd;
case 0x7655cf:c.instructions+=4;goto B7655cf;
case 0x7655d5:c.instructions+=3;goto B7655d5;
case 0x7655db:c.instructions+=2;goto B7655db;
case 0x7655e2:c.instructions+=1;goto B7655e2;
case 0x7655e4:goto L7655e4;
case 0x7655eb:c.instructions+=1;goto B7655eb;
case 0x7655ed:goto L7655ed;
case 0x7655f4:goto L7655f4;
case 0x7655f6:c.instructions+=1;goto B7655f6;
case 0x7655f7:goto L7655f7;
case 0x7655fd:c.instructions+=3;goto B7655fd;
case 0x765603:c.instructions+=2;goto B765603;
case 0x76560a:c.instructions+=1;goto B76560a;
case 0x76560c:goto L76560c;
case 0x76560e:c.instructions+=4;goto B76560e;
case 0x765614:c.instructions+=3;goto B765614;
case 0x76561a:c.instructions+=2;goto B76561a;
case 0x765621:c.instructions+=1;goto B765621;
case 0x765623:goto L765623;
case 0x76562a:c.instructions+=1;goto B76562a;
case 0x76562c:goto L76562c;
case 0x765633:goto L765633;
case 0x765635:c.instructions+=1;goto B765635;
case 0x765636:goto L765636;
case 0x765638:c.instructions+=4;goto B765638;
case 0x76563a:c.instructions+=3;goto B76563a;
case 0x765640:c.instructions+=2;goto B765640;
case 0x765647:c.instructions+=1;goto B765647;
case 0x765649:goto L765649;
case 0x765650:goto L765650;
case 0x765652:c.instructions+=1;goto B765652;
case 0x765660:goto L765660;
case 0x765661:c.instructions+=8;goto B765661;
case 0x765663:c.instructions+=7;goto B765663;
case 0x765666:c.instructions+=6;goto B765666;
case 0x765669:c.instructions+=5;goto B765669;
case 0x76566c:c.instructions+=4;goto B76566c;
case 0x76566f:c.instructions+=3;goto B76566f;
case 0x765672:c.instructions+=2;goto B765672;
case 0x765675:c.instructions+=1;goto B765675;
case 0x765677:goto L765677;
case 0x765678:c.instructions+=3;goto B765678;
case 0x76567a:c.instructions+=2;goto B76567a;
case 0x76567d:c.instructions+=1;goto B76567d;
case 0x765680:goto L765680;
case 0x765683:c.instructions+=11;goto B765683;
case 0x765686:c.instructions+=10;goto B765686;
case 0x765689:c.instructions+=9;goto B765689;
case 0x76568c:c.instructions+=8;goto B76568c;
case 0x76568f:c.instructions+=7;goto B76568f;
case 0x765692:c.instructions+=6;goto B765692;
case 0x765695:c.instructions+=5;goto B765695;
case 0x765698:c.instructions+=4;goto B765698;
case 0x765699:c.instructions+=3;goto B765699;
case 0x76569a:c.instructions+=2;goto B76569a;
case 0x76569b:c.instructions+=1;goto B76569b;
case 0x7656a0:goto L7656a0;
case 0x7656a3:c.instructions+=3;goto B7656a3;
case 0x7656a6:c.instructions+=2;goto B7656a6;
case 0x7656ac:c.instructions+=1;goto B7656ac;
case 0x7656ae:goto L7656ae;
case 0x7656b1:goto L7656b1;
case 0x7656b2:c.instructions+=1;goto B7656b2;
case 0x7656c0:goto L7656c0;
case 0x7656c2:c.instructions+=10;goto B7656c2;
case 0x7656c4:c.instructions+=9;goto B7656c4;
case 0x7656c6:c.instructions+=8;goto B7656c6;
case 0x7656c8:c.instructions+=7;goto B7656c8;
case 0x7656ca:c.instructions+=6;goto B7656ca;
case 0x7656cc:c.instructions+=5;goto B7656cc;
case 0x7656ce:c.instructions+=4;goto B7656ce;
case 0x7656d0:c.instructions+=3;goto B7656d0;
case 0x7656d2:c.instructions+=2;goto B7656d2;
case 0x7656d4:c.instructions+=1;goto B7656d4;
case 0x7656d5:goto L7656d5;
case 0x7656d9:c.instructions+=5;goto B7656d9;
case 0x7656df:c.instructions+=4;goto B7656df;
case 0x7656e2:c.instructions+=3;goto B7656e2;
case 0x7656e7:c.instructions+=2;goto B7656e7;
case 0x7656eb:c.instructions+=1;goto B7656eb;
case 0x7656ec:goto L7656ec;
case 0x7656f1:c.instructions+=1;goto B7656f1;
case 0x7656f3:goto L7656f3;
case 0x7656f8:c.instructions+=1;goto B7656f8;
case 0x7656f9:goto L7656f9;
case 0x7656ff:c.instructions+=2;goto B7656ff;
case 0x765704:c.instructions+=1;goto B765704;
case 0x765705:goto L765705;
case 0x765708:c.instructions+=3;goto B765708;
case 0x76570d:c.instructions+=2;goto B76570d;
case 0x765712:c.instructions+=1;goto B765712;
case 0x765714:goto L765714;
case 0x765716:c.instructions+=1;goto B765716;
case 0x765717:goto L765717;
case 0x76571a:c.instructions+=14;goto B76571a;
case 0x76571d:c.instructions+=13;goto B76571d;
case 0x765722:c.instructions+=12;goto B765722;
case 0x765726:c.instructions+=11;goto B765726;
case 0x765729:c.instructions+=10;goto B765729;
case 0x76572b:c.instructions+=9;goto B76572b;
case 0x76572f:c.instructions+=8;goto B76572f;
case 0x765732:c.instructions+=7;goto B765732;
case 0x765736:c.instructions+=6;goto B765736;
case 0x765739:c.instructions+=5;goto B765739;
case 0x76573c:c.instructions+=4;goto B76573c;
case 0x76573f:c.instructions+=3;goto B76573f;
case 0x765744:c.instructions+=2;goto B765744;
case 0x765747:c.instructions+=1;goto B765747;
case 0x765748:goto L765748;
case 0x76574c:c.instructions+=3;goto B76574c;
case 0x765751:c.instructions+=2;goto B765751;
case 0x765756:c.instructions+=1;goto B765756;
case 0x765758:goto L765758;
case 0x765759:goto L765759;
case 0x76575d:c.instructions+=1;goto B76575d;
case 0x76575e:goto L76575e;
case 0x765764:c.instructions+=1;goto B765764;
case 0x765766:goto L765766;
case 0x765769:goto L765769;
case 0x76576a:c.instructions+=1;goto B76576a;
case 0x76576b:goto L76576b;
case 0x76576f:c.instructions+=2;goto B76576f;
case 0x765773:c.instructions+=1;goto B765773;
case 0x765775:goto L765775;
case 0x765779:c.instructions+=1;goto B765779;
case 0x76577b:goto L76577b;
case 0x76577e:c.instructions+=2;goto B76577e;
case 0x765782:c.instructions+=1;goto B765782;
case 0x765784:goto L765784;
case 0x765789:c.instructions+=1;goto B765789;
case 0x76578e:goto L76578e;
case 0x76578f:c.instructions+=1;goto B76578f;
case 0x765790:goto L765790;
case 0x765793:goto L765793;
case 0x765794:c.instructions+=1;goto B765794;
case 0x7657a9:goto L7657a9;
case 0x7657ac:c.instructions+=5;goto B7657ac;
case 0x7657af:c.instructions+=4;goto B7657af;
case 0x7657b3:c.instructions+=3;goto B7657b3;
case 0x7657b6:c.instructions+=2;goto B7657b6;
case 0x7657bb:c.instructions+=1;goto B7657bb;
case 0x7657bd:goto L7657bd;
case 0x7657c2:c.instructions+=1;goto B7657c2;
case 0x7657c4:goto L7657c4;
case 0x7657c8:c.instructions+=2;goto B7657c8;
case 0x7657cc:c.instructions+=1;goto B7657cc;
case 0x7657ce:goto L7657ce;
case 0x7657d2:c.instructions+=1;goto B7657d2;
case 0x7657d4:goto L7657d4;
case 0x7657d7:c.instructions+=2;goto B7657d7;
case 0x7657db:c.instructions+=1;goto B7657db;
case 0x7657dd:goto L7657dd;
case 0x7657e2:goto L7657e2;
case 0x7657e5:c.instructions+=1;goto B7657e5;
case 0x7657e7:goto L7657e7;
case 0x7657ec:goto L7657ec;
case 0x7657ed:c.instructions+=1;goto B7657ed;
case 0x7657ee:goto L7657ee;
case 0x7657f3:goto L7657f3;
case 0x7657f4:c.instructions+=1;goto B7657f4;
case 0x7657f5:goto L7657f5;
case 0x7657f8:goto L7657f8;
case 0x7657f9:c.instructions+=1;goto B7657f9;
case 0x7657fa:goto L7657fa;
case 0x765800:c.instructions+=10;goto B765800;
case 0x765802:c.instructions+=9;goto B765802;
case 0x765804:c.instructions+=8;goto B765804;
case 0x765806:c.instructions+=7;goto B765806;
case 0x765808:c.instructions+=6;goto B765808;
case 0x76580a:c.instructions+=5;goto B76580a;
case 0x765810:c.instructions+=4;goto B765810;
case 0x765813:c.instructions+=3;goto B765813;
case 0x765814:c.instructions+=2;goto B765814;
case 0x765819:c.instructions+=1;goto B765819;
case 0x76581b:goto L76581b;
case 0x765821:c.instructions+=1;goto B765821;
case 0x765823:goto L765823;
case 0x765829:c.instructions+=10;goto B765829;
case 0x76582b:c.instructions+=9;goto B76582b;
case 0x76582d:c.instructions+=8;goto B76582d;
case 0x76582f:c.instructions+=7;goto B76582f;
case 0x765831:c.instructions+=6;goto B765831;
case 0x765833:c.instructions+=5;goto B765833;
case 0x765839:c.instructions+=4;goto B765839;
case 0x76583c:c.instructions+=3;goto B76583c;
case 0x76583d:c.instructions+=2;goto B76583d;
case 0x765842:c.instructions+=1;goto B765842;
case 0x765844:goto L765844;
case 0x76584a:c.instructions+=1;goto B76584a;
case 0x76584c:goto L76584c;
case 0x76584d:c.instructions+=8;goto B76584d;
case 0x76584f:c.instructions+=7;goto B76584f;
case 0x765850:c.instructions+=6;goto B765850;
case 0x765851:c.instructions+=5;goto B765851;
case 0x765854:c.instructions+=4;goto B765854;
case 0x765855:c.instructions+=3;goto B765855;
case 0x765856:c.instructions+=2;goto B765856;
case 0x765859:c.instructions+=1;goto B765859;
case 0x76585e:goto L76585e;
case 0x765860:c.instructions+=3;goto B765860;
case 0x765861:c.instructions+=2;goto B765861;
case 0x765862:c.instructions+=1;goto B765862;
case 0x765864:goto L765864;
case 0x765867:c.instructions+=4;goto B765867;
case 0x765868:c.instructions+=3;goto B765868;
case 0x765869:c.instructions+=2;goto B765869;
case 0x76586c:c.instructions+=1;goto B76586c;
case 0x765871:goto L765871;
case 0x765874:c.instructions+=7;goto B765874;
case 0x765875:c.instructions+=6;goto B765875;
case 0x765878:c.instructions+=5;goto B765878;
case 0x765879:c.instructions+=4;goto B765879;
case 0x76587c:c.instructions+=3;goto B76587c;
case 0x76587e:c.instructions+=2;goto B76587e;
case 0x765881:c.instructions+=1;goto B765881;
case 0x765883:goto L765883;
case 0x765886:c.instructions+=7;goto B765886;
case 0x765887:c.instructions+=6;goto B765887;
case 0x76588d:c.instructions+=5;goto B76588d;
case 0x76588e:c.instructions+=4;goto B76588e;
case 0x765891:c.instructions+=3;goto B765891;
case 0x765894:c.instructions+=2;goto B765894;
case 0x765897:c.instructions+=1;goto B765897;
case 0x76589c:goto L76589c;
case 0x76589f:c.instructions+=5;goto B76589f;
case 0x7658a0:c.instructions+=4;goto B7658a0;
case 0x7658a1:c.instructions+=3;goto B7658a1;
case 0x7658a3:c.instructions+=2;goto B7658a3;
case 0x7658a6:c.instructions+=1;goto B7658a6;
case 0x7658a8:goto L7658a8;
case 0x7658aa:c.instructions+=3;goto B7658aa;
case 0x7658ab:c.instructions+=2;goto B7658ab;
case 0x7658ac:c.instructions+=1;goto B7658ac;
case 0x7658ad:goto L7658ad;
case 0x7658af:c.instructions+=3;goto B7658af;
case 0x7658b0:c.instructions+=2;goto B7658b0;
case 0x7658b1:c.instructions+=1;goto B7658b1;
case 0x7658b2:goto L7658b2;
case 0x7658b4:c.instructions+=2;goto B7658b4;
case 0x7658b5:c.instructions+=1;goto B7658b5;
case 0x7658b6:goto L7658b6;
case 0x7658b7:c.instructions+=11;goto B7658b7;
case 0x7658b9:c.instructions+=10;goto B7658b9;
case 0x7658ba:c.instructions+=9;goto B7658ba;
case 0x7658bb:c.instructions+=8;goto B7658bb;
case 0x7658be:c.instructions+=7;goto B7658be;
case 0x7658bf:c.instructions+=6;goto B7658bf;
case 0x7658c5:c.instructions+=5;goto B7658c5;
case 0x7658c7:c.instructions+=4;goto B7658c7;
case 0x7658c9:c.instructions+=3;goto B7658c9;
case 0x7658cb:c.instructions+=2;goto B7658cb;
case 0x7658ce:c.instructions+=1;goto B7658ce;
case 0x7658d0:goto L7658d0;
case 0x7658d2:goto L7658d2;
case 0x7658d7:c.instructions+=4;goto B7658d7;
case 0x7658da:c.instructions+=3;goto B7658da;
case 0x7658dd:c.instructions+=2;goto B7658dd;
case 0x7658e2:c.instructions+=1;goto B7658e2;
case 0x7658e4:goto L7658e4;
case 0x7658e7:c.instructions+=1;goto B7658e7;
case 0x7658e9:goto L7658e9;
case 0x7658ec:c.instructions+=4;goto B7658ec;
case 0x7658f2:c.instructions+=3;goto B7658f2;
case 0x7658f4:c.instructions+=2;goto B7658f4;
case 0x7658f7:c.instructions+=1;goto B7658f7;
case 0x7658fd:goto L7658fd;
case 0x765900:c.instructions+=5;goto B765900;
case 0x765906:c.instructions+=4;goto B765906;
case 0x765908:c.instructions+=3;goto B765908;
case 0x76590b:c.instructions+=2;goto B76590b;
case 0x76590e:c.instructions+=1;goto B76590e;
case 0x765914:goto L765914;
case 0x76591a:c.instructions+=3;goto B76591a;
case 0x76591c:c.instructions+=2;goto B76591c;
case 0x76591d:c.instructions+=1;goto B76591d;
case 0x765922:goto L765922;
case 0x765925:c.instructions+=1;goto B765925;
case 0x765927:goto L765927;
case 0x76592a:c.instructions+=1;goto B76592a;
case 0x76592c:goto L76592c;
case 0x76592f:c.instructions+=4;goto B76592f;
case 0x765935:c.instructions+=3;goto B765935;
case 0x765937:c.instructions+=2;goto B765937;
case 0x76593a:c.instructions+=1;goto B76593a;
case 0x76593c:goto L76593c;
case 0x76593e:c.instructions+=1;goto B76593e;
case 0x765943:goto L765943;
case 0x765946:c.instructions+=5;goto B765946;
case 0x76594c:c.instructions+=4;goto B76594c;
case 0x76594e:c.instructions+=3;goto B76594e;
case 0x765951:c.instructions+=2;goto B765951;
case 0x765954:c.instructions+=1;goto B765954;
case 0x765956:goto L765956;
case 0x76595c:c.instructions+=1;goto B76595c;
case 0x765961:goto L765961;
case 0x765964:c.instructions+=1;goto B765964;
case 0x765966:goto L765966;
case 0x765969:c.instructions+=1;goto B765969;
case 0x76596f:goto L76596f;
case 0x765972:c.instructions+=4;goto B765972;
case 0x765978:c.instructions+=3;goto B765978;
case 0x76597a:c.instructions+=2;goto B76597a;
case 0x76597d:c.instructions+=1;goto B76597d;
case 0x76597f:goto L76597f;
case 0x765985:c.instructions+=1;goto B765985;
case 0x76598a:goto L76598a;
case 0x76598d:c.instructions+=5;goto B76598d;
case 0x765993:c.instructions+=4;goto B765993;
case 0x765995:c.instructions+=3;goto B765995;
case 0x765998:c.instructions+=2;goto B765998;
case 0x76599b:c.instructions+=1;goto B76599b;
case 0x76599d:goto L76599d;
case 0x76599f:c.instructions+=1;goto B76599f;
case 0x7659a1:goto L7659a1;
case 0x7659a3:c.instructions+=1;goto B7659a3;
case 0x7659a5:goto L7659a5;
case 0x7659a8:c.instructions+=1;goto B7659a8;
case 0x7659aa:goto L7659aa;
case 0x7659ad:c.instructions+=1;goto B7659ad;
case 0x7659af:goto L7659af;
case 0x7659b2:c.instructions+=4;goto B7659b2;
case 0x7659b3:c.instructions+=3;goto B7659b3;
case 0x7659b4:c.instructions+=2;goto B7659b4;
case 0x7659b7:c.instructions+=1;goto B7659b7;
case 0x7659bc:goto L7659bc;
case 0x7659bf:c.instructions+=7;goto B7659bf;
case 0x7659c0:c.instructions+=6;goto B7659c0;
case 0x7659c6:c.instructions+=5;goto B7659c6;
case 0x7659c7:c.instructions+=4;goto B7659c7;
case 0x7659c9:c.instructions+=3;goto B7659c9;
case 0x7659cb:c.instructions+=2;goto B7659cb;
case 0x7659ce:c.instructions+=1;goto B7659ce;
case 0x7659d0:goto L7659d0;
case 0x7659d3:c.instructions+=2;goto B7659d3;
case 0x7659d9:c.instructions+=1;goto B7659d9;
case 0x7659db:goto L7659db;
case 0x7659dd:goto L7659dd;
case 0x7659e0:c.instructions+=2;goto B7659e0;
case 0x7659e3:c.instructions+=1;goto B7659e3;
case 0x7659e5:goto L7659e5;
case 0x7659e8:c.instructions+=4;goto B7659e8;
case 0x7659ee:c.instructions+=3;goto B7659ee;
case 0x7659f0:c.instructions+=2;goto B7659f0;
case 0x7659f3:c.instructions+=1;goto B7659f3;
case 0x7659f5:goto L7659f5;
case 0x7659f8:c.instructions+=1;goto B7659f8;
case 0x7659fa:goto L7659fa;
case 0x765a00:c.instructions+=1;goto B765a00;
case 0x765a02:goto L765a02;
case 0x765a04:goto L765a04;
case 0x765a07:c.instructions+=2;goto B765a07;
case 0x765a0a:c.instructions+=1;goto B765a0a;
case 0x765a0c:goto L765a0c;
case 0x765a0e:goto L765a0e;
case 0x765a11:goto L765a11;
case 0x765a13:goto L765a13;
case 0x765a15:c.instructions+=3;goto B765a15;
case 0x765a16:c.instructions+=2;goto B765a16;
case 0x765a17:c.instructions+=1;goto B765a17;
case 0x765a18:goto L765a18;
case 0x765a1d:c.instructions+=1;goto B765a1d;
case 0x765a1f:goto L765a1f;
case 0x765a22:c.instructions+=1;goto B765a22;
case 0x765a24:goto L765a24;
case 0x765a27:c.instructions+=1;goto B765a27;
case 0x765a29:goto L765a29;
case 0x765a2a:c.instructions+=1;goto B765a2a;
case 0x765a2c:goto L765a2c;
case 0x765a2e:c.instructions+=1;goto B765a2e;
case 0x765a2f:goto L765a2f;
case 0x765a34:c.instructions+=1;goto B765a34;
case 0x765a35:goto L765a35;
case 0x765a3a:c.instructions+=1;goto B765a3a;
case 0x765a3b:goto L765a3b;
case 0x765a40:c.instructions+=1;goto B765a40;
case 0x765a41:goto L765a41;
case 0x765a46:c.instructions+=1;goto B765a46;
case 0x765a47:goto L765a47;
case 0x765a48:c.instructions+=4;goto B765a48;
case 0x765a4a:c.instructions+=3;goto B765a4a;
case 0x765a4c:c.instructions+=2;goto B765a4c;
case 0x765a4d:c.instructions+=1;goto B765a4d;
case 0x765a52:goto L765a52;
case 0x765a54:goto L765a54;
case 0x765a55:c.instructions+=10;goto B765a55;
case 0x765a57:c.instructions+=9;goto B765a57;
case 0x765a5c:c.instructions+=8;goto B765a5c;
case 0x765a61:c.instructions+=7;goto B765a61;
case 0x765a66:c.instructions+=6;goto B765a66;
case 0x765a6b:c.instructions+=5;goto B765a6b;
case 0x765a6c:c.instructions+=4;goto B765a6c;
case 0x765a6d:c.instructions+=3;goto B765a6d;
case 0x765a6e:c.instructions+=2;goto B765a6e;
case 0x765a6f:c.instructions+=1;goto B765a6f;
case 0x765a70:goto L765a70;
case 0x765a71:c.instructions+=10;goto B765a71;
case 0x765a73:c.instructions+=9;goto B765a73;
case 0x765a79:c.instructions+=8;goto B765a79;
case 0x765a7e:c.instructions+=7;goto B765a7e;
case 0x765a81:c.instructions+=6;goto B765a81;
case 0x765a82:c.instructions+=5;goto B765a82;
case 0x765a85:c.instructions+=4;goto B765a85;
case 0x765a88:c.instructions+=3;goto B765a88;
case 0x765a89:c.instructions+=2;goto B765a89;
case 0x765a8f:c.instructions+=1;goto B765a8f;
case 0x765a95:goto L765a95;
case 0x765a98:c.instructions+=2;goto B765a98;
case 0x765a9d:c.instructions+=1;goto B765a9d;
case 0x765aa3:goto L765aa3;
case 0x765aa5:goto L765aa5;
case 0x765aac:c.instructions+=3;goto B765aac;
case 0x765aad:c.instructions+=2;goto B765aad;
case 0x765aaf:c.instructions+=1;goto B765aaf;
case 0x765ab1:goto L765ab1;
case 0x765ab4:c.instructions+=3;goto B765ab4;
case 0x765ab6:c.instructions+=2;goto B765ab6;
case 0x765abd:c.instructions+=1;goto B765abd;
case 0x765abf:goto L765abf;
case 0x765ac0:c.instructions+=2;goto B765ac0;
case 0x765ac3:c.instructions+=1;goto B765ac3;
case 0x765ac4:goto L765ac4;
case 0x765ac7:c.instructions+=3;goto B765ac7;
case 0x765aca:c.instructions+=2;goto B765aca;
case 0x765acc:c.instructions+=1;goto B765acc;
case 0x765ace:goto L765ace;
case 0x765ad0:c.instructions+=5;goto B765ad0;
case 0x765ad1:c.instructions+=4;goto B765ad1;
case 0x765ad3:c.instructions+=3;goto B765ad3;
case 0x765ad6:c.instructions+=2;goto B765ad6;
case 0x765add:c.instructions+=1;goto B765add;
case 0x765ae2:goto L765ae2;
case 0x765ae4:goto L765ae4;
case 0x765ae6:c.instructions+=1;goto B765ae6;
case 0x765ae9:goto L765ae9;
case 0x765aeb:goto L765aeb;
case 0x765aec:c.instructions+=4;goto B765aec;
case 0x765aee:c.instructions+=3;goto B765aee;
case 0x765aef:c.instructions+=2;goto B765aef;
case 0x765af1:c.instructions+=1;goto B765af1;
case 0x765af3:goto L765af3;
case 0x765af4:c.instructions+=1;goto B765af4;
case 0x765af5:goto L765af5;
case 0x765af7:c.instructions+=9;goto B765af7;
case 0x765afd:c.instructions+=8;goto B765afd;
case 0x765b03:c.instructions+=7;goto B765b03;
case 0x765b09:c.instructions+=6;goto B765b09;
case 0x765b0a:c.instructions+=5;goto B765b0a;
case 0x765b0b:c.instructions+=4;goto B765b0b;
case 0x765b11:c.instructions+=3;goto B765b11;
case 0x765b12:c.instructions+=2;goto B765b12;
case 0x765b14:c.instructions+=1;goto B765b14;
case 0x765b19:goto L765b19;
case 0x765b1b:c.instructions+=10;goto B765b1b;
case 0x765b21:c.instructions+=9;goto B765b21;
case 0x765b27:c.instructions+=8;goto B765b27;
case 0x765b28:c.instructions+=7;goto B765b28;
case 0x765b29:c.instructions+=6;goto B765b29;
case 0x765b2a:c.instructions+=5;goto B765b2a;
case 0x765b30:c.instructions+=4;goto B765b30;
case 0x765b31:c.instructions+=3;goto B765b31;
case 0x765b32:c.instructions+=2;goto B765b32;
case 0x765b38:c.instructions+=1;goto B765b38;
case 0x765b3d:goto L765b3d;
case 0x765b3f:c.instructions+=10;goto B765b3f;
case 0x765b45:c.instructions+=9;goto B765b45;
case 0x765b4b:c.instructions+=8;goto B765b4b;
case 0x765b4c:c.instructions+=7;goto B765b4c;
case 0x765b4d:c.instructions+=6;goto B765b4d;
case 0x765b4e:c.instructions+=5;goto B765b4e;
case 0x765b54:c.instructions+=4;goto B765b54;
case 0x765b55:c.instructions+=3;goto B765b55;
case 0x765b5a:c.instructions+=2;goto B765b5a;
case 0x765b60:c.instructions+=1;goto B765b60;
case 0x765b65:goto L765b65;
case 0x765b68:c.instructions+=1;goto B765b68;
case 0x765b6a:goto L765b6a;
case 0x765b72:c.instructions+=2;goto B765b72;
case 0x765b75:c.instructions+=1;goto B765b75;
case 0x765b77:goto L765b77;
case 0x765b7e:c.instructions+=1;goto B765b7e;
case 0x765b85:goto L765b85;
case 0x765b8b:c.instructions+=1;goto B765b8b;
case 0x765b8d:goto L765b8d;
case 0x765b90:c.instructions+=1;goto B765b90;
case 0x765b92:goto L765b92;
case 0x765b99:c.instructions+=2;goto B765b99;
case 0x765ba0:c.instructions+=1;goto B765ba0;
case 0x765ba2:goto L765ba2;
case 0x765ba9:goto L765ba9;
case 0x765baa:c.instructions+=2;goto B765baa;
case 0x765bac:c.instructions+=1;goto B765bac;
case 0x765bae:goto L765bae;
case 0x765bb0:goto L765bb0;
case 0x765bb2:goto L765bb2;
case 0x765bb5:c.instructions+=1;goto B765bb5;
case 0x765bb7:goto L765bb7;
case 0x765bba:c.instructions+=1;goto B765bba;
case 0x765bbc:goto L765bbc;
case 0x765bc3:c.instructions+=2;goto B765bc3;
case 0x765bc5:c.instructions+=1;goto B765bc5;
case 0x765bc8:goto L765bc8;
case 0x765bce:c.instructions+=1;goto B765bce;
case 0x765bd0:goto L765bd0;
case 0x765bd3:c.instructions+=1;goto B765bd3;
case 0x765bd5:goto L765bd5;
case 0x765bd8:c.instructions+=1;goto B765bd8;
case 0x765bda:goto L765bda;
case 0x765be1:c.instructions+=3;goto B765be1;
case 0x765be3:c.instructions+=2;goto B765be3;
case 0x765be6:c.instructions+=1;goto B765be6;
case 0x765be8:goto L765be8;
case 0x765bef:goto L765bef;
case 0x765bf0:c.instructions+=2;goto B765bf0;
case 0x765bf2:c.instructions+=1;goto B765bf2;
case 0x765bf4:goto L765bf4;
case 0x765bf7:c.instructions+=3;goto B765bf7;
case 0x765bfa:c.instructions+=2;goto B765bfa;
case 0x765bfb:c.instructions+=1;goto B765bfb;
case 0x765c00:goto L765c00;
case 0x765c01:c.instructions+=1;goto B765c01;
case 0x765c02:goto L765c02;
case 0x765c04:c.instructions+=2;goto B765c04;
case 0x765c09:c.instructions+=1;goto B765c09;
case 0x765c0e:goto L765c0e;
case 0x765c10:c.instructions+=1;goto B765c10;
case 0x765c15:goto L765c15;
case 0x765c16:c.instructions+=2;goto B765c16;
case 0x765c1a:c.instructions+=1;goto B765c1a;
case 0x765c1f:goto L765c1f;
case 0x765c21:c.instructions+=5;goto B765c21;
case 0x765c24:c.instructions+=4;goto B765c24;
case 0x765c27:c.instructions+=3;goto B765c27;
case 0x765c2a:c.instructions+=2;goto B765c2a;
case 0x765c30:c.instructions+=1;goto B765c30;
case 0x765c32:goto L765c32;
case 0x765c34:c.instructions+=1;goto B765c34;
case 0x765c36:goto L765c36;
case 0x765c38:c.instructions+=1;goto B765c38;
case 0x765c3a:goto L765c3a;
case 0x765c3b:c.instructions+=1;goto B765c3b;
case 0x765c40:goto L765c40;
case 0x765c41:goto L765c41;
case 0x765c46:c.instructions+=4;goto B765c46;
case 0x765c49:c.instructions+=3;goto B765c49;
case 0x765c4f:c.instructions+=2;goto B765c4f;
case 0x765c52:c.instructions+=1;goto B765c52;
case 0x765c54:goto L765c54;
case 0x765c58:c.instructions+=1;goto B765c58;
case 0x765c5d:goto L765c5d;
case 0x765c5f:c.instructions+=1;goto B765c5f;
case 0x765c64:goto L765c64;
case 0x765c68:goto L765c68;
case 0x765c6a:c.instructions+=1;goto B765c6a;
case 0x765c6f:goto L765c6f;
case 0x765c70:c.instructions+=1;goto B765c70;
case 0x765c71:goto L765c71;
case 0x765c72:c.instructions+=12;goto B765c72;
case 0x765c74:c.instructions+=11;goto B765c74;
case 0x765c77:c.instructions+=10;goto B765c77;
case 0x765c7c:c.instructions+=9;goto B765c7c;
case 0x765c7f:c.instructions+=8;goto B765c7f;
case 0x765c80:c.instructions+=7;goto B765c80;
case 0x765c81:c.instructions+=6;goto B765c81;
case 0x765c84:c.instructions+=5;goto B765c84;
case 0x765c86:c.instructions+=4;goto B765c86;
case 0x765c88:c.instructions+=3;goto B765c88;
case 0x765c8b:c.instructions+=2;goto B765c8b;
case 0x765c8c:c.instructions+=1;goto B765c8c;
case 0x765c92:goto L765c92;
case 0x765c94:c.instructions+=1;goto B765c94;
case 0x765c96:goto L765c96;
case 0x765c9c:c.instructions+=1;goto B765c9c;
case 0x765c9e:goto L765c9e;
case 0x765ca1:c.instructions+=3;goto B765ca1;
case 0x765ca2:c.instructions+=2;goto B765ca2;
case 0x765ca7:c.instructions+=1;goto B765ca7;
case 0x765ca9:goto L765ca9;
case 0x765cac:c.instructions+=3;goto B765cac;
case 0x765cad:c.instructions+=2;goto B765cad;
case 0x765cae:c.instructions+=1;goto B765cae;
case 0x765cb4:goto L765cb4;
case 0x765cb7:c.instructions+=1;goto B765cb7;
case 0x765cbd:goto L765cbd;
case 0x765cbf:c.instructions+=4;goto B765cbf;
case 0x765cc1:c.instructions+=3;goto B765cc1;
case 0x765cc5:c.instructions+=2;goto B765cc5;
case 0x765cc6:c.instructions+=1;goto B765cc6;
case 0x765ccb:goto L765ccb;
case 0x765ccd:goto L765ccd;
case 0x765cce:c.instructions+=3;goto B765cce;
case 0x765cd4:c.instructions+=2;goto B765cd4;
case 0x765cda:c.instructions+=1;goto B765cda;
case 0x765ce0:goto L765ce0;
case 0x765ce4:c.instructions+=1;goto B765ce4;
case 0x765cea:goto L765cea;
case 0x765ced:goto L765ced;
case 0x765cef:c.instructions+=2;goto B765cef;
case 0x765cf1:c.instructions+=1;goto B765cf1;
case 0x765cf7:goto L765cf7;
case 0x765cfb:c.instructions+=2;goto B765cfb;
case 0x765cfe:c.instructions+=1;goto B765cfe;
case 0x765d03:goto L765d03;
case 0x765d05:c.instructions+=3;goto B765d05;
case 0x765d07:c.instructions+=2;goto B765d07;
case 0x765d08:c.instructions+=1;goto B765d08;
case 0x765d0d:goto L765d0d;
case 0x765d0f:goto L765d0f;
case 0x765d12:c.instructions+=4;goto B765d12;
case 0x765d15:c.instructions+=3;goto B765d15;
case 0x765d18:c.instructions+=2;goto B765d18;
case 0x765d19:c.instructions+=1;goto B765d19;
case 0x765d1f:goto L765d1f;
case 0x765d21:c.instructions+=2;goto B765d21;
case 0x765d23:c.instructions+=1;goto B765d23;
case 0x765d25:goto L765d25;
case 0x765d28:c.instructions+=2;goto B765d28;
case 0x765d2a:c.instructions+=1;goto B765d2a;
case 0x765d2c:goto L765d2c;
case 0x765d2f:c.instructions+=3;goto B765d2f;
case 0x765d32:c.instructions+=2;goto B765d32;
case 0x765d34:c.instructions+=1;goto B765d34;
case 0x765d36:goto L765d36;
case 0x765d39:c.instructions+=1;goto B765d39;
case 0x765d3f:goto L765d3f;
case 0x765d45:c.instructions+=3;goto B765d45;
case 0x765d46:c.instructions+=2;goto B765d46;
case 0x765d48:c.instructions+=1;goto B765d48;
case 0x765d4a:goto L765d4a;
case 0x765d4b:c.instructions+=2;goto B765d4b;
case 0x765d4c:c.instructions+=1;goto B765d4c;
case 0x765d4e:goto L765d4e;
case 0x765d50:c.instructions+=1;goto B765d50;
case 0x765d52:goto L765d52;
case 0x765d55:c.instructions+=3;goto B765d55;
case 0x765d58:c.instructions+=2;goto B765d58;
case 0x765d5c:c.instructions+=1;goto B765d5c;
case 0x765d5e:goto L765d5e;
case 0x765d61:c.instructions+=3;goto B765d61;
case 0x765d66:c.instructions+=2;goto B765d66;
case 0x765d70:c.instructions+=1;goto B765d70;
case 0x765d75:goto L765d75;
case 0x765d7b:c.instructions+=7;goto B765d7b;
case 0x765d7d:c.instructions+=6;goto B765d7d;
case 0x765d82:c.instructions+=5;goto B765d82;
case 0x765d83:c.instructions+=4;goto B765d83;
case 0x765d84:c.instructions+=3;goto B765d84;
case 0x765d89:c.instructions+=2;goto B765d89;
case 0x765d8a:c.instructions+=1;goto B765d8a;
case 0x765d8c:goto L765d8c;
case 0x765d93:c.instructions+=1;goto B765d93;
case 0x765d94:goto L765d94;
case 0x765d96:c.instructions+=1;goto B765d96;
case 0x765d98:goto L765d98;
case 0x765d99:c.instructions+=3;goto B765d99;
case 0x765d9a:c.instructions+=2;goto B765d9a;
case 0x765d9e:c.instructions+=1;goto B765d9e;
case 0x765da4:goto L765da4;
case 0x765da6:c.instructions+=2;goto B765da6;
case 0x765da7:c.instructions+=1;goto B765da7;
case 0x765da9:goto L765da9;
case 0x765db0:c.instructions+=3;goto B765db0;
case 0x765db1:c.instructions+=2;goto B765db1;
case 0x765db6:c.instructions+=1;goto B765db6;
case 0x765db8:goto L765db8;
case 0x765dba:c.instructions+=1;goto B765dba;
case 0x765dbf:goto L765dbf;
case 0x765dc4:c.instructions+=2;goto B765dc4;
case 0x765dca:c.instructions+=1;goto B765dca;
case 0x765dcc:goto L765dcc;
case 0x765dd2:goto L765dd2;
case 0x765dd4:c.instructions+=5;goto B765dd4;
case 0x765dd9:c.instructions+=4;goto B765dd9;
case 0x765dda:c.instructions+=3;goto B765dda;
case 0x765ddb:c.instructions+=2;goto B765ddb;
case 0x765ddc:c.instructions+=1;goto B765ddc;
case 0x765dde:goto L765dde;
case 0x765de4:c.instructions+=1;goto B765de4;
case 0x765de6:goto L765de6;
case 0x765deb:goto L765deb;
case 0x765df0:goto L765df0;
case 0x765df2:c.instructions+=1;goto B765df2;
case 0x765df4:goto L765df4;
case 0x765df7:goto L765df7;
case 0x765dfa:c.instructions+=5;goto B765dfa;
case 0x765dfd:c.instructions+=4;goto B765dfd;
case 0x765dfe:c.instructions+=3;goto B765dfe;
case 0x765dff:c.instructions+=2;goto B765dff;
case 0x765e00:c.instructions+=1;goto B765e00;
case 0x765e05:goto L765e05;
case 0x765e06:c.instructions+=1;goto B765e06;
case 0x765e07:goto L765e07;
case 0x765e09:c.instructions+=2;goto B765e09;
case 0x765e0e:c.instructions+=1;goto B765e0e;
case 0x765e13:goto L765e13;
case 0x765e17:c.instructions+=2;goto B765e17;
case 0x765e19:c.instructions+=1;goto B765e19;
case 0x765e1e:goto L765e1e;
case 0x765e1f:c.instructions+=6;goto B765e1f;
case 0x765e21:c.instructions+=5;goto B765e21;
case 0x765e24:c.instructions+=4;goto B765e24;
case 0x765e2a:c.instructions+=3;goto B765e2a;
case 0x765e2d:c.instructions+=2;goto B765e2d;
case 0x765e30:c.instructions+=1;goto B765e30;
case 0x765e32:goto L765e32;
case 0x765e3c:c.instructions+=1;goto B765e3c;
case 0x765e42:goto L765e42;
case 0x765e44:goto L765e44;
case 0x765e47:c.instructions+=1;goto B765e47;
case 0x765e49:goto L765e49;
case 0x765e53:c.instructions+=1;goto B765e53;
case 0x765e59:goto L765e59;
case 0x765e5b:goto L765e5b;
case 0x765e5e:c.instructions+=1;goto B765e5e;
case 0x765e60:goto L765e60;
case 0x765e6a:c.instructions+=1;goto B765e6a;
case 0x765e6f:goto L765e6f;
case 0x765e72:c.instructions+=2;goto B765e72;
case 0x765e78:c.instructions+=1;goto B765e78;
case 0x765e7e:goto L765e7e;
case 0x765e84:c.instructions+=3;goto B765e84;
case 0x765e87:c.instructions+=2;goto B765e87;
case 0x765e89:c.instructions+=1;goto B765e89;
case 0x765e8b:goto L765e8b;
case 0x765e8d:c.instructions+=1;goto B765e8d;
case 0x765e8f:goto L765e8f;
case 0x765e94:c.instructions+=1;goto B765e94;
case 0x765e99:goto L765e99;
case 0x765e9a:c.instructions+=2;goto B765e9a;
case 0x765e9c:c.instructions+=1;goto B765e9c;
case 0x765e9f:goto L765e9f;
case 0x765ea1:c.instructions+=1;goto B765ea1;
case 0x765ea3:goto L765ea3;
case 0x765ea6:c.instructions+=1;goto B765ea6;
case 0x765eab:goto L765eab;
case 0x765eac:c.instructions+=3;goto B765eac;
case 0x765eaf:c.instructions+=2;goto B765eaf;
case 0x765eb1:c.instructions+=1;goto B765eb1;
case 0x765eb3:goto L765eb3;
case 0x765eb5:c.instructions+=7;goto B765eb5;
case 0x765eba:c.instructions+=6;goto B765eba;
case 0x765ebd:c.instructions+=5;goto B765ebd;
case 0x765ec2:c.instructions+=4;goto B765ec2;
case 0x765ec5:c.instructions+=3;goto B765ec5;
case 0x765eca:c.instructions+=2;goto B765eca;
case 0x765ecd:c.instructions+=1;goto B765ecd;
case 0x765ecf:goto L765ecf;
case 0x765ed2:c.instructions+=2;goto B765ed2;
case 0x765ed5:c.instructions+=1;goto B765ed5;
case 0x765ed7:goto L765ed7;
case 0x765edf:c.instructions+=3;goto B765edf;
case 0x765ee4:c.instructions+=2;goto B765ee4;
case 0x765ee5:c.instructions+=1;goto B765ee5;
case 0x765ee7:goto L765ee7;
case 0x765ee9:goto L765ee9;
case 0x765eec:c.instructions+=2;goto B765eec;
case 0x765ef1:c.instructions+=1;goto B765ef1;
case 0x765ef3:goto L765ef3;
case 0x765ef9:c.instructions+=3;goto B765ef9;
case 0x765efd:c.instructions+=2;goto B765efd;
case 0x765efe:c.instructions+=1;goto B765efe;
case 0x765f00:goto L765f00;
case 0x765f02:goto L765f02;
case 0x765f05:c.instructions+=2;goto B765f05;
case 0x765f0a:c.instructions+=1;goto B765f0a;
case 0x765f0c:goto L765f0c;
case 0x765f12:c.instructions+=3;goto B765f12;
case 0x765f19:c.instructions+=2;goto B765f19;
case 0x765f1a:c.instructions+=1;goto B765f1a;
case 0x765f1c:goto L765f1c;
case 0x765f22:goto L765f22;
case 0x765f26:c.instructions+=1;goto B765f26;
case 0x765f28:goto L765f28;
case 0x765f2e:c.instructions+=1;goto B765f2e;
case 0x765f30:goto L765f30;
case 0x765f31:c.instructions+=1;goto B765f31;
case 0x765f36:goto L765f36;
case 0x765f37:c.instructions+=1;goto B765f37;
case 0x765f39:goto L765f39;
case 0x765f3c:goto L765f3c;
case 0x765f40:c.instructions+=1;goto B765f40;
case 0x765f45:goto L765f45;
case 0x765f48:c.instructions+=1;goto B765f48;
case 0x765f4d:goto L765f4d;
case 0x765f4e:goto L765f4e;
case 0x765f50:c.instructions+=1;goto B765f50;
case 0x765f55:goto L765f55;
case 0x765f56:c.instructions+=1;goto B765f56;
case 0x765f57:goto L765f57;
case 0x765f5e:c.instructions+=1;goto B765f5e;
case 0x765f60:goto L765f60;
case 0x765f62:c.instructions+=1;goto B765f62;
case 0x765f67:goto L765f67;
case 0x765f68:c.instructions+=1;goto B765f68;
case 0x765f72:goto L765f72;
case 0x765f74:c.instructions+=1;goto B765f74;
case 0x765f75:goto L765f75;
case 0x765f76:c.instructions+=3;goto B765f76;
case 0x765f7a:c.instructions+=2;goto B765f7a;
case 0x765f7d:c.instructions+=1;goto B765f7d;
case 0x765f82:goto L765f82;
case 0x765f84:c.instructions+=2;goto B765f84;
case 0x765f85:c.instructions+=1;goto B765f85;
case 0x765f87:goto L765f87;
case 0x765f8d:c.instructions+=1;goto B765f8d;
case 0x765f8f:goto L765f8f;
case 0x765f91:c.instructions+=1;goto B765f91;
case 0x765f93:goto L765f93;
case 0x765f99:c.instructions+=1;goto B765f99;
case 0x765f9b:goto L765f9b;
case 0x765f9d:c.instructions+=1;goto B765f9d;
case 0x765f9e:goto L765f9e;
case 0x765fa4:c.instructions+=2;goto B765fa4;
case 0x765faa:c.instructions+=1;goto B765faa;
case 0x765fac:goto L765fac;
case 0x765fad:c.instructions+=5;goto B765fad;
case 0x765fae:c.instructions+=4;goto B765fae;
case 0x765fb5:c.instructions+=3;goto B765fb5;
case 0x765fb8:c.instructions+=2;goto B765fb8;
case 0x765fbd:c.instructions+=1;goto B765fbd;
case 0x765fbf:goto L765fbf;
case 0x765fc0:c.instructions+=1;goto B765fc0;
case 0x765fc5:goto L765fc5;
case 0x765fc7:c.instructions+=3;goto B765fc7;
case 0x765fc8:c.instructions+=2;goto B765fc8;
case 0x765fca:c.instructions+=1;goto B765fca;
case 0x765fcc:goto L765fcc;
case 0x765fcf:c.instructions+=7;goto B765fcf;
case 0x765fd1:c.instructions+=6;goto B765fd1;
case 0x765fd4:c.instructions+=5;goto B765fd4;
case 0x765fd6:c.instructions+=4;goto B765fd6;
case 0x765fd7:c.instructions+=3;goto B765fd7;
case 0x765fda:c.instructions+=2;goto B765fda;
case 0x765fdd:c.instructions+=1;goto B765fdd;
case 0x765fdf:goto L765fdf;
case 0x765fe1:c.instructions+=4;goto B765fe1;
case 0x765fe4:c.instructions+=3;goto B765fe4;
case 0x765fe6:c.instructions+=2;goto B765fe6;
case 0x765fe9:c.instructions+=1;goto B765fe9;
case 0x765fec:goto L765fec;
case 0x765ff2:c.instructions+=6;goto B765ff2;
case 0x765ff3:c.instructions+=5;goto B765ff3;
case 0x765ff5:c.instructions+=4;goto B765ff5;
case 0x765ff6:c.instructions+=3;goto B765ff6;
case 0x765ff7:c.instructions+=2;goto B765ff7;
case 0x765ff8:c.instructions+=1;goto B765ff8;
case 0x765ff9:goto L765ff9;
case 0x765ffb:c.instructions+=2;goto B765ffb;
case 0x765ffc:c.instructions+=1;goto B765ffc;
case 0x765ffd:goto L765ffd;
default:missing_instruction(c.pc);}
B765000:L765000:{c.instructions+=67;NFSU2_TR(0x765000);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B765002:{NFSU2_TR(0x765002);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B765004:{NFSU2_TR(0x765004);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B765006:{NFSU2_TR(0x765006);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B765008:{NFSU2_TR(0x765008);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7d7390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),8);
__builtin_memmove((R+4808),(U+28),8);
}
B765010:{NFSU2_TR(0x765010);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7bd0),16);
__builtin_memmove((R+4992),(U+0),8);
__builtin_memmove((R+5000),(U+8),8);
}
B765018:{NFSU2_TR(0x765018);
w8(R+4672,b64(f64(r8(R+4672))*f64(r8(R+5056))));
w8(R+4680,b64(f64(r8(R+4680))*f64(r8(R+5064))));
}
B76501c:{NFSU2_TR(0x76501c);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4672))));
w8(R+4744,b64(f64(r8(R+4744))+f64(r8(R+4680))));
}
B765020:{NFSU2_TR(0x765020);
u8 U[60];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B765025:{NFSU2_TR(0x765025);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(R+5056))));
}
B765029:{NFSU2_TR(0x765029);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4672))));
}
B76502d:{NFSU2_TR(0x76502d);
w8(R+4736,b64(f64(r8(R+4736))+f64(r8(R+4864))));
}
B765031:{NFSU2_TR(0x765031);
__builtin_memmove((R+4864),gp(0x7d7bf0),8);
}
B765039:{NFSU2_TR(0x765039);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,4>(rv<4>((R+8))));
}
B76503d:{NFSU2_TR(0x76503d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ff80ull))));
}
B765043:{NFSU2_TR(0x765043);
w4(R+8,u32(0-u32(r4(R+8))));
}
B765045:{NFSU2_TR(0x765045);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B765048:{NFSU2_TR(0x765048);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B76504b:{NFSU2_TR(0x76504b);
__builtin_memmove((R+0),(R+8),4);
}
B76504d:{NFSU2_TR(0x76504d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x20ull))));
}
B765050:{NFSU2_TR(0x765050);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B765052:{NFSU2_TR(0x765052);
w8(R+5056,u64(u64(r8(R+5056))^u64(r8(R+5056))));
w8(R+5064,u64(u64(r8(R+5064))^u64(r8(R+5064))));
}
B765056:{NFSU2_TR(0x765056);
w4(R+0,u32(0x3f80ull));
}
B76505b:{NFSU2_TR(0x76505b);
u8 U[119];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+36,u64(r2(R+0)));
w8(U+44,shl<u64>(r8(U+36),u64(r1(U+34))));
w8(U+52,shl<u64>(u64(0xffffull),u64(r1(U+34))));
w8(U+60,u64(~u64(r8(U+52))));
w8(U+68,u64(u64(r8(R+5056))&u64(r8(U+60))));
w8(U+44,u64(u64(r8(U+68))|u64(r8(U+44))));
w8(U+76,u64(r2(R+0)));
w1(U+84,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+85,shl<u64>(r8(U+76),u64(r1(U+84))));
w1(U+93,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+94,shl<u64>(u64(0xffffull),u64(r1(U+93))));
w8(U+102,u64(~u64(r8(U+94))));
w8(U+110,u64(u64(r8(R+5064))&u64(r8(U+102))));
w8(U+85,u64(u64(r8(U+110))|u64(r8(U+85))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+5056))));
w8(R+5056,u64(u64(r8(U+8))|u64(r8(U+25))));
w1(U+118,u8(!(r1(U+35))));
w8(U+0,u64(r1(U+118)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+85))));
w1(U+16,u8(!(r1(U+118))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+5064))));
w8(R+5064,u64(u64(r8(U+8))|u64(r8(U+25))));
}
B765060:{NFSU2_TR(0x765060);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
w8(R+4736,b64(f64(r8(R+4736))*f64(r8(U+4))));
}
B765066:{NFSU2_TR(0x765066);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+5056))));
}
B76506a:{NFSU2_TR(0x76506a);
w8(R+4672,shl<u64>(r8(R+4672),u64(u32(0x2dull))));
w8(R+4680,shl<u64>(r8(R+4680),u64(u32(0x2dull))));
}
B76506f:{NFSU2_TR(0x76506f);
u8 U[60];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B765074:{NFSU2_TR(0x765074);
u8 U[16];
__builtin_memmove((U+0),gp(0x7d7be0),16);
__builtin_memmove((R+5056),(U+0),8);
__builtin_memmove((R+5064),(U+8),8);
}
B76507c:{NFSU2_TR(0x76507c);
w8(R+4928,b64(f64(r8(R+4928))+f64(r8(R+4736))));
}
B765080:{NFSU2_TR(0x765080);
w8(R+4800,b64(f64(r8(R+4800))*f64(r8(R+4672))));
w8(R+4808,b64(f64(r8(R+4808))*f64(r8(R+4680))));
}
B765084:{NFSU2_TR(0x765084);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4928))));
}
B765088:{NFSU2_TR(0x765088);
__builtin_memmove((R+4616),(R+4608),8);
}
B76508c:{NFSU2_TR(0x76508c);
w8(R+4992,b64(f64(r8(R+4992))*f64(r8(R+4608))));
w8(R+5000,b64(f64(r8(R+5000))*f64(r8(R+4616))));
}
B765090:{NFSU2_TR(0x765090);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4608))));
}
B765094:{NFSU2_TR(0x765094);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4608))));
w8(R+4616,b64(f64(r8(R+4616))*f64(r8(R+4616))));
}
B765098:{NFSU2_TR(0x765098);
w8(R+5056,b64(f64(r8(R+5056))+f64(r8(R+4992))));
w8(R+5064,b64(f64(r8(R+5064))+f64(r8(R+5000))));
}
B76509c:{NFSU2_TR(0x76509c);
w8(R+5056,b64(f64(r8(R+5056))*f64(r8(R+4608))));
w8(R+5064,b64(f64(r8(R+5064))*f64(r8(R+4616))));
}
B7650a0:{NFSU2_TR(0x7650a0);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4800))));
}
B7650a4:{NFSU2_TR(0x7650a4);
u8 U[60];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B7650a9:{NFSU2_TR(0x7650a9);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+5056))));
}
B7650ad:{NFSU2_TR(0x7650ad);
u8 U[60];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B7650b2:{NFSU2_TR(0x7650b2);
w8(R+4992,b64(f64(r8(R+4992))*f64(r8(R+4800))));
}
B7650b6:{NFSU2_TR(0x7650b6);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4800))));
}
B7650ba:{NFSU2_TR(0x7650ba);
wv<16>((R+5056),eval<Op::INT_ZEXT,16,4>(rv<4>((R+4))));
}
B7650be:{NFSU2_TR(0x7650be);
w8(R+5056,shl<u64>(r8(R+5056),u64(u32(0x2dull))));
w8(R+5064,shl<u64>(r8(R+5064),u64(u32(0x2dull))));
}
B7650c3:{NFSU2_TR(0x7650c3);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,4>(rv<4>((R+8))));
}
B7650c7:{NFSU2_TR(0x7650c7);
u8 U[20];
w1(U+0,u8((r4(R+4672))==(r4(R+4672))));
w4(U+1,u32(r1(U+0)));
w4(R+4672,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4676))==(r4(R+4676))));
w4(U+6,u32(r1(U+5)));
w4(R+4676,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4680))==(r4(R+4680))));
w4(U+11,u32(r1(U+10)));
w4(R+4680,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4684))==(r4(R+4684))));
w4(U+16,u32(r1(U+15)));
w4(R+4684,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B7650cb:{NFSU2_TR(0x7650cb);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
w8(R+4672,shl<u64>(r8(R+4672),u64(r8(U+0))));
w8(R+4680,shl<u64>(r8(R+4680),u64(r8(U+0))));
}
B7650cf:{NFSU2_TR(0x7650cf);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4928))));
}
B7650d3:{NFSU2_TR(0x7650d3);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4992))));
}
B7650d7:{NFSU2_TR(0x7650d7);
w8(R+4672,u64(u64(r8(R+4672))&u64(r8(R+4800))));
w8(R+4680,u64(u64(r8(R+4680))&u64(r8(R+4808))));
}
B7650db:{NFSU2_TR(0x7650db);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4864))));
}
B7650df:{NFSU2_TR(0x7650df);
w8(R+4992,u64(u64(r8(R+4992))^u64(r8(R+4992))));
w8(R+5000,u64(u64(r8(R+5000))^u64(r8(R+5000))));
}
B7650e3:{NFSU2_TR(0x7650e3);
u8 U[20];
w1(U+0,u8((r4(R+4864))==(r4(R+4864))));
w4(U+1,u32(r1(U+0)));
w4(R+4864,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4868))==(r4(R+4868))));
w4(U+6,u32(r1(U+5)));
w4(R+4868,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
w1(U+10,u8((r4(R+4872))==(r4(R+4872))));
w4(U+11,u32(r1(U+10)));
w4(R+4872,u32(u32(r4(U+11))*u32(u32(0xffffffffull))));
w1(U+15,u8((r4(R+4876))==(r4(R+4876))));
w4(U+16,u32(r1(U+15)));
w4(R+4876,u32(u32(r4(U+16))*u32(u32(0xffffffffull))));
}
B7650e7:{NFSU2_TR(0x7650e7);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
w8(R+4864,shl<u64>(r8(R+4864),u64(r8(U+0))));
w8(R+4872,shl<u64>(r8(R+4872),u64(r8(U+0))));
}
B7650eb:{NFSU2_TR(0x7650eb);
w8(R+4800,b64(f64(r8(R+4800))-f64(r8(R+4672))));
}
B7650ef:{NFSU2_TR(0x7650ef);
__builtin_memmove((R+4736),(R+4672),8);
}
B7650f3:{NFSU2_TR(0x7650f3);
w8(R+4672,b64(f64(r8(R+4672))+f64(r8(R+4608))));
}
B7650f7:{NFSU2_TR(0x7650f7);
w8(R+4672,u64(u64(r8(R+4672))&u64(r8(R+4864))));
w8(R+4680,u64(u64(r8(R+4680))&u64(r8(R+4872))));
}
B7650fb:{NFSU2_TR(0x7650fb);
u8 U[119];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+36,u64(r2(R+28)));
w8(U+44,shl<u64>(r8(U+36),u64(r1(U+34))));
w8(U+52,shl<u64>(u64(0xffffull),u64(r1(U+34))));
w8(U+60,u64(~u64(r8(U+52))));
w8(U+68,u64(u64(r8(R+4992))&u64(r8(U+60))));
w8(U+44,u64(u64(r8(U+68))|u64(r8(U+44))));
w8(U+76,u64(r2(R+28)));
w1(U+84,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+85,shl<u64>(r8(U+76),u64(r1(U+84))));
w1(U+93,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+94,shl<u64>(u64(0xffffull),u64(r1(U+93))));
w8(U+102,u64(~u64(r8(U+94))));
w8(U+110,u64(u64(r8(R+5000))&u64(r8(U+102))));
w8(U+85,u64(u64(r8(U+110))|u64(r8(U+85))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+4992))));
w8(R+4992,u64(u64(r8(U+8))|u64(r8(U+25))));
w1(U+118,u8(!(r1(U+35))));
w8(U+0,u64(r1(U+118)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+85))));
w1(U+16,u8(!(r1(U+118))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(R+5000))));
w8(R+5000,u64(u64(r8(U+8))|u64(r8(U+25))));
}
B765100:{NFSU2_TR(0x765100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B765101:{NFSU2_TR(0x765101);
w8(R+4736,b64(f64(r8(R+4736))-f64(r8(R+4672))));
}
B765105:{NFSU2_TR(0x765105);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4736))));
}
B765109:{NFSU2_TR(0x765109);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4800))));
}
B76510d:{NFSU2_TR(0x76510d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765110:{NFSU2_TR(0x765110);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L765160;}}
}
B765112:L765112:{c.instructions+=11;NFSU2_TR(0x765112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B765113:{NFSU2_TR(0x765113);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+5056))));
}
B765117:{NFSU2_TR(0x765117);
w8(R+4672,b64(f64(r8(R+4672))*f64(r8(R+5056))));
}
B76511b:{NFSU2_TR(0x76511b);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4672))));
}
B76511f:{NFSU2_TR(0x76511f);
w8(R+4992,b64(f64(r8(R+4992))*f64(r8(R+4608))));
}
B765123:{NFSU2_TR(0x765123);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4992))));
}
B765127:{NFSU2_TR(0x765127);
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
B76512c:{NFSU2_TR(0x76512c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff0ull))));
}
B765131:{NFSU2_TR(0x765131);
w4(R+8,u32(0x18ull));
}
B765136:{NFSU2_TR(0x765136);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ff0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B76513b:{NFSU2_TR(0x76513b);
if(r1(R+518)){TAIL_STATIC(0x764f51u,764);}
}
B765141:L765141:{c.instructions+=3;NFSU2_TR(0x765141);
w4(R+8,u32(0x19ull));
}
B765146:{NFSU2_TR(0x765146);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765149:{NFSU2_TR(0x765149);
if(r1(R+518)){TAIL_STATIC(0x764f51u,764);}
}
B76514f:L76514f:{c.instructions+=5;NFSU2_TR(0x76514f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B765152:{NFSU2_TR(0x765152);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B765158:{NFSU2_TR(0x765158);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76515c:{NFSU2_TR(0x76515c);
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
B76515f:{NFSU2_TR(0x76515f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765160:L765160:{c.instructions+=10;NFSU2_TR(0x765160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B765161:{NFSU2_TR(0x765161);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4672))));
}
B765165:{NFSU2_TR(0x765165);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+5056))));
}
B765169:{NFSU2_TR(0x765169);
w8(R+4992,b64(f64(r8(R+4992))*f64(r8(R+4608))));
}
B76516d:{NFSU2_TR(0x76516d);
w8(R+4608,b64(f64(r8(R+4608))+f64(r8(R+4992))));
}
B765171:{NFSU2_TR(0x765171);
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
B765176:{NFSU2_TR(0x765176);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff0ull))));
}
B76517b:{NFSU2_TR(0x76517b);
w4(R+8,u32(0x18ull));
}
B765180:{NFSU2_TR(0x765180);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ff0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B765185:{NFSU2_TR(0x765185);
if(r1(R+518)){TAIL_STATIC(0x764f51u,764);}
}
B76518b:L76518b:{c.instructions+=3;NFSU2_TR(0x76518b);
w4(R+8,u32(0x19ull));
}
B765190:{NFSU2_TR(0x765190);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765193:{NFSU2_TR(0x765193);
if(r1(R+518)){TAIL_STATIC(0x764f51u,764);}
}
B765199:L765199:{c.instructions+=5;NFSU2_TR(0x765199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B76519c:{NFSU2_TR(0x76519c);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7651a2:{NFSU2_TR(0x7651a2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7651a6:{NFSU2_TR(0x7651a6);
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
B7651a9:{NFSU2_TR(0x7651a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7651aa:L7651aa:{c.instructions+=7;NFSU2_TR(0x7651aa);
__builtin_memmove((R+4608),gp(0x7d7c28),8);
}
B7651b2:{NFSU2_TR(0x7651b2);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,4>(rv<4>((R+4))));
}
B7651b6:{NFSU2_TR(0x7651b6);
w8(R+4608,b64(f64(r8(R+4608))*f64(r8(R+4608))));
}
B7651ba:{NFSU2_TR(0x7651ba);
w8(R+4672,shl<u64>(r8(R+4672),u64(u32(0x2dull))));
w8(R+4680,shl<u64>(r8(R+4680),u64(u32(0x2dull))));
}
B7651bf:{NFSU2_TR(0x7651bf);
wv<16>((R+4608),eval<Op::INT_OR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4672))));
}
B7651c3:{NFSU2_TR(0x7651c3);
w4(R+8,u32(0x19ull));
}
B7651c8:{NFSU2_TR(0x7651c8);
TAIL_STATIC(0x764f51u,764);
}
B7651cd:L7651cd:{c.instructions+=3;NFSU2_TR(0x7651cd);
w4(R+8,u32(0x18ull));
}
B7651d2:{NFSU2_TR(0x7651d2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7651d5:{NFSU2_TR(0x7651d5);
if(r1(R+518)){{goto L7651e4;}}
}
B7651d7:L7651d7:{c.instructions+=2;NFSU2_TR(0x7651d7);
__builtin_memmove((R+4608),gp(0x7d7c18),8);
}
B7651df:{NFSU2_TR(0x7651df);
TAIL_STATIC(0x764f51u,764);
}
B7651e4:L7651e4:{c.instructions+=2;NFSU2_TR(0x7651e4);
__builtin_memmove((R+4608),gp(0x7d7c10),8);
}
B7651ec:{NFSU2_TR(0x7651ec);
TAIL_STATIC(0x764f51u,764);
}
B7651f1:L7651f1:{c.instructions+=10;NFSU2_TR(0x7651f1);
u8 U[60];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B7651f6:{NFSU2_TR(0x7651f6);
w8(R+4864,b64(f64(r8(R+4864))*f64(r8(R+4992))));
w8(R+4872,b64(f64(r8(R+4872))*f64(r8(R+5000))));
}
B7651fa:{NFSU2_TR(0x7651fa);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4864),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4872),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B7651ff:{NFSU2_TR(0x7651ff);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff0ull))));
}
B765204:{NFSU2_TR(0x765204);
w4(R+8,u32(0x40a0ull));
}
B765209:{NFSU2_TR(0x765209);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B76520b:{NFSU2_TR(0x76520b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3c70ull))));
}
B765210:{NFSU2_TR(0x765210);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B765212:{NFSU2_TR(0x765212);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x80000000ull))));
}
B765218:{NFSU2_TR(0x765218);
if(r1(R+512)){TAIL_STATIC(0x764918u,764);}
}
B76521e:L76521e:{c.instructions+=2;NFSU2_TR(0x76521e);
w1(R+512,u8((r4(R+0))<(u32(0x80000000ull))));
}
B765223:{NFSU2_TR(0x765223);
if(r1(R+512)){{goto L765245;}}
}
B765225:L765225:{c.instructions+=8;NFSU2_TR(0x765225);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1ff80ull))));
}
B76522b:{NFSU2_TR(0x76522b);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,4>(rv<4>((R+4))));
}
B76522f:{NFSU2_TR(0x76522f);
w8(R+4608,shl<u64>(r8(R+4608),u64(u32(0x2dull))));
w8(R+4616,shl<u64>(r8(R+4616),u64(u32(0x2dull))));
}
B765234:{NFSU2_TR(0x765234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B765237:{NFSU2_TR(0x765237);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4608),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B76523d:{NFSU2_TR(0x76523d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765241:{NFSU2_TR(0x765241);
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
B765244:{NFSU2_TR(0x765244);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765245:L765245:{c.instructions+=9;NFSU2_TR(0x765245);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4864),(U+4),8);
}
B76524b:{NFSU2_TR(0x76524b);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4864),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4872),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+8,u32(r2(U+36)));
}
B765250:{NFSU2_TR(0x765250);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ff0ull))));
}
B765256:{NFSU2_TR(0x765256);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x3ff0ull))));
}
B76525c:{NFSU2_TR(0x76525c);
u8 U[61];
w1(U+33,u8(u32(u8(0x3ull))&u32(u8(0x7ull))));
w1(U+34,u8(u32(r1(U+33))*u32(u8(0x10ull))));
w1(U+35,u8((r1(U+34))<(u8(0x40ull))));
w8(U+44,shr<u64>(r8(R+4672),u64(r1(U+34))));
w1(U+52,u8(u32(r1(U+34))-u32(u8(0x40ull))));
w8(U+53,shr<u64>(r8(R+4680),u64(r1(U+52))));
w8(U+0,u64(r1(U+35)));
w8(U+8,u64(u64(r8(U+0))*u64(r8(U+44))));
w1(U+16,u8(!(r1(U+35))));
w8(U+17,u64(r1(U+16)));
w8(U+25,u64(u64(r8(U+17))*u64(r8(U+53))));
w8(U+36,u64(u64(r8(U+8))|u64(r8(U+25))));
w4(R+0,u32(r2(U+36)));
}
B765261:{NFSU2_TR(0x765261);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B765263:{NFSU2_TR(0x765263);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ull))));
}
B765268:{NFSU2_TR(0x765268);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B76526b:{NFSU2_TR(0x76526b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7651aau);}goto L7651aa;}}
}
B765271:L765271:{c.instructions+=1;NFSU2_TR(0x765271);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7651cdu);}goto L7651cd;}
}
B765490:L765490:{c.instructions+=2;NFSU2_TR(0x765490);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B765494:{NFSU2_TR(0x765494);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7654a7;}}
}
B765496:L765496:{c.instructions+=5;NFSU2_TR(0x765496);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B76549d:{NFSU2_TR(0x76549d);
w1(R+13,u8(u32(r1(R+13))|u32(u8(0x2ull))));
}
B7654a0:{NFSU2_TR(0x7654a0);
w1(R+13,u8(u32(r1(R+13))&u32(u8(0xfeull))));
}
B7654a3:{NFSU2_TR(0x7654a3);
w1(R+12,u8(0x3full));
}
B7654a5:{NFSU2_TR(0x7654a5);
{goto L7654ab;}
}
B7654a7:L7654a7:{c.instructions+=1;NFSU2_TR(0x7654a7);
w2(R+12,u16(0x133full));
}
B7654ab:L7654ab:{c.instructions+=21;NFSU2_TR(0x7654ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7654b2:{NFSU2_TR(0x7654b2);
{u32 ea_=u32(r4(R+20)+u32(4294967134u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B7654b8:{NFSU2_TR(0x7654b8);
w4(R+12,u32(0x81a4ecull));
}
B7654bd:{NFSU2_TR(0x7654bd);
__asm__ volatile(".byte 0xd9,0xe5":::"memory");
}
B7654bf:{NFSU2_TR(0x7654bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7654c5:{NFSU2_TR(0x7654c5);
{u32 ea_=u32(r4(R+20)+u32(4294967136u));__asm__ volatile(".byte 0x9b,0xdd,0x38"::"a"(ea_):"memory");}
}
B7654cc:{NFSU2_TR(0x7654cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7654d3:{NFSU2_TR(0x7654d3);
}
B7654d4:{NFSU2_TR(0x7654d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff61ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7654da:{NFSU2_TR(0x7654da);
w1(R+4,shl<u8>(r1(R+4),u64(u32(0x1ull))));
}
B7654dc:{NFSU2_TR(0x7654dc);
w1(R+4,sar<u8>(r1(R+4),u64(u32(0x1ull))));
}
B7654de:{NFSU2_TR(0x7654de);
u8 U[1];
w1(R+512,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(U+0,shl<u8>(r1(R+4),u64(u32(0x1ull))));
w1(R+4,u8(u32(r1(U+0))|u32(r1(R+512))));
}
B7654e0:{NFSU2_TR(0x7654e0);
__builtin_memmove((R+0),(R+4),1);
}
B7654e2:{NFSU2_TR(0x7654e2);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B7654e4:{NFSU2_TR(0x7654e4);
u8 U[8];
w4(U+4,u32(r1(R+0)));
w4(U+0,u32(u32(r4(R+12))+u32(r4(U+4))));
__builtin_memmove((R+0),gp(u32(r4(U+0))),1);
}
B7654e5:{NFSU2_TR(0x7654e5);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B7654e8:{NFSU2_TR(0x7654e8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x404ull))));
}
B7654ee:{NFSU2_TR(0x7654ee);
__builtin_memmove((R+12),(R+8),4);
}
B7654f0:{NFSU2_TR(0x7654f0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B7654f2:{NFSU2_TR(0x7654f2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x10ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7654f5:{NFSU2_TR(0x7654f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7654f7:L7654f7:{c.instructions+=2;NFSU2_TR(0x7654f7);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7654fb:{NFSU2_TR(0x7654fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76550e;}}
}
B7654fd:L7654fd:{c.instructions+=5;NFSU2_TR(0x7654fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B765504:{NFSU2_TR(0x765504);
w1(R+13,u8(u32(r1(R+13))|u32(u8(0x2ull))));
}
B765507:{NFSU2_TR(0x765507);
w1(R+13,u8(u32(r1(R+13))&u32(u8(0xfeull))));
}
B76550a:{NFSU2_TR(0x76550a);
w1(R+12,u8(0x3full));
}
B76550c:{NFSU2_TR(0x76550c);
{goto L765512;}
}
B76550e:L76550e:{c.instructions+=1;NFSU2_TR(0x76550e);
w2(R+12,u16(0x133full));
}
B765512:L765512:{c.instructions+=35;NFSU2_TR(0x765512);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B765519:{NFSU2_TR(0x765519);
{u32 ea_=u32(r4(R+20)+u32(4294967134u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B76551f:{NFSU2_TR(0x76551f);
w4(R+12,u32(0x81a4ecull));
}
B765524:{NFSU2_TR(0x765524);
__asm__ volatile(".byte 0xd9,0xe5":::"memory");
}
B765526:{NFSU2_TR(0x765526);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76552c:{NFSU2_TR(0x76552c);
{u32 ea_=u32(r4(R+20)+u32(4294967136u));__asm__ volatile(".byte 0x9b,0xdd,0x38"::"a"(ea_):"memory");}
}
B765533:{NFSU2_TR(0x765533);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76553a:{NFSU2_TR(0x76553a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76553c:{NFSU2_TR(0x76553c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff61ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B765542:{NFSU2_TR(0x765542);
__asm__ volatile(".byte 0xd9,0xe5":::"memory");
}
B765544:{NFSU2_TR(0x765544);
{u32 ea_=u32(r4(R+20)+u32(4294967136u));__asm__ volatile(".byte 0x9b,0xdd,0x38"::"a"(ea_):"memory");}
}
B76554b:{NFSU2_TR(0x76554b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76554d:{NFSU2_TR(0x76554d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff61ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B765553:{NFSU2_TR(0x765553);
w1(R+5,shl<u8>(r1(R+5),u64(u32(0x1ull))));
}
B765555:{NFSU2_TR(0x765555);
w1(R+5,sar<u8>(r1(R+5),u64(u32(0x1ull))));
}
B765557:{NFSU2_TR(0x765557);
u8 U[1];
w1(R+512,u8(s8(r1(R+5))<s8(u8(0x0ull))));
w1(U+0,shl<u8>(r1(R+5),u64(u32(0x1ull))));
w1(R+5,u8(u32(r1(U+0))|u32(r1(R+512))));
}
B765559:{NFSU2_TR(0x765559);
__builtin_memmove((R+0),(R+5),1);
}
B76555b:{NFSU2_TR(0x76555b);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B76555d:{NFSU2_TR(0x76555d);
u8 U[8];
w4(U+4,u32(r1(R+0)));
w4(U+0,u32(u32(r4(R+12))+u32(r4(U+4))));
__builtin_memmove((R+0),gp(u32(r4(U+0))),1);
}
B76555e:{NFSU2_TR(0x76555e);
__builtin_memmove((R+1),(R+0),1);
}
B765560:{NFSU2_TR(0x765560);
w1(R+4,shl<u8>(r1(R+4),u64(u32(0x1ull))));
}
B765562:{NFSU2_TR(0x765562);
w1(R+4,sar<u8>(r1(R+4),u64(u32(0x1ull))));
}
B765564:{NFSU2_TR(0x765564);
u8 U[1];
w1(R+512,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(U+0,shl<u8>(r1(R+4),u64(u32(0x1ull))));
w1(R+4,u8(u32(r1(U+0))|u32(r1(R+512))));
}
B765566:{NFSU2_TR(0x765566);
__builtin_memmove((R+0),(R+4),1);
}
B765568:{NFSU2_TR(0x765568);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B76556a:{NFSU2_TR(0x76556a);
u8 U[8];
w4(U+4,u32(r1(R+0)));
w4(U+0,u32(u32(r4(R+12))+u32(r4(U+4))));
__builtin_memmove((R+0),gp(u32(r4(U+0))),1);
}
B76556b:{NFSU2_TR(0x76556b);
w1(R+1,shl<u8>(r1(R+1),u64(u32(0x1ull))));
}
B76556d:{NFSU2_TR(0x76556d);
w1(R+1,shl<u8>(r1(R+1),u64(u32(0x1ull))));
}
B76556f:{NFSU2_TR(0x76556f);
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+1))));
}
B765571:{NFSU2_TR(0x765571);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B765574:{NFSU2_TR(0x765574);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x404ull))));
}
B76557a:{NFSU2_TR(0x76557a);
__builtin_memmove((R+12),(R+8),4);
}
B76557c:{NFSU2_TR(0x76557c);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B76557e:{NFSU2_TR(0x76557e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x10ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B765581:{NFSU2_TR(0x765581);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B765594:L765594:{c.instructions+=4;NFSU2_TR(0x765594);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B765596:{NFSU2_TR(0x765596);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B765598:{NFSU2_TR(0x765598);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B76559a:{NFSU2_TR(0x76559a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7655cd:L7655cd:{c.instructions+=5;NFSU2_TR(0x7655cd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B7655cf:{NFSU2_TR(0x7655cf);
{u32 ea_=u32(r4(R+20)+u32(4294967138u));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B7655d5:{NFSU2_TR(0x7655d5);
{u32 ea_=u32(r4(R+20)+u32(4294967138u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B7655db:{NFSU2_TR(0x7655db);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff69ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B7655e2:{NFSU2_TR(0x7655e2);
if(r1(R+518)){{goto L7655ed;}}
}
B7655e4:L7655e4:{c.instructions+=2;NFSU2_TR(0x7655e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7655eb:{NFSU2_TR(0x7655eb);
{goto L7655f4;}
}
B7655ed:L7655ed:{c.instructions+=1;NFSU2_TR(0x7655ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7655f4:L7655f4:{c.instructions+=2;NFSU2_TR(0x7655f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7655f6:{NFSU2_TR(0x7655f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7655f7:L7655f7:{c.instructions+=4;NFSU2_TR(0x7655f7);
{u32 ea_=u32(r4(R+20)+u32(4294967138u));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B7655fd:{NFSU2_TR(0x7655fd);
{u32 ea_=u32(r4(R+20)+u32(4294967138u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B765603:{NFSU2_TR(0x765603);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff69ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B76560a:{NFSU2_TR(0x76560a);
if(r1(R+518)){{goto L76562c;}}
}
B76560c:L76560c:{c.instructions+=5;NFSU2_TR(0x76560c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76560e:{NFSU2_TR(0x76560e);
{u32 ea_=u32(r4(R+20)+u32(4294967138u));__asm__ volatile(".byte 0xdb,0x38"::"a"(ea_):"memory");}
}
B765614:{NFSU2_TR(0x765614);
{u32 ea_=u32(r4(R+20)+u32(4294967138u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76561a:{NFSU2_TR(0x76561a);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff69ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B765621:{NFSU2_TR(0x765621);
if(r1(R+518)){{goto L76562c;}}
}
B765623:L765623:{c.instructions+=2;NFSU2_TR(0x765623);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B76562a:{NFSU2_TR(0x76562a);
{goto L765633;}
}
B76562c:L76562c:{c.instructions+=1;NFSU2_TR(0x76562c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B765633:L765633:{c.instructions+=2;NFSU2_TR(0x765633);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B765635:{NFSU2_TR(0x765635);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765636:L765636:{c.instructions+=5;NFSU2_TR(0x765636);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B765638:{NFSU2_TR(0x765638);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B76563a:{NFSU2_TR(0x76563a);
{u32 ea_=u32(u32(8496336u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B765640:{NFSU2_TR(0x765640);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(U+5),u8(0x0ull)));
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B765647:{NFSU2_TR(0x765647);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L765650;}}
}
B765649:L765649:{c.instructions+=1;NFSU2_TR(0x765649);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B765650:L765650:{c.instructions+=2;NFSU2_TR(0x765650);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+4))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B765652:{NFSU2_TR(0x765652);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765660:L765660:{c.instructions+=9;NFSU2_TR(0x765660);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765661:{NFSU2_TR(0x765661);
__builtin_memmove((R+20),(R+16),4);
}
B765663:{NFSU2_TR(0x765663);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xffffffe0ull))));
}
B765666:{NFSU2_TR(0x765666);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765669:{NFSU2_TR(0x765669);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76566c:{NFSU2_TR(0x76566c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76566f:{NFSU2_TR(0x76566f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B765672:{NFSU2_TR(0x765672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765675:{NFSU2_TR(0x765675);
{goto L765680;}
}
B765677:L765677:{c.instructions+=4;NFSU2_TR(0x765677);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765678:{NFSU2_TR(0x765678);
__builtin_memmove((R+20),(R+16),4);
}
B76567a:{NFSU2_TR(0x76567a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xffffffe0ull))));
}
B76567d:{NFSU2_TR(0x76567d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765680:L765680:{c.instructions+=12;NFSU2_TR(0x765680);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B765683:{NFSU2_TR(0x765683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765686:{NFSU2_TR(0x765686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B765689:{NFSU2_TR(0x765689);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B76568c:{NFSU2_TR(0x76568c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B76568f:{NFSU2_TR(0x76568f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765692:{NFSU2_TR(0x765692);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765695:{NFSU2_TR(0x765695);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765698:{NFSU2_TR(0x765698);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765699:{NFSU2_TR(0x765699);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76569a:{NFSU2_TR(0x76569a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76569b:{NFSU2_TR(0x76569b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7656a0ull));
TAIL_STATIC(0x76cb75u,76c);
}
B7656a0:L7656a0:{c.instructions+=4;NFSU2_TR(0x7656a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7656a3:{NFSU2_TR(0x7656a3);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7656a6:{NFSU2_TR(0x7656a6);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x27full))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x27full)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x27full))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B7656ac:{NFSU2_TR(0x7656ac);
if(r1(R+518)){{goto L7656b1;}}
}
B7656ae:L7656ae:{c.instructions+=1;NFSU2_TR(0x7656ae);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B7656b1:L7656b1:{c.instructions+=2;NFSU2_TR(0x7656b1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7656b2:{NFSU2_TR(0x7656b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7656c0:L7656c0:{c.instructions+=11;NFSU2_TR(0x7656c0);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B7656c2:{NFSU2_TR(0x7656c2);
__asm__ volatile(".byte 0xd9,0xfc":::"memory");
}
B7656c4:{NFSU2_TR(0x7656c4);
__asm__ volatile(".byte 0xdc,0xe1":::"memory");
}
B7656c6:{NFSU2_TR(0x7656c6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B7656c8:{NFSU2_TR(0x7656c8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B7656ca:{NFSU2_TR(0x7656ca);
__asm__ volatile(".byte 0xd9,0xf0":::"memory");
}
B7656cc:{NFSU2_TR(0x7656cc);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B7656ce:{NFSU2_TR(0x7656ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B7656d0:{NFSU2_TR(0x7656d0);
__asm__ volatile(".byte 0xd9,0xfd":::"memory");
}
B7656d2:{NFSU2_TR(0x7656d2);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B7656d4:{NFSU2_TR(0x7656d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7656d5:L7656d5:{c.instructions+=6;NFSU2_TR(0x7656d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7656d9:{NFSU2_TR(0x7656d9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x300ull))));
}
B7656df:{NFSU2_TR(0x7656df);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x7full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7656e2:{NFSU2_TR(0x7656e2);
u8 U[6];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7656e7:{NFSU2_TR(0x7656e7);
{u32 ea_=u32(r4(R+16)+u32(6u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B7656eb:{NFSU2_TR(0x7656eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7656ec:L7656ec:{c.instructions+=2;NFSU2_TR(0x7656ec);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x80000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7656f1:{NFSU2_TR(0x7656f1);
if(r1(R+518)){{goto L7656f9;}}
}
B7656f3:L7656f3:{c.instructions+=2;NFSU2_TR(0x7656f3);
w4(R+0,u32(0x7ull));
}
B7656f8:{NFSU2_TR(0x7656f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7656f9:L7656f9:{c.instructions+=3;NFSU2_TR(0x7656f9);
{u32 ea_=u32(u32(8223808u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B7656ff:{NFSU2_TR(0x7656ff);
w4(R+0,u32(0x1ull));
}
B765704:{NFSU2_TR(0x765704);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765705:L765705:{c.instructions+=4;NFSU2_TR(0x765705);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B765708:{NFSU2_TR(0x765708);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff00000ull))));
}
B76570d:{NFSU2_TR(0x76570d);
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
B765712:{NFSU2_TR(0x765712);
if(r1(R+518)){{goto L765717;}}
}
B765714:L765714:{c.instructions+=2;NFSU2_TR(0x765714);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765716:{NFSU2_TR(0x765716);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765717:L765717:{c.instructions+=15;NFSU2_TR(0x765717);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76571a:{NFSU2_TR(0x76571a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xaull))));
}
B76571d:{NFSU2_TR(0x76571d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x7fff0000ull))));
}
B765722:{NFSU2_TR(0x765722);
u8 U[8];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765726:{NFSU2_TR(0x765726);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B765729:{NFSU2_TR(0x765729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B76572b:{NFSU2_TR(0x76572b);
u8 U[16];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(U+4,shl<u32>(r4(R+0),u64(r4(U+0))));
w4(U+8,u32(u32(u32(0x20ull))-u32(r4(U+0))));
w4(U+12,shr<u32>(r4(R+4),u64(r4(U+8))));
w4(R+0,u32(u32(r4(U+4))|u32(r4(U+12))));
}
B76572f:{NFSU2_TR(0x76572f);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B765732:{NFSU2_TR(0x765732);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765736:{NFSU2_TR(0x765736);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B765739:{NFSU2_TR(0x765739);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B76573c:{NFSU2_TR(0x76573c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xaull))));
}
B76573f:{NFSU2_TR(0x76573f);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B765744:{NFSU2_TR(0x765744);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B765747:{NFSU2_TR(0x765747);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765748:L765748:{c.instructions+=4;NFSU2_TR(0x765748);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76574c:{NFSU2_TR(0x76574c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff00000ull))));
}
B765751:{NFSU2_TR(0x765751);
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
B765756:{NFSU2_TR(0x765756);
if(r1(R+518)){{goto L765759;}}
}
B765758:L765758:{c.instructions+=1;NFSU2_TR(0x765758);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765759:L765759:{c.instructions+=2;NFSU2_TR(0x765759);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76575d:{NFSU2_TR(0x76575d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76575e:L76575e:{c.instructions+=2;NFSU2_TR(0x76575e);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(u16(0x27full))));
w1(R+523,sborrow<u16>(r2(U+6),u16(0x27full)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x27full))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B765764:{NFSU2_TR(0x765764);
if(r1(R+518)){{goto L765769;}}
}
B765766:L765766:{c.instructions+=1;NFSU2_TR(0x765766);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B765769:L765769:{c.instructions+=2;NFSU2_TR(0x765769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76576a:{NFSU2_TR(0x76576a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B76576b:L76576b:{c.instructions+=3;NFSU2_TR(0x76576b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
__builtin_memmove((R+0),(U+0),2);
}
B76576f:{NFSU2_TR(0x76576f);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x27full))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x27full)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x27full))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B765773:{NFSU2_TR(0x765773);
if(r1(R+518)){{goto L765793;}}
}
B765775:L765775:{c.instructions+=2;NFSU2_TR(0x765775);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x20ull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B765779:{NFSU2_TR(0x765779);
if(r1(R+518)){{goto L765790;}}
}
B76577b:L76577b:{c.instructions+=3;NFSU2_TR(0x76577b);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B76577e:{NFSU2_TR(0x76577e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x20ull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B765782:{NFSU2_TR(0x765782);
if(r1(R+518)){{goto L765790;}}
}
B765784:L765784:{c.instructions+=2;NFSU2_TR(0x765784);
w4(R+0,u32(0x8ull));
}
B765789:{NFSU2_TR(0x765789);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76578eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765677u);}goto L765677;}
}
B76578e:L76578e:{c.instructions+=2;NFSU2_TR(0x76578e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B76578f:{NFSU2_TR(0x76578f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765790:L765790:{c.instructions+=1;NFSU2_TR(0x765790);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B765793:L765793:{c.instructions+=2;NFSU2_TR(0x765793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B765794:{NFSU2_TR(0x765794);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7657a9:L7657a9:{c.instructions+=6;NFSU2_TR(0x7657a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B7657ac:{NFSU2_TR(0x7657ac);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B7657af:{NFSU2_TR(0x7657af);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7657b3:{NFSU2_TR(0x7657b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B7657b6:{NFSU2_TR(0x7657b6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7657bb:{NFSU2_TR(0x7657bb);
if(r1(R+518)){{goto L7657fa;}}
}
B7657bd:L7657bd:{c.instructions+=2;NFSU2_TR(0x7657bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7657c2:{NFSU2_TR(0x7657c2);
if(r1(R+518)){{goto L765823;}}
}
B7657c4:L7657c4:{c.instructions+=3;NFSU2_TR(0x7657c4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
__builtin_memmove((R+0),(U+0),2);
}
B7657c8:{NFSU2_TR(0x7657c8);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x27full))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x27full)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x27full))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B7657cc:{NFSU2_TR(0x7657cc);
if(r1(R+518)){{goto L7657f8;}}
}
B7657ce:L7657ce:{c.instructions+=2;NFSU2_TR(0x7657ce);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x20ull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B7657d2:{NFSU2_TR(0x7657d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7657f5;}}
}
B7657d4:L7657d4:{c.instructions+=3;NFSU2_TR(0x7657d4);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7657d7:{NFSU2_TR(0x7657d7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x20ull))));
w1(R+519,u8(s16(r2(R+0))<s16(u16(0x0ull))));
w1(R+518,u8((r2(R+0))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B7657db:{NFSU2_TR(0x7657db);
if(r1(R+518)){{goto L7657f5;}}
}
B7657dd:L7657dd:{c.instructions+=1;NFSU2_TR(0x7657dd);
w4(R+0,u32(0x8ull));
}
B7657e2:L7657e2:{c.instructions+=2;NFSU2_TR(0x7657e2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7657e5:{NFSU2_TR(0x7657e5);
if(r1(R+518)){{goto L7657ee;}}
}
B7657e7:L7657e7:{c.instructions+=1;NFSU2_TR(0x7657e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7657ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765677u);}goto L765677;}
}
B7657ec:L7657ec:{c.instructions+=2;NFSU2_TR(0x7657ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7657ed:{NFSU2_TR(0x7657ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7657ee:L7657ee:{c.instructions+=1;NFSU2_TR(0x7657ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7657f3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765660u);}goto L765660;}
}
B7657f3:L7657f3:{c.instructions+=2;NFSU2_TR(0x7657f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7657f4:{NFSU2_TR(0x7657f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7657f5:L7657f5:{c.instructions+=1;NFSU2_TR(0x7657f5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B7657f8:L7657f8:{c.instructions+=2;NFSU2_TR(0x7657f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7657f9:{NFSU2_TR(0x7657f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7657fa:L7657fa:{c.instructions+=11;NFSU2_TR(0x7657fa);
{u32 ea_=u32(u32(8223852u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765800:{NFSU2_TR(0x765800);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B765802:{NFSU2_TR(0x765802);
__asm__ volatile(".byte 0xd9,0xfd":::"memory");
}
B765804:{NFSU2_TR(0x765804);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B765806:{NFSU2_TR(0x765806);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B765808:{NFSU2_TR(0x765808);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B76580a:{NFSU2_TR(0x76580a);
{u32 ea_=u32(u32(8223836u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B765810:{NFSU2_TR(0x765810);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B765813:{NFSU2_TR(0x765813);
u8 U[2];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+516,u8((r1(U+0))!=(u8(0x0ull))));
w1(U+1,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+512,u8((r1(U+1))!=(u8(0x0ull))));
}
B765814:{NFSU2_TR(0x765814);
w4(R+0,u32(0x4ull));
}
B765819:{NFSU2_TR(0x765819);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7657e2u);}goto L7657e2;}}
}
B76581b:L76581b:{c.instructions+=2;NFSU2_TR(0x76581b);
{u32 ea_=u32(u32(8223868u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B765821:{NFSU2_TR(0x765821);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7657e2u);}goto L7657e2;}
}
B765823:L765823:{c.instructions+=11;NFSU2_TR(0x765823);
{u32 ea_=u32(u32(8223844u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765829:{NFSU2_TR(0x765829);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B76582b:{NFSU2_TR(0x76582b);
__asm__ volatile(".byte 0xd9,0xfd":::"memory");
}
B76582d:{NFSU2_TR(0x76582d);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B76582f:{NFSU2_TR(0x76582f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B765831:{NFSU2_TR(0x765831);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B765833:{NFSU2_TR(0x765833);
{u32 ea_=u32(u32(8223828u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B765839:{NFSU2_TR(0x765839);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B76583c:{NFSU2_TR(0x76583c);
u8 U[3];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))!=(u8(0x0ull))));
w1(U+1,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+516,u8((r1(U+1))!=(u8(0x0ull))));
w1(U+2,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+512,u8((r1(U+2))!=(u8(0x0ull))));
}
B76583d:{NFSU2_TR(0x76583d);
w4(R+0,u32(0x3ull));
}
B765842:{NFSU2_TR(0x765842);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7657e2u);}goto L7657e2;}}
}
B765844:L765844:{c.instructions+=2;NFSU2_TR(0x765844);
{u32 ea_=u32(u32(8223860u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B76584a:{NFSU2_TR(0x76584a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7657e2u);}goto L7657e2;}
}
B76584c:L76584c:{c.instructions+=9;NFSU2_TR(0x76584c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76584d:{NFSU2_TR(0x76584d);
__builtin_memmove((R+20),(R+16),4);
}
B76584f:{NFSU2_TR(0x76584f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765850:{NFSU2_TR(0x765850);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765851:{NFSU2_TR(0x765851);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765854:{NFSU2_TR(0x765854);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765855:{NFSU2_TR(0x765855);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765856:{NFSU2_TR(0x765856);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B765859:{NFSU2_TR(0x765859);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76585eull));
TAIL_STATIC(0x75dc8eu,75d);
}
B76585e:L76585e:{c.instructions+=4;NFSU2_TR(0x76585e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x90ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B765860:{NFSU2_TR(0x765860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765861:{NFSU2_TR(0x765861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765862:{NFSU2_TR(0x765862);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7658b2;}}
}
B765864:L765864:{c.instructions+=5;NFSU2_TR(0x765864);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765867:{NFSU2_TR(0x765867);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765868:{NFSU2_TR(0x765868);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765869:{NFSU2_TR(0x765869);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B76586c:{NFSU2_TR(0x76586c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765871ull));
TAIL_STATIC(0x76cc73u,76c);
}
B765871:L765871:{c.instructions+=8;NFSU2_TR(0x765871);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B765874:{NFSU2_TR(0x765874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765875:{NFSU2_TR(0x765875);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765878:{NFSU2_TR(0x765878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765879:{NFSU2_TR(0x765879);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B76587c:{NFSU2_TR(0x76587c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B76587e:{NFSU2_TR(0x76587e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B765881:{NFSU2_TR(0x765881);
if(r1(R+514)){{goto L7658b2;}}
}
B765883:L765883:{c.instructions+=8;NFSU2_TR(0x765883);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765886:{NFSU2_TR(0x765886);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765887:{NFSU2_TR(0x765887);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdc,0x30"::"a"(ea_):"memory");}
}
B76588d:{NFSU2_TR(0x76588d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B76588e:{NFSU2_TR(0x76588e);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B765891:{NFSU2_TR(0x765891);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765894:{NFSU2_TR(0x765894);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B765897:{NFSU2_TR(0x765897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x76589cull));
TAIL_STATIC(0x76cc73u,76c);
}
B76589c:L76589c:{c.instructions+=6;NFSU2_TR(0x76589c);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B76589f:{NFSU2_TR(0x76589f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7658a0:{NFSU2_TR(0x7658a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7658a1:{NFSU2_TR(0x7658a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7658a3:{NFSU2_TR(0x7658a3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7658a6:{NFSU2_TR(0x7658a6);
if(r1(R+514)){{goto L7658ad;}}
}
B7658a8:L7658a8:{c.instructions+=4;NFSU2_TR(0x7658a8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7658aa:{NFSU2_TR(0x7658aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7658ab:{NFSU2_TR(0x7658ab);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7658ac:{NFSU2_TR(0x7658ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7658ad:L7658ad:{c.instructions+=4;NFSU2_TR(0x7658ad);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7658af:{NFSU2_TR(0x7658af);
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
B7658b0:{NFSU2_TR(0x7658b0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7658b1:{NFSU2_TR(0x7658b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7658b2:L7658b2:{c.instructions+=3;NFSU2_TR(0x7658b2);
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
B7658b4:{NFSU2_TR(0x7658b4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7658b5:{NFSU2_TR(0x7658b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7658b6:L7658b6:{c.instructions+=12;NFSU2_TR(0x7658b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7658b7:{NFSU2_TR(0x7658b7);
__builtin_memmove((R+20),(R+16),4);
}
B7658b9:{NFSU2_TR(0x7658b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7658ba:{NFSU2_TR(0x7658ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7658bb:{NFSU2_TR(0x7658bb);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7658be:{NFSU2_TR(0x7658be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7658bf:{NFSU2_TR(0x7658bf);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B7658c5:{NFSU2_TR(0x7658c5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7658c7:{NFSU2_TR(0x7658c7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7658c9:{NFSU2_TR(0x7658c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7658cb:{NFSU2_TR(0x7658cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7658ce:{NFSU2_TR(0x7658ce);
if(r1(R+514)){{goto L7658d2;}}
}
B7658d0:L7658d0:{c.instructions+=1;NFSU2_TR(0x7658d0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B7658d2:L7658d2:{c.instructions+=5;NFSU2_TR(0x7658d2);
w4(R+0,u32(0x7ff00000ull));
}
B7658d7:{NFSU2_TR(0x7658d7);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7658da:{NFSU2_TR(0x7658da);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7658dd:{NFSU2_TR(0x7658dd);
w4(R+4,u32(0xfff00000ull));
}
B7658e2:{NFSU2_TR(0x7658e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765922;}}
}
B7658e4:L7658e4:{c.instructions+=2;NFSU2_TR(0x7658e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7658e7:{NFSU2_TR(0x7658e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765961;}}
}
B7658e9:L7658e9:{c.instructions+=5;NFSU2_TR(0x7658e9);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7658ec:{NFSU2_TR(0x7658ec);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7658f2:{NFSU2_TR(0x7658f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7658f4:{NFSU2_TR(0x7658f4);
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
B7658f7:{NFSU2_TR(0x7658f7);
if(r1(R+518)){{goto L76597f;}}
}
B7658fd:L7658fd:{c.instructions+=6;NFSU2_TR(0x7658fd);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765900:{NFSU2_TR(0x765900);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B765906:{NFSU2_TR(0x765906);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B765908:{NFSU2_TR(0x765908);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B76590b:{NFSU2_TR(0x76590b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76590e:{NFSU2_TR(0x76590e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L76599d;}}
}
B765914:L765914:{c.instructions+=4;NFSU2_TR(0x765914);
{u32 ea_=u32(u32(8497176u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76591a:{NFSU2_TR(0x76591a);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B76591c:{NFSU2_TR(0x76591c);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B76591d:{NFSU2_TR(0x76591d);
{goto L765a11;}
}
B765922:L765922:{c.instructions+=2;NFSU2_TR(0x765922);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B765925:{NFSU2_TR(0x765925);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765961;}}
}
B765927:L765927:{c.instructions+=2;NFSU2_TR(0x765927);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B76592a:{NFSU2_TR(0x76592a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765961;}}
}
B76592c:L76592c:{c.instructions+=5;NFSU2_TR(0x76592c);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76592f:{NFSU2_TR(0x76592f);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B765935:{NFSU2_TR(0x765935);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B765937:{NFSU2_TR(0x765937);
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
B76593a:{NFSU2_TR(0x76593a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765943;}}
}
B76593c:L76593c:{c.instructions+=2;NFSU2_TR(0x76593c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B76593e:{NFSU2_TR(0x76593e);
{goto L765a0e;}
}
B765943:L765943:{c.instructions+=6;NFSU2_TR(0x765943);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765946:{NFSU2_TR(0x765946);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B76594c:{NFSU2_TR(0x76594c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B76594e:{NFSU2_TR(0x76594e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B765951:{NFSU2_TR(0x765951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B765954:{NFSU2_TR(0x765954);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765914u);}goto L765914;}}
}
B765956:L765956:{c.instructions+=2;NFSU2_TR(0x765956);
{u32 ea_=u32(u32(8497168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76595c:{NFSU2_TR(0x76595c);
{goto L765a11;}
}
B765961:L765961:{c.instructions+=2;NFSU2_TR(0x765961);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B765964:{NFSU2_TR(0x765964);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7659a5;}}
}
B765966:L765966:{c.instructions+=2;NFSU2_TR(0x765966);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B765969:{NFSU2_TR(0x765969);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765a13;}}
}
B76596f:L76596f:{c.instructions+=5;NFSU2_TR(0x76596f);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765972:{NFSU2_TR(0x765972);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B765978:{NFSU2_TR(0x765978);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B76597a:{NFSU2_TR(0x76597a);
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
B76597d:{NFSU2_TR(0x76597d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L76598a;}}
}
B76597f:L76597f:{c.instructions+=2;NFSU2_TR(0x76597f);
{u32 ea_=u32(u32(8497168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765985:{NFSU2_TR(0x765985);
{goto L765a0e;}
}
B76598a:L76598a:{c.instructions+=6;NFSU2_TR(0x76598a);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B76598d:{NFSU2_TR(0x76598d);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B765993:{NFSU2_TR(0x765993);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B765995:{NFSU2_TR(0x765995);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B765998:{NFSU2_TR(0x765998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B76599b:{NFSU2_TR(0x76599b);
if(r1(R+514)){{goto L7659a1;}}
}
B76599d:L76599d:{c.instructions+=2;NFSU2_TR(0x76599d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B76599f:{NFSU2_TR(0x76599f);
{goto L765a11;}
}
B7659a1:L7659a1:{c.instructions+=2;NFSU2_TR(0x7659a1);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B7659a3:{NFSU2_TR(0x7659a3);
{goto L765a11;}
}
B7659a5:L7659a5:{c.instructions+=2;NFSU2_TR(0x7659a5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7659a8:{NFSU2_TR(0x7659a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765a13;}}
}
B7659aa:L7659aa:{c.instructions+=2;NFSU2_TR(0x7659aa);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B7659ad:{NFSU2_TR(0x7659ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765a13;}}
}
B7659af:L7659af:{c.instructions+=5;NFSU2_TR(0x7659af);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7659b2:{NFSU2_TR(0x7659b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7659b3:{NFSU2_TR(0x7659b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7659b4:{NFSU2_TR(0x7659b4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7659b7:{NFSU2_TR(0x7659b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7659bcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x76584cu);}goto L76584c;}
}
B7659bc:L7659bc:{c.instructions+=8;NFSU2_TR(0x7659bc);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7659bf:{NFSU2_TR(0x7659bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7659c0:{NFSU2_TR(0x7659c0);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7659c6:{NFSU2_TR(0x7659c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7659c7:{NFSU2_TR(0x7659c7);
__builtin_memmove((R+4),(R+0),4);
}
B7659c9:{NFSU2_TR(0x7659c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7659cb:{NFSU2_TR(0x7659cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7659ce:{NFSU2_TR(0x7659ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7659e5;}}
}
B7659d0:L7659d0:{c.instructions+=3;NFSU2_TR(0x7659d0);
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
B7659d3:{NFSU2_TR(0x7659d3);
{u32 ea_=u32(u32(8497168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7659d9:{NFSU2_TR(0x7659d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7659dd;}}
}
B7659db:L7659db:{c.instructions+=1;NFSU2_TR(0x7659db);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B7659dd:L7659dd:{c.instructions+=3;NFSU2_TR(0x7659dd);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7659e0:{NFSU2_TR(0x7659e0);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7659e3:{NFSU2_TR(0x7659e3);
{goto L765a0e;}
}
B7659e5:L7659e5:{c.instructions+=5;NFSU2_TR(0x7659e5);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7659e8:{NFSU2_TR(0x7659e8);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B7659ee:{NFSU2_TR(0x7659ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7659f0:{NFSU2_TR(0x7659f0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7659f3:{NFSU2_TR(0x7659f3);
if(r1(R+514)){{goto L765a0c;}}
}
B7659f5:L7659f5:{c.instructions+=2;NFSU2_TR(0x7659f5);
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
B7659f8:{NFSU2_TR(0x7659f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765a02;}}
}
B7659fa:L7659fa:{c.instructions+=2;NFSU2_TR(0x7659fa);
{u32 ea_=u32(u32(8497200u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765a00:{NFSU2_TR(0x765a00);
{goto L765a04;}
}
B765a02:L765a02:{c.instructions+=1;NFSU2_TR(0x765a02);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B765a04:L765a04:{c.instructions+=3;NFSU2_TR(0x765a04);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B765a07:{NFSU2_TR(0x765a07);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B765a0a:{NFSU2_TR(0x765a0a);
{goto L765a0e;}
}
B765a0c:L765a0c:{c.instructions+=1;NFSU2_TR(0x765a0c);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B765a0e:L765a0e:{c.instructions+=1;NFSU2_TR(0x765a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B765a11:L765a11:{c.instructions+=1;NFSU2_TR(0x765a11);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B765a13:L765a13:{c.instructions+=4;NFSU2_TR(0x765a13);
__builtin_memmove((R+0),(R+24),4);
}
B765a15:{NFSU2_TR(0x765a15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B765a16:{NFSU2_TR(0x765a16);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B765a17:{NFSU2_TR(0x765a17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765a18:L765a18:{c.instructions+=2;NFSU2_TR(0x765a18);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3a4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3a4ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3a4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B765a1d:{NFSU2_TR(0x765a1d);
if(r1(R+518)){{goto L765a41;}}
}
B765a1f:L765a1f:{c.instructions+=2;NFSU2_TR(0x765a1f);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B765a22:{NFSU2_TR(0x765a22);
if(r1(R+518)){{goto L765a3b;}}
}
B765a24:L765a24:{c.instructions+=2;NFSU2_TR(0x765a24);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xdull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B765a27:{NFSU2_TR(0x765a27);
if(r1(R+518)){{goto L765a35;}}
}
B765a29:L765a29:{c.instructions+=2;NFSU2_TR(0x765a29);
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
B765a2a:{NFSU2_TR(0x765a2a);
if(r1(R+518)){{goto L765a2f;}}
}
B765a2c:L765a2c:{c.instructions+=2;NFSU2_TR(0x765a2c);
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
B765a2e:{NFSU2_TR(0x765a2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765a2f:L765a2f:{c.instructions+=2;NFSU2_TR(0x765a2f);
w4(R+0,u32(0x404ull));
}
B765a34:{NFSU2_TR(0x765a34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765a35:L765a35:{c.instructions+=2;NFSU2_TR(0x765a35);
w4(R+0,u32(0x412ull));
}
B765a3a:{NFSU2_TR(0x765a3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765a3b:L765a3b:{c.instructions+=2;NFSU2_TR(0x765a3b);
w4(R+0,u32(0x804ull));
}
B765a40:{NFSU2_TR(0x765a40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765a41:L765a41:{c.instructions+=2;NFSU2_TR(0x765a41);
w4(R+0,u32(0x411ull));
}
B765a46:{NFSU2_TR(0x765a46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765a47:L765a47:{c.instructions+=5;NFSU2_TR(0x765a47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765a48:{NFSU2_TR(0x765a48);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765a4a:{NFSU2_TR(0x765a4a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765a4c:{NFSU2_TR(0x765a4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765a4d:{NFSU2_TR(0x765a4d);
w4(R+28,u32(0x8ba260ull));
}
B765a52:L765a52:{c.instructions+=1;NFSU2_TR(0x765a52);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L765a54;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765a52u);}goto L765a52;}
}
B765a54:L765a54:{c.instructions+=11;NFSU2_TR(0x765a54);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B765a55:{NFSU2_TR(0x765a55);
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
B765a57:{NFSU2_TR(0x765a57);
__builtin_memmove(gp(0x8ba364),(R+0),4);
}
B765a5c:{NFSU2_TR(0x765a5c);
__builtin_memmove(gp(0x8ba240),(R+0),4);
}
B765a61:{NFSU2_TR(0x765a61);
__builtin_memmove(gp(0x8ba238),(R+0),4);
}
B765a66:{NFSU2_TR(0x765a66);
w4(R+28,u32(0x8ba370ull));
}
B765a6b:{NFSU2_TR(0x765a6b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B765a6c:{NFSU2_TR(0x765a6c);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B765a6d:{NFSU2_TR(0x765a6d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B765a6e:{NFSU2_TR(0x765a6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B765a6f:{NFSU2_TR(0x765a6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765a70:L765a70:{c.instructions+=11;NFSU2_TR(0x765a70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765a71:{NFSU2_TR(0x765a71);
__builtin_memmove((R+20),(R+16),4);
}
B765a73:{NFSU2_TR(0x765a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x518ull))));
}
B765a79:{NFSU2_TR(0x765a79);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B765a7e:{NFSU2_TR(0x765a7e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B765a81:{NFSU2_TR(0x765a81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765a82:{NFSU2_TR(0x765a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765a85:{NFSU2_TR(0x765a85);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765a88:{NFSU2_TR(0x765a88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765a89:{NFSU2_TR(0x765a89);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba364),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765a8f:{NFSU2_TR(0x765a8f);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830c4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765a95ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B765a95:L765a95:{c.instructions+=3;NFSU2_TR(0x765a95);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765a98:{NFSU2_TR(0x765a98);
w4(R+24,u32(0x100ull));
}
B765a9d:{NFSU2_TR(0x765a9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765bb0;}}
}
B765aa3:L765aa3:{c.instructions+=1;NFSU2_TR(0x765aa3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765aa5:L765aa5:{c.instructions+=4;NFSU2_TR(0x765aa5);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffee8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B765aac:{NFSU2_TR(0x765aac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B765aad:{NFSU2_TR(0x765aad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B765aaf:{NFSU2_TR(0x765aaf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765aa5u);}goto L765aa5;}}
}
B765ab1:L765ab1:{c.instructions+=4;NFSU2_TR(0x765ab1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B765ab4:{NFSU2_TR(0x765ab4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B765ab6:{NFSU2_TR(0x765ab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
w1(U+4,u8(0x20ull));
s1(u32(r4(U+0)),r1(U+4));
}
B765abd:{NFSU2_TR(0x765abd);
if(r1(R+518)){{goto L765af5;}}
}
B765abf:L765abf:{c.instructions+=3;NFSU2_TR(0x765abf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765ac0:{NFSU2_TR(0x765ac0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffefull))));
__builtin_memmove((R+8),(U+0),4);
}
B765ac3:{NFSU2_TR(0x765ac3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765ac4:L765ac4:{c.instructions+=4;NFSU2_TR(0x765ac4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+4,u32(r1(U+0)));
}
B765ac7:{NFSU2_TR(0x765ac7);
w4(R+0,u32(r1(R+0)));
}
B765aca:{NFSU2_TR(0x765aca);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765acc:{NFSU2_TR(0x765acc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L765aeb;}}
}
B765ace:L765ace:{c.instructions+=6;NFSU2_TR(0x765ace);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B765ad0:{NFSU2_TR(0x765ad0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B765ad1:{NFSU2_TR(0x765ad1);
__builtin_memmove((R+12),(R+4),4);
}
B765ad3:{NFSU2_TR(0x765ad3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B765ad6:{NFSU2_TR(0x765ad6);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffee8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B765add:{NFSU2_TR(0x765add);
w4(R+0,u32(0x20202020ull));
}
B765ae2:L765ae2:{c.instructions+=1;NFSU2_TR(0x765ae2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L765ae4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765ae2u);}goto L765ae2;}
}
B765ae4:L765ae4:{c.instructions+=2;NFSU2_TR(0x765ae4);
__builtin_memmove((R+4),(R+12),4);
}
B765ae6:{NFSU2_TR(0x765ae6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B765ae9:L765ae9:{c.instructions+=1;NFSU2_TR(0x765ae9);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L765aeb;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765ae9u);}goto L765ae9;}
}
B765aeb:L765aeb:{c.instructions+=5;NFSU2_TR(0x765aeb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B765aec:{NFSU2_TR(0x765aec);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B765aee:{NFSU2_TR(0x765aee);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B765aef:{NFSU2_TR(0x765aef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B765af1:{NFSU2_TR(0x765af1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765ac4u);}goto L765ac4;}}
}
B765af3:L765af3:{c.instructions+=2;NFSU2_TR(0x765af3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B765af4:{NFSU2_TR(0x765af4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B765af5:L765af5:{c.instructions+=10;NFSU2_TR(0x765af5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765af7:{NFSU2_TR(0x765af7);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba238),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765afd:{NFSU2_TR(0x765afd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765b03:{NFSU2_TR(0x765b03);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba364),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b09:{NFSU2_TR(0x765b09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b0a:{NFSU2_TR(0x765b0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b0b:{NFSU2_TR(0x765b0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765b11:{NFSU2_TR(0x765b11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b12:{NFSU2_TR(0x765b12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b14:{NFSU2_TR(0x765b14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765b19ull));
TAIL_STATIC(0x7692c8u,769);
}
B765b19:L765b19:{c.instructions+=11;NFSU2_TR(0x765b19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b1b:{NFSU2_TR(0x765b1b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba364),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b21:{NFSU2_TR(0x765b21);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765b27:{NFSU2_TR(0x765b27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b28:{NFSU2_TR(0x765b28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b29:{NFSU2_TR(0x765b29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b2a:{NFSU2_TR(0x765b2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765b30:{NFSU2_TR(0x765b30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b31:{NFSU2_TR(0x765b31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b32:{NFSU2_TR(0x765b32);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba238),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b38:{NFSU2_TR(0x765b38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765b3dull));
TAIL_STATIC(0x767819u,767);
}
B765b3d:L765b3d:{c.instructions+=11;NFSU2_TR(0x765b3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b3f:{NFSU2_TR(0x765b3f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba364),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b45:{NFSU2_TR(0x765b45);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765b4b:{NFSU2_TR(0x765b4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b4c:{NFSU2_TR(0x765b4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b4d:{NFSU2_TR(0x765b4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b4e:{NFSU2_TR(0x765b4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765b54:{NFSU2_TR(0x765b54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b55:{NFSU2_TR(0x765b55);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b5a:{NFSU2_TR(0x765b5a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba238),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765b60:{NFSU2_TR(0x765b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765b65ull));
TAIL_STATIC(0x767819u,767);
}
B765b65:L765b65:{c.instructions+=2;NFSU2_TR(0x765b65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x5cull))));
}
B765b68:{NFSU2_TR(0x765b68);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765b6a:L765b6a:{c.instructions+=3;NFSU2_TR(0x765b6a);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffae8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+4),(U+12),2);
}
B765b72:{NFSU2_TR(0x765b72);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B765b75:{NFSU2_TR(0x765b75);
if(r1(R+518)){{goto L765b8d;}}
}
B765b77:L765b77:{c.instructions+=2;NFSU2_TR(0x765b77);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba261ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B765b7e:{NFSU2_TR(0x765b7e);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffde8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B765b85:L765b85:{c.instructions+=2;NFSU2_TR(0x765b85);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba380ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B765b8b:{NFSU2_TR(0x765b8b);
{goto L765ba9;}
}
B765b8d:L765b8d:{c.instructions+=2;NFSU2_TR(0x765b8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B765b90:{NFSU2_TR(0x765b90);
if(r1(R+518)){{goto L765ba2;}}
}
B765b92:L765b92:{c.instructions+=3;NFSU2_TR(0x765b92);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba261ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x20ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B765b99:{NFSU2_TR(0x765b99);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffce8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B765ba0:{NFSU2_TR(0x765ba0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765b85u);}goto L765b85;}
}
B765ba2:L765ba2:{c.instructions+=1;NFSU2_TR(0x765ba2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B765ba9:L765ba9:{c.instructions+=3;NFSU2_TR(0x765ba9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B765baa:{NFSU2_TR(0x765baa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B765bac:{NFSU2_TR(0x765bac);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765b6au);}goto L765b6a;}}
}
B765bae:L765bae:{c.instructions+=1;NFSU2_TR(0x765bae);
{goto L765bf4;}
}
B765bb0:L765bb0:{c.instructions+=1;NFSU2_TR(0x765bb0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765bb2:L765bb2:{c.instructions+=2;NFSU2_TR(0x765bb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x41ull))));
}
B765bb5:{NFSU2_TR(0x765bb5);
if(r1(R+512)){{goto L765bd0;}}
}
B765bb7:L765bb7:{c.instructions+=2;NFSU2_TR(0x765bb7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x5aull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765bba:{NFSU2_TR(0x765bba);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L765bd0;}}
}
B765bbc:L765bbc:{c.instructions+=3;NFSU2_TR(0x765bbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba261ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x10ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B765bc3:{NFSU2_TR(0x765bc3);
__builtin_memmove((R+4),(R+0),1);
}
B765bc5:{NFSU2_TR(0x765bc5);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x20ull))));
}
B765bc8:L765bc8:{c.instructions+=2;NFSU2_TR(0x765bc8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba380ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B765bce:{NFSU2_TR(0x765bce);
{goto L765bef;}
}
B765bd0:L765bd0:{c.instructions+=2;NFSU2_TR(0x765bd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x61ull))));
}
B765bd3:{NFSU2_TR(0x765bd3);
if(r1(R+512)){{goto L765be8;}}
}
B765bd5:L765bd5:{c.instructions+=2;NFSU2_TR(0x765bd5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x7aull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7aull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765bd8:{NFSU2_TR(0x765bd8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L765be8;}}
}
B765bda:L765bda:{c.instructions+=4;NFSU2_TR(0x765bda);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba261ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x20ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B765be1:{NFSU2_TR(0x765be1);
__builtin_memmove((R+4),(R+0),1);
}
B765be3:{NFSU2_TR(0x765be3);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x20ull))));
}
B765be6:{NFSU2_TR(0x765be6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765bc8u);}goto L765bc8;}
}
B765be8:L765be8:{c.instructions+=1;NFSU2_TR(0x765be8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B765bef:L765bef:{c.instructions+=3;NFSU2_TR(0x765bef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B765bf0:{NFSU2_TR(0x765bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B765bf2:{NFSU2_TR(0x765bf2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765bb2u);}goto L765bb2;}}
}
B765bf4:L765bf4:{c.instructions+=4;NFSU2_TR(0x765bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B765bf7:{NFSU2_TR(0x765bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B765bfa:{NFSU2_TR(0x765bfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B765bfb:{NFSU2_TR(0x765bfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765c00ull));
TAIL_STATIC(0x76115eu,761);
}
B765c00:L765c00:{c.instructions+=2;NFSU2_TR(0x765c00);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B765c01:{NFSU2_TR(0x765c01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765c02:L765c02:{c.instructions+=3;NFSU2_TR(0x765c02);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765c04:{NFSU2_TR(0x765c04);
u8 U[4];
w4(U+0,u32(0x7d7c88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765c09:{NFSU2_TR(0x765c09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765c0eull));
TAIL_STATIC(0x760da0u,760);
}
B765c0e:L765c0e:{c.instructions+=2;NFSU2_TR(0x765c0e);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765c10:{NFSU2_TR(0x765c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765c15ull));
TAIL_STATIC(0x7631f1u,763);
}
B765c15:L765c15:{c.instructions+=3;NFSU2_TR(0x765c15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765c16:{NFSU2_TR(0x765c16);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B765c1a:{NFSU2_TR(0x765c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765c1full));
TAIL_STATIC(0x761e3cu,761);
}
B765c1f:L765c1f:{c.instructions+=6;NFSU2_TR(0x765c1f);
__builtin_memmove((R+28),(R+0),4);
}
B765c21:{NFSU2_TR(0x765c21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765c24:{NFSU2_TR(0x765c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B765c27:{NFSU2_TR(0x765c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765c2a:{NFSU2_TR(0x765c2a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba23c),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765c30:{NFSU2_TR(0x765c30);
if(r1(R+518)){{goto L765c54;}}
}
B765c32:L765c32:{c.instructions+=2;NFSU2_TR(0x765c32);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B765c34:{NFSU2_TR(0x765c34);
if(r1(R+518)){{goto L765c41;}}
}
B765c36:L765c36:{c.instructions+=2;NFSU2_TR(0x765c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B765c38:{NFSU2_TR(0x765c38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765c41;}}
}
B765c3a:L765c3a:{c.instructions+=2;NFSU2_TR(0x765c3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765c3b:{NFSU2_TR(0x765c3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765c40ull));
TAIL_STATIC(0x75c6dau,75c);
}
B765c40:L765c40:{c.instructions+=1;NFSU2_TR(0x765c40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765c41:L765c41:{c.instructions+=5;NFSU2_TR(0x765c41);
__builtin_memmove((R+0),gp(0x8ba23c),4);
}
B765c46:{NFSU2_TR(0x765c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765c49:{NFSU2_TR(0x765c49);
__builtin_memmove((R+24),gp(0x8ba23c),4);
}
B765c4f:{NFSU2_TR(0x765c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765c52:{NFSU2_TR(0x765c52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B765c54:L765c54:{c.instructions+=2;NFSU2_TR(0x765c54);
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
B765c58:{NFSU2_TR(0x765c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765c5dull));
{goto L765c68;}
}
B765c5d:L765c5d:{c.instructions+=2;NFSU2_TR(0x765c5d);
__builtin_memmove((R+0),(R+24),4);
}
B765c5f:{NFSU2_TR(0x765c5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765c64ull));
TAIL_STATIC(0x760ddbu,760);
}
B765c64:L765c64:{c.instructions+=1;NFSU2_TR(0x765c64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765c68:L765c68:{c.instructions+=2;NFSU2_TR(0x765c68);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765c6a:{NFSU2_TR(0x765c6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765c6full));
TAIL_STATIC(0x76315du,763);
}
B765c6f:L765c6f:{c.instructions+=2;NFSU2_TR(0x765c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765c70:{NFSU2_TR(0x765c70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765c71:L765c71:{c.instructions+=13;NFSU2_TR(0x765c71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765c72:{NFSU2_TR(0x765c72);
__builtin_memmove((R+20),(R+16),4);
}
B765c74:{NFSU2_TR(0x765c74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B765c77:{NFSU2_TR(0x765c77);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B765c7c:{NFSU2_TR(0x765c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B765c7f:{NFSU2_TR(0x765c7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765c80:{NFSU2_TR(0x765c80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765c81:{NFSU2_TR(0x765c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B765c84:{NFSU2_TR(0x765c84);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B765c86:{NFSU2_TR(0x765c86);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765c88:{NFSU2_TR(0x765c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765c8b:{NFSU2_TR(0x765c8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765c8c:{NFSU2_TR(0x765c8c);
if(r1(R+518)){{goto L765de6;}}
}
B765c92:L765c92:{c.instructions+=2;NFSU2_TR(0x765c92);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B765c94:{NFSU2_TR(0x765c94);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765c96:L765c96:{c.instructions+=2;NFSU2_TR(0x765c96);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81a508ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B765c9c:{NFSU2_TR(0x765c9c);
if(r1(R+518)){{goto L765d03;}}
}
B765c9e:L765c9e:{c.instructions+=4;NFSU2_TR(0x765c9e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B765ca1:{NFSU2_TR(0x765ca1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B765ca2:{NFSU2_TR(0x765ca2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xf0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xf0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xf0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B765ca7:{NFSU2_TR(0x765ca7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765c96u);}goto L765c96;}}
}
B765ca9:L765ca9:{c.instructions+=4;NFSU2_TR(0x765ca9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765cac:{NFSU2_TR(0x765cac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765cad:{NFSU2_TR(0x765cad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765cae:{NFSU2_TR(0x765cae);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830c4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765cb4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B765cb4:L765cb4:{c.instructions+=2;NFSU2_TR(0x765cb4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765cb7:{NFSU2_TR(0x765cb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765dde;}}
}
B765cbd:L765cbd:{c.instructions+=5;NFSU2_TR(0x765cbd);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765cbf:{NFSU2_TR(0x765cbf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765cc1:{NFSU2_TR(0x765cc1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B765cc5:{NFSU2_TR(0x765cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765cc6:{NFSU2_TR(0x765cc6);
w4(R+28,u32(0x8ba260ull));
}
B765ccb:L765ccb:{c.instructions+=1;NFSU2_TR(0x765ccb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L765ccd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765ccbu);}goto L765ccb;}
}
B765ccd:L765ccd:{c.instructions+=4;NFSU2_TR(0x765ccd);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B765cce:{NFSU2_TR(0x765cce);
__builtin_memmove(gp(0x8ba364),(R+24),4);
}
B765cd4:{NFSU2_TR(0x765cd4);
__builtin_memmove(gp(0x8ba238),(R+12),4);
}
B765cda:{NFSU2_TR(0x765cda);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L765dcc;}}
}
B765ce0:L765ce0:{c.instructions+=2;NFSU2_TR(0x765ce0);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B765ce4:{NFSU2_TR(0x765ce4);
if(r1(R+518)){{goto L765da4;}}
}
B765cea:L765cea:{c.instructions+=1;NFSU2_TR(0x765cea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffebull))));
__builtin_memmove((R+4),(U+0),4);
}
B765ced:L765ced:{c.instructions+=3;NFSU2_TR(0x765ced);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B765cef:{NFSU2_TR(0x765cef);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B765cf1:{NFSU2_TR(0x765cf1);
if(r1(R+518)){{goto L765da4;}}
}
B765cf7:L765cf7:{c.instructions+=3;NFSU2_TR(0x765cf7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B765cfb:{NFSU2_TR(0x765cfb);
w4(R+8,u32(r1(R+8)));
}
B765cfe:{NFSU2_TR(0x765cfe);
{goto L765d94;}
}
B765d03:L765d03:{c.instructions+=4;NFSU2_TR(0x765d03);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765d05:{NFSU2_TR(0x765d05);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765d07:{NFSU2_TR(0x765d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765d08:{NFSU2_TR(0x765d08);
w4(R+28,u32(0x8ba260ull));
}
B765d0d:L765d0d:{c.instructions+=1;NFSU2_TR(0x765d0d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L765d0f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765d0du);}goto L765d0d;}
}
B765d0f:L765d0f:{c.instructions+=5;NFSU2_TR(0x765d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B765d12:{NFSU2_TR(0x765d12);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B765d15:{NFSU2_TR(0x765d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765d18:{NFSU2_TR(0x765d18);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B765d19:{NFSU2_TR(0x765d19);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x81a518ull))));
__builtin_memmove((R+12),(U+0),4);
}
B765d1f:L765d1f:{c.instructions+=3;NFSU2_TR(0x765d1f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B765d21:{NFSU2_TR(0x765d21);
__builtin_memmove((R+24),(R+12),4);
}
B765d23:{NFSU2_TR(0x765d23);
{goto L765d4e;}
}
B765d25:L765d25:{c.instructions+=3;NFSU2_TR(0x765d25);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B765d28:{NFSU2_TR(0x765d28);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B765d2a:{NFSU2_TR(0x765d2a);
if(r1(R+518)){{goto L765d52;}}
}
B765d2c:L765d2c:{c.instructions+=4;NFSU2_TR(0x765d2c);
w4(R+0,u32(r1(R+0)));
}
B765d2f:{NFSU2_TR(0x765d2f);
w4(R+28,u32(r1(R+8)));
}
B765d32:{NFSU2_TR(0x765d32);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765d34:{NFSU2_TR(0x765d34);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L765d4a;}}
}
B765d36:L765d36:{c.instructions+=2;NFSU2_TR(0x765d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B765d39:{NFSU2_TR(0x765d39);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x81a500ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B765d3f:L765d3f:{c.instructions+=4;NFSU2_TR(0x765d3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba261ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(r1(R+8))));
s1(u32(r4(U+0)),r1(U+4));
}
B765d45:{NFSU2_TR(0x765d45);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B765d46:{NFSU2_TR(0x765d46);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765d48:{NFSU2_TR(0x765d48);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765d3fu);}goto L765d3f;}}
}
B765d4a:L765d4a:{c.instructions+=3;NFSU2_TR(0x765d4a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B765d4b:{NFSU2_TR(0x765d4b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B765d4c:{NFSU2_TR(0x765d4c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B765d4e:L765d4e:{c.instructions+=2;NFSU2_TR(0x765d4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B765d50:{NFSU2_TR(0x765d50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765d25u);}goto L765d25;}}
}
B765d52:L765d52:{c.instructions+=4;NFSU2_TR(0x765d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B765d55:{NFSU2_TR(0x765d55);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B765d58:{NFSU2_TR(0x765d58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B765d5c:{NFSU2_TR(0x765d5c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765d1fu);}goto L765d1f;}}
}
B765d5e:L765d5e:{c.instructions+=4;NFSU2_TR(0x765d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B765d61:{NFSU2_TR(0x765d61);
__builtin_memmove(gp(0x8ba364),(R+0),4);
}
B765d66:{NFSU2_TR(0x765d66);
s4(0x8ba240,u32(0x1ull));
}
B765d70:{NFSU2_TR(0x765d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765d75ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765a18u);}goto L765a18;}
}
B765d75:L765d75:{c.instructions+=8;NFSU2_TR(0x765d75);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x81a50cull))));
__builtin_memmove((R+4),(U+0),4);
}
B765d7b:{NFSU2_TR(0x765d7b);
__builtin_memmove((R+24),(R+4),4);
}
B765d7d:{NFSU2_TR(0x765d7d);
w4(R+28,u32(0x8ba370ull));
}
B765d82:{NFSU2_TR(0x765d82);
u8 U[40];
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
}
B765d83:{NFSU2_TR(0x765d83);
u8 U[40];
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
}
B765d84:{NFSU2_TR(0x765d84);
__builtin_memmove(gp(0x8ba238),(R+0),4);
}
B765d89:{NFSU2_TR(0x765d89);
u8 U[40];
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
}
B765d8a:{NFSU2_TR(0x765d8a);
{goto L765deb;}
}
B765d8c:L765d8c:{c.instructions+=2;NFSU2_TR(0x765d8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba261ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x4ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B765d93:{NFSU2_TR(0x765d93);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B765d94:L765d94:{c.instructions+=2;NFSU2_TR(0x765d94);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765d96:{NFSU2_TR(0x765d96);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765d8cu);}goto L765d8c;}}
}
B765d98:L765d98:{c.instructions+=4;NFSU2_TR(0x765d98);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B765d99:{NFSU2_TR(0x765d99);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B765d9a:{NFSU2_TR(0x765d9a);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B765d9e:{NFSU2_TR(0x765d9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765cedu);}goto L765ced;}}
}
B765da4:L765da4:{c.instructions+=3;NFSU2_TR(0x765da4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B765da6:{NFSU2_TR(0x765da6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B765da7:{NFSU2_TR(0x765da7);
__builtin_memmove((R+0),(R+4),4);
}
B765da9:L765da9:{c.instructions+=4;NFSU2_TR(0x765da9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba261ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B765db0:{NFSU2_TR(0x765db0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B765db1:{NFSU2_TR(0x765db1);
w1(R+512,u8((r4(R+0))<(u32(0xffull))));
}
B765db6:{NFSU2_TR(0x765db6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765da9u);}goto L765da9;}}
}
B765db8:L765db8:{c.instructions+=2;NFSU2_TR(0x765db8);
__builtin_memmove((R+0),(R+24),4);
}
B765dba:{NFSU2_TR(0x765dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765dbfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765a18u);}goto L765a18;}
}
B765dbf:L765dbf:{c.instructions+=3;NFSU2_TR(0x765dbf);
__builtin_memmove(gp(0x8ba238),(R+0),4);
}
B765dc4:{NFSU2_TR(0x765dc4);
__builtin_memmove(gp(0x8ba240),(R+4),4);
}
B765dca:{NFSU2_TR(0x765dca);
{goto L765dd2;}
}
B765dcc:L765dcc:{c.instructions+=1;NFSU2_TR(0x765dcc);
__builtin_memmove(gp(0x8ba240),(R+12),4);
}
B765dd2:L765dd2:{c.instructions+=6;NFSU2_TR(0x765dd2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765dd4:{NFSU2_TR(0x765dd4);
w4(R+28,u32(0x8ba370ull));
}
B765dd9:{NFSU2_TR(0x765dd9);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B765dda:{NFSU2_TR(0x765dda);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B765ddb:{NFSU2_TR(0x765ddb);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B765ddc:{NFSU2_TR(0x765ddc);
{goto L765deb;}
}
B765dde:L765dde:{c.instructions+=2;NFSU2_TR(0x765dde);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8718),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765de4:{NFSU2_TR(0x765de4);
if(r1(R+518)){{goto L765df4;}}
}
B765de6:L765de6:{c.instructions+=1;NFSU2_TR(0x765de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765debull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765a47u);}goto L765a47;}
}
B765deb:L765deb:{c.instructions+=1;NFSU2_TR(0x765deb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765df0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765a70u);}goto L765a70;}
}
B765df0:L765df0:{c.instructions+=2;NFSU2_TR(0x765df0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765df2:{NFSU2_TR(0x765df2);
{goto L765df7;}
}
B765df4:L765df4:{c.instructions+=1;NFSU2_TR(0x765df4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B765df7:L765df7:{c.instructions+=6;NFSU2_TR(0x765df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B765dfa:{NFSU2_TR(0x765dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B765dfd:{NFSU2_TR(0x765dfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B765dfe:{NFSU2_TR(0x765dfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B765dff:{NFSU2_TR(0x765dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B765e00:{NFSU2_TR(0x765e00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765e05ull));
TAIL_STATIC(0x76115eu,761);
}
B765e05:L765e05:{c.instructions+=2;NFSU2_TR(0x765e05);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B765e06:{NFSU2_TR(0x765e06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765e07:L765e07:{c.instructions+=3;NFSU2_TR(0x765e07);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765e09:{NFSU2_TR(0x765e09);
u8 U[4];
w4(U+0,u32(0x7d7c98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765e0e:{NFSU2_TR(0x765e0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765e13ull));
TAIL_STATIC(0x760da0u,760);
}
B765e13:L765e13:{c.instructions+=3;NFSU2_TR(0x765e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B765e17:{NFSU2_TR(0x765e17);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765e19:{NFSU2_TR(0x765e19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765e1eull));
TAIL_STATIC(0x7631f1u,763);
}
B765e1e:L765e1e:{c.instructions+=7;NFSU2_TR(0x765e1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765e1f:{NFSU2_TR(0x765e1f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B765e21:{NFSU2_TR(0x765e21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765e24:{NFSU2_TR(0x765e24);
__builtin_memmove(gp(0x8b8718),(R+28),4);
}
B765e2a:{NFSU2_TR(0x765e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B765e2d:{NFSU2_TR(0x765e2d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B765e30:{NFSU2_TR(0x765e30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765e44;}}
}
B765e32:L765e32:{c.instructions+=2;NFSU2_TR(0x765e32);
s4(0x8b8718,u32(0x1ull));
}
B765e3c:{NFSU2_TR(0x765e3c);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830c8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765e42ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B765e42:L765e42:{c.instructions+=1;NFSU2_TR(0x765e42);
{goto L765e6f;}
}
B765e44:L765e44:{c.instructions+=2;NFSU2_TR(0x765e44);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfffffffdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfffffffdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfffffffdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B765e47:{NFSU2_TR(0x765e47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765e5b;}}
}
B765e49:L765e49:{c.instructions+=2;NFSU2_TR(0x765e49);
s4(0x8b8718,u32(0x1ull));
}
B765e53:{NFSU2_TR(0x765e53);
u8 U[4];
__builtin_memmove((U+0),gp(0x7830cc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765e59ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B765e59:L765e59:{c.instructions+=1;NFSU2_TR(0x765e59);
{goto L765e6f;}
}
B765e5b:L765e5b:{c.instructions+=2;NFSU2_TR(0x765e5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765e5e:{NFSU2_TR(0x765e5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765e6f;}}
}
B765e60:L765e60:{c.instructions+=2;NFSU2_TR(0x765e60);
s4(0x8b8718,u32(0x1ull));
}
B765e6a:{NFSU2_TR(0x765e6a);
__builtin_memmove((R+0),gp(0x8b8844),4);
}
B765e6f:L765e6f:{c.instructions+=3;NFSU2_TR(0x765e6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765e72:{NFSU2_TR(0x765e72);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba364),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765e78:{NFSU2_TR(0x765e78);
if(r1(R+518)){{goto L765f39;}}
}
B765e7e:L765e7e:{c.instructions+=4;NFSU2_TR(0x765e7e);
__builtin_memmove((R+24),gp(0x8ba23c),4);
}
B765e84:{NFSU2_TR(0x765e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765e87:{NFSU2_TR(0x765e87);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765e89:{NFSU2_TR(0x765e89);
if(r1(R+518)){{goto L765e8f;}}
}
B765e8b:L765e8b:{c.instructions+=2;NFSU2_TR(0x765e8b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B765e8d:{NFSU2_TR(0x765e8d);
if(r1(R+518)){{goto L765e9f;}}
}
B765e8f:L765e8f:{c.instructions+=2;NFSU2_TR(0x765e8f);
u8 U[4];
w4(U+0,u32(0x220ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765e94:{NFSU2_TR(0x765e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765e99ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B765e99:L765e99:{c.instructions+=3;NFSU2_TR(0x765e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765e9a:{NFSU2_TR(0x765e9a);
__builtin_memmove((R+24),(R+0),4);
}
B765e9c:{NFSU2_TR(0x765e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765e9f:L765e9f:{c.instructions+=2;NFSU2_TR(0x765e9f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765ea1:{NFSU2_TR(0x765ea1);
if(r1(R+518)){{goto L765f22;}}
}
B765ea3:L765ea3:{c.instructions+=2;NFSU2_TR(0x765ea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B765ea6:{NFSU2_TR(0x765ea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765eabull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765c71u);}goto L765c71;}
}
B765eab:L765eab:{c.instructions+=4;NFSU2_TR(0x765eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765eac:{NFSU2_TR(0x765eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765eaf:{NFSU2_TR(0x765eaf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765eb1:{NFSU2_TR(0x765eb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765f22;}}
}
B765eb3:L765eb3:{c.instructions+=8;NFSU2_TR(0x765eb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B765eb5:{NFSU2_TR(0x765eb5);
__builtin_memmove((R+0),gp(0x8ba364),4);
}
B765eba:{NFSU2_TR(0x765eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765ebd:{NFSU2_TR(0x765ebd);
__builtin_memmove((R+0),gp(0x8ba240),4);
}
B765ec2:{NFSU2_TR(0x765ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765ec5:{NFSU2_TR(0x765ec5);
__builtin_memmove((R+0),gp(0x8ba238),4);
}
B765eca:{NFSU2_TR(0x765eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765ecd:{NFSU2_TR(0x765ecd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765ecf:L765ecf:{c.instructions+=3;NFSU2_TR(0x765ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765ed2:{NFSU2_TR(0x765ed2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B765ed5:{NFSU2_TR(0x765ed5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L765ee7;}}
}
B765ed7:L765ed7:{c.instructions+=4;NFSU2_TR(0x765ed7);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8ba370ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B765edf:{NFSU2_TR(0x765edf);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),2);
s2(u32(r4(U+8)),r2(U+12));
}
B765ee4:{NFSU2_TR(0x765ee4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B765ee5:{NFSU2_TR(0x765ee5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765ecfu);}goto L765ecf;}
}
B765ee7:L765ee7:{c.instructions+=1;NFSU2_TR(0x765ee7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765ee9:L765ee9:{c.instructions+=3;NFSU2_TR(0x765ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765eec:{NFSU2_TR(0x765eec);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x101ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x101ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B765ef1:{NFSU2_TR(0x765ef1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L765f00;}}
}
B765ef3:L765ef3:{c.instructions+=4;NFSU2_TR(0x765ef3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba260ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B765ef9:{NFSU2_TR(0x765ef9);
u8 U[13];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B765efd:{NFSU2_TR(0x765efd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B765efe:{NFSU2_TR(0x765efe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765ee9u);}goto L765ee9;}
}
B765f00:L765f00:{c.instructions+=1;NFSU2_TR(0x765f00);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765f02:L765f02:{c.instructions+=3;NFSU2_TR(0x765f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765f05:{NFSU2_TR(0x765f05);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B765f0a:{NFSU2_TR(0x765f0a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L765f1c;}}
}
B765f0c:L765f0c:{c.instructions+=4;NFSU2_TR(0x765f0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B765f12:{NFSU2_TR(0x765f12);
u8 U[13];
w4(U+0,u32(u32(u32(0x11dull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B765f19:{NFSU2_TR(0x765f19);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B765f1a:{NFSU2_TR(0x765f1a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765f02u);}goto L765f02;}
}
B765f1c:L765f1c:{c.instructions+=1;NFSU2_TR(0x765f1c);
__builtin_memmove(gp(0x8ba23c),(R+24),4);
}
B765f22:L765f22:{c.instructions+=2;NFSU2_TR(0x765f22);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B765f26:{NFSU2_TR(0x765f26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765f3c;}}
}
B765f28:L765f28:{c.instructions+=2;NFSU2_TR(0x765f28);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba23c),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765f2e:{NFSU2_TR(0x765f2e);
if(r1(R+518)){{goto L765f3c;}}
}
B765f30:L765f30:{c.instructions+=2;NFSU2_TR(0x765f30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765f31:{NFSU2_TR(0x765f31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765f36ull));
TAIL_STATIC(0x75c6dau,75c);
}
B765f36:L765f36:{c.instructions+=2;NFSU2_TR(0x765f36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765f37:{NFSU2_TR(0x765f37);
{goto L765f3c;}
}
B765f39:L765f39:{c.instructions+=1;NFSU2_TR(0x765f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765f3c:L765f3c:{c.instructions+=2;NFSU2_TR(0x765f3c);
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
B765f40:{NFSU2_TR(0x765f40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765f45ull));
{goto L765f4e;}
}
B765f45:L765f45:{c.instructions+=2;NFSU2_TR(0x765f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B765f48:{NFSU2_TR(0x765f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765f4dull));
TAIL_STATIC(0x760ddbu,760);
}
B765f4d:L765f4d:{c.instructions+=1;NFSU2_TR(0x765f4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765f4e:L765f4e:{c.instructions+=2;NFSU2_TR(0x765f4e);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765f50:{NFSU2_TR(0x765f50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765f55ull));
TAIL_STATIC(0x76315du,763);
}
B765f55:L765f55:{c.instructions+=2;NFSU2_TR(0x765f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765f56:{NFSU2_TR(0x765f56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765f57:L765f57:{c.instructions+=2;NFSU2_TR(0x765f57);
u8 U[8];
__builtin_memmove((U+0),gp(0x8bb5f0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765f5e:{NFSU2_TR(0x765f5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765f72;}}
}
B765f60:L765f60:{c.instructions+=2;NFSU2_TR(0x765f60);
u8 U[4];
w4(U+0,u32(0xfffffffdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765f62:{NFSU2_TR(0x765f62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765f67ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x765e07u);}goto L765e07;}
}
B765f67:L765f67:{c.instructions+=2;NFSU2_TR(0x765f67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765f68:{NFSU2_TR(0x765f68);
s4(0x8bb5f0,u32(0x1ull));
}
B765f72:L765f72:{c.instructions+=2;NFSU2_TR(0x765f72);
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
B765f74:{NFSU2_TR(0x765f74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765f75:L765f75:{c.instructions+=4;NFSU2_TR(0x765f75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765f76:{NFSU2_TR(0x765f76);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B765f7a:{NFSU2_TR(0x765f7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B765f7d:{NFSU2_TR(0x765f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765f82ull));
TAIL_STATIC(0x76ca2bu,76c);
}
B765f82:L765f82:{c.instructions+=3;NFSU2_TR(0x765f82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B765f84:{NFSU2_TR(0x765f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765f85:{NFSU2_TR(0x765f85);
if(r1(R+518)){{goto L765ff9;}}
}
B765f87:L765f87:{c.instructions+=2;NFSU2_TR(0x765f87);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x819f30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765f8d:{NFSU2_TR(0x765f8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765f93;}}
}
B765f8f:L765f8f:{c.instructions+=2;NFSU2_TR(0x765f8f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765f91:{NFSU2_TR(0x765f91);
{goto L765f9e;}
}
B765f93:L765f93:{c.instructions+=2;NFSU2_TR(0x765f93);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x819f50ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B765f99:{NFSU2_TR(0x765f99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765ff9;}}
}
B765f9b:L765f9b:{c.instructions+=2;NFSU2_TR(0x765f9b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765f9d:{NFSU2_TR(0x765f9d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B765f9e:L765f9e:{c.instructions+=3;NFSU2_TR(0x765f9e);
s4(0x8b8484,u32(u32(m4(0x8b8484))+u32(u32(0x1ull))));
}
B765fa4:{NFSU2_TR(0x765fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x10cull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B765faa:{NFSU2_TR(0x765faa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765ff9;}}
}
B765fac:L765fac:{c.instructions+=6;NFSU2_TR(0x765fac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765fad:{NFSU2_TR(0x765fad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765fae:{NFSU2_TR(0x765fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b871cull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B765fb5:{NFSU2_TR(0x765fb5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B765fb8:{NFSU2_TR(0x765fb8);
w4(R+12,u32(0x1000ull));
}
B765fbd:{NFSU2_TR(0x765fbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765fdf;}}
}
B765fbf:L765fbf:{c.instructions+=2;NFSU2_TR(0x765fbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765fc0:{NFSU2_TR(0x765fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x765fc5ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B765fc5:L765fc5:{c.instructions+=4;NFSU2_TR(0x765fc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B765fc7:{NFSU2_TR(0x765fc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B765fc8:{NFSU2_TR(0x765fc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B765fca:{NFSU2_TR(0x765fca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L765fdf;}}
}
B765fcc:L765fcc:{c.instructions+=8;NFSU2_TR(0x765fcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765fcf:{NFSU2_TR(0x765fcf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B765fd1:{NFSU2_TR(0x765fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765fd4:{NFSU2_TR(0x765fd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B765fd6:{NFSU2_TR(0x765fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B765fd7:{NFSU2_TR(0x765fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765fda:{NFSU2_TR(0x765fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765fdd:{NFSU2_TR(0x765fdd);
{goto L765fec;}
}
B765fdf:L765fdf:{c.instructions+=5;NFSU2_TR(0x765fdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B765fe1:{NFSU2_TR(0x765fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765fe4:{NFSU2_TR(0x765fe4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B765fe6:{NFSU2_TR(0x765fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765fe9:{NFSU2_TR(0x765fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B765fec:L765fec:{c.instructions+=7;NFSU2_TR(0x765fec);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0x1102ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B765ff2:{NFSU2_TR(0x765ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B765ff3:{NFSU2_TR(0x765ff3);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B765ff5:{NFSU2_TR(0x765ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B765ff6:{NFSU2_TR(0x765ff6);
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
B765ff7:{NFSU2_TR(0x765ff7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B765ff8:{NFSU2_TR(0x765ff8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765ff9:L765ff9:{c.instructions+=3;NFSU2_TR(0x765ff9);
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
B765ffb:{NFSU2_TR(0x765ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B765ffc:{NFSU2_TR(0x765ffc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B765ffd:L765ffd:{c.instructions+=1;NFSU2_TR(0x765ffd);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
TAIL_STATIC(0x766002u,766);
}
XIT:NFSU2_TR_EXIT(0x765,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
