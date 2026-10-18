#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_60d(u8* __restrict R,Cpu& c);
u32 body_621(u8* __restrict R,Cpu& c);
u32 body_623(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x622,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x622,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_622(u8* __restrict R,Cpu& c);
u32 page_622(Cpu& c){return body_622(c.regs.data(),c);}
__attribute__((noinline)) u32 body_622(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x622001:goto L622001;
case 0x622008:c.instructions+=1;goto B622008;
case 0x62200a:goto L62200a;
case 0x622015:goto L622015;
case 0x62201c:c.instructions+=10;goto B62201c;
case 0x622023:c.instructions+=9;goto B622023;
case 0x622026:c.instructions+=8;goto B622026;
case 0x622028:c.instructions+=7;goto B622028;
case 0x62202f:c.instructions+=6;goto B62202f;
case 0x622030:c.instructions+=5;goto B622030;
case 0x622031:c.instructions+=4;goto B622031;
case 0x622038:c.instructions+=3;goto B622038;
case 0x62203f:c.instructions+=2;goto B62203f;
case 0x622040:c.instructions+=1;goto B622040;
case 0x622045:goto L622045;
case 0x622048:c.instructions+=9;goto B622048;
case 0x62204b:c.instructions+=8;goto B62204b;
case 0x62204d:c.instructions+=7;goto B62204d;
case 0x622054:c.instructions+=6;goto B622054;
case 0x622056:c.instructions+=5;goto B622056;
case 0x62205d:c.instructions+=4;goto B62205d;
case 0x62205e:c.instructions+=3;goto B62205e;
case 0x622065:c.instructions+=2;goto B622065;
case 0x62206c:c.instructions+=1;goto B62206c;
case 0x622071:goto L622071;
case 0x622078:c.instructions+=2;goto B622078;
case 0x622079:c.instructions+=1;goto B622079;
case 0x62207e:goto L62207e;
case 0x622085:c.instructions+=2;goto B622085;
case 0x622086:c.instructions+=1;goto B622086;
case 0x62208b:goto L62208b;
case 0x622092:c.instructions+=2;goto B622092;
case 0x622093:c.instructions+=1;goto B622093;
case 0x622098:goto L622098;
case 0x62209d:c.instructions+=3;goto B62209d;
case 0x62209f:c.instructions+=2;goto B62209f;
case 0x6220a0:c.instructions+=1;goto B6220a0;
case 0x6220a5:goto L6220a5;
case 0x6220a7:c.instructions+=2;goto B6220a7;
case 0x6220ac:c.instructions+=1;goto B6220ac;
case 0x6220b1:goto L6220b1;
case 0x6220b4:c.instructions+=2;goto B6220b4;
case 0x6220b5:c.instructions+=1;goto B6220b5;
case 0x6220ba:goto L6220ba;
case 0x6220bd:c.instructions+=13;goto B6220bd;
case 0x6220c4:c.instructions+=12;goto B6220c4;
case 0x6220cb:c.instructions+=11;goto B6220cb;
case 0x6220d2:c.instructions+=10;goto B6220d2;
case 0x6220d4:c.instructions+=9;goto B6220d4;
case 0x6220db:c.instructions+=8;goto B6220db;
case 0x6220e2:c.instructions+=7;goto B6220e2;
case 0x6220e4:c.instructions+=6;goto B6220e4;
case 0x6220eb:c.instructions+=5;goto B6220eb;
case 0x6220ef:c.instructions+=4;goto B6220ef;
case 0x6220f3:c.instructions+=3;goto B6220f3;
case 0x6220f6:c.instructions+=2;goto B6220f6;
case 0x6220fd:c.instructions+=1;goto B6220fd;
case 0x622103:goto L622103;
case 0x622108:c.instructions+=3;goto B622108;
case 0x62210a:c.instructions+=2;goto B62210a;
case 0x62210c:c.instructions+=1;goto B62210c;
case 0x622112:goto L622112;
case 0x622119:c.instructions+=1;goto B622119;
case 0x62211b:goto L62211b;
case 0x622121:c.instructions+=4;goto B622121;
case 0x622127:c.instructions+=3;goto B622127;
case 0x62212d:c.instructions+=2;goto B62212d;
case 0x622134:c.instructions+=1;goto B622134;
case 0x622136:goto L622136;
case 0x62213c:c.instructions+=3;goto B62213c;
case 0x622142:c.instructions+=2;goto B622142;
case 0x622148:c.instructions+=1;goto B622148;
case 0x62214f:goto L62214f;
case 0x622156:c.instructions+=31;goto B622156;
case 0x622158:c.instructions+=30;goto B622158;
case 0x62215f:c.instructions+=29;goto B62215f;
case 0x622165:c.instructions+=28;goto B622165;
case 0x622167:c.instructions+=27;goto B622167;
case 0x62216e:c.instructions+=26;goto B62216e;
case 0x622175:c.instructions+=25;goto B622175;
case 0x62217a:c.instructions+=24;goto B62217a;
case 0x62217c:c.instructions+=23;goto B62217c;
case 0x622182:c.instructions+=22;goto B622182;
case 0x622184:c.instructions+=21;goto B622184;
case 0x622188:c.instructions+=20;goto B622188;
case 0x62218b:c.instructions+=19;goto B62218b;
case 0x62218f:c.instructions+=18;goto B62218f;
case 0x622191:c.instructions+=17;goto B622191;
case 0x622198:c.instructions+=16;goto B622198;
case 0x62219b:c.instructions+=15;goto B62219b;
case 0x6221a2:c.instructions+=14;goto B6221a2;
case 0x6221a6:c.instructions+=13;goto B6221a6;
case 0x6221a7:c.instructions+=12;goto B6221a7;
case 0x6221a9:c.instructions+=11;goto B6221a9;
case 0x6221b0:c.instructions+=10;goto B6221b0;
case 0x6221b4:c.instructions+=9;goto B6221b4;
case 0x6221b6:c.instructions+=8;goto B6221b6;
case 0x6221bd:c.instructions+=7;goto B6221bd;
case 0x6221c4:c.instructions+=6;goto B6221c4;
case 0x6221c8:c.instructions+=5;goto B6221c8;
case 0x6221ca:c.instructions+=4;goto B6221ca;
case 0x6221d1:c.instructions+=3;goto B6221d1;
case 0x6221d3:c.instructions+=2;goto B6221d3;
case 0x6221d5:c.instructions+=1;goto B6221d5;
case 0x6221da:goto L6221da;
case 0x6221df:c.instructions+=5;goto B6221df;
case 0x6221e1:c.instructions+=4;goto B6221e1;
case 0x6221e3:c.instructions+=3;goto B6221e3;
case 0x6221ea:c.instructions+=2;goto B6221ea;
case 0x6221eb:c.instructions+=1;goto B6221eb;
case 0x6221f0:goto L6221f0;
case 0x6221f7:c.instructions+=36;goto B6221f7;
case 0x6221fe:c.instructions+=35;goto B6221fe;
case 0x622203:c.instructions+=34;goto B622203;
case 0x622205:c.instructions+=33;goto B622205;
case 0x62220a:c.instructions+=32;goto B62220a;
case 0x622210:c.instructions+=31;goto B622210;
case 0x622217:c.instructions+=30;goto B622217;
case 0x62221e:c.instructions+=29;goto B62221e;
case 0x622225:c.instructions+=28;goto B622225;
case 0x62222c:c.instructions+=27;goto B62222c;
case 0x622233:c.instructions+=26;goto B622233;
case 0x62223a:c.instructions+=25;goto B62223a;
case 0x622241:c.instructions+=24;goto B622241;
case 0x622246:c.instructions+=23;goto B622246;
case 0x62224d:c.instructions+=22;goto B62224d;
case 0x622254:c.instructions+=21;goto B622254;
case 0x62225a:c.instructions+=20;goto B62225a;
case 0x622261:c.instructions+=19;goto B622261;
case 0x622268:c.instructions+=18;goto B622268;
case 0x62226c:c.instructions+=17;goto B62226c;
case 0x622273:c.instructions+=16;goto B622273;
case 0x62227a:c.instructions+=15;goto B62227a;
case 0x622281:c.instructions+=14;goto B622281;
case 0x622287:c.instructions+=13;goto B622287;
case 0x62228e:c.instructions+=12;goto B62228e;
case 0x622295:c.instructions+=11;goto B622295;
case 0x62229c:c.instructions+=10;goto B62229c;
case 0x6222a3:c.instructions+=9;goto B6222a3;
case 0x6222aa:c.instructions+=8;goto B6222aa;
case 0x6222b1:c.instructions+=7;goto B6222b1;
case 0x6222b8:c.instructions+=6;goto B6222b8;
case 0x6222bf:c.instructions+=5;goto B6222bf;
case 0x6222c6:c.instructions+=4;goto B6222c6;
case 0x6222cd:c.instructions+=3;goto B6222cd;
case 0x6222d4:c.instructions+=2;goto B6222d4;
case 0x6222db:c.instructions+=1;goto B6222db;
case 0x6222e6:goto L6222e6;
case 0x6222ed:c.instructions+=3;goto B6222ed;
case 0x6222f8:c.instructions+=2;goto B6222f8;
case 0x6222fe:c.instructions+=1;goto B6222fe;
case 0x622300:goto L622300;
case 0x622302:c.instructions+=53;goto B622302;
case 0x622305:c.instructions+=52;goto B622305;
case 0x622308:c.instructions+=51;goto B622308;
case 0x62230b:c.instructions+=50;goto B62230b;
case 0x62230d:c.instructions+=49;goto B62230d;
case 0x622310:c.instructions+=48;goto B622310;
case 0x622313:c.instructions+=47;goto B622313;
case 0x622316:c.instructions+=46;goto B622316;
case 0x622318:c.instructions+=45;goto B622318;
case 0x62231b:c.instructions+=44;goto B62231b;
case 0x62231e:c.instructions+=43;goto B62231e;
case 0x622321:c.instructions+=42;goto B622321;
case 0x622323:c.instructions+=41;goto B622323;
case 0x622326:c.instructions+=40;goto B622326;
case 0x622328:c.instructions+=39;goto B622328;
case 0x62232b:c.instructions+=38;goto B62232b;
case 0x62232e:c.instructions+=37;goto B62232e;
case 0x622330:c.instructions+=36;goto B622330;
case 0x622333:c.instructions+=35;goto B622333;
case 0x622336:c.instructions+=34;goto B622336;
case 0x622339:c.instructions+=33;goto B622339;
case 0x62233c:c.instructions+=32;goto B62233c;
case 0x62233f:c.instructions+=31;goto B62233f;
case 0x622341:c.instructions+=30;goto B622341;
case 0x622344:c.instructions+=29;goto B622344;
case 0x622347:c.instructions+=28;goto B622347;
case 0x622349:c.instructions+=27;goto B622349;
case 0x62234c:c.instructions+=26;goto B62234c;
case 0x62234f:c.instructions+=25;goto B62234f;
case 0x622352:c.instructions+=24;goto B622352;
case 0x622355:c.instructions+=23;goto B622355;
case 0x622358:c.instructions+=22;goto B622358;
case 0x62235a:c.instructions+=21;goto B62235a;
case 0x62235d:c.instructions+=20;goto B62235d;
case 0x622360:c.instructions+=19;goto B622360;
case 0x622362:c.instructions+=18;goto B622362;
case 0x622365:c.instructions+=17;goto B622365;
case 0x62236c:c.instructions+=16;goto B62236c;
case 0x622373:c.instructions+=15;goto B622373;
case 0x622375:c.instructions+=14;goto B622375;
case 0x622378:c.instructions+=13;goto B622378;
case 0x62237b:c.instructions+=12;goto B62237b;
case 0x62237e:c.instructions+=11;goto B62237e;
case 0x622381:c.instructions+=10;goto B622381;
case 0x622383:c.instructions+=9;goto B622383;
case 0x622386:c.instructions+=8;goto B622386;
case 0x62238a:c.instructions+=7;goto B62238a;
case 0x62238d:c.instructions+=6;goto B62238d;
case 0x62238f:c.instructions+=5;goto B62238f;
case 0x622396:c.instructions+=4;goto B622396;
case 0x62239c:c.instructions+=3;goto B62239c;
case 0x62239d:c.instructions+=2;goto B62239d;
case 0x6223a4:c.instructions+=1;goto B6223a4;
case 0x6223aa:goto L6223aa;
case 0x6223b1:c.instructions+=9;goto B6223b1;
case 0x6223b3:c.instructions+=8;goto B6223b3;
case 0x6223b5:c.instructions+=7;goto B6223b5;
case 0x6223b6:c.instructions+=6;goto B6223b6;
case 0x6223b8:c.instructions+=5;goto B6223b8;
case 0x6223bf:c.instructions+=4;goto B6223bf;
case 0x6223c6:c.instructions+=3;goto B6223c6;
case 0x6223c8:c.instructions+=2;goto B6223c8;
case 0x6223ce:c.instructions+=1;goto B6223ce;
case 0x6223d4:goto L6223d4;
case 0x6223db:c.instructions+=10;goto B6223db;
case 0x6223dd:c.instructions+=9;goto B6223dd;
case 0x6223df:c.instructions+=8;goto B6223df;
case 0x6223e1:c.instructions+=7;goto B6223e1;
case 0x6223e4:c.instructions+=6;goto B6223e4;
case 0x6223e7:c.instructions+=5;goto B6223e7;
case 0x6223ea:c.instructions+=4;goto B6223ea;
case 0x6223f0:c.instructions+=3;goto B6223f0;
case 0x6223f3:c.instructions+=2;goto B6223f3;
case 0x6223fa:c.instructions+=1;goto B6223fa;
case 0x6223fc:goto L6223fc;
case 0x6223fe:c.instructions+=1;goto B6223fe;
case 0x622400:goto L622400;
case 0x622405:goto L622405;
case 0x62240c:c.instructions+=2;goto B62240c;
case 0x622413:c.instructions+=1;goto B622413;
case 0x622419:goto L622419;
case 0x62241b:c.instructions+=1;goto B62241b;
case 0x622421:goto L622421;
case 0x622426:c.instructions+=5;goto B622426;
case 0x622428:c.instructions+=4;goto B622428;
case 0x62242a:c.instructions+=3;goto B62242a;
case 0x622431:c.instructions+=2;goto B622431;
case 0x622432:c.instructions+=1;goto B622432;
case 0x622437:goto L622437;
case 0x62243c:c.instructions+=5;goto B62243c;
case 0x62243e:c.instructions+=4;goto B62243e;
case 0x622440:c.instructions+=3;goto B622440;
case 0x622447:c.instructions+=2;goto B622447;
case 0x622448:c.instructions+=1;goto B622448;
case 0x62244d:goto L62244d;
case 0x622451:c.instructions+=3;goto B622451;
case 0x622455:c.instructions+=2;goto B622455;
case 0x622459:c.instructions+=1;goto B622459;
case 0x622460:goto L622460;
case 0x622464:c.instructions+=4;goto B622464;
case 0x622467:c.instructions+=3;goto B622467;
case 0x622469:c.instructions+=2;goto B622469;
case 0x62246c:c.instructions+=1;goto B62246c;
case 0x622471:goto L622471;
case 0x622475:c.instructions+=46;goto B622475;
case 0x622479:c.instructions+=45;goto B622479;
case 0x62247d:c.instructions+=44;goto B62247d;
case 0x62247f:c.instructions+=43;goto B62247f;
case 0x622483:c.instructions+=42;goto B622483;
case 0x622486:c.instructions+=41;goto B622486;
case 0x62248a:c.instructions+=40;goto B62248a;
case 0x62248d:c.instructions+=39;goto B62248d;
case 0x622494:c.instructions+=38;goto B622494;
case 0x622496:c.instructions+=37;goto B622496;
case 0x622499:c.instructions+=36;goto B622499;
case 0x62249c:c.instructions+=35;goto B62249c;
case 0x62249e:c.instructions+=34;goto B62249e;
case 0x6224a1:c.instructions+=33;goto B6224a1;
case 0x6224a3:c.instructions+=32;goto B6224a3;
case 0x6224a6:c.instructions+=31;goto B6224a6;
case 0x6224a9:c.instructions+=30;goto B6224a9;
case 0x6224ac:c.instructions+=29;goto B6224ac;
case 0x6224ae:c.instructions+=28;goto B6224ae;
case 0x6224b1:c.instructions+=27;goto B6224b1;
case 0x6224b4:c.instructions+=26;goto B6224b4;
case 0x6224b6:c.instructions+=25;goto B6224b6;
case 0x6224b9:c.instructions+=24;goto B6224b9;
case 0x6224bb:c.instructions+=23;goto B6224bb;
case 0x6224be:c.instructions+=22;goto B6224be;
case 0x6224c1:c.instructions+=21;goto B6224c1;
case 0x6224c4:c.instructions+=20;goto B6224c4;
case 0x6224c6:c.instructions+=19;goto B6224c6;
case 0x6224c9:c.instructions+=18;goto B6224c9;
case 0x6224cd:c.instructions+=17;goto B6224cd;
case 0x6224d0:c.instructions+=16;goto B6224d0;
case 0x6224d7:c.instructions+=15;goto B6224d7;
case 0x6224d9:c.instructions+=14;goto B6224d9;
case 0x6224dc:c.instructions+=13;goto B6224dc;
case 0x6224e3:c.instructions+=12;goto B6224e3;
case 0x6224ea:c.instructions+=11;goto B6224ea;
case 0x6224ec:c.instructions+=10;goto B6224ec;
case 0x6224ee:c.instructions+=9;goto B6224ee;
case 0x6224f1:c.instructions+=8;goto B6224f1;
case 0x6224f4:c.instructions+=7;goto B6224f4;
case 0x6224fb:c.instructions+=6;goto B6224fb;
case 0x622502:c.instructions+=5;goto B622502;
case 0x622503:c.instructions+=4;goto B622503;
case 0x622504:c.instructions+=3;goto B622504;
case 0x622506:c.instructions+=2;goto B622506;
case 0x622507:c.instructions+=1;goto B622507;
case 0x62250c:goto L62250c;
case 0x62250f:c.instructions+=9;goto B62250f;
case 0x622513:c.instructions+=8;goto B622513;
case 0x622519:c.instructions+=7;goto B622519;
case 0x622520:c.instructions+=6;goto B622520;
case 0x622521:c.instructions+=5;goto B622521;
case 0x622528:c.instructions+=4;goto B622528;
case 0x62252b:c.instructions+=3;goto B62252b;
case 0x62252c:c.instructions+=2;goto B62252c;
case 0x62252d:c.instructions+=1;goto B62252d;
case 0x622532:goto L622532;
case 0x622536:c.instructions+=10;goto B622536;
case 0x62253a:c.instructions+=9;goto B62253a;
case 0x62253d:c.instructions+=8;goto B62253d;
case 0x622540:c.instructions+=7;goto B622540;
case 0x622541:c.instructions+=6;goto B622541;
case 0x622544:c.instructions+=5;goto B622544;
case 0x622549:c.instructions+=4;goto B622549;
case 0x62254d:c.instructions+=3;goto B62254d;
case 0x622551:c.instructions+=2;goto B622551;
case 0x622555:c.instructions+=1;goto B622555;
case 0x62255b:goto L62255b;
case 0x622566:c.instructions+=2;goto B622566;
case 0x62256d:c.instructions+=1;goto B62256d;
case 0x622570:goto L622570;
case 0x622577:c.instructions+=7;goto B622577;
case 0x622578:c.instructions+=6;goto B622578;
case 0x62257f:c.instructions+=5;goto B62257f;
case 0x622581:c.instructions+=4;goto B622581;
case 0x622584:c.instructions+=3;goto B622584;
case 0x622586:c.instructions+=2;goto B622586;
case 0x622587:c.instructions+=1;goto B622587;
case 0x62258c:goto L62258c;
case 0x62258e:c.instructions+=4;goto B62258e;
case 0x622595:c.instructions+=3;goto B622595;
case 0x622597:c.instructions+=2;goto B622597;
case 0x62259e:c.instructions+=1;goto B62259e;
case 0x6225a0:goto L6225a0;
case 0x6225a7:c.instructions+=3;goto B6225a7;
case 0x6225ae:c.instructions+=2;goto B6225ae;
case 0x6225b0:c.instructions+=1;goto B6225b0;
case 0x6225b2:goto L6225b2;
case 0x6225b5:c.instructions+=10;goto B6225b5;
case 0x6225b8:c.instructions+=9;goto B6225b8;
case 0x6225bf:c.instructions+=8;goto B6225bf;
case 0x6225c6:c.instructions+=7;goto B6225c6;
case 0x6225c9:c.instructions+=6;goto B6225c9;
case 0x6225d0:c.instructions+=5;goto B6225d0;
case 0x6225d7:c.instructions+=4;goto B6225d7;
case 0x6225d9:c.instructions+=3;goto B6225d9;
case 0x6225e0:c.instructions+=2;goto B6225e0;
case 0x6225e2:c.instructions+=1;goto B6225e2;
case 0x6225ea:goto L6225ea;
case 0x6225ec:c.instructions+=5;goto B6225ec;
case 0x6225ee:c.instructions+=4;goto B6225ee;
case 0x6225f0:c.instructions+=3;goto B6225f0;
case 0x6225f3:c.instructions+=2;goto B6225f3;
case 0x6225f6:c.instructions+=1;goto B6225f6;
case 0x6225f8:goto L6225f8;
case 0x6225ff:c.instructions+=2;goto B6225ff;
case 0x622601:c.instructions+=1;goto B622601;
case 0x622603:goto L622603;
case 0x62260a:c.instructions+=2;goto B62260a;
case 0x62260c:c.instructions+=1;goto B62260c;
case 0x62260e:goto L62260e;
case 0x622613:c.instructions+=4;goto B622613;
case 0x622615:c.instructions+=3;goto B622615;
case 0x622616:c.instructions+=2;goto B622616;
case 0x622617:c.instructions+=1;goto B622617;
case 0x62261c:goto L62261c;
case 0x62261f:c.instructions+=2;goto B62261f;
case 0x622621:c.instructions+=1;goto B622621;
case 0x622623:goto L622623;
case 0x622626:c.instructions+=2;goto B622626;
case 0x622627:c.instructions+=1;goto B622627;
case 0x62262c:goto L62262c;
case 0x62262f:c.instructions+=2;goto B62262f;
case 0x622631:c.instructions+=1;goto B622631;
case 0x622633:goto L622633;
case 0x622635:c.instructions+=4;goto B622635;
case 0x62263b:c.instructions+=3;goto B62263b;
case 0x62263d:c.instructions+=2;goto B62263d;
case 0x622644:c.instructions+=1;goto B622644;
case 0x622646:goto L622646;
case 0x62264d:goto L62264d;
case 0x622654:c.instructions+=10;goto B622654;
case 0x622656:c.instructions+=9;goto B622656;
case 0x62265c:c.instructions+=8;goto B62265c;
case 0x62265d:c.instructions+=7;goto B62265d;
case 0x622660:c.instructions+=6;goto B622660;
case 0x622662:c.instructions+=5;goto B622662;
case 0x622665:c.instructions+=4;goto B622665;
case 0x62266c:c.instructions+=3;goto B62266c;
case 0x622673:c.instructions+=2;goto B622673;
case 0x622674:c.instructions+=1;goto B622674;
case 0x622676:goto L622676;
case 0x62267d:c.instructions+=6;goto B62267d;
case 0x62267f:c.instructions+=5;goto B62267f;
case 0x622680:c.instructions+=4;goto B622680;
case 0x622683:c.instructions+=3;goto B622683;
case 0x622686:c.instructions+=2;goto B622686;
case 0x62268d:c.instructions+=1;goto B62268d;
case 0x622693:goto L622693;
case 0x622695:goto L622695;
case 0x62269c:c.instructions+=1;goto B62269c;
case 0x6226a0:goto L6226a0;
case 0x6226a6:c.instructions+=7;goto B6226a6;
case 0x6226a8:c.instructions+=6;goto B6226a8;
case 0x6226aa:c.instructions+=5;goto B6226aa;
case 0x6226ac:c.instructions+=4;goto B6226ac;
case 0x6226af:c.instructions+=3;goto B6226af;
case 0x6226b2:c.instructions+=2;goto B6226b2;
case 0x6226b4:c.instructions+=1;goto B6226b4;
case 0x6226b6:goto L6226b6;
case 0x6226bc:c.instructions+=2;goto B6226bc;
case 0x6226c3:c.instructions+=1;goto B6226c3;
case 0x6226c5:goto L6226c5;
case 0x6226c6:c.instructions+=3;goto B6226c6;
case 0x6226c9:c.instructions+=2;goto B6226c9;
case 0x6226cc:c.instructions+=1;goto B6226cc;
case 0x6226ce:goto L6226ce;
case 0x6226d4:c.instructions+=8;goto B6226d4;
case 0x6226d7:c.instructions+=7;goto B6226d7;
case 0x6226de:c.instructions+=6;goto B6226de;
case 0x6226e2:c.instructions+=5;goto B6226e2;
case 0x6226e7:c.instructions+=4;goto B6226e7;
case 0x6226e9:c.instructions+=3;goto B6226e9;
case 0x6226ea:c.instructions+=2;goto B6226ea;
case 0x6226f1:c.instructions+=1;goto B6226f1;
case 0x6226f6:goto L6226f6;
case 0x6226fd:c.instructions+=23;goto B6226fd;
case 0x6226ff:c.instructions+=22;goto B6226ff;
case 0x622702:c.instructions+=21;goto B622702;
case 0x622704:c.instructions+=20;goto B622704;
case 0x622706:c.instructions+=19;goto B622706;
case 0x62270d:c.instructions+=18;goto B62270d;
case 0x622713:c.instructions+=17;goto B622713;
case 0x622715:c.instructions+=16;goto B622715;
case 0x62271c:c.instructions+=15;goto B62271c;
case 0x622720:c.instructions+=14;goto B622720;
case 0x622724:c.instructions+=13;goto B622724;
case 0x622726:c.instructions+=12;goto B622726;
case 0x622729:c.instructions+=11;goto B622729;
case 0x62272c:c.instructions+=10;goto B62272c;
case 0x62272e:c.instructions+=9;goto B62272e;
case 0x622731:c.instructions+=8;goto B622731;
case 0x622735:c.instructions+=7;goto B622735;
case 0x62273c:c.instructions+=6;goto B62273c;
case 0x622740:c.instructions+=5;goto B622740;
case 0x622742:c.instructions+=4;goto B622742;
case 0x622744:c.instructions+=3;goto B622744;
case 0x622746:c.instructions+=2;goto B622746;
case 0x622748:c.instructions+=1;goto B622748;
case 0x62274d:goto L62274d;
case 0x62274f:c.instructions+=2;goto B62274f;
case 0x622751:c.instructions+=1;goto B622751;
case 0x622753:goto L622753;
case 0x622755:c.instructions+=1;goto B622755;
case 0x622757:goto L622757;
case 0x62275c:c.instructions+=1;goto B62275c;
case 0x62275e:goto L62275e;
case 0x622763:goto L622763;
case 0x622766:c.instructions+=10;goto B622766;
case 0x62276b:c.instructions+=9;goto B62276b;
case 0x622772:c.instructions+=8;goto B622772;
case 0x622775:c.instructions+=7;goto B622775;
case 0x62277b:c.instructions+=6;goto B62277b;
case 0x62277d:c.instructions+=5;goto B62277d;
case 0x622783:c.instructions+=4;goto B622783;
case 0x622789:c.instructions+=3;goto B622789;
case 0x622790:c.instructions+=2;goto B622790;
case 0x622797:c.instructions+=1;goto B622797;
case 0x622799:goto L622799;
case 0x62279c:c.instructions+=3;goto B62279c;
case 0x62279f:c.instructions+=2;goto B62279f;
case 0x6227a1:c.instructions+=1;goto B6227a1;
case 0x6227a3:goto L6227a3;
case 0x6227a5:c.instructions+=1;goto B6227a5;
case 0x6227a7:goto L6227a7;
case 0x6227aa:c.instructions+=3;goto B6227aa;
case 0x6227ad:c.instructions+=2;goto B6227ad;
case 0x6227af:c.instructions+=1;goto B6227af;
case 0x6227b1:goto L6227b1;
case 0x6227b3:c.instructions+=1;goto B6227b3;
case 0x6227b9:goto L6227b9;
case 0x6227c0:c.instructions+=4;goto B6227c0;
case 0x6227c3:c.instructions+=3;goto B6227c3;
case 0x6227c6:c.instructions+=2;goto B6227c6;
case 0x6227c8:c.instructions+=1;goto B6227c8;
case 0x6227ce:goto L6227ce;
case 0x6227d5:c.instructions+=1;goto B6227d5;
case 0x6227d7:goto L6227d7;
case 0x6227dd:c.instructions+=1;goto B6227dd;
case 0x6227df:goto L6227df;
case 0x6227e5:goto L6227e5;
case 0x6227eb:c.instructions+=2;goto B6227eb;
case 0x6227f2:c.instructions+=1;goto B6227f2;
case 0x6227f7:goto L6227f7;
case 0x6227f9:c.instructions+=1;goto B6227f9;
case 0x6227fb:goto L6227fb;
case 0x622801:c.instructions+=1;goto B622801;
case 0x622803:goto L622803;
case 0x62280a:goto L62280a;
case 0x622810:c.instructions+=13;goto B622810;
case 0x622812:c.instructions+=12;goto B622812;
case 0x622814:c.instructions+=11;goto B622814;
case 0x62281a:c.instructions+=10;goto B62281a;
case 0x62281c:c.instructions+=9;goto B62281c;
case 0x622822:c.instructions+=8;goto B622822;
case 0x622826:c.instructions+=7;goto B622826;
case 0x62282c:c.instructions+=6;goto B62282c;
case 0x62282e:c.instructions+=5;goto B62282e;
case 0x622834:c.instructions+=4;goto B622834;
case 0x622838:c.instructions+=3;goto B622838;
case 0x62283a:c.instructions+=2;goto B62283a;
case 0x62283e:c.instructions+=1;goto B62283e;
case 0x622843:goto L622843;
case 0x622847:c.instructions+=8;goto B622847;
case 0x62284b:c.instructions+=7;goto B62284b;
case 0x622851:c.instructions+=6;goto B622851;
case 0x622853:c.instructions+=5;goto B622853;
case 0x622855:c.instructions+=4;goto B622855;
case 0x62285c:c.instructions+=3;goto B62285c;
case 0x622860:c.instructions+=2;goto B622860;
case 0x622862:c.instructions+=1;goto B622862;
case 0x622867:goto L622867;
case 0x62286b:c.instructions+=10;goto B62286b;
case 0x62286f:c.instructions+=9;goto B62286f;
case 0x622875:c.instructions+=8;goto B622875;
case 0x622877:c.instructions+=7;goto B622877;
case 0x622879:c.instructions+=6;goto B622879;
case 0x622880:c.instructions+=5;goto B622880;
case 0x622882:c.instructions+=4;goto B622882;
case 0x622884:c.instructions+=3;goto B622884;
case 0x622888:c.instructions+=2;goto B622888;
case 0x62288c:c.instructions+=1;goto B62288c;
case 0x622891:goto L622891;
case 0x622898:c.instructions+=8;goto B622898;
case 0x62289c:c.instructions+=7;goto B62289c;
case 0x6228a0:c.instructions+=6;goto B6228a0;
case 0x6228a1:c.instructions+=5;goto B6228a1;
case 0x6228a7:c.instructions+=4;goto B6228a7;
case 0x6228a9:c.instructions+=3;goto B6228a9;
case 0x6228ad:c.instructions+=2;goto B6228ad;
case 0x6228b1:c.instructions+=1;goto B6228b1;
case 0x6228b6:goto L6228b6;
case 0x6228bd:c.instructions+=3;goto B6228bd;
case 0x6228c4:c.instructions+=2;goto B6228c4;
case 0x6228c5:c.instructions+=1;goto B6228c5;
case 0x6228ca:goto L6228ca;
case 0x6228ce:c.instructions+=3;goto B6228ce;
case 0x6228d2:c.instructions+=2;goto B6228d2;
case 0x6228d3:c.instructions+=1;goto B6228d3;
case 0x6228d8:goto L6228d8;
case 0x6228da:c.instructions+=10;goto B6228da;
case 0x6228de:c.instructions+=9;goto B6228de;
case 0x6228e1:c.instructions+=8;goto B6228e1;
case 0x6228e3:c.instructions+=7;goto B6228e3;
case 0x6228ea:c.instructions+=6;goto B6228ea;
case 0x6228ec:c.instructions+=5;goto B6228ec;
case 0x6228ee:c.instructions+=4;goto B6228ee;
case 0x6228f0:c.instructions+=3;goto B6228f0;
case 0x6228f2:c.instructions+=2;goto B6228f2;
case 0x6228f8:c.instructions+=1;goto B6228f8;
case 0x6228fd:goto L6228fd;
case 0x622904:c.instructions+=5;goto B622904;
case 0x622908:c.instructions+=4;goto B622908;
case 0x62290f:c.instructions+=3;goto B62290f;
case 0x622913:c.instructions+=2;goto B622913;
case 0x622915:c.instructions+=1;goto B622915;
case 0x62291a:goto L62291a;
case 0x622921:c.instructions+=7;goto B622921;
case 0x622928:c.instructions+=6;goto B622928;
case 0x62292a:c.instructions+=5;goto B62292a;
case 0x622931:c.instructions+=4;goto B622931;
case 0x622935:c.instructions+=3;goto B622935;
case 0x622939:c.instructions+=2;goto B622939;
case 0x62293b:c.instructions+=1;goto B62293b;
case 0x622940:goto L622940;
case 0x622947:c.instructions+=7;goto B622947;
case 0x62294e:c.instructions+=6;goto B62294e;
case 0x622952:c.instructions+=5;goto B622952;
case 0x622954:c.instructions+=4;goto B622954;
case 0x62295b:c.instructions+=3;goto B62295b;
case 0x62295f:c.instructions+=2;goto B62295f;
case 0x622961:c.instructions+=1;goto B622961;
case 0x622966:goto L622966;
case 0x62296d:c.instructions+=7;goto B62296d;
case 0x622974:c.instructions+=6;goto B622974;
case 0x622978:c.instructions+=5;goto B622978;
case 0x62297a:c.instructions+=4;goto B62297a;
case 0x622981:c.instructions+=3;goto B622981;
case 0x622985:c.instructions+=2;goto B622985;
case 0x622987:c.instructions+=1;goto B622987;
case 0x62298c:goto L62298c;
case 0x622993:c.instructions+=6;goto B622993;
case 0x62299a:c.instructions+=5;goto B62299a;
case 0x62299c:c.instructions+=4;goto B62299c;
case 0x6229a3:c.instructions+=3;goto B6229a3;
case 0x6229a5:c.instructions+=2;goto B6229a5;
case 0x6229a7:c.instructions+=1;goto B6229a7;
case 0x6229a9:goto L6229a9;
case 0x6229ae:c.instructions+=2;goto B6229ae;
case 0x6229b6:c.instructions+=1;goto B6229b6;
case 0x6229b8:goto L6229b8;
case 0x6229bc:goto L6229bc;
case 0x6229c3:c.instructions+=2;goto B6229c3;
case 0x6229c5:c.instructions+=1;goto B6229c5;
case 0x6229c7:goto L6229c7;
case 0x6229cd:c.instructions+=3;goto B6229cd;
case 0x6229cf:c.instructions+=2;goto B6229cf;
case 0x6229d7:c.instructions+=1;goto B6229d7;
case 0x6229d9:goto L6229d9;
case 0x6229dd:goto L6229dd;
case 0x6229e4:c.instructions+=2;goto B6229e4;
case 0x6229e6:c.instructions+=1;goto B6229e6;
case 0x6229e8:goto L6229e8;
case 0x6229ea:c.instructions+=1;goto B6229ea;
case 0x6229ec:goto L6229ec;
case 0x6229ee:c.instructions+=1;goto B6229ee;
case 0x6229f0:goto L6229f0;
case 0x6229f2:c.instructions+=1;goto B6229f2;
case 0x6229f4:goto L6229f4;
case 0x6229f9:c.instructions+=2;goto B6229f9;
case 0x622a01:c.instructions+=1;goto B622a01;
case 0x622a03:goto L622a03;
case 0x622a07:goto L622a07;
case 0x622a09:c.instructions+=1;goto B622a09;
case 0x622a0b:goto L622a0b;
case 0x622a0d:c.instructions+=1;goto B622a0d;
case 0x622a0f:goto L622a0f;
case 0x622a15:c.instructions+=2;goto B622a15;
case 0x622a1a:c.instructions+=1;goto B622a1a;
case 0x622a1c:goto L622a1c;
case 0x622a1e:goto L622a1e;
case 0x622a22:c.instructions+=13;goto B622a22;
case 0x622a29:c.instructions+=12;goto B622a29;
case 0x622a30:c.instructions+=11;goto B622a30;
case 0x622a33:c.instructions+=10;goto B622a33;
case 0x622a35:c.instructions+=9;goto B622a35;
case 0x622a39:c.instructions+=8;goto B622a39;
case 0x622a40:c.instructions+=7;goto B622a40;
case 0x622a43:c.instructions+=6;goto B622a43;
case 0x622a45:c.instructions+=5;goto B622a45;
case 0x622a49:c.instructions+=4;goto B622a49;
case 0x622a4c:c.instructions+=3;goto B622a4c;
case 0x622a4e:c.instructions+=2;goto B622a4e;
case 0x622a54:c.instructions+=1;goto B622a54;
case 0x622a59:goto L622a59;
case 0x622a5c:c.instructions+=2;goto B622a5c;
case 0x622a61:c.instructions+=1;goto B622a61;
case 0x622a63:goto L622a63;
case 0x622a68:goto L622a68;
case 0x622a6c:c.instructions+=12;goto B622a6c;
case 0x622a6f:c.instructions+=11;goto B622a6f;
case 0x622a71:c.instructions+=10;goto B622a71;
case 0x622a75:c.instructions+=9;goto B622a75;
case 0x622a78:c.instructions+=8;goto B622a78;
case 0x622a7a:c.instructions+=7;goto B622a7a;
case 0x622a7e:c.instructions+=6;goto B622a7e;
case 0x622a81:c.instructions+=5;goto B622a81;
case 0x622a83:c.instructions+=4;goto B622a83;
case 0x622a89:c.instructions+=3;goto B622a89;
case 0x622a90:c.instructions+=2;goto B622a90;
case 0x622a92:c.instructions+=1;goto B622a92;
case 0x622a98:goto L622a98;
case 0x622a9f:c.instructions+=4;goto B622a9f;
case 0x622aa3:c.instructions+=3;goto B622aa3;
case 0x622aa7:c.instructions+=2;goto B622aa7;
case 0x622aa9:c.instructions+=1;goto B622aa9;
case 0x622aae:goto L622aae;
case 0x622ab5:c.instructions+=7;goto B622ab5;
case 0x622abc:c.instructions+=6;goto B622abc;
case 0x622ac0:c.instructions+=5;goto B622ac0;
case 0x622ac2:c.instructions+=4;goto B622ac2;
case 0x622ac9:c.instructions+=3;goto B622ac9;
case 0x622acd:c.instructions+=2;goto B622acd;
case 0x622acf:c.instructions+=1;goto B622acf;
case 0x622ad4:goto L622ad4;
case 0x622adb:c.instructions+=7;goto B622adb;
case 0x622ae2:c.instructions+=6;goto B622ae2;
case 0x622ae6:c.instructions+=5;goto B622ae6;
case 0x622ae8:c.instructions+=4;goto B622ae8;
case 0x622aef:c.instructions+=3;goto B622aef;
case 0x622af3:c.instructions+=2;goto B622af3;
case 0x622af5:c.instructions+=1;goto B622af5;
case 0x622afa:goto L622afa;
case 0x622b01:c.instructions+=7;goto B622b01;
case 0x622b08:c.instructions+=6;goto B622b08;
case 0x622b0c:c.instructions+=5;goto B622b0c;
case 0x622b0e:c.instructions+=4;goto B622b0e;
case 0x622b15:c.instructions+=3;goto B622b15;
case 0x622b19:c.instructions+=2;goto B622b19;
case 0x622b1b:c.instructions+=1;goto B622b1b;
case 0x622b20:goto L622b20;
case 0x622b27:c.instructions+=6;goto B622b27;
case 0x622b2e:c.instructions+=5;goto B622b2e;
case 0x622b30:c.instructions+=4;goto B622b30;
case 0x622b37:c.instructions+=3;goto B622b37;
case 0x622b39:c.instructions+=2;goto B622b39;
case 0x622b3b:c.instructions+=1;goto B622b3b;
case 0x622b3d:goto L622b3d;
case 0x622b42:c.instructions+=2;goto B622b42;
case 0x622b4d:c.instructions+=1;goto B622b4d;
case 0x622b4f:goto L622b4f;
case 0x622b56:goto L622b56;
case 0x622b5d:c.instructions+=2;goto B622b5d;
case 0x622b5f:c.instructions+=1;goto B622b5f;
case 0x622b61:goto L622b61;
case 0x622b63:c.instructions+=1;goto B622b63;
case 0x622b65:goto L622b65;
case 0x622b67:c.instructions+=1;goto B622b67;
case 0x622b69:goto L622b69;
case 0x622b6e:c.instructions+=2;goto B622b6e;
case 0x622b79:c.instructions+=1;goto B622b79;
case 0x622b7b:goto L622b7b;
case 0x622b82:goto L622b82;
case 0x622b89:c.instructions+=2;goto B622b89;
case 0x622b8b:c.instructions+=1;goto B622b8b;
case 0x622b8d:goto L622b8d;
case 0x622b8f:c.instructions+=1;goto B622b8f;
case 0x622b91:goto L622b91;
case 0x622b96:c.instructions+=2;goto B622b96;
case 0x622b9b:c.instructions+=1;goto B622b9b;
case 0x622b9d:goto L622b9d;
case 0x622b9f:goto L622b9f;
case 0x622ba1:c.instructions+=1;goto B622ba1;
case 0x622ba3:goto L622ba3;
case 0x622ba5:c.instructions+=1;goto B622ba5;
case 0x622ba7:goto L622ba7;
case 0x622bad:c.instructions+=2;goto B622bad;
case 0x622bb2:c.instructions+=1;goto B622bb2;
case 0x622bb4:goto L622bb4;
case 0x622bb6:goto L622bb6;
case 0x622bbd:c.instructions+=8;goto B622bbd;
case 0x622bc0:c.instructions+=7;goto B622bc0;
case 0x622bc2:c.instructions+=6;goto B622bc2;
case 0x622bc5:c.instructions+=5;goto B622bc5;
case 0x622bc7:c.instructions+=4;goto B622bc7;
case 0x622bce:c.instructions+=3;goto B622bce;
case 0x622bd1:c.instructions+=2;goto B622bd1;
case 0x622bd3:c.instructions+=1;goto B622bd3;
case 0x622bd9:goto L622bd9;
case 0x622be0:c.instructions+=2;goto B622be0;
case 0x622be2:c.instructions+=1;goto B622be2;
case 0x622be8:goto L622be8;
case 0x622bef:c.instructions+=4;goto B622bef;
case 0x622bf3:c.instructions+=3;goto B622bf3;
case 0x622bf7:c.instructions+=2;goto B622bf7;
case 0x622bf9:c.instructions+=1;goto B622bf9;
case 0x622bfe:goto L622bfe;
case 0x622c05:c.instructions+=7;goto B622c05;
case 0x622c0c:c.instructions+=6;goto B622c0c;
case 0x622c10:c.instructions+=5;goto B622c10;
case 0x622c12:c.instructions+=4;goto B622c12;
case 0x622c19:c.instructions+=3;goto B622c19;
case 0x622c1d:c.instructions+=2;goto B622c1d;
case 0x622c1f:c.instructions+=1;goto B622c1f;
case 0x622c24:goto L622c24;
case 0x622c2b:c.instructions+=7;goto B622c2b;
case 0x622c32:c.instructions+=6;goto B622c32;
case 0x622c36:c.instructions+=5;goto B622c36;
case 0x622c38:c.instructions+=4;goto B622c38;
case 0x622c3f:c.instructions+=3;goto B622c3f;
case 0x622c43:c.instructions+=2;goto B622c43;
case 0x622c45:c.instructions+=1;goto B622c45;
case 0x622c4a:goto L622c4a;
case 0x622c51:c.instructions+=7;goto B622c51;
case 0x622c58:c.instructions+=6;goto B622c58;
case 0x622c5c:c.instructions+=5;goto B622c5c;
case 0x622c5e:c.instructions+=4;goto B622c5e;
case 0x622c65:c.instructions+=3;goto B622c65;
case 0x622c69:c.instructions+=2;goto B622c69;
case 0x622c6b:c.instructions+=1;goto B622c6b;
case 0x622c70:goto L622c70;
case 0x622c72:c.instructions+=7;goto B622c72;
case 0x622c79:c.instructions+=6;goto B622c79;
case 0x622c80:c.instructions+=5;goto B622c80;
case 0x622c82:c.instructions+=4;goto B622c82;
case 0x622c89:c.instructions+=3;goto B622c89;
case 0x622c8b:c.instructions+=2;goto B622c8b;
case 0x622c8d:c.instructions+=1;goto B622c8d;
case 0x622c8f:goto L622c8f;
case 0x622c94:c.instructions+=2;goto B622c94;
case 0x622c9f:c.instructions+=1;goto B622c9f;
case 0x622ca1:goto L622ca1;
case 0x622ca8:goto L622ca8;
case 0x622caf:c.instructions+=2;goto B622caf;
case 0x622cb1:c.instructions+=1;goto B622cb1;
case 0x622cb3:goto L622cb3;
case 0x622cb5:c.instructions+=1;goto B622cb5;
case 0x622cb7:goto L622cb7;
case 0x622cb9:c.instructions+=1;goto B622cb9;
case 0x622cbb:goto L622cbb;
case 0x622cc0:c.instructions+=2;goto B622cc0;
case 0x622ccb:c.instructions+=1;goto B622ccb;
case 0x622ccd:goto L622ccd;
case 0x622cd4:goto L622cd4;
case 0x622cdb:c.instructions+=2;goto B622cdb;
case 0x622cdd:c.instructions+=1;goto B622cdd;
case 0x622cdf:goto L622cdf;
case 0x622ce1:c.instructions+=1;goto B622ce1;
case 0x622ce3:goto L622ce3;
case 0x622ce8:c.instructions+=2;goto B622ce8;
case 0x622ced:c.instructions+=1;goto B622ced;
case 0x622cef:goto L622cef;
case 0x622cf1:goto L622cf1;
case 0x622cf3:c.instructions+=1;goto B622cf3;
case 0x622cf5:goto L622cf5;
case 0x622cf7:c.instructions+=1;goto B622cf7;
case 0x622cf9:goto L622cf9;
case 0x622cff:c.instructions+=2;goto B622cff;
case 0x622d04:c.instructions+=1;goto B622d04;
case 0x622d06:goto L622d06;
case 0x622d08:goto L622d08;
case 0x622d0b:c.instructions+=9;goto B622d0b;
case 0x622d0d:c.instructions+=8;goto B622d0d;
case 0x622d14:c.instructions+=7;goto B622d14;
case 0x622d17:c.instructions+=6;goto B622d17;
case 0x622d19:c.instructions+=5;goto B622d19;
case 0x622d20:c.instructions+=4;goto B622d20;
case 0x622d23:c.instructions+=3;goto B622d23;
case 0x622d25:c.instructions+=2;goto B622d25;
case 0x622d2b:c.instructions+=1;goto B622d2b;
case 0x622d2d:goto L622d2d;
case 0x622d2f:goto L622d2f;
case 0x622d37:goto L622d37;
case 0x622d3b:c.instructions+=2;goto B622d3b;
case 0x622d3d:c.instructions+=1;goto B622d3d;
case 0x622d3f:goto L622d3f;
case 0x622d43:c.instructions+=4;goto B622d43;
case 0x622d4a:c.instructions+=3;goto B622d4a;
case 0x622d50:c.instructions+=2;goto B622d50;
case 0x622d54:c.instructions+=1;goto B622d54;
case 0x622d56:goto L622d56;
case 0x622d5a:c.instructions+=3;goto B622d5a;
case 0x622d60:c.instructions+=2;goto B622d60;
case 0x622d66:c.instructions+=1;goto B622d66;
case 0x622d6a:goto L622d6a;
case 0x622d6c:c.instructions+=2;goto B622d6c;
case 0x622d73:c.instructions+=1;goto B622d73;
case 0x622d79:goto L622d79;
case 0x622d81:c.instructions+=1;goto B622d81;
case 0x622d87:goto L622d87;
case 0x622d8e:c.instructions+=9;goto B622d8e;
case 0x622d95:c.instructions+=8;goto B622d95;
case 0x622d9c:c.instructions+=7;goto B622d9c;
case 0x622da3:c.instructions+=6;goto B622da3;
case 0x622da5:c.instructions+=5;goto B622da5;
case 0x622dac:c.instructions+=4;goto B622dac;
case 0x622db3:c.instructions+=3;goto B622db3;
case 0x622dba:c.instructions+=2;goto B622dba;
case 0x622dbe:c.instructions+=1;goto B622dbe;
case 0x622dc0:goto L622dc0;
case 0x622dc7:c.instructions+=3;goto B622dc7;
case 0x622dce:c.instructions+=2;goto B622dce;
case 0x622dd1:c.instructions+=1;goto B622dd1;
case 0x622dd7:goto L622dd7;
case 0x622dde:c.instructions+=5;goto B622dde;
case 0x622de5:c.instructions+=4;goto B622de5;
case 0x622de6:c.instructions+=3;goto B622de6;
case 0x622de8:c.instructions+=2;goto B622de8;
case 0x622de9:c.instructions+=1;goto B622de9;
case 0x622dee:goto L622dee;
case 0x622df1:c.instructions+=2;goto B622df1;
case 0x622df3:c.instructions+=1;goto B622df3;
case 0x622df9:goto L622df9;
case 0x622e04:c.instructions+=1;goto B622e04;
case 0x622e10:goto L622e10;
case 0x622e17:c.instructions+=2;goto B622e17;
case 0x622e18:c.instructions+=1;goto B622e18;
case 0x622e1d:goto L622e1d;
case 0x622e21:c.instructions+=2;goto B622e21;
case 0x622e22:c.instructions+=1;goto B622e22;
case 0x622e27:goto L622e27;
case 0x622e2a:c.instructions+=4;goto B622e2a;
case 0x622e2c:c.instructions+=3;goto B622e2c;
case 0x622e2d:c.instructions+=2;goto B622e2d;
case 0x622e2e:c.instructions+=1;goto B622e2e;
case 0x622e33:goto L622e33;
case 0x622e3a:c.instructions+=2;goto B622e3a;
case 0x622e3b:c.instructions+=1;goto B622e3b;
case 0x622e40:goto L622e40;
case 0x622e44:c.instructions+=2;goto B622e44;
case 0x622e45:c.instructions+=1;goto B622e45;
case 0x622e4a:goto L622e4a;
case 0x622e51:c.instructions+=5;goto B622e51;
case 0x622e54:c.instructions+=4;goto B622e54;
case 0x622e56:c.instructions+=3;goto B622e56;
case 0x622e57:c.instructions+=2;goto B622e57;
case 0x622e58:c.instructions+=1;goto B622e58;
case 0x622e5d:goto L622e5d;
case 0x622e64:c.instructions+=15;goto B622e64;
case 0x622e6b:c.instructions+=14;goto B622e6b;
case 0x622e70:c.instructions+=13;goto B622e70;
case 0x622e72:c.instructions+=12;goto B622e72;
case 0x622e74:c.instructions+=11;goto B622e74;
case 0x622e7b:c.instructions+=10;goto B622e7b;
case 0x622e82:c.instructions+=9;goto B622e82;
case 0x622e89:c.instructions+=8;goto B622e89;
case 0x622e8c:c.instructions+=7;goto B622e8c;
case 0x622e8f:c.instructions+=6;goto B622e8f;
case 0x622e92:c.instructions+=5;goto B622e92;
case 0x622e93:c.instructions+=4;goto B622e93;
case 0x622e9a:c.instructions+=3;goto B622e9a;
case 0x622ea1:c.instructions+=2;goto B622ea1;
case 0x622ea8:c.instructions+=1;goto B622ea8;
case 0x622eae:goto L622eae;
case 0x622eb1:c.instructions+=2;goto B622eb1;
case 0x622eb2:c.instructions+=1;goto B622eb2;
case 0x622eb7:goto L622eb7;
case 0x622eba:goto L622eba;
case 0x622ebe:goto L622ebe;
case 0x622ebf:c.instructions+=3;goto B622ebf;
case 0x622ec2:c.instructions+=2;goto B622ec2;
case 0x622ec6:c.instructions+=1;goto B622ec6;
case 0x622ecc:goto L622ecc;
case 0x622ed0:c.instructions+=4;goto B622ed0;
case 0x622ed1:c.instructions+=3;goto B622ed1;
case 0x622ed4:c.instructions+=2;goto B622ed4;
case 0x622ed8:c.instructions+=1;goto B622ed8;
case 0x622ede:goto L622ede;
case 0x622ee4:c.instructions+=13;goto B622ee4;
case 0x622ee8:c.instructions+=12;goto B622ee8;
case 0x622eee:c.instructions+=11;goto B622eee;
case 0x622ef0:c.instructions+=10;goto B622ef0;
case 0x622ef3:c.instructions+=9;goto B622ef3;
case 0x622ef6:c.instructions+=8;goto B622ef6;
case 0x622efd:c.instructions+=7;goto B622efd;
case 0x622efe:c.instructions+=6;goto B622efe;
case 0x622f04:c.instructions+=5;goto B622f04;
case 0x622f06:c.instructions+=4;goto B622f06;
case 0x622f0d:c.instructions+=3;goto B622f0d;
case 0x622f13:c.instructions+=2;goto B622f13;
case 0x622f1a:c.instructions+=1;goto B622f1a;
case 0x622f1c:goto L622f1c;
case 0x622f23:goto L622f23;
case 0x622f29:c.instructions+=3;goto B622f29;
case 0x622f2b:c.instructions+=2;goto B622f2b;
case 0x622f32:c.instructions+=1;goto B622f32;
case 0x622f34:goto L622f34;
case 0x622f3b:goto L622f3b;
case 0x622f41:c.instructions+=3;goto B622f41;
case 0x622f43:c.instructions+=2;goto B622f43;
case 0x622f4a:c.instructions+=1;goto B622f4a;
case 0x622f4c:goto L622f4c;
case 0x622f53:goto L622f53;
case 0x622f59:c.instructions+=5;goto B622f59;
case 0x622f5c:c.instructions+=4;goto B622f5c;
case 0x622f63:c.instructions+=3;goto B622f63;
case 0x622f69:c.instructions+=2;goto B622f69;
case 0x622f6b:c.instructions+=1;goto B622f6b;
case 0x622f6d:goto L622f6d;
case 0x622f70:c.instructions+=6;goto B622f70;
case 0x622f72:c.instructions+=5;goto B622f72;
case 0x622f75:c.instructions+=4;goto B622f75;
case 0x622f77:c.instructions+=3;goto B622f77;
case 0x622f7a:c.instructions+=2;goto B622f7a;
case 0x622f81:c.instructions+=1;goto B622f81;
case 0x622f83:goto L622f83;
case 0x622f8a:c.instructions+=11;goto B622f8a;
case 0x622f8f:c.instructions+=10;goto B622f8f;
case 0x622f91:c.instructions+=9;goto B622f91;
case 0x622f98:c.instructions+=8;goto B622f98;
case 0x622f9f:c.instructions+=7;goto B622f9f;
case 0x622fa1:c.instructions+=6;goto B622fa1;
case 0x622fa8:c.instructions+=5;goto B622fa8;
case 0x622fab:c.instructions+=4;goto B622fab;
case 0x622fae:c.instructions+=3;goto B622fae;
case 0x622fb5:c.instructions+=2;goto B622fb5;
case 0x622fbc:c.instructions+=1;goto B622fbc;
case 0x622fc1:goto L622fc1;
case 0x622fcc:goto L622fcc;
case 0x622fd3:c.instructions+=2;goto B622fd3;
case 0x622fd5:c.instructions+=1;goto B622fd5;
case 0x622fd7:goto L622fd7;
case 0x622fdc:c.instructions+=2;goto B622fdc;
case 0x622fde:c.instructions+=1;goto B622fde;
case 0x622fe0:goto L622fe0;
case 0x622fe6:c.instructions+=4;goto B622fe6;
case 0x622fec:c.instructions+=3;goto B622fec;
case 0x622fee:c.instructions+=2;goto B622fee;
case 0x622ff1:c.instructions+=1;goto B622ff1;
case 0x622ff3:goto L622ff3;
case 0x622ff8:c.instructions+=1;goto B622ff8;
case 0x622ffa:goto L622ffa;
case 0x622ffc:goto L622ffc;
default:missing_instruction(c.pc);}
B622001:L622001:{c.instructions+=2;NFSU2_TR(0x622001);
u8 U[16];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B622008:{NFSU2_TR(0x622008);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L622015;}}
}
B62200a:L62200a:{c.instructions+=1;NFSU2_TR(0x62200a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B622015:L622015:{c.instructions+=11;NFSU2_TR(0x622015);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62201c:{NFSU2_TR(0x62201c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622023:{NFSU2_TR(0x622023);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622026:{NFSU2_TR(0x622026);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B622028:{NFSU2_TR(0x622028);
u8 U[4];
w4(U+0,u32(u32(u32(0x850ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62202f:{NFSU2_TR(0x62202f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622030:{NFSU2_TR(0x622030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622031:{NFSU2_TR(0x622031);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622038:{NFSU2_TR(0x622038);
u8 U[4];
w4(U+0,u32(u32(u32(0xac8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B62203f:{NFSU2_TR(0x62203f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622040:{NFSU2_TR(0x622040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622045ull));
TAIL_STATIC(0x60d490u,60d);
}
B622045:L622045:{c.instructions+=10;NFSU2_TR(0x622045);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622048:{NFSU2_TR(0x622048);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62204b:{NFSU2_TR(0x62204b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B62204d:{NFSU2_TR(0x62204d);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622054:{NFSU2_TR(0x622054);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B622056:{NFSU2_TR(0x622056);
{u32 ea_=u32(r4(R+16)+u32(2112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62205d:{NFSU2_TR(0x62205d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62205e:{NFSU2_TR(0x62205e);
u8 U[8];
w4(U+0,u32(u32(u32(0x840ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622065:{NFSU2_TR(0x622065);
{u32 ea_=u32(r4(R+16)+u32(2120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62206c:{NFSU2_TR(0x62206c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622071ull));
TAIL_STATIC(0x5be130u,5be);
}
B622071:L622071:{c.instructions+=3;NFSU2_TR(0x622071);
u8 U[4];
w4(U+0,u32(u32(u32(0x840ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B622078:{NFSU2_TR(0x622078);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622079:{NFSU2_TR(0x622079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62207eull));
TAIL_STATIC(0x5be130u,5be);
}
B62207e:L62207e:{c.instructions+=3;NFSU2_TR(0x62207e);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622085:{NFSU2_TR(0x622085);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622086:{NFSU2_TR(0x622086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62208bull));
TAIL_STATIC(0x5be0a0u,5be);
}
B62208b:L62208b:{c.instructions+=3;NFSU2_TR(0x62208b);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622092:{NFSU2_TR(0x622092);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622093:{NFSU2_TR(0x622093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622098ull));
TAIL_STATIC(0x5be0a0u,5be);
}
B622098:L622098:{c.instructions+=4;NFSU2_TR(0x622098);
__builtin_memmove((R+0),gp(0x7a6650),4);
}
B62209d:{NFSU2_TR(0x62209d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62209f:{NFSU2_TR(0x62209f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6220a0:{NFSU2_TR(0x6220a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6220a5ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B6220a5:L6220a5:{c.instructions+=3;NFSU2_TR(0x6220a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6220a7:{NFSU2_TR(0x6220a7);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6220ac:{NFSU2_TR(0x6220ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6220b1ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B6220b1:L6220b1:{c.instructions+=3;NFSU2_TR(0x6220b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6220b4:{NFSU2_TR(0x6220b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6220b5:{NFSU2_TR(0x6220b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6220baull));
TAIL_STATIC(0x5cec40u,5ce);
}
B6220ba:L6220ba:{c.instructions+=14;NFSU2_TR(0x6220ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B6220bd:{NFSU2_TR(0x6220bd);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6220c4:{NFSU2_TR(0x6220c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6220cb:{NFSU2_TR(0x6220cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6220d2:{NFSU2_TR(0x6220d2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6220d4:{NFSU2_TR(0x6220d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6220db:{NFSU2_TR(0x6220db);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6220e2:{NFSU2_TR(0x6220e2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6220e4:{NFSU2_TR(0x6220e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6220eb:{NFSU2_TR(0x6220eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6220ef:{NFSU2_TR(0x6220ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6220f3:{NFSU2_TR(0x6220f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6220f6:{NFSU2_TR(0x6220f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6220fd:{NFSU2_TR(0x6220fd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x621ed8u,621);}
}
B622103:L622103:{c.instructions+=4;NFSU2_TR(0x622103);
__builtin_memmove((R+0),gp(0x870cc0),4);
}
B622108:{NFSU2_TR(0x622108);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B62210a:{NFSU2_TR(0x62210a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B62210c:{NFSU2_TR(0x62210c);
if(r1(R+518)){{goto L622ede;}}
}
B622112:L622112:{c.instructions+=2;NFSU2_TR(0x622112);
u8 U[16];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B622119:{NFSU2_TR(0x622119);
if(r1(R+518)){{goto L622136;}}
}
B62211b:L62211b:{c.instructions+=5;NFSU2_TR(0x62211b);
__builtin_memmove((R+4),gp(0x7a66b0),4);
}
B622121:{NFSU2_TR(0x622121);
{u32 ea_=u32(u32(8021664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622127:{NFSU2_TR(0x622127);
{u32 ea_=u32(u32(8021668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62212d:{NFSU2_TR(0x62212d);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622134:{NFSU2_TR(0x622134);
{goto L62214f;}
}
B622136:L622136:{c.instructions+=4;NFSU2_TR(0x622136);
__builtin_memmove((R+8),gp(0x7a66ac),4);
}
B62213c:{NFSU2_TR(0x62213c);
{u32 ea_=u32(u32(8021656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622142:{NFSU2_TR(0x622142);
{u32 ea_=u32(u32(8021660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622148:{NFSU2_TR(0x622148);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62214f:L62214f:{c.instructions+=32;NFSU2_TR(0x62214f);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622156:{NFSU2_TR(0x622156);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622158:{NFSU2_TR(0x622158);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62215f:{NFSU2_TR(0x62215f);
{u32 ea_=u32(u32(8021608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622165:{NFSU2_TR(0x622165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B622167:{NFSU2_TR(0x622167);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62216e:{NFSU2_TR(0x62216e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622175:{NFSU2_TR(0x622175);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62217a:{NFSU2_TR(0x62217a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62217c:{NFSU2_TR(0x62217c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B622182:{NFSU2_TR(0x622182);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622184:{NFSU2_TR(0x622184);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B622188:{NFSU2_TR(0x622188);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62218b:{NFSU2_TR(0x62218b);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62218f:{NFSU2_TR(0x62218f);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B622191:{NFSU2_TR(0x622191);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B622198:{NFSU2_TR(0x622198);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62219b:{NFSU2_TR(0x62219b);
u8 U[4];
w4(U+0,u32(u32(u32(0xdecull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6221a2:{NFSU2_TR(0x6221a2);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6221a6:{NFSU2_TR(0x6221a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6221a7:{NFSU2_TR(0x6221a7);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6221a9:{NFSU2_TR(0x6221a9);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6221b0:{NFSU2_TR(0x6221b0);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6221b4:{NFSU2_TR(0x6221b4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6221b6:{NFSU2_TR(0x6221b6);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6221bd:{NFSU2_TR(0x6221bd);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6221c4:{NFSU2_TR(0x6221c4);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6221c8:{NFSU2_TR(0x6221c8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6221ca:{NFSU2_TR(0x6221ca);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6221d1:{NFSU2_TR(0x6221d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6221d3:{NFSU2_TR(0x6221d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6221d5:{NFSU2_TR(0x6221d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6221daull));
TAIL_STATIC(0x401650u,401);
}
B6221da:L6221da:{c.instructions+=6;NFSU2_TR(0x6221da);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6221df:{NFSU2_TR(0x6221df);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6221e1:{NFSU2_TR(0x6221e1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6221e3:{NFSU2_TR(0x6221e3);
u8 U[4];
w4(U+0,u32(u32(u32(0xd2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6221ea:{NFSU2_TR(0x6221ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6221eb:{NFSU2_TR(0x6221eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6221f0ull));
TAIL_STATIC(0x401650u,401);
}
B6221f0:L6221f0:{c.instructions+=37;NFSU2_TR(0x6221f0);
{u32 ea_=u32(r4(R+16)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6221f7:{NFSU2_TR(0x6221f7);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6221fe:{NFSU2_TR(0x6221fe);
w4(R+0,u32(0x1ull));
}
B622203:{NFSU2_TR(0x622203);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B622205:{NFSU2_TR(0x622205);
w4(R+4,u32(0x2ull));
}
B62220a:{NFSU2_TR(0x62220a);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622210:{NFSU2_TR(0x622210);
u8 U[8];
w4(U+0,u32(u32(u32(0x318ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622217:{NFSU2_TR(0x622217);
u8 U[8];
w4(U+0,u32(u32(u32(0x31cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62221e:{NFSU2_TR(0x62221e);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B622225:{NFSU2_TR(0x622225);
u8 U[8];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62222c:{NFSU2_TR(0x62222c);
{u32 ea_=u32(r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622233:{NFSU2_TR(0x622233);
u8 U[8];
w4(U+0,u32(u32(u32(0x32cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62223a:{NFSU2_TR(0x62223a);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B622241:{NFSU2_TR(0x622241);
w4(R+0,u32(0x3ull));
}
B622246:{NFSU2_TR(0x622246);
u8 U[8];
w4(U+0,u32(u32(u32(0x864ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62224d:{NFSU2_TR(0x62224d);
u8 U[8];
w4(U+0,u32(u32(u32(0x868ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622254:{NFSU2_TR(0x622254);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62225a:{NFSU2_TR(0x62225a);
u8 U[8];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622261:{NFSU2_TR(0x622261);
u8 U[8];
w4(U+0,u32(u32(u32(0x314ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622268:{NFSU2_TR(0x622268);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62226c:{NFSU2_TR(0x62226c);
u8 U[8];
w4(U+0,u32(u32(u32(0x320ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622273:{NFSU2_TR(0x622273);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62227a:{NFSU2_TR(0x62227a);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622281:{NFSU2_TR(0x622281);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622287:{NFSU2_TR(0x622287);
u8 U[8];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62228e:{NFSU2_TR(0x62228e);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622295:{NFSU2_TR(0x622295);
u8 U[8];
w4(U+0,u32(u32(u32(0x340ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62229c:{NFSU2_TR(0x62229c);
u8 U[8];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6222a3:{NFSU2_TR(0x6222a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x860ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6222aa:{NFSU2_TR(0x6222aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x86cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6222b1:{NFSU2_TR(0x6222b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x338ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6222b8:{NFSU2_TR(0x6222b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x33cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6222bf:{NFSU2_TR(0x6222bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6222c6:{NFSU2_TR(0x6222c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6222cd:{NFSU2_TR(0x6222cd);
u8 U[4];
w4(U+0,u32(u32(u32(0xde0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6222d4:{NFSU2_TR(0x6222d4);
u8 U[4];
w4(U+0,u32(u32(u32(0xd20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6222db:{NFSU2_TR(0x6222db);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6222e6:L6222e6:{c.instructions+=4;NFSU2_TR(0x6222e6);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6222ed:{NFSU2_TR(0x6222ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6222f8:{NFSU2_TR(0x6222f8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6222fe:{NFSU2_TR(0x6222fe);
__builtin_memmove((R+28),(R+28),4);
}
B622300:L622300:{c.instructions+=54;NFSU2_TR(0x622300);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B622302:{NFSU2_TR(0x622302);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B622305:{NFSU2_TR(0x622305);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B622308:{NFSU2_TR(0x622308);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B62230b:{NFSU2_TR(0x62230b);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B62230d:{NFSU2_TR(0x62230d);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B622310:{NFSU2_TR(0x622310);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622313:{NFSU2_TR(0x622313);
{u32 ea_=u32(r4(R+4)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B622316:{NFSU2_TR(0x622316);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B622318:{NFSU2_TR(0x622318);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62231b:{NFSU2_TR(0x62231b);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62231e:{NFSU2_TR(0x62231e);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622321:{NFSU2_TR(0x622321);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622323:{NFSU2_TR(0x622323);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622326:{NFSU2_TR(0x622326);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B622328:{NFSU2_TR(0x622328);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62232b:{NFSU2_TR(0x62232b);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62232e:{NFSU2_TR(0x62232e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B622330:{NFSU2_TR(0x622330);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B622333:{NFSU2_TR(0x622333);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622336:{NFSU2_TR(0x622336);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622339:{NFSU2_TR(0x622339);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62233c:{NFSU2_TR(0x62233c);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62233f:{NFSU2_TR(0x62233f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B622341:{NFSU2_TR(0x622341);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622344:{NFSU2_TR(0x622344);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622347:{NFSU2_TR(0x622347);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B622349:{NFSU2_TR(0x622349);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62234c:{NFSU2_TR(0x62234c);
{u32 ea_=u32(r4(R+0)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62234f:{NFSU2_TR(0x62234f);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622352:{NFSU2_TR(0x622352);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622355:{NFSU2_TR(0x622355);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622358:{NFSU2_TR(0x622358);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62235a:{NFSU2_TR(0x62235a);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62235d:{NFSU2_TR(0x62235d);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622360:{NFSU2_TR(0x622360);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B622362:{NFSU2_TR(0x622362);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B622365:{NFSU2_TR(0x622365);
{u32 ea_=u32(r4(R+16)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62236c:{NFSU2_TR(0x62236c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622373:{NFSU2_TR(0x622373);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B622375:{NFSU2_TR(0x622375);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B622378:{NFSU2_TR(0x622378);
{u32 ea_=u32(r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62237b:{NFSU2_TR(0x62237b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62237e:{NFSU2_TR(0x62237e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622381:{NFSU2_TR(0x622381);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B622383:{NFSU2_TR(0x622383);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622386:{NFSU2_TR(0x622386);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62238a:{NFSU2_TR(0x62238a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62238d:{NFSU2_TR(0x62238d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B62238f:{NFSU2_TR(0x62238f);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622396:{NFSU2_TR(0x622396);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62239c:{NFSU2_TR(0x62239c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B62239d:{NFSU2_TR(0x62239d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6223a4:{NFSU2_TR(0x6223a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x622300u);}goto L622300;}}
}
B6223aa:L6223aa:{c.instructions+=10;NFSU2_TR(0x6223aa);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6223b1:{NFSU2_TR(0x6223b1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6223b3:{NFSU2_TR(0x6223b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6223b5:{NFSU2_TR(0x6223b5);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6223b6:{NFSU2_TR(0x6223b6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6223b8:{NFSU2_TR(0x6223b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6223bf:{NFSU2_TR(0x6223bf);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6223c6:{NFSU2_TR(0x6223c6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6223c8:{NFSU2_TR(0x6223c8);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6223ce:{NFSU2_TR(0x6223ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6222e6u);}goto L6222e6;}}
}
B6223d4:L6223d4:{c.instructions+=11;NFSU2_TR(0x6223d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6223db:{NFSU2_TR(0x6223db);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6223dd:{NFSU2_TR(0x6223dd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6223df:{NFSU2_TR(0x6223df);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6223e1:{NFSU2_TR(0x6223e1);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6223e4:{NFSU2_TR(0x6223e4);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6223e7:{NFSU2_TR(0x6223e7);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6223ea:{NFSU2_TR(0x6223ea);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6223f0:{NFSU2_TR(0x6223f0);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6223f3:{NFSU2_TR(0x6223f3);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6223fa:{NFSU2_TR(0x6223fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L622400;}}
}
B6223fc:L6223fc:{c.instructions+=2;NFSU2_TR(0x6223fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6223fe:{NFSU2_TR(0x6223fe);
{goto L622405;}
}
B622400:L622400:{c.instructions+=1;NFSU2_TR(0x622400);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5c4ull))));
}
B622405:L622405:{c.instructions+=3;NFSU2_TR(0x622405);
u8 U[16];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B62240c:{NFSU2_TR(0x62240c);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622413:{NFSU2_TR(0x622413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L622695;}}
}
B622419:L622419:{c.instructions+=2;NFSU2_TR(0x622419);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B62241b:{NFSU2_TR(0x62241b);
if(r1(R+518)){{goto L622695;}}
}
B622421:L622421:{c.instructions+=6;NFSU2_TR(0x622421);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622426:{NFSU2_TR(0x622426);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622428:{NFSU2_TR(0x622428);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62242a:{NFSU2_TR(0x62242a);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B622431:{NFSU2_TR(0x622431);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622432:{NFSU2_TR(0x622432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622437ull));
TAIL_STATIC(0x401650u,401);
}
B622437:L622437:{c.instructions+=6;NFSU2_TR(0x622437);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62243c:{NFSU2_TR(0x62243c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62243e:{NFSU2_TR(0x62243e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622440:{NFSU2_TR(0x622440);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B622447:{NFSU2_TR(0x622447);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622448:{NFSU2_TR(0x622448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62244dull));
TAIL_STATIC(0x401650u,401);
}
B62244d:L62244d:{c.instructions+=4;NFSU2_TR(0x62244d);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622451:{NFSU2_TR(0x622451);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622455:{NFSU2_TR(0x622455);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622459:{NFSU2_TR(0x622459);
__builtin_memmove((R+16),(R+16),4);
}
B622460:L622460:{c.instructions+=5;NFSU2_TR(0x622460);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622464:{NFSU2_TR(0x622464);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622467:{NFSU2_TR(0x622467);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622469:{NFSU2_TR(0x622469);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B62246c:{NFSU2_TR(0x62246c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622471ull));
TAIL_STATIC(0x5b5350u,5b5);
}
B622471:L622471:{c.instructions+=47;NFSU2_TR(0x622471);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622475:{NFSU2_TR(0x622475);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622479:{NFSU2_TR(0x622479);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B62247d:{NFSU2_TR(0x62247d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62247f:{NFSU2_TR(0x62247f);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B622483:{NFSU2_TR(0x622483);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622486:{NFSU2_TR(0x622486);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62248a:{NFSU2_TR(0x62248a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62248d:{NFSU2_TR(0x62248d);
u8 U[12];
w4(U+0,u32(u32(u32(0xa80ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B622494:{NFSU2_TR(0x622494);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B622496:{NFSU2_TR(0x622496);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622499:{NFSU2_TR(0x622499);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62249c:{NFSU2_TR(0x62249c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62249e:{NFSU2_TR(0x62249e);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6224a1:{NFSU2_TR(0x6224a1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6224a3:{NFSU2_TR(0x6224a3);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6224a6:{NFSU2_TR(0x6224a6);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6224a9:{NFSU2_TR(0x6224a9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6224ac:{NFSU2_TR(0x6224ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6224ae:{NFSU2_TR(0x6224ae);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6224b1:{NFSU2_TR(0x6224b1);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6224b4:{NFSU2_TR(0x6224b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6224b6:{NFSU2_TR(0x6224b6);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6224b9:{NFSU2_TR(0x6224b9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6224bb:{NFSU2_TR(0x6224bb);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6224be:{NFSU2_TR(0x6224be);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6224c1:{NFSU2_TR(0x6224c1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6224c4:{NFSU2_TR(0x6224c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6224c6:{NFSU2_TR(0x6224c6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6224c9:{NFSU2_TR(0x6224c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6224cd:{NFSU2_TR(0x6224cd);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6224d0:{NFSU2_TR(0x6224d0);
u8 U[12];
w4(U+0,u32(u32(u32(0xa40ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6224d7:{NFSU2_TR(0x6224d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6224d9:{NFSU2_TR(0x6224d9);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6224dc:{NFSU2_TR(0x6224dc);
{u32 ea_=u32(r4(R+16)+u32(408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6224e3:{NFSU2_TR(0x6224e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6224ea:{NFSU2_TR(0x6224ea);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6224ec:{NFSU2_TR(0x6224ec);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6224ee:{NFSU2_TR(0x6224ee);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6224f1:{NFSU2_TR(0x6224f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6224f4:{NFSU2_TR(0x6224f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x82cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6224fb:{NFSU2_TR(0x6224fb);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622502:{NFSU2_TR(0x622502);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622503:{NFSU2_TR(0x622503);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622504:{NFSU2_TR(0x622504);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622506:{NFSU2_TR(0x622506);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622507:{NFSU2_TR(0x622507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62250cull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B62250c:L62250c:{c.instructions+=10;NFSU2_TR(0x62250c);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62250f:{NFSU2_TR(0x62250f);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B622513:{NFSU2_TR(0x622513);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622519:{NFSU2_TR(0x622519);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(2632u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B622520:{NFSU2_TR(0x622520);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622521:{NFSU2_TR(0x622521);
u8 U[12];
w4(U+0,u32(u32(u32(0xa44ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B622528:{NFSU2_TR(0x622528);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62252b:{NFSU2_TR(0x62252b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62252c:{NFSU2_TR(0x62252c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62252d:{NFSU2_TR(0x62252d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622532ull));
TAIL_STATIC(0x4011f0u,401);
}
B622532:L622532:{c.instructions+=11;NFSU2_TR(0x622532);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622536:{NFSU2_TR(0x622536);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62253a:{NFSU2_TR(0x62253a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B62253d:{NFSU2_TR(0x62253d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B622540:{NFSU2_TR(0x622540);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B622541:{NFSU2_TR(0x622541);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B622544:{NFSU2_TR(0x622544);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B622549:{NFSU2_TR(0x622549);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62254d:{NFSU2_TR(0x62254d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622551:{NFSU2_TR(0x622551);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622555:{NFSU2_TR(0x622555);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x622460u);}goto L622460;}}
}
B62255b:L62255b:{c.instructions+=3;NFSU2_TR(0x62255b);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B622566:{NFSU2_TR(0x622566);
u8 U[4];
w4(U+0,u32(u32(u32(0xde8ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B62256d:{NFSU2_TR(0x62256d);
__builtin_memmove((R+4),(R+4),4);
}
B622570:L622570:{c.instructions+=8;NFSU2_TR(0x622570);
u8 U[4];
w4(U+0,u32(u32(u32(0x157ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B622577:{NFSU2_TR(0x622577);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622578:{NFSU2_TR(0x622578);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62257f:{NFSU2_TR(0x62257f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622581:{NFSU2_TR(0x622581);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B622584:{NFSU2_TR(0x622584);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622586:{NFSU2_TR(0x622586);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622587:{NFSU2_TR(0x622587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62258cull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B62258c:L62258c:{c.instructions+=5;NFSU2_TR(0x62258c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62258e:{NFSU2_TR(0x62258e);
u8 U[5];
w4(U+0,u32(u32(u32(0x157ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B622595:{NFSU2_TR(0x622595);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B622597:{NFSU2_TR(0x622597);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62259e:{NFSU2_TR(0x62259e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6225ea;}}
}
B6225a0:L6225a0:{c.instructions+=4;NFSU2_TR(0x6225a0);
u8 U[16];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6225a7:{NFSU2_TR(0x6225a7);
u8 U[13];
w4(U+0,u32(u32(u32(0x82cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B6225ae:{NFSU2_TR(0x6225ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6225b0:{NFSU2_TR(0x6225b0);
if(r1(R+518)){{goto L6225ea;}}
}
B6225b2:L6225b2:{c.instructions+=11;NFSU2_TR(0x6225b2);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6225b5:{NFSU2_TR(0x6225b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6225b8:{NFSU2_TR(0x6225b8);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(2692u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6225bf:{NFSU2_TR(0x6225bf);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(2628u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6225c6:{NFSU2_TR(0x6225c6);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6225c9:{NFSU2_TR(0x6225c9);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(2688u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6225d0:{NFSU2_TR(0x6225d0);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(2624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6225d7:{NFSU2_TR(0x6225d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6225d9:{NFSU2_TR(0x6225d9);
{u32 ea_=u32(r4(R+0)+r4(R+16)+u32(2696u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6225e0:{NFSU2_TR(0x6225e0);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6225e2:{NFSU2_TR(0x6225e2);
u8 U[5];
w4(U+0,u32(u32(u32(0x157ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6225ea:L6225ea:{c.instructions+=6;NFSU2_TR(0x6225ea);
__builtin_memmove((R+8),(R+4),4);
}
B6225ec:{NFSU2_TR(0x6225ec);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6225ee:{NFSU2_TR(0x6225ee);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B6225f0:{NFSU2_TR(0x6225f0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x5ull))));
}
B6225f3:{NFSU2_TR(0x6225f3);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6225f6:{NFSU2_TR(0x6225f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L622603;}}
}
B6225f8:L6225f8:{c.instructions+=3;NFSU2_TR(0x6225f8);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6225ff:{NFSU2_TR(0x6225ff);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B622601:{NFSU2_TR(0x622601);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B622603:L622603:{c.instructions+=3;NFSU2_TR(0x622603);
u8 U[5];
w4(U+0,u32(u32(u32(0x157ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B62260a:{NFSU2_TR(0x62260a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B62260c:{NFSU2_TR(0x62260c);
if(r1(R+518)){{goto L62264d;}}
}
B62260e:L62260e:{c.instructions+=5;NFSU2_TR(0x62260e);
__builtin_memmove((R+0),gp(0x8a1f08),4);
}
B622613:{NFSU2_TR(0x622613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B622615:{NFSU2_TR(0x622615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622616:{NFSU2_TR(0x622616);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622617:{NFSU2_TR(0x622617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62261cull));
TAIL_STATIC(0x60cf70u,60c);
}
B62261c:L62261c:{c.instructions+=3;NFSU2_TR(0x62261c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B62261f:{NFSU2_TR(0x62261f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B622621:{NFSU2_TR(0x622621);
if(r1(R+518)){{goto L622646;}}
}
B622623:L622623:{c.instructions+=3;NFSU2_TR(0x622623);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B622626:{NFSU2_TR(0x622626);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622627:{NFSU2_TR(0x622627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62262cull));
TAIL_STATIC(0x60cf90u,60c);
}
B62262c:L62262c:{c.instructions+=3;NFSU2_TR(0x62262c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B62262f:{NFSU2_TR(0x62262f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B622631:{NFSU2_TR(0x622631);
if(r1(R+518)){{goto L622646;}}
}
B622633:L622633:{c.instructions+=5;NFSU2_TR(0x622633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B622635:{NFSU2_TR(0x622635);
{u32 ea_=u32(u32(8021684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62263b:{NFSU2_TR(0x62263b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62263d:{NFSU2_TR(0x62263d);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622644:{NFSU2_TR(0x622644);
{goto L622676;}
}
B622646:L622646:{c.instructions+=1;NFSU2_TR(0x622646);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62264d:L62264d:{c.instructions+=11;NFSU2_TR(0x62264d);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622654:{NFSU2_TR(0x622654);
__builtin_memmove((R+0),(R+4),4);
}
B622656:{NFSU2_TR(0x622656);
{u32 ea_=u32(u32(8021684u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B62265c:{NFSU2_TR(0x62265c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B62265d:{NFSU2_TR(0x62265d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B622660:{NFSU2_TR(0x622660);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B622662:{NFSU2_TR(0x622662);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B622665:{NFSU2_TR(0x622665);
u8 U[16];
w4(U+0,u32(u32(u32(0x860ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B62266c:{NFSU2_TR(0x62266c);
u8 U[12];
w4(U+0,u32(u32(u32(0x860ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B622673:{NFSU2_TR(0x622673);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B622674:{NFSU2_TR(0x622674);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B622676:L622676:{c.instructions+=7;NFSU2_TR(0x622676);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62267d:{NFSU2_TR(0x62267d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62267f:{NFSU2_TR(0x62267f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B622680:{NFSU2_TR(0x622680);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B622683:{NFSU2_TR(0x622683);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B622686:{NFSU2_TR(0x622686);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62268d:{NFSU2_TR(0x62268d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x622570u);}goto L622570;}}
}
B622693:L622693:{c.instructions+=1;NFSU2_TR(0x622693);
{goto L6226ce;}
}
B622695:L622695:{c.instructions+=2;NFSU2_TR(0x622695);
u8 U[4];
w4(U+0,u32(u32(u32(0xde8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B62269c:{NFSU2_TR(0x62269c);
__builtin_memmove((R+16),(R+16),4);
}
B6226a0:L6226a0:{c.instructions+=8;NFSU2_TR(0x6226a0);
__builtin_memmove((R+4),gp(0x7a66bc),4);
}
B6226a6:{NFSU2_TR(0x6226a6);
__builtin_memmove((R+8),(R+24),4);
}
B6226a8:{NFSU2_TR(0x6226a8);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6226aa:{NFSU2_TR(0x6226aa);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+24))));
}
B6226ac:{NFSU2_TR(0x6226ac);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x5ull))));
}
B6226af:{NFSU2_TR(0x6226af);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6226b2:{NFSU2_TR(0x6226b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6226b4:{NFSU2_TR(0x6226b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6226c5;}}
}
B6226b6:L6226b6:{c.instructions+=3;NFSU2_TR(0x6226b6);
{u32 ea_=u32(u32(8021692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6226bc:{NFSU2_TR(0x6226bc);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6226c3:{NFSU2_TR(0x6226c3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6226c5:L6226c5:{c.instructions+=4;NFSU2_TR(0x6226c5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6226c6:{NFSU2_TR(0x6226c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6226c9:{NFSU2_TR(0x6226c9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6226cc:{NFSU2_TR(0x6226cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6226a0u);}goto L6226a0;}}
}
B6226ce:L6226ce:{c.instructions+=9;NFSU2_TR(0x6226ce);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6226d4:{NFSU2_TR(0x6226d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6226d7:{NFSU2_TR(0x6226d7);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6226de:{NFSU2_TR(0x6226de);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6226e2:{NFSU2_TR(0x6226e2);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6226e7:{NFSU2_TR(0x6226e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6226e9:{NFSU2_TR(0x6226e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6226ea:{NFSU2_TR(0x6226ea);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6226f1:{NFSU2_TR(0x6226f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6226f6ull));
TAIL_STATIC(0x401090u,401);
}
B6226f6:L6226f6:{c.instructions+=24;NFSU2_TR(0x6226f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x194ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6226fd:{NFSU2_TR(0x6226fd);
__builtin_memmove((R+4),(R+0),4);
}
B6226ff:{NFSU2_TR(0x6226ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B622702:{NFSU2_TR(0x622702);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B622704:{NFSU2_TR(0x622704);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B622706:{NFSU2_TR(0x622706);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62270d:{NFSU2_TR(0x62270d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80ull))));
}
B622713:{NFSU2_TR(0x622713);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B622715:{NFSU2_TR(0x622715);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62271c:{NFSU2_TR(0x62271c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622720:{NFSU2_TR(0x622720);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622724:{NFSU2_TR(0x622724);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B622726:{NFSU2_TR(0x622726);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622729:{NFSU2_TR(0x622729);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xeull))));
}
B62272c:{NFSU2_TR(0x62272c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B62272e:{NFSU2_TR(0x62272e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x72ull))));
}
B622731:{NFSU2_TR(0x622731);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622735:{NFSU2_TR(0x622735);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62273c:{NFSU2_TR(0x62273c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622740:{NFSU2_TR(0x622740);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B622742:{NFSU2_TR(0x622742);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B622744:{NFSU2_TR(0x622744);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B622746:{NFSU2_TR(0x622746);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B622748:{NFSU2_TR(0x622748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62274dull));
TAIL_STATIC(0x75bed4u,75b);
}
B62274d:L62274d:{c.instructions+=3;NFSU2_TR(0x62274d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B62274f:{NFSU2_TR(0x62274f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622751:{NFSU2_TR(0x622751);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622757;}}
}
B622753:L622753:{c.instructions+=2;NFSU2_TR(0x622753);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B622755:{NFSU2_TR(0x622755);
{goto L622763;}
}
B622757:L622757:{c.instructions+=2;NFSU2_TR(0x622757);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62275c:{NFSU2_TR(0x62275c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L622763;}}
}
B62275e:L62275e:{c.instructions+=1;NFSU2_TR(0x62275e);
w4(R+0,u32(0xfeull));
}
B622763:L622763:{c.instructions+=11;NFSU2_TR(0x622763);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622766:{NFSU2_TR(0x622766);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x808080ull))));
}
B62276b:{NFSU2_TR(0x62276b);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622772:{NFSU2_TR(0x622772);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622775:{NFSU2_TR(0x622775);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62277b:{NFSU2_TR(0x62277b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62277d:{NFSU2_TR(0x62277d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622783:{NFSU2_TR(0x622783);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x804ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622789:{NFSU2_TR(0x622789);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622790:{NFSU2_TR(0x622790);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622797:{NFSU2_TR(0x622797);
if(r1(R+518)){{goto L6227a3;}}
}
B622799:L622799:{c.instructions+=4;NFSU2_TR(0x622799);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B62279c:{NFSU2_TR(0x62279c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B62279f:{NFSU2_TR(0x62279f);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6227a1:{NFSU2_TR(0x6227a1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6227ce;}}
}
B6227a3:L6227a3:{c.instructions+=2;NFSU2_TR(0x6227a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6227a5:{NFSU2_TR(0x6227a5);
if(r1(R+518)){{goto L6227b1;}}
}
B6227a7:L6227a7:{c.instructions+=4;NFSU2_TR(0x6227a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6227aa:{NFSU2_TR(0x6227aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B6227ad:{NFSU2_TR(0x6227ad);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6227af:{NFSU2_TR(0x6227af);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6227ce;}}
}
B6227b1:L6227b1:{c.instructions+=2;NFSU2_TR(0x6227b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6227b3:{NFSU2_TR(0x6227b3);
if(r1(R+518)){{goto L622d2f;}}
}
B6227b9:L6227b9:{c.instructions+=5;NFSU2_TR(0x6227b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6227c0:{NFSU2_TR(0x6227c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6227c3:{NFSU2_TR(0x6227c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B6227c6:{NFSU2_TR(0x6227c6);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6227c8:{NFSU2_TR(0x6227c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L622d2f;}}
}
B6227ce:L6227ce:{c.instructions+=2;NFSU2_TR(0x6227ce);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6227d5:{NFSU2_TR(0x6227d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6227df;}}
}
B6227d7:L6227d7:{c.instructions+=2;NFSU2_TR(0x6227d7);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6227dd:{NFSU2_TR(0x6227dd);
{goto L6227e5;}
}
B6227df:L6227df:{c.instructions+=1;NFSU2_TR(0x6227df);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6227e5:L6227e5:{c.instructions+=3;NFSU2_TR(0x6227e5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6227eb:{NFSU2_TR(0x6227eb);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6227f2:{NFSU2_TR(0x6227f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6227f7ull));
TAIL_STATIC(0x510c30u,510);
}
B6227f7:L6227f7:{c.instructions+=2;NFSU2_TR(0x6227f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6227f9:{NFSU2_TR(0x6227f9);
if(r1(R+518)){{goto L622803;}}
}
B6227fb:L6227fb:{c.instructions+=2;NFSU2_TR(0x6227fb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622801:{NFSU2_TR(0x622801);
{goto L62280a;}
}
B622803:L622803:{c.instructions+=1;NFSU2_TR(0x622803);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62280a:L62280a:{c.instructions+=14;NFSU2_TR(0x62280a);
{u32 ea_=u32(u32(8021612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622810:{NFSU2_TR(0x622810);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622812:{NFSU2_TR(0x622812);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B622814:{NFSU2_TR(0x622814);
{u32 ea_=u32(u32(8021616u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62281a:{NFSU2_TR(0x62281a);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B62281c:{NFSU2_TR(0x62281c);
{u32 ea_=u32(u32(8021620u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622822:{NFSU2_TR(0x622822);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B622826:{NFSU2_TR(0x622826);
{u32 ea_=u32(u32(8021432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62282c:{NFSU2_TR(0x62282c);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B62282e:{NFSU2_TR(0x62282e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B622834:{NFSU2_TR(0x622834);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B622838:{NFSU2_TR(0x622838);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B62283a:{NFSU2_TR(0x62283a);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62283e:{NFSU2_TR(0x62283e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622843ull));
TAIL_STATIC(0x75bed4u,75b);
}
B622843:L622843:{c.instructions+=9;NFSU2_TR(0x622843);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622847:{NFSU2_TR(0x622847);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B62284b:{NFSU2_TR(0x62284b);
{u32 ea_=u32(u32(8021432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622851:{NFSU2_TR(0x622851);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B622853:{NFSU2_TR(0x622853);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B622855:{NFSU2_TR(0x622855);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62285c:{NFSU2_TR(0x62285c);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622860:{NFSU2_TR(0x622860);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B622862:{NFSU2_TR(0x622862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622867ull));
TAIL_STATIC(0x75bed4u,75b);
}
B622867:L622867:{c.instructions+=11;NFSU2_TR(0x622867);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62286b:{NFSU2_TR(0x62286b);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B62286f:{NFSU2_TR(0x62286f);
{u32 ea_=u32(u32(8021432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622875:{NFSU2_TR(0x622875);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B622877:{NFSU2_TR(0x622877);
__asm__ volatile(".byte 0xd8,0xea":::"memory");
}
B622879:{NFSU2_TR(0x622879);
{u32 ea_=u32(r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B622880:{NFSU2_TR(0x622880);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B622882:{NFSU2_TR(0x622882);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B622884:{NFSU2_TR(0x622884);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622888:{NFSU2_TR(0x622888);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62288c:{NFSU2_TR(0x62288c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622891ull));
TAIL_STATIC(0x75bed4u,75b);
}
B622891:L622891:{c.instructions+=9;NFSU2_TR(0x622891);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622898:{NFSU2_TR(0x622898);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62289c:{NFSU2_TR(0x62289c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6228a0:{NFSU2_TR(0x6228a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6228a1:{NFSU2_TR(0x6228a1);
{u32 ea_=u32(u32(8021432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6228a7:{NFSU2_TR(0x6228a7);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6228a9:{NFSU2_TR(0x6228a9);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6228ad:{NFSU2_TR(0x6228ad);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6228b1:{NFSU2_TR(0x6228b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6228b6ull));
TAIL_STATIC(0x43c350u,43c);
}
B6228b6:L6228b6:{c.instructions+=4;NFSU2_TR(0x6228b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6228bd:{NFSU2_TR(0x6228bd);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6228c4:{NFSU2_TR(0x6228c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6228c5:{NFSU2_TR(0x6228c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6228caull));
TAIL_STATIC(0x43c350u,43c);
}
B6228ca:L6228ca:{c.instructions+=4;NFSU2_TR(0x6228ca);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6228ce:{NFSU2_TR(0x6228ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6228d2:{NFSU2_TR(0x6228d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6228d3:{NFSU2_TR(0x6228d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6228d8ull));
TAIL_STATIC(0x43c350u,43c);
}
B6228d8:L6228d8:{c.instructions+=11;NFSU2_TR(0x6228d8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B6228da:{NFSU2_TR(0x6228da);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6228de:{NFSU2_TR(0x6228de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6228e1:{NFSU2_TR(0x6228e1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B6228e3:{NFSU2_TR(0x6228e3);
{u32 ea_=u32(r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6228ea:{NFSU2_TR(0x6228ea);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B6228ec:{NFSU2_TR(0x6228ec);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6228ee:{NFSU2_TR(0x6228ee);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6228f0:{NFSU2_TR(0x6228f0);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B6228f2:{NFSU2_TR(0x6228f2);
{u32 ea_=u32(u32(8021624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6228f8:{NFSU2_TR(0x6228f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6228fdull));
TAIL_STATIC(0x75bed4u,75b);
}
B6228fd:L6228fd:{c.instructions+=6;NFSU2_TR(0x6228fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x350ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B622904:{NFSU2_TR(0x622904);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622908:{NFSU2_TR(0x622908);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62290f:{NFSU2_TR(0x62290f);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622913:{NFSU2_TR(0x622913);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622915:{NFSU2_TR(0x622915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62291aull));
TAIL_STATIC(0x75bed4u,75b);
}
B62291a:L62291a:{c.instructions+=8;NFSU2_TR(0x62291a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B622921:{NFSU2_TR(0x622921);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x351ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B622928:{NFSU2_TR(0x622928);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B62292a:{NFSU2_TR(0x62292a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622931:{NFSU2_TR(0x622931);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622935:{NFSU2_TR(0x622935);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622939:{NFSU2_TR(0x622939);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B62293b:{NFSU2_TR(0x62293b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622940ull));
TAIL_STATIC(0x75bed4u,75b);
}
B622940:L622940:{c.instructions+=8;NFSU2_TR(0x622940);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x352ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B622947:{NFSU2_TR(0x622947);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B62294e:{NFSU2_TR(0x62294e);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622952:{NFSU2_TR(0x622952);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B622954:{NFSU2_TR(0x622954);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62295b:{NFSU2_TR(0x62295b);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B62295f:{NFSU2_TR(0x62295f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622961:{NFSU2_TR(0x622961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622966ull));
TAIL_STATIC(0x75bed4u,75b);
}
B622966:L622966:{c.instructions+=8;NFSU2_TR(0x622966);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x353ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B62296d:{NFSU2_TR(0x62296d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B622974:{NFSU2_TR(0x622974);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622978:{NFSU2_TR(0x622978);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B62297a:{NFSU2_TR(0x62297a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622981:{NFSU2_TR(0x622981);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622985:{NFSU2_TR(0x622985);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622987:{NFSU2_TR(0x622987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62298cull));
TAIL_STATIC(0x75bed4u,75b);
}
B62298c:L62298c:{c.instructions+=7;NFSU2_TR(0x62298c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B622993:{NFSU2_TR(0x622993);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62299a:{NFSU2_TR(0x62299a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B62299c:{NFSU2_TR(0x62299c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6229a3:{NFSU2_TR(0x6229a3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6229a5:{NFSU2_TR(0x6229a5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6229a7:{NFSU2_TR(0x6229a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6229ec;}}
}
B6229a9:L6229a9:{c.instructions+=3;NFSU2_TR(0x6229a9);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6229ae:{NFSU2_TR(0x6229ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0xfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B6229b6:{NFSU2_TR(0x6229b6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6229bc;}}
}
B6229b8:L6229b8:{c.instructions+=1;NFSU2_TR(0x6229b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6229bc:L6229bc:{c.instructions+=3;NFSU2_TR(0x6229bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6229c3:{NFSU2_TR(0x6229c3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6229c5:{NFSU2_TR(0x6229c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6229f0;}}
}
B6229c7:L6229c7:{c.instructions+=4;NFSU2_TR(0x6229c7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6229cd:{NFSU2_TR(0x6229cd);
__builtin_memmove((R+0),(R+8),4);
}
B6229cf:{NFSU2_TR(0x6229cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0xfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B6229d7:{NFSU2_TR(0x6229d7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6229dd;}}
}
B6229d9:L6229d9:{c.instructions+=1;NFSU2_TR(0x6229d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6229dd:L6229dd:{c.instructions+=3;NFSU2_TR(0x6229dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6229e4:{NFSU2_TR(0x6229e4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6229e6:{NFSU2_TR(0x6229e6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6229f4;}}
}
B6229e8:L6229e8:{c.instructions+=2;NFSU2_TR(0x6229e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6229ea:{NFSU2_TR(0x6229ea);
{goto L622a03;}
}
B6229ec:L6229ec:{c.instructions+=2;NFSU2_TR(0x6229ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6229ee:{NFSU2_TR(0x6229ee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6229b8u);}goto L6229b8;}
}
B6229f0:L6229f0:{c.instructions+=2;NFSU2_TR(0x6229f0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6229f2:{NFSU2_TR(0x6229f2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6229d9u);}goto L6229d9;}
}
B6229f4:L6229f4:{c.instructions+=3;NFSU2_TR(0x6229f4);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6229f9:{NFSU2_TR(0x6229f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0xfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B622a01:{NFSU2_TR(0x622a01);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622a07;}}
}
B622a03:L622a03:{c.instructions+=1;NFSU2_TR(0x622a03);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622a07:L622a07:{c.instructions+=2;NFSU2_TR(0x622a07);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622a09:{NFSU2_TR(0x622a09);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622a0f;}}
}
B622a0b:L622a0b:{c.instructions+=2;NFSU2_TR(0x622a0b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B622a0d:{NFSU2_TR(0x622a0d);
{goto L622a1c;}
}
B622a0f:L622a0f:{c.instructions+=3;NFSU2_TR(0x622a0f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B622a15:{NFSU2_TR(0x622a15);
w4(R+0,u32(0xfeull));
}
B622a1a:{NFSU2_TR(0x622a1a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622a1e;}}
}
B622a1c:L622a1c:{c.instructions+=1;NFSU2_TR(0x622a1c);
__builtin_memmove((R+0),(R+4),4);
}
B622a1e:L622a1e:{c.instructions+=14;NFSU2_TR(0x622a1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622a22:{NFSU2_TR(0x622a22);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622a29:{NFSU2_TR(0x622a29);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622a30:{NFSU2_TR(0x622a30);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622a33:{NFSU2_TR(0x622a33);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622a35:{NFSU2_TR(0x622a35);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622a39:{NFSU2_TR(0x622a39);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B622a40:{NFSU2_TR(0x622a40);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622a43:{NFSU2_TR(0x622a43);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622a45:{NFSU2_TR(0x622a45);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622a49:{NFSU2_TR(0x622a49);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622a4c:{NFSU2_TR(0x622a4c);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622a4e:{NFSU2_TR(0x622a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622a54:{NFSU2_TR(0x622a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622a59ull));
TAIL_STATIC(0x75bed4u,75b);
}
B622a59:L622a59:{c.instructions+=3;NFSU2_TR(0x622a59);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622a5c:{NFSU2_TR(0x622a5c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B622a61:{NFSU2_TR(0x622a61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L622a68;}}
}
B622a63:L622a63:{c.instructions+=1;NFSU2_TR(0x622a63);
w4(R+0,u32(0xffull));
}
B622a68:L622a68:{c.instructions+=13;NFSU2_TR(0x622a68);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622a6c:{NFSU2_TR(0x622a6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622a6f:{NFSU2_TR(0x622a6f);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622a71:{NFSU2_TR(0x622a71);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622a75:{NFSU2_TR(0x622a75);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622a78:{NFSU2_TR(0x622a78);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622a7a:{NFSU2_TR(0x622a7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622a7e:{NFSU2_TR(0x622a7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622a81:{NFSU2_TR(0x622a81);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622a83:{NFSU2_TR(0x622a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x354ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622a89:{NFSU2_TR(0x622a89);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622a90:{NFSU2_TR(0x622a90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622a92:{NFSU2_TR(0x622a92);
if(r1(R+518)){{goto L622bd9;}}
}
B622a98:L622a98:{c.instructions+=5;NFSU2_TR(0x622a98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x360ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B622a9f:{NFSU2_TR(0x622a9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622aa3:{NFSU2_TR(0x622aa3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622aa7:{NFSU2_TR(0x622aa7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622aa9:{NFSU2_TR(0x622aa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622aaeull));
TAIL_STATIC(0x75bed4u,75b);
}
B622aae:L622aae:{c.instructions+=8;NFSU2_TR(0x622aae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x361ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B622ab5:{NFSU2_TR(0x622ab5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B622abc:{NFSU2_TR(0x622abc);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622ac0:{NFSU2_TR(0x622ac0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B622ac2:{NFSU2_TR(0x622ac2);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622ac9:{NFSU2_TR(0x622ac9);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622acd:{NFSU2_TR(0x622acd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622acf:{NFSU2_TR(0x622acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622ad4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B622ad4:L622ad4:{c.instructions+=8;NFSU2_TR(0x622ad4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x362ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B622adb:{NFSU2_TR(0x622adb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B622ae2:{NFSU2_TR(0x622ae2);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622ae6:{NFSU2_TR(0x622ae6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B622ae8:{NFSU2_TR(0x622ae8);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622aef:{NFSU2_TR(0x622aef);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622af3:{NFSU2_TR(0x622af3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622af5:{NFSU2_TR(0x622af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622afaull));
TAIL_STATIC(0x75bed4u,75b);
}
B622afa:L622afa:{c.instructions+=8;NFSU2_TR(0x622afa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x363ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B622b01:{NFSU2_TR(0x622b01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B622b08:{NFSU2_TR(0x622b08);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622b0c:{NFSU2_TR(0x622b0c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B622b0e:{NFSU2_TR(0x622b0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622b15:{NFSU2_TR(0x622b15);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622b19:{NFSU2_TR(0x622b19);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622b1b:{NFSU2_TR(0x622b1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622b20ull));
TAIL_STATIC(0x75bed4u,75b);
}
B622b20:L622b20:{c.instructions+=7;NFSU2_TR(0x622b20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B622b27:{NFSU2_TR(0x622b27);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622b2e:{NFSU2_TR(0x622b2e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B622b30:{NFSU2_TR(0x622b30);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622b37:{NFSU2_TR(0x622b37);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B622b39:{NFSU2_TR(0x622b39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622b3b:{NFSU2_TR(0x622b3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L622b65;}}
}
B622b3d:L622b3d:{c.instructions+=3;NFSU2_TR(0x622b3d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622b42:{NFSU2_TR(0x622b42);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0xfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B622b4d:{NFSU2_TR(0x622b4d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622b56;}}
}
B622b4f:L622b4f:{c.instructions+=1;NFSU2_TR(0x622b4f);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622b56:L622b56:{c.instructions+=3;NFSU2_TR(0x622b56);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622b5d:{NFSU2_TR(0x622b5d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622b5f:{NFSU2_TR(0x622b5f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622b69;}}
}
B622b61:L622b61:{c.instructions+=2;NFSU2_TR(0x622b61);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B622b63:{NFSU2_TR(0x622b63);
{goto L622b7b;}
}
B622b65:L622b65:{c.instructions+=2;NFSU2_TR(0x622b65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B622b67:{NFSU2_TR(0x622b67);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x622b4fu);}goto L622b4f;}
}
B622b69:L622b69:{c.instructions+=3;NFSU2_TR(0x622b69);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622b6e:{NFSU2_TR(0x622b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0xfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B622b79:{NFSU2_TR(0x622b79);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622b82;}}
}
B622b7b:L622b7b:{c.instructions+=1;NFSU2_TR(0x622b7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622b82:L622b82:{c.instructions+=3;NFSU2_TR(0x622b82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622b89:{NFSU2_TR(0x622b89);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622b8b:{NFSU2_TR(0x622b8b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622b91;}}
}
B622b8d:L622b8d:{c.instructions+=2;NFSU2_TR(0x622b8d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B622b8f:{NFSU2_TR(0x622b8f);
{goto L622b9d;}
}
B622b91:L622b91:{c.instructions+=3;NFSU2_TR(0x622b91);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622b96:{NFSU2_TR(0x622b96);
w4(R+8,u32(0xfeull));
}
B622b9b:{NFSU2_TR(0x622b9b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622b9f;}}
}
B622b9d:L622b9d:{c.instructions+=1;NFSU2_TR(0x622b9d);
__builtin_memmove((R+8),(R+0),4);
}
B622b9f:L622b9f:{c.instructions+=2;NFSU2_TR(0x622b9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622ba1:{NFSU2_TR(0x622ba1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622ba7;}}
}
B622ba3:L622ba3:{c.instructions+=2;NFSU2_TR(0x622ba3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B622ba5:{NFSU2_TR(0x622ba5);
{goto L622bb4;}
}
B622ba7:L622ba7:{c.instructions+=3;NFSU2_TR(0x622ba7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B622bad:{NFSU2_TR(0x622bad);
w4(R+0,u32(0xfeull));
}
B622bb2:{NFSU2_TR(0x622bb2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622bb6;}}
}
B622bb4:L622bb4:{c.instructions+=1;NFSU2_TR(0x622bb4);
__builtin_memmove((R+0),(R+4),4);
}
B622bb6:L622bb6:{c.instructions+=9;NFSU2_TR(0x622bb6);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622bbd:{NFSU2_TR(0x622bbd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622bc0:{NFSU2_TR(0x622bc0);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B622bc2:{NFSU2_TR(0x622bc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622bc5:{NFSU2_TR(0x622bc5);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622bc7:{NFSU2_TR(0x622bc7);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622bce:{NFSU2_TR(0x622bce);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622bd1:{NFSU2_TR(0x622bd1);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622bd3:{NFSU2_TR(0x622bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x364ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622bd9:L622bd9:{c.instructions+=3;NFSU2_TR(0x622bd9);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622be0:{NFSU2_TR(0x622be0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622be2:{NFSU2_TR(0x622be2);
if(r1(R+518)){{goto L622d2d;}}
}
B622be8:L622be8:{c.instructions+=5;NFSU2_TR(0x622be8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x378ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B622bef:{NFSU2_TR(0x622bef);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622bf3:{NFSU2_TR(0x622bf3);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622bf7:{NFSU2_TR(0x622bf7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622bf9:{NFSU2_TR(0x622bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622bfeull));
TAIL_STATIC(0x75bed4u,75b);
}
B622bfe:L622bfe:{c.instructions+=8;NFSU2_TR(0x622bfe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x379ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B622c05:{NFSU2_TR(0x622c05);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x374ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B622c0c:{NFSU2_TR(0x622c0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622c10:{NFSU2_TR(0x622c10);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B622c12:{NFSU2_TR(0x622c12);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622c19:{NFSU2_TR(0x622c19);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622c1d:{NFSU2_TR(0x622c1d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622c1f:{NFSU2_TR(0x622c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622c24ull));
TAIL_STATIC(0x75bed4u,75b);
}
B622c24:L622c24:{c.instructions+=8;NFSU2_TR(0x622c24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B622c2b:{NFSU2_TR(0x622c2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x375ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B622c32:{NFSU2_TR(0x622c32);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622c36:{NFSU2_TR(0x622c36);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B622c38:{NFSU2_TR(0x622c38);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622c3f:{NFSU2_TR(0x622c3f);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622c43:{NFSU2_TR(0x622c43);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622c45:{NFSU2_TR(0x622c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622c4aull));
TAIL_STATIC(0x75bed4u,75b);
}
B622c4a:L622c4a:{c.instructions+=8;NFSU2_TR(0x622c4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B622c51:{NFSU2_TR(0x622c51);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x376ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B622c58:{NFSU2_TR(0x622c58);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622c5c:{NFSU2_TR(0x622c5c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B622c5e:{NFSU2_TR(0x622c5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622c65:{NFSU2_TR(0x622c65);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B622c69:{NFSU2_TR(0x622c69);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B622c6b:{NFSU2_TR(0x622c6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622c70ull));
TAIL_STATIC(0x75bed4u,75b);
}
B622c70:L622c70:{c.instructions+=8;NFSU2_TR(0x622c70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B622c72:{NFSU2_TR(0x622c72);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x377ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B622c79:{NFSU2_TR(0x622c79);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622c80:{NFSU2_TR(0x622c80);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B622c82:{NFSU2_TR(0x622c82);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622c89:{NFSU2_TR(0x622c89);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B622c8b:{NFSU2_TR(0x622c8b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622c8d:{NFSU2_TR(0x622c8d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L622cb7;}}
}
B622c8f:L622c8f:{c.instructions+=3;NFSU2_TR(0x622c8f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622c94:{NFSU2_TR(0x622c94);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0xfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B622c9f:{NFSU2_TR(0x622c9f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622ca8;}}
}
B622ca1:L622ca1:{c.instructions+=1;NFSU2_TR(0x622ca1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622ca8:L622ca8:{c.instructions+=3;NFSU2_TR(0x622ca8);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622caf:{NFSU2_TR(0x622caf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622cb1:{NFSU2_TR(0x622cb1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622cbb;}}
}
B622cb3:L622cb3:{c.instructions+=2;NFSU2_TR(0x622cb3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B622cb5:{NFSU2_TR(0x622cb5);
{goto L622ccd;}
}
B622cb7:L622cb7:{c.instructions+=2;NFSU2_TR(0x622cb7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B622cb9:{NFSU2_TR(0x622cb9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x622ca1u);}goto L622ca1;}
}
B622cbb:L622cbb:{c.instructions+=3;NFSU2_TR(0x622cbb);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622cc0:{NFSU2_TR(0x622cc0);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0xfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B622ccb:{NFSU2_TR(0x622ccb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622cd4;}}
}
B622ccd:L622ccd:{c.instructions+=1;NFSU2_TR(0x622ccd);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622cd4:L622cd4:{c.instructions+=3;NFSU2_TR(0x622cd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622cdb:{NFSU2_TR(0x622cdb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622cdd:{NFSU2_TR(0x622cdd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622ce3;}}
}
B622cdf:L622cdf:{c.instructions+=2;NFSU2_TR(0x622cdf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B622ce1:{NFSU2_TR(0x622ce1);
{goto L622cef;}
}
B622ce3:L622ce3:{c.instructions+=3;NFSU2_TR(0x622ce3);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622ce8:{NFSU2_TR(0x622ce8);
w4(R+4,u32(0xfeull));
}
B622ced:{NFSU2_TR(0x622ced);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622cf1;}}
}
B622cef:L622cef:{c.instructions+=1;NFSU2_TR(0x622cef);
__builtin_memmove((R+4),(R+0),4);
}
B622cf1:L622cf1:{c.instructions+=2;NFSU2_TR(0x622cf1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622cf3:{NFSU2_TR(0x622cf3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622cf9;}}
}
B622cf5:L622cf5:{c.instructions+=2;NFSU2_TR(0x622cf5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B622cf7:{NFSU2_TR(0x622cf7);
{goto L622d06;}
}
B622cf9:L622cf9:{c.instructions+=3;NFSU2_TR(0x622cf9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B622cff:{NFSU2_TR(0x622cff);
w4(R+0,u32(0xfeull));
}
B622d04:{NFSU2_TR(0x622d04);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L622d08;}}
}
B622d06:L622d06:{c.instructions+=1;NFSU2_TR(0x622d06);
__builtin_memmove((R+0),(R+8),4);
}
B622d08:L622d08:{c.instructions+=10;NFSU2_TR(0x622d08);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622d0b:{NFSU2_TR(0x622d0b);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622d0d:{NFSU2_TR(0x622d0d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622d14:{NFSU2_TR(0x622d14);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622d17:{NFSU2_TR(0x622d17);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622d19:{NFSU2_TR(0x622d19);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622d20:{NFSU2_TR(0x622d20);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B622d23:{NFSU2_TR(0x622d23);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B622d25:{NFSU2_TR(0x622d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622d2b:{NFSU2_TR(0x622d2b);
{goto L622d2f;}
}
B622d2d:L622d2d:{c.instructions+=1;NFSU2_TR(0x622d2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B622d2f:L622d2f:{c.instructions+=1;NFSU2_TR(0x622d2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B622d37:L622d37:{c.instructions+=3;NFSU2_TR(0x622d37);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622d3b:{NFSU2_TR(0x622d3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622d3d:{NFSU2_TR(0x622d3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L622d56;}}
}
B622d3f:L622d3f:{c.instructions+=5;NFSU2_TR(0x622d3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622d43:{NFSU2_TR(0x622d43);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622d4a:{NFSU2_TR(0x622d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622d50:{NFSU2_TR(0x622d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622d54:{NFSU2_TR(0x622d54);
{goto L622d6a;}
}
B622d56:L622d56:{c.instructions+=4;NFSU2_TR(0x622d56);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622d5a:{NFSU2_TR(0x622d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x354ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622d60:{NFSU2_TR(0x622d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622d66:{NFSU2_TR(0x622d66);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622d6a:L622d6a:{c.instructions+=3;NFSU2_TR(0x622d6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622d6c:{NFSU2_TR(0x622d6c);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622d73:{NFSU2_TR(0x622d73);
if(r1(R+518)){{goto L622ecc;}}
}
B622d79:L622d79:{c.instructions+=2;NFSU2_TR(0x622d79);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xff000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B622d81:{NFSU2_TR(0x622d81);
if(r1(R+518)){{goto L622ecc;}}
}
B622d87:L622d87:{c.instructions+=10;NFSU2_TR(0x622d87);
u8 U[4];
w4(U+0,u32(u32(u32(0xde0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B622d8e:{NFSU2_TR(0x622d8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622d95:{NFSU2_TR(0x622d95);
u8 U[4];
w4(U+0,u32(u32(u32(0xe20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B622d9c:{NFSU2_TR(0x622d9c);
u8 U[4];
w4(U+0,u32(u32(u32(0xd40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B622da3:{NFSU2_TR(0x622da3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B622da5:{NFSU2_TR(0x622da5);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622dac:{NFSU2_TR(0x622dac);
u8 U[4];
w4(U+0,u32(u32(u32(0xd20ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B622db3:{NFSU2_TR(0x622db3);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622dba:{NFSU2_TR(0x622dba);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622dbe:{NFSU2_TR(0x622dbe);
__builtin_memmove((R+28),(R+28),4);
}
B622dc0:L622dc0:{c.instructions+=4;NFSU2_TR(0x622dc0);
u8 U[16];
w4(U+0,u32(u32(u32(0x864ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B622dc7:{NFSU2_TR(0x622dc7);
u8 U[16];
w4(U+0,u32(u32(u32(0x860ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+12))));
}
B622dce:{NFSU2_TR(0x622dce);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B622dd1:{NFSU2_TR(0x622dd1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L622f83;}}
}
B622dd7:L622dd7:{c.instructions+=6;NFSU2_TR(0x622dd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622dde:{NFSU2_TR(0x622dde);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622de5:{NFSU2_TR(0x622de5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622de6:{NFSU2_TR(0x622de6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622de8:{NFSU2_TR(0x622de8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622de9:{NFSU2_TR(0x622de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622deeull));
TAIL_STATIC(0x5be180u,5be);
}
B622dee:L622dee:{c.instructions+=3;NFSU2_TR(0x622dee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B622df1:{NFSU2_TR(0x622df1);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B622df3:{NFSU2_TR(0x622df3);
if(r1(R+518)){{goto L622eba;}}
}
B622df9:L622df9:{c.instructions+=2;NFSU2_TR(0x622df9);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B622e04:{NFSU2_TR(0x622e04);
{goto L622e10;}
}
B622e10:L622e10:{c.instructions+=3;NFSU2_TR(0x622e10);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622e17:{NFSU2_TR(0x622e17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622e18:{NFSU2_TR(0x622e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622e1dull));
TAIL_STATIC(0x5be130u,5be);
}
B622e1d:L622e1d:{c.instructions+=3;NFSU2_TR(0x622e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622e21:{NFSU2_TR(0x622e21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622e22:{NFSU2_TR(0x622e22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622e27ull));
TAIL_STATIC(0x5be0a0u,5be);
}
B622e27:L622e27:{c.instructions+=5;NFSU2_TR(0x622e27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622e2a:{NFSU2_TR(0x622e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B622e2c:{NFSU2_TR(0x622e2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622e2d:{NFSU2_TR(0x622e2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622e2e:{NFSU2_TR(0x622e2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622e33ull));
TAIL_STATIC(0x5be0f0u,5be);
}
B622e33:L622e33:{c.instructions+=3;NFSU2_TR(0x622e33);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622e3a:{NFSU2_TR(0x622e3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622e3b:{NFSU2_TR(0x622e3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622e40ull));
TAIL_STATIC(0x5be130u,5be);
}
B622e40:L622e40:{c.instructions+=3;NFSU2_TR(0x622e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622e44:{NFSU2_TR(0x622e44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622e45:{NFSU2_TR(0x622e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622e4aull));
TAIL_STATIC(0x5be0a0u,5be);
}
B622e4a:L622e4a:{c.instructions+=6;NFSU2_TR(0x622e4a);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622e51:{NFSU2_TR(0x622e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622e54:{NFSU2_TR(0x622e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B622e56:{NFSU2_TR(0x622e56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622e57:{NFSU2_TR(0x622e57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622e58:{NFSU2_TR(0x622e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622e5dull));
TAIL_STATIC(0x5be0f0u,5be);
}
B622e5d:L622e5d:{c.instructions+=16;NFSU2_TR(0x622e5d);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622e64:{NFSU2_TR(0x622e64);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622e6b:{NFSU2_TR(0x622e6b);
w4(R+0,u32(0x10ull));
}
B622e70:{NFSU2_TR(0x622e70);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B622e72:{NFSU2_TR(0x622e72);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B622e74:{NFSU2_TR(0x622e74);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622e7b:{NFSU2_TR(0x622e7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622e82:{NFSU2_TR(0x622e82);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622e89:{NFSU2_TR(0x622e89);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B622e8c:{NFSU2_TR(0x622e8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B622e8f:{NFSU2_TR(0x622e8f);
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B622e92:{NFSU2_TR(0x622e92);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B622e93:{NFSU2_TR(0x622e93);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622e9a:{NFSU2_TR(0x622e9a);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622ea1:{NFSU2_TR(0x622ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622ea8:{NFSU2_TR(0x622ea8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x622e10u);}goto L622e10;}}
}
B622eae:L622eae:{c.instructions+=3;NFSU2_TR(0x622eae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622eb1:{NFSU2_TR(0x622eb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B622eb2:{NFSU2_TR(0x622eb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x622eb7ull));
TAIL_STATIC(0x5cec40u,5ce);
}
B622eb7:L622eb7:{c.instructions+=1;NFSU2_TR(0x622eb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B622eba:L622eba:{c.instructions+=1;NFSU2_TR(0x622eba);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622ebe:L622ebe:{c.instructions+=4;NFSU2_TR(0x622ebe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B622ebf:{NFSU2_TR(0x622ebf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B622ec2:{NFSU2_TR(0x622ec2);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622ec6:{NFSU2_TR(0x622ec6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x622dc0u);}goto L622dc0;}}
}
B622ecc:L622ecc:{c.instructions+=5;NFSU2_TR(0x622ecc);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622ed0:{NFSU2_TR(0x622ed0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B622ed1:{NFSU2_TR(0x622ed1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B622ed4:{NFSU2_TR(0x622ed4);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622ed8:{NFSU2_TR(0x622ed8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x622d37u);}goto L622d37;}}
}
B622ede:L622ede:{c.instructions+=14;NFSU2_TR(0x622ede);
__builtin_memmove((R+24),gp(0x8654a4),4);
}
B622ee4:{NFSU2_TR(0x622ee4);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622ee8:{NFSU2_TR(0x622ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622eee:{NFSU2_TR(0x622eee);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B622ef0:{NFSU2_TR(0x622ef0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B622ef3:{NFSU2_TR(0x622ef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B622ef6:{NFSU2_TR(0x622ef6);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622efd:{NFSU2_TR(0x622efd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B622efe:{NFSU2_TR(0x622efe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000ull))));
}
B622f04:{NFSU2_TR(0x622f04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622f06:{NFSU2_TR(0x622f06);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622f0d:{NFSU2_TR(0x622f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x384ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622f13:{NFSU2_TR(0x622f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622f1a:{NFSU2_TR(0x622f1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L622f23;}}
}
B622f1c:L622f1c:{c.instructions+=1;NFSU2_TR(0x622f1c);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622f23:L622f23:{c.instructions+=4;NFSU2_TR(0x622f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622f29:{NFSU2_TR(0x622f29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622f2b:{NFSU2_TR(0x622f2b);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622f32:{NFSU2_TR(0x622f32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L622f3b;}}
}
B622f34:L622f34:{c.instructions+=1;NFSU2_TR(0x622f34);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622f3b:L622f3b:{c.instructions+=4;NFSU2_TR(0x622f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622f41:{NFSU2_TR(0x622f41);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622f43:{NFSU2_TR(0x622f43);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622f4a:{NFSU2_TR(0x622f4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L622f53;}}
}
B622f4c:L622f4c:{c.instructions+=1;NFSU2_TR(0x622f4c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622f53:L622f53:{c.instructions+=6;NFSU2_TR(0x622f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622f59:{NFSU2_TR(0x622f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622f5c:{NFSU2_TR(0x622f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622f63:{NFSU2_TR(0x622f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B622f69:{NFSU2_TR(0x622f69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622f6b:{NFSU2_TR(0x622f6b);
if(r1(R+518)){{goto L622fc1;}}
}
B622f6d:L622f6d:{c.instructions+=7;NFSU2_TR(0x622f6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B622f70:{NFSU2_TR(0x622f70);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B622f72:{NFSU2_TR(0x622f72);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B622f75:{NFSU2_TR(0x622f75);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B622f77:{NFSU2_TR(0x622f77);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+4),(U+2),1);
}
B622f7a:{NFSU2_TR(0x622f7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622f81:{NFSU2_TR(0x622f81);
{goto L622fcc;}
}
B622f83:L622f83:{c.instructions+=12;NFSU2_TR(0x622f83);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622f8a:{NFSU2_TR(0x622f8a);
w4(R+4,u32(0x40ull));
}
B622f8f:{NFSU2_TR(0x622f8f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B622f91:{NFSU2_TR(0x622f91);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622f98:{NFSU2_TR(0x622f98);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B622f9f:{NFSU2_TR(0x622f9f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B622fa1:{NFSU2_TR(0x622fa1);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622fa8:{NFSU2_TR(0x622fa8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B622fab:{NFSU2_TR(0x622fab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B622fae:{NFSU2_TR(0x622fae);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622fb5:{NFSU2_TR(0x622fb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B622fbc:{NFSU2_TR(0x622fbc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x622ebeu);}goto L622ebe;}
}
B622fc1:L622fc1:{c.instructions+=1;NFSU2_TR(0x622fc1);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B622fcc:L622fcc:{c.instructions+=3;NFSU2_TR(0x622fcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B622fd3:{NFSU2_TR(0x622fd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622fd5:{NFSU2_TR(0x622fd5);
if(r1(R+518)){{goto L622ffa;}}
}
B622fd7:L622fd7:{c.instructions+=3;NFSU2_TR(0x622fd7);
__builtin_memmove((R+0),gp(0x8036d8),4);
}
B622fdc:{NFSU2_TR(0x622fdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B622fde:{NFSU2_TR(0x622fde);
if(r1(R+518)){{goto L622ffa;}}
}
B622fe0:L622fe0:{c.instructions+=5;NFSU2_TR(0x622fe0);
{u32 ea_=u32(r4(R+4)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B622fe6:{NFSU2_TR(0x622fe6);
{u32 ea_=u32(u32(8403252u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B622fec:{NFSU2_TR(0x622fec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B622fee:{NFSU2_TR(0x622fee);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B622ff1:{NFSU2_TR(0x622ff1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L622ffa;}}
}
B622ff3:L622ff3:{c.instructions+=2;NFSU2_TR(0x622ff3);
w4(R+0,u32(0x1ull));
}
B622ff8:{NFSU2_TR(0x622ff8);
{goto L622ffc;}
}
B622ffa:L622ffa:{c.instructions+=1;NFSU2_TR(0x622ffa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B622ffc:L622ffc:{c.instructions+=1;NFSU2_TR(0x622ffc);
u8 U[8];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
TAIL_STATIC(0x623003u,623);
}
XIT:NFSU2_TR_EXIT(0x622,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
