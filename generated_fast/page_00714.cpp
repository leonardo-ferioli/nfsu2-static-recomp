#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_715(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x714,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x714,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_714(u8* __restrict R,Cpu& c);
u32 page_714(Cpu& c){return body_714(c.regs.data(),c);}
__attribute__((noinline)) u32 body_714(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x714001:goto L714001;
case 0x714007:c.instructions+=616;goto B714007;
case 0x71400e:c.instructions+=615;goto B71400e;
case 0x714015:c.instructions+=614;goto B714015;
case 0x71401b:c.instructions+=613;goto B71401b;
case 0x714022:c.instructions+=612;goto B714022;
case 0x714029:c.instructions+=611;goto B714029;
case 0x71402f:c.instructions+=610;goto B71402f;
case 0x714036:c.instructions+=609;goto B714036;
case 0x71403d:c.instructions+=608;goto B71403d;
case 0x714043:c.instructions+=607;goto B714043;
case 0x71404a:c.instructions+=606;goto B71404a;
case 0x714051:c.instructions+=605;goto B714051;
case 0x714058:c.instructions+=604;goto B714058;
case 0x71405f:c.instructions+=603;goto B71405f;
case 0x714065:c.instructions+=602;goto B714065;
case 0x71406b:c.instructions+=601;goto B71406b;
case 0x714072:c.instructions+=600;goto B714072;
case 0x714079:c.instructions+=599;goto B714079;
case 0x71407f:c.instructions+=598;goto B71407f;
case 0x714085:c.instructions+=597;goto B714085;
case 0x71408b:c.instructions+=596;goto B71408b;
case 0x714091:c.instructions+=595;goto B714091;
case 0x714098:c.instructions+=594;goto B714098;
case 0x71409f:c.instructions+=593;goto B71409f;
case 0x7140a5:c.instructions+=592;goto B7140a5;
case 0x7140ac:c.instructions+=591;goto B7140ac;
case 0x7140b2:c.instructions+=590;goto B7140b2;
case 0x7140b8:c.instructions+=589;goto B7140b8;
case 0x7140be:c.instructions+=588;goto B7140be;
case 0x7140c5:c.instructions+=587;goto B7140c5;
case 0x7140cb:c.instructions+=586;goto B7140cb;
case 0x7140d2:c.instructions+=585;goto B7140d2;
case 0x7140d9:c.instructions+=584;goto B7140d9;
case 0x7140e0:c.instructions+=583;goto B7140e0;
case 0x7140e7:c.instructions+=582;goto B7140e7;
case 0x7140ee:c.instructions+=581;goto B7140ee;
case 0x7140f5:c.instructions+=580;goto B7140f5;
case 0x7140fb:c.instructions+=579;goto B7140fb;
case 0x714102:c.instructions+=578;goto B714102;
case 0x714109:c.instructions+=577;goto B714109;
case 0x714110:c.instructions+=576;goto B714110;
case 0x714117:c.instructions+=575;goto B714117;
case 0x71411e:c.instructions+=574;goto B71411e;
case 0x714125:c.instructions+=573;goto B714125;
case 0x71412c:c.instructions+=572;goto B71412c;
case 0x714133:c.instructions+=571;goto B714133;
case 0x71413a:c.instructions+=570;goto B71413a;
case 0x714141:c.instructions+=569;goto B714141;
case 0x714148:c.instructions+=568;goto B714148;
case 0x71414f:c.instructions+=567;goto B71414f;
case 0x714155:c.instructions+=566;goto B714155;
case 0x71415b:c.instructions+=565;goto B71415b;
case 0x714162:c.instructions+=564;goto B714162;
case 0x714169:c.instructions+=563;goto B714169;
case 0x714170:c.instructions+=562;goto B714170;
case 0x714177:c.instructions+=561;goto B714177;
case 0x71417d:c.instructions+=560;goto B71417d;
case 0x714184:c.instructions+=559;goto B714184;
case 0x71418b:c.instructions+=558;goto B71418b;
case 0x714192:c.instructions+=557;goto B714192;
case 0x714199:c.instructions+=556;goto B714199;
case 0x71419f:c.instructions+=555;goto B71419f;
case 0x7141a5:c.instructions+=554;goto B7141a5;
case 0x7141ab:c.instructions+=553;goto B7141ab;
case 0x7141b2:c.instructions+=552;goto B7141b2;
case 0x7141b9:c.instructions+=551;goto B7141b9;
case 0x7141c0:c.instructions+=550;goto B7141c0;
case 0x7141c7:c.instructions+=549;goto B7141c7;
case 0x7141ce:c.instructions+=548;goto B7141ce;
case 0x7141d5:c.instructions+=547;goto B7141d5;
case 0x7141dc:c.instructions+=546;goto B7141dc;
case 0x7141e3:c.instructions+=545;goto B7141e3;
case 0x7141ea:c.instructions+=544;goto B7141ea;
case 0x7141f0:c.instructions+=543;goto B7141f0;
case 0x7141f7:c.instructions+=542;goto B7141f7;
case 0x7141fe:c.instructions+=541;goto B7141fe;
case 0x714204:c.instructions+=540;goto B714204;
case 0x71420a:c.instructions+=539;goto B71420a;
case 0x714211:c.instructions+=538;goto B714211;
case 0x714217:c.instructions+=537;goto B714217;
case 0x71421e:c.instructions+=536;goto B71421e;
case 0x714224:c.instructions+=535;goto B714224;
case 0x71422a:c.instructions+=534;goto B71422a;
case 0x714231:c.instructions+=533;goto B714231;
case 0x714237:c.instructions+=532;goto B714237;
case 0x71423e:c.instructions+=531;goto B71423e;
case 0x714245:c.instructions+=530;goto B714245;
case 0x71424c:c.instructions+=529;goto B71424c;
case 0x714253:c.instructions+=528;goto B714253;
case 0x71425a:c.instructions+=527;goto B71425a;
case 0x714260:c.instructions+=526;goto B714260;
case 0x714267:c.instructions+=525;goto B714267;
case 0x71426d:c.instructions+=524;goto B71426d;
case 0x714273:c.instructions+=523;goto B714273;
case 0x714279:c.instructions+=522;goto B714279;
case 0x714280:c.instructions+=521;goto B714280;
case 0x714286:c.instructions+=520;goto B714286;
case 0x71428d:c.instructions+=519;goto B71428d;
case 0x714293:c.instructions+=518;goto B714293;
case 0x71429a:c.instructions+=517;goto B71429a;
case 0x7142a1:c.instructions+=516;goto B7142a1;
case 0x7142a7:c.instructions+=515;goto B7142a7;
case 0x7142ad:c.instructions+=514;goto B7142ad;
case 0x7142b4:c.instructions+=513;goto B7142b4;
case 0x7142ba:c.instructions+=512;goto B7142ba;
case 0x7142c0:c.instructions+=511;goto B7142c0;
case 0x7142c6:c.instructions+=510;goto B7142c6;
case 0x7142cd:c.instructions+=509;goto B7142cd;
case 0x7142d3:c.instructions+=508;goto B7142d3;
case 0x7142da:c.instructions+=507;goto B7142da;
case 0x7142e0:c.instructions+=506;goto B7142e0;
case 0x7142e7:c.instructions+=505;goto B7142e7;
case 0x7142ee:c.instructions+=504;goto B7142ee;
case 0x7142f5:c.instructions+=503;goto B7142f5;
case 0x7142fc:c.instructions+=502;goto B7142fc;
case 0x714302:c.instructions+=501;goto B714302;
case 0x714309:c.instructions+=500;goto B714309;
case 0x714310:c.instructions+=499;goto B714310;
case 0x714317:c.instructions+=498;goto B714317;
case 0x71431e:c.instructions+=497;goto B71431e;
case 0x714325:c.instructions+=496;goto B714325;
case 0x71432c:c.instructions+=495;goto B71432c;
case 0x714333:c.instructions+=494;goto B714333;
case 0x71433a:c.instructions+=493;goto B71433a;
case 0x714340:c.instructions+=492;goto B714340;
case 0x714346:c.instructions+=491;goto B714346;
case 0x71434d:c.instructions+=490;goto B71434d;
case 0x714353:c.instructions+=489;goto B714353;
case 0x71435a:c.instructions+=488;goto B71435a;
case 0x714360:c.instructions+=487;goto B714360;
case 0x714367:c.instructions+=486;goto B714367;
case 0x71436e:c.instructions+=485;goto B71436e;
case 0x714375:c.instructions+=484;goto B714375;
case 0x71437c:c.instructions+=483;goto B71437c;
case 0x714383:c.instructions+=482;goto B714383;
case 0x71438a:c.instructions+=481;goto B71438a;
case 0x714390:c.instructions+=480;goto B714390;
case 0x714397:c.instructions+=479;goto B714397;
case 0x71439e:c.instructions+=478;goto B71439e;
case 0x7143a5:c.instructions+=477;goto B7143a5;
case 0x7143ac:c.instructions+=476;goto B7143ac;
case 0x7143b3:c.instructions+=475;goto B7143b3;
case 0x7143b9:c.instructions+=474;goto B7143b9;
case 0x7143c0:c.instructions+=473;goto B7143c0;
case 0x7143c7:c.instructions+=472;goto B7143c7;
case 0x7143ce:c.instructions+=471;goto B7143ce;
case 0x7143d5:c.instructions+=470;goto B7143d5;
case 0x7143dc:c.instructions+=469;goto B7143dc;
case 0x7143e3:c.instructions+=468;goto B7143e3;
case 0x7143e9:c.instructions+=467;goto B7143e9;
case 0x7143f0:c.instructions+=466;goto B7143f0;
case 0x7143f6:c.instructions+=465;goto B7143f6;
case 0x7143fc:c.instructions+=464;goto B7143fc;
case 0x714403:c.instructions+=463;goto B714403;
case 0x71440a:c.instructions+=462;goto B71440a;
case 0x714411:c.instructions+=461;goto B714411;
case 0x714418:c.instructions+=460;goto B714418;
case 0x71441f:c.instructions+=459;goto B71441f;
case 0x714426:c.instructions+=458;goto B714426;
case 0x71442c:c.instructions+=457;goto B71442c;
case 0x714433:c.instructions+=456;goto B714433;
case 0x714439:c.instructions+=455;goto B714439;
case 0x71443f:c.instructions+=454;goto B71443f;
case 0x714445:c.instructions+=453;goto B714445;
case 0x71444c:c.instructions+=452;goto B71444c;
case 0x714452:c.instructions+=451;goto B714452;
case 0x714458:c.instructions+=450;goto B714458;
case 0x71445f:c.instructions+=449;goto B71445f;
case 0x714466:c.instructions+=448;goto B714466;
case 0x71446d:c.instructions+=447;goto B71446d;
case 0x714474:c.instructions+=446;goto B714474;
case 0x71447b:c.instructions+=445;goto B71447b;
case 0x714481:c.instructions+=444;goto B714481;
case 0x714488:c.instructions+=443;goto B714488;
case 0x71448f:c.instructions+=442;goto B71448f;
case 0x714496:c.instructions+=441;goto B714496;
case 0x71449d:c.instructions+=440;goto B71449d;
case 0x7144a4:c.instructions+=439;goto B7144a4;
case 0x7144ab:c.instructions+=438;goto B7144ab;
case 0x7144b2:c.instructions+=437;goto B7144b2;
case 0x7144b8:c.instructions+=436;goto B7144b8;
case 0x7144be:c.instructions+=435;goto B7144be;
case 0x7144c4:c.instructions+=434;goto B7144c4;
case 0x7144ca:c.instructions+=433;goto B7144ca;
case 0x7144d1:c.instructions+=432;goto B7144d1;
case 0x7144d7:c.instructions+=431;goto B7144d7;
case 0x7144dd:c.instructions+=430;goto B7144dd;
case 0x7144e3:c.instructions+=429;goto B7144e3;
case 0x7144ea:c.instructions+=428;goto B7144ea;
case 0x7144f1:c.instructions+=427;goto B7144f1;
case 0x7144f8:c.instructions+=426;goto B7144f8;
case 0x7144ff:c.instructions+=425;goto B7144ff;
case 0x714505:c.instructions+=424;goto B714505;
case 0x71450c:c.instructions+=423;goto B71450c;
case 0x714513:c.instructions+=422;goto B714513;
case 0x71451a:c.instructions+=421;goto B71451a;
case 0x714520:c.instructions+=420;goto B714520;
case 0x714527:c.instructions+=419;goto B714527;
case 0x71452e:c.instructions+=418;goto B71452e;
case 0x714534:c.instructions+=417;goto B714534;
case 0x71453b:c.instructions+=416;goto B71453b;
case 0x714541:c.instructions+=415;goto B714541;
case 0x714547:c.instructions+=414;goto B714547;
case 0x71454d:c.instructions+=413;goto B71454d;
case 0x714554:c.instructions+=412;goto B714554;
case 0x71455b:c.instructions+=411;goto B71455b;
case 0x714562:c.instructions+=410;goto B714562;
case 0x714568:c.instructions+=409;goto B714568;
case 0x71456e:c.instructions+=408;goto B71456e;
case 0x714575:c.instructions+=407;goto B714575;
case 0x71457c:c.instructions+=406;goto B71457c;
case 0x714583:c.instructions+=405;goto B714583;
case 0x71458a:c.instructions+=404;goto B71458a;
case 0x714591:c.instructions+=403;goto B714591;
case 0x714598:c.instructions+=402;goto B714598;
case 0x71459e:c.instructions+=401;goto B71459e;
case 0x7145a4:c.instructions+=400;goto B7145a4;
case 0x7145aa:c.instructions+=399;goto B7145aa;
case 0x7145b1:c.instructions+=398;goto B7145b1;
case 0x7145b8:c.instructions+=397;goto B7145b8;
case 0x7145bf:c.instructions+=396;goto B7145bf;
case 0x7145c6:c.instructions+=395;goto B7145c6;
case 0x7145cd:c.instructions+=394;goto B7145cd;
case 0x7145d4:c.instructions+=393;goto B7145d4;
case 0x7145db:c.instructions+=392;goto B7145db;
case 0x7145e1:c.instructions+=391;goto B7145e1;
case 0x7145e7:c.instructions+=390;goto B7145e7;
case 0x7145ee:c.instructions+=389;goto B7145ee;
case 0x7145f4:c.instructions+=388;goto B7145f4;
case 0x7145fa:c.instructions+=387;goto B7145fa;
case 0x714600:c.instructions+=386;goto B714600;
case 0x714607:c.instructions+=385;goto B714607;
case 0x71460e:c.instructions+=384;goto B71460e;
case 0x714614:c.instructions+=383;goto B714614;
case 0x71461a:c.instructions+=382;goto B71461a;
case 0x714621:c.instructions+=381;goto B714621;
case 0x714627:c.instructions+=380;goto B714627;
case 0x71462e:c.instructions+=379;goto B71462e;
case 0x714634:c.instructions+=378;goto B714634;
case 0x71463a:c.instructions+=377;goto B71463a;
case 0x714641:c.instructions+=376;goto B714641;
case 0x714648:c.instructions+=375;goto B714648;
case 0x71464f:c.instructions+=374;goto B71464f;
case 0x714656:c.instructions+=373;goto B714656;
case 0x71465d:c.instructions+=372;goto B71465d;
case 0x714664:c.instructions+=371;goto B714664;
case 0x71466a:c.instructions+=370;goto B71466a;
case 0x714671:c.instructions+=369;goto B714671;
case 0x714678:c.instructions+=368;goto B714678;
case 0x71467f:c.instructions+=367;goto B71467f;
case 0x714685:c.instructions+=366;goto B714685;
case 0x71468b:c.instructions+=365;goto B71468b;
case 0x714692:c.instructions+=364;goto B714692;
case 0x714699:c.instructions+=363;goto B714699;
case 0x7146a0:c.instructions+=362;goto B7146a0;
case 0x7146a6:c.instructions+=361;goto B7146a6;
case 0x7146ad:c.instructions+=360;goto B7146ad;
case 0x7146b4:c.instructions+=359;goto B7146b4;
case 0x7146bb:c.instructions+=358;goto B7146bb;
case 0x7146c2:c.instructions+=357;goto B7146c2;
case 0x7146c8:c.instructions+=356;goto B7146c8;
case 0x7146cf:c.instructions+=355;goto B7146cf;
case 0x7146d6:c.instructions+=354;goto B7146d6;
case 0x7146dd:c.instructions+=353;goto B7146dd;
case 0x7146e3:c.instructions+=352;goto B7146e3;
case 0x7146ea:c.instructions+=351;goto B7146ea;
case 0x7146f0:c.instructions+=350;goto B7146f0;
case 0x7146f7:c.instructions+=349;goto B7146f7;
case 0x7146fe:c.instructions+=348;goto B7146fe;
case 0x714704:c.instructions+=347;goto B714704;
case 0x71470b:c.instructions+=346;goto B71470b;
case 0x714712:c.instructions+=345;goto B714712;
case 0x714719:c.instructions+=344;goto B714719;
case 0x714720:c.instructions+=343;goto B714720;
case 0x714726:c.instructions+=342;goto B714726;
case 0x71472d:c.instructions+=341;goto B71472d;
case 0x714733:c.instructions+=340;goto B714733;
case 0x71473a:c.instructions+=339;goto B71473a;
case 0x714741:c.instructions+=338;goto B714741;
case 0x714747:c.instructions+=337;goto B714747;
case 0x71474e:c.instructions+=336;goto B71474e;
case 0x714754:c.instructions+=335;goto B714754;
case 0x71475b:c.instructions+=334;goto B71475b;
case 0x714761:c.instructions+=333;goto B714761;
case 0x714768:c.instructions+=332;goto B714768;
case 0x71476f:c.instructions+=331;goto B71476f;
case 0x714776:c.instructions+=330;goto B714776;
case 0x71477c:c.instructions+=329;goto B71477c;
case 0x714782:c.instructions+=328;goto B714782;
case 0x714789:c.instructions+=327;goto B714789;
case 0x714790:c.instructions+=326;goto B714790;
case 0x714797:c.instructions+=325;goto B714797;
case 0x71479e:c.instructions+=324;goto B71479e;
case 0x7147a5:c.instructions+=323;goto B7147a5;
case 0x7147ac:c.instructions+=322;goto B7147ac;
case 0x7147b3:c.instructions+=321;goto B7147b3;
case 0x7147b9:c.instructions+=320;goto B7147b9;
case 0x7147bf:c.instructions+=319;goto B7147bf;
case 0x7147c6:c.instructions+=318;goto B7147c6;
case 0x7147cc:c.instructions+=317;goto B7147cc;
case 0x7147d2:c.instructions+=316;goto B7147d2;
case 0x7147d9:c.instructions+=315;goto B7147d9;
case 0x7147df:c.instructions+=314;goto B7147df;
case 0x7147e5:c.instructions+=313;goto B7147e5;
case 0x7147ec:c.instructions+=312;goto B7147ec;
case 0x7147f3:c.instructions+=311;goto B7147f3;
case 0x7147fa:c.instructions+=310;goto B7147fa;
case 0x714801:c.instructions+=309;goto B714801;
case 0x714808:c.instructions+=308;goto B714808;
case 0x71480e:c.instructions+=307;goto B71480e;
case 0x714815:c.instructions+=306;goto B714815;
case 0x71481c:c.instructions+=305;goto B71481c;
case 0x714823:c.instructions+=304;goto B714823;
case 0x714829:c.instructions+=303;goto B714829;
case 0x714830:c.instructions+=302;goto B714830;
case 0x714837:c.instructions+=301;goto B714837;
case 0x71483e:c.instructions+=300;goto B71483e;
case 0x714844:c.instructions+=299;goto B714844;
case 0x71484b:c.instructions+=298;goto B71484b;
case 0x714851:c.instructions+=297;goto B714851;
case 0x714858:c.instructions+=296;goto B714858;
case 0x71485f:c.instructions+=295;goto B71485f;
case 0x714866:c.instructions+=294;goto B714866;
case 0x71486d:c.instructions+=293;goto B71486d;
case 0x714873:c.instructions+=292;goto B714873;
case 0x71487a:c.instructions+=291;goto B71487a;
case 0x714881:c.instructions+=290;goto B714881;
case 0x714888:c.instructions+=289;goto B714888;
case 0x71488e:c.instructions+=288;goto B71488e;
case 0x714894:c.instructions+=287;goto B714894;
case 0x71489a:c.instructions+=286;goto B71489a;
case 0x7148a1:c.instructions+=285;goto B7148a1;
case 0x7148a8:c.instructions+=284;goto B7148a8;
case 0x7148af:c.instructions+=283;goto B7148af;
case 0x7148b6:c.instructions+=282;goto B7148b6;
case 0x7148bd:c.instructions+=281;goto B7148bd;
case 0x7148c3:c.instructions+=280;goto B7148c3;
case 0x7148ca:c.instructions+=279;goto B7148ca;
case 0x7148d1:c.instructions+=278;goto B7148d1;
case 0x7148d8:c.instructions+=277;goto B7148d8;
case 0x7148df:c.instructions+=276;goto B7148df;
case 0x7148e5:c.instructions+=275;goto B7148e5;
case 0x7148ec:c.instructions+=274;goto B7148ec;
case 0x7148f3:c.instructions+=273;goto B7148f3;
case 0x7148f9:c.instructions+=272;goto B7148f9;
case 0x714900:c.instructions+=271;goto B714900;
case 0x714907:c.instructions+=270;goto B714907;
case 0x71490d:c.instructions+=269;goto B71490d;
case 0x714913:c.instructions+=268;goto B714913;
case 0x71491a:c.instructions+=267;goto B71491a;
case 0x714921:c.instructions+=266;goto B714921;
case 0x714928:c.instructions+=265;goto B714928;
case 0x71492f:c.instructions+=264;goto B71492f;
case 0x714936:c.instructions+=263;goto B714936;
case 0x71493d:c.instructions+=262;goto B71493d;
case 0x714943:c.instructions+=261;goto B714943;
case 0x714949:c.instructions+=260;goto B714949;
case 0x714950:c.instructions+=259;goto B714950;
case 0x714957:c.instructions+=258;goto B714957;
case 0x71495e:c.instructions+=257;goto B71495e;
case 0x714964:c.instructions+=256;goto B714964;
case 0x71496b:c.instructions+=255;goto B71496b;
case 0x714971:c.instructions+=254;goto B714971;
case 0x714977:c.instructions+=253;goto B714977;
case 0x71497d:c.instructions+=252;goto B71497d;
case 0x714983:c.instructions+=251;goto B714983;
case 0x71498a:c.instructions+=250;goto B71498a;
case 0x714991:c.instructions+=249;goto B714991;
case 0x714998:c.instructions+=248;goto B714998;
case 0x71499f:c.instructions+=247;goto B71499f;
case 0x7149a6:c.instructions+=246;goto B7149a6;
case 0x7149ad:c.instructions+=245;goto B7149ad;
case 0x7149b4:c.instructions+=244;goto B7149b4;
case 0x7149bb:c.instructions+=243;goto B7149bb;
case 0x7149c1:c.instructions+=242;goto B7149c1;
case 0x7149c7:c.instructions+=241;goto B7149c7;
case 0x7149ce:c.instructions+=240;goto B7149ce;
case 0x7149d5:c.instructions+=239;goto B7149d5;
case 0x7149dc:c.instructions+=238;goto B7149dc;
case 0x7149e2:c.instructions+=237;goto B7149e2;
case 0x7149e9:c.instructions+=236;goto B7149e9;
case 0x7149ef:c.instructions+=235;goto B7149ef;
case 0x7149f6:c.instructions+=234;goto B7149f6;
case 0x7149fd:c.instructions+=233;goto B7149fd;
case 0x714a04:c.instructions+=232;goto B714a04;
case 0x714a0b:c.instructions+=231;goto B714a0b;
case 0x714a12:c.instructions+=230;goto B714a12;
case 0x714a19:c.instructions+=229;goto B714a19;
case 0x714a1f:c.instructions+=228;goto B714a1f;
case 0x714a25:c.instructions+=227;goto B714a25;
case 0x714a2c:c.instructions+=226;goto B714a2c;
case 0x714a33:c.instructions+=225;goto B714a33;
case 0x714a3a:c.instructions+=224;goto B714a3a;
case 0x714a41:c.instructions+=223;goto B714a41;
case 0x714a48:c.instructions+=222;goto B714a48;
case 0x714a4f:c.instructions+=221;goto B714a4f;
case 0x714a56:c.instructions+=220;goto B714a56;
case 0x714a5d:c.instructions+=219;goto B714a5d;
case 0x714a64:c.instructions+=218;goto B714a64;
case 0x714a6b:c.instructions+=217;goto B714a6b;
case 0x714a72:c.instructions+=216;goto B714a72;
case 0x714a78:c.instructions+=215;goto B714a78;
case 0x714a7f:c.instructions+=214;goto B714a7f;
case 0x714a86:c.instructions+=213;goto B714a86;
case 0x714a8d:c.instructions+=212;goto B714a8d;
case 0x714a94:c.instructions+=211;goto B714a94;
case 0x714a9b:c.instructions+=210;goto B714a9b;
case 0x714aa1:c.instructions+=209;goto B714aa1;
case 0x714aa8:c.instructions+=208;goto B714aa8;
case 0x714aae:c.instructions+=207;goto B714aae;
case 0x714ab4:c.instructions+=206;goto B714ab4;
case 0x714abb:c.instructions+=205;goto B714abb;
case 0x714ac2:c.instructions+=204;goto B714ac2;
case 0x714ac8:c.instructions+=203;goto B714ac8;
case 0x714ace:c.instructions+=202;goto B714ace;
case 0x714ad5:c.instructions+=201;goto B714ad5;
case 0x714adc:c.instructions+=200;goto B714adc;
case 0x714ae2:c.instructions+=199;goto B714ae2;
case 0x714ae9:c.instructions+=198;goto B714ae9;
case 0x714af0:c.instructions+=197;goto B714af0;
case 0x714af6:c.instructions+=196;goto B714af6;
case 0x714afc:c.instructions+=195;goto B714afc;
case 0x714b03:c.instructions+=194;goto B714b03;
case 0x714b0a:c.instructions+=193;goto B714b0a;
case 0x714b10:c.instructions+=192;goto B714b10;
case 0x714b16:c.instructions+=191;goto B714b16;
case 0x714b1d:c.instructions+=190;goto B714b1d;
case 0x714b24:c.instructions+=189;goto B714b24;
case 0x714b2b:c.instructions+=188;goto B714b2b;
case 0x714b31:c.instructions+=187;goto B714b31;
case 0x714b38:c.instructions+=186;goto B714b38;
case 0x714b3e:c.instructions+=185;goto B714b3e;
case 0x714b44:c.instructions+=184;goto B714b44;
case 0x714b4b:c.instructions+=183;goto B714b4b;
case 0x714b51:c.instructions+=182;goto B714b51;
case 0x714b57:c.instructions+=181;goto B714b57;
case 0x714b5e:c.instructions+=180;goto B714b5e;
case 0x714b64:c.instructions+=179;goto B714b64;
case 0x714b6b:c.instructions+=178;goto B714b6b;
case 0x714b71:c.instructions+=177;goto B714b71;
case 0x714b78:c.instructions+=176;goto B714b78;
case 0x714b7f:c.instructions+=175;goto B714b7f;
case 0x714b86:c.instructions+=174;goto B714b86;
case 0x714b8d:c.instructions+=173;goto B714b8d;
case 0x714b93:c.instructions+=172;goto B714b93;
case 0x714b99:c.instructions+=171;goto B714b99;
case 0x714ba0:c.instructions+=170;goto B714ba0;
case 0x714ba6:c.instructions+=169;goto B714ba6;
case 0x714bad:c.instructions+=168;goto B714bad;
case 0x714bb3:c.instructions+=167;goto B714bb3;
case 0x714bba:c.instructions+=166;goto B714bba;
case 0x714bc1:c.instructions+=165;goto B714bc1;
case 0x714bc8:c.instructions+=164;goto B714bc8;
case 0x714bce:c.instructions+=163;goto B714bce;
case 0x714bd4:c.instructions+=162;goto B714bd4;
case 0x714bdb:c.instructions+=161;goto B714bdb;
case 0x714be1:c.instructions+=160;goto B714be1;
case 0x714be8:c.instructions+=159;goto B714be8;
case 0x714bef:c.instructions+=158;goto B714bef;
case 0x714bf6:c.instructions+=157;goto B714bf6;
case 0x714bfc:c.instructions+=156;goto B714bfc;
case 0x714c03:c.instructions+=155;goto B714c03;
case 0x714c0a:c.instructions+=154;goto B714c0a;
case 0x714c11:c.instructions+=153;goto B714c11;
case 0x714c17:c.instructions+=152;goto B714c17;
case 0x714c1e:c.instructions+=151;goto B714c1e;
case 0x714c25:c.instructions+=150;goto B714c25;
case 0x714c2c:c.instructions+=149;goto B714c2c;
case 0x714c32:c.instructions+=148;goto B714c32;
case 0x714c39:c.instructions+=147;goto B714c39;
case 0x714c3f:c.instructions+=146;goto B714c3f;
case 0x714c46:c.instructions+=145;goto B714c46;
case 0x714c4d:c.instructions+=144;goto B714c4d;
case 0x714c54:c.instructions+=143;goto B714c54;
case 0x714c5b:c.instructions+=142;goto B714c5b;
case 0x714c62:c.instructions+=141;goto B714c62;
case 0x714c69:c.instructions+=140;goto B714c69;
case 0x714c6f:c.instructions+=139;goto B714c6f;
case 0x714c76:c.instructions+=138;goto B714c76;
case 0x714c7c:c.instructions+=137;goto B714c7c;
case 0x714c83:c.instructions+=136;goto B714c83;
case 0x714c8a:c.instructions+=135;goto B714c8a;
case 0x714c90:c.instructions+=134;goto B714c90;
case 0x714c96:c.instructions+=133;goto B714c96;
case 0x714c9d:c.instructions+=132;goto B714c9d;
case 0x714ca3:c.instructions+=131;goto B714ca3;
case 0x714caa:c.instructions+=130;goto B714caa;
case 0x714cb0:c.instructions+=129;goto B714cb0;
case 0x714cb7:c.instructions+=128;goto B714cb7;
case 0x714cbd:c.instructions+=127;goto B714cbd;
case 0x714cc4:c.instructions+=126;goto B714cc4;
case 0x714cca:c.instructions+=125;goto B714cca;
case 0x714cd0:c.instructions+=124;goto B714cd0;
case 0x714cd7:c.instructions+=123;goto B714cd7;
case 0x714cdd:c.instructions+=122;goto B714cdd;
case 0x714ce3:c.instructions+=121;goto B714ce3;
case 0x714cea:c.instructions+=120;goto B714cea;
case 0x714cf0:c.instructions+=119;goto B714cf0;
case 0x714cf7:c.instructions+=118;goto B714cf7;
case 0x714cfd:c.instructions+=117;goto B714cfd;
case 0x714d03:c.instructions+=116;goto B714d03;
case 0x714d0a:c.instructions+=115;goto B714d0a;
case 0x714d11:c.instructions+=114;goto B714d11;
case 0x714d18:c.instructions+=113;goto B714d18;
case 0x714d1e:c.instructions+=112;goto B714d1e;
case 0x714d25:c.instructions+=111;goto B714d25;
case 0x714d2b:c.instructions+=110;goto B714d2b;
case 0x714d32:c.instructions+=109;goto B714d32;
case 0x714d38:c.instructions+=108;goto B714d38;
case 0x714d3e:c.instructions+=107;goto B714d3e;
case 0x714d45:c.instructions+=106;goto B714d45;
case 0x714d4b:c.instructions+=105;goto B714d4b;
case 0x714d51:c.instructions+=104;goto B714d51;
case 0x714d58:c.instructions+=103;goto B714d58;
case 0x714d5f:c.instructions+=102;goto B714d5f;
case 0x714d66:c.instructions+=101;goto B714d66;
case 0x714d6d:c.instructions+=100;goto B714d6d;
case 0x714d73:c.instructions+=99;goto B714d73;
case 0x714d7a:c.instructions+=98;goto B714d7a;
case 0x714d80:c.instructions+=97;goto B714d80;
case 0x714d86:c.instructions+=96;goto B714d86;
case 0x714d8c:c.instructions+=95;goto B714d8c;
case 0x714d93:c.instructions+=94;goto B714d93;
case 0x714d9a:c.instructions+=93;goto B714d9a;
case 0x714da0:c.instructions+=92;goto B714da0;
case 0x714da7:c.instructions+=91;goto B714da7;
case 0x714dae:c.instructions+=90;goto B714dae;
case 0x714db4:c.instructions+=89;goto B714db4;
case 0x714dba:c.instructions+=88;goto B714dba;
case 0x714dc0:c.instructions+=87;goto B714dc0;
case 0x714dc6:c.instructions+=86;goto B714dc6;
case 0x714dcd:c.instructions+=85;goto B714dcd;
case 0x714dd3:c.instructions+=84;goto B714dd3;
case 0x714dd9:c.instructions+=83;goto B714dd9;
case 0x714de0:c.instructions+=82;goto B714de0;
case 0x714de7:c.instructions+=81;goto B714de7;
case 0x714ded:c.instructions+=80;goto B714ded;
case 0x714df4:c.instructions+=79;goto B714df4;
case 0x714dfa:c.instructions+=78;goto B714dfa;
case 0x714e01:c.instructions+=77;goto B714e01;
case 0x714e07:c.instructions+=76;goto B714e07;
case 0x714e0e:c.instructions+=75;goto B714e0e;
case 0x714e15:c.instructions+=74;goto B714e15;
case 0x714e1c:c.instructions+=73;goto B714e1c;
case 0x714e23:c.instructions+=72;goto B714e23;
case 0x714e29:c.instructions+=71;goto B714e29;
case 0x714e30:c.instructions+=70;goto B714e30;
case 0x714e37:c.instructions+=69;goto B714e37;
case 0x714e3d:c.instructions+=68;goto B714e3d;
case 0x714e43:c.instructions+=67;goto B714e43;
case 0x714e4a:c.instructions+=66;goto B714e4a;
case 0x714e51:c.instructions+=65;goto B714e51;
case 0x714e58:c.instructions+=64;goto B714e58;
case 0x714e5e:c.instructions+=63;goto B714e5e;
case 0x714e64:c.instructions+=62;goto B714e64;
case 0x714e6a:c.instructions+=61;goto B714e6a;
case 0x714e70:c.instructions+=60;goto B714e70;
case 0x714e76:c.instructions+=59;goto B714e76;
case 0x714e7d:c.instructions+=58;goto B714e7d;
case 0x714e84:c.instructions+=57;goto B714e84;
case 0x714e8a:c.instructions+=56;goto B714e8a;
case 0x714e90:c.instructions+=55;goto B714e90;
case 0x714e96:c.instructions+=54;goto B714e96;
case 0x714e9d:c.instructions+=53;goto B714e9d;
case 0x714ea3:c.instructions+=52;goto B714ea3;
case 0x714eaa:c.instructions+=51;goto B714eaa;
case 0x714eb1:c.instructions+=50;goto B714eb1;
case 0x714eb8:c.instructions+=49;goto B714eb8;
case 0x714ebe:c.instructions+=48;goto B714ebe;
case 0x714ec5:c.instructions+=47;goto B714ec5;
case 0x714ecb:c.instructions+=46;goto B714ecb;
case 0x714ed2:c.instructions+=45;goto B714ed2;
case 0x714ed8:c.instructions+=44;goto B714ed8;
case 0x714edf:c.instructions+=43;goto B714edf;
case 0x714ee6:c.instructions+=42;goto B714ee6;
case 0x714eed:c.instructions+=41;goto B714eed;
case 0x714ef4:c.instructions+=40;goto B714ef4;
case 0x714efa:c.instructions+=39;goto B714efa;
case 0x714f01:c.instructions+=38;goto B714f01;
case 0x714f08:c.instructions+=37;goto B714f08;
case 0x714f0f:c.instructions+=36;goto B714f0f;
case 0x714f15:c.instructions+=35;goto B714f15;
case 0x714f1c:c.instructions+=34;goto B714f1c;
case 0x714f23:c.instructions+=33;goto B714f23;
case 0x714f2a:c.instructions+=32;goto B714f2a;
case 0x714f30:c.instructions+=31;goto B714f30;
case 0x714f37:c.instructions+=30;goto B714f37;
case 0x714f3e:c.instructions+=29;goto B714f3e;
case 0x714f45:c.instructions+=28;goto B714f45;
case 0x714f4c:c.instructions+=27;goto B714f4c;
case 0x714f52:c.instructions+=26;goto B714f52;
case 0x714f59:c.instructions+=25;goto B714f59;
case 0x714f60:c.instructions+=24;goto B714f60;
case 0x714f67:c.instructions+=23;goto B714f67;
case 0x714f6d:c.instructions+=22;goto B714f6d;
case 0x714f73:c.instructions+=21;goto B714f73;
case 0x714f7a:c.instructions+=20;goto B714f7a;
case 0x714f81:c.instructions+=19;goto B714f81;
case 0x714f88:c.instructions+=18;goto B714f88;
case 0x714f8e:c.instructions+=17;goto B714f8e;
case 0x714f95:c.instructions+=16;goto B714f95;
case 0x714f9b:c.instructions+=15;goto B714f9b;
case 0x714fa2:c.instructions+=14;goto B714fa2;
case 0x714fa8:c.instructions+=13;goto B714fa8;
case 0x714faf:c.instructions+=12;goto B714faf;
case 0x714fb6:c.instructions+=11;goto B714fb6;
case 0x714fbd:c.instructions+=10;goto B714fbd;
case 0x714fc4:c.instructions+=9;goto B714fc4;
case 0x714fca:c.instructions+=8;goto B714fca;
case 0x714fd0:c.instructions+=7;goto B714fd0;
case 0x714fd7:c.instructions+=6;goto B714fd7;
case 0x714fde:c.instructions+=5;goto B714fde;
case 0x714fe5:c.instructions+=4;goto B714fe5;
case 0x714fec:c.instructions+=3;goto B714fec;
case 0x714ff3:c.instructions+=2;goto B714ff3;
case 0x714ffa:c.instructions+=1;goto B714ffa;
default:missing_instruction(c.pc);}
B714001:L714001:{c.instructions+=617;NFSU2_TR(0x714001);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa6bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714007:{NFSU2_TR(0x714007);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa6cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71400e:{NFSU2_TR(0x71400e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa6dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714015:{NFSU2_TR(0x714015);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa6eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71401b:{NFSU2_TR(0x71401b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa6full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714022:{NFSU2_TR(0x714022);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa70ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714029:{NFSU2_TR(0x714029);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa71ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71402f:{NFSU2_TR(0x71402f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa72ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714036:{NFSU2_TR(0x714036);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa73ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71403d:{NFSU2_TR(0x71403d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa74ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714043:{NFSU2_TR(0x714043);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa75ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71404a:{NFSU2_TR(0x71404a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa76ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714051:{NFSU2_TR(0x714051);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa77ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714058:{NFSU2_TR(0x714058);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa78ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71405f:{NFSU2_TR(0x71405f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa79ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714065:{NFSU2_TR(0x714065);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa7aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71406b:{NFSU2_TR(0x71406b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa7bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714072:{NFSU2_TR(0x714072);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa7cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714079:{NFSU2_TR(0x714079);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa7dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71407f:{NFSU2_TR(0x71407f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa7eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714085:{NFSU2_TR(0x714085);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa7full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71408b:{NFSU2_TR(0x71408b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa80ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714091:{NFSU2_TR(0x714091);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa81ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714098:{NFSU2_TR(0x714098);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa82ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71409f:{NFSU2_TR(0x71409f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa83ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7140a5:{NFSU2_TR(0x7140a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa84ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7140ac:{NFSU2_TR(0x7140ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa85ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7140b2:{NFSU2_TR(0x7140b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa86ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7140b8:{NFSU2_TR(0x7140b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa87ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7140be:{NFSU2_TR(0x7140be);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa88ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7140c5:{NFSU2_TR(0x7140c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa89ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7140cb:{NFSU2_TR(0x7140cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa8aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7140d2:{NFSU2_TR(0x7140d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa8bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7140d9:{NFSU2_TR(0x7140d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa8cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7140e0:{NFSU2_TR(0x7140e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa8dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7140e7:{NFSU2_TR(0x7140e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa8eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7140ee:{NFSU2_TR(0x7140ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa8full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7140f5:{NFSU2_TR(0x7140f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa90ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7140fb:{NFSU2_TR(0x7140fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa91ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714102:{NFSU2_TR(0x714102);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa92ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714109:{NFSU2_TR(0x714109);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa93ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714110:{NFSU2_TR(0x714110);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa94ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714117:{NFSU2_TR(0x714117);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa95ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71411e:{NFSU2_TR(0x71411e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa96ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714125:{NFSU2_TR(0x714125);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa97ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71412c:{NFSU2_TR(0x71412c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa98ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714133:{NFSU2_TR(0x714133);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa99ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71413a:{NFSU2_TR(0x71413a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa9aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714141:{NFSU2_TR(0x714141);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa9bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714148:{NFSU2_TR(0x714148);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa9cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71414f:{NFSU2_TR(0x71414f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa9dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714155:{NFSU2_TR(0x714155);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa9eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71415b:{NFSU2_TR(0x71415b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffa9full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714162:{NFSU2_TR(0x714162);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714169:{NFSU2_TR(0x714169);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaa1ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714170:{NFSU2_TR(0x714170);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaa2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714177:{NFSU2_TR(0x714177);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaa3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71417d:{NFSU2_TR(0x71417d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaa4ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714184:{NFSU2_TR(0x714184);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaa5ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71418b:{NFSU2_TR(0x71418b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaa6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714192:{NFSU2_TR(0x714192);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaa7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714199:{NFSU2_TR(0x714199);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaa8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71419f:{NFSU2_TR(0x71419f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaa9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7141a5:{NFSU2_TR(0x7141a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaaaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7141ab:{NFSU2_TR(0x7141ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaabull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141b2:{NFSU2_TR(0x7141b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaacull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141b9:{NFSU2_TR(0x7141b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaadull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141c0:{NFSU2_TR(0x7141c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaaeull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141c7:{NFSU2_TR(0x7141c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaafull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141ce:{NFSU2_TR(0x7141ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffab0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141d5:{NFSU2_TR(0x7141d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffab1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141dc:{NFSU2_TR(0x7141dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffab2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141e3:{NFSU2_TR(0x7141e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffab3ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141ea:{NFSU2_TR(0x7141ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffab4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7141f0:{NFSU2_TR(0x7141f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffab5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141f7:{NFSU2_TR(0x7141f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffab6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7141fe:{NFSU2_TR(0x7141fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffab7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714204:{NFSU2_TR(0x714204);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffab8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71420a:{NFSU2_TR(0x71420a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffab9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714211:{NFSU2_TR(0x714211);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffabaull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714217:{NFSU2_TR(0x714217);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffabbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71421e:{NFSU2_TR(0x71421e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffabcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714224:{NFSU2_TR(0x714224);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffabdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71422a:{NFSU2_TR(0x71422a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffabeull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714231:{NFSU2_TR(0x714231);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffabfull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714237:{NFSU2_TR(0x714237);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffac0ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71423e:{NFSU2_TR(0x71423e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffac1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714245:{NFSU2_TR(0x714245);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffac2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71424c:{NFSU2_TR(0x71424c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffac3ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714253:{NFSU2_TR(0x714253);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffac4ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71425a:{NFSU2_TR(0x71425a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffac5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714260:{NFSU2_TR(0x714260);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffac6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714267:{NFSU2_TR(0x714267);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffac7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71426d:{NFSU2_TR(0x71426d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffac8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714273:{NFSU2_TR(0x714273);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffac9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714279:{NFSU2_TR(0x714279);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffacaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714280:{NFSU2_TR(0x714280);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffacbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714286:{NFSU2_TR(0x714286);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaccull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71428d:{NFSU2_TR(0x71428d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffacdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714293:{NFSU2_TR(0x714293);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaceull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71429a:{NFSU2_TR(0x71429a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffacfull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7142a1:{NFSU2_TR(0x7142a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffad0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7142a7:{NFSU2_TR(0x7142a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffad1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7142ad:{NFSU2_TR(0x7142ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffad2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7142b4:{NFSU2_TR(0x7142b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffad3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7142ba:{NFSU2_TR(0x7142ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffad4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7142c0:{NFSU2_TR(0x7142c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffad5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7142c6:{NFSU2_TR(0x7142c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffad6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7142cd:{NFSU2_TR(0x7142cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffad7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7142d3:{NFSU2_TR(0x7142d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffad8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7142da:{NFSU2_TR(0x7142da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffad9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7142e0:{NFSU2_TR(0x7142e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffadaull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7142e7:{NFSU2_TR(0x7142e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffadbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7142ee:{NFSU2_TR(0x7142ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffadcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7142f5:{NFSU2_TR(0x7142f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaddull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7142fc:{NFSU2_TR(0x7142fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffadeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714302:{NFSU2_TR(0x714302);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffadfull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714309:{NFSU2_TR(0x714309);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714310:{NFSU2_TR(0x714310);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714317:{NFSU2_TR(0x714317);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71431e:{NFSU2_TR(0x71431e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714325:{NFSU2_TR(0x714325);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71432c:{NFSU2_TR(0x71432c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae5ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714333:{NFSU2_TR(0x714333);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71433a:{NFSU2_TR(0x71433a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714340:{NFSU2_TR(0x714340);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714346:{NFSU2_TR(0x714346);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffae9ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71434d:{NFSU2_TR(0x71434d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaeaull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714353:{NFSU2_TR(0x714353);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaebull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71435a:{NFSU2_TR(0x71435a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaecull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714360:{NFSU2_TR(0x714360);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaedull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714367:{NFSU2_TR(0x714367);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaeeull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71436e:{NFSU2_TR(0x71436e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaefull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714375:{NFSU2_TR(0x714375);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaf0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71437c:{NFSU2_TR(0x71437c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaf1ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714383:{NFSU2_TR(0x714383);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaf2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71438a:{NFSU2_TR(0x71438a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaf3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714390:{NFSU2_TR(0x714390);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaf4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714397:{NFSU2_TR(0x714397);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaf5ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71439e:{NFSU2_TR(0x71439e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaf6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7143a5:{NFSU2_TR(0x7143a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaf7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7143ac:{NFSU2_TR(0x7143ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaf8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7143b3:{NFSU2_TR(0x7143b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaf9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7143b9:{NFSU2_TR(0x7143b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffafaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7143c0:{NFSU2_TR(0x7143c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffafbull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7143c7:{NFSU2_TR(0x7143c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffafcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7143ce:{NFSU2_TR(0x7143ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffafdull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7143d5:{NFSU2_TR(0x7143d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffafeull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7143dc:{NFSU2_TR(0x7143dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffaffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7143e3:{NFSU2_TR(0x7143e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb00ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7143e9:{NFSU2_TR(0x7143e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb01ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7143f0:{NFSU2_TR(0x7143f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb02ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7143f6:{NFSU2_TR(0x7143f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb03ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7143fc:{NFSU2_TR(0x7143fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb04ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714403:{NFSU2_TR(0x714403);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb05ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71440a:{NFSU2_TR(0x71440a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb06ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714411:{NFSU2_TR(0x714411);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb07ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714418:{NFSU2_TR(0x714418);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb08ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71441f:{NFSU2_TR(0x71441f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb09ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714426:{NFSU2_TR(0x714426);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb0aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71442c:{NFSU2_TR(0x71442c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb0bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714433:{NFSU2_TR(0x714433);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb0cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714439:{NFSU2_TR(0x714439);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb0dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71443f:{NFSU2_TR(0x71443f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb0eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714445:{NFSU2_TR(0x714445);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb0full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71444c:{NFSU2_TR(0x71444c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714452:{NFSU2_TR(0x714452);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb11ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714458:{NFSU2_TR(0x714458);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb12ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71445f:{NFSU2_TR(0x71445f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb13ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714466:{NFSU2_TR(0x714466);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb14ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71446d:{NFSU2_TR(0x71446d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb15ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714474:{NFSU2_TR(0x714474);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb16ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71447b:{NFSU2_TR(0x71447b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb17ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714481:{NFSU2_TR(0x714481);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714488:{NFSU2_TR(0x714488);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb19ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71448f:{NFSU2_TR(0x71448f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb1aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714496:{NFSU2_TR(0x714496);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb1bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71449d:{NFSU2_TR(0x71449d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb1cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7144a4:{NFSU2_TR(0x7144a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb1dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7144ab:{NFSU2_TR(0x7144ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb1eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7144b2:{NFSU2_TR(0x7144b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb1full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7144b8:{NFSU2_TR(0x7144b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb20ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7144be:{NFSU2_TR(0x7144be);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb21ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7144c4:{NFSU2_TR(0x7144c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb22ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7144ca:{NFSU2_TR(0x7144ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7144d1:{NFSU2_TR(0x7144d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb24ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7144d7:{NFSU2_TR(0x7144d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb25ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7144dd:{NFSU2_TR(0x7144dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb26ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7144e3:{NFSU2_TR(0x7144e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb27ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7144ea:{NFSU2_TR(0x7144ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7144f1:{NFSU2_TR(0x7144f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb29ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7144f8:{NFSU2_TR(0x7144f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb2aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7144ff:{NFSU2_TR(0x7144ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb2bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714505:{NFSU2_TR(0x714505);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71450c:{NFSU2_TR(0x71450c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb2dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714513:{NFSU2_TR(0x714513);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb2eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71451a:{NFSU2_TR(0x71451a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb2full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714520:{NFSU2_TR(0x714520);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb30ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714527:{NFSU2_TR(0x714527);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb31ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71452e:{NFSU2_TR(0x71452e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb32ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714534:{NFSU2_TR(0x714534);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb33ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71453b:{NFSU2_TR(0x71453b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb34ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714541:{NFSU2_TR(0x714541);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb35ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714547:{NFSU2_TR(0x714547);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb36ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71454d:{NFSU2_TR(0x71454d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb37ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714554:{NFSU2_TR(0x714554);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb38ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71455b:{NFSU2_TR(0x71455b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb39ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714562:{NFSU2_TR(0x714562);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb3aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714568:{NFSU2_TR(0x714568);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb3bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71456e:{NFSU2_TR(0x71456e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb3cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714575:{NFSU2_TR(0x714575);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb3dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71457c:{NFSU2_TR(0x71457c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb3eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714583:{NFSU2_TR(0x714583);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb3full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71458a:{NFSU2_TR(0x71458a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb40ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714591:{NFSU2_TR(0x714591);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb41ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714598:{NFSU2_TR(0x714598);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb42ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71459e:{NFSU2_TR(0x71459e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb43ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7145a4:{NFSU2_TR(0x7145a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7145aa:{NFSU2_TR(0x7145aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb45ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7145b1:{NFSU2_TR(0x7145b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb46ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7145b8:{NFSU2_TR(0x7145b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb47ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7145bf:{NFSU2_TR(0x7145bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb48ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7145c6:{NFSU2_TR(0x7145c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb49ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7145cd:{NFSU2_TR(0x7145cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb4aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7145d4:{NFSU2_TR(0x7145d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb4bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7145db:{NFSU2_TR(0x7145db);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb4cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7145e1:{NFSU2_TR(0x7145e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb4dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7145e7:{NFSU2_TR(0x7145e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb4eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7145ee:{NFSU2_TR(0x7145ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb4full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7145f4:{NFSU2_TR(0x7145f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb50ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7145fa:{NFSU2_TR(0x7145fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb51ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714600:{NFSU2_TR(0x714600);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb52ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714607:{NFSU2_TR(0x714607);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb53ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71460e:{NFSU2_TR(0x71460e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb54ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714614:{NFSU2_TR(0x714614);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb55ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71461a:{NFSU2_TR(0x71461a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb56ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714621:{NFSU2_TR(0x714621);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb57ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714627:{NFSU2_TR(0x714627);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb58ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71462e:{NFSU2_TR(0x71462e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb59ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714634:{NFSU2_TR(0x714634);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb5aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71463a:{NFSU2_TR(0x71463a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb5bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714641:{NFSU2_TR(0x714641);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb5cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714648:{NFSU2_TR(0x714648);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb5dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71464f:{NFSU2_TR(0x71464f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb5eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714656:{NFSU2_TR(0x714656);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb5full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71465d:{NFSU2_TR(0x71465d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb60ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714664:{NFSU2_TR(0x714664);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb61ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71466a:{NFSU2_TR(0x71466a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb62ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714671:{NFSU2_TR(0x714671);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb63ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714678:{NFSU2_TR(0x714678);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb64ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71467f:{NFSU2_TR(0x71467f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb65ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714685:{NFSU2_TR(0x714685);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb66ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71468b:{NFSU2_TR(0x71468b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb67ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714692:{NFSU2_TR(0x714692);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb68ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714699:{NFSU2_TR(0x714699);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb69ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146a0:{NFSU2_TR(0x7146a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb6aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7146a6:{NFSU2_TR(0x7146a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb6bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146ad:{NFSU2_TR(0x7146ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb6cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146b4:{NFSU2_TR(0x7146b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb6dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146bb:{NFSU2_TR(0x7146bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb6eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146c2:{NFSU2_TR(0x7146c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb6full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7146c8:{NFSU2_TR(0x7146c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb70ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146cf:{NFSU2_TR(0x7146cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb71ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146d6:{NFSU2_TR(0x7146d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb72ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146dd:{NFSU2_TR(0x7146dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb73ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7146e3:{NFSU2_TR(0x7146e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb74ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146ea:{NFSU2_TR(0x7146ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb75ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7146f0:{NFSU2_TR(0x7146f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb76ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146f7:{NFSU2_TR(0x7146f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb77ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7146fe:{NFSU2_TR(0x7146fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb78ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714704:{NFSU2_TR(0x714704);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb79ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71470b:{NFSU2_TR(0x71470b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb7aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714712:{NFSU2_TR(0x714712);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb7bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714719:{NFSU2_TR(0x714719);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb7cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714720:{NFSU2_TR(0x714720);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb7dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714726:{NFSU2_TR(0x714726);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb7eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71472d:{NFSU2_TR(0x71472d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb7full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714733:{NFSU2_TR(0x714733);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb80ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71473a:{NFSU2_TR(0x71473a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb81ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714741:{NFSU2_TR(0x714741);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb82ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714747:{NFSU2_TR(0x714747);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb83ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71474e:{NFSU2_TR(0x71474e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb84ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714754:{NFSU2_TR(0x714754);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb85ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71475b:{NFSU2_TR(0x71475b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb86ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714761:{NFSU2_TR(0x714761);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb87ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714768:{NFSU2_TR(0x714768);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb88ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71476f:{NFSU2_TR(0x71476f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb89ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714776:{NFSU2_TR(0x714776);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb8aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71477c:{NFSU2_TR(0x71477c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb8bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714782:{NFSU2_TR(0x714782);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb8cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714789:{NFSU2_TR(0x714789);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb8dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714790:{NFSU2_TR(0x714790);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb8eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714797:{NFSU2_TR(0x714797);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb8full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71479e:{NFSU2_TR(0x71479e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb90ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7147a5:{NFSU2_TR(0x7147a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb91ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7147ac:{NFSU2_TR(0x7147ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb92ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7147b3:{NFSU2_TR(0x7147b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb93ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7147b9:{NFSU2_TR(0x7147b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb94ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7147bf:{NFSU2_TR(0x7147bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb95ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7147c6:{NFSU2_TR(0x7147c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb96ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7147cc:{NFSU2_TR(0x7147cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb97ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7147d2:{NFSU2_TR(0x7147d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb98ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7147d9:{NFSU2_TR(0x7147d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb99ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7147df:{NFSU2_TR(0x7147df);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb9aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7147e5:{NFSU2_TR(0x7147e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb9bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7147ec:{NFSU2_TR(0x7147ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb9cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7147f3:{NFSU2_TR(0x7147f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb9dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7147fa:{NFSU2_TR(0x7147fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb9eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714801:{NFSU2_TR(0x714801);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb9full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714808:{NFSU2_TR(0x714808);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71480e:{NFSU2_TR(0x71480e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714815:{NFSU2_TR(0x714815);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71481c:{NFSU2_TR(0x71481c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714823:{NFSU2_TR(0x714823);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714829:{NFSU2_TR(0x714829);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba5ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714830:{NFSU2_TR(0x714830);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714837:{NFSU2_TR(0x714837);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71483e:{NFSU2_TR(0x71483e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714844:{NFSU2_TR(0x714844);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffba9ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71484b:{NFSU2_TR(0x71484b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbaaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714851:{NFSU2_TR(0x714851);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbabull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714858:{NFSU2_TR(0x714858);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbacull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71485f:{NFSU2_TR(0x71485f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbadull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714866:{NFSU2_TR(0x714866);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbaeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71486d:{NFSU2_TR(0x71486d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbafull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714873:{NFSU2_TR(0x714873);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71487a:{NFSU2_TR(0x71487a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb1ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714881:{NFSU2_TR(0x714881);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714888:{NFSU2_TR(0x714888);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71488e:{NFSU2_TR(0x71488e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714894:{NFSU2_TR(0x714894);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71489a:{NFSU2_TR(0x71489a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148a1:{NFSU2_TR(0x7148a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148a8:{NFSU2_TR(0x7148a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148af:{NFSU2_TR(0x7148af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbb9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148b6:{NFSU2_TR(0x7148b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbbaull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148bd:{NFSU2_TR(0x7148bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbbbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7148c3:{NFSU2_TR(0x7148c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbbcull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148ca:{NFSU2_TR(0x7148ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbbdull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148d1:{NFSU2_TR(0x7148d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbbeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148d8:{NFSU2_TR(0x7148d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbbfull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148df:{NFSU2_TR(0x7148df);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7148e5:{NFSU2_TR(0x7148e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148ec:{NFSU2_TR(0x7148ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7148f3:{NFSU2_TR(0x7148f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7148f9:{NFSU2_TR(0x7148f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714900:{NFSU2_TR(0x714900);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714907:{NFSU2_TR(0x714907);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71490d:{NFSU2_TR(0x71490d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714913:{NFSU2_TR(0x714913);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71491a:{NFSU2_TR(0x71491a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc9ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714921:{NFSU2_TR(0x714921);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbcaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714928:{NFSU2_TR(0x714928);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbcbull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71492f:{NFSU2_TR(0x71492f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbccull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714936:{NFSU2_TR(0x714936);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbcdull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71493d:{NFSU2_TR(0x71493d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbceull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714943:{NFSU2_TR(0x714943);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbcfull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714949:{NFSU2_TR(0x714949);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714950:{NFSU2_TR(0x714950);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd1ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714957:{NFSU2_TR(0x714957);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71495e:{NFSU2_TR(0x71495e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714964:{NFSU2_TR(0x714964);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71496b:{NFSU2_TR(0x71496b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714971:{NFSU2_TR(0x714971);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714977:{NFSU2_TR(0x714977);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71497d:{NFSU2_TR(0x71497d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714983:{NFSU2_TR(0x714983);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71498a:{NFSU2_TR(0x71498a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbdaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714991:{NFSU2_TR(0x714991);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbdbull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714998:{NFSU2_TR(0x714998);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbdcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71499f:{NFSU2_TR(0x71499f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbddull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7149a6:{NFSU2_TR(0x7149a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbdeull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7149ad:{NFSU2_TR(0x7149ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbdfull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7149b4:{NFSU2_TR(0x7149b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe0ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7149bb:{NFSU2_TR(0x7149bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7149c1:{NFSU2_TR(0x7149c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7149c7:{NFSU2_TR(0x7149c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe3ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7149ce:{NFSU2_TR(0x7149ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7149d5:{NFSU2_TR(0x7149d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7149dc:{NFSU2_TR(0x7149dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7149e2:{NFSU2_TR(0x7149e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7149e9:{NFSU2_TR(0x7149e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7149ef:{NFSU2_TR(0x7149ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7149f6:{NFSU2_TR(0x7149f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbeaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7149fd:{NFSU2_TR(0x7149fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbebull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a04:{NFSU2_TR(0x714a04);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbecull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a0b:{NFSU2_TR(0x714a0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbedull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a12:{NFSU2_TR(0x714a12);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbeeull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a19:{NFSU2_TR(0x714a19);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbefull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714a1f:{NFSU2_TR(0x714a1f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714a25:{NFSU2_TR(0x714a25);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf1ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a2c:{NFSU2_TR(0x714a2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a33:{NFSU2_TR(0x714a33);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a3a:{NFSU2_TR(0x714a3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a41:{NFSU2_TR(0x714a41);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf5ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a48:{NFSU2_TR(0x714a48);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a4f:{NFSU2_TR(0x714a4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a56:{NFSU2_TR(0x714a56);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a5d:{NFSU2_TR(0x714a5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbf9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a64:{NFSU2_TR(0x714a64);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbfaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a6b:{NFSU2_TR(0x714a6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbfbull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a72:{NFSU2_TR(0x714a72);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbfcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714a78:{NFSU2_TR(0x714a78);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbfdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a7f:{NFSU2_TR(0x714a7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbfeull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a86:{NFSU2_TR(0x714a86);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbffull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a8d:{NFSU2_TR(0x714a8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc00ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a94:{NFSU2_TR(0x714a94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc01ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714a9b:{NFSU2_TR(0x714a9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc02ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714aa1:{NFSU2_TR(0x714aa1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc03ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714aa8:{NFSU2_TR(0x714aa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc04ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714aae:{NFSU2_TR(0x714aae);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc05ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ab4:{NFSU2_TR(0x714ab4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc06ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714abb:{NFSU2_TR(0x714abb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc07ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714ac2:{NFSU2_TR(0x714ac2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc08ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ac8:{NFSU2_TR(0x714ac8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc09ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ace:{NFSU2_TR(0x714ace);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc0aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714ad5:{NFSU2_TR(0x714ad5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc0bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714adc:{NFSU2_TR(0x714adc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc0cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ae2:{NFSU2_TR(0x714ae2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc0dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714ae9:{NFSU2_TR(0x714ae9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc0eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714af0:{NFSU2_TR(0x714af0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc0full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714af6:{NFSU2_TR(0x714af6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc10ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714afc:{NFSU2_TR(0x714afc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc11ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b03:{NFSU2_TR(0x714b03);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc12ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b0a:{NFSU2_TR(0x714b0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc13ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b10:{NFSU2_TR(0x714b10);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc14ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b16:{NFSU2_TR(0x714b16);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc15ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b1d:{NFSU2_TR(0x714b1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc16ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b24:{NFSU2_TR(0x714b24);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc17ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b2b:{NFSU2_TR(0x714b2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc18ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b31:{NFSU2_TR(0x714b31);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc19ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b38:{NFSU2_TR(0x714b38);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc1aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b3e:{NFSU2_TR(0x714b3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc1bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b44:{NFSU2_TR(0x714b44);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc1cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b4b:{NFSU2_TR(0x714b4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc1dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b51:{NFSU2_TR(0x714b51);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc1eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b57:{NFSU2_TR(0x714b57);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc1full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b5e:{NFSU2_TR(0x714b5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b64:{NFSU2_TR(0x714b64);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc21ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b6b:{NFSU2_TR(0x714b6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b71:{NFSU2_TR(0x714b71);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc23ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b78:{NFSU2_TR(0x714b78);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc24ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b7f:{NFSU2_TR(0x714b7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc25ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b86:{NFSU2_TR(0x714b86);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc26ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714b8d:{NFSU2_TR(0x714b8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc27ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b93:{NFSU2_TR(0x714b93);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc28ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714b99:{NFSU2_TR(0x714b99);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc29ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714ba0:{NFSU2_TR(0x714ba0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc2aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ba6:{NFSU2_TR(0x714ba6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc2bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714bad:{NFSU2_TR(0x714bad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc2cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714bb3:{NFSU2_TR(0x714bb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc2dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714bba:{NFSU2_TR(0x714bba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc2eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714bc1:{NFSU2_TR(0x714bc1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc2full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714bc8:{NFSU2_TR(0x714bc8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc30ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714bce:{NFSU2_TR(0x714bce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc31ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714bd4:{NFSU2_TR(0x714bd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc32ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714bdb:{NFSU2_TR(0x714bdb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc33ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714be1:{NFSU2_TR(0x714be1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc34ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714be8:{NFSU2_TR(0x714be8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc35ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714bef:{NFSU2_TR(0x714bef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc36ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714bf6:{NFSU2_TR(0x714bf6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc37ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714bfc:{NFSU2_TR(0x714bfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc38ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c03:{NFSU2_TR(0x714c03);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc39ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c0a:{NFSU2_TR(0x714c0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc3aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c11:{NFSU2_TR(0x714c11);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc3bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714c17:{NFSU2_TR(0x714c17);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc3cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c1e:{NFSU2_TR(0x714c1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc3dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c25:{NFSU2_TR(0x714c25);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc3eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c2c:{NFSU2_TR(0x714c2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc3full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714c32:{NFSU2_TR(0x714c32);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc40ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c39:{NFSU2_TR(0x714c39);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc41ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714c3f:{NFSU2_TR(0x714c3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc42ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c46:{NFSU2_TR(0x714c46);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc43ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c4d:{NFSU2_TR(0x714c4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c54:{NFSU2_TR(0x714c54);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc45ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c5b:{NFSU2_TR(0x714c5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc46ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c62:{NFSU2_TR(0x714c62);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc47ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c69:{NFSU2_TR(0x714c69);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc48ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714c6f:{NFSU2_TR(0x714c6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc49ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c76:{NFSU2_TR(0x714c76);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc4aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714c7c:{NFSU2_TR(0x714c7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc4bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c83:{NFSU2_TR(0x714c83);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c8a:{NFSU2_TR(0x714c8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc4dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714c90:{NFSU2_TR(0x714c90);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc4eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714c96:{NFSU2_TR(0x714c96);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc4full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714c9d:{NFSU2_TR(0x714c9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc50ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ca3:{NFSU2_TR(0x714ca3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc51ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714caa:{NFSU2_TR(0x714caa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc52ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714cb0:{NFSU2_TR(0x714cb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc53ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714cb7:{NFSU2_TR(0x714cb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc54ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714cbd:{NFSU2_TR(0x714cbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc55ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714cc4:{NFSU2_TR(0x714cc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc56ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714cca:{NFSU2_TR(0x714cca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc57ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714cd0:{NFSU2_TR(0x714cd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc58ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714cd7:{NFSU2_TR(0x714cd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc59ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714cdd:{NFSU2_TR(0x714cdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc5aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ce3:{NFSU2_TR(0x714ce3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc5bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714cea:{NFSU2_TR(0x714cea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc5cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714cf0:{NFSU2_TR(0x714cf0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc5dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714cf7:{NFSU2_TR(0x714cf7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc5eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714cfd:{NFSU2_TR(0x714cfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc5full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d03:{NFSU2_TR(0x714d03);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc60ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d0a:{NFSU2_TR(0x714d0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc61ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d11:{NFSU2_TR(0x714d11);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc62ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d18:{NFSU2_TR(0x714d18);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc63ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d1e:{NFSU2_TR(0x714d1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc64ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d25:{NFSU2_TR(0x714d25);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc65ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d2b:{NFSU2_TR(0x714d2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc66ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d32:{NFSU2_TR(0x714d32);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc67ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d38:{NFSU2_TR(0x714d38);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc68ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d3e:{NFSU2_TR(0x714d3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc69ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d45:{NFSU2_TR(0x714d45);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc6aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d4b:{NFSU2_TR(0x714d4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc6bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d51:{NFSU2_TR(0x714d51);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc6cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d58:{NFSU2_TR(0x714d58);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc6dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d5f:{NFSU2_TR(0x714d5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc6eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d66:{NFSU2_TR(0x714d66);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc6full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d6d:{NFSU2_TR(0x714d6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc70ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d73:{NFSU2_TR(0x714d73);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc71ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d7a:{NFSU2_TR(0x714d7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc72ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d80:{NFSU2_TR(0x714d80);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc73ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d86:{NFSU2_TR(0x714d86);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc74ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714d8c:{NFSU2_TR(0x714d8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc75ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d93:{NFSU2_TR(0x714d93);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc76ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714d9a:{NFSU2_TR(0x714d9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc77ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714da0:{NFSU2_TR(0x714da0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc78ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714da7:{NFSU2_TR(0x714da7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc79ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714dae:{NFSU2_TR(0x714dae);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc7aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714db4:{NFSU2_TR(0x714db4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc7bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714dba:{NFSU2_TR(0x714dba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc7cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714dc0:{NFSU2_TR(0x714dc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc7dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714dc6:{NFSU2_TR(0x714dc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc7eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714dcd:{NFSU2_TR(0x714dcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc7full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714dd3:{NFSU2_TR(0x714dd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc80ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714dd9:{NFSU2_TR(0x714dd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc81ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714de0:{NFSU2_TR(0x714de0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc82ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714de7:{NFSU2_TR(0x714de7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc83ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ded:{NFSU2_TR(0x714ded);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc84ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714df4:{NFSU2_TR(0x714df4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc85ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714dfa:{NFSU2_TR(0x714dfa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc86ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e01:{NFSU2_TR(0x714e01);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc87ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e07:{NFSU2_TR(0x714e07);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc88ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e0e:{NFSU2_TR(0x714e0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc89ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e15:{NFSU2_TR(0x714e15);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc8aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e1c:{NFSU2_TR(0x714e1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc8bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e23:{NFSU2_TR(0x714e23);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc8cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e29:{NFSU2_TR(0x714e29);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc8dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e30:{NFSU2_TR(0x714e30);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc8eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e37:{NFSU2_TR(0x714e37);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc8full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e3d:{NFSU2_TR(0x714e3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc90ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e43:{NFSU2_TR(0x714e43);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc91ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e4a:{NFSU2_TR(0x714e4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc92ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e51:{NFSU2_TR(0x714e51);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc93ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e58:{NFSU2_TR(0x714e58);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc94ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e5e:{NFSU2_TR(0x714e5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc95ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e64:{NFSU2_TR(0x714e64);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc96ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e6a:{NFSU2_TR(0x714e6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc97ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e70:{NFSU2_TR(0x714e70);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc98ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e76:{NFSU2_TR(0x714e76);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc99ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e7d:{NFSU2_TR(0x714e7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc9aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e84:{NFSU2_TR(0x714e84);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc9bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e8a:{NFSU2_TR(0x714e8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc9cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e90:{NFSU2_TR(0x714e90);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc9dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714e96:{NFSU2_TR(0x714e96);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc9eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714e9d:{NFSU2_TR(0x714e9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc9full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ea3:{NFSU2_TR(0x714ea3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714eaa:{NFSU2_TR(0x714eaa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714eb1:{NFSU2_TR(0x714eb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714eb8:{NFSU2_TR(0x714eb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ebe:{NFSU2_TR(0x714ebe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714ec5:{NFSU2_TR(0x714ec5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ecb:{NFSU2_TR(0x714ecb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714ed2:{NFSU2_TR(0x714ed2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714ed8:{NFSU2_TR(0x714ed8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714edf:{NFSU2_TR(0x714edf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffca9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714ee6:{NFSU2_TR(0x714ee6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcaaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714eed:{NFSU2_TR(0x714eed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcabull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714ef4:{NFSU2_TR(0x714ef4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcacull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714efa:{NFSU2_TR(0x714efa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcadull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f01:{NFSU2_TR(0x714f01);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcaeull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f08:{NFSU2_TR(0x714f08);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcafull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f0f:{NFSU2_TR(0x714f0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcb0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714f15:{NFSU2_TR(0x714f15);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcb1ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f1c:{NFSU2_TR(0x714f1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcb2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f23:{NFSU2_TR(0x714f23);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcb3ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f2a:{NFSU2_TR(0x714f2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcb4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714f30:{NFSU2_TR(0x714f30);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcb5ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f37:{NFSU2_TR(0x714f37);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcb6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f3e:{NFSU2_TR(0x714f3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcb7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f45:{NFSU2_TR(0x714f45);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcb8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f4c:{NFSU2_TR(0x714f4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcb9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714f52:{NFSU2_TR(0x714f52);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcbaull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f59:{NFSU2_TR(0x714f59);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcbbull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f60:{NFSU2_TR(0x714f60);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcbcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f67:{NFSU2_TR(0x714f67);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcbdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714f6d:{NFSU2_TR(0x714f6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcbeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714f73:{NFSU2_TR(0x714f73);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcbfull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f7a:{NFSU2_TR(0x714f7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc0ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f81:{NFSU2_TR(0x714f81);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc1ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f88:{NFSU2_TR(0x714f88);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714f8e:{NFSU2_TR(0x714f8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714f95:{NFSU2_TR(0x714f95);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714f9b:{NFSU2_TR(0x714f9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc5ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714fa2:{NFSU2_TR(0x714fa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714fa8:{NFSU2_TR(0x714fa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714faf:{NFSU2_TR(0x714faf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714fb6:{NFSU2_TR(0x714fb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcc9ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714fbd:{NFSU2_TR(0x714fbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffccaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714fc4:{NFSU2_TR(0x714fc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffccbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714fca:{NFSU2_TR(0x714fca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcccull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B714fd0:{NFSU2_TR(0x714fd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffccdull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714fd7:{NFSU2_TR(0x714fd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcceull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714fde:{NFSU2_TR(0x714fde);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffccfull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B714fe5:{NFSU2_TR(0x714fe5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd0ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714fec:{NFSU2_TR(0x714fec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd1ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714ff3:{NFSU2_TR(0x714ff3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B714ffa:{NFSU2_TR(0x714ffa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x715001u,715);
}
XIT:NFSU2_TR_EXIT(0x714,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
