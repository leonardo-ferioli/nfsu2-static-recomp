#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_626(u8* __restrict R,Cpu& c);
u32 body_628(u8* __restrict R,Cpu& c);
u32 body_629(u8* __restrict R,Cpu& c);
u32 body_62d(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x627,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x627,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_627(u8* __restrict R,Cpu& c);
u32 page_627(Cpu& c){return body_627(c.regs.data(),c);}
__attribute__((noinline)) u32 body_627(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x627004:goto L627004;
case 0x62700a:goto L62700a;
case 0x62700c:goto L62700c;
case 0x62700e:goto L62700e;
case 0x627014:c.instructions+=9;goto B627014;
case 0x62701a:c.instructions+=8;goto B62701a;
case 0x627020:c.instructions+=7;goto B627020;
case 0x627026:c.instructions+=6;goto B627026;
case 0x62702d:c.instructions+=5;goto B62702d;
case 0x627031:c.instructions+=4;goto B627031;
case 0x627035:c.instructions+=3;goto B627035;
case 0x627037:c.instructions+=2;goto B627037;
case 0x62703a:c.instructions+=1;goto B62703a;
case 0x62703c:goto L62703c;
case 0x627042:c.instructions+=2;goto B627042;
case 0x627049:c.instructions+=1;goto B627049;
case 0x62704b:goto L62704b;
case 0x627050:c.instructions+=1;goto B627050;
case 0x627057:goto L627057;
case 0x62705d:c.instructions+=4;goto B62705d;
case 0x627063:c.instructions+=3;goto B627063;
case 0x627065:c.instructions+=2;goto B627065;
case 0x627068:c.instructions+=1;goto B627068;
case 0x62706a:goto L62706a;
case 0x627070:c.instructions+=2;goto B627070;
case 0x627077:c.instructions+=1;goto B627077;
case 0x627079:goto L627079;
case 0x62707f:c.instructions+=1;goto B62707f;
case 0x627086:goto L627086;
case 0x62708a:c.instructions+=4;goto B62708a;
case 0x627090:c.instructions+=3;goto B627090;
case 0x627093:c.instructions+=2;goto B627093;
case 0x62709e:c.instructions+=1;goto B62709e;
case 0x6270a0:goto L6270a0;
case 0x6270a2:c.instructions+=5;goto B6270a2;
case 0x6270a8:c.instructions+=4;goto B6270a8;
case 0x6270ae:c.instructions+=3;goto B6270ae;
case 0x6270b0:c.instructions+=2;goto B6270b0;
case 0x6270b3:c.instructions+=1;goto B6270b3;
case 0x6270b5:goto L6270b5;
case 0x6270bb:c.instructions+=1;goto B6270bb;
case 0x6270bd:goto L6270bd;
case 0x6270c1:c.instructions+=3;goto B6270c1;
case 0x6270c4:c.instructions+=2;goto B6270c4;
case 0x6270c7:c.instructions+=1;goto B6270c7;
case 0x6270cc:goto L6270cc;
case 0x6270d2:c.instructions+=3;goto B6270d2;
case 0x6270d4:c.instructions+=2;goto B6270d4;
case 0x6270da:c.instructions+=1;goto B6270da;
case 0x6270df:goto L6270df;
case 0x6270e1:c.instructions+=12;goto B6270e1;
case 0x6270e7:c.instructions+=11;goto B6270e7;
case 0x6270e9:c.instructions+=10;goto B6270e9;
case 0x6270ef:c.instructions+=9;goto B6270ef;
case 0x6270f4:c.instructions+=8;goto B6270f4;
case 0x6270f6:c.instructions+=7;goto B6270f6;
case 0x6270f8:c.instructions+=6;goto B6270f8;
case 0x6270fb:c.instructions+=5;goto B6270fb;
case 0x6270fd:c.instructions+=4;goto B6270fd;
case 0x627100:c.instructions+=3;goto B627100;
case 0x627102:c.instructions+=2;goto B627102;
case 0x627109:c.instructions+=1;goto B627109;
case 0x62710d:goto L62710d;
case 0x627110:c.instructions+=18;goto B627110;
case 0x627116:c.instructions+=17;goto B627116;
case 0x627119:c.instructions+=16;goto B627119;
case 0x627120:c.instructions+=15;goto B627120;
case 0x627123:c.instructions+=14;goto B627123;
case 0x627126:c.instructions+=13;goto B627126;
case 0x62712d:c.instructions+=12;goto B62712d;
case 0x627133:c.instructions+=11;goto B627133;
case 0x62713a:c.instructions+=10;goto B62713a;
case 0x627141:c.instructions+=9;goto B627141;
case 0x627148:c.instructions+=8;goto B627148;
case 0x62714f:c.instructions+=7;goto B62714f;
case 0x627151:c.instructions+=6;goto B627151;
case 0x627153:c.instructions+=5;goto B627153;
case 0x62715a:c.instructions+=4;goto B62715a;
case 0x62715c:c.instructions+=3;goto B62715c;
case 0x62715e:c.instructions+=2;goto B62715e;
case 0x627160:c.instructions+=1;goto B627160;
case 0x627164:goto L627164;
case 0x62716a:c.instructions+=11;goto B62716a;
case 0x627171:c.instructions+=10;goto B627171;
case 0x627173:c.instructions+=9;goto B627173;
case 0x627177:c.instructions+=8;goto B627177;
case 0x62717e:c.instructions+=7;goto B62717e;
case 0x627181:c.instructions+=6;goto B627181;
case 0x627183:c.instructions+=5;goto B627183;
case 0x627187:c.instructions+=4;goto B627187;
case 0x62718c:c.instructions+=3;goto B62718c;
case 0x627190:c.instructions+=2;goto B627190;
case 0x627197:c.instructions+=1;goto B627197;
case 0x627199:goto L627199;
case 0x6271a0:c.instructions+=1;goto B6271a0;
case 0x6271a2:goto L6271a2;
case 0x6271a9:goto L6271a9;
case 0x6271ad:c.instructions+=4;goto B6271ad;
case 0x6271b3:c.instructions+=3;goto B6271b3;
case 0x6271b5:c.instructions+=2;goto B6271b5;
case 0x6271b8:c.instructions+=1;goto B6271b8;
case 0x6271ba:goto L6271ba;
case 0x6271c1:c.instructions+=1;goto B6271c1;
case 0x6271c5:goto L6271c5;
case 0x6271cc:c.instructions+=75;goto B6271cc;
case 0x6271ce:c.instructions+=74;goto B6271ce;
case 0x6271d0:c.instructions+=73;goto B6271d0;
case 0x6271d4:c.instructions+=72;goto B6271d4;
case 0x6271db:c.instructions+=71;goto B6271db;
case 0x6271e2:c.instructions+=70;goto B6271e2;
case 0x6271e9:c.instructions+=69;goto B6271e9;
case 0x6271f0:c.instructions+=68;goto B6271f0;
case 0x6271f7:c.instructions+=67;goto B6271f7;
case 0x6271fe:c.instructions+=66;goto B6271fe;
case 0x627205:c.instructions+=65;goto B627205;
case 0x62720c:c.instructions+=64;goto B62720c;
case 0x627213:c.instructions+=63;goto B627213;
case 0x62721a:c.instructions+=62;goto B62721a;
case 0x627221:c.instructions+=61;goto B627221;
case 0x627228:c.instructions+=60;goto B627228;
case 0x62722f:c.instructions+=59;goto B62722f;
case 0x627236:c.instructions+=58;goto B627236;
case 0x62723d:c.instructions+=57;goto B62723d;
case 0x627244:c.instructions+=56;goto B627244;
case 0x62724b:c.instructions+=55;goto B62724b;
case 0x627252:c.instructions+=54;goto B627252;
case 0x627259:c.instructions+=53;goto B627259;
case 0x627260:c.instructions+=52;goto B627260;
case 0x627267:c.instructions+=51;goto B627267;
case 0x62726e:c.instructions+=50;goto B62726e;
case 0x627275:c.instructions+=49;goto B627275;
case 0x62727c:c.instructions+=48;goto B62727c;
case 0x627283:c.instructions+=47;goto B627283;
case 0x62728a:c.instructions+=46;goto B62728a;
case 0x627291:c.instructions+=45;goto B627291;
case 0x627298:c.instructions+=44;goto B627298;
case 0x62729f:c.instructions+=43;goto B62729f;
case 0x6272a6:c.instructions+=42;goto B6272a6;
case 0x6272ad:c.instructions+=41;goto B6272ad;
case 0x6272b4:c.instructions+=40;goto B6272b4;
case 0x6272bb:c.instructions+=39;goto B6272bb;
case 0x6272c2:c.instructions+=38;goto B6272c2;
case 0x6272c9:c.instructions+=37;goto B6272c9;
case 0x6272d0:c.instructions+=36;goto B6272d0;
case 0x6272d7:c.instructions+=35;goto B6272d7;
case 0x6272de:c.instructions+=34;goto B6272de;
case 0x6272e5:c.instructions+=33;goto B6272e5;
case 0x6272ec:c.instructions+=32;goto B6272ec;
case 0x6272f3:c.instructions+=31;goto B6272f3;
case 0x6272fa:c.instructions+=30;goto B6272fa;
case 0x627301:c.instructions+=29;goto B627301;
case 0x627308:c.instructions+=28;goto B627308;
case 0x62730f:c.instructions+=27;goto B62730f;
case 0x627316:c.instructions+=26;goto B627316;
case 0x62731d:c.instructions+=25;goto B62731d;
case 0x627324:c.instructions+=24;goto B627324;
case 0x62732b:c.instructions+=23;goto B62732b;
case 0x627332:c.instructions+=22;goto B627332;
case 0x627339:c.instructions+=21;goto B627339;
case 0x627340:c.instructions+=20;goto B627340;
case 0x627347:c.instructions+=19;goto B627347;
case 0x62734e:c.instructions+=18;goto B62734e;
case 0x627355:c.instructions+=17;goto B627355;
case 0x62735c:c.instructions+=16;goto B62735c;
case 0x627363:c.instructions+=15;goto B627363;
case 0x62736a:c.instructions+=14;goto B62736a;
case 0x627371:c.instructions+=13;goto B627371;
case 0x627378:c.instructions+=12;goto B627378;
case 0x62737f:c.instructions+=11;goto B62737f;
case 0x627386:c.instructions+=10;goto B627386;
case 0x62738d:c.instructions+=9;goto B62738d;
case 0x627394:c.instructions+=8;goto B627394;
case 0x627396:c.instructions+=7;goto B627396;
case 0x627398:c.instructions+=6;goto B627398;
case 0x62739f:c.instructions+=5;goto B62739f;
case 0x6273a1:c.instructions+=4;goto B6273a1;
case 0x6273a7:c.instructions+=3;goto B6273a7;
case 0x6273a9:c.instructions+=2;goto B6273a9;
case 0x6273ac:c.instructions+=1;goto B6273ac;
case 0x6273ae:goto L6273ae;
case 0x6273b0:c.instructions+=2;goto B6273b0;
case 0x6273b2:c.instructions+=1;goto B6273b2;
case 0x6273b4:goto L6273b4;
case 0x6273b6:c.instructions+=1;goto B6273b6;
case 0x6273b8:goto L6273b8;
case 0x6273ba:c.instructions+=6;goto B6273ba;
case 0x6273c1:c.instructions+=5;goto B6273c1;
case 0x6273c3:c.instructions+=4;goto B6273c3;
case 0x6273c9:c.instructions+=3;goto B6273c9;
case 0x6273cb:c.instructions+=2;goto B6273cb;
case 0x6273ce:c.instructions+=1;goto B6273ce;
case 0x6273d0:goto L6273d0;
case 0x6273d7:c.instructions+=1;goto B6273d7;
case 0x6273d9:goto L6273d9;
case 0x6273e0:goto L6273e0;
case 0x6273e7:c.instructions+=6;goto B6273e7;
case 0x6273e9:c.instructions+=5;goto B6273e9;
case 0x6273f0:c.instructions+=4;goto B6273f0;
case 0x6273f6:c.instructions+=3;goto B6273f6;
case 0x6273f8:c.instructions+=2;goto B6273f8;
case 0x6273fb:c.instructions+=1;goto B6273fb;
case 0x6273fd:goto L6273fd;
case 0x6273ff:c.instructions+=1;goto B6273ff;
case 0x627406:goto L627406;
case 0x627408:c.instructions+=4;goto B627408;
case 0x62740e:c.instructions+=3;goto B62740e;
case 0x627410:c.instructions+=2;goto B627410;
case 0x627413:c.instructions+=1;goto B627413;
case 0x627415:goto L627415;
case 0x627417:c.instructions+=2;goto B627417;
case 0x627419:c.instructions+=1;goto B627419;
case 0x62741b:goto L62741b;
case 0x62741d:c.instructions+=3;goto B62741d;
case 0x62741f:c.instructions+=2;goto B62741f;
case 0x627421:c.instructions+=1;goto B627421;
case 0x627423:goto L627423;
case 0x627429:c.instructions+=2;goto B627429;
case 0x627430:c.instructions+=1;goto B627430;
case 0x627432:goto L627432;
case 0x627439:c.instructions+=8;goto B627439;
case 0x62743b:c.instructions+=7;goto B62743b;
case 0x627442:c.instructions+=6;goto B627442;
case 0x627449:c.instructions+=5;goto B627449;
case 0x62744b:c.instructions+=4;goto B62744b;
case 0x627452:c.instructions+=3;goto B627452;
case 0x627459:c.instructions+=2;goto B627459;
case 0x62745b:c.instructions+=1;goto B62745b;
case 0x627462:goto L627462;
case 0x627469:c.instructions+=14;goto B627469;
case 0x627470:c.instructions+=13;goto B627470;
case 0x627477:c.instructions+=12;goto B627477;
case 0x62747b:c.instructions+=11;goto B62747b;
case 0x627481:c.instructions+=10;goto B627481;
case 0x627488:c.instructions+=9;goto B627488;
case 0x627490:c.instructions+=8;goto B627490;
case 0x627497:c.instructions+=7;goto B627497;
case 0x62749a:c.instructions+=6;goto B62749a;
case 0x62749d:c.instructions+=5;goto B62749d;
case 0x6274a0:c.instructions+=4;goto B6274a0;
case 0x6274a6:c.instructions+=3;goto B6274a6;
case 0x6274ad:c.instructions+=2;goto B6274ad;
case 0x6274b4:c.instructions+=1;goto B6274b4;
case 0x6274ba:goto L6274ba;
case 0x6274be:c.instructions+=13;goto B6274be;
case 0x6274c0:c.instructions+=12;goto B6274c0;
case 0x6274c3:c.instructions+=11;goto B6274c3;
case 0x6274c5:c.instructions+=10;goto B6274c5;
case 0x6274cc:c.instructions+=9;goto B6274cc;
case 0x6274ce:c.instructions+=8;goto B6274ce;
case 0x6274d4:c.instructions+=7;goto B6274d4;
case 0x6274d8:c.instructions+=6;goto B6274d8;
case 0x6274df:c.instructions+=5;goto B6274df;
case 0x6274e3:c.instructions+=4;goto B6274e3;
case 0x6274ea:c.instructions+=3;goto B6274ea;
case 0x6274f1:c.instructions+=2;goto B6274f1;
case 0x6274f8:c.instructions+=1;goto B6274f8;
case 0x6274fa:goto L6274fa;
case 0x627502:goto L627502;
case 0x627504:c.instructions+=1;goto B627504;
case 0x62750a:goto L62750a;
case 0x62750f:c.instructions+=1;goto B62750f;
case 0x627515:goto L627515;
case 0x627517:c.instructions+=1;goto B627517;
case 0x62751c:goto L62751c;
case 0x62751e:c.instructions+=2;goto B62751e;
case 0x627525:c.instructions+=1;goto B627525;
case 0x62752a:goto L62752a;
case 0x62752f:c.instructions+=2;goto B62752f;
case 0x627536:c.instructions+=1;goto B627536;
case 0x62753b:goto L62753b;
case 0x627540:c.instructions+=2;goto B627540;
case 0x627547:c.instructions+=1;goto B627547;
case 0x62754c:goto L62754c;
case 0x627553:c.instructions+=4;goto B627553;
case 0x62755a:c.instructions+=3;goto B62755a;
case 0x62755d:c.instructions+=2;goto B62755d;
case 0x62755f:c.instructions+=1;goto B62755f;
case 0x627565:goto L627565;
case 0x62756c:c.instructions+=2;goto B62756c;
case 0x62756e:c.instructions+=1;goto B62756e;
case 0x627574:goto L627574;
case 0x62757b:c.instructions+=2;goto B62757b;
case 0x62757d:c.instructions+=1;goto B62757d;
case 0x627583:goto L627583;
case 0x62758a:c.instructions+=2;goto B62758a;
case 0x62758c:c.instructions+=1;goto B62758c;
case 0x627592:goto L627592;
case 0x627596:c.instructions+=4;goto B627596;
case 0x62759c:c.instructions+=3;goto B62759c;
case 0x62759e:c.instructions+=2;goto B62759e;
case 0x6275a0:c.instructions+=1;goto B6275a0;
case 0x6275a2:goto L6275a2;
case 0x6275a4:c.instructions+=2;goto B6275a4;
case 0x6275a6:c.instructions+=1;goto B6275a6;
case 0x6275a8:goto L6275a8;
case 0x6275ae:c.instructions+=1;goto B6275ae;
case 0x6275b0:goto L6275b0;
case 0x6275b8:c.instructions+=1;goto B6275b8;
case 0x6275ba:goto L6275ba;
case 0x6275be:goto L6275be;
case 0x6275c4:c.instructions+=2;goto B6275c4;
case 0x6275c6:c.instructions+=1;goto B6275c6;
case 0x6275c8:goto L6275c8;
case 0x6275ca:c.instructions+=2;goto B6275ca;
case 0x6275cc:c.instructions+=1;goto B6275cc;
case 0x6275ce:goto L6275ce;
case 0x6275d5:c.instructions+=1;goto B6275d5;
case 0x6275d7:goto L6275d7;
case 0x6275e2:c.instructions+=1;goto B6275e2;
case 0x6275e4:goto L6275e4;
case 0x6275eb:goto L6275eb;
case 0x6275f1:c.instructions+=2;goto B6275f1;
case 0x6275f3:c.instructions+=1;goto B6275f3;
case 0x6275f5:goto L6275f5;
case 0x6275f7:c.instructions+=2;goto B6275f7;
case 0x6275f9:c.instructions+=1;goto B6275f9;
case 0x6275fb:goto L6275fb;
case 0x627602:c.instructions+=1;goto B627602;
case 0x627604:goto L627604;
case 0x62760c:c.instructions+=1;goto B62760c;
case 0x62760e:goto L62760e;
case 0x627612:goto L627612;
case 0x627618:c.instructions+=2;goto B627618;
case 0x62761a:c.instructions+=1;goto B62761a;
case 0x62761c:goto L62761c;
case 0x62761e:c.instructions+=2;goto B62761e;
case 0x627620:c.instructions+=1;goto B627620;
case 0x627622:goto L627622;
case 0x627628:c.instructions+=2;goto B627628;
case 0x62762a:c.instructions+=1;goto B62762a;
case 0x62762c:goto L62762c;
case 0x627637:c.instructions+=1;goto B627637;
case 0x627639:goto L627639;
case 0x627640:goto L627640;
case 0x627647:c.instructions+=3;goto B627647;
case 0x62764a:c.instructions+=2;goto B62764a;
case 0x627651:c.instructions+=1;goto B627651;
case 0x627653:goto L627653;
case 0x62765e:goto L62765e;
case 0x627663:c.instructions+=21;goto B627663;
case 0x62766a:c.instructions+=20;goto B62766a;
case 0x62766b:c.instructions+=19;goto B62766b;
case 0x627672:c.instructions+=18;goto B627672;
case 0x627673:c.instructions+=17;goto B627673;
case 0x62767e:c.instructions+=16;goto B62767e;
case 0x627689:c.instructions+=15;goto B627689;
case 0x627694:c.instructions+=14;goto B627694;
case 0x62769f:c.instructions+=13;goto B62769f;
case 0x6276aa:c.instructions+=12;goto B6276aa;
case 0x6276b5:c.instructions+=11;goto B6276b5;
case 0x6276c0:c.instructions+=10;goto B6276c0;
case 0x6276cb:c.instructions+=9;goto B6276cb;
case 0x6276d6:c.instructions+=8;goto B6276d6;
case 0x6276e1:c.instructions+=7;goto B6276e1;
case 0x6276ec:c.instructions+=6;goto B6276ec;
case 0x6276f7:c.instructions+=5;goto B6276f7;
case 0x627702:c.instructions+=4;goto B627702;
case 0x62770d:c.instructions+=3;goto B62770d;
case 0x627718:c.instructions+=2;goto B627718;
case 0x627723:c.instructions+=1;goto B627723;
case 0x627728:goto L627728;
case 0x62772c:c.instructions+=11;goto B62772c;
case 0x627732:c.instructions+=10;goto B627732;
case 0x627738:c.instructions+=9;goto B627738;
case 0x62773f:c.instructions+=8;goto B62773f;
case 0x627746:c.instructions+=7;goto B627746;
case 0x62774d:c.instructions+=6;goto B62774d;
case 0x627758:c.instructions+=5;goto B627758;
case 0x62775c:c.instructions+=4;goto B62775c;
case 0x627763:c.instructions+=3;goto B627763;
case 0x62776a:c.instructions+=2;goto B62776a;
case 0x62776d:c.instructions+=1;goto B62776d;
case 0x627774:goto L627774;
case 0x62777b:c.instructions+=6;goto B62777b;
case 0x62777e:c.instructions+=5;goto B62777e;
case 0x627780:c.instructions+=4;goto B627780;
case 0x627782:c.instructions+=3;goto B627782;
case 0x627789:c.instructions+=2;goto B627789;
case 0x627790:c.instructions+=1;goto B627790;
case 0x627792:goto L627792;
case 0x627799:c.instructions+=2;goto B627799;
case 0x62779b:c.instructions+=1;goto B62779b;
case 0x62779d:goto L62779d;
case 0x6277a4:c.instructions+=4;goto B6277a4;
case 0x6277ab:c.instructions+=3;goto B6277ab;
case 0x6277ac:c.instructions+=2;goto B6277ac;
case 0x6277b1:c.instructions+=1;goto B6277b1;
case 0x6277b6:goto L6277b6;
case 0x6277bd:c.instructions+=5;goto B6277bd;
case 0x6277c4:c.instructions+=4;goto B6277c4;
case 0x6277cb:c.instructions+=3;goto B6277cb;
case 0x6277cc:c.instructions+=2;goto B6277cc;
case 0x6277d1:c.instructions+=1;goto B6277d1;
case 0x6277d6:goto L6277d6;
case 0x6277dd:c.instructions+=5;goto B6277dd;
case 0x6277e4:c.instructions+=4;goto B6277e4;
case 0x6277e5:c.instructions+=3;goto B6277e5;
case 0x6277ec:c.instructions+=2;goto B6277ec;
case 0x6277f1:c.instructions+=1;goto B6277f1;
case 0x6277f6:goto L6277f6;
case 0x6277fd:goto L6277fd;
case 0x627804:c.instructions+=2;goto B627804;
case 0x627806:c.instructions+=1;goto B627806;
case 0x627808:goto L627808;
case 0x62780f:c.instructions+=2;goto B62780f;
case 0x627811:c.instructions+=1;goto B627811;
case 0x627813:goto L627813;
case 0x62781a:c.instructions+=5;goto B62781a;
case 0x627821:c.instructions+=4;goto B627821;
case 0x627828:c.instructions+=3;goto B627828;
case 0x627829:c.instructions+=2;goto B627829;
case 0x62782e:c.instructions+=1;goto B62782e;
case 0x627833:goto L627833;
case 0x62783a:c.instructions+=5;goto B62783a;
case 0x627841:c.instructions+=4;goto B627841;
case 0x627842:c.instructions+=3;goto B627842;
case 0x627849:c.instructions+=2;goto B627849;
case 0x62784e:c.instructions+=1;goto B62784e;
case 0x627853:goto L627853;
case 0x62785a:c.instructions+=5;goto B62785a;
case 0x627861:c.instructions+=4;goto B627861;
case 0x627862:c.instructions+=3;goto B627862;
case 0x627869:c.instructions+=2;goto B627869;
case 0x62786e:c.instructions+=1;goto B62786e;
case 0x627873:goto L627873;
case 0x62787a:goto L62787a;
case 0x627881:c.instructions+=6;goto B627881;
case 0x627884:c.instructions+=5;goto B627884;
case 0x627887:c.instructions+=4;goto B627887;
case 0x62788a:c.instructions+=3;goto B62788a;
case 0x627891:c.instructions+=2;goto B627891;
case 0x627898:c.instructions+=1;goto B627898;
case 0x62789e:goto L62789e;
case 0x6278a2:c.instructions+=2;goto B6278a2;
case 0x6278a4:c.instructions+=1;goto B6278a4;
case 0x6278aa:goto L6278aa;
case 0x6278b3:c.instructions+=2;goto B6278b3;
case 0x6278ba:c.instructions+=1;goto B6278ba;
case 0x6278c0:goto L6278c0;
case 0x6278c7:c.instructions+=3;goto B6278c7;
case 0x6278c8:c.instructions+=2;goto B6278c8;
case 0x6278c9:c.instructions+=1;goto B6278c9;
case 0x6278ce:goto L6278ce;
case 0x6278d5:c.instructions+=16;goto B6278d5;
case 0x6278dc:c.instructions+=15;goto B6278dc;
case 0x6278e3:c.instructions+=14;goto B6278e3;
case 0x6278ea:c.instructions+=13;goto B6278ea;
case 0x6278f1:c.instructions+=12;goto B6278f1;
case 0x6278f8:c.instructions+=11;goto B6278f8;
case 0x6278f9:c.instructions+=10;goto B6278f9;
case 0x627900:c.instructions+=9;goto B627900;
case 0x627907:c.instructions+=8;goto B627907;
case 0x627908:c.instructions+=7;goto B627908;
case 0x62790f:c.instructions+=6;goto B62790f;
case 0x627910:c.instructions+=5;goto B627910;
case 0x62791b:c.instructions+=4;goto B62791b;
case 0x627926:c.instructions+=3;goto B627926;
case 0x627931:c.instructions+=2;goto B627931;
case 0x62793c:c.instructions+=1;goto B62793c;
case 0x627941:goto L627941;
case 0x627948:c.instructions+=8;goto B627948;
case 0x62794f:c.instructions+=7;goto B62794f;
case 0x627956:c.instructions+=6;goto B627956;
case 0x62795d:c.instructions+=5;goto B62795d;
case 0x627964:c.instructions+=4;goto B627964;
case 0x627967:c.instructions+=3;goto B627967;
case 0x62796e:c.instructions+=2;goto B62796e;
case 0x627975:c.instructions+=1;goto B627975;
case 0x62797c:goto L62797c;
case 0x627983:c.instructions+=196;goto B627983;
case 0x62798a:c.instructions+=195;goto B62798a;
case 0x627991:c.instructions+=194;goto B627991;
case 0x627998:c.instructions+=193;goto B627998;
case 0x62799a:c.instructions+=192;goto B62799a;
case 0x6279a1:c.instructions+=191;goto B6279a1;
case 0x6279a8:c.instructions+=190;goto B6279a8;
case 0x6279aa:c.instructions+=189;goto B6279aa;
case 0x6279b1:c.instructions+=188;goto B6279b1;
case 0x6279b8:c.instructions+=187;goto B6279b8;
case 0x6279ba:c.instructions+=186;goto B6279ba;
case 0x6279be:c.instructions+=185;goto B6279be;
case 0x6279c5:c.instructions+=184;goto B6279c5;
case 0x6279cc:c.instructions+=183;goto B6279cc;
case 0x6279d3:c.instructions+=182;goto B6279d3;
case 0x6279da:c.instructions+=181;goto B6279da;
case 0x6279dc:c.instructions+=180;goto B6279dc;
case 0x6279e3:c.instructions+=179;goto B6279e3;
case 0x6279ea:c.instructions+=178;goto B6279ea;
case 0x6279ec:c.instructions+=177;goto B6279ec;
case 0x6279f3:c.instructions+=176;goto B6279f3;
case 0x6279fa:c.instructions+=175;goto B6279fa;
case 0x6279fc:c.instructions+=174;goto B6279fc;
case 0x627a00:c.instructions+=173;goto B627a00;
case 0x627a07:c.instructions+=172;goto B627a07;
case 0x627a0e:c.instructions+=171;goto B627a0e;
case 0x627a15:c.instructions+=170;goto B627a15;
case 0x627a1c:c.instructions+=169;goto B627a1c;
case 0x627a1e:c.instructions+=168;goto B627a1e;
case 0x627a25:c.instructions+=167;goto B627a25;
case 0x627a2c:c.instructions+=166;goto B627a2c;
case 0x627a2e:c.instructions+=165;goto B627a2e;
case 0x627a35:c.instructions+=164;goto B627a35;
case 0x627a3c:c.instructions+=163;goto B627a3c;
case 0x627a3e:c.instructions+=162;goto B627a3e;
case 0x627a42:c.instructions+=161;goto B627a42;
case 0x627a49:c.instructions+=160;goto B627a49;
case 0x627a50:c.instructions+=159;goto B627a50;
case 0x627a57:c.instructions+=158;goto B627a57;
case 0x627a5e:c.instructions+=157;goto B627a5e;
case 0x627a60:c.instructions+=156;goto B627a60;
case 0x627a67:c.instructions+=155;goto B627a67;
case 0x627a6e:c.instructions+=154;goto B627a6e;
case 0x627a70:c.instructions+=153;goto B627a70;
case 0x627a77:c.instructions+=152;goto B627a77;
case 0x627a7e:c.instructions+=151;goto B627a7e;
case 0x627a80:c.instructions+=150;goto B627a80;
case 0x627a84:c.instructions+=149;goto B627a84;
case 0x627a8b:c.instructions+=148;goto B627a8b;
case 0x627a92:c.instructions+=147;goto B627a92;
case 0x627a99:c.instructions+=146;goto B627a99;
case 0x627aa0:c.instructions+=145;goto B627aa0;
case 0x627aa2:c.instructions+=144;goto B627aa2;
case 0x627aa9:c.instructions+=143;goto B627aa9;
case 0x627ab0:c.instructions+=142;goto B627ab0;
case 0x627ab2:c.instructions+=141;goto B627ab2;
case 0x627ab9:c.instructions+=140;goto B627ab9;
case 0x627ac0:c.instructions+=139;goto B627ac0;
case 0x627ac2:c.instructions+=138;goto B627ac2;
case 0x627ac9:c.instructions+=137;goto B627ac9;
case 0x627ad0:c.instructions+=136;goto B627ad0;
case 0x627ad7:c.instructions+=135;goto B627ad7;
case 0x627ade:c.instructions+=134;goto B627ade;
case 0x627ae5:c.instructions+=133;goto B627ae5;
case 0x627ae7:c.instructions+=132;goto B627ae7;
case 0x627aee:c.instructions+=131;goto B627aee;
case 0x627af5:c.instructions+=130;goto B627af5;
case 0x627af7:c.instructions+=129;goto B627af7;
case 0x627afe:c.instructions+=128;goto B627afe;
case 0x627b05:c.instructions+=127;goto B627b05;
case 0x627b07:c.instructions+=126;goto B627b07;
case 0x627b0e:c.instructions+=125;goto B627b0e;
case 0x627b15:c.instructions+=124;goto B627b15;
case 0x627b1c:c.instructions+=123;goto B627b1c;
case 0x627b23:c.instructions+=122;goto B627b23;
case 0x627b2a:c.instructions+=121;goto B627b2a;
case 0x627b2c:c.instructions+=120;goto B627b2c;
case 0x627b33:c.instructions+=119;goto B627b33;
case 0x627b3a:c.instructions+=118;goto B627b3a;
case 0x627b3c:c.instructions+=117;goto B627b3c;
case 0x627b43:c.instructions+=116;goto B627b43;
case 0x627b4a:c.instructions+=115;goto B627b4a;
case 0x627b4c:c.instructions+=114;goto B627b4c;
case 0x627b53:c.instructions+=113;goto B627b53;
case 0x627b5a:c.instructions+=112;goto B627b5a;
case 0x627b61:c.instructions+=111;goto B627b61;
case 0x627b68:c.instructions+=110;goto B627b68;
case 0x627b6f:c.instructions+=109;goto B627b6f;
case 0x627b71:c.instructions+=108;goto B627b71;
case 0x627b78:c.instructions+=107;goto B627b78;
case 0x627b7f:c.instructions+=106;goto B627b7f;
case 0x627b81:c.instructions+=105;goto B627b81;
case 0x627b88:c.instructions+=104;goto B627b88;
case 0x627b8f:c.instructions+=103;goto B627b8f;
case 0x627b91:c.instructions+=102;goto B627b91;
case 0x627b98:c.instructions+=101;goto B627b98;
case 0x627b9f:c.instructions+=100;goto B627b9f;
case 0x627ba6:c.instructions+=99;goto B627ba6;
case 0x627bad:c.instructions+=98;goto B627bad;
case 0x627bb4:c.instructions+=97;goto B627bb4;
case 0x627bb6:c.instructions+=96;goto B627bb6;
case 0x627bbd:c.instructions+=95;goto B627bbd;
case 0x627bc4:c.instructions+=94;goto B627bc4;
case 0x627bc6:c.instructions+=93;goto B627bc6;
case 0x627bcd:c.instructions+=92;goto B627bcd;
case 0x627bd4:c.instructions+=91;goto B627bd4;
case 0x627bd6:c.instructions+=90;goto B627bd6;
case 0x627bdd:c.instructions+=89;goto B627bdd;
case 0x627be4:c.instructions+=88;goto B627be4;
case 0x627beb:c.instructions+=87;goto B627beb;
case 0x627bf2:c.instructions+=86;goto B627bf2;
case 0x627bf9:c.instructions+=85;goto B627bf9;
case 0x627bfb:c.instructions+=84;goto B627bfb;
case 0x627c02:c.instructions+=83;goto B627c02;
case 0x627c09:c.instructions+=82;goto B627c09;
case 0x627c0b:c.instructions+=81;goto B627c0b;
case 0x627c12:c.instructions+=80;goto B627c12;
case 0x627c19:c.instructions+=79;goto B627c19;
case 0x627c1b:c.instructions+=78;goto B627c1b;
case 0x627c22:c.instructions+=77;goto B627c22;
case 0x627c29:c.instructions+=76;goto B627c29;
case 0x627c30:c.instructions+=75;goto B627c30;
case 0x627c37:c.instructions+=74;goto B627c37;
case 0x627c3e:c.instructions+=73;goto B627c3e;
case 0x627c40:c.instructions+=72;goto B627c40;
case 0x627c47:c.instructions+=71;goto B627c47;
case 0x627c4e:c.instructions+=70;goto B627c4e;
case 0x627c50:c.instructions+=69;goto B627c50;
case 0x627c57:c.instructions+=68;goto B627c57;
case 0x627c5e:c.instructions+=67;goto B627c5e;
case 0x627c60:c.instructions+=66;goto B627c60;
case 0x627c67:c.instructions+=65;goto B627c67;
case 0x627c6e:c.instructions+=64;goto B627c6e;
case 0x627c75:c.instructions+=63;goto B627c75;
case 0x627c7c:c.instructions+=62;goto B627c7c;
case 0x627c83:c.instructions+=61;goto B627c83;
case 0x627c85:c.instructions+=60;goto B627c85;
case 0x627c8c:c.instructions+=59;goto B627c8c;
case 0x627c93:c.instructions+=58;goto B627c93;
case 0x627c95:c.instructions+=57;goto B627c95;
case 0x627c9c:c.instructions+=56;goto B627c9c;
case 0x627ca3:c.instructions+=55;goto B627ca3;
case 0x627ca5:c.instructions+=54;goto B627ca5;
case 0x627cac:c.instructions+=53;goto B627cac;
case 0x627cb3:c.instructions+=52;goto B627cb3;
case 0x627cba:c.instructions+=51;goto B627cba;
case 0x627cc1:c.instructions+=50;goto B627cc1;
case 0x627cc8:c.instructions+=49;goto B627cc8;
case 0x627cca:c.instructions+=48;goto B627cca;
case 0x627cd1:c.instructions+=47;goto B627cd1;
case 0x627cd8:c.instructions+=46;goto B627cd8;
case 0x627cda:c.instructions+=45;goto B627cda;
case 0x627ce1:c.instructions+=44;goto B627ce1;
case 0x627ce8:c.instructions+=43;goto B627ce8;
case 0x627cea:c.instructions+=42;goto B627cea;
case 0x627cf1:c.instructions+=41;goto B627cf1;
case 0x627cf8:c.instructions+=40;goto B627cf8;
case 0x627cff:c.instructions+=39;goto B627cff;
case 0x627d06:c.instructions+=38;goto B627d06;
case 0x627d0d:c.instructions+=37;goto B627d0d;
case 0x627d0f:c.instructions+=36;goto B627d0f;
case 0x627d16:c.instructions+=35;goto B627d16;
case 0x627d1d:c.instructions+=34;goto B627d1d;
case 0x627d1f:c.instructions+=33;goto B627d1f;
case 0x627d26:c.instructions+=32;goto B627d26;
case 0x627d2d:c.instructions+=31;goto B627d2d;
case 0x627d2f:c.instructions+=30;goto B627d2f;
case 0x627d36:c.instructions+=29;goto B627d36;
case 0x627d3d:c.instructions+=28;goto B627d3d;
case 0x627d44:c.instructions+=27;goto B627d44;
case 0x627d4b:c.instructions+=26;goto B627d4b;
case 0x627d52:c.instructions+=25;goto B627d52;
case 0x627d54:c.instructions+=24;goto B627d54;
case 0x627d5b:c.instructions+=23;goto B627d5b;
case 0x627d62:c.instructions+=22;goto B627d62;
case 0x627d64:c.instructions+=21;goto B627d64;
case 0x627d6b:c.instructions+=20;goto B627d6b;
case 0x627d72:c.instructions+=19;goto B627d72;
case 0x627d74:c.instructions+=18;goto B627d74;
case 0x627d7b:c.instructions+=17;goto B627d7b;
case 0x627d82:c.instructions+=16;goto B627d82;
case 0x627d89:c.instructions+=15;goto B627d89;
case 0x627d90:c.instructions+=14;goto B627d90;
case 0x627d94:c.instructions+=13;goto B627d94;
case 0x627d9b:c.instructions+=12;goto B627d9b;
case 0x627d9c:c.instructions+=11;goto B627d9c;
case 0x627da0:c.instructions+=10;goto B627da0;
case 0x627da1:c.instructions+=9;goto B627da1;
case 0x627da3:c.instructions+=8;goto B627da3;
case 0x627daa:c.instructions+=7;goto B627daa;
case 0x627db1:c.instructions+=6;goto B627db1;
case 0x627db3:c.instructions+=5;goto B627db3;
case 0x627dba:c.instructions+=4;goto B627dba;
case 0x627dc1:c.instructions+=3;goto B627dc1;
case 0x627dc3:c.instructions+=2;goto B627dc3;
case 0x627dca:c.instructions+=1;goto B627dca;
case 0x627dcf:goto L627dcf;
case 0x627dd6:c.instructions+=166;goto B627dd6;
case 0x627dda:c.instructions+=165;goto B627dda;
case 0x627ddd:c.instructions+=164;goto B627ddd;
case 0x627de1:c.instructions+=163;goto B627de1;
case 0x627de3:c.instructions+=162;goto B627de3;
case 0x627de5:c.instructions+=161;goto B627de5;
case 0x627de9:c.instructions+=160;goto B627de9;
case 0x627dec:c.instructions+=159;goto B627dec;
case 0x627dee:c.instructions+=158;goto B627dee;
case 0x627df2:c.instructions+=157;goto B627df2;
case 0x627df5:c.instructions+=156;goto B627df5;
case 0x627df7:c.instructions+=155;goto B627df7;
case 0x627dfb:c.instructions+=154;goto B627dfb;
case 0x627dff:c.instructions+=153;goto B627dff;
case 0x627e02:c.instructions+=152;goto B627e02;
case 0x627e06:c.instructions+=151;goto B627e06;
case 0x627e09:c.instructions+=150;goto B627e09;
case 0x627e0b:c.instructions+=149;goto B627e0b;
case 0x627e0f:c.instructions+=148;goto B627e0f;
case 0x627e12:c.instructions+=147;goto B627e12;
case 0x627e14:c.instructions+=146;goto B627e14;
case 0x627e18:c.instructions+=145;goto B627e18;
case 0x627e1b:c.instructions+=144;goto B627e1b;
case 0x627e1d:c.instructions+=143;goto B627e1d;
case 0x627e21:c.instructions+=142;goto B627e21;
case 0x627e25:c.instructions+=141;goto B627e25;
case 0x627e28:c.instructions+=140;goto B627e28;
case 0x627e2c:c.instructions+=139;goto B627e2c;
case 0x627e2f:c.instructions+=138;goto B627e2f;
case 0x627e31:c.instructions+=137;goto B627e31;
case 0x627e35:c.instructions+=136;goto B627e35;
case 0x627e38:c.instructions+=135;goto B627e38;
case 0x627e3a:c.instructions+=134;goto B627e3a;
case 0x627e3e:c.instructions+=133;goto B627e3e;
case 0x627e41:c.instructions+=132;goto B627e41;
case 0x627e43:c.instructions+=131;goto B627e43;
case 0x627e4a:c.instructions+=130;goto B627e4a;
case 0x627e4e:c.instructions+=129;goto B627e4e;
case 0x627e51:c.instructions+=128;goto B627e51;
case 0x627e55:c.instructions+=127;goto B627e55;
case 0x627e58:c.instructions+=126;goto B627e58;
case 0x627e5a:c.instructions+=125;goto B627e5a;
case 0x627e5e:c.instructions+=124;goto B627e5e;
case 0x627e61:c.instructions+=123;goto B627e61;
case 0x627e63:c.instructions+=122;goto B627e63;
case 0x627e67:c.instructions+=121;goto B627e67;
case 0x627e6a:c.instructions+=120;goto B627e6a;
case 0x627e6c:c.instructions+=119;goto B627e6c;
case 0x627e73:c.instructions+=118;goto B627e73;
case 0x627e77:c.instructions+=117;goto B627e77;
case 0x627e79:c.instructions+=116;goto B627e79;
case 0x627e7d:c.instructions+=115;goto B627e7d;
case 0x627e80:c.instructions+=114;goto B627e80;
case 0x627e82:c.instructions+=113;goto B627e82;
case 0x627e86:c.instructions+=112;goto B627e86;
case 0x627e89:c.instructions+=111;goto B627e89;
case 0x627e8b:c.instructions+=110;goto B627e8b;
case 0x627e8f:c.instructions+=109;goto B627e8f;
case 0x627e92:c.instructions+=108;goto B627e92;
case 0x627e94:c.instructions+=107;goto B627e94;
case 0x627e9b:c.instructions+=106;goto B627e9b;
case 0x627e9f:c.instructions+=105;goto B627e9f;
case 0x627ea2:c.instructions+=104;goto B627ea2;
case 0x627ea6:c.instructions+=103;goto B627ea6;
case 0x627ea9:c.instructions+=102;goto B627ea9;
case 0x627eab:c.instructions+=101;goto B627eab;
case 0x627eaf:c.instructions+=100;goto B627eaf;
case 0x627eb2:c.instructions+=99;goto B627eb2;
case 0x627eb4:c.instructions+=98;goto B627eb4;
case 0x627eb8:c.instructions+=97;goto B627eb8;
case 0x627ebb:c.instructions+=96;goto B627ebb;
case 0x627ebd:c.instructions+=95;goto B627ebd;
case 0x627ec4:c.instructions+=94;goto B627ec4;
case 0x627ec8:c.instructions+=93;goto B627ec8;
case 0x627ecb:c.instructions+=92;goto B627ecb;
case 0x627ecf:c.instructions+=91;goto B627ecf;
case 0x627ed2:c.instructions+=90;goto B627ed2;
case 0x627ed4:c.instructions+=89;goto B627ed4;
case 0x627ed8:c.instructions+=88;goto B627ed8;
case 0x627edb:c.instructions+=87;goto B627edb;
case 0x627edd:c.instructions+=86;goto B627edd;
case 0x627ee1:c.instructions+=85;goto B627ee1;
case 0x627ee4:c.instructions+=84;goto B627ee4;
case 0x627ee6:c.instructions+=83;goto B627ee6;
case 0x627eed:c.instructions+=82;goto B627eed;
case 0x627ef1:c.instructions+=81;goto B627ef1;
case 0x627ef4:c.instructions+=80;goto B627ef4;
case 0x627ef8:c.instructions+=79;goto B627ef8;
case 0x627efb:c.instructions+=78;goto B627efb;
case 0x627efd:c.instructions+=77;goto B627efd;
case 0x627f01:c.instructions+=76;goto B627f01;
case 0x627f04:c.instructions+=75;goto B627f04;
case 0x627f06:c.instructions+=74;goto B627f06;
case 0x627f0a:c.instructions+=73;goto B627f0a;
case 0x627f0d:c.instructions+=72;goto B627f0d;
case 0x627f0f:c.instructions+=71;goto B627f0f;
case 0x627f16:c.instructions+=70;goto B627f16;
case 0x627f1a:c.instructions+=69;goto B627f1a;
case 0x627f1c:c.instructions+=68;goto B627f1c;
case 0x627f20:c.instructions+=67;goto B627f20;
case 0x627f23:c.instructions+=66;goto B627f23;
case 0x627f25:c.instructions+=65;goto B627f25;
case 0x627f29:c.instructions+=64;goto B627f29;
case 0x627f2c:c.instructions+=63;goto B627f2c;
case 0x627f2e:c.instructions+=62;goto B627f2e;
case 0x627f32:c.instructions+=61;goto B627f32;
case 0x627f35:c.instructions+=60;goto B627f35;
case 0x627f37:c.instructions+=59;goto B627f37;
case 0x627f3e:c.instructions+=58;goto B627f3e;
case 0x627f42:c.instructions+=57;goto B627f42;
case 0x627f45:c.instructions+=56;goto B627f45;
case 0x627f49:c.instructions+=55;goto B627f49;
case 0x627f4c:c.instructions+=54;goto B627f4c;
case 0x627f4e:c.instructions+=53;goto B627f4e;
case 0x627f52:c.instructions+=52;goto B627f52;
case 0x627f55:c.instructions+=51;goto B627f55;
case 0x627f57:c.instructions+=50;goto B627f57;
case 0x627f5b:c.instructions+=49;goto B627f5b;
case 0x627f5e:c.instructions+=48;goto B627f5e;
case 0x627f60:c.instructions+=47;goto B627f60;
case 0x627f67:c.instructions+=46;goto B627f67;
case 0x627f6b:c.instructions+=45;goto B627f6b;
case 0x627f6e:c.instructions+=44;goto B627f6e;
case 0x627f72:c.instructions+=43;goto B627f72;
case 0x627f75:c.instructions+=42;goto B627f75;
case 0x627f77:c.instructions+=41;goto B627f77;
case 0x627f7b:c.instructions+=40;goto B627f7b;
case 0x627f7e:c.instructions+=39;goto B627f7e;
case 0x627f80:c.instructions+=38;goto B627f80;
case 0x627f84:c.instructions+=37;goto B627f84;
case 0x627f87:c.instructions+=36;goto B627f87;
case 0x627f89:c.instructions+=35;goto B627f89;
case 0x627f90:c.instructions+=34;goto B627f90;
case 0x627f94:c.instructions+=33;goto B627f94;
case 0x627f97:c.instructions+=32;goto B627f97;
case 0x627f9b:c.instructions+=31;goto B627f9b;
case 0x627f9e:c.instructions+=30;goto B627f9e;
case 0x627fa0:c.instructions+=29;goto B627fa0;
case 0x627fa4:c.instructions+=28;goto B627fa4;
case 0x627fa7:c.instructions+=27;goto B627fa7;
case 0x627fa9:c.instructions+=26;goto B627fa9;
case 0x627fad:c.instructions+=25;goto B627fad;
case 0x627fb0:c.instructions+=24;goto B627fb0;
case 0x627fb2:c.instructions+=23;goto B627fb2;
case 0x627fb9:c.instructions+=22;goto B627fb9;
case 0x627fbd:c.instructions+=21;goto B627fbd;
case 0x627fbf:c.instructions+=20;goto B627fbf;
case 0x627fc3:c.instructions+=19;goto B627fc3;
case 0x627fc6:c.instructions+=18;goto B627fc6;
case 0x627fc8:c.instructions+=17;goto B627fc8;
case 0x627fcc:c.instructions+=16;goto B627fcc;
case 0x627fcf:c.instructions+=15;goto B627fcf;
case 0x627fd1:c.instructions+=14;goto B627fd1;
case 0x627fd5:c.instructions+=13;goto B627fd5;
case 0x627fd8:c.instructions+=12;goto B627fd8;
case 0x627fda:c.instructions+=11;goto B627fda;
case 0x627fe1:c.instructions+=10;goto B627fe1;
case 0x627fe5:c.instructions+=9;goto B627fe5;
case 0x627fe8:c.instructions+=8;goto B627fe8;
case 0x627fec:c.instructions+=7;goto B627fec;
case 0x627fef:c.instructions+=6;goto B627fef;
case 0x627ff1:c.instructions+=5;goto B627ff1;
case 0x627ff5:c.instructions+=4;goto B627ff5;
case 0x627ff8:c.instructions+=3;goto B627ff8;
case 0x627ffa:c.instructions+=2;goto B627ffa;
case 0x627ffe:c.instructions+=1;goto B627ffe;
default:missing_instruction(c.pc);}
B627004:L627004:{c.instructions+=1;NFSU2_TR(0x627004);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x626f80u,626);}
}
B62700a:L62700a:{c.instructions+=1;NFSU2_TR(0x62700a);
{goto L62700e;}
}
B62700c:L62700c:{c.instructions+=1;NFSU2_TR(0x62700c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B62700e:L62700e:{c.instructions+=10;NFSU2_TR(0x62700e);
{u32 ea_=u32(u32(8021644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627014:{NFSU2_TR(0x627014);
__builtin_memmove((R+8),gp(0x8026c4),4);
}
B62701a:{NFSU2_TR(0x62701a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B627020:{NFSU2_TR(0x627020);
__builtin_memmove((R+4),gp(0x8026c0),4);
}
B627026:{NFSU2_TR(0x627026);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62702d:{NFSU2_TR(0x62702d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B627031:{NFSU2_TR(0x627031);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627035:{NFSU2_TR(0x627035);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B627037:{NFSU2_TR(0x627037);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B62703a:{NFSU2_TR(0x62703a);
if(r1(R+514)){{goto L62704b;}}
}
B62703c:L62703c:{c.instructions+=3;NFSU2_TR(0x62703c);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627042:{NFSU2_TR(0x627042);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627049:{NFSU2_TR(0x627049);
{goto L627057;}
}
B62704b:L62704b:{c.instructions+=2;NFSU2_TR(0x62704b);
__builtin_memmove((R+0),gp(0x7a668c),4);
}
B627050:{NFSU2_TR(0x627050);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627057:L627057:{c.instructions+=5;NFSU2_TR(0x627057);
{u32 ea_=u32(u32(8021648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62705d:{NFSU2_TR(0x62705d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B627063:{NFSU2_TR(0x627063);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B627065:{NFSU2_TR(0x627065);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B627068:{NFSU2_TR(0x627068);
if(r1(R+514)){{goto L627079;}}
}
B62706a:L62706a:{c.instructions+=3;NFSU2_TR(0x62706a);
{u32 ea_=u32(r4(R+8)+u32(1076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627070:{NFSU2_TR(0x627070);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627077:{NFSU2_TR(0x627077);
{goto L627086;}
}
B627079:L627079:{c.instructions+=2;NFSU2_TR(0x627079);
__builtin_memmove((R+4),gp(0x7a6690),4);
}
B62707f:{NFSU2_TR(0x62707f);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627086:L627086:{c.instructions+=5;NFSU2_TR(0x627086);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62708a:{NFSU2_TR(0x62708a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627090:{NFSU2_TR(0x627090);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B627093:{NFSU2_TR(0x627093);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62709e:{NFSU2_TR(0x62709e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L62710d;}}
}
B6270a0:L6270a0:{c.instructions+=6;NFSU2_TR(0x6270a0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6270a2:{NFSU2_TR(0x6270a2);
{u32 ea_=u32(u32(8021840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6270a8:{NFSU2_TR(0x6270a8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6270ae:{NFSU2_TR(0x6270ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6270b0:{NFSU2_TR(0x6270b0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6270b3:{NFSU2_TR(0x6270b3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6270bd;}}
}
B6270b5:L6270b5:{c.instructions+=2;NFSU2_TR(0x6270b5);
{u32 ea_=u32(u32(8021840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6270bb:{NFSU2_TR(0x6270bb);
{goto L6270cc;}
}
B6270bd:L6270bd:{c.instructions+=4;NFSU2_TR(0x6270bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6270c1:{NFSU2_TR(0x6270c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6270c4:{NFSU2_TR(0x6270c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6270c7:{NFSU2_TR(0x6270c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6270ccull));
TAIL_STATIC(0x59a420u,59a);
}
B6270cc:L6270cc:{c.instructions+=4;NFSU2_TR(0x6270cc);
{u32 ea_=u32(u32(8021844u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6270d2:{NFSU2_TR(0x6270d2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6270d4:{NFSU2_TR(0x6270d4);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6270da:{NFSU2_TR(0x6270da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6270dfull));
TAIL_STATIC(0x75bed4u,75b);
}
B6270df:L6270df:{c.instructions+=13;NFSU2_TR(0x6270df);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6270e1:{NFSU2_TR(0x6270e1);
{u32 ea_=u32(u32(8021848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6270e7:{NFSU2_TR(0x6270e7);
__builtin_memmove((R+4),(R+0),4);
}
B6270e9:{NFSU2_TR(0x6270e9);
{u32 ea_=u32(u32(8021840u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6270ef:{NFSU2_TR(0x6270ef);
w4(R+0,u32(0xb60b60b7ull));
}
B6270f4:{NFSU2_TR(0x6270f4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6270f6:{NFSU2_TR(0x6270f6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6270f8:{NFSU2_TR(0x6270f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B6270fb:{NFSU2_TR(0x6270fb);
__builtin_memmove((R+0),(R+8),4);
}
B6270fd:{NFSU2_TR(0x6270fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B627100:{NFSU2_TR(0x627100);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B627102:{NFSU2_TR(0x627102);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627109:{NFSU2_TR(0x627109);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62710d:L62710d:{c.instructions+=19;NFSU2_TR(0x62710d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B627110:{NFSU2_TR(0x627110);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627116:{NFSU2_TR(0x627116);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B627119:{NFSU2_TR(0x627119);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B627120:{NFSU2_TR(0x627120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B627123:{NFSU2_TR(0x627123);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B627126:{NFSU2_TR(0x627126);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62712d:{NFSU2_TR(0x62712d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x420ull))));
__builtin_memmove((R+4),(U+0),4);
}
B627133:{NFSU2_TR(0x627133);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62713a:{NFSU2_TR(0x62713a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B627141:{NFSU2_TR(0x627141);
u8 U[12];
w4(U+0,u32(u32(u32(0x438ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B627148:{NFSU2_TR(0x627148);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62714f:{NFSU2_TR(0x62714f);
__builtin_memmove((R+8),(R+24),4);
}
B627151:{NFSU2_TR(0x627151);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B627153:{NFSU2_TR(0x627153);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62715a:{NFSU2_TR(0x62715a);
__builtin_memmove((R+8),(R+28),4);
}
B62715c:{NFSU2_TR(0x62715c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B62715e:{NFSU2_TR(0x62715e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B627160:{NFSU2_TR(0x627160);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627164:L627164:{c.instructions+=12;NFSU2_TR(0x627164);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B62716a:{NFSU2_TR(0x62716a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B627171:{NFSU2_TR(0x627171);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B627173:{NFSU2_TR(0x627173);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627177:{NFSU2_TR(0x627177);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62717e:{NFSU2_TR(0x62717e);
{u32 ea_=u32(r4(R+0)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627181:{NFSU2_TR(0x627181);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B627183:{NFSU2_TR(0x627183);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627187:{NFSU2_TR(0x627187);
w4(R+8,u32(0x3f800000ull));
}
B62718c:{NFSU2_TR(0x62718c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627190:{NFSU2_TR(0x627190);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627197:{NFSU2_TR(0x627197);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6271a2;}}
}
B627199:L627199:{c.instructions+=2;NFSU2_TR(0x627199);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6271a0:{NFSU2_TR(0x6271a0);
{goto L6271a9;}
}
B6271a2:L6271a2:{c.instructions+=1;NFSU2_TR(0x6271a2);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6271a9:L6271a9:{c.instructions+=5;NFSU2_TR(0x6271a9);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6271ad:{NFSU2_TR(0x6271ad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6271b3:{NFSU2_TR(0x6271b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6271b5:{NFSU2_TR(0x6271b5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6271b8:{NFSU2_TR(0x6271b8);
if(r1(R+514)){{goto L6271c5;}}
}
B6271ba:L6271ba:{c.instructions+=2;NFSU2_TR(0x6271ba);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6271c1:{NFSU2_TR(0x6271c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6271c5:L6271c5:{c.instructions+=76;NFSU2_TR(0x6271c5);
u8 U[16];
w4(U+0,u32(u32(u32(0x200ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6271cc:{NFSU2_TR(0x6271cc);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6271ce:{NFSU2_TR(0x6271ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6271d0:{NFSU2_TR(0x6271d0);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6271d4:{NFSU2_TR(0x6271d4);
u8 U[16];
w4(U+0,u32(u32(u32(0x204ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6271db:{NFSU2_TR(0x6271db);
u8 U[16];
w4(U+0,u32(u32(u32(0x208ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6271e2:{NFSU2_TR(0x6271e2);
u8 U[16];
w4(U+0,u32(u32(u32(0x20cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6271e9:{NFSU2_TR(0x6271e9);
u8 U[16];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6271f0:{NFSU2_TR(0x6271f0);
u8 U[16];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6271f7:{NFSU2_TR(0x6271f7);
u8 U[16];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6271fe:{NFSU2_TR(0x6271fe);
u8 U[16];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627205:{NFSU2_TR(0x627205);
u8 U[16];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62720c:{NFSU2_TR(0x62720c);
u8 U[16];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627213:{NFSU2_TR(0x627213);
u8 U[16];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62721a:{NFSU2_TR(0x62721a);
u8 U[16];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627221:{NFSU2_TR(0x627221);
u8 U[16];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627228:{NFSU2_TR(0x627228);
u8 U[16];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62722f:{NFSU2_TR(0x62722f);
u8 U[16];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627236:{NFSU2_TR(0x627236);
u8 U[16];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62723d:{NFSU2_TR(0x62723d);
u8 U[16];
w4(U+0,u32(u32(u32(0x3d0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627244:{NFSU2_TR(0x627244);
u8 U[16];
w4(U+0,u32(u32(u32(0x3d4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62724b:{NFSU2_TR(0x62724b);
u8 U[16];
w4(U+0,u32(u32(u32(0x3d8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627252:{NFSU2_TR(0x627252);
u8 U[16];
w4(U+0,u32(u32(u32(0x3dcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627259:{NFSU2_TR(0x627259);
u8 U[16];
w4(U+0,u32(u32(u32(0x3e0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627260:{NFSU2_TR(0x627260);
u8 U[16];
w4(U+0,u32(u32(u32(0x3e4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627267:{NFSU2_TR(0x627267);
u8 U[16];
w4(U+0,u32(u32(u32(0x3e8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62726e:{NFSU2_TR(0x62726e);
u8 U[16];
w4(U+0,u32(u32(u32(0x3ecull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627275:{NFSU2_TR(0x627275);
u8 U[16];
w4(U+0,u32(u32(u32(0x3f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62727c:{NFSU2_TR(0x62727c);
u8 U[16];
w4(U+0,u32(u32(u32(0x3f4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627283:{NFSU2_TR(0x627283);
u8 U[16];
w4(U+0,u32(u32(u32(0x3f8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62728a:{NFSU2_TR(0x62728a);
u8 U[16];
w4(U+0,u32(u32(u32(0x3fcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627291:{NFSU2_TR(0x627291);
u8 U[16];
w4(U+0,u32(u32(u32(0x400ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627298:{NFSU2_TR(0x627298);
u8 U[16];
w4(U+0,u32(u32(u32(0x404ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62729f:{NFSU2_TR(0x62729f);
u8 U[16];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272a6:{NFSU2_TR(0x6272a6);
u8 U[16];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272ad:{NFSU2_TR(0x6272ad);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272b4:{NFSU2_TR(0x6272b4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272bb:{NFSU2_TR(0x6272bb);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272c2:{NFSU2_TR(0x6272c2);
u8 U[16];
w4(U+0,u32(u32(u32(0x4dcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272c9:{NFSU2_TR(0x6272c9);
u8 U[16];
w4(U+0,u32(u32(u32(0x4e0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272d0:{NFSU2_TR(0x6272d0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4e4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272d7:{NFSU2_TR(0x6272d7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4e8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272de:{NFSU2_TR(0x6272de);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ecull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272e5:{NFSU2_TR(0x6272e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x4f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272ec:{NFSU2_TR(0x6272ec);
u8 U[16];
w4(U+0,u32(u32(u32(0x4f4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272f3:{NFSU2_TR(0x6272f3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4f8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6272fa:{NFSU2_TR(0x6272fa);
u8 U[16];
w4(U+0,u32(u32(u32(0x4fcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627301:{NFSU2_TR(0x627301);
u8 U[16];
w4(U+0,u32(u32(u32(0x500ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627308:{NFSU2_TR(0x627308);
u8 U[16];
w4(U+0,u32(u32(u32(0x504ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62730f:{NFSU2_TR(0x62730f);
u8 U[16];
w4(U+0,u32(u32(u32(0x508ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627316:{NFSU2_TR(0x627316);
u8 U[16];
w4(U+0,u32(u32(u32(0x50cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62731d:{NFSU2_TR(0x62731d);
u8 U[16];
w4(U+0,u32(u32(u32(0x5d0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627324:{NFSU2_TR(0x627324);
u8 U[16];
w4(U+0,u32(u32(u32(0x5d4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62732b:{NFSU2_TR(0x62732b);
u8 U[16];
w4(U+0,u32(u32(u32(0x5d8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627332:{NFSU2_TR(0x627332);
u8 U[16];
w4(U+0,u32(u32(u32(0x5dcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627339:{NFSU2_TR(0x627339);
u8 U[16];
w4(U+0,u32(u32(u32(0x5e0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627340:{NFSU2_TR(0x627340);
u8 U[16];
w4(U+0,u32(u32(u32(0x5e4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627347:{NFSU2_TR(0x627347);
u8 U[16];
w4(U+0,u32(u32(u32(0x5e8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62734e:{NFSU2_TR(0x62734e);
u8 U[16];
w4(U+0,u32(u32(u32(0x5ecull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627355:{NFSU2_TR(0x627355);
u8 U[16];
w4(U+0,u32(u32(u32(0x5f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62735c:{NFSU2_TR(0x62735c);
u8 U[16];
w4(U+0,u32(u32(u32(0x5f4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627363:{NFSU2_TR(0x627363);
u8 U[16];
w4(U+0,u32(u32(u32(0x5f8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62736a:{NFSU2_TR(0x62736a);
u8 U[16];
w4(U+0,u32(u32(u32(0x5fcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627371:{NFSU2_TR(0x627371);
u8 U[16];
w4(U+0,u32(u32(u32(0x600ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627378:{NFSU2_TR(0x627378);
u8 U[16];
w4(U+0,u32(u32(u32(0x604ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62737f:{NFSU2_TR(0x62737f);
u8 U[16];
w4(U+0,u32(u32(u32(0x608ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627386:{NFSU2_TR(0x627386);
u8 U[16];
w4(U+0,u32(u32(u32(0x60cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B62738d:{NFSU2_TR(0x62738d);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B627394:{NFSU2_TR(0x627394);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B627396:{NFSU2_TR(0x627396);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B627398:{NFSU2_TR(0x627398);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62739f:{NFSU2_TR(0x62739f);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6273a1:{NFSU2_TR(0x6273a1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6273a7:{NFSU2_TR(0x6273a7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6273a9:{NFSU2_TR(0x6273a9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6273ac:{NFSU2_TR(0x6273ac);
if(r1(R+514)){{goto L6273b4;}}
}
B6273ae:L6273ae:{c.instructions+=3;NFSU2_TR(0x6273ae);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6273b0:{NFSU2_TR(0x6273b0);
__asm__ volatile(".byte 0xd8,0xc4":::"memory");
}
B6273b2:{NFSU2_TR(0x6273b2);
{goto L6273b8;}
}
B6273b4:L6273b4:{c.instructions+=2;NFSU2_TR(0x6273b4);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6273b6:{NFSU2_TR(0x6273b6);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B6273b8:L6273b8:{c.instructions+=7;NFSU2_TR(0x6273b8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6273ba:{NFSU2_TR(0x6273ba);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(1028u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6273c1:{NFSU2_TR(0x6273c1);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B6273c3:{NFSU2_TR(0x6273c3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6273c9:{NFSU2_TR(0x6273c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6273cb:{NFSU2_TR(0x6273cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6273ce:{NFSU2_TR(0x6273ce);
if(r1(R+514)){{goto L6273d9;}}
}
B6273d0:L6273d0:{c.instructions+=2;NFSU2_TR(0x6273d0);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6273d7:{NFSU2_TR(0x6273d7);
{goto L6273e0;}
}
B6273d9:L6273d9:{c.instructions+=1;NFSU2_TR(0x6273d9);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6273e0:L6273e0:{c.instructions+=7;NFSU2_TR(0x6273e0);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(1540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6273e7:{NFSU2_TR(0x6273e7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6273e9:{NFSU2_TR(0x6273e9);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6273f0:{NFSU2_TR(0x6273f0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6273f6:{NFSU2_TR(0x6273f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6273f8:{NFSU2_TR(0x6273f8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6273fb:{NFSU2_TR(0x6273fb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L627406;}}
}
B6273fd:L6273fd:{c.instructions+=2;NFSU2_TR(0x6273fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6273ff:{NFSU2_TR(0x6273ff);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627406:L627406:{c.instructions+=5;NFSU2_TR(0x627406);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B627408:{NFSU2_TR(0x627408);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B62740e:{NFSU2_TR(0x62740e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B627410:{NFSU2_TR(0x627410);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B627413:{NFSU2_TR(0x627413);
if(r1(R+514)){{goto L62741b;}}
}
B627415:L627415:{c.instructions+=3;NFSU2_TR(0x627415);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627417:{NFSU2_TR(0x627417);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B627419:{NFSU2_TR(0x627419);
{goto L627423;}
}
B62741b:L62741b:{c.instructions+=4;NFSU2_TR(0x62741b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B62741d:{NFSU2_TR(0x62741d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B62741f:{NFSU2_TR(0x62741f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B627421:{NFSU2_TR(0x627421);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B627423:L627423:{c.instructions+=3;NFSU2_TR(0x627423);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B627429:{NFSU2_TR(0x627429);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(1284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627430:{NFSU2_TR(0x627430);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L627462;}}
}
B627432:L627432:{c.instructions+=9;NFSU2_TR(0x627432);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(1032u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627439:{NFSU2_TR(0x627439);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B62743b:{NFSU2_TR(0x62743b);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(1032u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627442:{NFSU2_TR(0x627442);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(1544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627449:{NFSU2_TR(0x627449);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B62744b:{NFSU2_TR(0x62744b);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(1544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627452:{NFSU2_TR(0x627452);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(1288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627459:{NFSU2_TR(0x627459);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B62745b:{NFSU2_TR(0x62745b);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(1288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627462:L627462:{c.instructions+=15;NFSU2_TR(0x627462);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B627469:{NFSU2_TR(0x627469);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B627470:{NFSU2_TR(0x627470);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B627477:{NFSU2_TR(0x627477);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62747b:{NFSU2_TR(0x62747b);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B627481:{NFSU2_TR(0x627481);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B627488:{NFSU2_TR(0x627488);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B627490:{NFSU2_TR(0x627490);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B627497:{NFSU2_TR(0x627497);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B62749a:{NFSU2_TR(0x62749a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B62749d:{NFSU2_TR(0x62749d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B6274a0:{NFSU2_TR(0x6274a0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6274a6:{NFSU2_TR(0x6274a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6274ad:{NFSU2_TR(0x6274ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6274b4:{NFSU2_TR(0x6274b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x627164u);}goto L627164;}}
}
B6274ba:L6274ba:{c.instructions+=14;NFSU2_TR(0x6274ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6274be:{NFSU2_TR(0x6274be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6274c0:{NFSU2_TR(0x6274c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6274c3:{NFSU2_TR(0x6274c3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6274c5:{NFSU2_TR(0x6274c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x855ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B6274cc:{NFSU2_TR(0x6274cc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6274ce:{NFSU2_TR(0x6274ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1b58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6274d4:{NFSU2_TR(0x6274d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6274d8:{NFSU2_TR(0x6274d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6274df:{NFSU2_TR(0x6274df);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6274e3:{NFSU2_TR(0x6274e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6274ea:{NFSU2_TR(0x6274ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6274f1:{NFSU2_TR(0x6274f1);
u8 U[5];
w4(U+0,u32(u32(u32(0xf3ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6274f8:{NFSU2_TR(0x6274f8);
if(r1(R+518)){{goto L627502;}}
}
B6274fa:L6274fa:{c.instructions+=1;NFSU2_TR(0x6274fa);
u8 U[5];
w4(U+0,u32(u32(u32(0xf3ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B627502:L627502:{c.instructions+=2;NFSU2_TR(0x627502);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B627504:{NFSU2_TR(0x627504);
if(r1(R+518)){TAIL_STATIC(0x62df66u,62d);}
}
B62750a:L62750a:{c.instructions+=2;NFSU2_TR(0x62750a);
u8 U[16];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B62750f:{NFSU2_TR(0x62750f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x62df66u,62d);}
}
B627515:L627515:{c.instructions+=2;NFSU2_TR(0x627515);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627517:{NFSU2_TR(0x627517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62751cull));
TAIL_STATIC(0x401e80u,401);
}
B62751c:L62751c:{c.instructions+=3;NFSU2_TR(0x62751c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62751e:{NFSU2_TR(0x62751e);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627525:{NFSU2_TR(0x627525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62752aull));
TAIL_STATIC(0x401e80u,401);
}
B62752a:L62752a:{c.instructions+=3;NFSU2_TR(0x62752a);
u8 U[4];
w4(U+0,u32(0x700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62752f:{NFSU2_TR(0x62752f);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627536:{NFSU2_TR(0x627536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62753bull));
TAIL_STATIC(0x401e30u,401);
}
B62753b:L62753b:{c.instructions+=3;NFSU2_TR(0x62753b);
u8 U[4];
w4(U+0,u32(0x700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627540:{NFSU2_TR(0x627540);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627547:{NFSU2_TR(0x627547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62754cull));
TAIL_STATIC(0x401e30u,401);
}
B62754c:L62754c:{c.instructions+=5;NFSU2_TR(0x62754c);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627553:{NFSU2_TR(0x627553);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62755a:{NFSU2_TR(0x62755a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B62755d:{NFSU2_TR(0x62755d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62755f:{NFSU2_TR(0x62755f);
if(r1(R+518)){TAIL_STATIC(0x62df66u,62d);}
}
B627565:L627565:{c.instructions+=3;NFSU2_TR(0x627565);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62756c:{NFSU2_TR(0x62756c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62756e:{NFSU2_TR(0x62756e);
if(r1(R+518)){TAIL_STATIC(0x62df66u,62d);}
}
B627574:L627574:{c.instructions+=3;NFSU2_TR(0x627574);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62757b:{NFSU2_TR(0x62757b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62757d:{NFSU2_TR(0x62757d);
if(r1(R+518)){TAIL_STATIC(0x62df66u,62d);}
}
B627583:L627583:{c.instructions+=3;NFSU2_TR(0x627583);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62758a:{NFSU2_TR(0x62758a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62758c:{NFSU2_TR(0x62758c);
if(r1(R+518)){TAIL_STATIC(0x62df66u,62d);}
}
B627592:L627592:{c.instructions+=5;NFSU2_TR(0x627592);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B627596:{NFSU2_TR(0x627596);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2d78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B62759c:{NFSU2_TR(0x62759c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B62759e:{NFSU2_TR(0x62759e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6275a0:{NFSU2_TR(0x6275a0);
if(r1(R+518)){{goto L6275ba;}}
}
B6275a2:L6275a2:{c.instructions+=3;NFSU2_TR(0x6275a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6275a4:{NFSU2_TR(0x6275a4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6275a6:{NFSU2_TR(0x6275a6);
if(r1(R+518)){{goto L6275b0;}}
}
B6275a8:L6275a8:{c.instructions+=2;NFSU2_TR(0x6275a8);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6275ae:{NFSU2_TR(0x6275ae);
if(r1(R+518)){{goto L6275ba;}}
}
B6275b0:L6275b0:{c.instructions+=2;NFSU2_TR(0x6275b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6275b8:{NFSU2_TR(0x6275b8);
{goto L6275be;}
}
B6275ba:L6275ba:{c.instructions+=1;NFSU2_TR(0x6275ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6275be:L6275be:{c.instructions+=3;NFSU2_TR(0x6275be);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2d98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6275c4:{NFSU2_TR(0x6275c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6275c6:{NFSU2_TR(0x6275c6);
if(r1(R+518)){{goto L6275e4;}}
}
B6275c8:L6275c8:{c.instructions+=3;NFSU2_TR(0x6275c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6275ca:{NFSU2_TR(0x6275ca);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6275cc:{NFSU2_TR(0x6275cc);
if(r1(R+518)){{goto L6275d7;}}
}
B6275ce:L6275ce:{c.instructions+=2;NFSU2_TR(0x6275ce);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6275d5:{NFSU2_TR(0x6275d5);
if(r1(R+518)){{goto L6275e4;}}
}
B6275d7:L6275d7:{c.instructions+=2;NFSU2_TR(0x6275d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6275e2:{NFSU2_TR(0x6275e2);
{goto L6275eb;}
}
B6275e4:L6275e4:{c.instructions+=1;NFSU2_TR(0x6275e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6275eb:L6275eb:{c.instructions+=3;NFSU2_TR(0x6275eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2db8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6275f1:{NFSU2_TR(0x6275f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6275f3:{NFSU2_TR(0x6275f3);
if(r1(R+518)){{goto L62760e;}}
}
B6275f5:L6275f5:{c.instructions+=3;NFSU2_TR(0x6275f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6275f7:{NFSU2_TR(0x6275f7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6275f9:{NFSU2_TR(0x6275f9);
if(r1(R+518)){{goto L627604;}}
}
B6275fb:L6275fb:{c.instructions+=2;NFSU2_TR(0x6275fb);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3f6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B627602:{NFSU2_TR(0x627602);
if(r1(R+518)){{goto L62760e;}}
}
B627604:L627604:{c.instructions+=2;NFSU2_TR(0x627604);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62760c:{NFSU2_TR(0x62760c);
{goto L627612;}
}
B62760e:L62760e:{c.instructions+=1;NFSU2_TR(0x62760e);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627612:L627612:{c.instructions+=3;NFSU2_TR(0x627612);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2dd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B627618:{NFSU2_TR(0x627618);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B62761a:{NFSU2_TR(0x62761a);
if(r1(R+518)){{goto L627639;}}
}
B62761c:L62761c:{c.instructions+=3;NFSU2_TR(0x62761c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B62761e:{NFSU2_TR(0x62761e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B627620:{NFSU2_TR(0x627620);
if(r1(R+518)){{goto L62762c;}}
}
B627622:L627622:{c.instructions+=3;NFSU2_TR(0x627622);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3f7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B627628:{NFSU2_TR(0x627628);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B62762a:{NFSU2_TR(0x62762a);
if(r1(R+518)){{goto L627639;}}
}
B62762c:L62762c:{c.instructions+=2;NFSU2_TR(0x62762c);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B627637:{NFSU2_TR(0x627637);
{goto L627640;}
}
B627639:L627639:{c.instructions+=1;NFSU2_TR(0x627639);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627640:L627640:{c.instructions+=4;NFSU2_TR(0x627640);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B627647:{NFSU2_TR(0x627647);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B62764a:{NFSU2_TR(0x62764a);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627651:{NFSU2_TR(0x627651);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L62765e;}}
}
B627653:L627653:{c.instructions+=1;NFSU2_TR(0x627653);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62765e:L62765e:{c.instructions+=22;NFSU2_TR(0x62765e);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627663:{NFSU2_TR(0x627663);
u8 U[4];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B62766a:{NFSU2_TR(0x62766a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62766b:{NFSU2_TR(0x62766b);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B627672:{NFSU2_TR(0x627672);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627673:{NFSU2_TR(0x627673);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62767e:{NFSU2_TR(0x62767e);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B627689:{NFSU2_TR(0x627689);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B627694:{NFSU2_TR(0x627694);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62769f:{NFSU2_TR(0x62769f);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6276aa:{NFSU2_TR(0x6276aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6276b5:{NFSU2_TR(0x6276b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6276c0:{NFSU2_TR(0x6276c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6276cb:{NFSU2_TR(0x6276cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6276d6:{NFSU2_TR(0x6276d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6276e1:{NFSU2_TR(0x6276e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6276ec:{NFSU2_TR(0x6276ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6276f7:{NFSU2_TR(0x6276f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B627702:{NFSU2_TR(0x627702);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62770d:{NFSU2_TR(0x62770d);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B627718:{NFSU2_TR(0x627718);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B627723:{NFSU2_TR(0x627723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x627728ull));
TAIL_STATIC(0x5bae60u,5ba);
}
B627728:L627728:{c.instructions+=12;NFSU2_TR(0x627728);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62772c:{NFSU2_TR(0x62772c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B627732:{NFSU2_TR(0x627732);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B627738:{NFSU2_TR(0x627738);
u8 U[8];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62773f:{NFSU2_TR(0x62773f);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B627746:{NFSU2_TR(0x627746);
u8 U[12];
w4(U+0,u32(u32(u32(0x1b68ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B62774d:{NFSU2_TR(0x62774d);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B627758:{NFSU2_TR(0x627758);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62775c:{NFSU2_TR(0x62775c);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627763:{NFSU2_TR(0x627763);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62776a:{NFSU2_TR(0x62776a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B62776d:{NFSU2_TR(0x62776d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627774:L627774:{c.instructions+=7;NFSU2_TR(0x627774);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62777b:{NFSU2_TR(0x62777b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62777e:{NFSU2_TR(0x62777e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B627780:{NFSU2_TR(0x627780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B627782:{NFSU2_TR(0x627782);
u8 U[16];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627789:{NFSU2_TR(0x627789);
u8 U[16];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B627790:{NFSU2_TR(0x627790);
if(r1(R+518)){{goto L6277fd;}}
}
B627792:L627792:{c.instructions+=3;NFSU2_TR(0x627792);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B627799:{NFSU2_TR(0x627799);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62779b:{NFSU2_TR(0x62779b);
if(r1(R+518)){{goto L6277fd;}}
}
B62779d:L62779d:{c.instructions+=5;NFSU2_TR(0x62779d);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6277a4:{NFSU2_TR(0x6277a4);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6277ab:{NFSU2_TR(0x6277ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6277ac:{NFSU2_TR(0x6277ac);
u8 U[4];
w4(U+0,u32(0x22719fa9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6277b1:{NFSU2_TR(0x6277b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6277b6ull));
TAIL_STATIC(0x48d860u,48d);
}
B6277b6:L6277b6:{c.instructions+=6;NFSU2_TR(0x6277b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6277bd:{NFSU2_TR(0x6277bd);
u8 U[16];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6277c4:{NFSU2_TR(0x6277c4);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6277cb:{NFSU2_TR(0x6277cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6277cc:{NFSU2_TR(0x6277cc);
u8 U[4];
w4(U+0,u32(0xfd102a92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6277d1:{NFSU2_TR(0x6277d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6277d6ull));
TAIL_STATIC(0x48d860u,48d);
}
B6277d6:L6277d6:{c.instructions+=6;NFSU2_TR(0x6277d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6277dd:{NFSU2_TR(0x6277dd);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6277e4:{NFSU2_TR(0x6277e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6277e5:{NFSU2_TR(0x6277e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x194ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6277ec:{NFSU2_TR(0x6277ec);
u8 U[4];
w4(U+0,u32(0x12049251ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6277f1:{NFSU2_TR(0x6277f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6277f6ull));
TAIL_STATIC(0x48d860u,48d);
}
B6277f6:L6277f6:{c.instructions+=1;NFSU2_TR(0x6277f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6277fd:L6277fd:{c.instructions+=3;NFSU2_TR(0x6277fd);
u8 U[16];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B627804:{NFSU2_TR(0x627804);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B627806:{NFSU2_TR(0x627806);
if(r1(R+518)){{goto L62787a;}}
}
B627808:L627808:{c.instructions+=3;NFSU2_TR(0x627808);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B62780f:{NFSU2_TR(0x62780f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B627811:{NFSU2_TR(0x627811);
if(r1(R+518)){{goto L62787a;}}
}
B627813:L627813:{c.instructions+=6;NFSU2_TR(0x627813);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62781a:{NFSU2_TR(0x62781a);
u8 U[16];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B627821:{NFSU2_TR(0x627821);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B627828:{NFSU2_TR(0x627828);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627829:{NFSU2_TR(0x627829);
u8 U[4];
w4(U+0,u32(0x22719fa9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62782e:{NFSU2_TR(0x62782e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x627833ull));
TAIL_STATIC(0x48d860u,48d);
}
B627833:L627833:{c.instructions+=6;NFSU2_TR(0x627833);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62783a:{NFSU2_TR(0x62783a);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B627841:{NFSU2_TR(0x627841);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627842:{NFSU2_TR(0x627842);
u8 U[16];
w4(U+0,u32(u32(u32(0x194ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B627849:{NFSU2_TR(0x627849);
u8 U[4];
w4(U+0,u32(0xfd102a92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62784e:{NFSU2_TR(0x62784e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x627853ull));
TAIL_STATIC(0x48d860u,48d);
}
B627853:L627853:{c.instructions+=6;NFSU2_TR(0x627853);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62785a:{NFSU2_TR(0x62785a);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B627861:{NFSU2_TR(0x627861);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627862:{NFSU2_TR(0x627862);
u8 U[16];
w4(U+0,u32(u32(u32(0x194ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B627869:{NFSU2_TR(0x627869);
u8 U[4];
w4(U+0,u32(0x12049251ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62786e:{NFSU2_TR(0x62786e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x627873ull));
TAIL_STATIC(0x48d860u,48d);
}
B627873:L627873:{c.instructions+=1;NFSU2_TR(0x627873);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62787a:L62787a:{c.instructions+=7;NFSU2_TR(0x62787a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B627881:{NFSU2_TR(0x627881);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B627884:{NFSU2_TR(0x627884);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B627887:{NFSU2_TR(0x627887);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B62788a:{NFSU2_TR(0x62788a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627891:{NFSU2_TR(0x627891);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627898:{NFSU2_TR(0x627898);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x627774u);}goto L627774;}}
}
B62789e:L62789e:{c.instructions+=3;NFSU2_TR(0x62789e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6278a2:{NFSU2_TR(0x6278a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6278a4:{NFSU2_TR(0x6278a4);
if(r1(R+518)){TAIL_STATIC(0x6295a0u,629);}
}
B6278aa:L6278aa:{c.instructions+=3;NFSU2_TR(0x6278aa);
u8 U[14];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6278b3:{NFSU2_TR(0x6278b3);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6278ba:{NFSU2_TR(0x6278ba);
if(r1(R+518)){{goto L62797c;}}
}
B6278c0:L6278c0:{c.instructions+=4;NFSU2_TR(0x6278c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x990ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6278c7:{NFSU2_TR(0x6278c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6278c8:{NFSU2_TR(0x6278c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6278c9:{NFSU2_TR(0x6278c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6278ceull));
TAIL_STATIC(0x4012b0u,401);
}
B6278ce:L6278ce:{c.instructions+=17;NFSU2_TR(0x6278ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x9c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6278d5:{NFSU2_TR(0x6278d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x9ccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6278dc:{NFSU2_TR(0x6278dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x9d0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6278e3:{NFSU2_TR(0x6278e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6278ea:{NFSU2_TR(0x6278ea);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6278f1:{NFSU2_TR(0x6278f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6278f8:{NFSU2_TR(0x6278f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6278f9:{NFSU2_TR(0x6278f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x99cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B627900:{NFSU2_TR(0x627900);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627907:{NFSU2_TR(0x627907);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627908:{NFSU2_TR(0x627908);
u8 U[4];
w4(U+0,u32(u32(u32(0x9a0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B62790f:{NFSU2_TR(0x62790f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627910:{NFSU2_TR(0x627910);
u8 U[8];
w4(U+0,u32(u32(u32(0x9d4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62791b:{NFSU2_TR(0x62791b);
u8 U[8];
w4(U+0,u32(u32(u32(0x9d8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B627926:{NFSU2_TR(0x627926);
u8 U[8];
w4(U+0,u32(u32(u32(0x9dcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B627931:{NFSU2_TR(0x627931);
u8 U[8];
w4(U+0,u32(u32(u32(0x9e0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62793c:{NFSU2_TR(0x62793c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x627941ull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B627941:L627941:{c.instructions+=9;NFSU2_TR(0x627941);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B627948:{NFSU2_TR(0x627948);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62794f:{NFSU2_TR(0x62794f);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B627956:{NFSU2_TR(0x627956);
u8 U[8];
w4(U+0,u32(u32(u32(0x9d4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62795d:{NFSU2_TR(0x62795d);
u8 U[4];
w4(U+0,u32(u32(u32(0x9a4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B627964:{NFSU2_TR(0x627964);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B627967:{NFSU2_TR(0x627967);
u8 U[8];
w4(U+0,u32(u32(u32(0x9c4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62796e:{NFSU2_TR(0x62796e);
u8 U[8];
w4(U+0,u32(u32(u32(0x9c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B627975:{NFSU2_TR(0x627975);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62797c:L62797c:{c.instructions+=197;NFSU2_TR(0x62797c);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627983:{NFSU2_TR(0x627983);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62798a:{NFSU2_TR(0x62798a);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627991:{NFSU2_TR(0x627991);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627998:{NFSU2_TR(0x627998);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62799a:{NFSU2_TR(0x62799a);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6279a1:{NFSU2_TR(0x6279a1);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6279a8:{NFSU2_TR(0x6279a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6279aa:{NFSU2_TR(0x6279aa);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6279b1:{NFSU2_TR(0x6279b1);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6279b8:{NFSU2_TR(0x6279b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6279ba:{NFSU2_TR(0x6279ba);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6279be:{NFSU2_TR(0x6279be);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6279c5:{NFSU2_TR(0x6279c5);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6279cc:{NFSU2_TR(0x6279cc);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6279d3:{NFSU2_TR(0x6279d3);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6279da:{NFSU2_TR(0x6279da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6279dc:{NFSU2_TR(0x6279dc);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6279e3:{NFSU2_TR(0x6279e3);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6279ea:{NFSU2_TR(0x6279ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6279ec:{NFSU2_TR(0x6279ec);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6279f3:{NFSU2_TR(0x6279f3);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6279fa:{NFSU2_TR(0x6279fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6279fc:{NFSU2_TR(0x6279fc);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627a00:{NFSU2_TR(0x627a00);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627a07:{NFSU2_TR(0x627a07);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627a0e:{NFSU2_TR(0x627a0e);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627a15:{NFSU2_TR(0x627a15);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627a1c:{NFSU2_TR(0x627a1c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627a1e:{NFSU2_TR(0x627a1e);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627a25:{NFSU2_TR(0x627a25);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627a2c:{NFSU2_TR(0x627a2c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627a2e:{NFSU2_TR(0x627a2e);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627a35:{NFSU2_TR(0x627a35);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627a3c:{NFSU2_TR(0x627a3c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627a3e:{NFSU2_TR(0x627a3e);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627a42:{NFSU2_TR(0x627a42);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627a49:{NFSU2_TR(0x627a49);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627a50:{NFSU2_TR(0x627a50);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627a57:{NFSU2_TR(0x627a57);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627a5e:{NFSU2_TR(0x627a5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627a60:{NFSU2_TR(0x627a60);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627a67:{NFSU2_TR(0x627a67);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627a6e:{NFSU2_TR(0x627a6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627a70:{NFSU2_TR(0x627a70);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627a77:{NFSU2_TR(0x627a77);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627a7e:{NFSU2_TR(0x627a7e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627a80:{NFSU2_TR(0x627a80);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627a84:{NFSU2_TR(0x627a84);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627a8b:{NFSU2_TR(0x627a8b);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627a92:{NFSU2_TR(0x627a92);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627a99:{NFSU2_TR(0x627a99);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627aa0:{NFSU2_TR(0x627aa0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627aa2:{NFSU2_TR(0x627aa2);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627aa9:{NFSU2_TR(0x627aa9);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ab0:{NFSU2_TR(0x627ab0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627ab2:{NFSU2_TR(0x627ab2);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ab9:{NFSU2_TR(0x627ab9);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ac0:{NFSU2_TR(0x627ac0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627ac2:{NFSU2_TR(0x627ac2);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627ac9:{NFSU2_TR(0x627ac9);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ad0:{NFSU2_TR(0x627ad0);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ad7:{NFSU2_TR(0x627ad7);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ade:{NFSU2_TR(0x627ade);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ae5:{NFSU2_TR(0x627ae5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627ae7:{NFSU2_TR(0x627ae7);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627aee:{NFSU2_TR(0x627aee);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627af5:{NFSU2_TR(0x627af5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627af7:{NFSU2_TR(0x627af7);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627afe:{NFSU2_TR(0x627afe);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627b05:{NFSU2_TR(0x627b05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627b07:{NFSU2_TR(0x627b07);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627b0e:{NFSU2_TR(0x627b0e);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627b15:{NFSU2_TR(0x627b15);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627b1c:{NFSU2_TR(0x627b1c);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627b23:{NFSU2_TR(0x627b23);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627b2a:{NFSU2_TR(0x627b2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627b2c:{NFSU2_TR(0x627b2c);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627b33:{NFSU2_TR(0x627b33);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627b3a:{NFSU2_TR(0x627b3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627b3c:{NFSU2_TR(0x627b3c);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627b43:{NFSU2_TR(0x627b43);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627b4a:{NFSU2_TR(0x627b4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627b4c:{NFSU2_TR(0x627b4c);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627b53:{NFSU2_TR(0x627b53);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627b5a:{NFSU2_TR(0x627b5a);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627b61:{NFSU2_TR(0x627b61);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627b68:{NFSU2_TR(0x627b68);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627b6f:{NFSU2_TR(0x627b6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627b71:{NFSU2_TR(0x627b71);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627b78:{NFSU2_TR(0x627b78);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627b7f:{NFSU2_TR(0x627b7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627b81:{NFSU2_TR(0x627b81);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627b88:{NFSU2_TR(0x627b88);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627b8f:{NFSU2_TR(0x627b8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627b91:{NFSU2_TR(0x627b91);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627b98:{NFSU2_TR(0x627b98);
{u32 ea_=u32(r4(R+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627b9f:{NFSU2_TR(0x627b9f);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ba6:{NFSU2_TR(0x627ba6);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627bad:{NFSU2_TR(0x627bad);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627bb4:{NFSU2_TR(0x627bb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627bb6:{NFSU2_TR(0x627bb6);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627bbd:{NFSU2_TR(0x627bbd);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627bc4:{NFSU2_TR(0x627bc4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627bc6:{NFSU2_TR(0x627bc6);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627bcd:{NFSU2_TR(0x627bcd);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627bd4:{NFSU2_TR(0x627bd4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627bd6:{NFSU2_TR(0x627bd6);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627bdd:{NFSU2_TR(0x627bdd);
{u32 ea_=u32(r4(R+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627be4:{NFSU2_TR(0x627be4);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627beb:{NFSU2_TR(0x627beb);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627bf2:{NFSU2_TR(0x627bf2);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627bf9:{NFSU2_TR(0x627bf9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627bfb:{NFSU2_TR(0x627bfb);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627c02:{NFSU2_TR(0x627c02);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627c09:{NFSU2_TR(0x627c09);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627c0b:{NFSU2_TR(0x627c0b);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627c12:{NFSU2_TR(0x627c12);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627c19:{NFSU2_TR(0x627c19);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627c1b:{NFSU2_TR(0x627c1b);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627c22:{NFSU2_TR(0x627c22);
{u32 ea_=u32(r4(R+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627c29:{NFSU2_TR(0x627c29);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627c30:{NFSU2_TR(0x627c30);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627c37:{NFSU2_TR(0x627c37);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627c3e:{NFSU2_TR(0x627c3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627c40:{NFSU2_TR(0x627c40);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627c47:{NFSU2_TR(0x627c47);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627c4e:{NFSU2_TR(0x627c4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627c50:{NFSU2_TR(0x627c50);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627c57:{NFSU2_TR(0x627c57);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627c5e:{NFSU2_TR(0x627c5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627c60:{NFSU2_TR(0x627c60);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627c67:{NFSU2_TR(0x627c67);
{u32 ea_=u32(r4(R+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627c6e:{NFSU2_TR(0x627c6e);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627c75:{NFSU2_TR(0x627c75);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627c7c:{NFSU2_TR(0x627c7c);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627c83:{NFSU2_TR(0x627c83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627c85:{NFSU2_TR(0x627c85);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627c8c:{NFSU2_TR(0x627c8c);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627c93:{NFSU2_TR(0x627c93);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627c95:{NFSU2_TR(0x627c95);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627c9c:{NFSU2_TR(0x627c9c);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ca3:{NFSU2_TR(0x627ca3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627ca5:{NFSU2_TR(0x627ca5);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627cac:{NFSU2_TR(0x627cac);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627cb3:{NFSU2_TR(0x627cb3);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627cba:{NFSU2_TR(0x627cba);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627cc1:{NFSU2_TR(0x627cc1);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627cc8:{NFSU2_TR(0x627cc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627cca:{NFSU2_TR(0x627cca);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627cd1:{NFSU2_TR(0x627cd1);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627cd8:{NFSU2_TR(0x627cd8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627cda:{NFSU2_TR(0x627cda);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ce1:{NFSU2_TR(0x627ce1);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ce8:{NFSU2_TR(0x627ce8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627cea:{NFSU2_TR(0x627cea);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627cf1:{NFSU2_TR(0x627cf1);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627cf8:{NFSU2_TR(0x627cf8);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627cff:{NFSU2_TR(0x627cff);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627d06:{NFSU2_TR(0x627d06);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627d0d:{NFSU2_TR(0x627d0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627d0f:{NFSU2_TR(0x627d0f);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627d16:{NFSU2_TR(0x627d16);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627d1d:{NFSU2_TR(0x627d1d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627d1f:{NFSU2_TR(0x627d1f);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627d26:{NFSU2_TR(0x627d26);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627d2d:{NFSU2_TR(0x627d2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627d2f:{NFSU2_TR(0x627d2f);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627d36:{NFSU2_TR(0x627d36);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627d3d:{NFSU2_TR(0x627d3d);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627d44:{NFSU2_TR(0x627d44);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627d4b:{NFSU2_TR(0x627d4b);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627d52:{NFSU2_TR(0x627d52);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627d54:{NFSU2_TR(0x627d54);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627d5b:{NFSU2_TR(0x627d5b);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627d62:{NFSU2_TR(0x627d62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627d64:{NFSU2_TR(0x627d64);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627d6b:{NFSU2_TR(0x627d6b);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627d72:{NFSU2_TR(0x627d72);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627d74:{NFSU2_TR(0x627d74);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627d7b:{NFSU2_TR(0x627d7b);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627d82:{NFSU2_TR(0x627d82);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627d89:{NFSU2_TR(0x627d89);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627d90:{NFSU2_TR(0x627d90);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B627d94:{NFSU2_TR(0x627d94);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627d9b:{NFSU2_TR(0x627d9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627d9c:{NFSU2_TR(0x627d9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B627da0:{NFSU2_TR(0x627da0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B627da1:{NFSU2_TR(0x627da1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627da3:{NFSU2_TR(0x627da3);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627daa:{NFSU2_TR(0x627daa);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627db1:{NFSU2_TR(0x627db1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627db3:{NFSU2_TR(0x627db3);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627dba:{NFSU2_TR(0x627dba);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627dc1:{NFSU2_TR(0x627dc1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627dc3:{NFSU2_TR(0x627dc3);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627dca:{NFSU2_TR(0x627dca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x627dcfull));
TAIL_STATIC(0x4012b0u,401);
}
B627dcf:L627dcf:{c.instructions+=167;NFSU2_TR(0x627dcf);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B627dd6:{NFSU2_TR(0x627dd6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627dda:{NFSU2_TR(0x627dda);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ddd:{NFSU2_TR(0x627ddd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627de1:{NFSU2_TR(0x627de1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627de3:{NFSU2_TR(0x627de3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627de5:{NFSU2_TR(0x627de5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627de9:{NFSU2_TR(0x627de9);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627dec:{NFSU2_TR(0x627dec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627dee:{NFSU2_TR(0x627dee);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627df2:{NFSU2_TR(0x627df2);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627df5:{NFSU2_TR(0x627df5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627df7:{NFSU2_TR(0x627df7);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627dfb:{NFSU2_TR(0x627dfb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627dff:{NFSU2_TR(0x627dff);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e02:{NFSU2_TR(0x627e02);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e06:{NFSU2_TR(0x627e06);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e09:{NFSU2_TR(0x627e09);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e0b:{NFSU2_TR(0x627e0b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e0f:{NFSU2_TR(0x627e0f);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e12:{NFSU2_TR(0x627e12);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e14:{NFSU2_TR(0x627e14);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e18:{NFSU2_TR(0x627e18);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e1b:{NFSU2_TR(0x627e1b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e1d:{NFSU2_TR(0x627e1d);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627e21:{NFSU2_TR(0x627e21);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e25:{NFSU2_TR(0x627e25);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e28:{NFSU2_TR(0x627e28);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e2c:{NFSU2_TR(0x627e2c);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e2f:{NFSU2_TR(0x627e2f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e31:{NFSU2_TR(0x627e31);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e35:{NFSU2_TR(0x627e35);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e38:{NFSU2_TR(0x627e38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e3a:{NFSU2_TR(0x627e3a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e3e:{NFSU2_TR(0x627e3e);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e41:{NFSU2_TR(0x627e41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e43:{NFSU2_TR(0x627e43);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627e4a:{NFSU2_TR(0x627e4a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e4e:{NFSU2_TR(0x627e4e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e51:{NFSU2_TR(0x627e51);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e55:{NFSU2_TR(0x627e55);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e58:{NFSU2_TR(0x627e58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e5a:{NFSU2_TR(0x627e5a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e5e:{NFSU2_TR(0x627e5e);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e61:{NFSU2_TR(0x627e61);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e63:{NFSU2_TR(0x627e63);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e67:{NFSU2_TR(0x627e67);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e6a:{NFSU2_TR(0x627e6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e6c:{NFSU2_TR(0x627e6c);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627e73:{NFSU2_TR(0x627e73);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e77:{NFSU2_TR(0x627e77);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e79:{NFSU2_TR(0x627e79);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e7d:{NFSU2_TR(0x627e7d);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e80:{NFSU2_TR(0x627e80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e82:{NFSU2_TR(0x627e82);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e86:{NFSU2_TR(0x627e86);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e89:{NFSU2_TR(0x627e89);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e8b:{NFSU2_TR(0x627e8b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e8f:{NFSU2_TR(0x627e8f);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627e92:{NFSU2_TR(0x627e92);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627e94:{NFSU2_TR(0x627e94);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627e9b:{NFSU2_TR(0x627e9b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627e9f:{NFSU2_TR(0x627e9f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ea2:{NFSU2_TR(0x627ea2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ea6:{NFSU2_TR(0x627ea6);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ea9:{NFSU2_TR(0x627ea9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627eab:{NFSU2_TR(0x627eab);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627eaf:{NFSU2_TR(0x627eaf);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627eb2:{NFSU2_TR(0x627eb2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627eb4:{NFSU2_TR(0x627eb4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627eb8:{NFSU2_TR(0x627eb8);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ebb:{NFSU2_TR(0x627ebb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627ebd:{NFSU2_TR(0x627ebd);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627ec4:{NFSU2_TR(0x627ec4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ec8:{NFSU2_TR(0x627ec8);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ecb:{NFSU2_TR(0x627ecb);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ecf:{NFSU2_TR(0x627ecf);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ed2:{NFSU2_TR(0x627ed2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627ed4:{NFSU2_TR(0x627ed4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ed8:{NFSU2_TR(0x627ed8);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627edb:{NFSU2_TR(0x627edb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627edd:{NFSU2_TR(0x627edd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ee1:{NFSU2_TR(0x627ee1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ee4:{NFSU2_TR(0x627ee4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627ee6:{NFSU2_TR(0x627ee6);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627eed:{NFSU2_TR(0x627eed);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ef1:{NFSU2_TR(0x627ef1);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ef4:{NFSU2_TR(0x627ef4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ef8:{NFSU2_TR(0x627ef8);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627efb:{NFSU2_TR(0x627efb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627efd:{NFSU2_TR(0x627efd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f01:{NFSU2_TR(0x627f01);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f04:{NFSU2_TR(0x627f04);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f06:{NFSU2_TR(0x627f06);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f0a:{NFSU2_TR(0x627f0a);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f0d:{NFSU2_TR(0x627f0d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f0f:{NFSU2_TR(0x627f0f);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627f16:{NFSU2_TR(0x627f16);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f1a:{NFSU2_TR(0x627f1a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f1c:{NFSU2_TR(0x627f1c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f20:{NFSU2_TR(0x627f20);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f23:{NFSU2_TR(0x627f23);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f25:{NFSU2_TR(0x627f25);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f29:{NFSU2_TR(0x627f29);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f2c:{NFSU2_TR(0x627f2c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f2e:{NFSU2_TR(0x627f2e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f32:{NFSU2_TR(0x627f32);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f35:{NFSU2_TR(0x627f35);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f37:{NFSU2_TR(0x627f37);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627f3e:{NFSU2_TR(0x627f3e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f42:{NFSU2_TR(0x627f42);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f45:{NFSU2_TR(0x627f45);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f49:{NFSU2_TR(0x627f49);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f4c:{NFSU2_TR(0x627f4c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f4e:{NFSU2_TR(0x627f4e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f52:{NFSU2_TR(0x627f52);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f55:{NFSU2_TR(0x627f55);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f57:{NFSU2_TR(0x627f57);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f5b:{NFSU2_TR(0x627f5b);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f5e:{NFSU2_TR(0x627f5e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f60:{NFSU2_TR(0x627f60);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627f67:{NFSU2_TR(0x627f67);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f6b:{NFSU2_TR(0x627f6b);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f6e:{NFSU2_TR(0x627f6e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f72:{NFSU2_TR(0x627f72);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f75:{NFSU2_TR(0x627f75);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f77:{NFSU2_TR(0x627f77);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f7b:{NFSU2_TR(0x627f7b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f7e:{NFSU2_TR(0x627f7e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f80:{NFSU2_TR(0x627f80);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f84:{NFSU2_TR(0x627f84);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f87:{NFSU2_TR(0x627f87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627f89:{NFSU2_TR(0x627f89);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627f90:{NFSU2_TR(0x627f90);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f94:{NFSU2_TR(0x627f94);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f97:{NFSU2_TR(0x627f97);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627f9b:{NFSU2_TR(0x627f9b);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627f9e:{NFSU2_TR(0x627f9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627fa0:{NFSU2_TR(0x627fa0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627fa4:{NFSU2_TR(0x627fa4);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627fa7:{NFSU2_TR(0x627fa7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627fa9:{NFSU2_TR(0x627fa9);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627fad:{NFSU2_TR(0x627fad);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627fb0:{NFSU2_TR(0x627fb0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627fb2:{NFSU2_TR(0x627fb2);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627fb9:{NFSU2_TR(0x627fb9);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627fbd:{NFSU2_TR(0x627fbd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627fbf:{NFSU2_TR(0x627fbf);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627fc3:{NFSU2_TR(0x627fc3);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627fc6:{NFSU2_TR(0x627fc6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627fc8:{NFSU2_TR(0x627fc8);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627fcc:{NFSU2_TR(0x627fcc);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627fcf:{NFSU2_TR(0x627fcf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627fd1:{NFSU2_TR(0x627fd1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627fd5:{NFSU2_TR(0x627fd5);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627fd8:{NFSU2_TR(0x627fd8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627fda:{NFSU2_TR(0x627fda);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B627fe1:{NFSU2_TR(0x627fe1);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627fe5:{NFSU2_TR(0x627fe5);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627fe8:{NFSU2_TR(0x627fe8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627fec:{NFSU2_TR(0x627fec);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627fef:{NFSU2_TR(0x627fef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627ff1:{NFSU2_TR(0x627ff1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ff5:{NFSU2_TR(0x627ff5);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B627ff8:{NFSU2_TR(0x627ff8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B627ffa:{NFSU2_TR(0x627ffa);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B627ffe:{NFSU2_TR(0x627ffe);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x628001u,628);
}
XIT:NFSU2_TR_EXIT(0x627,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
