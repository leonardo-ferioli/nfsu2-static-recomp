#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_62a(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x629,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x629,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_629(u8* __restrict R,Cpu& c);
u32 page_629(Cpu& c){return body_629(c.regs.data(),c);}
__attribute__((noinline)) u32 body_629(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x629006:goto L629006;
case 0x629008:c.instructions+=138;goto B629008;
case 0x62900f:c.instructions+=137;goto B62900f;
case 0x629016:c.instructions+=136;goto B629016;
case 0x62901a:c.instructions+=135;goto B62901a;
case 0x629021:c.instructions+=134;goto B629021;
case 0x629025:c.instructions+=133;goto B629025;
case 0x629027:c.instructions+=132;goto B629027;
case 0x62902e:c.instructions+=131;goto B62902e;
case 0x629032:c.instructions+=130;goto B629032;
case 0x629034:c.instructions+=129;goto B629034;
case 0x62903b:c.instructions+=128;goto B62903b;
case 0x62903f:c.instructions+=127;goto B62903f;
case 0x629041:c.instructions+=126;goto B629041;
case 0x629048:c.instructions+=125;goto B629048;
case 0x62904f:c.instructions+=124;goto B62904f;
case 0x629053:c.instructions+=123;goto B629053;
case 0x62905a:c.instructions+=122;goto B62905a;
case 0x62905e:c.instructions+=121;goto B62905e;
case 0x629060:c.instructions+=120;goto B629060;
case 0x629067:c.instructions+=119;goto B629067;
case 0x62906b:c.instructions+=118;goto B62906b;
case 0x62906d:c.instructions+=117;goto B62906d;
case 0x629074:c.instructions+=116;goto B629074;
case 0x629078:c.instructions+=115;goto B629078;
case 0x62907a:c.instructions+=114;goto B62907a;
case 0x629081:c.instructions+=113;goto B629081;
case 0x629088:c.instructions+=112;goto B629088;
case 0x62908c:c.instructions+=111;goto B62908c;
case 0x629093:c.instructions+=110;goto B629093;
case 0x629097:c.instructions+=109;goto B629097;
case 0x629099:c.instructions+=108;goto B629099;
case 0x6290a0:c.instructions+=107;goto B6290a0;
case 0x6290a4:c.instructions+=106;goto B6290a4;
case 0x6290a6:c.instructions+=105;goto B6290a6;
case 0x6290ad:c.instructions+=104;goto B6290ad;
case 0x6290b1:c.instructions+=103;goto B6290b1;
case 0x6290b3:c.instructions+=102;goto B6290b3;
case 0x6290ba:c.instructions+=101;goto B6290ba;
case 0x6290c1:c.instructions+=100;goto B6290c1;
case 0x6290c5:c.instructions+=99;goto B6290c5;
case 0x6290cc:c.instructions+=98;goto B6290cc;
case 0x6290d0:c.instructions+=97;goto B6290d0;
case 0x6290d2:c.instructions+=96;goto B6290d2;
case 0x6290d9:c.instructions+=95;goto B6290d9;
case 0x6290dd:c.instructions+=94;goto B6290dd;
case 0x6290df:c.instructions+=93;goto B6290df;
case 0x6290e3:c.instructions+=92;goto B6290e3;
case 0x6290ea:c.instructions+=91;goto B6290ea;
case 0x6290ec:c.instructions+=90;goto B6290ec;
case 0x6290f3:c.instructions+=89;goto B6290f3;
case 0x6290fa:c.instructions+=88;goto B6290fa;
case 0x6290fe:c.instructions+=87;goto B6290fe;
case 0x629105:c.instructions+=86;goto B629105;
case 0x629109:c.instructions+=85;goto B629109;
case 0x62910b:c.instructions+=84;goto B62910b;
case 0x629112:c.instructions+=83;goto B629112;
case 0x629116:c.instructions+=82;goto B629116;
case 0x629118:c.instructions+=81;goto B629118;
case 0x62911f:c.instructions+=80;goto B62911f;
case 0x629123:c.instructions+=79;goto B629123;
case 0x629125:c.instructions+=78;goto B629125;
case 0x62912c:c.instructions+=77;goto B62912c;
case 0x629133:c.instructions+=76;goto B629133;
case 0x629137:c.instructions+=75;goto B629137;
case 0x62913e:c.instructions+=74;goto B62913e;
case 0x629142:c.instructions+=73;goto B629142;
case 0x629144:c.instructions+=72;goto B629144;
case 0x62914b:c.instructions+=71;goto B62914b;
case 0x62914f:c.instructions+=70;goto B62914f;
case 0x629151:c.instructions+=69;goto B629151;
case 0x629158:c.instructions+=68;goto B629158;
case 0x62915c:c.instructions+=67;goto B62915c;
case 0x62915e:c.instructions+=66;goto B62915e;
case 0x629165:c.instructions+=65;goto B629165;
case 0x62916c:c.instructions+=64;goto B62916c;
case 0x629170:c.instructions+=63;goto B629170;
case 0x629177:c.instructions+=62;goto B629177;
case 0x62917b:c.instructions+=61;goto B62917b;
case 0x62917d:c.instructions+=60;goto B62917d;
case 0x629184:c.instructions+=59;goto B629184;
case 0x629188:c.instructions+=58;goto B629188;
case 0x62918a:c.instructions+=57;goto B62918a;
case 0x629191:c.instructions+=56;goto B629191;
case 0x629195:c.instructions+=55;goto B629195;
case 0x629197:c.instructions+=54;goto B629197;
case 0x62919e:c.instructions+=53;goto B62919e;
case 0x6291a5:c.instructions+=52;goto B6291a5;
case 0x6291a9:c.instructions+=51;goto B6291a9;
case 0x6291b0:c.instructions+=50;goto B6291b0;
case 0x6291b4:c.instructions+=49;goto B6291b4;
case 0x6291b6:c.instructions+=48;goto B6291b6;
case 0x6291bd:c.instructions+=47;goto B6291bd;
case 0x6291c1:c.instructions+=46;goto B6291c1;
case 0x6291c3:c.instructions+=45;goto B6291c3;
case 0x6291c7:c.instructions+=44;goto B6291c7;
case 0x6291ce:c.instructions+=43;goto B6291ce;
case 0x6291d0:c.instructions+=42;goto B6291d0;
case 0x6291d7:c.instructions+=41;goto B6291d7;
case 0x6291d8:c.instructions+=40;goto B6291d8;
case 0x6291dc:c.instructions+=39;goto B6291dc;
case 0x6291e3:c.instructions+=38;goto B6291e3;
case 0x6291e4:c.instructions+=37;goto B6291e4;
case 0x6291eb:c.instructions+=36;goto B6291eb;
case 0x6291ef:c.instructions+=35;goto B6291ef;
case 0x6291f6:c.instructions+=34;goto B6291f6;
case 0x6291fa:c.instructions+=33;goto B6291fa;
case 0x6291fc:c.instructions+=32;goto B6291fc;
case 0x629203:c.instructions+=31;goto B629203;
case 0x629207:c.instructions+=30;goto B629207;
case 0x629209:c.instructions+=29;goto B629209;
case 0x629210:c.instructions+=28;goto B629210;
case 0x629214:c.instructions+=27;goto B629214;
case 0x629216:c.instructions+=26;goto B629216;
case 0x62921d:c.instructions+=25;goto B62921d;
case 0x629224:c.instructions+=24;goto B629224;
case 0x629228:c.instructions+=23;goto B629228;
case 0x62922f:c.instructions+=22;goto B62922f;
case 0x629233:c.instructions+=21;goto B629233;
case 0x629235:c.instructions+=20;goto B629235;
case 0x62923c:c.instructions+=19;goto B62923c;
case 0x629240:c.instructions+=18;goto B629240;
case 0x629242:c.instructions+=17;goto B629242;
case 0x629249:c.instructions+=16;goto B629249;
case 0x62924d:c.instructions+=15;goto B62924d;
case 0x62924f:c.instructions+=14;goto B62924f;
case 0x629256:c.instructions+=13;goto B629256;
case 0x62925d:c.instructions+=12;goto B62925d;
case 0x629261:c.instructions+=11;goto B629261;
case 0x629268:c.instructions+=10;goto B629268;
case 0x62926c:c.instructions+=9;goto B62926c;
case 0x62926e:c.instructions+=8;goto B62926e;
case 0x629275:c.instructions+=7;goto B629275;
case 0x629279:c.instructions+=6;goto B629279;
case 0x62927b:c.instructions+=5;goto B62927b;
case 0x629282:c.instructions+=4;goto B629282;
case 0x629286:c.instructions+=3;goto B629286;
case 0x629288:c.instructions+=2;goto B629288;
case 0x62928f:c.instructions+=1;goto B62928f;
case 0x629294:goto L629294;
case 0x629298:c.instructions+=196;goto B629298;
case 0x62929b:c.instructions+=195;goto B62929b;
case 0x62929f:c.instructions+=194;goto B62929f;
case 0x6292a2:c.instructions+=193;goto B6292a2;
case 0x6292a4:c.instructions+=192;goto B6292a4;
case 0x6292a8:c.instructions+=191;goto B6292a8;
case 0x6292aa:c.instructions+=190;goto B6292aa;
case 0x6292ac:c.instructions+=189;goto B6292ac;
case 0x6292b0:c.instructions+=188;goto B6292b0;
case 0x6292b3:c.instructions+=187;goto B6292b3;
case 0x6292b5:c.instructions+=186;goto B6292b5;
case 0x6292bc:c.instructions+=185;goto B6292bc;
case 0x6292c0:c.instructions+=184;goto B6292c0;
case 0x6292c3:c.instructions+=183;goto B6292c3;
case 0x6292c7:c.instructions+=182;goto B6292c7;
case 0x6292ca:c.instructions+=181;goto B6292ca;
case 0x6292cc:c.instructions+=180;goto B6292cc;
case 0x6292d0:c.instructions+=179;goto B6292d0;
case 0x6292d3:c.instructions+=178;goto B6292d3;
case 0x6292d5:c.instructions+=177;goto B6292d5;
case 0x6292d9:c.instructions+=176;goto B6292d9;
case 0x6292dc:c.instructions+=175;goto B6292dc;
case 0x6292de:c.instructions+=174;goto B6292de;
case 0x6292e5:c.instructions+=173;goto B6292e5;
case 0x6292e9:c.instructions+=172;goto B6292e9;
case 0x6292ec:c.instructions+=171;goto B6292ec;
case 0x6292f0:c.instructions+=170;goto B6292f0;
case 0x6292f3:c.instructions+=169;goto B6292f3;
case 0x6292f5:c.instructions+=168;goto B6292f5;
case 0x6292f9:c.instructions+=167;goto B6292f9;
case 0x6292fc:c.instructions+=166;goto B6292fc;
case 0x6292fe:c.instructions+=165;goto B6292fe;
case 0x629302:c.instructions+=164;goto B629302;
case 0x629305:c.instructions+=163;goto B629305;
case 0x629307:c.instructions+=162;goto B629307;
case 0x62930e:c.instructions+=161;goto B62930e;
case 0x629312:c.instructions+=160;goto B629312;
case 0x629315:c.instructions+=159;goto B629315;
case 0x629319:c.instructions+=158;goto B629319;
case 0x62931c:c.instructions+=157;goto B62931c;
case 0x62931e:c.instructions+=156;goto B62931e;
case 0x629322:c.instructions+=155;goto B629322;
case 0x629325:c.instructions+=154;goto B629325;
case 0x629327:c.instructions+=153;goto B629327;
case 0x62932b:c.instructions+=152;goto B62932b;
case 0x62932e:c.instructions+=151;goto B62932e;
case 0x629330:c.instructions+=150;goto B629330;
case 0x629337:c.instructions+=149;goto B629337;
case 0x62933b:c.instructions+=148;goto B62933b;
case 0x62933e:c.instructions+=147;goto B62933e;
case 0x629342:c.instructions+=146;goto B629342;
case 0x629345:c.instructions+=145;goto B629345;
case 0x629347:c.instructions+=144;goto B629347;
case 0x62934b:c.instructions+=143;goto B62934b;
case 0x62934e:c.instructions+=142;goto B62934e;
case 0x629350:c.instructions+=141;goto B629350;
case 0x629354:c.instructions+=140;goto B629354;
case 0x629356:c.instructions+=139;goto B629356;
case 0x629358:c.instructions+=138;goto B629358;
case 0x62935f:c.instructions+=137;goto B62935f;
case 0x629363:c.instructions+=136;goto B629363;
case 0x629366:c.instructions+=135;goto B629366;
case 0x62936a:c.instructions+=134;goto B62936a;
case 0x62936d:c.instructions+=133;goto B62936d;
case 0x62936f:c.instructions+=132;goto B62936f;
case 0x629373:c.instructions+=131;goto B629373;
case 0x629376:c.instructions+=130;goto B629376;
case 0x629378:c.instructions+=129;goto B629378;
case 0x62937c:c.instructions+=128;goto B62937c;
case 0x62937f:c.instructions+=127;goto B62937f;
case 0x629381:c.instructions+=126;goto B629381;
case 0x629388:c.instructions+=125;goto B629388;
case 0x62938c:c.instructions+=124;goto B62938c;
case 0x62938f:c.instructions+=123;goto B62938f;
case 0x629393:c.instructions+=122;goto B629393;
case 0x629396:c.instructions+=121;goto B629396;
case 0x629398:c.instructions+=120;goto B629398;
case 0x62939c:c.instructions+=119;goto B62939c;
case 0x62939f:c.instructions+=118;goto B62939f;
case 0x6293a1:c.instructions+=117;goto B6293a1;
case 0x6293a5:c.instructions+=116;goto B6293a5;
case 0x6293a8:c.instructions+=115;goto B6293a8;
case 0x6293aa:c.instructions+=114;goto B6293aa;
case 0x6293b1:c.instructions+=113;goto B6293b1;
case 0x6293b5:c.instructions+=112;goto B6293b5;
case 0x6293b8:c.instructions+=111;goto B6293b8;
case 0x6293bc:c.instructions+=110;goto B6293bc;
case 0x6293bf:c.instructions+=109;goto B6293bf;
case 0x6293c1:c.instructions+=108;goto B6293c1;
case 0x6293c5:c.instructions+=107;goto B6293c5;
case 0x6293c8:c.instructions+=106;goto B6293c8;
case 0x6293ca:c.instructions+=105;goto B6293ca;
case 0x6293ce:c.instructions+=104;goto B6293ce;
case 0x6293d1:c.instructions+=103;goto B6293d1;
case 0x6293d3:c.instructions+=102;goto B6293d3;
case 0x6293da:c.instructions+=101;goto B6293da;
case 0x6293de:c.instructions+=100;goto B6293de;
case 0x6293e1:c.instructions+=99;goto B6293e1;
case 0x6293e5:c.instructions+=98;goto B6293e5;
case 0x6293e8:c.instructions+=97;goto B6293e8;
case 0x6293ea:c.instructions+=96;goto B6293ea;
case 0x6293ee:c.instructions+=95;goto B6293ee;
case 0x6293f1:c.instructions+=94;goto B6293f1;
case 0x6293f3:c.instructions+=93;goto B6293f3;
case 0x6293f7:c.instructions+=92;goto B6293f7;
case 0x6293f9:c.instructions+=91;goto B6293f9;
case 0x6293fb:c.instructions+=90;goto B6293fb;
case 0x629402:c.instructions+=89;goto B629402;
case 0x629406:c.instructions+=88;goto B629406;
case 0x629409:c.instructions+=87;goto B629409;
case 0x62940d:c.instructions+=86;goto B62940d;
case 0x629410:c.instructions+=85;goto B629410;
case 0x629412:c.instructions+=84;goto B629412;
case 0x629416:c.instructions+=83;goto B629416;
case 0x629419:c.instructions+=82;goto B629419;
case 0x62941b:c.instructions+=81;goto B62941b;
case 0x62941f:c.instructions+=80;goto B62941f;
case 0x629422:c.instructions+=79;goto B629422;
case 0x629424:c.instructions+=78;goto B629424;
case 0x62942b:c.instructions+=77;goto B62942b;
case 0x62942f:c.instructions+=76;goto B62942f;
case 0x629432:c.instructions+=75;goto B629432;
case 0x629436:c.instructions+=74;goto B629436;
case 0x629439:c.instructions+=73;goto B629439;
case 0x62943b:c.instructions+=72;goto B62943b;
case 0x62943f:c.instructions+=71;goto B62943f;
case 0x629442:c.instructions+=70;goto B629442;
case 0x629444:c.instructions+=69;goto B629444;
case 0x629448:c.instructions+=68;goto B629448;
case 0x62944b:c.instructions+=67;goto B62944b;
case 0x62944d:c.instructions+=66;goto B62944d;
case 0x629454:c.instructions+=65;goto B629454;
case 0x629458:c.instructions+=64;goto B629458;
case 0x62945b:c.instructions+=63;goto B62945b;
case 0x62945f:c.instructions+=62;goto B62945f;
case 0x629462:c.instructions+=61;goto B629462;
case 0x629464:c.instructions+=60;goto B629464;
case 0x629468:c.instructions+=59;goto B629468;
case 0x62946b:c.instructions+=58;goto B62946b;
case 0x62946d:c.instructions+=57;goto B62946d;
case 0x629471:c.instructions+=56;goto B629471;
case 0x629474:c.instructions+=55;goto B629474;
case 0x62947b:c.instructions+=54;goto B62947b;
case 0x629482:c.instructions+=53;goto B629482;
case 0x629483:c.instructions+=52;goto B629483;
case 0x629485:c.instructions+=51;goto B629485;
case 0x629486:c.instructions+=50;goto B629486;
case 0x62948d:c.instructions+=49;goto B62948d;
case 0x629491:c.instructions+=48;goto B629491;
case 0x629494:c.instructions+=47;goto B629494;
case 0x629498:c.instructions+=46;goto B629498;
case 0x62949b:c.instructions+=45;goto B62949b;
case 0x62949d:c.instructions+=44;goto B62949d;
case 0x6294a1:c.instructions+=43;goto B6294a1;
case 0x6294a4:c.instructions+=42;goto B6294a4;
case 0x6294a6:c.instructions+=41;goto B6294a6;
case 0x6294aa:c.instructions+=40;goto B6294aa;
case 0x6294ac:c.instructions+=39;goto B6294ac;
case 0x6294ae:c.instructions+=38;goto B6294ae;
case 0x6294b5:c.instructions+=37;goto B6294b5;
case 0x6294b9:c.instructions+=36;goto B6294b9;
case 0x6294bc:c.instructions+=35;goto B6294bc;
case 0x6294c0:c.instructions+=34;goto B6294c0;
case 0x6294c3:c.instructions+=33;goto B6294c3;
case 0x6294c5:c.instructions+=32;goto B6294c5;
case 0x6294c9:c.instructions+=31;goto B6294c9;
case 0x6294cc:c.instructions+=30;goto B6294cc;
case 0x6294ce:c.instructions+=29;goto B6294ce;
case 0x6294d2:c.instructions+=28;goto B6294d2;
case 0x6294d5:c.instructions+=27;goto B6294d5;
case 0x6294d7:c.instructions+=26;goto B6294d7;
case 0x6294de:c.instructions+=25;goto B6294de;
case 0x6294e2:c.instructions+=24;goto B6294e2;
case 0x6294e5:c.instructions+=23;goto B6294e5;
case 0x6294e9:c.instructions+=22;goto B6294e9;
case 0x6294ec:c.instructions+=21;goto B6294ec;
case 0x6294ee:c.instructions+=20;goto B6294ee;
case 0x6294f2:c.instructions+=19;goto B6294f2;
case 0x6294f5:c.instructions+=18;goto B6294f5;
case 0x6294f7:c.instructions+=17;goto B6294f7;
case 0x6294fb:c.instructions+=16;goto B6294fb;
case 0x6294fe:c.instructions+=15;goto B6294fe;
case 0x629500:c.instructions+=14;goto B629500;
case 0x629507:c.instructions+=13;goto B629507;
case 0x62950b:c.instructions+=12;goto B62950b;
case 0x62950e:c.instructions+=11;goto B62950e;
case 0x629512:c.instructions+=10;goto B629512;
case 0x629515:c.instructions+=9;goto B629515;
case 0x629517:c.instructions+=8;goto B629517;
case 0x62951b:c.instructions+=7;goto B62951b;
case 0x62951e:c.instructions+=6;goto B62951e;
case 0x629520:c.instructions+=5;goto B629520;
case 0x629524:c.instructions+=4;goto B629524;
case 0x629527:c.instructions+=3;goto B629527;
case 0x629529:c.instructions+=2;goto B629529;
case 0x629530:c.instructions+=1;goto B629530;
case 0x629535:goto L629535;
case 0x629538:c.instructions+=11;goto B629538;
case 0x62953f:c.instructions+=10;goto B62953f;
case 0x629540:c.instructions+=9;goto B629540;
case 0x629547:c.instructions+=8;goto B629547;
case 0x629548:c.instructions+=7;goto B629548;
case 0x62954f:c.instructions+=6;goto B62954f;
case 0x629550:c.instructions+=5;goto B629550;
case 0x629555:c.instructions+=4;goto B629555;
case 0x62955c:c.instructions+=3;goto B62955c;
case 0x62955d:c.instructions+=2;goto B62955d;
case 0x62955e:c.instructions+=1;goto B62955e;
case 0x629563:goto L629563;
case 0x62956a:c.instructions+=3;goto B62956a;
case 0x62956d:c.instructions+=2;goto B62956d;
case 0x62956f:c.instructions+=1;goto B62956f;
case 0x629571:goto L629571;
case 0x629574:c.instructions+=12;goto B629574;
case 0x62957b:c.instructions+=11;goto B62957b;
case 0x629582:c.instructions+=10;goto B629582;
case 0x629584:c.instructions+=9;goto B629584;
case 0x629586:c.instructions+=8;goto B629586;
case 0x62958d:c.instructions+=7;goto B62958d;
case 0x62958e:c.instructions+=6;goto B62958e;
case 0x629595:c.instructions+=5;goto B629595;
case 0x629596:c.instructions+=4;goto B629596;
case 0x629597:c.instructions+=3;goto B629597;
case 0x62959a:c.instructions+=2;goto B62959a;
case 0x62959b:c.instructions+=1;goto B62959b;
case 0x6295a0:goto L6295a0;
case 0x6295a7:c.instructions+=2;goto B6295a7;
case 0x6295a9:c.instructions+=1;goto B6295a9;
case 0x6295af:goto L6295af;
case 0x6295b8:c.instructions+=2;goto B6295b8;
case 0x6295bb:c.instructions+=1;goto B6295bb;
case 0x6295c1:goto L6295c1;
case 0x6295c2:c.instructions+=3;goto B6295c2;
case 0x6295c9:c.instructions+=2;goto B6295c9;
case 0x6295ca:c.instructions+=1;goto B6295ca;
case 0x6295cf:goto L6295cf;
case 0x6295d6:c.instructions+=17;goto B6295d6;
case 0x6295dd:c.instructions+=16;goto B6295dd;
case 0x6295e4:c.instructions+=15;goto B6295e4;
case 0x6295eb:c.instructions+=14;goto B6295eb;
case 0x6295f2:c.instructions+=13;goto B6295f2;
case 0x6295f4:c.instructions+=12;goto B6295f4;
case 0x6295fb:c.instructions+=11;goto B6295fb;
case 0x6295fc:c.instructions+=10;goto B6295fc;
case 0x629603:c.instructions+=9;goto B629603;
case 0x62960a:c.instructions+=8;goto B62960a;
case 0x62960b:c.instructions+=7;goto B62960b;
case 0x629612:c.instructions+=6;goto B629612;
case 0x629613:c.instructions+=5;goto B629613;
case 0x62961e:c.instructions+=4;goto B62961e;
case 0x629629:c.instructions+=3;goto B629629;
case 0x629634:c.instructions+=2;goto B629634;
case 0x62963f:c.instructions+=1;goto B62963f;
case 0x629644:goto L629644;
case 0x62964b:c.instructions+=7;goto B62964b;
case 0x629652:c.instructions+=6;goto B629652;
case 0x629659:c.instructions+=5;goto B629659;
case 0x629660:c.instructions+=4;goto B629660;
case 0x629663:c.instructions+=3;goto B629663;
case 0x62966a:c.instructions+=2;goto B62966a;
case 0x629671:c.instructions+=1;goto B629671;
case 0x629678:goto L629678;
case 0x62967f:c.instructions+=196;goto B62967f;
case 0x629682:c.instructions+=195;goto B629682;
case 0x629689:c.instructions+=194;goto B629689;
case 0x62968b:c.instructions+=193;goto B62968b;
case 0x62968d:c.instructions+=192;goto B62968d;
case 0x629694:c.instructions+=191;goto B629694;
case 0x629697:c.instructions+=190;goto B629697;
case 0x629699:c.instructions+=189;goto B629699;
case 0x6296a0:c.instructions+=188;goto B6296a0;
case 0x6296a3:c.instructions+=187;goto B6296a3;
case 0x6296a5:c.instructions+=186;goto B6296a5;
case 0x6296a9:c.instructions+=185;goto B6296a9;
case 0x6296b0:c.instructions+=184;goto B6296b0;
case 0x6296b3:c.instructions+=183;goto B6296b3;
case 0x6296ba:c.instructions+=182;goto B6296ba;
case 0x6296bd:c.instructions+=181;goto B6296bd;
case 0x6296bf:c.instructions+=180;goto B6296bf;
case 0x6296c6:c.instructions+=179;goto B6296c6;
case 0x6296c9:c.instructions+=178;goto B6296c9;
case 0x6296cb:c.instructions+=177;goto B6296cb;
case 0x6296d2:c.instructions+=176;goto B6296d2;
case 0x6296d5:c.instructions+=175;goto B6296d5;
case 0x6296d7:c.instructions+=174;goto B6296d7;
case 0x6296db:c.instructions+=173;goto B6296db;
case 0x6296e2:c.instructions+=172;goto B6296e2;
case 0x6296e5:c.instructions+=171;goto B6296e5;
case 0x6296ec:c.instructions+=170;goto B6296ec;
case 0x6296ef:c.instructions+=169;goto B6296ef;
case 0x6296f1:c.instructions+=168;goto B6296f1;
case 0x6296f8:c.instructions+=167;goto B6296f8;
case 0x6296fb:c.instructions+=166;goto B6296fb;
case 0x6296fd:c.instructions+=165;goto B6296fd;
case 0x629704:c.instructions+=164;goto B629704;
case 0x629707:c.instructions+=163;goto B629707;
case 0x629709:c.instructions+=162;goto B629709;
case 0x62970d:c.instructions+=161;goto B62970d;
case 0x629714:c.instructions+=160;goto B629714;
case 0x629717:c.instructions+=159;goto B629717;
case 0x62971e:c.instructions+=158;goto B62971e;
case 0x629721:c.instructions+=157;goto B629721;
case 0x629723:c.instructions+=156;goto B629723;
case 0x62972a:c.instructions+=155;goto B62972a;
case 0x62972d:c.instructions+=154;goto B62972d;
case 0x62972f:c.instructions+=153;goto B62972f;
case 0x629736:c.instructions+=152;goto B629736;
case 0x629739:c.instructions+=151;goto B629739;
case 0x62973b:c.instructions+=150;goto B62973b;
case 0x62973f:c.instructions+=149;goto B62973f;
case 0x629746:c.instructions+=148;goto B629746;
case 0x629749:c.instructions+=147;goto B629749;
case 0x629750:c.instructions+=146;goto B629750;
case 0x629752:c.instructions+=145;goto B629752;
case 0x629754:c.instructions+=144;goto B629754;
case 0x62975b:c.instructions+=143;goto B62975b;
case 0x62975e:c.instructions+=142;goto B62975e;
case 0x629760:c.instructions+=141;goto B629760;
case 0x629767:c.instructions+=140;goto B629767;
case 0x62976a:c.instructions+=139;goto B62976a;
case 0x62976c:c.instructions+=138;goto B62976c;
case 0x629773:c.instructions+=137;goto B629773;
case 0x62977a:c.instructions+=136;goto B62977a;
case 0x62977d:c.instructions+=135;goto B62977d;
case 0x629784:c.instructions+=134;goto B629784;
case 0x629787:c.instructions+=133;goto B629787;
case 0x629789:c.instructions+=132;goto B629789;
case 0x629790:c.instructions+=131;goto B629790;
case 0x629793:c.instructions+=130;goto B629793;
case 0x629795:c.instructions+=129;goto B629795;
case 0x62979c:c.instructions+=128;goto B62979c;
case 0x62979f:c.instructions+=127;goto B62979f;
case 0x6297a1:c.instructions+=126;goto B6297a1;
case 0x6297a8:c.instructions+=125;goto B6297a8;
case 0x6297af:c.instructions+=124;goto B6297af;
case 0x6297b2:c.instructions+=123;goto B6297b2;
case 0x6297b9:c.instructions+=122;goto B6297b9;
case 0x6297bc:c.instructions+=121;goto B6297bc;
case 0x6297be:c.instructions+=120;goto B6297be;
case 0x6297c5:c.instructions+=119;goto B6297c5;
case 0x6297c8:c.instructions+=118;goto B6297c8;
case 0x6297ca:c.instructions+=117;goto B6297ca;
case 0x6297d1:c.instructions+=116;goto B6297d1;
case 0x6297d4:c.instructions+=115;goto B6297d4;
case 0x6297d6:c.instructions+=114;goto B6297d6;
case 0x6297dd:c.instructions+=113;goto B6297dd;
case 0x6297e4:c.instructions+=112;goto B6297e4;
case 0x6297e7:c.instructions+=111;goto B6297e7;
case 0x6297ee:c.instructions+=110;goto B6297ee;
case 0x6297f1:c.instructions+=109;goto B6297f1;
case 0x6297f3:c.instructions+=108;goto B6297f3;
case 0x6297fa:c.instructions+=107;goto B6297fa;
case 0x6297fd:c.instructions+=106;goto B6297fd;
case 0x6297ff:c.instructions+=105;goto B6297ff;
case 0x629806:c.instructions+=104;goto B629806;
case 0x629809:c.instructions+=103;goto B629809;
case 0x62980b:c.instructions+=102;goto B62980b;
case 0x629812:c.instructions+=101;goto B629812;
case 0x629819:c.instructions+=100;goto B629819;
case 0x62981c:c.instructions+=99;goto B62981c;
case 0x629823:c.instructions+=98;goto B629823;
case 0x629825:c.instructions+=97;goto B629825;
case 0x629827:c.instructions+=96;goto B629827;
case 0x62982e:c.instructions+=95;goto B62982e;
case 0x629831:c.instructions+=94;goto B629831;
case 0x629833:c.instructions+=93;goto B629833;
case 0x62983a:c.instructions+=92;goto B62983a;
case 0x62983d:c.instructions+=91;goto B62983d;
case 0x62983f:c.instructions+=90;goto B62983f;
case 0x629846:c.instructions+=89;goto B629846;
case 0x62984d:c.instructions+=88;goto B62984d;
case 0x629850:c.instructions+=87;goto B629850;
case 0x629857:c.instructions+=86;goto B629857;
case 0x62985a:c.instructions+=85;goto B62985a;
case 0x62985c:c.instructions+=84;goto B62985c;
case 0x629863:c.instructions+=83;goto B629863;
case 0x629866:c.instructions+=82;goto B629866;
case 0x629868:c.instructions+=81;goto B629868;
case 0x62986f:c.instructions+=80;goto B62986f;
case 0x629872:c.instructions+=79;goto B629872;
case 0x629874:c.instructions+=78;goto B629874;
case 0x62987b:c.instructions+=77;goto B62987b;
case 0x629882:c.instructions+=76;goto B629882;
case 0x629885:c.instructions+=75;goto B629885;
case 0x62988c:c.instructions+=74;goto B62988c;
case 0x62988f:c.instructions+=73;goto B62988f;
case 0x629891:c.instructions+=72;goto B629891;
case 0x629898:c.instructions+=71;goto B629898;
case 0x62989b:c.instructions+=70;goto B62989b;
case 0x62989d:c.instructions+=69;goto B62989d;
case 0x6298a4:c.instructions+=68;goto B6298a4;
case 0x6298a7:c.instructions+=67;goto B6298a7;
case 0x6298a9:c.instructions+=66;goto B6298a9;
case 0x6298b0:c.instructions+=65;goto B6298b0;
case 0x6298b7:c.instructions+=64;goto B6298b7;
case 0x6298ba:c.instructions+=63;goto B6298ba;
case 0x6298c1:c.instructions+=62;goto B6298c1;
case 0x6298c4:c.instructions+=61;goto B6298c4;
case 0x6298c6:c.instructions+=60;goto B6298c6;
case 0x6298cd:c.instructions+=59;goto B6298cd;
case 0x6298d0:c.instructions+=58;goto B6298d0;
case 0x6298d2:c.instructions+=57;goto B6298d2;
case 0x6298d9:c.instructions+=56;goto B6298d9;
case 0x6298dc:c.instructions+=55;goto B6298dc;
case 0x6298de:c.instructions+=54;goto B6298de;
case 0x6298e5:c.instructions+=53;goto B6298e5;
case 0x6298ec:c.instructions+=52;goto B6298ec;
case 0x6298ef:c.instructions+=51;goto B6298ef;
case 0x6298f6:c.instructions+=50;goto B6298f6;
case 0x6298f9:c.instructions+=49;goto B6298f9;
case 0x6298fb:c.instructions+=48;goto B6298fb;
case 0x629902:c.instructions+=47;goto B629902;
case 0x629905:c.instructions+=46;goto B629905;
case 0x629907:c.instructions+=45;goto B629907;
case 0x62990e:c.instructions+=44;goto B62990e;
case 0x629910:c.instructions+=43;goto B629910;
case 0x629912:c.instructions+=42;goto B629912;
case 0x629919:c.instructions+=41;goto B629919;
case 0x629920:c.instructions+=40;goto B629920;
case 0x629923:c.instructions+=39;goto B629923;
case 0x62992a:c.instructions+=38;goto B62992a;
case 0x62992d:c.instructions+=37;goto B62992d;
case 0x62992f:c.instructions+=36;goto B62992f;
case 0x629936:c.instructions+=35;goto B629936;
case 0x629939:c.instructions+=34;goto B629939;
case 0x62993b:c.instructions+=33;goto B62993b;
case 0x629942:c.instructions+=32;goto B629942;
case 0x629945:c.instructions+=31;goto B629945;
case 0x629947:c.instructions+=30;goto B629947;
case 0x62994e:c.instructions+=29;goto B62994e;
case 0x629955:c.instructions+=28;goto B629955;
case 0x629958:c.instructions+=27;goto B629958;
case 0x62995f:c.instructions+=26;goto B62995f;
case 0x629962:c.instructions+=25;goto B629962;
case 0x629964:c.instructions+=24;goto B629964;
case 0x62996b:c.instructions+=23;goto B62996b;
case 0x62996e:c.instructions+=22;goto B62996e;
case 0x629970:c.instructions+=21;goto B629970;
case 0x629977:c.instructions+=20;goto B629977;
case 0x62997a:c.instructions+=19;goto B62997a;
case 0x62997c:c.instructions+=18;goto B62997c;
case 0x629983:c.instructions+=17;goto B629983;
case 0x62998a:c.instructions+=16;goto B62998a;
case 0x62998d:c.instructions+=15;goto B62998d;
case 0x629994:c.instructions+=14;goto B629994;
case 0x629998:c.instructions+=13;goto B629998;
case 0x62999b:c.instructions+=12;goto B62999b;
case 0x62999c:c.instructions+=11;goto B62999c;
case 0x6299a0:c.instructions+=10;goto B6299a0;
case 0x6299a1:c.instructions+=9;goto B6299a1;
case 0x6299a3:c.instructions+=8;goto B6299a3;
case 0x6299aa:c.instructions+=7;goto B6299aa;
case 0x6299ad:c.instructions+=6;goto B6299ad;
case 0x6299af:c.instructions+=5;goto B6299af;
case 0x6299b6:c.instructions+=4;goto B6299b6;
case 0x6299b9:c.instructions+=3;goto B6299b9;
case 0x6299bb:c.instructions+=2;goto B6299bb;
case 0x6299c2:c.instructions+=1;goto B6299c2;
case 0x6299c7:goto L6299c7;
case 0x6299cb:c.instructions+=196;goto B6299cb;
case 0x6299d2:c.instructions+=195;goto B6299d2;
case 0x6299d6:c.instructions+=194;goto B6299d6;
case 0x6299dd:c.instructions+=193;goto B6299dd;
case 0x6299df:c.instructions+=192;goto B6299df;
case 0x6299e3:c.instructions+=191;goto B6299e3;
case 0x6299ea:c.instructions+=190;goto B6299ea;
case 0x6299ec:c.instructions+=189;goto B6299ec;
case 0x6299f0:c.instructions+=188;goto B6299f0;
case 0x6299f7:c.instructions+=187;goto B6299f7;
case 0x6299f9:c.instructions+=186;goto B6299f9;
case 0x6299fd:c.instructions+=185;goto B6299fd;
case 0x629a01:c.instructions+=184;goto B629a01;
case 0x629a08:c.instructions+=183;goto B629a08;
case 0x629a0c:c.instructions+=182;goto B629a0c;
case 0x629a13:c.instructions+=181;goto B629a13;
case 0x629a15:c.instructions+=180;goto B629a15;
case 0x629a19:c.instructions+=179;goto B629a19;
case 0x629a20:c.instructions+=178;goto B629a20;
case 0x629a22:c.instructions+=177;goto B629a22;
case 0x629a26:c.instructions+=176;goto B629a26;
case 0x629a2d:c.instructions+=175;goto B629a2d;
case 0x629a2f:c.instructions+=174;goto B629a2f;
case 0x629a33:c.instructions+=173;goto B629a33;
case 0x629a37:c.instructions+=172;goto B629a37;
case 0x629a3e:c.instructions+=171;goto B629a3e;
case 0x629a42:c.instructions+=170;goto B629a42;
case 0x629a49:c.instructions+=169;goto B629a49;
case 0x629a4b:c.instructions+=168;goto B629a4b;
case 0x629a4f:c.instructions+=167;goto B629a4f;
case 0x629a56:c.instructions+=166;goto B629a56;
case 0x629a58:c.instructions+=165;goto B629a58;
case 0x629a5c:c.instructions+=164;goto B629a5c;
case 0x629a63:c.instructions+=163;goto B629a63;
case 0x629a65:c.instructions+=162;goto B629a65;
case 0x629a6c:c.instructions+=161;goto B629a6c;
case 0x629a73:c.instructions+=160;goto B629a73;
case 0x629a77:c.instructions+=159;goto B629a77;
case 0x629a7b:c.instructions+=158;goto B629a7b;
case 0x629a82:c.instructions+=157;goto B629a82;
case 0x629a84:c.instructions+=156;goto B629a84;
case 0x629a88:c.instructions+=155;goto B629a88;
case 0x629a8f:c.instructions+=154;goto B629a8f;
case 0x629a91:c.instructions+=153;goto B629a91;
case 0x629a95:c.instructions+=152;goto B629a95;
case 0x629a9c:c.instructions+=151;goto B629a9c;
case 0x629a9e:c.instructions+=150;goto B629a9e;
case 0x629aa5:c.instructions+=149;goto B629aa5;
case 0x629aa9:c.instructions+=148;goto B629aa9;
case 0x629ab0:c.instructions+=147;goto B629ab0;
case 0x629ab4:c.instructions+=146;goto B629ab4;
case 0x629abb:c.instructions+=145;goto B629abb;
case 0x629abd:c.instructions+=144;goto B629abd;
case 0x629ac1:c.instructions+=143;goto B629ac1;
case 0x629ac8:c.instructions+=142;goto B629ac8;
case 0x629aca:c.instructions+=141;goto B629aca;
case 0x629ace:c.instructions+=140;goto B629ace;
case 0x629ad5:c.instructions+=139;goto B629ad5;
case 0x629ad7:c.instructions+=138;goto B629ad7;
case 0x629ade:c.instructions+=137;goto B629ade;
case 0x629ae2:c.instructions+=136;goto B629ae2;
case 0x629ae9:c.instructions+=135;goto B629ae9;
case 0x629aed:c.instructions+=134;goto B629aed;
case 0x629af4:c.instructions+=133;goto B629af4;
case 0x629af6:c.instructions+=132;goto B629af6;
case 0x629afa:c.instructions+=131;goto B629afa;
case 0x629b01:c.instructions+=130;goto B629b01;
case 0x629b03:c.instructions+=129;goto B629b03;
case 0x629b07:c.instructions+=128;goto B629b07;
case 0x629b0e:c.instructions+=127;goto B629b0e;
case 0x629b10:c.instructions+=126;goto B629b10;
case 0x629b17:c.instructions+=125;goto B629b17;
case 0x629b1b:c.instructions+=124;goto B629b1b;
case 0x629b22:c.instructions+=123;goto B629b22;
case 0x629b26:c.instructions+=122;goto B629b26;
case 0x629b2d:c.instructions+=121;goto B629b2d;
case 0x629b2f:c.instructions+=120;goto B629b2f;
case 0x629b33:c.instructions+=119;goto B629b33;
case 0x629b3a:c.instructions+=118;goto B629b3a;
case 0x629b3c:c.instructions+=117;goto B629b3c;
case 0x629b40:c.instructions+=116;goto B629b40;
case 0x629b47:c.instructions+=115;goto B629b47;
case 0x629b49:c.instructions+=114;goto B629b49;
case 0x629b50:c.instructions+=113;goto B629b50;
case 0x629b54:c.instructions+=112;goto B629b54;
case 0x629b5b:c.instructions+=111;goto B629b5b;
case 0x629b5f:c.instructions+=110;goto B629b5f;
case 0x629b66:c.instructions+=109;goto B629b66;
case 0x629b68:c.instructions+=108;goto B629b68;
case 0x629b6c:c.instructions+=107;goto B629b6c;
case 0x629b73:c.instructions+=106;goto B629b73;
case 0x629b75:c.instructions+=105;goto B629b75;
case 0x629b79:c.instructions+=104;goto B629b79;
case 0x629b80:c.instructions+=103;goto B629b80;
case 0x629b82:c.instructions+=102;goto B629b82;
case 0x629b89:c.instructions+=101;goto B629b89;
case 0x629b8d:c.instructions+=100;goto B629b8d;
case 0x629b94:c.instructions+=99;goto B629b94;
case 0x629b98:c.instructions+=98;goto B629b98;
case 0x629b9f:c.instructions+=97;goto B629b9f;
case 0x629ba1:c.instructions+=96;goto B629ba1;
case 0x629ba5:c.instructions+=95;goto B629ba5;
case 0x629bac:c.instructions+=94;goto B629bac;
case 0x629bae:c.instructions+=93;goto B629bae;
case 0x629bb2:c.instructions+=92;goto B629bb2;
case 0x629bb9:c.instructions+=91;goto B629bb9;
case 0x629bbb:c.instructions+=90;goto B629bbb;
case 0x629bc2:c.instructions+=89;goto B629bc2;
case 0x629bc6:c.instructions+=88;goto B629bc6;
case 0x629bcd:c.instructions+=87;goto B629bcd;
case 0x629bd1:c.instructions+=86;goto B629bd1;
case 0x629bd8:c.instructions+=85;goto B629bd8;
case 0x629bda:c.instructions+=84;goto B629bda;
case 0x629bde:c.instructions+=83;goto B629bde;
case 0x629be5:c.instructions+=82;goto B629be5;
case 0x629be7:c.instructions+=81;goto B629be7;
case 0x629beb:c.instructions+=80;goto B629beb;
case 0x629bf2:c.instructions+=79;goto B629bf2;
case 0x629bf4:c.instructions+=78;goto B629bf4;
case 0x629bfb:c.instructions+=77;goto B629bfb;
case 0x629bff:c.instructions+=76;goto B629bff;
case 0x629c06:c.instructions+=75;goto B629c06;
case 0x629c0a:c.instructions+=74;goto B629c0a;
case 0x629c11:c.instructions+=73;goto B629c11;
case 0x629c13:c.instructions+=72;goto B629c13;
case 0x629c17:c.instructions+=71;goto B629c17;
case 0x629c1e:c.instructions+=70;goto B629c1e;
case 0x629c20:c.instructions+=69;goto B629c20;
case 0x629c24:c.instructions+=68;goto B629c24;
case 0x629c2b:c.instructions+=67;goto B629c2b;
case 0x629c2d:c.instructions+=66;goto B629c2d;
case 0x629c34:c.instructions+=65;goto B629c34;
case 0x629c38:c.instructions+=64;goto B629c38;
case 0x629c3f:c.instructions+=63;goto B629c3f;
case 0x629c43:c.instructions+=62;goto B629c43;
case 0x629c4a:c.instructions+=61;goto B629c4a;
case 0x629c4c:c.instructions+=60;goto B629c4c;
case 0x629c50:c.instructions+=59;goto B629c50;
case 0x629c57:c.instructions+=58;goto B629c57;
case 0x629c59:c.instructions+=57;goto B629c59;
case 0x629c5d:c.instructions+=56;goto B629c5d;
case 0x629c64:c.instructions+=55;goto B629c64;
case 0x629c66:c.instructions+=54;goto B629c66;
case 0x629c6d:c.instructions+=53;goto B629c6d;
case 0x629c71:c.instructions+=52;goto B629c71;
case 0x629c78:c.instructions+=51;goto B629c78;
case 0x629c7c:c.instructions+=50;goto B629c7c;
case 0x629c83:c.instructions+=49;goto B629c83;
case 0x629c85:c.instructions+=48;goto B629c85;
case 0x629c89:c.instructions+=47;goto B629c89;
case 0x629c90:c.instructions+=46;goto B629c90;
case 0x629c92:c.instructions+=45;goto B629c92;
case 0x629c96:c.instructions+=44;goto B629c96;
case 0x629c9d:c.instructions+=43;goto B629c9d;
case 0x629c9f:c.instructions+=42;goto B629c9f;
case 0x629ca6:c.instructions+=41;goto B629ca6;
case 0x629caa:c.instructions+=40;goto B629caa;
case 0x629cb1:c.instructions+=39;goto B629cb1;
case 0x629cb5:c.instructions+=38;goto B629cb5;
case 0x629cbc:c.instructions+=37;goto B629cbc;
case 0x629cbe:c.instructions+=36;goto B629cbe;
case 0x629cc2:c.instructions+=35;goto B629cc2;
case 0x629cc9:c.instructions+=34;goto B629cc9;
case 0x629ccb:c.instructions+=33;goto B629ccb;
case 0x629ccf:c.instructions+=32;goto B629ccf;
case 0x629cd6:c.instructions+=31;goto B629cd6;
case 0x629cd8:c.instructions+=30;goto B629cd8;
case 0x629cdf:c.instructions+=29;goto B629cdf;
case 0x629ce3:c.instructions+=28;goto B629ce3;
case 0x629cea:c.instructions+=27;goto B629cea;
case 0x629cee:c.instructions+=26;goto B629cee;
case 0x629cf2:c.instructions+=25;goto B629cf2;
case 0x629cf3:c.instructions+=24;goto B629cf3;
case 0x629cfa:c.instructions+=23;goto B629cfa;
case 0x629cfe:c.instructions+=22;goto B629cfe;
case 0x629cff:c.instructions+=21;goto B629cff;
case 0x629d01:c.instructions+=20;goto B629d01;
case 0x629d05:c.instructions+=19;goto B629d05;
case 0x629d0c:c.instructions+=18;goto B629d0c;
case 0x629d0e:c.instructions+=17;goto B629d0e;
case 0x629d12:c.instructions+=16;goto B629d12;
case 0x629d19:c.instructions+=15;goto B629d19;
case 0x629d1b:c.instructions+=14;goto B629d1b;
case 0x629d22:c.instructions+=13;goto B629d22;
case 0x629d26:c.instructions+=12;goto B629d26;
case 0x629d2d:c.instructions+=11;goto B629d2d;
case 0x629d31:c.instructions+=10;goto B629d31;
case 0x629d38:c.instructions+=9;goto B629d38;
case 0x629d3a:c.instructions+=8;goto B629d3a;
case 0x629d3e:c.instructions+=7;goto B629d3e;
case 0x629d45:c.instructions+=6;goto B629d45;
case 0x629d47:c.instructions+=5;goto B629d47;
case 0x629d4b:c.instructions+=4;goto B629d4b;
case 0x629d52:c.instructions+=3;goto B629d52;
case 0x629d54:c.instructions+=2;goto B629d54;
case 0x629d5b:c.instructions+=1;goto B629d5b;
case 0x629d60:goto L629d60;
case 0x629d64:c.instructions+=197;goto B629d64;
case 0x629d67:c.instructions+=196;goto B629d67;
case 0x629d6b:c.instructions+=195;goto B629d6b;
case 0x629d6e:c.instructions+=194;goto B629d6e;
case 0x629d70:c.instructions+=193;goto B629d70;
case 0x629d74:c.instructions+=192;goto B629d74;
case 0x629d76:c.instructions+=191;goto B629d76;
case 0x629d78:c.instructions+=190;goto B629d78;
case 0x629d7c:c.instructions+=189;goto B629d7c;
case 0x629d7f:c.instructions+=188;goto B629d7f;
case 0x629d81:c.instructions+=187;goto B629d81;
case 0x629d88:c.instructions+=186;goto B629d88;
case 0x629d8c:c.instructions+=185;goto B629d8c;
case 0x629d8f:c.instructions+=184;goto B629d8f;
case 0x629d93:c.instructions+=183;goto B629d93;
case 0x629d96:c.instructions+=182;goto B629d96;
case 0x629d98:c.instructions+=181;goto B629d98;
case 0x629d9c:c.instructions+=180;goto B629d9c;
case 0x629d9f:c.instructions+=179;goto B629d9f;
case 0x629da1:c.instructions+=178;goto B629da1;
case 0x629da5:c.instructions+=177;goto B629da5;
case 0x629da8:c.instructions+=176;goto B629da8;
case 0x629daa:c.instructions+=175;goto B629daa;
case 0x629db1:c.instructions+=174;goto B629db1;
case 0x629db5:c.instructions+=173;goto B629db5;
case 0x629db8:c.instructions+=172;goto B629db8;
case 0x629dbc:c.instructions+=171;goto B629dbc;
case 0x629dbf:c.instructions+=170;goto B629dbf;
case 0x629dc1:c.instructions+=169;goto B629dc1;
case 0x629dc5:c.instructions+=168;goto B629dc5;
case 0x629dc8:c.instructions+=167;goto B629dc8;
case 0x629dca:c.instructions+=166;goto B629dca;
case 0x629dce:c.instructions+=165;goto B629dce;
case 0x629dd1:c.instructions+=164;goto B629dd1;
case 0x629dd3:c.instructions+=163;goto B629dd3;
case 0x629dda:c.instructions+=162;goto B629dda;
case 0x629dde:c.instructions+=161;goto B629dde;
case 0x629de1:c.instructions+=160;goto B629de1;
case 0x629de5:c.instructions+=159;goto B629de5;
case 0x629de8:c.instructions+=158;goto B629de8;
case 0x629dea:c.instructions+=157;goto B629dea;
case 0x629dee:c.instructions+=156;goto B629dee;
case 0x629df1:c.instructions+=155;goto B629df1;
case 0x629df3:c.instructions+=154;goto B629df3;
case 0x629df7:c.instructions+=153;goto B629df7;
case 0x629dfa:c.instructions+=152;goto B629dfa;
case 0x629dfc:c.instructions+=151;goto B629dfc;
case 0x629e03:c.instructions+=150;goto B629e03;
case 0x629e07:c.instructions+=149;goto B629e07;
case 0x629e0a:c.instructions+=148;goto B629e0a;
case 0x629e0e:c.instructions+=147;goto B629e0e;
case 0x629e11:c.instructions+=146;goto B629e11;
case 0x629e13:c.instructions+=145;goto B629e13;
case 0x629e17:c.instructions+=144;goto B629e17;
case 0x629e1a:c.instructions+=143;goto B629e1a;
case 0x629e1c:c.instructions+=142;goto B629e1c;
case 0x629e20:c.instructions+=141;goto B629e20;
case 0x629e22:c.instructions+=140;goto B629e22;
case 0x629e24:c.instructions+=139;goto B629e24;
case 0x629e2b:c.instructions+=138;goto B629e2b;
case 0x629e2f:c.instructions+=137;goto B629e2f;
case 0x629e32:c.instructions+=136;goto B629e32;
case 0x629e36:c.instructions+=135;goto B629e36;
case 0x629e39:c.instructions+=134;goto B629e39;
case 0x629e3b:c.instructions+=133;goto B629e3b;
case 0x629e3f:c.instructions+=132;goto B629e3f;
case 0x629e42:c.instructions+=131;goto B629e42;
case 0x629e44:c.instructions+=130;goto B629e44;
case 0x629e48:c.instructions+=129;goto B629e48;
case 0x629e4b:c.instructions+=128;goto B629e4b;
case 0x629e4d:c.instructions+=127;goto B629e4d;
case 0x629e54:c.instructions+=126;goto B629e54;
case 0x629e58:c.instructions+=125;goto B629e58;
case 0x629e5b:c.instructions+=124;goto B629e5b;
case 0x629e5f:c.instructions+=123;goto B629e5f;
case 0x629e62:c.instructions+=122;goto B629e62;
case 0x629e64:c.instructions+=121;goto B629e64;
case 0x629e68:c.instructions+=120;goto B629e68;
case 0x629e6b:c.instructions+=119;goto B629e6b;
case 0x629e6d:c.instructions+=118;goto B629e6d;
case 0x629e71:c.instructions+=117;goto B629e71;
case 0x629e74:c.instructions+=116;goto B629e74;
case 0x629e76:c.instructions+=115;goto B629e76;
case 0x629e7d:c.instructions+=114;goto B629e7d;
case 0x629e81:c.instructions+=113;goto B629e81;
case 0x629e84:c.instructions+=112;goto B629e84;
case 0x629e88:c.instructions+=111;goto B629e88;
case 0x629e8b:c.instructions+=110;goto B629e8b;
case 0x629e8d:c.instructions+=109;goto B629e8d;
case 0x629e91:c.instructions+=108;goto B629e91;
case 0x629e94:c.instructions+=107;goto B629e94;
case 0x629e96:c.instructions+=106;goto B629e96;
case 0x629e9a:c.instructions+=105;goto B629e9a;
case 0x629e9d:c.instructions+=104;goto B629e9d;
case 0x629e9f:c.instructions+=103;goto B629e9f;
case 0x629ea6:c.instructions+=102;goto B629ea6;
case 0x629eaa:c.instructions+=101;goto B629eaa;
case 0x629ead:c.instructions+=100;goto B629ead;
case 0x629eb1:c.instructions+=99;goto B629eb1;
case 0x629eb4:c.instructions+=98;goto B629eb4;
case 0x629eb6:c.instructions+=97;goto B629eb6;
case 0x629eba:c.instructions+=96;goto B629eba;
case 0x629ebd:c.instructions+=95;goto B629ebd;
case 0x629ebf:c.instructions+=94;goto B629ebf;
case 0x629ec3:c.instructions+=93;goto B629ec3;
case 0x629ec5:c.instructions+=92;goto B629ec5;
case 0x629ec7:c.instructions+=91;goto B629ec7;
case 0x629ece:c.instructions+=90;goto B629ece;
case 0x629ed2:c.instructions+=89;goto B629ed2;
case 0x629ed5:c.instructions+=88;goto B629ed5;
case 0x629ed9:c.instructions+=87;goto B629ed9;
case 0x629edc:c.instructions+=86;goto B629edc;
case 0x629ede:c.instructions+=85;goto B629ede;
case 0x629ee2:c.instructions+=84;goto B629ee2;
case 0x629ee5:c.instructions+=83;goto B629ee5;
case 0x629ee7:c.instructions+=82;goto B629ee7;
case 0x629eeb:c.instructions+=81;goto B629eeb;
case 0x629eee:c.instructions+=80;goto B629eee;
case 0x629ef0:c.instructions+=79;goto B629ef0;
case 0x629ef7:c.instructions+=78;goto B629ef7;
case 0x629efb:c.instructions+=77;goto B629efb;
case 0x629efe:c.instructions+=76;goto B629efe;
case 0x629f02:c.instructions+=75;goto B629f02;
case 0x629f05:c.instructions+=74;goto B629f05;
case 0x629f07:c.instructions+=73;goto B629f07;
case 0x629f0b:c.instructions+=72;goto B629f0b;
case 0x629f0e:c.instructions+=71;goto B629f0e;
case 0x629f10:c.instructions+=70;goto B629f10;
case 0x629f14:c.instructions+=69;goto B629f14;
case 0x629f17:c.instructions+=68;goto B629f17;
case 0x629f19:c.instructions+=67;goto B629f19;
case 0x629f20:c.instructions+=66;goto B629f20;
case 0x629f24:c.instructions+=65;goto B629f24;
case 0x629f27:c.instructions+=64;goto B629f27;
case 0x629f2b:c.instructions+=63;goto B629f2b;
case 0x629f2e:c.instructions+=62;goto B629f2e;
case 0x629f30:c.instructions+=61;goto B629f30;
case 0x629f34:c.instructions+=60;goto B629f34;
case 0x629f37:c.instructions+=59;goto B629f37;
case 0x629f39:c.instructions+=58;goto B629f39;
case 0x629f3d:c.instructions+=57;goto B629f3d;
case 0x629f40:c.instructions+=56;goto B629f40;
case 0x629f42:c.instructions+=55;goto B629f42;
case 0x629f49:c.instructions+=54;goto B629f49;
case 0x629f4d:c.instructions+=53;goto B629f4d;
case 0x629f50:c.instructions+=52;goto B629f50;
case 0x629f54:c.instructions+=51;goto B629f54;
case 0x629f57:c.instructions+=50;goto B629f57;
case 0x629f59:c.instructions+=49;goto B629f59;
case 0x629f5d:c.instructions+=48;goto B629f5d;
case 0x629f60:c.instructions+=47;goto B629f60;
case 0x629f62:c.instructions+=46;goto B629f62;
case 0x629f66:c.instructions+=45;goto B629f66;
case 0x629f68:c.instructions+=44;goto B629f68;
case 0x629f6a:c.instructions+=43;goto B629f6a;
case 0x629f71:c.instructions+=42;goto B629f71;
case 0x629f78:c.instructions+=41;goto B629f78;
case 0x629f7c:c.instructions+=40;goto B629f7c;
case 0x629f83:c.instructions+=39;goto B629f83;
case 0x629f86:c.instructions+=38;goto B629f86;
case 0x629f89:c.instructions+=37;goto B629f89;
case 0x629f8d:c.instructions+=36;goto B629f8d;
case 0x629f8e:c.instructions+=35;goto B629f8e;
case 0x629f91:c.instructions+=34;goto B629f91;
case 0x629f92:c.instructions+=33;goto B629f92;
case 0x629f94:c.instructions+=32;goto B629f94;
case 0x629f98:c.instructions+=31;goto B629f98;
case 0x629f9b:c.instructions+=30;goto B629f9b;
case 0x629f9d:c.instructions+=29;goto B629f9d;
case 0x629fa1:c.instructions+=28;goto B629fa1;
case 0x629fa4:c.instructions+=27;goto B629fa4;
case 0x629fa6:c.instructions+=26;goto B629fa6;
case 0x629fad:c.instructions+=25;goto B629fad;
case 0x629fb1:c.instructions+=24;goto B629fb1;
case 0x629fb4:c.instructions+=23;goto B629fb4;
case 0x629fb8:c.instructions+=22;goto B629fb8;
case 0x629fbb:c.instructions+=21;goto B629fbb;
case 0x629fbd:c.instructions+=20;goto B629fbd;
case 0x629fc1:c.instructions+=19;goto B629fc1;
case 0x629fc4:c.instructions+=18;goto B629fc4;
case 0x629fc6:c.instructions+=17;goto B629fc6;
case 0x629fca:c.instructions+=16;goto B629fca;
case 0x629fcd:c.instructions+=15;goto B629fcd;
case 0x629fcf:c.instructions+=14;goto B629fcf;
case 0x629fd6:c.instructions+=13;goto B629fd6;
case 0x629fda:c.instructions+=12;goto B629fda;
case 0x629fdd:c.instructions+=11;goto B629fdd;
case 0x629fe1:c.instructions+=10;goto B629fe1;
case 0x629fe4:c.instructions+=9;goto B629fe4;
case 0x629fe6:c.instructions+=8;goto B629fe6;
case 0x629fea:c.instructions+=7;goto B629fea;
case 0x629fed:c.instructions+=6;goto B629fed;
case 0x629fef:c.instructions+=5;goto B629fef;
case 0x629ff3:c.instructions+=4;goto B629ff3;
case 0x629ff6:c.instructions+=3;goto B629ff6;
case 0x629ff8:c.instructions+=2;goto B629ff8;
case 0x629fff:c.instructions+=1;goto B629fff;
default:missing_instruction(c.pc);}
B629006:L629006:{c.instructions+=139;NFSU2_TR(0x629006);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629008:{NFSU2_TR(0x629008);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62900f:{NFSU2_TR(0x62900f);
{u32 ea_=u32(r4(R+16)+u32(1556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629016:{NFSU2_TR(0x629016);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62901a:{NFSU2_TR(0x62901a);
{u32 ea_=u32(r4(R+16)+u32(1540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629021:{NFSU2_TR(0x629021);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629025:{NFSU2_TR(0x629025);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629027:{NFSU2_TR(0x629027);
{u32 ea_=u32(r4(R+16)+u32(1524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62902e:{NFSU2_TR(0x62902e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629032:{NFSU2_TR(0x629032);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629034:{NFSU2_TR(0x629034);
{u32 ea_=u32(r4(R+16)+u32(1508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62903b:{NFSU2_TR(0x62903b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62903f:{NFSU2_TR(0x62903f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629041:{NFSU2_TR(0x629041);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629048:{NFSU2_TR(0x629048);
{u32 ea_=u32(r4(R+16)+u32(1560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62904f:{NFSU2_TR(0x62904f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629053:{NFSU2_TR(0x629053);
{u32 ea_=u32(r4(R+16)+u32(1544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62905a:{NFSU2_TR(0x62905a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62905e:{NFSU2_TR(0x62905e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629060:{NFSU2_TR(0x629060);
{u32 ea_=u32(r4(R+16)+u32(1528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629067:{NFSU2_TR(0x629067);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62906b:{NFSU2_TR(0x62906b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62906d:{NFSU2_TR(0x62906d);
{u32 ea_=u32(r4(R+16)+u32(1512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629074:{NFSU2_TR(0x629074);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629078:{NFSU2_TR(0x629078);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62907a:{NFSU2_TR(0x62907a);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629081:{NFSU2_TR(0x629081);
{u32 ea_=u32(r4(R+16)+u32(1564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629088:{NFSU2_TR(0x629088);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62908c:{NFSU2_TR(0x62908c);
{u32 ea_=u32(r4(R+16)+u32(1548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629093:{NFSU2_TR(0x629093);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629097:{NFSU2_TR(0x629097);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629099:{NFSU2_TR(0x629099);
{u32 ea_=u32(r4(R+16)+u32(1532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290a0:{NFSU2_TR(0x6290a0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290a4:{NFSU2_TR(0x6290a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6290a6:{NFSU2_TR(0x6290a6);
{u32 ea_=u32(r4(R+16)+u32(1516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290ad:{NFSU2_TR(0x6290ad);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290b1:{NFSU2_TR(0x6290b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6290b3:{NFSU2_TR(0x6290b3);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6290ba:{NFSU2_TR(0x6290ba);
{u32 ea_=u32(r4(R+16)+u32(1552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290c1:{NFSU2_TR(0x6290c1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290c5:{NFSU2_TR(0x6290c5);
{u32 ea_=u32(r4(R+16)+u32(1536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290cc:{NFSU2_TR(0x6290cc);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290d0:{NFSU2_TR(0x6290d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6290d2:{NFSU2_TR(0x6290d2);
{u32 ea_=u32(r4(R+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290d9:{NFSU2_TR(0x6290d9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290dd:{NFSU2_TR(0x6290dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6290df:{NFSU2_TR(0x6290df);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290e3:{NFSU2_TR(0x6290e3);
{u32 ea_=u32(r4(R+16)+u32(1504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290ea:{NFSU2_TR(0x6290ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6290ec:{NFSU2_TR(0x6290ec);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6290f3:{NFSU2_TR(0x6290f3);
{u32 ea_=u32(r4(R+16)+u32(1556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6290fa:{NFSU2_TR(0x6290fa);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6290fe:{NFSU2_TR(0x6290fe);
{u32 ea_=u32(r4(R+16)+u32(1540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629105:{NFSU2_TR(0x629105);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629109:{NFSU2_TR(0x629109);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62910b:{NFSU2_TR(0x62910b);
{u32 ea_=u32(r4(R+16)+u32(1524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629112:{NFSU2_TR(0x629112);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629116:{NFSU2_TR(0x629116);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629118:{NFSU2_TR(0x629118);
{u32 ea_=u32(r4(R+16)+u32(1508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62911f:{NFSU2_TR(0x62911f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629123:{NFSU2_TR(0x629123);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629125:{NFSU2_TR(0x629125);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62912c:{NFSU2_TR(0x62912c);
{u32 ea_=u32(r4(R+16)+u32(1560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629133:{NFSU2_TR(0x629133);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629137:{NFSU2_TR(0x629137);
{u32 ea_=u32(r4(R+16)+u32(1544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62913e:{NFSU2_TR(0x62913e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629142:{NFSU2_TR(0x629142);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629144:{NFSU2_TR(0x629144);
{u32 ea_=u32(r4(R+16)+u32(1528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62914b:{NFSU2_TR(0x62914b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62914f:{NFSU2_TR(0x62914f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629151:{NFSU2_TR(0x629151);
{u32 ea_=u32(r4(R+16)+u32(1512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629158:{NFSU2_TR(0x629158);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62915c:{NFSU2_TR(0x62915c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62915e:{NFSU2_TR(0x62915e);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629165:{NFSU2_TR(0x629165);
{u32 ea_=u32(r4(R+16)+u32(1564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62916c:{NFSU2_TR(0x62916c);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629170:{NFSU2_TR(0x629170);
{u32 ea_=u32(r4(R+16)+u32(1548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629177:{NFSU2_TR(0x629177);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62917b:{NFSU2_TR(0x62917b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62917d:{NFSU2_TR(0x62917d);
{u32 ea_=u32(r4(R+16)+u32(1532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629184:{NFSU2_TR(0x629184);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629188:{NFSU2_TR(0x629188);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62918a:{NFSU2_TR(0x62918a);
{u32 ea_=u32(r4(R+16)+u32(1516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629191:{NFSU2_TR(0x629191);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629195:{NFSU2_TR(0x629195);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629197:{NFSU2_TR(0x629197);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62919e:{NFSU2_TR(0x62919e);
{u32 ea_=u32(r4(R+16)+u32(1552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291a5:{NFSU2_TR(0x6291a5);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291a9:{NFSU2_TR(0x6291a9);
{u32 ea_=u32(r4(R+16)+u32(1536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291b0:{NFSU2_TR(0x6291b0);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291b4:{NFSU2_TR(0x6291b4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6291b6:{NFSU2_TR(0x6291b6);
{u32 ea_=u32(r4(R+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291bd:{NFSU2_TR(0x6291bd);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291c1:{NFSU2_TR(0x6291c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6291c3:{NFSU2_TR(0x6291c3);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291c7:{NFSU2_TR(0x6291c7);
{u32 ea_=u32(r4(R+16)+u32(1504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291ce:{NFSU2_TR(0x6291ce);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6291d0:{NFSU2_TR(0x6291d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6291d7:{NFSU2_TR(0x6291d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6291d8:{NFSU2_TR(0x6291d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6291dc:{NFSU2_TR(0x6291dc);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6291e3:{NFSU2_TR(0x6291e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6291e4:{NFSU2_TR(0x6291e4);
{u32 ea_=u32(r4(R+16)+u32(1564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291eb:{NFSU2_TR(0x6291eb);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291ef:{NFSU2_TR(0x6291ef);
{u32 ea_=u32(r4(R+16)+u32(1548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6291f6:{NFSU2_TR(0x6291f6);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6291fa:{NFSU2_TR(0x6291fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6291fc:{NFSU2_TR(0x6291fc);
{u32 ea_=u32(r4(R+16)+u32(1532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629203:{NFSU2_TR(0x629203);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629207:{NFSU2_TR(0x629207);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629209:{NFSU2_TR(0x629209);
{u32 ea_=u32(r4(R+16)+u32(1516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629210:{NFSU2_TR(0x629210);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629214:{NFSU2_TR(0x629214);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629216:{NFSU2_TR(0x629216);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62921d:{NFSU2_TR(0x62921d);
{u32 ea_=u32(r4(R+16)+u32(1568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629224:{NFSU2_TR(0x629224);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629228:{NFSU2_TR(0x629228);
{u32 ea_=u32(r4(R+16)+u32(1552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62922f:{NFSU2_TR(0x62922f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629233:{NFSU2_TR(0x629233);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629235:{NFSU2_TR(0x629235);
{u32 ea_=u32(r4(R+16)+u32(1536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62923c:{NFSU2_TR(0x62923c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629240:{NFSU2_TR(0x629240);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629242:{NFSU2_TR(0x629242);
{u32 ea_=u32(r4(R+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629249:{NFSU2_TR(0x629249);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62924d:{NFSU2_TR(0x62924d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62924f:{NFSU2_TR(0x62924f);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629256:{NFSU2_TR(0x629256);
{u32 ea_=u32(r4(R+16)+u32(1572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62925d:{NFSU2_TR(0x62925d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629261:{NFSU2_TR(0x629261);
{u32 ea_=u32(r4(R+16)+u32(1556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629268:{NFSU2_TR(0x629268);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62926c:{NFSU2_TR(0x62926c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62926e:{NFSU2_TR(0x62926e);
{u32 ea_=u32(r4(R+16)+u32(1540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629275:{NFSU2_TR(0x629275);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629279:{NFSU2_TR(0x629279);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62927b:{NFSU2_TR(0x62927b);
{u32 ea_=u32(r4(R+16)+u32(1524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629282:{NFSU2_TR(0x629282);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629286:{NFSU2_TR(0x629286);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629288:{NFSU2_TR(0x629288);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62928f:{NFSU2_TR(0x62928f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x629294ull));
TAIL_STATIC(0x4012b0u,401);
}
B629294:L629294:{c.instructions+=197;NFSU2_TR(0x629294);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629298:{NFSU2_TR(0x629298);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62929b:{NFSU2_TR(0x62929b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62929f:{NFSU2_TR(0x62929f);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292a2:{NFSU2_TR(0x6292a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292a4:{NFSU2_TR(0x6292a4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292a8:{NFSU2_TR(0x6292a8);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292aa:{NFSU2_TR(0x6292aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292ac:{NFSU2_TR(0x6292ac);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292b0:{NFSU2_TR(0x6292b0);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292b3:{NFSU2_TR(0x6292b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292b5:{NFSU2_TR(0x6292b5);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6292bc:{NFSU2_TR(0x6292bc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292c0:{NFSU2_TR(0x6292c0);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292c3:{NFSU2_TR(0x6292c3);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292c7:{NFSU2_TR(0x6292c7);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292ca:{NFSU2_TR(0x6292ca);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292cc:{NFSU2_TR(0x6292cc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292d0:{NFSU2_TR(0x6292d0);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292d3:{NFSU2_TR(0x6292d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292d5:{NFSU2_TR(0x6292d5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292d9:{NFSU2_TR(0x6292d9);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292dc:{NFSU2_TR(0x6292dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292de:{NFSU2_TR(0x6292de);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6292e5:{NFSU2_TR(0x6292e5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292e9:{NFSU2_TR(0x6292e9);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292ec:{NFSU2_TR(0x6292ec);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292f0:{NFSU2_TR(0x6292f0);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292f3:{NFSU2_TR(0x6292f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292f5:{NFSU2_TR(0x6292f5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6292f9:{NFSU2_TR(0x6292f9);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6292fc:{NFSU2_TR(0x6292fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6292fe:{NFSU2_TR(0x6292fe);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629302:{NFSU2_TR(0x629302);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629305:{NFSU2_TR(0x629305);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629307:{NFSU2_TR(0x629307);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62930e:{NFSU2_TR(0x62930e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629312:{NFSU2_TR(0x629312);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629315:{NFSU2_TR(0x629315);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629319:{NFSU2_TR(0x629319);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62931c:{NFSU2_TR(0x62931c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62931e:{NFSU2_TR(0x62931e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629322:{NFSU2_TR(0x629322);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629325:{NFSU2_TR(0x629325);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629327:{NFSU2_TR(0x629327);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62932b:{NFSU2_TR(0x62932b);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62932e:{NFSU2_TR(0x62932e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629330:{NFSU2_TR(0x629330);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629337:{NFSU2_TR(0x629337);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62933b:{NFSU2_TR(0x62933b);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62933e:{NFSU2_TR(0x62933e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629342:{NFSU2_TR(0x629342);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629345:{NFSU2_TR(0x629345);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629347:{NFSU2_TR(0x629347);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62934b:{NFSU2_TR(0x62934b);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62934e:{NFSU2_TR(0x62934e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629350:{NFSU2_TR(0x629350);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629354:{NFSU2_TR(0x629354);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629356:{NFSU2_TR(0x629356);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629358:{NFSU2_TR(0x629358);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62935f:{NFSU2_TR(0x62935f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629363:{NFSU2_TR(0x629363);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629366:{NFSU2_TR(0x629366);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62936a:{NFSU2_TR(0x62936a);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62936d:{NFSU2_TR(0x62936d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62936f:{NFSU2_TR(0x62936f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629373:{NFSU2_TR(0x629373);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629376:{NFSU2_TR(0x629376);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629378:{NFSU2_TR(0x629378);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62937c:{NFSU2_TR(0x62937c);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62937f:{NFSU2_TR(0x62937f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629381:{NFSU2_TR(0x629381);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629388:{NFSU2_TR(0x629388);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62938c:{NFSU2_TR(0x62938c);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62938f:{NFSU2_TR(0x62938f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629393:{NFSU2_TR(0x629393);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629396:{NFSU2_TR(0x629396);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629398:{NFSU2_TR(0x629398);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62939c:{NFSU2_TR(0x62939c);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62939f:{NFSU2_TR(0x62939f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293a1:{NFSU2_TR(0x6293a1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293a5:{NFSU2_TR(0x6293a5);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293a8:{NFSU2_TR(0x6293a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293aa:{NFSU2_TR(0x6293aa);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6293b1:{NFSU2_TR(0x6293b1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293b5:{NFSU2_TR(0x6293b5);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293b8:{NFSU2_TR(0x6293b8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293bc:{NFSU2_TR(0x6293bc);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293bf:{NFSU2_TR(0x6293bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293c1:{NFSU2_TR(0x6293c1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293c5:{NFSU2_TR(0x6293c5);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293c8:{NFSU2_TR(0x6293c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293ca:{NFSU2_TR(0x6293ca);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293ce:{NFSU2_TR(0x6293ce);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293d1:{NFSU2_TR(0x6293d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293d3:{NFSU2_TR(0x6293d3);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6293da:{NFSU2_TR(0x6293da);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293de:{NFSU2_TR(0x6293de);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293e1:{NFSU2_TR(0x6293e1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293e5:{NFSU2_TR(0x6293e5);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293e8:{NFSU2_TR(0x6293e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293ea:{NFSU2_TR(0x6293ea);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293ee:{NFSU2_TR(0x6293ee);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293f1:{NFSU2_TR(0x6293f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293f3:{NFSU2_TR(0x6293f3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6293f7:{NFSU2_TR(0x6293f7);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6293f9:{NFSU2_TR(0x6293f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6293fb:{NFSU2_TR(0x6293fb);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629402:{NFSU2_TR(0x629402);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629406:{NFSU2_TR(0x629406);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629409:{NFSU2_TR(0x629409);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62940d:{NFSU2_TR(0x62940d);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629410:{NFSU2_TR(0x629410);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629412:{NFSU2_TR(0x629412);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629416:{NFSU2_TR(0x629416);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629419:{NFSU2_TR(0x629419);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62941b:{NFSU2_TR(0x62941b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62941f:{NFSU2_TR(0x62941f);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629422:{NFSU2_TR(0x629422);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629424:{NFSU2_TR(0x629424);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62942b:{NFSU2_TR(0x62942b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62942f:{NFSU2_TR(0x62942f);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629432:{NFSU2_TR(0x629432);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629436:{NFSU2_TR(0x629436);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629439:{NFSU2_TR(0x629439);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62943b:{NFSU2_TR(0x62943b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62943f:{NFSU2_TR(0x62943f);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629442:{NFSU2_TR(0x629442);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629444:{NFSU2_TR(0x629444);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629448:{NFSU2_TR(0x629448);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62944b:{NFSU2_TR(0x62944b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62944d:{NFSU2_TR(0x62944d);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629454:{NFSU2_TR(0x629454);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629458:{NFSU2_TR(0x629458);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62945b:{NFSU2_TR(0x62945b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62945f:{NFSU2_TR(0x62945f);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629462:{NFSU2_TR(0x629462);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629464:{NFSU2_TR(0x629464);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629468:{NFSU2_TR(0x629468);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62946b:{NFSU2_TR(0x62946b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62946d:{NFSU2_TR(0x62946d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629471:{NFSU2_TR(0x629471);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629474:{NFSU2_TR(0x629474);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62947b:{NFSU2_TR(0x62947b);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B629482:{NFSU2_TR(0x629482);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629483:{NFSU2_TR(0x629483);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629485:{NFSU2_TR(0x629485);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629486:{NFSU2_TR(0x629486);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62948d:{NFSU2_TR(0x62948d);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629491:{NFSU2_TR(0x629491);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629494:{NFSU2_TR(0x629494);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629498:{NFSU2_TR(0x629498);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62949b:{NFSU2_TR(0x62949b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62949d:{NFSU2_TR(0x62949d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294a1:{NFSU2_TR(0x6294a1);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294a4:{NFSU2_TR(0x6294a4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294a6:{NFSU2_TR(0x6294a6);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294aa:{NFSU2_TR(0x6294aa);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294ac:{NFSU2_TR(0x6294ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294ae:{NFSU2_TR(0x6294ae);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6294b5:{NFSU2_TR(0x6294b5);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294b9:{NFSU2_TR(0x6294b9);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294bc:{NFSU2_TR(0x6294bc);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294c0:{NFSU2_TR(0x6294c0);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294c3:{NFSU2_TR(0x6294c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294c5:{NFSU2_TR(0x6294c5);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294c9:{NFSU2_TR(0x6294c9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294cc:{NFSU2_TR(0x6294cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294ce:{NFSU2_TR(0x6294ce);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294d2:{NFSU2_TR(0x6294d2);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294d5:{NFSU2_TR(0x6294d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294d7:{NFSU2_TR(0x6294d7);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6294de:{NFSU2_TR(0x6294de);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294e2:{NFSU2_TR(0x6294e2);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294e5:{NFSU2_TR(0x6294e5);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294e9:{NFSU2_TR(0x6294e9);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294ec:{NFSU2_TR(0x6294ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294ee:{NFSU2_TR(0x6294ee);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294f2:{NFSU2_TR(0x6294f2);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294f5:{NFSU2_TR(0x6294f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6294f7:{NFSU2_TR(0x6294f7);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6294fb:{NFSU2_TR(0x6294fb);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6294fe:{NFSU2_TR(0x6294fe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629500:{NFSU2_TR(0x629500);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629507:{NFSU2_TR(0x629507);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62950b:{NFSU2_TR(0x62950b);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62950e:{NFSU2_TR(0x62950e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629512:{NFSU2_TR(0x629512);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629515:{NFSU2_TR(0x629515);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629517:{NFSU2_TR(0x629517);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62951b:{NFSU2_TR(0x62951b);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62951e:{NFSU2_TR(0x62951e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629520:{NFSU2_TR(0x629520);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629524:{NFSU2_TR(0x629524);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629527:{NFSU2_TR(0x629527);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629529:{NFSU2_TR(0x629529);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629530:{NFSU2_TR(0x629530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x629535ull));
TAIL_STATIC(0x4012b0u,401);
}
B629535:L629535:{c.instructions+=12;NFSU2_TR(0x629535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B629538:{NFSU2_TR(0x629538);
u8 U[4];
w4(U+0,u32(u32(u32(0xb40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B62953f:{NFSU2_TR(0x62953f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629540:{NFSU2_TR(0x629540);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B629547:{NFSU2_TR(0x629547);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629548:{NFSU2_TR(0x629548);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62954f:{NFSU2_TR(0x62954f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629550:{NFSU2_TR(0x629550);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629555:{NFSU2_TR(0x629555);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62955c:{NFSU2_TR(0x62955c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62955d:{NFSU2_TR(0x62955d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62955e:{NFSU2_TR(0x62955e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x629563ull));
TAIL_STATIC(0x48f660u,48f);
}
B629563:L629563:{c.instructions+=4;NFSU2_TR(0x629563);
u8 U[8];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62956a:{NFSU2_TR(0x62956a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B62956d:{NFSU2_TR(0x62956d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B62956f:{NFSU2_TR(0x62956f);
if(r1(R+518)){{goto L6295a0;}}
}
B629571:L629571:{c.instructions+=13;NFSU2_TR(0x629571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B629574:{NFSU2_TR(0x629574);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62957b:{NFSU2_TR(0x62957b);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B629582:{NFSU2_TR(0x629582);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629584:{NFSU2_TR(0x629584);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B629586:{NFSU2_TR(0x629586);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62958d:{NFSU2_TR(0x62958d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62958e:{NFSU2_TR(0x62958e);
u8 U[8];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B629595:{NFSU2_TR(0x629595);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629596:{NFSU2_TR(0x629596);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629597:{NFSU2_TR(0x629597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62959a:{NFSU2_TR(0x62959a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62959b:{NFSU2_TR(0x62959b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6295a0ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B6295a0:L6295a0:{c.instructions+=3;NFSU2_TR(0x6295a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6295a7:{NFSU2_TR(0x6295a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6295a9:{NFSU2_TR(0x6295a9);
if(r1(R+518)){TAIL_STATIC(0x62ab69u,62a);}
}
B6295af:L6295af:{c.instructions+=3;NFSU2_TR(0x6295af);
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
B6295b8:{NFSU2_TR(0x6295b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6295bb:{NFSU2_TR(0x6295bb);
if(r1(R+518)){{goto L629678;}}
}
B6295c1:L6295c1:{c.instructions+=4;NFSU2_TR(0x6295c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6295c2:{NFSU2_TR(0x6295c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8d4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6295c9:{NFSU2_TR(0x6295c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6295ca:{NFSU2_TR(0x6295ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6295cfull));
TAIL_STATIC(0x4012b0u,401);
}
B6295cf:L6295cf:{c.instructions+=18;NFSU2_TR(0x6295cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x908ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6295d6:{NFSU2_TR(0x6295d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6295dd:{NFSU2_TR(0x6295dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6295e4:{NFSU2_TR(0x6295e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6295eb:{NFSU2_TR(0x6295eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6295f2:{NFSU2_TR(0x6295f2);
w4(R+4,u32(0-u32(r4(R+4))));
}
B6295f4:{NFSU2_TR(0x6295f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6295fb:{NFSU2_TR(0x6295fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6295fc:{NFSU2_TR(0x6295fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8dcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B629603:{NFSU2_TR(0x629603);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62960a:{NFSU2_TR(0x62960a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62960b:{NFSU2_TR(0x62960b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8e0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B629612:{NFSU2_TR(0x629612);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629613:{NFSU2_TR(0x629613);
u8 U[8];
w4(U+0,u32(u32(u32(0x914ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62961e:{NFSU2_TR(0x62961e);
u8 U[8];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B629629:{NFSU2_TR(0x629629);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B629634:{NFSU2_TR(0x629634);
u8 U[8];
w4(U+0,u32(u32(u32(0x920ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B62963f:{NFSU2_TR(0x62963f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x629644ull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B629644:L629644:{c.instructions+=8;NFSU2_TR(0x629644);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62964b:{NFSU2_TR(0x62964b);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B629652:{NFSU2_TR(0x629652);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B629659:{NFSU2_TR(0x629659);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B629660:{NFSU2_TR(0x629660);
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
B629663:{NFSU2_TR(0x629663);
u8 U[8];
w4(U+0,u32(u32(u32(0x900ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62966a:{NFSU2_TR(0x62966a);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B629671:{NFSU2_TR(0x629671);
u8 U[4];
w4(U+0,u32(u32(u32(0x8d0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B629678:L629678:{c.instructions+=197;NFSU2_TR(0x629678);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62967f:{NFSU2_TR(0x62967f);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629682:{NFSU2_TR(0x629682);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629689:{NFSU2_TR(0x629689);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62968b:{NFSU2_TR(0x62968b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62968d:{NFSU2_TR(0x62968d);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629694:{NFSU2_TR(0x629694);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629697:{NFSU2_TR(0x629697);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629699:{NFSU2_TR(0x629699);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296a0:{NFSU2_TR(0x6296a0);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296a3:{NFSU2_TR(0x6296a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296a5:{NFSU2_TR(0x6296a5);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6296a9:{NFSU2_TR(0x6296a9);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296b0:{NFSU2_TR(0x6296b0);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296b3:{NFSU2_TR(0x6296b3);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296ba:{NFSU2_TR(0x6296ba);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296bd:{NFSU2_TR(0x6296bd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296bf:{NFSU2_TR(0x6296bf);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296c6:{NFSU2_TR(0x6296c6);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296c9:{NFSU2_TR(0x6296c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296cb:{NFSU2_TR(0x6296cb);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296d2:{NFSU2_TR(0x6296d2);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296d5:{NFSU2_TR(0x6296d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296d7:{NFSU2_TR(0x6296d7);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6296db:{NFSU2_TR(0x6296db);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296e2:{NFSU2_TR(0x6296e2);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296e5:{NFSU2_TR(0x6296e5);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296ec:{NFSU2_TR(0x6296ec);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296ef:{NFSU2_TR(0x6296ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296f1:{NFSU2_TR(0x6296f1);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6296f8:{NFSU2_TR(0x6296f8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6296fb:{NFSU2_TR(0x6296fb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6296fd:{NFSU2_TR(0x6296fd);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629704:{NFSU2_TR(0x629704);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629707:{NFSU2_TR(0x629707);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629709:{NFSU2_TR(0x629709);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62970d:{NFSU2_TR(0x62970d);
{u32 ea_=u32(r4(R+16)+u32(576u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629714:{NFSU2_TR(0x629714);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629717:{NFSU2_TR(0x629717);
{u32 ea_=u32(r4(R+16)+u32(584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62971e:{NFSU2_TR(0x62971e);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629721:{NFSU2_TR(0x629721);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629723:{NFSU2_TR(0x629723);
{u32 ea_=u32(r4(R+16)+u32(580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62972a:{NFSU2_TR(0x62972a);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62972d:{NFSU2_TR(0x62972d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62972f:{NFSU2_TR(0x62972f);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629736:{NFSU2_TR(0x629736);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629739:{NFSU2_TR(0x629739);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62973b:{NFSU2_TR(0x62973b);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62973f:{NFSU2_TR(0x62973f);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629746:{NFSU2_TR(0x629746);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629749:{NFSU2_TR(0x629749);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629750:{NFSU2_TR(0x629750);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629752:{NFSU2_TR(0x629752);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629754:{NFSU2_TR(0x629754);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62975b:{NFSU2_TR(0x62975b);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62975e:{NFSU2_TR(0x62975e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629760:{NFSU2_TR(0x629760);
{u32 ea_=u32(r4(R+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629767:{NFSU2_TR(0x629767);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62976a:{NFSU2_TR(0x62976a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62976c:{NFSU2_TR(0x62976c);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629773:{NFSU2_TR(0x629773);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62977a:{NFSU2_TR(0x62977a);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62977d:{NFSU2_TR(0x62977d);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629784:{NFSU2_TR(0x629784);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629787:{NFSU2_TR(0x629787);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629789:{NFSU2_TR(0x629789);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629790:{NFSU2_TR(0x629790);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629793:{NFSU2_TR(0x629793);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629795:{NFSU2_TR(0x629795);
{u32 ea_=u32(r4(R+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62979c:{NFSU2_TR(0x62979c);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62979f:{NFSU2_TR(0x62979f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297a1:{NFSU2_TR(0x6297a1);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6297a8:{NFSU2_TR(0x6297a8);
{u32 ea_=u32(r4(R+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297af:{NFSU2_TR(0x6297af);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297b2:{NFSU2_TR(0x6297b2);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297b9:{NFSU2_TR(0x6297b9);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297bc:{NFSU2_TR(0x6297bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297be:{NFSU2_TR(0x6297be);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297c5:{NFSU2_TR(0x6297c5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297c8:{NFSU2_TR(0x6297c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297ca:{NFSU2_TR(0x6297ca);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297d1:{NFSU2_TR(0x6297d1);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297d4:{NFSU2_TR(0x6297d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297d6:{NFSU2_TR(0x6297d6);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6297dd:{NFSU2_TR(0x6297dd);
{u32 ea_=u32(r4(R+16)+u32(592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297e4:{NFSU2_TR(0x6297e4);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297e7:{NFSU2_TR(0x6297e7);
{u32 ea_=u32(r4(R+16)+u32(600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297ee:{NFSU2_TR(0x6297ee);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297f1:{NFSU2_TR(0x6297f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297f3:{NFSU2_TR(0x6297f3);
{u32 ea_=u32(r4(R+16)+u32(596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6297fa:{NFSU2_TR(0x6297fa);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6297fd:{NFSU2_TR(0x6297fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6297ff:{NFSU2_TR(0x6297ff);
{u32 ea_=u32(r4(R+16)+u32(604u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629806:{NFSU2_TR(0x629806);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629809:{NFSU2_TR(0x629809);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62980b:{NFSU2_TR(0x62980b);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629812:{NFSU2_TR(0x629812);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629819:{NFSU2_TR(0x629819);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62981c:{NFSU2_TR(0x62981c);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629823:{NFSU2_TR(0x629823);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629825:{NFSU2_TR(0x629825);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629827:{NFSU2_TR(0x629827);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62982e:{NFSU2_TR(0x62982e);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629831:{NFSU2_TR(0x629831);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629833:{NFSU2_TR(0x629833);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62983a:{NFSU2_TR(0x62983a);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62983d:{NFSU2_TR(0x62983d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62983f:{NFSU2_TR(0x62983f);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629846:{NFSU2_TR(0x629846);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62984d:{NFSU2_TR(0x62984d);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629850:{NFSU2_TR(0x629850);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629857:{NFSU2_TR(0x629857);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62985a:{NFSU2_TR(0x62985a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62985c:{NFSU2_TR(0x62985c);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629863:{NFSU2_TR(0x629863);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629866:{NFSU2_TR(0x629866);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629868:{NFSU2_TR(0x629868);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62986f:{NFSU2_TR(0x62986f);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629872:{NFSU2_TR(0x629872);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629874:{NFSU2_TR(0x629874);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62987b:{NFSU2_TR(0x62987b);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629882:{NFSU2_TR(0x629882);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629885:{NFSU2_TR(0x629885);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62988c:{NFSU2_TR(0x62988c);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62988f:{NFSU2_TR(0x62988f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629891:{NFSU2_TR(0x629891);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629898:{NFSU2_TR(0x629898);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62989b:{NFSU2_TR(0x62989b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62989d:{NFSU2_TR(0x62989d);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298a4:{NFSU2_TR(0x6298a4);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298a7:{NFSU2_TR(0x6298a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6298a9:{NFSU2_TR(0x6298a9);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6298b0:{NFSU2_TR(0x6298b0);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298b7:{NFSU2_TR(0x6298b7);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298ba:{NFSU2_TR(0x6298ba);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298c1:{NFSU2_TR(0x6298c1);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298c4:{NFSU2_TR(0x6298c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6298c6:{NFSU2_TR(0x6298c6);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298cd:{NFSU2_TR(0x6298cd);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298d0:{NFSU2_TR(0x6298d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6298d2:{NFSU2_TR(0x6298d2);
{u32 ea_=u32(r4(R+16)+u32(620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298d9:{NFSU2_TR(0x6298d9);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298dc:{NFSU2_TR(0x6298dc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6298de:{NFSU2_TR(0x6298de);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6298e5:{NFSU2_TR(0x6298e5);
{u32 ea_=u32(r4(R+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298ec:{NFSU2_TR(0x6298ec);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298ef:{NFSU2_TR(0x6298ef);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6298f6:{NFSU2_TR(0x6298f6);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6298f9:{NFSU2_TR(0x6298f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6298fb:{NFSU2_TR(0x6298fb);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629902:{NFSU2_TR(0x629902);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629905:{NFSU2_TR(0x629905);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629907:{NFSU2_TR(0x629907);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62990e:{NFSU2_TR(0x62990e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629910:{NFSU2_TR(0x629910);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629912:{NFSU2_TR(0x629912);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629919:{NFSU2_TR(0x629919);
{u32 ea_=u32(r4(R+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629920:{NFSU2_TR(0x629920);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629923:{NFSU2_TR(0x629923);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62992a:{NFSU2_TR(0x62992a);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62992d:{NFSU2_TR(0x62992d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62992f:{NFSU2_TR(0x62992f);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629936:{NFSU2_TR(0x629936);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629939:{NFSU2_TR(0x629939);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62993b:{NFSU2_TR(0x62993b);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629942:{NFSU2_TR(0x629942);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629945:{NFSU2_TR(0x629945);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629947:{NFSU2_TR(0x629947);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62994e:{NFSU2_TR(0x62994e);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629955:{NFSU2_TR(0x629955);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629958:{NFSU2_TR(0x629958);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62995f:{NFSU2_TR(0x62995f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629962:{NFSU2_TR(0x629962);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629964:{NFSU2_TR(0x629964);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62996b:{NFSU2_TR(0x62996b);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62996e:{NFSU2_TR(0x62996e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629970:{NFSU2_TR(0x629970);
{u32 ea_=u32(r4(R+16)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629977:{NFSU2_TR(0x629977);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62997a:{NFSU2_TR(0x62997a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62997c:{NFSU2_TR(0x62997c);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629983:{NFSU2_TR(0x629983);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62998a:{NFSU2_TR(0x62998a);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62998d:{NFSU2_TR(0x62998d);
{u32 ea_=u32(r4(R+16)+u32(632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629994:{NFSU2_TR(0x629994);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B629998:{NFSU2_TR(0x629998);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62999b:{NFSU2_TR(0x62999b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62999c:{NFSU2_TR(0x62999c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6299a0:{NFSU2_TR(0x6299a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6299a1:{NFSU2_TR(0x6299a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299a3:{NFSU2_TR(0x6299a3);
{u32 ea_=u32(r4(R+16)+u32(644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299aa:{NFSU2_TR(0x6299aa);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299ad:{NFSU2_TR(0x6299ad);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299af:{NFSU2_TR(0x6299af);
{u32 ea_=u32(r4(R+16)+u32(636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299b6:{NFSU2_TR(0x6299b6);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299b9:{NFSU2_TR(0x6299b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299bb:{NFSU2_TR(0x6299bb);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6299c2:{NFSU2_TR(0x6299c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6299c7ull));
TAIL_STATIC(0x4012b0u,401);
}
B6299c7:L6299c7:{c.instructions+=197;NFSU2_TR(0x6299c7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299cb:{NFSU2_TR(0x6299cb);
{u32 ea_=u32(r4(R+16)+u32(1048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299d2:{NFSU2_TR(0x6299d2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299d6:{NFSU2_TR(0x6299d6);
{u32 ea_=u32(r4(R+16)+u32(1064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299dd:{NFSU2_TR(0x6299dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299df:{NFSU2_TR(0x6299df);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299e3:{NFSU2_TR(0x6299e3);
{u32 ea_=u32(r4(R+16)+u32(1080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299ea:{NFSU2_TR(0x6299ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299ec:{NFSU2_TR(0x6299ec);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6299f0:{NFSU2_TR(0x6299f0);
{u32 ea_=u32(r4(R+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6299f7:{NFSU2_TR(0x6299f7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6299f9:{NFSU2_TR(0x6299f9);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6299fd:{NFSU2_TR(0x6299fd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a01:{NFSU2_TR(0x629a01);
{u32 ea_=u32(r4(R+16)+u32(1052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a08:{NFSU2_TR(0x629a08);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a0c:{NFSU2_TR(0x629a0c);
{u32 ea_=u32(r4(R+16)+u32(1068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a13:{NFSU2_TR(0x629a13);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a15:{NFSU2_TR(0x629a15);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a19:{NFSU2_TR(0x629a19);
{u32 ea_=u32(r4(R+16)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a20:{NFSU2_TR(0x629a20);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a22:{NFSU2_TR(0x629a22);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a26:{NFSU2_TR(0x629a26);
{u32 ea_=u32(r4(R+16)+u32(1100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a2d:{NFSU2_TR(0x629a2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a2f:{NFSU2_TR(0x629a2f);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629a33:{NFSU2_TR(0x629a33);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a37:{NFSU2_TR(0x629a37);
{u32 ea_=u32(r4(R+16)+u32(1056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a3e:{NFSU2_TR(0x629a3e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a42:{NFSU2_TR(0x629a42);
{u32 ea_=u32(r4(R+16)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a49:{NFSU2_TR(0x629a49);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a4b:{NFSU2_TR(0x629a4b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a4f:{NFSU2_TR(0x629a4f);
{u32 ea_=u32(r4(R+16)+u32(1088u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a56:{NFSU2_TR(0x629a56);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a58:{NFSU2_TR(0x629a58);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a5c:{NFSU2_TR(0x629a5c);
{u32 ea_=u32(r4(R+16)+u32(1104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a63:{NFSU2_TR(0x629a63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a65:{NFSU2_TR(0x629a65);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629a6c:{NFSU2_TR(0x629a6c);
{u32 ea_=u32(r4(R+16)+u32(1060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a73:{NFSU2_TR(0x629a73);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a77:{NFSU2_TR(0x629a77);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a7b:{NFSU2_TR(0x629a7b);
{u32 ea_=u32(r4(R+16)+u32(1076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a82:{NFSU2_TR(0x629a82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a84:{NFSU2_TR(0x629a84);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a88:{NFSU2_TR(0x629a88);
{u32 ea_=u32(r4(R+16)+u32(1092u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a8f:{NFSU2_TR(0x629a8f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a91:{NFSU2_TR(0x629a91);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629a95:{NFSU2_TR(0x629a95);
{u32 ea_=u32(r4(R+16)+u32(1108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629a9c:{NFSU2_TR(0x629a9c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629a9e:{NFSU2_TR(0x629a9e);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629aa5:{NFSU2_TR(0x629aa5);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629aa9:{NFSU2_TR(0x629aa9);
{u32 ea_=u32(r4(R+16)+u32(1064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ab0:{NFSU2_TR(0x629ab0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ab4:{NFSU2_TR(0x629ab4);
{u32 ea_=u32(r4(R+16)+u32(1048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629abb:{NFSU2_TR(0x629abb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629abd:{NFSU2_TR(0x629abd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ac1:{NFSU2_TR(0x629ac1);
{u32 ea_=u32(r4(R+16)+u32(1080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ac8:{NFSU2_TR(0x629ac8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629aca:{NFSU2_TR(0x629aca);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ace:{NFSU2_TR(0x629ace);
{u32 ea_=u32(r4(R+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ad5:{NFSU2_TR(0x629ad5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ad7:{NFSU2_TR(0x629ad7);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629ade:{NFSU2_TR(0x629ade);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ae2:{NFSU2_TR(0x629ae2);
{u32 ea_=u32(r4(R+16)+u32(1052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ae9:{NFSU2_TR(0x629ae9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629aed:{NFSU2_TR(0x629aed);
{u32 ea_=u32(r4(R+16)+u32(1068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629af4:{NFSU2_TR(0x629af4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629af6:{NFSU2_TR(0x629af6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629afa:{NFSU2_TR(0x629afa);
{u32 ea_=u32(r4(R+16)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b01:{NFSU2_TR(0x629b01);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b03:{NFSU2_TR(0x629b03);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b07:{NFSU2_TR(0x629b07);
{u32 ea_=u32(r4(R+16)+u32(1100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b0e:{NFSU2_TR(0x629b0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b10:{NFSU2_TR(0x629b10);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629b17:{NFSU2_TR(0x629b17);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b1b:{NFSU2_TR(0x629b1b);
{u32 ea_=u32(r4(R+16)+u32(1056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b22:{NFSU2_TR(0x629b22);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b26:{NFSU2_TR(0x629b26);
{u32 ea_=u32(r4(R+16)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b2d:{NFSU2_TR(0x629b2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b2f:{NFSU2_TR(0x629b2f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b33:{NFSU2_TR(0x629b33);
{u32 ea_=u32(r4(R+16)+u32(1088u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b3a:{NFSU2_TR(0x629b3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b3c:{NFSU2_TR(0x629b3c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b40:{NFSU2_TR(0x629b40);
{u32 ea_=u32(r4(R+16)+u32(1104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b47:{NFSU2_TR(0x629b47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b49:{NFSU2_TR(0x629b49);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629b50:{NFSU2_TR(0x629b50);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b54:{NFSU2_TR(0x629b54);
{u32 ea_=u32(r4(R+16)+u32(1060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b5b:{NFSU2_TR(0x629b5b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b5f:{NFSU2_TR(0x629b5f);
{u32 ea_=u32(r4(R+16)+u32(1076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b66:{NFSU2_TR(0x629b66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b68:{NFSU2_TR(0x629b68);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b6c:{NFSU2_TR(0x629b6c);
{u32 ea_=u32(r4(R+16)+u32(1092u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b73:{NFSU2_TR(0x629b73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b75:{NFSU2_TR(0x629b75);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b79:{NFSU2_TR(0x629b79);
{u32 ea_=u32(r4(R+16)+u32(1108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b80:{NFSU2_TR(0x629b80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629b82:{NFSU2_TR(0x629b82);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629b89:{NFSU2_TR(0x629b89);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b8d:{NFSU2_TR(0x629b8d);
{u32 ea_=u32(r4(R+16)+u32(1064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b94:{NFSU2_TR(0x629b94);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629b98:{NFSU2_TR(0x629b98);
{u32 ea_=u32(r4(R+16)+u32(1048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629b9f:{NFSU2_TR(0x629b9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ba1:{NFSU2_TR(0x629ba1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ba5:{NFSU2_TR(0x629ba5);
{u32 ea_=u32(r4(R+16)+u32(1080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629bac:{NFSU2_TR(0x629bac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629bae:{NFSU2_TR(0x629bae);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629bb2:{NFSU2_TR(0x629bb2);
{u32 ea_=u32(r4(R+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629bb9:{NFSU2_TR(0x629bb9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629bbb:{NFSU2_TR(0x629bbb);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629bc2:{NFSU2_TR(0x629bc2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629bc6:{NFSU2_TR(0x629bc6);
{u32 ea_=u32(r4(R+16)+u32(1052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629bcd:{NFSU2_TR(0x629bcd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629bd1:{NFSU2_TR(0x629bd1);
{u32 ea_=u32(r4(R+16)+u32(1068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629bd8:{NFSU2_TR(0x629bd8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629bda:{NFSU2_TR(0x629bda);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629bde:{NFSU2_TR(0x629bde);
{u32 ea_=u32(r4(R+16)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629be5:{NFSU2_TR(0x629be5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629be7:{NFSU2_TR(0x629be7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629beb:{NFSU2_TR(0x629beb);
{u32 ea_=u32(r4(R+16)+u32(1100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629bf2:{NFSU2_TR(0x629bf2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629bf4:{NFSU2_TR(0x629bf4);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629bfb:{NFSU2_TR(0x629bfb);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629bff:{NFSU2_TR(0x629bff);
{u32 ea_=u32(r4(R+16)+u32(1056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c06:{NFSU2_TR(0x629c06);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c0a:{NFSU2_TR(0x629c0a);
{u32 ea_=u32(r4(R+16)+u32(1072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c11:{NFSU2_TR(0x629c11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c13:{NFSU2_TR(0x629c13);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c17:{NFSU2_TR(0x629c17);
{u32 ea_=u32(r4(R+16)+u32(1088u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c1e:{NFSU2_TR(0x629c1e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c20:{NFSU2_TR(0x629c20);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c24:{NFSU2_TR(0x629c24);
{u32 ea_=u32(r4(R+16)+u32(1104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c2b:{NFSU2_TR(0x629c2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c2d:{NFSU2_TR(0x629c2d);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629c34:{NFSU2_TR(0x629c34);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c38:{NFSU2_TR(0x629c38);
{u32 ea_=u32(r4(R+16)+u32(1060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c3f:{NFSU2_TR(0x629c3f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c43:{NFSU2_TR(0x629c43);
{u32 ea_=u32(r4(R+16)+u32(1076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c4a:{NFSU2_TR(0x629c4a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c4c:{NFSU2_TR(0x629c4c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c50:{NFSU2_TR(0x629c50);
{u32 ea_=u32(r4(R+16)+u32(1092u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c57:{NFSU2_TR(0x629c57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c59:{NFSU2_TR(0x629c59);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c5d:{NFSU2_TR(0x629c5d);
{u32 ea_=u32(r4(R+16)+u32(1108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c64:{NFSU2_TR(0x629c64);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c66:{NFSU2_TR(0x629c66);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629c6d:{NFSU2_TR(0x629c6d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c71:{NFSU2_TR(0x629c71);
{u32 ea_=u32(r4(R+16)+u32(1064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c78:{NFSU2_TR(0x629c78);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c7c:{NFSU2_TR(0x629c7c);
{u32 ea_=u32(r4(R+16)+u32(1048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c83:{NFSU2_TR(0x629c83);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c85:{NFSU2_TR(0x629c85);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c89:{NFSU2_TR(0x629c89);
{u32 ea_=u32(r4(R+16)+u32(1080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c90:{NFSU2_TR(0x629c90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c92:{NFSU2_TR(0x629c92);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629c96:{NFSU2_TR(0x629c96);
{u32 ea_=u32(r4(R+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629c9d:{NFSU2_TR(0x629c9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629c9f:{NFSU2_TR(0x629c9f);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629ca6:{NFSU2_TR(0x629ca6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629caa:{NFSU2_TR(0x629caa);
{u32 ea_=u32(r4(R+16)+u32(1052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cb1:{NFSU2_TR(0x629cb1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629cb5:{NFSU2_TR(0x629cb5);
{u32 ea_=u32(r4(R+16)+u32(1068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cbc:{NFSU2_TR(0x629cbc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629cbe:{NFSU2_TR(0x629cbe);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629cc2:{NFSU2_TR(0x629cc2);
{u32 ea_=u32(r4(R+16)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cc9:{NFSU2_TR(0x629cc9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ccb:{NFSU2_TR(0x629ccb);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ccf:{NFSU2_TR(0x629ccf);
{u32 ea_=u32(r4(R+16)+u32(1100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cd6:{NFSU2_TR(0x629cd6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629cd8:{NFSU2_TR(0x629cd8);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629cdf:{NFSU2_TR(0x629cdf);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ce3:{NFSU2_TR(0x629ce3);
{u32 ea_=u32(r4(R+16)+u32(1056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cea:{NFSU2_TR(0x629cea);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B629cee:{NFSU2_TR(0x629cee);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629cf2:{NFSU2_TR(0x629cf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629cf3:{NFSU2_TR(0x629cf3);
{u32 ea_=u32(r4(R+16)+u32(1076u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629cfa:{NFSU2_TR(0x629cfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B629cfe:{NFSU2_TR(0x629cfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629cff:{NFSU2_TR(0x629cff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d01:{NFSU2_TR(0x629d01);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d05:{NFSU2_TR(0x629d05);
{u32 ea_=u32(r4(R+16)+u32(1096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d0c:{NFSU2_TR(0x629d0c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d0e:{NFSU2_TR(0x629d0e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d12:{NFSU2_TR(0x629d12);
{u32 ea_=u32(r4(R+16)+u32(1112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d19:{NFSU2_TR(0x629d19);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d1b:{NFSU2_TR(0x629d1b);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629d22:{NFSU2_TR(0x629d22);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d26:{NFSU2_TR(0x629d26);
{u32 ea_=u32(r4(R+16)+u32(1068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d2d:{NFSU2_TR(0x629d2d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d31:{NFSU2_TR(0x629d31);
{u32 ea_=u32(r4(R+16)+u32(1084u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d38:{NFSU2_TR(0x629d38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d3a:{NFSU2_TR(0x629d3a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d3e:{NFSU2_TR(0x629d3e);
{u32 ea_=u32(r4(R+16)+u32(1100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d45:{NFSU2_TR(0x629d45);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d47:{NFSU2_TR(0x629d47);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d4b:{NFSU2_TR(0x629d4b);
{u32 ea_=u32(r4(R+16)+u32(1116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d52:{NFSU2_TR(0x629d52);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d54:{NFSU2_TR(0x629d54);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629d5b:{NFSU2_TR(0x629d5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x629d60ull));
TAIL_STATIC(0x4012b0u,401);
}
B629d60:L629d60:{c.instructions+=198;NFSU2_TR(0x629d60);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d64:{NFSU2_TR(0x629d64);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d67:{NFSU2_TR(0x629d67);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d6b:{NFSU2_TR(0x629d6b);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d6e:{NFSU2_TR(0x629d6e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d70:{NFSU2_TR(0x629d70);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d74:{NFSU2_TR(0x629d74);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d76:{NFSU2_TR(0x629d76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d78:{NFSU2_TR(0x629d78);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d7c:{NFSU2_TR(0x629d7c);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d7f:{NFSU2_TR(0x629d7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d81:{NFSU2_TR(0x629d81);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629d88:{NFSU2_TR(0x629d88);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d8c:{NFSU2_TR(0x629d8c);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d8f:{NFSU2_TR(0x629d8f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d93:{NFSU2_TR(0x629d93);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d96:{NFSU2_TR(0x629d96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629d98:{NFSU2_TR(0x629d98);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629d9c:{NFSU2_TR(0x629d9c);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629d9f:{NFSU2_TR(0x629d9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629da1:{NFSU2_TR(0x629da1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629da5:{NFSU2_TR(0x629da5);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629da8:{NFSU2_TR(0x629da8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629daa:{NFSU2_TR(0x629daa);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629db1:{NFSU2_TR(0x629db1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629db5:{NFSU2_TR(0x629db5);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629db8:{NFSU2_TR(0x629db8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629dbc:{NFSU2_TR(0x629dbc);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629dbf:{NFSU2_TR(0x629dbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629dc1:{NFSU2_TR(0x629dc1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629dc5:{NFSU2_TR(0x629dc5);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629dc8:{NFSU2_TR(0x629dc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629dca:{NFSU2_TR(0x629dca);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629dce:{NFSU2_TR(0x629dce);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629dd1:{NFSU2_TR(0x629dd1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629dd3:{NFSU2_TR(0x629dd3);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629dda:{NFSU2_TR(0x629dda);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629dde:{NFSU2_TR(0x629dde);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629de1:{NFSU2_TR(0x629de1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629de5:{NFSU2_TR(0x629de5);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629de8:{NFSU2_TR(0x629de8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629dea:{NFSU2_TR(0x629dea);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629dee:{NFSU2_TR(0x629dee);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629df1:{NFSU2_TR(0x629df1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629df3:{NFSU2_TR(0x629df3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629df7:{NFSU2_TR(0x629df7);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629dfa:{NFSU2_TR(0x629dfa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629dfc:{NFSU2_TR(0x629dfc);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629e03:{NFSU2_TR(0x629e03);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e07:{NFSU2_TR(0x629e07);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e0a:{NFSU2_TR(0x629e0a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e0e:{NFSU2_TR(0x629e0e);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e11:{NFSU2_TR(0x629e11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e13:{NFSU2_TR(0x629e13);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e17:{NFSU2_TR(0x629e17);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e1a:{NFSU2_TR(0x629e1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e1c:{NFSU2_TR(0x629e1c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e20:{NFSU2_TR(0x629e20);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e22:{NFSU2_TR(0x629e22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e24:{NFSU2_TR(0x629e24);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629e2b:{NFSU2_TR(0x629e2b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e2f:{NFSU2_TR(0x629e2f);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e32:{NFSU2_TR(0x629e32);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e36:{NFSU2_TR(0x629e36);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e39:{NFSU2_TR(0x629e39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e3b:{NFSU2_TR(0x629e3b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e3f:{NFSU2_TR(0x629e3f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e42:{NFSU2_TR(0x629e42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e44:{NFSU2_TR(0x629e44);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e48:{NFSU2_TR(0x629e48);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e4b:{NFSU2_TR(0x629e4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e4d:{NFSU2_TR(0x629e4d);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629e54:{NFSU2_TR(0x629e54);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e58:{NFSU2_TR(0x629e58);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e5b:{NFSU2_TR(0x629e5b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e5f:{NFSU2_TR(0x629e5f);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e62:{NFSU2_TR(0x629e62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e64:{NFSU2_TR(0x629e64);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e68:{NFSU2_TR(0x629e68);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e6b:{NFSU2_TR(0x629e6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e6d:{NFSU2_TR(0x629e6d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e71:{NFSU2_TR(0x629e71);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e74:{NFSU2_TR(0x629e74);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e76:{NFSU2_TR(0x629e76);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629e7d:{NFSU2_TR(0x629e7d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e81:{NFSU2_TR(0x629e81);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e84:{NFSU2_TR(0x629e84);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e88:{NFSU2_TR(0x629e88);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e8b:{NFSU2_TR(0x629e8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e8d:{NFSU2_TR(0x629e8d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e91:{NFSU2_TR(0x629e91);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e94:{NFSU2_TR(0x629e94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e96:{NFSU2_TR(0x629e96);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629e9a:{NFSU2_TR(0x629e9a);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629e9d:{NFSU2_TR(0x629e9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629e9f:{NFSU2_TR(0x629e9f);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629ea6:{NFSU2_TR(0x629ea6);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629eaa:{NFSU2_TR(0x629eaa);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ead:{NFSU2_TR(0x629ead);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629eb1:{NFSU2_TR(0x629eb1);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629eb4:{NFSU2_TR(0x629eb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629eb6:{NFSU2_TR(0x629eb6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629eba:{NFSU2_TR(0x629eba);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ebd:{NFSU2_TR(0x629ebd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ebf:{NFSU2_TR(0x629ebf);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ec3:{NFSU2_TR(0x629ec3);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ec5:{NFSU2_TR(0x629ec5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ec7:{NFSU2_TR(0x629ec7);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629ece:{NFSU2_TR(0x629ece);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ed2:{NFSU2_TR(0x629ed2);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ed5:{NFSU2_TR(0x629ed5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ed9:{NFSU2_TR(0x629ed9);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629edc:{NFSU2_TR(0x629edc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ede:{NFSU2_TR(0x629ede);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ee2:{NFSU2_TR(0x629ee2);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ee5:{NFSU2_TR(0x629ee5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ee7:{NFSU2_TR(0x629ee7);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629eeb:{NFSU2_TR(0x629eeb);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629eee:{NFSU2_TR(0x629eee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ef0:{NFSU2_TR(0x629ef0);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629ef7:{NFSU2_TR(0x629ef7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629efb:{NFSU2_TR(0x629efb);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629efe:{NFSU2_TR(0x629efe);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f02:{NFSU2_TR(0x629f02);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f05:{NFSU2_TR(0x629f05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f07:{NFSU2_TR(0x629f07);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f0b:{NFSU2_TR(0x629f0b);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f0e:{NFSU2_TR(0x629f0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f10:{NFSU2_TR(0x629f10);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f14:{NFSU2_TR(0x629f14);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f17:{NFSU2_TR(0x629f17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f19:{NFSU2_TR(0x629f19);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629f20:{NFSU2_TR(0x629f20);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f24:{NFSU2_TR(0x629f24);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f27:{NFSU2_TR(0x629f27);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f2b:{NFSU2_TR(0x629f2b);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f2e:{NFSU2_TR(0x629f2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f30:{NFSU2_TR(0x629f30);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f34:{NFSU2_TR(0x629f34);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f37:{NFSU2_TR(0x629f37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f39:{NFSU2_TR(0x629f39);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f3d:{NFSU2_TR(0x629f3d);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f40:{NFSU2_TR(0x629f40);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f42:{NFSU2_TR(0x629f42);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629f49:{NFSU2_TR(0x629f49);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f4d:{NFSU2_TR(0x629f4d);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f50:{NFSU2_TR(0x629f50);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f54:{NFSU2_TR(0x629f54);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f57:{NFSU2_TR(0x629f57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f59:{NFSU2_TR(0x629f59);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f5d:{NFSU2_TR(0x629f5d);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f60:{NFSU2_TR(0x629f60);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f62:{NFSU2_TR(0x629f62);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f66:{NFSU2_TR(0x629f66);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f68:{NFSU2_TR(0x629f68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f6a:{NFSU2_TR(0x629f6a);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629f71:{NFSU2_TR(0x629f71);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B629f78:{NFSU2_TR(0x629f78);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f7c:{NFSU2_TR(0x629f7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B629f83:{NFSU2_TR(0x629f83);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f86:{NFSU2_TR(0x629f86);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B629f89:{NFSU2_TR(0x629f89);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f8d:{NFSU2_TR(0x629f8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629f8e:{NFSU2_TR(0x629f8e);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f91:{NFSU2_TR(0x629f91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B629f92:{NFSU2_TR(0x629f92);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f94:{NFSU2_TR(0x629f94);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629f98:{NFSU2_TR(0x629f98);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629f9b:{NFSU2_TR(0x629f9b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629f9d:{NFSU2_TR(0x629f9d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fa1:{NFSU2_TR(0x629fa1);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fa4:{NFSU2_TR(0x629fa4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fa6:{NFSU2_TR(0x629fa6);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629fad:{NFSU2_TR(0x629fad);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fb1:{NFSU2_TR(0x629fb1);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fb4:{NFSU2_TR(0x629fb4);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fb8:{NFSU2_TR(0x629fb8);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fbb:{NFSU2_TR(0x629fbb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fbd:{NFSU2_TR(0x629fbd);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fc1:{NFSU2_TR(0x629fc1);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fc4:{NFSU2_TR(0x629fc4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fc6:{NFSU2_TR(0x629fc6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fca:{NFSU2_TR(0x629fca);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fcd:{NFSU2_TR(0x629fcd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fcf:{NFSU2_TR(0x629fcf);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629fd6:{NFSU2_TR(0x629fd6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fda:{NFSU2_TR(0x629fda);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fdd:{NFSU2_TR(0x629fdd);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fe1:{NFSU2_TR(0x629fe1);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fe4:{NFSU2_TR(0x629fe4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fe6:{NFSU2_TR(0x629fe6);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629fea:{NFSU2_TR(0x629fea);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629fed:{NFSU2_TR(0x629fed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629fef:{NFSU2_TR(0x629fef);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B629ff3:{NFSU2_TR(0x629ff3);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B629ff6:{NFSU2_TR(0x629ff6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B629ff8:{NFSU2_TR(0x629ff8);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B629fff:{NFSU2_TR(0x629fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62a004ull));
TAIL_STATIC(0x4012b0u,401);
}
XIT:NFSU2_TR_EXIT(0x629,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
