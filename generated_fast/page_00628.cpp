#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_629(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x628,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x628,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_628(u8* __restrict R,Cpu& c);
u32 page_628(Cpu& c){return body_628(c.regs.data(),c);}
__attribute__((noinline)) u32 body_628(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x628001:goto L628001;
case 0x628003:c.instructions+=30;goto B628003;
case 0x62800a:c.instructions+=29;goto B62800a;
case 0x62800e:c.instructions+=28;goto B62800e;
case 0x628012:c.instructions+=27;goto B628012;
case 0x628015:c.instructions+=26;goto B628015;
case 0x628016:c.instructions+=25;goto B628016;
case 0x62801a:c.instructions+=24;goto B62801a;
case 0x62801d:c.instructions+=23;goto B62801d;
case 0x62801f:c.instructions+=22;goto B62801f;
case 0x628023:c.instructions+=21;goto B628023;
case 0x628026:c.instructions+=20;goto B628026;
case 0x628028:c.instructions+=19;goto B628028;
case 0x62802c:c.instructions+=18;goto B62802c;
case 0x62802f:c.instructions+=17;goto B62802f;
case 0x628031:c.instructions+=16;goto B628031;
case 0x628038:c.instructions+=15;goto B628038;
case 0x62803c:c.instructions+=14;goto B62803c;
case 0x62803f:c.instructions+=13;goto B62803f;
case 0x628043:c.instructions+=12;goto B628043;
case 0x628046:c.instructions+=11;goto B628046;
case 0x628048:c.instructions+=10;goto B628048;
case 0x62804c:c.instructions+=9;goto B62804c;
case 0x62804f:c.instructions+=8;goto B62804f;
case 0x628051:c.instructions+=7;goto B628051;
case 0x628055:c.instructions+=6;goto B628055;
case 0x628058:c.instructions+=5;goto B628058;
case 0x62805c:c.instructions+=4;goto B62805c;
case 0x62805d:c.instructions+=3;goto B62805d;
case 0x62805f:c.instructions+=2;goto B62805f;
case 0x628066:c.instructions+=1;goto B628066;
case 0x62806b:goto L62806b;
case 0x628072:c.instructions+=196;goto B628072;
case 0x628076:c.instructions+=195;goto B628076;
case 0x62807d:c.instructions+=194;goto B62807d;
case 0x628081:c.instructions+=193;goto B628081;
case 0x628083:c.instructions+=192;goto B628083;
case 0x62808a:c.instructions+=191;goto B62808a;
case 0x62808e:c.instructions+=190;goto B62808e;
case 0x628090:c.instructions+=189;goto B628090;
case 0x628097:c.instructions+=188;goto B628097;
case 0x62809b:c.instructions+=187;goto B62809b;
case 0x62809d:c.instructions+=186;goto B62809d;
case 0x6280a4:c.instructions+=185;goto B6280a4;
case 0x6280ab:c.instructions+=184;goto B6280ab;
case 0x6280af:c.instructions+=183;goto B6280af;
case 0x6280b6:c.instructions+=182;goto B6280b6;
case 0x6280ba:c.instructions+=181;goto B6280ba;
case 0x6280bc:c.instructions+=180;goto B6280bc;
case 0x6280c3:c.instructions+=179;goto B6280c3;
case 0x6280c7:c.instructions+=178;goto B6280c7;
case 0x6280c9:c.instructions+=177;goto B6280c9;
case 0x6280d0:c.instructions+=176;goto B6280d0;
case 0x6280d4:c.instructions+=175;goto B6280d4;
case 0x6280d6:c.instructions+=174;goto B6280d6;
case 0x6280dd:c.instructions+=173;goto B6280dd;
case 0x6280e4:c.instructions+=172;goto B6280e4;
case 0x6280e8:c.instructions+=171;goto B6280e8;
case 0x6280ef:c.instructions+=170;goto B6280ef;
case 0x6280f3:c.instructions+=169;goto B6280f3;
case 0x6280f5:c.instructions+=168;goto B6280f5;
case 0x6280fc:c.instructions+=167;goto B6280fc;
case 0x628100:c.instructions+=166;goto B628100;
case 0x628102:c.instructions+=165;goto B628102;
case 0x628109:c.instructions+=164;goto B628109;
case 0x62810d:c.instructions+=163;goto B62810d;
case 0x62810f:c.instructions+=162;goto B62810f;
case 0x628116:c.instructions+=161;goto B628116;
case 0x62811d:c.instructions+=160;goto B62811d;
case 0x628121:c.instructions+=159;goto B628121;
case 0x628128:c.instructions+=158;goto B628128;
case 0x62812c:c.instructions+=157;goto B62812c;
case 0x62812e:c.instructions+=156;goto B62812e;
case 0x628135:c.instructions+=155;goto B628135;
case 0x628139:c.instructions+=154;goto B628139;
case 0x62813b:c.instructions+=153;goto B62813b;
case 0x628142:c.instructions+=152;goto B628142;
case 0x628146:c.instructions+=151;goto B628146;
case 0x628148:c.instructions+=150;goto B628148;
case 0x62814f:c.instructions+=149;goto B62814f;
case 0x628156:c.instructions+=148;goto B628156;
case 0x62815a:c.instructions+=147;goto B62815a;
case 0x628161:c.instructions+=146;goto B628161;
case 0x628165:c.instructions+=145;goto B628165;
case 0x628167:c.instructions+=144;goto B628167;
case 0x62816e:c.instructions+=143;goto B62816e;
case 0x628172:c.instructions+=142;goto B628172;
case 0x628174:c.instructions+=141;goto B628174;
case 0x628178:c.instructions+=140;goto B628178;
case 0x62817f:c.instructions+=139;goto B62817f;
case 0x628181:c.instructions+=138;goto B628181;
case 0x628188:c.instructions+=137;goto B628188;
case 0x62818f:c.instructions+=136;goto B62818f;
case 0x628193:c.instructions+=135;goto B628193;
case 0x62819a:c.instructions+=134;goto B62819a;
case 0x62819e:c.instructions+=133;goto B62819e;
case 0x6281a0:c.instructions+=132;goto B6281a0;
case 0x6281a7:c.instructions+=131;goto B6281a7;
case 0x6281ab:c.instructions+=130;goto B6281ab;
case 0x6281ad:c.instructions+=129;goto B6281ad;
case 0x6281b4:c.instructions+=128;goto B6281b4;
case 0x6281b8:c.instructions+=127;goto B6281b8;
case 0x6281ba:c.instructions+=126;goto B6281ba;
case 0x6281c1:c.instructions+=125;goto B6281c1;
case 0x6281c8:c.instructions+=124;goto B6281c8;
case 0x6281cc:c.instructions+=123;goto B6281cc;
case 0x6281d3:c.instructions+=122;goto B6281d3;
case 0x6281d7:c.instructions+=121;goto B6281d7;
case 0x6281d9:c.instructions+=120;goto B6281d9;
case 0x6281e0:c.instructions+=119;goto B6281e0;
case 0x6281e4:c.instructions+=118;goto B6281e4;
case 0x6281e6:c.instructions+=117;goto B6281e6;
case 0x6281ed:c.instructions+=116;goto B6281ed;
case 0x6281f1:c.instructions+=115;goto B6281f1;
case 0x6281f3:c.instructions+=114;goto B6281f3;
case 0x6281fa:c.instructions+=113;goto B6281fa;
case 0x628201:c.instructions+=112;goto B628201;
case 0x628205:c.instructions+=111;goto B628205;
case 0x62820c:c.instructions+=110;goto B62820c;
case 0x628210:c.instructions+=109;goto B628210;
case 0x628212:c.instructions+=108;goto B628212;
case 0x628219:c.instructions+=107;goto B628219;
case 0x62821d:c.instructions+=106;goto B62821d;
case 0x62821f:c.instructions+=105;goto B62821f;
case 0x628226:c.instructions+=104;goto B628226;
case 0x62822a:c.instructions+=103;goto B62822a;
case 0x62822c:c.instructions+=102;goto B62822c;
case 0x628233:c.instructions+=101;goto B628233;
case 0x62823a:c.instructions+=100;goto B62823a;
case 0x62823e:c.instructions+=99;goto B62823e;
case 0x628245:c.instructions+=98;goto B628245;
case 0x628249:c.instructions+=97;goto B628249;
case 0x62824b:c.instructions+=96;goto B62824b;
case 0x628252:c.instructions+=95;goto B628252;
case 0x628256:c.instructions+=94;goto B628256;
case 0x628258:c.instructions+=93;goto B628258;
case 0x62825c:c.instructions+=92;goto B62825c;
case 0x628263:c.instructions+=91;goto B628263;
case 0x628265:c.instructions+=90;goto B628265;
case 0x62826c:c.instructions+=89;goto B62826c;
case 0x628273:c.instructions+=88;goto B628273;
case 0x628277:c.instructions+=87;goto B628277;
case 0x62827e:c.instructions+=86;goto B62827e;
case 0x628282:c.instructions+=85;goto B628282;
case 0x628284:c.instructions+=84;goto B628284;
case 0x62828b:c.instructions+=83;goto B62828b;
case 0x62828f:c.instructions+=82;goto B62828f;
case 0x628291:c.instructions+=81;goto B628291;
case 0x628298:c.instructions+=80;goto B628298;
case 0x62829c:c.instructions+=79;goto B62829c;
case 0x62829e:c.instructions+=78;goto B62829e;
case 0x6282a5:c.instructions+=77;goto B6282a5;
case 0x6282ac:c.instructions+=76;goto B6282ac;
case 0x6282b0:c.instructions+=75;goto B6282b0;
case 0x6282b7:c.instructions+=74;goto B6282b7;
case 0x6282bb:c.instructions+=73;goto B6282bb;
case 0x6282bd:c.instructions+=72;goto B6282bd;
case 0x6282c4:c.instructions+=71;goto B6282c4;
case 0x6282c8:c.instructions+=70;goto B6282c8;
case 0x6282ca:c.instructions+=69;goto B6282ca;
case 0x6282d1:c.instructions+=68;goto B6282d1;
case 0x6282d5:c.instructions+=67;goto B6282d5;
case 0x6282d7:c.instructions+=66;goto B6282d7;
case 0x6282de:c.instructions+=65;goto B6282de;
case 0x6282e5:c.instructions+=64;goto B6282e5;
case 0x6282e9:c.instructions+=63;goto B6282e9;
case 0x6282f0:c.instructions+=62;goto B6282f0;
case 0x6282f4:c.instructions+=61;goto B6282f4;
case 0x6282f6:c.instructions+=60;goto B6282f6;
case 0x6282fd:c.instructions+=59;goto B6282fd;
case 0x628301:c.instructions+=58;goto B628301;
case 0x628303:c.instructions+=57;goto B628303;
case 0x62830a:c.instructions+=56;goto B62830a;
case 0x62830e:c.instructions+=55;goto B62830e;
case 0x628310:c.instructions+=54;goto B628310;
case 0x628317:c.instructions+=53;goto B628317;
case 0x62831e:c.instructions+=52;goto B62831e;
case 0x628322:c.instructions+=51;goto B628322;
case 0x628329:c.instructions+=50;goto B628329;
case 0x62832d:c.instructions+=49;goto B62832d;
case 0x62832f:c.instructions+=48;goto B62832f;
case 0x628336:c.instructions+=47;goto B628336;
case 0x62833a:c.instructions+=46;goto B62833a;
case 0x62833c:c.instructions+=45;goto B62833c;
case 0x628340:c.instructions+=44;goto B628340;
case 0x628347:c.instructions+=43;goto B628347;
case 0x628349:c.instructions+=42;goto B628349;
case 0x628350:c.instructions+=41;goto B628350;
case 0x628351:c.instructions+=40;goto B628351;
case 0x628355:c.instructions+=39;goto B628355;
case 0x62835c:c.instructions+=38;goto B62835c;
case 0x62835d:c.instructions+=37;goto B62835d;
case 0x628364:c.instructions+=36;goto B628364;
case 0x628368:c.instructions+=35;goto B628368;
case 0x62836f:c.instructions+=34;goto B62836f;
case 0x628373:c.instructions+=33;goto B628373;
case 0x628375:c.instructions+=32;goto B628375;
case 0x62837c:c.instructions+=31;goto B62837c;
case 0x628380:c.instructions+=30;goto B628380;
case 0x628382:c.instructions+=29;goto B628382;
case 0x628389:c.instructions+=28;goto B628389;
case 0x62838d:c.instructions+=27;goto B62838d;
case 0x62838f:c.instructions+=26;goto B62838f;
case 0x628396:c.instructions+=25;goto B628396;
case 0x62839d:c.instructions+=24;goto B62839d;
case 0x6283a1:c.instructions+=23;goto B6283a1;
case 0x6283a8:c.instructions+=22;goto B6283a8;
case 0x6283ac:c.instructions+=21;goto B6283ac;
case 0x6283ae:c.instructions+=20;goto B6283ae;
case 0x6283b5:c.instructions+=19;goto B6283b5;
case 0x6283b9:c.instructions+=18;goto B6283b9;
case 0x6283bb:c.instructions+=17;goto B6283bb;
case 0x6283c2:c.instructions+=16;goto B6283c2;
case 0x6283c6:c.instructions+=15;goto B6283c6;
case 0x6283c8:c.instructions+=14;goto B6283c8;
case 0x6283cf:c.instructions+=13;goto B6283cf;
case 0x6283d6:c.instructions+=12;goto B6283d6;
case 0x6283da:c.instructions+=11;goto B6283da;
case 0x6283e1:c.instructions+=10;goto B6283e1;
case 0x6283e5:c.instructions+=9;goto B6283e5;
case 0x6283e7:c.instructions+=8;goto B6283e7;
case 0x6283ee:c.instructions+=7;goto B6283ee;
case 0x6283f2:c.instructions+=6;goto B6283f2;
case 0x6283f4:c.instructions+=5;goto B6283f4;
case 0x6283fb:c.instructions+=4;goto B6283fb;
case 0x6283ff:c.instructions+=3;goto B6283ff;
case 0x628401:c.instructions+=2;goto B628401;
case 0x628408:c.instructions+=1;goto B628408;
case 0x62840d:goto L62840d;
case 0x628411:c.instructions+=196;goto B628411;
case 0x628414:c.instructions+=195;goto B628414;
case 0x628418:c.instructions+=194;goto B628418;
case 0x62841b:c.instructions+=193;goto B62841b;
case 0x62841d:c.instructions+=192;goto B62841d;
case 0x628421:c.instructions+=191;goto B628421;
case 0x628423:c.instructions+=190;goto B628423;
case 0x628425:c.instructions+=189;goto B628425;
case 0x628429:c.instructions+=188;goto B628429;
case 0x62842c:c.instructions+=187;goto B62842c;
case 0x62842e:c.instructions+=186;goto B62842e;
case 0x628435:c.instructions+=185;goto B628435;
case 0x628439:c.instructions+=184;goto B628439;
case 0x62843c:c.instructions+=183;goto B62843c;
case 0x628440:c.instructions+=182;goto B628440;
case 0x628443:c.instructions+=181;goto B628443;
case 0x628445:c.instructions+=180;goto B628445;
case 0x628449:c.instructions+=179;goto B628449;
case 0x62844c:c.instructions+=178;goto B62844c;
case 0x62844e:c.instructions+=177;goto B62844e;
case 0x628452:c.instructions+=176;goto B628452;
case 0x628455:c.instructions+=175;goto B628455;
case 0x628457:c.instructions+=174;goto B628457;
case 0x62845e:c.instructions+=173;goto B62845e;
case 0x628462:c.instructions+=172;goto B628462;
case 0x628465:c.instructions+=171;goto B628465;
case 0x628469:c.instructions+=170;goto B628469;
case 0x62846c:c.instructions+=169;goto B62846c;
case 0x62846e:c.instructions+=168;goto B62846e;
case 0x628472:c.instructions+=167;goto B628472;
case 0x628475:c.instructions+=166;goto B628475;
case 0x628477:c.instructions+=165;goto B628477;
case 0x62847b:c.instructions+=164;goto B62847b;
case 0x62847e:c.instructions+=163;goto B62847e;
case 0x628480:c.instructions+=162;goto B628480;
case 0x628487:c.instructions+=161;goto B628487;
case 0x62848b:c.instructions+=160;goto B62848b;
case 0x62848e:c.instructions+=159;goto B62848e;
case 0x628492:c.instructions+=158;goto B628492;
case 0x628495:c.instructions+=157;goto B628495;
case 0x628497:c.instructions+=156;goto B628497;
case 0x62849b:c.instructions+=155;goto B62849b;
case 0x62849e:c.instructions+=154;goto B62849e;
case 0x6284a0:c.instructions+=153;goto B6284a0;
case 0x6284a4:c.instructions+=152;goto B6284a4;
case 0x6284a7:c.instructions+=151;goto B6284a7;
case 0x6284a9:c.instructions+=150;goto B6284a9;
case 0x6284b0:c.instructions+=149;goto B6284b0;
case 0x6284b4:c.instructions+=148;goto B6284b4;
case 0x6284b7:c.instructions+=147;goto B6284b7;
case 0x6284bb:c.instructions+=146;goto B6284bb;
case 0x6284be:c.instructions+=145;goto B6284be;
case 0x6284c0:c.instructions+=144;goto B6284c0;
case 0x6284c4:c.instructions+=143;goto B6284c4;
case 0x6284c7:c.instructions+=142;goto B6284c7;
case 0x6284c9:c.instructions+=141;goto B6284c9;
case 0x6284cd:c.instructions+=140;goto B6284cd;
case 0x6284cf:c.instructions+=139;goto B6284cf;
case 0x6284d1:c.instructions+=138;goto B6284d1;
case 0x6284d8:c.instructions+=137;goto B6284d8;
case 0x6284dc:c.instructions+=136;goto B6284dc;
case 0x6284df:c.instructions+=135;goto B6284df;
case 0x6284e3:c.instructions+=134;goto B6284e3;
case 0x6284e6:c.instructions+=133;goto B6284e6;
case 0x6284e8:c.instructions+=132;goto B6284e8;
case 0x6284ec:c.instructions+=131;goto B6284ec;
case 0x6284ef:c.instructions+=130;goto B6284ef;
case 0x6284f1:c.instructions+=129;goto B6284f1;
case 0x6284f5:c.instructions+=128;goto B6284f5;
case 0x6284f8:c.instructions+=127;goto B6284f8;
case 0x6284fa:c.instructions+=126;goto B6284fa;
case 0x628501:c.instructions+=125;goto B628501;
case 0x628505:c.instructions+=124;goto B628505;
case 0x628508:c.instructions+=123;goto B628508;
case 0x62850c:c.instructions+=122;goto B62850c;
case 0x62850f:c.instructions+=121;goto B62850f;
case 0x628511:c.instructions+=120;goto B628511;
case 0x628515:c.instructions+=119;goto B628515;
case 0x628518:c.instructions+=118;goto B628518;
case 0x62851a:c.instructions+=117;goto B62851a;
case 0x62851e:c.instructions+=116;goto B62851e;
case 0x628521:c.instructions+=115;goto B628521;
case 0x628523:c.instructions+=114;goto B628523;
case 0x62852a:c.instructions+=113;goto B62852a;
case 0x62852e:c.instructions+=112;goto B62852e;
case 0x628531:c.instructions+=111;goto B628531;
case 0x628535:c.instructions+=110;goto B628535;
case 0x628538:c.instructions+=109;goto B628538;
case 0x62853a:c.instructions+=108;goto B62853a;
case 0x62853e:c.instructions+=107;goto B62853e;
case 0x628541:c.instructions+=106;goto B628541;
case 0x628543:c.instructions+=105;goto B628543;
case 0x628547:c.instructions+=104;goto B628547;
case 0x62854a:c.instructions+=103;goto B62854a;
case 0x62854c:c.instructions+=102;goto B62854c;
case 0x628553:c.instructions+=101;goto B628553;
case 0x628557:c.instructions+=100;goto B628557;
case 0x62855a:c.instructions+=99;goto B62855a;
case 0x62855e:c.instructions+=98;goto B62855e;
case 0x628561:c.instructions+=97;goto B628561;
case 0x628563:c.instructions+=96;goto B628563;
case 0x628567:c.instructions+=95;goto B628567;
case 0x62856a:c.instructions+=94;goto B62856a;
case 0x62856c:c.instructions+=93;goto B62856c;
case 0x628570:c.instructions+=92;goto B628570;
case 0x628572:c.instructions+=91;goto B628572;
case 0x628574:c.instructions+=90;goto B628574;
case 0x62857b:c.instructions+=89;goto B62857b;
case 0x62857f:c.instructions+=88;goto B62857f;
case 0x628582:c.instructions+=87;goto B628582;
case 0x628586:c.instructions+=86;goto B628586;
case 0x628589:c.instructions+=85;goto B628589;
case 0x62858b:c.instructions+=84;goto B62858b;
case 0x62858f:c.instructions+=83;goto B62858f;
case 0x628592:c.instructions+=82;goto B628592;
case 0x628594:c.instructions+=81;goto B628594;
case 0x628598:c.instructions+=80;goto B628598;
case 0x62859b:c.instructions+=79;goto B62859b;
case 0x62859d:c.instructions+=78;goto B62859d;
case 0x6285a4:c.instructions+=77;goto B6285a4;
case 0x6285a8:c.instructions+=76;goto B6285a8;
case 0x6285ab:c.instructions+=75;goto B6285ab;
case 0x6285af:c.instructions+=74;goto B6285af;
case 0x6285b2:c.instructions+=73;goto B6285b2;
case 0x6285b4:c.instructions+=72;goto B6285b4;
case 0x6285b8:c.instructions+=71;goto B6285b8;
case 0x6285bb:c.instructions+=70;goto B6285bb;
case 0x6285bd:c.instructions+=69;goto B6285bd;
case 0x6285c1:c.instructions+=68;goto B6285c1;
case 0x6285c4:c.instructions+=67;goto B6285c4;
case 0x6285c6:c.instructions+=66;goto B6285c6;
case 0x6285cd:c.instructions+=65;goto B6285cd;
case 0x6285d1:c.instructions+=64;goto B6285d1;
case 0x6285d4:c.instructions+=63;goto B6285d4;
case 0x6285d8:c.instructions+=62;goto B6285d8;
case 0x6285db:c.instructions+=61;goto B6285db;
case 0x6285dd:c.instructions+=60;goto B6285dd;
case 0x6285e1:c.instructions+=59;goto B6285e1;
case 0x6285e4:c.instructions+=58;goto B6285e4;
case 0x6285e6:c.instructions+=57;goto B6285e6;
case 0x6285ea:c.instructions+=56;goto B6285ea;
case 0x6285ed:c.instructions+=55;goto B6285ed;
case 0x6285f4:c.instructions+=54;goto B6285f4;
case 0x6285fb:c.instructions+=53;goto B6285fb;
case 0x6285fc:c.instructions+=52;goto B6285fc;
case 0x6285fe:c.instructions+=51;goto B6285fe;
case 0x6285ff:c.instructions+=50;goto B6285ff;
case 0x628606:c.instructions+=49;goto B628606;
case 0x62860a:c.instructions+=48;goto B62860a;
case 0x62860d:c.instructions+=47;goto B62860d;
case 0x628611:c.instructions+=46;goto B628611;
case 0x628614:c.instructions+=45;goto B628614;
case 0x628616:c.instructions+=44;goto B628616;
case 0x62861a:c.instructions+=43;goto B62861a;
case 0x62861d:c.instructions+=42;goto B62861d;
case 0x62861f:c.instructions+=41;goto B62861f;
case 0x628623:c.instructions+=40;goto B628623;
case 0x628625:c.instructions+=39;goto B628625;
case 0x628627:c.instructions+=38;goto B628627;
case 0x62862e:c.instructions+=37;goto B62862e;
case 0x628632:c.instructions+=36;goto B628632;
case 0x628635:c.instructions+=35;goto B628635;
case 0x628639:c.instructions+=34;goto B628639;
case 0x62863c:c.instructions+=33;goto B62863c;
case 0x62863e:c.instructions+=32;goto B62863e;
case 0x628642:c.instructions+=31;goto B628642;
case 0x628645:c.instructions+=30;goto B628645;
case 0x628647:c.instructions+=29;goto B628647;
case 0x62864b:c.instructions+=28;goto B62864b;
case 0x62864e:c.instructions+=27;goto B62864e;
case 0x628650:c.instructions+=26;goto B628650;
case 0x628657:c.instructions+=25;goto B628657;
case 0x62865b:c.instructions+=24;goto B62865b;
case 0x62865e:c.instructions+=23;goto B62865e;
case 0x628662:c.instructions+=22;goto B628662;
case 0x628665:c.instructions+=21;goto B628665;
case 0x628667:c.instructions+=20;goto B628667;
case 0x62866b:c.instructions+=19;goto B62866b;
case 0x62866e:c.instructions+=18;goto B62866e;
case 0x628670:c.instructions+=17;goto B628670;
case 0x628674:c.instructions+=16;goto B628674;
case 0x628677:c.instructions+=15;goto B628677;
case 0x628679:c.instructions+=14;goto B628679;
case 0x628680:c.instructions+=13;goto B628680;
case 0x628684:c.instructions+=12;goto B628684;
case 0x628687:c.instructions+=11;goto B628687;
case 0x62868b:c.instructions+=10;goto B62868b;
case 0x62868e:c.instructions+=9;goto B62868e;
case 0x628690:c.instructions+=8;goto B628690;
case 0x628694:c.instructions+=7;goto B628694;
case 0x628697:c.instructions+=6;goto B628697;
case 0x628699:c.instructions+=5;goto B628699;
case 0x62869d:c.instructions+=4;goto B62869d;
case 0x6286a0:c.instructions+=3;goto B6286a0;
case 0x6286a2:c.instructions+=2;goto B6286a2;
case 0x6286a9:c.instructions+=1;goto B6286a9;
case 0x6286ae:goto L6286ae;
case 0x6286b1:c.instructions+=11;goto B6286b1;
case 0x6286b8:c.instructions+=10;goto B6286b8;
case 0x6286b9:c.instructions+=9;goto B6286b9;
case 0x6286c0:c.instructions+=8;goto B6286c0;
case 0x6286c1:c.instructions+=7;goto B6286c1;
case 0x6286c8:c.instructions+=6;goto B6286c8;
case 0x6286c9:c.instructions+=5;goto B6286c9;
case 0x6286ce:c.instructions+=4;goto B6286ce;
case 0x6286d5:c.instructions+=3;goto B6286d5;
case 0x6286d6:c.instructions+=2;goto B6286d6;
case 0x6286d7:c.instructions+=1;goto B6286d7;
case 0x6286dc:goto L6286dc;
case 0x6286e3:c.instructions+=3;goto B6286e3;
case 0x6286e6:c.instructions+=2;goto B6286e6;
case 0x6286e8:c.instructions+=1;goto B6286e8;
case 0x6286ea:goto L6286ea;
case 0x6286f1:c.instructions+=14;goto B6286f1;
case 0x6286f8:c.instructions+=13;goto B6286f8;
case 0x6286fb:c.instructions+=12;goto B6286fb;
case 0x6286fd:c.instructions+=11;goto B6286fd;
case 0x628704:c.instructions+=10;goto B628704;
case 0x628706:c.instructions+=9;goto B628706;
case 0x628708:c.instructions+=8;goto B628708;
case 0x62870f:c.instructions+=7;goto B62870f;
case 0x628710:c.instructions+=6;goto B628710;
case 0x628717:c.instructions+=5;goto B628717;
case 0x628718:c.instructions+=4;goto B628718;
case 0x628719:c.instructions+=3;goto B628719;
case 0x62871a:c.instructions+=2;goto B62871a;
case 0x62871d:c.instructions+=1;goto B62871d;
case 0x628722:goto L628722;
case 0x628729:c.instructions+=2;goto B628729;
case 0x62872b:c.instructions+=1;goto B62872b;
case 0x628731:goto L628731;
case 0x62873a:c.instructions+=2;goto B62873a;
case 0x628741:c.instructions+=1;goto B628741;
case 0x628747:goto L628747;
case 0x62874e:c.instructions+=3;goto B62874e;
case 0x62874f:c.instructions+=2;goto B62874f;
case 0x628750:c.instructions+=1;goto B628750;
case 0x628755:goto L628755;
case 0x62875c:c.instructions+=16;goto B62875c;
case 0x628763:c.instructions+=15;goto B628763;
case 0x62876a:c.instructions+=14;goto B62876a;
case 0x628771:c.instructions+=13;goto B628771;
case 0x628778:c.instructions+=12;goto B628778;
case 0x62877f:c.instructions+=11;goto B62877f;
case 0x628780:c.instructions+=10;goto B628780;
case 0x628787:c.instructions+=9;goto B628787;
case 0x62878e:c.instructions+=8;goto B62878e;
case 0x62878f:c.instructions+=7;goto B62878f;
case 0x628796:c.instructions+=6;goto B628796;
case 0x628797:c.instructions+=5;goto B628797;
case 0x6287a2:c.instructions+=4;goto B6287a2;
case 0x6287ad:c.instructions+=3;goto B6287ad;
case 0x6287b8:c.instructions+=2;goto B6287b8;
case 0x6287c3:c.instructions+=1;goto B6287c3;
case 0x6287c8:goto L6287c8;
case 0x6287cf:c.instructions+=8;goto B6287cf;
case 0x6287d6:c.instructions+=7;goto B6287d6;
case 0x6287dd:c.instructions+=6;goto B6287dd;
case 0x6287e4:c.instructions+=5;goto B6287e4;
case 0x6287eb:c.instructions+=4;goto B6287eb;
case 0x6287ee:c.instructions+=3;goto B6287ee;
case 0x6287f5:c.instructions+=2;goto B6287f5;
case 0x6287fc:c.instructions+=1;goto B6287fc;
case 0x628803:goto L628803;
case 0x62880a:c.instructions+=196;goto B62880a;
case 0x628811:c.instructions+=195;goto B628811;
case 0x628818:c.instructions+=194;goto B628818;
case 0x62881f:c.instructions+=193;goto B62881f;
case 0x628821:c.instructions+=192;goto B628821;
case 0x628828:c.instructions+=191;goto B628828;
case 0x62882f:c.instructions+=190;goto B62882f;
case 0x628831:c.instructions+=189;goto B628831;
case 0x628838:c.instructions+=188;goto B628838;
case 0x62883f:c.instructions+=187;goto B62883f;
case 0x628841:c.instructions+=186;goto B628841;
case 0x628845:c.instructions+=185;goto B628845;
case 0x62884c:c.instructions+=184;goto B62884c;
case 0x628853:c.instructions+=183;goto B628853;
case 0x62885a:c.instructions+=182;goto B62885a;
case 0x628861:c.instructions+=181;goto B628861;
case 0x628863:c.instructions+=180;goto B628863;
case 0x62886a:c.instructions+=179;goto B62886a;
case 0x628871:c.instructions+=178;goto B628871;
case 0x628873:c.instructions+=177;goto B628873;
case 0x62887a:c.instructions+=176;goto B62887a;
case 0x628881:c.instructions+=175;goto B628881;
case 0x628883:c.instructions+=174;goto B628883;
case 0x628887:c.instructions+=173;goto B628887;
case 0x62888e:c.instructions+=172;goto B62888e;
case 0x628895:c.instructions+=171;goto B628895;
case 0x62889c:c.instructions+=170;goto B62889c;
case 0x6288a3:c.instructions+=169;goto B6288a3;
case 0x6288a5:c.instructions+=168;goto B6288a5;
case 0x6288ac:c.instructions+=167;goto B6288ac;
case 0x6288b3:c.instructions+=166;goto B6288b3;
case 0x6288b5:c.instructions+=165;goto B6288b5;
case 0x6288bc:c.instructions+=164;goto B6288bc;
case 0x6288c3:c.instructions+=163;goto B6288c3;
case 0x6288c5:c.instructions+=162;goto B6288c5;
case 0x6288c9:c.instructions+=161;goto B6288c9;
case 0x6288d0:c.instructions+=160;goto B6288d0;
case 0x6288d7:c.instructions+=159;goto B6288d7;
case 0x6288de:c.instructions+=158;goto B6288de;
case 0x6288e5:c.instructions+=157;goto B6288e5;
case 0x6288e7:c.instructions+=156;goto B6288e7;
case 0x6288ee:c.instructions+=155;goto B6288ee;
case 0x6288f5:c.instructions+=154;goto B6288f5;
case 0x6288f7:c.instructions+=153;goto B6288f7;
case 0x6288fe:c.instructions+=152;goto B6288fe;
case 0x628905:c.instructions+=151;goto B628905;
case 0x628907:c.instructions+=150;goto B628907;
case 0x62890b:c.instructions+=149;goto B62890b;
case 0x628912:c.instructions+=148;goto B628912;
case 0x628919:c.instructions+=147;goto B628919;
case 0x628920:c.instructions+=146;goto B628920;
case 0x628927:c.instructions+=145;goto B628927;
case 0x628929:c.instructions+=144;goto B628929;
case 0x628930:c.instructions+=143;goto B628930;
case 0x628937:c.instructions+=142;goto B628937;
case 0x628939:c.instructions+=141;goto B628939;
case 0x628940:c.instructions+=140;goto B628940;
case 0x628947:c.instructions+=139;goto B628947;
case 0x628949:c.instructions+=138;goto B628949;
case 0x628950:c.instructions+=137;goto B628950;
case 0x628957:c.instructions+=136;goto B628957;
case 0x62895e:c.instructions+=135;goto B62895e;
case 0x628965:c.instructions+=134;goto B628965;
case 0x62896c:c.instructions+=133;goto B62896c;
case 0x62896e:c.instructions+=132;goto B62896e;
case 0x628975:c.instructions+=131;goto B628975;
case 0x62897c:c.instructions+=130;goto B62897c;
case 0x62897e:c.instructions+=129;goto B62897e;
case 0x628985:c.instructions+=128;goto B628985;
case 0x62898c:c.instructions+=127;goto B62898c;
case 0x62898e:c.instructions+=126;goto B62898e;
case 0x628995:c.instructions+=125;goto B628995;
case 0x62899c:c.instructions+=124;goto B62899c;
case 0x6289a3:c.instructions+=123;goto B6289a3;
case 0x6289aa:c.instructions+=122;goto B6289aa;
case 0x6289b1:c.instructions+=121;goto B6289b1;
case 0x6289b3:c.instructions+=120;goto B6289b3;
case 0x6289ba:c.instructions+=119;goto B6289ba;
case 0x6289c1:c.instructions+=118;goto B6289c1;
case 0x6289c3:c.instructions+=117;goto B6289c3;
case 0x6289ca:c.instructions+=116;goto B6289ca;
case 0x6289d1:c.instructions+=115;goto B6289d1;
case 0x6289d3:c.instructions+=114;goto B6289d3;
case 0x6289da:c.instructions+=113;goto B6289da;
case 0x6289e1:c.instructions+=112;goto B6289e1;
case 0x6289e8:c.instructions+=111;goto B6289e8;
case 0x6289ef:c.instructions+=110;goto B6289ef;
case 0x6289f6:c.instructions+=109;goto B6289f6;
case 0x6289f8:c.instructions+=108;goto B6289f8;
case 0x6289ff:c.instructions+=107;goto B6289ff;
case 0x628a06:c.instructions+=106;goto B628a06;
case 0x628a08:c.instructions+=105;goto B628a08;
case 0x628a0f:c.instructions+=104;goto B628a0f;
case 0x628a16:c.instructions+=103;goto B628a16;
case 0x628a18:c.instructions+=102;goto B628a18;
case 0x628a1f:c.instructions+=101;goto B628a1f;
case 0x628a26:c.instructions+=100;goto B628a26;
case 0x628a2d:c.instructions+=99;goto B628a2d;
case 0x628a34:c.instructions+=98;goto B628a34;
case 0x628a3b:c.instructions+=97;goto B628a3b;
case 0x628a3d:c.instructions+=96;goto B628a3d;
case 0x628a44:c.instructions+=95;goto B628a44;
case 0x628a4b:c.instructions+=94;goto B628a4b;
case 0x628a4d:c.instructions+=93;goto B628a4d;
case 0x628a54:c.instructions+=92;goto B628a54;
case 0x628a5b:c.instructions+=91;goto B628a5b;
case 0x628a5d:c.instructions+=90;goto B628a5d;
case 0x628a64:c.instructions+=89;goto B628a64;
case 0x628a6b:c.instructions+=88;goto B628a6b;
case 0x628a72:c.instructions+=87;goto B628a72;
case 0x628a79:c.instructions+=86;goto B628a79;
case 0x628a80:c.instructions+=85;goto B628a80;
case 0x628a82:c.instructions+=84;goto B628a82;
case 0x628a89:c.instructions+=83;goto B628a89;
case 0x628a90:c.instructions+=82;goto B628a90;
case 0x628a92:c.instructions+=81;goto B628a92;
case 0x628a99:c.instructions+=80;goto B628a99;
case 0x628aa0:c.instructions+=79;goto B628aa0;
case 0x628aa2:c.instructions+=78;goto B628aa2;
case 0x628aa9:c.instructions+=77;goto B628aa9;
case 0x628ab0:c.instructions+=76;goto B628ab0;
case 0x628ab7:c.instructions+=75;goto B628ab7;
case 0x628abe:c.instructions+=74;goto B628abe;
case 0x628ac5:c.instructions+=73;goto B628ac5;
case 0x628ac7:c.instructions+=72;goto B628ac7;
case 0x628ace:c.instructions+=71;goto B628ace;
case 0x628ad5:c.instructions+=70;goto B628ad5;
case 0x628ad7:c.instructions+=69;goto B628ad7;
case 0x628ade:c.instructions+=68;goto B628ade;
case 0x628ae5:c.instructions+=67;goto B628ae5;
case 0x628ae7:c.instructions+=66;goto B628ae7;
case 0x628aee:c.instructions+=65;goto B628aee;
case 0x628af5:c.instructions+=64;goto B628af5;
case 0x628afc:c.instructions+=63;goto B628afc;
case 0x628b03:c.instructions+=62;goto B628b03;
case 0x628b0a:c.instructions+=61;goto B628b0a;
case 0x628b0c:c.instructions+=60;goto B628b0c;
case 0x628b13:c.instructions+=59;goto B628b13;
case 0x628b1a:c.instructions+=58;goto B628b1a;
case 0x628b1c:c.instructions+=57;goto B628b1c;
case 0x628b23:c.instructions+=56;goto B628b23;
case 0x628b2a:c.instructions+=55;goto B628b2a;
case 0x628b2c:c.instructions+=54;goto B628b2c;
case 0x628b33:c.instructions+=53;goto B628b33;
case 0x628b3a:c.instructions+=52;goto B628b3a;
case 0x628b41:c.instructions+=51;goto B628b41;
case 0x628b48:c.instructions+=50;goto B628b48;
case 0x628b4f:c.instructions+=49;goto B628b4f;
case 0x628b51:c.instructions+=48;goto B628b51;
case 0x628b58:c.instructions+=47;goto B628b58;
case 0x628b5f:c.instructions+=46;goto B628b5f;
case 0x628b61:c.instructions+=45;goto B628b61;
case 0x628b68:c.instructions+=44;goto B628b68;
case 0x628b6f:c.instructions+=43;goto B628b6f;
case 0x628b71:c.instructions+=42;goto B628b71;
case 0x628b78:c.instructions+=41;goto B628b78;
case 0x628b7f:c.instructions+=40;goto B628b7f;
case 0x628b86:c.instructions+=39;goto B628b86;
case 0x628b8d:c.instructions+=38;goto B628b8d;
case 0x628b94:c.instructions+=37;goto B628b94;
case 0x628b96:c.instructions+=36;goto B628b96;
case 0x628b9d:c.instructions+=35;goto B628b9d;
case 0x628ba4:c.instructions+=34;goto B628ba4;
case 0x628ba6:c.instructions+=33;goto B628ba6;
case 0x628bad:c.instructions+=32;goto B628bad;
case 0x628bb4:c.instructions+=31;goto B628bb4;
case 0x628bb6:c.instructions+=30;goto B628bb6;
case 0x628bbd:c.instructions+=29;goto B628bbd;
case 0x628bc4:c.instructions+=28;goto B628bc4;
case 0x628bcb:c.instructions+=27;goto B628bcb;
case 0x628bd2:c.instructions+=26;goto B628bd2;
case 0x628bd9:c.instructions+=25;goto B628bd9;
case 0x628bdb:c.instructions+=24;goto B628bdb;
case 0x628be2:c.instructions+=23;goto B628be2;
case 0x628be9:c.instructions+=22;goto B628be9;
case 0x628beb:c.instructions+=21;goto B628beb;
case 0x628bf2:c.instructions+=20;goto B628bf2;
case 0x628bf9:c.instructions+=19;goto B628bf9;
case 0x628bfb:c.instructions+=18;goto B628bfb;
case 0x628c02:c.instructions+=17;goto B628c02;
case 0x628c09:c.instructions+=16;goto B628c09;
case 0x628c10:c.instructions+=15;goto B628c10;
case 0x628c17:c.instructions+=14;goto B628c17;
case 0x628c1b:c.instructions+=13;goto B628c1b;
case 0x628c22:c.instructions+=12;goto B628c22;
case 0x628c23:c.instructions+=11;goto B628c23;
case 0x628c27:c.instructions+=10;goto B628c27;
case 0x628c28:c.instructions+=9;goto B628c28;
case 0x628c2a:c.instructions+=8;goto B628c2a;
case 0x628c31:c.instructions+=7;goto B628c31;
case 0x628c38:c.instructions+=6;goto B628c38;
case 0x628c3a:c.instructions+=5;goto B628c3a;
case 0x628c41:c.instructions+=4;goto B628c41;
case 0x628c48:c.instructions+=3;goto B628c48;
case 0x628c4a:c.instructions+=2;goto B628c4a;
case 0x628c51:c.instructions+=1;goto B628c51;
case 0x628c56:goto L628c56;
case 0x628c5d:c.instructions+=197;goto B628c5d;
case 0x628c61:c.instructions+=196;goto B628c61;
case 0x628c64:c.instructions+=195;goto B628c64;
case 0x628c68:c.instructions+=194;goto B628c68;
case 0x628c6b:c.instructions+=193;goto B628c6b;
case 0x628c6d:c.instructions+=192;goto B628c6d;
case 0x628c71:c.instructions+=191;goto B628c71;
case 0x628c73:c.instructions+=190;goto B628c73;
case 0x628c75:c.instructions+=189;goto B628c75;
case 0x628c79:c.instructions+=188;goto B628c79;
case 0x628c7c:c.instructions+=187;goto B628c7c;
case 0x628c7e:c.instructions+=186;goto B628c7e;
case 0x628c82:c.instructions+=185;goto B628c82;
case 0x628c86:c.instructions+=184;goto B628c86;
case 0x628c89:c.instructions+=183;goto B628c89;
case 0x628c8d:c.instructions+=182;goto B628c8d;
case 0x628c90:c.instructions+=181;goto B628c90;
case 0x628c92:c.instructions+=180;goto B628c92;
case 0x628c96:c.instructions+=179;goto B628c96;
case 0x628c99:c.instructions+=178;goto B628c99;
case 0x628c9b:c.instructions+=177;goto B628c9b;
case 0x628c9f:c.instructions+=176;goto B628c9f;
case 0x628ca2:c.instructions+=175;goto B628ca2;
case 0x628ca4:c.instructions+=174;goto B628ca4;
case 0x628ca8:c.instructions+=173;goto B628ca8;
case 0x628cac:c.instructions+=172;goto B628cac;
case 0x628caf:c.instructions+=171;goto B628caf;
case 0x628cb3:c.instructions+=170;goto B628cb3;
case 0x628cb6:c.instructions+=169;goto B628cb6;
case 0x628cb8:c.instructions+=168;goto B628cb8;
case 0x628cbc:c.instructions+=167;goto B628cbc;
case 0x628cbf:c.instructions+=166;goto B628cbf;
case 0x628cc1:c.instructions+=165;goto B628cc1;
case 0x628cc5:c.instructions+=164;goto B628cc5;
case 0x628cc8:c.instructions+=163;goto B628cc8;
case 0x628cca:c.instructions+=162;goto B628cca;
case 0x628cd1:c.instructions+=161;goto B628cd1;
case 0x628cd5:c.instructions+=160;goto B628cd5;
case 0x628cd8:c.instructions+=159;goto B628cd8;
case 0x628cdc:c.instructions+=158;goto B628cdc;
case 0x628cdf:c.instructions+=157;goto B628cdf;
case 0x628ce1:c.instructions+=156;goto B628ce1;
case 0x628ce5:c.instructions+=155;goto B628ce5;
case 0x628ce8:c.instructions+=154;goto B628ce8;
case 0x628cea:c.instructions+=153;goto B628cea;
case 0x628cee:c.instructions+=152;goto B628cee;
case 0x628cf1:c.instructions+=151;goto B628cf1;
case 0x628cf3:c.instructions+=150;goto B628cf3;
case 0x628cfa:c.instructions+=149;goto B628cfa;
case 0x628cfe:c.instructions+=148;goto B628cfe;
case 0x628d01:c.instructions+=147;goto B628d01;
case 0x628d05:c.instructions+=146;goto B628d05;
case 0x628d08:c.instructions+=145;goto B628d08;
case 0x628d0a:c.instructions+=144;goto B628d0a;
case 0x628d0e:c.instructions+=143;goto B628d0e;
case 0x628d11:c.instructions+=142;goto B628d11;
case 0x628d13:c.instructions+=141;goto B628d13;
case 0x628d17:c.instructions+=140;goto B628d17;
case 0x628d19:c.instructions+=139;goto B628d19;
case 0x628d1b:c.instructions+=138;goto B628d1b;
case 0x628d22:c.instructions+=137;goto B628d22;
case 0x628d26:c.instructions+=136;goto B628d26;
case 0x628d29:c.instructions+=135;goto B628d29;
case 0x628d2d:c.instructions+=134;goto B628d2d;
case 0x628d30:c.instructions+=133;goto B628d30;
case 0x628d32:c.instructions+=132;goto B628d32;
case 0x628d36:c.instructions+=131;goto B628d36;
case 0x628d39:c.instructions+=130;goto B628d39;
case 0x628d3b:c.instructions+=129;goto B628d3b;
case 0x628d3f:c.instructions+=128;goto B628d3f;
case 0x628d42:c.instructions+=127;goto B628d42;
case 0x628d44:c.instructions+=126;goto B628d44;
case 0x628d4b:c.instructions+=125;goto B628d4b;
case 0x628d4f:c.instructions+=124;goto B628d4f;
case 0x628d52:c.instructions+=123;goto B628d52;
case 0x628d56:c.instructions+=122;goto B628d56;
case 0x628d59:c.instructions+=121;goto B628d59;
case 0x628d5b:c.instructions+=120;goto B628d5b;
case 0x628d5f:c.instructions+=119;goto B628d5f;
case 0x628d62:c.instructions+=118;goto B628d62;
case 0x628d64:c.instructions+=117;goto B628d64;
case 0x628d68:c.instructions+=116;goto B628d68;
case 0x628d6b:c.instructions+=115;goto B628d6b;
case 0x628d6d:c.instructions+=114;goto B628d6d;
case 0x628d74:c.instructions+=113;goto B628d74;
case 0x628d78:c.instructions+=112;goto B628d78;
case 0x628d7b:c.instructions+=111;goto B628d7b;
case 0x628d7f:c.instructions+=110;goto B628d7f;
case 0x628d82:c.instructions+=109;goto B628d82;
case 0x628d84:c.instructions+=108;goto B628d84;
case 0x628d88:c.instructions+=107;goto B628d88;
case 0x628d8b:c.instructions+=106;goto B628d8b;
case 0x628d8d:c.instructions+=105;goto B628d8d;
case 0x628d91:c.instructions+=104;goto B628d91;
case 0x628d94:c.instructions+=103;goto B628d94;
case 0x628d96:c.instructions+=102;goto B628d96;
case 0x628d9d:c.instructions+=101;goto B628d9d;
case 0x628da1:c.instructions+=100;goto B628da1;
case 0x628da4:c.instructions+=99;goto B628da4;
case 0x628da8:c.instructions+=98;goto B628da8;
case 0x628dab:c.instructions+=97;goto B628dab;
case 0x628dad:c.instructions+=96;goto B628dad;
case 0x628db1:c.instructions+=95;goto B628db1;
case 0x628db4:c.instructions+=94;goto B628db4;
case 0x628db6:c.instructions+=93;goto B628db6;
case 0x628dba:c.instructions+=92;goto B628dba;
case 0x628dbc:c.instructions+=91;goto B628dbc;
case 0x628dbe:c.instructions+=90;goto B628dbe;
case 0x628dc5:c.instructions+=89;goto B628dc5;
case 0x628dc9:c.instructions+=88;goto B628dc9;
case 0x628dcc:c.instructions+=87;goto B628dcc;
case 0x628dd0:c.instructions+=86;goto B628dd0;
case 0x628dd3:c.instructions+=85;goto B628dd3;
case 0x628dd5:c.instructions+=84;goto B628dd5;
case 0x628dd9:c.instructions+=83;goto B628dd9;
case 0x628ddc:c.instructions+=82;goto B628ddc;
case 0x628dde:c.instructions+=81;goto B628dde;
case 0x628de2:c.instructions+=80;goto B628de2;
case 0x628de5:c.instructions+=79;goto B628de5;
case 0x628de7:c.instructions+=78;goto B628de7;
case 0x628dee:c.instructions+=77;goto B628dee;
case 0x628df2:c.instructions+=76;goto B628df2;
case 0x628df5:c.instructions+=75;goto B628df5;
case 0x628df9:c.instructions+=74;goto B628df9;
case 0x628dfc:c.instructions+=73;goto B628dfc;
case 0x628dfe:c.instructions+=72;goto B628dfe;
case 0x628e02:c.instructions+=71;goto B628e02;
case 0x628e05:c.instructions+=70;goto B628e05;
case 0x628e07:c.instructions+=69;goto B628e07;
case 0x628e0b:c.instructions+=68;goto B628e0b;
case 0x628e0e:c.instructions+=67;goto B628e0e;
case 0x628e10:c.instructions+=66;goto B628e10;
case 0x628e17:c.instructions+=65;goto B628e17;
case 0x628e1b:c.instructions+=64;goto B628e1b;
case 0x628e1e:c.instructions+=63;goto B628e1e;
case 0x628e22:c.instructions+=62;goto B628e22;
case 0x628e25:c.instructions+=61;goto B628e25;
case 0x628e27:c.instructions+=60;goto B628e27;
case 0x628e2b:c.instructions+=59;goto B628e2b;
case 0x628e2e:c.instructions+=58;goto B628e2e;
case 0x628e30:c.instructions+=57;goto B628e30;
case 0x628e34:c.instructions+=56;goto B628e34;
case 0x628e37:c.instructions+=55;goto B628e37;
case 0x628e39:c.instructions+=54;goto B628e39;
case 0x628e40:c.instructions+=53;goto B628e40;
case 0x628e44:c.instructions+=52;goto B628e44;
case 0x628e47:c.instructions+=51;goto B628e47;
case 0x628e4b:c.instructions+=50;goto B628e4b;
case 0x628e4e:c.instructions+=49;goto B628e4e;
case 0x628e50:c.instructions+=48;goto B628e50;
case 0x628e54:c.instructions+=47;goto B628e54;
case 0x628e57:c.instructions+=46;goto B628e57;
case 0x628e59:c.instructions+=45;goto B628e59;
case 0x628e5d:c.instructions+=44;goto B628e5d;
case 0x628e5f:c.instructions+=43;goto B628e5f;
case 0x628e61:c.instructions+=42;goto B628e61;
case 0x628e68:c.instructions+=41;goto B628e68;
case 0x628e6c:c.instructions+=40;goto B628e6c;
case 0x628e6f:c.instructions+=39;goto B628e6f;
case 0x628e73:c.instructions+=38;goto B628e73;
case 0x628e76:c.instructions+=37;goto B628e76;
case 0x628e78:c.instructions+=36;goto B628e78;
case 0x628e7c:c.instructions+=35;goto B628e7c;
case 0x628e7f:c.instructions+=34;goto B628e7f;
case 0x628e81:c.instructions+=33;goto B628e81;
case 0x628e85:c.instructions+=32;goto B628e85;
case 0x628e88:c.instructions+=31;goto B628e88;
case 0x628e8a:c.instructions+=30;goto B628e8a;
case 0x628e91:c.instructions+=29;goto B628e91;
case 0x628e95:c.instructions+=28;goto B628e95;
case 0x628e99:c.instructions+=27;goto B628e99;
case 0x628e9c:c.instructions+=26;goto B628e9c;
case 0x628ea0:c.instructions+=25;goto B628ea0;
case 0x628ea3:c.instructions+=24;goto B628ea3;
case 0x628ea5:c.instructions+=23;goto B628ea5;
case 0x628ea9:c.instructions+=22;goto B628ea9;
case 0x628eac:c.instructions+=21;goto B628eac;
case 0x628eae:c.instructions+=20;goto B628eae;
case 0x628eb2:c.instructions+=19;goto B628eb2;
case 0x628eb5:c.instructions+=18;goto B628eb5;
case 0x628eb7:c.instructions+=17;goto B628eb7;
case 0x628ebe:c.instructions+=16;goto B628ebe;
case 0x628ec2:c.instructions+=15;goto B628ec2;
case 0x628ec5:c.instructions+=14;goto B628ec5;
case 0x628ec9:c.instructions+=13;goto B628ec9;
case 0x628ecc:c.instructions+=12;goto B628ecc;
case 0x628ece:c.instructions+=11;goto B628ece;
case 0x628ed2:c.instructions+=10;goto B628ed2;
case 0x628ed5:c.instructions+=9;goto B628ed5;
case 0x628ed7:c.instructions+=8;goto B628ed7;
case 0x628edb:c.instructions+=7;goto B628edb;
case 0x628ede:c.instructions+=6;goto B628ede;
case 0x628ee2:c.instructions+=5;goto B628ee2;
case 0x628ee3:c.instructions+=4;goto B628ee3;
case 0x628ee4:c.instructions+=3;goto B628ee4;
case 0x628ee6:c.instructions+=2;goto B628ee6;
case 0x628eed:c.instructions+=1;goto B628eed;
case 0x628ef2:goto L628ef2;
case 0x628ef9:c.instructions+=57;goto B628ef9;
case 0x628efd:c.instructions+=56;goto B628efd;
case 0x628f04:c.instructions+=55;goto B628f04;
case 0x628f08:c.instructions+=54;goto B628f08;
case 0x628f0a:c.instructions+=53;goto B628f0a;
case 0x628f11:c.instructions+=52;goto B628f11;
case 0x628f15:c.instructions+=51;goto B628f15;
case 0x628f17:c.instructions+=50;goto B628f17;
case 0x628f1e:c.instructions+=49;goto B628f1e;
case 0x628f22:c.instructions+=48;goto B628f22;
case 0x628f24:c.instructions+=47;goto B628f24;
case 0x628f2b:c.instructions+=46;goto B628f2b;
case 0x628f32:c.instructions+=45;goto B628f32;
case 0x628f36:c.instructions+=44;goto B628f36;
case 0x628f3d:c.instructions+=43;goto B628f3d;
case 0x628f41:c.instructions+=42;goto B628f41;
case 0x628f43:c.instructions+=41;goto B628f43;
case 0x628f4a:c.instructions+=40;goto B628f4a;
case 0x628f4e:c.instructions+=39;goto B628f4e;
case 0x628f50:c.instructions+=38;goto B628f50;
case 0x628f57:c.instructions+=37;goto B628f57;
case 0x628f5b:c.instructions+=36;goto B628f5b;
case 0x628f5d:c.instructions+=35;goto B628f5d;
case 0x628f64:c.instructions+=34;goto B628f64;
case 0x628f6b:c.instructions+=33;goto B628f6b;
case 0x628f6f:c.instructions+=32;goto B628f6f;
case 0x628f76:c.instructions+=31;goto B628f76;
case 0x628f7a:c.instructions+=30;goto B628f7a;
case 0x628f7c:c.instructions+=29;goto B628f7c;
case 0x628f83:c.instructions+=28;goto B628f83;
case 0x628f87:c.instructions+=27;goto B628f87;
case 0x628f89:c.instructions+=26;goto B628f89;
case 0x628f90:c.instructions+=25;goto B628f90;
case 0x628f94:c.instructions+=24;goto B628f94;
case 0x628f96:c.instructions+=23;goto B628f96;
case 0x628f9d:c.instructions+=22;goto B628f9d;
case 0x628fa4:c.instructions+=21;goto B628fa4;
case 0x628fa8:c.instructions+=20;goto B628fa8;
case 0x628faf:c.instructions+=19;goto B628faf;
case 0x628fb3:c.instructions+=18;goto B628fb3;
case 0x628fb5:c.instructions+=17;goto B628fb5;
case 0x628fbc:c.instructions+=16;goto B628fbc;
case 0x628fc0:c.instructions+=15;goto B628fc0;
case 0x628fc2:c.instructions+=14;goto B628fc2;
case 0x628fc9:c.instructions+=13;goto B628fc9;
case 0x628fcd:c.instructions+=12;goto B628fcd;
case 0x628fcf:c.instructions+=11;goto B628fcf;
case 0x628fd6:c.instructions+=10;goto B628fd6;
case 0x628fdd:c.instructions+=9;goto B628fdd;
case 0x628fe1:c.instructions+=8;goto B628fe1;
case 0x628fe8:c.instructions+=7;goto B628fe8;
case 0x628fec:c.instructions+=6;goto B628fec;
case 0x628fee:c.instructions+=5;goto B628fee;
case 0x628ff5:c.instructions+=4;goto B628ff5;
case 0x628ff9:c.instructions+=3;goto B628ff9;
case 0x628ffb:c.instructions+=2;goto B628ffb;
case 0x628fff:c.instructions+=1;goto B628fff;
default:missing_instruction(c.pc);}
B628001:L628001:{c.instructions+=31;NFSU2_TR(0x628001);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628003:{NFSU2_TR(0x628003);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62800a:{NFSU2_TR(0x62800a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62800e:{NFSU2_TR(0x62800e);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B628012:{NFSU2_TR(0x628012);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628015:{NFSU2_TR(0x628015);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628016:{NFSU2_TR(0x628016);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62801a:{NFSU2_TR(0x62801a);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62801d:{NFSU2_TR(0x62801d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62801f:{NFSU2_TR(0x62801f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628023:{NFSU2_TR(0x628023);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628026:{NFSU2_TR(0x628026);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628028:{NFSU2_TR(0x628028);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62802c:{NFSU2_TR(0x62802c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62802f:{NFSU2_TR(0x62802f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628031:{NFSU2_TR(0x628031);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628038:{NFSU2_TR(0x628038);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62803c:{NFSU2_TR(0x62803c);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62803f:{NFSU2_TR(0x62803f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628043:{NFSU2_TR(0x628043);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628046:{NFSU2_TR(0x628046);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628048:{NFSU2_TR(0x628048);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62804c:{NFSU2_TR(0x62804c);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62804f:{NFSU2_TR(0x62804f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628051:{NFSU2_TR(0x628051);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628055:{NFSU2_TR(0x628055);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628058:{NFSU2_TR(0x628058);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B62805c:{NFSU2_TR(0x62805c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62805d:{NFSU2_TR(0x62805d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62805f:{NFSU2_TR(0x62805f);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628066:{NFSU2_TR(0x628066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62806bull));
TAIL_STATIC(0x4012b0u,401);
}
B62806b:L62806b:{c.instructions+=197;NFSU2_TR(0x62806b);
{u32 ea_=u32(r4(R+16)+u32(992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628072:{NFSU2_TR(0x628072);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628076:{NFSU2_TR(0x628076);
{u32 ea_=u32(r4(R+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62807d:{NFSU2_TR(0x62807d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628081:{NFSU2_TR(0x628081);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628083:{NFSU2_TR(0x628083);
{u32 ea_=u32(r4(R+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62808a:{NFSU2_TR(0x62808a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62808e:{NFSU2_TR(0x62808e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628090:{NFSU2_TR(0x628090);
{u32 ea_=u32(r4(R+16)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628097:{NFSU2_TR(0x628097);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62809b:{NFSU2_TR(0x62809b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62809d:{NFSU2_TR(0x62809d);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6280a4:{NFSU2_TR(0x6280a4);
{u32 ea_=u32(r4(R+16)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280ab:{NFSU2_TR(0x6280ab);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280af:{NFSU2_TR(0x6280af);
{u32 ea_=u32(r4(R+16)+u32(1028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280b6:{NFSU2_TR(0x6280b6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280ba:{NFSU2_TR(0x6280ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6280bc:{NFSU2_TR(0x6280bc);
{u32 ea_=u32(r4(R+16)+u32(1012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280c3:{NFSU2_TR(0x6280c3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280c7:{NFSU2_TR(0x6280c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6280c9:{NFSU2_TR(0x6280c9);
{u32 ea_=u32(r4(R+16)+u32(996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280d0:{NFSU2_TR(0x6280d0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280d4:{NFSU2_TR(0x6280d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6280d6:{NFSU2_TR(0x6280d6);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6280dd:{NFSU2_TR(0x6280dd);
{u32 ea_=u32(r4(R+16)+u32(1048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280e4:{NFSU2_TR(0x6280e4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280e8:{NFSU2_TR(0x6280e8);
{u32 ea_=u32(r4(R+16)+u32(1032u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280ef:{NFSU2_TR(0x6280ef);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6280f3:{NFSU2_TR(0x6280f3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6280f5:{NFSU2_TR(0x6280f5);
{u32 ea_=u32(r4(R+16)+u32(1016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6280fc:{NFSU2_TR(0x6280fc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628100:{NFSU2_TR(0x628100);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628102:{NFSU2_TR(0x628102);
{u32 ea_=u32(r4(R+16)+u32(1000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628109:{NFSU2_TR(0x628109);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62810d:{NFSU2_TR(0x62810d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62810f:{NFSU2_TR(0x62810f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628116:{NFSU2_TR(0x628116);
{u32 ea_=u32(r4(R+16)+u32(1052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62811d:{NFSU2_TR(0x62811d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628121:{NFSU2_TR(0x628121);
{u32 ea_=u32(r4(R+16)+u32(1036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628128:{NFSU2_TR(0x628128);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62812c:{NFSU2_TR(0x62812c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62812e:{NFSU2_TR(0x62812e);
{u32 ea_=u32(r4(R+16)+u32(1020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628135:{NFSU2_TR(0x628135);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628139:{NFSU2_TR(0x628139);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62813b:{NFSU2_TR(0x62813b);
{u32 ea_=u32(r4(R+16)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628142:{NFSU2_TR(0x628142);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628146:{NFSU2_TR(0x628146);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628148:{NFSU2_TR(0x628148);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62814f:{NFSU2_TR(0x62814f);
{u32 ea_=u32(r4(R+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628156:{NFSU2_TR(0x628156);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62815a:{NFSU2_TR(0x62815a);
{u32 ea_=u32(r4(R+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628161:{NFSU2_TR(0x628161);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628165:{NFSU2_TR(0x628165);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628167:{NFSU2_TR(0x628167);
{u32 ea_=u32(r4(R+16)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62816e:{NFSU2_TR(0x62816e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628172:{NFSU2_TR(0x628172);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628174:{NFSU2_TR(0x628174);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628178:{NFSU2_TR(0x628178);
{u32 ea_=u32(r4(R+16)+u32(992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62817f:{NFSU2_TR(0x62817f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628181:{NFSU2_TR(0x628181);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628188:{NFSU2_TR(0x628188);
{u32 ea_=u32(r4(R+16)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62818f:{NFSU2_TR(0x62818f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628193:{NFSU2_TR(0x628193);
{u32 ea_=u32(r4(R+16)+u32(1028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62819a:{NFSU2_TR(0x62819a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62819e:{NFSU2_TR(0x62819e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281a0:{NFSU2_TR(0x6281a0);
{u32 ea_=u32(r4(R+16)+u32(1012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281a7:{NFSU2_TR(0x6281a7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281ab:{NFSU2_TR(0x6281ab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281ad:{NFSU2_TR(0x6281ad);
{u32 ea_=u32(r4(R+16)+u32(996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281b4:{NFSU2_TR(0x6281b4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281b8:{NFSU2_TR(0x6281b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281ba:{NFSU2_TR(0x6281ba);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6281c1:{NFSU2_TR(0x6281c1);
{u32 ea_=u32(r4(R+16)+u32(1048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281c8:{NFSU2_TR(0x6281c8);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281cc:{NFSU2_TR(0x6281cc);
{u32 ea_=u32(r4(R+16)+u32(1032u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281d3:{NFSU2_TR(0x6281d3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281d7:{NFSU2_TR(0x6281d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281d9:{NFSU2_TR(0x6281d9);
{u32 ea_=u32(r4(R+16)+u32(1016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281e0:{NFSU2_TR(0x6281e0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281e4:{NFSU2_TR(0x6281e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281e6:{NFSU2_TR(0x6281e6);
{u32 ea_=u32(r4(R+16)+u32(1000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6281ed:{NFSU2_TR(0x6281ed);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6281f1:{NFSU2_TR(0x6281f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6281f3:{NFSU2_TR(0x6281f3);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6281fa:{NFSU2_TR(0x6281fa);
{u32 ea_=u32(r4(R+16)+u32(1052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628201:{NFSU2_TR(0x628201);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628205:{NFSU2_TR(0x628205);
{u32 ea_=u32(r4(R+16)+u32(1036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62820c:{NFSU2_TR(0x62820c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628210:{NFSU2_TR(0x628210);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628212:{NFSU2_TR(0x628212);
{u32 ea_=u32(r4(R+16)+u32(1020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628219:{NFSU2_TR(0x628219);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62821d:{NFSU2_TR(0x62821d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62821f:{NFSU2_TR(0x62821f);
{u32 ea_=u32(r4(R+16)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628226:{NFSU2_TR(0x628226);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62822a:{NFSU2_TR(0x62822a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62822c:{NFSU2_TR(0x62822c);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628233:{NFSU2_TR(0x628233);
{u32 ea_=u32(r4(R+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62823a:{NFSU2_TR(0x62823a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62823e:{NFSU2_TR(0x62823e);
{u32 ea_=u32(r4(R+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628245:{NFSU2_TR(0x628245);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628249:{NFSU2_TR(0x628249);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62824b:{NFSU2_TR(0x62824b);
{u32 ea_=u32(r4(R+16)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628252:{NFSU2_TR(0x628252);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628256:{NFSU2_TR(0x628256);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628258:{NFSU2_TR(0x628258);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62825c:{NFSU2_TR(0x62825c);
{u32 ea_=u32(r4(R+16)+u32(992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628263:{NFSU2_TR(0x628263);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628265:{NFSU2_TR(0x628265);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62826c:{NFSU2_TR(0x62826c);
{u32 ea_=u32(r4(R+16)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628273:{NFSU2_TR(0x628273);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628277:{NFSU2_TR(0x628277);
{u32 ea_=u32(r4(R+16)+u32(1028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62827e:{NFSU2_TR(0x62827e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628282:{NFSU2_TR(0x628282);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628284:{NFSU2_TR(0x628284);
{u32 ea_=u32(r4(R+16)+u32(1012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62828b:{NFSU2_TR(0x62828b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62828f:{NFSU2_TR(0x62828f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628291:{NFSU2_TR(0x628291);
{u32 ea_=u32(r4(R+16)+u32(996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628298:{NFSU2_TR(0x628298);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62829c:{NFSU2_TR(0x62829c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62829e:{NFSU2_TR(0x62829e);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6282a5:{NFSU2_TR(0x6282a5);
{u32 ea_=u32(r4(R+16)+u32(1048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282ac:{NFSU2_TR(0x6282ac);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282b0:{NFSU2_TR(0x6282b0);
{u32 ea_=u32(r4(R+16)+u32(1032u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282b7:{NFSU2_TR(0x6282b7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282bb:{NFSU2_TR(0x6282bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6282bd:{NFSU2_TR(0x6282bd);
{u32 ea_=u32(r4(R+16)+u32(1016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282c4:{NFSU2_TR(0x6282c4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282c8:{NFSU2_TR(0x6282c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6282ca:{NFSU2_TR(0x6282ca);
{u32 ea_=u32(r4(R+16)+u32(1000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282d1:{NFSU2_TR(0x6282d1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282d5:{NFSU2_TR(0x6282d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6282d7:{NFSU2_TR(0x6282d7);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6282de:{NFSU2_TR(0x6282de);
{u32 ea_=u32(r4(R+16)+u32(1052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282e5:{NFSU2_TR(0x6282e5);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282e9:{NFSU2_TR(0x6282e9);
{u32 ea_=u32(r4(R+16)+u32(1036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282f0:{NFSU2_TR(0x6282f0);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6282f4:{NFSU2_TR(0x6282f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6282f6:{NFSU2_TR(0x6282f6);
{u32 ea_=u32(r4(R+16)+u32(1020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6282fd:{NFSU2_TR(0x6282fd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628301:{NFSU2_TR(0x628301);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628303:{NFSU2_TR(0x628303);
{u32 ea_=u32(r4(R+16)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62830a:{NFSU2_TR(0x62830a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62830e:{NFSU2_TR(0x62830e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628310:{NFSU2_TR(0x628310);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628317:{NFSU2_TR(0x628317);
{u32 ea_=u32(r4(R+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62831e:{NFSU2_TR(0x62831e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628322:{NFSU2_TR(0x628322);
{u32 ea_=u32(r4(R+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628329:{NFSU2_TR(0x628329);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62832d:{NFSU2_TR(0x62832d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62832f:{NFSU2_TR(0x62832f);
{u32 ea_=u32(r4(R+16)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628336:{NFSU2_TR(0x628336);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62833a:{NFSU2_TR(0x62833a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62833c:{NFSU2_TR(0x62833c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628340:{NFSU2_TR(0x628340);
{u32 ea_=u32(r4(R+16)+u32(992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628347:{NFSU2_TR(0x628347);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628349:{NFSU2_TR(0x628349);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B628350:{NFSU2_TR(0x628350);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628351:{NFSU2_TR(0x628351);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B628355:{NFSU2_TR(0x628355);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62835c:{NFSU2_TR(0x62835c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62835d:{NFSU2_TR(0x62835d);
{u32 ea_=u32(r4(R+16)+u32(1052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628364:{NFSU2_TR(0x628364);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628368:{NFSU2_TR(0x628368);
{u32 ea_=u32(r4(R+16)+u32(1036u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62836f:{NFSU2_TR(0x62836f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628373:{NFSU2_TR(0x628373);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628375:{NFSU2_TR(0x628375);
{u32 ea_=u32(r4(R+16)+u32(1020u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62837c:{NFSU2_TR(0x62837c);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628380:{NFSU2_TR(0x628380);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628382:{NFSU2_TR(0x628382);
{u32 ea_=u32(r4(R+16)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628389:{NFSU2_TR(0x628389);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62838d:{NFSU2_TR(0x62838d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62838f:{NFSU2_TR(0x62838f);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628396:{NFSU2_TR(0x628396);
{u32 ea_=u32(r4(R+16)+u32(1056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62839d:{NFSU2_TR(0x62839d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283a1:{NFSU2_TR(0x6283a1);
{u32 ea_=u32(r4(R+16)+u32(1040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283a8:{NFSU2_TR(0x6283a8);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283ac:{NFSU2_TR(0x6283ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6283ae:{NFSU2_TR(0x6283ae);
{u32 ea_=u32(r4(R+16)+u32(1024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283b5:{NFSU2_TR(0x6283b5);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283b9:{NFSU2_TR(0x6283b9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6283bb:{NFSU2_TR(0x6283bb);
{u32 ea_=u32(r4(R+16)+u32(1008u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283c2:{NFSU2_TR(0x6283c2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283c6:{NFSU2_TR(0x6283c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6283c8:{NFSU2_TR(0x6283c8);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6283cf:{NFSU2_TR(0x6283cf);
{u32 ea_=u32(r4(R+16)+u32(1060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283d6:{NFSU2_TR(0x6283d6);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283da:{NFSU2_TR(0x6283da);
{u32 ea_=u32(r4(R+16)+u32(1044u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283e1:{NFSU2_TR(0x6283e1);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283e5:{NFSU2_TR(0x6283e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6283e7:{NFSU2_TR(0x6283e7);
{u32 ea_=u32(r4(R+16)+u32(1028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283ee:{NFSU2_TR(0x6283ee);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283f2:{NFSU2_TR(0x6283f2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6283f4:{NFSU2_TR(0x6283f4);
{u32 ea_=u32(r4(R+16)+u32(1012u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6283fb:{NFSU2_TR(0x6283fb);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6283ff:{NFSU2_TR(0x6283ff);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628401:{NFSU2_TR(0x628401);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628408:{NFSU2_TR(0x628408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x62840dull));
TAIL_STATIC(0x4012b0u,401);
}
B62840d:L62840d:{c.instructions+=197;NFSU2_TR(0x62840d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628411:{NFSU2_TR(0x628411);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628414:{NFSU2_TR(0x628414);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628418:{NFSU2_TR(0x628418);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62841b:{NFSU2_TR(0x62841b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62841d:{NFSU2_TR(0x62841d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628421:{NFSU2_TR(0x628421);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628423:{NFSU2_TR(0x628423);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628425:{NFSU2_TR(0x628425);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628429:{NFSU2_TR(0x628429);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62842c:{NFSU2_TR(0x62842c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62842e:{NFSU2_TR(0x62842e);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628435:{NFSU2_TR(0x628435);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628439:{NFSU2_TR(0x628439);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62843c:{NFSU2_TR(0x62843c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628440:{NFSU2_TR(0x628440);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628443:{NFSU2_TR(0x628443);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628445:{NFSU2_TR(0x628445);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628449:{NFSU2_TR(0x628449);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62844c:{NFSU2_TR(0x62844c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62844e:{NFSU2_TR(0x62844e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628452:{NFSU2_TR(0x628452);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628455:{NFSU2_TR(0x628455);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628457:{NFSU2_TR(0x628457);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62845e:{NFSU2_TR(0x62845e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628462:{NFSU2_TR(0x628462);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628465:{NFSU2_TR(0x628465);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628469:{NFSU2_TR(0x628469);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62846c:{NFSU2_TR(0x62846c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62846e:{NFSU2_TR(0x62846e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628472:{NFSU2_TR(0x628472);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628475:{NFSU2_TR(0x628475);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628477:{NFSU2_TR(0x628477);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62847b:{NFSU2_TR(0x62847b);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62847e:{NFSU2_TR(0x62847e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628480:{NFSU2_TR(0x628480);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628487:{NFSU2_TR(0x628487);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62848b:{NFSU2_TR(0x62848b);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62848e:{NFSU2_TR(0x62848e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628492:{NFSU2_TR(0x628492);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628495:{NFSU2_TR(0x628495);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628497:{NFSU2_TR(0x628497);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62849b:{NFSU2_TR(0x62849b);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62849e:{NFSU2_TR(0x62849e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284a0:{NFSU2_TR(0x6284a0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284a4:{NFSU2_TR(0x6284a4);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284a7:{NFSU2_TR(0x6284a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284a9:{NFSU2_TR(0x6284a9);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6284b0:{NFSU2_TR(0x6284b0);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284b4:{NFSU2_TR(0x6284b4);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284b7:{NFSU2_TR(0x6284b7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284bb:{NFSU2_TR(0x6284bb);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284be:{NFSU2_TR(0x6284be);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284c0:{NFSU2_TR(0x6284c0);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284c4:{NFSU2_TR(0x6284c4);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284c7:{NFSU2_TR(0x6284c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284c9:{NFSU2_TR(0x6284c9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284cd:{NFSU2_TR(0x6284cd);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284cf:{NFSU2_TR(0x6284cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284d1:{NFSU2_TR(0x6284d1);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6284d8:{NFSU2_TR(0x6284d8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284dc:{NFSU2_TR(0x6284dc);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284df:{NFSU2_TR(0x6284df);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284e3:{NFSU2_TR(0x6284e3);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284e6:{NFSU2_TR(0x6284e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284e8:{NFSU2_TR(0x6284e8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284ec:{NFSU2_TR(0x6284ec);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284ef:{NFSU2_TR(0x6284ef);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284f1:{NFSU2_TR(0x6284f1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6284f5:{NFSU2_TR(0x6284f5);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6284f8:{NFSU2_TR(0x6284f8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6284fa:{NFSU2_TR(0x6284fa);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628501:{NFSU2_TR(0x628501);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628505:{NFSU2_TR(0x628505);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628508:{NFSU2_TR(0x628508);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62850c:{NFSU2_TR(0x62850c);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62850f:{NFSU2_TR(0x62850f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628511:{NFSU2_TR(0x628511);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628515:{NFSU2_TR(0x628515);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628518:{NFSU2_TR(0x628518);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62851a:{NFSU2_TR(0x62851a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62851e:{NFSU2_TR(0x62851e);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628521:{NFSU2_TR(0x628521);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628523:{NFSU2_TR(0x628523);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62852a:{NFSU2_TR(0x62852a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62852e:{NFSU2_TR(0x62852e);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628531:{NFSU2_TR(0x628531);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628535:{NFSU2_TR(0x628535);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628538:{NFSU2_TR(0x628538);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62853a:{NFSU2_TR(0x62853a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62853e:{NFSU2_TR(0x62853e);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628541:{NFSU2_TR(0x628541);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628543:{NFSU2_TR(0x628543);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628547:{NFSU2_TR(0x628547);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62854a:{NFSU2_TR(0x62854a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62854c:{NFSU2_TR(0x62854c);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628553:{NFSU2_TR(0x628553);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628557:{NFSU2_TR(0x628557);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62855a:{NFSU2_TR(0x62855a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62855e:{NFSU2_TR(0x62855e);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628561:{NFSU2_TR(0x628561);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628563:{NFSU2_TR(0x628563);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628567:{NFSU2_TR(0x628567);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62856a:{NFSU2_TR(0x62856a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62856c:{NFSU2_TR(0x62856c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628570:{NFSU2_TR(0x628570);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628572:{NFSU2_TR(0x628572);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628574:{NFSU2_TR(0x628574);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62857b:{NFSU2_TR(0x62857b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62857f:{NFSU2_TR(0x62857f);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628582:{NFSU2_TR(0x628582);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628586:{NFSU2_TR(0x628586);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628589:{NFSU2_TR(0x628589);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62858b:{NFSU2_TR(0x62858b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62858f:{NFSU2_TR(0x62858f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628592:{NFSU2_TR(0x628592);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628594:{NFSU2_TR(0x628594);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628598:{NFSU2_TR(0x628598);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62859b:{NFSU2_TR(0x62859b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62859d:{NFSU2_TR(0x62859d);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6285a4:{NFSU2_TR(0x6285a4);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285a8:{NFSU2_TR(0x6285a8);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285ab:{NFSU2_TR(0x6285ab);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285af:{NFSU2_TR(0x6285af);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285b2:{NFSU2_TR(0x6285b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285b4:{NFSU2_TR(0x6285b4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285b8:{NFSU2_TR(0x6285b8);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285bb:{NFSU2_TR(0x6285bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285bd:{NFSU2_TR(0x6285bd);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285c1:{NFSU2_TR(0x6285c1);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285c4:{NFSU2_TR(0x6285c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285c6:{NFSU2_TR(0x6285c6);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6285cd:{NFSU2_TR(0x6285cd);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285d1:{NFSU2_TR(0x6285d1);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285d4:{NFSU2_TR(0x6285d4);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285d8:{NFSU2_TR(0x6285d8);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285db:{NFSU2_TR(0x6285db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285dd:{NFSU2_TR(0x6285dd);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285e1:{NFSU2_TR(0x6285e1);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285e4:{NFSU2_TR(0x6285e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285e6:{NFSU2_TR(0x6285e6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6285ea:{NFSU2_TR(0x6285ea);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6285ed:{NFSU2_TR(0x6285ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6285f4:{NFSU2_TR(0x6285f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6285fb:{NFSU2_TR(0x6285fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6285fc:{NFSU2_TR(0x6285fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6285fe:{NFSU2_TR(0x6285fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6285ff:{NFSU2_TR(0x6285ff);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628606:{NFSU2_TR(0x628606);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62860a:{NFSU2_TR(0x62860a);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62860d:{NFSU2_TR(0x62860d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628611:{NFSU2_TR(0x628611);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628614:{NFSU2_TR(0x628614);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628616:{NFSU2_TR(0x628616);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62861a:{NFSU2_TR(0x62861a);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62861d:{NFSU2_TR(0x62861d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62861f:{NFSU2_TR(0x62861f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628623:{NFSU2_TR(0x628623);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628625:{NFSU2_TR(0x628625);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628627:{NFSU2_TR(0x628627);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62862e:{NFSU2_TR(0x62862e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628632:{NFSU2_TR(0x628632);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628635:{NFSU2_TR(0x628635);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628639:{NFSU2_TR(0x628639);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62863c:{NFSU2_TR(0x62863c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62863e:{NFSU2_TR(0x62863e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628642:{NFSU2_TR(0x628642);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628645:{NFSU2_TR(0x628645);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628647:{NFSU2_TR(0x628647);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62864b:{NFSU2_TR(0x62864b);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62864e:{NFSU2_TR(0x62864e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628650:{NFSU2_TR(0x628650);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628657:{NFSU2_TR(0x628657);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62865b:{NFSU2_TR(0x62865b);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62865e:{NFSU2_TR(0x62865e);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628662:{NFSU2_TR(0x628662);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628665:{NFSU2_TR(0x628665);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628667:{NFSU2_TR(0x628667);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62866b:{NFSU2_TR(0x62866b);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62866e:{NFSU2_TR(0x62866e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628670:{NFSU2_TR(0x628670);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628674:{NFSU2_TR(0x628674);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628677:{NFSU2_TR(0x628677);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628679:{NFSU2_TR(0x628679);
{u32 ea_=u32(r4(R+16)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628680:{NFSU2_TR(0x628680);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628684:{NFSU2_TR(0x628684);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628687:{NFSU2_TR(0x628687);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62868b:{NFSU2_TR(0x62868b);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62868e:{NFSU2_TR(0x62868e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628690:{NFSU2_TR(0x628690);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628694:{NFSU2_TR(0x628694);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628697:{NFSU2_TR(0x628697);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628699:{NFSU2_TR(0x628699);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62869d:{NFSU2_TR(0x62869d);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6286a0:{NFSU2_TR(0x6286a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6286a2:{NFSU2_TR(0x6286a2);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6286a9:{NFSU2_TR(0x6286a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6286aeull));
TAIL_STATIC(0x4012b0u,401);
}
B6286ae:L6286ae:{c.instructions+=12;NFSU2_TR(0x6286ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6286b1:{NFSU2_TR(0x6286b1);
u8 U[4];
w4(U+0,u32(u32(u32(0xb40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6286b8:{NFSU2_TR(0x6286b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6286b9:{NFSU2_TR(0x6286b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6286c0:{NFSU2_TR(0x6286c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6286c1:{NFSU2_TR(0x6286c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x7b8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6286c8:{NFSU2_TR(0x6286c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6286c9:{NFSU2_TR(0x6286c9);
u8 U[4];
w4(U+0,u32(0x871b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6286ce:{NFSU2_TR(0x6286ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6286d5:{NFSU2_TR(0x6286d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6286d6:{NFSU2_TR(0x6286d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6286d7:{NFSU2_TR(0x6286d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6286dcull));
TAIL_STATIC(0x48f660u,48f);
}
B6286dc:L6286dc:{c.instructions+=4;NFSU2_TR(0x6286dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6286e3:{NFSU2_TR(0x6286e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B6286e6:{NFSU2_TR(0x6286e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6286e8:{NFSU2_TR(0x6286e8);
if(r1(R+518)){{goto L628722;}}
}
B6286ea:L6286ea:{c.instructions+=15;NFSU2_TR(0x6286ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6286f1:{NFSU2_TR(0x6286f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6286f8:{NFSU2_TR(0x6286f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6286fb:{NFSU2_TR(0x6286fb);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B6286fd:{NFSU2_TR(0x6286fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B628704:{NFSU2_TR(0x628704);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628706:{NFSU2_TR(0x628706);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B628708:{NFSU2_TR(0x628708);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62870f:{NFSU2_TR(0x62870f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628710:{NFSU2_TR(0x628710);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B628717:{NFSU2_TR(0x628717);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628718:{NFSU2_TR(0x628718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628719:{NFSU2_TR(0x628719);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62871a:{NFSU2_TR(0x62871a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B62871d:{NFSU2_TR(0x62871d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x628722ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B628722:L628722:{c.instructions+=3;NFSU2_TR(0x628722);
u8 U[5];
w4(U+0,u32(u32(u32(0xf3ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B628729:{NFSU2_TR(0x628729);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B62872b:{NFSU2_TR(0x62872b);
if(r1(R+518)){TAIL_STATIC(0x6295a0u,629);}
}
B628731:L628731:{c.instructions+=3;NFSU2_TR(0x628731);
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
B62873a:{NFSU2_TR(0x62873a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B628741:{NFSU2_TR(0x628741);
if(r1(R+518)){{goto L628803;}}
}
B628747:L628747:{c.instructions+=4;NFSU2_TR(0x628747);
u8 U[4];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B62874e:{NFSU2_TR(0x62874e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62874f:{NFSU2_TR(0x62874f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628750:{NFSU2_TR(0x628750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x628755ull));
TAIL_STATIC(0x4012b0u,401);
}
B628755:L628755:{c.instructions+=17;NFSU2_TR(0x628755);
u8 U[8];
w4(U+0,u32(u32(u32(0x948ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B62875c:{NFSU2_TR(0x62875c);
u8 U[8];
w4(U+0,u32(u32(u32(0x94cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B628763:{NFSU2_TR(0x628763);
u8 U[8];
w4(U+0,u32(u32(u32(0x950ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B62876a:{NFSU2_TR(0x62876a);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B628771:{NFSU2_TR(0x628771);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B628778:{NFSU2_TR(0x628778);
u8 U[8];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62877f:{NFSU2_TR(0x62877f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628780:{NFSU2_TR(0x628780);
u8 U[4];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B628787:{NFSU2_TR(0x628787);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B62878e:{NFSU2_TR(0x62878e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B62878f:{NFSU2_TR(0x62878f);
u8 U[4];
w4(U+0,u32(u32(u32(0x920ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B628796:{NFSU2_TR(0x628796);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628797:{NFSU2_TR(0x628797);
u8 U[8];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6287a2:{NFSU2_TR(0x6287a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x958ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6287ad:{NFSU2_TR(0x6287ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x95cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6287b8:{NFSU2_TR(0x6287b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x960ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6287c3:{NFSU2_TR(0x6287c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6287c8ull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B6287c8:L6287c8:{c.instructions+=9;NFSU2_TR(0x6287c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6287cf:{NFSU2_TR(0x6287cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6287d6:{NFSU2_TR(0x6287d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6287dd:{NFSU2_TR(0x6287dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6287e4:{NFSU2_TR(0x6287e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x924ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6287eb:{NFSU2_TR(0x6287eb);
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
B6287ee:{NFSU2_TR(0x6287ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x944ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6287f5:{NFSU2_TR(0x6287f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x948ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6287fc:{NFSU2_TR(0x6287fc);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B628803:L628803:{c.instructions+=197;NFSU2_TR(0x628803);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62880a:{NFSU2_TR(0x62880a);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628811:{NFSU2_TR(0x628811);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628818:{NFSU2_TR(0x628818);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62881f:{NFSU2_TR(0x62881f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628821:{NFSU2_TR(0x628821);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628828:{NFSU2_TR(0x628828);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62882f:{NFSU2_TR(0x62882f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628831:{NFSU2_TR(0x628831);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628838:{NFSU2_TR(0x628838);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62883f:{NFSU2_TR(0x62883f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628841:{NFSU2_TR(0x628841);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628845:{NFSU2_TR(0x628845);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62884c:{NFSU2_TR(0x62884c);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628853:{NFSU2_TR(0x628853);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62885a:{NFSU2_TR(0x62885a);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628861:{NFSU2_TR(0x628861);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628863:{NFSU2_TR(0x628863);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62886a:{NFSU2_TR(0x62886a);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628871:{NFSU2_TR(0x628871);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628873:{NFSU2_TR(0x628873);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62887a:{NFSU2_TR(0x62887a);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628881:{NFSU2_TR(0x628881);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628883:{NFSU2_TR(0x628883);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628887:{NFSU2_TR(0x628887);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62888e:{NFSU2_TR(0x62888e);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628895:{NFSU2_TR(0x628895);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62889c:{NFSU2_TR(0x62889c);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288a3:{NFSU2_TR(0x6288a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6288a5:{NFSU2_TR(0x6288a5);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288ac:{NFSU2_TR(0x6288ac);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288b3:{NFSU2_TR(0x6288b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6288b5:{NFSU2_TR(0x6288b5);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288bc:{NFSU2_TR(0x6288bc);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288c3:{NFSU2_TR(0x6288c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6288c5:{NFSU2_TR(0x6288c5);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6288c9:{NFSU2_TR(0x6288c9);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288d0:{NFSU2_TR(0x6288d0);
{u32 ea_=u32(r4(R+16)+u32(512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288d7:{NFSU2_TR(0x6288d7);
{u32 ea_=u32(r4(R+16)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288de:{NFSU2_TR(0x6288de);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288e5:{NFSU2_TR(0x6288e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6288e7:{NFSU2_TR(0x6288e7);
{u32 ea_=u32(r4(R+16)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288ee:{NFSU2_TR(0x6288ee);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6288f5:{NFSU2_TR(0x6288f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6288f7:{NFSU2_TR(0x6288f7);
{u32 ea_=u32(r4(R+16)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6288fe:{NFSU2_TR(0x6288fe);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628905:{NFSU2_TR(0x628905);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628907:{NFSU2_TR(0x628907);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B62890b:{NFSU2_TR(0x62890b);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628912:{NFSU2_TR(0x628912);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628919:{NFSU2_TR(0x628919);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628920:{NFSU2_TR(0x628920);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628927:{NFSU2_TR(0x628927);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628929:{NFSU2_TR(0x628929);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628930:{NFSU2_TR(0x628930);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628937:{NFSU2_TR(0x628937);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628939:{NFSU2_TR(0x628939);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628940:{NFSU2_TR(0x628940);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628947:{NFSU2_TR(0x628947);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628949:{NFSU2_TR(0x628949);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628950:{NFSU2_TR(0x628950);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628957:{NFSU2_TR(0x628957);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62895e:{NFSU2_TR(0x62895e);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628965:{NFSU2_TR(0x628965);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62896c:{NFSU2_TR(0x62896c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62896e:{NFSU2_TR(0x62896e);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628975:{NFSU2_TR(0x628975);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62897c:{NFSU2_TR(0x62897c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62897e:{NFSU2_TR(0x62897e);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628985:{NFSU2_TR(0x628985);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B62898c:{NFSU2_TR(0x62898c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B62898e:{NFSU2_TR(0x62898e);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628995:{NFSU2_TR(0x628995);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B62899c:{NFSU2_TR(0x62899c);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289a3:{NFSU2_TR(0x6289a3);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289aa:{NFSU2_TR(0x6289aa);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289b1:{NFSU2_TR(0x6289b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6289b3:{NFSU2_TR(0x6289b3);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289ba:{NFSU2_TR(0x6289ba);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289c1:{NFSU2_TR(0x6289c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6289c3:{NFSU2_TR(0x6289c3);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289ca:{NFSU2_TR(0x6289ca);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289d1:{NFSU2_TR(0x6289d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6289d3:{NFSU2_TR(0x6289d3);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6289da:{NFSU2_TR(0x6289da);
{u32 ea_=u32(r4(R+16)+u32(540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289e1:{NFSU2_TR(0x6289e1);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289e8:{NFSU2_TR(0x6289e8);
{u32 ea_=u32(r4(R+16)+u32(536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289ef:{NFSU2_TR(0x6289ef);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6289f6:{NFSU2_TR(0x6289f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6289f8:{NFSU2_TR(0x6289f8);
{u32 ea_=u32(r4(R+16)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6289ff:{NFSU2_TR(0x6289ff);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a06:{NFSU2_TR(0x628a06);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a08:{NFSU2_TR(0x628a08);
{u32 ea_=u32(r4(R+16)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a0f:{NFSU2_TR(0x628a0f);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a16:{NFSU2_TR(0x628a16);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a18:{NFSU2_TR(0x628a18);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628a1f:{NFSU2_TR(0x628a1f);
{u32 ea_=u32(r4(R+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a26:{NFSU2_TR(0x628a26);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a2d:{NFSU2_TR(0x628a2d);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a34:{NFSU2_TR(0x628a34);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a3b:{NFSU2_TR(0x628a3b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a3d:{NFSU2_TR(0x628a3d);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a44:{NFSU2_TR(0x628a44);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a4b:{NFSU2_TR(0x628a4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a4d:{NFSU2_TR(0x628a4d);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a54:{NFSU2_TR(0x628a54);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a5b:{NFSU2_TR(0x628a5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a5d:{NFSU2_TR(0x628a5d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628a64:{NFSU2_TR(0x628a64);
{u32 ea_=u32(r4(R+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a6b:{NFSU2_TR(0x628a6b);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a72:{NFSU2_TR(0x628a72);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a79:{NFSU2_TR(0x628a79);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a80:{NFSU2_TR(0x628a80);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a82:{NFSU2_TR(0x628a82);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a89:{NFSU2_TR(0x628a89);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628a90:{NFSU2_TR(0x628a90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628a92:{NFSU2_TR(0x628a92);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628a99:{NFSU2_TR(0x628a99);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628aa0:{NFSU2_TR(0x628aa0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628aa2:{NFSU2_TR(0x628aa2);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628aa9:{NFSU2_TR(0x628aa9);
{u32 ea_=u32(r4(R+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ab0:{NFSU2_TR(0x628ab0);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ab7:{NFSU2_TR(0x628ab7);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628abe:{NFSU2_TR(0x628abe);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ac5:{NFSU2_TR(0x628ac5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ac7:{NFSU2_TR(0x628ac7);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ace:{NFSU2_TR(0x628ace);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ad5:{NFSU2_TR(0x628ad5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ad7:{NFSU2_TR(0x628ad7);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ade:{NFSU2_TR(0x628ade);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ae5:{NFSU2_TR(0x628ae5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ae7:{NFSU2_TR(0x628ae7);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628aee:{NFSU2_TR(0x628aee);
{u32 ea_=u32(r4(R+16)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628af5:{NFSU2_TR(0x628af5);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628afc:{NFSU2_TR(0x628afc);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b03:{NFSU2_TR(0x628b03);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b0a:{NFSU2_TR(0x628b0a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b0c:{NFSU2_TR(0x628b0c);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b13:{NFSU2_TR(0x628b13);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b1a:{NFSU2_TR(0x628b1a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b1c:{NFSU2_TR(0x628b1c);
{u32 ea_=u32(r4(R+16)+u32(544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b23:{NFSU2_TR(0x628b23);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b2a:{NFSU2_TR(0x628b2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b2c:{NFSU2_TR(0x628b2c);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628b33:{NFSU2_TR(0x628b33);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b3a:{NFSU2_TR(0x628b3a);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b41:{NFSU2_TR(0x628b41);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b48:{NFSU2_TR(0x628b48);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b4f:{NFSU2_TR(0x628b4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b51:{NFSU2_TR(0x628b51);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b58:{NFSU2_TR(0x628b58);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b5f:{NFSU2_TR(0x628b5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b61:{NFSU2_TR(0x628b61);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b68:{NFSU2_TR(0x628b68);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b6f:{NFSU2_TR(0x628b6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b71:{NFSU2_TR(0x628b71);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628b78:{NFSU2_TR(0x628b78);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b7f:{NFSU2_TR(0x628b7f);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b86:{NFSU2_TR(0x628b86);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b8d:{NFSU2_TR(0x628b8d);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628b94:{NFSU2_TR(0x628b94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628b96:{NFSU2_TR(0x628b96);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628b9d:{NFSU2_TR(0x628b9d);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ba4:{NFSU2_TR(0x628ba4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ba6:{NFSU2_TR(0x628ba6);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628bad:{NFSU2_TR(0x628bad);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628bb4:{NFSU2_TR(0x628bb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628bb6:{NFSU2_TR(0x628bb6);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628bbd:{NFSU2_TR(0x628bbd);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628bc4:{NFSU2_TR(0x628bc4);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628bcb:{NFSU2_TR(0x628bcb);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628bd2:{NFSU2_TR(0x628bd2);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628bd9:{NFSU2_TR(0x628bd9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628bdb:{NFSU2_TR(0x628bdb);
{u32 ea_=u32(r4(R+16)+u32(564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628be2:{NFSU2_TR(0x628be2);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628be9:{NFSU2_TR(0x628be9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628beb:{NFSU2_TR(0x628beb);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628bf2:{NFSU2_TR(0x628bf2);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628bf9:{NFSU2_TR(0x628bf9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628bfb:{NFSU2_TR(0x628bfb);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628c02:{NFSU2_TR(0x628c02);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c09:{NFSU2_TR(0x628c09);
{u32 ea_=u32(r4(R+16)+u32(316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c10:{NFSU2_TR(0x628c10);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c17:{NFSU2_TR(0x628c17);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B628c1b:{NFSU2_TR(0x628c1b);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c22:{NFSU2_TR(0x628c22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628c23:{NFSU2_TR(0x628c23);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B628c27:{NFSU2_TR(0x628c27);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628c28:{NFSU2_TR(0x628c28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c2a:{NFSU2_TR(0x628c2a);
{u32 ea_=u32(r4(R+16)+u32(572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c31:{NFSU2_TR(0x628c31);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c38:{NFSU2_TR(0x628c38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c3a:{NFSU2_TR(0x628c3a);
{u32 ea_=u32(r4(R+16)+u32(568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c41:{NFSU2_TR(0x628c41);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c48:{NFSU2_TR(0x628c48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c4a:{NFSU2_TR(0x628c4a);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628c51:{NFSU2_TR(0x628c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x628c56ull));
TAIL_STATIC(0x4012b0u,401);
}
B628c56:L628c56:{c.instructions+=198;NFSU2_TR(0x628c56);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B628c5d:{NFSU2_TR(0x628c5d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c61:{NFSU2_TR(0x628c61);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c64:{NFSU2_TR(0x628c64);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c68:{NFSU2_TR(0x628c68);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c6b:{NFSU2_TR(0x628c6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c6d:{NFSU2_TR(0x628c6d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c71:{NFSU2_TR(0x628c71);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c73:{NFSU2_TR(0x628c73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c75:{NFSU2_TR(0x628c75);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c79:{NFSU2_TR(0x628c79);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c7c:{NFSU2_TR(0x628c7c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c7e:{NFSU2_TR(0x628c7e);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628c82:{NFSU2_TR(0x628c82);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c86:{NFSU2_TR(0x628c86);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c89:{NFSU2_TR(0x628c89);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c8d:{NFSU2_TR(0x628c8d);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c90:{NFSU2_TR(0x628c90);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c92:{NFSU2_TR(0x628c92);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c96:{NFSU2_TR(0x628c96);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628c99:{NFSU2_TR(0x628c99);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628c9b:{NFSU2_TR(0x628c9b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628c9f:{NFSU2_TR(0x628c9f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ca2:{NFSU2_TR(0x628ca2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ca4:{NFSU2_TR(0x628ca4);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628ca8:{NFSU2_TR(0x628ca8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cac:{NFSU2_TR(0x628cac);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628caf:{NFSU2_TR(0x628caf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cb3:{NFSU2_TR(0x628cb3);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cb6:{NFSU2_TR(0x628cb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628cb8:{NFSU2_TR(0x628cb8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cbc:{NFSU2_TR(0x628cbc);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cbf:{NFSU2_TR(0x628cbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628cc1:{NFSU2_TR(0x628cc1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cc5:{NFSU2_TR(0x628cc5);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cc8:{NFSU2_TR(0x628cc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628cca:{NFSU2_TR(0x628cca);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628cd1:{NFSU2_TR(0x628cd1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cd5:{NFSU2_TR(0x628cd5);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cd8:{NFSU2_TR(0x628cd8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cdc:{NFSU2_TR(0x628cdc);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cdf:{NFSU2_TR(0x628cdf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ce1:{NFSU2_TR(0x628ce1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ce5:{NFSU2_TR(0x628ce5);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ce8:{NFSU2_TR(0x628ce8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628cea:{NFSU2_TR(0x628cea);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cee:{NFSU2_TR(0x628cee);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628cf1:{NFSU2_TR(0x628cf1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628cf3:{NFSU2_TR(0x628cf3);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628cfa:{NFSU2_TR(0x628cfa);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628cfe:{NFSU2_TR(0x628cfe);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d01:{NFSU2_TR(0x628d01);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d05:{NFSU2_TR(0x628d05);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d08:{NFSU2_TR(0x628d08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d0a:{NFSU2_TR(0x628d0a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d0e:{NFSU2_TR(0x628d0e);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d11:{NFSU2_TR(0x628d11);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d13:{NFSU2_TR(0x628d13);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d17:{NFSU2_TR(0x628d17);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d19:{NFSU2_TR(0x628d19);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d1b:{NFSU2_TR(0x628d1b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628d22:{NFSU2_TR(0x628d22);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d26:{NFSU2_TR(0x628d26);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d29:{NFSU2_TR(0x628d29);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d2d:{NFSU2_TR(0x628d2d);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d30:{NFSU2_TR(0x628d30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d32:{NFSU2_TR(0x628d32);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d36:{NFSU2_TR(0x628d36);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d39:{NFSU2_TR(0x628d39);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d3b:{NFSU2_TR(0x628d3b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d3f:{NFSU2_TR(0x628d3f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d42:{NFSU2_TR(0x628d42);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d44:{NFSU2_TR(0x628d44);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628d4b:{NFSU2_TR(0x628d4b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d4f:{NFSU2_TR(0x628d4f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d52:{NFSU2_TR(0x628d52);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d56:{NFSU2_TR(0x628d56);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d59:{NFSU2_TR(0x628d59);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d5b:{NFSU2_TR(0x628d5b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d5f:{NFSU2_TR(0x628d5f);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d62:{NFSU2_TR(0x628d62);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d64:{NFSU2_TR(0x628d64);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d68:{NFSU2_TR(0x628d68);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d6b:{NFSU2_TR(0x628d6b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d6d:{NFSU2_TR(0x628d6d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628d74:{NFSU2_TR(0x628d74);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d78:{NFSU2_TR(0x628d78);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d7b:{NFSU2_TR(0x628d7b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d7f:{NFSU2_TR(0x628d7f);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d82:{NFSU2_TR(0x628d82);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d84:{NFSU2_TR(0x628d84);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d88:{NFSU2_TR(0x628d88);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d8b:{NFSU2_TR(0x628d8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d8d:{NFSU2_TR(0x628d8d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628d91:{NFSU2_TR(0x628d91);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628d94:{NFSU2_TR(0x628d94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628d96:{NFSU2_TR(0x628d96);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628d9d:{NFSU2_TR(0x628d9d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628da1:{NFSU2_TR(0x628da1);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628da4:{NFSU2_TR(0x628da4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628da8:{NFSU2_TR(0x628da8);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628dab:{NFSU2_TR(0x628dab);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628dad:{NFSU2_TR(0x628dad);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628db1:{NFSU2_TR(0x628db1);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628db4:{NFSU2_TR(0x628db4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628db6:{NFSU2_TR(0x628db6);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628dba:{NFSU2_TR(0x628dba);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628dbc:{NFSU2_TR(0x628dbc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628dbe:{NFSU2_TR(0x628dbe);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628dc5:{NFSU2_TR(0x628dc5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628dc9:{NFSU2_TR(0x628dc9);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628dcc:{NFSU2_TR(0x628dcc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628dd0:{NFSU2_TR(0x628dd0);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628dd3:{NFSU2_TR(0x628dd3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628dd5:{NFSU2_TR(0x628dd5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628dd9:{NFSU2_TR(0x628dd9);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ddc:{NFSU2_TR(0x628ddc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628dde:{NFSU2_TR(0x628dde);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628de2:{NFSU2_TR(0x628de2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628de5:{NFSU2_TR(0x628de5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628de7:{NFSU2_TR(0x628de7);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628dee:{NFSU2_TR(0x628dee);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628df2:{NFSU2_TR(0x628df2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628df5:{NFSU2_TR(0x628df5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628df9:{NFSU2_TR(0x628df9);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628dfc:{NFSU2_TR(0x628dfc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628dfe:{NFSU2_TR(0x628dfe);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e02:{NFSU2_TR(0x628e02);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e05:{NFSU2_TR(0x628e05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e07:{NFSU2_TR(0x628e07);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e0b:{NFSU2_TR(0x628e0b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e0e:{NFSU2_TR(0x628e0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e10:{NFSU2_TR(0x628e10);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628e17:{NFSU2_TR(0x628e17);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e1b:{NFSU2_TR(0x628e1b);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e1e:{NFSU2_TR(0x628e1e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e22:{NFSU2_TR(0x628e22);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e25:{NFSU2_TR(0x628e25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e27:{NFSU2_TR(0x628e27);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e2b:{NFSU2_TR(0x628e2b);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e2e:{NFSU2_TR(0x628e2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e30:{NFSU2_TR(0x628e30);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e34:{NFSU2_TR(0x628e34);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e37:{NFSU2_TR(0x628e37);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e39:{NFSU2_TR(0x628e39);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628e40:{NFSU2_TR(0x628e40);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e44:{NFSU2_TR(0x628e44);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e47:{NFSU2_TR(0x628e47);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e4b:{NFSU2_TR(0x628e4b);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e4e:{NFSU2_TR(0x628e4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e50:{NFSU2_TR(0x628e50);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e54:{NFSU2_TR(0x628e54);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e57:{NFSU2_TR(0x628e57);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e59:{NFSU2_TR(0x628e59);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e5d:{NFSU2_TR(0x628e5d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e5f:{NFSU2_TR(0x628e5f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e61:{NFSU2_TR(0x628e61);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628e68:{NFSU2_TR(0x628e68);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e6c:{NFSU2_TR(0x628e6c);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e6f:{NFSU2_TR(0x628e6f);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e73:{NFSU2_TR(0x628e73);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e76:{NFSU2_TR(0x628e76);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e78:{NFSU2_TR(0x628e78);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e7c:{NFSU2_TR(0x628e7c);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e7f:{NFSU2_TR(0x628e7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e81:{NFSU2_TR(0x628e81);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e85:{NFSU2_TR(0x628e85);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e88:{NFSU2_TR(0x628e88);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628e8a:{NFSU2_TR(0x628e8a);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628e91:{NFSU2_TR(0x628e91);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628e95:{NFSU2_TR(0x628e95);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B628e99:{NFSU2_TR(0x628e99);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628e9c:{NFSU2_TR(0x628e9c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ea0:{NFSU2_TR(0x628ea0);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ea3:{NFSU2_TR(0x628ea3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ea5:{NFSU2_TR(0x628ea5);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ea9:{NFSU2_TR(0x628ea9);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628eac:{NFSU2_TR(0x628eac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628eae:{NFSU2_TR(0x628eae);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628eb2:{NFSU2_TR(0x628eb2);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628eb5:{NFSU2_TR(0x628eb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628eb7:{NFSU2_TR(0x628eb7);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628ebe:{NFSU2_TR(0x628ebe);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ec2:{NFSU2_TR(0x628ec2);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ec5:{NFSU2_TR(0x628ec5);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ec9:{NFSU2_TR(0x628ec9);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ecc:{NFSU2_TR(0x628ecc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ece:{NFSU2_TR(0x628ece);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ed2:{NFSU2_TR(0x628ed2);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ed5:{NFSU2_TR(0x628ed5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ed7:{NFSU2_TR(0x628ed7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628edb:{NFSU2_TR(0x628edb);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ede:{NFSU2_TR(0x628ede);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B628ee2:{NFSU2_TR(0x628ee2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628ee3:{NFSU2_TR(0x628ee3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B628ee4:{NFSU2_TR(0x628ee4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ee6:{NFSU2_TR(0x628ee6);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628eed:{NFSU2_TR(0x628eed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x628ef2ull));
TAIL_STATIC(0x4012b0u,401);
}
B628ef2:L628ef2:{c.instructions+=58;NFSU2_TR(0x628ef2);
{u32 ea_=u32(r4(R+16)+u32(1504u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ef9:{NFSU2_TR(0x628ef9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628efd:{NFSU2_TR(0x628efd);
{u32 ea_=u32(r4(R+16)+u32(1552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f04:{NFSU2_TR(0x628f04);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f08:{NFSU2_TR(0x628f08);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f0a:{NFSU2_TR(0x628f0a);
{u32 ea_=u32(r4(R+16)+u32(1536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f11:{NFSU2_TR(0x628f11);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f15:{NFSU2_TR(0x628f15);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f17:{NFSU2_TR(0x628f17);
{u32 ea_=u32(r4(R+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f1e:{NFSU2_TR(0x628f1e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f22:{NFSU2_TR(0x628f22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f24:{NFSU2_TR(0x628f24);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628f2b:{NFSU2_TR(0x628f2b);
{u32 ea_=u32(r4(R+16)+u32(1508u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f32:{NFSU2_TR(0x628f32);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f36:{NFSU2_TR(0x628f36);
{u32 ea_=u32(r4(R+16)+u32(1556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f3d:{NFSU2_TR(0x628f3d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f41:{NFSU2_TR(0x628f41);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f43:{NFSU2_TR(0x628f43);
{u32 ea_=u32(r4(R+16)+u32(1540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f4a:{NFSU2_TR(0x628f4a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f4e:{NFSU2_TR(0x628f4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f50:{NFSU2_TR(0x628f50);
{u32 ea_=u32(r4(R+16)+u32(1524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f57:{NFSU2_TR(0x628f57);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f5b:{NFSU2_TR(0x628f5b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f5d:{NFSU2_TR(0x628f5d);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628f64:{NFSU2_TR(0x628f64);
{u32 ea_=u32(r4(R+16)+u32(1512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f6b:{NFSU2_TR(0x628f6b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f6f:{NFSU2_TR(0x628f6f);
{u32 ea_=u32(r4(R+16)+u32(1560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f76:{NFSU2_TR(0x628f76);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f7a:{NFSU2_TR(0x628f7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f7c:{NFSU2_TR(0x628f7c);
{u32 ea_=u32(r4(R+16)+u32(1544u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f83:{NFSU2_TR(0x628f83);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f87:{NFSU2_TR(0x628f87);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f89:{NFSU2_TR(0x628f89);
{u32 ea_=u32(r4(R+16)+u32(1528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628f90:{NFSU2_TR(0x628f90);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628f94:{NFSU2_TR(0x628f94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628f96:{NFSU2_TR(0x628f96);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628f9d:{NFSU2_TR(0x628f9d);
{u32 ea_=u32(r4(R+16)+u32(1516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fa4:{NFSU2_TR(0x628fa4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fa8:{NFSU2_TR(0x628fa8);
{u32 ea_=u32(r4(R+16)+u32(1564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628faf:{NFSU2_TR(0x628faf);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fb3:{NFSU2_TR(0x628fb3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628fb5:{NFSU2_TR(0x628fb5);
{u32 ea_=u32(r4(R+16)+u32(1548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fbc:{NFSU2_TR(0x628fbc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fc0:{NFSU2_TR(0x628fc0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628fc2:{NFSU2_TR(0x628fc2);
{u32 ea_=u32(r4(R+16)+u32(1532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fc9:{NFSU2_TR(0x628fc9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fcd:{NFSU2_TR(0x628fcd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628fcf:{NFSU2_TR(0x628fcf);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B628fd6:{NFSU2_TR(0x628fd6);
{u32 ea_=u32(r4(R+16)+u32(1552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fdd:{NFSU2_TR(0x628fdd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fe1:{NFSU2_TR(0x628fe1);
{u32 ea_=u32(r4(R+16)+u32(1536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fe8:{NFSU2_TR(0x628fe8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628fec:{NFSU2_TR(0x628fec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628fee:{NFSU2_TR(0x628fee);
{u32 ea_=u32(r4(R+16)+u32(1520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628ff5:{NFSU2_TR(0x628ff5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B628ff9:{NFSU2_TR(0x628ff9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B628ffb:{NFSU2_TR(0x628ffb);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B628fff:{NFSU2_TR(0x628fff);
{u32 ea_=u32(r4(R+16)+u32(1504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x629006u,629);
}
XIT:NFSU2_TR_EXIT(0x628,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
