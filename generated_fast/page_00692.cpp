#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_693(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x692,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x692,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_692(u8* __restrict R,Cpu& c);
u32 page_692(Cpu& c){return body_692(c.regs.data(),c);}
__attribute__((noinline)) u32 body_692(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x692002:goto L692002;
case 0x692006:c.instructions+=327;goto B692006;
case 0x69200a:c.instructions+=326;goto B69200a;
case 0x692013:c.instructions+=325;goto B692013;
case 0x692017:c.instructions+=324;goto B692017;
case 0x69201b:c.instructions+=323;goto B69201b;
case 0x69201f:c.instructions+=322;goto B69201f;
case 0x692028:c.instructions+=321;goto B692028;
case 0x69202c:c.instructions+=320;goto B69202c;
case 0x692030:c.instructions+=319;goto B692030;
case 0x692034:c.instructions+=318;goto B692034;
case 0x692038:c.instructions+=317;goto B692038;
case 0x69203b:c.instructions+=316;goto B69203b;
case 0x692043:c.instructions+=315;goto B692043;
case 0x692047:c.instructions+=314;goto B692047;
case 0x69204a:c.instructions+=313;goto B69204a;
case 0x692052:c.instructions+=312;goto B692052;
case 0x692055:c.instructions+=311;goto B692055;
case 0x69205d:c.instructions+=310;goto B69205d;
case 0x692060:c.instructions+=309;goto B692060;
case 0x692063:c.instructions+=308;goto B692063;
case 0x692067:c.instructions+=307;goto B692067;
case 0x69206a:c.instructions+=306;goto B69206a;
case 0x692073:c.instructions+=305;goto B692073;
case 0x69207b:c.instructions+=304;goto B69207b;
case 0x69207f:c.instructions+=303;goto B69207f;
case 0x692082:c.instructions+=302;goto B692082;
case 0x69208b:c.instructions+=301;goto B69208b;
case 0x69208f:c.instructions+=300;goto B69208f;
case 0x692093:c.instructions+=299;goto B692093;
case 0x692097:c.instructions+=298;goto B692097;
case 0x6920a0:c.instructions+=297;goto B6920a0;
case 0x6920a4:c.instructions+=296;goto B6920a4;
case 0x6920a8:c.instructions+=295;goto B6920a8;
case 0x6920ac:c.instructions+=294;goto B6920ac;
case 0x6920b5:c.instructions+=293;goto B6920b5;
case 0x6920b9:c.instructions+=292;goto B6920b9;
case 0x6920bd:c.instructions+=291;goto B6920bd;
case 0x6920c1:c.instructions+=290;goto B6920c1;
case 0x6920c5:c.instructions+=289;goto B6920c5;
case 0x6920c9:c.instructions+=288;goto B6920c9;
case 0x6920d1:c.instructions+=287;goto B6920d1;
case 0x6920d5:c.instructions+=286;goto B6920d5;
case 0x6920d8:c.instructions+=285;goto B6920d8;
case 0x6920e0:c.instructions+=284;goto B6920e0;
case 0x6920e3:c.instructions+=283;goto B6920e3;
case 0x6920eb:c.instructions+=282;goto B6920eb;
case 0x6920ee:c.instructions+=281;goto B6920ee;
case 0x6920f1:c.instructions+=280;goto B6920f1;
case 0x6920f5:c.instructions+=279;goto B6920f5;
case 0x6920f8:c.instructions+=278;goto B6920f8;
case 0x692101:c.instructions+=277;goto B692101;
case 0x692109:c.instructions+=276;goto B692109;
case 0x69210d:c.instructions+=275;goto B69210d;
case 0x692110:c.instructions+=274;goto B692110;
case 0x692119:c.instructions+=273;goto B692119;
case 0x69211d:c.instructions+=272;goto B69211d;
case 0x692121:c.instructions+=271;goto B692121;
case 0x692125:c.instructions+=270;goto B692125;
case 0x69212e:c.instructions+=269;goto B69212e;
case 0x692132:c.instructions+=268;goto B692132;
case 0x692136:c.instructions+=267;goto B692136;
case 0x69213a:c.instructions+=266;goto B69213a;
case 0x692143:c.instructions+=265;goto B692143;
case 0x692147:c.instructions+=264;goto B692147;
case 0x69214b:c.instructions+=263;goto B69214b;
case 0x69214f:c.instructions+=262;goto B69214f;
case 0x692153:c.instructions+=261;goto B692153;
case 0x692157:c.instructions+=260;goto B692157;
case 0x69215f:c.instructions+=259;goto B69215f;
case 0x692163:c.instructions+=258;goto B692163;
case 0x692166:c.instructions+=257;goto B692166;
case 0x69216e:c.instructions+=256;goto B69216e;
case 0x692171:c.instructions+=255;goto B692171;
case 0x692179:c.instructions+=254;goto B692179;
case 0x69217c:c.instructions+=253;goto B69217c;
case 0x69217f:c.instructions+=252;goto B69217f;
case 0x692183:c.instructions+=251;goto B692183;
case 0x692186:c.instructions+=250;goto B692186;
case 0x69218f:c.instructions+=249;goto B69218f;
case 0x692197:c.instructions+=248;goto B692197;
case 0x69219b:c.instructions+=247;goto B69219b;
case 0x69219e:c.instructions+=246;goto B69219e;
case 0x6921a7:c.instructions+=245;goto B6921a7;
case 0x6921ab:c.instructions+=244;goto B6921ab;
case 0x6921af:c.instructions+=243;goto B6921af;
case 0x6921b3:c.instructions+=242;goto B6921b3;
case 0x6921bc:c.instructions+=241;goto B6921bc;
case 0x6921c0:c.instructions+=240;goto B6921c0;
case 0x6921c4:c.instructions+=239;goto B6921c4;
case 0x6921c8:c.instructions+=238;goto B6921c8;
case 0x6921d1:c.instructions+=237;goto B6921d1;
case 0x6921d5:c.instructions+=236;goto B6921d5;
case 0x6921d9:c.instructions+=235;goto B6921d9;
case 0x6921dd:c.instructions+=234;goto B6921dd;
case 0x6921e1:c.instructions+=233;goto B6921e1;
case 0x6921e4:c.instructions+=232;goto B6921e4;
case 0x6921e8:c.instructions+=231;goto B6921e8;
case 0x6921ec:c.instructions+=230;goto B6921ec;
case 0x6921ef:c.instructions+=229;goto B6921ef;
case 0x6921f4:c.instructions+=228;goto B6921f4;
case 0x6921f7:c.instructions+=227;goto B6921f7;
case 0x6921fc:c.instructions+=226;goto B6921fc;
case 0x6921ff:c.instructions+=225;goto B6921ff;
case 0x692202:c.instructions+=224;goto B692202;
case 0x692206:c.instructions+=223;goto B692206;
case 0x692209:c.instructions+=222;goto B692209;
case 0x69220f:c.instructions+=221;goto B69220f;
case 0x692214:c.instructions+=220;goto B692214;
case 0x692218:c.instructions+=219;goto B692218;
case 0x69221b:c.instructions+=218;goto B69221b;
case 0x692221:c.instructions+=217;goto B692221;
case 0x692225:c.instructions+=216;goto B692225;
case 0x692229:c.instructions+=215;goto B692229;
case 0x69222d:c.instructions+=214;goto B69222d;
case 0x692233:c.instructions+=213;goto B692233;
case 0x692237:c.instructions+=212;goto B692237;
case 0x69223b:c.instructions+=211;goto B69223b;
case 0x69223f:c.instructions+=210;goto B69223f;
case 0x692245:c.instructions+=209;goto B692245;
case 0x692249:c.instructions+=208;goto B692249;
case 0x69224d:c.instructions+=207;goto B69224d;
case 0x692251:c.instructions+=206;goto B692251;
case 0x692255:c.instructions+=205;goto B692255;
case 0x692258:c.instructions+=204;goto B692258;
case 0x69225c:c.instructions+=203;goto B69225c;
case 0x692260:c.instructions+=202;goto B692260;
case 0x692263:c.instructions+=201;goto B692263;
case 0x692268:c.instructions+=200;goto B692268;
case 0x69226b:c.instructions+=199;goto B69226b;
case 0x692270:c.instructions+=198;goto B692270;
case 0x692273:c.instructions+=197;goto B692273;
case 0x692276:c.instructions+=196;goto B692276;
case 0x69227a:c.instructions+=195;goto B69227a;
case 0x69227d:c.instructions+=194;goto B69227d;
case 0x692283:c.instructions+=193;goto B692283;
case 0x692288:c.instructions+=192;goto B692288;
case 0x69228c:c.instructions+=191;goto B69228c;
case 0x69228f:c.instructions+=190;goto B69228f;
case 0x692295:c.instructions+=189;goto B692295;
case 0x692299:c.instructions+=188;goto B692299;
case 0x69229d:c.instructions+=187;goto B69229d;
case 0x6922a1:c.instructions+=186;goto B6922a1;
case 0x6922a7:c.instructions+=185;goto B6922a7;
case 0x6922ab:c.instructions+=184;goto B6922ab;
case 0x6922af:c.instructions+=183;goto B6922af;
case 0x6922b3:c.instructions+=182;goto B6922b3;
case 0x6922b9:c.instructions+=181;goto B6922b9;
case 0x6922bd:c.instructions+=180;goto B6922bd;
case 0x6922c1:c.instructions+=179;goto B6922c1;
case 0x6922c5:c.instructions+=178;goto B6922c5;
case 0x6922c9:c.instructions+=177;goto B6922c9;
case 0x6922cd:c.instructions+=176;goto B6922cd;
case 0x6922d1:c.instructions+=175;goto B6922d1;
case 0x6922d5:c.instructions+=174;goto B6922d5;
case 0x6922d8:c.instructions+=173;goto B6922d8;
case 0x6922dd:c.instructions+=172;goto B6922dd;
case 0x6922e0:c.instructions+=171;goto B6922e0;
case 0x6922e5:c.instructions+=170;goto B6922e5;
case 0x6922e8:c.instructions+=169;goto B6922e8;
case 0x6922eb:c.instructions+=168;goto B6922eb;
case 0x6922ef:c.instructions+=167;goto B6922ef;
case 0x6922f2:c.instructions+=166;goto B6922f2;
case 0x6922f8:c.instructions+=165;goto B6922f8;
case 0x6922fd:c.instructions+=164;goto B6922fd;
case 0x692301:c.instructions+=163;goto B692301;
case 0x692304:c.instructions+=162;goto B692304;
case 0x69230a:c.instructions+=161;goto B69230a;
case 0x69230e:c.instructions+=160;goto B69230e;
case 0x692312:c.instructions+=159;goto B692312;
case 0x692316:c.instructions+=158;goto B692316;
case 0x69231c:c.instructions+=157;goto B69231c;
case 0x692320:c.instructions+=156;goto B692320;
case 0x692324:c.instructions+=155;goto B692324;
case 0x692328:c.instructions+=154;goto B692328;
case 0x69232e:c.instructions+=153;goto B69232e;
case 0x692332:c.instructions+=152;goto B692332;
case 0x692336:c.instructions+=151;goto B692336;
case 0x69233a:c.instructions+=150;goto B69233a;
case 0x69233e:c.instructions+=149;goto B69233e;
case 0x692342:c.instructions+=148;goto B692342;
case 0x692346:c.instructions+=147;goto B692346;
case 0x69234a:c.instructions+=146;goto B69234a;
case 0x69234d:c.instructions+=145;goto B69234d;
case 0x692352:c.instructions+=144;goto B692352;
case 0x692355:c.instructions+=143;goto B692355;
case 0x69235a:c.instructions+=142;goto B69235a;
case 0x69235d:c.instructions+=141;goto B69235d;
case 0x692360:c.instructions+=140;goto B692360;
case 0x692364:c.instructions+=139;goto B692364;
case 0x692367:c.instructions+=138;goto B692367;
case 0x69236d:c.instructions+=137;goto B69236d;
case 0x692372:c.instructions+=136;goto B692372;
case 0x692376:c.instructions+=135;goto B692376;
case 0x692379:c.instructions+=134;goto B692379;
case 0x69237f:c.instructions+=133;goto B69237f;
case 0x692383:c.instructions+=132;goto B692383;
case 0x692387:c.instructions+=131;goto B692387;
case 0x69238b:c.instructions+=130;goto B69238b;
case 0x692391:c.instructions+=129;goto B692391;
case 0x692395:c.instructions+=128;goto B692395;
case 0x692399:c.instructions+=127;goto B692399;
case 0x69239d:c.instructions+=126;goto B69239d;
case 0x6923a3:c.instructions+=125;goto B6923a3;
case 0x6923a7:c.instructions+=124;goto B6923a7;
case 0x6923ab:c.instructions+=123;goto B6923ab;
case 0x6923af:c.instructions+=122;goto B6923af;
case 0x6923b3:c.instructions+=121;goto B6923b3;
case 0x6923b6:c.instructions+=120;goto B6923b6;
case 0x6923ba:c.instructions+=119;goto B6923ba;
case 0x6923bf:c.instructions+=118;goto B6923bf;
case 0x6923c2:c.instructions+=117;goto B6923c2;
case 0x6923c7:c.instructions+=116;goto B6923c7;
case 0x6923ca:c.instructions+=115;goto B6923ca;
case 0x6923cf:c.instructions+=114;goto B6923cf;
case 0x6923d2:c.instructions+=113;goto B6923d2;
case 0x6923d5:c.instructions+=112;goto B6923d5;
case 0x6923d9:c.instructions+=111;goto B6923d9;
case 0x6923dc:c.instructions+=110;goto B6923dc;
case 0x6923e2:c.instructions+=109;goto B6923e2;
case 0x6923e7:c.instructions+=108;goto B6923e7;
case 0x6923eb:c.instructions+=107;goto B6923eb;
case 0x6923ee:c.instructions+=106;goto B6923ee;
case 0x6923f4:c.instructions+=105;goto B6923f4;
case 0x6923f8:c.instructions+=104;goto B6923f8;
case 0x6923fc:c.instructions+=103;goto B6923fc;
case 0x692400:c.instructions+=102;goto B692400;
case 0x692406:c.instructions+=101;goto B692406;
case 0x69240a:c.instructions+=100;goto B69240a;
case 0x69240e:c.instructions+=99;goto B69240e;
case 0x692412:c.instructions+=98;goto B692412;
case 0x692418:c.instructions+=97;goto B692418;
case 0x69241c:c.instructions+=96;goto B69241c;
case 0x692420:c.instructions+=95;goto B692420;
case 0x692424:c.instructions+=94;goto B692424;
case 0x692428:c.instructions+=93;goto B692428;
case 0x69242b:c.instructions+=92;goto B69242b;
case 0x692430:c.instructions+=91;goto B692430;
case 0x692434:c.instructions+=90;goto B692434;
case 0x692437:c.instructions+=89;goto B692437;
case 0x69243c:c.instructions+=88;goto B69243c;
case 0x69243f:c.instructions+=87;goto B69243f;
case 0x692444:c.instructions+=86;goto B692444;
case 0x692447:c.instructions+=85;goto B692447;
case 0x69244a:c.instructions+=84;goto B69244a;
case 0x69244e:c.instructions+=83;goto B69244e;
case 0x692451:c.instructions+=82;goto B692451;
case 0x692457:c.instructions+=81;goto B692457;
case 0x69245c:c.instructions+=80;goto B69245c;
case 0x692460:c.instructions+=79;goto B692460;
case 0x692463:c.instructions+=78;goto B692463;
case 0x692469:c.instructions+=77;goto B692469;
case 0x69246d:c.instructions+=76;goto B69246d;
case 0x692471:c.instructions+=75;goto B692471;
case 0x692475:c.instructions+=74;goto B692475;
case 0x69247b:c.instructions+=73;goto B69247b;
case 0x69247f:c.instructions+=72;goto B69247f;
case 0x692483:c.instructions+=71;goto B692483;
case 0x692487:c.instructions+=70;goto B692487;
case 0x69248d:c.instructions+=69;goto B69248d;
case 0x692491:c.instructions+=68;goto B692491;
case 0x692495:c.instructions+=67;goto B692495;
case 0x692499:c.instructions+=66;goto B692499;
case 0x69249d:c.instructions+=65;goto B69249d;
case 0x6924a1:c.instructions+=64;goto B6924a1;
case 0x6924a6:c.instructions+=63;goto B6924a6;
case 0x6924aa:c.instructions+=62;goto B6924aa;
case 0x6924ad:c.instructions+=61;goto B6924ad;
case 0x6924b2:c.instructions+=60;goto B6924b2;
case 0x6924b5:c.instructions+=59;goto B6924b5;
case 0x6924ba:c.instructions+=58;goto B6924ba;
case 0x6924bd:c.instructions+=57;goto B6924bd;
case 0x6924c0:c.instructions+=56;goto B6924c0;
case 0x6924c4:c.instructions+=55;goto B6924c4;
case 0x6924c7:c.instructions+=54;goto B6924c7;
case 0x6924cd:c.instructions+=53;goto B6924cd;
case 0x6924d2:c.instructions+=52;goto B6924d2;
case 0x6924d6:c.instructions+=51;goto B6924d6;
case 0x6924d9:c.instructions+=50;goto B6924d9;
case 0x6924df:c.instructions+=49;goto B6924df;
case 0x6924e3:c.instructions+=48;goto B6924e3;
case 0x6924e7:c.instructions+=47;goto B6924e7;
case 0x6924eb:c.instructions+=46;goto B6924eb;
case 0x6924f1:c.instructions+=45;goto B6924f1;
case 0x6924f5:c.instructions+=44;goto B6924f5;
case 0x6924f9:c.instructions+=43;goto B6924f9;
case 0x6924fd:c.instructions+=42;goto B6924fd;
case 0x692503:c.instructions+=41;goto B692503;
case 0x692507:c.instructions+=40;goto B692507;
case 0x69250b:c.instructions+=39;goto B69250b;
case 0x69250f:c.instructions+=38;goto B69250f;
case 0x692513:c.instructions+=37;goto B692513;
case 0x692517:c.instructions+=36;goto B692517;
case 0x69251c:c.instructions+=35;goto B69251c;
case 0x692520:c.instructions+=34;goto B692520;
case 0x692523:c.instructions+=33;goto B692523;
case 0x692528:c.instructions+=32;goto B692528;
case 0x69252b:c.instructions+=31;goto B69252b;
case 0x692530:c.instructions+=30;goto B692530;
case 0x692533:c.instructions+=29;goto B692533;
case 0x692536:c.instructions+=28;goto B692536;
case 0x69253a:c.instructions+=27;goto B69253a;
case 0x69253d:c.instructions+=26;goto B69253d;
case 0x692543:c.instructions+=25;goto B692543;
case 0x692548:c.instructions+=24;goto B692548;
case 0x69254c:c.instructions+=23;goto B69254c;
case 0x69254f:c.instructions+=22;goto B69254f;
case 0x692555:c.instructions+=21;goto B692555;
case 0x692559:c.instructions+=20;goto B692559;
case 0x69255d:c.instructions+=19;goto B69255d;
case 0x692561:c.instructions+=18;goto B692561;
case 0x692567:c.instructions+=17;goto B692567;
case 0x69256b:c.instructions+=16;goto B69256b;
case 0x69256f:c.instructions+=15;goto B69256f;
case 0x692573:c.instructions+=14;goto B692573;
case 0x692579:c.instructions+=13;goto B692579;
case 0x69257d:c.instructions+=12;goto B69257d;
case 0x692581:c.instructions+=11;goto B692581;
case 0x692585:c.instructions+=10;goto B692585;
case 0x692589:c.instructions+=9;goto B692589;
case 0x69258c:c.instructions+=8;goto B69258c;
case 0x692590:c.instructions+=7;goto B692590;
case 0x692594:c.instructions+=6;goto B692594;
case 0x692598:c.instructions+=5;goto B692598;
case 0x69259c:c.instructions+=4;goto B69259c;
case 0x6925a0:c.instructions+=3;goto B6925a0;
case 0x6925a4:c.instructions+=2;goto B6925a4;
case 0x6925a8:c.instructions+=1;goto B6925a8;
case 0x6925ad:goto L6925ad;
case 0x6925b0:c.instructions+=253;goto B6925b0;
case 0x6925b5:c.instructions+=252;goto B6925b5;
case 0x6925ba:c.instructions+=251;goto B6925ba;
case 0x6925bf:c.instructions+=250;goto B6925bf;
case 0x6925c4:c.instructions+=249;goto B6925c4;
case 0x6925c7:c.instructions+=248;goto B6925c7;
case 0x6925ca:c.instructions+=247;goto B6925ca;
case 0x6925cd:c.instructions+=246;goto B6925cd;
case 0x6925d0:c.instructions+=245;goto B6925d0;
case 0x6925d3:c.instructions+=244;goto B6925d3;
case 0x6925d7:c.instructions+=243;goto B6925d7;
case 0x6925dc:c.instructions+=242;goto B6925dc;
case 0x6925df:c.instructions+=241;goto B6925df;
case 0x6925e4:c.instructions+=240;goto B6925e4;
case 0x6925e9:c.instructions+=239;goto B6925e9;
case 0x6925ec:c.instructions+=238;goto B6925ec;
case 0x6925ef:c.instructions+=237;goto B6925ef;
case 0x6925f3:c.instructions+=236;goto B6925f3;
case 0x6925f7:c.instructions+=235;goto B6925f7;
case 0x6925fa:c.instructions+=234;goto B6925fa;
case 0x6925ff:c.instructions+=233;goto B6925ff;
case 0x692602:c.instructions+=232;goto B692602;
case 0x692605:c.instructions+=231;goto B692605;
case 0x692609:c.instructions+=230;goto B692609;
case 0x69260c:c.instructions+=229;goto B69260c;
case 0x69260f:c.instructions+=228;goto B69260f;
case 0x692613:c.instructions+=227;goto B692613;
case 0x692617:c.instructions+=226;goto B692617;
case 0x69261b:c.instructions+=225;goto B69261b;
case 0x69261e:c.instructions+=224;goto B69261e;
case 0x692622:c.instructions+=223;goto B692622;
case 0x692626:c.instructions+=222;goto B692626;
case 0x692629:c.instructions+=221;goto B692629;
case 0x69262e:c.instructions+=220;goto B69262e;
case 0x692631:c.instructions+=219;goto B692631;
case 0x692636:c.instructions+=218;goto B692636;
case 0x692639:c.instructions+=217;goto B692639;
case 0x69263c:c.instructions+=216;goto B69263c;
case 0x692640:c.instructions+=215;goto B692640;
case 0x692643:c.instructions+=214;goto B692643;
case 0x692649:c.instructions+=213;goto B692649;
case 0x69264e:c.instructions+=212;goto B69264e;
case 0x692652:c.instructions+=211;goto B692652;
case 0x692655:c.instructions+=210;goto B692655;
case 0x69265b:c.instructions+=209;goto B69265b;
case 0x69265f:c.instructions+=208;goto B69265f;
case 0x692663:c.instructions+=207;goto B692663;
case 0x692667:c.instructions+=206;goto B692667;
case 0x69266d:c.instructions+=205;goto B69266d;
case 0x692671:c.instructions+=204;goto B692671;
case 0x692675:c.instructions+=203;goto B692675;
case 0x692679:c.instructions+=202;goto B692679;
case 0x69267f:c.instructions+=201;goto B69267f;
case 0x692683:c.instructions+=200;goto B692683;
case 0x692687:c.instructions+=199;goto B692687;
case 0x69268b:c.instructions+=198;goto B69268b;
case 0x69268f:c.instructions+=197;goto B69268f;
case 0x692692:c.instructions+=196;goto B692692;
case 0x692696:c.instructions+=195;goto B692696;
case 0x69269a:c.instructions+=194;goto B69269a;
case 0x69269d:c.instructions+=193;goto B69269d;
case 0x6926a2:c.instructions+=192;goto B6926a2;
case 0x6926a5:c.instructions+=191;goto B6926a5;
case 0x6926aa:c.instructions+=190;goto B6926aa;
case 0x6926ad:c.instructions+=189;goto B6926ad;
case 0x6926b0:c.instructions+=188;goto B6926b0;
case 0x6926b4:c.instructions+=187;goto B6926b4;
case 0x6926b7:c.instructions+=186;goto B6926b7;
case 0x6926bd:c.instructions+=185;goto B6926bd;
case 0x6926c2:c.instructions+=184;goto B6926c2;
case 0x6926c6:c.instructions+=183;goto B6926c6;
case 0x6926c9:c.instructions+=182;goto B6926c9;
case 0x6926cf:c.instructions+=181;goto B6926cf;
case 0x6926d3:c.instructions+=180;goto B6926d3;
case 0x6926d7:c.instructions+=179;goto B6926d7;
case 0x6926db:c.instructions+=178;goto B6926db;
case 0x6926e1:c.instructions+=177;goto B6926e1;
case 0x6926e5:c.instructions+=176;goto B6926e5;
case 0x6926e9:c.instructions+=175;goto B6926e9;
case 0x6926ed:c.instructions+=174;goto B6926ed;
case 0x6926f3:c.instructions+=173;goto B6926f3;
case 0x6926f7:c.instructions+=172;goto B6926f7;
case 0x6926fb:c.instructions+=171;goto B6926fb;
case 0x6926ff:c.instructions+=170;goto B6926ff;
case 0x692703:c.instructions+=169;goto B692703;
case 0x692707:c.instructions+=168;goto B692707;
case 0x69270b:c.instructions+=167;goto B69270b;
case 0x69270f:c.instructions+=166;goto B69270f;
case 0x692712:c.instructions+=165;goto B692712;
case 0x692717:c.instructions+=164;goto B692717;
case 0x69271a:c.instructions+=163;goto B69271a;
case 0x69271f:c.instructions+=162;goto B69271f;
case 0x692722:c.instructions+=161;goto B692722;
case 0x692725:c.instructions+=160;goto B692725;
case 0x692729:c.instructions+=159;goto B692729;
case 0x69272c:c.instructions+=158;goto B69272c;
case 0x692732:c.instructions+=157;goto B692732;
case 0x692737:c.instructions+=156;goto B692737;
case 0x69273b:c.instructions+=155;goto B69273b;
case 0x69273e:c.instructions+=154;goto B69273e;
case 0x692744:c.instructions+=153;goto B692744;
case 0x692748:c.instructions+=152;goto B692748;
case 0x69274c:c.instructions+=151;goto B69274c;
case 0x692750:c.instructions+=150;goto B692750;
case 0x692756:c.instructions+=149;goto B692756;
case 0x69275a:c.instructions+=148;goto B69275a;
case 0x69275e:c.instructions+=147;goto B69275e;
case 0x692762:c.instructions+=146;goto B692762;
case 0x692768:c.instructions+=145;goto B692768;
case 0x69276c:c.instructions+=144;goto B69276c;
case 0x692770:c.instructions+=143;goto B692770;
case 0x692774:c.instructions+=142;goto B692774;
case 0x692778:c.instructions+=141;goto B692778;
case 0x69277c:c.instructions+=140;goto B69277c;
case 0x692780:c.instructions+=139;goto B692780;
case 0x692784:c.instructions+=138;goto B692784;
case 0x692787:c.instructions+=137;goto B692787;
case 0x69278c:c.instructions+=136;goto B69278c;
case 0x69278f:c.instructions+=135;goto B69278f;
case 0x692794:c.instructions+=134;goto B692794;
case 0x692797:c.instructions+=133;goto B692797;
case 0x69279a:c.instructions+=132;goto B69279a;
case 0x69279e:c.instructions+=131;goto B69279e;
case 0x6927a1:c.instructions+=130;goto B6927a1;
case 0x6927a7:c.instructions+=129;goto B6927a7;
case 0x6927ac:c.instructions+=128;goto B6927ac;
case 0x6927b0:c.instructions+=127;goto B6927b0;
case 0x6927b3:c.instructions+=126;goto B6927b3;
case 0x6927b9:c.instructions+=125;goto B6927b9;
case 0x6927bd:c.instructions+=124;goto B6927bd;
case 0x6927c1:c.instructions+=123;goto B6927c1;
case 0x6927c5:c.instructions+=122;goto B6927c5;
case 0x6927cb:c.instructions+=121;goto B6927cb;
case 0x6927cf:c.instructions+=120;goto B6927cf;
case 0x6927d3:c.instructions+=119;goto B6927d3;
case 0x6927d7:c.instructions+=118;goto B6927d7;
case 0x6927dd:c.instructions+=117;goto B6927dd;
case 0x6927e1:c.instructions+=116;goto B6927e1;
case 0x6927e5:c.instructions+=115;goto B6927e5;
case 0x6927e9:c.instructions+=114;goto B6927e9;
case 0x6927ed:c.instructions+=113;goto B6927ed;
case 0x6927f0:c.instructions+=112;goto B6927f0;
case 0x6927f4:c.instructions+=111;goto B6927f4;
case 0x6927f9:c.instructions+=110;goto B6927f9;
case 0x6927fc:c.instructions+=109;goto B6927fc;
case 0x692801:c.instructions+=108;goto B692801;
case 0x692804:c.instructions+=107;goto B692804;
case 0x692809:c.instructions+=106;goto B692809;
case 0x69280c:c.instructions+=105;goto B69280c;
case 0x69280f:c.instructions+=104;goto B69280f;
case 0x692813:c.instructions+=103;goto B692813;
case 0x692816:c.instructions+=102;goto B692816;
case 0x69281c:c.instructions+=101;goto B69281c;
case 0x692821:c.instructions+=100;goto B692821;
case 0x692825:c.instructions+=99;goto B692825;
case 0x692828:c.instructions+=98;goto B692828;
case 0x69282e:c.instructions+=97;goto B69282e;
case 0x692832:c.instructions+=96;goto B692832;
case 0x692836:c.instructions+=95;goto B692836;
case 0x69283a:c.instructions+=94;goto B69283a;
case 0x692840:c.instructions+=93;goto B692840;
case 0x692844:c.instructions+=92;goto B692844;
case 0x692848:c.instructions+=91;goto B692848;
case 0x69284c:c.instructions+=90;goto B69284c;
case 0x692852:c.instructions+=89;goto B692852;
case 0x692856:c.instructions+=88;goto B692856;
case 0x69285a:c.instructions+=87;goto B69285a;
case 0x69285e:c.instructions+=86;goto B69285e;
case 0x692862:c.instructions+=85;goto B692862;
case 0x692865:c.instructions+=84;goto B692865;
case 0x69286a:c.instructions+=83;goto B69286a;
case 0x69286e:c.instructions+=82;goto B69286e;
case 0x692871:c.instructions+=81;goto B692871;
case 0x692876:c.instructions+=80;goto B692876;
case 0x692879:c.instructions+=79;goto B692879;
case 0x69287e:c.instructions+=78;goto B69287e;
case 0x692881:c.instructions+=77;goto B692881;
case 0x692884:c.instructions+=76;goto B692884;
case 0x692888:c.instructions+=75;goto B692888;
case 0x69288b:c.instructions+=74;goto B69288b;
case 0x692891:c.instructions+=73;goto B692891;
case 0x692896:c.instructions+=72;goto B692896;
case 0x69289a:c.instructions+=71;goto B69289a;
case 0x69289d:c.instructions+=70;goto B69289d;
case 0x6928a3:c.instructions+=69;goto B6928a3;
case 0x6928a7:c.instructions+=68;goto B6928a7;
case 0x6928ab:c.instructions+=67;goto B6928ab;
case 0x6928af:c.instructions+=66;goto B6928af;
case 0x6928b5:c.instructions+=65;goto B6928b5;
case 0x6928b9:c.instructions+=64;goto B6928b9;
case 0x6928bd:c.instructions+=63;goto B6928bd;
case 0x6928c1:c.instructions+=62;goto B6928c1;
case 0x6928c7:c.instructions+=61;goto B6928c7;
case 0x6928cb:c.instructions+=60;goto B6928cb;
case 0x6928cf:c.instructions+=59;goto B6928cf;
case 0x6928d3:c.instructions+=58;goto B6928d3;
case 0x6928d7:c.instructions+=57;goto B6928d7;
case 0x6928db:c.instructions+=56;goto B6928db;
case 0x6928e0:c.instructions+=55;goto B6928e0;
case 0x6928e4:c.instructions+=54;goto B6928e4;
case 0x6928e7:c.instructions+=53;goto B6928e7;
case 0x6928ec:c.instructions+=52;goto B6928ec;
case 0x6928ef:c.instructions+=51;goto B6928ef;
case 0x6928f4:c.instructions+=50;goto B6928f4;
case 0x6928f7:c.instructions+=49;goto B6928f7;
case 0x6928fa:c.instructions+=48;goto B6928fa;
case 0x6928fe:c.instructions+=47;goto B6928fe;
case 0x692901:c.instructions+=46;goto B692901;
case 0x692907:c.instructions+=45;goto B692907;
case 0x69290c:c.instructions+=44;goto B69290c;
case 0x692910:c.instructions+=43;goto B692910;
case 0x692913:c.instructions+=42;goto B692913;
case 0x692919:c.instructions+=41;goto B692919;
case 0x69291d:c.instructions+=40;goto B69291d;
case 0x692921:c.instructions+=39;goto B692921;
case 0x692925:c.instructions+=38;goto B692925;
case 0x69292b:c.instructions+=37;goto B69292b;
case 0x69292f:c.instructions+=36;goto B69292f;
case 0x692933:c.instructions+=35;goto B692933;
case 0x692937:c.instructions+=34;goto B692937;
case 0x69293d:c.instructions+=33;goto B69293d;
case 0x692941:c.instructions+=32;goto B692941;
case 0x692945:c.instructions+=31;goto B692945;
case 0x692949:c.instructions+=30;goto B692949;
case 0x69294d:c.instructions+=29;goto B69294d;
case 0x692951:c.instructions+=28;goto B692951;
case 0x692956:c.instructions+=27;goto B692956;
case 0x69295a:c.instructions+=26;goto B69295a;
case 0x69295d:c.instructions+=25;goto B69295d;
case 0x692962:c.instructions+=24;goto B692962;
case 0x692965:c.instructions+=23;goto B692965;
case 0x69296a:c.instructions+=22;goto B69296a;
case 0x69296d:c.instructions+=21;goto B69296d;
case 0x692970:c.instructions+=20;goto B692970;
case 0x692974:c.instructions+=19;goto B692974;
case 0x692977:c.instructions+=18;goto B692977;
case 0x69297d:c.instructions+=17;goto B69297d;
case 0x692982:c.instructions+=16;goto B692982;
case 0x692986:c.instructions+=15;goto B692986;
case 0x692989:c.instructions+=14;goto B692989;
case 0x69298f:c.instructions+=13;goto B69298f;
case 0x692993:c.instructions+=12;goto B692993;
case 0x692997:c.instructions+=11;goto B692997;
case 0x69299b:c.instructions+=10;goto B69299b;
case 0x6929a1:c.instructions+=9;goto B6929a1;
case 0x6929a5:c.instructions+=8;goto B6929a5;
case 0x6929a9:c.instructions+=7;goto B6929a9;
case 0x6929ad:c.instructions+=6;goto B6929ad;
case 0x6929b3:c.instructions+=5;goto B6929b3;
case 0x6929b7:c.instructions+=4;goto B6929b7;
case 0x6929bb:c.instructions+=3;goto B6929bb;
case 0x6929bf:c.instructions+=2;goto B6929bf;
case 0x6929c3:c.instructions+=1;goto B6929c3;
case 0x6929c8:goto L6929c8;
case 0x6929cb:c.instructions+=2;goto B6929cb;
case 0x6929cd:c.instructions+=1;goto B6929cd;
case 0x6929cf:goto L6929cf;
case 0x6929d6:c.instructions+=23;goto B6929d6;
case 0x6929d9:c.instructions+=22;goto B6929d9;
case 0x6929dd:c.instructions+=21;goto B6929dd;
case 0x6929e0:c.instructions+=20;goto B6929e0;
case 0x6929e4:c.instructions+=19;goto B6929e4;
case 0x6929e7:c.instructions+=18;goto B6929e7;
case 0x6929ea:c.instructions+=17;goto B6929ea;
case 0x6929ed:c.instructions+=16;goto B6929ed;
case 0x6929f1:c.instructions+=15;goto B6929f1;
case 0x6929f5:c.instructions+=14;goto B6929f5;
case 0x6929f9:c.instructions+=13;goto B6929f9;
case 0x6929fd:c.instructions+=12;goto B6929fd;
case 0x692a01:c.instructions+=11;goto B692a01;
case 0x692a05:c.instructions+=10;goto B692a05;
case 0x692a09:c.instructions+=9;goto B692a09;
case 0x692a0c:c.instructions+=8;goto B692a0c;
case 0x692a10:c.instructions+=7;goto B692a10;
case 0x692a13:c.instructions+=6;goto B692a13;
case 0x692a16:c.instructions+=5;goto B692a16;
case 0x692a19:c.instructions+=4;goto B692a19;
case 0x692a1d:c.instructions+=3;goto B692a1d;
case 0x692a21:c.instructions+=2;goto B692a21;
case 0x692a25:c.instructions+=1;goto B692a25;
case 0x692a27:goto L692a27;
case 0x692a2e:c.instructions+=16;goto B692a2e;
case 0x692a31:c.instructions+=15;goto B692a31;
case 0x692a35:c.instructions+=14;goto B692a35;
case 0x692a38:c.instructions+=13;goto B692a38;
case 0x692a3b:c.instructions+=12;goto B692a3b;
case 0x692a3e:c.instructions+=11;goto B692a3e;
case 0x692a41:c.instructions+=10;goto B692a41;
case 0x692a44:c.instructions+=9;goto B692a44;
case 0x692a47:c.instructions+=8;goto B692a47;
case 0x692a4b:c.instructions+=7;goto B692a4b;
case 0x692a4f:c.instructions+=6;goto B692a4f;
case 0x692a53:c.instructions+=5;goto B692a53;
case 0x692a57:c.instructions+=4;goto B692a57;
case 0x692a5b:c.instructions+=3;goto B692a5b;
case 0x692a5f:c.instructions+=2;goto B692a5f;
case 0x692a63:c.instructions+=1;goto B692a63;
case 0x692a65:goto L692a65;
case 0x692a6c:c.instructions+=10;goto B692a6c;
case 0x692a6f:c.instructions+=9;goto B692a6f;
case 0x692a73:c.instructions+=8;goto B692a73;
case 0x692a76:c.instructions+=7;goto B692a76;
case 0x692a7a:c.instructions+=6;goto B692a7a;
case 0x692a7e:c.instructions+=5;goto B692a7e;
case 0x692a82:c.instructions+=4;goto B692a82;
case 0x692a86:c.instructions+=3;goto B692a86;
case 0x692a8a:c.instructions+=2;goto B692a8a;
case 0x692a8e:c.instructions+=1;goto B692a8e;
case 0x692a92:goto L692a92;
case 0x692a95:c.instructions+=3;goto B692a95;
case 0x692a98:c.instructions+=2;goto B692a98;
case 0x692a9a:c.instructions+=1;goto B692a9a;
case 0x692aa0:goto L692aa0;
case 0x692aa3:c.instructions+=45;goto B692aa3;
case 0x692aa7:c.instructions+=44;goto B692aa7;
case 0x692aab:c.instructions+=43;goto B692aab;
case 0x692aae:c.instructions+=42;goto B692aae;
case 0x692ab1:c.instructions+=41;goto B692ab1;
case 0x692ab5:c.instructions+=40;goto B692ab5;
case 0x692ab8:c.instructions+=39;goto B692ab8;
case 0x692abb:c.instructions+=38;goto B692abb;
case 0x692abf:c.instructions+=37;goto B692abf;
case 0x692ac2:c.instructions+=36;goto B692ac2;
case 0x692ac6:c.instructions+=35;goto B692ac6;
case 0x692ac9:c.instructions+=34;goto B692ac9;
case 0x692acd:c.instructions+=33;goto B692acd;
case 0x692ad1:c.instructions+=32;goto B692ad1;
case 0x692ad5:c.instructions+=31;goto B692ad5;
case 0x692ad9:c.instructions+=30;goto B692ad9;
case 0x692adc:c.instructions+=29;goto B692adc;
case 0x692ae4:c.instructions+=28;goto B692ae4;
case 0x692ae7:c.instructions+=27;goto B692ae7;
case 0x692aea:c.instructions+=26;goto B692aea;
case 0x692aee:c.instructions+=25;goto B692aee;
case 0x692af2:c.instructions+=24;goto B692af2;
case 0x692af6:c.instructions+=23;goto B692af6;
case 0x692afa:c.instructions+=22;goto B692afa;
case 0x692afe:c.instructions+=21;goto B692afe;
case 0x692b02:c.instructions+=20;goto B692b02;
case 0x692b0a:c.instructions+=19;goto B692b0a;
case 0x692b0d:c.instructions+=18;goto B692b0d;
case 0x692b10:c.instructions+=17;goto B692b10;
case 0x692b15:c.instructions+=16;goto B692b15;
case 0x692b18:c.instructions+=15;goto B692b18;
case 0x692b1b:c.instructions+=14;goto B692b1b;
case 0x692b1e:c.instructions+=13;goto B692b1e;
case 0x692b21:c.instructions+=12;goto B692b21;
case 0x692b26:c.instructions+=11;goto B692b26;
case 0x692b29:c.instructions+=10;goto B692b29;
case 0x692b2e:c.instructions+=9;goto B692b2e;
case 0x692b31:c.instructions+=8;goto B692b31;
case 0x692b36:c.instructions+=7;goto B692b36;
case 0x692b3d:c.instructions+=6;goto B692b3d;
case 0x692b42:c.instructions+=5;goto B692b42;
case 0x692b47:c.instructions+=4;goto B692b47;
case 0x692b4c:c.instructions+=3;goto B692b4c;
case 0x692b51:c.instructions+=2;goto B692b51;
case 0x692b53:c.instructions+=1;goto B692b53;
case 0x692b59:goto L692b59;
case 0x692b5d:c.instructions+=128;goto B692b5d;
case 0x692b61:c.instructions+=127;goto B692b61;
case 0x692b64:c.instructions+=126;goto B692b64;
case 0x692b68:c.instructions+=125;goto B692b68;
case 0x692b6c:c.instructions+=124;goto B692b6c;
case 0x692b70:c.instructions+=123;goto B692b70;
case 0x692b74:c.instructions+=122;goto B692b74;
case 0x692b78:c.instructions+=121;goto B692b78;
case 0x692b7b:c.instructions+=120;goto B692b7b;
case 0x692b7f:c.instructions+=119;goto B692b7f;
case 0x692b84:c.instructions+=118;goto B692b84;
case 0x692b87:c.instructions+=117;goto B692b87;
case 0x692b8c:c.instructions+=116;goto B692b8c;
case 0x692b8f:c.instructions+=115;goto B692b8f;
case 0x692b94:c.instructions+=114;goto B692b94;
case 0x692b97:c.instructions+=113;goto B692b97;
case 0x692b9a:c.instructions+=112;goto B692b9a;
case 0x692b9e:c.instructions+=111;goto B692b9e;
case 0x692ba1:c.instructions+=110;goto B692ba1;
case 0x692ba7:c.instructions+=109;goto B692ba7;
case 0x692bac:c.instructions+=108;goto B692bac;
case 0x692bb0:c.instructions+=107;goto B692bb0;
case 0x692bb3:c.instructions+=106;goto B692bb3;
case 0x692bb9:c.instructions+=105;goto B692bb9;
case 0x692bbd:c.instructions+=104;goto B692bbd;
case 0x692bc1:c.instructions+=103;goto B692bc1;
case 0x692bc5:c.instructions+=102;goto B692bc5;
case 0x692bcb:c.instructions+=101;goto B692bcb;
case 0x692bcf:c.instructions+=100;goto B692bcf;
case 0x692bd3:c.instructions+=99;goto B692bd3;
case 0x692bd7:c.instructions+=98;goto B692bd7;
case 0x692bdd:c.instructions+=97;goto B692bdd;
case 0x692be1:c.instructions+=96;goto B692be1;
case 0x692be5:c.instructions+=95;goto B692be5;
case 0x692be9:c.instructions+=94;goto B692be9;
case 0x692bed:c.instructions+=93;goto B692bed;
case 0x692bf0:c.instructions+=92;goto B692bf0;
case 0x692bf5:c.instructions+=91;goto B692bf5;
case 0x692bf9:c.instructions+=90;goto B692bf9;
case 0x692bfc:c.instructions+=89;goto B692bfc;
case 0x692c01:c.instructions+=88;goto B692c01;
case 0x692c04:c.instructions+=87;goto B692c04;
case 0x692c09:c.instructions+=86;goto B692c09;
case 0x692c0c:c.instructions+=85;goto B692c0c;
case 0x692c0f:c.instructions+=84;goto B692c0f;
case 0x692c13:c.instructions+=83;goto B692c13;
case 0x692c16:c.instructions+=82;goto B692c16;
case 0x692c1c:c.instructions+=81;goto B692c1c;
case 0x692c21:c.instructions+=80;goto B692c21;
case 0x692c25:c.instructions+=79;goto B692c25;
case 0x692c28:c.instructions+=78;goto B692c28;
case 0x692c2e:c.instructions+=77;goto B692c2e;
case 0x692c32:c.instructions+=76;goto B692c32;
case 0x692c36:c.instructions+=75;goto B692c36;
case 0x692c3a:c.instructions+=74;goto B692c3a;
case 0x692c40:c.instructions+=73;goto B692c40;
case 0x692c44:c.instructions+=72;goto B692c44;
case 0x692c48:c.instructions+=71;goto B692c48;
case 0x692c4c:c.instructions+=70;goto B692c4c;
case 0x692c52:c.instructions+=69;goto B692c52;
case 0x692c56:c.instructions+=68;goto B692c56;
case 0x692c5a:c.instructions+=67;goto B692c5a;
case 0x692c5e:c.instructions+=66;goto B692c5e;
case 0x692c62:c.instructions+=65;goto B692c62;
case 0x692c66:c.instructions+=64;goto B692c66;
case 0x692c6b:c.instructions+=63;goto B692c6b;
case 0x692c6f:c.instructions+=62;goto B692c6f;
case 0x692c72:c.instructions+=61;goto B692c72;
case 0x692c77:c.instructions+=60;goto B692c77;
case 0x692c7a:c.instructions+=59;goto B692c7a;
case 0x692c7f:c.instructions+=58;goto B692c7f;
case 0x692c82:c.instructions+=57;goto B692c82;
case 0x692c85:c.instructions+=56;goto B692c85;
case 0x692c89:c.instructions+=55;goto B692c89;
case 0x692c8c:c.instructions+=54;goto B692c8c;
case 0x692c92:c.instructions+=53;goto B692c92;
case 0x692c97:c.instructions+=52;goto B692c97;
case 0x692c9b:c.instructions+=51;goto B692c9b;
case 0x692c9e:c.instructions+=50;goto B692c9e;
case 0x692ca4:c.instructions+=49;goto B692ca4;
case 0x692ca8:c.instructions+=48;goto B692ca8;
case 0x692cac:c.instructions+=47;goto B692cac;
case 0x692cb0:c.instructions+=46;goto B692cb0;
case 0x692cb6:c.instructions+=45;goto B692cb6;
case 0x692cba:c.instructions+=44;goto B692cba;
case 0x692cbe:c.instructions+=43;goto B692cbe;
case 0x692cc2:c.instructions+=42;goto B692cc2;
case 0x692cc8:c.instructions+=41;goto B692cc8;
case 0x692ccc:c.instructions+=40;goto B692ccc;
case 0x692cd0:c.instructions+=39;goto B692cd0;
case 0x692cd4:c.instructions+=38;goto B692cd4;
case 0x692cd8:c.instructions+=37;goto B692cd8;
case 0x692cdc:c.instructions+=36;goto B692cdc;
case 0x692ce1:c.instructions+=35;goto B692ce1;
case 0x692ce5:c.instructions+=34;goto B692ce5;
case 0x692ce8:c.instructions+=33;goto B692ce8;
case 0x692ced:c.instructions+=32;goto B692ced;
case 0x692cf0:c.instructions+=31;goto B692cf0;
case 0x692cf5:c.instructions+=30;goto B692cf5;
case 0x692cf8:c.instructions+=29;goto B692cf8;
case 0x692cfb:c.instructions+=28;goto B692cfb;
case 0x692cff:c.instructions+=27;goto B692cff;
case 0x692d02:c.instructions+=26;goto B692d02;
case 0x692d08:c.instructions+=25;goto B692d08;
case 0x692d0d:c.instructions+=24;goto B692d0d;
case 0x692d11:c.instructions+=23;goto B692d11;
case 0x692d14:c.instructions+=22;goto B692d14;
case 0x692d1a:c.instructions+=21;goto B692d1a;
case 0x692d1e:c.instructions+=20;goto B692d1e;
case 0x692d22:c.instructions+=19;goto B692d22;
case 0x692d26:c.instructions+=18;goto B692d26;
case 0x692d2c:c.instructions+=17;goto B692d2c;
case 0x692d30:c.instructions+=16;goto B692d30;
case 0x692d34:c.instructions+=15;goto B692d34;
case 0x692d38:c.instructions+=14;goto B692d38;
case 0x692d3e:c.instructions+=13;goto B692d3e;
case 0x692d42:c.instructions+=12;goto B692d42;
case 0x692d46:c.instructions+=11;goto B692d46;
case 0x692d4a:c.instructions+=10;goto B692d4a;
case 0x692d4e:c.instructions+=9;goto B692d4e;
case 0x692d52:c.instructions+=8;goto B692d52;
case 0x692d56:c.instructions+=7;goto B692d56;
case 0x692d59:c.instructions+=6;goto B692d59;
case 0x692d5d:c.instructions+=5;goto B692d5d;
case 0x692d61:c.instructions+=4;goto B692d61;
case 0x692d65:c.instructions+=3;goto B692d65;
case 0x692d69:c.instructions+=2;goto B692d69;
case 0x692d6d:c.instructions+=1;goto B692d6d;
case 0x692d72:goto L692d72;
case 0x692d75:c.instructions+=111;goto B692d75;
case 0x692d79:c.instructions+=110;goto B692d79;
case 0x692d7e:c.instructions+=109;goto B692d7e;
case 0x692d81:c.instructions+=108;goto B692d81;
case 0x692d86:c.instructions+=107;goto B692d86;
case 0x692d89:c.instructions+=106;goto B692d89;
case 0x692d8e:c.instructions+=105;goto B692d8e;
case 0x692d91:c.instructions+=104;goto B692d91;
case 0x692d94:c.instructions+=103;goto B692d94;
case 0x692d98:c.instructions+=102;goto B692d98;
case 0x692d9b:c.instructions+=101;goto B692d9b;
case 0x692da1:c.instructions+=100;goto B692da1;
case 0x692da6:c.instructions+=99;goto B692da6;
case 0x692daa:c.instructions+=98;goto B692daa;
case 0x692dad:c.instructions+=97;goto B692dad;
case 0x692db3:c.instructions+=96;goto B692db3;
case 0x692db7:c.instructions+=95;goto B692db7;
case 0x692dbb:c.instructions+=94;goto B692dbb;
case 0x692dbf:c.instructions+=93;goto B692dbf;
case 0x692dc5:c.instructions+=92;goto B692dc5;
case 0x692dc9:c.instructions+=91;goto B692dc9;
case 0x692dcd:c.instructions+=90;goto B692dcd;
case 0x692dd1:c.instructions+=89;goto B692dd1;
case 0x692dd7:c.instructions+=88;goto B692dd7;
case 0x692ddb:c.instructions+=87;goto B692ddb;
case 0x692ddf:c.instructions+=86;goto B692ddf;
case 0x692de3:c.instructions+=85;goto B692de3;
case 0x692de7:c.instructions+=84;goto B692de7;
case 0x692dea:c.instructions+=83;goto B692dea;
case 0x692def:c.instructions+=82;goto B692def;
case 0x692df3:c.instructions+=81;goto B692df3;
case 0x692df6:c.instructions+=80;goto B692df6;
case 0x692dfb:c.instructions+=79;goto B692dfb;
case 0x692dfe:c.instructions+=78;goto B692dfe;
case 0x692e03:c.instructions+=77;goto B692e03;
case 0x692e06:c.instructions+=76;goto B692e06;
case 0x692e09:c.instructions+=75;goto B692e09;
case 0x692e0d:c.instructions+=74;goto B692e0d;
case 0x692e10:c.instructions+=73;goto B692e10;
case 0x692e16:c.instructions+=72;goto B692e16;
case 0x692e1b:c.instructions+=71;goto B692e1b;
case 0x692e1f:c.instructions+=70;goto B692e1f;
case 0x692e22:c.instructions+=69;goto B692e22;
case 0x692e28:c.instructions+=68;goto B692e28;
case 0x692e2c:c.instructions+=67;goto B692e2c;
case 0x692e30:c.instructions+=66;goto B692e30;
case 0x692e34:c.instructions+=65;goto B692e34;
case 0x692e3a:c.instructions+=64;goto B692e3a;
case 0x692e3e:c.instructions+=63;goto B692e3e;
case 0x692e42:c.instructions+=62;goto B692e42;
case 0x692e46:c.instructions+=61;goto B692e46;
case 0x692e4c:c.instructions+=60;goto B692e4c;
case 0x692e50:c.instructions+=59;goto B692e50;
case 0x692e54:c.instructions+=58;goto B692e54;
case 0x692e58:c.instructions+=57;goto B692e58;
case 0x692e5c:c.instructions+=56;goto B692e5c;
case 0x692e60:c.instructions+=55;goto B692e60;
case 0x692e65:c.instructions+=54;goto B692e65;
case 0x692e69:c.instructions+=53;goto B692e69;
case 0x692e6c:c.instructions+=52;goto B692e6c;
case 0x692e71:c.instructions+=51;goto B692e71;
case 0x692e74:c.instructions+=50;goto B692e74;
case 0x692e79:c.instructions+=49;goto B692e79;
case 0x692e7c:c.instructions+=48;goto B692e7c;
case 0x692e7f:c.instructions+=47;goto B692e7f;
case 0x692e83:c.instructions+=46;goto B692e83;
case 0x692e86:c.instructions+=45;goto B692e86;
case 0x692e8c:c.instructions+=44;goto B692e8c;
case 0x692e91:c.instructions+=43;goto B692e91;
case 0x692e95:c.instructions+=42;goto B692e95;
case 0x692e98:c.instructions+=41;goto B692e98;
case 0x692e9e:c.instructions+=40;goto B692e9e;
case 0x692ea2:c.instructions+=39;goto B692ea2;
case 0x692ea6:c.instructions+=38;goto B692ea6;
case 0x692eaa:c.instructions+=37;goto B692eaa;
case 0x692eb0:c.instructions+=36;goto B692eb0;
case 0x692eb4:c.instructions+=35;goto B692eb4;
case 0x692eb8:c.instructions+=34;goto B692eb8;
case 0x692ebc:c.instructions+=33;goto B692ebc;
case 0x692ec2:c.instructions+=32;goto B692ec2;
case 0x692ec6:c.instructions+=31;goto B692ec6;
case 0x692eca:c.instructions+=30;goto B692eca;
case 0x692ece:c.instructions+=29;goto B692ece;
case 0x692ed2:c.instructions+=28;goto B692ed2;
case 0x692ed6:c.instructions+=27;goto B692ed6;
case 0x692edb:c.instructions+=26;goto B692edb;
case 0x692edf:c.instructions+=25;goto B692edf;
case 0x692ee2:c.instructions+=24;goto B692ee2;
case 0x692ee7:c.instructions+=23;goto B692ee7;
case 0x692eea:c.instructions+=22;goto B692eea;
case 0x692eef:c.instructions+=21;goto B692eef;
case 0x692ef2:c.instructions+=20;goto B692ef2;
case 0x692ef5:c.instructions+=19;goto B692ef5;
case 0x692ef9:c.instructions+=18;goto B692ef9;
case 0x692efc:c.instructions+=17;goto B692efc;
case 0x692f02:c.instructions+=16;goto B692f02;
case 0x692f07:c.instructions+=15;goto B692f07;
case 0x692f0b:c.instructions+=14;goto B692f0b;
case 0x692f0e:c.instructions+=13;goto B692f0e;
case 0x692f14:c.instructions+=12;goto B692f14;
case 0x692f18:c.instructions+=11;goto B692f18;
case 0x692f1c:c.instructions+=10;goto B692f1c;
case 0x692f20:c.instructions+=9;goto B692f20;
case 0x692f26:c.instructions+=8;goto B692f26;
case 0x692f2a:c.instructions+=7;goto B692f2a;
case 0x692f2e:c.instructions+=6;goto B692f2e;
case 0x692f32:c.instructions+=5;goto B692f32;
case 0x692f38:c.instructions+=4;goto B692f38;
case 0x692f3c:c.instructions+=3;goto B692f3c;
case 0x692f40:c.instructions+=2;goto B692f40;
case 0x692f44:c.instructions+=1;goto B692f44;
case 0x692f48:goto L692f48;
case 0x692f4b:c.instructions+=2;goto B692f4b;
case 0x692f4d:c.instructions+=1;goto B692f4d;
case 0x692f4f:goto L692f4f;
case 0x692f53:c.instructions+=7;goto B692f53;
case 0x692f57:c.instructions+=6;goto B692f57;
case 0x692f5a:c.instructions+=5;goto B692f5a;
case 0x692f5e:c.instructions+=4;goto B692f5e;
case 0x692f62:c.instructions+=3;goto B692f62;
case 0x692f66:c.instructions+=2;goto B692f66;
case 0x692f6a:c.instructions+=1;goto B692f6a;
case 0x692f6e:goto L692f6e;
case 0x692f70:c.instructions+=3;goto B692f70;
case 0x692f71:c.instructions+=2;goto B692f71;
case 0x692f73:c.instructions+=1;goto B692f73;
case 0x692f76:goto L692f76;
case 0x692f7a:c.instructions+=36;goto B692f7a;
case 0x692f7d:c.instructions+=35;goto B692f7d;
case 0x692f81:c.instructions+=34;goto B692f81;
case 0x692f85:c.instructions+=33;goto B692f85;
case 0x692f89:c.instructions+=32;goto B692f89;
case 0x692f8d:c.instructions+=31;goto B692f8d;
case 0x692f91:c.instructions+=30;goto B692f91;
case 0x692f94:c.instructions+=29;goto B692f94;
case 0x692f98:c.instructions+=28;goto B692f98;
case 0x692f9c:c.instructions+=27;goto B692f9c;
case 0x692fa0:c.instructions+=26;goto B692fa0;
case 0x692fa4:c.instructions+=25;goto B692fa4;
case 0x692fa8:c.instructions+=24;goto B692fa8;
case 0x692fac:c.instructions+=23;goto B692fac;
case 0x692fb0:c.instructions+=22;goto B692fb0;
case 0x692fb4:c.instructions+=21;goto B692fb4;
case 0x692fb8:c.instructions+=20;goto B692fb8;
case 0x692fbc:c.instructions+=19;goto B692fbc;
case 0x692fc0:c.instructions+=18;goto B692fc0;
case 0x692fc4:c.instructions+=17;goto B692fc4;
case 0x692fc8:c.instructions+=16;goto B692fc8;
case 0x692fcb:c.instructions+=15;goto B692fcb;
case 0x692fce:c.instructions+=14;goto B692fce;
case 0x692fd2:c.instructions+=13;goto B692fd2;
case 0x692fd5:c.instructions+=12;goto B692fd5;
case 0x692fd8:c.instructions+=11;goto B692fd8;
case 0x692fdb:c.instructions+=10;goto B692fdb;
case 0x692fdf:c.instructions+=9;goto B692fdf;
case 0x692fe2:c.instructions+=8;goto B692fe2;
case 0x692fe7:c.instructions+=7;goto B692fe7;
case 0x692feb:c.instructions+=6;goto B692feb;
case 0x692fef:c.instructions+=5;goto B692fef;
case 0x692ff2:c.instructions+=4;goto B692ff2;
case 0x692ff6:c.instructions+=3;goto B692ff6;
case 0x692ff9:c.instructions+=2;goto B692ff9;
case 0x692ffc:c.instructions+=1;goto B692ffc;
default:missing_instruction(c.pc);}
B692002:L692002:{c.instructions+=328;NFSU2_TR(0x692002);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692006:{NFSU2_TR(0x692006);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69200a:{NFSU2_TR(0x69200a);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692013:{NFSU2_TR(0x692013);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692017:{NFSU2_TR(0x692017);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69201b:{NFSU2_TR(0x69201b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69201f:{NFSU2_TR(0x69201f);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692028:{NFSU2_TR(0x692028);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69202c:{NFSU2_TR(0x69202c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692030:{NFSU2_TR(0x692030);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692034:{NFSU2_TR(0x692034);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692038:{NFSU2_TR(0x692038);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69203b:{NFSU2_TR(0x69203b);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692043:{NFSU2_TR(0x692043);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692047:{NFSU2_TR(0x692047);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69204a:{NFSU2_TR(0x69204a);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692052:{NFSU2_TR(0x692052);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692055:{NFSU2_TR(0x692055);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69205d:{NFSU2_TR(0x69205d);
__builtin_memmove((R+4356),(R+4352),4);
}
B692060:{NFSU2_TR(0x692060);
__builtin_memmove((R+4372),(R+4368),4);
}
B692063:{NFSU2_TR(0x692063);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692067:{NFSU2_TR(0x692067);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69206a:{NFSU2_TR(0x69206a);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692073:{NFSU2_TR(0x692073);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69207b:{NFSU2_TR(0x69207b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69207f:{NFSU2_TR(0x69207f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692082:{NFSU2_TR(0x692082);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69208b:{NFSU2_TR(0x69208b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69208f:{NFSU2_TR(0x69208f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692093:{NFSU2_TR(0x692093);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692097:{NFSU2_TR(0x692097);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6920a0:{NFSU2_TR(0x6920a0);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6920a4:{NFSU2_TR(0x6920a4);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6920a8:{NFSU2_TR(0x6920a8);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6920ac:{NFSU2_TR(0x6920ac);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6920b5:{NFSU2_TR(0x6920b5);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6920b9:{NFSU2_TR(0x6920b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6920bd:{NFSU2_TR(0x6920bd);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6920c1:{NFSU2_TR(0x6920c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6920c5:{NFSU2_TR(0x6920c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6920c9:{NFSU2_TR(0x6920c9);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6920d1:{NFSU2_TR(0x6920d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6920d5:{NFSU2_TR(0x6920d5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6920d8:{NFSU2_TR(0x6920d8);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6920e0:{NFSU2_TR(0x6920e0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6920e3:{NFSU2_TR(0x6920e3);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6920eb:{NFSU2_TR(0x6920eb);
__builtin_memmove((R+4356),(R+4352),4);
}
B6920ee:{NFSU2_TR(0x6920ee);
__builtin_memmove((R+4372),(R+4368),4);
}
B6920f1:{NFSU2_TR(0x6920f1);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6920f5:{NFSU2_TR(0x6920f5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6920f8:{NFSU2_TR(0x6920f8);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692101:{NFSU2_TR(0x692101);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692109:{NFSU2_TR(0x692109);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69210d:{NFSU2_TR(0x69210d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692110:{NFSU2_TR(0x692110);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692119:{NFSU2_TR(0x692119);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69211d:{NFSU2_TR(0x69211d);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692121:{NFSU2_TR(0x692121);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692125:{NFSU2_TR(0x692125);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69212e:{NFSU2_TR(0x69212e);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692132:{NFSU2_TR(0x692132);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692136:{NFSU2_TR(0x692136);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69213a:{NFSU2_TR(0x69213a);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692143:{NFSU2_TR(0x692143);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692147:{NFSU2_TR(0x692147);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69214b:{NFSU2_TR(0x69214b);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69214f:{NFSU2_TR(0x69214f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692153:{NFSU2_TR(0x692153);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692157:{NFSU2_TR(0x692157);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B69215f:{NFSU2_TR(0x69215f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692163:{NFSU2_TR(0x692163);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692166:{NFSU2_TR(0x692166);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69216e:{NFSU2_TR(0x69216e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692171:{NFSU2_TR(0x692171);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692179:{NFSU2_TR(0x692179);
__builtin_memmove((R+4356),(R+4352),4);
}
B69217c:{NFSU2_TR(0x69217c);
__builtin_memmove((R+4372),(R+4368),4);
}
B69217f:{NFSU2_TR(0x69217f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692183:{NFSU2_TR(0x692183);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692186:{NFSU2_TR(0x692186);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69218f:{NFSU2_TR(0x69218f);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692197:{NFSU2_TR(0x692197);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69219b:{NFSU2_TR(0x69219b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69219e:{NFSU2_TR(0x69219e);
u8 U[12];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6921a7:{NFSU2_TR(0x6921a7);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6921ab:{NFSU2_TR(0x6921ab);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6921af:{NFSU2_TR(0x6921af);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6921b3:{NFSU2_TR(0x6921b3);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6921bc:{NFSU2_TR(0x6921bc);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6921c0:{NFSU2_TR(0x6921c0);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6921c4:{NFSU2_TR(0x6921c4);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6921c8:{NFSU2_TR(0x6921c8);
u8 U[12];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6921d1:{NFSU2_TR(0x6921d1);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6921d5:{NFSU2_TR(0x6921d5);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6921d9:{NFSU2_TR(0x6921d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6921dd:{NFSU2_TR(0x6921dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6921e1:{NFSU2_TR(0x6921e1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6921e4:{NFSU2_TR(0x6921e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6921e8:{NFSU2_TR(0x6921e8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B6921ec:{NFSU2_TR(0x6921ec);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6921ef:{NFSU2_TR(0x6921ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6921f4:{NFSU2_TR(0x6921f4);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6921f7:{NFSU2_TR(0x6921f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6921fc:{NFSU2_TR(0x6921fc);
__builtin_memmove((R+4356),(R+4352),4);
}
B6921ff:{NFSU2_TR(0x6921ff);
__builtin_memmove((R+4372),(R+4368),4);
}
B692202:{NFSU2_TR(0x692202);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692206:{NFSU2_TR(0x692206);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692209:{NFSU2_TR(0x692209);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69220f:{NFSU2_TR(0x69220f);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692214:{NFSU2_TR(0x692214);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692218:{NFSU2_TR(0x692218);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69221b:{NFSU2_TR(0x69221b);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692221:{NFSU2_TR(0x692221);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692225:{NFSU2_TR(0x692225);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692229:{NFSU2_TR(0x692229);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69222d:{NFSU2_TR(0x69222d);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692233:{NFSU2_TR(0x692233);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692237:{NFSU2_TR(0x692237);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69223b:{NFSU2_TR(0x69223b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69223f:{NFSU2_TR(0x69223f);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692245:{NFSU2_TR(0x692245);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692249:{NFSU2_TR(0x692249);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69224d:{NFSU2_TR(0x69224d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692251:{NFSU2_TR(0x692251);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692255:{NFSU2_TR(0x692255);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B692258:{NFSU2_TR(0x692258);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69225c:{NFSU2_TR(0x69225c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692260:{NFSU2_TR(0x692260);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692263:{NFSU2_TR(0x692263);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692268:{NFSU2_TR(0x692268);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69226b:{NFSU2_TR(0x69226b);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692270:{NFSU2_TR(0x692270);
__builtin_memmove((R+4356),(R+4352),4);
}
B692273:{NFSU2_TR(0x692273);
__builtin_memmove((R+4372),(R+4368),4);
}
B692276:{NFSU2_TR(0x692276);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69227a:{NFSU2_TR(0x69227a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69227d:{NFSU2_TR(0x69227d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692283:{NFSU2_TR(0x692283);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692288:{NFSU2_TR(0x692288);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69228c:{NFSU2_TR(0x69228c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69228f:{NFSU2_TR(0x69228f);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692295:{NFSU2_TR(0x692295);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692299:{NFSU2_TR(0x692299);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69229d:{NFSU2_TR(0x69229d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6922a1:{NFSU2_TR(0x6922a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6922a7:{NFSU2_TR(0x6922a7);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6922ab:{NFSU2_TR(0x6922ab);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6922af:{NFSU2_TR(0x6922af);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6922b3:{NFSU2_TR(0x6922b3);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6922b9:{NFSU2_TR(0x6922b9);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6922bd:{NFSU2_TR(0x6922bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6922c1:{NFSU2_TR(0x6922c1);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6922c5:{NFSU2_TR(0x6922c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6922c9:{NFSU2_TR(0x6922c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6922cd:{NFSU2_TR(0x6922cd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B6922d1:{NFSU2_TR(0x6922d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6922d5:{NFSU2_TR(0x6922d5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6922d8:{NFSU2_TR(0x6922d8);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6922dd:{NFSU2_TR(0x6922dd);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6922e0:{NFSU2_TR(0x6922e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6922e5:{NFSU2_TR(0x6922e5);
__builtin_memmove((R+4356),(R+4352),4);
}
B6922e8:{NFSU2_TR(0x6922e8);
__builtin_memmove((R+4372),(R+4368),4);
}
B6922eb:{NFSU2_TR(0x6922eb);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6922ef:{NFSU2_TR(0x6922ef);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6922f2:{NFSU2_TR(0x6922f2);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6922f8:{NFSU2_TR(0x6922f8);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6922fd:{NFSU2_TR(0x6922fd);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692301:{NFSU2_TR(0x692301);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692304:{NFSU2_TR(0x692304);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69230a:{NFSU2_TR(0x69230a);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69230e:{NFSU2_TR(0x69230e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692312:{NFSU2_TR(0x692312);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692316:{NFSU2_TR(0x692316);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69231c:{NFSU2_TR(0x69231c);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692320:{NFSU2_TR(0x692320);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692324:{NFSU2_TR(0x692324);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692328:{NFSU2_TR(0x692328);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69232e:{NFSU2_TR(0x69232e);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692332:{NFSU2_TR(0x692332);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692336:{NFSU2_TR(0x692336);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69233a:{NFSU2_TR(0x69233a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69233e:{NFSU2_TR(0x69233e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692342:{NFSU2_TR(0x692342);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B692346:{NFSU2_TR(0x692346);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69234a:{NFSU2_TR(0x69234a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69234d:{NFSU2_TR(0x69234d);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692352:{NFSU2_TR(0x692352);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692355:{NFSU2_TR(0x692355);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69235a:{NFSU2_TR(0x69235a);
__builtin_memmove((R+4356),(R+4352),4);
}
B69235d:{NFSU2_TR(0x69235d);
__builtin_memmove((R+4372),(R+4368),4);
}
B692360:{NFSU2_TR(0x692360);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692364:{NFSU2_TR(0x692364);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692367:{NFSU2_TR(0x692367);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69236d:{NFSU2_TR(0x69236d);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692372:{NFSU2_TR(0x692372);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692376:{NFSU2_TR(0x692376);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692379:{NFSU2_TR(0x692379);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69237f:{NFSU2_TR(0x69237f);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692383:{NFSU2_TR(0x692383);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692387:{NFSU2_TR(0x692387);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69238b:{NFSU2_TR(0x69238b);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692391:{NFSU2_TR(0x692391);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692395:{NFSU2_TR(0x692395);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692399:{NFSU2_TR(0x692399);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69239d:{NFSU2_TR(0x69239d);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6923a3:{NFSU2_TR(0x6923a3);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6923a7:{NFSU2_TR(0x6923a7);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6923ab:{NFSU2_TR(0x6923ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6923af:{NFSU2_TR(0x6923af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6923b3:{NFSU2_TR(0x6923b3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6923b6:{NFSU2_TR(0x6923b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6923ba:{NFSU2_TR(0x6923ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6923bf:{NFSU2_TR(0x6923bf);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6923c2:{NFSU2_TR(0x6923c2);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6923c7:{NFSU2_TR(0x6923c7);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6923ca:{NFSU2_TR(0x6923ca);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6923cf:{NFSU2_TR(0x6923cf);
__builtin_memmove((R+4356),(R+4352),4);
}
B6923d2:{NFSU2_TR(0x6923d2);
__builtin_memmove((R+4372),(R+4368),4);
}
B6923d5:{NFSU2_TR(0x6923d5);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6923d9:{NFSU2_TR(0x6923d9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6923dc:{NFSU2_TR(0x6923dc);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6923e2:{NFSU2_TR(0x6923e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6923e7:{NFSU2_TR(0x6923e7);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6923eb:{NFSU2_TR(0x6923eb);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6923ee:{NFSU2_TR(0x6923ee);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6923f4:{NFSU2_TR(0x6923f4);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6923f8:{NFSU2_TR(0x6923f8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6923fc:{NFSU2_TR(0x6923fc);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692400:{NFSU2_TR(0x692400);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692406:{NFSU2_TR(0x692406);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69240a:{NFSU2_TR(0x69240a);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69240e:{NFSU2_TR(0x69240e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692412:{NFSU2_TR(0x692412);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692418:{NFSU2_TR(0x692418);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69241c:{NFSU2_TR(0x69241c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692420:{NFSU2_TR(0x692420);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692424:{NFSU2_TR(0x692424);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692428:{NFSU2_TR(0x692428);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69242b:{NFSU2_TR(0x69242b);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692430:{NFSU2_TR(0x692430);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692434:{NFSU2_TR(0x692434);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692437:{NFSU2_TR(0x692437);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69243c:{NFSU2_TR(0x69243c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69243f:{NFSU2_TR(0x69243f);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692444:{NFSU2_TR(0x692444);
__builtin_memmove((R+4356),(R+4352),4);
}
B692447:{NFSU2_TR(0x692447);
__builtin_memmove((R+4372),(R+4368),4);
}
B69244a:{NFSU2_TR(0x69244a);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69244e:{NFSU2_TR(0x69244e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692451:{NFSU2_TR(0x692451);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692457:{NFSU2_TR(0x692457);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69245c:{NFSU2_TR(0x69245c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692460:{NFSU2_TR(0x692460);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692463:{NFSU2_TR(0x692463);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692469:{NFSU2_TR(0x692469);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69246d:{NFSU2_TR(0x69246d);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692471:{NFSU2_TR(0x692471);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692475:{NFSU2_TR(0x692475);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69247b:{NFSU2_TR(0x69247b);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69247f:{NFSU2_TR(0x69247f);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692483:{NFSU2_TR(0x692483);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692487:{NFSU2_TR(0x692487);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69248d:{NFSU2_TR(0x69248d);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692491:{NFSU2_TR(0x692491);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692495:{NFSU2_TR(0x692495);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692499:{NFSU2_TR(0x692499);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69249d:{NFSU2_TR(0x69249d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6924a1:{NFSU2_TR(0x6924a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6924a6:{NFSU2_TR(0x6924a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6924aa:{NFSU2_TR(0x6924aa);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6924ad:{NFSU2_TR(0x6924ad);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6924b2:{NFSU2_TR(0x6924b2);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6924b5:{NFSU2_TR(0x6924b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6924ba:{NFSU2_TR(0x6924ba);
__builtin_memmove((R+4356),(R+4352),4);
}
B6924bd:{NFSU2_TR(0x6924bd);
__builtin_memmove((R+4372),(R+4368),4);
}
B6924c0:{NFSU2_TR(0x6924c0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6924c4:{NFSU2_TR(0x6924c4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6924c7:{NFSU2_TR(0x6924c7);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6924cd:{NFSU2_TR(0x6924cd);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6924d2:{NFSU2_TR(0x6924d2);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6924d6:{NFSU2_TR(0x6924d6);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6924d9:{NFSU2_TR(0x6924d9);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6924df:{NFSU2_TR(0x6924df);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6924e3:{NFSU2_TR(0x6924e3);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6924e7:{NFSU2_TR(0x6924e7);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6924eb:{NFSU2_TR(0x6924eb);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6924f1:{NFSU2_TR(0x6924f1);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6924f5:{NFSU2_TR(0x6924f5);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6924f9:{NFSU2_TR(0x6924f9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6924fd:{NFSU2_TR(0x6924fd);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692503:{NFSU2_TR(0x692503);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692507:{NFSU2_TR(0x692507);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69250b:{NFSU2_TR(0x69250b);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69250f:{NFSU2_TR(0x69250f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692513:{NFSU2_TR(0x692513);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692517:{NFSU2_TR(0x692517);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B69251c:{NFSU2_TR(0x69251c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692520:{NFSU2_TR(0x692520);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692523:{NFSU2_TR(0x692523);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692528:{NFSU2_TR(0x692528);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69252b:{NFSU2_TR(0x69252b);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692530:{NFSU2_TR(0x692530);
__builtin_memmove((R+4356),(R+4352),4);
}
B692533:{NFSU2_TR(0x692533);
__builtin_memmove((R+4372),(R+4368),4);
}
B692536:{NFSU2_TR(0x692536);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69253a:{NFSU2_TR(0x69253a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69253d:{NFSU2_TR(0x69253d);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692543:{NFSU2_TR(0x692543);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692548:{NFSU2_TR(0x692548);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69254c:{NFSU2_TR(0x69254c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69254f:{NFSU2_TR(0x69254f);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692555:{NFSU2_TR(0x692555);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692559:{NFSU2_TR(0x692559);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69255d:{NFSU2_TR(0x69255d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692561:{NFSU2_TR(0x692561);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692567:{NFSU2_TR(0x692567);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69256b:{NFSU2_TR(0x69256b);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69256f:{NFSU2_TR(0x69256f);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692573:{NFSU2_TR(0x692573);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692579:{NFSU2_TR(0x692579);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69257d:{NFSU2_TR(0x69257d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692581:{NFSU2_TR(0x692581);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692585:{NFSU2_TR(0x692585);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692589:{NFSU2_TR(0x692589);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69258c:{NFSU2_TR(0x69258c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692590:{NFSU2_TR(0x692590);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B692594:{NFSU2_TR(0x692594);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B692598:{NFSU2_TR(0x692598);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69259c:{NFSU2_TR(0x69259c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B6925a0:{NFSU2_TR(0x6925a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6925a4:{NFSU2_TR(0x6925a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B6925a8:{NFSU2_TR(0x6925a8);
{goto L692a92;}
}
B6925ad:L6925ad:{c.instructions+=254;NFSU2_TR(0x6925ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6925b0:{NFSU2_TR(0x6925b0);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6925b5:{NFSU2_TR(0x6925b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6925ba:{NFSU2_TR(0x6925ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6925bf:{NFSU2_TR(0x6925bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6925c4:{NFSU2_TR(0x6925c4);
__builtin_memmove((R+4384),(R+4352),8);
}
B6925c7:{NFSU2_TR(0x6925c7);
__builtin_memmove((R+4356),(R+4368),4);
}
B6925ca:{NFSU2_TR(0x6925ca);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B6925cd:{NFSU2_TR(0x6925cd);
__builtin_memmove((R+4432),(R+4400),8);
}
B6925d0:{NFSU2_TR(0x6925d0);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6925d3:{NFSU2_TR(0x6925d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6925d7:{NFSU2_TR(0x6925d7);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6925dc:{NFSU2_TR(0x6925dc);
__builtin_memmove((R+4404),(R+4416),4);
}
B6925df:{NFSU2_TR(0x6925df);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6925e4:{NFSU2_TR(0x6925e4);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6925e9:{NFSU2_TR(0x6925e9);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B6925ec:{NFSU2_TR(0x6925ec);
__builtin_memmove((R+4368),(R+4448),8);
}
B6925ef:{NFSU2_TR(0x6925ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6925f3:{NFSU2_TR(0x6925f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6925f7:{NFSU2_TR(0x6925f7);
__builtin_memmove((R+4452),(R+4464),4);
}
B6925fa:{NFSU2_TR(0x6925fa);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6925ff:{NFSU2_TR(0x6925ff);
__builtin_memmove((R+4384),(R+4352),8);
}
B692602:{NFSU2_TR(0x692602);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B692605:{NFSU2_TR(0x692605);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692609:{NFSU2_TR(0x692609);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B69260c:{NFSU2_TR(0x69260c);
__builtin_memmove((R+4388),(R+4416),4);
}
B69260f:{NFSU2_TR(0x69260f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692613:{NFSU2_TR(0x692613);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692617:{NFSU2_TR(0x692617);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69261b:{NFSU2_TR(0x69261b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69261e:{NFSU2_TR(0x69261e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692622:{NFSU2_TR(0x692622);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B692626:{NFSU2_TR(0x692626);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692629:{NFSU2_TR(0x692629);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69262e:{NFSU2_TR(0x69262e);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692631:{NFSU2_TR(0x692631);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692636:{NFSU2_TR(0x692636);
__builtin_memmove((R+4356),(R+4352),4);
}
B692639:{NFSU2_TR(0x692639);
__builtin_memmove((R+4372),(R+4368),4);
}
B69263c:{NFSU2_TR(0x69263c);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692640:{NFSU2_TR(0x692640);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692643:{NFSU2_TR(0x692643);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692649:{NFSU2_TR(0x692649);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69264e:{NFSU2_TR(0x69264e);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692652:{NFSU2_TR(0x692652);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692655:{NFSU2_TR(0x692655);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69265b:{NFSU2_TR(0x69265b);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69265f:{NFSU2_TR(0x69265f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692663:{NFSU2_TR(0x692663);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692667:{NFSU2_TR(0x692667);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69266d:{NFSU2_TR(0x69266d);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692671:{NFSU2_TR(0x692671);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692675:{NFSU2_TR(0x692675);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692679:{NFSU2_TR(0x692679);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69267f:{NFSU2_TR(0x69267f);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692683:{NFSU2_TR(0x692683);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692687:{NFSU2_TR(0x692687);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69268b:{NFSU2_TR(0x69268b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69268f:{NFSU2_TR(0x69268f);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B692692:{NFSU2_TR(0x692692);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B692696:{NFSU2_TR(0x692696);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69269a:{NFSU2_TR(0x69269a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69269d:{NFSU2_TR(0x69269d);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6926a2:{NFSU2_TR(0x6926a2);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6926a5:{NFSU2_TR(0x6926a5);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6926aa:{NFSU2_TR(0x6926aa);
__builtin_memmove((R+4356),(R+4352),4);
}
B6926ad:{NFSU2_TR(0x6926ad);
__builtin_memmove((R+4372),(R+4368),4);
}
B6926b0:{NFSU2_TR(0x6926b0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6926b4:{NFSU2_TR(0x6926b4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6926b7:{NFSU2_TR(0x6926b7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6926bd:{NFSU2_TR(0x6926bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6926c2:{NFSU2_TR(0x6926c2);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6926c6:{NFSU2_TR(0x6926c6);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6926c9:{NFSU2_TR(0x6926c9);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6926cf:{NFSU2_TR(0x6926cf);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6926d3:{NFSU2_TR(0x6926d3);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6926d7:{NFSU2_TR(0x6926d7);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6926db:{NFSU2_TR(0x6926db);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6926e1:{NFSU2_TR(0x6926e1);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6926e5:{NFSU2_TR(0x6926e5);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6926e9:{NFSU2_TR(0x6926e9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6926ed:{NFSU2_TR(0x6926ed);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6926f3:{NFSU2_TR(0x6926f3);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6926f7:{NFSU2_TR(0x6926f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6926fb:{NFSU2_TR(0x6926fb);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6926ff:{NFSU2_TR(0x6926ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692703:{NFSU2_TR(0x692703);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692707:{NFSU2_TR(0x692707);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B69270b:{NFSU2_TR(0x69270b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69270f:{NFSU2_TR(0x69270f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692712:{NFSU2_TR(0x692712);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692717:{NFSU2_TR(0x692717);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69271a:{NFSU2_TR(0x69271a);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69271f:{NFSU2_TR(0x69271f);
__builtin_memmove((R+4356),(R+4352),4);
}
B692722:{NFSU2_TR(0x692722);
__builtin_memmove((R+4372),(R+4368),4);
}
B692725:{NFSU2_TR(0x692725);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692729:{NFSU2_TR(0x692729);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69272c:{NFSU2_TR(0x69272c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692732:{NFSU2_TR(0x692732);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692737:{NFSU2_TR(0x692737);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69273b:{NFSU2_TR(0x69273b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69273e:{NFSU2_TR(0x69273e);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692744:{NFSU2_TR(0x692744);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692748:{NFSU2_TR(0x692748);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B69274c:{NFSU2_TR(0x69274c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692750:{NFSU2_TR(0x692750);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692756:{NFSU2_TR(0x692756);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69275a:{NFSU2_TR(0x69275a);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B69275e:{NFSU2_TR(0x69275e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692762:{NFSU2_TR(0x692762);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692768:{NFSU2_TR(0x692768);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B69276c:{NFSU2_TR(0x69276c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692770:{NFSU2_TR(0x692770);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692774:{NFSU2_TR(0x692774);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692778:{NFSU2_TR(0x692778);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69277c:{NFSU2_TR(0x69277c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B692780:{NFSU2_TR(0x692780);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692784:{NFSU2_TR(0x692784);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692787:{NFSU2_TR(0x692787);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69278c:{NFSU2_TR(0x69278c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B69278f:{NFSU2_TR(0x69278f);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692794:{NFSU2_TR(0x692794);
__builtin_memmove((R+4356),(R+4352),4);
}
B692797:{NFSU2_TR(0x692797);
__builtin_memmove((R+4372),(R+4368),4);
}
B69279a:{NFSU2_TR(0x69279a);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B69279e:{NFSU2_TR(0x69279e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6927a1:{NFSU2_TR(0x6927a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6927a7:{NFSU2_TR(0x6927a7);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6927ac:{NFSU2_TR(0x6927ac);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B6927b0:{NFSU2_TR(0x6927b0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6927b3:{NFSU2_TR(0x6927b3);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6927b9:{NFSU2_TR(0x6927b9);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6927bd:{NFSU2_TR(0x6927bd);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6927c1:{NFSU2_TR(0x6927c1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6927c5:{NFSU2_TR(0x6927c5);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6927cb:{NFSU2_TR(0x6927cb);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6927cf:{NFSU2_TR(0x6927cf);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6927d3:{NFSU2_TR(0x6927d3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6927d7:{NFSU2_TR(0x6927d7);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6927dd:{NFSU2_TR(0x6927dd);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6927e1:{NFSU2_TR(0x6927e1);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6927e5:{NFSU2_TR(0x6927e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6927e9:{NFSU2_TR(0x6927e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6927ed:{NFSU2_TR(0x6927ed);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6927f0:{NFSU2_TR(0x6927f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6927f4:{NFSU2_TR(0x6927f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6927f9:{NFSU2_TR(0x6927f9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6927fc:{NFSU2_TR(0x6927fc);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692801:{NFSU2_TR(0x692801);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692804:{NFSU2_TR(0x692804);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692809:{NFSU2_TR(0x692809);
__builtin_memmove((R+4356),(R+4352),4);
}
B69280c:{NFSU2_TR(0x69280c);
__builtin_memmove((R+4372),(R+4368),4);
}
B69280f:{NFSU2_TR(0x69280f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692813:{NFSU2_TR(0x692813);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692816:{NFSU2_TR(0x692816);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69281c:{NFSU2_TR(0x69281c);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692821:{NFSU2_TR(0x692821);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692825:{NFSU2_TR(0x692825);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692828:{NFSU2_TR(0x692828);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69282e:{NFSU2_TR(0x69282e);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692832:{NFSU2_TR(0x692832);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692836:{NFSU2_TR(0x692836);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69283a:{NFSU2_TR(0x69283a);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692840:{NFSU2_TR(0x692840);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692844:{NFSU2_TR(0x692844);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692848:{NFSU2_TR(0x692848);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69284c:{NFSU2_TR(0x69284c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692852:{NFSU2_TR(0x692852);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692856:{NFSU2_TR(0x692856);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69285a:{NFSU2_TR(0x69285a);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B69285e:{NFSU2_TR(0x69285e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692862:{NFSU2_TR(0x692862);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B692865:{NFSU2_TR(0x692865);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B69286a:{NFSU2_TR(0x69286a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69286e:{NFSU2_TR(0x69286e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692871:{NFSU2_TR(0x692871);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692876:{NFSU2_TR(0x692876);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692879:{NFSU2_TR(0x692879);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69287e:{NFSU2_TR(0x69287e);
__builtin_memmove((R+4356),(R+4352),4);
}
B692881:{NFSU2_TR(0x692881);
__builtin_memmove((R+4372),(R+4368),4);
}
B692884:{NFSU2_TR(0x692884);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692888:{NFSU2_TR(0x692888);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69288b:{NFSU2_TR(0x69288b);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692891:{NFSU2_TR(0x692891);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692896:{NFSU2_TR(0x692896);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B69289a:{NFSU2_TR(0x69289a);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69289d:{NFSU2_TR(0x69289d);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6928a3:{NFSU2_TR(0x6928a3);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6928a7:{NFSU2_TR(0x6928a7);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B6928ab:{NFSU2_TR(0x6928ab);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6928af:{NFSU2_TR(0x6928af);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6928b5:{NFSU2_TR(0x6928b5);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6928b9:{NFSU2_TR(0x6928b9);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6928bd:{NFSU2_TR(0x6928bd);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6928c1:{NFSU2_TR(0x6928c1);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6928c7:{NFSU2_TR(0x6928c7);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6928cb:{NFSU2_TR(0x6928cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6928cf:{NFSU2_TR(0x6928cf);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6928d3:{NFSU2_TR(0x6928d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6928d7:{NFSU2_TR(0x6928d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6928db:{NFSU2_TR(0x6928db);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6928e0:{NFSU2_TR(0x6928e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6928e4:{NFSU2_TR(0x6928e4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B6928e7:{NFSU2_TR(0x6928e7);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6928ec:{NFSU2_TR(0x6928ec);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B6928ef:{NFSU2_TR(0x6928ef);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6928f4:{NFSU2_TR(0x6928f4);
__builtin_memmove((R+4356),(R+4352),4);
}
B6928f7:{NFSU2_TR(0x6928f7);
__builtin_memmove((R+4372),(R+4368),4);
}
B6928fa:{NFSU2_TR(0x6928fa);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B6928fe:{NFSU2_TR(0x6928fe);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692901:{NFSU2_TR(0x692901);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692907:{NFSU2_TR(0x692907);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B69290c:{NFSU2_TR(0x69290c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692910:{NFSU2_TR(0x692910);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692913:{NFSU2_TR(0x692913);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692919:{NFSU2_TR(0x692919);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B69291d:{NFSU2_TR(0x69291d);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692921:{NFSU2_TR(0x692921);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692925:{NFSU2_TR(0x692925);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69292b:{NFSU2_TR(0x69292b);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B69292f:{NFSU2_TR(0x69292f);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692933:{NFSU2_TR(0x692933);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692937:{NFSU2_TR(0x692937);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69293d:{NFSU2_TR(0x69293d);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692941:{NFSU2_TR(0x692941);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692945:{NFSU2_TR(0x692945);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692949:{NFSU2_TR(0x692949);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69294d:{NFSU2_TR(0x69294d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692951:{NFSU2_TR(0x692951);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692956:{NFSU2_TR(0x692956);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69295a:{NFSU2_TR(0x69295a);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B69295d:{NFSU2_TR(0x69295d);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692962:{NFSU2_TR(0x692962);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692965:{NFSU2_TR(0x692965);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69296a:{NFSU2_TR(0x69296a);
__builtin_memmove((R+4356),(R+4352),4);
}
B69296d:{NFSU2_TR(0x69296d);
__builtin_memmove((R+4372),(R+4368),4);
}
B692970:{NFSU2_TR(0x692970);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692974:{NFSU2_TR(0x692974);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692977:{NFSU2_TR(0x692977);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69297d:{NFSU2_TR(0x69297d);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692982:{NFSU2_TR(0x692982);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692986:{NFSU2_TR(0x692986);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692989:{NFSU2_TR(0x692989);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69298f:{NFSU2_TR(0x69298f);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692993:{NFSU2_TR(0x692993);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692997:{NFSU2_TR(0x692997);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B69299b:{NFSU2_TR(0x69299b);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6929a1:{NFSU2_TR(0x6929a1);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B6929a5:{NFSU2_TR(0x6929a5);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B6929a9:{NFSU2_TR(0x6929a9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6929ad:{NFSU2_TR(0x6929ad);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6929b3:{NFSU2_TR(0x6929b3);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B6929b7:{NFSU2_TR(0x6929b7);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B6929bb:{NFSU2_TR(0x6929bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6929bf:{NFSU2_TR(0x6929bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6929c3:{NFSU2_TR(0x6929c3);
{goto L692a92;}
}
B6929c8:L6929c8:{c.instructions+=3;NFSU2_TR(0x6929c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6929cb:{NFSU2_TR(0x6929cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6929cd:{NFSU2_TR(0x6929cd);
if(r1(R+518)){{goto L692a27;}}
}
B6929cf:L6929cf:{c.instructions+=24;NFSU2_TR(0x6929cf);
__builtin_memmove((R+4368),gp(0x7b7158),8);
}
B6929d6:{NFSU2_TR(0x6929d6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B6929d9:{NFSU2_TR(0x6929d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B6929dd:{NFSU2_TR(0x6929dd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6929e0:{NFSU2_TR(0x6929e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B6929e4:{NFSU2_TR(0x6929e4);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B6929e7:{NFSU2_TR(0x6929e7);
__builtin_memmove((R+4448),(R+4368),8);
}
B6929ea:{NFSU2_TR(0x6929ea);
__builtin_memmove((R+4436),(R+4368),4);
}
B6929ed:{NFSU2_TR(0x6929ed);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6929f1:{NFSU2_TR(0x6929f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6929f5:{NFSU2_TR(0x6929f5);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B6929f9:{NFSU2_TR(0x6929f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6929fd:{NFSU2_TR(0x6929fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a01:{NFSU2_TR(0x692a01);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a05:{NFSU2_TR(0x692a05);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B692a09:{NFSU2_TR(0x692a09);
__builtin_memmove((R+4416),(R+4384),8);
}
B692a0c:{NFSU2_TR(0x692a0c);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692a10:{NFSU2_TR(0x692a10);
__builtin_memmove((R+4388),(R+4352),4);
}
B692a13:{NFSU2_TR(0x692a13);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B692a16:{NFSU2_TR(0x692a16);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B692a19:{NFSU2_TR(0x692a19);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a1d:{NFSU2_TR(0x692a1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a21:{NFSU2_TR(0x692a21);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a25:{NFSU2_TR(0x692a25);
{goto L692a92;}
}
B692a27:L692a27:{c.instructions+=17;NFSU2_TR(0x692a27);
__builtin_memmove((R+4368),gp(0x7b7138),8);
}
B692a2e:{NFSU2_TR(0x692a2e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B692a31:{NFSU2_TR(0x692a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B692a35:{NFSU2_TR(0x692a35);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4432))));
}
B692a38:{NFSU2_TR(0x692a38);
__builtin_memmove((R+4400),(R+4384),8);
}
B692a3b:{NFSU2_TR(0x692a3b);
__builtin_memmove((R+4388),(R+4432),4);
}
B692a3e:{NFSU2_TR(0x692a3e);
__builtin_memmove((R+4352),(R+4432),8);
}
B692a41:{NFSU2_TR(0x692a41);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4404),4);
}
B692a44:{NFSU2_TR(0x692a44);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B692a47:{NFSU2_TR(0x692a47);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a4b:{NFSU2_TR(0x692a4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a4f:{NFSU2_TR(0x692a4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a53:{NFSU2_TR(0x692a53);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a57:{NFSU2_TR(0x692a57);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a5b:{NFSU2_TR(0x692a5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a5f:{NFSU2_TR(0x692a5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a63:{NFSU2_TR(0x692a63);
{goto L692a92;}
}
B692a65:L692a65:{c.instructions+=11;NFSU2_TR(0x692a65);
w8(R+4368,u64(m4(0x7b7148)));
}
B692a6c:{NFSU2_TR(0x692a6c);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4352))));
}
B692a6f:{NFSU2_TR(0x692a6f);
{wv<8>((R+4384),uo::pswapd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692a73:{NFSU2_TR(0x692a73);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B692a76:{NFSU2_TR(0x692a76);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a7a:{NFSU2_TR(0x692a7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a7e:{NFSU2_TR(0x692a7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a82:{NFSU2_TR(0x692a82);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a86:{NFSU2_TR(0x692a86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a8a:{NFSU2_TR(0x692a8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a8e:{NFSU2_TR(0x692a8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692a92:L692a92:{c.instructions+=4;NFSU2_TR(0x692a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B692a95:{NFSU2_TR(0x692a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B692a98:{NFSU2_TR(0x692a98);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B692a9a:{NFSU2_TR(0x692a9a);
if(r1(R+518)){{goto L692f48;}}
}
B692aa0:L692aa0:{c.instructions+=46;NFSU2_TR(0x692aa0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B692aa3:{NFSU2_TR(0x692aa3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692aa7:{NFSU2_TR(0x692aa7);
{wv<8>((R+4400),uo::pswapd<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B692aab:{NFSU2_TR(0x692aab);
__builtin_memmove((R+4448),(R+4352),8);
}
B692aae:{NFSU2_TR(0x692aae);
__builtin_memmove((R+4384),(R+4352),8);
}
B692ab1:{NFSU2_TR(0x692ab1);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B692ab5:{NFSU2_TR(0x692ab5);
__builtin_memmove((R+4416),(R+4368),8);
}
B692ab8:{NFSU2_TR(0x692ab8);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4372),4);
}
B692abb:{NFSU2_TR(0x692abb);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B692abf:{NFSU2_TR(0x692abf);
__builtin_memmove((R+4432),(R+4352),8);
}
B692ac2:{NFSU2_TR(0x692ac2);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B692ac6:{NFSU2_TR(0x692ac6);
__builtin_memmove((R+4436),(R+4368),4);
}
B692ac9:{NFSU2_TR(0x692ac9);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692acd:{NFSU2_TR(0x692acd);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B692ad1:{NFSU2_TR(0x692ad1);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B692ad5:{NFSU2_TR(0x692ad5);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692ad9:{NFSU2_TR(0x692ad9);
__builtin_memmove((R+4416),(R+4352),8);
}
B692adc:{NFSU2_TR(0x692adc);
{wv<8>((R+4352),uo::pfsubr<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7158))));}
}
B692ae4:{NFSU2_TR(0x692ae4);
__builtin_memmove((R+4432),(R+4368),8);
}
B692ae7:{NFSU2_TR(0x692ae7);
__builtin_memmove((R+4372),(R+4368),4);
}
B692aea:{NFSU2_TR(0x692aea);
{wv<8>((R+4400),uo::pfpnacc<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B692aee:{NFSU2_TR(0x692aee);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B692af2:{NFSU2_TR(0x692af2);
{wv<8>((R+4448),uo::pfpnacc<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B692af6:{NFSU2_TR(0x692af6);
{wv<8>((R+4384),uo::pfpnacc<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B692afa:{NFSU2_TR(0x692afa);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B692afe:{NFSU2_TR(0x692afe);
{wv<8>((R+4432),uo::pswapd<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692b02:{NFSU2_TR(0x692b02);
{wv<8>((R+4416),uo::pfsubr<8>(rv<8>((R+4416)),rv<8>(gp(0x7b7158))));}
}
B692b0a:{NFSU2_TR(0x692b0a);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B692b0d:{NFSU2_TR(0x692b0d);
__builtin_memmove((R+4368),(R+4352),8);
}
B692b10:{NFSU2_TR(0x692b10);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b15:{NFSU2_TR(0x692b15);
__builtin_memmove((R+4436),(R+4400),4);
}
B692b18:{NFSU2_TR(0x692b18);
__builtin_memmove((R+4388),(R+4464),4);
}
B692b1b:{NFSU2_TR(0x692b1b);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4468),4);
}
B692b1e:{NFSU2_TR(0x692b1e);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4452),4);
}
B692b21:{NFSU2_TR(0x692b21);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b26:{NFSU2_TR(0x692b26);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4468),4);
}
B692b29:{NFSU2_TR(0x692b29);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b2e:{NFSU2_TR(0x692b2e);
__builtin_memmove((R+4452),(R+4368),4);
}
B692b31:{NFSU2_TR(0x692b31);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b36:{NFSU2_TR(0x692b36);
__builtin_memmove((R+4468),gp(0x7b7158),4);
}
B692b3d:{NFSU2_TR(0x692b3d);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b42:{NFSU2_TR(0x692b42);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b47:{NFSU2_TR(0x692b47);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b4c:{NFSU2_TR(0x692b4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b51:{NFSU2_TR(0x692b51);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B692b53:{NFSU2_TR(0x692b53);
if(r1(R+518)){{goto L692d72;}}
}
B692b59:L692b59:{c.instructions+=129;NFSU2_TR(0x692b59);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692b5d:{NFSU2_TR(0x692b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B692b61:{NFSU2_TR(0x692b61);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B692b64:{NFSU2_TR(0x692b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B692b68:{NFSU2_TR(0x692b68);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B692b6c:{NFSU2_TR(0x692b6c);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B692b70:{NFSU2_TR(0x692b70);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692b74:{NFSU2_TR(0x692b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B692b78:{NFSU2_TR(0x692b78);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B692b7b:{NFSU2_TR(0x692b7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692b7f:{NFSU2_TR(0x692b7f);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692b84:{NFSU2_TR(0x692b84);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692b87:{NFSU2_TR(0x692b87);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692b8c:{NFSU2_TR(0x692b8c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692b8f:{NFSU2_TR(0x692b8f);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692b94:{NFSU2_TR(0x692b94);
__builtin_memmove((R+4356),(R+4352),4);
}
B692b97:{NFSU2_TR(0x692b97);
__builtin_memmove((R+4372),(R+4368),4);
}
B692b9a:{NFSU2_TR(0x692b9a);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692b9e:{NFSU2_TR(0x692b9e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692ba1:{NFSU2_TR(0x692ba1);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692ba7:{NFSU2_TR(0x692ba7);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692bac:{NFSU2_TR(0x692bac);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692bb0:{NFSU2_TR(0x692bb0);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692bb3:{NFSU2_TR(0x692bb3);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692bb9:{NFSU2_TR(0x692bb9);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692bbd:{NFSU2_TR(0x692bbd);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692bc1:{NFSU2_TR(0x692bc1);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692bc5:{NFSU2_TR(0x692bc5);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692bcb:{NFSU2_TR(0x692bcb);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692bcf:{NFSU2_TR(0x692bcf);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692bd3:{NFSU2_TR(0x692bd3);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692bd7:{NFSU2_TR(0x692bd7);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692bdd:{NFSU2_TR(0x692bdd);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692be1:{NFSU2_TR(0x692be1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692be5:{NFSU2_TR(0x692be5);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692be9:{NFSU2_TR(0x692be9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692bed:{NFSU2_TR(0x692bed);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B692bf0:{NFSU2_TR(0x692bf0);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692bf5:{NFSU2_TR(0x692bf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692bf9:{NFSU2_TR(0x692bf9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692bfc:{NFSU2_TR(0x692bfc);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692c01:{NFSU2_TR(0x692c01);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692c04:{NFSU2_TR(0x692c04);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692c09:{NFSU2_TR(0x692c09);
__builtin_memmove((R+4356),(R+4352),4);
}
B692c0c:{NFSU2_TR(0x692c0c);
__builtin_memmove((R+4372),(R+4368),4);
}
B692c0f:{NFSU2_TR(0x692c0f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692c13:{NFSU2_TR(0x692c13);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692c16:{NFSU2_TR(0x692c16);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692c1c:{NFSU2_TR(0x692c1c);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692c21:{NFSU2_TR(0x692c21);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692c25:{NFSU2_TR(0x692c25);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692c28:{NFSU2_TR(0x692c28);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692c2e:{NFSU2_TR(0x692c2e);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692c32:{NFSU2_TR(0x692c32);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692c36:{NFSU2_TR(0x692c36);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692c3a:{NFSU2_TR(0x692c3a);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692c40:{NFSU2_TR(0x692c40);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692c44:{NFSU2_TR(0x692c44);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692c48:{NFSU2_TR(0x692c48);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692c4c:{NFSU2_TR(0x692c4c);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692c52:{NFSU2_TR(0x692c52);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692c56:{NFSU2_TR(0x692c56);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692c5a:{NFSU2_TR(0x692c5a);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692c5e:{NFSU2_TR(0x692c5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692c62:{NFSU2_TR(0x692c62);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692c66:{NFSU2_TR(0x692c66);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692c6b:{NFSU2_TR(0x692c6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692c6f:{NFSU2_TR(0x692c6f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692c72:{NFSU2_TR(0x692c72);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692c77:{NFSU2_TR(0x692c77);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692c7a:{NFSU2_TR(0x692c7a);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692c7f:{NFSU2_TR(0x692c7f);
__builtin_memmove((R+4356),(R+4352),4);
}
B692c82:{NFSU2_TR(0x692c82);
__builtin_memmove((R+4372),(R+4368),4);
}
B692c85:{NFSU2_TR(0x692c85);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692c89:{NFSU2_TR(0x692c89);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692c8c:{NFSU2_TR(0x692c8c);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692c92:{NFSU2_TR(0x692c92);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692c97:{NFSU2_TR(0x692c97);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692c9b:{NFSU2_TR(0x692c9b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692c9e:{NFSU2_TR(0x692c9e);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692ca4:{NFSU2_TR(0x692ca4);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692ca8:{NFSU2_TR(0x692ca8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692cac:{NFSU2_TR(0x692cac);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692cb0:{NFSU2_TR(0x692cb0);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692cb6:{NFSU2_TR(0x692cb6);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692cba:{NFSU2_TR(0x692cba);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692cbe:{NFSU2_TR(0x692cbe);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692cc2:{NFSU2_TR(0x692cc2);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692cc8:{NFSU2_TR(0x692cc8);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692ccc:{NFSU2_TR(0x692ccc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692cd0:{NFSU2_TR(0x692cd0);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692cd4:{NFSU2_TR(0x692cd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692cd8:{NFSU2_TR(0x692cd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692cdc:{NFSU2_TR(0x692cdc);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692ce1:{NFSU2_TR(0x692ce1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692ce5:{NFSU2_TR(0x692ce5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692ce8:{NFSU2_TR(0x692ce8);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692ced:{NFSU2_TR(0x692ced);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692cf0:{NFSU2_TR(0x692cf0);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692cf5:{NFSU2_TR(0x692cf5);
__builtin_memmove((R+4356),(R+4352),4);
}
B692cf8:{NFSU2_TR(0x692cf8);
__builtin_memmove((R+4372),(R+4368),4);
}
B692cfb:{NFSU2_TR(0x692cfb);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692cff:{NFSU2_TR(0x692cff);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692d02:{NFSU2_TR(0x692d02);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692d08:{NFSU2_TR(0x692d08);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692d0d:{NFSU2_TR(0x692d0d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692d11:{NFSU2_TR(0x692d11);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692d14:{NFSU2_TR(0x692d14);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692d1a:{NFSU2_TR(0x692d1a);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692d1e:{NFSU2_TR(0x692d1e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692d22:{NFSU2_TR(0x692d22);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692d26:{NFSU2_TR(0x692d26);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692d2c:{NFSU2_TR(0x692d2c);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692d30:{NFSU2_TR(0x692d30);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692d34:{NFSU2_TR(0x692d34);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692d38:{NFSU2_TR(0x692d38);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692d3e:{NFSU2_TR(0x692d3e);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692d42:{NFSU2_TR(0x692d42);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692d46:{NFSU2_TR(0x692d46);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692d4a:{NFSU2_TR(0x692d4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692d4e:{NFSU2_TR(0x692d4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692d52:{NFSU2_TR(0x692d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B692d56:{NFSU2_TR(0x692d56);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B692d59:{NFSU2_TR(0x692d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B692d5d:{NFSU2_TR(0x692d5d);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B692d61:{NFSU2_TR(0x692d61);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B692d65:{NFSU2_TR(0x692d65);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692d69:{NFSU2_TR(0x692d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B692d6d:{NFSU2_TR(0x692d6d);
{goto L692f48;}
}
B692d72:L692d72:{c.instructions+=112;NFSU2_TR(0x692d72);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B692d75:{NFSU2_TR(0x692d75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692d79:{NFSU2_TR(0x692d79);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692d7e:{NFSU2_TR(0x692d7e);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692d81:{NFSU2_TR(0x692d81);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692d86:{NFSU2_TR(0x692d86);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692d89:{NFSU2_TR(0x692d89);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692d8e:{NFSU2_TR(0x692d8e);
__builtin_memmove((R+4356),(R+4352),4);
}
B692d91:{NFSU2_TR(0x692d91);
__builtin_memmove((R+4372),(R+4368),4);
}
B692d94:{NFSU2_TR(0x692d94);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692d98:{NFSU2_TR(0x692d98);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692d9b:{NFSU2_TR(0x692d9b);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692da1:{NFSU2_TR(0x692da1);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692da6:{NFSU2_TR(0x692da6);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692daa:{NFSU2_TR(0x692daa);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692dad:{NFSU2_TR(0x692dad);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692db3:{NFSU2_TR(0x692db3);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692db7:{NFSU2_TR(0x692db7);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692dbb:{NFSU2_TR(0x692dbb);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692dbf:{NFSU2_TR(0x692dbf);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692dc5:{NFSU2_TR(0x692dc5);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692dc9:{NFSU2_TR(0x692dc9);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692dcd:{NFSU2_TR(0x692dcd);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692dd1:{NFSU2_TR(0x692dd1);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692dd7:{NFSU2_TR(0x692dd7);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692ddb:{NFSU2_TR(0x692ddb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692ddf:{NFSU2_TR(0x692ddf);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692de3:{NFSU2_TR(0x692de3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692de7:{NFSU2_TR(0x692de7);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B692dea:{NFSU2_TR(0x692dea);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692def:{NFSU2_TR(0x692def);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692df3:{NFSU2_TR(0x692df3);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692df6:{NFSU2_TR(0x692df6);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692dfb:{NFSU2_TR(0x692dfb);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692dfe:{NFSU2_TR(0x692dfe);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692e03:{NFSU2_TR(0x692e03);
__builtin_memmove((R+4356),(R+4352),4);
}
B692e06:{NFSU2_TR(0x692e06);
__builtin_memmove((R+4372),(R+4368),4);
}
B692e09:{NFSU2_TR(0x692e09);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692e0d:{NFSU2_TR(0x692e0d);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692e10:{NFSU2_TR(0x692e10);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692e16:{NFSU2_TR(0x692e16);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692e1b:{NFSU2_TR(0x692e1b);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692e1f:{NFSU2_TR(0x692e1f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692e22:{NFSU2_TR(0x692e22);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692e28:{NFSU2_TR(0x692e28);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692e2c:{NFSU2_TR(0x692e2c);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692e30:{NFSU2_TR(0x692e30);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692e34:{NFSU2_TR(0x692e34);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692e3a:{NFSU2_TR(0x692e3a);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692e3e:{NFSU2_TR(0x692e3e);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692e42:{NFSU2_TR(0x692e42);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692e46:{NFSU2_TR(0x692e46);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692e4c:{NFSU2_TR(0x692e4c);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692e50:{NFSU2_TR(0x692e50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692e54:{NFSU2_TR(0x692e54);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692e58:{NFSU2_TR(0x692e58);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692e5c:{NFSU2_TR(0x692e5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692e60:{NFSU2_TR(0x692e60);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692e65:{NFSU2_TR(0x692e65);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692e69:{NFSU2_TR(0x692e69);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692e6c:{NFSU2_TR(0x692e6c);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692e71:{NFSU2_TR(0x692e71);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692e74:{NFSU2_TR(0x692e74);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692e79:{NFSU2_TR(0x692e79);
__builtin_memmove((R+4356),(R+4352),4);
}
B692e7c:{NFSU2_TR(0x692e7c);
__builtin_memmove((R+4372),(R+4368),4);
}
B692e7f:{NFSU2_TR(0x692e7f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692e83:{NFSU2_TR(0x692e83);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692e86:{NFSU2_TR(0x692e86);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692e8c:{NFSU2_TR(0x692e8c);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692e91:{NFSU2_TR(0x692e91);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692e95:{NFSU2_TR(0x692e95);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692e98:{NFSU2_TR(0x692e98);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692e9e:{NFSU2_TR(0x692e9e);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692ea2:{NFSU2_TR(0x692ea2);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692ea6:{NFSU2_TR(0x692ea6);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692eaa:{NFSU2_TR(0x692eaa);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692eb0:{NFSU2_TR(0x692eb0);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692eb4:{NFSU2_TR(0x692eb4);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692eb8:{NFSU2_TR(0x692eb8);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692ebc:{NFSU2_TR(0x692ebc);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692ec2:{NFSU2_TR(0x692ec2);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692ec6:{NFSU2_TR(0x692ec6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692eca:{NFSU2_TR(0x692eca);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692ece:{NFSU2_TR(0x692ece);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692ed2:{NFSU2_TR(0x692ed2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692ed6:{NFSU2_TR(0x692ed6);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B692edb:{NFSU2_TR(0x692edb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692edf:{NFSU2_TR(0x692edf);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B692ee2:{NFSU2_TR(0x692ee2);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B692ee7:{NFSU2_TR(0x692ee7);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B692eea:{NFSU2_TR(0x692eea);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B692eef:{NFSU2_TR(0x692eef);
__builtin_memmove((R+4356),(R+4352),4);
}
B692ef2:{NFSU2_TR(0x692ef2);
__builtin_memmove((R+4372),(R+4368),4);
}
B692ef5:{NFSU2_TR(0x692ef5);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692ef9:{NFSU2_TR(0x692ef9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692efc:{NFSU2_TR(0x692efc);
u8 U[12];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B692f02:{NFSU2_TR(0x692f02);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692f07:{NFSU2_TR(0x692f07);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B692f0b:{NFSU2_TR(0x692f0b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B692f0e:{NFSU2_TR(0x692f0e);
u8 U[12];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B692f14:{NFSU2_TR(0x692f14);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692f18:{NFSU2_TR(0x692f18);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B692f1c:{NFSU2_TR(0x692f1c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692f20:{NFSU2_TR(0x692f20);
u8 U[12];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B692f26:{NFSU2_TR(0x692f26);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B692f2a:{NFSU2_TR(0x692f2a);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B692f2e:{NFSU2_TR(0x692f2e);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B692f32:{NFSU2_TR(0x692f32);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B692f38:{NFSU2_TR(0x692f38);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B692f3c:{NFSU2_TR(0x692f3c);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B692f40:{NFSU2_TR(0x692f40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692f44:{NFSU2_TR(0x692f44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692f48:L692f48:{c.instructions+=3;NFSU2_TR(0x692f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B692f4b:{NFSU2_TR(0x692f4b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B692f4d:{NFSU2_TR(0x692f4d);
if(r1(R+518)){{goto L692f6e;}}
}
B692f4f:L692f4f:{c.instructions+=8;NFSU2_TR(0x692f4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692f53:{NFSU2_TR(0x692f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B692f57:{NFSU2_TR(0x692f57);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B692f5a:{NFSU2_TR(0x692f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B692f5e:{NFSU2_TR(0x692f5e);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B692f62:{NFSU2_TR(0x692f62);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B692f66:{NFSU2_TR(0x692f66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B692f6a:{NFSU2_TR(0x692f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B692f6e:L692f6e:{c.instructions+=4;NFSU2_TR(0x692f6e);
__builtin_memmove((R+16),(R+20),4);
}
B692f70:{NFSU2_TR(0x692f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B692f71:{NFSU2_TR(0x692f71);
w2(R+4260,0xffffu);
}
B692f73:{NFSU2_TR(0x692f73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B692f76:L692f76:{c.instructions+=37;NFSU2_TR(0x692f76);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B692f7a:{NFSU2_TR(0x692f7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B692f7d:{NFSU2_TR(0x692f7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B692f81:{NFSU2_TR(0x692f81);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B692f85:{NFSU2_TR(0x692f85);
{wv<8>((R+4432),uo::pswapd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B692f89:{NFSU2_TR(0x692f89);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B692f8d:{NFSU2_TR(0x692f8d);
{wv<8>((R+4416),uo::pswapd<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B692f91:{NFSU2_TR(0x692f91);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B692f94:{NFSU2_TR(0x692f94);
{wv<8>((R+4448),uo::pswapd<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B692f98:{NFSU2_TR(0x692f98);
{wv<8>((R+4464),uo::pswapd<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B692f9c:{NFSU2_TR(0x692f9c);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B692fa0:{NFSU2_TR(0x692fa0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B692fa4:{NFSU2_TR(0x692fa4);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B692fa8:{NFSU2_TR(0x692fa8);
{wv<8>((R+4352),uo::pswapd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B692fac:{NFSU2_TR(0x692fac);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B692fb0:{NFSU2_TR(0x692fb0);
{wv<8>((R+4432),uo::pfnacc<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B692fb4:{NFSU2_TR(0x692fb4);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B692fb8:{NFSU2_TR(0x692fb8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692fbc:{NFSU2_TR(0x692fbc);
{wv<8>((R+4448),uo::pfnacc<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B692fc0:{NFSU2_TR(0x692fc0);
{wv<8>((R+4368),uo::pfnacc<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B692fc4:{NFSU2_TR(0x692fc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B692fc8:{NFSU2_TR(0x692fc8);
__builtin_memmove((R+4384),(R+4448),8);
}
B692fcb:{NFSU2_TR(0x692fcb);
__builtin_memmove((R+4416),(R+4368),8);
}
B692fce:{NFSU2_TR(0x692fce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B692fd2:{NFSU2_TR(0x692fd2);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B692fd5:{NFSU2_TR(0x692fd5);
__builtin_memmove((R+4400),(R+4368),8);
}
B692fd8:{NFSU2_TR(0x692fd8);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B692fdb:{NFSU2_TR(0x692fdb);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B692fdf:{NFSU2_TR(0x692fdf);
__builtin_memmove((R+4404),(R+4400),4);
}
B692fe2:{NFSU2_TR(0x692fe2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B692fe7:{NFSU2_TR(0x692fe7);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B692feb:{NFSU2_TR(0x692feb);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B692fef:{NFSU2_TR(0x692fef);
__builtin_memmove((R+4416),(R+4448),8);
}
B692ff2:{NFSU2_TR(0x692ff2);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B692ff6:{NFSU2_TR(0x692ff6);
__builtin_memmove((R+4400),(R+4368),8);
}
B692ff9:{NFSU2_TR(0x692ff9);
__builtin_memmove((R+4420),(R+4416),4);
}
B692ffc:{NFSU2_TR(0x692ffc);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
TAIL_STATIC(0x693001u,693);
}
XIT:NFSU2_TR_EXIT(0x692,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
