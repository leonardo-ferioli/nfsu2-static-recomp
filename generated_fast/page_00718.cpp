#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_717(u8* __restrict R,Cpu& c);
u32 body_719(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x718,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x718,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_718(u8* __restrict R,Cpu& c);
u32 page_718(Cpu& c){return body_718(c.regs.data(),c);}
__attribute__((noinline)) u32 body_718(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x718005:goto L718005;
case 0x71800a:c.instructions+=99;goto B71800a;
case 0x71800e:c.instructions+=98;goto B71800e;
case 0x718012:c.instructions+=97;goto B718012;
case 0x718016:c.instructions+=96;goto B718016;
case 0x71801a:c.instructions+=95;goto B71801a;
case 0x71801f:c.instructions+=94;goto B71801f;
case 0x718024:c.instructions+=93;goto B718024;
case 0x718029:c.instructions+=92;goto B718029;
case 0x71802d:c.instructions+=91;goto B71802d;
case 0x718031:c.instructions+=90;goto B718031;
case 0x718035:c.instructions+=89;goto B718035;
case 0x718039:c.instructions+=88;goto B718039;
case 0x71803d:c.instructions+=87;goto B71803d;
case 0x718041:c.instructions+=86;goto B718041;
case 0x718045:c.instructions+=85;goto B718045;
case 0x718049:c.instructions+=84;goto B718049;
case 0x71804d:c.instructions+=83;goto B71804d;
case 0x718051:c.instructions+=82;goto B718051;
case 0x718055:c.instructions+=81;goto B718055;
case 0x718059:c.instructions+=80;goto B718059;
case 0x71805d:c.instructions+=79;goto B71805d;
case 0x718061:c.instructions+=78;goto B718061;
case 0x718065:c.instructions+=77;goto B718065;
case 0x718069:c.instructions+=76;goto B718069;
case 0x71806d:c.instructions+=75;goto B71806d;
case 0x718071:c.instructions+=74;goto B718071;
case 0x718075:c.instructions+=73;goto B718075;
case 0x718079:c.instructions+=72;goto B718079;
case 0x71807d:c.instructions+=71;goto B71807d;
case 0x718081:c.instructions+=70;goto B718081;
case 0x718085:c.instructions+=69;goto B718085;
case 0x718089:c.instructions+=68;goto B718089;
case 0x71808d:c.instructions+=67;goto B71808d;
case 0x718092:c.instructions+=66;goto B718092;
case 0x718097:c.instructions+=65;goto B718097;
case 0x71809b:c.instructions+=64;goto B71809b;
case 0x7180a0:c.instructions+=63;goto B7180a0;
case 0x7180a4:c.instructions+=62;goto B7180a4;
case 0x7180a8:c.instructions+=61;goto B7180a8;
case 0x7180ac:c.instructions+=60;goto B7180ac;
case 0x7180b1:c.instructions+=59;goto B7180b1;
case 0x7180b5:c.instructions+=58;goto B7180b5;
case 0x7180ba:c.instructions+=57;goto B7180ba;
case 0x7180bd:c.instructions+=56;goto B7180bd;
case 0x7180c2:c.instructions+=55;goto B7180c2;
case 0x7180c6:c.instructions+=54;goto B7180c6;
case 0x7180cb:c.instructions+=53;goto B7180cb;
case 0x7180d0:c.instructions+=52;goto B7180d0;
case 0x7180d5:c.instructions+=51;goto B7180d5;
case 0x7180da:c.instructions+=50;goto B7180da;
case 0x7180db:c.instructions+=49;goto B7180db;
case 0x7180dc:c.instructions+=48;goto B7180dc;
case 0x7180dd:c.instructions+=47;goto B7180dd;
case 0x7180de:c.instructions+=46;goto B7180de;
case 0x7180df:c.instructions+=45;goto B7180df;
case 0x7180e3:c.instructions+=44;goto B7180e3;
case 0x7180e7:c.instructions+=43;goto B7180e7;
case 0x7180e9:c.instructions+=42;goto B7180e9;
case 0x7180ed:c.instructions+=41;goto B7180ed;
case 0x7180f0:c.instructions+=40;goto B7180f0;
case 0x7180f3:c.instructions+=39;goto B7180f3;
case 0x7180f6:c.instructions+=38;goto B7180f6;
case 0x7180f8:c.instructions+=37;goto B7180f8;
case 0x7180fc:c.instructions+=36;goto B7180fc;
case 0x7180fe:c.instructions+=35;goto B7180fe;
case 0x718102:c.instructions+=34;goto B718102;
case 0x718104:c.instructions+=33;goto B718104;
case 0x718108:c.instructions+=32;goto B718108;
case 0x71810a:c.instructions+=31;goto B71810a;
case 0x71810e:c.instructions+=30;goto B71810e;
case 0x718110:c.instructions+=29;goto B718110;
case 0x718112:c.instructions+=28;goto B718112;
case 0x718116:c.instructions+=27;goto B718116;
case 0x718118:c.instructions+=26;goto B718118;
case 0x71811a:c.instructions+=25;goto B71811a;
case 0x71811d:c.instructions+=24;goto B71811d;
case 0x718121:c.instructions+=23;goto B718121;
case 0x718125:c.instructions+=22;goto B718125;
case 0x718129:c.instructions+=21;goto B718129;
case 0x71812b:c.instructions+=20;goto B71812b;
case 0x71812f:c.instructions+=19;goto B71812f;
case 0x718131:c.instructions+=18;goto B718131;
case 0x718135:c.instructions+=17;goto B718135;
case 0x718137:c.instructions+=16;goto B718137;
case 0x71813b:c.instructions+=15;goto B71813b;
case 0x71813d:c.instructions+=14;goto B71813d;
case 0x718141:c.instructions+=13;goto B718141;
case 0x718143:c.instructions+=12;goto B718143;
case 0x718147:c.instructions+=11;goto B718147;
case 0x718149:c.instructions+=10;goto B718149;
case 0x71814d:c.instructions+=9;goto B71814d;
case 0x71814f:c.instructions+=8;goto B71814f;
case 0x718151:c.instructions+=7;goto B718151;
case 0x718154:c.instructions+=6;goto B718154;
case 0x718158:c.instructions+=5;goto B718158;
case 0x71815c:c.instructions+=4;goto B71815c;
case 0x71815d:c.instructions+=3;goto B71815d;
case 0x718160:c.instructions+=2;goto B718160;
case 0x718163:c.instructions+=1;goto B718163;
case 0x718169:goto L718169;
case 0x71816a:c.instructions+=6;goto B71816a;
case 0x71816b:c.instructions+=5;goto B71816b;
case 0x71816d:c.instructions+=4;goto B71816d;
case 0x71816e:c.instructions+=3;goto B71816e;
case 0x718170:c.instructions+=2;goto B718170;
case 0x718171:c.instructions+=1;goto B718171;
case 0x718172:goto L718172;
case 0x718173:c.instructions+=31;goto B718173;
case 0x718175:c.instructions+=30;goto B718175;
case 0x718176:c.instructions+=29;goto B718176;
case 0x718177:c.instructions+=28;goto B718177;
case 0x71817a:c.instructions+=27;goto B71817a;
case 0x71817d:c.instructions+=26;goto B71817d;
case 0x71817e:c.instructions+=25;goto B71817e;
case 0x718181:c.instructions+=24;goto B718181;
case 0x718185:c.instructions+=23;goto B718185;
case 0x718187:c.instructions+=22;goto B718187;
case 0x71818d:c.instructions+=21;goto B71818d;
case 0x71818e:c.instructions+=20;goto B71818e;
case 0x71818f:c.instructions+=19;goto B71818f;
case 0x718192:c.instructions+=18;goto B718192;
case 0x718195:c.instructions+=17;goto B718195;
case 0x71819b:c.instructions+=16;goto B71819b;
case 0x71819e:c.instructions+=15;goto B71819e;
case 0x7181a1:c.instructions+=14;goto B7181a1;
case 0x7181a5:c.instructions+=13;goto B7181a5;
case 0x7181a9:c.instructions+=12;goto B7181a9;
case 0x7181ad:c.instructions+=11;goto B7181ad;
case 0x7181b1:c.instructions+=10;goto B7181b1;
case 0x7181b5:c.instructions+=9;goto B7181b5;
case 0x7181b9:c.instructions+=8;goto B7181b9;
case 0x7181bd:c.instructions+=7;goto B7181bd;
case 0x7181c1:c.instructions+=6;goto B7181c1;
case 0x7181c4:c.instructions+=5;goto B7181c4;
case 0x7181c6:c.instructions+=4;goto B7181c6;
case 0x7181c8:c.instructions+=3;goto B7181c8;
case 0x7181cb:c.instructions+=2;goto B7181cb;
case 0x7181ce:c.instructions+=1;goto B7181ce;
case 0x7181d4:goto L7181d4;
case 0x7181d7:c.instructions+=11;goto B7181d7;
case 0x7181da:c.instructions+=10;goto B7181da;
case 0x7181dd:c.instructions+=9;goto B7181dd;
case 0x7181e0:c.instructions+=8;goto B7181e0;
case 0x7181e3:c.instructions+=7;goto B7181e3;
case 0x7181e6:c.instructions+=6;goto B7181e6;
case 0x7181e9:c.instructions+=5;goto B7181e9;
case 0x7181ec:c.instructions+=4;goto B7181ec;
case 0x7181ee:c.instructions+=3;goto B7181ee;
case 0x7181f1:c.instructions+=2;goto B7181f1;
case 0x7181f4:c.instructions+=1;goto B7181f4;
case 0x7181f7:goto L7181f7;
case 0x7181fa:c.instructions+=388;goto B7181fa;
case 0x7181fd:c.instructions+=387;goto B7181fd;
case 0x718200:c.instructions+=386;goto B718200;
case 0x718203:c.instructions+=385;goto B718203;
case 0x718206:c.instructions+=384;goto B718206;
case 0x718209:c.instructions+=383;goto B718209;
case 0x71820c:c.instructions+=382;goto B71820c;
case 0x71820f:c.instructions+=381;goto B71820f;
case 0x718212:c.instructions+=380;goto B718212;
case 0x718215:c.instructions+=379;goto B718215;
case 0x718218:c.instructions+=378;goto B718218;
case 0x718219:c.instructions+=377;goto B718219;
case 0x71821a:c.instructions+=376;goto B71821a;
case 0x71821b:c.instructions+=375;goto B71821b;
case 0x71821c:c.instructions+=374;goto B71821c;
case 0x71821d:c.instructions+=373;goto B71821d;
case 0x718220:c.instructions+=372;goto B718220;
case 0x718222:c.instructions+=371;goto B718222;
case 0x718225:c.instructions+=370;goto B718225;
case 0x718229:c.instructions+=369;goto B718229;
case 0x71822c:c.instructions+=368;goto B71822c;
case 0x718231:c.instructions+=367;goto B718231;
case 0x718234:c.instructions+=366;goto B718234;
case 0x718237:c.instructions+=365;goto B718237;
case 0x71823a:c.instructions+=364;goto B71823a;
case 0x71823c:c.instructions+=363;goto B71823c;
case 0x718240:c.instructions+=362;goto B718240;
case 0x718244:c.instructions+=361;goto B718244;
case 0x718248:c.instructions+=360;goto B718248;
case 0x71824d:c.instructions+=359;goto B71824d;
case 0x718253:c.instructions+=358;goto B718253;
case 0x718257:c.instructions+=357;goto B718257;
case 0x71825a:c.instructions+=356;goto B71825a;
case 0x71825e:c.instructions+=355;goto B71825e;
case 0x718261:c.instructions+=354;goto B718261;
case 0x718264:c.instructions+=353;goto B718264;
case 0x718269:c.instructions+=352;goto B718269;
case 0x718271:c.instructions+=351;goto B718271;
case 0x718276:c.instructions+=350;goto B718276;
case 0x71827a:c.instructions+=349;goto B71827a;
case 0x71827e:c.instructions+=348;goto B71827e;
case 0x718282:c.instructions+=347;goto B718282;
case 0x718286:c.instructions+=346;goto B718286;
case 0x71828b:c.instructions+=345;goto B71828b;
case 0x718290:c.instructions+=344;goto B718290;
case 0x718295:c.instructions+=343;goto B718295;
case 0x718299:c.instructions+=342;goto B718299;
case 0x71829d:c.instructions+=341;goto B71829d;
case 0x7182a2:c.instructions+=340;goto B7182a2;
case 0x7182a7:c.instructions+=339;goto B7182a7;
case 0x7182aa:c.instructions+=338;goto B7182aa;
case 0x7182af:c.instructions+=337;goto B7182af;
case 0x7182b3:c.instructions+=336;goto B7182b3;
case 0x7182b7:c.instructions+=335;goto B7182b7;
case 0x7182bb:c.instructions+=334;goto B7182bb;
case 0x7182c0:c.instructions+=333;goto B7182c0;
case 0x7182c5:c.instructions+=332;goto B7182c5;
case 0x7182ca:c.instructions+=331;goto B7182ca;
case 0x7182cf:c.instructions+=330;goto B7182cf;
case 0x7182d3:c.instructions+=329;goto B7182d3;
case 0x7182d7:c.instructions+=328;goto B7182d7;
case 0x7182dc:c.instructions+=327;goto B7182dc;
case 0x7182e1:c.instructions+=326;goto B7182e1;
case 0x7182e4:c.instructions+=325;goto B7182e4;
case 0x7182e9:c.instructions+=324;goto B7182e9;
case 0x7182ed:c.instructions+=323;goto B7182ed;
case 0x7182f1:c.instructions+=322;goto B7182f1;
case 0x7182f5:c.instructions+=321;goto B7182f5;
case 0x7182fd:c.instructions+=320;goto B7182fd;
case 0x718305:c.instructions+=319;goto B718305;
case 0x718309:c.instructions+=318;goto B718309;
case 0x71830e:c.instructions+=317;goto B71830e;
case 0x718313:c.instructions+=316;goto B718313;
case 0x718318:c.instructions+=315;goto B718318;
case 0x71831d:c.instructions+=314;goto B71831d;
case 0x718321:c.instructions+=313;goto B718321;
case 0x718325:c.instructions+=312;goto B718325;
case 0x718329:c.instructions+=311;goto B718329;
case 0x71832d:c.instructions+=310;goto B71832d;
case 0x718331:c.instructions+=309;goto B718331;
case 0x718335:c.instructions+=308;goto B718335;
case 0x718339:c.instructions+=307;goto B718339;
case 0x71833d:c.instructions+=306;goto B71833d;
case 0x718342:c.instructions+=305;goto B718342;
case 0x718347:c.instructions+=304;goto B718347;
case 0x71834b:c.instructions+=303;goto B71834b;
case 0x71834f:c.instructions+=302;goto B71834f;
case 0x718353:c.instructions+=301;goto B718353;
case 0x718357:c.instructions+=300;goto B718357;
case 0x71835b:c.instructions+=299;goto B71835b;
case 0x71835f:c.instructions+=298;goto B71835f;
case 0x718363:c.instructions+=297;goto B718363;
case 0x718367:c.instructions+=296;goto B718367;
case 0x71836c:c.instructions+=295;goto B71836c;
case 0x718371:c.instructions+=294;goto B718371;
case 0x718375:c.instructions+=293;goto B718375;
case 0x718379:c.instructions+=292;goto B718379;
case 0x71837d:c.instructions+=291;goto B71837d;
case 0x718381:c.instructions+=290;goto B718381;
case 0x718385:c.instructions+=289;goto B718385;
case 0x718389:c.instructions+=288;goto B718389;
case 0x71838d:c.instructions+=287;goto B71838d;
case 0x718391:c.instructions+=286;goto B718391;
case 0x718396:c.instructions+=285;goto B718396;
case 0x71839e:c.instructions+=284;goto B71839e;
case 0x7183a2:c.instructions+=283;goto B7183a2;
case 0x7183a6:c.instructions+=282;goto B7183a6;
case 0x7183aa:c.instructions+=281;goto B7183aa;
case 0x7183ae:c.instructions+=280;goto B7183ae;
case 0x7183b2:c.instructions+=279;goto B7183b2;
case 0x7183b6:c.instructions+=278;goto B7183b6;
case 0x7183ba:c.instructions+=277;goto B7183ba;
case 0x7183be:c.instructions+=276;goto B7183be;
case 0x7183c2:c.instructions+=275;goto B7183c2;
case 0x7183c7:c.instructions+=274;goto B7183c7;
case 0x7183cb:c.instructions+=273;goto B7183cb;
case 0x7183cf:c.instructions+=272;goto B7183cf;
case 0x7183d3:c.instructions+=271;goto B7183d3;
case 0x7183d7:c.instructions+=270;goto B7183d7;
case 0x7183dc:c.instructions+=269;goto B7183dc;
case 0x7183e1:c.instructions+=268;goto B7183e1;
case 0x7183e6:c.instructions+=267;goto B7183e6;
case 0x7183eb:c.instructions+=266;goto B7183eb;
case 0x7183ef:c.instructions+=265;goto B7183ef;
case 0x7183f3:c.instructions+=264;goto B7183f3;
case 0x7183f7:c.instructions+=263;goto B7183f7;
case 0x7183fb:c.instructions+=262;goto B7183fb;
case 0x718403:c.instructions+=261;goto B718403;
case 0x718407:c.instructions+=260;goto B718407;
case 0x71840c:c.instructions+=259;goto B71840c;
case 0x718411:c.instructions+=258;goto B718411;
case 0x718415:c.instructions+=257;goto B718415;
case 0x718419:c.instructions+=256;goto B718419;
case 0x71841d:c.instructions+=255;goto B71841d;
case 0x718422:c.instructions+=254;goto B718422;
case 0x718427:c.instructions+=253;goto B718427;
case 0x71842c:c.instructions+=252;goto B71842c;
case 0x718431:c.instructions+=251;goto B718431;
case 0x718436:c.instructions+=250;goto B718436;
case 0x71843a:c.instructions+=249;goto B71843a;
case 0x71843e:c.instructions+=248;goto B71843e;
case 0x718443:c.instructions+=247;goto B718443;
case 0x718447:c.instructions+=246;goto B718447;
case 0x71844b:c.instructions+=245;goto B71844b;
case 0x71844f:c.instructions+=244;goto B71844f;
case 0x718453:c.instructions+=243;goto B718453;
case 0x718457:c.instructions+=242;goto B718457;
case 0x71845c:c.instructions+=241;goto B71845c;
case 0x718461:c.instructions+=240;goto B718461;
case 0x718465:c.instructions+=239;goto B718465;
case 0x71846a:c.instructions+=238;goto B71846a;
case 0x71846f:c.instructions+=237;goto B71846f;
case 0x718474:c.instructions+=236;goto B718474;
case 0x718479:c.instructions+=235;goto B718479;
case 0x71847e:c.instructions+=234;goto B71847e;
case 0x718482:c.instructions+=233;goto B718482;
case 0x718486:c.instructions+=232;goto B718486;
case 0x71848a:c.instructions+=231;goto B71848a;
case 0x71848e:c.instructions+=230;goto B71848e;
case 0x718496:c.instructions+=229;goto B718496;
case 0x71849a:c.instructions+=228;goto B71849a;
case 0x71849e:c.instructions+=227;goto B71849e;
case 0x7184a3:c.instructions+=226;goto B7184a3;
case 0x7184a7:c.instructions+=225;goto B7184a7;
case 0x7184ac:c.instructions+=224;goto B7184ac;
case 0x7184b0:c.instructions+=223;goto B7184b0;
case 0x7184b4:c.instructions+=222;goto B7184b4;
case 0x7184bc:c.instructions+=221;goto B7184bc;
case 0x7184c0:c.instructions+=220;goto B7184c0;
case 0x7184c4:c.instructions+=219;goto B7184c4;
case 0x7184c8:c.instructions+=218;goto B7184c8;
case 0x7184cd:c.instructions+=217;goto B7184cd;
case 0x7184d1:c.instructions+=216;goto B7184d1;
case 0x7184d5:c.instructions+=215;goto B7184d5;
case 0x7184d9:c.instructions+=214;goto B7184d9;
case 0x7184dd:c.instructions+=213;goto B7184dd;
case 0x7184e2:c.instructions+=212;goto B7184e2;
case 0x7184e7:c.instructions+=211;goto B7184e7;
case 0x7184eb:c.instructions+=210;goto B7184eb;
case 0x7184ef:c.instructions+=209;goto B7184ef;
case 0x7184f3:c.instructions+=208;goto B7184f3;
case 0x7184f7:c.instructions+=207;goto B7184f7;
case 0x7184fb:c.instructions+=206;goto B7184fb;
case 0x7184ff:c.instructions+=205;goto B7184ff;
case 0x718507:c.instructions+=204;goto B718507;
case 0x71850b:c.instructions+=203;goto B71850b;
case 0x718513:c.instructions+=202;goto B718513;
case 0x718517:c.instructions+=201;goto B718517;
case 0x71851c:c.instructions+=200;goto B71851c;
case 0x718520:c.instructions+=199;goto B718520;
case 0x718524:c.instructions+=198;goto B718524;
case 0x718528:c.instructions+=197;goto B718528;
case 0x71852c:c.instructions+=196;goto B71852c;
case 0x718530:c.instructions+=195;goto B718530;
case 0x718535:c.instructions+=194;goto B718535;
case 0x71853a:c.instructions+=193;goto B71853a;
case 0x71853e:c.instructions+=192;goto B71853e;
case 0x718542:c.instructions+=191;goto B718542;
case 0x718546:c.instructions+=190;goto B718546;
case 0x71854a:c.instructions+=189;goto B71854a;
case 0x718552:c.instructions+=188;goto B718552;
case 0x71855a:c.instructions+=187;goto B71855a;
case 0x71855e:c.instructions+=186;goto B71855e;
case 0x718562:c.instructions+=185;goto B718562;
case 0x718566:c.instructions+=184;goto B718566;
case 0x71856a:c.instructions+=183;goto B71856a;
case 0x71856e:c.instructions+=182;goto B71856e;
case 0x718573:c.instructions+=181;goto B718573;
case 0x718578:c.instructions+=180;goto B718578;
case 0x71857c:c.instructions+=179;goto B71857c;
case 0x718580:c.instructions+=178;goto B718580;
case 0x718584:c.instructions+=177;goto B718584;
case 0x718588:c.instructions+=176;goto B718588;
case 0x71858c:c.instructions+=175;goto B71858c;
case 0x718590:c.instructions+=174;goto B718590;
case 0x718594:c.instructions+=173;goto B718594;
case 0x718598:c.instructions+=172;goto B718598;
case 0x71859d:c.instructions+=171;goto B71859d;
case 0x7185a2:c.instructions+=170;goto B7185a2;
case 0x7185a7:c.instructions+=169;goto B7185a7;
case 0x7185ac:c.instructions+=168;goto B7185ac;
case 0x7185b4:c.instructions+=167;goto B7185b4;
case 0x7185b8:c.instructions+=166;goto B7185b8;
case 0x7185bc:c.instructions+=165;goto B7185bc;
case 0x7185c1:c.instructions+=164;goto B7185c1;
case 0x7185c5:c.instructions+=163;goto B7185c5;
case 0x7185ca:c.instructions+=162;goto B7185ca;
case 0x7185cf:c.instructions+=161;goto B7185cf;
case 0x7185d4:c.instructions+=160;goto B7185d4;
case 0x7185d9:c.instructions+=159;goto B7185d9;
case 0x7185dd:c.instructions+=158;goto B7185dd;
case 0x7185e1:c.instructions+=157;goto B7185e1;
case 0x7185e5:c.instructions+=156;goto B7185e5;
case 0x7185e9:c.instructions+=155;goto B7185e9;
case 0x7185ee:c.instructions+=154;goto B7185ee;
case 0x7185f3:c.instructions+=153;goto B7185f3;
case 0x7185f7:c.instructions+=152;goto B7185f7;
case 0x7185fc:c.instructions+=151;goto B7185fc;
case 0x718600:c.instructions+=150;goto B718600;
case 0x718604:c.instructions+=149;goto B718604;
case 0x718608:c.instructions+=148;goto B718608;
case 0x71860d:c.instructions+=147;goto B71860d;
case 0x718612:c.instructions+=146;goto B718612;
case 0x718617:c.instructions+=145;goto B718617;
case 0x71861b:c.instructions+=144;goto B71861b;
case 0x71861f:c.instructions+=143;goto B71861f;
case 0x718623:c.instructions+=142;goto B718623;
case 0x718627:c.instructions+=141;goto B718627;
case 0x71862c:c.instructions+=140;goto B71862c;
case 0x718631:c.instructions+=139;goto B718631;
case 0x718635:c.instructions+=138;goto B718635;
case 0x71863a:c.instructions+=137;goto B71863a;
case 0x71863e:c.instructions+=136;goto B71863e;
case 0x718642:c.instructions+=135;goto B718642;
case 0x718646:c.instructions+=134;goto B718646;
case 0x71864b:c.instructions+=133;goto B71864b;
case 0x718650:c.instructions+=132;goto B718650;
case 0x718655:c.instructions+=131;goto B718655;
case 0x718659:c.instructions+=130;goto B718659;
case 0x71865d:c.instructions+=129;goto B71865d;
case 0x718661:c.instructions+=128;goto B718661;
case 0x718665:c.instructions+=127;goto B718665;
case 0x718669:c.instructions+=126;goto B718669;
case 0x71866e:c.instructions+=125;goto B71866e;
case 0x718672:c.instructions+=124;goto B718672;
case 0x718677:c.instructions+=123;goto B718677;
case 0x71867b:c.instructions+=122;goto B71867b;
case 0x71867f:c.instructions+=121;goto B71867f;
case 0x718683:c.instructions+=120;goto B718683;
case 0x718687:c.instructions+=119;goto B718687;
case 0x71868c:c.instructions+=118;goto B71868c;
case 0x718691:c.instructions+=117;goto B718691;
case 0x718699:c.instructions+=116;goto B718699;
case 0x7186a1:c.instructions+=115;goto B7186a1;
case 0x7186a6:c.instructions+=114;goto B7186a6;
case 0x7186aa:c.instructions+=113;goto B7186aa;
case 0x7186ae:c.instructions+=112;goto B7186ae;
case 0x7186b2:c.instructions+=111;goto B7186b2;
case 0x7186b6:c.instructions+=110;goto B7186b6;
case 0x7186bb:c.instructions+=109;goto B7186bb;
case 0x7186c0:c.instructions+=108;goto B7186c0;
case 0x7186c5:c.instructions+=107;goto B7186c5;
case 0x7186cd:c.instructions+=106;goto B7186cd;
case 0x7186d1:c.instructions+=105;goto B7186d1;
case 0x7186d5:c.instructions+=104;goto B7186d5;
case 0x7186d9:c.instructions+=103;goto B7186d9;
case 0x7186de:c.instructions+=102;goto B7186de;
case 0x7186e3:c.instructions+=101;goto B7186e3;
case 0x7186eb:c.instructions+=100;goto B7186eb;
case 0x7186ef:c.instructions+=99;goto B7186ef;
case 0x7186f7:c.instructions+=98;goto B7186f7;
case 0x7186fc:c.instructions+=97;goto B7186fc;
case 0x718700:c.instructions+=96;goto B718700;
case 0x718704:c.instructions+=95;goto B718704;
case 0x718708:c.instructions+=94;goto B718708;
case 0x71870b:c.instructions+=93;goto B71870b;
case 0x71870f:c.instructions+=92;goto B71870f;
case 0x718714:c.instructions+=91;goto B718714;
case 0x718719:c.instructions+=90;goto B718719;
case 0x71871e:c.instructions+=89;goto B71871e;
case 0x718722:c.instructions+=88;goto B718722;
case 0x718726:c.instructions+=87;goto B718726;
case 0x71872a:c.instructions+=86;goto B71872a;
case 0x71872e:c.instructions+=85;goto B71872e;
case 0x718733:c.instructions+=84;goto B718733;
case 0x718738:c.instructions+=83;goto B718738;
case 0x71873d:c.instructions+=82;goto B71873d;
case 0x718741:c.instructions+=81;goto B718741;
case 0x718745:c.instructions+=80;goto B718745;
case 0x718749:c.instructions+=79;goto B718749;
case 0x71874d:c.instructions+=78;goto B71874d;
case 0x718752:c.instructions+=77;goto B718752;
case 0x718757:c.instructions+=76;goto B718757;
case 0x71875c:c.instructions+=75;goto B71875c;
case 0x718760:c.instructions+=74;goto B718760;
case 0x718764:c.instructions+=73;goto B718764;
case 0x718768:c.instructions+=72;goto B718768;
case 0x71876c:c.instructions+=71;goto B71876c;
case 0x718771:c.instructions+=70;goto B718771;
case 0x718776:c.instructions+=69;goto B718776;
case 0x71877b:c.instructions+=68;goto B71877b;
case 0x71877f:c.instructions+=67;goto B71877f;
case 0x718783:c.instructions+=66;goto B718783;
case 0x718787:c.instructions+=65;goto B718787;
case 0x71878b:c.instructions+=64;goto B71878b;
case 0x71878f:c.instructions+=63;goto B71878f;
case 0x718797:c.instructions+=62;goto B718797;
case 0x71879c:c.instructions+=61;goto B71879c;
case 0x7187a0:c.instructions+=60;goto B7187a0;
case 0x7187a4:c.instructions+=59;goto B7187a4;
case 0x7187a8:c.instructions+=58;goto B7187a8;
case 0x7187ac:c.instructions+=57;goto B7187ac;
case 0x7187b1:c.instructions+=56;goto B7187b1;
case 0x7187b6:c.instructions+=55;goto B7187b6;
case 0x7187bb:c.instructions+=54;goto B7187bb;
case 0x7187bf:c.instructions+=53;goto B7187bf;
case 0x7187c3:c.instructions+=52;goto B7187c3;
case 0x7187c7:c.instructions+=51;goto B7187c7;
case 0x7187cb:c.instructions+=50;goto B7187cb;
case 0x7187d0:c.instructions+=49;goto B7187d0;
case 0x7187d1:c.instructions+=48;goto B7187d1;
case 0x7187d2:c.instructions+=47;goto B7187d2;
case 0x7187d3:c.instructions+=46;goto B7187d3;
case 0x7187d4:c.instructions+=45;goto B7187d4;
case 0x7187d5:c.instructions+=44;goto B7187d5;
case 0x7187d9:c.instructions+=43;goto B7187d9;
case 0x7187dd:c.instructions+=42;goto B7187dd;
case 0x7187df:c.instructions+=41;goto B7187df;
case 0x7187e3:c.instructions+=40;goto B7187e3;
case 0x7187e5:c.instructions+=39;goto B7187e5;
case 0x7187e9:c.instructions+=38;goto B7187e9;
case 0x7187eb:c.instructions+=37;goto B7187eb;
case 0x7187ef:c.instructions+=36;goto B7187ef;
case 0x7187f2:c.instructions+=35;goto B7187f2;
case 0x7187f4:c.instructions+=34;goto B7187f4;
case 0x7187f8:c.instructions+=33;goto B7187f8;
case 0x7187fb:c.instructions+=32;goto B7187fb;
case 0x7187fe:c.instructions+=31;goto B7187fe;
case 0x718800:c.instructions+=30;goto B718800;
case 0x718804:c.instructions+=29;goto B718804;
case 0x718806:c.instructions+=28;goto B718806;
case 0x71880a:c.instructions+=27;goto B71880a;
case 0x71880c:c.instructions+=26;goto B71880c;
case 0x718810:c.instructions+=25;goto B718810;
case 0x718813:c.instructions+=24;goto B718813;
case 0x718815:c.instructions+=23;goto B718815;
case 0x718817:c.instructions+=22;goto B718817;
case 0x71881a:c.instructions+=21;goto B71881a;
case 0x71881d:c.instructions+=20;goto B71881d;
case 0x71881f:c.instructions+=19;goto B71881f;
case 0x718823:c.instructions+=18;goto B718823;
case 0x718825:c.instructions+=17;goto B718825;
case 0x718829:c.instructions+=16;goto B718829;
case 0x71882b:c.instructions+=15;goto B71882b;
case 0x71882f:c.instructions+=14;goto B71882f;
case 0x718831:c.instructions+=13;goto B718831;
case 0x718835:c.instructions+=12;goto B718835;
case 0x718837:c.instructions+=11;goto B718837;
case 0x71883b:c.instructions+=10;goto B71883b;
case 0x71883d:c.instructions+=9;goto B71883d;
case 0x718841:c.instructions+=8;goto B718841;
case 0x718843:c.instructions+=7;goto B718843;
case 0x718847:c.instructions+=6;goto B718847;
case 0x718849:c.instructions+=5;goto B718849;
case 0x71884b:c.instructions+=4;goto B71884b;
case 0x71884e:c.instructions+=3;goto B71884e;
case 0x718851:c.instructions+=2;goto B718851;
case 0x718854:c.instructions+=1;goto B718854;
case 0x71885a:goto L71885a;
case 0x71885d:c.instructions+=16;goto B71885d;
case 0x718860:c.instructions+=15;goto B718860;
case 0x718863:c.instructions+=14;goto B718863;
case 0x718866:c.instructions+=13;goto B718866;
case 0x718869:c.instructions+=12;goto B718869;
case 0x71886c:c.instructions+=11;goto B71886c;
case 0x71886f:c.instructions+=10;goto B71886f;
case 0x718873:c.instructions+=9;goto B718873;
case 0x718877:c.instructions+=8;goto B718877;
case 0x71887b:c.instructions+=7;goto B71887b;
case 0x71887f:c.instructions+=6;goto B71887f;
case 0x718883:c.instructions+=5;goto B718883;
case 0x718887:c.instructions+=4;goto B718887;
case 0x71888b:c.instructions+=3;goto B71888b;
case 0x71888f:c.instructions+=2;goto B71888f;
case 0x718892:c.instructions+=1;goto B718892;
case 0x718894:goto L718894;
case 0x718899:c.instructions+=7;goto B718899;
case 0x7188a1:c.instructions+=6;goto B7188a1;
case 0x7188a5:c.instructions+=5;goto B7188a5;
case 0x7188a8:c.instructions+=4;goto B7188a8;
case 0x7188b0:c.instructions+=3;goto B7188b0;
case 0x7188b1:c.instructions+=2;goto B7188b1;
case 0x7188b4:c.instructions+=1;goto B7188b4;
case 0x7188b6:goto L7188b6;
case 0x7188b7:c.instructions+=443;goto B7188b7;
case 0x7188b8:c.instructions+=442;goto B7188b8;
case 0x7188b9:c.instructions+=441;goto B7188b9;
case 0x7188ba:c.instructions+=440;goto B7188ba;
case 0x7188bb:c.instructions+=439;goto B7188bb;
case 0x7188c0:c.instructions+=438;goto B7188c0;
case 0x7188c8:c.instructions+=437;goto B7188c8;
case 0x7188cc:c.instructions+=436;goto B7188cc;
case 0x7188d0:c.instructions+=435;goto B7188d0;
case 0x7188d5:c.instructions+=434;goto B7188d5;
case 0x7188dd:c.instructions+=433;goto B7188dd;
case 0x7188e0:c.instructions+=432;goto B7188e0;
case 0x7188e2:c.instructions+=431;goto B7188e2;
case 0x7188e5:c.instructions+=430;goto B7188e5;
case 0x7188e8:c.instructions+=429;goto B7188e8;
case 0x7188eb:c.instructions+=428;goto B7188eb;
case 0x7188f1:c.instructions+=427;goto B7188f1;
case 0x7188f4:c.instructions+=426;goto B7188f4;
case 0x7188f6:c.instructions+=425;goto B7188f6;
case 0x7188f9:c.instructions+=424;goto B7188f9;
case 0x7188fc:c.instructions+=423;goto B7188fc;
case 0x718900:c.instructions+=422;goto B718900;
case 0x718904:c.instructions+=421;goto B718904;
case 0x718907:c.instructions+=420;goto B718907;
case 0x71890b:c.instructions+=419;goto B71890b;
case 0x71890e:c.instructions+=418;goto B71890e;
case 0x718911:c.instructions+=417;goto B718911;
case 0x718914:c.instructions+=416;goto B718914;
case 0x718917:c.instructions+=415;goto B718917;
case 0x71891a:c.instructions+=414;goto B71891a;
case 0x71891d:c.instructions+=413;goto B71891d;
case 0x718920:c.instructions+=412;goto B718920;
case 0x718923:c.instructions+=411;goto B718923;
case 0x718926:c.instructions+=410;goto B718926;
case 0x718929:c.instructions+=409;goto B718929;
case 0x71892c:c.instructions+=408;goto B71892c;
case 0x71892f:c.instructions+=407;goto B71892f;
case 0x718932:c.instructions+=406;goto B718932;
case 0x718935:c.instructions+=405;goto B718935;
case 0x718938:c.instructions+=404;goto B718938;
case 0x71893c:c.instructions+=403;goto B71893c;
case 0x71893f:c.instructions+=402;goto B71893f;
case 0x718942:c.instructions+=401;goto B718942;
case 0x718946:c.instructions+=400;goto B718946;
case 0x718949:c.instructions+=399;goto B718949;
case 0x71894c:c.instructions+=398;goto B71894c;
case 0x718950:c.instructions+=397;goto B718950;
case 0x718953:c.instructions+=396;goto B718953;
case 0x718956:c.instructions+=395;goto B718956;
case 0x71895a:c.instructions+=394;goto B71895a;
case 0x71895d:c.instructions+=393;goto B71895d;
case 0x718960:c.instructions+=392;goto B718960;
case 0x718964:c.instructions+=391;goto B718964;
case 0x718967:c.instructions+=390;goto B718967;
case 0x71896a:c.instructions+=389;goto B71896a;
case 0x71896e:c.instructions+=388;goto B71896e;
case 0x718971:c.instructions+=387;goto B718971;
case 0x718975:c.instructions+=386;goto B718975;
case 0x718979:c.instructions+=385;goto B718979;
case 0x71897d:c.instructions+=384;goto B71897d;
case 0x718980:c.instructions+=383;goto B718980;
case 0x718987:c.instructions+=382;goto B718987;
case 0x71898a:c.instructions+=381;goto B71898a;
case 0x71898e:c.instructions+=380;goto B71898e;
case 0x718991:c.instructions+=379;goto B718991;
case 0x718994:c.instructions+=378;goto B718994;
case 0x718997:c.instructions+=377;goto B718997;
case 0x71899a:c.instructions+=376;goto B71899a;
case 0x71899d:c.instructions+=375;goto B71899d;
case 0x7189a0:c.instructions+=374;goto B7189a0;
case 0x7189a3:c.instructions+=373;goto B7189a3;
case 0x7189a6:c.instructions+=372;goto B7189a6;
case 0x7189a9:c.instructions+=371;goto B7189a9;
case 0x7189ac:c.instructions+=370;goto B7189ac;
case 0x7189af:c.instructions+=369;goto B7189af;
case 0x7189b2:c.instructions+=368;goto B7189b2;
case 0x7189b5:c.instructions+=367;goto B7189b5;
case 0x7189b9:c.instructions+=366;goto B7189b9;
case 0x7189bc:c.instructions+=365;goto B7189bc;
case 0x7189bf:c.instructions+=364;goto B7189bf;
case 0x7189c3:c.instructions+=363;goto B7189c3;
case 0x7189c6:c.instructions+=362;goto B7189c6;
case 0x7189c9:c.instructions+=361;goto B7189c9;
case 0x7189cd:c.instructions+=360;goto B7189cd;
case 0x7189d0:c.instructions+=359;goto B7189d0;
case 0x7189d3:c.instructions+=358;goto B7189d3;
case 0x7189d7:c.instructions+=357;goto B7189d7;
case 0x7189da:c.instructions+=356;goto B7189da;
case 0x7189dd:c.instructions+=355;goto B7189dd;
case 0x7189e1:c.instructions+=354;goto B7189e1;
case 0x7189e4:c.instructions+=353;goto B7189e4;
case 0x7189e7:c.instructions+=352;goto B7189e7;
case 0x7189eb:c.instructions+=351;goto B7189eb;
case 0x7189ef:c.instructions+=350;goto B7189ef;
case 0x7189f6:c.instructions+=349;goto B7189f6;
case 0x7189fa:c.instructions+=348;goto B7189fa;
case 0x7189ff:c.instructions+=347;goto B7189ff;
case 0x718a04:c.instructions+=346;goto B718a04;
case 0x718a09:c.instructions+=345;goto B718a09;
case 0x718a0e:c.instructions+=344;goto B718a0e;
case 0x718a12:c.instructions+=343;goto B718a12;
case 0x718a16:c.instructions+=342;goto B718a16;
case 0x718a1a:c.instructions+=341;goto B718a1a;
case 0x718a1e:c.instructions+=340;goto B718a1e;
case 0x718a22:c.instructions+=339;goto B718a22;
case 0x718a26:c.instructions+=338;goto B718a26;
case 0x718a2a:c.instructions+=337;goto B718a2a;
case 0x718a2e:c.instructions+=336;goto B718a2e;
case 0x718a33:c.instructions+=335;goto B718a33;
case 0x718a38:c.instructions+=334;goto B718a38;
case 0x718a3c:c.instructions+=333;goto B718a3c;
case 0x718a40:c.instructions+=332;goto B718a40;
case 0x718a44:c.instructions+=331;goto B718a44;
case 0x718a48:c.instructions+=330;goto B718a48;
case 0x718a4c:c.instructions+=329;goto B718a4c;
case 0x718a50:c.instructions+=328;goto B718a50;
case 0x718a54:c.instructions+=327;goto B718a54;
case 0x718a58:c.instructions+=326;goto B718a58;
case 0x718a5d:c.instructions+=325;goto B718a5d;
case 0x718a62:c.instructions+=324;goto B718a62;
case 0x718a66:c.instructions+=323;goto B718a66;
case 0x718a6a:c.instructions+=322;goto B718a6a;
case 0x718a6e:c.instructions+=321;goto B718a6e;
case 0x718a72:c.instructions+=320;goto B718a72;
case 0x718a76:c.instructions+=319;goto B718a76;
case 0x718a7a:c.instructions+=318;goto B718a7a;
case 0x718a7e:c.instructions+=317;goto B718a7e;
case 0x718a82:c.instructions+=316;goto B718a82;
case 0x718a87:c.instructions+=315;goto B718a87;
case 0x718a8f:c.instructions+=314;goto B718a8f;
case 0x718a93:c.instructions+=313;goto B718a93;
case 0x718a97:c.instructions+=312;goto B718a97;
case 0x718a9b:c.instructions+=311;goto B718a9b;
case 0x718a9f:c.instructions+=310;goto B718a9f;
case 0x718aa3:c.instructions+=309;goto B718aa3;
case 0x718aa7:c.instructions+=308;goto B718aa7;
case 0x718aab:c.instructions+=307;goto B718aab;
case 0x718aaf:c.instructions+=306;goto B718aaf;
case 0x718ab3:c.instructions+=305;goto B718ab3;
case 0x718ab8:c.instructions+=304;goto B718ab8;
case 0x718abc:c.instructions+=303;goto B718abc;
case 0x718ac0:c.instructions+=302;goto B718ac0;
case 0x718ac4:c.instructions+=301;goto B718ac4;
case 0x718ac8:c.instructions+=300;goto B718ac8;
case 0x718acd:c.instructions+=299;goto B718acd;
case 0x718ad2:c.instructions+=298;goto B718ad2;
case 0x718ad7:c.instructions+=297;goto B718ad7;
case 0x718adc:c.instructions+=296;goto B718adc;
case 0x718ae0:c.instructions+=295;goto B718ae0;
case 0x718ae4:c.instructions+=294;goto B718ae4;
case 0x718ae8:c.instructions+=293;goto B718ae8;
case 0x718aec:c.instructions+=292;goto B718aec;
case 0x718af4:c.instructions+=291;goto B718af4;
case 0x718af8:c.instructions+=290;goto B718af8;
case 0x718afd:c.instructions+=289;goto B718afd;
case 0x718b02:c.instructions+=288;goto B718b02;
case 0x718b06:c.instructions+=287;goto B718b06;
case 0x718b0a:c.instructions+=286;goto B718b0a;
case 0x718b0e:c.instructions+=285;goto B718b0e;
case 0x718b13:c.instructions+=284;goto B718b13;
case 0x718b18:c.instructions+=283;goto B718b18;
case 0x718b1d:c.instructions+=282;goto B718b1d;
case 0x718b22:c.instructions+=281;goto B718b22;
case 0x718b27:c.instructions+=280;goto B718b27;
case 0x718b2b:c.instructions+=279;goto B718b2b;
case 0x718b2f:c.instructions+=278;goto B718b2f;
case 0x718b34:c.instructions+=277;goto B718b34;
case 0x718b38:c.instructions+=276;goto B718b38;
case 0x718b3c:c.instructions+=275;goto B718b3c;
case 0x718b40:c.instructions+=274;goto B718b40;
case 0x718b44:c.instructions+=273;goto B718b44;
case 0x718b48:c.instructions+=272;goto B718b48;
case 0x718b4d:c.instructions+=271;goto B718b4d;
case 0x718b52:c.instructions+=270;goto B718b52;
case 0x718b56:c.instructions+=269;goto B718b56;
case 0x718b5b:c.instructions+=268;goto B718b5b;
case 0x718b60:c.instructions+=267;goto B718b60;
case 0x718b65:c.instructions+=266;goto B718b65;
case 0x718b6a:c.instructions+=265;goto B718b6a;
case 0x718b6f:c.instructions+=264;goto B718b6f;
case 0x718b73:c.instructions+=263;goto B718b73;
case 0x718b77:c.instructions+=262;goto B718b77;
case 0x718b7b:c.instructions+=261;goto B718b7b;
case 0x718b7f:c.instructions+=260;goto B718b7f;
case 0x718b87:c.instructions+=259;goto B718b87;
case 0x718b8b:c.instructions+=258;goto B718b8b;
case 0x718b8f:c.instructions+=257;goto B718b8f;
case 0x718b94:c.instructions+=256;goto B718b94;
case 0x718b98:c.instructions+=255;goto B718b98;
case 0x718b9d:c.instructions+=254;goto B718b9d;
case 0x718ba1:c.instructions+=253;goto B718ba1;
case 0x718ba5:c.instructions+=252;goto B718ba5;
case 0x718bad:c.instructions+=251;goto B718bad;
case 0x718bb1:c.instructions+=250;goto B718bb1;
case 0x718bb5:c.instructions+=249;goto B718bb5;
case 0x718bb9:c.instructions+=248;goto B718bb9;
case 0x718bbe:c.instructions+=247;goto B718bbe;
case 0x718bc2:c.instructions+=246;goto B718bc2;
case 0x718bc6:c.instructions+=245;goto B718bc6;
case 0x718bca:c.instructions+=244;goto B718bca;
case 0x718bce:c.instructions+=243;goto B718bce;
case 0x718bd3:c.instructions+=242;goto B718bd3;
case 0x718bd8:c.instructions+=241;goto B718bd8;
case 0x718bdc:c.instructions+=240;goto B718bdc;
case 0x718be0:c.instructions+=239;goto B718be0;
case 0x718be4:c.instructions+=238;goto B718be4;
case 0x718be8:c.instructions+=237;goto B718be8;
case 0x718bec:c.instructions+=236;goto B718bec;
case 0x718bf0:c.instructions+=235;goto B718bf0;
case 0x718bf8:c.instructions+=234;goto B718bf8;
case 0x718bfc:c.instructions+=233;goto B718bfc;
case 0x718c04:c.instructions+=232;goto B718c04;
case 0x718c08:c.instructions+=231;goto B718c08;
case 0x718c0d:c.instructions+=230;goto B718c0d;
case 0x718c11:c.instructions+=229;goto B718c11;
case 0x718c15:c.instructions+=228;goto B718c15;
case 0x718c19:c.instructions+=227;goto B718c19;
case 0x718c1d:c.instructions+=226;goto B718c1d;
case 0x718c21:c.instructions+=225;goto B718c21;
case 0x718c26:c.instructions+=224;goto B718c26;
case 0x718c2b:c.instructions+=223;goto B718c2b;
case 0x718c2f:c.instructions+=222;goto B718c2f;
case 0x718c33:c.instructions+=221;goto B718c33;
case 0x718c37:c.instructions+=220;goto B718c37;
case 0x718c3b:c.instructions+=219;goto B718c3b;
case 0x718c43:c.instructions+=218;goto B718c43;
case 0x718c4b:c.instructions+=217;goto B718c4b;
case 0x718c4f:c.instructions+=216;goto B718c4f;
case 0x718c53:c.instructions+=215;goto B718c53;
case 0x718c57:c.instructions+=214;goto B718c57;
case 0x718c5b:c.instructions+=213;goto B718c5b;
case 0x718c5f:c.instructions+=212;goto B718c5f;
case 0x718c64:c.instructions+=211;goto B718c64;
case 0x718c69:c.instructions+=210;goto B718c69;
case 0x718c6d:c.instructions+=209;goto B718c6d;
case 0x718c71:c.instructions+=208;goto B718c71;
case 0x718c75:c.instructions+=207;goto B718c75;
case 0x718c79:c.instructions+=206;goto B718c79;
case 0x718c7d:c.instructions+=205;goto B718c7d;
case 0x718c81:c.instructions+=204;goto B718c81;
case 0x718c85:c.instructions+=203;goto B718c85;
case 0x718c89:c.instructions+=202;goto B718c89;
case 0x718c8e:c.instructions+=201;goto B718c8e;
case 0x718c93:c.instructions+=200;goto B718c93;
case 0x718c98:c.instructions+=199;goto B718c98;
case 0x718c9d:c.instructions+=198;goto B718c9d;
case 0x718ca5:c.instructions+=197;goto B718ca5;
case 0x718ca9:c.instructions+=196;goto B718ca9;
case 0x718cad:c.instructions+=195;goto B718cad;
case 0x718cb2:c.instructions+=194;goto B718cb2;
case 0x718cb6:c.instructions+=193;goto B718cb6;
case 0x718cbb:c.instructions+=192;goto B718cbb;
case 0x718cc0:c.instructions+=191;goto B718cc0;
case 0x718cc5:c.instructions+=190;goto B718cc5;
case 0x718cca:c.instructions+=189;goto B718cca;
case 0x718cce:c.instructions+=188;goto B718cce;
case 0x718cd2:c.instructions+=187;goto B718cd2;
case 0x718cd6:c.instructions+=186;goto B718cd6;
case 0x718cda:c.instructions+=185;goto B718cda;
case 0x718cde:c.instructions+=184;goto B718cde;
case 0x718ce3:c.instructions+=183;goto B718ce3;
case 0x718ce7:c.instructions+=182;goto B718ce7;
case 0x718cec:c.instructions+=181;goto B718cec;
case 0x718cf0:c.instructions+=180;goto B718cf0;
case 0x718cf4:c.instructions+=179;goto B718cf4;
case 0x718cf8:c.instructions+=178;goto B718cf8;
case 0x718cfd:c.instructions+=177;goto B718cfd;
case 0x718d02:c.instructions+=176;goto B718d02;
case 0x718d07:c.instructions+=175;goto B718d07;
case 0x718d0b:c.instructions+=174;goto B718d0b;
case 0x718d0f:c.instructions+=173;goto B718d0f;
case 0x718d13:c.instructions+=172;goto B718d13;
case 0x718d17:c.instructions+=171;goto B718d17;
case 0x718d1b:c.instructions+=170;goto B718d1b;
case 0x718d20:c.instructions+=169;goto B718d20;
case 0x718d24:c.instructions+=168;goto B718d24;
case 0x718d29:c.instructions+=167;goto B718d29;
case 0x718d2d:c.instructions+=166;goto B718d2d;
case 0x718d31:c.instructions+=165;goto B718d31;
case 0x718d35:c.instructions+=164;goto B718d35;
case 0x718d3a:c.instructions+=163;goto B718d3a;
case 0x718d3f:c.instructions+=162;goto B718d3f;
case 0x718d44:c.instructions+=161;goto B718d44;
case 0x718d48:c.instructions+=160;goto B718d48;
case 0x718d4c:c.instructions+=159;goto B718d4c;
case 0x718d50:c.instructions+=158;goto B718d50;
case 0x718d54:c.instructions+=157;goto B718d54;
case 0x718d58:c.instructions+=156;goto B718d58;
case 0x718d5d:c.instructions+=155;goto B718d5d;
case 0x718d61:c.instructions+=154;goto B718d61;
case 0x718d66:c.instructions+=153;goto B718d66;
case 0x718d6a:c.instructions+=152;goto B718d6a;
case 0x718d6e:c.instructions+=151;goto B718d6e;
case 0x718d72:c.instructions+=150;goto B718d72;
case 0x718d76:c.instructions+=149;goto B718d76;
case 0x718d7b:c.instructions+=148;goto B718d7b;
case 0x718d80:c.instructions+=147;goto B718d80;
case 0x718d88:c.instructions+=146;goto B718d88;
case 0x718d90:c.instructions+=145;goto B718d90;
case 0x718d95:c.instructions+=144;goto B718d95;
case 0x718d99:c.instructions+=143;goto B718d99;
case 0x718d9d:c.instructions+=142;goto B718d9d;
case 0x718da1:c.instructions+=141;goto B718da1;
case 0x718da5:c.instructions+=140;goto B718da5;
case 0x718da9:c.instructions+=139;goto B718da9;
case 0x718dae:c.instructions+=138;goto B718dae;
case 0x718db3:c.instructions+=137;goto B718db3;
case 0x718dbb:c.instructions+=136;goto B718dbb;
case 0x718dbf:c.instructions+=135;goto B718dbf;
case 0x718dc3:c.instructions+=134;goto B718dc3;
case 0x718dc7:c.instructions+=133;goto B718dc7;
case 0x718dcc:c.instructions+=132;goto B718dcc;
case 0x718dd1:c.instructions+=131;goto B718dd1;
case 0x718dd9:c.instructions+=130;goto B718dd9;
case 0x718ddd:c.instructions+=129;goto B718ddd;
case 0x718de5:c.instructions+=128;goto B718de5;
case 0x718dea:c.instructions+=127;goto B718dea;
case 0x718dee:c.instructions+=126;goto B718dee;
case 0x718df2:c.instructions+=125;goto B718df2;
case 0x718df6:c.instructions+=124;goto B718df6;
case 0x718dfa:c.instructions+=123;goto B718dfa;
case 0x718dfe:c.instructions+=122;goto B718dfe;
case 0x718e03:c.instructions+=121;goto B718e03;
case 0x718e08:c.instructions+=120;goto B718e08;
case 0x718e0c:c.instructions+=119;goto B718e0c;
case 0x718e10:c.instructions+=118;goto B718e10;
case 0x718e14:c.instructions+=117;goto B718e14;
case 0x718e18:c.instructions+=116;goto B718e18;
case 0x718e1d:c.instructions+=115;goto B718e1d;
case 0x718e22:c.instructions+=114;goto B718e22;
case 0x718e27:c.instructions+=113;goto B718e27;
case 0x718e2b:c.instructions+=112;goto B718e2b;
case 0x718e2f:c.instructions+=111;goto B718e2f;
case 0x718e33:c.instructions+=110;goto B718e33;
case 0x718e37:c.instructions+=109;goto B718e37;
case 0x718e3b:c.instructions+=108;goto B718e3b;
case 0x718e40:c.instructions+=107;goto B718e40;
case 0x718e45:c.instructions+=106;goto B718e45;
case 0x718e49:c.instructions+=105;goto B718e49;
case 0x718e4d:c.instructions+=104;goto B718e4d;
case 0x718e51:c.instructions+=103;goto B718e51;
case 0x718e55:c.instructions+=102;goto B718e55;
case 0x718e5a:c.instructions+=101;goto B718e5a;
case 0x718e5f:c.instructions+=100;goto B718e5f;
case 0x718e64:c.instructions+=99;goto B718e64;
case 0x718e68:c.instructions+=98;goto B718e68;
case 0x718e6c:c.instructions+=97;goto B718e6c;
case 0x718e70:c.instructions+=96;goto B718e70;
case 0x718e74:c.instructions+=95;goto B718e74;
case 0x718e78:c.instructions+=94;goto B718e78;
case 0x718e80:c.instructions+=93;goto B718e80;
case 0x718e85:c.instructions+=92;goto B718e85;
case 0x718e89:c.instructions+=91;goto B718e89;
case 0x718e8d:c.instructions+=90;goto B718e8d;
case 0x718e91:c.instructions+=89;goto B718e91;
case 0x718e95:c.instructions+=88;goto B718e95;
case 0x718e9a:c.instructions+=87;goto B718e9a;
case 0x718e9f:c.instructions+=86;goto B718e9f;
case 0x718ea4:c.instructions+=85;goto B718ea4;
case 0x718ea8:c.instructions+=84;goto B718ea8;
case 0x718eac:c.instructions+=83;goto B718eac;
case 0x718eb0:c.instructions+=82;goto B718eb0;
case 0x718eb4:c.instructions+=81;goto B718eb4;
case 0x718eb8:c.instructions+=80;goto B718eb8;
case 0x718ebc:c.instructions+=79;goto B718ebc;
case 0x718ec0:c.instructions+=78;goto B718ec0;
case 0x718ec4:c.instructions+=77;goto B718ec4;
case 0x718ec8:c.instructions+=76;goto B718ec8;
case 0x718ecc:c.instructions+=75;goto B718ecc;
case 0x718ed0:c.instructions+=74;goto B718ed0;
case 0x718ed4:c.instructions+=73;goto B718ed4;
case 0x718ed8:c.instructions+=72;goto B718ed8;
case 0x718edc:c.instructions+=71;goto B718edc;
case 0x718ee0:c.instructions+=70;goto B718ee0;
case 0x718ee4:c.instructions+=69;goto B718ee4;
case 0x718ee8:c.instructions+=68;goto B718ee8;
case 0x718eec:c.instructions+=67;goto B718eec;
case 0x718ef0:c.instructions+=66;goto B718ef0;
case 0x718ef4:c.instructions+=65;goto B718ef4;
case 0x718ef8:c.instructions+=64;goto B718ef8;
case 0x718efc:c.instructions+=63;goto B718efc;
case 0x718f00:c.instructions+=62;goto B718f00;
case 0x718f04:c.instructions+=61;goto B718f04;
case 0x718f08:c.instructions+=60;goto B718f08;
case 0x718f0d:c.instructions+=59;goto B718f0d;
case 0x718f12:c.instructions+=58;goto B718f12;
case 0x718f16:c.instructions+=57;goto B718f16;
case 0x718f1b:c.instructions+=56;goto B718f1b;
case 0x718f1f:c.instructions+=55;goto B718f1f;
case 0x718f23:c.instructions+=54;goto B718f23;
case 0x718f27:c.instructions+=53;goto B718f27;
case 0x718f2c:c.instructions+=52;goto B718f2c;
case 0x718f30:c.instructions+=51;goto B718f30;
case 0x718f35:c.instructions+=50;goto B718f35;
case 0x718f38:c.instructions+=49;goto B718f38;
case 0x718f3d:c.instructions+=48;goto B718f3d;
case 0x718f41:c.instructions+=47;goto B718f41;
case 0x718f46:c.instructions+=46;goto B718f46;
case 0x718f4b:c.instructions+=45;goto B718f4b;
case 0x718f50:c.instructions+=44;goto B718f50;
case 0x718f55:c.instructions+=43;goto B718f55;
case 0x718f56:c.instructions+=42;goto B718f56;
case 0x718f57:c.instructions+=41;goto B718f57;
case 0x718f58:c.instructions+=40;goto B718f58;
case 0x718f59:c.instructions+=39;goto B718f59;
case 0x718f5a:c.instructions+=38;goto B718f5a;
case 0x718f5e:c.instructions+=37;goto B718f5e;
case 0x718f62:c.instructions+=36;goto B718f62;
case 0x718f64:c.instructions+=35;goto B718f64;
case 0x718f68:c.instructions+=34;goto B718f68;
case 0x718f6b:c.instructions+=33;goto B718f6b;
case 0x718f6e:c.instructions+=32;goto B718f6e;
case 0x718f71:c.instructions+=31;goto B718f71;
case 0x718f73:c.instructions+=30;goto B718f73;
case 0x718f77:c.instructions+=29;goto B718f77;
case 0x718f79:c.instructions+=28;goto B718f79;
case 0x718f7d:c.instructions+=27;goto B718f7d;
case 0x718f7f:c.instructions+=26;goto B718f7f;
case 0x718f83:c.instructions+=25;goto B718f83;
case 0x718f85:c.instructions+=24;goto B718f85;
case 0x718f89:c.instructions+=23;goto B718f89;
case 0x718f8d:c.instructions+=22;goto B718f8d;
case 0x718f8f:c.instructions+=21;goto B718f8f;
case 0x718f93:c.instructions+=20;goto B718f93;
case 0x718f95:c.instructions+=19;goto B718f95;
case 0x718f97:c.instructions+=18;goto B718f97;
case 0x718f9a:c.instructions+=17;goto B718f9a;
case 0x718f9e:c.instructions+=16;goto B718f9e;
case 0x718fa0:c.instructions+=15;goto B718fa0;
case 0x718fa4:c.instructions+=14;goto B718fa4;
case 0x718fa6:c.instructions+=13;goto B718fa6;
case 0x718faa:c.instructions+=12;goto B718faa;
case 0x718fac:c.instructions+=11;goto B718fac;
case 0x718fb0:c.instructions+=10;goto B718fb0;
case 0x718fb2:c.instructions+=9;goto B718fb2;
case 0x718fb6:c.instructions+=8;goto B718fb6;
case 0x718fb8:c.instructions+=7;goto B718fb8;
case 0x718fbc:c.instructions+=6;goto B718fbc;
case 0x718fbe:c.instructions+=5;goto B718fbe;
case 0x718fc2:c.instructions+=4;goto B718fc2;
case 0x718fc4:c.instructions+=3;goto B718fc4;
case 0x718fc8:c.instructions+=2;goto B718fc8;
case 0x718fca:c.instructions+=1;goto B718fca;
case 0x718fcc:goto L718fcc;
case 0x718fd0:c.instructions+=10;goto B718fd0;
case 0x718fd2:c.instructions+=9;goto B718fd2;
case 0x718fd3:c.instructions+=8;goto B718fd3;
case 0x718fd6:c.instructions+=7;goto B718fd6;
case 0x718fd9:c.instructions+=6;goto B718fd9;
case 0x718fdc:c.instructions+=5;goto B718fdc;
case 0x718fdf:c.instructions+=4;goto B718fdf;
case 0x718fe2:c.instructions+=3;goto B718fe2;
case 0x718fe5:c.instructions+=2;goto B718fe5;
case 0x718fe8:c.instructions+=1;goto B718fe8;
case 0x718fee:goto L718fee;
case 0x718fef:c.instructions+=6;goto B718fef;
case 0x718ff0:c.instructions+=5;goto B718ff0;
case 0x718ff2:c.instructions+=4;goto B718ff2;
case 0x718ff3:c.instructions+=3;goto B718ff3;
case 0x718ff5:c.instructions+=2;goto B718ff5;
case 0x718ff6:c.instructions+=1;goto B718ff6;
case 0x718ff7:goto L718ff7;
case 0x718ff8:c.instructions+=5;goto B718ff8;
case 0x718ffa:c.instructions+=4;goto B718ffa;
case 0x718ffb:c.instructions+=3;goto B718ffb;
case 0x718ffc:c.instructions+=2;goto B718ffc;
case 0x718fff:c.instructions+=1;goto B718fff;
default:missing_instruction(c.pc);}
B718005:L718005:{c.instructions+=100;NFSU2_TR(0x718005);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(U+34))));
}
B71800a:{NFSU2_TR(0x71800a);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B71800e:{NFSU2_TR(0x71800e);
__builtin_memmove((R+4864),(R+4928),16);
}
B718012:{NFSU2_TR(0x718012);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718016:{NFSU2_TR(0x718016);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B71801a:{NFSU2_TR(0x71801a);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B71801f:{NFSU2_TR(0x71801f);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718024:{NFSU2_TR(0x718024);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718029:{NFSU2_TR(0x718029);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B71802d:{NFSU2_TR(0x71802d);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718031:{NFSU2_TR(0x718031);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718035:{NFSU2_TR(0x718035);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718039:{NFSU2_TR(0x718039);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+5056))));}
}
B71803d:{NFSU2_TR(0x71803d);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4352))));
}
B718041:{NFSU2_TR(0x718041);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4368))));
}
B718045:{NFSU2_TR(0x718045);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4384))));
}
B718049:{NFSU2_TR(0x718049);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4400))));
}
B71804d:{NFSU2_TR(0x71804d);
__builtin_memmove((R+4623),(R+4679),1);
__builtin_memmove((R+4622),(R+4615),1);
__builtin_memmove((R+4621),(R+4678),1);
__builtin_memmove((R+4620),(R+4614),1);
__builtin_memmove((R+4619),(R+4677),1);
__builtin_memmove((R+4618),(R+4613),1);
__builtin_memmove((R+4617),(R+4676),1);
__builtin_memmove((R+4616),(R+4612),1);
__builtin_memmove((R+4615),(R+4675),1);
__builtin_memmove((R+4614),(R+4611),1);
__builtin_memmove((R+4613),(R+4674),1);
__builtin_memmove((R+4612),(R+4610),1);
__builtin_memmove((R+4611),(R+4673),1);
__builtin_memmove((R+4610),(R+4609),1);
__builtin_memmove((R+4609),(R+4672),1);
}
B718051:{NFSU2_TR(0x718051);
__builtin_memmove((R+4751),(R+4807),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+4806),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+4805),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+4804),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+4803),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+4802),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+4801),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+4800),1);
}
B718055:{NFSU2_TR(0x718055);
__builtin_memmove((R+4672),(R+4608),16);
}
B718059:{NFSU2_TR(0x718059);
__builtin_memmove((R+4622),(R+4742),2);
__builtin_memmove((R+4620),(R+4614),2);
__builtin_memmove((R+4618),(R+4740),2);
__builtin_memmove((R+4616),(R+4612),2);
__builtin_memmove((R+4614),(R+4738),2);
__builtin_memmove((R+4612),(R+4610),2);
__builtin_memmove((R+4610),(R+4736),2);
}
B71805d:{NFSU2_TR(0x71805d);
__builtin_memmove((R+4672),(R+4680),2);
__builtin_memmove((R+4674),(R+4744),2);
__builtin_memmove((R+4676),(R+4682),2);
__builtin_memmove((R+4678),(R+4746),2);
__builtin_memmove((R+4680),(R+4684),2);
__builtin_memmove((R+4682),(R+4748),2);
__builtin_memmove((R+4684),(R+4686),2);
__builtin_memmove((R+4686),(R+4750),2);
}
B718061:{NFSU2_TR(0x718061);
wv<16>((R+4864),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4416))));
}
B718065:{NFSU2_TR(0x718065);
wv<16>((R+4928),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4432))));
}
B718069:{NFSU2_TR(0x718069);
wv<16>((R+4992),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B71806d:{NFSU2_TR(0x71806d);
wv<16>((R+5056),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4464))));
}
B718071:{NFSU2_TR(0x718071);
__builtin_memmove((R+4879),(R+4935),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4934),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4933),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4932),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4931),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4930),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4929),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4928),1);
}
B718075:{NFSU2_TR(0x718075);
__builtin_memmove((R+5007),(R+5063),1);
__builtin_memmove((R+5006),(R+4999),1);
__builtin_memmove((R+5005),(R+5062),1);
__builtin_memmove((R+5004),(R+4998),1);
__builtin_memmove((R+5003),(R+5061),1);
__builtin_memmove((R+5002),(R+4997),1);
__builtin_memmove((R+5001),(R+5060),1);
__builtin_memmove((R+5000),(R+4996),1);
__builtin_memmove((R+4999),(R+5059),1);
__builtin_memmove((R+4998),(R+4995),1);
__builtin_memmove((R+4997),(R+5058),1);
__builtin_memmove((R+4996),(R+4994),1);
__builtin_memmove((R+4995),(R+5057),1);
__builtin_memmove((R+4994),(R+4993),1);
__builtin_memmove((R+4993),(R+5056),1);
}
B718079:{NFSU2_TR(0x718079);
__builtin_memmove((R+4928),(R+4864),16);
}
B71807d:{NFSU2_TR(0x71807d);
__builtin_memmove((R+4878),(R+4998),2);
__builtin_memmove((R+4876),(R+4870),2);
__builtin_memmove((R+4874),(R+4996),2);
__builtin_memmove((R+4872),(R+4868),2);
__builtin_memmove((R+4870),(R+4994),2);
__builtin_memmove((R+4868),(R+4866),2);
__builtin_memmove((R+4866),(R+4992),2);
}
B718081:{NFSU2_TR(0x718081);
__builtin_memmove((R+4928),(R+4936),2);
__builtin_memmove((R+4930),(R+5000),2);
__builtin_memmove((R+4932),(R+4938),2);
__builtin_memmove((R+4934),(R+5002),2);
__builtin_memmove((R+4936),(R+4940),2);
__builtin_memmove((R+4938),(R+5004),2);
__builtin_memmove((R+4940),(R+4942),2);
__builtin_memmove((R+4942),(R+5006),2);
}
B718085:{NFSU2_TR(0x718085);
__builtin_memmove((R+4736),(R+4608),16);
}
B718089:{NFSU2_TR(0x718089);
__builtin_memmove((R+4620),(R+4868),4);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(R+4864),4);
}
B71808d:{NFSU2_TR(0x71808d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B718092:{NFSU2_TR(0x718092);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))*u32(u32(0x8ull))));
wv<16>((R+4608),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4608)),rv<4>((U+0))));
}
B718097:{NFSU2_TR(0x718097);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4872),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B71809b:{NFSU2_TR(0x71809b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7180a0:{NFSU2_TR(0x7180a0);
__builtin_memmove((R+4800),(R+4672),16);
}
B7180a4:{NFSU2_TR(0x7180a4);
__builtin_memmove((R+4684),(R+4932),4);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4676),(R+4928),4);
}
B7180a8:{NFSU2_TR(0x7180a8);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B7180ac:{NFSU2_TR(0x7180ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))*u32(u32(0x8ull))));
wv<16>((R+4736),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),rv<4>((U+0))));
}
B7180b1:{NFSU2_TR(0x7180b1);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4936),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B7180b5:{NFSU2_TR(0x7180b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7180ba:{NFSU2_TR(0x7180ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7180bd:{NFSU2_TR(0x7180bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4672),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7180c2:{NFSU2_TR(0x7180c2);
u8 U[8];
__builtin_memmove((U+0),(R+4800),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B7180c6:{NFSU2_TR(0x7180c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))*u32(u32(0x8ull))));
wv<16>((R+4672),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),rv<4>((U+0))));
}
B7180cb:{NFSU2_TR(0x7180cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))*u32(u32(0x8ull))));
wv<16>((R+4800),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),rv<4>((U+0))));
}
B7180d0:{NFSU2_TR(0x7180d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4672),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7180d5:{NFSU2_TR(0x7180d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4800),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7180da:{NFSU2_TR(0x7180da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7180db:{NFSU2_TR(0x7180db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7180dc:{NFSU2_TR(0x7180dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7180dd:{NFSU2_TR(0x7180dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7180de:{NFSU2_TR(0x7180de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7180df:{NFSU2_TR(0x7180df);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7180e3:{NFSU2_TR(0x7180e3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B7180e7:{NFSU2_TR(0x7180e7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7180e9:{NFSU2_TR(0x7180e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7180ed:{NFSU2_TR(0x7180ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7180f0:{NFSU2_TR(0x7180f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7180f3:{NFSU2_TR(0x7180f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7180f6:{NFSU2_TR(0x7180f6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7180f8:{NFSU2_TR(0x7180f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7180fc:{NFSU2_TR(0x7180fc);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7180fe:{NFSU2_TR(0x7180fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718102:{NFSU2_TR(0x718102);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718104:{NFSU2_TR(0x718104);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718108:{NFSU2_TR(0x718108);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71810a:{NFSU2_TR(0x71810a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B71810e:{NFSU2_TR(0x71810e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B718110:{NFSU2_TR(0x718110);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718112:{NFSU2_TR(0x718112);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718116:{NFSU2_TR(0x718116);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718118:{NFSU2_TR(0x718118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+24))));
s4(u32(r4(R+8)),r4(U+0));
}
B71811a:{NFSU2_TR(0x71811a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71811d:{NFSU2_TR(0x71811d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718121:{NFSU2_TR(0x718121);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B718125:{NFSU2_TR(0x718125);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B718129:{NFSU2_TR(0x718129);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B71812b:{NFSU2_TR(0x71812b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B71812f:{NFSU2_TR(0x71812f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718131:{NFSU2_TR(0x718131);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718135:{NFSU2_TR(0x718135);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718137:{NFSU2_TR(0x718137);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B71813b:{NFSU2_TR(0x71813b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B71813d:{NFSU2_TR(0x71813d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718141:{NFSU2_TR(0x718141);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718143:{NFSU2_TR(0x718143);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718147:{NFSU2_TR(0x718147);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718149:{NFSU2_TR(0x718149);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B71814d:{NFSU2_TR(0x71814d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B71814f:{NFSU2_TR(0x71814f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B718151:{NFSU2_TR(0x718151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B718154:{NFSU2_TR(0x718154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B718158:{NFSU2_TR(0x718158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B71815c:{NFSU2_TR(0x71815c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B71815d:{NFSU2_TR(0x71815d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B718160:{NFSU2_TR(0x718160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B718163:{NFSU2_TR(0x718163);
if(r1(R+512)){TAIL_STATIC(0x717a97u,717);}
}
B718169:L718169:{c.instructions+=7;NFSU2_TR(0x718169);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B71816a:{NFSU2_TR(0x71816a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B71816b:{NFSU2_TR(0x71816b);
__builtin_memmove((R+16),(R+20),4);
}
B71816d:{NFSU2_TR(0x71816d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B71816e:{NFSU2_TR(0x71816e);
__builtin_memmove((R+16),(R+12),4);
}
B718170:{NFSU2_TR(0x718170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B718171:{NFSU2_TR(0x718171);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B718172:L718172:{c.instructions+=32;NFSU2_TR(0x718172);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B718173:{NFSU2_TR(0x718173);
__builtin_memmove((R+12),(R+16),4);
}
B718175:{NFSU2_TR(0x718175);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B718176:{NFSU2_TR(0x718176);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B718177:{NFSU2_TR(0x718177);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B71817a:{NFSU2_TR(0x71817a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B71817d:{NFSU2_TR(0x71817d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71817e:{NFSU2_TR(0x71817e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B718181:{NFSU2_TR(0x718181);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B718185:{NFSU2_TR(0x718185);
__builtin_memmove((R+20),(R+16),4);
}
B718187:{NFSU2_TR(0x718187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x158ull))));
}
B71818d:{NFSU2_TR(0x71818d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71818e:{NFSU2_TR(0x71818e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71818f:{NFSU2_TR(0x71818f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718192:{NFSU2_TR(0x718192);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718195:{NFSU2_TR(0x718195);
__builtin_memmove((R+8),gp(0x8b9c4c),4);
}
B71819b:{NFSU2_TR(0x71819b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B71819e:{NFSU2_TR(0x71819e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7181a1:{NFSU2_TR(0x7181a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7181a5:{NFSU2_TR(0x7181a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff92ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7181a9:{NFSU2_TR(0x7181a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7181ad:{NFSU2_TR(0x7181ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff96ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7181b1:{NFSU2_TR(0x7181b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7181b5:{NFSU2_TR(0x7181b5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9aull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7181b9:{NFSU2_TR(0x7181b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7181bd:{NFSU2_TR(0x7181bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7181c1:{NFSU2_TR(0x7181c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7181c4:{NFSU2_TR(0x7181c4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7181c6:{NFSU2_TR(0x7181c6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7181c8:{NFSU2_TR(0x7181c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7181cb:{NFSU2_TR(0x7181cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7181ce:{NFSU2_TR(0x7181ce);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L718fee;}}
}
B7181d4:L7181d4:{c.instructions+=12;NFSU2_TR(0x7181d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7181d7:{NFSU2_TR(0x7181d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B7181da:{NFSU2_TR(0x7181da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7181dd:{NFSU2_TR(0x7181dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7181e0:{NFSU2_TR(0x7181e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7181e3:{NFSU2_TR(0x7181e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7181e6:{NFSU2_TR(0x7181e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7181e9:{NFSU2_TR(0x7181e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7181ec:{NFSU2_TR(0x7181ec);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B7181ee:{NFSU2_TR(0x7181ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7181f1:{NFSU2_TR(0x7181f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B7181f4:{NFSU2_TR(0x7181f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7181f7:L7181f7:{c.instructions+=389;NFSU2_TR(0x7181f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7181fa:{NFSU2_TR(0x7181fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7181fd:{NFSU2_TR(0x7181fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B718200:{NFSU2_TR(0x718200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718203:{NFSU2_TR(0x718203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B718206:{NFSU2_TR(0x718206);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718209:{NFSU2_TR(0x718209);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71820c:{NFSU2_TR(0x71820c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B71820f:{NFSU2_TR(0x71820f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B718212:{NFSU2_TR(0x718212);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B718215:{NFSU2_TR(0x718215);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B718218:{NFSU2_TR(0x718218);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B718219:{NFSU2_TR(0x718219);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71821a:{NFSU2_TR(0x71821a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71821b:{NFSU2_TR(0x71821b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71821c:{NFSU2_TR(0x71821c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B71821d:{NFSU2_TR(0x71821d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718220:{NFSU2_TR(0x718220);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B718222:{NFSU2_TR(0x718222);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B718225:{NFSU2_TR(0x718225);
u8 U[24];
w1(U+0,u8((r2(R+4992))==(r2(R+4992))));
w2(U+1,u16(r1(U+0)));
w2(R+4992,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4994))==(r2(R+4994))));
w2(U+4,u16(r1(U+3)));
w2(R+4994,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4996))==(r2(R+4996))));
w2(U+7,u16(r1(U+6)));
w2(R+4996,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4998))==(r2(R+4998))));
w2(U+10,u16(r1(U+9)));
w2(R+4998,u16(u32(r2(U+10))*u32(u16(0xffffull))));
w1(U+12,u8((r2(R+5000))==(r2(R+5000))));
w2(U+13,u16(r1(U+12)));
w2(R+5000,u16(u32(r2(U+13))*u32(u16(0xffffull))));
w1(U+15,u8((r2(R+5002))==(r2(R+5002))));
w2(U+16,u16(r1(U+15)));
w2(R+5002,u16(u32(r2(U+16))*u32(u16(0xffffull))));
w1(U+18,u8((r2(R+5004))==(r2(R+5004))));
w2(U+19,u16(r1(U+18)));
w2(R+5004,u16(u32(r2(U+19))*u32(u16(0xffffull))));
w1(U+21,u8((r2(R+5006))==(r2(R+5006))));
w2(U+22,u16(r1(U+21)));
w2(R+5006,u16(u32(r2(U+22))*u32(u16(0xffffull))));
}
B718229:{NFSU2_TR(0x718229);
w8(R+4432,u64(r4(R+0)));
}
B71822c:{NFSU2_TR(0x71822c);
w2(R+4992,shr<u16>(r2(R+4992),u64(u32(0xeull))));
w2(R+4994,shr<u16>(r2(R+4994),u64(u32(0xeull))));
w2(R+4996,shr<u16>(r2(R+4996),u64(u32(0xeull))));
w2(R+4998,shr<u16>(r2(R+4998),u64(u32(0xeull))));
w2(R+5000,shr<u16>(r2(R+5000),u64(u32(0xeull))));
w2(R+5002,shr<u16>(r2(R+5002),u64(u32(0xeull))));
w2(R+5004,shr<u16>(r2(R+5004),u64(u32(0xeull))));
w2(R+5006,shr<u16>(r2(R+5006),u64(u32(0xeull))));
}
B718231:{NFSU2_TR(0x718231);
__builtin_memmove((R+4438),(R+4434),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4432),2);
}
B718234:{NFSU2_TR(0x718234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718237:{NFSU2_TR(0x718237);
__builtin_memmove((R+4436),(R+4432),4);
}
B71823a:{NFSU2_TR(0x71823a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B71823c:{NFSU2_TR(0x71823c);
wv<16>((R+4928),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4432))));
}
B718240:{NFSU2_TR(0x718240);
__builtin_memmove((R+4936),(R+4928),8);
}
B718244:{NFSU2_TR(0x718244);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4928))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4930))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4932))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4934))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+4936))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+4938))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+4940))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+4942))));
}
B718248:{NFSU2_TR(0x718248);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71824d:{NFSU2_TR(0x71824d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B718253:{NFSU2_TR(0x718253);
wv<16>((R+5056),eval<Op::INT_XOR,16,16,16>(rv<16>((R+5056)),rv<16>((R+5056))));
}
B718257:{NFSU2_TR(0x718257);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71825a:{NFSU2_TR(0x71825a);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4928))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4930))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4932))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4934))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+4936))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+4938))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+4940))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+4942))));
}
B71825e:{NFSU2_TR(0x71825e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B718261:{NFSU2_TR(0x718261);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B718264:{NFSU2_TR(0x718264);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x5ull)));}
}
B718269:{NFSU2_TR(0x718269);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B718271:{NFSU2_TR(0x718271);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B718276:{NFSU2_TR(0x718276);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B71827a:{NFSU2_TR(0x71827a);
__builtin_memmove((R+4623),(R+5063),1);
__builtin_memmove((R+4622),(R+4615),1);
__builtin_memmove((R+4621),(R+5062),1);
__builtin_memmove((R+4620),(R+4614),1);
__builtin_memmove((R+4619),(R+5061),1);
__builtin_memmove((R+4618),(R+4613),1);
__builtin_memmove((R+4617),(R+5060),1);
__builtin_memmove((R+4616),(R+4612),1);
__builtin_memmove((R+4615),(R+5059),1);
__builtin_memmove((R+4614),(R+4611),1);
__builtin_memmove((R+4613),(R+5058),1);
__builtin_memmove((R+4612),(R+4610),1);
__builtin_memmove((R+4611),(R+5057),1);
__builtin_memmove((R+4610),(R+4609),1);
__builtin_memmove((R+4609),(R+5056),1);
}
B71827e:{NFSU2_TR(0x71827e);
__builtin_memmove((R+4687),(R+5063),1);
__builtin_memmove((R+4686),(R+4679),1);
__builtin_memmove((R+4685),(R+5062),1);
__builtin_memmove((R+4684),(R+4678),1);
__builtin_memmove((R+4683),(R+5061),1);
__builtin_memmove((R+4682),(R+4677),1);
__builtin_memmove((R+4681),(R+5060),1);
__builtin_memmove((R+4680),(R+4676),1);
__builtin_memmove((R+4679),(R+5059),1);
__builtin_memmove((R+4678),(R+4675),1);
__builtin_memmove((R+4677),(R+5058),1);
__builtin_memmove((R+4676),(R+4674),1);
__builtin_memmove((R+4675),(R+5057),1);
__builtin_memmove((R+4674),(R+4673),1);
__builtin_memmove((R+4673),(R+5056),1);
}
B718282:{NFSU2_TR(0x718282);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+28))),(U+0),16);
}
B718286:{NFSU2_TR(0x718286);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71828b:{NFSU2_TR(0x71828b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B718290:{NFSU2_TR(0x718290);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B718295:{NFSU2_TR(0x718295);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B718299:{NFSU2_TR(0x718299);
__builtin_memmove((R+4815),(R+5063),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+5062),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+5061),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+5060),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+5059),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+5058),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+5057),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+5056),1);
}
B71829d:{NFSU2_TR(0x71829d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B7182a2:{NFSU2_TR(0x7182a2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B7182a7:{NFSU2_TR(0x7182a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7182aa:{NFSU2_TR(0x7182aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B7182af:{NFSU2_TR(0x7182af);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B7182b3:{NFSU2_TR(0x7182b3);
__builtin_memmove((R+4623),(R+5063),1);
__builtin_memmove((R+4622),(R+4615),1);
__builtin_memmove((R+4621),(R+5062),1);
__builtin_memmove((R+4620),(R+4614),1);
__builtin_memmove((R+4619),(R+5061),1);
__builtin_memmove((R+4618),(R+4613),1);
__builtin_memmove((R+4617),(R+5060),1);
__builtin_memmove((R+4616),(R+4612),1);
__builtin_memmove((R+4615),(R+5059),1);
__builtin_memmove((R+4614),(R+4611),1);
__builtin_memmove((R+4613),(R+5058),1);
__builtin_memmove((R+4612),(R+4610),1);
__builtin_memmove((R+4611),(R+5057),1);
__builtin_memmove((R+4610),(R+4609),1);
__builtin_memmove((R+4609),(R+5056),1);
}
B7182b7:{NFSU2_TR(0x7182b7);
__builtin_memmove((R+4687),(R+5063),1);
__builtin_memmove((R+4686),(R+4679),1);
__builtin_memmove((R+4685),(R+5062),1);
__builtin_memmove((R+4684),(R+4678),1);
__builtin_memmove((R+4683),(R+5061),1);
__builtin_memmove((R+4682),(R+4677),1);
__builtin_memmove((R+4681),(R+5060),1);
__builtin_memmove((R+4680),(R+4676),1);
__builtin_memmove((R+4679),(R+5059),1);
__builtin_memmove((R+4678),(R+4675),1);
__builtin_memmove((R+4677),(R+5058),1);
__builtin_memmove((R+4676),(R+4674),1);
__builtin_memmove((R+4675),(R+5057),1);
__builtin_memmove((R+4674),(R+4673),1);
__builtin_memmove((R+4673),(R+5056),1);
}
B7182bb:{NFSU2_TR(0x7182bb);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B7182c0:{NFSU2_TR(0x7182c0);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B7182c5:{NFSU2_TR(0x7182c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B7182ca:{NFSU2_TR(0x7182ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B7182cf:{NFSU2_TR(0x7182cf);
__builtin_memmove((R+4751),(R+5063),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+5062),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+5061),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+5060),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+5059),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+5058),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+5057),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+5056),1);
}
B7182d3:{NFSU2_TR(0x7182d3);
__builtin_memmove((R+4815),(R+5063),1);
__builtin_memmove((R+4814),(R+4807),1);
__builtin_memmove((R+4813),(R+5062),1);
__builtin_memmove((R+4812),(R+4806),1);
__builtin_memmove((R+4811),(R+5061),1);
__builtin_memmove((R+4810),(R+4805),1);
__builtin_memmove((R+4809),(R+5060),1);
__builtin_memmove((R+4808),(R+4804),1);
__builtin_memmove((R+4807),(R+5059),1);
__builtin_memmove((R+4806),(R+4803),1);
__builtin_memmove((R+4805),(R+5058),1);
__builtin_memmove((R+4804),(R+4802),1);
__builtin_memmove((R+4803),(R+5057),1);
__builtin_memmove((R+4802),(R+4801),1);
__builtin_memmove((R+4801),(R+5056),1);
}
B7182d7:{NFSU2_TR(0x7182d7);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B7182dc:{NFSU2_TR(0x7182dc);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B7182e1:{NFSU2_TR(0x7182e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7182e4:{NFSU2_TR(0x7182e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((U+8))));
}
B7182e9:{NFSU2_TR(0x7182e9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((U+0))));
}
B7182ed:{NFSU2_TR(0x7182ed);
__builtin_memmove((R+4623),(R+5063),1);
__builtin_memmove((R+4622),(R+4615),1);
__builtin_memmove((R+4621),(R+5062),1);
__builtin_memmove((R+4620),(R+4614),1);
__builtin_memmove((R+4619),(R+5061),1);
__builtin_memmove((R+4618),(R+4613),1);
__builtin_memmove((R+4617),(R+5060),1);
__builtin_memmove((R+4616),(R+4612),1);
__builtin_memmove((R+4615),(R+5059),1);
__builtin_memmove((R+4614),(R+4611),1);
__builtin_memmove((R+4613),(R+5058),1);
__builtin_memmove((R+4612),(R+4610),1);
__builtin_memmove((R+4611),(R+5057),1);
__builtin_memmove((R+4610),(R+4609),1);
__builtin_memmove((R+4609),(R+5056),1);
}
B7182f1:{NFSU2_TR(0x7182f1);
__builtin_memmove((R+4687),(R+5063),1);
__builtin_memmove((R+4686),(R+4679),1);
__builtin_memmove((R+4685),(R+5062),1);
__builtin_memmove((R+4684),(R+4678),1);
__builtin_memmove((R+4683),(R+5061),1);
__builtin_memmove((R+4682),(R+4677),1);
__builtin_memmove((R+4681),(R+5060),1);
__builtin_memmove((R+4680),(R+4676),1);
__builtin_memmove((R+4679),(R+5059),1);
__builtin_memmove((R+4678),(R+4675),1);
__builtin_memmove((R+4677),(R+5058),1);
__builtin_memmove((R+4676),(R+4674),1);
__builtin_memmove((R+4675),(R+5057),1);
__builtin_memmove((R+4674),(R+4673),1);
__builtin_memmove((R+4673),(R+5056),1);
}
B7182f5:{NFSU2_TR(0x7182f5);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B7182fd:{NFSU2_TR(0x7182fd);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B718305:{NFSU2_TR(0x718305);
u8 U[24];
w1(U+0,u8((r2(R+4800))==(r2(R+4800))));
w2(U+1,u16(r1(U+0)));
w2(R+4800,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4802))==(r2(R+4802))));
w2(U+4,u16(r1(U+3)));
w2(R+4802,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4804))==(r2(R+4804))));
w2(U+7,u16(r1(U+6)));
w2(R+4804,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4806))==(r2(R+4806))));
w2(U+10,u16(r1(U+9)));
w2(R+4806,u16(u32(r2(U+10))*u32(u16(0xffffull))));
w1(U+12,u8((r2(R+4808))==(r2(R+4808))));
w2(U+13,u16(r1(U+12)));
w2(R+4808,u16(u32(r2(U+13))*u32(u16(0xffffull))));
w1(U+15,u8((r2(R+4810))==(r2(R+4810))));
w2(U+16,u16(r1(U+15)));
w2(R+4810,u16(u32(r2(U+16))*u32(u16(0xffffull))));
w1(U+18,u8((r2(R+4812))==(r2(R+4812))));
w2(U+19,u16(r1(U+18)));
w2(R+4812,u16(u32(r2(U+19))*u32(u16(0xffffull))));
w1(U+21,u8((r2(R+4814))==(r2(R+4814))));
w2(U+22,u16(r1(U+21)));
w2(R+4814,u16(u32(r2(U+22))*u32(u16(0xffffull))));
}
B718309:{NFSU2_TR(0x718309);
{wv<16>((R+4800),uo::psllw<16>(rv<16>((R+4800)),V(0xfull)));}
}
B71830e:{NFSU2_TR(0x71830e);
w2(R+4800,shr<u16>(r2(R+4800),u64(u32(0x8ull))));
w2(R+4802,shr<u16>(r2(R+4802),u64(u32(0x8ull))));
w2(R+4804,shr<u16>(r2(R+4804),u64(u32(0x8ull))));
w2(R+4806,shr<u16>(r2(R+4806),u64(u32(0x8ull))));
w2(R+4808,shr<u16>(r2(R+4808),u64(u32(0x8ull))));
w2(R+4810,shr<u16>(r2(R+4810),u64(u32(0x8ull))));
w2(R+4812,shr<u16>(r2(R+4812),u64(u32(0x8ull))));
w2(R+4814,shr<u16>(r2(R+4814),u64(u32(0x8ull))));
}
B718313:{NFSU2_TR(0x718313);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B718318:{NFSU2_TR(0x718318);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71831d:{NFSU2_TR(0x71831d);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B718321:{NFSU2_TR(0x718321);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B718325:{NFSU2_TR(0x718325);
__builtin_memmove((R+4608),(R+4736),16);
}
B718329:{NFSU2_TR(0x718329);
__builtin_memmove((R+4864),(R+4992),16);
}
B71832d:{NFSU2_TR(0x71832d);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B718331:{NFSU2_TR(0x718331);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B718335:{NFSU2_TR(0x718335);
__builtin_memmove((R+4672),(R+4736),16);
}
B718339:{NFSU2_TR(0x718339);
__builtin_memmove((R+4928),(R+4992),16);
}
B71833d:{NFSU2_TR(0x71833d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B718342:{NFSU2_TR(0x718342);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B718347:{NFSU2_TR(0x718347);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B71834b:{NFSU2_TR(0x71834b);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B71834f:{NFSU2_TR(0x71834f);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B718353:{NFSU2_TR(0x718353);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B718357:{NFSU2_TR(0x718357);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B71835b:{NFSU2_TR(0x71835b);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B71835f:{NFSU2_TR(0x71835f);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B718363:{NFSU2_TR(0x718363);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B718367:{NFSU2_TR(0x718367);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B71836c:{NFSU2_TR(0x71836c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B718371:{NFSU2_TR(0x718371);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B718375:{NFSU2_TR(0x718375);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B718379:{NFSU2_TR(0x718379);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B71837d:{NFSU2_TR(0x71837d);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B718381:{NFSU2_TR(0x718381);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B718385:{NFSU2_TR(0x718385);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B718389:{NFSU2_TR(0x718389);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B71838d:{NFSU2_TR(0x71838d);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B718391:{NFSU2_TR(0x718391);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B718396:{NFSU2_TR(0x718396);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71839e:{NFSU2_TR(0x71839e);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B7183a2:{NFSU2_TR(0x7183a2);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B7183a6:{NFSU2_TR(0x7183a6);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B7183aa:{NFSU2_TR(0x7183aa);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B7183ae:{NFSU2_TR(0x7183ae);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B7183b2:{NFSU2_TR(0x7183b2);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B7183b6:{NFSU2_TR(0x7183b6);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B7183ba:{NFSU2_TR(0x7183ba);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B7183be:{NFSU2_TR(0x7183be);
__builtin_memmove((R+5056),(R+4800),16);
}
B7183c2:{NFSU2_TR(0x7183c2);
w2(R+5056,shr<u16>(r2(R+5056),u64(u32(0x7ull))));
w2(R+5058,shr<u16>(r2(R+5058),u64(u32(0x7ull))));
w2(R+5060,shr<u16>(r2(R+5060),u64(u32(0x7ull))));
w2(R+5062,shr<u16>(r2(R+5062),u64(u32(0x7ull))));
w2(R+5064,shr<u16>(r2(R+5064),u64(u32(0x7ull))));
w2(R+5066,shr<u16>(r2(R+5066),u64(u32(0x7ull))));
w2(R+5068,shr<u16>(r2(R+5068),u64(u32(0x7ull))));
w2(R+5070,shr<u16>(r2(R+5070),u64(u32(0x7ull))));
}
B7183c7:{NFSU2_TR(0x7183c7);
__builtin_memmove((R+4736),(R+4608),16);
}
B7183cb:{NFSU2_TR(0x7183cb);
__builtin_memmove((R+4992),(R+4864),16);
}
B7183cf:{NFSU2_TR(0x7183cf);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+5056))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+5058))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+5060))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+5062))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5064))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5066))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5068))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5070))));
}
B7183d3:{NFSU2_TR(0x7183d3);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+5056))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+5058))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+5060))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+5062))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5064))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5066))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5068))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5070))));
}
B7183d7:{NFSU2_TR(0x7183d7);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0x1ull)));}
}
B7183dc:{NFSU2_TR(0x7183dc);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x1ull)));}
}
B7183e1:{NFSU2_TR(0x7183e1);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x1ull)));}
}
B7183e6:{NFSU2_TR(0x7183e6);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x1ull)));}
}
B7183eb:{NFSU2_TR(0x7183eb);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4622))));
}
B7183ef:{NFSU2_TR(0x7183ef);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4864))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4866))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4868))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4870))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+4872))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+4874))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+4876))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+4878))));
}
B7183f3:{NFSU2_TR(0x7183f3);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+4750))));
}
B7183f7:{NFSU2_TR(0x7183f7);
w2(R+4928,u16(u32(r2(R+4928))-u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))-u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))-u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))-u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))-u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))-u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))-u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))-u32(r2(R+5006))));
}
B7183fb:{NFSU2_TR(0x7183fb);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B718403:{NFSU2_TR(0x718403);
__builtin_memmove((R+4736),(R+4672),16);
}
B718407:{NFSU2_TR(0x718407);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B71840c:{NFSU2_TR(0x71840c);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B718411:{NFSU2_TR(0x718411);
__builtin_memmove((R+4992),(R+4928),16);
}
B718415:{NFSU2_TR(0x718415);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+5056))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+5058))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+5060))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+5062))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+5064))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+5066))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+5068))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+5070))));
}
B718419:{NFSU2_TR(0x718419);
w2(R+4928,u16(u32(r2(R+4928))-u32(r2(R+5056))));
w2(R+4930,u16(u32(r2(R+4930))-u32(r2(R+5058))));
w2(R+4932,u16(u32(r2(R+4932))-u32(r2(R+5060))));
w2(R+4934,u16(u32(r2(R+4934))-u32(r2(R+5062))));
w2(R+4936,u16(u32(r2(R+4936))-u32(r2(R+5064))));
w2(R+4938,u16(u32(r2(R+4938))-u32(r2(R+5066))));
w2(R+4940,u16(u32(r2(R+4940))-u32(r2(R+5068))));
w2(R+4942,u16(u32(r2(R+4942))-u32(r2(R+5070))));
}
B71841d:{NFSU2_TR(0x71841d);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0xfull)));}
}
B718422:{NFSU2_TR(0x718422);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0xfull)));}
}
B718427:{NFSU2_TR(0x718427);
{wv<16>((R+4672),uo::psraw<16>(rv<16>((R+4672)),V(0xfull)));}
}
B71842c:{NFSU2_TR(0x71842c);
{wv<16>((R+4928),uo::psraw<16>(rv<16>((R+4928)),V(0xfull)));}
}
B718431:{NFSU2_TR(0x718431);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B718436:{NFSU2_TR(0x718436);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4736))));
wv<16>((R+4736),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4672))));
}
B71843a:{NFSU2_TR(0x71843a);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4992))));
wv<16>((R+4992),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4928))));
}
B71843e:{NFSU2_TR(0x71843e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B718443:{NFSU2_TR(0x718443);
wv<16>((R+4992),eval<Op::INT_AND,16,16,16>(rv<16>((R+4992)),rv<16>((R+4736))));
}
B718447:{NFSU2_TR(0x718447);
__builtin_memmove((R+4736),(R+5056),16);
}
B71844b:{NFSU2_TR(0x71844b);
{wv<16>((R+5056),uo::psubusw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B71844f:{NFSU2_TR(0x71844f);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4736))));}
}
B718453:{NFSU2_TR(0x718453);
wv<16>((R+5056),eval<Op::INT_OR,16,16,16>(rv<16>((R+5056)),rv<16>((R+4864))));
}
B718457:{NFSU2_TR(0x718457);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+5056,u16(u32(r2(R+5056))-u32(r2(U+20))));
w2(R+5058,u16(u32(r2(R+5058))-u32(r2(U+22))));
w2(R+5060,u16(u32(r2(R+5060))-u32(r2(U+24))));
w2(R+5062,u16(u32(r2(R+5062))-u32(r2(U+26))));
w2(R+5064,u16(u32(r2(R+5064))-u32(r2(U+28))));
w2(R+5066,u16(u32(r2(R+5066))-u32(r2(U+30))));
w2(R+5068,u16(u32(r2(R+5068))-u32(r2(U+32))));
w2(R+5070,u16(u32(r2(R+5070))-u32(r2(U+34))));
}
B71845c:{NFSU2_TR(0x71845c);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0xfull)));}
}
B718461:{NFSU2_TR(0x718461);
wv<16>((R+5056),eval<Op::INT_AND,16,16,16>(rv<16>((R+5056)),rv<16>((R+4992))));
}
B718465:{NFSU2_TR(0x718465);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B71846a:{NFSU2_TR(0x71846a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B71846f:{NFSU2_TR(0x71846f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B718474:{NFSU2_TR(0x718474);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718479:{NFSU2_TR(0x718479);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B71847e:{NFSU2_TR(0x71847e);
w2(R+4928,u16(u32(r2(R+4928))-u32(r2(R+4864))));
w2(R+4930,u16(u32(r2(R+4930))-u32(r2(R+4866))));
w2(R+4932,u16(u32(r2(R+4932))-u32(r2(R+4868))));
w2(R+4934,u16(u32(r2(R+4934))-u32(r2(R+4870))));
w2(R+4936,u16(u32(r2(R+4936))-u32(r2(R+4872))));
w2(R+4938,u16(u32(r2(R+4938))-u32(r2(R+4874))));
w2(R+4940,u16(u32(r2(R+4940))-u32(r2(R+4876))));
w2(R+4942,u16(u32(r2(R+4942))-u32(r2(R+4878))));
}
B718482:{NFSU2_TR(0x718482);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4992))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4994))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4996))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4998))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+5000))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+5002))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+5004))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+5006))));
}
B718486:{NFSU2_TR(0x718486);
__builtin_memmove((R+4864),(R+4928),16);
}
B71848a:{NFSU2_TR(0x71848a);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B71848e:{NFSU2_TR(0x71848e);
u8 U[16];
__builtin_memmove((U+0),gp(0x8176c0),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+0))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+2))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+4))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+6))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+8))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+10))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+12))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+14))));
}
B718496:{NFSU2_TR(0x718496);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4864))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4866))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4868))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4870))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4872))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4874))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4876))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4878))));
}
B71849a:{NFSU2_TR(0x71849a);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4928))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4930))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4932))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4934))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4936))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4938))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4940))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4942))));
}
B71849e:{NFSU2_TR(0x71849e);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x3ull)));}
}
B7184a3:{NFSU2_TR(0x7184a3);
__builtin_memmove((R+4736),(R+4800),16);
}
B7184a7:{NFSU2_TR(0x7184a7);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0xfull)));}
}
B7184ac:{NFSU2_TR(0x7184ac);
wv<16>((R+4736),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4800))));
}
B7184b0:{NFSU2_TR(0x7184b0);
{wv<16>((R+4736),uo::psubsw<16>(rv<16>((R+4736)),rv<16>((R+4800))));}
}
B7184b4:{NFSU2_TR(0x7184b4);
wv<16>((R+4800),eval<Op::INT_OR,16,16,16>(rv<16>((R+4800)),rv<16>(gp(0x817710))));
}
B7184bc:{NFSU2_TR(0x7184bc);
__builtin_memmove((R+4864),(R+4672),16);
}
B7184c0:{NFSU2_TR(0x7184c0);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+4750))));
}
B7184c4:{NFSU2_TR(0x7184c4);
__builtin_memmove((R+4928),(R+4672),16);
}
B7184c8:{NFSU2_TR(0x7184c8);
{wv<16>((R+4672),uo::psraw<16>(rv<16>((R+4672)),V(0xfull)));}
}
B7184cd:{NFSU2_TR(0x7184cd);
wv<16>((R+4928),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4928)),rv<16>((R+4672))));
}
B7184d1:{NFSU2_TR(0x7184d1);
{wv<16>((R+4928),uo::psubsw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B7184d5:{NFSU2_TR(0x7184d5);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4928))));}
}
B7184d9:{NFSU2_TR(0x7184d9);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+4814))));
}
B7184dd:{NFSU2_TR(0x7184dd);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B7184e2:{NFSU2_TR(0x7184e2);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B7184e7:{NFSU2_TR(0x7184e7);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4864))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4866))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4868))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4870))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4872))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4874))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4876))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4878))));
}
B7184eb:{NFSU2_TR(0x7184eb);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4864))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4866))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4868))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4870))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4872))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4874))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4876))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4878))));
}
B7184ef:{NFSU2_TR(0x7184ef);
wv<16>((R+4992),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4992)),rv<16>((R+4992))));
}
B7184f3:{NFSU2_TR(0x7184f3);
u8 U[54];
__builtin_memmove((U+5),(R+4672),16);
__builtin_memmove((U+21),(R+4672),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4672),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4673),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4674),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4675),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4676),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4677),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4678),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4679),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4680),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4681),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4682),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4683),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4684),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4685),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4686),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4687),(U+37),1);
}
B7184f7:{NFSU2_TR(0x7184f7);
u8 U[54];
__builtin_memmove((U+5),(R+4736),16);
__builtin_memmove((U+21),(R+4736),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4736),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4737),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4738),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4739),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4740),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4741),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4742),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4743),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4744),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4745),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4746),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4747),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4748),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4749),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4750),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4751),(U+37),1);
}
B7184fb:{NFSU2_TR(0x7184fb);
__builtin_memmove((R+4687),(R+4999),1);
__builtin_memmove((R+4686),(R+4679),1);
__builtin_memmove((R+4685),(R+4998),1);
__builtin_memmove((R+4684),(R+4678),1);
__builtin_memmove((R+4683),(R+4997),1);
__builtin_memmove((R+4682),(R+4677),1);
__builtin_memmove((R+4681),(R+4996),1);
__builtin_memmove((R+4680),(R+4676),1);
__builtin_memmove((R+4679),(R+4995),1);
__builtin_memmove((R+4678),(R+4675),1);
__builtin_memmove((R+4677),(R+4994),1);
__builtin_memmove((R+4676),(R+4674),1);
__builtin_memmove((R+4675),(R+4993),1);
__builtin_memmove((R+4674),(R+4673),1);
__builtin_memmove((R+4673),(R+4992),1);
}
B7184ff:{NFSU2_TR(0x7184ff);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B718507:{NFSU2_TR(0x718507);
__builtin_memmove((R+4751),(R+4999),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+4998),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+4997),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+4996),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+4995),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+4994),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+4993),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+4992),1);
}
B71850b:{NFSU2_TR(0x71850b);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B718513:{NFSU2_TR(0x718513);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+28))),16);
__builtin_memmove((R+4928),(U+0),16);
}
B718517:{NFSU2_TR(0x718517);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71851c:{NFSU2_TR(0x71851c);
__builtin_memmove((R+4800),(R+4864),16);
}
B718520:{NFSU2_TR(0x718520);
__builtin_memmove((R+4992),(R+4928),16);
}
B718524:{NFSU2_TR(0x718524);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B718528:{NFSU2_TR(0x718528);
{wv<16>((R+4928),uo::psubusw<16>(rv<16>((R+4928)),rv<16>((R+4800))));}
}
B71852c:{NFSU2_TR(0x71852c);
wv<16>((R+4864),eval<Op::INT_OR,16,16,16>(rv<16>((R+4864)),rv<16>((R+4928))));
}
B718530:{NFSU2_TR(0x718530);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718535:{NFSU2_TR(0x718535);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0xfull)));}
}
B71853a:{NFSU2_TR(0x71853a);
__builtin_memmove((R+4672),(R+4864),16);
}
B71853e:{NFSU2_TR(0x71853e);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+4992))));
}
B718542:{NFSU2_TR(0x718542);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4672))));
wv<16>((R+4672),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4800))));
}
B718546:{NFSU2_TR(0x718546);
wv<16>((R+4672),eval<Op::INT_OR,16,16,16>(rv<16>((R+4672)),rv<16>((R+4864))));
}
B71854a:{NFSU2_TR(0x71854a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B718552:{NFSU2_TR(0x718552);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B71855a:{NFSU2_TR(0x71855a);
__builtin_memmove((R+4800),(R+4864),16);
}
B71855e:{NFSU2_TR(0x71855e);
__builtin_memmove((R+4992),(R+4928),16);
}
B718562:{NFSU2_TR(0x718562);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B718566:{NFSU2_TR(0x718566);
{wv<16>((R+4928),uo::psubusw<16>(rv<16>((R+4928)),rv<16>((R+4800))));}
}
B71856a:{NFSU2_TR(0x71856a);
wv<16>((R+4864),eval<Op::INT_OR,16,16,16>(rv<16>((R+4864)),rv<16>((R+4928))));
}
B71856e:{NFSU2_TR(0x71856e);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718573:{NFSU2_TR(0x718573);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0xfull)));}
}
B718578:{NFSU2_TR(0x718578);
__builtin_memmove((R+4736),(R+4864),16);
}
B71857c:{NFSU2_TR(0x71857c);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+4992))));
}
B718580:{NFSU2_TR(0x718580);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4736))));
wv<16>((R+4736),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4800))));
}
B718584:{NFSU2_TR(0x718584);
wv<16>((R+4736),eval<Op::INT_OR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4864))));
}
B718588:{NFSU2_TR(0x718588);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B71858c:{NFSU2_TR(0x71858c);
__builtin_memmove((R+4800),(R+4672),16);
}
B718590:{NFSU2_TR(0x718590);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4800))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4802))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4804))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4806))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4808))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4810))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4812))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4814))));
}
B718594:{NFSU2_TR(0x718594);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4686))));
}
B718598:{NFSU2_TR(0x718598);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B71859d:{NFSU2_TR(0x71859d);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B7185a2:{NFSU2_TR(0x7185a2);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B7185a7:{NFSU2_TR(0x7185a7);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B7185ac:{NFSU2_TR(0x7185ac);
u8 U[16];
__builtin_memmove((U+0),gp(0x8176c0),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+0))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+2))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+4))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+6))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+8))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+10))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+12))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+14))));
}
B7185b4:{NFSU2_TR(0x7185b4);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4864))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4866))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4868))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4870))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4872))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4874))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4876))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4878))));
}
B7185b8:{NFSU2_TR(0x7185b8);
__builtin_memmove((R+4864),(R+4800),16);
}
B7185bc:{NFSU2_TR(0x7185bc);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B7185c1:{NFSU2_TR(0x7185c1);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B7185c5:{NFSU2_TR(0x7185c5);
{wv<16>((R+4864),uo::psllw<16>(rv<16>((R+4864)),V(0x1ull)));}
}
B7185ca:{NFSU2_TR(0x7185ca);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B7185cf:{NFSU2_TR(0x7185cf);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B7185d4:{NFSU2_TR(0x7185d4);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B7185d9:{NFSU2_TR(0x7185d9);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B7185dd:{NFSU2_TR(0x7185dd);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B7185e1:{NFSU2_TR(0x7185e1);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B7185e5:{NFSU2_TR(0x7185e5);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B7185e9:{NFSU2_TR(0x7185e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7185ee:{NFSU2_TR(0x7185ee);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B7185f3:{NFSU2_TR(0x7185f3);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B7185f7:{NFSU2_TR(0x7185f7);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B7185fc:{NFSU2_TR(0x7185fc);
__builtin_memmove((R+4864),(R+4928),16);
}
B718600:{NFSU2_TR(0x718600);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718604:{NFSU2_TR(0x718604);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B718608:{NFSU2_TR(0x718608);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B71860d:{NFSU2_TR(0x71860d);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718612:{NFSU2_TR(0x718612);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718617:{NFSU2_TR(0x718617);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B71861b:{NFSU2_TR(0x71861b);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B71861f:{NFSU2_TR(0x71861f);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718623:{NFSU2_TR(0x718623);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718627:{NFSU2_TR(0x718627);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B71862c:{NFSU2_TR(0x71862c);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718631:{NFSU2_TR(0x718631);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B718635:{NFSU2_TR(0x718635);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B71863a:{NFSU2_TR(0x71863a);
__builtin_memmove((R+4864),(R+4928),16);
}
B71863e:{NFSU2_TR(0x71863e);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718642:{NFSU2_TR(0x718642);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B718646:{NFSU2_TR(0x718646);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B71864b:{NFSU2_TR(0x71864b);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718650:{NFSU2_TR(0x718650);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718655:{NFSU2_TR(0x718655);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718659:{NFSU2_TR(0x718659);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B71865d:{NFSU2_TR(0x71865d);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718661:{NFSU2_TR(0x718661);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718665:{NFSU2_TR(0x718665);
u8 U[8];
__builtin_memmove((U+0),(R+4864),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B718669:{NFSU2_TR(0x718669);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B71866e:{NFSU2_TR(0x71866e);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B718672:{NFSU2_TR(0x718672);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B718677:{NFSU2_TR(0x718677);
__builtin_memmove((R+4864),(R+4928),16);
}
B71867b:{NFSU2_TR(0x71867b);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71867f:{NFSU2_TR(0x71867f);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B718683:{NFSU2_TR(0x718683);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4672))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4674))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4676))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4678))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4680))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4682))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4684))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4686))));
}
B718687:{NFSU2_TR(0x718687);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B71868c:{NFSU2_TR(0x71868c);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718691:{NFSU2_TR(0x718691);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718699:{NFSU2_TR(0x718699);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B7186a1:{NFSU2_TR(0x7186a1);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B7186a6:{NFSU2_TR(0x7186a6);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B7186aa:{NFSU2_TR(0x7186aa);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B7186ae:{NFSU2_TR(0x7186ae);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B7186b2:{NFSU2_TR(0x7186b2);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B7186b6:{NFSU2_TR(0x7186b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7186bb:{NFSU2_TR(0x7186bb);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B7186c0:{NFSU2_TR(0x7186c0);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(U+34))));
}
B7186c5:{NFSU2_TR(0x7186c5);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B7186cd:{NFSU2_TR(0x7186cd);
__builtin_memmove((R+4864),(R+4928),16);
}
B7186d1:{NFSU2_TR(0x7186d1);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B7186d5:{NFSU2_TR(0x7186d5);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B7186d9:{NFSU2_TR(0x7186d9);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B7186de:{NFSU2_TR(0x7186de);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B7186e3:{NFSU2_TR(0x7186e3);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B7186eb:{NFSU2_TR(0x7186eb);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B7186ef:{NFSU2_TR(0x7186ef);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B7186f7:{NFSU2_TR(0x7186f7);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B7186fc:{NFSU2_TR(0x7186fc);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718700:{NFSU2_TR(0x718700);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718704:{NFSU2_TR(0x718704);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718708:{NFSU2_TR(0x718708);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B71870b:{NFSU2_TR(0x71870b);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B71870f:{NFSU2_TR(0x71870f);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B718714:{NFSU2_TR(0x718714);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718719:{NFSU2_TR(0x718719);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(U+34))));
}
B71871e:{NFSU2_TR(0x71871e);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B718722:{NFSU2_TR(0x718722);
__builtin_memmove((R+4864),(R+4928),16);
}
B718726:{NFSU2_TR(0x718726);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B71872a:{NFSU2_TR(0x71872a);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B71872e:{NFSU2_TR(0x71872e);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718733:{NFSU2_TR(0x718733);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718738:{NFSU2_TR(0x718738);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71873d:{NFSU2_TR(0x71873d);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718741:{NFSU2_TR(0x718741);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718745:{NFSU2_TR(0x718745);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718749:{NFSU2_TR(0x718749);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B71874d:{NFSU2_TR(0x71874d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B718752:{NFSU2_TR(0x718752);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718757:{NFSU2_TR(0x718757);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(U+34))));
}
B71875c:{NFSU2_TR(0x71875c);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B718760:{NFSU2_TR(0x718760);
__builtin_memmove((R+4864),(R+4928),16);
}
B718764:{NFSU2_TR(0x718764);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718768:{NFSU2_TR(0x718768);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B71876c:{NFSU2_TR(0x71876c);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718771:{NFSU2_TR(0x718771);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718776:{NFSU2_TR(0x718776);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B71877b:{NFSU2_TR(0x71877b);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B71877f:{NFSU2_TR(0x71877f);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718783:{NFSU2_TR(0x718783);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718787:{NFSU2_TR(0x718787);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B71878b:{NFSU2_TR(0x71878b);
u8 U[8];
__builtin_memmove((U+0),(R+4864),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B71878f:{NFSU2_TR(0x71878f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718797:{NFSU2_TR(0x718797);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(U+34))));
}
B71879c:{NFSU2_TR(0x71879c);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B7187a0:{NFSU2_TR(0x7187a0);
__builtin_memmove((R+4864),(R+4928),16);
}
B7187a4:{NFSU2_TR(0x7187a4);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B7187a8:{NFSU2_TR(0x7187a8);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B7187ac:{NFSU2_TR(0x7187ac);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B7187b1:{NFSU2_TR(0x7187b1);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B7187b6:{NFSU2_TR(0x7187b6);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B7187bb:{NFSU2_TR(0x7187bb);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B7187bf:{NFSU2_TR(0x7187bf);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B7187c3:{NFSU2_TR(0x7187c3);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B7187c7:{NFSU2_TR(0x7187c7);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B7187cb:{NFSU2_TR(0x7187cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4864),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B7187d0:{NFSU2_TR(0x7187d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7187d1:{NFSU2_TR(0x7187d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7187d2:{NFSU2_TR(0x7187d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7187d3:{NFSU2_TR(0x7187d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7187d4:{NFSU2_TR(0x7187d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7187d5:{NFSU2_TR(0x7187d5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7187d9:{NFSU2_TR(0x7187d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B7187dd:{NFSU2_TR(0x7187dd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7187df:{NFSU2_TR(0x7187df);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7187e3:{NFSU2_TR(0x7187e3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7187e5:{NFSU2_TR(0x7187e5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7187e9:{NFSU2_TR(0x7187e9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7187eb:{NFSU2_TR(0x7187eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7187ef:{NFSU2_TR(0x7187ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7187f2:{NFSU2_TR(0x7187f2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B7187f4:{NFSU2_TR(0x7187f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B7187f8:{NFSU2_TR(0x7187f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7187fb:{NFSU2_TR(0x7187fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7187fe:{NFSU2_TR(0x7187fe);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718800:{NFSU2_TR(0x718800);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718804:{NFSU2_TR(0x718804);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718806:{NFSU2_TR(0x718806);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B71880a:{NFSU2_TR(0x71880a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71880c:{NFSU2_TR(0x71880c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718810:{NFSU2_TR(0x718810);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B718813:{NFSU2_TR(0x718813);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B718815:{NFSU2_TR(0x718815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+24))));
s4(u32(r4(R+0)),r4(U+0));
}
B718817:{NFSU2_TR(0x718817);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71881a:{NFSU2_TR(0x71881a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B71881d:{NFSU2_TR(0x71881d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B71881f:{NFSU2_TR(0x71881f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B718823:{NFSU2_TR(0x718823);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718825:{NFSU2_TR(0x718825);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718829:{NFSU2_TR(0x718829);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71882b:{NFSU2_TR(0x71882b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B71882f:{NFSU2_TR(0x71882f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718831:{NFSU2_TR(0x718831);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718835:{NFSU2_TR(0x718835);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718837:{NFSU2_TR(0x718837);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B71883b:{NFSU2_TR(0x71883b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B71883d:{NFSU2_TR(0x71883d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718841:{NFSU2_TR(0x718841);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718843:{NFSU2_TR(0x718843);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718847:{NFSU2_TR(0x718847);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718849:{NFSU2_TR(0x718849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+24))));
s4(u32(r4(R+0)),r4(U+0));
}
B71884b:{NFSU2_TR(0x71884b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71884e:{NFSU2_TR(0x71884e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B718851:{NFSU2_TR(0x718851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B718854:{NFSU2_TR(0x718854);
if(r1(R+518)){{goto L718fcc;}}
}
B71885a:L71885a:{c.instructions+=17;NFSU2_TR(0x71885a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B71885d:{NFSU2_TR(0x71885d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B718860:{NFSU2_TR(0x718860);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B718863:{NFSU2_TR(0x718863);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718866:{NFSU2_TR(0x718866);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B718869:{NFSU2_TR(0x718869);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B71886c:{NFSU2_TR(0x71886c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B71886f:{NFSU2_TR(0x71886f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B718873:{NFSU2_TR(0x718873);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B718877:{NFSU2_TR(0x718877);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71887b:{NFSU2_TR(0x71887b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71887f:{NFSU2_TR(0x71887f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B718883:{NFSU2_TR(0x718883);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffaaull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B718887:{NFSU2_TR(0x718887);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71888b:{NFSU2_TR(0x71888b);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffaeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B71888f:{NFSU2_TR(0x71888f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718892:{NFSU2_TR(0x718892);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B718894:L718894:{c.instructions+=8;NFSU2_TR(0x718894);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+8,u16(r1(U+4)));
}
B718899:{NFSU2_TR(0x718899);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffeb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7188a1:{NFSU2_TR(0x7188a1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w2(R+8,u16(r1(U+0)));
}
B7188a5:{NFSU2_TR(0x7188a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B7188a8:{NFSU2_TR(0x7188a8);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffff40ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B7188b0:{NFSU2_TR(0x7188b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7188b1:{NFSU2_TR(0x7188b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B7188b4:{NFSU2_TR(0x7188b4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x718894u);}goto L718894;}}
}
B7188b6:L7188b6:{c.instructions+=444;NFSU2_TR(0x7188b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7188b7:{NFSU2_TR(0x7188b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7188b8:{NFSU2_TR(0x7188b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7188b9:{NFSU2_TR(0x7188b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7188ba:{NFSU2_TR(0x7188ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7188bb:{NFSU2_TR(0x7188bb);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4608),(U+4),16);
}
B7188c0:{NFSU2_TR(0x7188c0);
__builtin_memmove((R+4672),gp(0x8176b0),16);
}
B7188c8:{NFSU2_TR(0x7188c8);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(R+4608))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(R+4610))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(R+4612))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(R+4614))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(R+4616))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(R+4618))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(R+4620))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(R+4622))));
}
B7188cc:{NFSU2_TR(0x7188cc);
w2(R+4672,u16(u32(r2(R+4672))*u32(r2(R+4608))));
w2(R+4674,u16(u32(r2(R+4674))*u32(r2(R+4610))));
w2(R+4676,u16(u32(r2(R+4676))*u32(r2(R+4612))));
w2(R+4678,u16(u32(r2(R+4678))*u32(r2(R+4614))));
w2(R+4680,u16(u32(r2(R+4680))*u32(r2(R+4616))));
w2(R+4682,u16(u32(r2(R+4682))*u32(r2(R+4618))));
w2(R+4684,u16(u32(r2(R+4684))*u32(r2(R+4620))));
w2(R+4686,u16(u32(r2(R+4686))*u32(r2(R+4622))));
}
B7188d0:{NFSU2_TR(0x7188d0);
w2(R+4672,shr<u16>(r2(R+4672),u64(u32(0x5ull))));
w2(R+4674,shr<u16>(r2(R+4674),u64(u32(0x5ull))));
w2(R+4676,shr<u16>(r2(R+4676),u64(u32(0x5ull))));
w2(R+4678,shr<u16>(r2(R+4678),u64(u32(0x5ull))));
w2(R+4680,shr<u16>(r2(R+4680),u64(u32(0x5ull))));
w2(R+4682,shr<u16>(r2(R+4682),u64(u32(0x5ull))));
w2(R+4684,shr<u16>(r2(R+4684),u64(u32(0x5ull))));
w2(R+4686,shr<u16>(r2(R+4686),u64(u32(0x5ull))));
}
B7188d5:{NFSU2_TR(0x7188d5);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B7188dd:{NFSU2_TR(0x7188dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7188e0:{NFSU2_TR(0x7188e0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7188e2:{NFSU2_TR(0x7188e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7188e5:{NFSU2_TR(0x7188e5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B7188e8:{NFSU2_TR(0x7188e8);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x4ull))));
}
B7188eb:{NFSU2_TR(0x7188eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7188f1:{NFSU2_TR(0x7188f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7188f4:{NFSU2_TR(0x7188f4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B7188f6:{NFSU2_TR(0x7188f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B7188f9:{NFSU2_TR(0x7188f9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B7188fc:{NFSU2_TR(0x7188fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B718900:{NFSU2_TR(0x718900);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B718904:{NFSU2_TR(0x718904);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B718907:{NFSU2_TR(0x718907);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B71890b:{NFSU2_TR(0x71890b);
__builtin_memmove((R+4416),(R+4352),8);
}
B71890e:{NFSU2_TR(0x71890e);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B718911:{NFSU2_TR(0x718911);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B718914:{NFSU2_TR(0x718914);
__builtin_memmove((R+4432),(R+4384),8);
}
B718917:{NFSU2_TR(0x718917);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B71891a:{NFSU2_TR(0x71891a);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4404),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4405),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4406),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4407),1);
}
B71891d:{NFSU2_TR(0x71891d);
__builtin_memmove((R+4368),(R+4352),8);
}
B718920:{NFSU2_TR(0x718920);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B718923:{NFSU2_TR(0x718923);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B718926:{NFSU2_TR(0x718926);
__builtin_memmove((R+4384),(R+4416),8);
}
B718929:{NFSU2_TR(0x718929);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B71892c:{NFSU2_TR(0x71892c);
__builtin_memmove((R+4390),(R+4434),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4432),2);
}
B71892f:{NFSU2_TR(0x71892f);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B718932:{NFSU2_TR(0x718932);
__builtin_memmove((R+4432),(R+4352),8);
}
B718935:{NFSU2_TR(0x718935);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B718938:{NFSU2_TR(0x718938);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71893c:{NFSU2_TR(0x71893c);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B71893f:{NFSU2_TR(0x71893f);
__builtin_memmove((R+4352),(R+4368),8);
}
B718942:{NFSU2_TR(0x718942);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B718946:{NFSU2_TR(0x718946);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B718949:{NFSU2_TR(0x718949);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B71894c:{NFSU2_TR(0x71894c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B718950:{NFSU2_TR(0x718950);
__builtin_memmove((R+4400),(R+4384),8);
}
B718953:{NFSU2_TR(0x718953);
__builtin_memmove((R+4432),(R+4416),8);
}
B718956:{NFSU2_TR(0x718956);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71895a:{NFSU2_TR(0x71895a);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B71895d:{NFSU2_TR(0x71895d);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B718960:{NFSU2_TR(0x718960);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B718964:{NFSU2_TR(0x718964);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B718967:{NFSU2_TR(0x718967);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B71896a:{NFSU2_TR(0x71896a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B71896e:{NFSU2_TR(0x71896e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B718971:{NFSU2_TR(0x718971);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4368),(U+8),8);
}
B718975:{NFSU2_TR(0x718975);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B718979:{NFSU2_TR(0x718979);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4384),(U+8),8);
}
B71897d:{NFSU2_TR(0x71897d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B718980:{NFSU2_TR(0x718980);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B718987:{NFSU2_TR(0x718987);
__builtin_memmove((R+4416),(R+4352),8);
}
B71898a:{NFSU2_TR(0x71898a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4400),(U+8),8);
}
B71898e:{NFSU2_TR(0x71898e);
__builtin_memmove((R+4359),(R+4371),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4370),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4369),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4368),1);
}
B718991:{NFSU2_TR(0x718991);
__builtin_memmove((R+4416),(R+4420),1);
__builtin_memmove((R+4417),(R+4372),1);
__builtin_memmove((R+4418),(R+4421),1);
__builtin_memmove((R+4419),(R+4373),1);
__builtin_memmove((R+4420),(R+4422),1);
__builtin_memmove((R+4421),(R+4374),1);
__builtin_memmove((R+4422),(R+4423),1);
__builtin_memmove((R+4423),(R+4375),1);
}
B718994:{NFSU2_TR(0x718994);
__builtin_memmove((R+4432),(R+4384),8);
}
B718997:{NFSU2_TR(0x718997);
__builtin_memmove((R+4391),(R+4403),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4402),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4401),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4400),1);
}
B71899a:{NFSU2_TR(0x71899a);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4404),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4405),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4406),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4407),1);
}
B71899d:{NFSU2_TR(0x71899d);
__builtin_memmove((R+4368),(R+4352),8);
}
B7189a0:{NFSU2_TR(0x7189a0);
__builtin_memmove((R+4358),(R+4386),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4384),2);
}
B7189a3:{NFSU2_TR(0x7189a3);
__builtin_memmove((R+4368),(R+4372),2);
__builtin_memmove((R+4370),(R+4388),2);
__builtin_memmove((R+4372),(R+4374),2);
__builtin_memmove((R+4374),(R+4390),2);
}
B7189a6:{NFSU2_TR(0x7189a6);
__builtin_memmove((R+4384),(R+4416),8);
}
B7189a9:{NFSU2_TR(0x7189a9);
__builtin_memmove((R+4416),(R+4420),2);
__builtin_memmove((R+4418),(R+4436),2);
__builtin_memmove((R+4420),(R+4422),2);
__builtin_memmove((R+4422),(R+4438),2);
}
B7189ac:{NFSU2_TR(0x7189ac);
__builtin_memmove((R+4390),(R+4434),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4432),2);
}
B7189af:{NFSU2_TR(0x7189af);
__builtin_memmove((R+4432),(R+4352),8);
}
B7189b2:{NFSU2_TR(0x7189b2);
__builtin_memmove((R+4359),(R+4467),1);
__builtin_memmove((R+4358),(R+4355),1);
__builtin_memmove((R+4357),(R+4466),1);
__builtin_memmove((R+4356),(R+4354),1);
__builtin_memmove((R+4355),(R+4465),1);
__builtin_memmove((R+4354),(R+4353),1);
__builtin_memmove((R+4353),(R+4464),1);
}
B7189b5:{NFSU2_TR(0x7189b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7189b9:{NFSU2_TR(0x7189b9);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B7189bc:{NFSU2_TR(0x7189bc);
__builtin_memmove((R+4352),(R+4368),8);
}
B7189bf:{NFSU2_TR(0x7189bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7189c3:{NFSU2_TR(0x7189c3);
__builtin_memmove((R+4375),(R+4467),1);
__builtin_memmove((R+4374),(R+4371),1);
__builtin_memmove((R+4373),(R+4466),1);
__builtin_memmove((R+4372),(R+4370),1);
__builtin_memmove((R+4371),(R+4465),1);
__builtin_memmove((R+4370),(R+4369),1);
__builtin_memmove((R+4369),(R+4464),1);
}
B7189c6:{NFSU2_TR(0x7189c6);
__builtin_memmove((R+4352),(R+4356),1);
__builtin_memmove((R+4353),(R+4468),1);
__builtin_memmove((R+4354),(R+4357),1);
__builtin_memmove((R+4355),(R+4469),1);
__builtin_memmove((R+4356),(R+4358),1);
__builtin_memmove((R+4357),(R+4470),1);
__builtin_memmove((R+4358),(R+4359),1);
__builtin_memmove((R+4359),(R+4471),1);
}
B7189c9:{NFSU2_TR(0x7189c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7189cd:{NFSU2_TR(0x7189cd);
__builtin_memmove((R+4400),(R+4384),8);
}
B7189d0:{NFSU2_TR(0x7189d0);
__builtin_memmove((R+4432),(R+4416),8);
}
B7189d3:{NFSU2_TR(0x7189d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7189d7:{NFSU2_TR(0x7189d7);
__builtin_memmove((R+4391),(R+4467),1);
__builtin_memmove((R+4390),(R+4387),1);
__builtin_memmove((R+4389),(R+4466),1);
__builtin_memmove((R+4388),(R+4386),1);
__builtin_memmove((R+4387),(R+4465),1);
__builtin_memmove((R+4386),(R+4385),1);
__builtin_memmove((R+4385),(R+4464),1);
}
B7189da:{NFSU2_TR(0x7189da);
__builtin_memmove((R+4400),(R+4404),1);
__builtin_memmove((R+4401),(R+4468),1);
__builtin_memmove((R+4402),(R+4405),1);
__builtin_memmove((R+4403),(R+4469),1);
__builtin_memmove((R+4404),(R+4406),1);
__builtin_memmove((R+4405),(R+4470),1);
__builtin_memmove((R+4406),(R+4407),1);
__builtin_memmove((R+4407),(R+4471),1);
}
B7189dd:{NFSU2_TR(0x7189dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7189e1:{NFSU2_TR(0x7189e1);
__builtin_memmove((R+4423),(R+4467),1);
__builtin_memmove((R+4422),(R+4419),1);
__builtin_memmove((R+4421),(R+4466),1);
__builtin_memmove((R+4420),(R+4418),1);
__builtin_memmove((R+4419),(R+4465),1);
__builtin_memmove((R+4418),(R+4417),1);
__builtin_memmove((R+4417),(R+4464),1);
}
B7189e4:{NFSU2_TR(0x7189e4);
__builtin_memmove((R+4432),(R+4436),1);
__builtin_memmove((R+4433),(R+4468),1);
__builtin_memmove((R+4434),(R+4437),1);
__builtin_memmove((R+4435),(R+4469),1);
__builtin_memmove((R+4436),(R+4438),1);
__builtin_memmove((R+4437),(R+4470),1);
__builtin_memmove((R+4438),(R+4439),1);
__builtin_memmove((R+4439),(R+4471),1);
}
B7189e7:{NFSU2_TR(0x7189e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7189eb:{NFSU2_TR(0x7189eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7189ef:{NFSU2_TR(0x7189ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B7189f6:{NFSU2_TR(0x7189f6);
u8 U[24];
w1(U+0,u8((r2(R+4800))==(r2(R+4800))));
w2(U+1,u16(r1(U+0)));
w2(R+4800,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4802))==(r2(R+4802))));
w2(U+4,u16(r1(U+3)));
w2(R+4802,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4804))==(r2(R+4804))));
w2(U+7,u16(r1(U+6)));
w2(R+4804,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4806))==(r2(R+4806))));
w2(U+10,u16(r1(U+9)));
w2(R+4806,u16(u32(r2(U+10))*u32(u16(0xffffull))));
w1(U+12,u8((r2(R+4808))==(r2(R+4808))));
w2(U+13,u16(r1(U+12)));
w2(R+4808,u16(u32(r2(U+13))*u32(u16(0xffffull))));
w1(U+15,u8((r2(R+4810))==(r2(R+4810))));
w2(U+16,u16(r1(U+15)));
w2(R+4810,u16(u32(r2(U+16))*u32(u16(0xffffull))));
w1(U+18,u8((r2(R+4812))==(r2(R+4812))));
w2(U+19,u16(r1(U+18)));
w2(R+4812,u16(u32(r2(U+19))*u32(u16(0xffffull))));
w1(U+21,u8((r2(R+4814))==(r2(R+4814))));
w2(U+22,u16(r1(U+21)));
w2(R+4814,u16(u32(r2(U+22))*u32(u16(0xffffull))));
}
B7189fa:{NFSU2_TR(0x7189fa);
{wv<16>((R+4800),uo::psllw<16>(rv<16>((R+4800)),V(0xfull)));}
}
B7189ff:{NFSU2_TR(0x7189ff);
w2(R+4800,shr<u16>(r2(R+4800),u64(u32(0x8ull))));
w2(R+4802,shr<u16>(r2(R+4802),u64(u32(0x8ull))));
w2(R+4804,shr<u16>(r2(R+4804),u64(u32(0x8ull))));
w2(R+4806,shr<u16>(r2(R+4806),u64(u32(0x8ull))));
w2(R+4808,shr<u16>(r2(R+4808),u64(u32(0x8ull))));
w2(R+4810,shr<u16>(r2(R+4810),u64(u32(0x8ull))));
w2(R+4812,shr<u16>(r2(R+4812),u64(u32(0x8ull))));
w2(R+4814,shr<u16>(r2(R+4814),u64(u32(0x8ull))));
}
B718a04:{NFSU2_TR(0x718a04);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B718a09:{NFSU2_TR(0x718a09);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B718a0e:{NFSU2_TR(0x718a0e);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B718a12:{NFSU2_TR(0x718a12);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B718a16:{NFSU2_TR(0x718a16);
__builtin_memmove((R+4608),(R+4736),16);
}
B718a1a:{NFSU2_TR(0x718a1a);
__builtin_memmove((R+4864),(R+4992),16);
}
B718a1e:{NFSU2_TR(0x718a1e);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B718a22:{NFSU2_TR(0x718a22);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B718a26:{NFSU2_TR(0x718a26);
__builtin_memmove((R+4672),(R+4736),16);
}
B718a2a:{NFSU2_TR(0x718a2a);
__builtin_memmove((R+4928),(R+4992),16);
}
B718a2e:{NFSU2_TR(0x718a2e);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B718a33:{NFSU2_TR(0x718a33);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B718a38:{NFSU2_TR(0x718a38);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B718a3c:{NFSU2_TR(0x718a3c);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B718a40:{NFSU2_TR(0x718a40);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B718a44:{NFSU2_TR(0x718a44);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B718a48:{NFSU2_TR(0x718a48);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B718a4c:{NFSU2_TR(0x718a4c);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B718a50:{NFSU2_TR(0x718a50);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B718a54:{NFSU2_TR(0x718a54);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B718a58:{NFSU2_TR(0x718a58);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B718a5d:{NFSU2_TR(0x718a5d);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B718a62:{NFSU2_TR(0x718a62);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B718a66:{NFSU2_TR(0x718a66);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B718a6a:{NFSU2_TR(0x718a6a);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B718a6e:{NFSU2_TR(0x718a6e);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B718a72:{NFSU2_TR(0x718a72);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B718a76:{NFSU2_TR(0x718a76);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B718a7a:{NFSU2_TR(0x718a7a);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B718a7e:{NFSU2_TR(0x718a7e);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B718a82:{NFSU2_TR(0x718a82);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B718a87:{NFSU2_TR(0x718a87);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B718a8f:{NFSU2_TR(0x718a8f);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4800))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4802))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4804))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4806))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4808))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4810))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4812))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4814))));
}
B718a93:{NFSU2_TR(0x718a93);
w2(R+4992,u16(u32(r2(R+4992))-u32(r2(R+4800))));
w2(R+4994,u16(u32(r2(R+4994))-u32(r2(R+4802))));
w2(R+4996,u16(u32(r2(R+4996))-u32(r2(R+4804))));
w2(R+4998,u16(u32(r2(R+4998))-u32(r2(R+4806))));
w2(R+5000,u16(u32(r2(R+5000))-u32(r2(R+4808))));
w2(R+5002,u16(u32(r2(R+5002))-u32(r2(R+4810))));
w2(R+5004,u16(u32(r2(R+5004))-u32(r2(R+4812))));
w2(R+5006,u16(u32(r2(R+5006))-u32(r2(R+4814))));
}
B718a97:{NFSU2_TR(0x718a97);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+4736))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+4738))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+4740))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+4742))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+4744))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+4746))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+4748))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+4750))));
}
B718a9b:{NFSU2_TR(0x718a9b);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4992))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4994))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4996))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4998))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5000))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5002))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5004))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5006))));
}
B718a9f:{NFSU2_TR(0x718a9f);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4736))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4738))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4740))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4742))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4744))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4746))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4748))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4750))));
}
B718aa3:{NFSU2_TR(0x718aa3);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4992))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4994))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4996))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4998))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+5000))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+5002))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+5004))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+5006))));
}
B718aa7:{NFSU2_TR(0x718aa7);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4750))));
}
B718aab:{NFSU2_TR(0x718aab);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+5006))));
}
B718aaf:{NFSU2_TR(0x718aaf);
__builtin_memmove((R+5056),(R+4800),16);
}
B718ab3:{NFSU2_TR(0x718ab3);
w2(R+5056,shr<u16>(r2(R+5056),u64(u32(0x7ull))));
w2(R+5058,shr<u16>(r2(R+5058),u64(u32(0x7ull))));
w2(R+5060,shr<u16>(r2(R+5060),u64(u32(0x7ull))));
w2(R+5062,shr<u16>(r2(R+5062),u64(u32(0x7ull))));
w2(R+5064,shr<u16>(r2(R+5064),u64(u32(0x7ull))));
w2(R+5066,shr<u16>(r2(R+5066),u64(u32(0x7ull))));
w2(R+5068,shr<u16>(r2(R+5068),u64(u32(0x7ull))));
w2(R+5070,shr<u16>(r2(R+5070),u64(u32(0x7ull))));
}
B718ab8:{NFSU2_TR(0x718ab8);
__builtin_memmove((R+4736),(R+4608),16);
}
B718abc:{NFSU2_TR(0x718abc);
__builtin_memmove((R+4992),(R+4864),16);
}
B718ac0:{NFSU2_TR(0x718ac0);
w2(R+4608,u16(u32(r2(R+4608))+u32(r2(R+5056))));
w2(R+4610,u16(u32(r2(R+4610))+u32(r2(R+5058))));
w2(R+4612,u16(u32(r2(R+4612))+u32(r2(R+5060))));
w2(R+4614,u16(u32(r2(R+4614))+u32(r2(R+5062))));
w2(R+4616,u16(u32(r2(R+4616))+u32(r2(R+5064))));
w2(R+4618,u16(u32(r2(R+4618))+u32(r2(R+5066))));
w2(R+4620,u16(u32(r2(R+4620))+u32(r2(R+5068))));
w2(R+4622,u16(u32(r2(R+4622))+u32(r2(R+5070))));
}
B718ac4:{NFSU2_TR(0x718ac4);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+5056))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+5058))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+5060))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+5062))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+5064))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+5066))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+5068))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+5070))));
}
B718ac8:{NFSU2_TR(0x718ac8);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0x1ull)));}
}
B718acd:{NFSU2_TR(0x718acd);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0x1ull)));}
}
B718ad2:{NFSU2_TR(0x718ad2);
{wv<16>((R+4608),uo::psraw<16>(rv<16>((R+4608)),V(0x1ull)));}
}
B718ad7:{NFSU2_TR(0x718ad7);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x1ull)));}
}
B718adc:{NFSU2_TR(0x718adc);
w2(R+4736,u16(u32(r2(R+4736))*u32(r2(R+4608))));
w2(R+4738,u16(u32(r2(R+4738))*u32(r2(R+4610))));
w2(R+4740,u16(u32(r2(R+4740))*u32(r2(R+4612))));
w2(R+4742,u16(u32(r2(R+4742))*u32(r2(R+4614))));
w2(R+4744,u16(u32(r2(R+4744))*u32(r2(R+4616))));
w2(R+4746,u16(u32(r2(R+4746))*u32(r2(R+4618))));
w2(R+4748,u16(u32(r2(R+4748))*u32(r2(R+4620))));
w2(R+4750,u16(u32(r2(R+4750))*u32(r2(R+4622))));
}
B718ae0:{NFSU2_TR(0x718ae0);
w2(R+4992,u16(u32(r2(R+4992))*u32(r2(R+4864))));
w2(R+4994,u16(u32(r2(R+4994))*u32(r2(R+4866))));
w2(R+4996,u16(u32(r2(R+4996))*u32(r2(R+4868))));
w2(R+4998,u16(u32(r2(R+4998))*u32(r2(R+4870))));
w2(R+5000,u16(u32(r2(R+5000))*u32(r2(R+4872))));
w2(R+5002,u16(u32(r2(R+5002))*u32(r2(R+4874))));
w2(R+5004,u16(u32(r2(R+5004))*u32(r2(R+4876))));
w2(R+5006,u16(u32(r2(R+5006))*u32(r2(R+4878))));
}
B718ae4:{NFSU2_TR(0x718ae4);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+4750))));
}
B718ae8:{NFSU2_TR(0x718ae8);
w2(R+4928,u16(u32(r2(R+4928))-u32(r2(R+4992))));
w2(R+4930,u16(u32(r2(R+4930))-u32(r2(R+4994))));
w2(R+4932,u16(u32(r2(R+4932))-u32(r2(R+4996))));
w2(R+4934,u16(u32(r2(R+4934))-u32(r2(R+4998))));
w2(R+4936,u16(u32(r2(R+4936))-u32(r2(R+5000))));
w2(R+4938,u16(u32(r2(R+4938))-u32(r2(R+5002))));
w2(R+4940,u16(u32(r2(R+4940))-u32(r2(R+5004))));
w2(R+4942,u16(u32(r2(R+4942))-u32(r2(R+5006))));
}
B718aec:{NFSU2_TR(0x718aec);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B718af4:{NFSU2_TR(0x718af4);
__builtin_memmove((R+4736),(R+4672),16);
}
B718af8:{NFSU2_TR(0x718af8);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B718afd:{NFSU2_TR(0x718afd);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B718b02:{NFSU2_TR(0x718b02);
__builtin_memmove((R+4992),(R+4928),16);
}
B718b06:{NFSU2_TR(0x718b06);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+5056))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+5058))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+5060))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+5062))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+5064))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+5066))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+5068))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+5070))));
}
B718b0a:{NFSU2_TR(0x718b0a);
w2(R+4928,u16(u32(r2(R+4928))-u32(r2(R+5056))));
w2(R+4930,u16(u32(r2(R+4930))-u32(r2(R+5058))));
w2(R+4932,u16(u32(r2(R+4932))-u32(r2(R+5060))));
w2(R+4934,u16(u32(r2(R+4934))-u32(r2(R+5062))));
w2(R+4936,u16(u32(r2(R+4936))-u32(r2(R+5064))));
w2(R+4938,u16(u32(r2(R+4938))-u32(r2(R+5066))));
w2(R+4940,u16(u32(r2(R+4940))-u32(r2(R+5068))));
w2(R+4942,u16(u32(r2(R+4942))-u32(r2(R+5070))));
}
B718b0e:{NFSU2_TR(0x718b0e);
{wv<16>((R+4736),uo::psraw<16>(rv<16>((R+4736)),V(0xfull)));}
}
B718b13:{NFSU2_TR(0x718b13);
{wv<16>((R+4992),uo::psraw<16>(rv<16>((R+4992)),V(0xfull)));}
}
B718b18:{NFSU2_TR(0x718b18);
{wv<16>((R+4672),uo::psraw<16>(rv<16>((R+4672)),V(0xfull)));}
}
B718b1d:{NFSU2_TR(0x718b1d);
{wv<16>((R+4928),uo::psraw<16>(rv<16>((R+4928)),V(0xfull)));}
}
B718b22:{NFSU2_TR(0x718b22);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+5056),(U+4),16);
}
B718b27:{NFSU2_TR(0x718b27);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4736))));
wv<16>((R+4736),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4672))));
}
B718b2b:{NFSU2_TR(0x718b2b);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4992))));
wv<16>((R+4992),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4928))));
}
B718b2f:{NFSU2_TR(0x718b2f);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B718b34:{NFSU2_TR(0x718b34);
wv<16>((R+4992),eval<Op::INT_AND,16,16,16>(rv<16>((R+4992)),rv<16>((R+4736))));
}
B718b38:{NFSU2_TR(0x718b38);
__builtin_memmove((R+4736),(R+5056),16);
}
B718b3c:{NFSU2_TR(0x718b3c);
{wv<16>((R+5056),uo::psubusw<16>(rv<16>((R+5056)),rv<16>((R+4864))));}
}
B718b40:{NFSU2_TR(0x718b40);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4736))));}
}
B718b44:{NFSU2_TR(0x718b44);
wv<16>((R+5056),eval<Op::INT_OR,16,16,16>(rv<16>((R+5056)),rv<16>((R+4864))));
}
B718b48:{NFSU2_TR(0x718b48);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+5056,u16(u32(r2(R+5056))-u32(r2(U+20))));
w2(R+5058,u16(u32(r2(R+5058))-u32(r2(U+22))));
w2(R+5060,u16(u32(r2(R+5060))-u32(r2(U+24))));
w2(R+5062,u16(u32(r2(R+5062))-u32(r2(U+26))));
w2(R+5064,u16(u32(r2(R+5064))-u32(r2(U+28))));
w2(R+5066,u16(u32(r2(R+5066))-u32(r2(U+30))));
w2(R+5068,u16(u32(r2(R+5068))-u32(r2(U+32))));
w2(R+5070,u16(u32(r2(R+5070))-u32(r2(U+34))));
}
B718b4d:{NFSU2_TR(0x718b4d);
{wv<16>((R+5056),uo::psraw<16>(rv<16>((R+5056)),V(0xfull)));}
}
B718b52:{NFSU2_TR(0x718b52);
wv<16>((R+5056),eval<Op::INT_AND,16,16,16>(rv<16>((R+5056)),rv<16>((R+4992))));
}
B718b56:{NFSU2_TR(0x718b56);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B718b5b:{NFSU2_TR(0x718b5b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4800),(U+4),16);
}
B718b60:{NFSU2_TR(0x718b60);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B718b65:{NFSU2_TR(0x718b65);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718b6a:{NFSU2_TR(0x718b6a);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4992),(U+4),16);
}
B718b6f:{NFSU2_TR(0x718b6f);
w2(R+4928,u16(u32(r2(R+4928))-u32(r2(R+4864))));
w2(R+4930,u16(u32(r2(R+4930))-u32(r2(R+4866))));
w2(R+4932,u16(u32(r2(R+4932))-u32(r2(R+4868))));
w2(R+4934,u16(u32(r2(R+4934))-u32(r2(R+4870))));
w2(R+4936,u16(u32(r2(R+4936))-u32(r2(R+4872))));
w2(R+4938,u16(u32(r2(R+4938))-u32(r2(R+4874))));
w2(R+4940,u16(u32(r2(R+4940))-u32(r2(R+4876))));
w2(R+4942,u16(u32(r2(R+4942))-u32(r2(R+4878))));
}
B718b73:{NFSU2_TR(0x718b73);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4992))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4994))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4996))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4998))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+5000))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+5002))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+5004))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+5006))));
}
B718b77:{NFSU2_TR(0x718b77);
__builtin_memmove((R+4864),(R+4928),16);
}
B718b7b:{NFSU2_TR(0x718b7b);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718b7f:{NFSU2_TR(0x718b7f);
u8 U[16];
__builtin_memmove((U+0),gp(0x8176c0),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+0))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+2))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+4))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+6))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+8))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+10))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+12))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+14))));
}
B718b87:{NFSU2_TR(0x718b87);
w2(R+4928,u16(u32(r2(R+4928))+u32(r2(R+4864))));
w2(R+4930,u16(u32(r2(R+4930))+u32(r2(R+4866))));
w2(R+4932,u16(u32(r2(R+4932))+u32(r2(R+4868))));
w2(R+4934,u16(u32(r2(R+4934))+u32(r2(R+4870))));
w2(R+4936,u16(u32(r2(R+4936))+u32(r2(R+4872))));
w2(R+4938,u16(u32(r2(R+4938))+u32(r2(R+4874))));
w2(R+4940,u16(u32(r2(R+4940))+u32(r2(R+4876))));
w2(R+4942,u16(u32(r2(R+4942))+u32(r2(R+4878))));
}
B718b8b:{NFSU2_TR(0x718b8b);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4928))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4930))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4932))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4934))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4936))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4938))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4940))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4942))));
}
B718b8f:{NFSU2_TR(0x718b8f);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0x3ull)));}
}
B718b94:{NFSU2_TR(0x718b94);
__builtin_memmove((R+4736),(R+4800),16);
}
B718b98:{NFSU2_TR(0x718b98);
{wv<16>((R+4800),uo::psraw<16>(rv<16>((R+4800)),V(0xfull)));}
}
B718b9d:{NFSU2_TR(0x718b9d);
wv<16>((R+4736),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4800))));
}
B718ba1:{NFSU2_TR(0x718ba1);
{wv<16>((R+4736),uo::psubsw<16>(rv<16>((R+4736)),rv<16>((R+4800))));}
}
B718ba5:{NFSU2_TR(0x718ba5);
wv<16>((R+4800),eval<Op::INT_OR,16,16,16>(rv<16>((R+4800)),rv<16>(gp(0x817710))));
}
B718bad:{NFSU2_TR(0x718bad);
__builtin_memmove((R+4864),(R+4672),16);
}
B718bb1:{NFSU2_TR(0x718bb1);
w2(R+4672,u16(u32(r2(R+4672))-u32(r2(R+4736))));
w2(R+4674,u16(u32(r2(R+4674))-u32(r2(R+4738))));
w2(R+4676,u16(u32(r2(R+4676))-u32(r2(R+4740))));
w2(R+4678,u16(u32(r2(R+4678))-u32(r2(R+4742))));
w2(R+4680,u16(u32(r2(R+4680))-u32(r2(R+4744))));
w2(R+4682,u16(u32(r2(R+4682))-u32(r2(R+4746))));
w2(R+4684,u16(u32(r2(R+4684))-u32(r2(R+4748))));
w2(R+4686,u16(u32(r2(R+4686))-u32(r2(R+4750))));
}
B718bb5:{NFSU2_TR(0x718bb5);
__builtin_memmove((R+4928),(R+4672),16);
}
B718bb9:{NFSU2_TR(0x718bb9);
{wv<16>((R+4672),uo::psraw<16>(rv<16>((R+4672)),V(0xfull)));}
}
B718bbe:{NFSU2_TR(0x718bbe);
wv<16>((R+4928),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4928)),rv<16>((R+4672))));
}
B718bc2:{NFSU2_TR(0x718bc2);
{wv<16>((R+4928),uo::psubsw<16>(rv<16>((R+4928)),rv<16>((R+4672))));}
}
B718bc6:{NFSU2_TR(0x718bc6);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4928))));}
}
B718bca:{NFSU2_TR(0x718bca);
w2(R+4864,u16(u32(r2(R+4864))*u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))*u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))*u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))*u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))*u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))*u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))*u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))*u32(r2(R+4814))));
}
B718bce:{NFSU2_TR(0x718bce);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4672),(U+4),16);
}
B718bd3:{NFSU2_TR(0x718bd3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4736),(U+4),16);
}
B718bd8:{NFSU2_TR(0x718bd8);
w2(R+4672,u16(u32(r2(R+4672))+u32(r2(R+4864))));
w2(R+4674,u16(u32(r2(R+4674))+u32(r2(R+4866))));
w2(R+4676,u16(u32(r2(R+4676))+u32(r2(R+4868))));
w2(R+4678,u16(u32(r2(R+4678))+u32(r2(R+4870))));
w2(R+4680,u16(u32(r2(R+4680))+u32(r2(R+4872))));
w2(R+4682,u16(u32(r2(R+4682))+u32(r2(R+4874))));
w2(R+4684,u16(u32(r2(R+4684))+u32(r2(R+4876))));
w2(R+4686,u16(u32(r2(R+4686))+u32(r2(R+4878))));
}
B718bdc:{NFSU2_TR(0x718bdc);
w2(R+4736,u16(u32(r2(R+4736))-u32(r2(R+4864))));
w2(R+4738,u16(u32(r2(R+4738))-u32(r2(R+4866))));
w2(R+4740,u16(u32(r2(R+4740))-u32(r2(R+4868))));
w2(R+4742,u16(u32(r2(R+4742))-u32(r2(R+4870))));
w2(R+4744,u16(u32(r2(R+4744))-u32(r2(R+4872))));
w2(R+4746,u16(u32(r2(R+4746))-u32(r2(R+4874))));
w2(R+4748,u16(u32(r2(R+4748))-u32(r2(R+4876))));
w2(R+4750,u16(u32(r2(R+4750))-u32(r2(R+4878))));
}
B718be0:{NFSU2_TR(0x718be0);
wv<16>((R+4992),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4992)),rv<16>((R+4992))));
}
B718be4:{NFSU2_TR(0x718be4);
u8 U[54];
__builtin_memmove((U+5),(R+4672),16);
__builtin_memmove((U+21),(R+4672),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4672),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4673),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4674),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4675),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4676),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4677),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4678),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4679),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4680),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4681),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4682),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4683),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4684),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4685),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4686),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4687),(U+37),1);
}
B718be8:{NFSU2_TR(0x718be8);
u8 U[54];
__builtin_memmove((U+5),(R+4736),16);
__builtin_memmove((U+21),(R+4736),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4736),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4737),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4738),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4739),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4740),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4741),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4742),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4743),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4744),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4745),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4746),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4747),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4748),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4749),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4750),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4751),(U+37),1);
}
B718bec:{NFSU2_TR(0x718bec);
__builtin_memmove((R+4687),(R+4999),1);
__builtin_memmove((R+4686),(R+4679),1);
__builtin_memmove((R+4685),(R+4998),1);
__builtin_memmove((R+4684),(R+4678),1);
__builtin_memmove((R+4683),(R+4997),1);
__builtin_memmove((R+4682),(R+4677),1);
__builtin_memmove((R+4681),(R+4996),1);
__builtin_memmove((R+4680),(R+4676),1);
__builtin_memmove((R+4679),(R+4995),1);
__builtin_memmove((R+4678),(R+4675),1);
__builtin_memmove((R+4677),(R+4994),1);
__builtin_memmove((R+4676),(R+4674),1);
__builtin_memmove((R+4675),(R+4993),1);
__builtin_memmove((R+4674),(R+4673),1);
__builtin_memmove((R+4673),(R+4992),1);
}
B718bf0:{NFSU2_TR(0x718bf0);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B718bf8:{NFSU2_TR(0x718bf8);
__builtin_memmove((R+4751),(R+4999),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+4998),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+4997),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+4996),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+4995),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+4994),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+4993),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+4992),1);
}
B718bfc:{NFSU2_TR(0x718bfc);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B718c04:{NFSU2_TR(0x718c04);
u8 U[16];
__builtin_memmove((U+0),gp(u32(r4(R+28))),16);
__builtin_memmove((R+4928),(U+0),16);
}
B718c08:{NFSU2_TR(0x718c08);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B718c0d:{NFSU2_TR(0x718c0d);
__builtin_memmove((R+4800),(R+4864),16);
}
B718c11:{NFSU2_TR(0x718c11);
__builtin_memmove((R+4992),(R+4928),16);
}
B718c15:{NFSU2_TR(0x718c15);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B718c19:{NFSU2_TR(0x718c19);
{wv<16>((R+4928),uo::psubusw<16>(rv<16>((R+4928)),rv<16>((R+4800))));}
}
B718c1d:{NFSU2_TR(0x718c1d);
wv<16>((R+4864),eval<Op::INT_OR,16,16,16>(rv<16>((R+4864)),rv<16>((R+4928))));
}
B718c21:{NFSU2_TR(0x718c21);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718c26:{NFSU2_TR(0x718c26);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0xfull)));}
}
B718c2b:{NFSU2_TR(0x718c2b);
__builtin_memmove((R+4672),(R+4864),16);
}
B718c2f:{NFSU2_TR(0x718c2f);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+4992))));
}
B718c33:{NFSU2_TR(0x718c33);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4672))));
wv<16>((R+4672),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4800))));
}
B718c37:{NFSU2_TR(0x718c37);
wv<16>((R+4672),eval<Op::INT_OR,16,16,16>(rv<16>((R+4672)),rv<16>((R+4864))));
}
B718c3b:{NFSU2_TR(0x718c3b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B718c43:{NFSU2_TR(0x718c43);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718c4b:{NFSU2_TR(0x718c4b);
__builtin_memmove((R+4800),(R+4864),16);
}
B718c4f:{NFSU2_TR(0x718c4f);
__builtin_memmove((R+4992),(R+4928),16);
}
B718c53:{NFSU2_TR(0x718c53);
{wv<16>((R+4864),uo::psubusw<16>(rv<16>((R+4864)),rv<16>((R+4992))));}
}
B718c57:{NFSU2_TR(0x718c57);
{wv<16>((R+4928),uo::psubusw<16>(rv<16>((R+4928)),rv<16>((R+4800))));}
}
B718c5b:{NFSU2_TR(0x718c5b);
wv<16>((R+4864),eval<Op::INT_OR,16,16,16>(rv<16>((R+4864)),rv<16>((R+4928))));
}
B718c5f:{NFSU2_TR(0x718c5f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718c64:{NFSU2_TR(0x718c64);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0xfull)));}
}
B718c69:{NFSU2_TR(0x718c69);
__builtin_memmove((R+4736),(R+4864),16);
}
B718c6d:{NFSU2_TR(0x718c6d);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+4992))));
}
B718c71:{NFSU2_TR(0x718c71);
u8 U[16];
wv<16>((U+0),eval<Op::INT_NEGATE,16,16>(rv<16>((R+4736))));
wv<16>((R+4736),eval<Op::INT_AND,16,16,16>(rv<16>((U+0)),rv<16>((R+4800))));
}
B718c75:{NFSU2_TR(0x718c75);
wv<16>((R+4736),eval<Op::INT_OR,16,16,16>(rv<16>((R+4736)),rv<16>((R+4864))));
}
B718c79:{NFSU2_TR(0x718c79);
wv<16>((R+4608),eval<Op::INT_XOR,16,16,16>(rv<16>((R+4608)),rv<16>((R+4608))));
}
B718c7d:{NFSU2_TR(0x718c7d);
__builtin_memmove((R+4800),(R+4672),16);
}
B718c81:{NFSU2_TR(0x718c81);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4800))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4802))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4804))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4806))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4808))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4810))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4812))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4814))));
}
B718c85:{NFSU2_TR(0x718c85);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4686))));
}
B718c89:{NFSU2_TR(0x718c89);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4864),(U+4),16);
}
B718c8e:{NFSU2_TR(0x718c8e);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B718c93:{NFSU2_TR(0x718c93);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718c98:{NFSU2_TR(0x718c98);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B718c9d:{NFSU2_TR(0x718c9d);
u8 U[16];
__builtin_memmove((U+0),gp(0x8176c0),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+0))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+2))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+4))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+6))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+8))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+10))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+12))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+14))));
}
B718ca5:{NFSU2_TR(0x718ca5);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4864))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4866))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4868))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4870))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4872))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4874))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4876))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4878))));
}
B718ca9:{NFSU2_TR(0x718ca9);
__builtin_memmove((R+4864),(R+4800),16);
}
B718cad:{NFSU2_TR(0x718cad);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718cb2:{NFSU2_TR(0x718cb2);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718cb6:{NFSU2_TR(0x718cb6);
{wv<16>((R+4864),uo::psllw<16>(rv<16>((R+4864)),V(0x1ull)));}
}
B718cbb:{NFSU2_TR(0x718cbb);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718cc0:{NFSU2_TR(0x718cc0);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718cc5:{NFSU2_TR(0x718cc5);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718cca:{NFSU2_TR(0x718cca);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718cce:{NFSU2_TR(0x718cce);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718cd2:{NFSU2_TR(0x718cd2);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718cd6:{NFSU2_TR(0x718cd6);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718cda:{NFSU2_TR(0x718cda);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4608))));}
}
B718cde:{NFSU2_TR(0x718cde);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718ce3:{NFSU2_TR(0x718ce3);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B718ce7:{NFSU2_TR(0x718ce7);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B718cec:{NFSU2_TR(0x718cec);
__builtin_memmove((R+4864),(R+4928),16);
}
B718cf0:{NFSU2_TR(0x718cf0);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718cf4:{NFSU2_TR(0x718cf4);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B718cf8:{NFSU2_TR(0x718cf8);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718cfd:{NFSU2_TR(0x718cfd);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718d02:{NFSU2_TR(0x718d02);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718d07:{NFSU2_TR(0x718d07);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718d0b:{NFSU2_TR(0x718d0b);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718d0f:{NFSU2_TR(0x718d0f);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718d13:{NFSU2_TR(0x718d13);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718d17:{NFSU2_TR(0x718d17);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4672))));}
}
B718d1b:{NFSU2_TR(0x718d1b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718d20:{NFSU2_TR(0x718d20);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B718d24:{NFSU2_TR(0x718d24);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B718d29:{NFSU2_TR(0x718d29);
__builtin_memmove((R+4864),(R+4928),16);
}
B718d2d:{NFSU2_TR(0x718d2d);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718d31:{NFSU2_TR(0x718d31);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B718d35:{NFSU2_TR(0x718d35);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718d3a:{NFSU2_TR(0x718d3a);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718d3f:{NFSU2_TR(0x718d3f);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718d44:{NFSU2_TR(0x718d44);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718d48:{NFSU2_TR(0x718d48);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718d4c:{NFSU2_TR(0x718d4c);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718d50:{NFSU2_TR(0x718d50);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718d54:{NFSU2_TR(0x718d54);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4736))));}
}
B718d58:{NFSU2_TR(0x718d58);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718d5d:{NFSU2_TR(0x718d5d);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(R+4672))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(R+4674))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(R+4676))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(R+4678))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(R+4680))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(R+4682))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(R+4684))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(R+4686))));
}
B718d61:{NFSU2_TR(0x718d61);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B718d66:{NFSU2_TR(0x718d66);
__builtin_memmove((R+4864),(R+4928),16);
}
B718d6a:{NFSU2_TR(0x718d6a);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718d6e:{NFSU2_TR(0x718d6e);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B718d72:{NFSU2_TR(0x718d72);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4672))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4674))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4676))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4678))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4680))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4682))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4684))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4686))));
}
B718d76:{NFSU2_TR(0x718d76);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718d7b:{NFSU2_TR(0x718d7b);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718d80:{NFSU2_TR(0x718d80);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718d88:{NFSU2_TR(0x718d88);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718d90:{NFSU2_TR(0x718d90);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718d95:{NFSU2_TR(0x718d95);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718d99:{NFSU2_TR(0x718d99);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718d9d:{NFSU2_TR(0x718d9d);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718da1:{NFSU2_TR(0x718da1);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718da5:{NFSU2_TR(0x718da5);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4800))));}
}
B718da9:{NFSU2_TR(0x718da9);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718dae:{NFSU2_TR(0x718dae);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(U+34))));
}
B718db3:{NFSU2_TR(0x718db3);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(U+34))));
}
B718dbb:{NFSU2_TR(0x718dbb);
__builtin_memmove((R+4864),(R+4928),16);
}
B718dbf:{NFSU2_TR(0x718dbf);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718dc3:{NFSU2_TR(0x718dc3);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B718dc7:{NFSU2_TR(0x718dc7);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718dcc:{NFSU2_TR(0x718dcc);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718dd1:{NFSU2_TR(0x718dd1);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718dd9:{NFSU2_TR(0x718dd9);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4736))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4738))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4740))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4742))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4744))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4746))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4748))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4750))));
}
B718ddd:{NFSU2_TR(0x718ddd);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718de5:{NFSU2_TR(0x718de5);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718dea:{NFSU2_TR(0x718dea);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718dee:{NFSU2_TR(0x718dee);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718df2:{NFSU2_TR(0x718df2);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718df6:{NFSU2_TR(0x718df6);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718dfa:{NFSU2_TR(0x718dfa);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4864))));}
}
B718dfe:{NFSU2_TR(0x718dfe);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718e03:{NFSU2_TR(0x718e03);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(U+34))));
}
B718e08:{NFSU2_TR(0x718e08);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B718e0c:{NFSU2_TR(0x718e0c);
__builtin_memmove((R+4864),(R+4928),16);
}
B718e10:{NFSU2_TR(0x718e10);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718e14:{NFSU2_TR(0x718e14);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B718e18:{NFSU2_TR(0x718e18);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718e1d:{NFSU2_TR(0x718e1d);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718e22:{NFSU2_TR(0x718e22);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718e27:{NFSU2_TR(0x718e27);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718e2b:{NFSU2_TR(0x718e2b);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718e2f:{NFSU2_TR(0x718e2f);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718e33:{NFSU2_TR(0x718e33);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718e37:{NFSU2_TR(0x718e37);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4928))));}
}
B718e3b:{NFSU2_TR(0x718e3b);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718e40:{NFSU2_TR(0x718e40);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(U+34))));
}
B718e45:{NFSU2_TR(0x718e45);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B718e49:{NFSU2_TR(0x718e49);
__builtin_memmove((R+4864),(R+4928),16);
}
B718e4d:{NFSU2_TR(0x718e4d);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718e51:{NFSU2_TR(0x718e51);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B718e55:{NFSU2_TR(0x718e55);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718e5a:{NFSU2_TR(0x718e5a);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718e5f:{NFSU2_TR(0x718e5f);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718e64:{NFSU2_TR(0x718e64);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718e68:{NFSU2_TR(0x718e68);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718e6c:{NFSU2_TR(0x718e6c);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718e70:{NFSU2_TR(0x718e70);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718e74:{NFSU2_TR(0x718e74);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+4992))));}
}
B718e78:{NFSU2_TR(0x718e78);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((R+4928),(U+4),16);
}
B718e80:{NFSU2_TR(0x718e80);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4800,u16(u32(r2(R+4800))-u32(r2(U+20))));
w2(R+4802,u16(u32(r2(R+4802))-u32(r2(U+22))));
w2(R+4804,u16(u32(r2(R+4804))-u32(r2(U+24))));
w2(R+4806,u16(u32(r2(R+4806))-u32(r2(U+26))));
w2(R+4808,u16(u32(r2(R+4808))-u32(r2(U+28))));
w2(R+4810,u16(u32(r2(R+4810))-u32(r2(U+30))));
w2(R+4812,u16(u32(r2(R+4812))-u32(r2(U+32))));
w2(R+4814,u16(u32(r2(R+4814))-u32(r2(U+34))));
}
B718e85:{NFSU2_TR(0x718e85);
w2(R+4800,u16(u32(r2(R+4800))+u32(r2(R+4736))));
w2(R+4802,u16(u32(r2(R+4802))+u32(r2(R+4738))));
w2(R+4804,u16(u32(r2(R+4804))+u32(r2(R+4740))));
w2(R+4806,u16(u32(r2(R+4806))+u32(r2(R+4742))));
w2(R+4808,u16(u32(r2(R+4808))+u32(r2(R+4744))));
w2(R+4810,u16(u32(r2(R+4810))+u32(r2(R+4746))));
w2(R+4812,u16(u32(r2(R+4812))+u32(r2(R+4748))));
w2(R+4814,u16(u32(r2(R+4814))+u32(r2(R+4750))));
}
B718e89:{NFSU2_TR(0x718e89);
__builtin_memmove((R+4864),(R+4928),16);
}
B718e8d:{NFSU2_TR(0x718e8d);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4800))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4802))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4804))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4806))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4808))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4810))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4812))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4814))));
}
B718e91:{NFSU2_TR(0x718e91);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4864))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4866))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4868))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4870))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4872))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4874))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4876))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4878))));
}
B718e95:{NFSU2_TR(0x718e95);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(U+34))));
}
B718e9a:{NFSU2_TR(0x718e9a);
u8 U[36];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(U+20))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(U+22))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(U+24))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(U+26))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(U+28))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(U+30))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(U+32))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(U+34))));
}
B718e9f:{NFSU2_TR(0x718e9f);
{wv<16>((R+4864),uo::psraw<16>(rv<16>((R+4864)),V(0x4ull)));}
}
B718ea4:{NFSU2_TR(0x718ea4);
w2(R+4864,u16(u32(r2(R+4864))-u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))-u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))-u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))-u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))-u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))-u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))-u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))-u32(r2(R+4942))));
}
B718ea8:{NFSU2_TR(0x718ea8);
wv<16>((R+4864),eval<Op::INT_AND,16,16,16>(rv<16>((R+4864)),rv<16>((R+5056))));
}
B718eac:{NFSU2_TR(0x718eac);
w2(R+4864,u16(u32(r2(R+4864))+u32(r2(R+4928))));
w2(R+4866,u16(u32(r2(R+4866))+u32(r2(R+4930))));
w2(R+4868,u16(u32(r2(R+4868))+u32(r2(R+4932))));
w2(R+4870,u16(u32(r2(R+4870))+u32(r2(R+4934))));
w2(R+4872,u16(u32(r2(R+4872))+u32(r2(R+4936))));
w2(R+4874,u16(u32(r2(R+4874))+u32(r2(R+4938))));
w2(R+4876,u16(u32(r2(R+4876))+u32(r2(R+4940))));
w2(R+4878,u16(u32(r2(R+4878))+u32(r2(R+4942))));
}
B718eb0:{NFSU2_TR(0x718eb0);
u8 U[54];
__builtin_memmove((U+5),(R+4864),16);
__builtin_memmove((U+21),(R+4608),16);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+5))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+5))));
w1(U+2,u8(s16(r2(U+5))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+38,u8(r2(U+5)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4864),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+7))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+7))));
w1(U+2,u8(s16(r2(U+7))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+39,u8(r2(U+7)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4865),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+9))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+9))));
w1(U+2,u8(s16(r2(U+9))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+40,u8(r2(U+9)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+40))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4866),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+11))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+11))));
w1(U+2,u8(s16(r2(U+11))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+41,u8(r2(U+11)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+41))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4867),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+13))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+13))));
w1(U+2,u8(s16(r2(U+13))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+42,u8(r2(U+13)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+42))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4868),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+15))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+15))));
w1(U+2,u8(s16(r2(U+15))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+43,u8(r2(U+15)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+43))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4869),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+17))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+17))));
w1(U+2,u8(s16(r2(U+17))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+44,u8(r2(U+17)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+44))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4870),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+19))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+19))));
w1(U+2,u8(s16(r2(U+19))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+45,u8(r2(U+19)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+45))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4871),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+21))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+21))));
w1(U+2,u8(s16(r2(U+21))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+46,u8(r2(U+21)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+46))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4872),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+23))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+23))));
w1(U+2,u8(s16(r2(U+23))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+47,u8(r2(U+23)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+47))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4873),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+25))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+25))));
w1(U+2,u8(s16(r2(U+25))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+48,u8(r2(U+25)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+48))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4874),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+27))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+27))));
w1(U+2,u8(s16(r2(U+27))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+49,u8(r2(U+27)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+49))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4875),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+29))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+29))));
w1(U+2,u8(s16(r2(U+29))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+50,u8(r2(U+29)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+50))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4876),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+31))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+31))));
w1(U+2,u8(s16(r2(U+31))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+51,u8(r2(U+31)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+51))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4877),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+33))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+33))));
w1(U+2,u8(s16(r2(U+33))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+52,u8(r2(U+33)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+52))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4878),(U+37),1);
w1(U+0,u8(s16(u16(0xffull))<s16(r2(U+35))));
w1(U+37,u8(u32(r1(U+0))*u32(u8(0xffull))));
w1(U+1,u8(s16(u16(0x0ull))<s16(r2(U+35))));
w1(U+2,u8(s16(r2(U+35))<=s16(u16(0xffull))));
w1(U+3,u8(u32(r1(U+1))*u32(r1(U+2))));
w1(U+53,u8(r2(U+35)));
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+53))));
w1(U+37,u8(u32(r1(U+37))+u32(r1(U+4))));
__builtin_memmove((R+4879),(U+37),1);
}
B718eb4:{NFSU2_TR(0x718eb4);
{wv<8>((R+4416),uo::movdq2q<8>(rv<8>((R+4416)),rv<16>((R+5056))));}
}
B718eb8:{NFSU2_TR(0x718eb8);
wv<16>((R+4608),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4352))));
}
B718ebc:{NFSU2_TR(0x718ebc);
wv<16>((R+4672),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4368))));
}
B718ec0:{NFSU2_TR(0x718ec0);
wv<16>((R+4736),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4384))));
}
B718ec4:{NFSU2_TR(0x718ec4);
wv<16>((R+4800),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4400))));
}
B718ec8:{NFSU2_TR(0x718ec8);
__builtin_memmove((R+4623),(R+4679),1);
__builtin_memmove((R+4622),(R+4615),1);
__builtin_memmove((R+4621),(R+4678),1);
__builtin_memmove((R+4620),(R+4614),1);
__builtin_memmove((R+4619),(R+4677),1);
__builtin_memmove((R+4618),(R+4613),1);
__builtin_memmove((R+4617),(R+4676),1);
__builtin_memmove((R+4616),(R+4612),1);
__builtin_memmove((R+4615),(R+4675),1);
__builtin_memmove((R+4614),(R+4611),1);
__builtin_memmove((R+4613),(R+4674),1);
__builtin_memmove((R+4612),(R+4610),1);
__builtin_memmove((R+4611),(R+4673),1);
__builtin_memmove((R+4610),(R+4609),1);
__builtin_memmove((R+4609),(R+4672),1);
}
B718ecc:{NFSU2_TR(0x718ecc);
__builtin_memmove((R+4751),(R+4807),1);
__builtin_memmove((R+4750),(R+4743),1);
__builtin_memmove((R+4749),(R+4806),1);
__builtin_memmove((R+4748),(R+4742),1);
__builtin_memmove((R+4747),(R+4805),1);
__builtin_memmove((R+4746),(R+4741),1);
__builtin_memmove((R+4745),(R+4804),1);
__builtin_memmove((R+4744),(R+4740),1);
__builtin_memmove((R+4743),(R+4803),1);
__builtin_memmove((R+4742),(R+4739),1);
__builtin_memmove((R+4741),(R+4802),1);
__builtin_memmove((R+4740),(R+4738),1);
__builtin_memmove((R+4739),(R+4801),1);
__builtin_memmove((R+4738),(R+4737),1);
__builtin_memmove((R+4737),(R+4800),1);
}
B718ed0:{NFSU2_TR(0x718ed0);
__builtin_memmove((R+4672),(R+4608),16);
}
B718ed4:{NFSU2_TR(0x718ed4);
__builtin_memmove((R+4622),(R+4742),2);
__builtin_memmove((R+4620),(R+4614),2);
__builtin_memmove((R+4618),(R+4740),2);
__builtin_memmove((R+4616),(R+4612),2);
__builtin_memmove((R+4614),(R+4738),2);
__builtin_memmove((R+4612),(R+4610),2);
__builtin_memmove((R+4610),(R+4736),2);
}
B718ed8:{NFSU2_TR(0x718ed8);
__builtin_memmove((R+4672),(R+4680),2);
__builtin_memmove((R+4674),(R+4744),2);
__builtin_memmove((R+4676),(R+4682),2);
__builtin_memmove((R+4678),(R+4746),2);
__builtin_memmove((R+4680),(R+4684),2);
__builtin_memmove((R+4682),(R+4748),2);
__builtin_memmove((R+4684),(R+4686),2);
__builtin_memmove((R+4686),(R+4750),2);
}
B718edc:{NFSU2_TR(0x718edc);
wv<16>((R+4864),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4416))));
}
B718ee0:{NFSU2_TR(0x718ee0);
wv<16>((R+4928),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4432))));
}
B718ee4:{NFSU2_TR(0x718ee4);
wv<16>((R+4992),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4448))));
}
B718ee8:{NFSU2_TR(0x718ee8);
wv<16>((R+5056),eval<Op::INT_ZEXT,16,8>(rv<8>((R+4464))));
}
B718eec:{NFSU2_TR(0x718eec);
__builtin_memmove((R+4879),(R+4935),1);
__builtin_memmove((R+4878),(R+4871),1);
__builtin_memmove((R+4877),(R+4934),1);
__builtin_memmove((R+4876),(R+4870),1);
__builtin_memmove((R+4875),(R+4933),1);
__builtin_memmove((R+4874),(R+4869),1);
__builtin_memmove((R+4873),(R+4932),1);
__builtin_memmove((R+4872),(R+4868),1);
__builtin_memmove((R+4871),(R+4931),1);
__builtin_memmove((R+4870),(R+4867),1);
__builtin_memmove((R+4869),(R+4930),1);
__builtin_memmove((R+4868),(R+4866),1);
__builtin_memmove((R+4867),(R+4929),1);
__builtin_memmove((R+4866),(R+4865),1);
__builtin_memmove((R+4865),(R+4928),1);
}
B718ef0:{NFSU2_TR(0x718ef0);
__builtin_memmove((R+5007),(R+5063),1);
__builtin_memmove((R+5006),(R+4999),1);
__builtin_memmove((R+5005),(R+5062),1);
__builtin_memmove((R+5004),(R+4998),1);
__builtin_memmove((R+5003),(R+5061),1);
__builtin_memmove((R+5002),(R+4997),1);
__builtin_memmove((R+5001),(R+5060),1);
__builtin_memmove((R+5000),(R+4996),1);
__builtin_memmove((R+4999),(R+5059),1);
__builtin_memmove((R+4998),(R+4995),1);
__builtin_memmove((R+4997),(R+5058),1);
__builtin_memmove((R+4996),(R+4994),1);
__builtin_memmove((R+4995),(R+5057),1);
__builtin_memmove((R+4994),(R+4993),1);
__builtin_memmove((R+4993),(R+5056),1);
}
B718ef4:{NFSU2_TR(0x718ef4);
__builtin_memmove((R+4928),(R+4864),16);
}
B718ef8:{NFSU2_TR(0x718ef8);
__builtin_memmove((R+4878),(R+4998),2);
__builtin_memmove((R+4876),(R+4870),2);
__builtin_memmove((R+4874),(R+4996),2);
__builtin_memmove((R+4872),(R+4868),2);
__builtin_memmove((R+4870),(R+4994),2);
__builtin_memmove((R+4868),(R+4866),2);
__builtin_memmove((R+4866),(R+4992),2);
}
B718efc:{NFSU2_TR(0x718efc);
__builtin_memmove((R+4928),(R+4936),2);
__builtin_memmove((R+4930),(R+5000),2);
__builtin_memmove((R+4932),(R+4938),2);
__builtin_memmove((R+4934),(R+5002),2);
__builtin_memmove((R+4936),(R+4940),2);
__builtin_memmove((R+4938),(R+5004),2);
__builtin_memmove((R+4940),(R+4942),2);
__builtin_memmove((R+4942),(R+5006),2);
}
B718f00:{NFSU2_TR(0x718f00);
__builtin_memmove((R+4736),(R+4608),16);
}
B718f04:{NFSU2_TR(0x718f04);
__builtin_memmove((R+4620),(R+4868),4);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(R+4864),4);
}
B718f08:{NFSU2_TR(0x718f08);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B718f0d:{NFSU2_TR(0x718f0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))*u32(u32(0x8ull))));
wv<16>((R+4608),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4608)),rv<4>((U+0))));
}
B718f12:{NFSU2_TR(0x718f12);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4872),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B718f16:{NFSU2_TR(0x718f16);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4608),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B718f1b:{NFSU2_TR(0x718f1b);
__builtin_memmove((R+4800),(R+4672),16);
}
B718f1f:{NFSU2_TR(0x718f1f);
__builtin_memmove((R+4684),(R+4932),4);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4676),(R+4928),4);
}
B718f23:{NFSU2_TR(0x718f23);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B718f27:{NFSU2_TR(0x718f27);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))*u32(u32(0x8ull))));
wv<16>((R+4736),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4736)),rv<4>((U+0))));
}
B718f2c:{NFSU2_TR(0x718f2c);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4936),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B718f30:{NFSU2_TR(0x718f30);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B718f35:{NFSU2_TR(0x718f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B718f38:{NFSU2_TR(0x718f38);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4672),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B718f3d:{NFSU2_TR(0x718f3d);
u8 U[8];
__builtin_memmove((U+0),(R+4800),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B718f41:{NFSU2_TR(0x718f41);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))*u32(u32(0x8ull))));
wv<16>((R+4672),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4672)),rv<4>((U+0))));
}
B718f46:{NFSU2_TR(0x718f46);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))*u32(u32(0x8ull))));
wv<16>((R+4800),eval<Op::INT_RIGHT,16,16,4>(rv<16>((R+4800)),rv<4>((U+0))));
}
B718f4b:{NFSU2_TR(0x718f4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4672),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B718f50:{NFSU2_TR(0x718f50);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4800),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B718f55:{NFSU2_TR(0x718f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B718f56:{NFSU2_TR(0x718f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B718f57:{NFSU2_TR(0x718f57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B718f58:{NFSU2_TR(0x718f58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B718f59:{NFSU2_TR(0x718f59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B718f5a:{NFSU2_TR(0x718f5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718f5e:{NFSU2_TR(0x718f5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffceull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B718f62:{NFSU2_TR(0x718f62);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718f64:{NFSU2_TR(0x718f64);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718f68:{NFSU2_TR(0x718f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B718f6b:{NFSU2_TR(0x718f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718f6e:{NFSU2_TR(0x718f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B718f71:{NFSU2_TR(0x718f71);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718f73:{NFSU2_TR(0x718f73);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718f77:{NFSU2_TR(0x718f77);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718f79:{NFSU2_TR(0x718f79);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718f7d:{NFSU2_TR(0x718f7d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718f7f:{NFSU2_TR(0x718f7f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718f83:{NFSU2_TR(0x718f83);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718f85:{NFSU2_TR(0x718f85);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718f89:{NFSU2_TR(0x718f89);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B718f8d:{NFSU2_TR(0x718f8d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718f8f:{NFSU2_TR(0x718f8f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B718f93:{NFSU2_TR(0x718f93);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B718f95:{NFSU2_TR(0x718f95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+24))));
s4(u32(r4(R+0)),r4(U+0));
}
B718f97:{NFSU2_TR(0x718f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718f9a:{NFSU2_TR(0x718f9a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718f9e:{NFSU2_TR(0x718f9e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B718fa0:{NFSU2_TR(0x718fa0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B718fa4:{NFSU2_TR(0x718fa4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718fa6:{NFSU2_TR(0x718fa6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718faa:{NFSU2_TR(0x718faa);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718fac:{NFSU2_TR(0x718fac);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718fb0:{NFSU2_TR(0x718fb0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718fb2:{NFSU2_TR(0x718fb2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718fb6:{NFSU2_TR(0x718fb6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718fb8:{NFSU2_TR(0x718fb8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718fbc:{NFSU2_TR(0x718fbc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718fbe:{NFSU2_TR(0x718fbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718fc2:{NFSU2_TR(0x718fc2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718fc4:{NFSU2_TR(0x718fc4);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B718fc8:{NFSU2_TR(0x718fc8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B718fca:{NFSU2_TR(0x718fca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B718fcc:L718fcc:{c.instructions+=11;NFSU2_TR(0x718fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B718fd0:{NFSU2_TR(0x718fd0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B718fd2:{NFSU2_TR(0x718fd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B718fd3:{NFSU2_TR(0x718fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B718fd6:{NFSU2_TR(0x718fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B718fd9:{NFSU2_TR(0x718fd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B718fdc:{NFSU2_TR(0x718fdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B718fdf:{NFSU2_TR(0x718fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B718fe2:{NFSU2_TR(0x718fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B718fe5:{NFSU2_TR(0x718fe5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B718fe8:{NFSU2_TR(0x718fe8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7181f7u);}goto L7181f7;}}
}
B718fee:L718fee:{c.instructions+=7;NFSU2_TR(0x718fee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B718fef:{NFSU2_TR(0x718fef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B718ff0:{NFSU2_TR(0x718ff0);
__builtin_memmove((R+16),(R+20),4);
}
B718ff2:{NFSU2_TR(0x718ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B718ff3:{NFSU2_TR(0x718ff3);
__builtin_memmove((R+16),(R+12),4);
}
B718ff5:{NFSU2_TR(0x718ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B718ff6:{NFSU2_TR(0x718ff6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B718ff7:L718ff7:{c.instructions+=6;NFSU2_TR(0x718ff7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B718ff8:{NFSU2_TR(0x718ff8);
__builtin_memmove((R+12),(R+16),4);
}
B718ffa:{NFSU2_TR(0x718ffa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B718ffb:{NFSU2_TR(0x718ffb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B718ffc:{NFSU2_TR(0x718ffc);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B718fff:{NFSU2_TR(0x718fff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
TAIL_STATIC(0x719002u,719);
}
XIT:NFSU2_TR_EXIT(0x718,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
