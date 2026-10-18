#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_703(u8* __restrict R,Cpu& c);
u32 body_716(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x715,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x715,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_715(u8* __restrict R,Cpu& c);
u32 page_715(Cpu& c){return body_715(c.regs.data(),c);}
__attribute__((noinline)) u32 body_715(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x715001:goto L715001;
case 0x715007:c.instructions+=444;goto B715007;
case 0x71500d:c.instructions+=443;goto B71500d;
case 0x715013:c.instructions+=442;goto B715013;
case 0x715019:c.instructions+=441;goto B715019;
case 0x715020:c.instructions+=440;goto B715020;
case 0x715027:c.instructions+=439;goto B715027;
case 0x71502e:c.instructions+=438;goto B71502e;
case 0x715035:c.instructions+=437;goto B715035;
case 0x71503c:c.instructions+=436;goto B71503c;
case 0x715043:c.instructions+=435;goto B715043;
case 0x715049:c.instructions+=434;goto B715049;
case 0x715050:c.instructions+=433;goto B715050;
case 0x715057:c.instructions+=432;goto B715057;
case 0x71505e:c.instructions+=431;goto B71505e;
case 0x715065:c.instructions+=430;goto B715065;
case 0x71506c:c.instructions+=429;goto B71506c;
case 0x715072:c.instructions+=428;goto B715072;
case 0x715078:c.instructions+=427;goto B715078;
case 0x71507f:c.instructions+=426;goto B71507f;
case 0x715085:c.instructions+=425;goto B715085;
case 0x71508b:c.instructions+=424;goto B71508b;
case 0x715092:c.instructions+=423;goto B715092;
case 0x715099:c.instructions+=422;goto B715099;
case 0x7150a0:c.instructions+=421;goto B7150a0;
case 0x7150a6:c.instructions+=420;goto B7150a6;
case 0x7150ac:c.instructions+=419;goto B7150ac;
case 0x7150b3:c.instructions+=418;goto B7150b3;
case 0x7150ba:c.instructions+=417;goto B7150ba;
case 0x7150c1:c.instructions+=416;goto B7150c1;
case 0x7150c7:c.instructions+=415;goto B7150c7;
case 0x7150cd:c.instructions+=414;goto B7150cd;
case 0x7150d3:c.instructions+=413;goto B7150d3;
case 0x7150d9:c.instructions+=412;goto B7150d9;
case 0x7150e0:c.instructions+=411;goto B7150e0;
case 0x7150e7:c.instructions+=410;goto B7150e7;
case 0x7150ee:c.instructions+=409;goto B7150ee;
case 0x7150f5:c.instructions+=408;goto B7150f5;
case 0x7150fb:c.instructions+=407;goto B7150fb;
case 0x715101:c.instructions+=406;goto B715101;
case 0x715107:c.instructions+=405;goto B715107;
case 0x71510e:c.instructions+=404;goto B71510e;
case 0x715114:c.instructions+=403;goto B715114;
case 0x71511a:c.instructions+=402;goto B71511a;
case 0x715120:c.instructions+=401;goto B715120;
case 0x715126:c.instructions+=400;goto B715126;
case 0x71512c:c.instructions+=399;goto B71512c;
case 0x715132:c.instructions+=398;goto B715132;
case 0x715139:c.instructions+=397;goto B715139;
case 0x71513f:c.instructions+=396;goto B71513f;
case 0x715145:c.instructions+=395;goto B715145;
case 0x71514c:c.instructions+=394;goto B71514c;
case 0x715153:c.instructions+=393;goto B715153;
case 0x71515a:c.instructions+=392;goto B71515a;
case 0x715161:c.instructions+=391;goto B715161;
case 0x715168:c.instructions+=390;goto B715168;
case 0x71516e:c.instructions+=389;goto B71516e;
case 0x715175:c.instructions+=388;goto B715175;
case 0x71517c:c.instructions+=387;goto B71517c;
case 0x715183:c.instructions+=386;goto B715183;
case 0x71518a:c.instructions+=385;goto B71518a;
case 0x715190:c.instructions+=384;goto B715190;
case 0x715197:c.instructions+=383;goto B715197;
case 0x71519d:c.instructions+=382;goto B71519d;
case 0x7151a4:c.instructions+=381;goto B7151a4;
case 0x7151ab:c.instructions+=380;goto B7151ab;
case 0x7151b2:c.instructions+=379;goto B7151b2;
case 0x7151b8:c.instructions+=378;goto B7151b8;
case 0x7151bf:c.instructions+=377;goto B7151bf;
case 0x7151c5:c.instructions+=376;goto B7151c5;
case 0x7151cc:c.instructions+=375;goto B7151cc;
case 0x7151d3:c.instructions+=374;goto B7151d3;
case 0x7151da:c.instructions+=373;goto B7151da;
case 0x7151e1:c.instructions+=372;goto B7151e1;
case 0x7151e8:c.instructions+=371;goto B7151e8;
case 0x7151ef:c.instructions+=370;goto B7151ef;
case 0x7151f5:c.instructions+=369;goto B7151f5;
case 0x7151fc:c.instructions+=368;goto B7151fc;
case 0x715203:c.instructions+=367;goto B715203;
case 0x715209:c.instructions+=366;goto B715209;
case 0x715210:c.instructions+=365;goto B715210;
case 0x715216:c.instructions+=364;goto B715216;
case 0x71521c:c.instructions+=363;goto B71521c;
case 0x715223:c.instructions+=362;goto B715223;
case 0x715229:c.instructions+=361;goto B715229;
case 0x715230:c.instructions+=360;goto B715230;
case 0x715236:c.instructions+=359;goto B715236;
case 0x71523d:c.instructions+=358;goto B71523d;
case 0x715244:c.instructions+=357;goto B715244;
case 0x71524a:c.instructions+=356;goto B71524a;
case 0x715251:c.instructions+=355;goto B715251;
case 0x715258:c.instructions+=354;goto B715258;
case 0x71525e:c.instructions+=353;goto B71525e;
case 0x715264:c.instructions+=352;goto B715264;
case 0x71526a:c.instructions+=351;goto B71526a;
case 0x715271:c.instructions+=350;goto B715271;
case 0x715278:c.instructions+=349;goto B715278;
case 0x71527f:c.instructions+=348;goto B71527f;
case 0x715286:c.instructions+=347;goto B715286;
case 0x71528c:c.instructions+=346;goto B71528c;
case 0x715292:c.instructions+=345;goto B715292;
case 0x715299:c.instructions+=344;goto B715299;
case 0x7152a0:c.instructions+=343;goto B7152a0;
case 0x7152a7:c.instructions+=342;goto B7152a7;
case 0x7152ad:c.instructions+=341;goto B7152ad;
case 0x7152b4:c.instructions+=340;goto B7152b4;
case 0x7152ba:c.instructions+=339;goto B7152ba;
case 0x7152c0:c.instructions+=338;goto B7152c0;
case 0x7152c7:c.instructions+=337;goto B7152c7;
case 0x7152ce:c.instructions+=336;goto B7152ce;
case 0x7152d5:c.instructions+=335;goto B7152d5;
case 0x7152db:c.instructions+=334;goto B7152db;
case 0x7152e2:c.instructions+=333;goto B7152e2;
case 0x7152e8:c.instructions+=332;goto B7152e8;
case 0x7152ef:c.instructions+=331;goto B7152ef;
case 0x7152f5:c.instructions+=330;goto B7152f5;
case 0x7152fc:c.instructions+=329;goto B7152fc;
case 0x715303:c.instructions+=328;goto B715303;
case 0x715309:c.instructions+=327;goto B715309;
case 0x715310:c.instructions+=326;goto B715310;
case 0x715317:c.instructions+=325;goto B715317;
case 0x71531e:c.instructions+=324;goto B71531e;
case 0x715325:c.instructions+=323;goto B715325;
case 0x71532c:c.instructions+=322;goto B71532c;
case 0x715333:c.instructions+=321;goto B715333;
case 0x715339:c.instructions+=320;goto B715339;
case 0x71533f:c.instructions+=319;goto B71533f;
case 0x715346:c.instructions+=318;goto B715346;
case 0x71534d:c.instructions+=317;goto B71534d;
case 0x715353:c.instructions+=316;goto B715353;
case 0x71535a:c.instructions+=315;goto B71535a;
case 0x715360:c.instructions+=314;goto B715360;
case 0x715366:c.instructions+=313;goto B715366;
case 0x71536c:c.instructions+=312;goto B71536c;
case 0x715373:c.instructions+=311;goto B715373;
case 0x715379:c.instructions+=310;goto B715379;
case 0x715380:c.instructions+=309;goto B715380;
case 0x715386:c.instructions+=308;goto B715386;
case 0x71538d:c.instructions+=307;goto B71538d;
case 0x715393:c.instructions+=306;goto B715393;
case 0x71539a:c.instructions+=305;goto B71539a;
case 0x7153a1:c.instructions+=304;goto B7153a1;
case 0x7153a7:c.instructions+=303;goto B7153a7;
case 0x7153ad:c.instructions+=302;goto B7153ad;
case 0x7153b4:c.instructions+=301;goto B7153b4;
case 0x7153bb:c.instructions+=300;goto B7153bb;
case 0x7153c1:c.instructions+=299;goto B7153c1;
case 0x7153c8:c.instructions+=298;goto B7153c8;
case 0x7153ce:c.instructions+=297;goto B7153ce;
case 0x7153d5:c.instructions+=296;goto B7153d5;
case 0x7153dc:c.instructions+=295;goto B7153dc;
case 0x7153e2:c.instructions+=294;goto B7153e2;
case 0x7153e8:c.instructions+=293;goto B7153e8;
case 0x7153ee:c.instructions+=292;goto B7153ee;
case 0x7153f4:c.instructions+=291;goto B7153f4;
case 0x7153fa:c.instructions+=290;goto B7153fa;
case 0x715400:c.instructions+=289;goto B715400;
case 0x715407:c.instructions+=288;goto B715407;
case 0x71540e:c.instructions+=287;goto B71540e;
case 0x715415:c.instructions+=286;goto B715415;
case 0x71541c:c.instructions+=285;goto B71541c;
case 0x715423:c.instructions+=284;goto B715423;
case 0x71542a:c.instructions+=283;goto B71542a;
case 0x715431:c.instructions+=282;goto B715431;
case 0x715437:c.instructions+=281;goto B715437;
case 0x71543e:c.instructions+=280;goto B71543e;
case 0x715445:c.instructions+=279;goto B715445;
case 0x71544b:c.instructions+=278;goto B71544b;
case 0x715452:c.instructions+=277;goto B715452;
case 0x715459:c.instructions+=276;goto B715459;
case 0x715460:c.instructions+=275;goto B715460;
case 0x715467:c.instructions+=274;goto B715467;
case 0x71546e:c.instructions+=273;goto B71546e;
case 0x715475:c.instructions+=272;goto B715475;
case 0x71547b:c.instructions+=271;goto B71547b;
case 0x715482:c.instructions+=270;goto B715482;
case 0x715489:c.instructions+=269;goto B715489;
case 0x71548f:c.instructions+=268;goto B71548f;
case 0x715496:c.instructions+=267;goto B715496;
case 0x71549c:c.instructions+=266;goto B71549c;
case 0x7154a3:c.instructions+=265;goto B7154a3;
case 0x7154aa:c.instructions+=264;goto B7154aa;
case 0x7154b0:c.instructions+=263;goto B7154b0;
case 0x7154b7:c.instructions+=262;goto B7154b7;
case 0x7154be:c.instructions+=261;goto B7154be;
case 0x7154c4:c.instructions+=260;goto B7154c4;
case 0x7154cb:c.instructions+=259;goto B7154cb;
case 0x7154d1:c.instructions+=258;goto B7154d1;
case 0x7154d8:c.instructions+=257;goto B7154d8;
case 0x7154df:c.instructions+=256;goto B7154df;
case 0x7154e6:c.instructions+=255;goto B7154e6;
case 0x7154ed:c.instructions+=254;goto B7154ed;
case 0x7154f3:c.instructions+=253;goto B7154f3;
case 0x7154fa:c.instructions+=252;goto B7154fa;
case 0x715501:c.instructions+=251;goto B715501;
case 0x715508:c.instructions+=250;goto B715508;
case 0x71550e:c.instructions+=249;goto B71550e;
case 0x715515:c.instructions+=248;goto B715515;
case 0x71551b:c.instructions+=247;goto B71551b;
case 0x715522:c.instructions+=246;goto B715522;
case 0x715528:c.instructions+=245;goto B715528;
case 0x71552e:c.instructions+=244;goto B71552e;
case 0x715534:c.instructions+=243;goto B715534;
case 0x71553b:c.instructions+=242;goto B71553b;
case 0x715542:c.instructions+=241;goto B715542;
case 0x715549:c.instructions+=240;goto B715549;
case 0x71554f:c.instructions+=239;goto B71554f;
case 0x715556:c.instructions+=238;goto B715556;
case 0x71555d:c.instructions+=237;goto B71555d;
case 0x715564:c.instructions+=236;goto B715564;
case 0x71556b:c.instructions+=235;goto B71556b;
case 0x715571:c.instructions+=234;goto B715571;
case 0x715578:c.instructions+=233;goto B715578;
case 0x71557f:c.instructions+=232;goto B71557f;
case 0x715585:c.instructions+=231;goto B715585;
case 0x71558b:c.instructions+=230;goto B71558b;
case 0x715591:c.instructions+=229;goto B715591;
case 0x715598:c.instructions+=228;goto B715598;
case 0x71559f:c.instructions+=227;goto B71559f;
case 0x7155a6:c.instructions+=226;goto B7155a6;
case 0x7155ad:c.instructions+=225;goto B7155ad;
case 0x7155b3:c.instructions+=224;goto B7155b3;
case 0x7155b9:c.instructions+=223;goto B7155b9;
case 0x7155bf:c.instructions+=222;goto B7155bf;
case 0x7155c6:c.instructions+=221;goto B7155c6;
case 0x7155cd:c.instructions+=220;goto B7155cd;
case 0x7155d3:c.instructions+=219;goto B7155d3;
case 0x7155da:c.instructions+=218;goto B7155da;
case 0x7155e0:c.instructions+=217;goto B7155e0;
case 0x7155e6:c.instructions+=216;goto B7155e6;
case 0x7155ed:c.instructions+=215;goto B7155ed;
case 0x7155f3:c.instructions+=214;goto B7155f3;
case 0x7155f9:c.instructions+=213;goto B7155f9;
case 0x7155ff:c.instructions+=212;goto B7155ff;
case 0x715605:c.instructions+=211;goto B715605;
case 0x71560b:c.instructions+=210;goto B71560b;
case 0x715612:c.instructions+=209;goto B715612;
case 0x715618:c.instructions+=208;goto B715618;
case 0x71561e:c.instructions+=207;goto B71561e;
case 0x715625:c.instructions+=206;goto B715625;
case 0x71562b:c.instructions+=205;goto B71562b;
case 0x715631:c.instructions+=204;goto B715631;
case 0x715638:c.instructions+=203;goto B715638;
case 0x71563f:c.instructions+=202;goto B71563f;
case 0x715646:c.instructions+=201;goto B715646;
case 0x71564d:c.instructions+=200;goto B71564d;
case 0x715653:c.instructions+=199;goto B715653;
case 0x71565a:c.instructions+=198;goto B71565a;
case 0x715660:c.instructions+=197;goto B715660;
case 0x715666:c.instructions+=196;goto B715666;
case 0x71566d:c.instructions+=195;goto B71566d;
case 0x715673:c.instructions+=194;goto B715673;
case 0x71567a:c.instructions+=193;goto B71567a;
case 0x715681:c.instructions+=192;goto B715681;
case 0x715688:c.instructions+=191;goto B715688;
case 0x71568e:c.instructions+=190;goto B71568e;
case 0x715695:c.instructions+=189;goto B715695;
case 0x71569b:c.instructions+=188;goto B71569b;
case 0x7156a2:c.instructions+=187;goto B7156a2;
case 0x7156a8:c.instructions+=186;goto B7156a8;
case 0x7156af:c.instructions+=185;goto B7156af;
case 0x7156b5:c.instructions+=184;goto B7156b5;
case 0x7156bb:c.instructions+=183;goto B7156bb;
case 0x7156c2:c.instructions+=182;goto B7156c2;
case 0x7156c8:c.instructions+=181;goto B7156c8;
case 0x7156cf:c.instructions+=180;goto B7156cf;
case 0x7156d6:c.instructions+=179;goto B7156d6;
case 0x7156dd:c.instructions+=178;goto B7156dd;
case 0x7156e3:c.instructions+=177;goto B7156e3;
case 0x7156ea:c.instructions+=176;goto B7156ea;
case 0x7156f0:c.instructions+=175;goto B7156f0;
case 0x7156f6:c.instructions+=174;goto B7156f6;
case 0x7156fc:c.instructions+=173;goto B7156fc;
case 0x715702:c.instructions+=172;goto B715702;
case 0x715708:c.instructions+=171;goto B715708;
case 0x71570e:c.instructions+=170;goto B71570e;
case 0x715715:c.instructions+=169;goto B715715;
case 0x71571c:c.instructions+=168;goto B71571c;
case 0x715722:c.instructions+=167;goto B715722;
case 0x715728:c.instructions+=166;goto B715728;
case 0x71572f:c.instructions+=165;goto B71572f;
case 0x715736:c.instructions+=164;goto B715736;
case 0x71573d:c.instructions+=163;goto B71573d;
case 0x715744:c.instructions+=162;goto B715744;
case 0x71574b:c.instructions+=161;goto B71574b;
case 0x715752:c.instructions+=160;goto B715752;
case 0x715759:c.instructions+=159;goto B715759;
case 0x71575f:c.instructions+=158;goto B71575f;
case 0x715765:c.instructions+=157;goto B715765;
case 0x71576c:c.instructions+=156;goto B71576c;
case 0x715772:c.instructions+=155;goto B715772;
case 0x715779:c.instructions+=154;goto B715779;
case 0x71577f:c.instructions+=153;goto B71577f;
case 0x715786:c.instructions+=152;goto B715786;
case 0x71578c:c.instructions+=151;goto B71578c;
case 0x715792:c.instructions+=150;goto B715792;
case 0x715799:c.instructions+=149;goto B715799;
case 0x71579f:c.instructions+=148;goto B71579f;
case 0x7157a6:c.instructions+=147;goto B7157a6;
case 0x7157ac:c.instructions+=146;goto B7157ac;
case 0x7157b2:c.instructions+=145;goto B7157b2;
case 0x7157b9:c.instructions+=144;goto B7157b9;
case 0x7157bf:c.instructions+=143;goto B7157bf;
case 0x7157c6:c.instructions+=142;goto B7157c6;
case 0x7157cc:c.instructions+=141;goto B7157cc;
case 0x7157d3:c.instructions+=140;goto B7157d3;
case 0x7157da:c.instructions+=139;goto B7157da;
case 0x7157e0:c.instructions+=138;goto B7157e0;
case 0x7157e7:c.instructions+=137;goto B7157e7;
case 0x7157ee:c.instructions+=136;goto B7157ee;
case 0x7157f4:c.instructions+=135;goto B7157f4;
case 0x7157fa:c.instructions+=134;goto B7157fa;
case 0x715801:c.instructions+=133;goto B715801;
case 0x715807:c.instructions+=132;goto B715807;
case 0x71580e:c.instructions+=131;goto B71580e;
case 0x715814:c.instructions+=130;goto B715814;
case 0x71581a:c.instructions+=129;goto B71581a;
case 0x715821:c.instructions+=128;goto B715821;
case 0x715828:c.instructions+=127;goto B715828;
case 0x71582f:c.instructions+=126;goto B71582f;
case 0x715836:c.instructions+=125;goto B715836;
case 0x71583d:c.instructions+=124;goto B71583d;
case 0x715843:c.instructions+=123;goto B715843;
case 0x715849:c.instructions+=122;goto B715849;
case 0x715850:c.instructions+=121;goto B715850;
case 0x715857:c.instructions+=120;goto B715857;
case 0x71585d:c.instructions+=119;goto B71585d;
case 0x715864:c.instructions+=118;goto B715864;
case 0x71586a:c.instructions+=117;goto B71586a;
case 0x715871:c.instructions+=116;goto B715871;
case 0x715877:c.instructions+=115;goto B715877;
case 0x71587e:c.instructions+=114;goto B71587e;
case 0x715885:c.instructions+=113;goto B715885;
case 0x71588c:c.instructions+=112;goto B71588c;
case 0x715892:c.instructions+=111;goto B715892;
case 0x715898:c.instructions+=110;goto B715898;
case 0x71589f:c.instructions+=109;goto B71589f;
case 0x7158a5:c.instructions+=108;goto B7158a5;
case 0x7158ab:c.instructions+=107;goto B7158ab;
case 0x7158b2:c.instructions+=106;goto B7158b2;
case 0x7158b9:c.instructions+=105;goto B7158b9;
case 0x7158c0:c.instructions+=104;goto B7158c0;
case 0x7158c7:c.instructions+=103;goto B7158c7;
case 0x7158ce:c.instructions+=102;goto B7158ce;
case 0x7158d4:c.instructions+=101;goto B7158d4;
case 0x7158db:c.instructions+=100;goto B7158db;
case 0x7158e2:c.instructions+=99;goto B7158e2;
case 0x7158e9:c.instructions+=98;goto B7158e9;
case 0x7158ef:c.instructions+=97;goto B7158ef;
case 0x7158f6:c.instructions+=96;goto B7158f6;
case 0x7158fc:c.instructions+=95;goto B7158fc;
case 0x715903:c.instructions+=94;goto B715903;
case 0x71590a:c.instructions+=93;goto B71590a;
case 0x715910:c.instructions+=92;goto B715910;
case 0x715916:c.instructions+=91;goto B715916;
case 0x71591d:c.instructions+=90;goto B71591d;
case 0x715924:c.instructions+=89;goto B715924;
case 0x71592b:c.instructions+=88;goto B71592b;
case 0x715931:c.instructions+=87;goto B715931;
case 0x715937:c.instructions+=86;goto B715937;
case 0x71593e:c.instructions+=85;goto B71593e;
case 0x715944:c.instructions+=84;goto B715944;
case 0x71594b:c.instructions+=83;goto B71594b;
case 0x715952:c.instructions+=82;goto B715952;
case 0x715959:c.instructions+=81;goto B715959;
case 0x715960:c.instructions+=80;goto B715960;
case 0x715966:c.instructions+=79;goto B715966;
case 0x71596d:c.instructions+=78;goto B71596d;
case 0x715973:c.instructions+=77;goto B715973;
case 0x71597a:c.instructions+=76;goto B71597a;
case 0x715981:c.instructions+=75;goto B715981;
case 0x715988:c.instructions+=74;goto B715988;
case 0x71598f:c.instructions+=73;goto B71598f;
case 0x715996:c.instructions+=72;goto B715996;
case 0x71599c:c.instructions+=71;goto B71599c;
case 0x7159a3:c.instructions+=70;goto B7159a3;
case 0x7159aa:c.instructions+=69;goto B7159aa;
case 0x7159b1:c.instructions+=68;goto B7159b1;
case 0x7159b8:c.instructions+=67;goto B7159b8;
case 0x7159bf:c.instructions+=66;goto B7159bf;
case 0x7159c5:c.instructions+=65;goto B7159c5;
case 0x7159cc:c.instructions+=64;goto B7159cc;
case 0x7159d2:c.instructions+=63;goto B7159d2;
case 0x7159d8:c.instructions+=62;goto B7159d8;
case 0x7159df:c.instructions+=61;goto B7159df;
case 0x7159e6:c.instructions+=60;goto B7159e6;
case 0x7159ec:c.instructions+=59;goto B7159ec;
case 0x7159f2:c.instructions+=58;goto B7159f2;
case 0x7159f9:c.instructions+=57;goto B7159f9;
case 0x7159ff:c.instructions+=56;goto B7159ff;
case 0x715a05:c.instructions+=55;goto B715a05;
case 0x715a0b:c.instructions+=54;goto B715a0b;
case 0x715a12:c.instructions+=53;goto B715a12;
case 0x715a19:c.instructions+=52;goto B715a19;
case 0x715a20:c.instructions+=51;goto B715a20;
case 0x715a26:c.instructions+=50;goto B715a26;
case 0x715a2d:c.instructions+=49;goto B715a2d;
case 0x715a33:c.instructions+=48;goto B715a33;
case 0x715a39:c.instructions+=47;goto B715a39;
case 0x715a3f:c.instructions+=46;goto B715a3f;
case 0x715a46:c.instructions+=45;goto B715a46;
case 0x715a4d:c.instructions+=44;goto B715a4d;
case 0x715a54:c.instructions+=43;goto B715a54;
case 0x715a5a:c.instructions+=42;goto B715a5a;
case 0x715a60:c.instructions+=41;goto B715a60;
case 0x715a66:c.instructions+=40;goto B715a66;
case 0x715a6c:c.instructions+=39;goto B715a6c;
case 0x715a73:c.instructions+=38;goto B715a73;
case 0x715a7a:c.instructions+=37;goto B715a7a;
case 0x715a80:c.instructions+=36;goto B715a80;
case 0x715a86:c.instructions+=35;goto B715a86;
case 0x715a8d:c.instructions+=34;goto B715a8d;
case 0x715a94:c.instructions+=33;goto B715a94;
case 0x715a9b:c.instructions+=32;goto B715a9b;
case 0x715aa2:c.instructions+=31;goto B715aa2;
case 0x715aa9:c.instructions+=30;goto B715aa9;
case 0x715aaf:c.instructions+=29;goto B715aaf;
case 0x715ab6:c.instructions+=28;goto B715ab6;
case 0x715abc:c.instructions+=27;goto B715abc;
case 0x715ac3:c.instructions+=26;goto B715ac3;
case 0x715aca:c.instructions+=25;goto B715aca;
case 0x715ad1:c.instructions+=24;goto B715ad1;
case 0x715ad7:c.instructions+=23;goto B715ad7;
case 0x715ade:c.instructions+=22;goto B715ade;
case 0x715ae5:c.instructions+=21;goto B715ae5;
case 0x715aec:c.instructions+=20;goto B715aec;
case 0x715af3:c.instructions+=19;goto B715af3;
case 0x715afa:c.instructions+=18;goto B715afa;
case 0x715b01:c.instructions+=17;goto B715b01;
case 0x715b08:c.instructions+=16;goto B715b08;
case 0x715b0f:c.instructions+=15;goto B715b0f;
case 0x715b16:c.instructions+=14;goto B715b16;
case 0x715b1c:c.instructions+=13;goto B715b1c;
case 0x715b22:c.instructions+=12;goto B715b22;
case 0x715b28:c.instructions+=11;goto B715b28;
case 0x715b2e:c.instructions+=10;goto B715b2e;
case 0x715b35:c.instructions+=9;goto B715b35;
case 0x715b3b:c.instructions+=8;goto B715b3b;
case 0x715b41:c.instructions+=7;goto B715b41;
case 0x715b43:c.instructions+=6;goto B715b43;
case 0x715b4a:c.instructions+=5;goto B715b4a;
case 0x715b50:c.instructions+=4;goto B715b50;
case 0x715b57:c.instructions+=3;goto B715b57;
case 0x715b59:c.instructions+=2;goto B715b59;
case 0x715b5a:c.instructions+=1;goto B715b5a;
case 0x715b60:goto L715b60;
case 0x715b62:goto L715b62;
case 0x715b64:c.instructions+=14;goto B715b64;
case 0x715b65:c.instructions+=13;goto B715b65;
case 0x715b67:c.instructions+=12;goto B715b67;
case 0x715b69:c.instructions+=11;goto B715b69;
case 0x715b6a:c.instructions+=10;goto B715b6a;
case 0x715b6d:c.instructions+=9;goto B715b6d;
case 0x715b6f:c.instructions+=8;goto B715b6f;
case 0x715b72:c.instructions+=7;goto B715b72;
case 0x715b75:c.instructions+=6;goto B715b75;
case 0x715b78:c.instructions+=5;goto B715b78;
case 0x715b7e:c.instructions+=4;goto B715b7e;
case 0x715b84:c.instructions+=3;goto B715b84;
case 0x715b8a:c.instructions+=2;goto B715b8a;
case 0x715b90:c.instructions+=1;goto B715b90;
case 0x715b93:goto L715b93;
case 0x715b96:c.instructions+=7;goto B715b96;
case 0x715b99:c.instructions+=6;goto B715b99;
case 0x715b9d:c.instructions+=5;goto B715b9d;
case 0x715b9f:c.instructions+=4;goto B715b9f;
case 0x715ba3:c.instructions+=3;goto B715ba3;
case 0x715ba9:c.instructions+=2;goto B715ba9;
case 0x715bac:c.instructions+=1;goto B715bac;
case 0x715bb1:goto L715bb1;
case 0x715bb7:c.instructions+=3;goto B715bb7;
case 0x715bba:c.instructions+=2;goto B715bba;
case 0x715bc0:c.instructions+=1;goto B715bc0;
case 0x715bc5:goto L715bc5;
case 0x715bc7:c.instructions+=3;goto B715bc7;
case 0x715bc9:c.instructions+=2;goto B715bc9;
case 0x715bcc:c.instructions+=1;goto B715bcc;
case 0x715bce:goto L715bce;
case 0x715bd0:c.instructions+=2;goto B715bd0;
case 0x715bd2:c.instructions+=1;goto B715bd2;
case 0x715bd4:goto L715bd4;
case 0x715bd7:c.instructions+=2;goto B715bd7;
case 0x715bde:c.instructions+=1;goto B715bde;
case 0x715be3:goto L715be3;
case 0x715be5:c.instructions+=9;goto B715be5;
case 0x715be7:c.instructions+=8;goto B715be7;
case 0x715bea:c.instructions+=7;goto B715bea;
case 0x715bec:c.instructions+=6;goto B715bec;
case 0x715bee:c.instructions+=5;goto B715bee;
case 0x715bf1:c.instructions+=4;goto B715bf1;
case 0x715bf3:c.instructions+=3;goto B715bf3;
case 0x715bf6:c.instructions+=2;goto B715bf6;
case 0x715bf9:c.instructions+=1;goto B715bf9;
case 0x715bfb:goto L715bfb;
case 0x715bfd:goto L715bfd;
case 0x715bff:c.instructions+=1;goto B715bff;
case 0x715c02:goto L715c02;
case 0x715c04:goto L715c04;
case 0x715c07:c.instructions+=1;goto B715c07;
case 0x715c09:goto L715c09;
case 0x715c0b:c.instructions+=1;goto B715c0b;
case 0x715c0e:goto L715c0e;
case 0x715c11:c.instructions+=6;goto B715c11;
case 0x715c17:c.instructions+=5;goto B715c17;
case 0x715c1a:c.instructions+=4;goto B715c1a;
case 0x715c20:c.instructions+=3;goto B715c20;
case 0x715c22:c.instructions+=2;goto B715c22;
case 0x715c25:c.instructions+=1;goto B715c25;
case 0x715c2b:goto L715c2b;
case 0x715c30:c.instructions+=2;goto B715c30;
case 0x715c32:c.instructions+=1;goto B715c32;
case 0x715c34:goto L715c34;
case 0x715c36:c.instructions+=5;goto B715c36;
case 0x715c3d:c.instructions+=4;goto B715c3d;
case 0x715c3f:c.instructions+=3;goto B715c3f;
case 0x715c41:c.instructions+=2;goto B715c41;
case 0x715c44:c.instructions+=1;goto B715c44;
case 0x715c46:goto L715c46;
case 0x715c48:goto L715c48;
case 0x715c4a:c.instructions+=1;goto B715c4a;
case 0x715c4d:goto L715c4d;
case 0x715c4f:goto L715c4f;
case 0x715c51:goto L715c51;
case 0x715c56:goto L715c56;
case 0x715c5b:c.instructions+=5;goto B715c5b;
case 0x715c62:c.instructions+=4;goto B715c62;
case 0x715c69:c.instructions+=3;goto B715c69;
case 0x715c6a:c.instructions+=2;goto B715c6a;
case 0x715c70:c.instructions+=1;goto B715c70;
case 0x715c72:goto L715c72;
case 0x715c78:c.instructions+=38;goto B715c78;
case 0x715c7a:c.instructions+=37;goto B715c7a;
case 0x715c7c:c.instructions+=36;goto B715c7c;
case 0x715c7e:c.instructions+=35;goto B715c7e;
case 0x715c80:c.instructions+=34;goto B715c80;
case 0x715c82:c.instructions+=33;goto B715c82;
case 0x715c88:c.instructions+=32;goto B715c88;
case 0x715c8a:c.instructions+=31;goto B715c8a;
case 0x715c8c:c.instructions+=30;goto B715c8c;
case 0x715c8e:c.instructions+=29;goto B715c8e;
case 0x715c91:c.instructions+=28;goto B715c91;
case 0x715c94:c.instructions+=27;goto B715c94;
case 0x715c95:c.instructions+=26;goto B715c95;
case 0x715c96:c.instructions+=25;goto B715c96;
case 0x715c97:c.instructions+=24;goto B715c97;
case 0x715c98:c.instructions+=23;goto B715c98;
case 0x715c9a:c.instructions+=22;goto B715c9a;
case 0x715c9c:c.instructions+=21;goto B715c9c;
case 0x715c9e:c.instructions+=20;goto B715c9e;
case 0x715ca4:c.instructions+=19;goto B715ca4;
case 0x715ca6:c.instructions+=18;goto B715ca6;
case 0x715ca9:c.instructions+=17;goto B715ca9;
case 0x715cac:c.instructions+=16;goto B715cac;
case 0x715cad:c.instructions+=15;goto B715cad;
case 0x715cae:c.instructions+=14;goto B715cae;
case 0x715caf:c.instructions+=13;goto B715caf;
case 0x715cb0:c.instructions+=12;goto B715cb0;
case 0x715cb2:c.instructions+=11;goto B715cb2;
case 0x715cb4:c.instructions+=10;goto B715cb4;
case 0x715cb7:c.instructions+=9;goto B715cb7;
case 0x715cba:c.instructions+=8;goto B715cba;
case 0x715cc0:c.instructions+=7;goto B715cc0;
case 0x715cc1:c.instructions+=6;goto B715cc1;
case 0x715cc2:c.instructions+=5;goto B715cc2;
case 0x715cc3:c.instructions+=4;goto B715cc3;
case 0x715cc4:c.instructions+=3;goto B715cc4;
case 0x715cc7:c.instructions+=2;goto B715cc7;
case 0x715cc9:c.instructions+=1;goto B715cc9;
case 0x715ccb:goto L715ccb;
case 0x715cce:c.instructions+=2;goto B715cce;
case 0x715cd1:c.instructions+=1;goto B715cd1;
case 0x715cd4:goto L715cd4;
case 0x715cd7:c.instructions+=2;goto B715cd7;
case 0x715cda:c.instructions+=1;goto B715cda;
case 0x715cdf:goto L715cdf;
case 0x715ce4:c.instructions+=6;goto B715ce4;
case 0x715ceb:c.instructions+=5;goto B715ceb;
case 0x715cee:c.instructions+=4;goto B715cee;
case 0x715cf1:c.instructions+=3;goto B715cf1;
case 0x715cf4:c.instructions+=2;goto B715cf4;
case 0x715cf7:c.instructions+=1;goto B715cf7;
case 0x715cf9:goto L715cf9;
case 0x715cfd:c.instructions+=9;goto B715cfd;
case 0x715d04:c.instructions+=8;goto B715d04;
case 0x715d0b:c.instructions+=7;goto B715d0b;
case 0x715d12:c.instructions+=6;goto B715d12;
case 0x715d16:c.instructions+=5;goto B715d16;
case 0x715d19:c.instructions+=4;goto B715d19;
case 0x715d1d:c.instructions+=3;goto B715d1d;
case 0x715d20:c.instructions+=2;goto B715d20;
case 0x715d22:c.instructions+=1;goto B715d22;
case 0x715d24:goto L715d24;
case 0x715d27:c.instructions+=3;goto B715d27;
case 0x715d2a:c.instructions+=2;goto B715d2a;
case 0x715d2d:c.instructions+=1;goto B715d2d;
case 0x715d2f:goto L715d2f;
case 0x715d30:c.instructions+=6;goto B715d30;
case 0x715d31:c.instructions+=5;goto B715d31;
case 0x715d33:c.instructions+=4;goto B715d33;
case 0x715d34:c.instructions+=3;goto B715d34;
case 0x715d36:c.instructions+=2;goto B715d36;
case 0x715d37:c.instructions+=1;goto B715d37;
case 0x715d38:goto L715d38;
case 0x715d39:c.instructions+=62;goto B715d39;
case 0x715d3b:c.instructions+=61;goto B715d3b;
case 0x715d3c:c.instructions+=60;goto B715d3c;
case 0x715d3d:c.instructions+=59;goto B715d3d;
case 0x715d40:c.instructions+=58;goto B715d40;
case 0x715d43:c.instructions+=57;goto B715d43;
case 0x715d44:c.instructions+=56;goto B715d44;
case 0x715d47:c.instructions+=55;goto B715d47;
case 0x715d4b:c.instructions+=54;goto B715d4b;
case 0x715d4d:c.instructions+=53;goto B715d4d;
case 0x715d50:c.instructions+=52;goto B715d50;
case 0x715d51:c.instructions+=51;goto B715d51;
case 0x715d52:c.instructions+=50;goto B715d52;
case 0x715d55:c.instructions+=49;goto B715d55;
case 0x715d5b:c.instructions+=48;goto B715d5b;
case 0x715d5e:c.instructions+=47;goto B715d5e;
case 0x715d61:c.instructions+=46;goto B715d61;
case 0x715d64:c.instructions+=45;goto B715d64;
case 0x715d67:c.instructions+=44;goto B715d67;
case 0x715d69:c.instructions+=43;goto B715d69;
case 0x715d6c:c.instructions+=42;goto B715d6c;
case 0x715d6f:c.instructions+=41;goto B715d6f;
case 0x715d71:c.instructions+=40;goto B715d71;
case 0x715d77:c.instructions+=39;goto B715d77;
case 0x715d7d:c.instructions+=38;goto B715d7d;
case 0x715d80:c.instructions+=37;goto B715d80;
case 0x715d83:c.instructions+=36;goto B715d83;
case 0x715d86:c.instructions+=35;goto B715d86;
case 0x715d88:c.instructions+=34;goto B715d88;
case 0x715d8a:c.instructions+=33;goto B715d8a;
case 0x715d8d:c.instructions+=32;goto B715d8d;
case 0x715d90:c.instructions+=31;goto B715d90;
case 0x715d92:c.instructions+=30;goto B715d92;
case 0x715d95:c.instructions+=29;goto B715d95;
case 0x715d98:c.instructions+=28;goto B715d98;
case 0x715d99:c.instructions+=27;goto B715d99;
case 0x715d9a:c.instructions+=26;goto B715d9a;
case 0x715d9b:c.instructions+=25;goto B715d9b;
case 0x715d9c:c.instructions+=24;goto B715d9c;
case 0x715d9f:c.instructions+=23;goto B715d9f;
case 0x715da1:c.instructions+=22;goto B715da1;
case 0x715da3:c.instructions+=21;goto B715da3;
case 0x715da6:c.instructions+=20;goto B715da6;
case 0x715da8:c.instructions+=19;goto B715da8;
case 0x715dab:c.instructions+=18;goto B715dab;
case 0x715dae:c.instructions+=17;goto B715dae;
case 0x715daf:c.instructions+=16;goto B715daf;
case 0x715db0:c.instructions+=15;goto B715db0;
case 0x715db1:c.instructions+=14;goto B715db1;
case 0x715db2:c.instructions+=13;goto B715db2;
case 0x715db5:c.instructions+=12;goto B715db5;
case 0x715db7:c.instructions+=11;goto B715db7;
case 0x715db9:c.instructions+=10;goto B715db9;
case 0x715dbc:c.instructions+=9;goto B715dbc;
case 0x715dbe:c.instructions+=8;goto B715dbe;
case 0x715dc1:c.instructions+=7;goto B715dc1;
case 0x715dc3:c.instructions+=6;goto B715dc3;
case 0x715dc6:c.instructions+=5;goto B715dc6;
case 0x715dc7:c.instructions+=4;goto B715dc7;
case 0x715dc8:c.instructions+=3;goto B715dc8;
case 0x715dc9:c.instructions+=2;goto B715dc9;
case 0x715dca:c.instructions+=1;goto B715dca;
case 0x715dcc:goto L715dcc;
case 0x715dcf:goto L715dcf;
case 0x715dd2:c.instructions+=3;goto B715dd2;
case 0x715dd5:c.instructions+=2;goto B715dd5;
case 0x715dd8:c.instructions+=1;goto B715dd8;
case 0x715dda:goto L715dda;
case 0x715ddf:c.instructions+=7;goto B715ddf;
case 0x715de4:c.instructions+=6;goto B715de4;
case 0x715de9:c.instructions+=5;goto B715de9;
case 0x715dee:c.instructions+=4;goto B715dee;
case 0x715df3:c.instructions+=3;goto B715df3;
case 0x715df6:c.instructions+=2;goto B715df6;
case 0x715df8:c.instructions+=1;goto B715df8;
case 0x715dfa:goto L715dfa;
case 0x715dfd:c.instructions+=3;goto B715dfd;
case 0x715e00:c.instructions+=2;goto B715e00;
case 0x715e03:c.instructions+=1;goto B715e03;
case 0x715e05:goto L715e05;
case 0x715e06:c.instructions+=6;goto B715e06;
case 0x715e07:c.instructions+=5;goto B715e07;
case 0x715e09:c.instructions+=4;goto B715e09;
case 0x715e0a:c.instructions+=3;goto B715e0a;
case 0x715e0c:c.instructions+=2;goto B715e0c;
case 0x715e0d:c.instructions+=1;goto B715e0d;
case 0x715e0e:goto L715e0e;
case 0x715e0f:c.instructions+=56;goto B715e0f;
case 0x715e11:c.instructions+=55;goto B715e11;
case 0x715e12:c.instructions+=54;goto B715e12;
case 0x715e13:c.instructions+=53;goto B715e13;
case 0x715e16:c.instructions+=52;goto B715e16;
case 0x715e19:c.instructions+=51;goto B715e19;
case 0x715e1a:c.instructions+=50;goto B715e1a;
case 0x715e1d:c.instructions+=49;goto B715e1d;
case 0x715e21:c.instructions+=48;goto B715e21;
case 0x715e23:c.instructions+=47;goto B715e23;
case 0x715e26:c.instructions+=46;goto B715e26;
case 0x715e27:c.instructions+=45;goto B715e27;
case 0x715e28:c.instructions+=44;goto B715e28;
case 0x715e2b:c.instructions+=43;goto B715e2b;
case 0x715e31:c.instructions+=42;goto B715e31;
case 0x715e34:c.instructions+=41;goto B715e34;
case 0x715e37:c.instructions+=40;goto B715e37;
case 0x715e3a:c.instructions+=39;goto B715e3a;
case 0x715e3d:c.instructions+=38;goto B715e3d;
case 0x715e3f:c.instructions+=37;goto B715e3f;
case 0x715e42:c.instructions+=36;goto B715e42;
case 0x715e45:c.instructions+=35;goto B715e45;
case 0x715e47:c.instructions+=34;goto B715e47;
case 0x715e4d:c.instructions+=33;goto B715e4d;
case 0x715e53:c.instructions+=32;goto B715e53;
case 0x715e56:c.instructions+=31;goto B715e56;
case 0x715e59:c.instructions+=30;goto B715e59;
case 0x715e5c:c.instructions+=29;goto B715e5c;
case 0x715e5e:c.instructions+=28;goto B715e5e;
case 0x715e60:c.instructions+=27;goto B715e60;
case 0x715e63:c.instructions+=26;goto B715e63;
case 0x715e66:c.instructions+=25;goto B715e66;
case 0x715e68:c.instructions+=24;goto B715e68;
case 0x715e6b:c.instructions+=23;goto B715e6b;
case 0x715e6e:c.instructions+=22;goto B715e6e;
case 0x715e6f:c.instructions+=21;goto B715e6f;
case 0x715e70:c.instructions+=20;goto B715e70;
case 0x715e73:c.instructions+=19;goto B715e73;
case 0x715e75:c.instructions+=18;goto B715e75;
case 0x715e77:c.instructions+=17;goto B715e77;
case 0x715e7a:c.instructions+=16;goto B715e7a;
case 0x715e7c:c.instructions+=15;goto B715e7c;
case 0x715e7f:c.instructions+=14;goto B715e7f;
case 0x715e82:c.instructions+=13;goto B715e82;
case 0x715e83:c.instructions+=12;goto B715e83;
case 0x715e84:c.instructions+=11;goto B715e84;
case 0x715e87:c.instructions+=10;goto B715e87;
case 0x715e89:c.instructions+=9;goto B715e89;
case 0x715e8b:c.instructions+=8;goto B715e8b;
case 0x715e8e:c.instructions+=7;goto B715e8e;
case 0x715e90:c.instructions+=6;goto B715e90;
case 0x715e93:c.instructions+=5;goto B715e93;
case 0x715e95:c.instructions+=4;goto B715e95;
case 0x715e98:c.instructions+=3;goto B715e98;
case 0x715e99:c.instructions+=2;goto B715e99;
case 0x715e9a:c.instructions+=1;goto B715e9a;
case 0x715e9c:goto L715e9c;
case 0x715e9f:goto L715e9f;
case 0x715ea2:c.instructions+=3;goto B715ea2;
case 0x715ea5:c.instructions+=2;goto B715ea5;
case 0x715ea8:c.instructions+=1;goto B715ea8;
case 0x715eaa:goto L715eaa;
case 0x715eae:c.instructions+=7;goto B715eae;
case 0x715eb2:c.instructions+=6;goto B715eb2;
case 0x715eb6:c.instructions+=5;goto B715eb6;
case 0x715eba:c.instructions+=4;goto B715eba;
case 0x715ebe:c.instructions+=3;goto B715ebe;
case 0x715ec1:c.instructions+=2;goto B715ec1;
case 0x715ec3:c.instructions+=1;goto B715ec3;
case 0x715ec5:goto L715ec5;
case 0x715ec8:c.instructions+=3;goto B715ec8;
case 0x715ecb:c.instructions+=2;goto B715ecb;
case 0x715ece:c.instructions+=1;goto B715ece;
case 0x715ed0:goto L715ed0;
case 0x715ed1:c.instructions+=6;goto B715ed1;
case 0x715ed2:c.instructions+=5;goto B715ed2;
case 0x715ed4:c.instructions+=4;goto B715ed4;
case 0x715ed5:c.instructions+=3;goto B715ed5;
case 0x715ed7:c.instructions+=2;goto B715ed7;
case 0x715ed8:c.instructions+=1;goto B715ed8;
case 0x715ed9:goto L715ed9;
case 0x715eda:c.instructions+=11;goto B715eda;
case 0x715edc:c.instructions+=10;goto B715edc;
case 0x715edf:c.instructions+=9;goto B715edf;
case 0x715ee0:c.instructions+=8;goto B715ee0;
case 0x715ee1:c.instructions+=7;goto B715ee1;
case 0x715ee4:c.instructions+=6;goto B715ee4;
case 0x715ee6:c.instructions+=5;goto B715ee6;
case 0x715ee9:c.instructions+=4;goto B715ee9;
case 0x715eea:c.instructions+=3;goto B715eea;
case 0x715eed:c.instructions+=2;goto B715eed;
case 0x715ef0:c.instructions+=1;goto B715ef0;
case 0x715ef3:goto L715ef3;
case 0x715ef5:goto L715ef5;
case 0x715ef7:c.instructions+=4;goto B715ef7;
case 0x715efa:c.instructions+=3;goto B715efa;
case 0x715efd:c.instructions+=2;goto B715efd;
case 0x715efe:c.instructions+=1;goto B715efe;
case 0x715f01:goto L715f01;
case 0x715f03:goto L715f03;
case 0x715f09:goto L715f09;
case 0x715f0a:c.instructions+=1;goto B715f0a;
case 0x715f0d:goto L715f0d;
case 0x715f10:c.instructions+=9;goto B715f10;
case 0x715f13:c.instructions+=8;goto B715f13;
case 0x715f16:c.instructions+=7;goto B715f16;
case 0x715f19:c.instructions+=6;goto B715f19;
case 0x715f1b:c.instructions+=5;goto B715f1b;
case 0x715f1e:c.instructions+=4;goto B715f1e;
case 0x715f21:c.instructions+=3;goto B715f21;
case 0x715f24:c.instructions+=2;goto B715f24;
case 0x715f27:c.instructions+=1;goto B715f27;
case 0x715f2a:goto L715f2a;
case 0x715f2e:c.instructions+=26;goto B715f2e;
case 0x715f32:c.instructions+=25;goto B715f32;
case 0x715f35:c.instructions+=24;goto B715f35;
case 0x715f38:c.instructions+=23;goto B715f38;
case 0x715f3c:c.instructions+=22;goto B715f3c;
case 0x715f3f:c.instructions+=21;goto B715f3f;
case 0x715f42:c.instructions+=20;goto B715f42;
case 0x715f45:c.instructions+=19;goto B715f45;
case 0x715f4c:c.instructions+=18;goto B715f4c;
case 0x715f53:c.instructions+=17;goto B715f53;
case 0x715f56:c.instructions+=16;goto B715f56;
case 0x715f5a:c.instructions+=15;goto B715f5a;
case 0x715f5e:c.instructions+=14;goto B715f5e;
case 0x715f61:c.instructions+=13;goto B715f61;
case 0x715f64:c.instructions+=12;goto B715f64;
case 0x715f67:c.instructions+=11;goto B715f67;
case 0x715f6a:c.instructions+=10;goto B715f6a;
case 0x715f6d:c.instructions+=9;goto B715f6d;
case 0x715f70:c.instructions+=8;goto B715f70;
case 0x715f73:c.instructions+=7;goto B715f73;
case 0x715f77:c.instructions+=6;goto B715f77;
case 0x715f7b:c.instructions+=5;goto B715f7b;
case 0x715f7e:c.instructions+=4;goto B715f7e;
case 0x715f82:c.instructions+=3;goto B715f82;
case 0x715f85:c.instructions+=2;goto B715f85;
case 0x715f87:c.instructions+=1;goto B715f87;
case 0x715f89:goto L715f89;
case 0x715f8c:c.instructions+=3;goto B715f8c;
case 0x715f8f:c.instructions+=2;goto B715f8f;
case 0x715f92:c.instructions+=1;goto B715f92;
case 0x715f98:goto L715f98;
case 0x715f9b:c.instructions+=6;goto B715f9b;
case 0x715f9e:c.instructions+=5;goto B715f9e;
case 0x715fa1:c.instructions+=4;goto B715fa1;
case 0x715fa4:c.instructions+=3;goto B715fa4;
case 0x715fa7:c.instructions+=2;goto B715fa7;
case 0x715fa9:c.instructions+=1;goto B715fa9;
case 0x715fac:goto L715fac;
case 0x715fae:goto L715fae;
case 0x715fb0:c.instructions+=1;goto B715fb0;
case 0x715fb3:goto L715fb3;
case 0x715fb5:goto L715fb5;
case 0x715fb6:c.instructions+=4;goto B715fb6;
case 0x715fb7:c.instructions+=3;goto B715fb7;
case 0x715fb8:c.instructions+=2;goto B715fb8;
case 0x715fb9:c.instructions+=1;goto B715fb9;
case 0x715fba:goto L715fba;
case 0x715fbb:c.instructions+=25;goto B715fbb;
case 0x715fbd:c.instructions+=24;goto B715fbd;
case 0x715fbe:c.instructions+=23;goto B715fbe;
case 0x715fbf:c.instructions+=22;goto B715fbf;
case 0x715fc2:c.instructions+=21;goto B715fc2;
case 0x715fc5:c.instructions+=20;goto B715fc5;
case 0x715fc6:c.instructions+=19;goto B715fc6;
case 0x715fc9:c.instructions+=18;goto B715fc9;
case 0x715fcd:c.instructions+=17;goto B715fcd;
case 0x715fcf:c.instructions+=16;goto B715fcf;
case 0x715fd5:c.instructions+=15;goto B715fd5;
case 0x715fd6:c.instructions+=14;goto B715fd6;
case 0x715fd7:c.instructions+=13;goto B715fd7;
case 0x715fd8:c.instructions+=12;goto B715fd8;
case 0x715fdb:c.instructions+=11;goto B715fdb;
case 0x715fde:c.instructions+=10;goto B715fde;
case 0x715fe1:c.instructions+=9;goto B715fe1;
case 0x715fe4:c.instructions+=8;goto B715fe4;
case 0x715fe7:c.instructions+=7;goto B715fe7;
case 0x715fea:c.instructions+=6;goto B715fea;
case 0x715fed:c.instructions+=5;goto B715fed;
case 0x715ff3:c.instructions+=4;goto B715ff3;
case 0x715ff6:c.instructions+=3;goto B715ff6;
case 0x715ffc:c.instructions+=2;goto B715ffc;
case 0x715fff:c.instructions+=1;goto B715fff;
default:missing_instruction(c.pc);}
B715001:L715001:{c.instructions+=445;NFSU2_TR(0x715001);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715007:{NFSU2_TR(0x715007);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71500d:{NFSU2_TR(0x71500d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715013:{NFSU2_TR(0x715013);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715019:{NFSU2_TR(0x715019);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715020:{NFSU2_TR(0x715020);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715027:{NFSU2_TR(0x715027);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcdaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71502e:{NFSU2_TR(0x71502e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcdbull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715035:{NFSU2_TR(0x715035);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcdcull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71503c:{NFSU2_TR(0x71503c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcddull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715043:{NFSU2_TR(0x715043);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcdeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715049:{NFSU2_TR(0x715049);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcdfull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715050:{NFSU2_TR(0x715050);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715057:{NFSU2_TR(0x715057);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce1ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71505e:{NFSU2_TR(0x71505e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715065:{NFSU2_TR(0x715065);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71506c:{NFSU2_TR(0x71506c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715072:{NFSU2_TR(0x715072);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715078:{NFSU2_TR(0x715078);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71507f:{NFSU2_TR(0x71507f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715085:{NFSU2_TR(0x715085);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71508b:{NFSU2_TR(0x71508b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715092:{NFSU2_TR(0x715092);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffceaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715099:{NFSU2_TR(0x715099);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcebull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150a0:{NFSU2_TR(0x7150a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcecull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150a6:{NFSU2_TR(0x7150a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcedull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150ac:{NFSU2_TR(0x7150ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffceeull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150b3:{NFSU2_TR(0x7150b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcefull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150ba:{NFSU2_TR(0x7150ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150c1:{NFSU2_TR(0x7150c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150c7:{NFSU2_TR(0x7150c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150cd:{NFSU2_TR(0x7150cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150d3:{NFSU2_TR(0x7150d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150d9:{NFSU2_TR(0x7150d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150e0:{NFSU2_TR(0x7150e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf6ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150e7:{NFSU2_TR(0x7150e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150ee:{NFSU2_TR(0x7150ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7150f5:{NFSU2_TR(0x7150f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcf9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7150fb:{NFSU2_TR(0x7150fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcfaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715101:{NFSU2_TR(0x715101);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcfbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715107:{NFSU2_TR(0x715107);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcfcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71510e:{NFSU2_TR(0x71510e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcfdull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715114:{NFSU2_TR(0x715114);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcfeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71511a:{NFSU2_TR(0x71511a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715120:{NFSU2_TR(0x715120);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd00ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715126:{NFSU2_TR(0x715126);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd01ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71512c:{NFSU2_TR(0x71512c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd02ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715132:{NFSU2_TR(0x715132);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd03ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715139:{NFSU2_TR(0x715139);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd04ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71513f:{NFSU2_TR(0x71513f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd05ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715145:{NFSU2_TR(0x715145);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd06ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71514c:{NFSU2_TR(0x71514c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd07ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715153:{NFSU2_TR(0x715153);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd08ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71515a:{NFSU2_TR(0x71515a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd09ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715161:{NFSU2_TR(0x715161);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715168:{NFSU2_TR(0x715168);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71516e:{NFSU2_TR(0x71516e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715175:{NFSU2_TR(0x715175);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71517c:{NFSU2_TR(0x71517c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715183:{NFSU2_TR(0x715183);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd0full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71518a:{NFSU2_TR(0x71518a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715190:{NFSU2_TR(0x715190);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd11ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715197:{NFSU2_TR(0x715197);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd12ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71519d:{NFSU2_TR(0x71519d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd13ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151a4:{NFSU2_TR(0x7151a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd14ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151ab:{NFSU2_TR(0x7151ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd15ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151b2:{NFSU2_TR(0x7151b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd16ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7151b8:{NFSU2_TR(0x7151b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd17ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151bf:{NFSU2_TR(0x7151bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd18ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7151c5:{NFSU2_TR(0x7151c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151cc:{NFSU2_TR(0x7151cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151d3:{NFSU2_TR(0x7151d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151da:{NFSU2_TR(0x7151da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151e1:{NFSU2_TR(0x7151e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151e8:{NFSU2_TR(0x7151e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151ef:{NFSU2_TR(0x7151ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd1full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7151f5:{NFSU2_TR(0x7151f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7151fc:{NFSU2_TR(0x7151fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd21ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715203:{NFSU2_TR(0x715203);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd22ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715209:{NFSU2_TR(0x715209);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd23ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715210:{NFSU2_TR(0x715210);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd24ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715216:{NFSU2_TR(0x715216);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd25ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71521c:{NFSU2_TR(0x71521c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd26ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715223:{NFSU2_TR(0x715223);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd27ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715229:{NFSU2_TR(0x715229);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd28ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715230:{NFSU2_TR(0x715230);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd29ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715236:{NFSU2_TR(0x715236);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71523d:{NFSU2_TR(0x71523d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715244:{NFSU2_TR(0x715244);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71524a:{NFSU2_TR(0x71524a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715251:{NFSU2_TR(0x715251);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715258:{NFSU2_TR(0x715258);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd2full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71525e:{NFSU2_TR(0x71525e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd30ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715264:{NFSU2_TR(0x715264);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd31ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71526a:{NFSU2_TR(0x71526a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd32ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715271:{NFSU2_TR(0x715271);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd33ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715278:{NFSU2_TR(0x715278);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd34ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71527f:{NFSU2_TR(0x71527f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd35ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715286:{NFSU2_TR(0x715286);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd36ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71528c:{NFSU2_TR(0x71528c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd37ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715292:{NFSU2_TR(0x715292);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd38ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715299:{NFSU2_TR(0x715299);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd39ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152a0:{NFSU2_TR(0x7152a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152a7:{NFSU2_TR(0x7152a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152ad:{NFSU2_TR(0x7152ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152b4:{NFSU2_TR(0x7152b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152ba:{NFSU2_TR(0x7152ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152c0:{NFSU2_TR(0x7152c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152c7:{NFSU2_TR(0x7152c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd40ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152ce:{NFSU2_TR(0x7152ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd41ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152d5:{NFSU2_TR(0x7152d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd42ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152db:{NFSU2_TR(0x7152db);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd43ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152e2:{NFSU2_TR(0x7152e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd44ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152e8:{NFSU2_TR(0x7152e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd45ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152ef:{NFSU2_TR(0x7152ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd46ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7152f5:{NFSU2_TR(0x7152f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd47ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7152fc:{NFSU2_TR(0x7152fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd48ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715303:{NFSU2_TR(0x715303);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd49ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715309:{NFSU2_TR(0x715309);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715310:{NFSU2_TR(0x715310);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715317:{NFSU2_TR(0x715317);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71531e:{NFSU2_TR(0x71531e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715325:{NFSU2_TR(0x715325);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71532c:{NFSU2_TR(0x71532c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd4full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715333:{NFSU2_TR(0x715333);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd50ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715339:{NFSU2_TR(0x715339);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd51ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71533f:{NFSU2_TR(0x71533f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd52ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715346:{NFSU2_TR(0x715346);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd53ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71534d:{NFSU2_TR(0x71534d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd54ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715353:{NFSU2_TR(0x715353);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd55ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71535a:{NFSU2_TR(0x71535a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd56ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715360:{NFSU2_TR(0x715360);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd57ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715366:{NFSU2_TR(0x715366);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd58ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71536c:{NFSU2_TR(0x71536c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd59ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715373:{NFSU2_TR(0x715373);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715379:{NFSU2_TR(0x715379);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715380:{NFSU2_TR(0x715380);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715386:{NFSU2_TR(0x715386);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71538d:{NFSU2_TR(0x71538d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715393:{NFSU2_TR(0x715393);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd5full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71539a:{NFSU2_TR(0x71539a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd60ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153a1:{NFSU2_TR(0x7153a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd61ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153a7:{NFSU2_TR(0x7153a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd62ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153ad:{NFSU2_TR(0x7153ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd63ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153b4:{NFSU2_TR(0x7153b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd64ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153bb:{NFSU2_TR(0x7153bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd65ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153c1:{NFSU2_TR(0x7153c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd66ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153c8:{NFSU2_TR(0x7153c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd67ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153ce:{NFSU2_TR(0x7153ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd68ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153d5:{NFSU2_TR(0x7153d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd69ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7153dc:{NFSU2_TR(0x7153dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153e2:{NFSU2_TR(0x7153e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153e8:{NFSU2_TR(0x7153e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153ee:{NFSU2_TR(0x7153ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153f4:{NFSU2_TR(0x7153f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7153fa:{NFSU2_TR(0x7153fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715400:{NFSU2_TR(0x715400);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd70ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715407:{NFSU2_TR(0x715407);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd71ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71540e:{NFSU2_TR(0x71540e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd72ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715415:{NFSU2_TR(0x715415);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd73ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71541c:{NFSU2_TR(0x71541c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd74ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715423:{NFSU2_TR(0x715423);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd75ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71542a:{NFSU2_TR(0x71542a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd76ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715431:{NFSU2_TR(0x715431);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd77ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715437:{NFSU2_TR(0x715437);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd78ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71543e:{NFSU2_TR(0x71543e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd79ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715445:{NFSU2_TR(0x715445);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71544b:{NFSU2_TR(0x71544b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715452:{NFSU2_TR(0x715452);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715459:{NFSU2_TR(0x715459);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715460:{NFSU2_TR(0x715460);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715467:{NFSU2_TR(0x715467);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd7full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71546e:{NFSU2_TR(0x71546e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd80ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715475:{NFSU2_TR(0x715475);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd81ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71547b:{NFSU2_TR(0x71547b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd82ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715482:{NFSU2_TR(0x715482);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd83ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715489:{NFSU2_TR(0x715489);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd84ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71548f:{NFSU2_TR(0x71548f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd85ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715496:{NFSU2_TR(0x715496);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd86ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71549c:{NFSU2_TR(0x71549c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd87ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154a3:{NFSU2_TR(0x7154a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd88ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154aa:{NFSU2_TR(0x7154aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd89ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7154b0:{NFSU2_TR(0x7154b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154b7:{NFSU2_TR(0x7154b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154be:{NFSU2_TR(0x7154be);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7154c4:{NFSU2_TR(0x7154c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154cb:{NFSU2_TR(0x7154cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7154d1:{NFSU2_TR(0x7154d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154d8:{NFSU2_TR(0x7154d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd90ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154df:{NFSU2_TR(0x7154df);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd91ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154e6:{NFSU2_TR(0x7154e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd92ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154ed:{NFSU2_TR(0x7154ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd93ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7154f3:{NFSU2_TR(0x7154f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd94ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7154fa:{NFSU2_TR(0x7154fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd95ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715501:{NFSU2_TR(0x715501);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd96ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715508:{NFSU2_TR(0x715508);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd97ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71550e:{NFSU2_TR(0x71550e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd98ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715515:{NFSU2_TR(0x715515);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd99ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71551b:{NFSU2_TR(0x71551b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715522:{NFSU2_TR(0x715522);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715528:{NFSU2_TR(0x715528);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71552e:{NFSU2_TR(0x71552e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715534:{NFSU2_TR(0x715534);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71553b:{NFSU2_TR(0x71553b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd9full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715542:{NFSU2_TR(0x715542);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715549:{NFSU2_TR(0x715549);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71554f:{NFSU2_TR(0x71554f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715556:{NFSU2_TR(0x715556);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71555d:{NFSU2_TR(0x71555d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda4ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715564:{NFSU2_TR(0x715564);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71556b:{NFSU2_TR(0x71556b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715571:{NFSU2_TR(0x715571);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda7ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715578:{NFSU2_TR(0x715578);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71557f:{NFSU2_TR(0x71557f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffda9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715585:{NFSU2_TR(0x715585);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdaaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71558b:{NFSU2_TR(0x71558b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdabull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715591:{NFSU2_TR(0x715591);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdacull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715598:{NFSU2_TR(0x715598);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdadull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71559f:{NFSU2_TR(0x71559f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdaeull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155a6:{NFSU2_TR(0x7155a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdafull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155ad:{NFSU2_TR(0x7155ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155b3:{NFSU2_TR(0x7155b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155b9:{NFSU2_TR(0x7155b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155bf:{NFSU2_TR(0x7155bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155c6:{NFSU2_TR(0x7155c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155cd:{NFSU2_TR(0x7155cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155d3:{NFSU2_TR(0x7155d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155da:{NFSU2_TR(0x7155da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155e0:{NFSU2_TR(0x7155e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155e6:{NFSU2_TR(0x7155e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdb9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7155ed:{NFSU2_TR(0x7155ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155f3:{NFSU2_TR(0x7155f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155f9:{NFSU2_TR(0x7155f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7155ff:{NFSU2_TR(0x7155ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715605:{NFSU2_TR(0x715605);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71560b:{NFSU2_TR(0x71560b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdbfull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715612:{NFSU2_TR(0x715612);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715618:{NFSU2_TR(0x715618);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71561e:{NFSU2_TR(0x71561e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc2ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715625:{NFSU2_TR(0x715625);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71562b:{NFSU2_TR(0x71562b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715631:{NFSU2_TR(0x715631);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715638:{NFSU2_TR(0x715638);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71563f:{NFSU2_TR(0x71563f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715646:{NFSU2_TR(0x715646);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71564d:{NFSU2_TR(0x71564d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715653:{NFSU2_TR(0x715653);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdcaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71565a:{NFSU2_TR(0x71565a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdcbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715660:{NFSU2_TR(0x715660);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdccull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715666:{NFSU2_TR(0x715666);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdcdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71566d:{NFSU2_TR(0x71566d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdceull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715673:{NFSU2_TR(0x715673);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdcfull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71567a:{NFSU2_TR(0x71567a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715681:{NFSU2_TR(0x715681);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd1ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715688:{NFSU2_TR(0x715688);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71568e:{NFSU2_TR(0x71568e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715695:{NFSU2_TR(0x715695);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71569b:{NFSU2_TR(0x71569b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd5ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156a2:{NFSU2_TR(0x7156a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156a8:{NFSU2_TR(0x7156a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156af:{NFSU2_TR(0x7156af);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156b5:{NFSU2_TR(0x7156b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdd9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156bb:{NFSU2_TR(0x7156bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156c2:{NFSU2_TR(0x7156c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156c8:{NFSU2_TR(0x7156c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156cf:{NFSU2_TR(0x7156cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdddull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156d6:{NFSU2_TR(0x7156d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddeull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156dd:{NFSU2_TR(0x7156dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddfull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156e3:{NFSU2_TR(0x7156e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7156ea:{NFSU2_TR(0x7156ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156f0:{NFSU2_TR(0x7156f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156f6:{NFSU2_TR(0x7156f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7156fc:{NFSU2_TR(0x7156fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715702:{NFSU2_TR(0x715702);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715708:{NFSU2_TR(0x715708);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde6ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71570e:{NFSU2_TR(0x71570e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde7ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715715:{NFSU2_TR(0x715715);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71571c:{NFSU2_TR(0x71571c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffde9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715722:{NFSU2_TR(0x715722);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdeaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715728:{NFSU2_TR(0x715728);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdebull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71572f:{NFSU2_TR(0x71572f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdecull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715736:{NFSU2_TR(0x715736);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdedull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71573d:{NFSU2_TR(0x71573d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdeeull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715744:{NFSU2_TR(0x715744);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdefull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71574b:{NFSU2_TR(0x71574b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715752:{NFSU2_TR(0x715752);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715759:{NFSU2_TR(0x715759);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71575f:{NFSU2_TR(0x71575f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715765:{NFSU2_TR(0x715765);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf4ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71576c:{NFSU2_TR(0x71576c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715772:{NFSU2_TR(0x715772);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf6ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715779:{NFSU2_TR(0x715779);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71577f:{NFSU2_TR(0x71577f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf8ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715786:{NFSU2_TR(0x715786);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdf9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71578c:{NFSU2_TR(0x71578c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfaull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715792:{NFSU2_TR(0x715792);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfbull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715799:{NFSU2_TR(0x715799);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71579f:{NFSU2_TR(0x71579f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfdull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157a6:{NFSU2_TR(0x7157a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdfeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157ac:{NFSU2_TR(0x7157ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157b2:{NFSU2_TR(0x7157b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe00ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157b9:{NFSU2_TR(0x7157b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe01ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157bf:{NFSU2_TR(0x7157bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe02ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157c6:{NFSU2_TR(0x7157c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe03ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157cc:{NFSU2_TR(0x7157cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe04ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157d3:{NFSU2_TR(0x7157d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe05ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157da:{NFSU2_TR(0x7157da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe06ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157e0:{NFSU2_TR(0x7157e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe07ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157e7:{NFSU2_TR(0x7157e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe08ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7157ee:{NFSU2_TR(0x7157ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe09ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157f4:{NFSU2_TR(0x7157f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7157fa:{NFSU2_TR(0x7157fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715801:{NFSU2_TR(0x715801);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715807:{NFSU2_TR(0x715807);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71580e:{NFSU2_TR(0x71580e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715814:{NFSU2_TR(0x715814);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe0full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71581a:{NFSU2_TR(0x71581a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe10ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715821:{NFSU2_TR(0x715821);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe11ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715828:{NFSU2_TR(0x715828);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe12ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71582f:{NFSU2_TR(0x71582f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe13ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715836:{NFSU2_TR(0x715836);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe14ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71583d:{NFSU2_TR(0x71583d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe15ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715843:{NFSU2_TR(0x715843);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe16ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715849:{NFSU2_TR(0x715849);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe17ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715850:{NFSU2_TR(0x715850);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe18ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715857:{NFSU2_TR(0x715857);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe19ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71585d:{NFSU2_TR(0x71585d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715864:{NFSU2_TR(0x715864);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71586a:{NFSU2_TR(0x71586a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715871:{NFSU2_TR(0x715871);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715877:{NFSU2_TR(0x715877);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71587e:{NFSU2_TR(0x71587e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe1full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715885:{NFSU2_TR(0x715885);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe20ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71588c:{NFSU2_TR(0x71588c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe21ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715892:{NFSU2_TR(0x715892);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715898:{NFSU2_TR(0x715898);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71589f:{NFSU2_TR(0x71589f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe24ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7158a5:{NFSU2_TR(0x7158a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe25ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7158ab:{NFSU2_TR(0x7158ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe26ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158b2:{NFSU2_TR(0x7158b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe27ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158b9:{NFSU2_TR(0x7158b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe28ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158c0:{NFSU2_TR(0x7158c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe29ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158c7:{NFSU2_TR(0x7158c7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158ce:{NFSU2_TR(0x7158ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7158d4:{NFSU2_TR(0x7158d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158db:{NFSU2_TR(0x7158db);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158e2:{NFSU2_TR(0x7158e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158e9:{NFSU2_TR(0x7158e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe2full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7158ef:{NFSU2_TR(0x7158ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe30ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7158f6:{NFSU2_TR(0x7158f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe31ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7158fc:{NFSU2_TR(0x7158fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe32ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715903:{NFSU2_TR(0x715903);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe33ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71590a:{NFSU2_TR(0x71590a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe34ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715910:{NFSU2_TR(0x715910);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe35ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715916:{NFSU2_TR(0x715916);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe36ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71591d:{NFSU2_TR(0x71591d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe37ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715924:{NFSU2_TR(0x715924);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe38ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71592b:{NFSU2_TR(0x71592b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe39ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715931:{NFSU2_TR(0x715931);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715937:{NFSU2_TR(0x715937);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71593e:{NFSU2_TR(0x71593e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715944:{NFSU2_TR(0x715944);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B71594b:{NFSU2_TR(0x71594b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715952:{NFSU2_TR(0x715952);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe3full))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715959:{NFSU2_TR(0x715959);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe40ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715960:{NFSU2_TR(0x715960);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe41ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715966:{NFSU2_TR(0x715966);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe42ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71596d:{NFSU2_TR(0x71596d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe43ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715973:{NFSU2_TR(0x715973);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71597a:{NFSU2_TR(0x71597a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715981:{NFSU2_TR(0x715981);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe46ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715988:{NFSU2_TR(0x715988);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe47ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B71598f:{NFSU2_TR(0x71598f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe48ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715996:{NFSU2_TR(0x715996);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe49ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B71599c:{NFSU2_TR(0x71599c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159a3:{NFSU2_TR(0x7159a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159aa:{NFSU2_TR(0x7159aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4cull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159b1:{NFSU2_TR(0x7159b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4dull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159b8:{NFSU2_TR(0x7159b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4eull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159bf:{NFSU2_TR(0x7159bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe4full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159c5:{NFSU2_TR(0x7159c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe50ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159cc:{NFSU2_TR(0x7159cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe51ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159d2:{NFSU2_TR(0x7159d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe52ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159d8:{NFSU2_TR(0x7159d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe53ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159df:{NFSU2_TR(0x7159df);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe54ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159e6:{NFSU2_TR(0x7159e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe55ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159ec:{NFSU2_TR(0x7159ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe56ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159f2:{NFSU2_TR(0x7159f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe57ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7159f9:{NFSU2_TR(0x7159f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe58ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7159ff:{NFSU2_TR(0x7159ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe59ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a05:{NFSU2_TR(0x715a05);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a0b:{NFSU2_TR(0x715a0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a12:{NFSU2_TR(0x715a12);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a19:{NFSU2_TR(0x715a19);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5dull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a20:{NFSU2_TR(0x715a20);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a26:{NFSU2_TR(0x715a26);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe5full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a2d:{NFSU2_TR(0x715a2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe60ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a33:{NFSU2_TR(0x715a33);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe61ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a39:{NFSU2_TR(0x715a39);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe62ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a3f:{NFSU2_TR(0x715a3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe63ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a46:{NFSU2_TR(0x715a46);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe64ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a4d:{NFSU2_TR(0x715a4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe65ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a54:{NFSU2_TR(0x715a54);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe66ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a5a:{NFSU2_TR(0x715a5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe67ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a60:{NFSU2_TR(0x715a60);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe68ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a66:{NFSU2_TR(0x715a66);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe69ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a6c:{NFSU2_TR(0x715a6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6aull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a73:{NFSU2_TR(0x715a73);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6bull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a7a:{NFSU2_TR(0x715a7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a80:{NFSU2_TR(0x715a80);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715a86:{NFSU2_TR(0x715a86);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a8d:{NFSU2_TR(0x715a8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe6full))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a94:{NFSU2_TR(0x715a94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715a9b:{NFSU2_TR(0x715a9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe71ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715aa2:{NFSU2_TR(0x715aa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe72ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715aa9:{NFSU2_TR(0x715aa9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe73ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715aaf:{NFSU2_TR(0x715aaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe74ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715ab6:{NFSU2_TR(0x715ab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe75ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715abc:{NFSU2_TR(0x715abc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe76ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715ac3:{NFSU2_TR(0x715ac3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe77ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715aca:{NFSU2_TR(0x715aca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe78ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715ad1:{NFSU2_TR(0x715ad1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe79ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715ad7:{NFSU2_TR(0x715ad7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715ade:{NFSU2_TR(0x715ade);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715ae5:{NFSU2_TR(0x715ae5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7cull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715aec:{NFSU2_TR(0x715aec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715af3:{NFSU2_TR(0x715af3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7eull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715afa:{NFSU2_TR(0x715afa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b01:{NFSU2_TR(0x715b01);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe80ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b08:{NFSU2_TR(0x715b08);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe81ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b0f:{NFSU2_TR(0x715b0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe82ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b16:{NFSU2_TR(0x715b16);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe83ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b1c:{NFSU2_TR(0x715b1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe84ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b22:{NFSU2_TR(0x715b22);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe85ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b28:{NFSU2_TR(0x715b28);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe86ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b2e:{NFSU2_TR(0x715b2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe87ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b35:{NFSU2_TR(0x715b35);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe88ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b3b:{NFSU2_TR(0x715b3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b41:{NFSU2_TR(0x715b41);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715b43:{NFSU2_TR(0x715b43);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe89ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b4a:{NFSU2_TR(0x715b4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B715b50:{NFSU2_TR(0x715b50);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8bull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B715b57:{NFSU2_TR(0x715b57);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B715b59:{NFSU2_TR(0x715b59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B715b5a:{NFSU2_TR(0x715b5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe8dull))));
__builtin_memmove((R+28),(U+0),4);
}
B715b60:L715b60:{c.instructions+=1;NFSU2_TR(0x715b60);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L715b62;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715b60u);}goto L715b60;}
}
B715b62:L715b62:{c.instructions+=15;NFSU2_TR(0x715b62);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B715b64:{NFSU2_TR(0x715b64);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B715b65:{NFSU2_TR(0x715b65);
w2(R+4260,u16(0xffffull));
}
B715b67:{NFSU2_TR(0x715b67);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715b69:{NFSU2_TR(0x715b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B715b6a:{NFSU2_TR(0x715b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B715b6d:{NFSU2_TR(0x715b6d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B715b6f:{NFSU2_TR(0x715b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715b72:{NFSU2_TR(0x715b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715b75:{NFSU2_TR(0x715b75);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B715b78:{NFSU2_TR(0x715b78);
{u32 ea_=u32(u32(8144400u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B715b7e:{NFSU2_TR(0x715b7e);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B715b84:{NFSU2_TR(0x715b84);
{u32 ea_=u32(r4(R+20)+u32(4294965208u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B715b8a:{NFSU2_TR(0x715b8a);
{u32 ea_=u32(u32(8144392u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B715b90:{NFSU2_TR(0x715b90);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B715b93:L715b93:{c.instructions+=8;NFSU2_TR(0x715b93);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B715b96:{NFSU2_TR(0x715b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B715b99:{NFSU2_TR(0x715b99);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B715b9d:{NFSU2_TR(0x715b9d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B715b9f:{NFSU2_TR(0x715b9f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B715ba3:{NFSU2_TR(0x715ba3);
{u32 ea_=u32(r4(R+20)+u32(4294965208u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B715ba9:{NFSU2_TR(0x715ba9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B715bac:{NFSU2_TR(0x715bac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x715bb1ull));
TAIL_STATIC(0x7033a5u,703);
}
B715bb1:L715bb1:{c.instructions+=4;NFSU2_TR(0x715bb1);
{u32 ea_=u32(u32(8144384u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B715bb7:{NFSU2_TR(0x715bb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B715bba:{NFSU2_TR(0x715bba);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B715bc0:{NFSU2_TR(0x715bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x715bc5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B715bc5:L715bc5:{c.instructions+=4;NFSU2_TR(0x715bc5);
__builtin_memmove((R+24),(R+0),4);
}
B715bc7:{NFSU2_TR(0x715bc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B715bc9:{NFSU2_TR(0x715bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715bcc:{NFSU2_TR(0x715bcc);
if(r1(R+518)){{goto L715c0e;}}
}
B715bce:L715bce:{c.instructions+=3;NFSU2_TR(0x715bce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B715bd0:{NFSU2_TR(0x715bd0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B715bd2:{NFSU2_TR(0x715bd2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L715c09;}}
}
B715bd4:L715bd4:{c.instructions+=3;NFSU2_TR(0x715bd4);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B715bd7:{NFSU2_TR(0x715bd7);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff680ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B715bde:{NFSU2_TR(0x715bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x715be3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B715be3:L715be3:{c.instructions+=10;NFSU2_TR(0x715be3);
__builtin_memmove((R+4),(R+24),4);
}
B715be5:{NFSU2_TR(0x715be5);
__builtin_memmove((R+8),(R+4),4);
}
B715be7:{NFSU2_TR(0x715be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715bea:{NFSU2_TR(0x715bea);
__builtin_memmove((R+8),(R+0),1);
}
B715bec:{NFSU2_TR(0x715bec);
__builtin_memmove((R+9),(R+8),1);
}
B715bee:{NFSU2_TR(0x715bee);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B715bf1:{NFSU2_TR(0x715bf1);
__builtin_memmove((R+0),(R+8),4);
}
B715bf3:{NFSU2_TR(0x715bf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B715bf6:{NFSU2_TR(0x715bf6);
__builtin_memmove((R+0),(R+8),2);
}
B715bf9:{NFSU2_TR(0x715bf9);
__builtin_memmove((R+8),(R+24),4);
}
B715bfb:L715bfb:{c.instructions+=1;NFSU2_TR(0x715bfb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L715bfd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715bfbu);}goto L715bfb;}
}
B715bfd:L715bfd:{c.instructions+=2;NFSU2_TR(0x715bfd);
__builtin_memmove((R+4),(R+8),4);
}
B715bff:{NFSU2_TR(0x715bff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B715c02:L715c02:{c.instructions+=1;NFSU2_TR(0x715c02);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L715c04;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715c02u);}goto L715c02;}
}
B715c04:L715c04:{c.instructions+=2;NFSU2_TR(0x715c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715c07:{NFSU2_TR(0x715c07);
__builtin_memmove((R+0),(R+24),4);
}
B715c09:L715c09:{c.instructions+=2;NFSU2_TR(0x715c09);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B715c0b:{NFSU2_TR(0x715c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715c0e:L715c0e:{c.instructions+=7;NFSU2_TR(0x715c0e);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B715c11:{NFSU2_TR(0x715c11);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B715c17:{NFSU2_TR(0x715c17);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B715c1a:{NFSU2_TR(0x715c1a);
{u32 ea_=u32(u32(8144376u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B715c20:{NFSU2_TR(0x715c20);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B715c22:{NFSU2_TR(0x715c22);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B715c25:{NFSU2_TR(0x715c25);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715b93u);}goto L715b93;}}
}
B715c2b:L715c2b:{c.instructions+=3;NFSU2_TR(0x715c2b);
w4(R+4,u32(0x100ull));
}
B715c30:{NFSU2_TR(0x715c30);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B715c32:{NFSU2_TR(0x715c32);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L715c4f;}}
}
B715c34:L715c34:{c.instructions+=6;NFSU2_TR(0x715c34);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B715c36:{NFSU2_TR(0x715c36);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff680ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B715c3d:{NFSU2_TR(0x715c3d);
__builtin_memmove((R+28),(R+8),4);
}
B715c3f:{NFSU2_TR(0x715c3f);
__builtin_memmove((R+8),(R+4),4);
}
B715c41:{NFSU2_TR(0x715c41);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B715c44:{NFSU2_TR(0x715c44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B715c46:L715c46:{c.instructions+=1;NFSU2_TR(0x715c46);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L715c48;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715c46u);}goto L715c46;}
}
B715c48:L715c48:{c.instructions+=2;NFSU2_TR(0x715c48);
__builtin_memmove((R+4),(R+8),4);
}
B715c4a:{NFSU2_TR(0x715c4a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B715c4d:L715c4d:{c.instructions+=1;NFSU2_TR(0x715c4d);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L715c4f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715c4du);}goto L715c4d;}
}
B715c4f:L715c4f:{c.instructions+=1;NFSU2_TR(0x715c4f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B715c51:L715c51:{c.instructions+=1;NFSU2_TR(0x715c51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x715c56ull));
TAIL_STATIC(0x760d7du,760);
}
B715c56:L715c56:{c.instructions+=6;NFSU2_TR(0x715c56);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B715c5b:{NFSU2_TR(0x715c5b);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffff680ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B715c62:{NFSU2_TR(0x715c62);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffff7e8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B715c69:{NFSU2_TR(0x715c69);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B715c6a:{NFSU2_TR(0x715c6a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x800ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x800ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B715c70:{NFSU2_TR(0x715c70);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715c51u);}goto L715c51;}}
}
B715c72:L715c72:{c.instructions+=39;NFSU2_TR(0x715c72);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff680ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B715c78:{NFSU2_TR(0x715c78);
__builtin_memmove((R+4),(R+0),1);
}
B715c7a:{NFSU2_TR(0x715c7a);
w1(R+8,u8(0xfeull));
}
B715c7c:{NFSU2_TR(0x715c7c);
u8 U[4];
w2(U+0,u16(s16(s8(r1(R+0)))));
w2(U+2,u16(s16(s8(r1(R+8)))));
w2(R+0,u16(u32(r2(U+0))*u32(r2(U+2))));
}
B715c7e:{NFSU2_TR(0x715c7e);
__builtin_memmove((R+8),(R+0),1);
}
B715c80:{NFSU2_TR(0x715c80);
__builtin_memmove((R+9),(R+8),1);
}
B715c82:{NFSU2_TR(0x715c82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7c0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715c88:{NFSU2_TR(0x715c88);
w1(R+4,u8(0-u32(r1(R+4))));
}
B715c8a:{NFSU2_TR(0x715c8a);
__builtin_memmove((R+5),(R+4),1);
}
B715c8c:{NFSU2_TR(0x715c8c);
__builtin_memmove((R+0),(R+8),4);
}
B715c8e:{NFSU2_TR(0x715c8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B715c91:{NFSU2_TR(0x715c91);
__builtin_memmove((R+0),(R+8),2);
}
B715c94:{NFSU2_TR(0x715c94);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715c95:{NFSU2_TR(0x715c95);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715c96:{NFSU2_TR(0x715c96);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715c97:{NFSU2_TR(0x715c97);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715c98:{NFSU2_TR(0x715c98);
__builtin_memmove((R+0),(R+4),1);
}
B715c9a:{NFSU2_TR(0x715c9a);
__builtin_memmove((R+8),(R+0),1);
}
B715c9c:{NFSU2_TR(0x715c9c);
__builtin_memmove((R+9),(R+8),1);
}
B715c9e:{NFSU2_TR(0x715c9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7d0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715ca4:{NFSU2_TR(0x715ca4);
__builtin_memmove((R+0),(R+8),4);
}
B715ca6:{NFSU2_TR(0x715ca6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B715ca9:{NFSU2_TR(0x715ca9);
__builtin_memmove((R+0),(R+8),2);
}
B715cac:{NFSU2_TR(0x715cac);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cad:{NFSU2_TR(0x715cad);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cae:{NFSU2_TR(0x715cae);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715caf:{NFSU2_TR(0x715caf);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cb0:{NFSU2_TR(0x715cb0);
__builtin_memmove((R+0),(R+4),1);
}
B715cb2:{NFSU2_TR(0x715cb2);
__builtin_memmove((R+0),(R+4),4);
}
B715cb4:{NFSU2_TR(0x715cb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B715cb7:{NFSU2_TR(0x715cb7);
__builtin_memmove((R+0),(R+4),2);
}
B715cba:{NFSU2_TR(0x715cba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7b0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715cc0:{NFSU2_TR(0x715cc0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cc1:{NFSU2_TR(0x715cc1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cc2:{NFSU2_TR(0x715cc2);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cc3:{NFSU2_TR(0x715cc3);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715cc4:{NFSU2_TR(0x715cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715cc7:{NFSU2_TR(0x715cc7);
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
B715cc9:{NFSU2_TR(0x715cc9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L715d2f;}}
}
B715ccb:L715ccb:{c.instructions+=3;NFSU2_TR(0x715ccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715cce:{NFSU2_TR(0x715cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715cd1:{NFSU2_TR(0x715cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715cd4:L715cd4:{c.instructions+=3;NFSU2_TR(0x715cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715cd7:{NFSU2_TR(0x715cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715cda:{NFSU2_TR(0x715cda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x715cdfull));
TAIL_STATIC(0x760d7du,760);
}
B715cdf:L715cdf:{c.instructions+=7;NFSU2_TR(0x715cdf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B715ce4:{NFSU2_TR(0x715ce4);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff7e8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B715ceb:{NFSU2_TR(0x715ceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715cee:{NFSU2_TR(0x715cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715cf1:{NFSU2_TR(0x715cf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715cf4:{NFSU2_TR(0x715cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715cf7:{NFSU2_TR(0x715cf7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B715cf9:L715cf9:{c.instructions+=10;NFSU2_TR(0x715cf9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B715cfd:{NFSU2_TR(0x715cfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715d04:{NFSU2_TR(0x715d04);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715d0b:{NFSU2_TR(0x715d0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715d12:{NFSU2_TR(0x715d12);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B715d16:{NFSU2_TR(0x715d16);
w1(R+4368,u8(u32(r1(R+4368))+u32(r1(R+4384))));
w1(R+4369,u8(u32(r1(R+4369))+u32(r1(R+4385))));
w1(R+4370,u8(u32(r1(R+4370))+u32(r1(R+4386))));
w1(R+4371,u8(u32(r1(R+4371))+u32(r1(R+4387))));
w1(R+4372,u8(u32(r1(R+4372))+u32(r1(R+4388))));
w1(R+4373,u8(u32(r1(R+4373))+u32(r1(R+4389))));
w1(R+4374,u8(u32(r1(R+4374))+u32(r1(R+4390))));
w1(R+4375,u8(u32(r1(R+4375))+u32(r1(R+4391))));
}
B715d19:{NFSU2_TR(0x715d19);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B715d1d:{NFSU2_TR(0x715d1d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B715d20:{NFSU2_TR(0x715d20);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B715d22:{NFSU2_TR(0x715d22);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715cf9u);}goto L715cf9;}}
}
B715d24:L715d24:{c.instructions+=4;NFSU2_TR(0x715d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715d27:{NFSU2_TR(0x715d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B715d2a:{NFSU2_TR(0x715d2a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B715d2d:{NFSU2_TR(0x715d2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715cd4u);}goto L715cd4;}}
}
B715d2f:L715d2f:{c.instructions+=7;NFSU2_TR(0x715d2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715d30:{NFSU2_TR(0x715d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B715d31:{NFSU2_TR(0x715d31);
__builtin_memmove((R+16),(R+20),4);
}
B715d33:{NFSU2_TR(0x715d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B715d34:{NFSU2_TR(0x715d34);
__builtin_memmove((R+16),(R+12),4);
}
B715d36:{NFSU2_TR(0x715d36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B715d37:{NFSU2_TR(0x715d37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B715d38:L715d38:{c.instructions+=63;NFSU2_TR(0x715d38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715d39:{NFSU2_TR(0x715d39);
__builtin_memmove((R+12),(R+16),4);
}
B715d3b:{NFSU2_TR(0x715d3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715d3c:{NFSU2_TR(0x715d3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715d3d:{NFSU2_TR(0x715d3d);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B715d40:{NFSU2_TR(0x715d40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B715d43:{NFSU2_TR(0x715d43);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715d44:{NFSU2_TR(0x715d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B715d47:{NFSU2_TR(0x715d47);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715d4b:{NFSU2_TR(0x715d4b);
__builtin_memmove((R+20),(R+16),4);
}
B715d4d:{NFSU2_TR(0x715d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B715d50:{NFSU2_TR(0x715d50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715d51:{NFSU2_TR(0x715d51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715d52:{NFSU2_TR(0x715d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715d55:{NFSU2_TR(0x715d55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715d5b:{NFSU2_TR(0x715d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715d5e:{NFSU2_TR(0x715d5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B715d61:{NFSU2_TR(0x715d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715d64:{NFSU2_TR(0x715d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715d67:{NFSU2_TR(0x715d67);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B715d69:{NFSU2_TR(0x715d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715d6c:{NFSU2_TR(0x715d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715d6f:{NFSU2_TR(0x715d6f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B715d71:{NFSU2_TR(0x715d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715d77:{NFSU2_TR(0x715d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715d7d:{NFSU2_TR(0x715d7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B715d80:{NFSU2_TR(0x715d80);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))+u32(r1(U+4))));
}
B715d83:{NFSU2_TR(0x715d83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715d86:{NFSU2_TR(0x715d86);
__builtin_memmove((R+4),(R+0),1);
}
B715d88:{NFSU2_TR(0x715d88);
__builtin_memmove((R+5),(R+4),1);
}
B715d8a:{NFSU2_TR(0x715d8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715d8d:{NFSU2_TR(0x715d8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B715d90:{NFSU2_TR(0x715d90);
__builtin_memmove((R+0),(R+4),4);
}
B715d92:{NFSU2_TR(0x715d92);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B715d95:{NFSU2_TR(0x715d95);
__builtin_memmove((R+0),(R+4),2);
}
B715d98:{NFSU2_TR(0x715d98);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715d99:{NFSU2_TR(0x715d99);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715d9a:{NFSU2_TR(0x715d9a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715d9b:{NFSU2_TR(0x715d9b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715d9c:{NFSU2_TR(0x715d9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B715d9f:{NFSU2_TR(0x715d9f);
__builtin_memmove((R+4),(R+0),1);
}
B715da1:{NFSU2_TR(0x715da1);
__builtin_memmove((R+5),(R+4),1);
}
B715da3:{NFSU2_TR(0x715da3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715da6:{NFSU2_TR(0x715da6);
__builtin_memmove((R+0),(R+4),4);
}
B715da8:{NFSU2_TR(0x715da8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B715dab:{NFSU2_TR(0x715dab);
__builtin_memmove((R+0),(R+4),2);
}
B715dae:{NFSU2_TR(0x715dae);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715daf:{NFSU2_TR(0x715daf);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715db0:{NFSU2_TR(0x715db0);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715db1:{NFSU2_TR(0x715db1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715db2:{NFSU2_TR(0x715db2);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B715db5:{NFSU2_TR(0x715db5);
__builtin_memmove((R+4),(R+0),1);
}
B715db7:{NFSU2_TR(0x715db7);
__builtin_memmove((R+5),(R+4),1);
}
B715db9:{NFSU2_TR(0x715db9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715dbc:{NFSU2_TR(0x715dbc);
__builtin_memmove((R+0),(R+4),4);
}
B715dbe:{NFSU2_TR(0x715dbe);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B715dc1:{NFSU2_TR(0x715dc1);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B715dc3:{NFSU2_TR(0x715dc3);
__builtin_memmove((R+0),(R+4),2);
}
B715dc6:{NFSU2_TR(0x715dc6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715dc7:{NFSU2_TR(0x715dc7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715dc8:{NFSU2_TR(0x715dc8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715dc9:{NFSU2_TR(0x715dc9);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715dca:{NFSU2_TR(0x715dca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L715e05;}}
}
B715dcc:L715dcc:{c.instructions+=1;NFSU2_TR(0x715dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715dcf:L715dcf:{c.instructions+=4;NFSU2_TR(0x715dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715dd2:{NFSU2_TR(0x715dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715dd5:{NFSU2_TR(0x715dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715dd8:{NFSU2_TR(0x715dd8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B715dda:L715dda:{c.instructions+=8;NFSU2_TR(0x715dda);
u8 U[24];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),16);
__builtin_memmove((R+4672),(U+8),16);
}
B715ddf:{NFSU2_TR(0x715ddf);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::psubusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B715de4:{NFSU2_TR(0x715de4);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::paddusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B715de9:{NFSU2_TR(0x715de9);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
{wv<16>((R+4672),uo::psubusb<16>(rv<16>((R+4672)),rv<16>((U+4))));}
}
B715dee:{NFSU2_TR(0x715dee);
u8 U[24];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+4))),(U+8),16);
}
B715df3:{NFSU2_TR(0x715df3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B715df6:{NFSU2_TR(0x715df6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B715df8:{NFSU2_TR(0x715df8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715ddau);}goto L715dda;}}
}
B715dfa:L715dfa:{c.instructions+=4;NFSU2_TR(0x715dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B715dfd:{NFSU2_TR(0x715dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B715e00:{NFSU2_TR(0x715e00);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B715e03:{NFSU2_TR(0x715e03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715dcfu);}goto L715dcf;}}
}
B715e05:L715e05:{c.instructions+=7;NFSU2_TR(0x715e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715e06:{NFSU2_TR(0x715e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B715e07:{NFSU2_TR(0x715e07);
__builtin_memmove((R+16),(R+20),4);
}
B715e09:{NFSU2_TR(0x715e09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B715e0a:{NFSU2_TR(0x715e0a);
__builtin_memmove((R+16),(R+12),4);
}
B715e0c:{NFSU2_TR(0x715e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B715e0d:{NFSU2_TR(0x715e0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B715e0e:L715e0e:{c.instructions+=57;NFSU2_TR(0x715e0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715e0f:{NFSU2_TR(0x715e0f);
__builtin_memmove((R+12),(R+16),4);
}
B715e11:{NFSU2_TR(0x715e11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715e12:{NFSU2_TR(0x715e12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715e13:{NFSU2_TR(0x715e13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B715e16:{NFSU2_TR(0x715e16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B715e19:{NFSU2_TR(0x715e19);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715e1a:{NFSU2_TR(0x715e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B715e1d:{NFSU2_TR(0x715e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715e21:{NFSU2_TR(0x715e21);
__builtin_memmove((R+20),(R+16),4);
}
B715e23:{NFSU2_TR(0x715e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B715e26:{NFSU2_TR(0x715e26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715e27:{NFSU2_TR(0x715e27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715e28:{NFSU2_TR(0x715e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715e2b:{NFSU2_TR(0x715e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715e31:{NFSU2_TR(0x715e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715e34:{NFSU2_TR(0x715e34);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B715e37:{NFSU2_TR(0x715e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715e3a:{NFSU2_TR(0x715e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715e3d:{NFSU2_TR(0x715e3d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B715e3f:{NFSU2_TR(0x715e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715e42:{NFSU2_TR(0x715e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715e45:{NFSU2_TR(0x715e45);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B715e47:{NFSU2_TR(0x715e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715e4d:{NFSU2_TR(0x715e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715e53:{NFSU2_TR(0x715e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B715e56:{NFSU2_TR(0x715e56);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))+u32(r1(U+4))));
}
B715e59:{NFSU2_TR(0x715e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715e5c:{NFSU2_TR(0x715e5c);
__builtin_memmove((R+4),(R+0),1);
}
B715e5e:{NFSU2_TR(0x715e5e);
__builtin_memmove((R+5),(R+4),1);
}
B715e60:{NFSU2_TR(0x715e60);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715e63:{NFSU2_TR(0x715e63);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B715e66:{NFSU2_TR(0x715e66);
__builtin_memmove((R+0),(R+4),4);
}
B715e68:{NFSU2_TR(0x715e68);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B715e6b:{NFSU2_TR(0x715e6b);
__builtin_memmove((R+0),(R+4),2);
}
B715e6e:{NFSU2_TR(0x715e6e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e6f:{NFSU2_TR(0x715e6f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e70:{NFSU2_TR(0x715e70);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B715e73:{NFSU2_TR(0x715e73);
__builtin_memmove((R+4),(R+0),1);
}
B715e75:{NFSU2_TR(0x715e75);
__builtin_memmove((R+5),(R+4),1);
}
B715e77:{NFSU2_TR(0x715e77);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715e7a:{NFSU2_TR(0x715e7a);
__builtin_memmove((R+0),(R+4),4);
}
B715e7c:{NFSU2_TR(0x715e7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B715e7f:{NFSU2_TR(0x715e7f);
__builtin_memmove((R+0),(R+4),2);
}
B715e82:{NFSU2_TR(0x715e82);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e83:{NFSU2_TR(0x715e83);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e84:{NFSU2_TR(0x715e84);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B715e87:{NFSU2_TR(0x715e87);
__builtin_memmove((R+4),(R+0),1);
}
B715e89:{NFSU2_TR(0x715e89);
__builtin_memmove((R+5),(R+4),1);
}
B715e8b:{NFSU2_TR(0x715e8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715e8e:{NFSU2_TR(0x715e8e);
__builtin_memmove((R+0),(R+4),4);
}
B715e90:{NFSU2_TR(0x715e90);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B715e93:{NFSU2_TR(0x715e93);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B715e95:{NFSU2_TR(0x715e95);
__builtin_memmove((R+0),(R+4),2);
}
B715e98:{NFSU2_TR(0x715e98);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e99:{NFSU2_TR(0x715e99);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B715e9a:{NFSU2_TR(0x715e9a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L715ed0;}}
}
B715e9c:L715e9c:{c.instructions+=1;NFSU2_TR(0x715e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715e9f:L715e9f:{c.instructions+=4;NFSU2_TR(0x715e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715ea2:{NFSU2_TR(0x715ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715ea5:{NFSU2_TR(0x715ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715ea8:{NFSU2_TR(0x715ea8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B715eaa:L715eaa:{c.instructions+=8;NFSU2_TR(0x715eaa);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B715eae:{NFSU2_TR(0x715eae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715eb2:{NFSU2_TR(0x715eb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::paddusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715eb6:{NFSU2_TR(0x715eb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B715eba:{NFSU2_TR(0x715eba);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B715ebe:{NFSU2_TR(0x715ebe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B715ec1:{NFSU2_TR(0x715ec1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B715ec3:{NFSU2_TR(0x715ec3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715eaau);}goto L715eaa;}}
}
B715ec5:L715ec5:{c.instructions+=4;NFSU2_TR(0x715ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B715ec8:{NFSU2_TR(0x715ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B715ecb:{NFSU2_TR(0x715ecb);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B715ece:{NFSU2_TR(0x715ece);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715e9fu);}goto L715e9f;}}
}
B715ed0:L715ed0:{c.instructions+=7;NFSU2_TR(0x715ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715ed1:{NFSU2_TR(0x715ed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B715ed2:{NFSU2_TR(0x715ed2);
__builtin_memmove((R+16),(R+20),4);
}
B715ed4:{NFSU2_TR(0x715ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B715ed5:{NFSU2_TR(0x715ed5);
__builtin_memmove((R+16),(R+12),4);
}
B715ed7:{NFSU2_TR(0x715ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B715ed8:{NFSU2_TR(0x715ed8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B715ed9:L715ed9:{c.instructions+=12;NFSU2_TR(0x715ed9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715eda:{NFSU2_TR(0x715eda);
__builtin_memmove((R+20),(R+16),4);
}
B715edc:{NFSU2_TR(0x715edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715edf:{NFSU2_TR(0x715edf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715ee0:{NFSU2_TR(0x715ee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715ee1:{NFSU2_TR(0x715ee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715ee4:{NFSU2_TR(0x715ee4);
__builtin_memmove((R+0),(R+4),4);
}
B715ee6:{NFSU2_TR(0x715ee6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B715ee9:{NFSU2_TR(0x715ee9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715eea:{NFSU2_TR(0x715eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715eed:{NFSU2_TR(0x715eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715ef0:{NFSU2_TR(0x715ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715ef3:L715ef3:{c.instructions+=1;NFSU2_TR(0x715ef3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L715ef5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715ef3u);}goto L715ef3;}
}
B715ef5:L715ef5:{c.instructions+=5;NFSU2_TR(0x715ef5);
__builtin_memmove((R+4),(R+0),4);
}
B715ef7:{NFSU2_TR(0x715ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715efa:{NFSU2_TR(0x715efa);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B715efd:{NFSU2_TR(0x715efd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B715efe:{NFSU2_TR(0x715efe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B715f01:L715f01:{c.instructions+=1;NFSU2_TR(0x715f01);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L715f03;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715f01u);}goto L715f01;}
}
B715f03:L715f03:{c.instructions+=1;NFSU2_TR(0x715f03);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L715f98;}}
}
B715f09:L715f09:{c.instructions+=2;NFSU2_TR(0x715f09);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B715f0a:{NFSU2_TR(0x715f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715f0d:L715f0d:{c.instructions+=10;NFSU2_TR(0x715f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715f10:{NFSU2_TR(0x715f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B715f13:{NFSU2_TR(0x715f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715f16:{NFSU2_TR(0x715f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715f19:{NFSU2_TR(0x715f19);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B715f1b:{NFSU2_TR(0x715f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B715f1e:{NFSU2_TR(0x715f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B715f21:{NFSU2_TR(0x715f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B715f24:{NFSU2_TR(0x715f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B715f27:{NFSU2_TR(0x715f27);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B715f2a:L715f2a:{c.instructions+=27;NFSU2_TR(0x715f2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B715f2e:{NFSU2_TR(0x715f2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B715f32:{NFSU2_TR(0x715f32);
__builtin_memmove((R+4400),(R+4352),8);
}
B715f35:{NFSU2_TR(0x715f35);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B715f38:{NFSU2_TR(0x715f38);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B715f3c:{NFSU2_TR(0x715f3c);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B715f3f:{NFSU2_TR(0x715f3f);
__builtin_memmove((R+4416),(R+4368),8);
}
B715f42:{NFSU2_TR(0x715f42);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B715f45:{NFSU2_TR(0x715f45);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175f0),8);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(U+0))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(U+2))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(U+4))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(U+6))));
}
B715f4c:{NFSU2_TR(0x715f4c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175f0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B715f53:{NFSU2_TR(0x715f53);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4468),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4469),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4470),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4471),1);
}
B715f56:{NFSU2_TR(0x715f56);
{wv<8>((R+4368),uo::psllw<8>(rv<8>((R+4368)),V(0x1ull)));}
}
B715f5a:{NFSU2_TR(0x715f5a);
{wv<8>((R+4416),uo::psllw<8>(rv<8>((R+4416)),V(0x1ull)));}
}
B715f5e:{NFSU2_TR(0x715f5e);
__builtin_memmove((R+4432),(R+4384),8);
}
B715f61:{NFSU2_TR(0x715f61);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B715f64:{NFSU2_TR(0x715f64);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4368))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4370))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4372))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4374))));
}
B715f67:{NFSU2_TR(0x715f67);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B715f6a:{NFSU2_TR(0x715f6a);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B715f6d:{NFSU2_TR(0x715f6d);
w2(R+4352,u16(u32(r2(R+4352))+u32(r2(R+4384))));
w2(R+4354,u16(u32(r2(R+4354))+u32(r2(R+4386))));
w2(R+4356,u16(u32(r2(R+4356))+u32(r2(R+4388))));
w2(R+4358,u16(u32(r2(R+4358))+u32(r2(R+4390))));
}
B715f70:{NFSU2_TR(0x715f70);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B715f73:{NFSU2_TR(0x715f73);
{wv<8>((R+4352),uo::psraw<8>(rv<8>((R+4352)),V(0x2ull)));}
}
B715f77:{NFSU2_TR(0x715f77);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x2ull)));}
}
B715f7b:{NFSU2_TR(0x715f7b);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4400),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4352),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4353),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4354),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4355),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4356),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4357),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4358),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4359),(U+21),1);
}
B715f7e:{NFSU2_TR(0x715f7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B715f82:{NFSU2_TR(0x715f82);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B715f85:{NFSU2_TR(0x715f85);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B715f87:{NFSU2_TR(0x715f87);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715f2au);}goto L715f2a;}}
}
B715f89:L715f89:{c.instructions+=4;NFSU2_TR(0x715f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715f8c:{NFSU2_TR(0x715f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B715f8f:{NFSU2_TR(0x715f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B715f92:{NFSU2_TR(0x715f92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715f0du);}goto L715f0d;}}
}
B715f98:L715f98:{c.instructions+=7;NFSU2_TR(0x715f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715f9b:{NFSU2_TR(0x715f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B715f9e:{NFSU2_TR(0x715f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B715fa1:{NFSU2_TR(0x715fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B715fa4:{NFSU2_TR(0x715fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B715fa7:{NFSU2_TR(0x715fa7);
__builtin_memmove((R+0),(R+4),4);
}
B715fa9:{NFSU2_TR(0x715fa9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B715fac:L715fac:{c.instructions+=1;NFSU2_TR(0x715fac);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L715fae;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715facu);}goto L715fac;}
}
B715fae:L715fae:{c.instructions+=2;NFSU2_TR(0x715fae);
__builtin_memmove((R+4),(R+0),4);
}
B715fb0:{NFSU2_TR(0x715fb0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B715fb3:L715fb3:{c.instructions+=1;NFSU2_TR(0x715fb3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L715fb5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x715fb3u);}goto L715fb3;}
}
B715fb5:L715fb5:{c.instructions+=5;NFSU2_TR(0x715fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B715fb6:{NFSU2_TR(0x715fb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B715fb7:{NFSU2_TR(0x715fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B715fb8:{NFSU2_TR(0x715fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B715fb9:{NFSU2_TR(0x715fb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B715fba:L715fba:{c.instructions+=26;NFSU2_TR(0x715fba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715fbb:{NFSU2_TR(0x715fbb);
__builtin_memmove((R+12),(R+16),4);
}
B715fbd:{NFSU2_TR(0x715fbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715fbe:{NFSU2_TR(0x715fbe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715fbf:{NFSU2_TR(0x715fbf);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B715fc2:{NFSU2_TR(0x715fc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B715fc5:{NFSU2_TR(0x715fc5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715fc6:{NFSU2_TR(0x715fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B715fc9:{NFSU2_TR(0x715fc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715fcd:{NFSU2_TR(0x715fcd);
__builtin_memmove((R+20),(R+16),4);
}
B715fcf:{NFSU2_TR(0x715fcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1b4ull))));
}
B715fd5:{NFSU2_TR(0x715fd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715fd6:{NFSU2_TR(0x715fd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715fd7:{NFSU2_TR(0x715fd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B715fd8:{NFSU2_TR(0x715fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715fdb:{NFSU2_TR(0x715fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B715fde:{NFSU2_TR(0x715fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715fe1:{NFSU2_TR(0x715fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715fe4:{NFSU2_TR(0x715fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715fe7:{NFSU2_TR(0x715fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B715fea:{NFSU2_TR(0x715fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715fed:{NFSU2_TR(0x715fed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B715ff3:{NFSU2_TR(0x715ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715ff6:{NFSU2_TR(0x715ff6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B715ffc:{NFSU2_TR(0x715ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B715fff:{NFSU2_TR(0x715fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x716002u,716);
}
XIT:NFSU2_TR_EXIT(0x715,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
