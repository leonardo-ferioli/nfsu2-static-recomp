#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_714(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x713,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x713,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_713(u8* __restrict R,Cpu& c);
u32 page_713(Cpu& c){return body_713(c.regs.data(),c);}
__attribute__((noinline)) u32 body_713(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x713004:goto L713004;
case 0x71300a:c.instructions+=617;goto B71300a;
case 0x713010:c.instructions+=616;goto B713010;
case 0x713016:c.instructions+=615;goto B713016;
case 0x71301d:c.instructions+=614;goto B71301d;
case 0x713024:c.instructions+=613;goto B713024;
case 0x71302b:c.instructions+=612;goto B71302b;
case 0x713032:c.instructions+=611;goto B713032;
case 0x713038:c.instructions+=610;goto B713038;
case 0x71303e:c.instructions+=609;goto B71303e;
case 0x713045:c.instructions+=608;goto B713045;
case 0x71304c:c.instructions+=607;goto B71304c;
case 0x713053:c.instructions+=606;goto B713053;
case 0x71305a:c.instructions+=605;goto B71305a;
case 0x713060:c.instructions+=604;goto B713060;
case 0x713066:c.instructions+=603;goto B713066;
case 0x71306d:c.instructions+=602;goto B71306d;
case 0x713074:c.instructions+=601;goto B713074;
case 0x71307b:c.instructions+=600;goto B71307b;
case 0x713082:c.instructions+=599;goto B713082;
case 0x713088:c.instructions+=598;goto B713088;
case 0x71308f:c.instructions+=597;goto B71308f;
case 0x713095:c.instructions+=596;goto B713095;
case 0x71309b:c.instructions+=595;goto B71309b;
case 0x7130a2:c.instructions+=594;goto B7130a2;
case 0x7130a8:c.instructions+=593;goto B7130a8;
case 0x7130af:c.instructions+=592;goto B7130af;
case 0x7130b6:c.instructions+=591;goto B7130b6;
case 0x7130bd:c.instructions+=590;goto B7130bd;
case 0x7130c4:c.instructions+=589;goto B7130c4;
case 0x7130cb:c.instructions+=588;goto B7130cb;
case 0x7130d1:c.instructions+=587;goto B7130d1;
case 0x7130d7:c.instructions+=586;goto B7130d7;
case 0x7130dd:c.instructions+=585;goto B7130dd;
case 0x7130e4:c.instructions+=584;goto B7130e4;
case 0x7130eb:c.instructions+=583;goto B7130eb;
case 0x7130f1:c.instructions+=582;goto B7130f1;
case 0x7130f8:c.instructions+=581;goto B7130f8;
case 0x7130ff:c.instructions+=580;goto B7130ff;
case 0x713106:c.instructions+=579;goto B713106;
case 0x71310d:c.instructions+=578;goto B71310d;
case 0x713114:c.instructions+=577;goto B713114;
case 0x71311a:c.instructions+=576;goto B71311a;
case 0x713120:c.instructions+=575;goto B713120;
case 0x713126:c.instructions+=574;goto B713126;
case 0x71312d:c.instructions+=573;goto B71312d;
case 0x713134:c.instructions+=572;goto B713134;
case 0x71313b:c.instructions+=571;goto B71313b;
case 0x713141:c.instructions+=570;goto B713141;
case 0x713147:c.instructions+=569;goto B713147;
case 0x71314e:c.instructions+=568;goto B71314e;
case 0x713154:c.instructions+=567;goto B713154;
case 0x71315a:c.instructions+=566;goto B71315a;
case 0x713161:c.instructions+=565;goto B713161;
case 0x713168:c.instructions+=564;goto B713168;
case 0x71316f:c.instructions+=563;goto B71316f;
case 0x713175:c.instructions+=562;goto B713175;
case 0x71317b:c.instructions+=561;goto B71317b;
case 0x713182:c.instructions+=560;goto B713182;
case 0x713189:c.instructions+=559;goto B713189;
case 0x71318f:c.instructions+=558;goto B71318f;
case 0x713195:c.instructions+=557;goto B713195;
case 0x71319c:c.instructions+=556;goto B71319c;
case 0x7131a2:c.instructions+=555;goto B7131a2;
case 0x7131a8:c.instructions+=554;goto B7131a8;
case 0x7131af:c.instructions+=553;goto B7131af;
case 0x7131b5:c.instructions+=552;goto B7131b5;
case 0x7131bc:c.instructions+=551;goto B7131bc;
case 0x7131c3:c.instructions+=550;goto B7131c3;
case 0x7131c9:c.instructions+=549;goto B7131c9;
case 0x7131d0:c.instructions+=548;goto B7131d0;
case 0x7131d7:c.instructions+=547;goto B7131d7;
case 0x7131dd:c.instructions+=546;goto B7131dd;
case 0x7131e4:c.instructions+=545;goto B7131e4;
case 0x7131eb:c.instructions+=544;goto B7131eb;
case 0x7131f1:c.instructions+=543;goto B7131f1;
case 0x7131f8:c.instructions+=542;goto B7131f8;
case 0x7131ff:c.instructions+=541;goto B7131ff;
case 0x713206:c.instructions+=540;goto B713206;
case 0x71320d:c.instructions+=539;goto B71320d;
case 0x713214:c.instructions+=538;goto B713214;
case 0x71321a:c.instructions+=537;goto B71321a;
case 0x713220:c.instructions+=536;goto B713220;
case 0x713227:c.instructions+=535;goto B713227;
case 0x71322e:c.instructions+=534;goto B71322e;
case 0x713235:c.instructions+=533;goto B713235;
case 0x71323c:c.instructions+=532;goto B71323c;
case 0x713243:c.instructions+=531;goto B713243;
case 0x71324a:c.instructions+=530;goto B71324a;
case 0x713250:c.instructions+=529;goto B713250;
case 0x713257:c.instructions+=528;goto B713257;
case 0x71325e:c.instructions+=527;goto B71325e;
case 0x713265:c.instructions+=526;goto B713265;
case 0x71326b:c.instructions+=525;goto B71326b;
case 0x713272:c.instructions+=524;goto B713272;
case 0x713278:c.instructions+=523;goto B713278;
case 0x71327f:c.instructions+=522;goto B71327f;
case 0x713285:c.instructions+=521;goto B713285;
case 0x71328b:c.instructions+=520;goto B71328b;
case 0x713291:c.instructions+=519;goto B713291;
case 0x713298:c.instructions+=518;goto B713298;
case 0x71329f:c.instructions+=517;goto B71329f;
case 0x7132a6:c.instructions+=516;goto B7132a6;
case 0x7132ac:c.instructions+=515;goto B7132ac;
case 0x7132b3:c.instructions+=514;goto B7132b3;
case 0x7132b9:c.instructions+=513;goto B7132b9;
case 0x7132c0:c.instructions+=512;goto B7132c0;
case 0x7132c7:c.instructions+=511;goto B7132c7;
case 0x7132cd:c.instructions+=510;goto B7132cd;
case 0x7132d4:c.instructions+=509;goto B7132d4;
case 0x7132da:c.instructions+=508;goto B7132da;
case 0x7132e1:c.instructions+=507;goto B7132e1;
case 0x7132e8:c.instructions+=506;goto B7132e8;
case 0x7132ef:c.instructions+=505;goto B7132ef;
case 0x7132f5:c.instructions+=504;goto B7132f5;
case 0x7132fb:c.instructions+=503;goto B7132fb;
case 0x713301:c.instructions+=502;goto B713301;
case 0x713307:c.instructions+=501;goto B713307;
case 0x71330e:c.instructions+=500;goto B71330e;
case 0x713314:c.instructions+=499;goto B713314;
case 0x71331a:c.instructions+=498;goto B71331a;
case 0x713320:c.instructions+=497;goto B713320;
case 0x713327:c.instructions+=496;goto B713327;
case 0x71332d:c.instructions+=495;goto B71332d;
case 0x713334:c.instructions+=494;goto B713334;
case 0x71333a:c.instructions+=493;goto B71333a;
case 0x713341:c.instructions+=492;goto B713341;
case 0x713348:c.instructions+=491;goto B713348;
case 0x71334f:c.instructions+=490;goto B71334f;
case 0x713355:c.instructions+=489;goto B713355;
case 0x71335b:c.instructions+=488;goto B71335b;
case 0x713362:c.instructions+=487;goto B713362;
case 0x713369:c.instructions+=486;goto B713369;
case 0x713370:c.instructions+=485;goto B713370;
case 0x713376:c.instructions+=484;goto B713376;
case 0x71337d:c.instructions+=483;goto B71337d;
case 0x713383:c.instructions+=482;goto B713383;
case 0x71338a:c.instructions+=481;goto B71338a;
case 0x713391:c.instructions+=480;goto B713391;
case 0x713398:c.instructions+=479;goto B713398;
case 0x71339f:c.instructions+=478;goto B71339f;
case 0x7133a6:c.instructions+=477;goto B7133a6;
case 0x7133ad:c.instructions+=476;goto B7133ad;
case 0x7133b4:c.instructions+=475;goto B7133b4;
case 0x7133bb:c.instructions+=474;goto B7133bb;
case 0x7133c2:c.instructions+=473;goto B7133c2;
case 0x7133c8:c.instructions+=472;goto B7133c8;
case 0x7133cf:c.instructions+=471;goto B7133cf;
case 0x7133d5:c.instructions+=470;goto B7133d5;
case 0x7133db:c.instructions+=469;goto B7133db;
case 0x7133e2:c.instructions+=468;goto B7133e2;
case 0x7133e9:c.instructions+=467;goto B7133e9;
case 0x7133f0:c.instructions+=466;goto B7133f0;
case 0x7133f7:c.instructions+=465;goto B7133f7;
case 0x7133fe:c.instructions+=464;goto B7133fe;
case 0x713405:c.instructions+=463;goto B713405;
case 0x71340b:c.instructions+=462;goto B71340b;
case 0x713412:c.instructions+=461;goto B713412;
case 0x713419:c.instructions+=460;goto B713419;
case 0x713420:c.instructions+=459;goto B713420;
case 0x713427:c.instructions+=458;goto B713427;
case 0x71342e:c.instructions+=457;goto B71342e;
case 0x713434:c.instructions+=456;goto B713434;
case 0x71343b:c.instructions+=455;goto B71343b;
case 0x713441:c.instructions+=454;goto B713441;
case 0x713448:c.instructions+=453;goto B713448;
case 0x71344f:c.instructions+=452;goto B71344f;
case 0x713455:c.instructions+=451;goto B713455;
case 0x71345c:c.instructions+=450;goto B71345c;
case 0x713463:c.instructions+=449;goto B713463;
case 0x713469:c.instructions+=448;goto B713469;
case 0x713470:c.instructions+=447;goto B713470;
case 0x713476:c.instructions+=446;goto B713476;
case 0x71347c:c.instructions+=445;goto B71347c;
case 0x713483:c.instructions+=444;goto B713483;
case 0x713489:c.instructions+=443;goto B713489;
case 0x71348f:c.instructions+=442;goto B71348f;
case 0x713495:c.instructions+=441;goto B713495;
case 0x71349b:c.instructions+=440;goto B71349b;
case 0x7134a1:c.instructions+=439;goto B7134a1;
case 0x7134a8:c.instructions+=438;goto B7134a8;
case 0x7134af:c.instructions+=437;goto B7134af;
case 0x7134b5:c.instructions+=436;goto B7134b5;
case 0x7134bc:c.instructions+=435;goto B7134bc;
case 0x7134c3:c.instructions+=434;goto B7134c3;
case 0x7134ca:c.instructions+=433;goto B7134ca;
case 0x7134d1:c.instructions+=432;goto B7134d1;
case 0x7134d7:c.instructions+=431;goto B7134d7;
case 0x7134de:c.instructions+=430;goto B7134de;
case 0x7134e5:c.instructions+=429;goto B7134e5;
case 0x7134eb:c.instructions+=428;goto B7134eb;
case 0x7134f2:c.instructions+=427;goto B7134f2;
case 0x7134f9:c.instructions+=426;goto B7134f9;
case 0x713500:c.instructions+=425;goto B713500;
case 0x713507:c.instructions+=424;goto B713507;
case 0x71350d:c.instructions+=423;goto B71350d;
case 0x713514:c.instructions+=422;goto B713514;
case 0x71351b:c.instructions+=421;goto B71351b;
case 0x713522:c.instructions+=420;goto B713522;
case 0x713528:c.instructions+=419;goto B713528;
case 0x71352e:c.instructions+=418;goto B71352e;
case 0x713535:c.instructions+=417;goto B713535;
case 0x71353b:c.instructions+=416;goto B71353b;
case 0x713541:c.instructions+=415;goto B713541;
case 0x713548:c.instructions+=414;goto B713548;
case 0x71354f:c.instructions+=413;goto B71354f;
case 0x713555:c.instructions+=412;goto B713555;
case 0x71355b:c.instructions+=411;goto B71355b;
case 0x713561:c.instructions+=410;goto B713561;
case 0x713568:c.instructions+=409;goto B713568;
case 0x71356f:c.instructions+=408;goto B71356f;
case 0x713576:c.instructions+=407;goto B713576;
case 0x71357d:c.instructions+=406;goto B71357d;
case 0x713584:c.instructions+=405;goto B713584;
case 0x71358a:c.instructions+=404;goto B71358a;
case 0x713590:c.instructions+=403;goto B713590;
case 0x713597:c.instructions+=402;goto B713597;
case 0x71359e:c.instructions+=401;goto B71359e;
case 0x7135a4:c.instructions+=400;goto B7135a4;
case 0x7135ab:c.instructions+=399;goto B7135ab;
case 0x7135b1:c.instructions+=398;goto B7135b1;
case 0x7135b8:c.instructions+=397;goto B7135b8;
case 0x7135bf:c.instructions+=396;goto B7135bf;
case 0x7135c6:c.instructions+=395;goto B7135c6;
case 0x7135cc:c.instructions+=394;goto B7135cc;
case 0x7135d2:c.instructions+=393;goto B7135d2;
case 0x7135d8:c.instructions+=392;goto B7135d8;
case 0x7135df:c.instructions+=391;goto B7135df;
case 0x7135e6:c.instructions+=390;goto B7135e6;
case 0x7135ed:c.instructions+=389;goto B7135ed;
case 0x7135f4:c.instructions+=388;goto B7135f4;
case 0x7135fb:c.instructions+=387;goto B7135fb;
case 0x713602:c.instructions+=386;goto B713602;
case 0x713609:c.instructions+=385;goto B713609;
case 0x71360f:c.instructions+=384;goto B71360f;
case 0x713616:c.instructions+=383;goto B713616;
case 0x71361d:c.instructions+=382;goto B71361d;
case 0x713624:c.instructions+=381;goto B713624;
case 0x71362b:c.instructions+=380;goto B71362b;
case 0x713632:c.instructions+=379;goto B713632;
case 0x713639:c.instructions+=378;goto B713639;
case 0x713640:c.instructions+=377;goto B713640;
case 0x713646:c.instructions+=376;goto B713646;
case 0x71364c:c.instructions+=375;goto B71364c;
case 0x713652:c.instructions+=374;goto B713652;
case 0x713659:c.instructions+=373;goto B713659;
case 0x713660:c.instructions+=372;goto B713660;
case 0x713667:c.instructions+=371;goto B713667;
case 0x71366e:c.instructions+=370;goto B71366e;
case 0x713675:c.instructions+=369;goto B713675;
case 0x71367c:c.instructions+=368;goto B71367c;
case 0x713682:c.instructions+=367;goto B713682;
case 0x713689:c.instructions+=366;goto B713689;
case 0x713690:c.instructions+=365;goto B713690;
case 0x713697:c.instructions+=364;goto B713697;
case 0x71369e:c.instructions+=363;goto B71369e;
case 0x7136a4:c.instructions+=362;goto B7136a4;
case 0x7136aa:c.instructions+=361;goto B7136aa;
case 0x7136b0:c.instructions+=360;goto B7136b0;
case 0x7136b6:c.instructions+=359;goto B7136b6;
case 0x7136bc:c.instructions+=358;goto B7136bc;
case 0x7136c2:c.instructions+=357;goto B7136c2;
case 0x7136c9:c.instructions+=356;goto B7136c9;
case 0x7136cf:c.instructions+=355;goto B7136cf;
case 0x7136d6:c.instructions+=354;goto B7136d6;
case 0x7136dc:c.instructions+=353;goto B7136dc;
case 0x7136e3:c.instructions+=352;goto B7136e3;
case 0x7136ea:c.instructions+=351;goto B7136ea;
case 0x7136f1:c.instructions+=350;goto B7136f1;
case 0x7136f8:c.instructions+=349;goto B7136f8;
case 0x7136fe:c.instructions+=348;goto B7136fe;
case 0x713705:c.instructions+=347;goto B713705;
case 0x71370c:c.instructions+=346;goto B71370c;
case 0x713713:c.instructions+=345;goto B713713;
case 0x71371a:c.instructions+=344;goto B71371a;
case 0x713720:c.instructions+=343;goto B713720;
case 0x713727:c.instructions+=342;goto B713727;
case 0x71372e:c.instructions+=341;goto B71372e;
case 0x713735:c.instructions+=340;goto B713735;
case 0x71373c:c.instructions+=339;goto B71373c;
case 0x713743:c.instructions+=338;goto B713743;
case 0x713749:c.instructions+=337;goto B713749;
case 0x713750:c.instructions+=336;goto B713750;
case 0x713756:c.instructions+=335;goto B713756;
case 0x71375c:c.instructions+=334;goto B71375c;
case 0x713762:c.instructions+=333;goto B713762;
case 0x713769:c.instructions+=332;goto B713769;
case 0x71376f:c.instructions+=331;goto B71376f;
case 0x713776:c.instructions+=330;goto B713776;
case 0x71377d:c.instructions+=329;goto B71377d;
case 0x713783:c.instructions+=328;goto B713783;
case 0x713789:c.instructions+=327;goto B713789;
case 0x71378f:c.instructions+=326;goto B71378f;
case 0x713796:c.instructions+=325;goto B713796;
case 0x71379c:c.instructions+=324;goto B71379c;
case 0x7137a2:c.instructions+=323;goto B7137a2;
case 0x7137a9:c.instructions+=322;goto B7137a9;
case 0x7137af:c.instructions+=321;goto B7137af;
case 0x7137b6:c.instructions+=320;goto B7137b6;
case 0x7137bc:c.instructions+=319;goto B7137bc;
case 0x7137c3:c.instructions+=318;goto B7137c3;
case 0x7137ca:c.instructions+=317;goto B7137ca;
case 0x7137d1:c.instructions+=316;goto B7137d1;
case 0x7137d8:c.instructions+=315;goto B7137d8;
case 0x7137df:c.instructions+=314;goto B7137df;
case 0x7137e5:c.instructions+=313;goto B7137e5;
case 0x7137ec:c.instructions+=312;goto B7137ec;
case 0x7137f2:c.instructions+=311;goto B7137f2;
case 0x7137f8:c.instructions+=310;goto B7137f8;
case 0x7137ff:c.instructions+=309;goto B7137ff;
case 0x713805:c.instructions+=308;goto B713805;
case 0x71380b:c.instructions+=307;goto B71380b;
case 0x713812:c.instructions+=306;goto B713812;
case 0x713819:c.instructions+=305;goto B713819;
case 0x713820:c.instructions+=304;goto B713820;
case 0x713826:c.instructions+=303;goto B713826;
case 0x71382d:c.instructions+=302;goto B71382d;
case 0x713834:c.instructions+=301;goto B713834;
case 0x71383b:c.instructions+=300;goto B71383b;
case 0x713842:c.instructions+=299;goto B713842;
case 0x713849:c.instructions+=298;goto B713849;
case 0x71384f:c.instructions+=297;goto B71384f;
case 0x713856:c.instructions+=296;goto B713856;
case 0x71385d:c.instructions+=295;goto B71385d;
case 0x713864:c.instructions+=294;goto B713864;
case 0x71386b:c.instructions+=293;goto B71386b;
case 0x713872:c.instructions+=292;goto B713872;
case 0x713878:c.instructions+=291;goto B713878;
case 0x71387f:c.instructions+=290;goto B71387f;
case 0x713886:c.instructions+=289;goto B713886;
case 0x71388d:c.instructions+=288;goto B71388d;
case 0x713894:c.instructions+=287;goto B713894;
case 0x71389b:c.instructions+=286;goto B71389b;
case 0x7138a2:c.instructions+=285;goto B7138a2;
case 0x7138a8:c.instructions+=284;goto B7138a8;
case 0x7138af:c.instructions+=283;goto B7138af;
case 0x7138b6:c.instructions+=282;goto B7138b6;
case 0x7138bd:c.instructions+=281;goto B7138bd;
case 0x7138c3:c.instructions+=280;goto B7138c3;
case 0x7138c9:c.instructions+=279;goto B7138c9;
case 0x7138cf:c.instructions+=278;goto B7138cf;
case 0x7138d6:c.instructions+=277;goto B7138d6;
case 0x7138dd:c.instructions+=276;goto B7138dd;
case 0x7138e4:c.instructions+=275;goto B7138e4;
case 0x7138ea:c.instructions+=274;goto B7138ea;
case 0x7138f1:c.instructions+=273;goto B7138f1;
case 0x7138f8:c.instructions+=272;goto B7138f8;
case 0x7138ff:c.instructions+=271;goto B7138ff;
case 0x713906:c.instructions+=270;goto B713906;
case 0x71390d:c.instructions+=269;goto B71390d;
case 0x713913:c.instructions+=268;goto B713913;
case 0x713919:c.instructions+=267;goto B713919;
case 0x713920:c.instructions+=266;goto B713920;
case 0x713927:c.instructions+=265;goto B713927;
case 0x71392e:c.instructions+=264;goto B71392e;
case 0x713934:c.instructions+=263;goto B713934;
case 0x71393a:c.instructions+=262;goto B71393a;
case 0x713940:c.instructions+=261;goto B713940;
case 0x713946:c.instructions+=260;goto B713946;
case 0x71394c:c.instructions+=259;goto B71394c;
case 0x713952:c.instructions+=258;goto B713952;
case 0x713959:c.instructions+=257;goto B713959;
case 0x713960:c.instructions+=256;goto B713960;
case 0x713967:c.instructions+=255;goto B713967;
case 0x71396d:c.instructions+=254;goto B71396d;
case 0x713974:c.instructions+=253;goto B713974;
case 0x71397b:c.instructions+=252;goto B71397b;
case 0x713982:c.instructions+=251;goto B713982;
case 0x713989:c.instructions+=250;goto B713989;
case 0x713990:c.instructions+=249;goto B713990;
case 0x713996:c.instructions+=248;goto B713996;
case 0x71399d:c.instructions+=247;goto B71399d;
case 0x7139a3:c.instructions+=246;goto B7139a3;
case 0x7139aa:c.instructions+=245;goto B7139aa;
case 0x7139b0:c.instructions+=244;goto B7139b0;
case 0x7139b6:c.instructions+=243;goto B7139b6;
case 0x7139bc:c.instructions+=242;goto B7139bc;
case 0x7139c3:c.instructions+=241;goto B7139c3;
case 0x7139ca:c.instructions+=240;goto B7139ca;
case 0x7139d1:c.instructions+=239;goto B7139d1;
case 0x7139d7:c.instructions+=238;goto B7139d7;
case 0x7139dd:c.instructions+=237;goto B7139dd;
case 0x7139e4:c.instructions+=236;goto B7139e4;
case 0x7139ea:c.instructions+=235;goto B7139ea;
case 0x7139f1:c.instructions+=234;goto B7139f1;
case 0x7139f7:c.instructions+=233;goto B7139f7;
case 0x7139fe:c.instructions+=232;goto B7139fe;
case 0x713a05:c.instructions+=231;goto B713a05;
case 0x713a0c:c.instructions+=230;goto B713a0c;
case 0x713a13:c.instructions+=229;goto B713a13;
case 0x713a1a:c.instructions+=228;goto B713a1a;
case 0x713a21:c.instructions+=227;goto B713a21;
case 0x713a27:c.instructions+=226;goto B713a27;
case 0x713a2e:c.instructions+=225;goto B713a2e;
case 0x713a34:c.instructions+=224;goto B713a34;
case 0x713a3a:c.instructions+=223;goto B713a3a;
case 0x713a41:c.instructions+=222;goto B713a41;
case 0x713a48:c.instructions+=221;goto B713a48;
case 0x713a4e:c.instructions+=220;goto B713a4e;
case 0x713a55:c.instructions+=219;goto B713a55;
case 0x713a5c:c.instructions+=218;goto B713a5c;
case 0x713a62:c.instructions+=217;goto B713a62;
case 0x713a68:c.instructions+=216;goto B713a68;
case 0x713a6f:c.instructions+=215;goto B713a6f;
case 0x713a75:c.instructions+=214;goto B713a75;
case 0x713a7c:c.instructions+=213;goto B713a7c;
case 0x713a82:c.instructions+=212;goto B713a82;
case 0x713a88:c.instructions+=211;goto B713a88;
case 0x713a8e:c.instructions+=210;goto B713a8e;
case 0x713a94:c.instructions+=209;goto B713a94;
case 0x713a9b:c.instructions+=208;goto B713a9b;
case 0x713aa2:c.instructions+=207;goto B713aa2;
case 0x713aa8:c.instructions+=206;goto B713aa8;
case 0x713aaf:c.instructions+=205;goto B713aaf;
case 0x713ab6:c.instructions+=204;goto B713ab6;
case 0x713abd:c.instructions+=203;goto B713abd;
case 0x713ac4:c.instructions+=202;goto B713ac4;
case 0x713acb:c.instructions+=201;goto B713acb;
case 0x713ad1:c.instructions+=200;goto B713ad1;
case 0x713ad8:c.instructions+=199;goto B713ad8;
case 0x713ade:c.instructions+=198;goto B713ade;
case 0x713ae4:c.instructions+=197;goto B713ae4;
case 0x713aeb:c.instructions+=196;goto B713aeb;
case 0x713af1:c.instructions+=195;goto B713af1;
case 0x713af8:c.instructions+=194;goto B713af8;
case 0x713aff:c.instructions+=193;goto B713aff;
case 0x713b06:c.instructions+=192;goto B713b06;
case 0x713b0d:c.instructions+=191;goto B713b0d;
case 0x713b14:c.instructions+=190;goto B713b14;
case 0x713b1b:c.instructions+=189;goto B713b1b;
case 0x713b22:c.instructions+=188;goto B713b22;
case 0x713b29:c.instructions+=187;goto B713b29;
case 0x713b2f:c.instructions+=186;goto B713b2f;
case 0x713b36:c.instructions+=185;goto B713b36;
case 0x713b3d:c.instructions+=184;goto B713b3d;
case 0x713b44:c.instructions+=183;goto B713b44;
case 0x713b4b:c.instructions+=182;goto B713b4b;
case 0x713b52:c.instructions+=181;goto B713b52;
case 0x713b59:c.instructions+=180;goto B713b59;
case 0x713b60:c.instructions+=179;goto B713b60;
case 0x713b67:c.instructions+=178;goto B713b67;
case 0x713b6e:c.instructions+=177;goto B713b6e;
case 0x713b75:c.instructions+=176;goto B713b75;
case 0x713b7b:c.instructions+=175;goto B713b7b;
case 0x713b82:c.instructions+=174;goto B713b82;
case 0x713b89:c.instructions+=173;goto B713b89;
case 0x713b8f:c.instructions+=172;goto B713b8f;
case 0x713b96:c.instructions+=171;goto B713b96;
case 0x713b9d:c.instructions+=170;goto B713b9d;
case 0x713ba4:c.instructions+=169;goto B713ba4;
case 0x713baa:c.instructions+=168;goto B713baa;
case 0x713bb1:c.instructions+=167;goto B713bb1;
case 0x713bb7:c.instructions+=166;goto B713bb7;
case 0x713bbe:c.instructions+=165;goto B713bbe;
case 0x713bc4:c.instructions+=164;goto B713bc4;
case 0x713bcb:c.instructions+=163;goto B713bcb;
case 0x713bd1:c.instructions+=162;goto B713bd1;
case 0x713bd7:c.instructions+=161;goto B713bd7;
case 0x713bde:c.instructions+=160;goto B713bde;
case 0x713be5:c.instructions+=159;goto B713be5;
case 0x713bec:c.instructions+=158;goto B713bec;
case 0x713bf2:c.instructions+=157;goto B713bf2;
case 0x713bf9:c.instructions+=156;goto B713bf9;
case 0x713c00:c.instructions+=155;goto B713c00;
case 0x713c07:c.instructions+=154;goto B713c07;
case 0x713c0e:c.instructions+=153;goto B713c0e;
case 0x713c15:c.instructions+=152;goto B713c15;
case 0x713c1c:c.instructions+=151;goto B713c1c;
case 0x713c22:c.instructions+=150;goto B713c22;
case 0x713c28:c.instructions+=149;goto B713c28;
case 0x713c2f:c.instructions+=148;goto B713c2f;
case 0x713c36:c.instructions+=147;goto B713c36;
case 0x713c3d:c.instructions+=146;goto B713c3d;
case 0x713c43:c.instructions+=145;goto B713c43;
case 0x713c49:c.instructions+=144;goto B713c49;
case 0x713c50:c.instructions+=143;goto B713c50;
case 0x713c57:c.instructions+=142;goto B713c57;
case 0x713c5d:c.instructions+=141;goto B713c5d;
case 0x713c64:c.instructions+=140;goto B713c64;
case 0x713c6a:c.instructions+=139;goto B713c6a;
case 0x713c71:c.instructions+=138;goto B713c71;
case 0x713c78:c.instructions+=137;goto B713c78;
case 0x713c7f:c.instructions+=136;goto B713c7f;
case 0x713c86:c.instructions+=135;goto B713c86;
case 0x713c8d:c.instructions+=134;goto B713c8d;
case 0x713c94:c.instructions+=133;goto B713c94;
case 0x713c9b:c.instructions+=132;goto B713c9b;
case 0x713ca2:c.instructions+=131;goto B713ca2;
case 0x713ca9:c.instructions+=130;goto B713ca9;
case 0x713caf:c.instructions+=129;goto B713caf;
case 0x713cb6:c.instructions+=128;goto B713cb6;
case 0x713cbd:c.instructions+=127;goto B713cbd;
case 0x713cc4:c.instructions+=126;goto B713cc4;
case 0x713ccb:c.instructions+=125;goto B713ccb;
case 0x713cd1:c.instructions+=124;goto B713cd1;
case 0x713cd7:c.instructions+=123;goto B713cd7;
case 0x713cde:c.instructions+=122;goto B713cde;
case 0x713ce4:c.instructions+=121;goto B713ce4;
case 0x713cea:c.instructions+=120;goto B713cea;
case 0x713cf0:c.instructions+=119;goto B713cf0;
case 0x713cf6:c.instructions+=118;goto B713cf6;
case 0x713cfc:c.instructions+=117;goto B713cfc;
case 0x713d02:c.instructions+=116;goto B713d02;
case 0x713d09:c.instructions+=115;goto B713d09;
case 0x713d10:c.instructions+=114;goto B713d10;
case 0x713d17:c.instructions+=113;goto B713d17;
case 0x713d1e:c.instructions+=112;goto B713d1e;
case 0x713d24:c.instructions+=111;goto B713d24;
case 0x713d2a:c.instructions+=110;goto B713d2a;
case 0x713d31:c.instructions+=109;goto B713d31;
case 0x713d38:c.instructions+=108;goto B713d38;
case 0x713d3f:c.instructions+=107;goto B713d3f;
case 0x713d46:c.instructions+=106;goto B713d46;
case 0x713d4c:c.instructions+=105;goto B713d4c;
case 0x713d53:c.instructions+=104;goto B713d53;
case 0x713d5a:c.instructions+=103;goto B713d5a;
case 0x713d60:c.instructions+=102;goto B713d60;
case 0x713d67:c.instructions+=101;goto B713d67;
case 0x713d6d:c.instructions+=100;goto B713d6d;
case 0x713d74:c.instructions+=99;goto B713d74;
case 0x713d7a:c.instructions+=98;goto B713d7a;
case 0x713d81:c.instructions+=97;goto B713d81;
case 0x713d88:c.instructions+=96;goto B713d88;
case 0x713d8f:c.instructions+=95;goto B713d8f;
case 0x713d95:c.instructions+=94;goto B713d95;
case 0x713d9c:c.instructions+=93;goto B713d9c;
case 0x713da3:c.instructions+=92;goto B713da3;
case 0x713daa:c.instructions+=91;goto B713daa;
case 0x713db0:c.instructions+=90;goto B713db0;
case 0x713db6:c.instructions+=89;goto B713db6;
case 0x713dbd:c.instructions+=88;goto B713dbd;
case 0x713dc4:c.instructions+=87;goto B713dc4;
case 0x713dcb:c.instructions+=86;goto B713dcb;
case 0x713dd1:c.instructions+=85;goto B713dd1;
case 0x713dd7:c.instructions+=84;goto B713dd7;
case 0x713ddd:c.instructions+=83;goto B713ddd;
case 0x713de4:c.instructions+=82;goto B713de4;
case 0x713deb:c.instructions+=81;goto B713deb;
case 0x713df2:c.instructions+=80;goto B713df2;
case 0x713df9:c.instructions+=79;goto B713df9;
case 0x713dff:c.instructions+=78;goto B713dff;
case 0x713e05:c.instructions+=77;goto B713e05;
case 0x713e0c:c.instructions+=76;goto B713e0c;
case 0x713e12:c.instructions+=75;goto B713e12;
case 0x713e18:c.instructions+=74;goto B713e18;
case 0x713e1e:c.instructions+=73;goto B713e1e;
case 0x713e24:c.instructions+=72;goto B713e24;
case 0x713e2b:c.instructions+=71;goto B713e2b;
case 0x713e32:c.instructions+=70;goto B713e32;
case 0x713e39:c.instructions+=69;goto B713e39;
case 0x713e40:c.instructions+=68;goto B713e40;
case 0x713e47:c.instructions+=67;goto B713e47;
case 0x713e4d:c.instructions+=66;goto B713e4d;
case 0x713e53:c.instructions+=65;goto B713e53;
case 0x713e5a:c.instructions+=64;goto B713e5a;
case 0x713e61:c.instructions+=63;goto B713e61;
case 0x713e67:c.instructions+=62;goto B713e67;
case 0x713e6d:c.instructions+=61;goto B713e6d;
case 0x713e74:c.instructions+=60;goto B713e74;
case 0x713e7b:c.instructions+=59;goto B713e7b;
case 0x713e81:c.instructions+=58;goto B713e81;
case 0x713e87:c.instructions+=57;goto B713e87;
case 0x713e8e:c.instructions+=56;goto B713e8e;
case 0x713e94:c.instructions+=55;goto B713e94;
case 0x713e9b:c.instructions+=54;goto B713e9b;
case 0x713ea2:c.instructions+=53;goto B713ea2;
case 0x713ea9:c.instructions+=52;goto B713ea9;
case 0x713eb0:c.instructions+=51;goto B713eb0;
case 0x713eb7:c.instructions+=50;goto B713eb7;
case 0x713ebd:c.instructions+=49;goto B713ebd;
case 0x713ec3:c.instructions+=48;goto B713ec3;
case 0x713eca:c.instructions+=47;goto B713eca;
case 0x713ed1:c.instructions+=46;goto B713ed1;
case 0x713ed7:c.instructions+=45;goto B713ed7;
case 0x713ede:c.instructions+=44;goto B713ede;
case 0x713ee5:c.instructions+=43;goto B713ee5;
case 0x713eec:c.instructions+=42;goto B713eec;
case 0x713ef3:c.instructions+=41;goto B713ef3;
case 0x713efa:c.instructions+=40;goto B713efa;
case 0x713f01:c.instructions+=39;goto B713f01;
case 0x713f08:c.instructions+=38;goto B713f08;
case 0x713f0e:c.instructions+=37;goto B713f0e;
case 0x713f15:c.instructions+=36;goto B713f15;
case 0x713f1b:c.instructions+=35;goto B713f1b;
case 0x713f22:c.instructions+=34;goto B713f22;
case 0x713f29:c.instructions+=33;goto B713f29;
case 0x713f2f:c.instructions+=32;goto B713f2f;
case 0x713f36:c.instructions+=31;goto B713f36;
case 0x713f3d:c.instructions+=30;goto B713f3d;
case 0x713f43:c.instructions+=29;goto B713f43;
case 0x713f4a:c.instructions+=28;goto B713f4a;
case 0x713f51:c.instructions+=27;goto B713f51;
case 0x713f57:c.instructions+=26;goto B713f57;
case 0x713f5d:c.instructions+=25;goto B713f5d;
case 0x713f64:c.instructions+=24;goto B713f64;
case 0x713f6b:c.instructions+=23;goto B713f6b;
case 0x713f72:c.instructions+=22;goto B713f72;
case 0x713f79:c.instructions+=21;goto B713f79;
case 0x713f7f:c.instructions+=20;goto B713f7f;
case 0x713f86:c.instructions+=19;goto B713f86;
case 0x713f8c:c.instructions+=18;goto B713f8c;
case 0x713f92:c.instructions+=17;goto B713f92;
case 0x713f98:c.instructions+=16;goto B713f98;
case 0x713f9f:c.instructions+=15;goto B713f9f;
case 0x713fa5:c.instructions+=14;goto B713fa5;
case 0x713fab:c.instructions+=13;goto B713fab;
case 0x713fb2:c.instructions+=12;goto B713fb2;
case 0x713fb9:c.instructions+=11;goto B713fb9;
case 0x713fbf:c.instructions+=10;goto B713fbf;
case 0x713fc5:c.instructions+=9;goto B713fc5;
case 0x713fcc:c.instructions+=8;goto B713fcc;
case 0x713fd3:c.instructions+=7;goto B713fd3;
case 0x713fda:c.instructions+=6;goto B713fda;
case 0x713fe1:c.instructions+=5;goto B713fe1;
case 0x713fe8:c.instructions+=4;goto B713fe8;
case 0x713fee:c.instructions+=3;goto B713fee;
case 0x713ff5:c.instructions+=2;goto B713ff5;
case 0x713ffb:c.instructions+=1;goto B713ffb;
default:missing_instruction(c.pc);}
B713004:L713004:{c.instructions+=618;NFSU2_TR(0x713004);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff801ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71300a:{NFSU2_TR(0x71300a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff802ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713010:{NFSU2_TR(0x713010);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff803ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713016:{NFSU2_TR(0x713016);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff804ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71301d:{NFSU2_TR(0x71301d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff805ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713024:{NFSU2_TR(0x713024);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff806ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71302b:{NFSU2_TR(0x71302b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff807ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713032:{NFSU2_TR(0x713032);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff808ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713038:{NFSU2_TR(0x713038);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff809ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71303e:{NFSU2_TR(0x71303e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713045:{NFSU2_TR(0x713045);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71304c:{NFSU2_TR(0x71304c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713053:{NFSU2_TR(0x713053);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71305a:{NFSU2_TR(0x71305a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713060:{NFSU2_TR(0x713060);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff80full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713066:{NFSU2_TR(0x713066);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff810ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71306d:{NFSU2_TR(0x71306d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff811ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713074:{NFSU2_TR(0x713074);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff812ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71307b:{NFSU2_TR(0x71307b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff813ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713082:{NFSU2_TR(0x713082);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff814ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713088:{NFSU2_TR(0x713088);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff815ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71308f:{NFSU2_TR(0x71308f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff816ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713095:{NFSU2_TR(0x713095);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff817ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71309b:{NFSU2_TR(0x71309b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff818ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130a2:{NFSU2_TR(0x7130a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff819ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7130a8:{NFSU2_TR(0x7130a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130af:{NFSU2_TR(0x7130af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130b6:{NFSU2_TR(0x7130b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130bd:{NFSU2_TR(0x7130bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130c4:{NFSU2_TR(0x7130c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130cb:{NFSU2_TR(0x7130cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff81full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7130d1:{NFSU2_TR(0x7130d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff820ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7130d7:{NFSU2_TR(0x7130d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff821ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7130dd:{NFSU2_TR(0x7130dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff822ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130e4:{NFSU2_TR(0x7130e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff823ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130eb:{NFSU2_TR(0x7130eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff824ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7130f1:{NFSU2_TR(0x7130f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff825ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130f8:{NFSU2_TR(0x7130f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff826ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7130ff:{NFSU2_TR(0x7130ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff827ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713106:{NFSU2_TR(0x713106);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff828ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71310d:{NFSU2_TR(0x71310d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff829ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713114:{NFSU2_TR(0x713114);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71311a:{NFSU2_TR(0x71311a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713120:{NFSU2_TR(0x713120);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713126:{NFSU2_TR(0x713126);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71312d:{NFSU2_TR(0x71312d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713134:{NFSU2_TR(0x713134);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff82full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71313b:{NFSU2_TR(0x71313b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff830ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713141:{NFSU2_TR(0x713141);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff831ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713147:{NFSU2_TR(0x713147);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff832ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71314e:{NFSU2_TR(0x71314e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff833ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713154:{NFSU2_TR(0x713154);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff834ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71315a:{NFSU2_TR(0x71315a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff835ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713161:{NFSU2_TR(0x713161);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff836ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713168:{NFSU2_TR(0x713168);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff837ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71316f:{NFSU2_TR(0x71316f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff838ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713175:{NFSU2_TR(0x713175);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff839ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71317b:{NFSU2_TR(0x71317b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713182:{NFSU2_TR(0x713182);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713189:{NFSU2_TR(0x713189);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71318f:{NFSU2_TR(0x71318f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713195:{NFSU2_TR(0x713195);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71319c:{NFSU2_TR(0x71319c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff83full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131a2:{NFSU2_TR(0x7131a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff840ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131a8:{NFSU2_TR(0x7131a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff841ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131af:{NFSU2_TR(0x7131af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff842ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131b5:{NFSU2_TR(0x7131b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff843ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131bc:{NFSU2_TR(0x7131bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff844ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131c3:{NFSU2_TR(0x7131c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff845ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131c9:{NFSU2_TR(0x7131c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff846ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131d0:{NFSU2_TR(0x7131d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff847ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131d7:{NFSU2_TR(0x7131d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff848ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131dd:{NFSU2_TR(0x7131dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff849ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131e4:{NFSU2_TR(0x7131e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131eb:{NFSU2_TR(0x7131eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7131f1:{NFSU2_TR(0x7131f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131f8:{NFSU2_TR(0x7131f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7131ff:{NFSU2_TR(0x7131ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713206:{NFSU2_TR(0x713206);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff84full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71320d:{NFSU2_TR(0x71320d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff850ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713214:{NFSU2_TR(0x713214);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff851ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71321a:{NFSU2_TR(0x71321a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff852ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713220:{NFSU2_TR(0x713220);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff853ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713227:{NFSU2_TR(0x713227);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff854ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71322e:{NFSU2_TR(0x71322e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff855ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713235:{NFSU2_TR(0x713235);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff856ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71323c:{NFSU2_TR(0x71323c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff857ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713243:{NFSU2_TR(0x713243);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff858ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71324a:{NFSU2_TR(0x71324a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff859ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713250:{NFSU2_TR(0x713250);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713257:{NFSU2_TR(0x713257);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71325e:{NFSU2_TR(0x71325e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713265:{NFSU2_TR(0x713265);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71326b:{NFSU2_TR(0x71326b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713272:{NFSU2_TR(0x713272);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff85full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713278:{NFSU2_TR(0x713278);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff860ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71327f:{NFSU2_TR(0x71327f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff861ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713285:{NFSU2_TR(0x713285);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff862ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71328b:{NFSU2_TR(0x71328b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff863ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713291:{NFSU2_TR(0x713291);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff864ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713298:{NFSU2_TR(0x713298);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff865ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71329f:{NFSU2_TR(0x71329f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff866ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132a6:{NFSU2_TR(0x7132a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff867ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132ac:{NFSU2_TR(0x7132ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff868ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132b3:{NFSU2_TR(0x7132b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff869ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132b9:{NFSU2_TR(0x7132b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132c0:{NFSU2_TR(0x7132c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132c7:{NFSU2_TR(0x7132c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132cd:{NFSU2_TR(0x7132cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132d4:{NFSU2_TR(0x7132d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132da:{NFSU2_TR(0x7132da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff86full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132e1:{NFSU2_TR(0x7132e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff870ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132e8:{NFSU2_TR(0x7132e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff871ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7132ef:{NFSU2_TR(0x7132ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff872ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132f5:{NFSU2_TR(0x7132f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff873ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7132fb:{NFSU2_TR(0x7132fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff874ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713301:{NFSU2_TR(0x713301);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff875ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713307:{NFSU2_TR(0x713307);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff876ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71330e:{NFSU2_TR(0x71330e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff877ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713314:{NFSU2_TR(0x713314);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff878ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71331a:{NFSU2_TR(0x71331a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff879ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713320:{NFSU2_TR(0x713320);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713327:{NFSU2_TR(0x713327);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71332d:{NFSU2_TR(0x71332d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713334:{NFSU2_TR(0x713334);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71333a:{NFSU2_TR(0x71333a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713341:{NFSU2_TR(0x713341);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff87full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713348:{NFSU2_TR(0x713348);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff880ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71334f:{NFSU2_TR(0x71334f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff881ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713355:{NFSU2_TR(0x713355);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff882ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71335b:{NFSU2_TR(0x71335b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff883ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713362:{NFSU2_TR(0x713362);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff884ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713369:{NFSU2_TR(0x713369);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff885ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713370:{NFSU2_TR(0x713370);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff886ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713376:{NFSU2_TR(0x713376);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff887ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71337d:{NFSU2_TR(0x71337d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff888ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713383:{NFSU2_TR(0x713383);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff889ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71338a:{NFSU2_TR(0x71338a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713391:{NFSU2_TR(0x713391);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713398:{NFSU2_TR(0x713398);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71339f:{NFSU2_TR(0x71339f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133a6:{NFSU2_TR(0x7133a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133ad:{NFSU2_TR(0x7133ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff88full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133b4:{NFSU2_TR(0x7133b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff890ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133bb:{NFSU2_TR(0x7133bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff891ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133c2:{NFSU2_TR(0x7133c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff892ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7133c8:{NFSU2_TR(0x7133c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff893ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133cf:{NFSU2_TR(0x7133cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff894ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7133d5:{NFSU2_TR(0x7133d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff895ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7133db:{NFSU2_TR(0x7133db);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff896ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133e2:{NFSU2_TR(0x7133e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff897ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133e9:{NFSU2_TR(0x7133e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff898ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133f0:{NFSU2_TR(0x7133f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff899ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133f7:{NFSU2_TR(0x7133f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7133fe:{NFSU2_TR(0x7133fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713405:{NFSU2_TR(0x713405);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71340b:{NFSU2_TR(0x71340b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713412:{NFSU2_TR(0x713412);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713419:{NFSU2_TR(0x713419);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff89full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713420:{NFSU2_TR(0x713420);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713427:{NFSU2_TR(0x713427);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a1ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71342e:{NFSU2_TR(0x71342e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713434:{NFSU2_TR(0x713434);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a3ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71343b:{NFSU2_TR(0x71343b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713441:{NFSU2_TR(0x713441);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a5ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713448:{NFSU2_TR(0x713448);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71344f:{NFSU2_TR(0x71344f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713455:{NFSU2_TR(0x713455);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71345c:{NFSU2_TR(0x71345c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8a9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713463:{NFSU2_TR(0x713463);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8aaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713469:{NFSU2_TR(0x713469);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8abull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713470:{NFSU2_TR(0x713470);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8acull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713476:{NFSU2_TR(0x713476);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8adull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71347c:{NFSU2_TR(0x71347c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8aeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713483:{NFSU2_TR(0x713483);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8afull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713489:{NFSU2_TR(0x713489);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71348f:{NFSU2_TR(0x71348f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713495:{NFSU2_TR(0x713495);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71349b:{NFSU2_TR(0x71349b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7134a1:{NFSU2_TR(0x7134a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134a8:{NFSU2_TR(0x7134a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b5ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134af:{NFSU2_TR(0x7134af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7134b5:{NFSU2_TR(0x7134b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134bc:{NFSU2_TR(0x7134bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134c3:{NFSU2_TR(0x7134c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8b9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134ca:{NFSU2_TR(0x7134ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8baull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134d1:{NFSU2_TR(0x7134d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8bbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7134d7:{NFSU2_TR(0x7134d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8bcull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134de:{NFSU2_TR(0x7134de);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8bdull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134e5:{NFSU2_TR(0x7134e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8beull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7134eb:{NFSU2_TR(0x7134eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8bfull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134f2:{NFSU2_TR(0x7134f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c0ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7134f9:{NFSU2_TR(0x7134f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713500:{NFSU2_TR(0x713500);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713507:{NFSU2_TR(0x713507);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71350d:{NFSU2_TR(0x71350d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713514:{NFSU2_TR(0x713514);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c5ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71351b:{NFSU2_TR(0x71351b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713522:{NFSU2_TR(0x713522);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713528:{NFSU2_TR(0x713528);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71352e:{NFSU2_TR(0x71352e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8c9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713535:{NFSU2_TR(0x713535);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8caull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71353b:{NFSU2_TR(0x71353b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8cbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713541:{NFSU2_TR(0x713541);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ccull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713548:{NFSU2_TR(0x713548);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8cdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71354f:{NFSU2_TR(0x71354f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ceull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713555:{NFSU2_TR(0x713555);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8cfull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71355b:{NFSU2_TR(0x71355b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713561:{NFSU2_TR(0x713561);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713568:{NFSU2_TR(0x713568);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71356f:{NFSU2_TR(0x71356f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713576:{NFSU2_TR(0x713576);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71357d:{NFSU2_TR(0x71357d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713584:{NFSU2_TR(0x713584);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71358a:{NFSU2_TR(0x71358a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713590:{NFSU2_TR(0x713590);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713597:{NFSU2_TR(0x713597);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8d9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71359e:{NFSU2_TR(0x71359e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8daull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7135a4:{NFSU2_TR(0x7135a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8dbull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135ab:{NFSU2_TR(0x7135ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8dcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7135b1:{NFSU2_TR(0x7135b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ddull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135b8:{NFSU2_TR(0x7135b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8deull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135bf:{NFSU2_TR(0x7135bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8dfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135c6:{NFSU2_TR(0x7135c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7135cc:{NFSU2_TR(0x7135cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7135d2:{NFSU2_TR(0x7135d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7135d8:{NFSU2_TR(0x7135d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e3ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135df:{NFSU2_TR(0x7135df);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135e6:{NFSU2_TR(0x7135e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135ed:{NFSU2_TR(0x7135ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135f4:{NFSU2_TR(0x7135f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7135fb:{NFSU2_TR(0x7135fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713602:{NFSU2_TR(0x713602);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8e9ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713609:{NFSU2_TR(0x713609);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8eaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71360f:{NFSU2_TR(0x71360f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ebull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713616:{NFSU2_TR(0x713616);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ecull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71361d:{NFSU2_TR(0x71361d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8edull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713624:{NFSU2_TR(0x713624);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8eeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71362b:{NFSU2_TR(0x71362b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8efull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713632:{NFSU2_TR(0x713632);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713639:{NFSU2_TR(0x713639);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f1ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713640:{NFSU2_TR(0x713640);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713646:{NFSU2_TR(0x713646);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71364c:{NFSU2_TR(0x71364c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713652:{NFSU2_TR(0x713652);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f5ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713659:{NFSU2_TR(0x713659);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713660:{NFSU2_TR(0x713660);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713667:{NFSU2_TR(0x713667);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71366e:{NFSU2_TR(0x71366e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8f9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713675:{NFSU2_TR(0x713675);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8faull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71367c:{NFSU2_TR(0x71367c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8fbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713682:{NFSU2_TR(0x713682);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8fcull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713689:{NFSU2_TR(0x713689);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8fdull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713690:{NFSU2_TR(0x713690);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713697:{NFSU2_TR(0x713697);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff8ffull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71369e:{NFSU2_TR(0x71369e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff900ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136a4:{NFSU2_TR(0x7136a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff901ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136aa:{NFSU2_TR(0x7136aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff902ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136b0:{NFSU2_TR(0x7136b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff903ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136b6:{NFSU2_TR(0x7136b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff904ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136bc:{NFSU2_TR(0x7136bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff905ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136c2:{NFSU2_TR(0x7136c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff906ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136c9:{NFSU2_TR(0x7136c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff907ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136cf:{NFSU2_TR(0x7136cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff908ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136d6:{NFSU2_TR(0x7136d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff909ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136dc:{NFSU2_TR(0x7136dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136e3:{NFSU2_TR(0x7136e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136ea:{NFSU2_TR(0x7136ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136f1:{NFSU2_TR(0x7136f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7136f8:{NFSU2_TR(0x7136f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7136fe:{NFSU2_TR(0x7136fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff90full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713705:{NFSU2_TR(0x713705);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff910ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71370c:{NFSU2_TR(0x71370c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff911ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713713:{NFSU2_TR(0x713713);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff912ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71371a:{NFSU2_TR(0x71371a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff913ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713720:{NFSU2_TR(0x713720);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff914ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713727:{NFSU2_TR(0x713727);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff915ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71372e:{NFSU2_TR(0x71372e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff916ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713735:{NFSU2_TR(0x713735);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff917ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71373c:{NFSU2_TR(0x71373c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff918ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713743:{NFSU2_TR(0x713743);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff919ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713749:{NFSU2_TR(0x713749);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713750:{NFSU2_TR(0x713750);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713756:{NFSU2_TR(0x713756);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71375c:{NFSU2_TR(0x71375c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713762:{NFSU2_TR(0x713762);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713769:{NFSU2_TR(0x713769);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff91full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71376f:{NFSU2_TR(0x71376f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff920ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713776:{NFSU2_TR(0x713776);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff921ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71377d:{NFSU2_TR(0x71377d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff922ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713783:{NFSU2_TR(0x713783);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff923ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713789:{NFSU2_TR(0x713789);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff924ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71378f:{NFSU2_TR(0x71378f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff925ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713796:{NFSU2_TR(0x713796);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff926ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71379c:{NFSU2_TR(0x71379c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff927ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137a2:{NFSU2_TR(0x7137a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff928ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137a9:{NFSU2_TR(0x7137a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff929ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137af:{NFSU2_TR(0x7137af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137b6:{NFSU2_TR(0x7137b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137bc:{NFSU2_TR(0x7137bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137c3:{NFSU2_TR(0x7137c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137ca:{NFSU2_TR(0x7137ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137d1:{NFSU2_TR(0x7137d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff92full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137d8:{NFSU2_TR(0x7137d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff930ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137df:{NFSU2_TR(0x7137df);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff931ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137e5:{NFSU2_TR(0x7137e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff932ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137ec:{NFSU2_TR(0x7137ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff933ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137f2:{NFSU2_TR(0x7137f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff934ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7137f8:{NFSU2_TR(0x7137f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff935ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7137ff:{NFSU2_TR(0x7137ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff936ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713805:{NFSU2_TR(0x713805);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff937ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71380b:{NFSU2_TR(0x71380b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff938ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713812:{NFSU2_TR(0x713812);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff939ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713819:{NFSU2_TR(0x713819);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713820:{NFSU2_TR(0x713820);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713826:{NFSU2_TR(0x713826);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71382d:{NFSU2_TR(0x71382d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713834:{NFSU2_TR(0x713834);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71383b:{NFSU2_TR(0x71383b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff93full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713842:{NFSU2_TR(0x713842);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff940ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713849:{NFSU2_TR(0x713849);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff941ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71384f:{NFSU2_TR(0x71384f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff942ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713856:{NFSU2_TR(0x713856);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff943ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71385d:{NFSU2_TR(0x71385d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff944ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713864:{NFSU2_TR(0x713864);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff945ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71386b:{NFSU2_TR(0x71386b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff946ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713872:{NFSU2_TR(0x713872);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff947ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713878:{NFSU2_TR(0x713878);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff948ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71387f:{NFSU2_TR(0x71387f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff949ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713886:{NFSU2_TR(0x713886);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71388d:{NFSU2_TR(0x71388d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713894:{NFSU2_TR(0x713894);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71389b:{NFSU2_TR(0x71389b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138a2:{NFSU2_TR(0x7138a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7138a8:{NFSU2_TR(0x7138a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff94full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138af:{NFSU2_TR(0x7138af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff950ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138b6:{NFSU2_TR(0x7138b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff951ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138bd:{NFSU2_TR(0x7138bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff952ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7138c3:{NFSU2_TR(0x7138c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff953ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7138c9:{NFSU2_TR(0x7138c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff954ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7138cf:{NFSU2_TR(0x7138cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff955ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138d6:{NFSU2_TR(0x7138d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff956ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138dd:{NFSU2_TR(0x7138dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff957ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138e4:{NFSU2_TR(0x7138e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff958ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7138ea:{NFSU2_TR(0x7138ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff959ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138f1:{NFSU2_TR(0x7138f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138f8:{NFSU2_TR(0x7138f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7138ff:{NFSU2_TR(0x7138ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713906:{NFSU2_TR(0x713906);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71390d:{NFSU2_TR(0x71390d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713913:{NFSU2_TR(0x713913);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff95full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713919:{NFSU2_TR(0x713919);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff960ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713920:{NFSU2_TR(0x713920);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff961ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713927:{NFSU2_TR(0x713927);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff962ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71392e:{NFSU2_TR(0x71392e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff963ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713934:{NFSU2_TR(0x713934);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff964ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71393a:{NFSU2_TR(0x71393a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff965ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713940:{NFSU2_TR(0x713940);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff966ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713946:{NFSU2_TR(0x713946);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff967ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71394c:{NFSU2_TR(0x71394c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff968ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713952:{NFSU2_TR(0x713952);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff969ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713959:{NFSU2_TR(0x713959);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713960:{NFSU2_TR(0x713960);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713967:{NFSU2_TR(0x713967);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71396d:{NFSU2_TR(0x71396d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713974:{NFSU2_TR(0x713974);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71397b:{NFSU2_TR(0x71397b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff96full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713982:{NFSU2_TR(0x713982);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff970ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713989:{NFSU2_TR(0x713989);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff971ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713990:{NFSU2_TR(0x713990);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff972ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713996:{NFSU2_TR(0x713996);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff973ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71399d:{NFSU2_TR(0x71399d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff974ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139a3:{NFSU2_TR(0x7139a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff975ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139aa:{NFSU2_TR(0x7139aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff976ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139b0:{NFSU2_TR(0x7139b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff977ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139b6:{NFSU2_TR(0x7139b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff978ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139bc:{NFSU2_TR(0x7139bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff979ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139c3:{NFSU2_TR(0x7139c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139ca:{NFSU2_TR(0x7139ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139d1:{NFSU2_TR(0x7139d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139d7:{NFSU2_TR(0x7139d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139dd:{NFSU2_TR(0x7139dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139e4:{NFSU2_TR(0x7139e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff97full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139ea:{NFSU2_TR(0x7139ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff980ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139f1:{NFSU2_TR(0x7139f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff981ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7139f7:{NFSU2_TR(0x7139f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff982ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7139fe:{NFSU2_TR(0x7139fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff983ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a05:{NFSU2_TR(0x713a05);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff984ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a0c:{NFSU2_TR(0x713a0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff985ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a13:{NFSU2_TR(0x713a13);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff986ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a1a:{NFSU2_TR(0x713a1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff987ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a21:{NFSU2_TR(0x713a21);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff988ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a27:{NFSU2_TR(0x713a27);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff989ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a2e:{NFSU2_TR(0x713a2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a34:{NFSU2_TR(0x713a34);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a3a:{NFSU2_TR(0x713a3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a41:{NFSU2_TR(0x713a41);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a48:{NFSU2_TR(0x713a48);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a4e:{NFSU2_TR(0x713a4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff98full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a55:{NFSU2_TR(0x713a55);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff990ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a5c:{NFSU2_TR(0x713a5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff991ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a62:{NFSU2_TR(0x713a62);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff992ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a68:{NFSU2_TR(0x713a68);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff993ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a6f:{NFSU2_TR(0x713a6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff994ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a75:{NFSU2_TR(0x713a75);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff995ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a7c:{NFSU2_TR(0x713a7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff996ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a82:{NFSU2_TR(0x713a82);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff997ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a88:{NFSU2_TR(0x713a88);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff998ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a8e:{NFSU2_TR(0x713a8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff999ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713a94:{NFSU2_TR(0x713a94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713a9b:{NFSU2_TR(0x713a9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713aa2:{NFSU2_TR(0x713aa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713aa8:{NFSU2_TR(0x713aa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713aaf:{NFSU2_TR(0x713aaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ab6:{NFSU2_TR(0x713ab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff99full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713abd:{NFSU2_TR(0x713abd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ac4:{NFSU2_TR(0x713ac4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713acb:{NFSU2_TR(0x713acb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ad1:{NFSU2_TR(0x713ad1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a3ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ad8:{NFSU2_TR(0x713ad8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ade:{NFSU2_TR(0x713ade);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ae4:{NFSU2_TR(0x713ae4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713aeb:{NFSU2_TR(0x713aeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713af1:{NFSU2_TR(0x713af1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713af8:{NFSU2_TR(0x713af8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9a9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713aff:{NFSU2_TR(0x713aff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9aaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b06:{NFSU2_TR(0x713b06);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9abull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b0d:{NFSU2_TR(0x713b0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9acull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b14:{NFSU2_TR(0x713b14);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9adull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b1b:{NFSU2_TR(0x713b1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9aeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b22:{NFSU2_TR(0x713b22);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9afull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b29:{NFSU2_TR(0x713b29);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713b2f:{NFSU2_TR(0x713b2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b36:{NFSU2_TR(0x713b36);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b3d:{NFSU2_TR(0x713b3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b44:{NFSU2_TR(0x713b44);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b4b:{NFSU2_TR(0x713b4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b52:{NFSU2_TR(0x713b52);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b59:{NFSU2_TR(0x713b59);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b60:{NFSU2_TR(0x713b60);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b67:{NFSU2_TR(0x713b67);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b6e:{NFSU2_TR(0x713b6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9baull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b75:{NFSU2_TR(0x713b75);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9bbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713b7b:{NFSU2_TR(0x713b7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9bcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b82:{NFSU2_TR(0x713b82);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9bdull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b89:{NFSU2_TR(0x713b89);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9beull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713b8f:{NFSU2_TR(0x713b8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9bfull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b96:{NFSU2_TR(0x713b96);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713b9d:{NFSU2_TR(0x713b9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ba4:{NFSU2_TR(0x713ba4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713baa:{NFSU2_TR(0x713baa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bb1:{NFSU2_TR(0x713bb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713bb7:{NFSU2_TR(0x713bb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bbe:{NFSU2_TR(0x713bbe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713bc4:{NFSU2_TR(0x713bc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bcb:{NFSU2_TR(0x713bcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713bd1:{NFSU2_TR(0x713bd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713bd7:{NFSU2_TR(0x713bd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9caull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bde:{NFSU2_TR(0x713bde);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9cbull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713be5:{NFSU2_TR(0x713be5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ccull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bec:{NFSU2_TR(0x713bec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9cdull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713bf2:{NFSU2_TR(0x713bf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ceull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713bf9:{NFSU2_TR(0x713bf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9cfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c00:{NFSU2_TR(0x713c00);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d0ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c07:{NFSU2_TR(0x713c07);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d1ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c0e:{NFSU2_TR(0x713c0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c15:{NFSU2_TR(0x713c15);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c1c:{NFSU2_TR(0x713c1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c22:{NFSU2_TR(0x713c22);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c28:{NFSU2_TR(0x713c28);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c2f:{NFSU2_TR(0x713c2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c36:{NFSU2_TR(0x713c36);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c3d:{NFSU2_TR(0x713c3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9d9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c43:{NFSU2_TR(0x713c43);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9daull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c49:{NFSU2_TR(0x713c49);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9dbull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c50:{NFSU2_TR(0x713c50);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9dcull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c57:{NFSU2_TR(0x713c57);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ddull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c5d:{NFSU2_TR(0x713c5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9deull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c64:{NFSU2_TR(0x713c64);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9dfull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713c6a:{NFSU2_TR(0x713c6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e0ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c71:{NFSU2_TR(0x713c71);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c78:{NFSU2_TR(0x713c78);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c7f:{NFSU2_TR(0x713c7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c86:{NFSU2_TR(0x713c86);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e4ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c8d:{NFSU2_TR(0x713c8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c94:{NFSU2_TR(0x713c94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713c9b:{NFSU2_TR(0x713c9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ca2:{NFSU2_TR(0x713ca2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ca9:{NFSU2_TR(0x713ca9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9e9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713caf:{NFSU2_TR(0x713caf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9eaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713cb6:{NFSU2_TR(0x713cb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ebull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713cbd:{NFSU2_TR(0x713cbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ecull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713cc4:{NFSU2_TR(0x713cc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9edull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ccb:{NFSU2_TR(0x713ccb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9eeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cd1:{NFSU2_TR(0x713cd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9efull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cd7:{NFSU2_TR(0x713cd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713cde:{NFSU2_TR(0x713cde);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ce4:{NFSU2_TR(0x713ce4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cea:{NFSU2_TR(0x713cea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cf0:{NFSU2_TR(0x713cf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cf6:{NFSU2_TR(0x713cf6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713cfc:{NFSU2_TR(0x713cfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d02:{NFSU2_TR(0x713d02);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d09:{NFSU2_TR(0x713d09);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d10:{NFSU2_TR(0x713d10);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9f9ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d17:{NFSU2_TR(0x713d17);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9faull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d1e:{NFSU2_TR(0x713d1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9fbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d24:{NFSU2_TR(0x713d24);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9fcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d2a:{NFSU2_TR(0x713d2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9fdull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d31:{NFSU2_TR(0x713d31);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9feull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d38:{NFSU2_TR(0x713d38);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9ffull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d3f:{NFSU2_TR(0x713d3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa00ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d46:{NFSU2_TR(0x713d46);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa01ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d4c:{NFSU2_TR(0x713d4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa02ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d53:{NFSU2_TR(0x713d53);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa03ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d5a:{NFSU2_TR(0x713d5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa04ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d60:{NFSU2_TR(0x713d60);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa05ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d67:{NFSU2_TR(0x713d67);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa06ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d6d:{NFSU2_TR(0x713d6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa07ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d74:{NFSU2_TR(0x713d74);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa08ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d7a:{NFSU2_TR(0x713d7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa09ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d81:{NFSU2_TR(0x713d81);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d88:{NFSU2_TR(0x713d88);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d8f:{NFSU2_TR(0x713d8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713d95:{NFSU2_TR(0x713d95);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713d9c:{NFSU2_TR(0x713d9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713da3:{NFSU2_TR(0x713da3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa0full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713daa:{NFSU2_TR(0x713daa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa10ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713db0:{NFSU2_TR(0x713db0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa11ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713db6:{NFSU2_TR(0x713db6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa12ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713dbd:{NFSU2_TR(0x713dbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa13ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713dc4:{NFSU2_TR(0x713dc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa14ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713dcb:{NFSU2_TR(0x713dcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713dd1:{NFSU2_TR(0x713dd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa16ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713dd7:{NFSU2_TR(0x713dd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa17ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ddd:{NFSU2_TR(0x713ddd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa18ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713de4:{NFSU2_TR(0x713de4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713deb:{NFSU2_TR(0x713deb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713df2:{NFSU2_TR(0x713df2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713df9:{NFSU2_TR(0x713df9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713dff:{NFSU2_TR(0x713dff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e05:{NFSU2_TR(0x713e05);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e0c:{NFSU2_TR(0x713e0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa1full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e12:{NFSU2_TR(0x713e12);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e18:{NFSU2_TR(0x713e18);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e1e:{NFSU2_TR(0x713e1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e24:{NFSU2_TR(0x713e24);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e2b:{NFSU2_TR(0x713e2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa24ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e32:{NFSU2_TR(0x713e32);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa25ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e39:{NFSU2_TR(0x713e39);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa26ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e40:{NFSU2_TR(0x713e40);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa27ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e47:{NFSU2_TR(0x713e47);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa28ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e4d:{NFSU2_TR(0x713e4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa29ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e53:{NFSU2_TR(0x713e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e5a:{NFSU2_TR(0x713e5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e61:{NFSU2_TR(0x713e61);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e67:{NFSU2_TR(0x713e67);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e6d:{NFSU2_TR(0x713e6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e74:{NFSU2_TR(0x713e74);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa2full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e7b:{NFSU2_TR(0x713e7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa30ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e81:{NFSU2_TR(0x713e81);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa31ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e87:{NFSU2_TR(0x713e87);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa32ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e8e:{NFSU2_TR(0x713e8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa33ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713e94:{NFSU2_TR(0x713e94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa34ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713e9b:{NFSU2_TR(0x713e9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa35ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ea2:{NFSU2_TR(0x713ea2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa36ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ea9:{NFSU2_TR(0x713ea9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa37ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713eb0:{NFSU2_TR(0x713eb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa38ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713eb7:{NFSU2_TR(0x713eb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa39ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ebd:{NFSU2_TR(0x713ebd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ec3:{NFSU2_TR(0x713ec3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713eca:{NFSU2_TR(0x713eca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ed1:{NFSU2_TR(0x713ed1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ed7:{NFSU2_TR(0x713ed7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ede:{NFSU2_TR(0x713ede);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa3full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ee5:{NFSU2_TR(0x713ee5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa40ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713eec:{NFSU2_TR(0x713eec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa41ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ef3:{NFSU2_TR(0x713ef3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa42ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713efa:{NFSU2_TR(0x713efa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa43ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f01:{NFSU2_TR(0x713f01);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f08:{NFSU2_TR(0x713f08);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa45ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f0e:{NFSU2_TR(0x713f0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa46ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f15:{NFSU2_TR(0x713f15);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa47ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f1b:{NFSU2_TR(0x713f1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa48ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f22:{NFSU2_TR(0x713f22);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa49ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f29:{NFSU2_TR(0x713f29);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f2f:{NFSU2_TR(0x713f2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f36:{NFSU2_TR(0x713f36);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f3d:{NFSU2_TR(0x713f3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f43:{NFSU2_TR(0x713f43);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f4a:{NFSU2_TR(0x713f4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa4full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f51:{NFSU2_TR(0x713f51);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f57:{NFSU2_TR(0x713f57);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa51ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f5d:{NFSU2_TR(0x713f5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa52ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f64:{NFSU2_TR(0x713f64);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa53ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f6b:{NFSU2_TR(0x713f6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa54ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f72:{NFSU2_TR(0x713f72);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa55ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f79:{NFSU2_TR(0x713f79);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa56ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f7f:{NFSU2_TR(0x713f7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa57ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f86:{NFSU2_TR(0x713f86);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa58ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f8c:{NFSU2_TR(0x713f8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa59ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f92:{NFSU2_TR(0x713f92);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713f98:{NFSU2_TR(0x713f98);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713f9f:{NFSU2_TR(0x713f9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713fa5:{NFSU2_TR(0x713fa5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713fab:{NFSU2_TR(0x713fab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fb2:{NFSU2_TR(0x713fb2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa5full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fb9:{NFSU2_TR(0x713fb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa60ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713fbf:{NFSU2_TR(0x713fbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa61ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713fc5:{NFSU2_TR(0x713fc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa62ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fcc:{NFSU2_TR(0x713fcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa63ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fd3:{NFSU2_TR(0x713fd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa64ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fda:{NFSU2_TR(0x713fda);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa65ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fe1:{NFSU2_TR(0x713fe1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa66ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B713fe8:{NFSU2_TR(0x713fe8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa67ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713fee:{NFSU2_TR(0x713fee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa68ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B713ff5:{NFSU2_TR(0x713ff5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa69ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B713ffb:{NFSU2_TR(0x713ffb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa6aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x714001u,714);
}
XIT:NFSU2_TR_EXIT(0x713,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
