#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_713(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x712,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x712,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_712(u8* __restrict R,Cpu& c);
u32 page_712(Cpu& c){return body_712(c.regs.data(),c);}
__attribute__((noinline)) u32 body_712(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x712001:goto L712001;
case 0x712007:goto L712007;
case 0x71200a:c.instructions+=11;goto B71200a;
case 0x71200d:c.instructions+=10;goto B71200d;
case 0x712010:c.instructions+=9;goto B712010;
case 0x712013:c.instructions+=8;goto B712013;
case 0x712016:c.instructions+=7;goto B712016;
case 0x712019:c.instructions+=6;goto B712019;
case 0x71201c:c.instructions+=5;goto B71201c;
case 0x71201f:c.instructions+=4;goto B71201f;
case 0x712021:c.instructions+=3;goto B712021;
case 0x712024:c.instructions+=2;goto B712024;
case 0x712027:c.instructions+=1;goto B712027;
case 0x71202a:goto L71202a;
case 0x71202d:c.instructions+=499;goto B71202d;
case 0x712030:c.instructions+=498;goto B712030;
case 0x712033:c.instructions+=497;goto B712033;
case 0x712036:c.instructions+=496;goto B712036;
case 0x712037:c.instructions+=495;goto B712037;
case 0x712038:c.instructions+=494;goto B712038;
case 0x712039:c.instructions+=493;goto B712039;
case 0x71203a:c.instructions+=492;goto B71203a;
case 0x71203b:c.instructions+=491;goto B71203b;
case 0x71203c:c.instructions+=490;goto B71203c;
case 0x71203f:c.instructions+=489;goto B71203f;
case 0x712041:c.instructions+=488;goto B712041;
case 0x712044:c.instructions+=487;goto B712044;
case 0x712047:c.instructions+=486;goto B712047;
case 0x71204a:c.instructions+=485;goto B71204a;
case 0x71204d:c.instructions+=484;goto B71204d;
case 0x712053:c.instructions+=483;goto B712053;
case 0x712056:c.instructions+=482;goto B712056;
case 0x712058:c.instructions+=481;goto B712058;
case 0x71205b:c.instructions+=480;goto B71205b;
case 0x71205e:c.instructions+=479;goto B71205e;
case 0x712061:c.instructions+=478;goto B712061;
case 0x712064:c.instructions+=477;goto B712064;
case 0x712068:c.instructions+=476;goto B712068;
case 0x71206c:c.instructions+=475;goto B71206c;
case 0x71206f:c.instructions+=474;goto B71206f;
case 0x712075:c.instructions+=473;goto B712075;
case 0x712078:c.instructions+=472;goto B712078;
case 0x71207f:c.instructions+=471;goto B71207f;
case 0x712082:c.instructions+=470;goto B712082;
case 0x712086:c.instructions+=469;goto B712086;
case 0x712089:c.instructions+=468;goto B712089;
case 0x71208c:c.instructions+=467;goto B71208c;
case 0x71208f:c.instructions+=466;goto B71208f;
case 0x712096:c.instructions+=465;goto B712096;
case 0x712099:c.instructions+=464;goto B712099;
case 0x71209c:c.instructions+=463;goto B71209c;
case 0x71209f:c.instructions+=462;goto B71209f;
case 0x7120a2:c.instructions+=461;goto B7120a2;
case 0x7120a5:c.instructions+=460;goto B7120a5;
case 0x7120a9:c.instructions+=459;goto B7120a9;
case 0x7120ad:c.instructions+=458;goto B7120ad;
case 0x7120b0:c.instructions+=457;goto B7120b0;
case 0x7120b3:c.instructions+=456;goto B7120b3;
case 0x7120b6:c.instructions+=455;goto B7120b6;
case 0x7120b9:c.instructions+=454;goto B7120b9;
case 0x7120bd:c.instructions+=453;goto B7120bd;
case 0x7120c0:c.instructions+=452;goto B7120c0;
case 0x7120c3:c.instructions+=451;goto B7120c3;
case 0x7120c7:c.instructions+=450;goto B7120c7;
case 0x7120ca:c.instructions+=449;goto B7120ca;
case 0x7120cd:c.instructions+=448;goto B7120cd;
case 0x7120d1:c.instructions+=447;goto B7120d1;
case 0x7120d5:c.instructions+=446;goto B7120d5;
case 0x7120d8:c.instructions+=445;goto B7120d8;
case 0x7120db:c.instructions+=444;goto B7120db;
case 0x7120de:c.instructions+=443;goto B7120de;
case 0x7120e1:c.instructions+=442;goto B7120e1;
case 0x7120e4:c.instructions+=441;goto B7120e4;
case 0x7120e7:c.instructions+=440;goto B7120e7;
case 0x7120ea:c.instructions+=439;goto B7120ea;
case 0x7120ee:c.instructions+=438;goto B7120ee;
case 0x7120f1:c.instructions+=437;goto B7120f1;
case 0x7120f4:c.instructions+=436;goto B7120f4;
case 0x7120f7:c.instructions+=435;goto B7120f7;
case 0x7120fa:c.instructions+=434;goto B7120fa;
case 0x7120fd:c.instructions+=433;goto B7120fd;
case 0x712100:c.instructions+=432;goto B712100;
case 0x712103:c.instructions+=431;goto B712103;
case 0x712106:c.instructions+=430;goto B712106;
case 0x712109:c.instructions+=429;goto B712109;
case 0x71210d:c.instructions+=428;goto B71210d;
case 0x712111:c.instructions+=427;goto B712111;
case 0x712114:c.instructions+=426;goto B712114;
case 0x712117:c.instructions+=425;goto B712117;
case 0x71211b:c.instructions+=424;goto B71211b;
case 0x71211e:c.instructions+=423;goto B71211e;
case 0x712121:c.instructions+=422;goto B712121;
case 0x712124:c.instructions+=421;goto B712124;
case 0x712127:c.instructions+=420;goto B712127;
case 0x71212a:c.instructions+=419;goto B71212a;
case 0x71212e:c.instructions+=418;goto B71212e;
case 0x712131:c.instructions+=417;goto B712131;
case 0x712134:c.instructions+=416;goto B712134;
case 0x712138:c.instructions+=415;goto B712138;
case 0x71213b:c.instructions+=414;goto B71213b;
case 0x71213e:c.instructions+=413;goto B71213e;
case 0x712142:c.instructions+=412;goto B712142;
case 0x712149:c.instructions+=411;goto B712149;
case 0x712150:c.instructions+=410;goto B712150;
case 0x712153:c.instructions+=409;goto B712153;
case 0x712156:c.instructions+=408;goto B712156;
case 0x712159:c.instructions+=407;goto B712159;
case 0x71215c:c.instructions+=406;goto B71215c;
case 0x712160:c.instructions+=405;goto B712160;
case 0x712163:c.instructions+=404;goto B712163;
case 0x712166:c.instructions+=403;goto B712166;
case 0x71216a:c.instructions+=402;goto B71216a;
case 0x71216e:c.instructions+=401;goto B71216e;
case 0x712171:c.instructions+=400;goto B712171;
case 0x712174:c.instructions+=399;goto B712174;
case 0x71217b:c.instructions+=398;goto B71217b;
case 0x712182:c.instructions+=397;goto B712182;
case 0x712185:c.instructions+=396;goto B712185;
case 0x712188:c.instructions+=395;goto B712188;
case 0x71218b:c.instructions+=394;goto B71218b;
case 0x71218e:c.instructions+=393;goto B71218e;
case 0x712192:c.instructions+=392;goto B712192;
case 0x712195:c.instructions+=391;goto B712195;
case 0x712198:c.instructions+=390;goto B712198;
case 0x71219b:c.instructions+=389;goto B71219b;
case 0x71219e:c.instructions+=388;goto B71219e;
case 0x7121a2:c.instructions+=387;goto B7121a2;
case 0x7121a5:c.instructions+=386;goto B7121a5;
case 0x7121a9:c.instructions+=385;goto B7121a9;
case 0x7121ac:c.instructions+=384;goto B7121ac;
case 0x7121af:c.instructions+=383;goto B7121af;
case 0x7121b2:c.instructions+=382;goto B7121b2;
case 0x7121b5:c.instructions+=381;goto B7121b5;
case 0x7121b9:c.instructions+=380;goto B7121b9;
case 0x7121bc:c.instructions+=379;goto B7121bc;
case 0x7121c0:c.instructions+=378;goto B7121c0;
case 0x7121c3:c.instructions+=377;goto B7121c3;
case 0x7121c6:c.instructions+=376;goto B7121c6;
case 0x7121c9:c.instructions+=375;goto B7121c9;
case 0x7121cc:c.instructions+=374;goto B7121cc;
case 0x7121d0:c.instructions+=373;goto B7121d0;
case 0x7121d3:c.instructions+=372;goto B7121d3;
case 0x7121d6:c.instructions+=371;goto B7121d6;
case 0x7121d9:c.instructions+=370;goto B7121d9;
case 0x7121dc:c.instructions+=369;goto B7121dc;
case 0x7121df:c.instructions+=368;goto B7121df;
case 0x7121e3:c.instructions+=367;goto B7121e3;
case 0x7121e6:c.instructions+=366;goto B7121e6;
case 0x7121e9:c.instructions+=365;goto B7121e9;
case 0x7121ec:c.instructions+=364;goto B7121ec;
case 0x7121ef:c.instructions+=363;goto B7121ef;
case 0x7121f2:c.instructions+=362;goto B7121f2;
case 0x7121f9:c.instructions+=361;goto B7121f9;
case 0x7121fc:c.instructions+=360;goto B7121fc;
case 0x7121ff:c.instructions+=359;goto B7121ff;
case 0x712202:c.instructions+=358;goto B712202;
case 0x712205:c.instructions+=357;goto B712205;
case 0x712208:c.instructions+=356;goto B712208;
case 0x71220f:c.instructions+=355;goto B71220f;
case 0x712212:c.instructions+=354;goto B712212;
case 0x712215:c.instructions+=353;goto B712215;
case 0x71221c:c.instructions+=352;goto B71221c;
case 0x71221f:c.instructions+=351;goto B71221f;
case 0x712222:c.instructions+=350;goto B712222;
case 0x712225:c.instructions+=349;goto B712225;
case 0x712228:c.instructions+=348;goto B712228;
case 0x71222c:c.instructions+=347;goto B71222c;
case 0x712233:c.instructions+=346;goto B712233;
case 0x71223a:c.instructions+=345;goto B71223a;
case 0x712241:c.instructions+=344;goto B712241;
case 0x712244:c.instructions+=343;goto B712244;
case 0x712247:c.instructions+=342;goto B712247;
case 0x71224a:c.instructions+=341;goto B71224a;
case 0x71224d:c.instructions+=340;goto B71224d;
case 0x712250:c.instructions+=339;goto B712250;
case 0x712253:c.instructions+=338;goto B712253;
case 0x712257:c.instructions+=337;goto B712257;
case 0x71225b:c.instructions+=336;goto B71225b;
case 0x71225f:c.instructions+=335;goto B71225f;
case 0x712263:c.instructions+=334;goto B712263;
case 0x712267:c.instructions+=333;goto B712267;
case 0x71226a:c.instructions+=332;goto B71226a;
case 0x71226d:c.instructions+=331;goto B71226d;
case 0x712270:c.instructions+=330;goto B712270;
case 0x712273:c.instructions+=329;goto B712273;
case 0x71227a:c.instructions+=328;goto B71227a;
case 0x71227d:c.instructions+=327;goto B71227d;
case 0x712280:c.instructions+=326;goto B712280;
case 0x712284:c.instructions+=325;goto B712284;
case 0x712287:c.instructions+=324;goto B712287;
case 0x71228b:c.instructions+=323;goto B71228b;
case 0x71228e:c.instructions+=322;goto B71228e;
case 0x712291:c.instructions+=321;goto B712291;
case 0x712298:c.instructions+=320;goto B712298;
case 0x71229b:c.instructions+=319;goto B71229b;
case 0x71229e:c.instructions+=318;goto B71229e;
case 0x7122a1:c.instructions+=317;goto B7122a1;
case 0x7122a5:c.instructions+=316;goto B7122a5;
case 0x7122a8:c.instructions+=315;goto B7122a8;
case 0x7122ab:c.instructions+=314;goto B7122ab;
case 0x7122ae:c.instructions+=313;goto B7122ae;
case 0x7122b1:c.instructions+=312;goto B7122b1;
case 0x7122b5:c.instructions+=311;goto B7122b5;
case 0x7122b9:c.instructions+=310;goto B7122b9;
case 0x7122bc:c.instructions+=309;goto B7122bc;
case 0x7122bf:c.instructions+=308;goto B7122bf;
case 0x7122c2:c.instructions+=307;goto B7122c2;
case 0x7122c5:c.instructions+=306;goto B7122c5;
case 0x7122c8:c.instructions+=305;goto B7122c8;
case 0x7122cb:c.instructions+=304;goto B7122cb;
case 0x7122d2:c.instructions+=303;goto B7122d2;
case 0x7122d5:c.instructions+=302;goto B7122d5;
case 0x7122dc:c.instructions+=301;goto B7122dc;
case 0x7122df:c.instructions+=300;goto B7122df;
case 0x7122e6:c.instructions+=299;goto B7122e6;
case 0x7122e9:c.instructions+=298;goto B7122e9;
case 0x7122ec:c.instructions+=297;goto B7122ec;
case 0x7122f0:c.instructions+=296;goto B7122f0;
case 0x7122f3:c.instructions+=295;goto B7122f3;
case 0x7122f7:c.instructions+=294;goto B7122f7;
case 0x7122fb:c.instructions+=293;goto B7122fb;
case 0x7122ff:c.instructions+=292;goto B7122ff;
case 0x712306:c.instructions+=291;goto B712306;
case 0x712309:c.instructions+=290;goto B712309;
case 0x71230c:c.instructions+=289;goto B71230c;
case 0x712310:c.instructions+=288;goto B712310;
case 0x712313:c.instructions+=287;goto B712313;
case 0x712317:c.instructions+=286;goto B712317;
case 0x71231a:c.instructions+=285;goto B71231a;
case 0x71231d:c.instructions+=284;goto B71231d;
case 0x712320:c.instructions+=283;goto B712320;
case 0x712323:c.instructions+=282;goto B712323;
case 0x712327:c.instructions+=281;goto B712327;
case 0x71232a:c.instructions+=280;goto B71232a;
case 0x71232e:c.instructions+=279;goto B71232e;
case 0x712331:c.instructions+=278;goto B712331;
case 0x712334:c.instructions+=277;goto B712334;
case 0x712338:c.instructions+=276;goto B712338;
case 0x71233b:c.instructions+=275;goto B71233b;
case 0x71233e:c.instructions+=274;goto B71233e;
case 0x712341:c.instructions+=273;goto B712341;
case 0x712345:c.instructions+=272;goto B712345;
case 0x712349:c.instructions+=271;goto B712349;
case 0x71234c:c.instructions+=270;goto B71234c;
case 0x712350:c.instructions+=269;goto B712350;
case 0x712353:c.instructions+=268;goto B712353;
case 0x712356:c.instructions+=267;goto B712356;
case 0x71235a:c.instructions+=266;goto B71235a;
case 0x71235d:c.instructions+=265;goto B71235d;
case 0x712360:c.instructions+=264;goto B712360;
case 0x712363:c.instructions+=263;goto B712363;
case 0x712367:c.instructions+=262;goto B712367;
case 0x71236b:c.instructions+=261;goto B71236b;
case 0x71236e:c.instructions+=260;goto B71236e;
case 0x712372:c.instructions+=259;goto B712372;
case 0x712375:c.instructions+=258;goto B712375;
case 0x712378:c.instructions+=257;goto B712378;
case 0x71237f:c.instructions+=256;goto B71237f;
case 0x712383:c.instructions+=255;goto B712383;
case 0x712386:c.instructions+=254;goto B712386;
case 0x712389:c.instructions+=253;goto B712389;
case 0x71238c:c.instructions+=252;goto B71238c;
case 0x712390:c.instructions+=251;goto B712390;
case 0x712394:c.instructions+=250;goto B712394;
case 0x712398:c.instructions+=249;goto B712398;
case 0x71239f:c.instructions+=248;goto B71239f;
case 0x7123a2:c.instructions+=247;goto B7123a2;
case 0x7123a5:c.instructions+=246;goto B7123a5;
case 0x7123ac:c.instructions+=245;goto B7123ac;
case 0x7123b0:c.instructions+=244;goto B7123b0;
case 0x7123b3:c.instructions+=243;goto B7123b3;
case 0x7123b6:c.instructions+=242;goto B7123b6;
case 0x7123b9:c.instructions+=241;goto B7123b9;
case 0x7123bd:c.instructions+=240;goto B7123bd;
case 0x7123c1:c.instructions+=239;goto B7123c1;
case 0x7123c5:c.instructions+=238;goto B7123c5;
case 0x7123c8:c.instructions+=237;goto B7123c8;
case 0x7123cb:c.instructions+=236;goto B7123cb;
case 0x7123ce:c.instructions+=235;goto B7123ce;
case 0x7123d2:c.instructions+=234;goto B7123d2;
case 0x7123d5:c.instructions+=233;goto B7123d5;
case 0x7123d8:c.instructions+=232;goto B7123d8;
case 0x7123db:c.instructions+=231;goto B7123db;
case 0x7123df:c.instructions+=230;goto B7123df;
case 0x7123e3:c.instructions+=229;goto B7123e3;
case 0x7123e7:c.instructions+=228;goto B7123e7;
case 0x7123ea:c.instructions+=227;goto B7123ea;
case 0x7123ed:c.instructions+=226;goto B7123ed;
case 0x7123f0:c.instructions+=225;goto B7123f0;
case 0x7123f4:c.instructions+=224;goto B7123f4;
case 0x7123f7:c.instructions+=223;goto B7123f7;
case 0x7123fa:c.instructions+=222;goto B7123fa;
case 0x7123fd:c.instructions+=221;goto B7123fd;
case 0x712401:c.instructions+=220;goto B712401;
case 0x712408:c.instructions+=219;goto B712408;
case 0x71240c:c.instructions+=218;goto B71240c;
case 0x71240f:c.instructions+=217;goto B71240f;
case 0x712412:c.instructions+=216;goto B712412;
case 0x712415:c.instructions+=215;goto B712415;
case 0x712419:c.instructions+=214;goto B712419;
case 0x71241c:c.instructions+=213;goto B71241c;
case 0x71241f:c.instructions+=212;goto B71241f;
case 0x712422:c.instructions+=211;goto B712422;
case 0x712426:c.instructions+=210;goto B712426;
case 0x712429:c.instructions+=209;goto B712429;
case 0x71242c:c.instructions+=208;goto B71242c;
case 0x712430:c.instructions+=207;goto B712430;
case 0x712434:c.instructions+=206;goto B712434;
case 0x712438:c.instructions+=205;goto B712438;
case 0x71243c:c.instructions+=204;goto B71243c;
case 0x712440:c.instructions+=203;goto B712440;
case 0x712443:c.instructions+=202;goto B712443;
case 0x712446:c.instructions+=201;goto B712446;
case 0x712449:c.instructions+=200;goto B712449;
case 0x712450:c.instructions+=199;goto B712450;
case 0x712453:c.instructions+=198;goto B712453;
case 0x712456:c.instructions+=197;goto B712456;
case 0x712459:c.instructions+=196;goto B712459;
case 0x71245d:c.instructions+=195;goto B71245d;
case 0x712460:c.instructions+=194;goto B712460;
case 0x712464:c.instructions+=193;goto B712464;
case 0x712467:c.instructions+=192;goto B712467;
case 0x71246a:c.instructions+=191;goto B71246a;
case 0x712471:c.instructions+=190;goto B712471;
case 0x712474:c.instructions+=189;goto B712474;
case 0x712477:c.instructions+=188;goto B712477;
case 0x71247a:c.instructions+=187;goto B71247a;
case 0x71247e:c.instructions+=186;goto B71247e;
case 0x712481:c.instructions+=185;goto B712481;
case 0x712484:c.instructions+=184;goto B712484;
case 0x712487:c.instructions+=183;goto B712487;
case 0x71248a:c.instructions+=182;goto B71248a;
case 0x71248e:c.instructions+=181;goto B71248e;
case 0x712492:c.instructions+=180;goto B712492;
case 0x712495:c.instructions+=179;goto B712495;
case 0x712498:c.instructions+=178;goto B712498;
case 0x71249b:c.instructions+=177;goto B71249b;
case 0x71249e:c.instructions+=176;goto B71249e;
case 0x7124a1:c.instructions+=175;goto B7124a1;
case 0x7124a4:c.instructions+=174;goto B7124a4;
case 0x7124ab:c.instructions+=173;goto B7124ab;
case 0x7124ae:c.instructions+=172;goto B7124ae;
case 0x7124b5:c.instructions+=171;goto B7124b5;
case 0x7124b8:c.instructions+=170;goto B7124b8;
case 0x7124bf:c.instructions+=169;goto B7124bf;
case 0x7124c2:c.instructions+=168;goto B7124c2;
case 0x7124c5:c.instructions+=167;goto B7124c5;
case 0x7124c9:c.instructions+=166;goto B7124c9;
case 0x7124cc:c.instructions+=165;goto B7124cc;
case 0x7124d0:c.instructions+=164;goto B7124d0;
case 0x7124d4:c.instructions+=163;goto B7124d4;
case 0x7124d8:c.instructions+=162;goto B7124d8;
case 0x7124df:c.instructions+=161;goto B7124df;
case 0x7124e2:c.instructions+=160;goto B7124e2;
case 0x7124e5:c.instructions+=159;goto B7124e5;
case 0x7124e9:c.instructions+=158;goto B7124e9;
case 0x7124ec:c.instructions+=157;goto B7124ec;
case 0x7124f0:c.instructions+=156;goto B7124f0;
case 0x7124f3:c.instructions+=155;goto B7124f3;
case 0x7124f6:c.instructions+=154;goto B7124f6;
case 0x7124f9:c.instructions+=153;goto B7124f9;
case 0x7124fc:c.instructions+=152;goto B7124fc;
case 0x712500:c.instructions+=151;goto B712500;
case 0x712503:c.instructions+=150;goto B712503;
case 0x712507:c.instructions+=149;goto B712507;
case 0x71250a:c.instructions+=148;goto B71250a;
case 0x71250d:c.instructions+=147;goto B71250d;
case 0x712511:c.instructions+=146;goto B712511;
case 0x712514:c.instructions+=145;goto B712514;
case 0x712517:c.instructions+=144;goto B712517;
case 0x71251a:c.instructions+=143;goto B71251a;
case 0x71251e:c.instructions+=142;goto B71251e;
case 0x712522:c.instructions+=141;goto B712522;
case 0x712525:c.instructions+=140;goto B712525;
case 0x712529:c.instructions+=139;goto B712529;
case 0x71252c:c.instructions+=138;goto B71252c;
case 0x71252f:c.instructions+=137;goto B71252f;
case 0x712533:c.instructions+=136;goto B712533;
case 0x712536:c.instructions+=135;goto B712536;
case 0x712539:c.instructions+=134;goto B712539;
case 0x71253c:c.instructions+=133;goto B71253c;
case 0x712540:c.instructions+=132;goto B712540;
case 0x712544:c.instructions+=131;goto B712544;
case 0x712547:c.instructions+=130;goto B712547;
case 0x71254b:c.instructions+=129;goto B71254b;
case 0x71254e:c.instructions+=128;goto B71254e;
case 0x712551:c.instructions+=127;goto B712551;
case 0x712558:c.instructions+=126;goto B712558;
case 0x71255c:c.instructions+=125;goto B71255c;
case 0x71255f:c.instructions+=124;goto B71255f;
case 0x712562:c.instructions+=123;goto B712562;
case 0x712565:c.instructions+=122;goto B712565;
case 0x712569:c.instructions+=121;goto B712569;
case 0x71256d:c.instructions+=120;goto B71256d;
case 0x712571:c.instructions+=119;goto B712571;
case 0x712578:c.instructions+=118;goto B712578;
case 0x71257b:c.instructions+=117;goto B71257b;
case 0x71257e:c.instructions+=116;goto B71257e;
case 0x712585:c.instructions+=115;goto B712585;
case 0x712589:c.instructions+=114;goto B712589;
case 0x71258c:c.instructions+=113;goto B71258c;
case 0x71258f:c.instructions+=112;goto B71258f;
case 0x712592:c.instructions+=111;goto B712592;
case 0x712596:c.instructions+=110;goto B712596;
case 0x71259a:c.instructions+=109;goto B71259a;
case 0x71259e:c.instructions+=108;goto B71259e;
case 0x7125a1:c.instructions+=107;goto B7125a1;
case 0x7125a4:c.instructions+=106;goto B7125a4;
case 0x7125a7:c.instructions+=105;goto B7125a7;
case 0x7125ab:c.instructions+=104;goto B7125ab;
case 0x7125ae:c.instructions+=103;goto B7125ae;
case 0x7125b1:c.instructions+=102;goto B7125b1;
case 0x7125b4:c.instructions+=101;goto B7125b4;
case 0x7125b8:c.instructions+=100;goto B7125b8;
case 0x7125bc:c.instructions+=99;goto B7125bc;
case 0x7125c0:c.instructions+=98;goto B7125c0;
case 0x7125c3:c.instructions+=97;goto B7125c3;
case 0x7125c6:c.instructions+=96;goto B7125c6;
case 0x7125c9:c.instructions+=95;goto B7125c9;
case 0x7125cd:c.instructions+=94;goto B7125cd;
case 0x7125d0:c.instructions+=93;goto B7125d0;
case 0x7125d3:c.instructions+=92;goto B7125d3;
case 0x7125d6:c.instructions+=91;goto B7125d6;
case 0x7125da:c.instructions+=90;goto B7125da;
case 0x7125e1:c.instructions+=89;goto B7125e1;
case 0x7125e5:c.instructions+=88;goto B7125e5;
case 0x7125e8:c.instructions+=87;goto B7125e8;
case 0x7125eb:c.instructions+=86;goto B7125eb;
case 0x7125ee:c.instructions+=85;goto B7125ee;
case 0x7125f2:c.instructions+=84;goto B7125f2;
case 0x7125f5:c.instructions+=83;goto B7125f5;
case 0x7125f8:c.instructions+=82;goto B7125f8;
case 0x7125fb:c.instructions+=81;goto B7125fb;
case 0x7125ff:c.instructions+=80;goto B7125ff;
case 0x712602:c.instructions+=79;goto B712602;
case 0x712605:c.instructions+=78;goto B712605;
case 0x712608:c.instructions+=77;goto B712608;
case 0x71260c:c.instructions+=76;goto B71260c;
case 0x71260f:c.instructions+=75;goto B71260f;
case 0x712613:c.instructions+=74;goto B712613;
case 0x712617:c.instructions+=73;goto B712617;
case 0x71261b:c.instructions+=72;goto B71261b;
case 0x71261f:c.instructions+=71;goto B71261f;
case 0x712624:c.instructions+=70;goto B712624;
case 0x712628:c.instructions+=69;goto B712628;
case 0x71262c:c.instructions+=68;goto B71262c;
case 0x712631:c.instructions+=67;goto B712631;
case 0x712635:c.instructions+=66;goto B712635;
case 0x712639:c.instructions+=65;goto B712639;
case 0x71263d:c.instructions+=64;goto B71263d;
case 0x712642:c.instructions+=63;goto B712642;
case 0x712646:c.instructions+=62;goto B712646;
case 0x71264a:c.instructions+=61;goto B71264a;
case 0x71264e:c.instructions+=60;goto B71264e;
case 0x712652:c.instructions+=59;goto B712652;
case 0x712656:c.instructions+=58;goto B712656;
case 0x71265b:c.instructions+=57;goto B71265b;
case 0x71265f:c.instructions+=56;goto B71265f;
case 0x712663:c.instructions+=55;goto B712663;
case 0x712668:c.instructions+=54;goto B712668;
case 0x71266c:c.instructions+=53;goto B71266c;
case 0x712670:c.instructions+=52;goto B712670;
case 0x712674:c.instructions+=51;goto B712674;
case 0x712679:c.instructions+=50;goto B712679;
case 0x71267a:c.instructions+=49;goto B71267a;
case 0x71267b:c.instructions+=48;goto B71267b;
case 0x71267c:c.instructions+=47;goto B71267c;
case 0x71267d:c.instructions+=46;goto B71267d;
case 0x71267e:c.instructions+=45;goto B71267e;
case 0x71267f:c.instructions+=44;goto B71267f;
case 0x712682:c.instructions+=43;goto B712682;
case 0x712685:c.instructions+=42;goto B712685;
case 0x712688:c.instructions+=41;goto B712688;
case 0x71268c:c.instructions+=40;goto B71268c;
case 0x71268e:c.instructions+=39;goto B71268e;
case 0x712691:c.instructions+=38;goto B712691;
case 0x712694:c.instructions+=37;goto B712694;
case 0x712696:c.instructions+=36;goto B712696;
case 0x71269a:c.instructions+=35;goto B71269a;
case 0x71269c:c.instructions+=34;goto B71269c;
case 0x7126a0:c.instructions+=33;goto B7126a0;
case 0x7126a2:c.instructions+=32;goto B7126a2;
case 0x7126a6:c.instructions+=31;goto B7126a6;
case 0x7126a8:c.instructions+=30;goto B7126a8;
case 0x7126ac:c.instructions+=29;goto B7126ac;
case 0x7126ae:c.instructions+=28;goto B7126ae;
case 0x7126b2:c.instructions+=27;goto B7126b2;
case 0x7126b4:c.instructions+=26;goto B7126b4;
case 0x7126b8:c.instructions+=25;goto B7126b8;
case 0x7126ba:c.instructions+=24;goto B7126ba;
case 0x7126be:c.instructions+=23;goto B7126be;
case 0x7126c0:c.instructions+=22;goto B7126c0;
case 0x7126c2:c.instructions+=21;goto B7126c2;
case 0x7126c5:c.instructions+=20;goto B7126c5;
case 0x7126c8:c.instructions+=19;goto B7126c8;
case 0x7126cc:c.instructions+=18;goto B7126cc;
case 0x7126ce:c.instructions+=17;goto B7126ce;
case 0x7126d2:c.instructions+=16;goto B7126d2;
case 0x7126d4:c.instructions+=15;goto B7126d4;
case 0x7126d8:c.instructions+=14;goto B7126d8;
case 0x7126da:c.instructions+=13;goto B7126da;
case 0x7126de:c.instructions+=12;goto B7126de;
case 0x7126e0:c.instructions+=11;goto B7126e0;
case 0x7126e4:c.instructions+=10;goto B7126e4;
case 0x7126e6:c.instructions+=9;goto B7126e6;
case 0x7126ea:c.instructions+=8;goto B7126ea;
case 0x7126ec:c.instructions+=7;goto B7126ec;
case 0x7126f0:c.instructions+=6;goto B7126f0;
case 0x7126f2:c.instructions+=5;goto B7126f2;
case 0x7126f6:c.instructions+=4;goto B7126f6;
case 0x7126f8:c.instructions+=3;goto B7126f8;
case 0x7126fa:c.instructions+=2;goto B7126fa;
case 0x7126fd:c.instructions+=1;goto B7126fd;
case 0x7126ff:goto L7126ff;
case 0x712700:c.instructions+=2;goto B712700;
case 0x712703:c.instructions+=1;goto B712703;
case 0x712708:goto L712708;
case 0x71270b:c.instructions+=4;goto B71270b;
case 0x71270e:c.instructions+=3;goto B71270e;
case 0x712711:c.instructions+=2;goto B712711;
case 0x712714:c.instructions+=1;goto B712714;
case 0x712716:goto L712716;
case 0x71271b:c.instructions+=7;goto B71271b;
case 0x712723:c.instructions+=6;goto B712723;
case 0x712727:c.instructions+=5;goto B712727;
case 0x71272a:c.instructions+=4;goto B71272a;
case 0x712732:c.instructions+=3;goto B712732;
case 0x712733:c.instructions+=2;goto B712733;
case 0x712736:c.instructions+=1;goto B712736;
case 0x712738:goto L712738;
case 0x712739:c.instructions+=581;goto B712739;
case 0x71273a:c.instructions+=580;goto B71273a;
case 0x71273d:c.instructions+=579;goto B71273d;
case 0x712740:c.instructions+=578;goto B712740;
case 0x712741:c.instructions+=577;goto B712741;
case 0x712744:c.instructions+=576;goto B712744;
case 0x712747:c.instructions+=575;goto B712747;
case 0x712748:c.instructions+=574;goto B712748;
case 0x71274b:c.instructions+=573;goto B71274b;
case 0x71274e:c.instructions+=572;goto B71274e;
case 0x71274f:c.instructions+=571;goto B71274f;
case 0x712752:c.instructions+=570;goto B712752;
case 0x712755:c.instructions+=569;goto B712755;
case 0x712756:c.instructions+=568;goto B712756;
case 0x71275a:c.instructions+=567;goto B71275a;
case 0x71275e:c.instructions+=566;goto B71275e;
case 0x712761:c.instructions+=565;goto B712761;
case 0x712768:c.instructions+=564;goto B712768;
case 0x71276f:c.instructions+=563;goto B71276f;
case 0x712772:c.instructions+=562;goto B712772;
case 0x712774:c.instructions+=561;goto B712774;
case 0x712777:c.instructions+=560;goto B712777;
case 0x71277d:c.instructions+=559;goto B71277d;
case 0x712783:c.instructions+=558;goto B712783;
case 0x712786:c.instructions+=557;goto B712786;
case 0x712788:c.instructions+=556;goto B712788;
case 0x71278b:c.instructions+=555;goto B71278b;
case 0x71278f:c.instructions+=554;goto B71278f;
case 0x712793:c.instructions+=553;goto B712793;
case 0x712796:c.instructions+=552;goto B712796;
case 0x71279a:c.instructions+=551;goto B71279a;
case 0x71279d:c.instructions+=550;goto B71279d;
case 0x7127a0:c.instructions+=549;goto B7127a0;
case 0x7127a3:c.instructions+=548;goto B7127a3;
case 0x7127a6:c.instructions+=547;goto B7127a6;
case 0x7127a9:c.instructions+=546;goto B7127a9;
case 0x7127ac:c.instructions+=545;goto B7127ac;
case 0x7127af:c.instructions+=544;goto B7127af;
case 0x7127b2:c.instructions+=543;goto B7127b2;
case 0x7127b5:c.instructions+=542;goto B7127b5;
case 0x7127b8:c.instructions+=541;goto B7127b8;
case 0x7127bb:c.instructions+=540;goto B7127bb;
case 0x7127be:c.instructions+=539;goto B7127be;
case 0x7127c1:c.instructions+=538;goto B7127c1;
case 0x7127c4:c.instructions+=537;goto B7127c4;
case 0x7127c7:c.instructions+=536;goto B7127c7;
case 0x7127cb:c.instructions+=535;goto B7127cb;
case 0x7127ce:c.instructions+=534;goto B7127ce;
case 0x7127d1:c.instructions+=533;goto B7127d1;
case 0x7127d5:c.instructions+=532;goto B7127d5;
case 0x7127d8:c.instructions+=531;goto B7127d8;
case 0x7127db:c.instructions+=530;goto B7127db;
case 0x7127df:c.instructions+=529;goto B7127df;
case 0x7127e2:c.instructions+=528;goto B7127e2;
case 0x7127e5:c.instructions+=527;goto B7127e5;
case 0x7127e9:c.instructions+=526;goto B7127e9;
case 0x7127ec:c.instructions+=525;goto B7127ec;
case 0x7127ef:c.instructions+=524;goto B7127ef;
case 0x7127f3:c.instructions+=523;goto B7127f3;
case 0x7127f6:c.instructions+=522;goto B7127f6;
case 0x7127f9:c.instructions+=521;goto B7127f9;
case 0x7127fd:c.instructions+=520;goto B7127fd;
case 0x712800:c.instructions+=519;goto B712800;
case 0x712804:c.instructions+=518;goto B712804;
case 0x712808:c.instructions+=517;goto B712808;
case 0x71280c:c.instructions+=516;goto B71280c;
case 0x71280f:c.instructions+=515;goto B71280f;
case 0x712816:c.instructions+=514;goto B712816;
case 0x712819:c.instructions+=513;goto B712819;
case 0x71281d:c.instructions+=512;goto B71281d;
case 0x712820:c.instructions+=511;goto B712820;
case 0x712823:c.instructions+=510;goto B712823;
case 0x712826:c.instructions+=509;goto B712826;
case 0x712829:c.instructions+=508;goto B712829;
case 0x71282c:c.instructions+=507;goto B71282c;
case 0x71282f:c.instructions+=506;goto B71282f;
case 0x712832:c.instructions+=505;goto B712832;
case 0x712835:c.instructions+=504;goto B712835;
case 0x712838:c.instructions+=503;goto B712838;
case 0x71283b:c.instructions+=502;goto B71283b;
case 0x71283e:c.instructions+=501;goto B71283e;
case 0x712841:c.instructions+=500;goto B712841;
case 0x712844:c.instructions+=499;goto B712844;
case 0x712848:c.instructions+=498;goto B712848;
case 0x71284b:c.instructions+=497;goto B71284b;
case 0x71284e:c.instructions+=496;goto B71284e;
case 0x712852:c.instructions+=495;goto B712852;
case 0x712855:c.instructions+=494;goto B712855;
case 0x712858:c.instructions+=493;goto B712858;
case 0x71285c:c.instructions+=492;goto B71285c;
case 0x71285f:c.instructions+=491;goto B71285f;
case 0x712862:c.instructions+=490;goto B712862;
case 0x712866:c.instructions+=489;goto B712866;
case 0x712869:c.instructions+=488;goto B712869;
case 0x71286c:c.instructions+=487;goto B71286c;
case 0x712870:c.instructions+=486;goto B712870;
case 0x712873:c.instructions+=485;goto B712873;
case 0x712876:c.instructions+=484;goto B712876;
case 0x71287a:c.instructions+=483;goto B71287a;
case 0x71287e:c.instructions+=482;goto B71287e;
case 0x712885:c.instructions+=481;goto B712885;
case 0x712888:c.instructions+=480;goto B712888;
case 0x71288c:c.instructions+=479;goto B71288c;
case 0x712890:c.instructions+=478;goto B712890;
case 0x712894:c.instructions+=477;goto B712894;
case 0x712898:c.instructions+=476;goto B712898;
case 0x71289c:c.instructions+=475;goto B71289c;
case 0x7128a0:c.instructions+=474;goto B7128a0;
case 0x7128a4:c.instructions+=473;goto B7128a4;
case 0x7128a8:c.instructions+=472;goto B7128a8;
case 0x7128ac:c.instructions+=471;goto B7128ac;
case 0x7128af:c.instructions+=470;goto B7128af;
case 0x7128b2:c.instructions+=469;goto B7128b2;
case 0x7128b5:c.instructions+=468;goto B7128b5;
case 0x7128b8:c.instructions+=467;goto B7128b8;
case 0x7128bb:c.instructions+=466;goto B7128bb;
case 0x7128be:c.instructions+=465;goto B7128be;
case 0x7128c1:c.instructions+=464;goto B7128c1;
case 0x7128c4:c.instructions+=463;goto B7128c4;
case 0x7128c7:c.instructions+=462;goto B7128c7;
case 0x7128ca:c.instructions+=461;goto B7128ca;
case 0x7128cd:c.instructions+=460;goto B7128cd;
case 0x7128d0:c.instructions+=459;goto B7128d0;
case 0x7128d3:c.instructions+=458;goto B7128d3;
case 0x7128d6:c.instructions+=457;goto B7128d6;
case 0x7128d9:c.instructions+=456;goto B7128d9;
case 0x7128dc:c.instructions+=455;goto B7128dc;
case 0x7128df:c.instructions+=454;goto B7128df;
case 0x7128e2:c.instructions+=453;goto B7128e2;
case 0x7128e9:c.instructions+=452;goto B7128e9;
case 0x7128ec:c.instructions+=451;goto B7128ec;
case 0x7128f0:c.instructions+=450;goto B7128f0;
case 0x7128f3:c.instructions+=449;goto B7128f3;
case 0x7128fa:c.instructions+=448;goto B7128fa;
case 0x7128fd:c.instructions+=447;goto B7128fd;
case 0x712901:c.instructions+=446;goto B712901;
case 0x712905:c.instructions+=445;goto B712905;
case 0x712909:c.instructions+=444;goto B712909;
case 0x71290d:c.instructions+=443;goto B71290d;
case 0x712911:c.instructions+=442;goto B712911;
case 0x712915:c.instructions+=441;goto B712915;
case 0x71291c:c.instructions+=440;goto B71291c;
case 0x712923:c.instructions+=439;goto B712923;
case 0x71292a:c.instructions+=438;goto B71292a;
case 0x712931:c.instructions+=437;goto B712931;
case 0x712934:c.instructions+=436;goto B712934;
case 0x712937:c.instructions+=435;goto B712937;
case 0x71293a:c.instructions+=434;goto B71293a;
case 0x71293d:c.instructions+=433;goto B71293d;
case 0x712941:c.instructions+=432;goto B712941;
case 0x712948:c.instructions+=431;goto B712948;
case 0x71294f:c.instructions+=430;goto B71294f;
case 0x712952:c.instructions+=429;goto B712952;
case 0x712955:c.instructions+=428;goto B712955;
case 0x712958:c.instructions+=427;goto B712958;
case 0x71295b:c.instructions+=426;goto B71295b;
case 0x71295e:c.instructions+=425;goto B71295e;
case 0x712961:c.instructions+=424;goto B712961;
case 0x712964:c.instructions+=423;goto B712964;
case 0x712967:c.instructions+=422;goto B712967;
case 0x71296a:c.instructions+=421;goto B71296a;
case 0x71296d:c.instructions+=420;goto B71296d;
case 0x712970:c.instructions+=419;goto B712970;
case 0x712973:c.instructions+=418;goto B712973;
case 0x712976:c.instructions+=417;goto B712976;
case 0x712979:c.instructions+=416;goto B712979;
case 0x71297c:c.instructions+=415;goto B71297c;
case 0x71297f:c.instructions+=414;goto B71297f;
case 0x712982:c.instructions+=413;goto B712982;
case 0x712985:c.instructions+=412;goto B712985;
case 0x712988:c.instructions+=411;goto B712988;
case 0x71298b:c.instructions+=410;goto B71298b;
case 0x712992:c.instructions+=409;goto B712992;
case 0x712995:c.instructions+=408;goto B712995;
case 0x712999:c.instructions+=407;goto B712999;
case 0x7129a0:c.instructions+=406;goto B7129a0;
case 0x7129a3:c.instructions+=405;goto B7129a3;
case 0x7129a6:c.instructions+=404;goto B7129a6;
case 0x7129a9:c.instructions+=403;goto B7129a9;
case 0x7129ac:c.instructions+=402;goto B7129ac;
case 0x7129af:c.instructions+=401;goto B7129af;
case 0x7129b2:c.instructions+=400;goto B7129b2;
case 0x7129b6:c.instructions+=399;goto B7129b6;
case 0x7129ba:c.instructions+=398;goto B7129ba;
case 0x7129be:c.instructions+=397;goto B7129be;
case 0x7129c2:c.instructions+=396;goto B7129c2;
case 0x7129c6:c.instructions+=395;goto B7129c6;
case 0x7129c9:c.instructions+=394;goto B7129c9;
case 0x7129cc:c.instructions+=393;goto B7129cc;
case 0x7129cf:c.instructions+=392;goto B7129cf;
case 0x7129d2:c.instructions+=391;goto B7129d2;
case 0x7129d9:c.instructions+=390;goto B7129d9;
case 0x7129dc:c.instructions+=389;goto B7129dc;
case 0x7129df:c.instructions+=388;goto B7129df;
case 0x7129e3:c.instructions+=387;goto B7129e3;
case 0x7129e6:c.instructions+=386;goto B7129e6;
case 0x7129ea:c.instructions+=385;goto B7129ea;
case 0x7129ed:c.instructions+=384;goto B7129ed;
case 0x7129f0:c.instructions+=383;goto B7129f0;
case 0x7129f7:c.instructions+=382;goto B7129f7;
case 0x7129fa:c.instructions+=381;goto B7129fa;
case 0x7129fd:c.instructions+=380;goto B7129fd;
case 0x712a00:c.instructions+=379;goto B712a00;
case 0x712a04:c.instructions+=378;goto B712a04;
case 0x712a07:c.instructions+=377;goto B712a07;
case 0x712a0a:c.instructions+=376;goto B712a0a;
case 0x712a0d:c.instructions+=375;goto B712a0d;
case 0x712a10:c.instructions+=374;goto B712a10;
case 0x712a14:c.instructions+=373;goto B712a14;
case 0x712a18:c.instructions+=372;goto B712a18;
case 0x712a1b:c.instructions+=371;goto B712a1b;
case 0x712a1e:c.instructions+=370;goto B712a1e;
case 0x712a21:c.instructions+=369;goto B712a21;
case 0x712a24:c.instructions+=368;goto B712a24;
case 0x712a27:c.instructions+=367;goto B712a27;
case 0x712a2a:c.instructions+=366;goto B712a2a;
case 0x712a31:c.instructions+=365;goto B712a31;
case 0x712a34:c.instructions+=364;goto B712a34;
case 0x712a3b:c.instructions+=363;goto B712a3b;
case 0x712a3e:c.instructions+=362;goto B712a3e;
case 0x712a45:c.instructions+=361;goto B712a45;
case 0x712a48:c.instructions+=360;goto B712a48;
case 0x712a4b:c.instructions+=359;goto B712a4b;
case 0x712a4f:c.instructions+=358;goto B712a4f;
case 0x712a52:c.instructions+=357;goto B712a52;
case 0x712a56:c.instructions+=356;goto B712a56;
case 0x712a5a:c.instructions+=355;goto B712a5a;
case 0x712a5e:c.instructions+=354;goto B712a5e;
case 0x712a65:c.instructions+=353;goto B712a65;
case 0x712a68:c.instructions+=352;goto B712a68;
case 0x712a6b:c.instructions+=351;goto B712a6b;
case 0x712a6f:c.instructions+=350;goto B712a6f;
case 0x712a72:c.instructions+=349;goto B712a72;
case 0x712a76:c.instructions+=348;goto B712a76;
case 0x712a79:c.instructions+=347;goto B712a79;
case 0x712a7c:c.instructions+=346;goto B712a7c;
case 0x712a7f:c.instructions+=345;goto B712a7f;
case 0x712a82:c.instructions+=344;goto B712a82;
case 0x712a86:c.instructions+=343;goto B712a86;
case 0x712a89:c.instructions+=342;goto B712a89;
case 0x712a8d:c.instructions+=341;goto B712a8d;
case 0x712a90:c.instructions+=340;goto B712a90;
case 0x712a93:c.instructions+=339;goto B712a93;
case 0x712a97:c.instructions+=338;goto B712a97;
case 0x712a9a:c.instructions+=337;goto B712a9a;
case 0x712a9d:c.instructions+=336;goto B712a9d;
case 0x712aa0:c.instructions+=335;goto B712aa0;
case 0x712aa4:c.instructions+=334;goto B712aa4;
case 0x712aa8:c.instructions+=333;goto B712aa8;
case 0x712aab:c.instructions+=332;goto B712aab;
case 0x712aaf:c.instructions+=331;goto B712aaf;
case 0x712ab2:c.instructions+=330;goto B712ab2;
case 0x712ab5:c.instructions+=329;goto B712ab5;
case 0x712ab9:c.instructions+=328;goto B712ab9;
case 0x712abc:c.instructions+=327;goto B712abc;
case 0x712abf:c.instructions+=326;goto B712abf;
case 0x712ac2:c.instructions+=325;goto B712ac2;
case 0x712ac6:c.instructions+=324;goto B712ac6;
case 0x712aca:c.instructions+=323;goto B712aca;
case 0x712acd:c.instructions+=322;goto B712acd;
case 0x712ad1:c.instructions+=321;goto B712ad1;
case 0x712ad4:c.instructions+=320;goto B712ad4;
case 0x712ad7:c.instructions+=319;goto B712ad7;
case 0x712ade:c.instructions+=318;goto B712ade;
case 0x712ae2:c.instructions+=317;goto B712ae2;
case 0x712ae5:c.instructions+=316;goto B712ae5;
case 0x712ae8:c.instructions+=315;goto B712ae8;
case 0x712aeb:c.instructions+=314;goto B712aeb;
case 0x712aef:c.instructions+=313;goto B712aef;
case 0x712af3:c.instructions+=312;goto B712af3;
case 0x712af7:c.instructions+=311;goto B712af7;
case 0x712afe:c.instructions+=310;goto B712afe;
case 0x712b01:c.instructions+=309;goto B712b01;
case 0x712b04:c.instructions+=308;goto B712b04;
case 0x712b0b:c.instructions+=307;goto B712b0b;
case 0x712b0f:c.instructions+=306;goto B712b0f;
case 0x712b12:c.instructions+=305;goto B712b12;
case 0x712b15:c.instructions+=304;goto B712b15;
case 0x712b18:c.instructions+=303;goto B712b18;
case 0x712b1c:c.instructions+=302;goto B712b1c;
case 0x712b20:c.instructions+=301;goto B712b20;
case 0x712b24:c.instructions+=300;goto B712b24;
case 0x712b27:c.instructions+=299;goto B712b27;
case 0x712b2a:c.instructions+=298;goto B712b2a;
case 0x712b2d:c.instructions+=297;goto B712b2d;
case 0x712b31:c.instructions+=296;goto B712b31;
case 0x712b34:c.instructions+=295;goto B712b34;
case 0x712b37:c.instructions+=294;goto B712b37;
case 0x712b3a:c.instructions+=293;goto B712b3a;
case 0x712b3e:c.instructions+=292;goto B712b3e;
case 0x712b42:c.instructions+=291;goto B712b42;
case 0x712b46:c.instructions+=290;goto B712b46;
case 0x712b49:c.instructions+=289;goto B712b49;
case 0x712b4c:c.instructions+=288;goto B712b4c;
case 0x712b4f:c.instructions+=287;goto B712b4f;
case 0x712b53:c.instructions+=286;goto B712b53;
case 0x712b56:c.instructions+=285;goto B712b56;
case 0x712b59:c.instructions+=284;goto B712b59;
case 0x712b5c:c.instructions+=283;goto B712b5c;
case 0x712b60:c.instructions+=282;goto B712b60;
case 0x712b67:c.instructions+=281;goto B712b67;
case 0x712b6b:c.instructions+=280;goto B712b6b;
case 0x712b6e:c.instructions+=279;goto B712b6e;
case 0x712b71:c.instructions+=278;goto B712b71;
case 0x712b74:c.instructions+=277;goto B712b74;
case 0x712b78:c.instructions+=276;goto B712b78;
case 0x712b7b:c.instructions+=275;goto B712b7b;
case 0x712b7e:c.instructions+=274;goto B712b7e;
case 0x712b81:c.instructions+=273;goto B712b81;
case 0x712b85:c.instructions+=272;goto B712b85;
case 0x712b88:c.instructions+=271;goto B712b88;
case 0x712b8b:c.instructions+=270;goto B712b8b;
case 0x712b8f:c.instructions+=269;goto B712b8f;
case 0x712b93:c.instructions+=268;goto B712b93;
case 0x712b97:c.instructions+=267;goto B712b97;
case 0x712b9b:c.instructions+=266;goto B712b9b;
case 0x712b9f:c.instructions+=265;goto B712b9f;
case 0x712ba2:c.instructions+=264;goto B712ba2;
case 0x712ba5:c.instructions+=263;goto B712ba5;
case 0x712ba8:c.instructions+=262;goto B712ba8;
case 0x712bab:c.instructions+=261;goto B712bab;
case 0x712bb2:c.instructions+=260;goto B712bb2;
case 0x712bb5:c.instructions+=259;goto B712bb5;
case 0x712bb8:c.instructions+=258;goto B712bb8;
case 0x712bbc:c.instructions+=257;goto B712bbc;
case 0x712bbf:c.instructions+=256;goto B712bbf;
case 0x712bc3:c.instructions+=255;goto B712bc3;
case 0x712bc6:c.instructions+=254;goto B712bc6;
case 0x712bc9:c.instructions+=253;goto B712bc9;
case 0x712bd0:c.instructions+=252;goto B712bd0;
case 0x712bd3:c.instructions+=251;goto B712bd3;
case 0x712bd6:c.instructions+=250;goto B712bd6;
case 0x712bd9:c.instructions+=249;goto B712bd9;
case 0x712bdd:c.instructions+=248;goto B712bdd;
case 0x712be0:c.instructions+=247;goto B712be0;
case 0x712be3:c.instructions+=246;goto B712be3;
case 0x712be6:c.instructions+=245;goto B712be6;
case 0x712be9:c.instructions+=244;goto B712be9;
case 0x712bed:c.instructions+=243;goto B712bed;
case 0x712bf1:c.instructions+=242;goto B712bf1;
case 0x712bf4:c.instructions+=241;goto B712bf4;
case 0x712bf7:c.instructions+=240;goto B712bf7;
case 0x712bfa:c.instructions+=239;goto B712bfa;
case 0x712bfd:c.instructions+=238;goto B712bfd;
case 0x712c00:c.instructions+=237;goto B712c00;
case 0x712c03:c.instructions+=236;goto B712c03;
case 0x712c0a:c.instructions+=235;goto B712c0a;
case 0x712c0d:c.instructions+=234;goto B712c0d;
case 0x712c14:c.instructions+=233;goto B712c14;
case 0x712c17:c.instructions+=232;goto B712c17;
case 0x712c1e:c.instructions+=231;goto B712c1e;
case 0x712c21:c.instructions+=230;goto B712c21;
case 0x712c24:c.instructions+=229;goto B712c24;
case 0x712c28:c.instructions+=228;goto B712c28;
case 0x712c2b:c.instructions+=227;goto B712c2b;
case 0x712c2f:c.instructions+=226;goto B712c2f;
case 0x712c33:c.instructions+=225;goto B712c33;
case 0x712c37:c.instructions+=224;goto B712c37;
case 0x712c3e:c.instructions+=223;goto B712c3e;
case 0x712c41:c.instructions+=222;goto B712c41;
case 0x712c44:c.instructions+=221;goto B712c44;
case 0x712c48:c.instructions+=220;goto B712c48;
case 0x712c4b:c.instructions+=219;goto B712c4b;
case 0x712c4f:c.instructions+=218;goto B712c4f;
case 0x712c52:c.instructions+=217;goto B712c52;
case 0x712c55:c.instructions+=216;goto B712c55;
case 0x712c58:c.instructions+=215;goto B712c58;
case 0x712c5b:c.instructions+=214;goto B712c5b;
case 0x712c5f:c.instructions+=213;goto B712c5f;
case 0x712c62:c.instructions+=212;goto B712c62;
case 0x712c66:c.instructions+=211;goto B712c66;
case 0x712c69:c.instructions+=210;goto B712c69;
case 0x712c6c:c.instructions+=209;goto B712c6c;
case 0x712c70:c.instructions+=208;goto B712c70;
case 0x712c73:c.instructions+=207;goto B712c73;
case 0x712c76:c.instructions+=206;goto B712c76;
case 0x712c79:c.instructions+=205;goto B712c79;
case 0x712c7d:c.instructions+=204;goto B712c7d;
case 0x712c81:c.instructions+=203;goto B712c81;
case 0x712c84:c.instructions+=202;goto B712c84;
case 0x712c88:c.instructions+=201;goto B712c88;
case 0x712c8b:c.instructions+=200;goto B712c8b;
case 0x712c8e:c.instructions+=199;goto B712c8e;
case 0x712c92:c.instructions+=198;goto B712c92;
case 0x712c95:c.instructions+=197;goto B712c95;
case 0x712c98:c.instructions+=196;goto B712c98;
case 0x712c9b:c.instructions+=195;goto B712c9b;
case 0x712c9f:c.instructions+=194;goto B712c9f;
case 0x712ca3:c.instructions+=193;goto B712ca3;
case 0x712ca6:c.instructions+=192;goto B712ca6;
case 0x712caa:c.instructions+=191;goto B712caa;
case 0x712cad:c.instructions+=190;goto B712cad;
case 0x712cb0:c.instructions+=189;goto B712cb0;
case 0x712cb7:c.instructions+=188;goto B712cb7;
case 0x712cbb:c.instructions+=187;goto B712cbb;
case 0x712cbe:c.instructions+=186;goto B712cbe;
case 0x712cc1:c.instructions+=185;goto B712cc1;
case 0x712cc4:c.instructions+=184;goto B712cc4;
case 0x712cc8:c.instructions+=183;goto B712cc8;
case 0x712ccc:c.instructions+=182;goto B712ccc;
case 0x712cd0:c.instructions+=181;goto B712cd0;
case 0x712cd7:c.instructions+=180;goto B712cd7;
case 0x712cda:c.instructions+=179;goto B712cda;
case 0x712cdd:c.instructions+=178;goto B712cdd;
case 0x712ce4:c.instructions+=177;goto B712ce4;
case 0x712ce8:c.instructions+=176;goto B712ce8;
case 0x712ceb:c.instructions+=175;goto B712ceb;
case 0x712cee:c.instructions+=174;goto B712cee;
case 0x712cf1:c.instructions+=173;goto B712cf1;
case 0x712cf5:c.instructions+=172;goto B712cf5;
case 0x712cf9:c.instructions+=171;goto B712cf9;
case 0x712cfd:c.instructions+=170;goto B712cfd;
case 0x712d00:c.instructions+=169;goto B712d00;
case 0x712d03:c.instructions+=168;goto B712d03;
case 0x712d06:c.instructions+=167;goto B712d06;
case 0x712d0a:c.instructions+=166;goto B712d0a;
case 0x712d0d:c.instructions+=165;goto B712d0d;
case 0x712d10:c.instructions+=164;goto B712d10;
case 0x712d13:c.instructions+=163;goto B712d13;
case 0x712d17:c.instructions+=162;goto B712d17;
case 0x712d1b:c.instructions+=161;goto B712d1b;
case 0x712d1f:c.instructions+=160;goto B712d1f;
case 0x712d22:c.instructions+=159;goto B712d22;
case 0x712d25:c.instructions+=158;goto B712d25;
case 0x712d28:c.instructions+=157;goto B712d28;
case 0x712d2c:c.instructions+=156;goto B712d2c;
case 0x712d2f:c.instructions+=155;goto B712d2f;
case 0x712d32:c.instructions+=154;goto B712d32;
case 0x712d35:c.instructions+=153;goto B712d35;
case 0x712d39:c.instructions+=152;goto B712d39;
case 0x712d40:c.instructions+=151;goto B712d40;
case 0x712d44:c.instructions+=150;goto B712d44;
case 0x712d47:c.instructions+=149;goto B712d47;
case 0x712d4a:c.instructions+=148;goto B712d4a;
case 0x712d4d:c.instructions+=147;goto B712d4d;
case 0x712d51:c.instructions+=146;goto B712d51;
case 0x712d54:c.instructions+=145;goto B712d54;
case 0x712d57:c.instructions+=144;goto B712d57;
case 0x712d5a:c.instructions+=143;goto B712d5a;
case 0x712d5e:c.instructions+=142;goto B712d5e;
case 0x712d61:c.instructions+=141;goto B712d61;
case 0x712d64:c.instructions+=140;goto B712d64;
case 0x712d67:c.instructions+=139;goto B712d67;
case 0x712d6a:c.instructions+=138;goto B712d6a;
case 0x712d6d:c.instructions+=137;goto B712d6d;
case 0x712d71:c.instructions+=136;goto B712d71;
case 0x712d74:c.instructions+=135;goto B712d74;
case 0x712d77:c.instructions+=134;goto B712d77;
case 0x712d7a:c.instructions+=133;goto B712d7a;
case 0x712d7e:c.instructions+=132;goto B712d7e;
case 0x712d82:c.instructions+=131;goto B712d82;
case 0x712d85:c.instructions+=130;goto B712d85;
case 0x712d88:c.instructions+=129;goto B712d88;
case 0x712d8b:c.instructions+=128;goto B712d8b;
case 0x712d8e:c.instructions+=127;goto B712d8e;
case 0x712d91:c.instructions+=126;goto B712d91;
case 0x712d94:c.instructions+=125;goto B712d94;
case 0x712d97:c.instructions+=124;goto B712d97;
case 0x712d9a:c.instructions+=123;goto B712d9a;
case 0x712d9e:c.instructions+=122;goto B712d9e;
case 0x712da1:c.instructions+=121;goto B712da1;
case 0x712da4:c.instructions+=120;goto B712da4;
case 0x712da8:c.instructions+=119;goto B712da8;
case 0x712dac:c.instructions+=118;goto B712dac;
case 0x712db0:c.instructions+=117;goto B712db0;
case 0x712db4:c.instructions+=116;goto B712db4;
case 0x712db7:c.instructions+=115;goto B712db7;
case 0x712dba:c.instructions+=114;goto B712dba;
case 0x712dbd:c.instructions+=113;goto B712dbd;
case 0x712dc0:c.instructions+=112;goto B712dc0;
case 0x712dc3:c.instructions+=111;goto B712dc3;
case 0x712dc6:c.instructions+=110;goto B712dc6;
case 0x712dc9:c.instructions+=109;goto B712dc9;
case 0x712dcc:c.instructions+=108;goto B712dcc;
case 0x712dcf:c.instructions+=107;goto B712dcf;
case 0x712dd2:c.instructions+=106;goto B712dd2;
case 0x712dd5:c.instructions+=105;goto B712dd5;
case 0x712dd8:c.instructions+=104;goto B712dd8;
case 0x712ddb:c.instructions+=103;goto B712ddb;
case 0x712dde:c.instructions+=102;goto B712dde;
case 0x712de1:c.instructions+=101;goto B712de1;
case 0x712de5:c.instructions+=100;goto B712de5;
case 0x712de8:c.instructions+=99;goto B712de8;
case 0x712dec:c.instructions+=98;goto B712dec;
case 0x712def:c.instructions+=97;goto B712def;
case 0x712df2:c.instructions+=96;goto B712df2;
case 0x712df6:c.instructions+=95;goto B712df6;
case 0x712df9:c.instructions+=94;goto B712df9;
case 0x712dfd:c.instructions+=93;goto B712dfd;
case 0x712e00:c.instructions+=92;goto B712e00;
case 0x712e03:c.instructions+=91;goto B712e03;
case 0x712e06:c.instructions+=90;goto B712e06;
case 0x712e0a:c.instructions+=89;goto B712e0a;
case 0x712e0d:c.instructions+=88;goto B712e0d;
case 0x712e10:c.instructions+=87;goto B712e10;
case 0x712e13:c.instructions+=86;goto B712e13;
case 0x712e17:c.instructions+=85;goto B712e17;
case 0x712e1b:c.instructions+=84;goto B712e1b;
case 0x712e1e:c.instructions+=83;goto B712e1e;
case 0x712e21:c.instructions+=82;goto B712e21;
case 0x712e24:c.instructions+=81;goto B712e24;
case 0x712e27:c.instructions+=80;goto B712e27;
case 0x712e2a:c.instructions+=79;goto B712e2a;
case 0x712e2d:c.instructions+=78;goto B712e2d;
case 0x712e30:c.instructions+=77;goto B712e30;
case 0x712e33:c.instructions+=76;goto B712e33;
case 0x712e37:c.instructions+=75;goto B712e37;
case 0x712e3a:c.instructions+=74;goto B712e3a;
case 0x712e3d:c.instructions+=73;goto B712e3d;
case 0x712e41:c.instructions+=72;goto B712e41;
case 0x712e45:c.instructions+=71;goto B712e45;
case 0x712e49:c.instructions+=70;goto B712e49;
case 0x712e4d:c.instructions+=69;goto B712e4d;
case 0x712e50:c.instructions+=68;goto B712e50;
case 0x712e53:c.instructions+=67;goto B712e53;
case 0x712e56:c.instructions+=66;goto B712e56;
case 0x712e59:c.instructions+=65;goto B712e59;
case 0x712e5c:c.instructions+=64;goto B712e5c;
case 0x712e5f:c.instructions+=63;goto B712e5f;
case 0x712e62:c.instructions+=62;goto B712e62;
case 0x712e65:c.instructions+=61;goto B712e65;
case 0x712e68:c.instructions+=60;goto B712e68;
case 0x712e6b:c.instructions+=59;goto B712e6b;
case 0x712e6e:c.instructions+=58;goto B712e6e;
case 0x712e71:c.instructions+=57;goto B712e71;
case 0x712e74:c.instructions+=56;goto B712e74;
case 0x712e77:c.instructions+=55;goto B712e77;
case 0x712e7a:c.instructions+=54;goto B712e7a;
case 0x712e7e:c.instructions+=53;goto B712e7e;
case 0x712e81:c.instructions+=52;goto B712e81;
case 0x712e85:c.instructions+=51;goto B712e85;
case 0x712e88:c.instructions+=50;goto B712e88;
case 0x712e8b:c.instructions+=49;goto B712e8b;
case 0x712e8f:c.instructions+=48;goto B712e8f;
case 0x712e92:c.instructions+=47;goto B712e92;
case 0x712e96:c.instructions+=46;goto B712e96;
case 0x712e97:c.instructions+=45;goto B712e97;
case 0x712e98:c.instructions+=44;goto B712e98;
case 0x712e99:c.instructions+=43;goto B712e99;
case 0x712e9a:c.instructions+=42;goto B712e9a;
case 0x712e9b:c.instructions+=41;goto B712e9b;
case 0x712e9c:c.instructions+=40;goto B712e9c;
case 0x712ea0:c.instructions+=39;goto B712ea0;
case 0x712ea4:c.instructions+=38;goto B712ea4;
case 0x712ea6:c.instructions+=37;goto B712ea6;
case 0x712eaa:c.instructions+=36;goto B712eaa;
case 0x712ead:c.instructions+=35;goto B712ead;
case 0x712eb0:c.instructions+=34;goto B712eb0;
case 0x712eb3:c.instructions+=33;goto B712eb3;
case 0x712eb5:c.instructions+=32;goto B712eb5;
case 0x712eb9:c.instructions+=31;goto B712eb9;
case 0x712ebb:c.instructions+=30;goto B712ebb;
case 0x712ebf:c.instructions+=29;goto B712ebf;
case 0x712ec1:c.instructions+=28;goto B712ec1;
case 0x712ec5:c.instructions+=27;goto B712ec5;
case 0x712ec7:c.instructions+=26;goto B712ec7;
case 0x712ecb:c.instructions+=25;goto B712ecb;
case 0x712ecf:c.instructions+=24;goto B712ecf;
case 0x712ed1:c.instructions+=23;goto B712ed1;
case 0x712ed5:c.instructions+=22;goto B712ed5;
case 0x712ed7:c.instructions+=21;goto B712ed7;
case 0x712ed9:c.instructions+=20;goto B712ed9;
case 0x712edc:c.instructions+=19;goto B712edc;
case 0x712ee0:c.instructions+=18;goto B712ee0;
case 0x712ee2:c.instructions+=17;goto B712ee2;
case 0x712ee6:c.instructions+=16;goto B712ee6;
case 0x712ee8:c.instructions+=15;goto B712ee8;
case 0x712eec:c.instructions+=14;goto B712eec;
case 0x712eee:c.instructions+=13;goto B712eee;
case 0x712ef2:c.instructions+=12;goto B712ef2;
case 0x712ef4:c.instructions+=11;goto B712ef4;
case 0x712ef8:c.instructions+=10;goto B712ef8;
case 0x712efa:c.instructions+=9;goto B712efa;
case 0x712efe:c.instructions+=8;goto B712efe;
case 0x712f00:c.instructions+=7;goto B712f00;
case 0x712f04:c.instructions+=6;goto B712f04;
case 0x712f06:c.instructions+=5;goto B712f06;
case 0x712f0a:c.instructions+=4;goto B712f0a;
case 0x712f0c:c.instructions+=3;goto B712f0c;
case 0x712f0e:c.instructions+=2;goto B712f0e;
case 0x712f11:c.instructions+=1;goto B712f11;
case 0x712f14:goto L712f14;
case 0x712f18:c.instructions+=8;goto B712f18;
case 0x712f1a:c.instructions+=7;goto B712f1a;
case 0x712f1b:c.instructions+=6;goto B712f1b;
case 0x712f1e:c.instructions+=5;goto B712f1e;
case 0x712f21:c.instructions+=4;goto B712f21;
case 0x712f24:c.instructions+=3;goto B712f24;
case 0x712f27:c.instructions+=2;goto B712f27;
case 0x712f2d:c.instructions+=1;goto B712f2d;
case 0x712f33:goto L712f33;
case 0x712f34:c.instructions+=6;goto B712f34;
case 0x712f35:c.instructions+=5;goto B712f35;
case 0x712f37:c.instructions+=4;goto B712f37;
case 0x712f38:c.instructions+=3;goto B712f38;
case 0x712f3a:c.instructions+=2;goto B712f3a;
case 0x712f3b:c.instructions+=1;goto B712f3b;
case 0x712f3c:goto L712f3c;
case 0x712f3d:c.instructions+=39;goto B712f3d;
case 0x712f3f:c.instructions+=38;goto B712f3f;
case 0x712f40:c.instructions+=37;goto B712f40;
case 0x712f41:c.instructions+=36;goto B712f41;
case 0x712f44:c.instructions+=35;goto B712f44;
case 0x712f47:c.instructions+=34;goto B712f47;
case 0x712f48:c.instructions+=33;goto B712f48;
case 0x712f4b:c.instructions+=32;goto B712f4b;
case 0x712f4f:c.instructions+=31;goto B712f4f;
case 0x712f51:c.instructions+=30;goto B712f51;
case 0x712f57:c.instructions+=29;goto B712f57;
case 0x712f59:c.instructions+=28;goto B712f59;
case 0x712f5b:c.instructions+=27;goto B712f5b;
case 0x712f5c:c.instructions+=26;goto B712f5c;
case 0x712f5d:c.instructions+=25;goto B712f5d;
case 0x712f64:c.instructions+=24;goto B712f64;
case 0x712f6a:c.instructions+=23;goto B712f6a;
case 0x712f71:c.instructions+=22;goto B712f71;
case 0x712f78:c.instructions+=21;goto B712f78;
case 0x712f7e:c.instructions+=20;goto B712f7e;
case 0x712f84:c.instructions+=19;goto B712f84;
case 0x712f8a:c.instructions+=18;goto B712f8a;
case 0x712f91:c.instructions+=17;goto B712f91;
case 0x712f98:c.instructions+=16;goto B712f98;
case 0x712f9f:c.instructions+=15;goto B712f9f;
case 0x712fa6:c.instructions+=14;goto B712fa6;
case 0x712fad:c.instructions+=13;goto B712fad;
case 0x712fb4:c.instructions+=12;goto B712fb4;
case 0x712fba:c.instructions+=11;goto B712fba;
case 0x712fc0:c.instructions+=10;goto B712fc0;
case 0x712fc7:c.instructions+=9;goto B712fc7;
case 0x712fce:c.instructions+=8;goto B712fce;
case 0x712fd4:c.instructions+=7;goto B712fd4;
case 0x712fdb:c.instructions+=6;goto B712fdb;
case 0x712fe2:c.instructions+=5;goto B712fe2;
case 0x712fe9:c.instructions+=4;goto B712fe9;
case 0x712fef:c.instructions+=3;goto B712fef;
case 0x712ff6:c.instructions+=2;goto B712ff6;
case 0x712ffd:c.instructions+=1;goto B712ffd;
default:missing_instruction(c.pc);}
B712001:L712001:{c.instructions+=1;NFSU2_TR(0x712001);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L712f33;}}
}
B712007:L712007:{c.instructions+=12;NFSU2_TR(0x712007);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71200a:{NFSU2_TR(0x71200a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B71200d:{NFSU2_TR(0x71200d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B712010:{NFSU2_TR(0x712010);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B712013:{NFSU2_TR(0x712013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B712016:{NFSU2_TR(0x712016);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B712019:{NFSU2_TR(0x712019);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B71201c:{NFSU2_TR(0x71201c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71201f:{NFSU2_TR(0x71201f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B712021:{NFSU2_TR(0x712021);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B712024:{NFSU2_TR(0x712024);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B712027:{NFSU2_TR(0x712027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71202a:L71202a:{c.instructions+=500;NFSU2_TR(0x71202a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71202d:{NFSU2_TR(0x71202d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B712030:{NFSU2_TR(0x712030);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B712033:{NFSU2_TR(0x712033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B712036:{NFSU2_TR(0x712036);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712037:{NFSU2_TR(0x712037);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712038:{NFSU2_TR(0x712038);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712039:{NFSU2_TR(0x712039);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71203a:{NFSU2_TR(0x71203a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71203b:{NFSU2_TR(0x71203b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71203c:{NFSU2_TR(0x71203c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71203f:{NFSU2_TR(0x71203f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B712041:{NFSU2_TR(0x712041);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B712044:{NFSU2_TR(0x712044);
w8(R+4432,u64(r4(R+0)));
}
B712047:{NFSU2_TR(0x712047);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71204a:{NFSU2_TR(0x71204a);
__builtin_memmove((R+4438),(R+4434),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4432),2);
}
B71204d:{NFSU2_TR(0x71204d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B712053:{NFSU2_TR(0x712053);
__builtin_memmove((R+4436),(R+4432),4);
}
B712056:{NFSU2_TR(0x712056);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B712058:{NFSU2_TR(0x712058);
__builtin_memmove((R+4448),(R+4432),8);
}
B71205b:{NFSU2_TR(0x71205b);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4438))));
}
B71205e:{NFSU2_TR(0x71205e);
w2(R+4448,u16(u32(r2(R+4448))+u32(r2(R+4432))));
w2(R+4450,u16(u32(r2(R+4450))+u32(r2(R+4434))));
w2(R+4452,u16(u32(r2(R+4452))+u32(r2(R+4436))));
w2(R+4454,u16(u32(r2(R+4454))+u32(r2(R+4438))));
}
B712061:{NFSU2_TR(0x712061);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4432),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B712064:{NFSU2_TR(0x712064);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712068:{NFSU2_TR(0x712068);
{wv<8>((R+4448),uo::psraw<8>(rv<8>((R+4448)),V(0x2ull)));}
}
B71206c:{NFSU2_TR(0x71206c);
u8 U[30];
__builtin_memmove((U+5),(R+4448),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4448),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4449),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4450),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4451),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4452),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4453),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4454),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4455),(U+21),1);
}
B71206f:{NFSU2_TR(0x71206f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B712075:{NFSU2_TR(0x712075);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B712078:{NFSU2_TR(0x712078);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175e0),8);
w1(R+4448,u8(u32(r1(R+4448))-u32(r1(U+0))));
w1(R+4449,u8(u32(r1(R+4449))-u32(r1(U+1))));
w1(R+4450,u8(u32(r1(R+4450))-u32(r1(U+2))));
w1(R+4451,u8(u32(r1(R+4451))-u32(r1(U+3))));
w1(R+4452,u8(u32(r1(R+4452))-u32(r1(U+4))));
w1(R+4453,u8(u32(r1(R+4453))-u32(r1(U+5))));
w1(R+4454,u8(u32(r1(R+4454))-u32(r1(U+6))));
w1(R+4455,u8(u32(r1(R+4455))-u32(r1(U+7))));
}
B71207f:{NFSU2_TR(0x71207f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B712082:{NFSU2_TR(0x712082);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B712086:{NFSU2_TR(0x712086);
__builtin_memmove((R+4368),(R+4352),8);
}
B712089:{NFSU2_TR(0x712089);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71208c:{NFSU2_TR(0x71208c);
__builtin_memmove((R+4416),(R+4368),8);
}
B71208f:{NFSU2_TR(0x71208f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712096:{NFSU2_TR(0x712096);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B712099:{NFSU2_TR(0x712099);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B71209c:{NFSU2_TR(0x71209c);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B71209f:{NFSU2_TR(0x71209f);
__builtin_memmove((R+4432),(R+4384),8);
}
B7120a2:{NFSU2_TR(0x7120a2);
__builtin_memmove((R+4400),(R+4384),8);
}
B7120a5:{NFSU2_TR(0x7120a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7120a9:{NFSU2_TR(0x7120a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B7120ad:{NFSU2_TR(0x7120ad);
{wv<8>((R+4432),uo::psubusb<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B7120b0:{NFSU2_TR(0x7120b0);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B7120b3:{NFSU2_TR(0x7120b3);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7120b6:{NFSU2_TR(0x7120b6);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4432))));
}
B7120b9:{NFSU2_TR(0x7120b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7120bd:{NFSU2_TR(0x7120bd);
__builtin_memmove((R+4448),(R+4400),8);
}
B7120c0:{NFSU2_TR(0x7120c0);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7120c3:{NFSU2_TR(0x7120c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7120c7:{NFSU2_TR(0x7120c7);
__builtin_memmove((R+4368),(R+4352),8);
}
B7120ca:{NFSU2_TR(0x7120ca);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B7120cd:{NFSU2_TR(0x7120cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7120d1:{NFSU2_TR(0x7120d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B7120d5:{NFSU2_TR(0x7120d5);
__builtin_memmove((R+4432),(R+4368),8);
}
B7120d8:{NFSU2_TR(0x7120d8);
{wv<8>((R+4432),uo::psubusb<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B7120db:{NFSU2_TR(0x7120db);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B7120de:{NFSU2_TR(0x7120de);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4448))));
}
B7120e1:{NFSU2_TR(0x7120e1);
__builtin_memmove((R+4448),(R+4368),8);
}
B7120e4:{NFSU2_TR(0x7120e4);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B7120e7:{NFSU2_TR(0x7120e7);
__builtin_memmove((R+4400),(R+4384),8);
}
B7120ea:{NFSU2_TR(0x7120ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7120ee:{NFSU2_TR(0x7120ee);
{wv<8>((R+4416),uo::paddusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B7120f1:{NFSU2_TR(0x7120f1);
__builtin_memmove((R+4432),(R+4384),8);
}
B7120f4:{NFSU2_TR(0x7120f4);
{wv<8>((R+4432),uo::psubusb<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B7120f7:{NFSU2_TR(0x7120f7);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7120fa:{NFSU2_TR(0x7120fa);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4448))));
}
B7120fd:{NFSU2_TR(0x7120fd);
__builtin_memmove((R+4448),(R+4384),8);
}
B712100:{NFSU2_TR(0x712100);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B712103:{NFSU2_TR(0x712103);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B712106:{NFSU2_TR(0x712106);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B712109:{NFSU2_TR(0x712109);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B71210d:{NFSU2_TR(0x71210d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712111:{NFSU2_TR(0x712111);
{wv<8>((R+4416),uo::paddusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B712114:{NFSU2_TR(0x712114);
__builtin_memmove((R+4432),(R+4352),8);
}
B712117:{NFSU2_TR(0x712117);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71211b:{NFSU2_TR(0x71211b);
__builtin_memmove((R+4368),(R+4352),8);
}
B71211e:{NFSU2_TR(0x71211e);
{wv<8>((R+4432),uo::psubusb<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B712121:{NFSU2_TR(0x712121);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B712124:{NFSU2_TR(0x712124);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B712127:{NFSU2_TR(0x712127);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4448))));
}
B71212a:{NFSU2_TR(0x71212a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71212e:{NFSU2_TR(0x71212e);
__builtin_memmove((R+4448),(R+4368),8);
}
B712131:{NFSU2_TR(0x712131);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B712134:{NFSU2_TR(0x712134);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712138:{NFSU2_TR(0x712138);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71213b:{NFSU2_TR(0x71213b);
{wv<8>((R+4416),uo::paddusb<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B71213e:{NFSU2_TR(0x71213e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712142:{NFSU2_TR(0x712142);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712149:{NFSU2_TR(0x712149);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175e0),8);
w1(R+4416,u8(u32(r1(R+4416))-u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))-u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))-u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))-u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))-u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))-u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))-u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))-u32(r1(U+7))));
}
B712150:{NFSU2_TR(0x712150);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4432))));
w1(R+4432,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4433))));
w1(R+4433,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4434))));
w1(R+4434,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4435))));
w1(R+4435,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4436))));
w1(R+4436,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4437))));
w1(R+4437,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4438))));
w1(R+4438,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4439))));
w1(R+4439,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B712153:{NFSU2_TR(0x712153);
__builtin_memmove((R+4368),(R+4352),8);
}
B712156:{NFSU2_TR(0x712156);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B712159:{NFSU2_TR(0x712159);
__builtin_memmove((R+4416),(R+4368),8);
}
B71215c:{NFSU2_TR(0x71215c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712160:{NFSU2_TR(0x712160);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B712163:{NFSU2_TR(0x712163);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B712166:{NFSU2_TR(0x712166);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4352),(U+8),8);
}
B71216a:{NFSU2_TR(0x71216a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71216e:{NFSU2_TR(0x71216e);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4448))));
}
B712171:{NFSU2_TR(0x712171);
__builtin_memmove((R+4448),(R+4368),8);
}
B712174:{NFSU2_TR(0x712174);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175e0),8);
w1(R+4400,u8(u32(r1(R+4400))-u32(r1(U+0))));
w1(R+4401,u8(u32(r1(R+4401))-u32(r1(U+1))));
w1(R+4402,u8(u32(r1(R+4402))-u32(r1(U+2))));
w1(R+4403,u8(u32(r1(R+4403))-u32(r1(U+3))));
w1(R+4404,u8(u32(r1(R+4404))-u32(r1(U+4))));
w1(R+4405,u8(u32(r1(R+4405))-u32(r1(U+5))));
w1(R+4406,u8(u32(r1(R+4406))-u32(r1(U+6))));
w1(R+4407,u8(u32(r1(R+4407))-u32(r1(U+7))));
}
B71217b:{NFSU2_TR(0x71217b);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175e0),8);
w1(R+4416,u8(u32(r1(R+4416))-u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))-u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))-u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))-u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))-u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))-u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))-u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))-u32(r1(U+7))));
}
B712182:{NFSU2_TR(0x712182);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4400))));
w1(R+4400,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4401))));
w1(R+4401,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4402))));
w1(R+4402,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4403))));
w1(R+4403,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4404))));
w1(R+4404,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4405))));
w1(R+4405,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4406))));
w1(R+4406,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4407))));
w1(R+4407,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B712185:{NFSU2_TR(0x712185);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B712188:{NFSU2_TR(0x712188);
__builtin_memmove((R+4416),(R+4352),8);
}
B71218b:{NFSU2_TR(0x71218b);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(R+4400))));
}
B71218e:{NFSU2_TR(0x71218e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712192:{NFSU2_TR(0x712192);
__builtin_memmove((R+4368),(R+4352),8);
}
B712195:{NFSU2_TR(0x712195);
{wv<8>((R+4416),uo::psubusb<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B712198:{NFSU2_TR(0x712198);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B71219b:{NFSU2_TR(0x71219b);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71219e:{NFSU2_TR(0x71219e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7121a2:{NFSU2_TR(0x7121a2);
w8(R+4416,u64(u64(r8(R+4416))|u64(r8(R+4448))));
}
B7121a5:{NFSU2_TR(0x7121a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B7121a9:{NFSU2_TR(0x7121a9);
__builtin_memmove((R+4448),(R+4368),8);
}
B7121ac:{NFSU2_TR(0x7121ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7121af:{NFSU2_TR(0x7121af);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B7121b2:{NFSU2_TR(0x7121b2);
__builtin_memmove((R+4352),(R+4384),8);
}
B7121b5:{NFSU2_TR(0x7121b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7121b9:{NFSU2_TR(0x7121b9);
__builtin_memmove((R+4400),(R+4352),8);
}
B7121bc:{NFSU2_TR(0x7121bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B7121c0:{NFSU2_TR(0x7121c0);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7121c3:{NFSU2_TR(0x7121c3);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B7121c6:{NFSU2_TR(0x7121c6);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B7121c9:{NFSU2_TR(0x7121c9);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4448))));
}
B7121cc:{NFSU2_TR(0x7121cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7121d0:{NFSU2_TR(0x7121d0);
__builtin_memmove((R+4448),(R+4352),8);
}
B7121d3:{NFSU2_TR(0x7121d3);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B7121d6:{NFSU2_TR(0x7121d6);
{wv<8>((R+4416),uo::paddusb<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B7121d9:{NFSU2_TR(0x7121d9);
__builtin_memmove((R+4384),(R+4368),8);
}
B7121dc:{NFSU2_TR(0x7121dc);
__builtin_memmove((R+4400),(R+4368),8);
}
B7121df:{NFSU2_TR(0x7121df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7121e3:{NFSU2_TR(0x7121e3);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B7121e6:{NFSU2_TR(0x7121e6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7121e9:{NFSU2_TR(0x7121e9);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B7121ec:{NFSU2_TR(0x7121ec);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B7121ef:{NFSU2_TR(0x7121ef);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4448))));
}
B7121f2:{NFSU2_TR(0x7121f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7121f9:{NFSU2_TR(0x7121f9);
__builtin_memmove((R+4448),(R+4384),8);
}
B7121fc:{NFSU2_TR(0x7121fc);
__builtin_memmove((R+4384),(R+4388),1);
__builtin_memmove((R+4385),(R+4468),1);
__builtin_memmove((R+4386),(R+4389),1);
__builtin_memmove((R+4387),(R+4469),1);
__builtin_memmove((R+4388),(R+4390),1);
__builtin_memmove((R+4389),(R+4470),1);
__builtin_memmove((R+4390),(R+4391),1);
__builtin_memmove((R+4391),(R+4471),1);
}
B7121ff:{NFSU2_TR(0x7121ff);
{wv<8>((R+4416),uo::paddusb<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B712202:{NFSU2_TR(0x712202);
__builtin_memmove((R+4368),(R+4352),8);
}
B712205:{NFSU2_TR(0x712205);
__builtin_memmove((R+4400),(R+4352),8);
}
B712208:{NFSU2_TR(0x712208);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71220f:{NFSU2_TR(0x71220f);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B712212:{NFSU2_TR(0x712212);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B712215:{NFSU2_TR(0x712215);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71221c:{NFSU2_TR(0x71221c);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B71221f:{NFSU2_TR(0x71221f);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4448))));
}
B712222:{NFSU2_TR(0x712222);
__builtin_memmove((R+4368),(R+4372),1);
__builtin_memmove((R+4369),(R+4468),1);
__builtin_memmove((R+4370),(R+4373),1);
__builtin_memmove((R+4371),(R+4469),1);
__builtin_memmove((R+4372),(R+4374),1);
__builtin_memmove((R+4373),(R+4470),1);
__builtin_memmove((R+4374),(R+4375),1);
__builtin_memmove((R+4375),(R+4471),1);
}
B712225:{NFSU2_TR(0x712225);
{wv<8>((R+4416),uo::paddusb<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B712228:{NFSU2_TR(0x712228);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71222c:{NFSU2_TR(0x71222c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B712233:{NFSU2_TR(0x712233);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175e0),8);
w1(R+4416,u8(u32(r1(R+4416))-u32(r1(U+0))));
w1(R+4417,u8(u32(r1(R+4417))-u32(r1(U+1))));
w1(R+4418,u8(u32(r1(R+4418))-u32(r1(U+2))));
w1(R+4419,u8(u32(r1(R+4419))-u32(r1(U+3))));
w1(R+4420,u8(u32(r1(R+4420))-u32(r1(U+4))));
w1(R+4421,u8(u32(r1(R+4421))-u32(r1(U+5))));
w1(R+4422,u8(u32(r1(R+4422))-u32(r1(U+6))));
w1(R+4423,u8(u32(r1(R+4423))-u32(r1(U+7))));
}
B71223a:{NFSU2_TR(0x71223a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712241:{NFSU2_TR(0x712241);
u8 U[8];
w1(U+0,u8(s8(r1(R+4416))<s8(r1(R+4448))));
w1(R+4448,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4417))<s8(r1(R+4449))));
w1(R+4449,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4418))<s8(r1(R+4450))));
w1(R+4450,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4419))<s8(r1(R+4451))));
w1(R+4451,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4420))<s8(r1(R+4452))));
w1(R+4452,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4421))<s8(r1(R+4453))));
w1(R+4453,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4422))<s8(r1(R+4454))));
w1(R+4454,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4423))<s8(r1(R+4455))));
w1(R+4455,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B712244:{NFSU2_TR(0x712244);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4432))));
}
B712247:{NFSU2_TR(0x712247);
__builtin_memmove((R+4352),(R+4448),8);
}
B71224a:{NFSU2_TR(0x71224a);
__builtin_memmove((R+4464),(R+4448),8);
}
B71224d:{NFSU2_TR(0x71224d);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4452),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4453),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4454),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4455),1);
}
B712250:{NFSU2_TR(0x712250);
__builtin_memmove((R+4471),(R+4451),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4450),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4449),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4448),1);
}
B712253:{NFSU2_TR(0x712253);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712257:{NFSU2_TR(0x712257);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71225b:{NFSU2_TR(0x71225b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B71225f:{NFSU2_TR(0x71225f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712263:{NFSU2_TR(0x712263);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B712267:{NFSU2_TR(0x712267);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4422))));
}
B71226a:{NFSU2_TR(0x71226a);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4454))));
}
B71226d:{NFSU2_TR(0x71226d);
__builtin_memmove((R+4416),(R+4432),8);
}
B712270:{NFSU2_TR(0x712270);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712273:{NFSU2_TR(0x712273);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B71227a:{NFSU2_TR(0x71227a);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4422))));
}
B71227d:{NFSU2_TR(0x71227d);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B712280:{NFSU2_TR(0x712280);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B712284:{NFSU2_TR(0x712284);
__builtin_memmove((R+4384),(R+4400),8);
}
B712287:{NFSU2_TR(0x712287);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B71228b:{NFSU2_TR(0x71228b);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4400))));
}
B71228e:{NFSU2_TR(0x71228e);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B712291:{NFSU2_TR(0x712291);
w8(R+4400,u64(u64(r8(R+4400))|u64(m8(0x8175d0))));
}
B712298:{NFSU2_TR(0x712298);
__builtin_memmove((R+4416),(R+4368),8);
}
B71229b:{NFSU2_TR(0x71229b);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B71229e:{NFSU2_TR(0x71229e);
__builtin_memmove((R+4432),(R+4368),8);
}
B7122a1:{NFSU2_TR(0x7122a1);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B7122a5:{NFSU2_TR(0x7122a5);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4368))));
}
B7122a8:{NFSU2_TR(0x7122a8);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B7122ab:{NFSU2_TR(0x7122ab);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B7122ae:{NFSU2_TR(0x7122ae);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B7122b1:{NFSU2_TR(0x7122b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7122b5:{NFSU2_TR(0x7122b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7122b9:{NFSU2_TR(0x7122b9);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B7122bc:{NFSU2_TR(0x7122bc);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4422))));
}
B7122bf:{NFSU2_TR(0x7122bf);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B7122c2:{NFSU2_TR(0x7122c2);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B7122c5:{NFSU2_TR(0x7122c5);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B7122c8:{NFSU2_TR(0x7122c8);
__builtin_memmove((R+4375),(R+4451),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4450),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4449),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4448),1);
}
B7122cb:{NFSU2_TR(0x7122cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7122d2:{NFSU2_TR(0x7122d2);
__builtin_memmove((R+4391),(R+4451),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4450),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4449),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4448),1);
}
B7122d5:{NFSU2_TR(0x7122d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7122dc:{NFSU2_TR(0x7122dc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B7122df:{NFSU2_TR(0x7122df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7122e6:{NFSU2_TR(0x7122e6);
__builtin_memmove((R+4368),(R+4400),8);
}
B7122e9:{NFSU2_TR(0x7122e9);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B7122ec:{NFSU2_TR(0x7122ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7122f0:{NFSU2_TR(0x7122f0);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B7122f3:{NFSU2_TR(0x7122f3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7122f7:{NFSU2_TR(0x7122f7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7122fb:{NFSU2_TR(0x7122fb);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7122ff:{NFSU2_TR(0x7122ff);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B712306:{NFSU2_TR(0x712306);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B712309:{NFSU2_TR(0x712309);
__builtin_memmove((R+4416),(R+4400),8);
}
B71230c:{NFSU2_TR(0x71230c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712310:{NFSU2_TR(0x712310);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712313:{NFSU2_TR(0x712313);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712317:{NFSU2_TR(0x712317);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71231a:{NFSU2_TR(0x71231a);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B71231d:{NFSU2_TR(0x71231d);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712320:{NFSU2_TR(0x712320);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B712323:{NFSU2_TR(0x712323);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712327:{NFSU2_TR(0x712327);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B71232a:{NFSU2_TR(0x71232a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B71232e:{NFSU2_TR(0x71232e);
__builtin_memmove((R+4416),(R+4432),8);
}
B712331:{NFSU2_TR(0x712331);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712334:{NFSU2_TR(0x712334);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712338:{NFSU2_TR(0x712338);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71233b:{NFSU2_TR(0x71233b);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B71233e:{NFSU2_TR(0x71233e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712341:{NFSU2_TR(0x712341);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712345:{NFSU2_TR(0x712345);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712349:{NFSU2_TR(0x712349);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B71234c:{NFSU2_TR(0x71234c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712350:{NFSU2_TR(0x712350);
__builtin_memmove((R+4416),(R+4432),8);
}
B712353:{NFSU2_TR(0x712353);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712356:{NFSU2_TR(0x712356);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B71235a:{NFSU2_TR(0x71235a);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71235d:{NFSU2_TR(0x71235d);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B712360:{NFSU2_TR(0x712360);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712363:{NFSU2_TR(0x712363);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712367:{NFSU2_TR(0x712367);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71236b:{NFSU2_TR(0x71236b);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B71236e:{NFSU2_TR(0x71236e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712372:{NFSU2_TR(0x712372);
__builtin_memmove((R+4416),(R+4432),8);
}
B712375:{NFSU2_TR(0x712375);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712378:{NFSU2_TR(0x712378);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71237f:{NFSU2_TR(0x71237f);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712383:{NFSU2_TR(0x712383);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712386:{NFSU2_TR(0x712386);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B712389:{NFSU2_TR(0x712389);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71238c:{NFSU2_TR(0x71238c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712390:{NFSU2_TR(0x712390);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712394:{NFSU2_TR(0x712394);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B712398:{NFSU2_TR(0x712398);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B71239f:{NFSU2_TR(0x71239f);
__builtin_memmove((R+4416),(R+4432),8);
}
B7123a2:{NFSU2_TR(0x7123a2);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7123a5:{NFSU2_TR(0x7123a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7123ac:{NFSU2_TR(0x7123ac);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B7123b0:{NFSU2_TR(0x7123b0);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7123b3:{NFSU2_TR(0x7123b3);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7123b6:{NFSU2_TR(0x7123b6);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7123b9:{NFSU2_TR(0x7123b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7123bd:{NFSU2_TR(0x7123bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7123c1:{NFSU2_TR(0x7123c1);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B7123c5:{NFSU2_TR(0x7123c5);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7123c8:{NFSU2_TR(0x7123c8);
__builtin_memmove((R+4416),(R+4432),8);
}
B7123cb:{NFSU2_TR(0x7123cb);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7123ce:{NFSU2_TR(0x7123ce);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B7123d2:{NFSU2_TR(0x7123d2);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7123d5:{NFSU2_TR(0x7123d5);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7123d8:{NFSU2_TR(0x7123d8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7123db:{NFSU2_TR(0x7123db);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7123df:{NFSU2_TR(0x7123df);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7123e3:{NFSU2_TR(0x7123e3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B7123e7:{NFSU2_TR(0x7123e7);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7123ea:{NFSU2_TR(0x7123ea);
__builtin_memmove((R+4416),(R+4432),8);
}
B7123ed:{NFSU2_TR(0x7123ed);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7123f0:{NFSU2_TR(0x7123f0);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B7123f4:{NFSU2_TR(0x7123f4);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7123f7:{NFSU2_TR(0x7123f7);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B7123fa:{NFSU2_TR(0x7123fa);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7123fd:{NFSU2_TR(0x7123fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712401:{NFSU2_TR(0x712401);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712408:{NFSU2_TR(0x712408);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B71240c:{NFSU2_TR(0x71240c);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B71240f:{NFSU2_TR(0x71240f);
__builtin_memmove((R+4416),(R+4432),8);
}
B712412:{NFSU2_TR(0x712412);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712415:{NFSU2_TR(0x712415);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712419:{NFSU2_TR(0x712419);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71241c:{NFSU2_TR(0x71241c);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B71241f:{NFSU2_TR(0x71241f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712422:{NFSU2_TR(0x712422);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712426:{NFSU2_TR(0x712426);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B712429:{NFSU2_TR(0x712429);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B71242c:{NFSU2_TR(0x71242c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712430:{NFSU2_TR(0x712430);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B712434:{NFSU2_TR(0x712434);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B712438:{NFSU2_TR(0x712438);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71243c:{NFSU2_TR(0x71243c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B712440:{NFSU2_TR(0x712440);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4422))));
}
B712443:{NFSU2_TR(0x712443);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4454))));
}
B712446:{NFSU2_TR(0x712446);
__builtin_memmove((R+4416),(R+4432),8);
}
B712449:{NFSU2_TR(0x712449);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B712450:{NFSU2_TR(0x712450);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4416))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4418))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4420))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4422))));
}
B712453:{NFSU2_TR(0x712453);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B712456:{NFSU2_TR(0x712456);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B712459:{NFSU2_TR(0x712459);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B71245d:{NFSU2_TR(0x71245d);
__builtin_memmove((R+4384),(R+4400),8);
}
B712460:{NFSU2_TR(0x712460);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B712464:{NFSU2_TR(0x712464);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4400))));
}
B712467:{NFSU2_TR(0x712467);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B71246a:{NFSU2_TR(0x71246a);
w8(R+4400,u64(u64(r8(R+4400))|u64(m8(0x8175d0))));
}
B712471:{NFSU2_TR(0x712471);
__builtin_memmove((R+4416),(R+4368),8);
}
B712474:{NFSU2_TR(0x712474);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B712477:{NFSU2_TR(0x712477);
__builtin_memmove((R+4432),(R+4368),8);
}
B71247a:{NFSU2_TR(0x71247a);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B71247e:{NFSU2_TR(0x71247e);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4368))));
}
B712481:{NFSU2_TR(0x712481);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B712484:{NFSU2_TR(0x712484);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B712487:{NFSU2_TR(0x712487);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B71248a:{NFSU2_TR(0x71248a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71248e:{NFSU2_TR(0x71248e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712492:{NFSU2_TR(0x712492);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B712495:{NFSU2_TR(0x712495);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4422))));
}
B712498:{NFSU2_TR(0x712498);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B71249b:{NFSU2_TR(0x71249b);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B71249e:{NFSU2_TR(0x71249e);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B7124a1:{NFSU2_TR(0x7124a1);
__builtin_memmove((R+4375),(R+4451),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4450),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4449),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4448),1);
}
B7124a4:{NFSU2_TR(0x7124a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7124ab:{NFSU2_TR(0x7124ab);
__builtin_memmove((R+4391),(R+4451),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4450),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4449),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4448),1);
}
B7124ae:{NFSU2_TR(0x7124ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7124b5:{NFSU2_TR(0x7124b5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B7124b8:{NFSU2_TR(0x7124b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B7124bf:{NFSU2_TR(0x7124bf);
__builtin_memmove((R+4368),(R+4400),8);
}
B7124c2:{NFSU2_TR(0x7124c2);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B7124c5:{NFSU2_TR(0x7124c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7124c9:{NFSU2_TR(0x7124c9);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B7124cc:{NFSU2_TR(0x7124cc);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7124d0:{NFSU2_TR(0x7124d0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B7124d4:{NFSU2_TR(0x7124d4);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B7124d8:{NFSU2_TR(0x7124d8);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B7124df:{NFSU2_TR(0x7124df);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B7124e2:{NFSU2_TR(0x7124e2);
__builtin_memmove((R+4416),(R+4400),8);
}
B7124e5:{NFSU2_TR(0x7124e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7124e9:{NFSU2_TR(0x7124e9);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7124ec:{NFSU2_TR(0x7124ec);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B7124f0:{NFSU2_TR(0x7124f0);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7124f3:{NFSU2_TR(0x7124f3);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B7124f6:{NFSU2_TR(0x7124f6);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7124f9:{NFSU2_TR(0x7124f9);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B7124fc:{NFSU2_TR(0x7124fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712500:{NFSU2_TR(0x712500);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B712503:{NFSU2_TR(0x712503);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712507:{NFSU2_TR(0x712507);
__builtin_memmove((R+4416),(R+4432),8);
}
B71250a:{NFSU2_TR(0x71250a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71250d:{NFSU2_TR(0x71250d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712511:{NFSU2_TR(0x712511);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712514:{NFSU2_TR(0x712514);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712517:{NFSU2_TR(0x712517);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71251a:{NFSU2_TR(0x71251a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71251e:{NFSU2_TR(0x71251e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712522:{NFSU2_TR(0x712522);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B712525:{NFSU2_TR(0x712525);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712529:{NFSU2_TR(0x712529);
__builtin_memmove((R+4416),(R+4432),8);
}
B71252c:{NFSU2_TR(0x71252c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71252f:{NFSU2_TR(0x71252f);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712533:{NFSU2_TR(0x712533);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712536:{NFSU2_TR(0x712536);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712539:{NFSU2_TR(0x712539);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B71253c:{NFSU2_TR(0x71253c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712540:{NFSU2_TR(0x712540);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712544:{NFSU2_TR(0x712544);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B712547:{NFSU2_TR(0x712547);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B71254b:{NFSU2_TR(0x71254b);
__builtin_memmove((R+4416),(R+4432),8);
}
B71254e:{NFSU2_TR(0x71254e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712551:{NFSU2_TR(0x712551);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712558:{NFSU2_TR(0x712558);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B71255c:{NFSU2_TR(0x71255c);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71255f:{NFSU2_TR(0x71255f);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712562:{NFSU2_TR(0x712562);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712565:{NFSU2_TR(0x712565);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712569:{NFSU2_TR(0x712569);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71256d:{NFSU2_TR(0x71256d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B712571:{NFSU2_TR(0x712571);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712578:{NFSU2_TR(0x712578);
__builtin_memmove((R+4416),(R+4432),8);
}
B71257b:{NFSU2_TR(0x71257b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B71257e:{NFSU2_TR(0x71257e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712585:{NFSU2_TR(0x712585);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712589:{NFSU2_TR(0x712589);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B71258c:{NFSU2_TR(0x71258c);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B71258f:{NFSU2_TR(0x71258f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712592:{NFSU2_TR(0x712592);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712596:{NFSU2_TR(0x712596);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B71259a:{NFSU2_TR(0x71259a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B71259e:{NFSU2_TR(0x71259e);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7125a1:{NFSU2_TR(0x7125a1);
__builtin_memmove((R+4416),(R+4432),8);
}
B7125a4:{NFSU2_TR(0x7125a4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7125a7:{NFSU2_TR(0x7125a7);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B7125ab:{NFSU2_TR(0x7125ab);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7125ae:{NFSU2_TR(0x7125ae);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B7125b1:{NFSU2_TR(0x7125b1);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7125b4:{NFSU2_TR(0x7125b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7125b8:{NFSU2_TR(0x7125b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7125bc:{NFSU2_TR(0x7125bc);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B7125c0:{NFSU2_TR(0x7125c0);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7125c3:{NFSU2_TR(0x7125c3);
__builtin_memmove((R+4416),(R+4432),8);
}
B7125c6:{NFSU2_TR(0x7125c6);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7125c9:{NFSU2_TR(0x7125c9);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B7125cd:{NFSU2_TR(0x7125cd);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7125d0:{NFSU2_TR(0x7125d0);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B7125d3:{NFSU2_TR(0x7125d3);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7125d6:{NFSU2_TR(0x7125d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7125da:{NFSU2_TR(0x7125da);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7125e1:{NFSU2_TR(0x7125e1);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B7125e5:{NFSU2_TR(0x7125e5);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B7125e8:{NFSU2_TR(0x7125e8);
__builtin_memmove((R+4416),(R+4432),8);
}
B7125eb:{NFSU2_TR(0x7125eb);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B7125ee:{NFSU2_TR(0x7125ee);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B7125f2:{NFSU2_TR(0x7125f2);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B7125f5:{NFSU2_TR(0x7125f5);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B7125f8:{NFSU2_TR(0x7125f8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7125fb:{NFSU2_TR(0x7125fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7125ff:{NFSU2_TR(0x7125ff);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B712602:{NFSU2_TR(0x712602);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8ull))));
}
B712605:{NFSU2_TR(0x712605);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B712608:{NFSU2_TR(0x712608);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B71260c:{NFSU2_TR(0x71260c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71260f:{NFSU2_TR(0x71260f);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+17),(R+4352),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4352),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4353),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4354),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4355),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4356),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4357),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4358),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4359),(U+33),1);
}
B712613:{NFSU2_TR(0x712613);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+20)),r8(U+0));
}
B712617:{NFSU2_TR(0x712617);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71261b:{NFSU2_TR(0x71261b);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+17),(R+4368),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4368),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4369),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4370),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4371),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4372),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4373),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4374),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4375),(U+33),1);
}
B71261f:{NFSU2_TR(0x71261f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712624:{NFSU2_TR(0x712624);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712628:{NFSU2_TR(0x712628);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+17),(R+4384),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4384),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4385),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4386),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4387),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4388),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4389),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4390),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4391),(U+33),1);
}
B71262c:{NFSU2_TR(0x71262c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712631:{NFSU2_TR(0x712631);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B712635:{NFSU2_TR(0x712635);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+17),(R+4400),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4400),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4401),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4402),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4403),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4404),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4405),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4406),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4407),(U+33),1);
}
B712639:{NFSU2_TR(0x712639);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B71263d:{NFSU2_TR(0x71263d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712642:{NFSU2_TR(0x712642);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B712646:{NFSU2_TR(0x712646);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+17),(R+4352),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4352),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4353),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4354),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4355),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4356),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4357),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4358),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4359),(U+33),1);
}
B71264a:{NFSU2_TR(0x71264a);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+20)),r8(U+0));
}
B71264e:{NFSU2_TR(0x71264e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712652:{NFSU2_TR(0x712652);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+17),(R+4368),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4368),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4369),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4370),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4371),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4372),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4373),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4374),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4375),(U+33),1);
}
B712656:{NFSU2_TR(0x712656);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4368),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71265b:{NFSU2_TR(0x71265b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B71265f:{NFSU2_TR(0x71265f);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+17),(R+4384),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4384),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4385),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4386),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4387),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4388),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4389),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4390),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4391),(U+33),1);
}
B712663:{NFSU2_TR(0x712663);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4384),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712668:{NFSU2_TR(0x712668);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71266c:{NFSU2_TR(0x71266c);
u8 U[42];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+17),(R+4400),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4400),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4401),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4402),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4403),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4404),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4405),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4406),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4407),(U+33),1);
}
B712670:{NFSU2_TR(0x712670);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B712674:{NFSU2_TR(0x712674);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4400),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712679:{NFSU2_TR(0x712679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71267a:{NFSU2_TR(0x71267a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71267b:{NFSU2_TR(0x71267b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B71267c:{NFSU2_TR(0x71267c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B71267d:{NFSU2_TR(0x71267d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71267e:{NFSU2_TR(0x71267e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B71267f:{NFSU2_TR(0x71267f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B712682:{NFSU2_TR(0x712682);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B712685:{NFSU2_TR(0x712685);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B712688:{NFSU2_TR(0x712688);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B71268c:{NFSU2_TR(0x71268c);
__builtin_memmove((R+0),(R+4),4);
}
B71268e:{NFSU2_TR(0x71268e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B712691:{NFSU2_TR(0x712691);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B712694:{NFSU2_TR(0x712694);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B712696:{NFSU2_TR(0x712696);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B71269a:{NFSU2_TR(0x71269a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71269c:{NFSU2_TR(0x71269c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7126a0:{NFSU2_TR(0x7126a0);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7126a2:{NFSU2_TR(0x7126a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7126a6:{NFSU2_TR(0x7126a6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7126a8:{NFSU2_TR(0x7126a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7126ac:{NFSU2_TR(0x7126ac);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7126ae:{NFSU2_TR(0x7126ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7126b2:{NFSU2_TR(0x7126b2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7126b4:{NFSU2_TR(0x7126b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7126b8:{NFSU2_TR(0x7126b8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7126ba:{NFSU2_TR(0x7126ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B7126be:{NFSU2_TR(0x7126be);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7126c0:{NFSU2_TR(0x7126c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+24))));
s4(u32(r4(R+0)),r4(U+0));
}
B7126c2:{NFSU2_TR(0x7126c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7126c5:{NFSU2_TR(0x7126c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7126c8:{NFSU2_TR(0x7126c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7126cc:{NFSU2_TR(0x7126cc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B7126ce:{NFSU2_TR(0x7126ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B7126d2:{NFSU2_TR(0x7126d2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B7126d4:{NFSU2_TR(0x7126d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7126d8:{NFSU2_TR(0x7126d8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B7126da:{NFSU2_TR(0x7126da);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7126de:{NFSU2_TR(0x7126de);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B7126e0:{NFSU2_TR(0x7126e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7126e4:{NFSU2_TR(0x7126e4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B7126e6:{NFSU2_TR(0x7126e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7126ea:{NFSU2_TR(0x7126ea);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B7126ec:{NFSU2_TR(0x7126ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7126f0:{NFSU2_TR(0x7126f0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B7126f2:{NFSU2_TR(0x7126f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B7126f6:{NFSU2_TR(0x7126f6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B7126f8:{NFSU2_TR(0x7126f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B7126fa:{NFSU2_TR(0x7126fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7126fd:{NFSU2_TR(0x7126fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L712708;}}
}
B7126ff:L7126ff:{c.instructions+=3;NFSU2_TR(0x7126ff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B712700:{NFSU2_TR(0x712700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B712703:{NFSU2_TR(0x712703);
{goto L712f14;}
}
B712708:L712708:{c.instructions+=5;NFSU2_TR(0x712708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71270b:{NFSU2_TR(0x71270b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B71270e:{NFSU2_TR(0x71270e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B712711:{NFSU2_TR(0x712711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B712714:{NFSU2_TR(0x712714);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B712716:L712716:{c.instructions+=8;NFSU2_TR(0x712716);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+8,u16(r1(U+4)));
}
B71271b:{NFSU2_TR(0x71271b);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffea0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B712723:{NFSU2_TR(0x712723);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w2(R+8,u16(r1(U+0)));
}
B712727:{NFSU2_TR(0x712727);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B71272a:{NFSU2_TR(0x71272a);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffff30ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B712732:{NFSU2_TR(0x712732);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B712733:{NFSU2_TR(0x712733);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B712736:{NFSU2_TR(0x712736);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x712716u);}goto L712716;}}
}
B712738:L712738:{c.instructions+=582;NFSU2_TR(0x712738);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712739:{NFSU2_TR(0x712739);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71273a:{NFSU2_TR(0x71273a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71273d:{NFSU2_TR(0x71273d);
w8(R+4352,u64(r4(R+0)));
}
B712740:{NFSU2_TR(0x712740);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712741:{NFSU2_TR(0x712741);
__builtin_memmove((R+4358),(R+4354),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4352),2);
}
B712744:{NFSU2_TR(0x712744);
__builtin_memmove((R+4356),(R+4352),4);
}
B712747:{NFSU2_TR(0x712747);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712748:{NFSU2_TR(0x712748);
__builtin_memmove((R+4368),(R+4352),8);
}
B71274b:{NFSU2_TR(0x71274b);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B71274e:{NFSU2_TR(0x71274e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71274f:{NFSU2_TR(0x71274f);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4352))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4354))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4356))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4358))));
}
B712752:{NFSU2_TR(0x712752);
u8 U[30];
__builtin_memmove((U+5),(R+4352),8);
__builtin_memmove((U+13),(R+4352),8);
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
B712755:{NFSU2_TR(0x712755);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712756:{NFSU2_TR(0x712756);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71275a:{NFSU2_TR(0x71275a);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0x2ull)));}
}
B71275e:{NFSU2_TR(0x71275e);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B712761:{NFSU2_TR(0x712761);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175e0),8);
w1(R+4368,u8(u32(r1(R+4368))-u32(r1(U+0))));
w1(R+4369,u8(u32(r1(R+4369))-u32(r1(U+1))));
w1(R+4370,u8(u32(r1(R+4370))-u32(r1(U+2))));
w1(R+4371,u8(u32(r1(R+4371))-u32(r1(U+3))));
w1(R+4372,u8(u32(r1(R+4372))-u32(r1(U+4))));
w1(R+4373,u8(u32(r1(R+4373))-u32(r1(U+5))));
w1(R+4374,u8(u32(r1(R+4374))-u32(r1(U+6))));
w1(R+4375,u8(u32(r1(R+4375))-u32(r1(U+7))));
}
B712768:{NFSU2_TR(0x712768);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71276f:{NFSU2_TR(0x71276f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B712772:{NFSU2_TR(0x712772);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B712774:{NFSU2_TR(0x712774);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B712777:{NFSU2_TR(0x712777);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71277d:{NFSU2_TR(0x71277d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffea0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B712783:{NFSU2_TR(0x712783);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B712786:{NFSU2_TR(0x712786);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B712788:{NFSU2_TR(0x712788);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B71278b:{NFSU2_TR(0x71278b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B71278f:{NFSU2_TR(0x71278f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B712793:{NFSU2_TR(0x712793);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B712796:{NFSU2_TR(0x712796);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B71279a:{NFSU2_TR(0x71279a);
__builtin_memmove((R+4416),(R+4352),8);
}
B71279d:{NFSU2_TR(0x71279d);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B7127a0:{NFSU2_TR(0x7127a0);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B7127a3:{NFSU2_TR(0x7127a3);
__builtin_memmove((R+4432),(R+4384),8);
}
B7127a6:{NFSU2_TR(0x7127a6);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B7127a9:{NFSU2_TR(0x7127a9);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4404),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4405),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4406),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4407),1);
}
B7127ac:{NFSU2_TR(0x7127ac);
__builtin_memmove((R+4368),(R+4352),8);
}
B7127af:{NFSU2_TR(0x7127af);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B7127b2:{NFSU2_TR(0x7127b2);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B7127b5:{NFSU2_TR(0x7127b5);
__builtin_memmove((R+4384),(R+4416),8);
}
B7127b8:{NFSU2_TR(0x7127b8);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B7127bb:{NFSU2_TR(0x7127bb);
__builtin_memmove((R+4390),(R+4434),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4432),2);
}
B7127be:{NFSU2_TR(0x7127be);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B7127c1:{NFSU2_TR(0x7127c1);
__builtin_memmove((R+4432),(R+4352),8);
}
B7127c4:{NFSU2_TR(0x7127c4);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B7127c7:{NFSU2_TR(0x7127c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7127cb:{NFSU2_TR(0x7127cb);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B7127ce:{NFSU2_TR(0x7127ce);
__builtin_memmove((R+4352),(R+4368),8);
}
B7127d1:{NFSU2_TR(0x7127d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7127d5:{NFSU2_TR(0x7127d5);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B7127d8:{NFSU2_TR(0x7127d8);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B7127db:{NFSU2_TR(0x7127db);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7127df:{NFSU2_TR(0x7127df);
__builtin_memmove((R+4400),(R+4384),8);
}
B7127e2:{NFSU2_TR(0x7127e2);
__builtin_memmove((R+4432),(R+4416),8);
}
B7127e5:{NFSU2_TR(0x7127e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7127e9:{NFSU2_TR(0x7127e9);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7127ec:{NFSU2_TR(0x7127ec);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7127ef:{NFSU2_TR(0x7127ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7127f3:{NFSU2_TR(0x7127f3);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B7127f6:{NFSU2_TR(0x7127f6);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B7127f9:{NFSU2_TR(0x7127f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7127fd:{NFSU2_TR(0x7127fd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B712800:{NFSU2_TR(0x712800);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B712804:{NFSU2_TR(0x712804);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712808:{NFSU2_TR(0x712808);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71280c:{NFSU2_TR(0x71280c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B71280f:{NFSU2_TR(0x71280f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712816:{NFSU2_TR(0x712816);
__builtin_memmove((R+4416),(R+4352),8);
}
B712819:{NFSU2_TR(0x712819);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B71281d:{NFSU2_TR(0x71281d);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B712820:{NFSU2_TR(0x712820);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B712823:{NFSU2_TR(0x712823);
__builtin_memmove((R+4432),(R+4384),8);
}
B712826:{NFSU2_TR(0x712826);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B712829:{NFSU2_TR(0x712829);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4404),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4405),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4406),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4407),1);
}
B71282c:{NFSU2_TR(0x71282c);
__builtin_memmove((R+4368),(R+4352),8);
}
B71282f:{NFSU2_TR(0x71282f);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B712832:{NFSU2_TR(0x712832);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B712835:{NFSU2_TR(0x712835);
__builtin_memmove((R+4384),(R+4416),8);
}
B712838:{NFSU2_TR(0x712838);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B71283b:{NFSU2_TR(0x71283b);
__builtin_memmove((R+4390),(R+4434),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4432),2);
}
B71283e:{NFSU2_TR(0x71283e);
__builtin_memmove((R+4432),(R+4352),8);
}
B712841:{NFSU2_TR(0x712841);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B712844:{NFSU2_TR(0x712844);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712848:{NFSU2_TR(0x712848);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B71284b:{NFSU2_TR(0x71284b);
__builtin_memmove((R+4352),(R+4368),8);
}
B71284e:{NFSU2_TR(0x71284e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712852:{NFSU2_TR(0x712852);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B712855:{NFSU2_TR(0x712855);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B712858:{NFSU2_TR(0x712858);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71285c:{NFSU2_TR(0x71285c);
__builtin_memmove((R+4400),(R+4384),8);
}
B71285f:{NFSU2_TR(0x71285f);
__builtin_memmove((R+4432),(R+4416),8);
}
B712862:{NFSU2_TR(0x712862);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712866:{NFSU2_TR(0x712866);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B712869:{NFSU2_TR(0x712869);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B71286c:{NFSU2_TR(0x71286c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712870:{NFSU2_TR(0x712870);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B712873:{NFSU2_TR(0x712873);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B712876:{NFSU2_TR(0x712876);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71287a:{NFSU2_TR(0x71287a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71287e:{NFSU2_TR(0x71287e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712885:{NFSU2_TR(0x712885);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B712888:{NFSU2_TR(0x712888);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B71288c:{NFSU2_TR(0x71288c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712890:{NFSU2_TR(0x712890);
u8 U[42];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+17),(R+4352),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4352),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4353),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4354),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4355),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4356),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4357),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4358),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4359),(U+33),1);
}
B712894:{NFSU2_TR(0x712894);
u8 U[42];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+17),(R+4368),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4368),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4369),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4370),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4371),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4372),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4373),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4374),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4375),(U+33),1);
}
B712898:{NFSU2_TR(0x712898);
u8 U[42];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+17),(R+4384),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4384),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4385),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4386),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4387),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4388),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4389),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4390),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4391),(U+33),1);
}
B71289c:{NFSU2_TR(0x71289c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B7128a0:{NFSU2_TR(0x7128a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7128a4:{NFSU2_TR(0x7128a4);
u8 U[42];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+17),(R+4400),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4400),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4401),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4402),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4403),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4404),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4405),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4406),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4407),(U+33),1);
}
B7128a8:{NFSU2_TR(0x7128a8);
u8 U[42];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+17),(R+4416),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4416),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4417),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4418),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4419),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4420),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4421),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4422),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4423),(U+33),1);
}
B7128ac:{NFSU2_TR(0x7128ac);
__builtin_memmove((R+4432),(R+4368),8);
}
B7128af:{NFSU2_TR(0x7128af);
__builtin_memmove((R+4448),(R+4384),8);
}
B7128b2:{NFSU2_TR(0x7128b2);
{wv<8>((R+4432),uo::psubusb<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B7128b5:{NFSU2_TR(0x7128b5);
{wv<8>((R+4352),uo::psubusb<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B7128b8:{NFSU2_TR(0x7128b8);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4432))));
}
B7128bb:{NFSU2_TR(0x7128bb);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B7128be:{NFSU2_TR(0x7128be);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B7128c1:{NFSU2_TR(0x7128c1);
__builtin_memmove((R+4432),(R+4400),8);
}
B7128c4:{NFSU2_TR(0x7128c4);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4448))));
}
B7128c7:{NFSU2_TR(0x7128c7);
{wv<8>((R+4432),uo::psubusb<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B7128ca:{NFSU2_TR(0x7128ca);
{wv<8>((R+4384),uo::psubusb<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B7128cd:{NFSU2_TR(0x7128cd);
__builtin_memmove((R+4448),(R+4416),8);
}
B7128d0:{NFSU2_TR(0x7128d0);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4432))));
}
B7128d3:{NFSU2_TR(0x7128d3);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B7128d6:{NFSU2_TR(0x7128d6);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B7128d9:{NFSU2_TR(0x7128d9);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4448))));
}
B7128dc:{NFSU2_TR(0x7128dc);
{wv<8>((R+4352),uo::paddusb<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B7128df:{NFSU2_TR(0x7128df);
{wv<8>((R+4384),uo::paddusb<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B7128e2:{NFSU2_TR(0x7128e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B7128e9:{NFSU2_TR(0x7128e9);
{wv<8>((R+4352),uo::paddusb<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B7128ec:{NFSU2_TR(0x7128ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7128f0:{NFSU2_TR(0x7128f0);
__builtin_memmove((R+4448),(R+4416),8);
}
B7128f3:{NFSU2_TR(0x7128f3);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175e0),8);
w1(R+4352,u8(u32(r1(R+4352))-u32(r1(U+0))));
w1(R+4353,u8(u32(r1(R+4353))-u32(r1(U+1))));
w1(R+4354,u8(u32(r1(R+4354))-u32(r1(U+2))));
w1(R+4355,u8(u32(r1(R+4355))-u32(r1(U+3))));
w1(R+4356,u8(u32(r1(R+4356))-u32(r1(U+4))));
w1(R+4357,u8(u32(r1(R+4357))-u32(r1(U+5))));
w1(R+4358,u8(u32(r1(R+4358))-u32(r1(U+6))));
w1(R+4359,u8(u32(r1(R+4359))-u32(r1(U+7))));
}
B7128fa:{NFSU2_TR(0x7128fa);
u8 U[8];
w1(U+0,u8(s8(r1(R+4352))<s8(r1(R+4464))));
w1(R+4464,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4353))<s8(r1(R+4465))));
w1(R+4465,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4354))<s8(r1(R+4466))));
w1(R+4466,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4355))<s8(r1(R+4467))));
w1(R+4467,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4356))<s8(r1(R+4468))));
w1(R+4468,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4357))<s8(r1(R+4469))));
w1(R+4469,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4358))<s8(r1(R+4470))));
w1(R+4470,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4359))<s8(r1(R+4471))));
w1(R+4471,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B7128fd:{NFSU2_TR(0x7128fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712901:{NFSU2_TR(0x712901);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712905:{NFSU2_TR(0x712905);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712909:{NFSU2_TR(0x712909);
u8 U[42];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+17),(R+4432),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4432),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4433),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4434),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4435),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4436),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4437),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4438),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4439),(U+33),1);
}
B71290d:{NFSU2_TR(0x71290d);
u8 U[42];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+17),(R+4368),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4368),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4369),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4370),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4371),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4372),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4373),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4374),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4375),(U+33),1);
}
B712911:{NFSU2_TR(0x712911);
u8 U[42];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+17),(R+4384),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4384),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4385),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4386),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4387),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4388),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4389),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4390),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4391),(U+33),1);
}
B712915:{NFSU2_TR(0x712915);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B71291c:{NFSU2_TR(0x71291c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B712923:{NFSU2_TR(0x712923);
u8 U[42];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+17),(R+4400),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4400),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4401),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4402),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4403),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4404),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4405),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4406),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4407),(U+33),1);
}
B71292a:{NFSU2_TR(0x71292a);
u8 U[42];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+17),(R+4416),8);
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+25),(U+4),8);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+14,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+34,u8(r2(U+17)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+34))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4416),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+14,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+35,u8(r2(U+19)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+35))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4417),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+14,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+36,u8(r2(U+21)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+36))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4418),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+14,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+37,u8(r2(U+23)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+37))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4419),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+14,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+38,u8(r2(U+25)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+38))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4420),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+14,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+39,u8(r2(U+27)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+39))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4421),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+14,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+40,u8(r2(U+29)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+40))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4422),(U+33),1);
w1(U+12,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+33,u8(u32(r1(U+12))*u32(u8(0xffull))));
w1(U+13,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+14,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+15,u8(u32(r1(U+13))*u32(r1(U+14))));
w1(U+41,u8(r2(U+31)));
w1(U+16,u8(u32(r1(U+15))*u32(r1(U+41))));
w1(U+33,u8(u32(r1(U+33))+u32(r1(U+16))));
__builtin_memmove((R+4423),(U+33),1);
}
B712931:{NFSU2_TR(0x712931);
__builtin_memmove((R+4352),(R+4432),8);
}
B712934:{NFSU2_TR(0x712934);
{wv<8>((R+4432),uo::psubusb<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B712937:{NFSU2_TR(0x712937);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B71293a:{NFSU2_TR(0x71293a);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4448))));
}
B71293d:{NFSU2_TR(0x71293d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B712941:{NFSU2_TR(0x712941);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175e0),8);
w1(R+4432,u8(u32(r1(R+4432))-u32(r1(U+0))));
w1(R+4433,u8(u32(r1(R+4433))-u32(r1(U+1))));
w1(R+4434,u8(u32(r1(R+4434))-u32(r1(U+2))));
w1(R+4435,u8(u32(r1(R+4435))-u32(r1(U+3))));
w1(R+4436,u8(u32(r1(R+4436))-u32(r1(U+4))));
w1(R+4437,u8(u32(r1(R+4437))-u32(r1(U+5))));
w1(R+4438,u8(u32(r1(R+4438))-u32(r1(U+6))));
w1(R+4439,u8(u32(r1(R+4439))-u32(r1(U+7))));
}
B712948:{NFSU2_TR(0x712948);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175e0),8);
w1(R+4448,u8(u32(r1(R+4448))-u32(r1(U+0))));
w1(R+4449,u8(u32(r1(R+4449))-u32(r1(U+1))));
w1(R+4450,u8(u32(r1(R+4450))-u32(r1(U+2))));
w1(R+4451,u8(u32(r1(R+4451))-u32(r1(U+3))));
w1(R+4452,u8(u32(r1(R+4452))-u32(r1(U+4))));
w1(R+4453,u8(u32(r1(R+4453))-u32(r1(U+5))));
w1(R+4454,u8(u32(r1(R+4454))-u32(r1(U+6))));
w1(R+4455,u8(u32(r1(R+4455))-u32(r1(U+7))));
}
B71294f:{NFSU2_TR(0x71294f);
u8 U[8];
w1(U+0,u8(s8(r1(R+4432))<s8(r1(R+4448))));
w1(R+4448,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4433))<s8(r1(R+4449))));
w1(R+4449,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4434))<s8(r1(R+4450))));
w1(R+4450,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4435))<s8(r1(R+4451))));
w1(R+4451,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4436))<s8(r1(R+4452))));
w1(R+4452,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4437))<s8(r1(R+4453))));
w1(R+4453,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4438))<s8(r1(R+4454))));
w1(R+4454,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4439))<s8(r1(R+4455))));
w1(R+4455,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B712952:{NFSU2_TR(0x712952);
__builtin_memmove((R+4432),(R+4368),8);
}
B712955:{NFSU2_TR(0x712955);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4448))));
}
B712958:{NFSU2_TR(0x712958);
__builtin_memmove((R+4448),(R+4384),8);
}
B71295b:{NFSU2_TR(0x71295b);
{wv<8>((R+4432),uo::psubusb<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B71295e:{NFSU2_TR(0x71295e);
{wv<8>((R+4352),uo::psubusb<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B712961:{NFSU2_TR(0x712961);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4432))));
}
B712964:{NFSU2_TR(0x712964);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B712967:{NFSU2_TR(0x712967);
{wv<8>((R+4368),uo::psubusb<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B71296a:{NFSU2_TR(0x71296a);
__builtin_memmove((R+4432),(R+4400),8);
}
B71296d:{NFSU2_TR(0x71296d);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4448))));
}
B712970:{NFSU2_TR(0x712970);
{wv<8>((R+4432),uo::psubusb<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B712973:{NFSU2_TR(0x712973);
{wv<8>((R+4384),uo::psubusb<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B712976:{NFSU2_TR(0x712976);
__builtin_memmove((R+4448),(R+4416),8);
}
B712979:{NFSU2_TR(0x712979);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4432))));
}
B71297c:{NFSU2_TR(0x71297c);
{wv<8>((R+4448),uo::psubusb<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B71297f:{NFSU2_TR(0x71297f);
{wv<8>((R+4400),uo::psubusb<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B712982:{NFSU2_TR(0x712982);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4448))));
}
B712985:{NFSU2_TR(0x712985);
{wv<8>((R+4352),uo::paddusb<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B712988:{NFSU2_TR(0x712988);
{wv<8>((R+4384),uo::paddusb<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B71298b:{NFSU2_TR(0x71298b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B712992:{NFSU2_TR(0x712992);
{wv<8>((R+4352),uo::paddusb<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B712995:{NFSU2_TR(0x712995);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712999:{NFSU2_TR(0x712999);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175e0),8);
w1(R+4352,u8(u32(r1(R+4352))-u32(r1(U+0))));
w1(R+4353,u8(u32(r1(R+4353))-u32(r1(U+1))));
w1(R+4354,u8(u32(r1(R+4354))-u32(r1(U+2))));
w1(R+4355,u8(u32(r1(R+4355))-u32(r1(U+3))));
w1(R+4356,u8(u32(r1(R+4356))-u32(r1(U+4))));
w1(R+4357,u8(u32(r1(R+4357))-u32(r1(U+5))));
w1(R+4358,u8(u32(r1(R+4358))-u32(r1(U+6))));
w1(R+4359,u8(u32(r1(R+4359))-u32(r1(U+7))));
}
B7129a0:{NFSU2_TR(0x7129a0);
u8 U[8];
w1(U+0,u8(s8(r1(R+4352))<s8(r1(R+4448))));
w1(R+4448,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s8(r1(R+4353))<s8(r1(R+4449))));
w1(R+4449,u8(u32(r1(U+1))*u32(u8(0xffull))));
w1(U+2,u8(s8(r1(R+4354))<s8(r1(R+4450))));
w1(R+4450,u8(u32(r1(U+2))*u32(u8(0xffull))));
w1(U+3,u8(s8(r1(R+4355))<s8(r1(R+4451))));
w1(R+4451,u8(u32(r1(U+3))*u32(u8(0xffull))));
w1(U+4,u8(s8(r1(R+4356))<s8(r1(R+4452))));
w1(R+4452,u8(u32(r1(U+4))*u32(u8(0xffull))));
w1(U+5,u8(s8(r1(R+4357))<s8(r1(R+4453))));
w1(R+4453,u8(u32(r1(U+5))*u32(u8(0xffull))));
w1(U+6,u8(s8(r1(R+4358))<s8(r1(R+4454))));
w1(R+4454,u8(u32(r1(U+6))*u32(u8(0xffull))));
w1(U+7,u8(s8(r1(R+4359))<s8(r1(R+4455))));
w1(R+4455,u8(u32(r1(U+7))*u32(u8(0xffull))));
}
B7129a3:{NFSU2_TR(0x7129a3);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4464))));
}
B7129a6:{NFSU2_TR(0x7129a6);
__builtin_memmove((R+4352),(R+4448),8);
}
B7129a9:{NFSU2_TR(0x7129a9);
__builtin_memmove((R+4464),(R+4448),8);
}
B7129ac:{NFSU2_TR(0x7129ac);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4452),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4453),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4454),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4455),1);
}
B7129af:{NFSU2_TR(0x7129af);
__builtin_memmove((R+4471),(R+4451),1);
__builtin_memmove((R+4470),(R+4467),1);
__builtin_memmove((R+4469),(R+4450),1);
__builtin_memmove((R+4468),(R+4466),1);
__builtin_memmove((R+4467),(R+4449),1);
__builtin_memmove((R+4466),(R+4465),1);
__builtin_memmove((R+4465),(R+4448),1);
}
B7129b2:{NFSU2_TR(0x7129b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B7129b6:{NFSU2_TR(0x7129b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B7129ba:{NFSU2_TR(0x7129ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B7129be:{NFSU2_TR(0x7129be);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B7129c2:{NFSU2_TR(0x7129c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B7129c6:{NFSU2_TR(0x7129c6);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4422))));
}
B7129c9:{NFSU2_TR(0x7129c9);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4454))));
}
B7129cc:{NFSU2_TR(0x7129cc);
__builtin_memmove((R+4416),(R+4432),8);
}
B7129cf:{NFSU2_TR(0x7129cf);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B7129d2:{NFSU2_TR(0x7129d2);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B7129d9:{NFSU2_TR(0x7129d9);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4422))));
}
B7129dc:{NFSU2_TR(0x7129dc);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B7129df:{NFSU2_TR(0x7129df);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B7129e3:{NFSU2_TR(0x7129e3);
__builtin_memmove((R+4384),(R+4400),8);
}
B7129e6:{NFSU2_TR(0x7129e6);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B7129ea:{NFSU2_TR(0x7129ea);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4400))));
}
B7129ed:{NFSU2_TR(0x7129ed);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B7129f0:{NFSU2_TR(0x7129f0);
w8(R+4400,u64(u64(r8(R+4400))|u64(m8(0x8175d0))));
}
B7129f7:{NFSU2_TR(0x7129f7);
__builtin_memmove((R+4416),(R+4368),8);
}
B7129fa:{NFSU2_TR(0x7129fa);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B7129fd:{NFSU2_TR(0x7129fd);
__builtin_memmove((R+4432),(R+4368),8);
}
B712a00:{NFSU2_TR(0x712a00);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B712a04:{NFSU2_TR(0x712a04);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4368))));
}
B712a07:{NFSU2_TR(0x712a07);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B712a0a:{NFSU2_TR(0x712a0a);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B712a0d:{NFSU2_TR(0x712a0d);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B712a10:{NFSU2_TR(0x712a10);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712a14:{NFSU2_TR(0x712a14);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712a18:{NFSU2_TR(0x712a18);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B712a1b:{NFSU2_TR(0x712a1b);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4422))));
}
B712a1e:{NFSU2_TR(0x712a1e);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B712a21:{NFSU2_TR(0x712a21);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B712a24:{NFSU2_TR(0x712a24);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B712a27:{NFSU2_TR(0x712a27);
__builtin_memmove((R+4375),(R+4451),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4450),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4449),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4448),1);
}
B712a2a:{NFSU2_TR(0x712a2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712a31:{NFSU2_TR(0x712a31);
__builtin_memmove((R+4391),(R+4451),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4450),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4449),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4448),1);
}
B712a34:{NFSU2_TR(0x712a34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712a3b:{NFSU2_TR(0x712a3b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B712a3e:{NFSU2_TR(0x712a3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712a45:{NFSU2_TR(0x712a45);
__builtin_memmove((R+4368),(R+4400),8);
}
B712a48:{NFSU2_TR(0x712a48);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B712a4b:{NFSU2_TR(0x712a4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B712a4f:{NFSU2_TR(0x712a4f);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B712a52:{NFSU2_TR(0x712a52);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712a56:{NFSU2_TR(0x712a56);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B712a5a:{NFSU2_TR(0x712a5a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712a5e:{NFSU2_TR(0x712a5e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B712a65:{NFSU2_TR(0x712a65);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B712a68:{NFSU2_TR(0x712a68);
__builtin_memmove((R+4416),(R+4400),8);
}
B712a6b:{NFSU2_TR(0x712a6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712a6f:{NFSU2_TR(0x712a6f);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712a72:{NFSU2_TR(0x712a72);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712a76:{NFSU2_TR(0x712a76);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712a79:{NFSU2_TR(0x712a79);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B712a7c:{NFSU2_TR(0x712a7c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712a7f:{NFSU2_TR(0x712a7f);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B712a82:{NFSU2_TR(0x712a82);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712a86:{NFSU2_TR(0x712a86);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B712a89:{NFSU2_TR(0x712a89);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712a8d:{NFSU2_TR(0x712a8d);
__builtin_memmove((R+4416),(R+4432),8);
}
B712a90:{NFSU2_TR(0x712a90);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712a93:{NFSU2_TR(0x712a93);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712a97:{NFSU2_TR(0x712a97);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712a9a:{NFSU2_TR(0x712a9a);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B712a9d:{NFSU2_TR(0x712a9d);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712aa0:{NFSU2_TR(0x712aa0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712aa4:{NFSU2_TR(0x712aa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712aa8:{NFSU2_TR(0x712aa8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B712aab:{NFSU2_TR(0x712aab);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712aaf:{NFSU2_TR(0x712aaf);
__builtin_memmove((R+4416),(R+4432),8);
}
B712ab2:{NFSU2_TR(0x712ab2);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712ab5:{NFSU2_TR(0x712ab5);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712ab9:{NFSU2_TR(0x712ab9);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712abc:{NFSU2_TR(0x712abc);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B712abf:{NFSU2_TR(0x712abf);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712ac2:{NFSU2_TR(0x712ac2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712ac6:{NFSU2_TR(0x712ac6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712aca:{NFSU2_TR(0x712aca);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B712acd:{NFSU2_TR(0x712acd);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712ad1:{NFSU2_TR(0x712ad1);
__builtin_memmove((R+4416),(R+4432),8);
}
B712ad4:{NFSU2_TR(0x712ad4);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712ad7:{NFSU2_TR(0x712ad7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712ade:{NFSU2_TR(0x712ade);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712ae2:{NFSU2_TR(0x712ae2);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712ae5:{NFSU2_TR(0x712ae5);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B712ae8:{NFSU2_TR(0x712ae8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712aeb:{NFSU2_TR(0x712aeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712aef:{NFSU2_TR(0x712aef);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712af3:{NFSU2_TR(0x712af3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B712af7:{NFSU2_TR(0x712af7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712afe:{NFSU2_TR(0x712afe);
__builtin_memmove((R+4416),(R+4432),8);
}
B712b01:{NFSU2_TR(0x712b01);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712b04:{NFSU2_TR(0x712b04);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712b0b:{NFSU2_TR(0x712b0b);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712b0f:{NFSU2_TR(0x712b0f);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712b12:{NFSU2_TR(0x712b12);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B712b15:{NFSU2_TR(0x712b15);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712b18:{NFSU2_TR(0x712b18);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712b1c:{NFSU2_TR(0x712b1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712b20:{NFSU2_TR(0x712b20);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B712b24:{NFSU2_TR(0x712b24);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B712b27:{NFSU2_TR(0x712b27);
__builtin_memmove((R+4416),(R+4432),8);
}
B712b2a:{NFSU2_TR(0x712b2a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712b2d:{NFSU2_TR(0x712b2d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712b31:{NFSU2_TR(0x712b31);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712b34:{NFSU2_TR(0x712b34);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B712b37:{NFSU2_TR(0x712b37);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712b3a:{NFSU2_TR(0x712b3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712b3e:{NFSU2_TR(0x712b3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712b42:{NFSU2_TR(0x712b42);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B712b46:{NFSU2_TR(0x712b46);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B712b49:{NFSU2_TR(0x712b49);
__builtin_memmove((R+4416),(R+4432),8);
}
B712b4c:{NFSU2_TR(0x712b4c);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712b4f:{NFSU2_TR(0x712b4f);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712b53:{NFSU2_TR(0x712b53);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712b56:{NFSU2_TR(0x712b56);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B712b59:{NFSU2_TR(0x712b59);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712b5c:{NFSU2_TR(0x712b5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712b60:{NFSU2_TR(0x712b60);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712b67:{NFSU2_TR(0x712b67);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B712b6b:{NFSU2_TR(0x712b6b);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B712b6e:{NFSU2_TR(0x712b6e);
__builtin_memmove((R+4416),(R+4432),8);
}
B712b71:{NFSU2_TR(0x712b71);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712b74:{NFSU2_TR(0x712b74);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712b78:{NFSU2_TR(0x712b78);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712b7b:{NFSU2_TR(0x712b7b);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4464))));
}
B712b7e:{NFSU2_TR(0x712b7e);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712b81:{NFSU2_TR(0x712b81);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712b85:{NFSU2_TR(0x712b85);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B712b88:{NFSU2_TR(0x712b88);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B712b8b:{NFSU2_TR(0x712b8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712b8f:{NFSU2_TR(0x712b8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B712b93:{NFSU2_TR(0x712b93);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B712b97:{NFSU2_TR(0x712b97);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712b9b:{NFSU2_TR(0x712b9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B712b9f:{NFSU2_TR(0x712b9f);
w2(R+4432,u16(u32(r2(R+4432))-u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))-u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))-u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))-u32(r2(R+4422))));
}
B712ba2:{NFSU2_TR(0x712ba2);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4448))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4450))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4452))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4454))));
}
B712ba5:{NFSU2_TR(0x712ba5);
__builtin_memmove((R+4416),(R+4432),8);
}
B712ba8:{NFSU2_TR(0x712ba8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712bab:{NFSU2_TR(0x712bab);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+0))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+2))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+4))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+6))));
}
B712bb2:{NFSU2_TR(0x712bb2);
w2(R+4432,u16(u32(r2(R+4432))+u32(r2(R+4416))));
w2(R+4434,u16(u32(r2(R+4434))+u32(r2(R+4418))));
w2(R+4436,u16(u32(r2(R+4436))+u32(r2(R+4420))));
w2(R+4438,u16(u32(r2(R+4438))+u32(r2(R+4422))));
}
B712bb5:{NFSU2_TR(0x712bb5);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4432))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4434))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4436))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4438))));
}
B712bb8:{NFSU2_TR(0x712bb8);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0x3ull)));}
}
B712bbc:{NFSU2_TR(0x712bbc);
__builtin_memmove((R+4384),(R+4400),8);
}
B712bbf:{NFSU2_TR(0x712bbf);
{wv<8>((R+4400),uo::psraw<8>(rv<8>((R+4400)),V(0xfull)));}
}
B712bc3:{NFSU2_TR(0x712bc3);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4400))));
}
B712bc6:{NFSU2_TR(0x712bc6);
{wv<8>((R+4384),uo::psubsw<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B712bc9:{NFSU2_TR(0x712bc9);
w8(R+4400,u64(u64(r8(R+4400))|u64(m8(0x8175d0))));
}
B712bd0:{NFSU2_TR(0x712bd0);
__builtin_memmove((R+4416),(R+4368),8);
}
B712bd3:{NFSU2_TR(0x712bd3);
w2(R+4368,u16(u32(r2(R+4368))-u32(r2(R+4384))));
w2(R+4370,u16(u32(r2(R+4370))-u32(r2(R+4386))));
w2(R+4372,u16(u32(r2(R+4372))-u32(r2(R+4388))));
w2(R+4374,u16(u32(r2(R+4374))-u32(r2(R+4390))));
}
B712bd6:{NFSU2_TR(0x712bd6);
__builtin_memmove((R+4432),(R+4368),8);
}
B712bd9:{NFSU2_TR(0x712bd9);
{wv<8>((R+4368),uo::psraw<8>(rv<8>((R+4368)),V(0xfull)));}
}
B712bdd:{NFSU2_TR(0x712bdd);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4368))));
}
B712be0:{NFSU2_TR(0x712be0);
{wv<8>((R+4432),uo::psubsw<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B712be3:{NFSU2_TR(0x712be3);
{wv<8>((R+4416),uo::psubusw<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B712be6:{NFSU2_TR(0x712be6);
w2(R+4416,u16(u32(r2(R+4416))*u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))*u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))*u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))*u32(r2(R+4406))));
}
B712be9:{NFSU2_TR(0x712be9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712bed:{NFSU2_TR(0x712bed);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712bf1:{NFSU2_TR(0x712bf1);
w2(R+4368,u16(u32(r2(R+4368))+u32(r2(R+4416))));
w2(R+4370,u16(u32(r2(R+4370))+u32(r2(R+4418))));
w2(R+4372,u16(u32(r2(R+4372))+u32(r2(R+4420))));
w2(R+4374,u16(u32(r2(R+4374))+u32(r2(R+4422))));
}
B712bf4:{NFSU2_TR(0x712bf4);
w2(R+4384,u16(u32(r2(R+4384))-u32(r2(R+4416))));
w2(R+4386,u16(u32(r2(R+4386))-u32(r2(R+4418))));
w2(R+4388,u16(u32(r2(R+4388))-u32(r2(R+4420))));
w2(R+4390,u16(u32(r2(R+4390))-u32(r2(R+4422))));
}
B712bf7:{NFSU2_TR(0x712bf7);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B712bfa:{NFSU2_TR(0x712bfa);
u8 U[30];
__builtin_memmove((U+5),(R+4368),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4368),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4369),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4370),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4371),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4372),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4373),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4374),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4375),(U+21),1);
}
B712bfd:{NFSU2_TR(0x712bfd);
u8 U[30];
__builtin_memmove((U+5),(R+4384),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4384),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4385),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4386),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4387),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4388),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4389),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4390),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4391),(U+21),1);
}
B712c00:{NFSU2_TR(0x712c00);
__builtin_memmove((R+4375),(R+4451),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4450),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4449),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4448),1);
}
B712c03:{NFSU2_TR(0x712c03);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712c0a:{NFSU2_TR(0x712c0a);
__builtin_memmove((R+4391),(R+4451),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4450),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4449),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4448),1);
}
B712c0d:{NFSU2_TR(0x712c0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712c14:{NFSU2_TR(0x712c14);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B712c17:{NFSU2_TR(0x712c17);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712c1e:{NFSU2_TR(0x712c1e);
__builtin_memmove((R+4368),(R+4400),8);
}
B712c21:{NFSU2_TR(0x712c21);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4400))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4402))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4404))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4406))));
}
B712c24:{NFSU2_TR(0x712c24);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B712c28:{NFSU2_TR(0x712c28);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4374))));
}
B712c2b:{NFSU2_TR(0x712c2b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712c2f:{NFSU2_TR(0x712c2f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+12))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+14))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+16))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+18))));
}
B712c33:{NFSU2_TR(0x712c33);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712c37:{NFSU2_TR(0x712c37);
u8 U[8];
__builtin_memmove((U+0),gp(0x8175c0),8);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(U+0))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(U+2))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(U+4))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(U+6))));
}
B712c3e:{NFSU2_TR(0x712c3e);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4416))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4418))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4420))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4422))));
}
B712c41:{NFSU2_TR(0x712c41);
__builtin_memmove((R+4416),(R+4400),8);
}
B712c44:{NFSU2_TR(0x712c44);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712c48:{NFSU2_TR(0x712c48);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712c4b:{NFSU2_TR(0x712c4b);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712c4f:{NFSU2_TR(0x712c4f);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712c52:{NFSU2_TR(0x712c52);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712c55:{NFSU2_TR(0x712c55);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712c58:{NFSU2_TR(0x712c58);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B712c5b:{NFSU2_TR(0x712c5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712c5f:{NFSU2_TR(0x712c5f);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B712c62:{NFSU2_TR(0x712c62);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712c66:{NFSU2_TR(0x712c66);
__builtin_memmove((R+4416),(R+4432),8);
}
B712c69:{NFSU2_TR(0x712c69);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712c6c:{NFSU2_TR(0x712c6c);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712c70:{NFSU2_TR(0x712c70);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712c73:{NFSU2_TR(0x712c73);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712c76:{NFSU2_TR(0x712c76);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712c79:{NFSU2_TR(0x712c79);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712c7d:{NFSU2_TR(0x712c7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712c81:{NFSU2_TR(0x712c81);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B712c84:{NFSU2_TR(0x712c84);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712c88:{NFSU2_TR(0x712c88);
__builtin_memmove((R+4416),(R+4432),8);
}
B712c8b:{NFSU2_TR(0x712c8b);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712c8e:{NFSU2_TR(0x712c8e);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712c92:{NFSU2_TR(0x712c92);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712c95:{NFSU2_TR(0x712c95);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712c98:{NFSU2_TR(0x712c98);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712c9b:{NFSU2_TR(0x712c9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712c9f:{NFSU2_TR(0x712c9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712ca3:{NFSU2_TR(0x712ca3);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(R+4368))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(R+4370))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(R+4372))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(R+4374))));
}
B712ca6:{NFSU2_TR(0x712ca6);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712caa:{NFSU2_TR(0x712caa);
__builtin_memmove((R+4416),(R+4432),8);
}
B712cad:{NFSU2_TR(0x712cad);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712cb0:{NFSU2_TR(0x712cb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712cb7:{NFSU2_TR(0x712cb7);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712cbb:{NFSU2_TR(0x712cbb);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712cbe:{NFSU2_TR(0x712cbe);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712cc1:{NFSU2_TR(0x712cc1);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712cc4:{NFSU2_TR(0x712cc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712cc8:{NFSU2_TR(0x712cc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712ccc:{NFSU2_TR(0x712ccc);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B712cd0:{NFSU2_TR(0x712cd0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(U+18))));
}
B712cd7:{NFSU2_TR(0x712cd7);
__builtin_memmove((R+4416),(R+4432),8);
}
B712cda:{NFSU2_TR(0x712cda);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712cdd:{NFSU2_TR(0x712cdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712ce4:{NFSU2_TR(0x712ce4);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712ce8:{NFSU2_TR(0x712ce8);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712ceb:{NFSU2_TR(0x712ceb);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712cee:{NFSU2_TR(0x712cee);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712cf1:{NFSU2_TR(0x712cf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712cf5:{NFSU2_TR(0x712cf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712cf9:{NFSU2_TR(0x712cf9);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B712cfd:{NFSU2_TR(0x712cfd);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B712d00:{NFSU2_TR(0x712d00);
__builtin_memmove((R+4416),(R+4432),8);
}
B712d03:{NFSU2_TR(0x712d03);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712d06:{NFSU2_TR(0x712d06);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712d0a:{NFSU2_TR(0x712d0a);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712d0d:{NFSU2_TR(0x712d0d);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712d10:{NFSU2_TR(0x712d10);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712d13:{NFSU2_TR(0x712d13);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712d17:{NFSU2_TR(0x712d17);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712d1b:{NFSU2_TR(0x712d1b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B712d1f:{NFSU2_TR(0x712d1f);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B712d22:{NFSU2_TR(0x712d22);
__builtin_memmove((R+4416),(R+4432),8);
}
B712d25:{NFSU2_TR(0x712d25);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712d28:{NFSU2_TR(0x712d28);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712d2c:{NFSU2_TR(0x712d2c);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712d2f:{NFSU2_TR(0x712d2f);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712d32:{NFSU2_TR(0x712d32);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712d35:{NFSU2_TR(0x712d35);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712d39:{NFSU2_TR(0x712d39);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712d40:{NFSU2_TR(0x712d40);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((U+12),(U+4),8);
w2(R+4400,u16(u32(r2(R+4400))-u32(r2(U+12))));
w2(R+4402,u16(u32(r2(R+4402))-u32(r2(U+14))));
w2(R+4404,u16(u32(r2(R+4404))-u32(r2(U+16))));
w2(R+4406,u16(u32(r2(R+4406))-u32(r2(U+18))));
}
B712d44:{NFSU2_TR(0x712d44);
w2(R+4400,u16(u32(r2(R+4400))+u32(r2(R+4384))));
w2(R+4402,u16(u32(r2(R+4402))+u32(r2(R+4386))));
w2(R+4404,u16(u32(r2(R+4404))+u32(r2(R+4388))));
w2(R+4406,u16(u32(r2(R+4406))+u32(r2(R+4390))));
}
B712d47:{NFSU2_TR(0x712d47);
__builtin_memmove((R+4416),(R+4432),8);
}
B712d4a:{NFSU2_TR(0x712d4a);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4400))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4402))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4404))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4406))));
}
B712d4d:{NFSU2_TR(0x712d4d);
{wv<8>((R+4416),uo::psraw<8>(rv<8>((R+4416)),V(0x3ull)));}
}
B712d51:{NFSU2_TR(0x712d51);
w2(R+4416,u16(u32(r2(R+4416))-u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))-u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))-u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))-u32(r2(R+4438))));
}
B712d54:{NFSU2_TR(0x712d54);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4352))));
}
B712d57:{NFSU2_TR(0x712d57);
w2(R+4416,u16(u32(r2(R+4416))+u32(r2(R+4432))));
w2(R+4418,u16(u32(r2(R+4418))+u32(r2(R+4434))));
w2(R+4420,u16(u32(r2(R+4420))+u32(r2(R+4436))));
w2(R+4422,u16(u32(r2(R+4422))+u32(r2(R+4438))));
}
B712d5a:{NFSU2_TR(0x712d5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712d5e:{NFSU2_TR(0x712d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B712d61:{NFSU2_TR(0x712d61);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B712d64:{NFSU2_TR(0x712d64);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8ull))));
}
B712d67:{NFSU2_TR(0x712d67);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B712d6a:{NFSU2_TR(0x712d6a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B712d6d:{NFSU2_TR(0x712d6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712d71:{NFSU2_TR(0x712d71);
__builtin_memmove((R+4416),(R+4352),8);
}
B712d74:{NFSU2_TR(0x712d74);
__builtin_memmove((R+4358),(R+4370),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4368),2);
}
B712d77:{NFSU2_TR(0x712d77);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4372),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4374),2);
}
B712d7a:{NFSU2_TR(0x712d7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712d7e:{NFSU2_TR(0x712d7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B712d82:{NFSU2_TR(0x712d82);
__builtin_memmove((R+4432),(R+4384),8);
}
B712d85:{NFSU2_TR(0x712d85);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B712d88:{NFSU2_TR(0x712d88);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B712d8b:{NFSU2_TR(0x712d8b);
__builtin_memmove((R+4368),(R+4352),8);
}
B712d8e:{NFSU2_TR(0x712d8e);
__builtin_memmove((R+4356),(R+4384),4);
}
B712d91:{NFSU2_TR(0x712d91);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B712d94:{NFSU2_TR(0x712d94);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B712d97:{NFSU2_TR(0x712d97);
__builtin_memmove((R+4352),(R+4416),8);
}
B712d9a:{NFSU2_TR(0x712d9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712d9e:{NFSU2_TR(0x712d9e);
__builtin_memmove((R+4356),(R+4432),4);
}
B712da1:{NFSU2_TR(0x712da1);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B712da4:{NFSU2_TR(0x712da4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712da8:{NFSU2_TR(0x712da8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712dac:{NFSU2_TR(0x712dac);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712db0:{NFSU2_TR(0x712db0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B712db4:{NFSU2_TR(0x712db4);
__builtin_memmove((R+4400),(R+4368),8);
}
B712db7:{NFSU2_TR(0x712db7);
__builtin_memmove((R+4464),(R+4432),8);
}
B712dba:{NFSU2_TR(0x712dba);
__builtin_memmove((R+4374),(R+4386),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4384),2);
}
B712dbd:{NFSU2_TR(0x712dbd);
__builtin_memmove((R+4400),(R+4404),2);
__builtin_memmove((R+4402),(R+4388),2);
__builtin_memmove((R+4404),(R+4406),2);
__builtin_memmove((R+4406),(R+4390),2);
}
B712dc0:{NFSU2_TR(0x712dc0);
__builtin_memmove((R+4438),(R+4450),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4448),2);
}
B712dc3:{NFSU2_TR(0x712dc3);
__builtin_memmove((R+4464),(R+4468),2);
__builtin_memmove((R+4466),(R+4452),2);
__builtin_memmove((R+4468),(R+4470),2);
__builtin_memmove((R+4470),(R+4454),2);
}
B712dc6:{NFSU2_TR(0x712dc6);
__builtin_memmove((R+4384),(R+4368),8);
}
B712dc9:{NFSU2_TR(0x712dc9);
__builtin_memmove((R+4448),(R+4400),8);
}
B712dcc:{NFSU2_TR(0x712dcc);
__builtin_memmove((R+4372),(R+4432),4);
}
B712dcf:{NFSU2_TR(0x712dcf);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4436),4);
}
B712dd2:{NFSU2_TR(0x712dd2);
__builtin_memmove((R+4404),(R+4464),4);
}
B712dd5:{NFSU2_TR(0x712dd5);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4468),4);
}
B712dd8:{NFSU2_TR(0x712dd8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B712ddb:{NFSU2_TR(0x712ddb);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B712dde:{NFSU2_TR(0x712dde);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B712de1:{NFSU2_TR(0x712de1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B712de5:{NFSU2_TR(0x712de5);
u8 U[30];
__builtin_memmove((U+5),(R+4464),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4464),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4465),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4466),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4467),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4468),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4469),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4470),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4471),(U+21),1);
}
B712de8:{NFSU2_TR(0x712de8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4464),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712dec:{NFSU2_TR(0x712dec);
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
B712def:{NFSU2_TR(0x712def);
u8 U[30];
__builtin_memmove((U+5),(R+4416),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4416),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4417),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4418),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4419),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4420),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4421),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4422),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4423),(U+21),1);
}
B712df2:{NFSU2_TR(0x712df2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712df6:{NFSU2_TR(0x712df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B712df9:{NFSU2_TR(0x712df9);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4416),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712dfd:{NFSU2_TR(0x712dfd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B712e00:{NFSU2_TR(0x712e00);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B712e03:{NFSU2_TR(0x712e03);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B712e06:{NFSU2_TR(0x712e06);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712e0a:{NFSU2_TR(0x712e0a);
__builtin_memmove((R+4416),(R+4352),8);
}
B712e0d:{NFSU2_TR(0x712e0d);
__builtin_memmove((R+4358),(R+4370),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4368),2);
}
B712e10:{NFSU2_TR(0x712e10);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4372),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4374),2);
}
B712e13:{NFSU2_TR(0x712e13);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712e17:{NFSU2_TR(0x712e17);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B712e1b:{NFSU2_TR(0x712e1b);
__builtin_memmove((R+4432),(R+4384),8);
}
B712e1e:{NFSU2_TR(0x712e1e);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B712e21:{NFSU2_TR(0x712e21);
__builtin_memmove((R+4432),(R+4436),2);
__builtin_memmove((R+4434),(R+4404),2);
__builtin_memmove((R+4436),(R+4438),2);
__builtin_memmove((R+4438),(R+4406),2);
}
B712e24:{NFSU2_TR(0x712e24);
__builtin_memmove((R+4368),(R+4352),8);
}
B712e27:{NFSU2_TR(0x712e27);
__builtin_memmove((R+4356),(R+4384),4);
}
B712e2a:{NFSU2_TR(0x712e2a);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B712e2d:{NFSU2_TR(0x712e2d);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B712e30:{NFSU2_TR(0x712e30);
__builtin_memmove((R+4352),(R+4416),8);
}
B712e33:{NFSU2_TR(0x712e33);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B712e37:{NFSU2_TR(0x712e37);
__builtin_memmove((R+4356),(R+4432),4);
}
B712e3a:{NFSU2_TR(0x712e3a);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B712e3d:{NFSU2_TR(0x712e3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B712e41:{NFSU2_TR(0x712e41);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B712e45:{NFSU2_TR(0x712e45);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B712e49:{NFSU2_TR(0x712e49);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B712e4d:{NFSU2_TR(0x712e4d);
__builtin_memmove((R+4400),(R+4368),8);
}
B712e50:{NFSU2_TR(0x712e50);
__builtin_memmove((R+4464),(R+4432),8);
}
B712e53:{NFSU2_TR(0x712e53);
__builtin_memmove((R+4374),(R+4386),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4384),2);
}
B712e56:{NFSU2_TR(0x712e56);
__builtin_memmove((R+4400),(R+4404),2);
__builtin_memmove((R+4402),(R+4388),2);
__builtin_memmove((R+4404),(R+4406),2);
__builtin_memmove((R+4406),(R+4390),2);
}
B712e59:{NFSU2_TR(0x712e59);
__builtin_memmove((R+4438),(R+4450),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4448),2);
}
B712e5c:{NFSU2_TR(0x712e5c);
__builtin_memmove((R+4464),(R+4468),2);
__builtin_memmove((R+4466),(R+4452),2);
__builtin_memmove((R+4468),(R+4470),2);
__builtin_memmove((R+4470),(R+4454),2);
}
B712e5f:{NFSU2_TR(0x712e5f);
__builtin_memmove((R+4384),(R+4368),8);
}
B712e62:{NFSU2_TR(0x712e62);
__builtin_memmove((R+4448),(R+4400),8);
}
B712e65:{NFSU2_TR(0x712e65);
__builtin_memmove((R+4372),(R+4432),4);
}
B712e68:{NFSU2_TR(0x712e68);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4436),4);
}
B712e6b:{NFSU2_TR(0x712e6b);
__builtin_memmove((R+4404),(R+4464),4);
}
B712e6e:{NFSU2_TR(0x712e6e);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4468),4);
}
B712e71:{NFSU2_TR(0x712e71);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),8);
__builtin_memmove((R+4432),(U+0),8);
}
B712e74:{NFSU2_TR(0x712e74);
u8 U[30];
__builtin_memmove((U+5),(R+4432),8);
__builtin_memmove((U+13),(R+4368),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4432),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4433),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4434),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4435),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4436),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4437),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4438),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4439),(U+21),1);
}
B712e77:{NFSU2_TR(0x712e77);
u8 U[8];
__builtin_memmove((U+0),(R+4432),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B712e7a:{NFSU2_TR(0x712e7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B712e7e:{NFSU2_TR(0x712e7e);
u8 U[30];
__builtin_memmove((U+5),(R+4464),8);
__builtin_memmove((U+13),(R+4384),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4464),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4465),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4466),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4467),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4468),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4469),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4470),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4471),(U+21),1);
}
B712e81:{NFSU2_TR(0x712e81);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4464),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712e85:{NFSU2_TR(0x712e85);
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
B712e88:{NFSU2_TR(0x712e88);
u8 U[30];
__builtin_memmove((U+5),(R+4416),8);
__builtin_memmove((U+13),(R+4448),8);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+22,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+22))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4416),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+23,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+23))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4417),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+24,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+24))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4418),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+25,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+25))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4419),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+26,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+26))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4420),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+27,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+27))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4421),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+28,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+28))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4422),(U+21),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+21,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+29,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(U+21,u8(u32(r1(U+21))+u32(r1(U+4))));
__builtin_memmove((R+4423),(U+21),1);
}
B712e8b:{NFSU2_TR(0x712e8b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4352),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712e8f:{NFSU2_TR(0x712e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B712e92:{NFSU2_TR(0x712e92);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4416),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B712e96:{NFSU2_TR(0x712e96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B712e97:{NFSU2_TR(0x712e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B712e98:{NFSU2_TR(0x712e98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B712e99:{NFSU2_TR(0x712e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B712e9a:{NFSU2_TR(0x712e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B712e9b:{NFSU2_TR(0x712e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B712e9c:{NFSU2_TR(0x712e9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B712ea0:{NFSU2_TR(0x712ea0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B712ea4:{NFSU2_TR(0x712ea4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B712ea6:{NFSU2_TR(0x712ea6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B712eaa:{NFSU2_TR(0x712eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B712ead:{NFSU2_TR(0x712ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B712eb0:{NFSU2_TR(0x712eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B712eb3:{NFSU2_TR(0x712eb3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B712eb5:{NFSU2_TR(0x712eb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B712eb9:{NFSU2_TR(0x712eb9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B712ebb:{NFSU2_TR(0x712ebb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B712ebf:{NFSU2_TR(0x712ebf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B712ec1:{NFSU2_TR(0x712ec1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B712ec5:{NFSU2_TR(0x712ec5);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B712ec7:{NFSU2_TR(0x712ec7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B712ecb:{NFSU2_TR(0x712ecb);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B712ecf:{NFSU2_TR(0x712ecf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B712ed1:{NFSU2_TR(0x712ed1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B712ed5:{NFSU2_TR(0x712ed5);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B712ed7:{NFSU2_TR(0x712ed7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+24))));
s4(u32(r4(R+0)),r4(U+0));
}
B712ed9:{NFSU2_TR(0x712ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B712edc:{NFSU2_TR(0x712edc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B712ee0:{NFSU2_TR(0x712ee0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B712ee2:{NFSU2_TR(0x712ee2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B712ee6:{NFSU2_TR(0x712ee6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B712ee8:{NFSU2_TR(0x712ee8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B712eec:{NFSU2_TR(0x712eec);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B712eee:{NFSU2_TR(0x712eee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B712ef2:{NFSU2_TR(0x712ef2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B712ef4:{NFSU2_TR(0x712ef4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B712ef8:{NFSU2_TR(0x712ef8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B712efa:{NFSU2_TR(0x712efa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B712efe:{NFSU2_TR(0x712efe);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B712f00:{NFSU2_TR(0x712f00);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B712f04:{NFSU2_TR(0x712f04);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B712f06:{NFSU2_TR(0x712f06);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B712f0a:{NFSU2_TR(0x712f0a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B712f0c:{NFSU2_TR(0x712f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B712f0e:{NFSU2_TR(0x712f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B712f11:{NFSU2_TR(0x712f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B712f14:L712f14:{c.instructions+=9;NFSU2_TR(0x712f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B712f18:{NFSU2_TR(0x712f18);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712f1a:{NFSU2_TR(0x712f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B712f1b:{NFSU2_TR(0x712f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B712f1e:{NFSU2_TR(0x712f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B712f21:{NFSU2_TR(0x712f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B712f24:{NFSU2_TR(0x712f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B712f27:{NFSU2_TR(0x712f27);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B712f2d:{NFSU2_TR(0x712f2d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x71202au);}goto L71202a;}}
}
B712f33:L712f33:{c.instructions+=7;NFSU2_TR(0x712f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B712f34:{NFSU2_TR(0x712f34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B712f35:{NFSU2_TR(0x712f35);
__builtin_memmove((R+16),(R+20),4);
}
B712f37:{NFSU2_TR(0x712f37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B712f38:{NFSU2_TR(0x712f38);
__builtin_memmove((R+16),(R+12),4);
}
B712f3a:{NFSU2_TR(0x712f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B712f3b:{NFSU2_TR(0x712f3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B712f3c:L712f3c:{c.instructions+=40;NFSU2_TR(0x712f3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712f3d:{NFSU2_TR(0x712f3d);
__builtin_memmove((R+12),(R+16),4);
}
B712f3f:{NFSU2_TR(0x712f3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712f40:{NFSU2_TR(0x712f40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712f41:{NFSU2_TR(0x712f41);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B712f44:{NFSU2_TR(0x712f44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B712f47:{NFSU2_TR(0x712f47);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712f48:{NFSU2_TR(0x712f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B712f4b:{NFSU2_TR(0x712f4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B712f4f:{NFSU2_TR(0x712f4f);
__builtin_memmove((R+20),(R+16),4);
}
B712f51:{NFSU2_TR(0x712f51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x988ull))));
}
B712f57:{NFSU2_TR(0x712f57);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B712f59:{NFSU2_TR(0x712f59);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0xffull))));
}
B712f5b:{NFSU2_TR(0x712f5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712f5c:{NFSU2_TR(0x712f5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B712f5d:{NFSU2_TR(0x712f5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7e8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B712f64:{NFSU2_TR(0x712f64);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7e9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B712f6a:{NFSU2_TR(0x712f6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7eaull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B712f71:{NFSU2_TR(0x712f71);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7ebull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B712f78:{NFSU2_TR(0x712f78);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7ecull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B712f7e:{NFSU2_TR(0x712f7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7edull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B712f84:{NFSU2_TR(0x712f84);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7eeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B712f8a:{NFSU2_TR(0x712f8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7efull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B712f91:{NFSU2_TR(0x712f91);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7f0ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B712f98:{NFSU2_TR(0x712f98);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7f1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B712f9f:{NFSU2_TR(0x712f9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7f2ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B712fa6:{NFSU2_TR(0x712fa6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7f3ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B712fad:{NFSU2_TR(0x712fad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7f4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B712fb4:{NFSU2_TR(0x712fb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7f5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B712fba:{NFSU2_TR(0x712fba);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7f6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B712fc0:{NFSU2_TR(0x712fc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7f7ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B712fc7:{NFSU2_TR(0x712fc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7f8ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B712fce:{NFSU2_TR(0x712fce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7f9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B712fd4:{NFSU2_TR(0x712fd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7faull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B712fdb:{NFSU2_TR(0x712fdb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7fbull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B712fe2:{NFSU2_TR(0x712fe2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7fcull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B712fe9:{NFSU2_TR(0x712fe9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7fdull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B712fef:{NFSU2_TR(0x712fef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7feull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B712ff6:{NFSU2_TR(0x712ff6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7ffull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B712ffd:{NFSU2_TR(0x712ffd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff800ull))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x713004u,713);
}
XIT:NFSU2_TR_EXIT(0x712,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
